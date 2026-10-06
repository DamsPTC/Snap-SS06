/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9ba10c; end: 10a9ba2db;  */

void FUN_10a9ba10c(long *param_1,long *param_2)

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
  plVar7 = param_2;
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
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
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
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9ba32c);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a9ba2dc; end: 10a9ba32b;  */

void FUN_10a9ba2dc(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9ba32c);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a9ba32c; end: 10a9ba45f;  */

void FUN_10a9ba32c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a9ba460(param_2,param_3);
  FUN_10a9ba4c8(param_5);
  FUN_10a27bc84(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a9b9d20(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  FUN_10a688c1c(&stack0xffffffffffffffa0);
  FUN_10a05ff7c(param_1,param_2,&lStack_70);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a9ba460; end: 10a9ba4c7;  */

void FUN_10a9ba460(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10a9ba654(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a9ba620;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10a9ba58c:
    if (lVar6 == 0) {
LAB_10a9ba5c0:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a9ba5c8;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a9ba5c0;
LAB_10a9ba5d0:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a9ba58c;
LAB_10a9ba5c8:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a9ba5d0;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a9ba2dc(1);
LAB_10a9ba620:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a9ba644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a9ba4c8; end: 10a9ba4eb;  */

void FUN_10a9ba4c8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10a9ba654(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a9ba620;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10a9ba58c:
    if (lVar5 == 0) {
LAB_10a9ba5c0:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a9ba5c8;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a9ba5c0;
LAB_10a9ba5d0:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a9ba58c;
LAB_10a9ba5c8:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a9ba5d0;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a9ba2dc(1);
LAB_10a9ba620:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a9ba644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a9ba4ec; end: 10a9ba653;  */

void FUN_10a9ba4ec(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a9ba654(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a9ba620;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a9ba58c:
    if (lVar3 == 0) {
LAB_10a9ba5c0:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a9ba5c8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a9ba5c0;
LAB_10a9ba5d0:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a9ba58c;
LAB_10a9ba5c8:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a9ba5d0;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a9ba2dc(1);
LAB_10a9ba620:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a9ba644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a9ba654; end: 10a9ba727;  */

long * FUN_10a9ba654(long *param_1,long param_2)

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



/* Entry: 10a9ba728; end: 10a9ba843;  */

void FUN_10a9ba728(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a9ba460(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a9ba4ec(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9ba844; end: 10a9ba973;  */

void FUN_10a9ba844(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a9b9a68(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)plVar7[0x2c];
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
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a9ba974; end: 10a9baa2b;  */

void FUN_10a9ba974(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b9a68(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9155f8(param_1,param_2,plVar4 + 0x2d);
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



/* Entry: 10a9baa2c; end: 10a9baae3;  */

void FUN_10a9baa2c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b9a68(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9155f8(param_1,param_2,plVar4 + 0x2f);
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



/* Entry: 10a9baae4; end: 10a9bab3b;  */

long FUN_10a9baae4(long param_1)

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



/* Entry: 10a9bab3c; end: 10a9bab4b;  */

void FUN_10a9bab3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9bab4c; end: 10a9bab6b;  */

void FUN_10a9bab4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34f58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9bab6c; end: 10a9bab7b;  */

void FUN_10a9bab6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9bab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9bab7c; end: 10a9bac23;  */

undefined8 * FUN_10a9bab7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34fa8;
  (**(code **)param_1[9])();
  FUN_10a9badc8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9bac24; end: 10a9bac87;  */

bool FUN_10a9bac24(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x62) {
    iVar1 = 0xe4e7d78;
    _memcmp(&UNK_10e4e7d78);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a9bac88; end: 10a9bada7;  */

void FUN_10a9bac88(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68581c);
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



/* Entry: 10a9bada8; end: 10a9badb7;  */

undefined1  [16] FUN_10a9bada8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x62;
  auVar1._0_8_ = &UNK_10e4e7d78;
  return auVar1;
}



/* Entry: 10a9badb8; end: 10a9badc7;  */

long * FUN_10a9badb8(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9bae48);
  (*pcVar2)();
}



/* Entry: 10a9badc8; end: 10a9bae47;  */

long * FUN_10a9badc8(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9bae48);
  (*pcVar2)();
}



/* Entry: 10a9bae48; end: 10a9baf73;  */

void FUN_10a9bae48(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iStack_48;
  undefined4 uStack_44;
  char cStack_31;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
        if (*(int *)(param_1 + 0x30) - 200U < 100) {
          FUN_109ffe064(&iStack_48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
          if (*(long *)(*(long *)(lVar5 + 0x178) + 0x30) != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar5 + 0x120,&iStack_48);
            FUN_10a10eaac(*(undefined8 *)(lVar5 + 0x178),&iStack_48);
          }
          if (cStack_31 < '\0') {
            __ZdlPv(CONCAT44(uStack_44,iStack_48));
          }
        }
        else if (*(long *)(*(long *)(lVar5 + 0x158) + 0x30) != 0) {
          iStack_48 = *(int *)(param_1 + 0x30);
          FUN_10a9baf74(*(long *)(lVar5 + 0x158),&iStack_48,param_1 + 0x18);
        }
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a9baf74; end: 10a9bb2a3;  */

void FUN_10a9baf74(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x25;
  long lVar14;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  long *plStack_68;
  
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  plStack_80 = (long *)0x0;
  fStack_70 = *(float *)(param_1 + 0x38);
  FUN_10a9ba10c(&lStack_90,*(undefined8 *)(param_1 + 0x20));
  plVar13 = *(long **)(param_1 + 0x28);
  plVar11 = plStack_80;
  if (plVar13 != (long *)0x0) {
    do {
      uVar8 = uStack_88;
      uVar5 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar5 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_88 != 0) {
        uVar7 = uStack_88 - 1;
        if ((uStack_88 & uVar7) == 0) {
          unaff_x25 = uVar10 & uVar7;
        }
        else {
          unaff_x25 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar12 = 0;
            if (uStack_88 != 0) {
              uVar12 = uVar10 / uStack_88;
            }
            unaff_x25 = uVar10 - uVar12 * uStack_88;
          }
        }
        plVar11 = *(long **)(lStack_90 + unaff_x25 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10a9bb098;
              uVar12 = plVar11[1];
              if (uVar12 != uVar10) break;
              if (plVar11[2] == uVar5) goto LAB_10a9bb1fc;
            }
            if ((uStack_88 & uVar7) == 0) {
              uVar12 = uVar12 & uVar7;
            }
            else if (uStack_88 <= uVar12) {
              uVar3 = 0;
              if (uStack_88 != 0) {
                uVar3 = uVar12 / uStack_88;
              }
              uVar12 = uVar12 - uVar3 * uStack_88;
            }
          } while (uVar12 == unaff_x25);
        }
      }
LAB_10a9bb098:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar10;
      lVar6 = plVar13[3];
      lVar14 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar14;
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar4 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar4 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar4;
      if ((uVar8 == 0) || (fStack_70 * (float)uVar8 < (float)(lStack_78 + 1))) {
        uVar5 = 1;
        if (2 < uVar8) {
          uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
        }
        uVar5 = uVar5 | uVar8 << 1;
        uVar8 = (ulong)((float)(lStack_78 + 1) / fStack_70);
        if (uVar5 <= uVar8) {
          uVar5 = uVar8;
        }
        FUN_10a9ba10c(&lStack_90,uVar5);
        uVar8 = uStack_88;
        if ((uStack_88 & uStack_88 - 1) == 0) {
          unaff_x25 = uStack_88 - 1 & uVar10;
        }
        else {
          unaff_x25 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar5 = 0;
            if (uStack_88 != 0) {
              uVar5 = uVar10 / uStack_88;
            }
            unaff_x25 = uVar10 - uVar5 * uStack_88;
          }
        }
      }
      plVar9 = *(long **)(lStack_90 + unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = (long)plStack_80;
        *(long ***)(lStack_90 + unaff_x25 * 8) = &plStack_80;
        plStack_80 = plVar11;
        if (*plVar11 != 0) {
          uVar5 = *(ulong *)(*plVar11 + 8);
          if ((uVar8 & uVar8 - 1) == 0) {
            uVar5 = uVar5 & uVar8 - 1;
          }
          else if (uVar8 <= uVar5) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar10 * uVar8;
          }
          *(long **)(lStack_90 + uVar5 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      lStack_78 = lStack_78 + 1;
LAB_10a9bb1fc:
      plVar13 = (long *)*plVar13;
      plVar11 = plStack_80;
    } while (plVar13 != (long *)0x0);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    lVar6 = param_1 + 0x18;
    FUN_10a9ba654(lVar6,plVar11[2]);
    if (lVar6 != 0) {
      FUN_10a25f92c(plVar11 + 4,param_2,param_3);
    }
  }
  FUN_10a9badc8(&lStack_90);
  return;
}



/* Entry: 10a9bb2a4; end: 10a9bb2cf;  */

undefined8 * FUN_10a9bb2a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a9bb2d0; end: 10a9bb3fb;  */

void FUN_10a9bb2d0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iStack_48;
  undefined4 uStack_44;
  char cStack_31;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
        if (*(int *)(param_1 + 0x30) - 200U < 100) {
          FUN_109ffe064(&iStack_48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
          if (*(long *)(*(long *)(lVar5 + 0x168) + 0x30) != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar5 + 0x108,&iStack_48);
            FUN_10a10eaac(*(undefined8 *)(lVar5 + 0x168),&iStack_48);
          }
          if (cStack_31 < '\0') {
            __ZdlPv(CONCAT44(uStack_44,iStack_48));
          }
        }
        else if (*(long *)(*(long *)(lVar5 + 0x158) + 0x30) != 0) {
          iStack_48 = *(int *)(param_1 + 0x30);
          FUN_10a9baf74(*(long *)(lVar5 + 0x158),&iStack_48,param_1 + 0x18);
        }
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a9bb3fc; end: 10a9bb437;  */

undefined8 * FUN_10a9bb3fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a9bb438; end: 10a9bb457;  */

void FUN_10a9bb438(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c35030;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9bb458; end: 10a9bb467;  */

void FUN_10a9bb458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9bb460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9bb468; end: 10a9bb4bf;  */

long FUN_10a9bb468(long param_1)

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



/* Entry: 10a9bb4c0; end: 10a9bb5f7;  */

void FUN_10a9bb4c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c35080;
  uVar3 = *param_2;
  (**(code **)(param_2[1] + 0x18))(apuStack_80,param_2 + 1);
  puVar1[4] = 0;
  puVar1[3] = &PTR_FUN_110c350d0;
  puVar1[5] = 0;
  puVar1[6] = uVar3;
  (*(code *)apuStack_80[0][3])(puVar1 + 7,apuStack_80);
  ppuVar2 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)puVar1[7])(puVar1 + 7);
  puVar1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 4);
  (*(code *)*apuStack_80[0])(apuStack_80);
  __ZNSt3__119__shared_weak_countD2Ev(puVar1);
  __ZdlPv();
  __Unwind_Resume();
  *ppuVar2 = &PTR_FUN_110c35080;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9bb5f8; end: 10a9bb607;  */

void FUN_10a9bb5f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35080;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9bb608; end: 10a9bb627;  */

void FUN_10a9bb608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35080;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9bb628; end: 10a9bb637;  */

void FUN_10a9bb628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9bb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9bb638; end: 10a9bb6cf;  */

undefined8 * FUN_10a9bb638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c350d0;
  (**(code **)param_1[4])();
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9bb6d0; end: 10a9bb6df;  */

undefined1  [16] FUN_10a9bb6d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x31;
  auVar1._0_8_ = &UNK_10e4b45d3;
  return auVar1;
}



/* Entry: 10a9bb6e0; end: 10a9bb75b;  */

void FUN_10a9bb6e0(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x100) == *(int *)(param_1 + 0x18)) {
    func_0x000107c2b054(auStack_38,"success");
    FUN_10a982428(lVar1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a9bb75c; end: 10a9bb78f;  */

void FUN_10a9bb75c(void)

{
  return;
}



/* Entry: 10a9bb790; end: 10a9bb80b;  */

void FUN_10a9bb790(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x100) == *(int *)(param_1 + 0x18)) {
    func_0x000107c2b054(auStack_38,"failure");
    FUN_10a982428(lVar1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a9bb80c; end: 10a9bb83f;  */

void FUN_10a9bb80c(void)

{
  return;
}



/* Entry: 10a9bb840; end: 10a9bb8b3;  */

void FUN_10a9bb840(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9bb8b4);
  (*pcVar1)();
}



/* Entry: 10a9bb8b4; end: 10a9bba5f;  */

void FUN_10a9bb8b4(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar11 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  lVar10 = (long)plVar9 - (long)plVar11;
  bVar1 = param_2 < (ulong)((lVar10 >> 3) * -0x5555555555555555);
  uVar12 = param_2 + (lVar10 >> 3) * 0x5555555555555555;
  if (bVar1 || uVar12 == 0) {
    if (bVar1) {
      while (plVar6 = plVar9, plVar6 != plVar11 + param_2 * 3) {
        plVar9 = plVar6 + -3;
        if (*plVar9 != 0) {
          plVar6[-2] = *plVar9;
          __ZdlPv();
        }
      }
      param_1[1] = (ulong)(plVar11 + param_2 * 3);
    }
    return;
  }
  if (uVar12 <= (ulong)(((long)(param_1[2] - (long)plVar9) >> 3) * -0x5555555555555555)) {
    uVar12 = (uVar12 * 0x18 - 0x18) / 0x18;
    _bzero(plVar9,uVar12 * 0x18 + 0x18);
    param_1[1] = (ulong)(plVar9 + uVar12 * 3 + 3);
    return;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar7 = (long)(param_1[2] - (long)plVar11) >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < param_2 || uVar8 - param_2 == 0) {
      uVar8 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 < 0xaaaaaaaaaaaaaab) {
      uVar2 = uVar8 * 0x18;
      __Znwm();
      lVar7 = ((uVar12 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(uVar2 + lVar10,lVar7);
      _memcpy(uVar2,plVar11,lVar10);
      *param_1 = uVar2;
      param_1[1] = uVar2 + lVar10 + lVar7;
      param_1[2] = uVar2 + uVar8 * 0x18;
      if (plVar11 == (long *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    FUN_10a9bba60();
  }
  func_0x000109ffded8();
  puVar3 = (ulong *)&UNK_10f687210;
  FUN_109ffde64();
  puVar5 = (ulong *)puVar3[1];
  if (param_2 <= puVar3[2] - (long)puVar5) {
    puVar4 = puVar5;
    if (param_2 != 0) {
      puVar4 = (ulong *)((long)puVar5 + param_2);
      _memset(puVar5,*param_3,param_2);
    }
    puVar3[1] = (ulong)puVar4;
    return;
  }
  plVar11 = (long *)*puVar3;
  lVar10 = (long)puVar5 - (long)plVar11;
  uVar12 = lVar10 + param_2;
  if ((long)uVar12 < 0) {
    FUN_10a0cd644();
    plVar9 = (long *)*puVar5;
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar6 = (long *)puVar5[1];
    plVar11 = plVar9;
    if (plVar6 != plVar9) {
      do {
        plVar11 = plVar6 + -3;
        if (*plVar11 != 0) {
          plVar6[-2] = *plVar11;
          __ZdlPv();
        }
        plVar6 = plVar11;
      } while (plVar11 != plVar9);
      plVar11 = (long *)*puVar5;
    }
    puVar5[1] = (ulong)plVar9;
  }
  else {
    uVar2 = puVar3[2] - (long)plVar11;
    uVar8 = uVar2 * 2;
    if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
      uVar8 = uVar12;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar8;
      __Znwm();
    }
    _memset(uVar12 + lVar10,*param_3,param_2);
    _memcpy(uVar12,plVar11,lVar10);
    *puVar3 = uVar12;
    puVar3[1] = uVar12 + lVar10 + param_2;
    puVar3[2] = uVar12 + uVar8;
    if (plVar11 == (long *)0x0) {
      return;
    }
  }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar11);
  return;
}



/* Entry: 10a9bba60; end: 10a9bba73;  */

void FUN_10a9bba60(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  puVar1 = (ulong *)&UNK_10f687210;
  FUN_109ffde64();
  puVar3 = (ulong *)puVar1[1];
  if (param_2 <= puVar1[2] - (long)puVar3) {
    puVar2 = puVar3;
    if (param_2 != 0) {
      puVar2 = (ulong *)((long)puVar3 + param_2);
      _memset(puVar3,*param_3,param_2);
    }
    puVar1[1] = (ulong)puVar2;
    return;
  }
  plVar8 = (long *)*puVar1;
  lVar9 = (long)puVar3 - (long)plVar8;
  uVar10 = lVar9 + param_2;
  if ((long)uVar10 < 0) {
    FUN_10a0cd644();
    plVar7 = (long *)*puVar3;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)puVar3[1];
    plVar8 = plVar7;
    if (plVar5 != plVar7) {
      do {
        plVar8 = plVar5 + -3;
        if (*plVar8 != 0) {
          plVar5[-2] = *plVar8;
          __ZdlPv();
        }
        plVar5 = plVar8;
      } while (plVar8 != plVar7);
      plVar8 = (long *)*puVar3;
    }
    puVar3[1] = (ulong)plVar7;
  }
  else {
    uVar4 = puVar1[2] - (long)plVar8;
    uVar6 = uVar4 * 2;
    if (uVar6 < uVar10 || uVar6 - uVar10 == 0) {
      uVar6 = uVar10;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6;
      __Znwm();
    }
    _memset(uVar10 + lVar9,*param_3,param_2);
    _memcpy(uVar10,plVar8,lVar9);
    *puVar1 = uVar10;
    puVar1[1] = uVar10 + lVar9 + param_2;
    puVar1[2] = uVar10 + uVar6;
    if (plVar8 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar8);
  return;
}



/* Entry: 10a9bba74; end: 10a9bbb7f;  */

void FUN_10a9bba74(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  puVar2 = (ulong *)param_1[1];
  if (param_2 <= param_1[2] - (long)puVar2) {
    puVar1 = puVar2;
    if (param_2 != 0) {
      puVar1 = (ulong *)((long)puVar2 + param_2);
      _memset(puVar2,*param_3,param_2);
    }
    param_1[1] = (ulong)puVar1;
    return;
  }
  plVar7 = (long *)*param_1;
  lVar8 = (long)puVar2 - (long)plVar7;
  uVar9 = lVar8 + param_2;
  if ((long)uVar9 < 0) {
    FUN_10a0cd644();
    plVar6 = (long *)*puVar2;
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)puVar2[1];
    plVar7 = plVar6;
    if (plVar4 != plVar6) {
      do {
        plVar7 = plVar4 + -3;
        if (*plVar7 != 0) {
          plVar4[-2] = *plVar7;
          __ZdlPv();
        }
        plVar4 = plVar7;
      } while (plVar7 != plVar6);
      plVar7 = (long *)*puVar2;
    }
    puVar2[1] = (ulong)plVar6;
  }
  else {
    uVar3 = param_1[2] - (long)plVar7;
    uVar5 = uVar3 * 2;
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
      uVar5 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5;
      __Znwm();
    }
    _memset(uVar9 + lVar8,*param_3,param_2);
    _memcpy(uVar9,plVar7,lVar8);
    *param_1 = uVar9;
    param_1[1] = uVar9 + lVar8 + param_2;
    param_1[2] = uVar9 + uVar5;
    if (plVar7 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a9bbb80; end: 10a9bbbf3;  */

void FUN_10a9bbb80(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a9bbbf4; end: 10a9bbfff;  */

void FUN_10a9bbbf4(long param_1)

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
    FUN_10a9a060c(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
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
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9bbf20);
        (*pcVar4)();
      }
      FUN_10a99fce4(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a99fe7c(param_1 + 0x60,&uStack_48);
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



/* Entry: 10a9bc000; end: 10a9bc1f7;  */

void FUN_10a9bc000(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a9bc154;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9bc154;
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
    if (plVar5 == (long *)0x0) goto LAB_10a9bc154;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9bc154;
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
LAB_10a9bc154:
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



/* Entry: 10a9bc1f8; end: 10a9bc657;  */

void FUN_10a9bc1f8(long param_1)

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
    FUN_10a99ffd0(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9bc544);
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



/* Entry: 10a9bc658; end: 10a9bc82b;  */

void FUN_10a9bc658(long param_1)

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



/* Entry: 10a9bc82c; end: 10a9bcc37;  */

void FUN_10a9bc82c(long param_1)

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
    FUN_10a9a35c0(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
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
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9bcb58);
        (*pcVar4)();
      }
      FUN_10a9a2c2c(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a9a2e30(param_1 + 0x60,&uStack_48);
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



/* Entry: 10a9bcc38; end: 10a9bce2f;  */

void FUN_10a9bcc38(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a9bcd8c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9bcd8c;
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
    if (plVar5 == (long *)0x0) goto LAB_10a9bcd8c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9bcd8c;
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
LAB_10a9bcd8c:
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



/* Entry: 10a9bce30; end: 10a9bd28f;  */

void FUN_10a9bce30(long param_1)

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
    FUN_10a9a2f84(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9bd17c);
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



/* Entry: 10a9bd290; end: 10a9bd463;  */

void FUN_10a9bd290(long param_1)

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



/* Entry: 10a9bd464; end: 10a9bd4e3;  */

undefined8 FUN_10a9bd464(void)

{
  return 4;
}



/* Entry: 10a9bd4e4; end: 10a9bd5c7;  */

void FUN_10a9bd4e4(undefined8 param_1)

{
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
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
  ppuStack_a0 = (undefined **)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0xb6;
  uStack_68 = CONCAT44(uStack_68._4_4_,0x16e);
  FUN_10a9bd5c8(param_1,&puStack_a8);
  puStack_c8 = &DAT_10f687d4f;
  puStack_d0 = &DAT_10f687d47;
  puStack_b8 = &DAT_10f687d73;
  puStack_c0 = &DAT_10f687d59;
  ppuStack_a0 = &puStack_d0;
  puStack_a8 = &UNK_10f687d3a;
  uStack_98 = 4;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9c9b4c();
  func_0x00010a9ca688(param_1);
  return;
}



/* Entry: 10a9bd5c8; end: 10a9bd69f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9bd660) */

undefined1  [16] FUN_10a9bd5c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6889cc,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9c9a50(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9bd6a0; end: 10a9bd703;  */

undefined8 * FUN_10a9bd6a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a9bd704; end: 10a9bdcaf;  */

/* WARNING: Possible PIC construction at 0x00010a9bdca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9bdca8) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd60) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd04) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd34) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd4c) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd50) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd58) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd68) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdda0) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddb8) */
/* WARNING: Removing unreachable block (ram,0x00010a9bdda8) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddb0) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddbc) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddc0) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddd0) */
/* WARNING: Removing unreachable block (ram,0x00010a9bddd8) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde08) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde10) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde28) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde30) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde44) */
/* WARNING: Removing unreachable block (ram,0x00010a9bde48) */

undefined8 * FUN_10a9bd704(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  code *pcStack_218;
  undefined **appuStack_210 [7];
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_190;
  long *plStack_188;
  char cStack_179;
  undefined1 auStack_f8 [8];
  undefined8 *apuStack_f0 [7];
  undefined1 auStack_b8 [72];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x50] = &PTR_FUN_110bbbb70;
  puVar3 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar3 + 0x1c);
  *param_1 = &PTR_FUN_110c35578;
  param_1[2] = &PTR_DAT_110c35638;
  param_1[7] = &PTR_DAT_110c35690;
  param_1[0x1c] = &PTR_DAT_110c356b0;
  param_1[0x50] = &PTR_DAT_110c356f0;
  puVar3 = param_1 + 0x25;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x20] = param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *puVar3 = 0;
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
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  param_1[0x3f] = 0x32aaaba7;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x32aaaba7;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  FUN_10a5ae998(param_1[0x1d],&PTR_DAT_110b9f988,param_2,param_1 + 0x1c);
  plVar4 = *(long **)(*(long *)(param_1[0x20] + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0xa8))();
  plStack_2b0 = (long *)0x0;
  plStack_2a8 = (long *)0x0;
  plVar5 = (long *)plVar4[1];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_2a8 = plVar5;
    if (plVar5 != (long *)0x0) {
      plStack_2b0 = (long *)*plVar4;
      if (plStack_2b0 != (long *)0x0) {
        (**(code **)(*plStack_2b0 + 0x10))(&uStack_190);
        goto LAB_10a9bd8a4;
      }
    }
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  *puVar6 = &PTR_DAT_1107eb8d8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  FUN_10a9c9800(&uStack_190,puVar6,&UNK_104c40320);
LAB_10a9bd8a4:
  FUN_10a9bd6a0(param_1 + 0x27,&uStack_190);
  if (plStack_188 != (long *)0x0) {
    plVar4 = plStack_188 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  plVar4 = *(long **)(*(long *)(param_1[0x20] + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  lVar8 = plVar4[1];
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_109d1a80c();
  lStack_260 = *plVar4;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puStack_2a0 = &UNK_1053a6a3c;
  ppuStack_298 = &PTR_DAT_110ae9180;
  pcStack_218 = FUN_10a2c2268;
  appuStack_210[0] = &PTR_DAT_110bbbbc8;
  puStack_1d0 = &UNK_1053a6a3c;
  ppuStack_1c8 = &PTR_DAT_110ae9180;
  puStack_258 = &UNK_1053a6a3c;
  ppuStack_250 = &PTR_DAT_110ae9180;
  uVar7 = 0x130;
  lStack_1d8 = lStack_260;
  __Znwm(0x130);
  FUN_10a2b5a50();
  FUN_10a2c13b8(auStack_f8,&pcStack_218);
  FUN_10a2c21b4(&uStack_190,uVar7,auStack_f8);
  if (lStack_70 != 0) {
    func_0x0001092b4274(&lStack_70);
  }
  func_0x0001092ba41c(auStack_b8);
  (*(code *)*apuStack_f0[0])(apuStack_f0);
  FUN_10a2b36cc(puVar3,&uStack_190);
  FUN_10a2c2280(&uStack_190);
  func_0x0001092ba41c(&lStack_1d8);
  (*(code *)*appuStack_210[0])(appuStack_210);
  func_0x0001092ba41c(&lStack_260);
  (*(code *)*ppuStack_298)(&ppuStack_298);
  lVar9 = param_1[0x20];
  func_0x000107c2b054(&uStack_190,&UNK_10f6889df);
  if (lVar9 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar9 + 0x8d8),&uStack_190,1);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(uStack_190);
  }
  lVar9 = param_1[0x20];
  func_0x000107c2b054(&uStack_190,&UNK_10f6889fa);
  if (lVar9 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar9 + 0x8d8),&uStack_190,0);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(uStack_190);
  }
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
  }
  plVar4 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    plVar5 = plStack_2a8 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a2c2a7c(&plStack_2b0);
  __ZNSt3__15mutexD1Ev(plVar4 + 0x2a);
  __ZNSt3__15mutexD1Ev(plVar4 + 0x22);
  FUN_10a9ca9d4(param_1 + 0x3a);
  func_0x00010a9ca88c(plVar4 + 0x16);
  func_0x00010a9ca744(plVar4 + 0x10);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  func_0x00010a9c97a8(plVar4 + 10);
  func_0x00010a2bfc7c(puVar3);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(plVar4);
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



/* Entry: 10a9bdcb0; end: 10a9bde67;  */

undefined8 * FUN_10a9bdcb0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_110c35578;
  param_1[2] = &PTR_DAT_110c35638;
  param_1[7] = &PTR_DAT_110c35690;
  param_1[0x1c] = &PTR_DAT_110c356b0;
  param_1[0x50] = &PTR_DAT_110c356f0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x3f);
  puVar4 = (undefined8 *)param_1[0x34];
  puVar6 = puVar4;
  if ((undefined8 *)param_1[0x35] != puVar4) {
    uVar2 = param_1[0x37];
    plVar7 = puVar4 + (uVar2 >> 8);
    lVar3 = *plVar7 + (uVar2 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[0x38] + uVar2 >> 8] + (param_1[0x38] + uVar2 & 0xff) * 0x10;
    puVar6 = (undefined8 *)param_1[0x35];
    if (lVar3 != lVar1) {
      do {
        func_0x00010a9caa88();
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar3 = *plVar7;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[0x34];
      puVar6 = (undefined8 *)param_1[0x35];
    }
  }
  param_1[0x38] = 0;
  lVar3 = (long)puVar6 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar4 = (undefined8 *)(param_1[0x34] + 8);
    param_1[0x34] = puVar4;
    lVar3 = param_1[0x35] - (long)puVar4;
  }
  if (uVar2 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a9bddc0;
    uVar5 = 0x100;
  }
  param_1[0x37] = uVar5;
LAB_10a9bddc0:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x3f);
  if (param_1[0x25] != 0) {
    FUN_10a2b6d0c(param_1[0x25] + 0x110);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x47);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3f);
  FUN_10a9ca9d4(param_1 + 0x3a);
  func_0x00010a9ca88c(param_1 + 0x33);
  func_0x00010a9ca744(param_1 + 0x2d);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  func_0x00010a9c97a8(param_1 + 0x27);
  func_0x00010a2bfc7c(param_1 + 0x25);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
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



/* Entry: 10a9bde68; end: 10a9bde93;  */

undefined8 * FUN_10a9bde68(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_110c35578;
  param_1[2] = &PTR_DAT_110c35638;
  param_1[7] = &PTR_DAT_110c35690;
  param_1[0x1c] = &PTR_DAT_110c356b0;
  param_1[0x50] = &PTR_DAT_110c356f0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x3f);
  puVar4 = (undefined8 *)param_1[0x34];
  puVar6 = puVar4;
  if ((undefined8 *)param_1[0x35] != puVar4) {
    uVar2 = param_1[0x37];
    plVar7 = puVar4 + (uVar2 >> 8);
    lVar3 = *plVar7 + (uVar2 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[0x38] + uVar2 >> 8] + (param_1[0x38] + uVar2 & 0xff) * 0x10;
    puVar6 = (undefined8 *)param_1[0x35];
    if (lVar3 != lVar1) {
      do {
        func_0x00010a9caa88();
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar3 = *plVar7;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[0x34];
      puVar6 = (undefined8 *)param_1[0x35];
    }
  }
  param_1[0x38] = 0;
  lVar3 = (long)puVar6 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar4 = (undefined8 *)(param_1[0x34] + 8);
    param_1[0x34] = puVar4;
    lVar3 = param_1[0x35] - (long)puVar4;
  }
  if (uVar2 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a9bddc0;
    uVar5 = 0x100;
  }
  param_1[0x37] = uVar5;
LAB_10a9bddc0:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x3f);
  if (param_1[0x25] != 0) {
    FUN_10a2b6d0c(param_1[0x25] + 0x110);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x47);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3f);
  FUN_10a9ca9d4(param_1 + 0x3a);
  func_0x00010a9ca88c(param_1 + 0x33);
  func_0x00010a9ca744(param_1 + 0x2d);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  func_0x00010a9c97a8(param_1 + 0x27);
  func_0x00010a2bfc7c(param_1 + 0x25);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
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



/* Entry: 10a9bde94; end: 10a9bdeef;  */

void FUN_10a9bde94(void)

{
  FUN_10a9bdcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9bdef0; end: 10a9bdf1f;  */

void FUN_10a9bdef0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a9bdcb0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a9bdf20; end: 10a9be103;  */

void FUN_10a9bdf20(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  lVar10 = param_1 + 0x108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(param_1 + 0x120) = *param_3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x160) = lVar10;
  puVar8 = *(undefined8 **)(param_1 + 0x170);
  puVar11 = *(undefined8 **)(param_1 + 0x178);
  puVar13 = puVar8;
  if (puVar11 != puVar8) {
    uVar4 = *(ulong *)(param_1 + 0x188);
    plVar12 = puVar8 + (uVar4 >> 8);
    puVar13 = (undefined8 *)(*plVar12 + (uVar4 & 0xff) * 0x10);
    uVar4 = *(long *)(param_1 + 400) + uVar4;
    puVar1 = (undefined8 *)(puVar8[uVar4 >> 8] + (uVar4 & 0xff) * 0x10);
    if (puVar13 != puVar1) {
      do {
        uVar9 = *puVar13;
        plVar5 = (long *)puVar13[1];
        if (plVar5 != (long *)0x0) {
          plVar3 = plVar5 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = *plVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_10a9bf35c(param_1,uVar9,plVar5);
        if (plVar5 != (long *)0x0) {
          plVar3 = plVar5 + 1;
          do {
            lVar10 = *plVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar10 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        puVar13 = puVar13 + 2;
        if ((long)puVar13 - *plVar12 == 0x1000) {
          plVar12 = plVar12 + 1;
          puVar13 = (undefined8 *)*plVar12;
        }
      } while (puVar13 != puVar1);
      puVar8 = *(undefined8 **)(param_1 + 0x170);
      puVar11 = *(undefined8 **)(param_1 + 0x178);
    }
    puVar13 = puVar11;
    if (puVar11 != puVar8) {
      uVar4 = *(ulong *)(param_1 + 0x188);
      plVar12 = puVar8 + (uVar4 >> 8);
      lVar10 = *plVar12 + (uVar4 & 0xff) * 0x10;
      uVar4 = *(long *)(param_1 + 400) + uVar4;
      lVar2 = puVar8[uVar4 >> 8] + (uVar4 & 0xff) * 0x10;
      if (lVar10 != lVar2) {
        do {
          FUN_10a9caa30();
          lVar10 = lVar10 + 0x10;
          if (lVar10 - *plVar12 == 0x1000) {
            plVar12 = plVar12 + 1;
            lVar10 = *plVar12;
          }
        } while (lVar10 != lVar2);
        puVar8 = *(undefined8 **)(param_1 + 0x170);
        puVar13 = *(undefined8 **)(param_1 + 0x178);
      }
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  lVar10 = (long)puVar13 - (long)puVar8;
  while (uVar4 = lVar10 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar8);
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x170) + 8);
    *(undefined8 **)(param_1 + 0x170) = puVar8;
    lVar10 = *(long *)(param_1 + 0x178) - (long)puVar8;
  }
  if (uVar4 == 1) {
    uVar9 = 0x80;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    uVar9 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x188) = uVar9;
  return;
}



/* Entry: 10a9be104; end: 10a9be11b;  */

void FUN_10a9be104(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x28);
  lVar11 = lVar4 + 0x108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(lVar4 + 0x120) = *param_3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(lVar4 + 0x160) = lVar11;
  puVar9 = *(undefined8 **)(lVar4 + 0x170);
  puVar12 = *(undefined8 **)(lVar4 + 0x178);
  puVar14 = puVar9;
  if (puVar12 != puVar9) {
    uVar5 = *(ulong *)(lVar4 + 0x188);
    plVar13 = puVar9 + (uVar5 >> 8);
    puVar14 = (undefined8 *)(*plVar13 + (uVar5 & 0xff) * 0x10);
    uVar5 = *(long *)(lVar4 + 400) + uVar5;
    puVar1 = (undefined8 *)(puVar9[uVar5 >> 8] + (uVar5 & 0xff) * 0x10);
    if (puVar14 != puVar1) {
      do {
        uVar10 = *puVar14;
        plVar6 = (long *)puVar14[1];
        if (plVar6 != (long *)0x0) {
          plVar3 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = *plVar3 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_10a9bf35c(lVar4,uVar10,plVar6);
        if (plVar6 != (long *)0x0) {
          plVar3 = plVar6 + 1;
          do {
            lVar11 = *plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = lVar11 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        puVar14 = puVar14 + 2;
        if ((long)puVar14 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          puVar14 = (undefined8 *)*plVar13;
        }
      } while (puVar14 != puVar1);
      puVar9 = *(undefined8 **)(lVar4 + 0x170);
      puVar12 = *(undefined8 **)(lVar4 + 0x178);
    }
    puVar14 = puVar12;
    if (puVar12 != puVar9) {
      uVar5 = *(ulong *)(lVar4 + 0x188);
      plVar13 = puVar9 + (uVar5 >> 8);
      lVar11 = *plVar13 + (uVar5 & 0xff) * 0x10;
      uVar5 = *(long *)(lVar4 + 400) + uVar5;
      lVar2 = puVar9[uVar5 >> 8] + (uVar5 & 0xff) * 0x10;
      if (lVar11 != lVar2) {
        do {
          FUN_10a9caa30();
          lVar11 = lVar11 + 0x10;
          if (lVar11 - *plVar13 == 0x1000) {
            plVar13 = plVar13 + 1;
            lVar11 = *plVar13;
          }
        } while (lVar11 != lVar2);
        puVar9 = *(undefined8 **)(lVar4 + 0x170);
        puVar14 = *(undefined8 **)(lVar4 + 0x178);
      }
    }
  }
  *(undefined8 *)(lVar4 + 400) = 0;
  lVar11 = (long)puVar14 - (long)puVar9;
  while (uVar5 = lVar11 >> 3, 2 < uVar5) {
    __ZdlPv(*puVar9);
    puVar9 = (undefined8 *)(*(long *)(lVar4 + 0x170) + 8);
    *(undefined8 **)(lVar4 + 0x170) = puVar9;
    lVar11 = *(long *)(lVar4 + 0x178) - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar10 = 0x80;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar10 = 0x100;
  }
  *(undefined8 *)(lVar4 + 0x188) = uVar10;
  return;
}



/* Entry: 10a9be11c; end: 10a9bea1b;  */

void FUN_10a9be11c(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar22;
  code *pcVar23;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 *puVar24;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined *unaff_x28;
  undefined4 *puVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    plVar7 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = plVar7 + 0x3f;
    __ZNSt3__15mutex4lockEv();
    puVar19 = (undefined8 *)plVar7[0x34];
    puVar14 = (undefined8 *)plVar7[0x35];
    puVar15 = puVar19;
    if (puVar14 != puVar19) {
      uVar12 = plVar7[0x37];
      unaff_x22 = puVar19 + (uVar12 >> 8);
      unaff_x27 = (undefined8 *)(*unaff_x22 + (uVar12 & 0xff) * 0x10);
      unaff_x23 = (undefined8 *)
                  (puVar19[plVar7[0x38] + uVar12 >> 8] + (plVar7[0x38] + uVar12 & 0xff) * 0x10);
      if (unaff_x27 != unaff_x23) {
        *(long **)((long)register0x00000008 + -0x138) = plVar7 + 0x3c;
        *(undefined8 **)((long)register0x00000008 + -0x130) = unaff_x23;
        unaff_d8 = 0x100000001;
        do {
          puVar8 = &UNK_10f688a4b;
          unaff_x26 = (long *)*unaff_x27;
          unaff_x21 = (long *)unaff_x27[1];
          *(long **)((long)register0x00000008 + -0x118) = unaff_x26;
          *(long **)((long)register0x00000008 + -0x110) = unaff_x21;
          if (unaff_x21 != (long *)0x0) {
            plVar22 = unaff_x21 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *plVar22 = *plVar22 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          __ZNSt3__15mutex4lockEv(plVar7 + 0x47);
          uVar12 = plVar7[0x3b];
          if (uVar12 != 0) {
            uVar11 = (ulong)*(int *)(*unaff_x26 + 0x38);
            uVar16 = uVar12 - 1;
            if ((uVar12 & uVar16) == 0) {
              uVar18 = uVar16 & uVar11;
            }
            else {
              uVar18 = uVar11;
              if (uVar12 <= uVar11) {
                uVar18 = 0;
                if (uVar12 != 0) {
                  uVar18 = uVar11 / uVar12;
                }
                uVar18 = uVar11 - uVar18 * uVar12;
              }
            }
            lVar17 = plVar7[0x3a];
            puVar19 = *(undefined8 **)(lVar17 + uVar18 * 8);
            if ((puVar19 != (undefined8 *)0x0) &&
               (unaff_x24 = (long *)*puVar19, unaff_x24 != (long *)0x0)) {
LAB_10a9be21c:
              uVar20 = unaff_x24[1];
              if (uVar20 == uVar11) {
                if ((int)unaff_x24[2] != *(int *)(*unaff_x26 + 0x38)) goto LAB_10a9be260;
                if ((uVar12 & uVar16) == 0) {
                  uVar11 = uVar16 & uVar11;
                }
                else if (uVar12 <= uVar11) {
                  uVar18 = 0;
                  if (uVar12 != 0) {
                    uVar18 = uVar11 / uVar12;
                  }
                  uVar11 = uVar11 - uVar18 * uVar12;
                }
                lVar9 = *unaff_x24;
                plVar22 = *(long **)(lVar17 + uVar11 * 8);
                do {
                  plVar21 = plVar22;
                  plVar22 = (long *)*plVar21;
                } while ((long *)*plVar21 != unaff_x24);
                if (plVar21 == *(long **)((long)register0x00000008 + -0x138)) {
LAB_10a9be2dc:
                  if (lVar9 == 0) {
LAB_10a9be310:
                    *(undefined8 *)(lVar17 + uVar11 * 8) = 0;
                    lVar9 = *unaff_x24;
                    goto LAB_10a9be318;
                  }
                  uVar18 = *(ulong *)(lVar9 + 8);
                  if ((uVar12 & uVar16) == 0) {
                    uVar20 = uVar18 & uVar16;
                  }
                  else {
                    uVar20 = uVar18;
                    if (uVar12 <= uVar18) {
                      uVar20 = 0;
                      if (uVar12 != 0) {
                        uVar20 = uVar18 / uVar12;
                      }
                      uVar20 = uVar18 - uVar20 * uVar12;
                    }
                  }
                  if (uVar20 != uVar11) goto LAB_10a9be310;
LAB_10a9be320:
                  if ((uVar12 & uVar16) == 0) {
                    uVar18 = uVar18 & uVar16;
                  }
                  else if (uVar12 <= uVar18) {
                    uVar16 = 0;
                    if (uVar12 != 0) {
                      uVar16 = uVar18 / uVar12;
                    }
                    uVar18 = uVar18 - uVar16 * uVar12;
                  }
                  if (uVar18 != uVar11) {
                    *(long **)(plVar7[0x3a] + uVar18 * 8) = plVar21;
                    lVar9 = *unaff_x24;
                  }
                }
                else {
                  uVar18 = plVar21[1];
                  if ((uVar12 & uVar16) == 0) {
                    uVar18 = uVar18 & uVar16;
                  }
                  else if (uVar12 <= uVar18) {
                    uVar20 = 0;
                    if (uVar12 != 0) {
                      uVar20 = uVar18 / uVar12;
                    }
                    uVar18 = uVar18 - uVar20 * uVar12;
                  }
                  if (uVar18 != uVar11) goto LAB_10a9be2dc;
LAB_10a9be318:
                  if (lVar9 != 0) {
                    uVar18 = *(ulong *)(lVar9 + 8);
                    goto LAB_10a9be320;
                  }
                }
                *plVar21 = lVar9;
                *unaff_x24 = 0;
                plVar7[0x3d] = plVar7[0x3d] + -1;
                func_0x00010a9caa30(unaff_x24 + 3);
                __ZdlPv(unaff_x24);
              }
              else {
                if ((uVar12 & uVar16) == 0) {
                  uVar20 = uVar20 & uVar16;
                }
                else if (uVar12 <= uVar20) {
                  uVar6 = 0;
                  if (uVar12 != 0) {
                    uVar6 = uVar20 / uVar12;
                  }
                  uVar20 = uVar20 - uVar6 * uVar12;
                }
                if (uVar20 == uVar18) goto LAB_10a9be260;
              }
            }
          }
LAB_10a9be378:
          __ZNSt3__15mutex6unlockEv(plVar7 + 0x47);
          lVar17 = plVar7[0x20];
          unaff_x20 = (long *)((long)register0x00000008 + -0xc0);
          func_0x000107c2b054();
          *(int *)((long)plVar7 + 0x27c) = *(int *)((long)plVar7 + 0x27c) + 1;
          if (lVar17 != 0) {
            unaff_x20 = *(long **)(lVar17 + 0x8d8);
            puVar8 = (undefined *)((long)register0x00000008 + -0xc0);
            FUN_10a76bd40();
          }
          if (*(char *)((long)register0x00000008 + -0xa9) < '\0') {
            unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
            __ZdlPv();
          }
          plVar22 = (long *)*unaff_x26;
          if ((char)plVar22[3] == '\x01') {
            unaff_x20 = (long *)unaff_x26[4];
            if (unaff_x20 == (long *)0x0) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                uVar10 = 0xd1;
                puVar8 = &UNK_10f687fc3;
LAB_10a9be628:
                unaff_x20 = (long *)0x0;
                func_0x00010ae06f08(0,1,&UNK_10f687d8a,&UNK_10f687f4d,uVar10,puVar8);
              }
            }
            else {
              FUN_10a25f92c(unaff_x20,(long)plVar22 + 0x1c,plVar22 + 4);
            }
          }
          else if (unaff_x26[3] == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              uVar10 = 0xd9;
              puVar8 = &UNK_10f687ff9;
              goto LAB_10a9be628;
            }
          }
          else {
            *(long **)((long)register0x00000008 + -0x128) = unaff_x21;
            *(long **)((long)register0x00000008 + -0x120) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            puVar24 = (undefined4 *)*plVar22;
            puVar25 = (undefined4 *)plVar22[1];
            if ((long)puVar25 - (long)puVar24 != 0) {
              unaff_x24 = (long *)(((long)puVar25 - (long)puVar24 >> 3) * -0x3333333333333333);
              if ((ulong)unaff_x24 >> 0x3c != 0) {
                FUN_10a9c8b08();
LAB_10a9be90c:
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x10a9be910);
                (*pcVar23)();
              }
              *(undefined1 **)((long)register0x00000008 + -0xa0) =
                   (undefined1 *)((long)register0x00000008 + -0x108);
              FUN_10a9c8b1c();
              lVar17 = (long)puVar8 * 2;
              puVar8 = *(undefined **)((long)register0x00000008 + -0x108);
              lVar9 = *(long *)((long)register0x00000008 + -0x100) - (long)puVar8;
              _memcpy((long)unaff_x24 - lVar9);
              uVar10 = *(undefined8 *)((long)register0x00000008 + -0x108);
              uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf8);
              *(long *)((long)register0x00000008 + -0x108) = (long)unaff_x24 - lVar9;
              *(long **)((long)register0x00000008 + -0x100) = unaff_x24;
              *(long **)((long)register0x00000008 + -0xf8) = unaff_x24 + lVar17;
              *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar10;
              *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar13;
              *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar10;
              *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar10;
              func_0x00010a9c8b50((undefined1 *)((long)register0x00000008 + -0xc0));
              puVar24 = (undefined4 *)*plVar22;
              puVar25 = (undefined4 *)plVar22[1];
            }
            for (; puVar24 != puVar25; puVar24 = puVar24 + 10) {
              bVar2 = *(byte *)(puVar24 + 8);
              uVar1 = *puVar24;
              unaff_x24 = (long *)0x58;
              __Znwm();
              unaff_x24[1] = 0;
              unaff_x24[2] = 0;
              *unaff_x24 = (long)&PTR_FUN_110c360c8;
              plVar22 = unaff_x24 + 3;
              *plVar22 = (long)&PTR_DAT_110c35998;
              unaff_x24[4] = 0;
              unaff_x24[5] = 0;
              *(undefined4 *)(unaff_x24 + 6) = uVar1;
              if (*(char *)((long)puVar24 + 0x1f) < '\0') {
                puVar8 = *(undefined **)(puVar24 + 2);
                func_0x000107c3192c(unaff_x24 + 7,puVar8,*(undefined8 *)(puVar24 + 4));
              }
              else {
                lVar9 = *(long *)(puVar24 + 4);
                lVar17 = *(long *)(puVar24 + 2);
                unaff_x24[9] = *(long *)(puVar24 + 6);
                unaff_x24[8] = lVar9;
                unaff_x24[7] = lVar17;
              }
              *(uint *)(unaff_x24 + 10) = (uint)bVar2;
              *(long **)((long)register0x00000008 + -0xf0) = plVar22;
              *(long **)((long)register0x00000008 + -0xe8) = unaff_x24;
              puVar19 = *(undefined8 **)((long)register0x00000008 + -0x100);
              if (puVar19 < *(undefined8 **)((long)register0x00000008 + -0xf8)) {
                *puVar19 = plVar22;
                puVar19[1] = unaff_x24;
                puVar19 = puVar19 + 2;
              }
              else {
                lVar17 = (long)puVar19 - *(long *)((long)register0x00000008 + -0x108);
                uVar12 = (lVar17 >> 4) + 1;
                if (uVar12 >> 0x3c != 0) {
                  FUN_10a9c8b08();
                  goto LAB_10a9be90c;
                }
                uVar16 = (long)*(undefined8 **)((long)register0x00000008 + -0xf8) -
                         *(long *)((long)register0x00000008 + -0x108);
                uVar11 = (long)uVar16 >> 3;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (0x7fffffffffffffef < uVar16) {
                  uVar11 = 0xfffffffffffffff;
                }
                *(undefined1 **)((long)register0x00000008 + -0xa0) =
                     (undefined1 *)((long)register0x00000008 + -0x108);
                FUN_10a9c8b1c();
                puVar14 = (undefined8 *)(uVar11 + lVar17);
                lVar17 = (long)puVar8 * 0x10;
                *puVar14 = plVar22;
                puVar14[1] = unaff_x24;
                puVar19 = puVar14 + 2;
                puVar8 = *(undefined **)((long)register0x00000008 + -0x108);
                unaff_x24 = (long *)((long)puVar14 -
                                    (*(long *)((long)register0x00000008 + -0x100) - (long)puVar8));
                _memcpy(unaff_x24);
                uVar10 = *(undefined8 *)((long)register0x00000008 + -0x108);
                uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf8);
                *(long **)((long)register0x00000008 + -0x108) = unaff_x24;
                *(undefined8 **)((long)register0x00000008 + -0x100) = puVar19;
                *(ulong *)((long)register0x00000008 + -0xf8) = uVar11 + lVar17;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar13;
                *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar10;
                func_0x00010a9c8b50((undefined1 *)((long)register0x00000008 + -0xc0));
              }
              *(undefined8 **)((long)register0x00000008 + -0x100) = puVar19;
            }
            unaff_x25 = (long *)unaff_x26[3];
            if ((unaff_x25 == (long *)0x0) || ((char)unaff_x25[8] != '\x02')) {
              unaff_x21 = *(long **)((long)register0x00000008 + -0x128);
              unaff_x22 = *(long **)((long)register0x00000008 + -0x120);
              unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x130);
              if ((unaff_x25 != (long *)0x0) && ((char)unaff_x25[8] == '\x01')) {
                pcVar23 = (code *)*unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
                FUN_10a9caf34((undefined1 *)((long)register0x00000008 + -0xc0),
                              *(long *)((long)register0x00000008 + -0x108),
                              *(long *)((long)register0x00000008 + -0x100),
                              *(long *)((long)register0x00000008 + -0x100) -
                              *(long *)((long)register0x00000008 + -0x108) >> 4);
                (*pcVar23)((undefined1 *)((long)register0x00000008 + -0xc0),unaff_x25);
                FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0xc0));
              }
            }
            else {
              plVar22 = unaff_x25;
              FUN_10a688b40();
              unaff_x21 = *(long **)((long)register0x00000008 + -0x128);
              unaff_x22 = *(long **)((long)register0x00000008 + -0x120);
              unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x130);
              if (plVar22 == (long *)0x0) {
                unaff_x24 = (long *)0x0;
                if (puVar8 != (undefined *)0x0) {
                  lVar17 = unaff_x25[1];
                  lVar9 = *unaff_x25;
                  *(long *)((long)register0x00000008 + -0xe8) = unaff_x25[1];
                  *(long *)((long)register0x00000008 + -0xf0) = lVar9;
                  if (lVar17 != 0) {
                    plVar22 = (long *)(lVar17 + 8);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar4) {
                        *plVar22 = *plVar22 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                  FUN_10a9caf34((undefined1 *)((long)register0x00000008 + -0xe0),
                                *(long *)((long)register0x00000008 + -0x108),
                                *(long *)((long)register0x00000008 + -0x100),
                                *(long *)((long)register0x00000008 + -0x100) -
                                *(long *)((long)register0x00000008 + -0x108) >> 4);
                  *(code **)((long)register0x00000008 + -0xc0) = FUN_10a9cafd8;
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c36368;
                  unaff_x25 = (long *)0x28;
                  __Znwm();
                  lVar17 = *(long *)((long)register0x00000008 + -0xf0);
                  unaff_x25[1] = *(long *)((long)register0x00000008 + -0xe8);
                  *unaff_x25 = lVar17;
                  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                  unaff_x25[3] = 0;
                  unaff_x25[4] = 0;
                  unaff_x25[2] = 0;
                  FUN_10a9caf34();
                  *(long **)((long)register0x00000008 + -0xb0) = unaff_x25;
                  FUN_10a4634ec(puVar8,(undefined1 *)((long)register0x00000008 + -0xc0));
                  (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                            ((undefined1 *)((long)register0x00000008 + -0xb8));
                  FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0xe0));
                  unaff_x24 = *(long **)((long)register0x00000008 + -0xe8);
                  if (unaff_x24 != (long *)0x0) {
                    plVar22 = unaff_x24 + 1;
                    do {
                      lVar17 = *plVar22;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar4) {
                        *plVar22 = lVar17 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*unaff_x24 + 0x10))(unaff_x24);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x24);
                    }
                  }
                }
              }
              else {
                *plVar22 = CONCAT44((int)((ulong)*plVar22 >> 0x20) + 1,(int)*plVar22 + 1);
                FUN_10a9cac5c(*unaff_x25,(undefined1 *)((long)register0x00000008 + -0x108));
                iVar5 = *(int *)((long)plVar22 + 4) + -1;
                *(int *)((long)plVar22 + 4) = iVar5;
                unaff_x26 = plVar22;
                if (iVar5 == 0) {
                  *(undefined4 *)plVar22 = 0;
                }
              }
            }
            unaff_x20 = (long *)((long)register0x00000008 + -0x108);
            FUN_10a9c8a54();
          }
          unaff_x28 = &UNK_10f688a4b;
          if (unaff_x21 != (long *)0x0) {
            plVar22 = unaff_x21 + 1;
            do {
              lVar17 = *plVar22;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *plVar22 = lVar17 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              unaff_x20 = unaff_x21;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          unaff_x27 = unaff_x27 + 2;
          if ((long)unaff_x27 - *unaff_x22 == 0x1000) {
            unaff_x22 = unaff_x22 + 1;
            unaff_x27 = (undefined8 *)*unaff_x22;
          }
        } while (unaff_x27 != unaff_x23);
        puVar19 = (undefined8 *)plVar7[0x34];
        puVar14 = (undefined8 *)plVar7[0x35];
      }
      puVar15 = puVar14;
      if (puVar14 != puVar19) {
        uVar12 = plVar7[0x37];
        unaff_x21 = puVar19 + (uVar12 >> 8);
        unaff_x20 = (long *)(*unaff_x21 + (uVar12 & 0xff) * 0x10);
        unaff_x22 = (long *)(puVar19[plVar7[0x38] + uVar12 >> 8] +
                            (plVar7[0x38] + uVar12 & 0xff) * 0x10);
        if (unaff_x20 != unaff_x22) {
          do {
            func_0x00010a9caa88();
            unaff_x20 = unaff_x20 + 2;
            if ((long)unaff_x20 - *unaff_x21 == 0x1000) {
              unaff_x21 = unaff_x21 + 1;
              unaff_x20 = (long *)*unaff_x21;
            }
          } while (unaff_x20 != unaff_x22);
          puVar19 = (undefined8 *)plVar7[0x34];
          puVar15 = (undefined8 *)plVar7[0x35];
        }
      }
    }
    plVar7[0x38] = 0;
    lVar17 = (long)puVar15 - (long)puVar19;
    while (uVar12 = lVar17 >> 3, 2 < uVar12) {
      unaff_x20 = (long *)*puVar19;
      __ZdlPv();
      puVar19 = (undefined8 *)(plVar7[0x34] + 8);
      plVar7[0x34] = (long)puVar19;
      lVar17 = plVar7[0x35] - (long)puVar19;
    }
    if (uVar12 == 1) {
      lVar17 = 0x80;
LAB_10a9be8bc:
      plVar7[0x37] = lVar17;
    }
    else if (uVar12 == 2) {
      lVar17 = 0x100;
      goto LAB_10a9be8bc;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar7 + 0x3f);
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
              ((undefined1 *)((long)register0x00000008 + -0xb8));
    FUN_10a9c8a54(unaff_x21 + 2);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xf0));
    FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0x108));
    func_0x00010a9caa88((undefined1 *)((long)register0x00000008 + -0x118));
    __ZNSt3__15mutex6unlockEv(plVar7 + 0x3f);
    unaff_x30 = FUN_10a9bea1c;
    plVar22 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    param_1 = plVar22 + -0x1c;
    unaff_x19 = plVar7;
  } while( true );
LAB_10a9be260:
  unaff_x24 = (long *)*unaff_x24;
  if (unaff_x24 == (long *)0x0) goto LAB_10a9be378;
  goto LAB_10a9be21c;
}



/* Entry: 10a9bea1c; end: 10a9bea73;  */

void FUN_10a9bea1c(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x19;
  long *plVar22;
  code *pcVar23;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 *puVar24;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 *puVar25;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    plVar7 = param_1 + -0x1c;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = param_1 + 0x23;
    __ZNSt3__15mutex4lockEv();
    puVar19 = (undefined8 *)param_1[0x18];
    puVar14 = (undefined8 *)param_1[0x19];
    puVar15 = puVar19;
    if (puVar14 != puVar19) {
      uVar12 = param_1[0x1b];
      unaff_x22 = puVar19 + (uVar12 >> 8);
      unaff_x27 = (undefined8 *)(*unaff_x22 + (uVar12 & 0xff) * 0x10);
      unaff_x23 = (undefined8 *)
                  (puVar19[param_1[0x1c] + uVar12 >> 8] + (param_1[0x1c] + uVar12 & 0xff) * 0x10);
      if (unaff_x27 != unaff_x23) {
        *(long **)((long)register0x00000008 + -0x138) = param_1 + 0x20;
        *(undefined8 **)((long)register0x00000008 + -0x130) = unaff_x23;
        unaff_d8 = 0x100000001;
        do {
          puVar8 = &UNK_10f688a4b;
          unaff_x26 = (long *)*unaff_x27;
          unaff_x21 = (long *)unaff_x27[1];
          *(long **)((long)register0x00000008 + -0x118) = unaff_x26;
          *(long **)((long)register0x00000008 + -0x110) = unaff_x21;
          if (unaff_x21 != (long *)0x0) {
            plVar22 = unaff_x21 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *plVar22 = *plVar22 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          __ZNSt3__15mutex4lockEv(param_1 + 0x2b);
          uVar12 = param_1[0x1f];
          if (uVar12 != 0) {
            uVar11 = (ulong)*(int *)(*unaff_x26 + 0x38);
            uVar16 = uVar12 - 1;
            if ((uVar12 & uVar16) == 0) {
              uVar18 = uVar16 & uVar11;
            }
            else {
              uVar18 = uVar11;
              if (uVar12 <= uVar11) {
                uVar18 = 0;
                if (uVar12 != 0) {
                  uVar18 = uVar11 / uVar12;
                }
                uVar18 = uVar11 - uVar18 * uVar12;
              }
            }
            lVar17 = param_1[0x1e];
            puVar19 = *(undefined8 **)(lVar17 + uVar18 * 8);
            if ((puVar19 != (undefined8 *)0x0) &&
               (unaff_x24 = (long *)*puVar19, unaff_x24 != (long *)0x0)) {
LAB_10a9be21c:
              uVar20 = unaff_x24[1];
              if (uVar20 == uVar11) {
                if ((int)unaff_x24[2] != *(int *)(*unaff_x26 + 0x38)) goto LAB_10a9be260;
                if ((uVar12 & uVar16) == 0) {
                  uVar11 = uVar16 & uVar11;
                }
                else if (uVar12 <= uVar11) {
                  uVar18 = 0;
                  if (uVar12 != 0) {
                    uVar18 = uVar11 / uVar12;
                  }
                  uVar11 = uVar11 - uVar18 * uVar12;
                }
                lVar9 = *unaff_x24;
                plVar22 = *(long **)(lVar17 + uVar11 * 8);
                do {
                  plVar21 = plVar22;
                  plVar22 = (long *)*plVar21;
                } while ((long *)*plVar21 != unaff_x24);
                if (plVar21 == *(long **)((long)register0x00000008 + -0x138)) {
LAB_10a9be2dc:
                  if (lVar9 == 0) {
LAB_10a9be310:
                    *(undefined8 *)(lVar17 + uVar11 * 8) = 0;
                    lVar9 = *unaff_x24;
                    goto LAB_10a9be318;
                  }
                  uVar18 = *(ulong *)(lVar9 + 8);
                  if ((uVar12 & uVar16) == 0) {
                    uVar20 = uVar18 & uVar16;
                  }
                  else {
                    uVar20 = uVar18;
                    if (uVar12 <= uVar18) {
                      uVar20 = 0;
                      if (uVar12 != 0) {
                        uVar20 = uVar18 / uVar12;
                      }
                      uVar20 = uVar18 - uVar20 * uVar12;
                    }
                  }
                  if (uVar20 != uVar11) goto LAB_10a9be310;
LAB_10a9be320:
                  if ((uVar12 & uVar16) == 0) {
                    uVar18 = uVar18 & uVar16;
                  }
                  else if (uVar12 <= uVar18) {
                    uVar16 = 0;
                    if (uVar12 != 0) {
                      uVar16 = uVar18 / uVar12;
                    }
                    uVar18 = uVar18 - uVar16 * uVar12;
                  }
                  if (uVar18 != uVar11) {
                    *(long **)(param_1[0x1e] + uVar18 * 8) = plVar21;
                    lVar9 = *unaff_x24;
                  }
                }
                else {
                  uVar18 = plVar21[1];
                  if ((uVar12 & uVar16) == 0) {
                    uVar18 = uVar18 & uVar16;
                  }
                  else if (uVar12 <= uVar18) {
                    uVar20 = 0;
                    if (uVar12 != 0) {
                      uVar20 = uVar18 / uVar12;
                    }
                    uVar18 = uVar18 - uVar20 * uVar12;
                  }
                  if (uVar18 != uVar11) goto LAB_10a9be2dc;
LAB_10a9be318:
                  if (lVar9 != 0) {
                    uVar18 = *(ulong *)(lVar9 + 8);
                    goto LAB_10a9be320;
                  }
                }
                *plVar21 = lVar9;
                *unaff_x24 = 0;
                param_1[0x21] = param_1[0x21] + -1;
                func_0x00010a9caa30(unaff_x24 + 3);
                __ZdlPv(unaff_x24);
              }
              else {
                if ((uVar12 & uVar16) == 0) {
                  uVar20 = uVar20 & uVar16;
                }
                else if (uVar12 <= uVar20) {
                  uVar6 = 0;
                  if (uVar12 != 0) {
                    uVar6 = uVar20 / uVar12;
                  }
                  uVar20 = uVar20 - uVar6 * uVar12;
                }
                if (uVar20 == uVar18) goto LAB_10a9be260;
              }
            }
          }
LAB_10a9be378:
          __ZNSt3__15mutex6unlockEv(param_1 + 0x2b);
          lVar17 = param_1[4];
          unaff_x20 = (long *)((long)register0x00000008 + -0xc0);
          func_0x000107c2b054();
          *(int *)((long)param_1 + 0x19c) = *(int *)((long)param_1 + 0x19c) + 1;
          if (lVar17 != 0) {
            unaff_x20 = *(long **)(lVar17 + 0x8d8);
            puVar8 = (undefined *)((long)register0x00000008 + -0xc0);
            FUN_10a76bd40();
          }
          if (*(char *)((long)register0x00000008 + -0xa9) < '\0') {
            unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
            __ZdlPv();
          }
          plVar22 = (long *)*unaff_x26;
          if ((char)plVar22[3] == '\x01') {
            unaff_x20 = (long *)unaff_x26[4];
            if (unaff_x20 == (long *)0x0) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                uVar10 = 0xd1;
                puVar8 = &UNK_10f687fc3;
LAB_10a9be628:
                unaff_x20 = (long *)0x0;
                func_0x00010ae06f08(0,1,&UNK_10f687d8a,&UNK_10f687f4d,uVar10,puVar8);
              }
            }
            else {
              FUN_10a25f92c(unaff_x20,(long)plVar22 + 0x1c,plVar22 + 4);
            }
          }
          else if (unaff_x26[3] == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              uVar10 = 0xd9;
              puVar8 = &UNK_10f687ff9;
              goto LAB_10a9be628;
            }
          }
          else {
            *(long **)((long)register0x00000008 + -0x128) = unaff_x21;
            *(long **)((long)register0x00000008 + -0x120) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            puVar24 = (undefined4 *)*plVar22;
            puVar25 = (undefined4 *)plVar22[1];
            if ((long)puVar25 - (long)puVar24 != 0) {
              unaff_x24 = (long *)(((long)puVar25 - (long)puVar24 >> 3) * -0x3333333333333333);
              if ((ulong)unaff_x24 >> 0x3c != 0) {
                FUN_10a9c8b08();
LAB_10a9be90c:
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x10a9be910);
                (*pcVar23)();
              }
              *(undefined1 **)((long)register0x00000008 + -0xa0) =
                   (undefined1 *)((long)register0x00000008 + -0x108);
              FUN_10a9c8b1c();
              lVar17 = (long)puVar8 * 2;
              puVar8 = *(undefined **)((long)register0x00000008 + -0x108);
              lVar9 = *(long *)((long)register0x00000008 + -0x100) - (long)puVar8;
              _memcpy((long)unaff_x24 - lVar9);
              uVar10 = *(undefined8 *)((long)register0x00000008 + -0x108);
              uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf8);
              *(long *)((long)register0x00000008 + -0x108) = (long)unaff_x24 - lVar9;
              *(long **)((long)register0x00000008 + -0x100) = unaff_x24;
              *(long **)((long)register0x00000008 + -0xf8) = unaff_x24 + lVar17;
              *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar10;
              *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar13;
              *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar10;
              *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar10;
              func_0x00010a9c8b50((undefined1 *)((long)register0x00000008 + -0xc0));
              puVar24 = (undefined4 *)*plVar22;
              puVar25 = (undefined4 *)plVar22[1];
            }
            for (; puVar24 != puVar25; puVar24 = puVar24 + 10) {
              bVar2 = *(byte *)(puVar24 + 8);
              uVar1 = *puVar24;
              unaff_x24 = (long *)0x58;
              __Znwm();
              unaff_x24[1] = 0;
              unaff_x24[2] = 0;
              *unaff_x24 = (long)&PTR_FUN_110c360c8;
              plVar22 = unaff_x24 + 3;
              *plVar22 = (long)&PTR_DAT_110c35998;
              unaff_x24[4] = 0;
              unaff_x24[5] = 0;
              *(undefined4 *)(unaff_x24 + 6) = uVar1;
              if (*(char *)((long)puVar24 + 0x1f) < '\0') {
                puVar8 = *(undefined **)(puVar24 + 2);
                func_0x000107c3192c(unaff_x24 + 7,puVar8,*(undefined8 *)(puVar24 + 4));
              }
              else {
                lVar9 = *(long *)(puVar24 + 4);
                lVar17 = *(long *)(puVar24 + 2);
                unaff_x24[9] = *(long *)(puVar24 + 6);
                unaff_x24[8] = lVar9;
                unaff_x24[7] = lVar17;
              }
              *(uint *)(unaff_x24 + 10) = (uint)bVar2;
              *(long **)((long)register0x00000008 + -0xf0) = plVar22;
              *(long **)((long)register0x00000008 + -0xe8) = unaff_x24;
              puVar19 = *(undefined8 **)((long)register0x00000008 + -0x100);
              if (puVar19 < *(undefined8 **)((long)register0x00000008 + -0xf8)) {
                *puVar19 = plVar22;
                puVar19[1] = unaff_x24;
                puVar19 = puVar19 + 2;
              }
              else {
                lVar17 = (long)puVar19 - *(long *)((long)register0x00000008 + -0x108);
                uVar12 = (lVar17 >> 4) + 1;
                if (uVar12 >> 0x3c != 0) {
                  FUN_10a9c8b08();
                  goto LAB_10a9be90c;
                }
                uVar16 = (long)*(undefined8 **)((long)register0x00000008 + -0xf8) -
                         *(long *)((long)register0x00000008 + -0x108);
                uVar11 = (long)uVar16 >> 3;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (0x7fffffffffffffef < uVar16) {
                  uVar11 = 0xfffffffffffffff;
                }
                *(undefined1 **)((long)register0x00000008 + -0xa0) =
                     (undefined1 *)((long)register0x00000008 + -0x108);
                FUN_10a9c8b1c();
                puVar14 = (undefined8 *)(uVar11 + lVar17);
                lVar17 = (long)puVar8 * 0x10;
                *puVar14 = plVar22;
                puVar14[1] = unaff_x24;
                puVar19 = puVar14 + 2;
                puVar8 = *(undefined **)((long)register0x00000008 + -0x108);
                unaff_x24 = (long *)((long)puVar14 -
                                    (*(long *)((long)register0x00000008 + -0x100) - (long)puVar8));
                _memcpy(unaff_x24);
                uVar10 = *(undefined8 *)((long)register0x00000008 + -0x108);
                uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf8);
                *(long **)((long)register0x00000008 + -0x108) = unaff_x24;
                *(undefined8 **)((long)register0x00000008 + -0x100) = puVar19;
                *(ulong *)((long)register0x00000008 + -0xf8) = uVar11 + lVar17;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar13;
                *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar10;
                func_0x00010a9c8b50((undefined1 *)((long)register0x00000008 + -0xc0));
              }
              *(undefined8 **)((long)register0x00000008 + -0x100) = puVar19;
            }
            unaff_x25 = (long *)unaff_x26[3];
            if ((unaff_x25 == (long *)0x0) || ((char)unaff_x25[8] != '\x02')) {
              unaff_x21 = *(long **)((long)register0x00000008 + -0x128);
              unaff_x22 = *(long **)((long)register0x00000008 + -0x120);
              unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x130);
              if ((unaff_x25 != (long *)0x0) && ((char)unaff_x25[8] == '\x01')) {
                pcVar23 = (code *)*unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
                FUN_10a9caf34((undefined1 *)((long)register0x00000008 + -0xc0),
                              *(long *)((long)register0x00000008 + -0x108),
                              *(long *)((long)register0x00000008 + -0x100),
                              *(long *)((long)register0x00000008 + -0x100) -
                              *(long *)((long)register0x00000008 + -0x108) >> 4);
                (*pcVar23)((undefined1 *)((long)register0x00000008 + -0xc0),unaff_x25);
                FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0xc0));
              }
            }
            else {
              plVar22 = unaff_x25;
              FUN_10a688b40();
              unaff_x21 = *(long **)((long)register0x00000008 + -0x128);
              unaff_x22 = *(long **)((long)register0x00000008 + -0x120);
              unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x130);
              if (plVar22 == (long *)0x0) {
                unaff_x24 = (long *)0x0;
                if (puVar8 != (undefined *)0x0) {
                  lVar17 = unaff_x25[1];
                  lVar9 = *unaff_x25;
                  *(long *)((long)register0x00000008 + -0xe8) = unaff_x25[1];
                  *(long *)((long)register0x00000008 + -0xf0) = lVar9;
                  if (lVar17 != 0) {
                    plVar22 = (long *)(lVar17 + 8);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar4) {
                        *plVar22 = *plVar22 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                  FUN_10a9caf34((undefined1 *)((long)register0x00000008 + -0xe0),
                                *(long *)((long)register0x00000008 + -0x108),
                                *(long *)((long)register0x00000008 + -0x100),
                                *(long *)((long)register0x00000008 + -0x100) -
                                *(long *)((long)register0x00000008 + -0x108) >> 4);
                  *(code **)((long)register0x00000008 + -0xc0) = FUN_10a9cafd8;
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c36368;
                  unaff_x25 = (long *)0x28;
                  __Znwm();
                  lVar17 = *(long *)((long)register0x00000008 + -0xf0);
                  unaff_x25[1] = *(long *)((long)register0x00000008 + -0xe8);
                  *unaff_x25 = lVar17;
                  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                  unaff_x25[3] = 0;
                  unaff_x25[4] = 0;
                  unaff_x25[2] = 0;
                  FUN_10a9caf34();
                  *(long **)((long)register0x00000008 + -0xb0) = unaff_x25;
                  FUN_10a4634ec(puVar8,(undefined1 *)((long)register0x00000008 + -0xc0));
                  (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                            ((undefined1 *)((long)register0x00000008 + -0xb8));
                  FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0xe0));
                  unaff_x24 = *(long **)((long)register0x00000008 + -0xe8);
                  if (unaff_x24 != (long *)0x0) {
                    plVar22 = unaff_x24 + 1;
                    do {
                      lVar17 = *plVar22;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar4) {
                        *plVar22 = lVar17 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*unaff_x24 + 0x10))(unaff_x24);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x24);
                    }
                  }
                }
              }
              else {
                *plVar22 = CONCAT44((int)((ulong)*plVar22 >> 0x20) + 1,(int)*plVar22 + 1);
                FUN_10a9cac5c(*unaff_x25,(undefined1 *)((long)register0x00000008 + -0x108));
                iVar5 = *(int *)((long)plVar22 + 4) + -1;
                *(int *)((long)plVar22 + 4) = iVar5;
                unaff_x26 = plVar22;
                if (iVar5 == 0) {
                  *(undefined4 *)plVar22 = 0;
                }
              }
            }
            unaff_x20 = (long *)((long)register0x00000008 + -0x108);
            FUN_10a9c8a54();
          }
          unaff_x28 = &UNK_10f688a4b;
          if (unaff_x21 != (long *)0x0) {
            plVar22 = unaff_x21 + 1;
            do {
              lVar17 = *plVar22;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *plVar22 = lVar17 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              unaff_x20 = unaff_x21;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          unaff_x27 = unaff_x27 + 2;
          if ((long)unaff_x27 - *unaff_x22 == 0x1000) {
            unaff_x22 = unaff_x22 + 1;
            unaff_x27 = (undefined8 *)*unaff_x22;
          }
        } while (unaff_x27 != unaff_x23);
        puVar19 = (undefined8 *)param_1[0x18];
        puVar14 = (undefined8 *)param_1[0x19];
      }
      puVar15 = puVar14;
      if (puVar14 != puVar19) {
        uVar12 = param_1[0x1b];
        unaff_x21 = puVar19 + (uVar12 >> 8);
        unaff_x20 = (long *)(*unaff_x21 + (uVar12 & 0xff) * 0x10);
        unaff_x22 = (long *)(puVar19[param_1[0x1c] + uVar12 >> 8] +
                            (param_1[0x1c] + uVar12 & 0xff) * 0x10);
        if (unaff_x20 != unaff_x22) {
          do {
            func_0x00010a9caa88();
            unaff_x20 = unaff_x20 + 2;
            if ((long)unaff_x20 - *unaff_x21 == 0x1000) {
              unaff_x21 = unaff_x21 + 1;
              unaff_x20 = (long *)*unaff_x21;
            }
          } while (unaff_x20 != unaff_x22);
          puVar19 = (undefined8 *)param_1[0x18];
          puVar15 = (undefined8 *)param_1[0x19];
        }
      }
    }
    param_1[0x1c] = 0;
    lVar17 = (long)puVar15 - (long)puVar19;
    while (uVar12 = lVar17 >> 3, 2 < uVar12) {
      unaff_x20 = (long *)*puVar19;
      __ZdlPv();
      puVar19 = (undefined8 *)(param_1[0x18] + 8);
      param_1[0x18] = (long)puVar19;
      lVar17 = param_1[0x19] - (long)puVar19;
    }
    if (uVar12 == 1) {
      lVar17 = 0x80;
LAB_10a9be8bc:
      param_1[0x1b] = lVar17;
    }
    else if (uVar12 == 2) {
      lVar17 = 0x100;
      goto LAB_10a9be8bc;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x23);
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
              ((undefined1 *)((long)register0x00000008 + -0xb8));
    FUN_10a9c8a54(unaff_x21 + 2);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xf0));
    FUN_10a9c8a54((undefined1 *)((long)register0x00000008 + -0x108));
    func_0x00010a9caa88((undefined1 *)((long)register0x00000008 + -0x118));
    __ZNSt3__15mutex6unlockEv(param_1 + 0x23);
    unaff_x30 = FUN_10a9bea1c;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = plVar7;
  } while( true );
LAB_10a9be260:
  unaff_x24 = (long *)*unaff_x24;
  if (unaff_x24 == (long *)0x0) goto LAB_10a9be378;
  goto LAB_10a9be21c;
}



/* Entry: 10a9bea74; end: 10a9bf35b;  */

void FUN_10a9bea74(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  if ((param_2 == 0) || (*(long *)(param_2 + 0x100) == 0)) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(0,1,&UNK_10f687d8a,&UNK_10f687e9b,0x83,&UNK_10f687f23,&stack0x00000000);
    return;
  }
  plVar10 = (long *)0x58;
  lVar17 = param_2;
  __Znwm();
  plVar19 = plVar10 + 1;
  *plVar19 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c36028;
  plVar21 = plVar10 + 3;
  plVar10[4] = 0;
  *plVar21 = 0;
  plVar10[10] = 0;
  plVar10[9] = 0;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plVar10[8] = 0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 10) = 0xffffffff;
  iVar5 = *(int *)(param_1 + 1);
  lVar11 = (long)iVar5;
  if (iVar5 != 0) {
    if (iVar5 < 0) {
      FUN_10a9c88e4();
LAB_10a9bf2bc:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9bf2c0);
      (*pcVar9)();
    }
    plStack_68 = plVar21;
    FUN_10a9c88f8();
    lVar1 = lVar11 + (plVar10[3] - plVar10[4]);
    func_0x00010a9c893c(plVar10[3],plVar10[4],lVar1);
    plStack_88 = (long *)plVar10[3];
    plVar10[3] = lVar1;
    plVar10[4] = lVar11;
    lStack_70 = plVar10[5];
    plVar10[5] = lVar11 + lVar17 * 0x28;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    func_0x00010a9c89bc(&plStack_88);
    if (*(int *)(param_1 + 1) != 0) {
      puVar30 = (undefined4 *)*param_1;
      puVar27 = puVar30 + (long)*(int *)(param_1 + 1) * 6;
      do {
        uVar4 = *puVar30;
        plVar14 = (long *)&UNK_10f687d39;
        if (*(long **)(puVar30 + 2) != (long *)0x0) {
          plVar14 = *(long **)(puVar30 + 2);
        }
        func_0x000107c2b054(&plStack_88);
        uVar6 = (undefined1)puVar30[4];
        if ((long)plStack_78 < 0) {
          plVar14 = plStack_88;
          func_0x000107c3192c(&plStack_a8,plStack_88,plStack_80);
          uStack_90 = uVar6;
          if ((long)plStack_78 < 0) {
            __ZdlPv(plStack_88);
          }
        }
        else {
          plStack_a0 = plStack_80;
          plStack_a8 = plStack_88;
          plStack_98 = plStack_78;
          uStack_90 = uVar6;
        }
        puVar2 = (undefined4 *)plVar10[4];
        if (puVar2 < (undefined4 *)plVar10[5]) {
          *puVar2 = uVar4;
          *(long **)(puVar2 + 6) = plStack_98;
          *(long **)(puVar2 + 4) = plStack_a0;
          *(long **)(puVar2 + 2) = plStack_a8;
          plStack_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
          plStack_a8 = (long *)0x0;
          *(undefined1 *)(puVar2 + 8) = uStack_90;
          plVar10[4] = (long)(puVar2 + 10);
        }
        else {
          lVar17 = (long)puVar2 - *plVar21;
          uVar20 = (lVar17 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar20) {
            FUN_10a9c88e4();
            goto LAB_10a9bf2bc;
          }
          lVar11 = plVar10[5] - *plVar21 >> 3;
          uVar23 = lVar11 * -0x6666666666666666;
          if (uVar23 < uVar20 || uVar23 - uVar20 == 0) {
            uVar23 = uVar20;
          }
          if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
            uVar23 = 0x666666666666666;
          }
          plStack_68 = plVar21;
          FUN_10a9c88f8();
          puVar2 = (undefined4 *)(uVar23 + lVar17);
          *puVar2 = uVar4;
          *(long **)(puVar2 + 6) = plStack_98;
          *(long **)(puVar2 + 4) = plStack_a0;
          *(long **)(puVar2 + 2) = plStack_a8;
          plStack_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
          plStack_a8 = (long *)0x0;
          *(undefined1 *)(puVar2 + 8) = uStack_90;
          lVar17 = (long)puVar2 + (plVar10[3] - plVar10[4]);
          func_0x00010a9c893c(plVar10[3],plVar10[4],lVar17);
          plStack_88 = (long *)plVar10[3];
          plVar10[3] = lVar17;
          plVar10[4] = (long)(puVar2 + 10);
          lStack_70 = plVar10[5];
          plVar10[5] = uVar23 + (long)plVar14 * 0x28;
          plStack_80 = plStack_88;
          plStack_78 = plStack_88;
          func_0x00010a9c89bc(&plStack_88);
          plVar10[4] = (long)(puVar2 + 10);
          if ((long)plStack_98 < 0) {
            __ZdlPv(plStack_a8);
          }
        }
        puVar30 = puVar30 + 6;
      } while (puVar30 != puVar27);
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 2);
  *(bool *)(plVar10 + 6) = *(int *)((long)param_1 + 0xc) != 0;
  *(undefined4 *)((long)plVar10 + 0x34) = uVar4;
  plVar14 = (long *)&UNK_10f687d39;
  if ((long *)param_1[3] != (long *)0x0) {
    plVar14 = (long *)param_1[3];
  }
  func_0x000107c2b054(&plStack_88);
  if (*(char *)((long)plVar10 + 0x4f) < '\0') {
    __ZdlPv(plVar10[7]);
  }
  plVar10[8] = (long)plStack_80;
  plVar10[7] = (long)plStack_88;
  plVar10[9] = (long)plStack_78;
  *(undefined4 *)(plVar10 + 10) = *(undefined4 *)(param_1 + 4);
  plVar12 = (long *)0x40;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110c362d8;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar8) {
      *plVar19 = *plVar19 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  plVar12[3] = (long)plVar21;
  plVar12[4] = (long)plVar10;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar8) {
      *plVar19 = *plVar19 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  plVar12[5] = param_2;
  plVar12[6] = param_4;
  plVar12[7] = param_3;
  do {
    lVar17 = *plVar19;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar8) {
      *plVar19 = lVar17 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  plStack_88 = plVar12 + 3;
  plStack_80 = plVar12;
  __ZNSt3__15mutex4lockEv(param_2 + 0x1f8);
  puVar18 = *(undefined8 **)(param_2 + 0x1a0);
  puVar31 = *(undefined8 **)(param_2 + 0x1a8);
  uVar23 = (long)puVar31 - (long)puVar18;
  uVar20 = 0;
  if (uVar23 != 0) {
    uVar20 = ((long)puVar31 - (long)puVar18) * 0x20 - 1;
  }
  uVar3 = *(ulong *)(param_2 + 0x1b8);
  lVar17 = *(long *)(param_2 + 0x1c0);
  uVar22 = lVar17 + uVar3;
  plVar19 = plVar12 + 3;
  if (uVar20 != uVar22) goto LAB_10a9bf1dc;
  if (uVar3 < 0x100) {
    puVar15 = *(undefined8 **)(param_2 + 0x1b0);
    puVar28 = *(undefined8 **)(param_2 + 0x198);
    if (uVar23 < (ulong)((long)puVar15 - (long)puVar28)) {
      uVar25 = 0x1000;
      __Znwm();
      if (puVar15 == puVar31) {
        if (puVar18 == puVar28) {
          lVar17 = (long)puVar15 - (long)puVar18 >> 2;
          if (puVar31 == puVar18) {
            lVar17 = 1;
          }
          lVar11 = lVar17;
          FUN_10a9cab1c();
          puVar18 = (undefined8 *)(lVar11 + (lVar17 * 2 + 6U & 0xfffffffffffffff8));
          lVar17 = *(long *)(param_2 + 0x1a8) - (long)*(undefined8 **)(param_2 + 0x1a0);
          puVar31 = puVar18;
          if (lVar17 != 0) {
            puVar31 = (undefined8 *)((long)puVar18 + lVar17);
            puVar15 = *(undefined8 **)(param_2 + 0x1a0);
            puVar28 = puVar18;
            do {
              *puVar28 = *puVar15;
              lVar17 = lVar17 + -8;
              puVar15 = puVar15 + 1;
              puVar28 = puVar28 + 1;
            } while (lVar17 != 0);
          }
          lVar17 = *(long *)(param_2 + 0x198);
          *(long *)(param_2 + 0x198) = lVar11;
          *(undefined8 **)(param_2 + 0x1a0) = puVar18;
          *(undefined8 **)(param_2 + 0x1a8) = puVar31;
          *(long *)(param_2 + 0x1b0) = lVar11 + (long)plVar14 * 8;
          if (lVar17 != 0) {
            __ZdlPv(lVar17);
            puVar18 = *(undefined8 **)(param_2 + 0x1a0);
          }
        }
        puVar18[-1] = uVar25;
        puVar15 = *(undefined8 **)(param_2 + 0x1a0);
        puVar31 = *(undefined8 **)(param_2 + 0x1a8);
        puVar18 = puVar15 + -1;
        *(undefined8 **)(param_2 + 0x1a0) = puVar18;
        goto LAB_10a9bee34;
      }
      *puVar31 = uVar25;
      goto LAB_10a9bf1c0;
    }
    plVar19 = (long *)((long)puVar15 - (long)puVar28 >> 2);
    if (puVar15 == puVar28) {
      plVar19 = (long *)0x1;
    }
    FUN_10a9cab1c();
    lVar17 = 0x1000;
    plVar16 = plVar14;
    __Znwm();
    plVar21 = (long *)((long)plVar19 + uVar23);
    plVar12 = plVar19 + (long)plVar14;
    plVar13 = plVar19;
    if (uVar23 == (long)plVar14 * 8) {
      if ((long)uVar23 < 1) {
        plVar21 = (long *)((long)plVar21 - (long)plVar19 >> 2);
        if (puVar31 == puVar18) {
          plVar21 = (long *)0x1;
        }
        plVar13 = plVar21;
        FUN_10a9cab1c();
        plVar21 = plVar13 + ((ulong)plVar21 >> 2);
        plVar12 = plVar13 + (long)plVar16;
        if (plVar19 != (long *)0x0) {
          __ZdlPv(plVar19);
        }
      }
      else {
        lVar11 = ((long)plVar21 - (long)plVar19 >> 3) + 1;
        plVar21 = plVar21 + -((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
      }
    }
    plVar19 = plVar21 + 1;
    *plVar21 = lVar17;
    plVar14 = *(long **)(param_2 + 0x1a8);
    plVar26 = plVar13;
    if (plVar14 != *(long **)(param_2 + 0x1a0)) {
      do {
        plVar13 = plVar26;
        plVar29 = plVar21;
        if (plVar21 == plVar26) {
          if (plVar19 < plVar12) {
            lVar17 = ((long)plVar12 - (long)plVar19 >> 3) + 1;
            lVar11 = (long)plVar19 - (long)plVar26;
            lVar1 = (long)plVar19 - (long)plVar26;
            plVar19 = plVar19 + ((ulong)(lVar17 - (lVar17 >> 0x3f)) >> 1);
            plVar29 = (long *)((long)plVar19 - lVar11);
            if (lVar1 != 0) {
              _memmove(plVar29,plVar21,lVar1);
              plVar16 = plVar21;
            }
          }
          else {
            plVar29 = (long *)((long)plVar12 - (long)plVar26 >> 2);
            if ((long)plVar12 - (long)plVar26 == 0) {
              plVar29 = (long *)0x1;
            }
            plVar13 = plVar29;
            FUN_10a9cab1c();
            plVar29 = (long *)((long)plVar13 + ((long)plVar29 * 2 + 6U & 0xfffffffffffffff8));
            lVar17 = (long)plVar19 - (long)plVar26;
            plVar19 = plVar29;
            if (lVar17 != 0) {
              plVar19 = (long *)((long)plVar29 + lVar17);
              plVar12 = plVar29;
              do {
                *plVar12 = *plVar21;
                lVar17 = lVar17 + -8;
                plVar12 = plVar12 + 1;
                plVar21 = plVar21 + 1;
              } while (lVar17 != 0);
            }
            plVar12 = plVar13 + (long)plVar16;
            if (plVar26 != (long *)0x0) {
              __ZdlPv(plVar26);
            }
          }
        }
        plVar14 = plVar14 + -1;
        plVar21 = plVar29 + -1;
        *plVar21 = *plVar14;
        plVar26 = plVar13;
      } while (plVar14 != *(long **)(param_2 + 0x1a0));
    }
    lVar17 = *(long *)(param_2 + 0x198);
    *(long **)(param_2 + 0x198) = plVar13;
    *(long **)(param_2 + 0x1a0) = plVar21;
    *(long **)(param_2 + 0x1a8) = plVar19;
    *(long **)(param_2 + 0x1b0) = plVar12;
    if (lVar17 != 0) {
      __ZdlPv();
    }
  }
  else {
    *(ulong *)(param_2 + 0x1b8) = uVar3 - 0x100;
    puVar15 = puVar18 + 1;
LAB_10a9bee34:
    uVar25 = *puVar18;
    *(undefined8 **)(param_2 + 0x1a0) = puVar15;
    if (puVar31 == *(undefined8 **)(param_2 + 0x1b0)) {
      puVar18 = *(undefined8 **)(param_2 + 0x198);
      if (puVar15 < puVar18 || (long)puVar15 - (long)puVar18 == 0) {
        uVar20 = (long)puVar31 - (long)puVar18 >> 2;
        if ((long)puVar31 - (long)puVar18 == 0) {
          uVar20 = 1;
        }
        uVar23 = uVar20;
        FUN_10a9cab1c();
        puVar18 = (undefined8 *)(uVar23 + (uVar20 >> 2) * 8);
        lVar17 = *(long *)(param_2 + 0x1a8) - (long)*(undefined8 **)(param_2 + 0x1a0);
        puVar31 = puVar18;
        if (lVar17 != 0) {
          puVar31 = (undefined8 *)((long)puVar18 + lVar17);
          puVar28 = *(undefined8 **)(param_2 + 0x1a0);
          puVar24 = puVar18;
          do {
            *puVar24 = *puVar28;
            lVar17 = lVar17 + -8;
            puVar28 = puVar28 + 1;
            puVar24 = puVar24 + 1;
          } while (lVar17 != 0);
        }
        lVar17 = *(long *)(param_2 + 0x198);
        *(ulong *)(param_2 + 0x198) = uVar23;
        *(undefined8 **)(param_2 + 0x1a0) = puVar18;
        *(undefined8 **)(param_2 + 0x1a8) = puVar31;
        *(ulong *)(param_2 + 0x1b0) = uVar23 + (long)puVar15 * 8;
        if (lVar17 != 0) {
          __ZdlPv(lVar17);
          puVar31 = *(undefined8 **)(param_2 + 0x1a8);
        }
      }
      else {
        lVar17 = (((long)puVar15 - (long)puVar18 >> 3) + 1) / 2;
        puVar18 = puVar15 + -lVar17;
        lVar11 = (long)puVar31 - (long)puVar15;
        if (lVar11 != 0) {
          _memmove(puVar18,puVar15,lVar11);
          puVar15 = *(undefined8 **)(param_2 + 0x1a0);
        }
        puVar31 = (undefined8 *)((long)puVar18 + lVar11);
        *(undefined8 **)(param_2 + 0x1a0) = puVar15 + -lVar17;
        *(undefined8 **)(param_2 + 0x1a8) = puVar31;
      }
    }
    *puVar31 = uVar25;
LAB_10a9bf1c0:
    *(long *)(param_2 + 0x1a8) = *(long *)(param_2 + 0x1a8) + 8;
  }
  puVar18 = *(undefined8 **)(param_2 + 0x1a0);
  lVar17 = *(long *)(param_2 + 0x1c0);
  uVar22 = lVar17 + *(long *)(param_2 + 0x1b8);
  plVar19 = plStack_88;
  plVar12 = plStack_80;
LAB_10a9bf1dc:
  plVar21 = (long *)(puVar18[uVar22 >> 8] + (uVar22 & 0xff) * 0x10);
  *plVar21 = (long)plVar19;
  plVar21[1] = (long)plVar12;
  if (plVar12 == (long *)0x0) {
    *(long *)(param_2 + 0x1c0) = lVar17 + 1;
    __ZNSt3__15mutex6unlockEv(param_2 + 0x1f8);
  }
  else {
    plVar19 = plVar12 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(long *)(param_2 + 0x1c0) = *(long *)(param_2 + 0x1c0) + 1;
    __ZNSt3__15mutex6unlockEv(param_2 + 0x1f8);
    do {
      lVar17 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar19 = plVar10 + 1;
    do {
      lVar17 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10a9bf35c; end: 10a9bf9f7;  */

void FUN_10a9bf35c(long param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  ulong unaff_x26;
  float fVar19;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  lVar8 = param_2[6];
  *(undefined4 *)(lVar8 + 4) = *(undefined4 *)(param_1 + 0x120);
  plVar7 = (long *)(param_1 + 0x148);
  if (*(char *)(param_1 + 0x15f) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  func_0x000107c2c4dc(lVar8 + 8,plVar7);
  pcStack_88 = FUN_10a9bea74;
  lStack_78 = param_2[10];
  plVar7 = (long *)param_2[7];
  lStack_70 = param_2[8];
  plVar16 = (long *)param_2[6];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)0x28;
  plStack_a8 = plVar16;
  plStack_a0 = plVar7;
  lStack_80 = param_1;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c36078;
  plVar5[4] = 0;
  plStack_98 = plVar5 + 3;
  *plStack_98 = 0;
  *plStack_98 = *plVar16;
  plVar9 = plVar16 + 1;
  if (*(char *)((long)plVar16 + 0x1f) < '\0') {
    plVar9 = (long *)*plVar9;
  }
  plVar5[4] = (long)plVar9;
  plStack_90 = plVar5;
  if (plVar7 != (long *)0x0) {
    plVar16 = plVar7 + 1;
    do {
      lVar8 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  func_0x000104c58880(&lStack_c0,(param_2[4] - param_2[3] >> 3) * -0x5555555555555555);
  plVar16 = (long *)param_2[4];
  for (plVar7 = (long *)param_2[3]; plVar7 != plVar16; plVar7 = plVar7 + 3) {
    plStack_68 = (long *)*plVar7;
    if (-1 < *(char *)((long)plVar7 + 0x17)) {
      plStack_68 = plVar7;
    }
    FUN_10a87f360(&lStack_c0,&plStack_68);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x238);
  uVar12 = (long)*(int *)(param_1 + 0x1c8) + 1;
  iVar17 = (int)uVar12;
  *(int *)(param_1 + 0x1c8) = iVar17;
  plVar7 = (long *)(param_1 + 0x1d0);
  uVar18 = *(ulong *)(param_1 + 0x1d8);
  if (uVar18 != 0) {
    uVar10 = uVar18 - 1;
    if ((uVar18 & uVar10) == 0) {
      unaff_x26 = uVar10 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar18 <= uVar12) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar12 / uVar18;
        }
        unaff_x26 = uVar12 - uVar13 * uVar18;
      }
    }
    plVar16 = *(long **)(*plVar7 + unaff_x26 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10a9bf558;
          uVar13 = plVar16[1];
          if (uVar13 != uVar12) break;
          if (*(int *)(plVar16 + 2) == iVar17) goto LAB_10a9bf804;
        }
        if ((uVar18 & uVar10) == 0) {
          uVar13 = uVar13 & uVar10;
        }
        else if (uVar18 <= uVar13) {
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar11 = uVar13 / uVar18;
          }
          uVar13 = uVar13 - uVar11 * uVar18;
        }
      } while (uVar13 == unaff_x26);
    }
  }
LAB_10a9bf558:
  plVar16 = (long *)0x28;
  __Znwm();
  lStack_58 = 1;
  *plVar16 = 0;
  plVar16[1] = uVar12;
  *(int *)(plVar16 + 2) = iVar17;
  plVar16[3] = (long)param_2;
  plVar16[4] = param_3;
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  fVar19 = (float)(*(long *)(param_1 + 0x1e8) + 1);
  plStack_68 = plVar16;
  plStack_60 = plVar7;
  if ((uVar18 == 0) || (*(float *)(param_1 + 0x1f0) * (float)uVar18 < fVar19)) {
    uVar10 = 1;
    if (2 < uVar18) {
      uVar10 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar10 = uVar10 | uVar18 << 1;
    uVar18 = (ulong)(fVar19 / *(float *)(param_1 + 0x1f0));
    if (uVar10 <= uVar18) {
      uVar10 = uVar18;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar18 = *(ulong *)(param_1 + 0x1d8);
    if (uVar18 < uVar10) {
LAB_10a9bf618:
      if (uVar10 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9bf974);
        (*pcVar4)();
      }
      lVar8 = uVar10 << 3;
      __Znwm();
      lVar6 = *plVar7;
      *plVar7 = lVar8;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      uVar18 = 0;
      *(ulong *)(param_1 + 0x1d8) = uVar10;
      do {
        *(undefined8 *)(*plVar7 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar10 != uVar18);
      plVar9 = *(long **)(param_1 + 0x1e0);
      uVar18 = uVar10;
      if (plVar9 != (long *)0x0) {
        uVar13 = plVar9[1];
        uVar11 = uVar10 - 1;
        if ((uVar10 & uVar11) == 0) {
          uVar13 = uVar13 & uVar11;
        }
        else if (uVar10 <= uVar13) {
          uVar15 = 0;
          if (uVar10 != 0) {
            uVar15 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar15 * uVar10;
        }
        *(long *)(*plVar7 + uVar13 * 8) = param_1 + 0x1e0;
        plVar5 = (long *)*plVar9;
        while (plVar5 != (long *)0x0) {
          uVar15 = plVar5[1];
          if ((uVar10 & uVar11) == 0) {
            uVar15 = uVar15 & uVar11;
          }
          else if (uVar10 <= uVar15) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar3 * uVar10;
          }
          plVar14 = plVar5;
          if (uVar15 != uVar13) {
            lVar8 = *plVar7;
            if (*(long *)(lVar8 + uVar15 * 8) == 0) {
              *(long **)(lVar8 + uVar15 * 8) = plVar9;
              uVar13 = uVar15;
            }
            else {
              *plVar9 = *plVar5;
              *plVar5 = **(undefined8 **)(lVar8 + uVar15 * 8);
              **(long **)(lVar8 + uVar15 * 8) = (long)plVar5;
              plVar14 = plVar9;
            }
          }
          plVar9 = plVar14;
          plVar5 = (long *)*plVar14;
        }
      }
    }
    else if (uVar10 < uVar18) {
      uVar13 = (ulong)((float)*(ulong *)(param_1 + 0x1e8) / *(float *)(param_1 + 0x1f0));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      if (uVar10 < uVar18) {
        if (uVar10 != 0) goto LAB_10a9bf618;
        lVar8 = *plVar7;
        *plVar7 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(param_1 + 0x1d8);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x26 = uVar18 - 1 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar18 <= uVar12) {
        uVar10 = 0;
        if (uVar18 != 0) {
          uVar10 = uVar12 / uVar18;
        }
        unaff_x26 = uVar12 - uVar10 * uVar18;
      }
    }
  }
  lVar8 = *plVar7;
  plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar16 = *(long *)(param_1 + 0x1e0);
    *(long **)(param_1 + 0x1e0) = plVar16;
    *(long *)(lVar8 + unaff_x26 * 8) = param_1 + 0x1e0;
    if (*plVar16 == 0) goto LAB_10a9bf7f8;
    uVar12 = *(ulong *)(*plVar16 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar12 = uVar12 & uVar18 - 1;
    }
    else if (uVar18 <= uVar12) {
      uVar10 = 0;
      if (uVar18 != 0) {
        uVar10 = uVar12 / uVar18;
      }
      uVar12 = uVar12 - uVar10 * uVar18;
    }
    plVar9 = (long *)(*plVar7 + uVar12 * 8);
  }
  else {
    *plVar16 = *plVar9;
  }
  *plVar9 = (long)plVar16;
LAB_10a9bf7f8:
  *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
LAB_10a9bf804:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x238);
  lVar8 = *(long *)(param_1 + 0x100);
  func_0x000107c2b054(&plStack_68,&UNK_10f688a20);
  *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
  if (lVar8 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar8 + 0x8d8),&plStack_68);
  }
  if (lStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  lVar8 = *(long *)(param_1 + 0x100);
  func_0x000107c2b054(&plStack_68,&UNK_10f6889fa);
  if (lVar8 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar8 + 0x8d8),&plStack_68,1);
  }
  if (lStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_2 = (long *)*param_2;
  }
  plVar7 = (long *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x11f) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  (**(code **)(**(long **)(param_1 + 0x138) + 0x60))
            (*(long **)(param_1 + 0x138),param_2,lStack_c0,(ulong)(lStack_b8 - lStack_c0) >> 3,
             plVar7,*(undefined4 *)(param_1 + 0x1c8),plStack_98,&pcStack_88);
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar16 = plStack_90 + 1;
    do {
      lVar8 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a9bf9f8; end: 10a9bfa67;  */

undefined1  [16] FUN_10a9bf9f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &UNK_10f688a77;
  return auVar1;
}



/* Entry: 10a9bfa68; end: 10a9bfcfb;  */

void FUN_10a9bfa68(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f65539d,6);
  func_0x000109887da8(appuStack_c8,&UNK_10f688a77,6);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c359e0;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
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
    ppuStack_b0 = &PTR_DAT_110c359e0;
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
    FUN_10a0605c4(param_1,&DAT_10f3aa288,FUN_10a9cb038,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f688032,FUN_10a9cb15c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f688039,FUN_10a9cb23c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f688a77,6);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9bfce0);
  (*pcVar6)();
}



/* Entry: 10a9bfcfc; end: 10a9bfd93;  */

undefined1  [16] FUN_10a9bfcfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f688a7e;
  return auVar1;
}



/* Entry: 10a9bfd94; end: 10a9bfeab;  */

void FUN_10a9bfd94(undefined8 param_1)

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
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9bfeac(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f688048;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9cb3f4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68804e;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9cb56c(uVar1,&puStack_a8);
  FUN_10a9cb6a0(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9bfeac; end: 10a9bff83;  */

/* WARNING: Removing unreachable block (ram,0x00010a9bff44) */

undefined1  [16] FUN_10a9bfeac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688a7e,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9cb2f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9bff84; end: 10a9c001b;  */

undefined1  [16] FUN_10a9bff84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f688a96;
  return auVar1;
}



/* Entry: 10a9c001c; end: 10a9c0393;  */

void FUN_10a9c001c(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  func_0x000109887da8(appuStack_c8,&UNK_10f688a96,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c36ab8;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c36ab8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c0374;
    FUN_10a054dac(param_1,&UNK_10f68805a,FUN_10a9cb814,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c0374;
    FUN_10a054dac(param_1,&UNK_10f68806e,FUN_10a9cbb74,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c0374;
    FUN_10a054dac(param_1,&UNK_10f688081,FUN_10a9cbe6c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c0374;
    FUN_10a054dac(param_1,&UNK_10f688095,FUN_10a9cc164,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6880a5,FUN_10a9cc3a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6880b3,FUN_10a9cc4e4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f688a96,0x18);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9c0374:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c0378);
  (*pcVar6)();
}



/* Entry: 10a9c0394; end: 10a9c087f;  */

undefined8 *
FUN_10a9c0394(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c35720;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    puVar10 = (undefined8 *)*param_4;
    func_0x000107c3192c(param_1 + 0xf,puVar10,param_4[1]);
  }
  else {
    uVar19 = param_4[1];
    uVar18 = *param_4;
    param_1[0x11] = param_4[2];
    param_1[0x10] = uVar19;
    param_1[0xf] = uVar18;
    puVar10 = param_2;
  }
  *(undefined1 *)(param_1 + 0x12) = *param_5;
  puVar3 = (undefined8 *)param_2[1];
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar3; param_2 = param_2 + 2) {
    plVar8 = (long *)*param_2;
    (**(code **)(*plVar8 + 0x48))();
    iVar7 = (int)plVar8;
    puVar11 = puVar10;
    if (iVar7 == 0) {
      uVar18 = *param_2;
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar12 = (undefined8 *)param_1[4];
      if (puVar12 < (undefined8 *)param_1[5]) {
        *puVar12 = uVar18;
        puVar12[1] = lVar9;
        puVar12 = puVar12 + 2;
      }
      else {
        lVar17 = param_1[3];
        lVar15 = (long)puVar12 - lVar17;
        uVar1 = (lVar15 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a9c8bdc();
          goto LAB_10a9c07b8;
        }
        uVar13 = (long)param_1[5] - lVar17;
        uVar14 = (long)uVar13 >> 3;
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar14 = 0xfffffffffffffff;
        }
        FUN_10a9c8bf0();
        puVar11 = (undefined8 *)param_1[3];
        lVar17 = param_1[4];
        puVar16 = (undefined8 *)(uVar14 + lVar15);
        *puVar16 = uVar18;
        puVar16[1] = lVar9;
        puVar12 = puVar16 + 2;
        lVar17 = (long)puVar16 - (lVar17 - (long)puVar11);
        _memcpy(lVar17);
        lVar9 = param_1[3];
        param_1[3] = lVar17;
        param_1[4] = puVar12;
        param_1[5] = uVar14 + (long)puVar10 * 0x10;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[4] = puVar12;
    }
    else if (iVar7 == 1) {
      uVar18 = *param_2;
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar12 = (undefined8 *)param_1[7];
      if (puVar12 < (undefined8 *)param_1[8]) {
        *puVar12 = uVar18;
        puVar12[1] = lVar9;
        puVar12 = puVar12 + 2;
      }
      else {
        lVar17 = (long)puVar12 - param_1[6];
        uVar1 = (lVar17 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a9c8c24();
          goto LAB_10a9c07b8;
        }
        uVar13 = (long)param_1[8] - param_1[6];
        uVar14 = (long)uVar13 >> 3;
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar14 = 0xfffffffffffffff;
        }
        FUN_10a9c8c38();
        puVar11 = (undefined8 *)param_1[6];
        lVar15 = param_1[7];
        puVar16 = (undefined8 *)(uVar14 + lVar17);
        *puVar16 = uVar18;
        puVar16[1] = lVar9;
        puVar12 = puVar16 + 2;
        lVar17 = (long)puVar16 - (lVar15 - (long)puVar11);
        _memcpy(lVar17);
        lVar9 = param_1[6];
        param_1[6] = lVar17;
        param_1[7] = puVar12;
        param_1[8] = uVar14 + (long)puVar10 * 0x10;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[7] = puVar12;
    }
    else if (iVar7 == 2) {
      uVar18 = *param_2;
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar12 = (undefined8 *)param_1[10];
      if (puVar12 < (undefined8 *)param_1[0xb]) {
        *puVar12 = uVar18;
        puVar12[1] = lVar9;
        puVar12 = puVar12 + 2;
      }
      else {
        lVar17 = param_1[9];
        lVar15 = (long)puVar12 - lVar17;
        uVar1 = (lVar15 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a9c8c6c();
          goto LAB_10a9c07b8;
        }
        uVar13 = (long)param_1[0xb] - lVar17;
        uVar14 = (long)uVar13 >> 3;
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar14 = 0xfffffffffffffff;
        }
        FUN_10a9c8c80();
        puVar11 = (undefined8 *)param_1[9];
        lVar17 = param_1[10];
        puVar16 = (undefined8 *)(uVar14 + lVar15);
        *puVar16 = uVar18;
        puVar16[1] = lVar9;
        puVar12 = puVar16 + 2;
        lVar17 = (long)puVar16 - (lVar17 - (long)puVar11);
        _memcpy(lVar17);
        lVar9 = param_1[9];
        param_1[9] = lVar17;
        param_1[10] = puVar12;
        param_1[0xb] = uVar14 + (long)puVar10 * 0x10;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[10] = puVar12;
    }
    puVar10 = puVar11;
  }
  puVar3 = (undefined8 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  do {
    if (puVar3 == puVar11) {
      return param_1;
    }
    plVar8 = (long *)*puVar3;
    (**(code **)(*plVar8 + 0x48))();
    puVar12 = puVar10;
    if ((int)plVar8 == 0) {
      uVar18 = *puVar3;
      lVar9 = puVar3[1];
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar16 = (undefined8 *)param_1[0xd];
      if (puVar16 < (undefined8 *)param_1[0xe]) {
        *puVar16 = uVar18;
        puVar16[1] = lVar9;
        puVar16 = puVar16 + 2;
      }
      else {
        lVar17 = (long)puVar16 - param_1[0xc];
        uVar1 = (lVar17 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a9c8cb4();
LAB_10a9c07b8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c07bc);
          (*pcVar6)();
        }
        uVar13 = (long)param_1[0xe] - param_1[0xc];
        uVar14 = (long)uVar13 >> 3;
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar14 = 0xfffffffffffffff;
        }
        FUN_10a9c8cc8();
        puVar12 = (undefined8 *)param_1[0xc];
        lVar15 = param_1[0xd];
        puVar2 = (undefined8 *)(uVar14 + lVar17);
        *puVar2 = uVar18;
        puVar2[1] = lVar9;
        puVar16 = puVar2 + 2;
        lVar17 = (long)puVar2 - (lVar15 - (long)puVar12);
        _memcpy(lVar17);
        lVar9 = param_1[0xc];
        param_1[0xc] = lVar17;
        param_1[0xd] = puVar16;
        param_1[0xe] = uVar14 + (long)puVar10 * 0x10;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[0xd] = puVar16;
    }
    puVar3 = puVar3 + 2;
    puVar10 = puVar12;
  } while( true );
}



/* Entry: 10a9c0880; end: 10a9c092f;  */

undefined1  [16] FUN_10a9c0880(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f688aaf;
  return auVar1;
}



/* Entry: 10a9c0930; end: 10a9c0a07;  */

void FUN_10a9c0930(undefined8 param_1)

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
  FUN_10a9c0a08(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f688048;
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
  FUN_10a9cc698();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68804e;
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
  func_0x00010a9cc810(param_1,&puStack_88);
  FUN_10a9cc944(param_1);
  return;
}



/* Entry: 10a9c0a08; end: 10a9c0adf;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c0aa0) */

undefined1  [16] FUN_10a9c0a08(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688aaf,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9cc59c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c0ae0; end: 10a9c0b87;  */

undefined1  [16] FUN_10a9c0ae0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f688acb;
  return auVar1;
}



/* Entry: 10a9c0b88; end: 10a9c0c5f;  */

void FUN_10a9c0b88(undefined8 param_1)

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
  FUN_10a9c0c60(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6880a5;
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
  FUN_10a9ccafc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6880b3;
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
  func_0x00010a9cccf8(param_1,&puStack_88);
  FUN_10a9cce04(param_1);
  return;
}



/* Entry: 10a9c0c60; end: 10a9c0d37;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c0cf8) */

undefined1  [16] FUN_10a9c0c60(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688acb,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9cca00(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c0d38; end: 10a9c0dbb;  */

undefined1  [16] FUN_10a9c0d38(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f688ae8;
  return auVar1;
}



/* Entry: 10a9c0dbc; end: 10a9c0ed7;  */

void FUN_10a9c0dbc(undefined8 param_1)

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
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  puStack_80 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9ccec0(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6880c8;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9cd094();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6880cc;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9cd230(uVar1,&puStack_a8);
  FUN_10a9cd364(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c0ed8; end: 10a9c0f53;  */

undefined1  [16] FUN_10a9c0ed8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f688af8;
  return auVar1;
}



/* Entry: 10a9c0f54; end: 10a9c108b;  */

void FUN_10a9c0f54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9cd420(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_a8 = &UNK_10f6880c8;
  puStack_a0 = &UNK_10f6880cc;
  ppuStack_90 = &puStack_a8;
  puStack_98 = &UNK_10f6880d2;
  uStack_88 = 2;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9cd5f4();
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6880db;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000019;
  puStack_70 = &UNK_10f687d39;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9cd938(uVar1,&puStack_98);
  FUN_10a9cdc28(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c108c; end: 10a9c110f;  */

undefined1  [16] FUN_10a9c108c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f688b05;
  return auVar1;
}



/* Entry: 10a9c1110; end: 10a9c13a3;  */

void FUN_10a9c1110(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  func_0x000109887da8(appuStack_c8,&UNK_10f688b05,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35a88;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35a88;
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
    FUN_10a0605c4(param_1,&DAT_10f56e97e,FUN_10a9cdce4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6880db,FUN_10a9cde2c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f688039,FUN_10a9cdeec,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f688b05,0xf);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c1388);
  (*pcVar6)();
}



/* Entry: 10a9c13a4; end: 10a9c142f;  */

undefined1  [16] FUN_10a9c13a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f688b15;
  return auVar1;
}



/* Entry: 10a9c1430; end: 10a9c1547;  */

void FUN_10a9c1430(undefined8 param_1)

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
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9ce020(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6880ec;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9ce1f4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6880f1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9ce390(uVar1,&puStack_a8);
  FUN_10a9ce4b0(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c1548; end: 10a9c15c7;  */

undefined1  [16] FUN_10a9c1548(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f68819a;
  return auVar1;
}



/* Entry: 10a9c15c8; end: 10a9c1a47;  */

void FUN_10a9c15c8(ulong param_1)

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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  func_0x000109887da8(appuStack_d8,&UNK_10f68819a,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c36938;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c36938;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c1a28;
    FUN_10a054dac(param_1,&UNK_10f6880fa,FUN_10a9ce640,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688119,FUN_10a9ce97c,FUN_10a9cea5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f309c7a,FUN_10a9cec44,FUN_10a9ced24);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68812a,FUN_10a9ceddc,FUN_10a9cefe8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688134,FUN_10a9cf530,FUN_10a9cf5f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688143,FUN_10a9cfd8c,FUN_10a9cfe44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688160,FUN_10a9cff04,FUN_10a9cfe44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688184,FUN_10a9d0078,FUN_10a9d0284);
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
    puStack_78 = *(undefined **)(lVar3 + -0x30);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f68819a,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68819a;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x200000064;
    puStack_88 = &UNK_10f687d39;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f687d39;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9c1a28;
      FUN_10a054dac(param_1,&UNK_10f6881ab,FUN_10a9d091c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9c1a28:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c1a2c);
  (*pcVar6)();
}



/* Entry: 10a9c1a48; end: 10a9c1aff;  */

undefined1  [16] FUN_10a9c1a48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f688b27;
  return auVar1;
}



/* Entry: 10a9c1b00; end: 10a9c1bd3;  */

void FUN_10a9c1b00(undefined8 param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f687d39;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c1bd4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881b2;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9e;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9d0bb8();
  FUN_10a9d0d38(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c1bd4; end: 10a9c1cab;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c1c6c) */

undefined1  [16] FUN_10a9c1bd4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b37,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d0abc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c1cac; end: 10a9c1d03;  */

undefined1  [16] FUN_10a9c1cac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f688b4a;
  return auVar1;
}



/* Entry: 10a9c1d04; end: 10a9c1df7;  */

void FUN_10a9c1d04(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881ba;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000064;
  puStack_70 = &UNK_10f687d39;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_a0 = &UNK_10f6881d1;
  puStack_98 = &UNK_10f6881ab;
  uStack_88 = 1;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a9c1df8(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c1df8; end: 10a9c1e5f;  */

ulong FUN_10a9c1df8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9c1e60);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a9d0e34,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a9c1e60; end: 10a9c1f33;  */

void FUN_10a9c1e60(undefined8 param_1)

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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f687d39;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c1f34(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881e1;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f687d39;
  uStack_38 = 0;
  FUN_10a9d1108();
  FUN_10a9d13e0(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c1f34; end: 10a9c200b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c1fcc) */

undefined1  [16] FUN_10a9c1f34(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b4a,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d100c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c200c; end: 10a9c206b;  */

undefined1  [16] FUN_10a9c200c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f688b59;
  return auVar1;
}


