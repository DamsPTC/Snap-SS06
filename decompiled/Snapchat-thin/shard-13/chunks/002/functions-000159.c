/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a284898; end: 10a2848ab;  */

void FUN_10a284898(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2848ac; end: 10a284947;  */

/* WARNING: Removing unreachable block (ram,0x00010a284a58) */
/* WARNING: Removing unreachable block (ram,0x00010a284a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a284a64) */
/* WARNING: Removing unreachable block (ram,0x00010a284a6c) */
/* WARNING: Removing unreachable block (ram,0x00010a284a70) */

void FUN_10a2848ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  code **ppcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined4 *extraout_x8;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long *in_stack_ffffffffffffff38;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *param_3;
  pcStack_68 = FUN_10a284948;
  ppuStack_60 = &PTR_FUN_110bb7720;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a284944);
    (*pcVar5)();
  }
  lVar12 = *(long *)(param_1 + 0x18) + -8;
  ppcVar10 = &pcStack_68;
  uVar11 = 2;
  FUN_10a0544d8();
  pppuVar7 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar8 = pppuVar7;
  (*(code *)(*pppuVar7)[0xb])();
  if (pppuVar8[0x59] < (undefined **)0x8) {
    pppuVar8[(long)pppuVar8[0x59] + 0x4e] = pppuVar8[0x5a];
    pppuVar8[0x59] = (undefined **)((long)pppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar8 + 0x4b);
  }
  FUN_10a284b04(uVar11);
  FUN_10a05dcbc(&stack0xffffffffffffff30,pppuVar7,ppcVar10);
  if (*(int *)(ppcVar10 + 2) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a284ad0);
    (*pcVar5)();
  }
  ppuVar13 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(ppcVar10[3]);
  puVar9 = *ppuVar13;
  (**(code **)(lVar12 + 0x10))(puVar9,&stack0xffffffffffffff40);
  if (in_stack_ffffffffffffff38 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffff38 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffff38 + 0x10))(in_stack_ffffffffffffff38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff38);
    }
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)((ulong)puVar9 & 0xffffffff);
  pppuVar7 = pppuVar8 + 0x4b;
  ppuVar13 = pppuVar8[0x59];
  ppuVar14 = (undefined **)((long)ppuVar13 + -1);
  pppuVar8[0x59] = ppuVar14;
  if (ppuVar14 < (undefined **)0x8) {
    ppuVar13 = pppuVar7[(long)ppuVar13 + 2];
    if (pppuVar8[0x5a] == ppuVar13) {
      return;
    }
  }
  else {
    ppuVar13 = (undefined **)pppuVar8[0x57][-1];
    pppuVar8[0x57] = pppuVar8[0x57] + -1;
    if (pppuVar8[0x5a] == ppuVar13) {
      return;
    }
  }
  ppuVar14 = *pppuVar7;
  ppuVar15 = pppuVar8[0x4c];
  lVar12 = (long)ppuVar15 - (long)ppuVar14;
  ppuVar17 = (undefined **)(lVar12 >> 4);
  if (ppuVar17 < ppuVar13) {
    uVar18 = (long)ppuVar13 - (long)ppuVar17;
    ppuVar16 = pppuVar8[0x4d];
    if ((ulong)((long)ppuVar16 - (long)ppuVar15 >> 4) < uVar18) {
      if ((ulong)ppuVar13 >> 0x3c == 0) {
        ppuVar15 = (undefined **)((long)ppuVar16 - (long)ppuVar14 >> 3);
        if (ppuVar15 <= ppuVar13) {
          ppuVar15 = ppuVar13;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)ppuVar14)) {
          ppuVar15 = (undefined **)0xfffffffffffffff;
        }
        pppuStack_d8 = pppuVar7;
        if ((ulong)ppuVar15 >> 0x3c == 0) {
          lVar6 = (long)ppuVar15 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar12;
          _bzero(lVar2,uVar18 * 0x10);
          ppuVar17 = (undefined **)(lVar2 + (long)ppuVar17 * -0x10);
          _memcpy(ppuVar17,ppuVar14,lVar12);
          *pppuVar7 = ppuVar17;
          pppuVar8[0x4c] = (undefined **)(lVar2 + uVar18 * 0x10);
          pppuVar8[0x4d] = (undefined **)(lVar6 + (long)ppuVar15 * 0x10);
          ppuStack_f8 = ppuVar14;
          ppuStack_f0 = ppuVar14;
          ppuStack_e8 = ppuVar14;
          ppuStack_e0 = ppuVar16;
          func_0x00010988c1b8(&ppuStack_f8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(ppuVar15,uVar18 * 0x10);
    pppuVar8[0x4c] = ppuVar15 + uVar18 * 2;
  }
  else if (ppuVar13 < ppuVar17) {
    while (ppuVar15 != ppuVar14 + (long)ppuVar13 * 2) {
      ppuVar15 = ppuVar15 + -2;
      func_0x00010988c204(ppuVar15);
    }
    pppuVar8[0x4c] = ppuVar14 + (long)ppuVar13 * 2;
  }
code_r0x00010988c138:
  pppuVar8[0x5a] = ppuVar13;
  return;
}



/* Entry: 10a284948; end: 10a284b03;  */

/* WARNING: Removing unreachable block (ram,0x00010a284a58) */
/* WARNING: Removing unreachable block (ram,0x00010a284a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a284a64) */
/* WARNING: Removing unreachable block (ram,0x00010a284a6c) */
/* WARNING: Removing unreachable block (ram,0x00010a284a70) */

void FUN_10a284948(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a284b04(param_5);
  FUN_10a05dcbc(&stack0xffffffffffffffa0,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a284ad0);
    (*pcVar4)();
  }
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(param_4 + 0x18));
  puVar8 = *ppuVar7;
  (**(code **)(param_6 + 0x10))(puVar8,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)puVar8 & 0xffffffff);
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar1[lVar11 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar1;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar1 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a284b04; end: 10a284b27;  */

void FUN_10a284b04(undefined8 param_1)

{
  if ((int)param_1 == 2) {
    return;
  }
  FUN_10a052ee0(2,0,param_1);
  return;
}



/* Entry: 10a284b28; end: 10a284b43;  */

void FUN_10a284b28(void)

{
  return;
}



/* Entry: 10a284b44; end: 10a284bdf;  */

/* WARNING: Removing unreachable block (ram,0x00010a284ca4) */
/* WARNING: Removing unreachable block (ram,0x00010a284cac) */

void FUN_10a284b44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code **ppcVar1;
  code *pcVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  code **ppcVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 *extraout_x8;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *param_3;
  pcStack_68 = FUN_10a284be0;
  ppuStack_60 = &PTR_FUN_110bb7738;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a284bdc);
    (*pcVar2)();
  }
  lVar9 = *(long *)(param_1 + 0x18) + -8;
  ppcVar7 = &pcStack_68;
  lVar8 = 1;
  FUN_10a0544d8();
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = pppuVar4;
  (*(code *)(*pppuVar4)[0xb])();
  if (pppuVar5[0x59] < (undefined **)0x8) {
    pppuVar5[(long)pppuVar5[0x59] + 0x4e] = pppuVar5[0x5a];
    pppuVar5[0x59] = (undefined **)((long)pppuVar5[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar5 + 0x4b);
  }
  FUN_10a284d20(lVar8);
  ppcVar1 = (code **)&stack0xffffffffffffff40;
  if (lVar8 != 0) {
    ppcVar1 = ppcVar7;
  }
  if (*(uint *)ppcVar1 < 2) {
    uVar6 = 0;
  }
  else {
    func_0x00010a137904(pppuVar4);
    uVar6 = (ulong)pppuVar4 & 0xffffffff | 0x100000000;
  }
  ppuVar10 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(&PTR___tlv_bootstrap_11340df48,uVar6);
  (**(code **)(lVar9 + 0x10))(*ppuVar10);
  *extraout_x8 = 0;
  pppuVar4 = pppuVar5 + 0x4b;
  ppuVar10 = pppuVar5[0x59];
  ppuVar11 = (undefined **)((long)ppuVar10 + -1);
  pppuVar5[0x59] = ppuVar11;
  if (ppuVar11 < (undefined **)0x8) {
    ppuVar10 = pppuVar4[(long)ppuVar10 + 2];
    if (pppuVar5[0x5a] == ppuVar10) {
      return;
    }
  }
  else {
    ppuVar10 = (undefined **)pppuVar5[0x57][-1];
    pppuVar5[0x57] = pppuVar5[0x57] + -1;
    if (pppuVar5[0x5a] == ppuVar10) {
      return;
    }
  }
  ppuVar11 = *pppuVar4;
  ppuVar12 = pppuVar5[0x4c];
  lVar8 = (long)ppuVar12 - (long)ppuVar11;
  ppuVar14 = (undefined **)(lVar8 >> 4);
  if (ppuVar14 < ppuVar10) {
    uVar6 = (long)ppuVar10 - (long)ppuVar14;
    ppuVar13 = pppuVar5[0x4d];
    if ((ulong)((long)ppuVar13 - (long)ppuVar12 >> 4) < uVar6) {
      if ((ulong)ppuVar10 >> 0x3c == 0) {
        ppuVar12 = (undefined **)((long)ppuVar13 - (long)ppuVar11 >> 3);
        if (ppuVar12 <= ppuVar10) {
          ppuVar12 = ppuVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar13 - (long)ppuVar11)) {
          ppuVar12 = (undefined **)0xfffffffffffffff;
        }
        pppuStack_d8 = pppuVar4;
        if ((ulong)ppuVar12 >> 0x3c == 0) {
          lVar3 = (long)ppuVar12 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar8;
          _bzero(lVar9,uVar6 * 0x10);
          ppuVar14 = (undefined **)(lVar9 + (long)ppuVar14 * -0x10);
          _memcpy(ppuVar14,ppuVar11,lVar8);
          *pppuVar4 = ppuVar14;
          pppuVar5[0x4c] = (undefined **)(lVar9 + uVar6 * 0x10);
          pppuVar5[0x4d] = (undefined **)(lVar3 + (long)ppuVar12 * 0x10);
          ppuStack_f8 = ppuVar11;
          ppuStack_f0 = ppuVar11;
          ppuStack_e8 = ppuVar11;
          ppuStack_e0 = ppuVar13;
          func_0x00010988c1b8(&ppuStack_f8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(ppuVar12,uVar6 * 0x10);
    pppuVar5[0x4c] = ppuVar12 + uVar6 * 2;
  }
  else if (ppuVar10 < ppuVar14) {
    while (ppuVar12 != ppuVar11 + (long)ppuVar10 * 2) {
      ppuVar12 = ppuVar12 + -2;
      func_0x00010988c204(ppuVar12);
    }
    pppuVar5[0x4c] = ppuVar11 + (long)ppuVar10 * 2;
  }
code_r0x00010988c138:
  pppuVar5[0x5a] = ppuVar10;
  return;
}



/* Entry: 10a284be0; end: 10a284d1f;  */

/* WARNING: Removing unreachable block (ram,0x00010a284ca4) */
/* WARNING: Removing unreachable block (ram,0x00010a284cac) */

void FUN_10a284be0(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  uint *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a284d20(param_5);
  puVar2 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar2 = param_4;
  }
  if (*puVar2 < 2) {
    uVar7 = 0;
  }
  else {
    func_0x00010a137904(param_2);
    uVar7 = (ulong)param_2 & 0xffffffff | 0x100000000;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(&PTR___tlv_bootstrap_11340df48,uVar7);
  (**(code **)(param_6 + 0x10))(*ppuVar6);
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar7 = lVar8 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar8 + 2];
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
  lVar8 = *plVar1;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar1 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a284d20; end: 10a284d43;  */

void FUN_10a284d20(undefined8 param_1)

{
  if ((uint)param_1 < 2) {
    return;
  }
  FUN_10a052ee0(1,1,param_1);
  return;
}



/* Entry: 10a284d44; end: 10a284d5f;  */

void FUN_10a284d44(void)

{
  return;
}



/* Entry: 10a284d60; end: 10a284ffb;  */

undefined1  [16] FUN_10a284d60(long *param_1,undefined8 param_2,long *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a284f9c;
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
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar4 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar4;
    plVar7[4] = param_3[2];
  }
  *(undefined1 *)(plVar7 + 5) = *param_4;
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
    FUN_10a284ffc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10a284f9c:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a284ffc; end: 10a2850cb;  */

void FUN_10a284ffc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10a285044:
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
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10a285044;
  }
  return;
}



/* Entry: 10a2850cc; end: 10a285257;  */

void FUN_10a2850cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
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
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
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
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10a285258; end: 10a28533b;  */

long FUN_10a285258(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
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
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
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



/* Entry: 10a28533c; end: 10a2854f3;  */

long * FUN_10a28533c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  int iStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_2 + 0x20);
  plVar5 = plVar4;
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar5 = plVar4;
    plStack_f8 = plVar4;
    if (plVar4 != (long *)0x0) {
      lStack_100 = *(long *)(param_2 + 0x18);
      if (lStack_100 != 0) {
        lStack_e8 = param_1[1];
        plStack_f0 = (long *)*param_1;
        lStack_e0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        lStack_d0 = param_1[4];
        plStack_d8 = (long *)param_1[3];
        param_1[2] = 0;
        param_1[3] = 0;
        lStack_c8 = param_1[5];
        param_1[4] = 0;
        param_1[5] = 0;
        iStack_c0 = (int)param_1[6];
        lStack_b8 = param_1[7];
        lStack_b0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_a8,param_1 + 9);
        lStack_70 = param_1[0x10];
        uStack_68 = (undefined4)param_1[0x11];
        FUN_10a0424c4(auStack_60,param_1 + 0x12);
        if ((99 < iStack_c0 - 200U) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
          func_0x00010ae06f08(1,4,&UNK_10f64790b,&UNK_10f6493a2,0x20,&UNK_10f649410,in_x6,in_x7,
                              iStack_c0);
        }
        func_0x000104c4f944(auStack_60);
        plVar5 = &lStack_b8;
        FUN_10a042634();
        if (lStack_c8 < 0) {
          plVar5 = plStack_d8;
          __ZdlPv();
        }
        if (lStack_e0 < 0) {
          plVar5 = plStack_f0;
          __ZdlPv();
        }
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_10a05bd10(&plStack_f0);
  func_0x00010a05a86c(&lStack_100);
  __Unwind_Resume();
  plVar4 = (long *)plVar5[3];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (plVar5[2] != 0) {
        FUN_10a05c0fc(plVar5[2],plVar5[1]);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar5[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar5 + 1;
}



/* Entry: 10a2854f4; end: 10a28551f;  */

undefined8 * FUN_10a2854f4(long param_1)

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



/* Entry: 10a285520; end: 10a285593;  */

undefined8 * FUN_10a285520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_10a285594();
  return puVar1;
}



/* Entry: 10a285594; end: 10a285617;  */

void FUN_10a285594(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0514e4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a285618(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a285618; end: 10a2856b3;  */

undefined1 * FUN_10a285618(undefined8 param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    *(undefined8 *)(param_4 + 8) = 0;
    *param_4 = 3;
    lVar1 = param_2;
    func_0x00010938229c();
    *(long *)(param_4 + 8) = lVar1;
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 10a2856b4; end: 10a2857a3;  */

void FUN_10a2856b4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a2856b4(param_1,*param_2);
    FUN_10a2856b4(param_1,param_2[1]);
    func_0x00010a2856fc(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a2857a4; end: 10a28590b;  */

long * FUN_10a2857a4(long *param_1)

{
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long **pplStack_38;
  
  lStack_48 = *(long *)(*param_1 + 0x210) + 0x68;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0;
  FUN_10a28590c(param_1 + 1,&plStack_80);
  func_0x00010a285950(param_1 + 0x1a,&plStack_80);
  func_0x00010a2859a8(param_1 + 0x21,&plStack_80);
  func_0x00010a285a08(param_1 + 0x26,&plStack_80);
  FUN_10a25afe4(param_1,&plStack_80);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  pplStack_38 = &plStack_80;
  FUN_10a26dd18(&pplStack_38);
  if ((char)param_1[0x2c] == '\x01') {
    func_0x00010a22eba0(param_1 + 0x27);
  }
  if ((char)param_1[0x25] == '\x01') {
    plStack_80 = param_1 + 0x22;
    FUN_10a22ff44(&plStack_80);
  }
  if ((char)param_1[0x20] == '\x01') {
    func_0x00010a22fc28(param_1 + 0x1b);
  }
  FUN_10a22d294(param_1 + 2);
  return param_1;
}



/* Entry: 10a28590c; end: 10a285b07;  */

void FUN_10a28590c(int *param_1,long param_2)

{
  undefined8 uStack_28;
  
  if (*param_1 != 0) {
    uStack_28 = (int *)CONCAT44(*param_1,(undefined4)uStack_28);
    func_0x0001098b0050(param_2 + 0x18,(long)&uStack_28 + 4);
    *param_1 = 0;
  }
  if ((char)param_1[0x30] == '\x01') {
    uStack_28 = param_1 + 0x2a;
    FUN_10a22d224(&uStack_28);
    FUN_10a22ce48(param_1 + 0x10);
    if (((char)param_1[0xe] == '\x01') && (*(long *)(param_1 + 8) != 0)) {
      *(long *)(param_1 + 10) = *(long *)(param_1 + 8);
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10a285b08; end: 10a285d4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a285ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a285ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a285cec) */
/* WARNING: Removing unreachable block (ram,0x00010a285cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a285cf8) */

void FUN_10a285b08(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x228;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bba0b8;
  func_0x0001098bae4c(puVar5,&UNK_10e4a6ac7,0x29,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x3b,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *puVar5 = &PTR_FUN_110bba0b8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bba108;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x27] = 0;
  puVar5[0x26] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = &PTR_DAT_110bba1c0;
  puVar5[0x25] = &UNK_110bba190;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2f] = &PTR_DAT_110bba1c0;
  puVar5[0x30] = &UNK_110bba190;
  puVar5[0x34] = 0;
  puVar5[0x33] = 0;
  puVar5[0x36] = 0;
  puVar5[0x35] = 0;
  puVar5[0x32] = 0;
  puVar5[0x31] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  *(undefined2 *)(puVar5 + 0x3a) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x3c) = 0;
  puVar5[0x3f] = FUN_10a286930;
  puVar5[0x40] = &UNK_110bba260;
  puVar5[0x44] = 0;
  puVar5[0x43] = 0;
  puVar5[0x42] = 0;
  puVar5[0x41] = 0;
  puVar5[0x3b] = &PTR_FUN_110bba240;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x44] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x1d1) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a285d4c; end: 10a285d4f;  */

undefined8 * FUN_10a285d4c(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bba0b8;
  FUN_10a232e34(param_1 + 0x38);
  param_1[0x2f] = &PTR____cxa_pure_virtual_110bba218;
  FUN_10a286a4c(param_1 + 0x36);
  FUN_10a286a4c(param_1 + 0x34);
  FUN_10a286a4c(param_1 + 0x32);
  FUN_10a232e34(param_1 + 0x2d);
  param_1[0x24] = &PTR____cxa_pure_virtual_110bba218;
  FUN_10a286a4c(param_1 + 0x2b);
  FUN_10a286a4c(param_1 + 0x29);
  FUN_10a286a4c(param_1 + 0x27);
  param_1[0x19] = &PTR_FUN_110bba108;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a285d50; end: 10a285d63;  */

void FUN_10a285d50(void)

{
  func_0x00010a286aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a285d64; end: 10a285d67;  */

void FUN_10a285d64(void)

{
  return;
}



/* Entry: 10a285d68; end: 10a285e07;  */

uint FUN_10a285d68(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x178;
  if (lVar4 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  func_0x00010a286b48(lVar1 + 0x48);
  lStack_38 = param_1;
  FUN_10a286ba4(lVar1 + 0x48,&lStack_38);
  FUN_10a286c5c(*(undefined8 *)(lVar1 + 0x48),param_1 + 0xf0);
  *(long *)(lVar1 + 0x10) =
       ((*(long **)(lVar1 + 0x48))[1] - **(long **)(lVar1 + 0x48) >> 2) * -0x3333333333333333;
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    FUN_10a286f7c(uVar3);
    uVar2 = (uint)uVar3 ^ 1;
  }
  return uVar2;
}



/* Entry: 10a285e08; end: 10a285e3f;  */

void FUN_10a285e08(long param_1)

{
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(lStack_28 + 0x48);
  plStack_30 = &lStack_18;
  lStack_38 = param_1;
  lStack_18 = param_1;
  FUN_10a288e0c(&lStack_38);
  return;
}



/* Entry: 10a285e40; end: 10a285eaf;  */

void FUN_10a285e40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba148;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a286170();
  *param_1 = puVar1;
  return;
}



/* Entry: 10a285eb0; end: 10a285f77;  */

void FUN_10a285eb0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  if (puVar9 < *(undefined8 **)(param_1 + 0x50)) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar9[1] = param_2[1];
    *puVar9 = uVar10;
    puVar9[3] = uVar12;
    puVar9[2] = uVar11;
    puVar9 = puVar9 + 4;
LAB_10a285f60:
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    return;
  }
  lVar8 = (long)puVar9 - *(long *)(param_1 + 0x40);
  uVar1 = (lVar8 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar6 = (long)uVar5 >> 4;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar6 = 0x7ffffffffffffff;
    }
    lVar4 = param_1 + 0x40;
    FUN_10a286234();
    puVar2 = (undefined8 *)(lVar4 + lVar8);
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    puVar9 = puVar2 + 4;
    lVar7 = (long)puVar2 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar7);
    lVar8 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar7;
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(ulong *)(param_1 + 0x50) = lVar4 + uVar6 * 0x20;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    goto LAB_10a285f60;
  }
  FUN_10a286220();
  uVar6 = (ulong)(int)param_2;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar1 = lVar4 - lVar8 >> 5;
  if (uVar6 + 1 != uVar1) {
    if ((lVar8 == lVar4) || (uVar1 <= uVar6)) goto LAB_10a2862d8;
    puVar9 = (undefined8 *)(lVar8 + uVar6 * 0x20);
    uVar10 = *(undefined8 *)(lVar4 + -0x20);
    uVar12 = *(undefined8 *)(lVar4 + -8);
    uVar11 = *(undefined8 *)(lVar4 + -0x10);
    puVar9[1] = *(undefined8 *)(lVar4 + -0x18);
    *puVar9 = uVar10;
    puVar9[3] = uVar12;
    puVar9[2] = uVar11;
    lVar8 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar4 - lVar8 >> 5) <= uVar6) goto LAB_10a2862d8;
  }
  if (lVar8 != lVar4) {
    *(long *)(param_1 + 0x48) = lVar4 + -0x20;
    return;
  }
LAB_10a2862d8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2862dc);
  (*pcVar3)();
}



/* Entry: 10a285f78; end: 10a285f83;  */

void FUN_10a285f78(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = (ulong)param_2;
  lVar6 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar1 = lVar5 - lVar6 >> 5;
  if (uVar4 + 1 != uVar1) {
    if ((lVar6 == lVar5) || (uVar1 <= uVar4)) goto LAB_10a2862d8;
    puVar2 = (undefined8 *)(lVar6 + uVar4 * 0x20);
    uVar7 = *(undefined8 *)(lVar5 + -0x20);
    uVar9 = *(undefined8 *)(lVar5 + -8);
    uVar8 = *(undefined8 *)(lVar5 + -0x10);
    puVar2[1] = *(undefined8 *)(lVar5 + -0x18);
    *puVar2 = uVar7;
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar5 - lVar6 >> 5) <= uVar4) goto LAB_10a2862d8;
  }
  if (lVar6 != lVar5) {
    *(long *)(param_1 + 0x48) = lVar5 + -0x20;
    return;
  }
LAB_10a2862d8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2862dc);
  (*pcVar3)();
}



/* Entry: 10a285f84; end: 10a285ffb;  */

undefined8 * FUN_10a285f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bba148;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a285ffc; end: 10a28616f;  */

void FUN_10a285ffc(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  plVar5 = &lStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    lVar6 = 0;
    uVar8 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar8) {
LAB_10a28612c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a286130);
        (*pcVar1)();
      }
      param_4 = *(long *)(param_1 + 8) + lVar6;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a7ac1,0x23,param_4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar8) goto LAB_10a28612c;
      *(int *)(lStack_a0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar3 >> 2 != uVar8);
  }
  pcStack_88 = FUN_10a286268;
  appuStack_80[0] = &PTR_DAT_110bba178;
  ppcVar4 = &pcStack_88;
  func_0x0001098bb6d0(*param_2 + 0x18);
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
  __Unwind_Resume();
  if (param_4 != 0) {
    FUN_10a2861e8();
    lVar7 = *(long *)(lVar3 + 8);
    lVar6 = (long)plVar5 - (long)ppcVar4;
    if (lVar6 != 0) {
      _memmove(lVar7,ppcVar4,lVar6);
    }
    *(long *)(lVar3 + 8) = lVar7 + lVar6;
  }
  return;
}



/* Entry: 10a286170; end: 10a2861e7;  */

void FUN_10a286170(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a2861e8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a2861e8; end: 10a28621f;  */

void FUN_10a2861e8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a286234();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
    return;
  }
  FUN_10a286220();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a286220; end: 10a286233;  */

void FUN_10a286220(undefined8 param_1,ulong param_2)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a286234; end: 10a286267;  */

void FUN_10a286234(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a286268; end: 10a2863d3;  */

void FUN_10a286268(void)

{
  return;
}



/* Entry: 10a2863d4; end: 10a28641b;  */

undefined8 * FUN_10a2863d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a232e34(param_1 + 9);
  *param_1 = &PTR____cxa_pure_virtual_110bba218;
  FUN_10a286a4c(param_1 + 7);
  FUN_10a286a4c(param_1 + 5);
  plVar5 = (long *)param_1[4];
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
  return param_1 + 3;
}



/* Entry: 10a28641c; end: 10a28653f;  */

void FUN_10a28641c(long *param_1,long param_2,ulong *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uStack_54;
  
  uStack_54 = 0x40000000;
  FUN_10a286634(param_1,((long)(param_3[1] - *param_3) >> 2) * -0x3333333333333333,&uStack_54);
  lVar8 = *(long *)(param_2 + 0x38);
  if ((param_4 != 1) || (lVar8 != 0)) {
    if (param_4 == 0) {
      lVar8 = *(long *)(param_2 + 0x18);
    }
    lVar1 = *param_1;
    lVar2 = param_1[1];
    if (lVar2 - lVar1 != 0) {
      uVar9 = 0;
      do {
        uVar5 = *param_3;
        uVar7 = ((long)(param_3[1] - uVar5) >> 2) * -0x3333333333333333;
        if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
LAB_10a286520:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a286524);
          (*pcVar3)();
        }
        lVar4 = param_2;
        FUN_10a286540();
        if ((uVar5 & 1) == 0) {
          uVar6 = 0x40000000;
        }
        else {
          uVar6 = *(undefined4 *)(lVar8 + lVar4 * 4);
        }
        if ((ulong)(param_1[1] - *param_1 >> 2) <= uVar9) goto LAB_10a286520;
        *(undefined4 *)(*param_1 + uVar9 * 4) = uVar6;
        uVar9 = uVar9 + 1;
      } while (lVar2 - lVar1 >> 2 != uVar9);
    }
  }
  return;
}



/* Entry: 10a286540; end: 10a286633;  */

undefined1  [16] FUN_10a286540(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar4 = **(long **)(param_1 + 0x48);
  lVar3 = (*(long **)(param_1 + 0x48))[1];
  if (lVar3 - lVar4 != 0) {
    uVar5 = (lVar3 - lVar4 >> 2) * -0x3333333333333333;
    do {
      uVar6 = uVar5 >> 1;
      lVar3 = lVar4 + uVar6 * 0x14;
      lVar1 = lVar3;
      func_0x00010a286750(lVar3,param_2);
      lVar3 = lVar3 + 0x14;
      uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      if (-1 < (char)lVar1) {
        lVar3 = lVar4;
        uVar5 = uVar6;
      }
      lVar4 = lVar3;
    } while (uVar5 != 0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  }
  if ((lVar4 == lVar3) || (lVar4 = lVar3, func_0x00010a2866b4(lVar3,param_2), (int)lVar4 == 0)) {
    uVar5 = 0;
    uVar2 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = (lVar3 - **(long **)(param_1 + 0x48) >> 2) * -0x3333333333333333;
    uVar6 = uVar5 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xff;
    uVar2 = 1;
  }
  auVar7._0_8_ = uVar6 | uVar5;
  auVar7._8_8_ = uVar2;
  return auVar7;
}



/* Entry: 10a286634; end: 10a2866b3;  */

undefined8 * FUN_10a286634(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a26d390(param_1);
    puVar2 = (undefined4 *)param_1[1];
    lVar4 = param_2 << 2;
    uVar1 = *param_3;
    puVar3 = puVar2;
    do {
      *puVar3 = uVar1;
      lVar4 = lVar4 + -4;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 10a2866b4; end: 10a2867af;  */

bool FUN_10a2866b4(int *param_1,int *param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  if (*param_1 != *param_2) {
    return false;
  }
  uVar1 = param_1[3];
  if (uVar1 == 0xffffffff || param_2[3] != uVar1) {
    if (param_2[3] != uVar1) {
      return false;
    }
  }
  else {
    puStack_28 = &uStack_29;
    ppuVar2 = &puStack_28;
    (*(code *)(&PTR_DAT_110bb77c0)[uVar1])(ppuVar2,param_1 + 1,param_2 + 1);
    if (((ulong)ppuVar2 & 1) == 0) {
      return false;
    }
  }
  return (char)param_1[4] == (char)param_2[4];
}



/* Entry: 10a2867b0; end: 10a286827;  */

undefined1 ** FUN_10a2867b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar2 == 0xffffffff) {
    return (undefined1 **)(ulong)-(uint)(uVar3 != 0xffffffff);
  }
  if (uVar3 != 0xffffffff) {
    uVar1 = 1;
    if (uVar2 < uVar3) {
      uVar1 = 0xffffffff;
    }
    ppuVar4 = (undefined1 **)(ulong)uVar1;
    if (uVar2 == uVar3) {
      puStack_18 = &uStack_19;
      ppuVar4 = &puStack_18;
      (*(code *)(&PTR_FUN_110bb77a8)[uVar2])(ppuVar4,param_1,param_2);
    }
    return ppuVar4;
  }
  return (undefined1 **)0x1;
}



/* Entry: 10a286828; end: 10a2868db;  */

uint FUN_10a286828(undefined8 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_3 < *param_2);
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10a2868dc; end: 10a28692f;  */

void FUN_10a2868dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_11;
  
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    lVar1 = **(long **)(param_3 + 0x48);
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),lVar1,
               ((*(long **)(param_3 + 0x48))[1] - lVar1 >> 2) * -0x3333333333333333,&uStack_11);
  }
  return;
}



/* Entry: 10a286930; end: 10a28696f;  */

void FUN_10a286930(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0x10a28694c;
  param_1[1] = &PTR_FUN_110bba280;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a286970; end: 10a286a27;  */

void FUN_10a286970(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
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
    puVar1 = (undefined8 *)0x113300e88;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a286a28);
  (*pcVar2)();
}



/* Entry: 10a286a28; end: 10a286a4b;  */

void FUN_10a286a28(void)

{
  return;
}



/* Entry: 10a286a4c; end: 10a286ba3;  */

long FUN_10a286a4c(long param_1)

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



/* Entry: 10a286ba4; end: 10a286c5b;  */

void FUN_10a286ba4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar4 = 0x18;
  __Znwm(0x18);
  lVar5 = *(long *)(*param_2 + 0x108);
  FUN_10a287050(uVar4,lVar5,*(long *)(*param_2 + 0x110) - lVar5 >> 5);
  FUN_10a2872d8(auStack_40,uVar4);
  FUN_10a286fec(param_1,auStack_40);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a286c5c; end: 10a286f7b;  */

void FUN_10a286c5c(long *param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_61;
  
  func_0x000108a5942c(param_2,(param_1[1] - *param_1 >> 2) * -0x3333333333333333);
  if (*param_1 == param_1[1]) {
    return;
  }
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_10a2873e4(&puStack_80,(param_1[1] - *param_1 >> 2) * -0x3333333333333333);
  lVar12 = *param_1;
  if (param_1[1] != lVar12) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      puVar9 = (undefined8 *)(lVar12 + lVar11);
      if (puStack_78 < puStack_70) {
        uVar14 = *puVar9;
        uVar2 = *(undefined4 *)(puVar9 + 2);
        puStack_78[1] = puVar9[1];
        *puStack_78 = uVar14;
        *(undefined4 *)(puStack_78 + 2) = uVar2;
        *(int *)((long)puStack_78 + 0x14) = (int)uVar13;
        puVar9 = puStack_78 + 3;
      }
      else {
        lVar12 = (long)puStack_78 - (long)puStack_80;
        uVar7 = (lVar12 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar7) {
          FUN_10a287490();
          goto LAB_10a286f50;
        }
        lVar6 = (long)puStack_70 - (long)puStack_80 >> 3;
        uVar8 = lVar6 * 0x5555555555555556;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar8 = 0xaaaaaaaaaaaaaaa;
        }
        ppuVar4 = &puStack_80;
        FUN_10a2874a4();
        puVar10 = (undefined8 *)((long)ppuVar4 + lVar12);
        uVar14 = *puVar9;
        uVar2 = *(undefined4 *)(puVar9 + 2);
        puVar10[1] = puVar9[1];
        *puVar10 = uVar14;
        *(undefined4 *)(puVar10 + 2) = uVar2;
        *(int *)((long)puVar10 + 0x14) = (int)uVar13;
        puVar9 = puVar10 + 3;
        puVar10 = (undefined8 *)((long)puVar10 - ((long)puStack_78 - (long)puStack_80));
        _memcpy(puVar10);
        bVar1 = puStack_80 != (undefined8 *)0x0;
        puStack_80 = puVar10;
        puStack_70 = (undefined8 *)((long)ppuVar4 + uVar8 * 0x18);
        if (bVar1) {
          puStack_78 = puVar9;
          __ZdlPv();
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = *param_1;
      uVar7 = (param_1[1] - lVar12 >> 2) * -0x3333333333333333;
      lVar11 = lVar11 + 0x14;
      puStack_78 = puVar9;
    } while (uVar13 <= uVar7 && uVar7 - uVar13 != 0);
  }
  lVar12 = 0;
  if (puStack_78 != puStack_80) {
    lVar12 = LZCOUNT(((long)puStack_78 - (long)puStack_80 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_10a2874e8(puStack_80,puStack_78,&uStack_61,lVar12,1);
  param_1[1] = *param_1;
  if (puStack_78 != puStack_80) {
    func_0x00010a28718c(param_1);
    if ((long)puStack_78 - (long)puStack_80 != 0) {
      if ((ulong)(long)*(int *)((long)puStack_80 + 0x14) < (ulong)(param_2[1] - *param_2 >> 2)) {
        *(undefined4 *)(*param_2 + (long)*(int *)((long)puStack_80 + 0x14) * 4) = 0;
        if (1 < (ulong)(((long)puStack_78 - (long)puStack_80 >> 3) * -0x5555555555555555)) {
          lVar11 = *param_1;
          lVar6 = param_1[1];
          uVar13 = 1;
          lVar12 = 0x2c;
          do {
            if (lVar11 == lVar6) goto LAB_10a286f50;
            puVar5 = (undefined1 *)((long)puStack_80 + lVar12 + -0x14);
            FUN_10a2866b4(puVar5,lVar6 + -0x14);
            if (((ulong)puVar5 & 1) == 0) {
              uVar7 = ((long)puStack_78 - (long)puStack_80 >> 3) * -0x5555555555555555;
              if (uVar7 < uVar13 || uVar7 - uVar13 == 0) goto LAB_10a286f50;
              func_0x00010a28718c(param_1,(undefined1 *)((long)puStack_80 + lVar12 + -0x14));
            }
            uVar7 = ((long)puStack_78 - (long)puStack_80 >> 3) * -0x5555555555555555;
            if (uVar7 < uVar13 || uVar7 - uVar13 == 0) goto LAB_10a286f50;
            if ((ulong)(param_2[1] - *param_2 >> 2) <=
                (ulong)(long)*(int *)((long)puStack_80 + lVar12)) goto LAB_10a286f50;
            lVar11 = *param_1;
            lVar6 = param_1[1];
            *(int *)(*param_2 + (long)*(int *)((long)puStack_80 + lVar12) * 4) =
                 (int)((ulong)(lVar6 - lVar11) >> 2) * -0x33333333 + -1;
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0x18;
          } while (uVar13 <= uVar7 && uVar7 - uVar13 != 0);
        }
        puStack_78 = puStack_80;
        __ZdlPv();
        return;
      }
    }
  }
LAB_10a286f50:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a286f54);
  (*pcVar3)();
}



/* Entry: 10a286f7c; end: 10a286feb;  */

void FUN_10a286f7c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar2 = *param_2;
  if (lVar3 - lVar1 == param_2[1] - lVar2) {
    while ((lVar1 != lVar3 && (lVar4 = lVar1, FUN_10a2866b4(lVar1,lVar2), (int)lVar4 != 0))) {
      lVar1 = lVar1 + 0x14;
      lVar2 = lVar2 + 0x14;
    }
  }
  return;
}



/* Entry: 10a286fec; end: 10a28704f;  */

undefined8 * FUN_10a286fec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a287050; end: 10a2870e3;  */

void FUN_10a287050(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a2870e4(param_1);
  param_3 = param_3 << 5;
  puVar1 = (undefined8 *)(param_2 + 4);
  do {
    uStack_48 = puVar1[1];
    uStack_50 = *puVar1;
    uStack_40 = *(undefined4 *)(puVar1 + 2);
    func_0x00010a28718c(param_1,&uStack_50);
    puVar1 = puVar1 + 4;
    param_3 = param_3 + -0x20;
  } while (param_3 != 0);
  return;
}



/* Entry: 10a2870e4; end: 10a287283;  */

undefined1  [16] FUN_10a2870e4(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar5 = *param_1;
  if ((undefined8 *)(((long)(param_1[2] - uVar5) >> 2) * -0x3333333333333333) < param_2) {
    if ((undefined8 *)0xccccccccccccccc < param_2) {
      FUN_10a287284();
      puVar4 = (undefined8 *)param_1[1];
      if (puVar4 < (undefined8 *)param_1[2]) {
        uVar11 = param_2[1];
        uVar10 = *param_2;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        uVar5 = (long)puVar4 + 0x14;
        puVar1 = param_1;
      }
      else {
        lVar9 = (long)puVar4 - *param_1;
        uVar5 = (lVar9 >> 2) * -0x3333333333333333 + 1;
        if (0xccccccccccccccc < uVar5) {
          FUN_10a287284();
          puVar2 = (ulong *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if (param_2 < (undefined8 *)0xccccccccccccccd) {
            lVar9 = (long)param_2 * 0x14;
            __Znwm(lVar9);
            auVar14._8_8_ = param_2;
            auVar14._0_8_ = lVar9;
            return auVar14;
          }
          func_0x000109ffded8();
          *puVar2 = (ulong)param_2;
          puVar3 = (undefined8 *)0x20;
          puVar4 = param_2;
          __Znwm();
          *puVar3 = &PTR_FUN_110bba2a8;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = param_2;
          puVar2[1] = (ulong)puVar3;
          auVar15._8_8_ = puVar4;
          auVar15._0_8_ = puVar2;
          return auVar15;
        }
        lVar7 = (long)((long)param_1[2] - *param_1) >> 2;
        uVar6 = lVar7 * -0x6666666666666666;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
          uVar6 = 0xccccccccccccccc;
        }
        puVar2 = param_1;
        FUN_10a287298();
        puVar4 = (undefined8 *)((long)puVar2 + lVar9);
        uVar11 = param_2[1];
        uVar10 = *param_2;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        uVar5 = (long)puVar4 + 0x14;
        param_2 = (undefined8 *)*param_1;
        uVar8 = (long)puVar4 - (param_1[1] - (long)param_2);
        _memcpy(uVar8);
        puVar1 = (ulong *)*param_1;
        *param_1 = uVar8;
        param_1[1] = uVar5;
        param_1[2] = (long)puVar2 + uVar6 * 0x14;
        if (puVar1 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = uVar5;
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = puVar1;
      return auVar13;
    }
    uVar6 = param_1[1];
    puVar2 = param_1;
    FUN_10a287298();
    uVar5 = (long)puVar2 + (uVar6 - uVar5);
    lVar9 = (long)param_2 * 0x14;
    param_2 = (undefined8 *)*param_1;
    uVar8 = uVar5 - (param_1[1] - (long)param_2);
    _memcpy(uVar8);
    uVar6 = *param_1;
    *param_1 = uVar8;
    param_1[1] = uVar5;
    param_1[2] = (long)puVar2 + lVar9;
    param_1 = (ulong *)0x0;
    if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = uVar6;
      return auVar16;
    }
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 10a287284; end: 10a287297;  */

undefined1  [16] FUN_10a287284(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xccccccccccccccd) {
    lVar2 = param_2 * 0x14;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  *puVar1 = param_2;
  puVar3 = (undefined8 *)0x20;
  uVar4 = param_2;
  __Znwm();
  *puVar3 = &PTR_FUN_110bba2a8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar1[1] = (ulong)puVar3;
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 10a287298; end: 10a2872d7;  */

undefined1  [16] FUN_10a287298(ulong *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 < 0xccccccccccccccd) {
    lVar1 = param_2 * 0x14;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  uVar3 = param_2;
  __Znwm();
  *puVar2 = &PTR_FUN_110bba2a8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (ulong)puVar2;
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a2872d8; end: 10a28734f;  */

undefined8 * FUN_10a2872d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba2a8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a287350; end: 10a287387;  */

void FUN_10a287350(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      param_2[1] = *param_2;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a287388; end: 10a28738b;  */

void FUN_10a287388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a28738c; end: 10a28739f;  */

void FUN_10a28738c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2873a0; end: 10a2873a7;  */

void FUN_10a2873a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a2873a8; end: 10a2873df;  */

undefined8 FUN_10a2873a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bba2e8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2873e0; end: 10a2873e3;  */

void FUN_10a2873e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2873e4; end: 10a28748f;  */

/* WARNING: Removing unreachable block (ram,0x00010a288a30) */
/* WARNING: Removing unreachable block (ram,0x00010a288a34) */
/* WARNING: Removing unreachable block (ram,0x00010a288a44) */
/* WARNING: Removing unreachable block (ram,0x00010a288a78) */

undefined1  [16]
FUN_10a2873e4(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uStack_1c4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar13 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar13 >> 3) * -0x5555555555555555) < param_2) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
      uStack_1c4 = param_5;
      FUN_10a287490();
      puVar5 = (undefined8 *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
        lVar13 = (long)param_2 * 0x18;
        __Znwm(lVar13);
        auVar25._8_8_ = param_2;
        auVar25._0_8_ = lVar13;
        return auVar25;
      }
      func_0x000109ffded8();
      puVar8 = puVar5;
      puVar20 = param_2;
LAB_10a287518:
      puVar12 = puVar20 + -3;
      puVar10 = puVar20 + -6;
      puVar11 = puVar20 + -9;
      puVar9 = puVar8;
      do {
        param_4 = -param_4;
        do {
          puVar8 = puVar9;
          param_4 = param_4 + 1;
          uVar14 = (long)puVar20 - (long)puVar8;
          uVar17 = ((long)uVar14 >> 3) * -0x5555555555555555;
          if (2 < (long)uVar17) {
            if (uVar17 == 3) {
              puVar9 = puVar8 + 3;
              func_0x00010a286750(puVar9,puVar8);
              param_2 = puVar8 + 3;
              puVar5 = puVar12;
              func_0x00010a286750(puVar12,param_2);
              if (((uint)puVar9 >> 7 & 1) != 0) {
                if ((char)puVar5 < '\0') goto LAB_10a287ee8;
                uVar18 = puVar8[1];
                uVar15 = *puVar8;
                uStack_d0 = puVar8[2];
                puVar8[1] = puVar8[4];
                *puVar8 = puVar8[3];
                puVar8[2] = puVar8[5];
                puVar8[4] = uVar18;
                puVar8[3] = uVar15;
                puVar8[5] = uStack_d0;
                param_2 = puVar8 + 3;
                puVar5 = puVar12;
                func_0x00010a286750(puVar12,param_2);
                if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287f18;
                uVar15 = puVar8[5];
                uVar22 = puVar8[4];
                uVar21 = puVar8[3];
                uVar18 = puVar20[-1];
                uVar23 = *puVar12;
                puVar8[4] = puVar20[-2];
                puVar8[3] = uVar23;
                puVar8[5] = uVar18;
                puVar20[-2] = uVar22;
                *puVar12 = uVar21;
                goto LAB_10a287f14;
              }
              if (-1 < (char)puVar5) goto LAB_10a287f18;
              uVar15 = puVar8[5];
              uVar22 = puVar8[4];
              uVar21 = puVar8[3];
              uVar18 = puVar20[-1];
              uVar23 = *puVar12;
              puVar8[4] = puVar20[-2];
              puVar8[3] = uVar23;
              puVar8[5] = uVar18;
              puVar20[-2] = uVar22;
              *puVar12 = uVar21;
              puVar20[-1] = uVar15;
            }
            else {
              if (uVar17 == 4) {
                puVar5 = puVar8 + 3;
                puVar9 = puVar8 + 6;
                puVar10 = puVar5;
                func_0x00010a286750(puVar5,puVar8,puVar9,puVar12,param_3);
                puVar11 = puVar9;
                func_0x00010a286750(puVar9,puVar5);
                if (((uint)puVar10 >> 7 & 1) == 0) {
                  if ((char)puVar11 < '\0') {
                    uVar15 = puVar8[5];
                    uVar21 = puVar8[4];
                    uVar18 = *puVar5;
                    puVar8[4] = puVar8[7];
                    *puVar5 = *puVar9;
                    puVar8[5] = puVar8[8];
                    puVar8[7] = uVar21;
                    *puVar9 = uVar18;
                    puVar8[8] = uVar15;
                    puVar10 = puVar5;
                    func_0x00010a286750(puVar5,puVar8);
                    if (((uint)puVar10 >> 7 & 1) != 0) {
                      uVar15 = puVar8[2];
                      uVar21 = puVar8[1];
                      uVar18 = *puVar8;
                      puVar8[1] = puVar8[4];
                      *puVar8 = *puVar5;
                      puVar8[2] = puVar8[5];
                      puVar8[4] = uVar21;
                      *puVar5 = uVar18;
                      puVar8[5] = uVar15;
                    }
                  }
                }
                else {
                  if ((char)puVar11 < '\0') {
                    uVar15 = puVar8[2];
                    uVar21 = puVar8[1];
                    uVar18 = *puVar8;
                    puVar8[1] = puVar8[7];
                    *puVar8 = *puVar9;
                    puVar8[2] = puVar8[8];
                  }
                  else {
                    uVar15 = puVar8[2];
                    uVar21 = puVar8[1];
                    uVar18 = *puVar8;
                    puVar8[1] = puVar8[4];
                    *puVar8 = *puVar5;
                    puVar8[2] = puVar8[5];
                    puVar8[4] = uVar21;
                    *puVar5 = uVar18;
                    puVar8[5] = uVar15;
                    puVar10 = puVar9;
                    func_0x00010a286750(puVar9,puVar5);
                    if (((uint)puVar10 >> 7 & 1) == 0) goto LAB_10a28804c;
                    uVar15 = puVar8[5];
                    uVar21 = puVar8[4];
                    uVar18 = *puVar5;
                    puVar8[4] = puVar8[7];
                    *puVar5 = *puVar9;
                    puVar8[5] = puVar8[8];
                  }
                  puVar8[7] = uVar21;
                  *puVar9 = uVar18;
                  puVar8[8] = uVar15;
                }
LAB_10a28804c:
                puVar10 = puVar12;
                puVar11 = puVar9;
                func_0x00010a286750(puVar12,puVar9);
                if (((uint)puVar10 >> 7 & 1) != 0) {
                  uVar15 = puVar8[8];
                  uVar22 = puVar8[7];
                  uVar21 = *puVar9;
                  uVar18 = puVar20[-1];
                  uVar23 = *puVar12;
                  puVar8[7] = puVar20[-2];
                  *puVar9 = uVar23;
                  puVar8[8] = uVar18;
                  puVar20[-2] = uVar22;
                  *puVar12 = uVar21;
                  puVar20[-1] = uVar15;
                  puVar10 = puVar9;
                  puVar11 = puVar5;
                  func_0x00010a286750(puVar9,puVar5);
                  if (((uint)puVar10 >> 7 & 1) != 0) {
                    uVar15 = puVar8[5];
                    uVar21 = puVar8[4];
                    uVar18 = *puVar5;
                    puVar8[4] = puVar8[7];
                    *puVar5 = *puVar9;
                    puVar8[5] = puVar8[8];
                    puVar8[7] = uVar21;
                    *puVar9 = uVar18;
                    puVar8[8] = uVar15;
                    puVar10 = puVar5;
                    puVar11 = puVar8;
                    func_0x00010a286750(puVar5,puVar8);
                    if (((uint)puVar10 >> 7 & 1) != 0) {
                      uVar15 = puVar8[2];
                      uVar21 = puVar8[1];
                      uVar18 = *puVar8;
                      puVar8[1] = puVar8[4];
                      *puVar8 = *puVar5;
                      puVar8[2] = puVar8[5];
                      puVar8[4] = uVar21;
                      *puVar5 = uVar18;
                      puVar8[5] = uVar15;
                    }
                  }
                }
                auVar27._8_8_ = puVar11;
                auVar27._0_8_ = puVar10;
                return auVar27;
              }
              if (uVar17 != 5) goto LAB_10a28757c;
              FUN_10a287f38(puVar8,puVar8 + 3,puVar8 + 6,puVar8 + 9,param_3);
              param_2 = puVar8 + 9;
              puVar5 = puVar12;
              func_0x00010a286750(puVar12,param_2);
              if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287f18;
              uVar15 = puVar8[0xb];
              uVar22 = puVar8[10];
              uVar21 = puVar8[9];
              uVar18 = puVar20[-1];
              uVar23 = *puVar12;
              puVar8[10] = puVar20[-2];
              puVar8[9] = uVar23;
              puVar8[0xb] = uVar18;
              puVar20[-2] = uVar22;
              *puVar12 = uVar21;
              puVar20[-1] = uVar15;
              puVar5 = puVar8 + 9;
              param_2 = puVar8 + 6;
              func_0x00010a286750(puVar5,param_2);
              if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287f18;
              uVar15 = puVar8[8];
              uVar21 = puVar8[7];
              uVar18 = puVar8[6];
              puVar8[7] = puVar8[10];
              puVar8[6] = puVar8[9];
              puVar8[8] = puVar8[0xb];
              puVar8[10] = uVar21;
              puVar8[9] = uVar18;
              puVar8[0xb] = uVar15;
              puVar5 = puVar8 + 6;
              param_2 = puVar8 + 3;
              func_0x00010a286750(puVar5,param_2);
              if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287f18;
              uVar15 = puVar8[5];
              uVar21 = puVar8[4];
              uVar18 = puVar8[3];
              puVar8[4] = puVar8[7];
              puVar8[3] = puVar8[6];
              puVar8[5] = puVar8[8];
              puVar8[7] = uVar21;
              puVar8[6] = uVar18;
              puVar8[8] = uVar15;
            }
            puVar5 = puVar8 + 3;
            param_2 = puVar8;
            func_0x00010a286750(puVar5,puVar8);
            if (((uint)puVar5 >> 7 & 1) != 0) {
              uVar21 = puVar8[1];
              uVar18 = *puVar8;
              uVar15 = puVar8[2];
              puVar8[1] = puVar8[4];
              *puVar8 = puVar8[3];
              puVar8[2] = puVar8[5];
              puVar8[4] = uVar21;
              puVar8[3] = uVar18;
              puVar8[5] = uVar15;
            }
            goto LAB_10a287f18;
          }
          if (uVar17 < 2) goto LAB_10a287f18;
          if (uVar17 == 2) {
            puVar5 = puVar12;
            param_2 = puVar8;
            func_0x00010a286750(puVar12,puVar8);
            if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287f18;
LAB_10a287ee8:
            uVar22 = puVar8[1];
            uVar18 = *puVar8;
            uVar15 = puVar8[2];
            uVar23 = puVar20[-2];
            uVar21 = *puVar12;
            puVar8[2] = puVar20[-1];
            puVar8[1] = uVar23;
            *puVar8 = uVar21;
            puVar20[-2] = uVar22;
            *puVar12 = uVar18;
LAB_10a287f14:
            puVar20[-1] = uVar15;
            goto LAB_10a287f18;
          }
LAB_10a28757c:
          if ((long)uVar14 < 0x240) {
            if ((uStack_1c4 & 1) == 0) {
              puVar9 = puVar8;
              puVar5 = puVar20;
              if ((puVar8 != puVar20) && (puVar12 = puVar8 + 3, puVar12 != puVar20)) {
                puVar10 = puVar8 + -3;
                lVar4 = -0x18;
                lVar13 = 0x18;
                lVar16 = 0;
                do {
                  lVar19 = lVar13;
                  puVar5 = (undefined8 *)((long)puVar8 + lVar16);
                  puVar9 = puVar12;
                  func_0x00010a286750(puVar12,puVar5);
                  if (((uint)puVar9 >> 7 & 1) != 0) {
                    uStack_c8 = puVar12[1];
                    uStack_d0 = *puVar12;
                    uVar15 = puVar12[2];
                    puVar12 = puVar10;
                    lVar13 = lVar4;
                    do {
                      puVar11 = puVar12;
                      puVar11[7] = puVar11[4];
                      puVar11[6] = puVar11[3];
                      puVar11[8] = puVar11[5];
                      if (lVar13 == 0) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2882b8);
                        (*pcVar2)();
                      }
                      puVar9 = &uStack_d0;
                      puVar5 = puVar11;
                      func_0x00010a286750(&uStack_d0,puVar11);
                      lVar13 = lVar13 + 0x18;
                      puVar12 = puVar11 + -3;
                    } while (((uint)puVar9 >> 7 & 1) != 0);
                    puVar11[4] = uStack_c8;
                    puVar11[3] = uStack_d0;
                    puVar11[5] = uVar15;
                  }
                  lVar13 = lVar19 + 0x18;
                  puVar12 = (undefined8 *)((long)puVar8 + lVar13);
                  puVar10 = puVar10 + 3;
                  lVar4 = lVar4 + -0x18;
                  lVar16 = lVar19;
                } while (puVar12 != puVar20);
              }
              auVar29._8_8_ = puVar5;
              auVar29._0_8_ = puVar9;
              return auVar29;
            }
            puVar9 = puVar8;
            puVar5 = puVar20;
            if (puVar8 == puVar20) goto LAB_10a2881c8;
            if (puVar8 + 3 == puVar20) goto LAB_10a2881c8;
            lVar13 = 0;
            puVar12 = puVar8 + 3;
            puVar10 = puVar8;
            goto LAB_10a288130;
          }
          if (param_4 == 1) {
            if (puVar8 != puVar20) {
              puVar5 = puVar20;
              if (puVar8 != puVar20) {
                uVar14 = (long)puVar20 - (long)puVar8;
                lVar13 = ((long)uVar14 >> 3) * -0x5555555555555555;
                if (0x18 < (long)uVar14) {
                  uVar17 = lVar13 - 2U >> 1;
                  lVar16 = uVar17 + 1;
                  puVar9 = puVar8 + uVar17 * 3;
                  do {
                    puVar5 = param_3;
                    FUN_10a288b4c(puVar8,param_3,lVar13,puVar9);
                    puVar9 = puVar9 + -3;
                    lVar16 = lVar16 + -1;
                  } while (lVar16 != 0);
                }
                if (0x18 < (long)uVar14) {
                  lVar13 = (uVar14 >> 3) * -0x5555555555555555;
                  puVar9 = puVar20;
                  do {
                    puVar10 = puVar9 + -3;
                    uStack_c8 = puVar8[1];
                    uStack_d0 = *puVar8;
                    uVar15 = puVar8[2];
                    puVar12 = puVar8;
                    puVar5 = param_3;
                    FUN_10a288ca4(puVar8,param_3,lVar13);
                    if (puVar10 == puVar12) {
                      puVar12[1] = uStack_c8;
                      *puVar12 = uStack_d0;
                      puVar12[2] = uVar15;
                    }
                    else {
                      uVar21 = puVar9[-2];
                      uVar18 = *puVar10;
                      puVar12[2] = puVar9[-1];
                      puVar12[1] = uVar21;
                      *puVar12 = uVar18;
                      puVar5 = puVar12 + 3;
                      puVar9[-2] = uStack_c8;
                      *puVar10 = uStack_d0;
                      puVar9[-1] = uVar15;
                      FUN_10a288d54(puVar8,puVar5,param_3,
                                    ((long)puVar5 - (long)puVar8 >> 3) * -0x5555555555555555);
                    }
                    bVar1 = 2 < lVar13;
                    lVar13 = lVar13 + -1;
                    puVar9 = puVar10;
                  } while (bVar1);
                }
              }
              auVar30._8_8_ = puVar5;
              auVar30._0_8_ = puVar20;
              return auVar30;
            }
            goto LAB_10a287f18;
          }
          puVar5 = puVar8 + (uVar17 >> 1) * 3;
          if (uVar14 < 0xc01) {
            puVar9 = puVar8;
            func_0x00010a286750(puVar8,puVar5);
            puVar6 = puVar12;
            func_0x00010a286750(puVar12,puVar8);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if ((char)puVar6 < '\0') {
                uVar21 = puVar8[1];
                uVar15 = *puVar8;
                uStack_d0 = puVar8[2];
                uVar22 = puVar20[-2];
                uVar18 = *puVar12;
                puVar8[2] = puVar20[-1];
                puVar8[1] = uVar22;
                *puVar8 = uVar18;
                puVar20[-2] = uVar21;
                *puVar12 = uVar15;
                puVar20[-1] = uStack_d0;
                puVar9 = puVar8;
                func_0x00010a286750(puVar8,puVar5);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar21 = puVar5[1];
                  uVar15 = *puVar5;
                  uStack_d0 = puVar5[2];
                  uVar22 = puVar8[1];
                  uVar18 = *puVar8;
                  puVar5[2] = puVar8[2];
                  puVar5[1] = uVar22;
                  *puVar5 = uVar18;
                  puVar8[2] = uStack_d0;
                  puVar8[1] = uVar21;
                  *puVar8 = uVar15;
                }
              }
            }
            else {
              if ((char)puVar6 < '\0') {
                uStack_d8 = puVar5[1];
                uStack_e0 = *puVar5;
                uStack_d0 = puVar5[2];
                uVar18 = puVar20[-2];
                uVar15 = *puVar12;
                puVar5[2] = puVar20[-1];
                puVar5[1] = uVar18;
                *puVar5 = uVar15;
              }
              else {
                uVar21 = puVar5[1];
                uVar15 = *puVar5;
                uStack_d0 = puVar5[2];
                uVar22 = puVar8[1];
                uVar18 = *puVar8;
                puVar5[2] = puVar8[2];
                puVar5[1] = uVar22;
                *puVar5 = uVar18;
                puVar8[2] = uStack_d0;
                puVar8[1] = uVar21;
                *puVar8 = uVar15;
                puVar5 = puVar12;
                func_0x00010a286750(puVar12,puVar8);
                if (((uint)puVar5 >> 7 & 1) == 0) goto LAB_10a287bb4;
                uStack_d8 = puVar8[1];
                uStack_e0 = *puVar8;
                uStack_d0 = puVar8[2];
                uVar18 = puVar20[-2];
                uVar15 = *puVar12;
                puVar8[2] = puVar20[-1];
                puVar8[1] = uVar18;
                *puVar8 = uVar15;
              }
              puVar20[-2] = uStack_d8;
              *puVar12 = uStack_e0;
              puVar20[-1] = uStack_d0;
            }
          }
          else {
            puVar9 = puVar5;
            func_0x00010a286750(puVar5,puVar8);
            puVar6 = puVar12;
            func_0x00010a286750(puVar12,puVar5);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if ((char)puVar6 < '\0') {
                uVar21 = puVar5[1];
                uVar15 = *puVar5;
                uStack_d0 = puVar5[2];
                uVar22 = puVar20[-2];
                uVar18 = *puVar12;
                puVar5[2] = puVar20[-1];
                puVar5[1] = uVar22;
                *puVar5 = uVar18;
                puVar20[-2] = uVar21;
                *puVar12 = uVar15;
                puVar20[-1] = uStack_d0;
                puVar9 = puVar5;
                func_0x00010a286750(puVar5,puVar8);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar21 = puVar8[1];
                  uVar15 = *puVar8;
                  uStack_d0 = puVar8[2];
                  uVar22 = puVar5[1];
                  uVar18 = *puVar5;
                  puVar8[2] = puVar5[2];
                  puVar8[1] = uVar22;
                  *puVar8 = uVar18;
                  puVar5[2] = uStack_d0;
                  puVar5[1] = uVar21;
                  *puVar5 = uVar15;
                }
              }
            }
            else {
              if ((char)puVar6 < '\0') {
                uStack_d8 = puVar8[1];
                uStack_e0 = *puVar8;
                uStack_d0 = puVar8[2];
                uVar18 = puVar20[-2];
                uVar15 = *puVar12;
                puVar8[2] = puVar20[-1];
                puVar8[1] = uVar18;
                *puVar8 = uVar15;
              }
              else {
                uVar21 = puVar8[1];
                uVar15 = *puVar8;
                uStack_d0 = puVar8[2];
                uVar22 = puVar5[1];
                uVar18 = *puVar5;
                puVar8[2] = puVar5[2];
                puVar8[1] = uVar22;
                *puVar8 = uVar18;
                puVar5[2] = uStack_d0;
                puVar5[1] = uVar21;
                *puVar5 = uVar15;
                puVar9 = puVar12;
                func_0x00010a286750(puVar12,puVar5);
                if (((uint)puVar9 >> 7 & 1) == 0) goto LAB_10a2877d8;
                uStack_d8 = puVar5[1];
                uStack_e0 = *puVar5;
                uStack_d0 = puVar5[2];
                uVar18 = puVar20[-2];
                uVar15 = *puVar12;
                puVar5[2] = puVar20[-1];
                puVar5[1] = uVar18;
                *puVar5 = uVar15;
              }
              puVar20[-2] = uStack_d8;
              *puVar12 = uStack_e0;
              puVar20[-1] = uStack_d0;
            }
LAB_10a2877d8:
            puVar7 = puVar5 + -3;
            puVar9 = puVar7;
            func_0x00010a286750(puVar7,puVar8 + 3);
            puVar6 = puVar10;
            func_0x00010a286750(puVar10,puVar7);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if ((char)puVar6 < '\0') {
                uVar21 = puVar5[-2];
                uVar15 = *puVar7;
                uStack_d0 = puVar5[-1];
                uVar22 = puVar20[-5];
                uVar18 = *puVar10;
                puVar5[-1] = puVar20[-4];
                puVar5[-2] = uVar22;
                *puVar7 = uVar18;
                puVar20[-5] = uVar21;
                *puVar10 = uVar15;
                puVar20[-4] = uStack_d0;
                puVar9 = puVar7;
                func_0x00010a286750(puVar7,puVar8 + 3);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar21 = puVar8[4];
                  uVar18 = puVar8[3];
                  uStack_d0 = puVar8[5];
                  uVar15 = puVar5[-1];
                  uVar22 = *puVar7;
                  puVar8[4] = puVar5[-2];
                  puVar8[3] = uVar22;
                  puVar8[5] = uVar15;
                  puVar5[-1] = uStack_d0;
                  puVar5[-2] = uVar21;
                  *puVar7 = uVar18;
                }
              }
            }
            else {
              if ((char)puVar6 < '\0') {
                uVar15 = puVar8[5];
                uVar22 = puVar8[4];
                uVar21 = puVar8[3];
                uVar18 = puVar20[-4];
                uVar23 = *puVar10;
                puVar8[4] = puVar20[-5];
                puVar8[3] = uVar23;
                puVar8[5] = uVar18;
                puVar20[-5] = uVar22;
                *puVar10 = uVar21;
              }
              else {
                uVar21 = puVar8[4];
                uVar18 = puVar8[3];
                uStack_d0 = puVar8[5];
                uVar15 = puVar5[-1];
                uVar22 = *puVar7;
                puVar8[4] = puVar5[-2];
                puVar8[3] = uVar22;
                puVar8[5] = uVar15;
                puVar5[-1] = uStack_d0;
                puVar5[-2] = uVar21;
                *puVar7 = uVar18;
                puVar9 = puVar10;
                func_0x00010a286750(puVar10,puVar7);
                if (((uint)puVar9 >> 7 & 1) == 0) goto LAB_10a287930;
                uVar22 = puVar5[-2];
                uVar18 = *puVar7;
                uVar15 = puVar5[-1];
                uVar23 = puVar20[-5];
                uVar21 = *puVar10;
                puVar5[-1] = puVar20[-4];
                puVar5[-2] = uVar23;
                *puVar7 = uVar21;
                puVar20[-5] = uVar22;
                *puVar10 = uVar18;
                uStack_d0 = uVar15;
              }
              puVar20[-4] = uVar15;
            }
LAB_10a287930:
            puVar9 = puVar5 + 3;
            func_0x00010a286750(puVar9,puVar8 + 6);
            puVar6 = puVar11;
            func_0x00010a286750(puVar11,puVar5 + 3);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if ((char)puVar6 < '\0') {
                uVar21 = puVar5[4];
                uVar15 = puVar5[3];
                uStack_d0 = puVar5[5];
                uVar22 = puVar20[-8];
                uVar18 = *puVar11;
                puVar5[5] = puVar20[-7];
                puVar5[4] = uVar22;
                puVar5[3] = uVar18;
                puVar20[-8] = uVar21;
                *puVar11 = uVar15;
                puVar20[-7] = uStack_d0;
                puVar9 = puVar5 + 3;
                func_0x00010a286750(puVar9,puVar8 + 6);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar21 = puVar8[7];
                  uVar18 = puVar8[6];
                  uStack_d0 = puVar8[8];
                  uVar15 = puVar5[5];
                  uVar22 = puVar5[3];
                  puVar8[7] = puVar5[4];
                  puVar8[6] = uVar22;
                  puVar8[8] = uVar15;
                  puVar5[5] = uStack_d0;
                  puVar5[4] = uVar21;
                  puVar5[3] = uVar18;
                }
              }
            }
            else {
              if ((char)puVar6 < '\0') {
                uVar15 = puVar8[8];
                uVar22 = puVar8[7];
                uVar21 = puVar8[6];
                uVar18 = puVar20[-7];
                uVar23 = *puVar11;
                puVar8[7] = puVar20[-8];
                puVar8[6] = uVar23;
                puVar8[8] = uVar18;
                puVar20[-8] = uVar22;
                *puVar11 = uVar21;
              }
              else {
                uVar21 = puVar8[7];
                uVar18 = puVar8[6];
                uStack_d0 = puVar8[8];
                uVar15 = puVar5[5];
                uVar22 = puVar5[3];
                puVar8[7] = puVar5[4];
                puVar8[6] = uVar22;
                puVar8[8] = uVar15;
                puVar5[5] = uStack_d0;
                puVar5[4] = uVar21;
                puVar5[3] = uVar18;
                puVar9 = puVar11;
                func_0x00010a286750(puVar11,puVar5 + 3);
                if (((uint)puVar9 >> 7 & 1) == 0) goto LAB_10a287a50;
                uVar22 = puVar5[4];
                uVar18 = puVar5[3];
                uVar15 = puVar5[5];
                uVar23 = puVar20[-8];
                uVar21 = *puVar11;
                puVar5[5] = puVar20[-7];
                puVar5[4] = uVar23;
                puVar5[3] = uVar21;
                puVar20[-8] = uVar22;
                *puVar11 = uVar18;
                uStack_d0 = uVar15;
              }
              puVar20[-7] = uVar15;
            }
LAB_10a287a50:
            puVar6 = puVar5;
            func_0x00010a286750(puVar5,puVar7);
            puVar9 = puVar5 + 3;
            func_0x00010a286750(puVar9,puVar5);
            if (((uint)puVar6 >> 7 & 1) == 0) {
              if ((char)puVar9 < '\0') {
                uVar18 = puVar5[1];
                uVar15 = *puVar5;
                uStack_d0 = puVar5[2];
                puVar5[1] = puVar5[4];
                *puVar5 = puVar5[3];
                puVar5[2] = puVar5[5];
                puVar5[5] = uStack_d0;
                puVar5[4] = uVar18;
                puVar5[3] = uVar15;
                puVar9 = puVar5;
                func_0x00010a286750(puVar5,puVar7);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar21 = puVar5[-2];
                  uVar18 = *puVar7;
                  uVar15 = puVar5[-1];
                  puVar5[-2] = puVar5[1];
                  *puVar7 = *puVar5;
                  puVar5[-1] = puVar5[2];
                  puVar5[2] = uVar15;
                  puVar5[1] = uVar21;
                  *puVar5 = uVar18;
                }
              }
            }
            else {
              if ((char)puVar9 < '\0') {
                uStack_d8 = puVar5[-2];
                uStack_e0 = *puVar7;
                uStack_d0 = puVar5[-1];
                puVar5[-2] = puVar5[4];
                *puVar7 = puVar5[3];
                puVar5[-1] = puVar5[5];
              }
              else {
                uVar18 = puVar5[-2];
                uVar15 = *puVar7;
                uStack_d0 = puVar5[-1];
                puVar5[-2] = puVar5[1];
                *puVar7 = *puVar5;
                puVar5[-1] = puVar5[2];
                puVar5[2] = uStack_d0;
                puVar5[1] = uVar18;
                *puVar5 = uVar15;
                puVar9 = puVar5 + 3;
                func_0x00010a286750(puVar9,puVar5);
                if (((uint)puVar9 >> 7 & 1) == 0) goto LAB_10a287b84;
                uStack_d8 = puVar5[1];
                uStack_e0 = *puVar5;
                uStack_d0 = puVar5[2];
                puVar5[1] = puVar5[4];
                *puVar5 = puVar5[3];
                puVar5[2] = puVar5[5];
              }
              puVar5[5] = uStack_d0;
              puVar5[4] = uStack_d8;
              puVar5[3] = uStack_e0;
            }
LAB_10a287b84:
            uVar21 = puVar8[1];
            uVar15 = *puVar8;
            uStack_d0 = puVar8[2];
            uVar22 = puVar5[1];
            uVar18 = *puVar5;
            puVar8[2] = puVar5[2];
            puVar8[1] = uVar22;
            *puVar8 = uVar18;
            puVar5[2] = uStack_d0;
            puVar5[1] = uVar21;
            *puVar5 = uVar15;
          }
LAB_10a287bb4:
          param_2 = puVar20;
          if ((uStack_1c4 & 1) == 0) {
            puVar5 = puVar8 + -3;
            func_0x00010a286750(puVar5,puVar8);
            if (((uint)puVar5 >> 7 & 1) == 0) {
              FUN_10a2882b8(puVar8,puVar20,param_3);
              puVar9 = puVar8;
              goto LAB_10a287c50;
            }
          }
          puVar6 = puVar8;
          puVar5 = puVar20;
          FUN_10a288424(puVar8,puVar20,param_3);
          if (((ulong)puVar5 & 1) == 0) break;
          puVar7 = puVar8;
          FUN_10a2885a0(puVar8,puVar6,param_3);
          puVar9 = puVar6 + 3;
          puVar5 = puVar9;
          FUN_10a2885a0(puVar9,puVar20,param_3);
          if ((int)puVar5 != 0) {
            param_4 = -param_4;
            puVar20 = puVar6;
            if (((ulong)puVar7 & 1) != 0) {
LAB_10a287f18:
              auVar26._8_8_ = param_2;
              auVar26._0_8_ = puVar5;
              return auVar26;
            }
            goto LAB_10a287518;
          }
        } while (((ulong)puVar7 & 1) != 0);
        param_2 = puVar6;
        FUN_10a2874e8(puVar8,puVar6,param_3,-param_4,uStack_1c4 & 1);
        puVar9 = puVar6 + 3;
LAB_10a287c50:
        uStack_1c4 = 0;
        param_4 = -param_4;
        puVar5 = puVar8;
      } while( true );
    }
    lVar16 = param_1[1];
    plVar3 = param_1;
    FUN_10a2874a4();
    lVar13 = (long)plVar3 + (lVar16 - lVar13);
    lVar16 = (long)param_2 * 3;
    param_2 = (undefined8 *)*param_1;
    lVar19 = lVar13 - (param_1[1] - (long)param_2);
    _memcpy(lVar19);
    lVar4 = *param_1;
    *param_1 = lVar19;
    param_1[1] = lVar13;
    param_1[2] = (long)(plVar3 + lVar16);
    param_1 = (long *)0x0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar31._8_8_ = param_2;
      auVar31._0_8_ = lVar4;
      return auVar31;
    }
  }
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  return auVar24;
LAB_10a288130:
  puVar5 = puVar10;
  puVar10 = puVar12;
  puVar9 = puVar10;
  func_0x00010a286750(puVar10,puVar5);
  if (((uint)puVar9 >> 7 & 1) != 0) {
    uVar21 = puVar10[1];
    uVar18 = *puVar10;
    uVar15 = puVar10[2];
    lVar16 = lVar13;
    do {
      lVar4 = lVar16;
      puVar12 = (undefined8 *)((long)puVar8 + lVar4);
      puVar12[4] = puVar12[1];
      puVar12[3] = *puVar12;
      puVar12[5] = puVar12[2];
      puVar12 = puVar8;
      if (lVar4 == 0) goto LAB_10a288194;
      puVar5 = (undefined8 *)(lVar4 + -0x18 + (long)puVar8);
      puVar9 = (undefined8 *)&stack0xffffffffffffff40;
      func_0x00010a286750(&stack0xffffffffffffff40,puVar5);
      lVar16 = lVar4 + -0x18;
    } while (((uint)puVar9 >> 7 & 1) != 0);
    puVar12 = (undefined8 *)((long)puVar8 + lVar4);
LAB_10a288194:
    puVar12[1] = uVar21;
    *puVar12 = uVar18;
    puVar12[2] = uVar15;
  }
  lVar13 = lVar13 + 0x18;
  puVar12 = puVar10 + 3;
  if (puVar10 + 3 == puVar20) {
LAB_10a2881c8:
    auVar28._8_8_ = puVar5;
    auVar28._0_8_ = puVar9;
    return auVar28;
  }
  goto LAB_10a288130;
}



/* Entry: 10a287490; end: 10a2874a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a288a30) */
/* WARNING: Removing unreachable block (ram,0x00010a288a34) */
/* WARNING: Removing unreachable block (ram,0x00010a288a44) */
/* WARNING: Removing unreachable block (ram,0x00010a288a78) */

undefined1  [16]
FUN_10a287490(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uStack_194;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  uStack_194 = param_5;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar4 = (long)param_2 * 0x18;
    __Znwm(lVar4);
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar4;
    return auVar23;
  }
  func_0x000109ffded8();
  puVar7 = puVar3;
  puVar17 = param_2;
LAB_10a287518:
  puVar11 = puVar17 + -3;
  puVar9 = puVar17 + -6;
  puVar10 = puVar17 + -9;
  puVar8 = puVar7;
  do {
    param_4 = -param_4;
    do {
      puVar7 = puVar8;
      param_4 = param_4 + 1;
      uVar12 = (long)puVar17 - (long)puVar7;
      uVar15 = ((long)uVar12 >> 3) * -0x5555555555555555;
      if (2 < (long)uVar15) {
        if (uVar15 == 3) {
          puVar8 = puVar7 + 3;
          func_0x00010a286750(puVar8,puVar7);
          param_2 = puVar7 + 3;
          puVar3 = puVar11;
          func_0x00010a286750(puVar11,param_2);
          if (((uint)puVar8 >> 7 & 1) != 0) {
            if ((char)puVar3 < '\0') goto LAB_10a287ee8;
            uVar16 = puVar7[1];
            uVar13 = *puVar7;
            uStack_a0 = puVar7[2];
            puVar7[1] = puVar7[4];
            *puVar7 = puVar7[3];
            puVar7[2] = puVar7[5];
            puVar7[4] = uVar16;
            puVar7[3] = uVar13;
            puVar7[5] = uStack_a0;
            param_2 = puVar7 + 3;
            puVar3 = puVar11;
            func_0x00010a286750(puVar11,param_2);
            if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287f18;
            uVar13 = puVar7[5];
            uVar21 = puVar7[4];
            uVar20 = puVar7[3];
            uVar16 = puVar17[-1];
            uVar22 = *puVar11;
            puVar7[4] = puVar17[-2];
            puVar7[3] = uVar22;
            puVar7[5] = uVar16;
            puVar17[-2] = uVar21;
            *puVar11 = uVar20;
            goto LAB_10a287f14;
          }
          if (-1 < (char)puVar3) goto LAB_10a287f18;
          uVar13 = puVar7[5];
          uVar21 = puVar7[4];
          uVar20 = puVar7[3];
          uVar16 = puVar17[-1];
          uVar22 = *puVar11;
          puVar7[4] = puVar17[-2];
          puVar7[3] = uVar22;
          puVar7[5] = uVar16;
          puVar17[-2] = uVar21;
          *puVar11 = uVar20;
          puVar17[-1] = uVar13;
        }
        else {
          if (uVar15 == 4) {
            puVar3 = puVar7 + 3;
            puVar8 = puVar7 + 6;
            puVar9 = puVar3;
            func_0x00010a286750(puVar3,puVar7,puVar8,puVar11,param_3);
            puVar10 = puVar8;
            func_0x00010a286750(puVar8,puVar3);
            if (((uint)puVar9 >> 7 & 1) == 0) {
              if ((char)puVar10 < '\0') {
                uVar13 = puVar7[5];
                uVar20 = puVar7[4];
                uVar16 = *puVar3;
                puVar7[4] = puVar7[7];
                *puVar3 = *puVar8;
                puVar7[5] = puVar7[8];
                puVar7[7] = uVar20;
                *puVar8 = uVar16;
                puVar7[8] = uVar13;
                puVar9 = puVar3;
                func_0x00010a286750(puVar3,puVar7);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar13 = puVar7[2];
                  uVar20 = puVar7[1];
                  uVar16 = *puVar7;
                  puVar7[1] = puVar7[4];
                  *puVar7 = *puVar3;
                  puVar7[2] = puVar7[5];
                  puVar7[4] = uVar20;
                  *puVar3 = uVar16;
                  puVar7[5] = uVar13;
                }
              }
            }
            else {
              if ((char)puVar10 < '\0') {
                uVar13 = puVar7[2];
                uVar20 = puVar7[1];
                uVar16 = *puVar7;
                puVar7[1] = puVar7[7];
                *puVar7 = *puVar8;
                puVar7[2] = puVar7[8];
              }
              else {
                uVar13 = puVar7[2];
                uVar20 = puVar7[1];
                uVar16 = *puVar7;
                puVar7[1] = puVar7[4];
                *puVar7 = *puVar3;
                puVar7[2] = puVar7[5];
                puVar7[4] = uVar20;
                *puVar3 = uVar16;
                puVar7[5] = uVar13;
                puVar9 = puVar8;
                func_0x00010a286750(puVar8,puVar3);
                if (((uint)puVar9 >> 7 & 1) == 0) goto LAB_10a28804c;
                uVar13 = puVar7[5];
                uVar20 = puVar7[4];
                uVar16 = *puVar3;
                puVar7[4] = puVar7[7];
                *puVar3 = *puVar8;
                puVar7[5] = puVar7[8];
              }
              puVar7[7] = uVar20;
              *puVar8 = uVar16;
              puVar7[8] = uVar13;
            }
LAB_10a28804c:
            puVar9 = puVar11;
            puVar10 = puVar8;
            func_0x00010a286750(puVar11,puVar8);
            if (((uint)puVar9 >> 7 & 1) != 0) {
              uVar13 = puVar7[8];
              uVar21 = puVar7[7];
              uVar20 = *puVar8;
              uVar16 = puVar17[-1];
              uVar22 = *puVar11;
              puVar7[7] = puVar17[-2];
              *puVar8 = uVar22;
              puVar7[8] = uVar16;
              puVar17[-2] = uVar21;
              *puVar11 = uVar20;
              puVar17[-1] = uVar13;
              puVar9 = puVar8;
              puVar10 = puVar3;
              func_0x00010a286750(puVar8,puVar3);
              if (((uint)puVar9 >> 7 & 1) != 0) {
                uVar13 = puVar7[5];
                uVar20 = puVar7[4];
                uVar16 = *puVar3;
                puVar7[4] = puVar7[7];
                *puVar3 = *puVar8;
                puVar7[5] = puVar7[8];
                puVar7[7] = uVar20;
                *puVar8 = uVar16;
                puVar7[8] = uVar13;
                puVar9 = puVar3;
                puVar10 = puVar7;
                func_0x00010a286750(puVar3,puVar7);
                if (((uint)puVar9 >> 7 & 1) != 0) {
                  uVar13 = puVar7[2];
                  uVar20 = puVar7[1];
                  uVar16 = *puVar7;
                  puVar7[1] = puVar7[4];
                  *puVar7 = *puVar3;
                  puVar7[2] = puVar7[5];
                  puVar7[4] = uVar20;
                  *puVar3 = uVar16;
                  puVar7[5] = uVar13;
                }
              }
            }
            auVar25._8_8_ = puVar10;
            auVar25._0_8_ = puVar9;
            return auVar25;
          }
          if (uVar15 != 5) goto LAB_10a28757c;
          FUN_10a287f38(puVar7,puVar7 + 3,puVar7 + 6,puVar7 + 9,param_3);
          param_2 = puVar7 + 9;
          puVar3 = puVar11;
          func_0x00010a286750(puVar11,param_2);
          if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar13 = puVar7[0xb];
          uVar21 = puVar7[10];
          uVar20 = puVar7[9];
          uVar16 = puVar17[-1];
          uVar22 = *puVar11;
          puVar7[10] = puVar17[-2];
          puVar7[9] = uVar22;
          puVar7[0xb] = uVar16;
          puVar17[-2] = uVar21;
          *puVar11 = uVar20;
          puVar17[-1] = uVar13;
          puVar3 = puVar7 + 9;
          param_2 = puVar7 + 6;
          func_0x00010a286750(puVar3,param_2);
          if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar13 = puVar7[8];
          uVar20 = puVar7[7];
          uVar16 = puVar7[6];
          puVar7[7] = puVar7[10];
          puVar7[6] = puVar7[9];
          puVar7[8] = puVar7[0xb];
          puVar7[10] = uVar20;
          puVar7[9] = uVar16;
          puVar7[0xb] = uVar13;
          puVar3 = puVar7 + 6;
          param_2 = puVar7 + 3;
          func_0x00010a286750(puVar3,param_2);
          if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar13 = puVar7[5];
          uVar20 = puVar7[4];
          uVar16 = puVar7[3];
          puVar7[4] = puVar7[7];
          puVar7[3] = puVar7[6];
          puVar7[5] = puVar7[8];
          puVar7[7] = uVar20;
          puVar7[6] = uVar16;
          puVar7[8] = uVar13;
        }
        puVar3 = puVar7 + 3;
        param_2 = puVar7;
        func_0x00010a286750(puVar3,puVar7);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar20 = puVar7[1];
          uVar16 = *puVar7;
          uVar13 = puVar7[2];
          puVar7[1] = puVar7[4];
          *puVar7 = puVar7[3];
          puVar7[2] = puVar7[5];
          puVar7[4] = uVar20;
          puVar7[3] = uVar16;
          puVar7[5] = uVar13;
        }
        goto LAB_10a287f18;
      }
      if (uVar15 < 2) goto LAB_10a287f18;
      if (uVar15 == 2) {
        puVar3 = puVar11;
        param_2 = puVar7;
        func_0x00010a286750(puVar11,puVar7);
        if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287f18;
LAB_10a287ee8:
        uVar21 = puVar7[1];
        uVar16 = *puVar7;
        uVar13 = puVar7[2];
        uVar22 = puVar17[-2];
        uVar20 = *puVar11;
        puVar7[2] = puVar17[-1];
        puVar7[1] = uVar22;
        *puVar7 = uVar20;
        puVar17[-2] = uVar21;
        *puVar11 = uVar16;
LAB_10a287f14:
        puVar17[-1] = uVar13;
        goto LAB_10a287f18;
      }
LAB_10a28757c:
      if ((long)uVar12 < 0x240) {
        if ((uStack_194 & 1) == 0) {
          puVar8 = puVar7;
          puVar3 = puVar17;
          if ((puVar7 != puVar17) && (puVar11 = puVar7 + 3, puVar11 != puVar17)) {
            puVar9 = puVar7 + -3;
            lVar18 = -0x18;
            lVar4 = 0x18;
            lVar19 = 0;
            do {
              lVar14 = lVar4;
              puVar3 = (undefined8 *)((long)puVar7 + lVar19);
              puVar8 = puVar11;
              func_0x00010a286750(puVar11,puVar3);
              if (((uint)puVar8 >> 7 & 1) != 0) {
                uStack_98 = puVar11[1];
                uStack_a0 = *puVar11;
                uVar13 = puVar11[2];
                puVar11 = puVar9;
                lVar4 = lVar18;
                do {
                  puVar10 = puVar11;
                  puVar10[7] = puVar10[4];
                  puVar10[6] = puVar10[3];
                  puVar10[8] = puVar10[5];
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2882b8);
                    (*pcVar2)();
                  }
                  puVar8 = &uStack_a0;
                  puVar3 = puVar10;
                  func_0x00010a286750(&uStack_a0,puVar10);
                  lVar4 = lVar4 + 0x18;
                  puVar11 = puVar10 + -3;
                } while (((uint)puVar8 >> 7 & 1) != 0);
                puVar10[4] = uStack_98;
                puVar10[3] = uStack_a0;
                puVar10[5] = uVar13;
              }
              lVar4 = lVar14 + 0x18;
              puVar11 = (undefined8 *)((long)puVar7 + lVar4);
              puVar9 = puVar9 + 3;
              lVar18 = lVar18 + -0x18;
              lVar19 = lVar14;
            } while (puVar11 != puVar17);
          }
          auVar27._8_8_ = puVar3;
          auVar27._0_8_ = puVar8;
          return auVar27;
        }
        puVar8 = puVar7;
        puVar3 = puVar17;
        if (puVar7 == puVar17) goto LAB_10a2881c8;
        if (puVar7 + 3 == puVar17) goto LAB_10a2881c8;
        lVar4 = 0;
        puVar11 = puVar7 + 3;
        puVar9 = puVar7;
        goto LAB_10a288130;
      }
      if (param_4 == 1) {
        if (puVar7 != puVar17) {
          puVar3 = puVar17;
          if (puVar7 != puVar17) {
            uVar12 = (long)puVar17 - (long)puVar7;
            lVar4 = ((long)uVar12 >> 3) * -0x5555555555555555;
            if (0x18 < (long)uVar12) {
              uVar15 = lVar4 - 2U >> 1;
              lVar19 = uVar15 + 1;
              puVar8 = puVar7 + uVar15 * 3;
              do {
                puVar3 = param_3;
                FUN_10a288b4c(puVar7,param_3,lVar4,puVar8);
                puVar8 = puVar8 + -3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (0x18 < (long)uVar12) {
              lVar4 = (uVar12 >> 3) * -0x5555555555555555;
              puVar8 = puVar17;
              do {
                puVar9 = puVar8 + -3;
                uStack_98 = puVar7[1];
                uStack_a0 = *puVar7;
                uVar13 = puVar7[2];
                puVar11 = puVar7;
                puVar3 = param_3;
                FUN_10a288ca4(puVar7,param_3,lVar4);
                if (puVar9 == puVar11) {
                  puVar11[1] = uStack_98;
                  *puVar11 = uStack_a0;
                  puVar11[2] = uVar13;
                }
                else {
                  uVar20 = puVar8[-2];
                  uVar16 = *puVar9;
                  puVar11[2] = puVar8[-1];
                  puVar11[1] = uVar20;
                  *puVar11 = uVar16;
                  puVar3 = puVar11 + 3;
                  puVar8[-2] = uStack_98;
                  *puVar9 = uStack_a0;
                  puVar8[-1] = uVar13;
                  FUN_10a288d54(puVar7,puVar3,param_3,
                                ((long)puVar3 - (long)puVar7 >> 3) * -0x5555555555555555);
                }
                bVar1 = 2 < lVar4;
                lVar4 = lVar4 + -1;
                puVar8 = puVar9;
              } while (bVar1);
            }
          }
          auVar28._8_8_ = puVar3;
          auVar28._0_8_ = puVar17;
          return auVar28;
        }
        goto LAB_10a287f18;
      }
      puVar3 = puVar7 + (uVar15 >> 1) * 3;
      if (uVar12 < 0xc01) {
        puVar8 = puVar7;
        func_0x00010a286750(puVar7,puVar3);
        puVar5 = puVar11;
        func_0x00010a286750(puVar11,puVar7);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar5 < '\0') {
            uVar20 = puVar7[1];
            uVar13 = *puVar7;
            uStack_a0 = puVar7[2];
            uVar21 = puVar17[-2];
            uVar16 = *puVar11;
            puVar7[2] = puVar17[-1];
            puVar7[1] = uVar21;
            *puVar7 = uVar16;
            puVar17[-2] = uVar20;
            *puVar11 = uVar13;
            puVar17[-1] = uStack_a0;
            puVar8 = puVar7;
            func_0x00010a286750(puVar7,puVar3);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar3[1];
              uVar13 = *puVar3;
              uStack_a0 = puVar3[2];
              uVar21 = puVar7[1];
              uVar16 = *puVar7;
              puVar3[2] = puVar7[2];
              puVar3[1] = uVar21;
              *puVar3 = uVar16;
              puVar7[2] = uStack_a0;
              puVar7[1] = uVar20;
              *puVar7 = uVar13;
            }
          }
        }
        else {
          if ((char)puVar5 < '\0') {
            uStack_a8 = puVar3[1];
            uStack_b0 = *puVar3;
            uStack_a0 = puVar3[2];
            uVar16 = puVar17[-2];
            uVar13 = *puVar11;
            puVar3[2] = puVar17[-1];
            puVar3[1] = uVar16;
            *puVar3 = uVar13;
          }
          else {
            uVar20 = puVar3[1];
            uVar13 = *puVar3;
            uStack_a0 = puVar3[2];
            uVar21 = puVar7[1];
            uVar16 = *puVar7;
            puVar3[2] = puVar7[2];
            puVar3[1] = uVar21;
            *puVar3 = uVar16;
            puVar7[2] = uStack_a0;
            puVar7[1] = uVar20;
            *puVar7 = uVar13;
            puVar3 = puVar11;
            func_0x00010a286750(puVar11,puVar7);
            if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_10a287bb4;
            uStack_a8 = puVar7[1];
            uStack_b0 = *puVar7;
            uStack_a0 = puVar7[2];
            uVar16 = puVar17[-2];
            uVar13 = *puVar11;
            puVar7[2] = puVar17[-1];
            puVar7[1] = uVar16;
            *puVar7 = uVar13;
          }
          puVar17[-2] = uStack_a8;
          *puVar11 = uStack_b0;
          puVar17[-1] = uStack_a0;
        }
      }
      else {
        puVar8 = puVar3;
        func_0x00010a286750(puVar3,puVar7);
        puVar5 = puVar11;
        func_0x00010a286750(puVar11,puVar3);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar5 < '\0') {
            uVar20 = puVar3[1];
            uVar13 = *puVar3;
            uStack_a0 = puVar3[2];
            uVar21 = puVar17[-2];
            uVar16 = *puVar11;
            puVar3[2] = puVar17[-1];
            puVar3[1] = uVar21;
            *puVar3 = uVar16;
            puVar17[-2] = uVar20;
            *puVar11 = uVar13;
            puVar17[-1] = uStack_a0;
            puVar8 = puVar3;
            func_0x00010a286750(puVar3,puVar7);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar7[1];
              uVar13 = *puVar7;
              uStack_a0 = puVar7[2];
              uVar21 = puVar3[1];
              uVar16 = *puVar3;
              puVar7[2] = puVar3[2];
              puVar7[1] = uVar21;
              *puVar7 = uVar16;
              puVar3[2] = uStack_a0;
              puVar3[1] = uVar20;
              *puVar3 = uVar13;
            }
          }
        }
        else {
          if ((char)puVar5 < '\0') {
            uStack_a8 = puVar7[1];
            uStack_b0 = *puVar7;
            uStack_a0 = puVar7[2];
            uVar16 = puVar17[-2];
            uVar13 = *puVar11;
            puVar7[2] = puVar17[-1];
            puVar7[1] = uVar16;
            *puVar7 = uVar13;
          }
          else {
            uVar20 = puVar7[1];
            uVar13 = *puVar7;
            uStack_a0 = puVar7[2];
            uVar21 = puVar3[1];
            uVar16 = *puVar3;
            puVar7[2] = puVar3[2];
            puVar7[1] = uVar21;
            *puVar7 = uVar16;
            puVar3[2] = uStack_a0;
            puVar3[1] = uVar20;
            *puVar3 = uVar13;
            puVar8 = puVar11;
            func_0x00010a286750(puVar11,puVar3);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a2877d8;
            uStack_a8 = puVar3[1];
            uStack_b0 = *puVar3;
            uStack_a0 = puVar3[2];
            uVar16 = puVar17[-2];
            uVar13 = *puVar11;
            puVar3[2] = puVar17[-1];
            puVar3[1] = uVar16;
            *puVar3 = uVar13;
          }
          puVar17[-2] = uStack_a8;
          *puVar11 = uStack_b0;
          puVar17[-1] = uStack_a0;
        }
LAB_10a2877d8:
        puVar6 = puVar3 + -3;
        puVar8 = puVar6;
        func_0x00010a286750(puVar6,puVar7 + 3);
        puVar5 = puVar9;
        func_0x00010a286750(puVar9,puVar6);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar5 < '\0') {
            uVar20 = puVar3[-2];
            uVar13 = *puVar6;
            uStack_a0 = puVar3[-1];
            uVar21 = puVar17[-5];
            uVar16 = *puVar9;
            puVar3[-1] = puVar17[-4];
            puVar3[-2] = uVar21;
            *puVar6 = uVar16;
            puVar17[-5] = uVar20;
            *puVar9 = uVar13;
            puVar17[-4] = uStack_a0;
            puVar8 = puVar6;
            func_0x00010a286750(puVar6,puVar7 + 3);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar7[4];
              uVar16 = puVar7[3];
              uStack_a0 = puVar7[5];
              uVar13 = puVar3[-1];
              uVar21 = *puVar6;
              puVar7[4] = puVar3[-2];
              puVar7[3] = uVar21;
              puVar7[5] = uVar13;
              puVar3[-1] = uStack_a0;
              puVar3[-2] = uVar20;
              *puVar6 = uVar16;
            }
          }
        }
        else {
          if ((char)puVar5 < '\0') {
            uVar13 = puVar7[5];
            uVar21 = puVar7[4];
            uVar20 = puVar7[3];
            uVar16 = puVar17[-4];
            uVar22 = *puVar9;
            puVar7[4] = puVar17[-5];
            puVar7[3] = uVar22;
            puVar7[5] = uVar16;
            puVar17[-5] = uVar21;
            *puVar9 = uVar20;
          }
          else {
            uVar20 = puVar7[4];
            uVar16 = puVar7[3];
            uStack_a0 = puVar7[5];
            uVar13 = puVar3[-1];
            uVar21 = *puVar6;
            puVar7[4] = puVar3[-2];
            puVar7[3] = uVar21;
            puVar7[5] = uVar13;
            puVar3[-1] = uStack_a0;
            puVar3[-2] = uVar20;
            *puVar6 = uVar16;
            puVar8 = puVar9;
            func_0x00010a286750(puVar9,puVar6);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287930;
            uVar21 = puVar3[-2];
            uVar16 = *puVar6;
            uVar13 = puVar3[-1];
            uVar22 = puVar17[-5];
            uVar20 = *puVar9;
            puVar3[-1] = puVar17[-4];
            puVar3[-2] = uVar22;
            *puVar6 = uVar20;
            puVar17[-5] = uVar21;
            *puVar9 = uVar16;
            uStack_a0 = uVar13;
          }
          puVar17[-4] = uVar13;
        }
LAB_10a287930:
        puVar8 = puVar3 + 3;
        func_0x00010a286750(puVar8,puVar7 + 6);
        puVar5 = puVar10;
        func_0x00010a286750(puVar10,puVar3 + 3);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar5 < '\0') {
            uVar20 = puVar3[4];
            uVar13 = puVar3[3];
            uStack_a0 = puVar3[5];
            uVar21 = puVar17[-8];
            uVar16 = *puVar10;
            puVar3[5] = puVar17[-7];
            puVar3[4] = uVar21;
            puVar3[3] = uVar16;
            puVar17[-8] = uVar20;
            *puVar10 = uVar13;
            puVar17[-7] = uStack_a0;
            puVar8 = puVar3 + 3;
            func_0x00010a286750(puVar8,puVar7 + 6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar7[7];
              uVar16 = puVar7[6];
              uStack_a0 = puVar7[8];
              uVar13 = puVar3[5];
              uVar21 = puVar3[3];
              puVar7[7] = puVar3[4];
              puVar7[6] = uVar21;
              puVar7[8] = uVar13;
              puVar3[5] = uStack_a0;
              puVar3[4] = uVar20;
              puVar3[3] = uVar16;
            }
          }
        }
        else {
          if ((char)puVar5 < '\0') {
            uVar13 = puVar7[8];
            uVar21 = puVar7[7];
            uVar20 = puVar7[6];
            uVar16 = puVar17[-7];
            uVar22 = *puVar10;
            puVar7[7] = puVar17[-8];
            puVar7[6] = uVar22;
            puVar7[8] = uVar16;
            puVar17[-8] = uVar21;
            *puVar10 = uVar20;
          }
          else {
            uVar20 = puVar7[7];
            uVar16 = puVar7[6];
            uStack_a0 = puVar7[8];
            uVar13 = puVar3[5];
            uVar21 = puVar3[3];
            puVar7[7] = puVar3[4];
            puVar7[6] = uVar21;
            puVar7[8] = uVar13;
            puVar3[5] = uStack_a0;
            puVar3[4] = uVar20;
            puVar3[3] = uVar16;
            puVar8 = puVar10;
            func_0x00010a286750(puVar10,puVar3 + 3);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287a50;
            uVar21 = puVar3[4];
            uVar16 = puVar3[3];
            uVar13 = puVar3[5];
            uVar22 = puVar17[-8];
            uVar20 = *puVar10;
            puVar3[5] = puVar17[-7];
            puVar3[4] = uVar22;
            puVar3[3] = uVar20;
            puVar17[-8] = uVar21;
            *puVar10 = uVar16;
            uStack_a0 = uVar13;
          }
          puVar17[-7] = uVar13;
        }
LAB_10a287a50:
        puVar5 = puVar3;
        func_0x00010a286750(puVar3,puVar6);
        puVar8 = puVar3 + 3;
        func_0x00010a286750(puVar8,puVar3);
        if (((uint)puVar5 >> 7 & 1) == 0) {
          if ((char)puVar8 < '\0') {
            uVar16 = puVar3[1];
            uVar13 = *puVar3;
            uStack_a0 = puVar3[2];
            puVar3[1] = puVar3[4];
            *puVar3 = puVar3[3];
            puVar3[2] = puVar3[5];
            puVar3[5] = uStack_a0;
            puVar3[4] = uVar16;
            puVar3[3] = uVar13;
            puVar8 = puVar3;
            func_0x00010a286750(puVar3,puVar6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar3[-2];
              uVar16 = *puVar6;
              uVar13 = puVar3[-1];
              puVar3[-2] = puVar3[1];
              *puVar6 = *puVar3;
              puVar3[-1] = puVar3[2];
              puVar3[2] = uVar13;
              puVar3[1] = uVar20;
              *puVar3 = uVar16;
            }
          }
        }
        else {
          if ((char)puVar8 < '\0') {
            uStack_a8 = puVar3[-2];
            uStack_b0 = *puVar6;
            uStack_a0 = puVar3[-1];
            puVar3[-2] = puVar3[4];
            *puVar6 = puVar3[3];
            puVar3[-1] = puVar3[5];
          }
          else {
            uVar16 = puVar3[-2];
            uVar13 = *puVar6;
            uStack_a0 = puVar3[-1];
            puVar3[-2] = puVar3[1];
            *puVar6 = *puVar3;
            puVar3[-1] = puVar3[2];
            puVar3[2] = uStack_a0;
            puVar3[1] = uVar16;
            *puVar3 = uVar13;
            puVar8 = puVar3 + 3;
            func_0x00010a286750(puVar8,puVar3);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287b84;
            uStack_a8 = puVar3[1];
            uStack_b0 = *puVar3;
            uStack_a0 = puVar3[2];
            puVar3[1] = puVar3[4];
            *puVar3 = puVar3[3];
            puVar3[2] = puVar3[5];
          }
          puVar3[5] = uStack_a0;
          puVar3[4] = uStack_a8;
          puVar3[3] = uStack_b0;
        }
LAB_10a287b84:
        uVar20 = puVar7[1];
        uVar13 = *puVar7;
        uStack_a0 = puVar7[2];
        uVar21 = puVar3[1];
        uVar16 = *puVar3;
        puVar7[2] = puVar3[2];
        puVar7[1] = uVar21;
        *puVar7 = uVar16;
        puVar3[2] = uStack_a0;
        puVar3[1] = uVar20;
        *puVar3 = uVar13;
      }
LAB_10a287bb4:
      param_2 = puVar17;
      if ((uStack_194 & 1) == 0) {
        puVar3 = puVar7 + -3;
        func_0x00010a286750(puVar3,puVar7);
        if (((uint)puVar3 >> 7 & 1) == 0) {
          FUN_10a2882b8(puVar7,puVar17,param_3);
          puVar8 = puVar7;
          goto LAB_10a287c50;
        }
      }
      puVar5 = puVar7;
      puVar3 = puVar17;
      FUN_10a288424(puVar7,puVar17,param_3);
      if (((ulong)puVar3 & 1) == 0) break;
      puVar6 = puVar7;
      FUN_10a2885a0(puVar7,puVar5,param_3);
      puVar8 = puVar5 + 3;
      puVar3 = puVar8;
      FUN_10a2885a0(puVar8,puVar17,param_3);
      if ((int)puVar3 != 0) {
        param_4 = -param_4;
        puVar17 = puVar5;
        if (((ulong)puVar6 & 1) != 0) {
LAB_10a287f18:
          auVar24._8_8_ = param_2;
          auVar24._0_8_ = puVar3;
          return auVar24;
        }
        goto LAB_10a287518;
      }
    } while (((ulong)puVar6 & 1) != 0);
    param_2 = puVar5;
    FUN_10a2874e8(puVar7,puVar5,param_3,-param_4,uStack_194 & 1);
    puVar8 = puVar5 + 3;
LAB_10a287c50:
    uStack_194 = 0;
    param_4 = -param_4;
    puVar3 = puVar7;
  } while( true );
LAB_10a288130:
  puVar3 = puVar9;
  puVar9 = puVar11;
  puVar8 = puVar9;
  func_0x00010a286750(puVar9,puVar3);
  if (((uint)puVar8 >> 7 & 1) != 0) {
    uVar20 = puVar9[1];
    uVar16 = *puVar9;
    uVar13 = puVar9[2];
    lVar19 = lVar4;
    do {
      lVar18 = lVar19;
      puVar11 = (undefined8 *)((long)puVar7 + lVar18);
      puVar11[4] = puVar11[1];
      puVar11[3] = *puVar11;
      puVar11[5] = puVar11[2];
      puVar11 = puVar7;
      if (lVar18 == 0) goto LAB_10a288194;
      puVar3 = (undefined8 *)(lVar18 + -0x18 + (long)puVar7);
      puVar8 = (undefined8 *)&stack0xffffffffffffff70;
      func_0x00010a286750(&stack0xffffffffffffff70,puVar3);
      lVar19 = lVar18 + -0x18;
    } while (((uint)puVar8 >> 7 & 1) != 0);
    puVar11 = (undefined8 *)((long)puVar7 + lVar18);
LAB_10a288194:
    puVar11[1] = uVar20;
    *puVar11 = uVar16;
    puVar11[2] = uVar13;
  }
  lVar4 = lVar4 + 0x18;
  puVar11 = puVar9 + 3;
  if (puVar9 + 3 == puVar17) {
LAB_10a2881c8:
    auVar26._8_8_ = puVar3;
    auVar26._0_8_ = puVar8;
    return auVar26;
  }
  goto LAB_10a288130;
}



/* Entry: 10a2874a4; end: 10a2874e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a288a30) */
/* WARNING: Removing unreachable block (ram,0x00010a288a34) */
/* WARNING: Removing unreachable block (ram,0x00010a288a44) */
/* WARNING: Removing unreachable block (ram,0x00010a288a78) */

undefined1  [16]
FUN_10a2874a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uStack_184;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar3;
    return auVar23;
  }
  uStack_184 = param_5;
  func_0x000109ffded8();
  puVar5 = param_1;
  puVar16 = param_2;
LAB_10a287518:
  puVar9 = puVar16 + -3;
  puVar10 = puVar16 + -6;
  puVar7 = puVar16 + -9;
  puVar6 = puVar5;
  do {
    param_4 = -param_4;
    do {
      puVar5 = puVar6;
      param_4 = param_4 + 1;
      uVar11 = (long)puVar16 - (long)puVar5;
      uVar14 = ((long)uVar11 >> 3) * -0x5555555555555555;
      if (2 < (long)uVar14) {
        if (uVar14 == 3) {
          puVar6 = puVar5 + 3;
          func_0x00010a286750(puVar6,puVar5);
          param_2 = puVar5 + 3;
          param_1 = puVar9;
          func_0x00010a286750(puVar9,param_2);
          if (((uint)puVar6 >> 7 & 1) != 0) {
            if ((char)param_1 < '\0') goto LAB_10a287ee8;
            uVar15 = puVar5[1];
            uVar12 = *puVar5;
            uStack_90 = puVar5[2];
            puVar5[1] = puVar5[4];
            *puVar5 = puVar5[3];
            puVar5[2] = puVar5[5];
            puVar5[4] = uVar15;
            puVar5[3] = uVar12;
            puVar5[5] = uStack_90;
            param_2 = puVar5 + 3;
            param_1 = puVar9;
            func_0x00010a286750(puVar9,param_2);
            if (((uint)param_1 >> 7 & 1) == 0) goto LAB_10a287f18;
            uVar12 = puVar5[5];
            uVar21 = puVar5[4];
            uVar20 = puVar5[3];
            uVar15 = puVar16[-1];
            uVar22 = *puVar9;
            puVar5[4] = puVar16[-2];
            puVar5[3] = uVar22;
            puVar5[5] = uVar15;
            puVar16[-2] = uVar21;
            *puVar9 = uVar20;
            goto LAB_10a287f14;
          }
          if (-1 < (char)param_1) goto LAB_10a287f18;
          uVar12 = puVar5[5];
          uVar21 = puVar5[4];
          uVar20 = puVar5[3];
          uVar15 = puVar16[-1];
          uVar22 = *puVar9;
          puVar5[4] = puVar16[-2];
          puVar5[3] = uVar22;
          puVar5[5] = uVar15;
          puVar16[-2] = uVar21;
          *puVar9 = uVar20;
          puVar16[-1] = uVar12;
        }
        else {
          if (uVar14 == 4) {
            puVar6 = puVar5 + 3;
            puVar10 = puVar5 + 6;
            puVar7 = puVar6;
            func_0x00010a286750(puVar6,puVar5,puVar10,puVar9,param_3);
            puVar8 = puVar10;
            func_0x00010a286750(puVar10,puVar6);
            if (((uint)puVar7 >> 7 & 1) == 0) {
              if ((char)puVar8 < '\0') {
                uVar12 = puVar5[5];
                uVar20 = puVar5[4];
                uVar15 = *puVar6;
                puVar5[4] = puVar5[7];
                *puVar6 = *puVar10;
                puVar5[5] = puVar5[8];
                puVar5[7] = uVar20;
                *puVar10 = uVar15;
                puVar5[8] = uVar12;
                puVar7 = puVar6;
                func_0x00010a286750(puVar6,puVar5);
                if (((uint)puVar7 >> 7 & 1) != 0) {
                  uVar12 = puVar5[2];
                  uVar20 = puVar5[1];
                  uVar15 = *puVar5;
                  puVar5[1] = puVar5[4];
                  *puVar5 = *puVar6;
                  puVar5[2] = puVar5[5];
                  puVar5[4] = uVar20;
                  *puVar6 = uVar15;
                  puVar5[5] = uVar12;
                }
              }
            }
            else {
              if ((char)puVar8 < '\0') {
                uVar12 = puVar5[2];
                uVar20 = puVar5[1];
                uVar15 = *puVar5;
                puVar5[1] = puVar5[7];
                *puVar5 = *puVar10;
                puVar5[2] = puVar5[8];
              }
              else {
                uVar12 = puVar5[2];
                uVar20 = puVar5[1];
                uVar15 = *puVar5;
                puVar5[1] = puVar5[4];
                *puVar5 = *puVar6;
                puVar5[2] = puVar5[5];
                puVar5[4] = uVar20;
                *puVar6 = uVar15;
                puVar5[5] = uVar12;
                puVar7 = puVar10;
                func_0x00010a286750(puVar10,puVar6);
                if (((uint)puVar7 >> 7 & 1) == 0) goto LAB_10a28804c;
                uVar12 = puVar5[5];
                uVar20 = puVar5[4];
                uVar15 = *puVar6;
                puVar5[4] = puVar5[7];
                *puVar6 = *puVar10;
                puVar5[5] = puVar5[8];
              }
              puVar5[7] = uVar20;
              *puVar10 = uVar15;
              puVar5[8] = uVar12;
            }
LAB_10a28804c:
            puVar7 = puVar9;
            puVar8 = puVar10;
            func_0x00010a286750(puVar9,puVar10);
            if (((uint)puVar7 >> 7 & 1) != 0) {
              uVar12 = puVar5[8];
              uVar21 = puVar5[7];
              uVar20 = *puVar10;
              uVar15 = puVar16[-1];
              uVar22 = *puVar9;
              puVar5[7] = puVar16[-2];
              *puVar10 = uVar22;
              puVar5[8] = uVar15;
              puVar16[-2] = uVar21;
              *puVar9 = uVar20;
              puVar16[-1] = uVar12;
              puVar7 = puVar10;
              puVar8 = puVar6;
              func_0x00010a286750(puVar10,puVar6);
              if (((uint)puVar7 >> 7 & 1) != 0) {
                uVar12 = puVar5[5];
                uVar20 = puVar5[4];
                uVar15 = *puVar6;
                puVar5[4] = puVar5[7];
                *puVar6 = *puVar10;
                puVar5[5] = puVar5[8];
                puVar5[7] = uVar20;
                *puVar10 = uVar15;
                puVar5[8] = uVar12;
                puVar7 = puVar6;
                puVar8 = puVar5;
                func_0x00010a286750(puVar6,puVar5);
                if (((uint)puVar7 >> 7 & 1) != 0) {
                  uVar12 = puVar5[2];
                  uVar20 = puVar5[1];
                  uVar15 = *puVar5;
                  puVar5[1] = puVar5[4];
                  *puVar5 = *puVar6;
                  puVar5[2] = puVar5[5];
                  puVar5[4] = uVar20;
                  *puVar6 = uVar15;
                  puVar5[5] = uVar12;
                }
              }
            }
            auVar25._8_8_ = puVar8;
            auVar25._0_8_ = puVar7;
            return auVar25;
          }
          if (uVar14 != 5) goto LAB_10a28757c;
          FUN_10a287f38(puVar5,puVar5 + 3,puVar5 + 6,puVar5 + 9,param_3);
          param_2 = puVar5 + 9;
          param_1 = puVar9;
          func_0x00010a286750(puVar9,param_2);
          if (((uint)param_1 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar12 = puVar5[0xb];
          uVar21 = puVar5[10];
          uVar20 = puVar5[9];
          uVar15 = puVar16[-1];
          uVar22 = *puVar9;
          puVar5[10] = puVar16[-2];
          puVar5[9] = uVar22;
          puVar5[0xb] = uVar15;
          puVar16[-2] = uVar21;
          *puVar9 = uVar20;
          puVar16[-1] = uVar12;
          param_1 = puVar5 + 9;
          param_2 = puVar5 + 6;
          func_0x00010a286750(param_1,param_2);
          if (((uint)param_1 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar12 = puVar5[8];
          uVar20 = puVar5[7];
          uVar15 = puVar5[6];
          puVar5[7] = puVar5[10];
          puVar5[6] = puVar5[9];
          puVar5[8] = puVar5[0xb];
          puVar5[10] = uVar20;
          puVar5[9] = uVar15;
          puVar5[0xb] = uVar12;
          param_1 = puVar5 + 6;
          param_2 = puVar5 + 3;
          func_0x00010a286750(param_1,param_2);
          if (((uint)param_1 >> 7 & 1) == 0) goto LAB_10a287f18;
          uVar12 = puVar5[5];
          uVar20 = puVar5[4];
          uVar15 = puVar5[3];
          puVar5[4] = puVar5[7];
          puVar5[3] = puVar5[6];
          puVar5[5] = puVar5[8];
          puVar5[7] = uVar20;
          puVar5[6] = uVar15;
          puVar5[8] = uVar12;
        }
        param_1 = puVar5 + 3;
        param_2 = puVar5;
        func_0x00010a286750(param_1,puVar5);
        if (((uint)param_1 >> 7 & 1) != 0) {
          uVar20 = puVar5[1];
          uVar15 = *puVar5;
          uVar12 = puVar5[2];
          puVar5[1] = puVar5[4];
          *puVar5 = puVar5[3];
          puVar5[2] = puVar5[5];
          puVar5[4] = uVar20;
          puVar5[3] = uVar15;
          puVar5[5] = uVar12;
        }
        goto LAB_10a287f18;
      }
      if (uVar14 < 2) goto LAB_10a287f18;
      if (uVar14 == 2) {
        param_1 = puVar9;
        param_2 = puVar5;
        func_0x00010a286750(puVar9,puVar5);
        if (((uint)param_1 >> 7 & 1) == 0) goto LAB_10a287f18;
LAB_10a287ee8:
        uVar21 = puVar5[1];
        uVar15 = *puVar5;
        uVar12 = puVar5[2];
        uVar22 = puVar16[-2];
        uVar20 = *puVar9;
        puVar5[2] = puVar16[-1];
        puVar5[1] = uVar22;
        *puVar5 = uVar20;
        puVar16[-2] = uVar21;
        *puVar9 = uVar15;
LAB_10a287f14:
        puVar16[-1] = uVar12;
        goto LAB_10a287f18;
      }
LAB_10a28757c:
      if ((long)uVar11 < 0x240) {
        if ((uStack_184 & 1) == 0) {
          puVar9 = puVar5;
          puVar6 = puVar16;
          if ((puVar5 != puVar16) && (puVar10 = puVar5 + 3, puVar10 != puVar16)) {
            puVar7 = puVar5 + -3;
            lVar17 = -0x18;
            lVar3 = 0x18;
            lVar18 = 0;
            do {
              lVar13 = lVar3;
              puVar6 = (undefined8 *)((long)puVar5 + lVar18);
              puVar9 = puVar10;
              func_0x00010a286750(puVar10,puVar6);
              if (((uint)puVar9 >> 7 & 1) != 0) {
                uStack_88 = puVar10[1];
                uStack_90 = *puVar10;
                uVar12 = puVar10[2];
                puVar10 = puVar7;
                lVar3 = lVar17;
                do {
                  puVar8 = puVar10;
                  puVar8[7] = puVar8[4];
                  puVar8[6] = puVar8[3];
                  puVar8[8] = puVar8[5];
                  if (lVar3 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2882b8);
                    (*pcVar2)();
                  }
                  puVar9 = &uStack_90;
                  puVar6 = puVar8;
                  func_0x00010a286750(&uStack_90,puVar8);
                  lVar3 = lVar3 + 0x18;
                  puVar10 = puVar8 + -3;
                } while (((uint)puVar9 >> 7 & 1) != 0);
                puVar8[4] = uStack_88;
                puVar8[3] = uStack_90;
                puVar8[5] = uVar12;
              }
              lVar3 = lVar13 + 0x18;
              puVar10 = (undefined8 *)((long)puVar5 + lVar3);
              puVar7 = puVar7 + 3;
              lVar17 = lVar17 + -0x18;
              lVar18 = lVar13;
            } while (puVar10 != puVar16);
          }
          auVar27._8_8_ = puVar6;
          auVar27._0_8_ = puVar9;
          return auVar27;
        }
        puVar9 = puVar5;
        puVar6 = puVar16;
        if (puVar5 == puVar16) goto LAB_10a2881c8;
        if (puVar5 + 3 == puVar16) goto LAB_10a2881c8;
        lVar3 = 0;
        puVar10 = puVar5 + 3;
        puVar7 = puVar5;
        goto LAB_10a288130;
      }
      if (param_4 == 1) {
        if (puVar5 != puVar16) {
          puVar6 = puVar16;
          if (puVar5 != puVar16) {
            uVar11 = (long)puVar16 - (long)puVar5;
            lVar3 = ((long)uVar11 >> 3) * -0x5555555555555555;
            if (0x18 < (long)uVar11) {
              uVar14 = lVar3 - 2U >> 1;
              lVar18 = uVar14 + 1;
              puVar9 = puVar5 + uVar14 * 3;
              do {
                puVar6 = param_3;
                FUN_10a288b4c(puVar5,param_3,lVar3,puVar9);
                puVar9 = puVar9 + -3;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            if (0x18 < (long)uVar11) {
              lVar3 = (uVar11 >> 3) * -0x5555555555555555;
              puVar9 = puVar16;
              do {
                puVar7 = puVar9 + -3;
                uStack_88 = puVar5[1];
                uStack_90 = *puVar5;
                uVar12 = puVar5[2];
                puVar10 = puVar5;
                puVar6 = param_3;
                FUN_10a288ca4(puVar5,param_3,lVar3);
                if (puVar7 == puVar10) {
                  puVar10[1] = uStack_88;
                  *puVar10 = uStack_90;
                  puVar10[2] = uVar12;
                }
                else {
                  uVar20 = puVar9[-2];
                  uVar15 = *puVar7;
                  puVar10[2] = puVar9[-1];
                  puVar10[1] = uVar20;
                  *puVar10 = uVar15;
                  puVar6 = puVar10 + 3;
                  puVar9[-2] = uStack_88;
                  *puVar7 = uStack_90;
                  puVar9[-1] = uVar12;
                  FUN_10a288d54(puVar5,puVar6,param_3,
                                ((long)puVar6 - (long)puVar5 >> 3) * -0x5555555555555555);
                }
                bVar1 = 2 < lVar3;
                lVar3 = lVar3 + -1;
                puVar9 = puVar7;
              } while (bVar1);
            }
          }
          auVar28._8_8_ = puVar6;
          auVar28._0_8_ = puVar16;
          return auVar28;
        }
        goto LAB_10a287f18;
      }
      puVar6 = puVar5 + (uVar14 >> 1) * 3;
      if (uVar11 < 0xc01) {
        puVar8 = puVar5;
        func_0x00010a286750(puVar5,puVar6);
        puVar4 = puVar9;
        func_0x00010a286750(puVar9,puVar5);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar4 < '\0') {
            uVar20 = puVar5[1];
            uVar12 = *puVar5;
            uStack_90 = puVar5[2];
            uVar21 = puVar16[-2];
            uVar15 = *puVar9;
            puVar5[2] = puVar16[-1];
            puVar5[1] = uVar21;
            *puVar5 = uVar15;
            puVar16[-2] = uVar20;
            *puVar9 = uVar12;
            puVar16[-1] = uStack_90;
            puVar8 = puVar5;
            func_0x00010a286750(puVar5,puVar6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar6[1];
              uVar12 = *puVar6;
              uStack_90 = puVar6[2];
              uVar21 = puVar5[1];
              uVar15 = *puVar5;
              puVar6[2] = puVar5[2];
              puVar6[1] = uVar21;
              *puVar6 = uVar15;
              puVar5[2] = uStack_90;
              puVar5[1] = uVar20;
              *puVar5 = uVar12;
            }
          }
        }
        else {
          if ((char)puVar4 < '\0') {
            uStack_98 = puVar6[1];
            uStack_a0 = *puVar6;
            uStack_90 = puVar6[2];
            uVar15 = puVar16[-2];
            uVar12 = *puVar9;
            puVar6[2] = puVar16[-1];
            puVar6[1] = uVar15;
            *puVar6 = uVar12;
          }
          else {
            uVar20 = puVar6[1];
            uVar12 = *puVar6;
            uStack_90 = puVar6[2];
            uVar21 = puVar5[1];
            uVar15 = *puVar5;
            puVar6[2] = puVar5[2];
            puVar6[1] = uVar21;
            *puVar6 = uVar15;
            puVar5[2] = uStack_90;
            puVar5[1] = uVar20;
            *puVar5 = uVar12;
            puVar6 = puVar9;
            func_0x00010a286750(puVar9,puVar5);
            if (((uint)puVar6 >> 7 & 1) == 0) goto LAB_10a287bb4;
            uStack_98 = puVar5[1];
            uStack_a0 = *puVar5;
            uStack_90 = puVar5[2];
            uVar15 = puVar16[-2];
            uVar12 = *puVar9;
            puVar5[2] = puVar16[-1];
            puVar5[1] = uVar15;
            *puVar5 = uVar12;
          }
          puVar16[-2] = uStack_98;
          *puVar9 = uStack_a0;
          puVar16[-1] = uStack_90;
        }
      }
      else {
        puVar8 = puVar6;
        func_0x00010a286750(puVar6,puVar5);
        puVar4 = puVar9;
        func_0x00010a286750(puVar9,puVar6);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar4 < '\0') {
            uVar20 = puVar6[1];
            uVar12 = *puVar6;
            uStack_90 = puVar6[2];
            uVar21 = puVar16[-2];
            uVar15 = *puVar9;
            puVar6[2] = puVar16[-1];
            puVar6[1] = uVar21;
            *puVar6 = uVar15;
            puVar16[-2] = uVar20;
            *puVar9 = uVar12;
            puVar16[-1] = uStack_90;
            puVar8 = puVar6;
            func_0x00010a286750(puVar6,puVar5);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar5[1];
              uVar12 = *puVar5;
              uStack_90 = puVar5[2];
              uVar21 = puVar6[1];
              uVar15 = *puVar6;
              puVar5[2] = puVar6[2];
              puVar5[1] = uVar21;
              *puVar5 = uVar15;
              puVar6[2] = uStack_90;
              puVar6[1] = uVar20;
              *puVar6 = uVar12;
            }
          }
        }
        else {
          if ((char)puVar4 < '\0') {
            uStack_98 = puVar5[1];
            uStack_a0 = *puVar5;
            uStack_90 = puVar5[2];
            uVar15 = puVar16[-2];
            uVar12 = *puVar9;
            puVar5[2] = puVar16[-1];
            puVar5[1] = uVar15;
            *puVar5 = uVar12;
          }
          else {
            uVar20 = puVar5[1];
            uVar12 = *puVar5;
            uStack_90 = puVar5[2];
            uVar21 = puVar6[1];
            uVar15 = *puVar6;
            puVar5[2] = puVar6[2];
            puVar5[1] = uVar21;
            *puVar5 = uVar15;
            puVar6[2] = uStack_90;
            puVar6[1] = uVar20;
            *puVar6 = uVar12;
            puVar8 = puVar9;
            func_0x00010a286750(puVar9,puVar6);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a2877d8;
            uStack_98 = puVar6[1];
            uStack_a0 = *puVar6;
            uStack_90 = puVar6[2];
            uVar15 = puVar16[-2];
            uVar12 = *puVar9;
            puVar6[2] = puVar16[-1];
            puVar6[1] = uVar15;
            *puVar6 = uVar12;
          }
          puVar16[-2] = uStack_98;
          *puVar9 = uStack_a0;
          puVar16[-1] = uStack_90;
        }
LAB_10a2877d8:
        puVar19 = puVar6 + -3;
        puVar8 = puVar19;
        func_0x00010a286750(puVar19,puVar5 + 3);
        puVar4 = puVar10;
        func_0x00010a286750(puVar10,puVar19);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar4 < '\0') {
            uVar20 = puVar6[-2];
            uVar12 = *puVar19;
            uStack_90 = puVar6[-1];
            uVar21 = puVar16[-5];
            uVar15 = *puVar10;
            puVar6[-1] = puVar16[-4];
            puVar6[-2] = uVar21;
            *puVar19 = uVar15;
            puVar16[-5] = uVar20;
            *puVar10 = uVar12;
            puVar16[-4] = uStack_90;
            puVar8 = puVar19;
            func_0x00010a286750(puVar19,puVar5 + 3);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar5[4];
              uVar15 = puVar5[3];
              uStack_90 = puVar5[5];
              uVar12 = puVar6[-1];
              uVar21 = *puVar19;
              puVar5[4] = puVar6[-2];
              puVar5[3] = uVar21;
              puVar5[5] = uVar12;
              puVar6[-1] = uStack_90;
              puVar6[-2] = uVar20;
              *puVar19 = uVar15;
            }
          }
        }
        else {
          if ((char)puVar4 < '\0') {
            uVar12 = puVar5[5];
            uVar21 = puVar5[4];
            uVar20 = puVar5[3];
            uVar15 = puVar16[-4];
            uVar22 = *puVar10;
            puVar5[4] = puVar16[-5];
            puVar5[3] = uVar22;
            puVar5[5] = uVar15;
            puVar16[-5] = uVar21;
            *puVar10 = uVar20;
          }
          else {
            uVar20 = puVar5[4];
            uVar15 = puVar5[3];
            uStack_90 = puVar5[5];
            uVar12 = puVar6[-1];
            uVar21 = *puVar19;
            puVar5[4] = puVar6[-2];
            puVar5[3] = uVar21;
            puVar5[5] = uVar12;
            puVar6[-1] = uStack_90;
            puVar6[-2] = uVar20;
            *puVar19 = uVar15;
            puVar8 = puVar10;
            func_0x00010a286750(puVar10,puVar19);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287930;
            uVar21 = puVar6[-2];
            uVar15 = *puVar19;
            uVar12 = puVar6[-1];
            uVar22 = puVar16[-5];
            uVar20 = *puVar10;
            puVar6[-1] = puVar16[-4];
            puVar6[-2] = uVar22;
            *puVar19 = uVar20;
            puVar16[-5] = uVar21;
            *puVar10 = uVar15;
            uStack_90 = uVar12;
          }
          puVar16[-4] = uVar12;
        }
LAB_10a287930:
        puVar8 = puVar6 + 3;
        func_0x00010a286750(puVar8,puVar5 + 6);
        puVar4 = puVar7;
        func_0x00010a286750(puVar7,puVar6 + 3);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar4 < '\0') {
            uVar20 = puVar6[4];
            uVar12 = puVar6[3];
            uStack_90 = puVar6[5];
            uVar21 = puVar16[-8];
            uVar15 = *puVar7;
            puVar6[5] = puVar16[-7];
            puVar6[4] = uVar21;
            puVar6[3] = uVar15;
            puVar16[-8] = uVar20;
            *puVar7 = uVar12;
            puVar16[-7] = uStack_90;
            puVar8 = puVar6 + 3;
            func_0x00010a286750(puVar8,puVar5 + 6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar5[7];
              uVar15 = puVar5[6];
              uStack_90 = puVar5[8];
              uVar12 = puVar6[5];
              uVar21 = puVar6[3];
              puVar5[7] = puVar6[4];
              puVar5[6] = uVar21;
              puVar5[8] = uVar12;
              puVar6[5] = uStack_90;
              puVar6[4] = uVar20;
              puVar6[3] = uVar15;
            }
          }
        }
        else {
          if ((char)puVar4 < '\0') {
            uVar12 = puVar5[8];
            uVar21 = puVar5[7];
            uVar20 = puVar5[6];
            uVar15 = puVar16[-7];
            uVar22 = *puVar7;
            puVar5[7] = puVar16[-8];
            puVar5[6] = uVar22;
            puVar5[8] = uVar15;
            puVar16[-8] = uVar21;
            *puVar7 = uVar20;
          }
          else {
            uVar20 = puVar5[7];
            uVar15 = puVar5[6];
            uStack_90 = puVar5[8];
            uVar12 = puVar6[5];
            uVar21 = puVar6[3];
            puVar5[7] = puVar6[4];
            puVar5[6] = uVar21;
            puVar5[8] = uVar12;
            puVar6[5] = uStack_90;
            puVar6[4] = uVar20;
            puVar6[3] = uVar15;
            puVar8 = puVar7;
            func_0x00010a286750(puVar7,puVar6 + 3);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287a50;
            uVar21 = puVar6[4];
            uVar15 = puVar6[3];
            uVar12 = puVar6[5];
            uVar22 = puVar16[-8];
            uVar20 = *puVar7;
            puVar6[5] = puVar16[-7];
            puVar6[4] = uVar22;
            puVar6[3] = uVar20;
            puVar16[-8] = uVar21;
            *puVar7 = uVar15;
            uStack_90 = uVar12;
          }
          puVar16[-7] = uVar12;
        }
LAB_10a287a50:
        puVar4 = puVar6;
        func_0x00010a286750(puVar6,puVar19);
        puVar8 = puVar6 + 3;
        func_0x00010a286750(puVar8,puVar6);
        if (((uint)puVar4 >> 7 & 1) == 0) {
          if ((char)puVar8 < '\0') {
            uVar15 = puVar6[1];
            uVar12 = *puVar6;
            uStack_90 = puVar6[2];
            puVar6[1] = puVar6[4];
            *puVar6 = puVar6[3];
            puVar6[2] = puVar6[5];
            puVar6[5] = uStack_90;
            puVar6[4] = uVar15;
            puVar6[3] = uVar12;
            puVar8 = puVar6;
            func_0x00010a286750(puVar6,puVar19);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar20 = puVar6[-2];
              uVar15 = *puVar19;
              uVar12 = puVar6[-1];
              puVar6[-2] = puVar6[1];
              *puVar19 = *puVar6;
              puVar6[-1] = puVar6[2];
              puVar6[2] = uVar12;
              puVar6[1] = uVar20;
              *puVar6 = uVar15;
            }
          }
        }
        else {
          if ((char)puVar8 < '\0') {
            uStack_98 = puVar6[-2];
            uStack_a0 = *puVar19;
            uStack_90 = puVar6[-1];
            puVar6[-2] = puVar6[4];
            *puVar19 = puVar6[3];
            puVar6[-1] = puVar6[5];
          }
          else {
            uVar15 = puVar6[-2];
            uVar12 = *puVar19;
            uStack_90 = puVar6[-1];
            puVar6[-2] = puVar6[1];
            *puVar19 = *puVar6;
            puVar6[-1] = puVar6[2];
            puVar6[2] = uStack_90;
            puVar6[1] = uVar15;
            *puVar6 = uVar12;
            puVar8 = puVar6 + 3;
            func_0x00010a286750(puVar8,puVar6);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287b84;
            uStack_98 = puVar6[1];
            uStack_a0 = *puVar6;
            uStack_90 = puVar6[2];
            puVar6[1] = puVar6[4];
            *puVar6 = puVar6[3];
            puVar6[2] = puVar6[5];
          }
          puVar6[5] = uStack_90;
          puVar6[4] = uStack_98;
          puVar6[3] = uStack_a0;
        }
LAB_10a287b84:
        uVar20 = puVar5[1];
        uVar12 = *puVar5;
        uStack_90 = puVar5[2];
        uVar21 = puVar6[1];
        uVar15 = *puVar6;
        puVar5[2] = puVar6[2];
        puVar5[1] = uVar21;
        *puVar5 = uVar15;
        puVar6[2] = uStack_90;
        puVar6[1] = uVar20;
        *puVar6 = uVar12;
      }
LAB_10a287bb4:
      param_2 = puVar16;
      if ((uStack_184 & 1) == 0) {
        puVar6 = puVar5 + -3;
        func_0x00010a286750(puVar6,puVar5);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          FUN_10a2882b8(puVar5,puVar16,param_3);
          puVar6 = puVar5;
          goto LAB_10a287c50;
        }
      }
      puVar8 = puVar5;
      puVar6 = puVar16;
      FUN_10a288424(puVar5,puVar16,param_3);
      if (((ulong)puVar6 & 1) == 0) break;
      puVar4 = puVar5;
      FUN_10a2885a0(puVar5,puVar8,param_3);
      puVar6 = puVar8 + 3;
      param_1 = puVar6;
      FUN_10a2885a0(puVar6,puVar16,param_3);
      if ((int)param_1 != 0) {
        param_4 = -param_4;
        puVar16 = puVar8;
        if (((ulong)puVar4 & 1) != 0) {
LAB_10a287f18:
          auVar24._8_8_ = param_2;
          auVar24._0_8_ = param_1;
          return auVar24;
        }
        goto LAB_10a287518;
      }
    } while (((ulong)puVar4 & 1) != 0);
    param_2 = puVar8;
    FUN_10a2874e8(puVar5,puVar8,param_3,-param_4,uStack_184 & 1);
    puVar6 = puVar8 + 3;
LAB_10a287c50:
    uStack_184 = 0;
    param_4 = -param_4;
    param_1 = puVar5;
  } while( true );
LAB_10a288130:
  puVar6 = puVar7;
  puVar7 = puVar10;
  puVar9 = puVar7;
  func_0x00010a286750(puVar7,puVar6);
  if (((uint)puVar9 >> 7 & 1) != 0) {
    uVar20 = puVar7[1];
    uVar15 = *puVar7;
    uVar12 = puVar7[2];
    lVar18 = lVar3;
    do {
      lVar17 = lVar18;
      puVar10 = (undefined8 *)((long)puVar5 + lVar17);
      puVar10[4] = puVar10[1];
      puVar10[3] = *puVar10;
      puVar10[5] = puVar10[2];
      puVar10 = puVar5;
      if (lVar17 == 0) goto LAB_10a288194;
      puVar6 = (undefined8 *)(lVar17 + -0x18 + (long)puVar5);
      puVar9 = (undefined8 *)&stack0xffffffffffffff80;
      func_0x00010a286750(&stack0xffffffffffffff80,puVar6);
      lVar18 = lVar17 + -0x18;
    } while (((uint)puVar9 >> 7 & 1) != 0);
    puVar10 = (undefined8 *)((long)puVar5 + lVar17);
LAB_10a288194:
    puVar10[1] = uVar20;
    *puVar10 = uVar15;
    puVar10[2] = uVar12;
  }
  lVar3 = lVar3 + 0x18;
  puVar10 = puVar7 + 3;
  if (puVar7 + 3 == puVar16) {
LAB_10a2881c8:
    auVar26._8_8_ = puVar6;
    auVar26._0_8_ = puVar9;
    return auVar26;
  }
  goto LAB_10a288130;
}



/* Entry: 10a2874e8; end: 10a287f37;  */

/* WARNING: Removing unreachable block (ram,0x00010a288a30) */
/* WARNING: Removing unreachable block (ram,0x00010a288a34) */
/* WARNING: Removing unreachable block (ram,0x00010a288a44) */
/* WARNING: Removing unreachable block (ram,0x00010a288a78) */

undefined8 *
FUN_10a2874e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uStack_164;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = param_1;
  uStack_164 = param_5;
LAB_10a287518:
  puVar9 = param_2 + -3;
  puVar5 = param_2 + -6;
  puVar7 = param_2 + -9;
  puVar6 = puVar4;
  do {
    param_4 = -param_4;
    do {
      puVar4 = puVar6;
      param_4 = param_4 + 1;
      uVar10 = (long)param_2 - (long)puVar4;
      uVar13 = ((long)uVar10 >> 3) * -0x5555555555555555;
      puVar6 = puVar9;
      if ((long)uVar13 < 3) {
        if (uVar13 < 2) {
          return param_1;
        }
        if (uVar13 == 2) {
          func_0x00010a286750(puVar9,puVar4);
          if (((uint)puVar6 >> 7 & 1) == 0) {
            return puVar6;
          }
LAB_10a287ee8:
          uVar20 = puVar4[1];
          uVar14 = *puVar4;
          uVar11 = puVar4[2];
          uVar21 = param_2[-2];
          uVar19 = *puVar9;
          puVar4[2] = param_2[-1];
          puVar4[1] = uVar21;
          *puVar4 = uVar19;
          param_2[-2] = uVar20;
          *puVar9 = uVar14;
LAB_10a287f14:
          param_2[-1] = uVar11;
          return puVar6;
        }
      }
      else {
        if (uVar13 == 3) {
          puVar5 = puVar4 + 3;
          func_0x00010a286750(puVar5,puVar4);
          func_0x00010a286750(puVar9,puVar4 + 3);
          if (((uint)puVar5 >> 7 & 1) == 0) {
            if (-1 < (char)puVar6) {
              return puVar6;
            }
            uVar11 = puVar4[5];
            uVar20 = puVar4[4];
            uVar19 = puVar4[3];
            uVar14 = param_2[-1];
            uVar21 = *puVar9;
            puVar4[4] = param_2[-2];
            puVar4[3] = uVar21;
            puVar4[5] = uVar14;
            param_2[-2] = uVar20;
            *puVar9 = uVar19;
            param_2[-1] = uVar11;
LAB_10a287cb4:
            puVar6 = puVar4 + 3;
            func_0x00010a286750(puVar6,puVar4);
            if (((uint)puVar6 >> 7 & 1) == 0) {
              return puVar6;
            }
            uVar19 = puVar4[1];
            uVar14 = *puVar4;
            uVar11 = puVar4[2];
            puVar4[1] = puVar4[4];
            *puVar4 = puVar4[3];
            puVar4[2] = puVar4[5];
            puVar4[4] = uVar19;
            puVar4[3] = uVar14;
            puVar4[5] = uVar11;
            return puVar6;
          }
          if (-1 < (char)puVar6) {
            uVar14 = puVar4[1];
            uVar11 = *puVar4;
            uStack_70 = puVar4[2];
            puVar4[1] = puVar4[4];
            *puVar4 = puVar4[3];
            puVar4[2] = puVar4[5];
            puVar4[4] = uVar14;
            puVar4[3] = uVar11;
            puVar4[5] = uStack_70;
            puVar6 = puVar9;
            func_0x00010a286750(puVar9,puVar4 + 3);
            if (((uint)puVar6 >> 7 & 1) == 0) {
              return puVar6;
            }
            uVar11 = puVar4[5];
            uVar20 = puVar4[4];
            uVar19 = puVar4[3];
            uVar14 = param_2[-1];
            uVar21 = *puVar9;
            puVar4[4] = param_2[-2];
            puVar4[3] = uVar21;
            puVar4[5] = uVar14;
            param_2[-2] = uVar20;
            *puVar9 = uVar19;
            goto LAB_10a287f14;
          }
          goto LAB_10a287ee8;
        }
        if (uVar13 == 4) {
          puVar6 = puVar4 + 3;
          puVar5 = puVar4 + 6;
          puVar7 = puVar6;
          func_0x00010a286750(puVar6,puVar4,puVar5,puVar9,param_3);
          puVar8 = puVar5;
          func_0x00010a286750(puVar5,puVar6);
          if (((uint)puVar7 >> 7 & 1) == 0) {
            if ((char)puVar8 < '\0') {
              uVar11 = puVar4[5];
              uVar19 = puVar4[4];
              uVar14 = *puVar6;
              puVar4[4] = puVar4[7];
              *puVar6 = *puVar5;
              puVar4[5] = puVar4[8];
              puVar4[7] = uVar19;
              *puVar5 = uVar14;
              puVar4[8] = uVar11;
              puVar7 = puVar6;
              func_0x00010a286750(puVar6,puVar4);
              if (((uint)puVar7 >> 7 & 1) != 0) {
                uVar11 = puVar4[2];
                uVar19 = puVar4[1];
                uVar14 = *puVar4;
                puVar4[1] = puVar4[4];
                *puVar4 = *puVar6;
                puVar4[2] = puVar4[5];
                puVar4[4] = uVar19;
                *puVar6 = uVar14;
                puVar4[5] = uVar11;
              }
            }
          }
          else {
            if ((char)puVar8 < '\0') {
              uVar11 = puVar4[2];
              uVar19 = puVar4[1];
              uVar14 = *puVar4;
              puVar4[1] = puVar4[7];
              *puVar4 = *puVar5;
              puVar4[2] = puVar4[8];
            }
            else {
              uVar11 = puVar4[2];
              uVar19 = puVar4[1];
              uVar14 = *puVar4;
              puVar4[1] = puVar4[4];
              *puVar4 = *puVar6;
              puVar4[2] = puVar4[5];
              puVar4[4] = uVar19;
              *puVar6 = uVar14;
              puVar4[5] = uVar11;
              puVar7 = puVar5;
              func_0x00010a286750(puVar5,puVar6);
              if (((uint)puVar7 >> 7 & 1) == 0) goto LAB_10a28804c;
              uVar11 = puVar4[5];
              uVar19 = puVar4[4];
              uVar14 = *puVar6;
              puVar4[4] = puVar4[7];
              *puVar6 = *puVar5;
              puVar4[5] = puVar4[8];
            }
            puVar4[7] = uVar19;
            *puVar5 = uVar14;
            puVar4[8] = uVar11;
          }
LAB_10a28804c:
          puVar7 = puVar9;
          func_0x00010a286750(puVar9,puVar5);
          if (((uint)puVar7 >> 7 & 1) != 0) {
            uVar11 = puVar4[8];
            uVar20 = puVar4[7];
            uVar19 = *puVar5;
            uVar14 = param_2[-1];
            uVar21 = *puVar9;
            puVar4[7] = param_2[-2];
            *puVar5 = uVar21;
            puVar4[8] = uVar14;
            param_2[-2] = uVar20;
            *puVar9 = uVar19;
            param_2[-1] = uVar11;
            puVar7 = puVar5;
            func_0x00010a286750(puVar5,puVar6);
            if (((uint)puVar7 >> 7 & 1) != 0) {
              uVar11 = puVar4[5];
              uVar19 = puVar4[4];
              uVar14 = *puVar6;
              puVar4[4] = puVar4[7];
              *puVar6 = *puVar5;
              puVar4[5] = puVar4[8];
              puVar4[7] = uVar19;
              *puVar5 = uVar14;
              puVar4[8] = uVar11;
              puVar7 = puVar6;
              func_0x00010a286750(puVar6,puVar4);
              if (((uint)puVar7 >> 7 & 1) != 0) {
                uVar11 = puVar4[2];
                uVar19 = puVar4[1];
                uVar14 = *puVar4;
                puVar4[1] = puVar4[4];
                *puVar4 = *puVar6;
                puVar4[2] = puVar4[5];
                puVar4[4] = uVar19;
                *puVar6 = uVar14;
                puVar4[5] = uVar11;
              }
            }
          }
          return puVar7;
        }
        if (uVar13 == 5) {
          FUN_10a287f38(puVar4,puVar4 + 3,puVar4 + 6,puVar4 + 9,param_3);
          func_0x00010a286750(puVar9,puVar4 + 9);
          if (((uint)puVar6 >> 7 & 1) == 0) {
            return puVar6;
          }
          uVar11 = puVar4[0xb];
          uVar20 = puVar4[10];
          uVar19 = puVar4[9];
          uVar14 = param_2[-1];
          uVar21 = *puVar9;
          puVar4[10] = param_2[-2];
          puVar4[9] = uVar21;
          puVar4[0xb] = uVar14;
          param_2[-2] = uVar20;
          *puVar9 = uVar19;
          param_2[-1] = uVar11;
          puVar6 = puVar4 + 9;
          func_0x00010a286750(puVar6,puVar4 + 6);
          if (((uint)puVar6 >> 7 & 1) == 0) {
            return puVar6;
          }
          uVar11 = puVar4[8];
          uVar19 = puVar4[7];
          uVar14 = puVar4[6];
          puVar4[7] = puVar4[10];
          puVar4[6] = puVar4[9];
          puVar4[8] = puVar4[0xb];
          puVar4[10] = uVar19;
          puVar4[9] = uVar14;
          puVar4[0xb] = uVar11;
          puVar6 = puVar4 + 6;
          func_0x00010a286750(puVar6,puVar4 + 3);
          if (((uint)puVar6 >> 7 & 1) == 0) {
            return puVar6;
          }
          uVar11 = puVar4[5];
          uVar19 = puVar4[4];
          uVar14 = puVar4[3];
          puVar4[4] = puVar4[7];
          puVar4[3] = puVar4[6];
          puVar4[5] = puVar4[8];
          puVar4[7] = uVar19;
          puVar4[6] = uVar14;
          puVar4[8] = uVar11;
          goto LAB_10a287cb4;
        }
      }
      if ((long)uVar10 < 0x240) {
        if ((uStack_164 & 1) == 0) {
          puVar6 = puVar4;
          if ((puVar4 != param_2) && (puVar9 = puVar4 + 3, puVar9 != param_2)) {
            puVar5 = puVar4 + -3;
            lVar15 = -0x18;
            lVar16 = 0x18;
            lVar17 = 0;
            do {
              lVar12 = lVar16;
              puVar6 = puVar9;
              func_0x00010a286750(puVar9,(undefined1 *)((long)puVar4 + lVar17));
              if (((uint)puVar6 >> 7 & 1) != 0) {
                uStack_68 = puVar9[1];
                uStack_70 = *puVar9;
                uVar11 = puVar9[2];
                puVar9 = puVar5;
                lVar16 = lVar15;
                do {
                  puVar7 = puVar9;
                  puVar7[7] = puVar7[4];
                  puVar7[6] = puVar7[3];
                  puVar7[8] = puVar7[5];
                  if (lVar16 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2882b8);
                    (*pcVar2)();
                  }
                  puVar6 = &uStack_70;
                  func_0x00010a286750(&uStack_70,puVar7);
                  lVar16 = lVar16 + 0x18;
                  puVar9 = puVar7 + -3;
                } while (((uint)puVar6 >> 7 & 1) != 0);
                puVar7[4] = uStack_68;
                puVar7[3] = uStack_70;
                puVar7[5] = uVar11;
              }
              lVar16 = lVar12 + 0x18;
              puVar9 = (undefined8 *)((long)puVar4 + lVar16);
              puVar5 = puVar5 + 3;
              lVar15 = lVar15 + -0x18;
              lVar17 = lVar12;
            } while (puVar9 != param_2);
          }
          return puVar6;
        }
        if (puVar4 == param_2) {
          return puVar4;
        }
        if (puVar4 + 3 == param_2) {
          return puVar4;
        }
        lVar16 = 0;
        puVar6 = puVar4 + 3;
        puVar9 = puVar4;
        goto LAB_10a288130;
      }
      if (param_4 == 1) {
        if (puVar4 == param_2) {
          return param_1;
        }
        if (puVar4 != param_2) {
          uVar10 = (long)param_2 - (long)puVar4;
          lVar16 = ((long)uVar10 >> 3) * -0x5555555555555555;
          if (0x18 < (long)uVar10) {
            uVar13 = lVar16 - 2U >> 1;
            lVar17 = uVar13 + 1;
            puVar6 = puVar4 + uVar13 * 3;
            do {
              FUN_10a288b4c(puVar4,param_3,lVar16,puVar6);
              puVar6 = puVar6 + -3;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
          if (0x18 < (long)uVar10) {
            lVar16 = (uVar10 >> 3) * -0x5555555555555555;
            puVar6 = param_2;
            do {
              puVar5 = puVar6 + -3;
              uStack_68 = puVar4[1];
              uStack_70 = *puVar4;
              uVar11 = puVar4[2];
              puVar9 = puVar4;
              FUN_10a288ca4(puVar4,param_3,lVar16);
              if (puVar5 == puVar9) {
                puVar9[1] = uStack_68;
                *puVar9 = uStack_70;
                puVar9[2] = uVar11;
              }
              else {
                uVar19 = puVar6[-2];
                uVar14 = *puVar5;
                puVar9[2] = puVar6[-1];
                puVar9[1] = uVar19;
                *puVar9 = uVar14;
                puVar6[-2] = uStack_68;
                *puVar5 = uStack_70;
                puVar6[-1] = uVar11;
                FUN_10a288d54(puVar4,puVar9 + 3,param_3,
                              ((long)(puVar9 + 3) - (long)puVar4 >> 3) * -0x5555555555555555);
              }
              bVar1 = 2 < lVar16;
              lVar16 = lVar16 + -1;
              puVar6 = puVar5;
            } while (bVar1);
          }
        }
        return param_2;
      }
      puVar6 = puVar4 + (uVar13 >> 1) * 3;
      if (uVar10 < 0xc01) {
        puVar8 = puVar4;
        func_0x00010a286750(puVar4,puVar6);
        puVar3 = puVar9;
        func_0x00010a286750(puVar9,puVar4);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar3 < '\0') {
            uVar19 = puVar4[1];
            uVar11 = *puVar4;
            uStack_70 = puVar4[2];
            uVar20 = param_2[-2];
            uVar14 = *puVar9;
            puVar4[2] = param_2[-1];
            puVar4[1] = uVar20;
            *puVar4 = uVar14;
            param_2[-2] = uVar19;
            *puVar9 = uVar11;
            param_2[-1] = uStack_70;
            puVar8 = puVar4;
            func_0x00010a286750(puVar4,puVar6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar19 = puVar6[1];
              uVar11 = *puVar6;
              uStack_70 = puVar6[2];
              uVar20 = puVar4[1];
              uVar14 = *puVar4;
              puVar6[2] = puVar4[2];
              puVar6[1] = uVar20;
              *puVar6 = uVar14;
              puVar4[2] = uStack_70;
              puVar4[1] = uVar19;
              *puVar4 = uVar11;
            }
          }
        }
        else {
          if ((char)puVar3 < '\0') {
            uStack_78 = puVar6[1];
            uStack_80 = *puVar6;
            uStack_70 = puVar6[2];
            uVar14 = param_2[-2];
            uVar11 = *puVar9;
            puVar6[2] = param_2[-1];
            puVar6[1] = uVar14;
            *puVar6 = uVar11;
          }
          else {
            uVar19 = puVar6[1];
            uVar11 = *puVar6;
            uStack_70 = puVar6[2];
            uVar20 = puVar4[1];
            uVar14 = *puVar4;
            puVar6[2] = puVar4[2];
            puVar6[1] = uVar20;
            *puVar6 = uVar14;
            puVar4[2] = uStack_70;
            puVar4[1] = uVar19;
            *puVar4 = uVar11;
            puVar6 = puVar9;
            func_0x00010a286750(puVar9,puVar4);
            if (((uint)puVar6 >> 7 & 1) == 0) goto LAB_10a287bb4;
            uStack_78 = puVar4[1];
            uStack_80 = *puVar4;
            uStack_70 = puVar4[2];
            uVar14 = param_2[-2];
            uVar11 = *puVar9;
            puVar4[2] = param_2[-1];
            puVar4[1] = uVar14;
            *puVar4 = uVar11;
          }
          param_2[-2] = uStack_78;
          *puVar9 = uStack_80;
          param_2[-1] = uStack_70;
        }
      }
      else {
        puVar8 = puVar6;
        func_0x00010a286750(puVar6,puVar4);
        puVar3 = puVar9;
        func_0x00010a286750(puVar9,puVar6);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar3 < '\0') {
            uVar19 = puVar6[1];
            uVar11 = *puVar6;
            uStack_70 = puVar6[2];
            uVar20 = param_2[-2];
            uVar14 = *puVar9;
            puVar6[2] = param_2[-1];
            puVar6[1] = uVar20;
            *puVar6 = uVar14;
            param_2[-2] = uVar19;
            *puVar9 = uVar11;
            param_2[-1] = uStack_70;
            puVar8 = puVar6;
            func_0x00010a286750(puVar6,puVar4);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar19 = puVar4[1];
              uVar11 = *puVar4;
              uStack_70 = puVar4[2];
              uVar20 = puVar6[1];
              uVar14 = *puVar6;
              puVar4[2] = puVar6[2];
              puVar4[1] = uVar20;
              *puVar4 = uVar14;
              puVar6[2] = uStack_70;
              puVar6[1] = uVar19;
              *puVar6 = uVar11;
            }
          }
        }
        else {
          if ((char)puVar3 < '\0') {
            uStack_78 = puVar4[1];
            uStack_80 = *puVar4;
            uStack_70 = puVar4[2];
            uVar14 = param_2[-2];
            uVar11 = *puVar9;
            puVar4[2] = param_2[-1];
            puVar4[1] = uVar14;
            *puVar4 = uVar11;
          }
          else {
            uVar19 = puVar4[1];
            uVar11 = *puVar4;
            uStack_70 = puVar4[2];
            uVar20 = puVar6[1];
            uVar14 = *puVar6;
            puVar4[2] = puVar6[2];
            puVar4[1] = uVar20;
            *puVar4 = uVar14;
            puVar6[2] = uStack_70;
            puVar6[1] = uVar19;
            *puVar6 = uVar11;
            puVar8 = puVar9;
            func_0x00010a286750(puVar9,puVar6);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a2877d8;
            uStack_78 = puVar6[1];
            uStack_80 = *puVar6;
            uStack_70 = puVar6[2];
            uVar14 = param_2[-2];
            uVar11 = *puVar9;
            puVar6[2] = param_2[-1];
            puVar6[1] = uVar14;
            *puVar6 = uVar11;
          }
          param_2[-2] = uStack_78;
          *puVar9 = uStack_80;
          param_2[-1] = uStack_70;
        }
LAB_10a2877d8:
        puVar18 = puVar6 + -3;
        puVar8 = puVar18;
        func_0x00010a286750(puVar18,puVar4 + 3);
        puVar3 = puVar5;
        func_0x00010a286750(puVar5,puVar18);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar3 < '\0') {
            uVar19 = puVar6[-2];
            uVar11 = *puVar18;
            uStack_70 = puVar6[-1];
            uVar20 = param_2[-5];
            uVar14 = *puVar5;
            puVar6[-1] = param_2[-4];
            puVar6[-2] = uVar20;
            *puVar18 = uVar14;
            param_2[-5] = uVar19;
            *puVar5 = uVar11;
            param_2[-4] = uStack_70;
            puVar8 = puVar18;
            func_0x00010a286750(puVar18,puVar4 + 3);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar19 = puVar4[4];
              uVar14 = puVar4[3];
              uStack_70 = puVar4[5];
              uVar11 = puVar6[-1];
              uVar20 = *puVar18;
              puVar4[4] = puVar6[-2];
              puVar4[3] = uVar20;
              puVar4[5] = uVar11;
              puVar6[-1] = uStack_70;
              puVar6[-2] = uVar19;
              *puVar18 = uVar14;
            }
          }
        }
        else {
          if ((char)puVar3 < '\0') {
            uVar11 = puVar4[5];
            uVar20 = puVar4[4];
            uVar19 = puVar4[3];
            uVar14 = param_2[-4];
            uVar21 = *puVar5;
            puVar4[4] = param_2[-5];
            puVar4[3] = uVar21;
            puVar4[5] = uVar14;
            param_2[-5] = uVar20;
            *puVar5 = uVar19;
          }
          else {
            uVar19 = puVar4[4];
            uVar14 = puVar4[3];
            uStack_70 = puVar4[5];
            uVar11 = puVar6[-1];
            uVar20 = *puVar18;
            puVar4[4] = puVar6[-2];
            puVar4[3] = uVar20;
            puVar4[5] = uVar11;
            puVar6[-1] = uStack_70;
            puVar6[-2] = uVar19;
            *puVar18 = uVar14;
            puVar8 = puVar5;
            func_0x00010a286750(puVar5,puVar18);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287930;
            uVar20 = puVar6[-2];
            uVar14 = *puVar18;
            uVar11 = puVar6[-1];
            uVar21 = param_2[-5];
            uVar19 = *puVar5;
            puVar6[-1] = param_2[-4];
            puVar6[-2] = uVar21;
            *puVar18 = uVar19;
            param_2[-5] = uVar20;
            *puVar5 = uVar14;
            uStack_70 = uVar11;
          }
          param_2[-4] = uVar11;
        }
LAB_10a287930:
        puVar8 = puVar6 + 3;
        func_0x00010a286750(puVar8,puVar4 + 6);
        puVar3 = puVar7;
        func_0x00010a286750(puVar7,puVar6 + 3);
        if (((uint)puVar8 >> 7 & 1) == 0) {
          if ((char)puVar3 < '\0') {
            uVar19 = puVar6[4];
            uVar11 = puVar6[3];
            uStack_70 = puVar6[5];
            uVar20 = param_2[-8];
            uVar14 = *puVar7;
            puVar6[5] = param_2[-7];
            puVar6[4] = uVar20;
            puVar6[3] = uVar14;
            param_2[-8] = uVar19;
            *puVar7 = uVar11;
            param_2[-7] = uStack_70;
            puVar8 = puVar6 + 3;
            func_0x00010a286750(puVar8,puVar4 + 6);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar19 = puVar4[7];
              uVar14 = puVar4[6];
              uStack_70 = puVar4[8];
              uVar11 = puVar6[5];
              uVar20 = puVar6[3];
              puVar4[7] = puVar6[4];
              puVar4[6] = uVar20;
              puVar4[8] = uVar11;
              puVar6[5] = uStack_70;
              puVar6[4] = uVar19;
              puVar6[3] = uVar14;
            }
          }
        }
        else {
          if ((char)puVar3 < '\0') {
            uVar11 = puVar4[8];
            uVar20 = puVar4[7];
            uVar19 = puVar4[6];
            uVar14 = param_2[-7];
            uVar21 = *puVar7;
            puVar4[7] = param_2[-8];
            puVar4[6] = uVar21;
            puVar4[8] = uVar14;
            param_2[-8] = uVar20;
            *puVar7 = uVar19;
          }
          else {
            uVar19 = puVar4[7];
            uVar14 = puVar4[6];
            uStack_70 = puVar4[8];
            uVar11 = puVar6[5];
            uVar20 = puVar6[3];
            puVar4[7] = puVar6[4];
            puVar4[6] = uVar20;
            puVar4[8] = uVar11;
            puVar6[5] = uStack_70;
            puVar6[4] = uVar19;
            puVar6[3] = uVar14;
            puVar8 = puVar7;
            func_0x00010a286750(puVar7,puVar6 + 3);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287a50;
            uVar20 = puVar6[4];
            uVar14 = puVar6[3];
            uVar11 = puVar6[5];
            uVar21 = param_2[-8];
            uVar19 = *puVar7;
            puVar6[5] = param_2[-7];
            puVar6[4] = uVar21;
            puVar6[3] = uVar19;
            param_2[-8] = uVar20;
            *puVar7 = uVar14;
            uStack_70 = uVar11;
          }
          param_2[-7] = uVar11;
        }
LAB_10a287a50:
        puVar3 = puVar6;
        func_0x00010a286750(puVar6,puVar18);
        puVar8 = puVar6 + 3;
        func_0x00010a286750(puVar8,puVar6);
        if (((uint)puVar3 >> 7 & 1) == 0) {
          if ((char)puVar8 < '\0') {
            uVar14 = puVar6[1];
            uVar11 = *puVar6;
            uStack_70 = puVar6[2];
            puVar6[1] = puVar6[4];
            *puVar6 = puVar6[3];
            puVar6[2] = puVar6[5];
            puVar6[5] = uStack_70;
            puVar6[4] = uVar14;
            puVar6[3] = uVar11;
            puVar8 = puVar6;
            func_0x00010a286750(puVar6,puVar18);
            if (((uint)puVar8 >> 7 & 1) != 0) {
              uVar19 = puVar6[-2];
              uVar14 = *puVar18;
              uVar11 = puVar6[-1];
              puVar6[-2] = puVar6[1];
              *puVar18 = *puVar6;
              puVar6[-1] = puVar6[2];
              puVar6[2] = uVar11;
              puVar6[1] = uVar19;
              *puVar6 = uVar14;
            }
          }
        }
        else {
          if ((char)puVar8 < '\0') {
            uStack_78 = puVar6[-2];
            uStack_80 = *puVar18;
            uStack_70 = puVar6[-1];
            puVar6[-2] = puVar6[4];
            *puVar18 = puVar6[3];
            puVar6[-1] = puVar6[5];
          }
          else {
            uVar14 = puVar6[-2];
            uVar11 = *puVar18;
            uStack_70 = puVar6[-1];
            puVar6[-2] = puVar6[1];
            *puVar18 = *puVar6;
            puVar6[-1] = puVar6[2];
            puVar6[2] = uStack_70;
            puVar6[1] = uVar14;
            *puVar6 = uVar11;
            puVar8 = puVar6 + 3;
            func_0x00010a286750(puVar8,puVar6);
            if (((uint)puVar8 >> 7 & 1) == 0) goto LAB_10a287b84;
            uStack_78 = puVar6[1];
            uStack_80 = *puVar6;
            uStack_70 = puVar6[2];
            puVar6[1] = puVar6[4];
            *puVar6 = puVar6[3];
            puVar6[2] = puVar6[5];
          }
          puVar6[5] = uStack_70;
          puVar6[4] = uStack_78;
          puVar6[3] = uStack_80;
        }
LAB_10a287b84:
        uVar19 = puVar4[1];
        uVar11 = *puVar4;
        uStack_70 = puVar4[2];
        uVar20 = puVar6[1];
        uVar14 = *puVar6;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar20;
        *puVar4 = uVar14;
        puVar6[2] = uStack_70;
        puVar6[1] = uVar19;
        *puVar6 = uVar11;
      }
LAB_10a287bb4:
      if ((uStack_164 & 1) == 0) {
        puVar6 = puVar4 + -3;
        func_0x00010a286750(puVar6,puVar4);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          FUN_10a2882b8(puVar4,param_2,param_3);
          puVar6 = puVar4;
          goto LAB_10a287c50;
        }
      }
      puVar8 = puVar4;
      puVar6 = param_2;
      FUN_10a288424(puVar4,param_2,param_3);
      if (((ulong)puVar6 & 1) == 0) break;
      puVar3 = puVar4;
      FUN_10a2885a0(puVar4,puVar8,param_3);
      puVar6 = puVar8 + 3;
      param_1 = puVar6;
      FUN_10a2885a0(puVar6,param_2,param_3);
      if ((int)param_1 != 0) {
        param_4 = -param_4;
        param_2 = puVar8;
        if (((ulong)puVar3 & 1) != 0) {
          return param_1;
        }
        goto LAB_10a287518;
      }
    } while (((ulong)puVar3 & 1) != 0);
    FUN_10a2874e8(puVar4,puVar8,param_3,-param_4,uStack_164 & 1);
    puVar6 = puVar8 + 3;
LAB_10a287c50:
    uStack_164 = 0;
    param_4 = -param_4;
    param_1 = puVar4;
  } while( true );
LAB_10a288130:
  puVar7 = puVar6;
  puVar5 = puVar7;
  func_0x00010a286750(puVar7,puVar9);
  if (((uint)puVar5 >> 7 & 1) != 0) {
    uVar19 = puVar7[1];
    uVar14 = *puVar7;
    uVar11 = puVar7[2];
    lVar17 = lVar16;
    do {
      lVar15 = lVar17;
      puVar6 = (undefined8 *)((long)puVar4 + lVar15);
      puVar6[4] = puVar6[1];
      puVar6[3] = *puVar6;
      puVar6[5] = puVar6[2];
      puVar6 = puVar4;
      if (lVar15 == 0) goto LAB_10a288194;
      puVar5 = (undefined8 *)&stack0xffffffffffffffa0;
      func_0x00010a286750(&stack0xffffffffffffffa0,(undefined1 *)(lVar15 + -0x18 + (long)puVar4));
      lVar17 = lVar15 + -0x18;
    } while (((uint)puVar5 >> 7 & 1) != 0);
    puVar6 = (undefined8 *)((long)puVar4 + lVar15);
LAB_10a288194:
    puVar6[1] = uVar19;
    *puVar6 = uVar14;
    puVar6[2] = uVar11;
  }
  lVar16 = lVar16 + 0x18;
  puVar6 = puVar7 + 3;
  puVar9 = puVar7;
  if (puVar7 + 3 == param_2) {
    return puVar5;
  }
  goto LAB_10a288130;
}



/* Entry: 10a287f38; end: 10a2881cb;  */

void FUN_10a287f38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = param_2;
  func_0x00010a286750(param_2,param_1);
  puVar2 = param_3;
  func_0x00010a286750(param_3,param_2);
  if (((uint)puVar1 >> 7 & 1) == 0) {
    if ((char)puVar2 < '\0') {
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar6;
      *param_3 = uVar5;
      param_3[2] = uVar3;
      puVar1 = param_2;
      func_0x00010a286750(param_2,param_1);
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = param_1[2];
        uVar6 = param_1[1];
        uVar5 = *param_1;
        uVar4 = param_2[2];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar4;
        param_2[1] = uVar6;
        *param_2 = uVar5;
        param_2[2] = uVar3;
      }
    }
  }
  else {
    if ((char)puVar2 < '\0') {
      uVar3 = param_1[2];
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
    }
    else {
      uVar3 = param_1[2];
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_2[2];
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
      param_2[1] = uVar6;
      *param_2 = uVar5;
      param_2[2] = uVar3;
      puVar1 = param_3;
      func_0x00010a286750(param_3,param_2);
      if (((uint)puVar1 >> 7 & 1) == 0) goto LAB_10a28804c;
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
    }
    param_3[1] = uVar6;
    *param_3 = uVar5;
    param_3[2] = uVar3;
  }
LAB_10a28804c:
  puVar1 = param_4;
  func_0x00010a286750(param_4,param_3);
  if (((uint)puVar1 >> 7 & 1) != 0) {
    uVar3 = param_3[2];
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar4 = param_4[2];
    uVar7 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_3[2] = uVar4;
    param_4[1] = uVar6;
    *param_4 = uVar5;
    param_4[2] = uVar3;
    puVar1 = param_3;
    func_0x00010a286750(param_3,param_2);
    if (((uint)puVar1 >> 7 & 1) != 0) {
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar6;
      *param_3 = uVar5;
      param_3[2] = uVar3;
      puVar1 = param_2;
      func_0x00010a286750(param_2,param_1);
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = param_1[2];
        uVar6 = param_1[1];
        uVar5 = *param_1;
        uVar4 = param_2[2];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar4;
        param_2[1] = uVar6;
        *param_2 = uVar5;
        param_2[2] = uVar3;
      }
    }
  }
  return;
}



/* Entry: 10a2881cc; end: 10a2882b7;  */

void FUN_10a2881cc(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 3, puVar5 != param_2)) {
    puVar7 = param_1 + -3;
    lVar8 = -0x18;
    lVar9 = 0x18;
    lVar6 = 0;
    do {
      lVar4 = lVar9;
      puVar3 = puVar5;
      func_0x00010a286750(puVar5,(long)param_1 + lVar6);
      if (((uint)puVar3 >> 7 & 1) != 0) {
        uStack_68 = puVar5[1];
        uStack_70 = *puVar5;
        uStack_60 = puVar5[2];
        puVar5 = puVar7;
        lVar9 = lVar8;
        do {
          puVar3 = puVar5;
          puVar3[7] = puVar3[4];
          puVar3[6] = puVar3[3];
          puVar3[8] = puVar3[5];
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2882b8);
            (*pcVar1)();
          }
          uVar2 = (uint)&uStack_70;
          func_0x00010a286750(&uStack_70,puVar3);
          lVar9 = lVar9 + 0x18;
          puVar5 = puVar3 + -3;
        } while ((uVar2 >> 7 & 1) != 0);
        puVar3[4] = uStack_68;
        puVar3[3] = uStack_70;
        puVar3[5] = uStack_60;
      }
      lVar9 = lVar4 + 0x18;
      puVar5 = (undefined8 *)((long)param_1 + lVar9);
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -0x18;
      lVar6 = lVar4;
    } while (puVar5 != param_2);
  }
  return;
}



/* Entry: 10a2882b8; end: 10a288423;  */

undefined8 * FUN_10a2882b8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = (uint)&uStack_70;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  func_0x00010a286750(&uStack_70,param_2 + -3);
  puVar3 = param_1;
  if ((uVar2 >> 7 & 1) == 0) {
    do {
      puVar3 = puVar3 + 3;
      if (param_2 <= puVar3) break;
      uVar2 = (uint)&uStack_70;
      func_0x00010a286750(&uStack_70,puVar3);
    } while ((uVar2 >> 7 & 1) == 0);
  }
  else {
    do {
      puVar3 = puVar3 + 3;
      if (puVar3 == param_2) goto LAB_10a288420;
      uVar2 = (uint)&uStack_70;
      func_0x00010a286750(&uStack_70,puVar3);
    } while ((uVar2 >> 7 & 1) == 0);
  }
  puVar4 = param_2;
  if (puVar3 < param_2) {
    do {
      if (puVar4 == param_1) {
LAB_10a288420:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a288424);
        (*pcVar1)();
      }
      puVar4 = puVar4 + -3;
      uVar2 = (uint)&uStack_70;
      func_0x00010a286750(&uStack_70,puVar4);
    } while ((uVar2 >> 7 & 1) != 0);
  }
  do {
    if (puVar4 <= puVar3) {
      puVar4 = puVar3 + -3;
      if (puVar4 != param_1) {
        uVar6 = puVar3[-2];
        uVar5 = *puVar4;
        param_1[2] = puVar3[-1];
        param_1[1] = uVar6;
        *param_1 = uVar5;
      }
      puVar3[-1] = uStack_60;
      puVar3[-2] = uStack_68;
      *puVar4 = uStack_70;
      return puVar3;
    }
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_40 = puVar3[2];
    uVar6 = puVar4[1];
    uVar5 = *puVar4;
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    puVar4[2] = uStack_40;
    puVar4[1] = uStack_48;
    *puVar4 = uStack_50;
    do {
      puVar3 = puVar3 + 3;
      if (puVar3 == param_2) goto LAB_10a288420;
      uVar2 = (uint)&uStack_70;
      func_0x00010a286750(&uStack_70,puVar3);
    } while ((uVar2 >> 7 & 1) == 0);
    do {
      if (puVar4 == param_1) goto LAB_10a288420;
      puVar4 = puVar4 + -3;
      uVar2 = (uint)&uStack_70;
      func_0x00010a286750(&uStack_70,puVar4);
    } while ((uVar2 >> 7 & 1) != 0);
  } while( true );
}



/* Entry: 10a288424; end: 10a28859f;  */

void FUN_10a288424(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = 0;
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_70 = param_1[2];
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar4 + 0x18);
    if (puVar2 == param_2) goto LAB_10a28859c;
    func_0x00010a286750(puVar2,&uStack_80);
    lVar4 = lVar4 + 0x18;
  } while (((uint)puVar2 >> 7 & 1) != 0);
  puVar2 = (undefined8 *)((long)param_1 + lVar4);
  puVar5 = param_2;
  if (lVar4 == 0x18) {
    do {
      if (puVar5 <= puVar2) break;
      puVar5 = puVar5 + -3;
      puVar3 = puVar5;
      func_0x00010a286750(puVar5,&uStack_80);
    } while (((uint)puVar3 >> 7 & 1) == 0);
  }
  else {
    do {
      if (puVar5 == param_1) {
LAB_10a28859c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2885a0);
        (*pcVar1)();
      }
      puVar5 = puVar5 + -3;
      puVar3 = puVar5;
      func_0x00010a286750(puVar5,&uStack_80);
    } while (((uint)puVar3 >> 7 & 1) == 0);
  }
  if (puVar2 < puVar5) {
    do {
      uStack_58 = puVar2[1];
      uStack_60 = *puVar2;
      uStack_50 = puVar2[2];
      uVar7 = puVar5[1];
      uVar6 = *puVar5;
      puVar2[2] = puVar5[2];
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      puVar5[2] = uStack_50;
      puVar5[1] = uStack_58;
      *puVar5 = uStack_60;
      do {
        puVar2 = puVar2 + 3;
        if (puVar2 == param_2) goto LAB_10a28859c;
        puVar3 = puVar2;
        func_0x00010a286750(puVar2,&uStack_80);
      } while (((uint)puVar3 >> 7 & 1) != 0);
      do {
        if (puVar5 == param_1) goto LAB_10a28859c;
        puVar5 = puVar5 + -3;
        puVar3 = puVar5;
        func_0x00010a286750(puVar5,&uStack_80);
      } while (((uint)puVar3 >> 7 & 1) == 0);
    } while (puVar2 < puVar5);
  }
  puVar5 = puVar2 + -3;
  if (puVar5 != param_1) {
    uVar7 = puVar2[-2];
    uVar6 = *puVar5;
    param_1[2] = puVar2[-1];
    param_1[1] = uVar7;
    *param_1 = uVar6;
  }
  puVar2[-1] = uStack_70;
  puVar2[-2] = uStack_78;
  *puVar5 = uStack_80;
  return;
}



/* Entry: 10a2885a0; end: 10a28899f;  */

bool FUN_10a2885a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      puVar3 = param_2 + -3;
      func_0x00010a286750(puVar3,param_1);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        return true;
      }
LAB_10a288834:
      uVar7 = param_1[2];
      uVar13 = param_1[1];
      uVar12 = *param_1;
      uVar8 = param_2[-1];
      uVar14 = param_2[-3];
      param_1[1] = param_2[-2];
      *param_1 = uVar14;
      param_1[2] = uVar8;
LAB_10a28884c:
      param_2[-2] = uVar13;
      param_2[-3] = uVar12;
      param_2[-1] = uVar7;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      puVar5 = param_2 + -3;
      puVar3 = param_1 + 3;
      func_0x00010a286750(puVar3,param_1);
      puVar4 = puVar5;
      func_0x00010a286750(puVar5,param_1 + 3);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        if (-1 < (char)puVar4) {
          return true;
        }
        uVar7 = param_1[5];
        uVar13 = param_1[4];
        uVar12 = param_1[3];
        uVar8 = param_2[-1];
        uVar14 = *puVar5;
        param_1[4] = param_2[-2];
        param_1[3] = uVar14;
        param_1[5] = uVar8;
        param_2[-2] = uVar13;
        *puVar5 = uVar12;
        param_2[-1] = uVar7;
        goto LAB_10a288718;
      }
      if (-1 < (char)puVar4) {
        uVar7 = param_1[2];
        uVar12 = param_1[1];
        uVar8 = *param_1;
        param_1[1] = param_1[4];
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[4] = uVar12;
        param_1[3] = uVar8;
        param_1[5] = uVar7;
        puVar3 = puVar5;
        func_0x00010a286750(puVar5,param_1 + 3);
        if (((uint)puVar3 >> 7 & 1) == 0) {
          return true;
        }
        uVar7 = param_1[5];
        uVar13 = param_1[4];
        uVar12 = param_1[3];
        uVar8 = param_2[-1];
        uVar14 = *puVar5;
        param_1[4] = param_2[-2];
        param_1[3] = uVar14;
        param_1[5] = uVar8;
        goto LAB_10a28884c;
      }
      goto LAB_10a288834;
    }
    if (uVar6 == 4) {
      FUN_10a287f38(param_1,param_1 + 3,param_1 + 6,param_2 + -3,param_3);
      return true;
    }
    if (uVar6 == 5) {
      puVar4 = param_2 + -3;
      FUN_10a287f38(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_3);
      puVar3 = puVar4;
      func_0x00010a286750(puVar4,param_1 + 9);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar7 = param_1[0xb];
      uVar13 = param_1[10];
      uVar12 = param_1[9];
      uVar8 = param_2[-1];
      uVar14 = *puVar4;
      param_1[10] = param_2[-2];
      param_1[9] = uVar14;
      param_1[0xb] = uVar8;
      param_2[-2] = uVar13;
      *puVar4 = uVar12;
      param_2[-1] = uVar7;
      puVar3 = param_1 + 9;
      func_0x00010a286750(puVar3,param_1 + 6);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar7 = param_1[8];
      uVar12 = param_1[7];
      uVar8 = param_1[6];
      param_1[7] = param_1[10];
      param_1[6] = param_1[9];
      param_1[8] = param_1[0xb];
      param_1[10] = uVar12;
      param_1[9] = uVar8;
      param_1[0xb] = uVar7;
      puVar3 = param_1 + 6;
      func_0x00010a286750(puVar3,param_1 + 3);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar7 = param_1[5];
      uVar12 = param_1[4];
      uVar8 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = param_1[6];
      param_1[5] = param_1[8];
      param_1[7] = uVar12;
      param_1[6] = uVar8;
      param_1[8] = uVar7;
LAB_10a288718:
      puVar3 = param_1 + 3;
      func_0x00010a286750(puVar3,param_1);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar7 = param_1[2];
      uVar12 = param_1[1];
      uVar8 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar12;
      param_1[3] = uVar8;
      param_1[5] = uVar7;
      return true;
    }
  }
  puVar3 = param_1 + 6;
  puVar4 = param_1 + 3;
  func_0x00010a286750(puVar4,param_1);
  puVar5 = puVar3;
  func_0x00010a286750(puVar3,param_1 + 3);
  if (((uint)puVar4 >> 7 & 1) == 0) {
    if ((char)puVar5 < '\0') {
      uVar7 = param_1[5];
      uVar12 = param_1[4];
      uVar8 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar3;
      param_1[5] = param_1[8];
      param_1[7] = uVar12;
      *puVar3 = uVar8;
      param_1[8] = uVar7;
      puVar4 = param_1 + 3;
      func_0x00010a286750(puVar4,param_1);
      if (((uint)puVar4 >> 7 & 1) != 0) {
        uVar7 = param_1[2];
        uVar12 = param_1[1];
        uVar8 = *param_1;
        param_1[1] = param_1[4];
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[4] = uVar12;
        param_1[3] = uVar8;
        param_1[5] = uVar7;
      }
    }
  }
  else {
    if ((char)puVar5 < '\0') {
      uVar7 = param_1[2];
      uVar12 = param_1[1];
      uVar8 = *param_1;
      param_1[1] = param_1[7];
      *param_1 = *puVar3;
      param_1[2] = param_1[8];
    }
    else {
      uVar7 = param_1[2];
      uVar12 = param_1[1];
      uVar8 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar12;
      param_1[3] = uVar8;
      param_1[5] = uVar7;
      puVar4 = puVar3;
      func_0x00010a286750(puVar3,param_1 + 3);
      if (((uint)puVar4 >> 7 & 1) == 0) goto LAB_10a2888c8;
      uVar7 = param_1[5];
      uVar12 = param_1[4];
      uVar8 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar3;
      param_1[5] = param_1[8];
    }
    param_1[7] = uVar12;
    *puVar3 = uVar8;
    param_1[8] = uVar7;
  }
LAB_10a2888c8:
  if (param_1 + 9 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar4 = param_1 + 9;
    do {
      puVar5 = puVar4;
      func_0x00010a286750(puVar4,puVar3);
      if (((uint)puVar5 >> 7 & 1) != 0) {
        uStack_248 = puVar4[1];
        uStack_250 = *puVar4;
        uStack_240 = puVar4[2];
        lVar1 = lVar10;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x38);
          *(undefined8 *)((long)param_1 + lVar9 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x30);
          *(undefined8 *)((long)param_1 + lVar9 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x40);
          puVar3 = param_1;
          if (lVar9 == -0x30) goto LAB_10a288940;
          uVar2 = (uint)&uStack_250;
          func_0x00010a286750(&uStack_250,(long)param_1 + lVar9 + 0x18);
          lVar1 = lVar9 + -0x18;
        } while ((uVar2 >> 7 & 1) != 0);
        puVar3 = (undefined8 *)((long)param_1 + lVar9 + 0x30);
LAB_10a288940:
        puVar3[1] = uStack_248;
        *puVar3 = uStack_250;
        puVar3[2] = uStack_240;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return puVar4 + 3 == param_2;
        }
      }
      puVar5 = puVar4 + 3;
      lVar10 = lVar10 + 0x18;
      puVar3 = puVar4;
      puVar4 = puVar5;
    } while (puVar5 != param_2);
  }
  return true;
}



/* Entry: 10a2889a0; end: 10a288b4b;  */

undefined8 *
FUN_10a2889a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar7 = param_3;
  if (param_1 != param_2) {
    uVar9 = (long)param_2 - (long)param_1;
    lVar8 = ((long)uVar9 >> 3) * -0x5555555555555555;
    puVar7 = param_2;
    if (0x18 < (long)uVar9) {
      uVar3 = lVar8 - 2U >> 1;
      lVar10 = uVar3 + 1;
      puVar2 = param_1 + uVar3 * 3;
      do {
        FUN_10a288b4c(param_1,param_4,lVar8,puVar2);
        puVar2 = puVar2 + -3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    for (; puVar7 != param_3; puVar7 = puVar7 + 3) {
      puVar2 = puVar7;
      func_0x00010a286750(puVar7,param_1);
      if (((uint)puVar2 >> 7 & 1) != 0) {
        uVar4 = puVar7[2];
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        uVar5 = param_1[2];
        uVar13 = *param_1;
        puVar7[1] = param_1[1];
        *puVar7 = uVar13;
        puVar7[2] = uVar5;
        param_1[1] = uVar12;
        *param_1 = uVar11;
        param_1[2] = uVar4;
        FUN_10a288b4c(param_1,param_4,lVar8,param_1);
      }
    }
    if (0x18 < (long)uVar9) {
      lVar8 = (uVar9 >> 3) * -0x5555555555555555;
      do {
        puVar6 = param_2 + -3;
        uVar11 = param_1[1];
        uVar5 = *param_1;
        uVar4 = param_1[2];
        puVar2 = param_1;
        FUN_10a288ca4(param_1,param_4,lVar8);
        if (puVar6 == puVar2) {
          puVar2[1] = uVar11;
          *puVar2 = uVar5;
          puVar2[2] = uVar4;
        }
        else {
          uVar13 = param_2[-2];
          uVar12 = *puVar6;
          puVar2[2] = param_2[-1];
          puVar2[1] = uVar13;
          *puVar2 = uVar12;
          param_2[-2] = uVar11;
          *puVar6 = uVar5;
          param_2[-1] = uVar4;
          FUN_10a288d54(param_1,puVar2 + 3,param_4,
                        ((long)(puVar2 + 3) - (long)param_1 >> 3) * -0x5555555555555555);
        }
        bVar1 = 2 < lVar8;
        lVar8 = lVar8 + -1;
        param_2 = puVar6;
      } while (bVar1);
    }
  }
  return puVar7;
}



/* Entry: 10a288b4c; end: 10a288ca3;  */

void FUN_10a288b4c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (1 < param_3) {
    lVar4 = (long)param_4 - param_1 >> 3;
    uVar8 = param_3 - 2U >> 1;
    if (lVar4 * -0x5555555555555555 <= (long)uVar8) {
      uVar2 = lVar4 * 0x5555555555555556 | 1;
      puVar5 = (undefined8 *)(param_1 + uVar2 * 0x18);
      uVar1 = lVar4 * 0x5555555555555556 + 2;
      puVar7 = puVar5;
      uVar9 = uVar2;
      if ((long)uVar1 < param_3) {
        puVar6 = puVar5;
        func_0x00010a286750(puVar5,puVar5 + 3);
        puVar7 = puVar5 + 3;
        uVar9 = uVar1;
        if (-1 < (char)puVar6) {
          puVar7 = puVar5;
          uVar9 = uVar2;
        }
      }
      puVar5 = puVar7;
      func_0x00010a286750(puVar7,param_4);
      if (((uint)puVar5 >> 7 & 1) == 0) {
        uStack_78 = param_4[1];
        uStack_80 = *param_4;
        uStack_70 = param_4[2];
        do {
          puVar5 = puVar7;
          uVar11 = puVar5[1];
          uVar10 = *puVar5;
          param_4[2] = puVar5[2];
          param_4[1] = uVar11;
          *param_4 = uVar10;
          if ((long)uVar8 < (long)uVar9) break;
          uVar2 = uVar9 << 1 | 1;
          puVar6 = (undefined8 *)(param_1 + uVar2 * 0x18);
          uVar1 = uVar9 * 2 + 2;
          puVar7 = puVar6;
          uVar9 = uVar2;
          if ((long)uVar1 < param_3) {
            puVar3 = puVar6;
            func_0x00010a286750(puVar6,puVar6 + 3);
            puVar7 = puVar6 + 3;
            uVar9 = uVar1;
            if (-1 < (char)puVar3) {
              puVar7 = puVar6;
              uVar9 = uVar2;
            }
          }
          puVar6 = puVar7;
          func_0x00010a286750(puVar7,&uStack_80);
          param_4 = puVar5;
        } while (((uint)puVar6 >> 7 & 1) == 0);
        puVar5[2] = uStack_70;
        puVar5[1] = uStack_78;
        *puVar5 = uStack_80;
      }
    }
  }
  return;
}



/* Entry: 10a288ca4; end: 10a288d53;  */

undefined8 * FUN_10a288ca4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = 0;
  do {
    puVar1 = param_1 + uVar6 * 3 + 3;
    uVar3 = uVar6 << 1 | 1;
    uVar2 = uVar6 * 2 + 2;
    puVar7 = puVar1;
    uVar4 = uVar3;
    if ((long)uVar2 < param_3) {
      puVar5 = puVar1;
      func_0x00010a286750(puVar1,param_1 + uVar6 * 3 + 6);
      puVar7 = param_1 + uVar6 * 3 + 6;
      uVar4 = uVar2;
      if (-1 < (char)puVar5) {
        puVar7 = puVar1;
        uVar4 = uVar3;
      }
    }
    uVar6 = uVar4;
    uVar9 = puVar7[1];
    uVar8 = *puVar7;
    param_1[2] = puVar7[2];
    param_1[1] = uVar9;
    *param_1 = uVar8;
    param_1 = puVar7;
  } while ((long)uVar6 <= (param_3 + -2) / 2);
  return puVar7;
}



/* Entry: 10a288d54; end: 10a288e0b;  */

void FUN_10a288d54(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    puVar3 = (undefined8 *)(param_1 + uVar5 * 0x18);
    puVar4 = (undefined8 *)(param_2 + -0x18);
    puVar1 = puVar3;
    func_0x00010a286750(puVar3,puVar4);
    if (((uint)puVar1 >> 7 & 1) != 0) {
      uStack_58 = *(undefined8 *)(param_2 + -0x10);
      uStack_60 = *puVar4;
      uStack_50 = *(undefined8 *)(param_2 + -8);
      do {
        puVar1 = puVar3;
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        puVar4[2] = puVar1[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        puVar3 = (undefined8 *)(param_1 + uVar5 * 0x18);
        puVar2 = puVar3;
        func_0x00010a286750(puVar3,&uStack_60);
        puVar4 = puVar1;
      } while (((uint)puVar2 >> 7 & 1) != 0);
      puVar1[1] = uStack_58;
      *puVar1 = uStack_60;
      puVar1[2] = uStack_50;
    }
  }
  return;
}



/* Entry: 10a288e0c; end: 10a288f9b;  */

/* WARNING: Removing unreachable block (ram,0x00010a288f14) */
/* WARNING: Removing unreachable block (ram,0x00010a288f18) */
/* WARNING: Removing unreachable block (ram,0x00010a288f20) */
/* WARNING: Removing unreachable block (ram,0x00010a288f28) */
/* WARNING: Removing unreachable block (ram,0x00010a288f34) */
/* WARNING: Removing unreachable block (ram,0x00010a288f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a288f44) */
/* WARNING: Removing unreachable block (ram,0x00010a288f48) */

void FUN_10a288e0c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar7 = puVar5 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar7;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_38 = puVar5;
  if ((*(byte *)(*param_2 + 0x1d1) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a288f6c);
    (*pcVar4)();
  }
  lVar6 = *(long *)param_2[3];
  FUN_10a288f9c(*param_2 + 0x1d0,*(undefined8 *)param_2[1],*(undefined8 *)(param_2[2] + 0x18),
                *(undefined8 *)(param_2[2] + 0x10),lVar6,
                (((long *)param_2[3])[1] - lVar6 >> 2) * -0x3333333333333333);
  plVar1 = puVar5 + 2;
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
        FUN_109d1b4dc(puVar7);
        goto LAB_10a288ef4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a288ef4:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_38,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a288f9c; end: 10a2890c7;  */

void FUN_10a288f9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (param_6 != 0) {
    lVar9 = 0;
    uStack_68 = param_2;
    do {
      puVar8 = (undefined8 *)(param_5 + lVar9 * 0x14);
      uStack_88 = puVar8[1];
      uStack_90 = *puVar8;
      uStack_80 = CONCAT31(uStack_80._1_3_,*(undefined1 *)(puVar8 + 2));
      puVar6 = &uStack_68;
      func_0x0001098ac018(puVar6,&UNK_10e4a670f,0x2b,&uStack_90,0,1);
      uStack_88 = puVar8[1];
      uStack_90 = *puVar8;
      uStack_80 = *(undefined4 *)(puVar8 + 2);
      uStack_7c = 0xffffffff;
      uStack_78 = 0;
      plStack_70 = (long *)0x0;
      puVar8 = &uStack_68;
      FUN_10a2890c8(puVar8,&uStack_90,(ulong)puVar6 & 0xffffffff);
      plVar4 = plStack_70;
      if (lVar9 == param_4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2890b4);
        (*pcVar5)();
      }
      *(int *)(param_3 + lVar9 * 4) = (int)puVar8;
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != param_6);
  }
  return;
}



/* Entry: 10a2890c8; end: 10a28913b;  */

long * FUN_10a2890c8(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *param_1 + 0x18;
  uStack_30 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  plVar1 = &lStack_28;
  FUN_10a28913c(plVar1,param_2,param_3,&lStack_40);
  if (lStack_40 != 0) {
    lStack_38 = lStack_40;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a28913c; end: 10a28924f;  */

undefined ***
FUN_10a28913c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined **appuStack_110 [7];
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,param_3);
  FUN_10a26ebc0(param_4,*param_4,&uStack_78,(long)&uStack_78 + 4,1);
  pppuVar1 = (undefined ***)*param_1;
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_90 = param_2[2];
  uStack_48 = param_2[4];
  uStack_50 = param_2[3];
  param_2[3] = 0;
  param_2[4] = 0;
  uStack_78 = FUN_10a2893c4;
  ppuStack_70 = &PTR_FUN_110bba318;
  uStack_88 = 0;
  uStack_80 = 0;
  puVar3 = &uStack_78;
  uStack_68 = uStack_a0;
  uStack_60 = uStack_98;
  uStack_58 = uStack_90;
  FUN_10a289250(pppuVar1);
  pppuVar2 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  func_0x00010a1bb0e8(&uStack_88);
  pppuVar1 = pppuVar2;
  __Unwind_Resume(pppuVar2);
  pcStack_a8 = FUN_10a289250;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = *puVar3;
  puStack_d0 = &uStack_78;
  puStack_c8 = (undefined1 *)&uStack_a0;
  puStack_c0 = param_2;
  pppuStack_b8 = pppuVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  (**(code **)(puVar3[1] + 0x10))(appuStack_110);
  lStack_128 = param_4[1];
  lStack_130 = *param_4;
  lStack_120 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  func_0x0001098aeecc(pppuVar1,&uStack_118,&UNK_110bba2f8,&lStack_130);
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  pppuVar2 = appuStack_110;
  (*(code *)*appuStack_110[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  (*(code *)*appuStack_110[0])(appuStack_110);
  __Unwind_Resume();
  *pppuVar2 = (undefined **)0x0;
  return pppuVar2;
}



/* Entry: 10a289250; end: 10a28934b;  */

undefined8 ** FUN_10a289250(undefined8 **param_1,undefined8 *param_2,long *param_3)

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
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bba2f8,&lStack_90);
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



/* Entry: 10a28934c; end: 10a28935b;  */

void FUN_10a28934c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a28935c; end: 10a2893c3;  */

undefined8 FUN_10a28935c(undefined8 param_1)

{
  func_0x00010a289384(param_1,0);
  return param_1;
}



/* Entry: 10a2893c4; end: 10a2893e7;  */

void FUN_10a2893c4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long **pplStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    pplStack_28 = (long **)param_2;
    func_0x00010a2894c0(plVar2,*param_4);
    if (*plVar2 != 0) {
      plStack_48 = plVar2;
      func_0x00010a289568(&lStack_40,param_3);
      pplStack_28 = &plStack_48;
      lStack_30 = param_6 + 0x10;
      func_0x00010a289458();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a289458);
  (*pcVar1)();
}



/* Entry: 10a2893e8; end: 10a28960f;  */

void FUN_10a2893e8(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long **pplStack_28;
  
  lStack_40 = param_2;
  uStack_38 = param_3;
  if (param_6 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_2;
    pplStack_28 = (long **)param_3;
    func_0x00010a2894c0(plVar2,*param_5);
    if (*plVar2 != 0) {
      plStack_48 = plVar2;
      func_0x00010a289568(&lStack_40,param_4);
      pplStack_28 = &plStack_48;
      lStack_30 = param_1;
      func_0x00010a289458();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a289458);
  (*pcVar1)();
}



/* Entry: 10a289610; end: 10a289643;  */

long FUN_10a289610(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a289644; end: 10a2896e7;  */

undefined8 * FUN_10a289644(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_110bba4e0;
  FUN_10a2896e8(param_1 + 3,param_2);
  uVar1 = *param_2;
  param_1[6] = param_2[1];
  param_1[5] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[7] = uVar1;
  param_1[9] = param_2[4];
  (**(code **)(param_2[5] + 0x10))(param_1 + 10);
  param_1[0x11] = param_2[0xc];
  (**(code **)(param_2[0xd] + 0x10))(param_1 + 0x12,param_2 + 0xd);
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 10a2896e8; end: 10a28976b;  */

void FUN_10a2896e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x68);
  if ((*(byte *)(lVar2 + 8) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bb9cf8;
    puVar1[3] = *(undefined8 *)(param_2 + 0x60);
    (**(code **)(lVar2 + 0x10))(puVar1 + 4,(long *)(param_2 + 0x68));
    *param_1 = puVar1 + 3;
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 10a28976c; end: 10a28983b;  */

undefined8 * FUN_10a28976c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bba4e0;
  (**(code **)param_1[0x12])();
  (**(code **)param_1[10])();
  func_0x00010a26dc64(param_1 + 7,0);
  func_0x00010a23575c(param_1 + 5);
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a28983c; end: 10a289917;  */

void FUN_10a28983c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar5 = 0x1e8;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_38 = *(long **)(param_2 + 0x20);
  uStack_40 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a289918(uVar5,param_3,lVar6,param_2 + 0x28,&uStack_40);
  plVar1 = plStack_38;
  *param_1 = uVar5;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a289918; end: 10a289b1f;  */

undefined8 *
FUN_10a289918(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_DAT_110bba520;
  plStack_48 = (long *)param_5[1];
  uStack_50 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  func_0x0001098bae4c(param_1,&UNK_10e4a6f81,0x18,param_2,param_3,param_1 + 0x19,param_1 + 0x33,
                      param_8,0,0,&uStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_DAT_110bba520;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = &PTR_FUN_110bb9fe8;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 0x27) = 0x40000000;
  param_1[0x24] = &PTR_FUN_110bba590;
  param_1[0x25] = &UNK_110bba560;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 0x2d) = 0x40000000;
  param_1[0x2a] = &PTR_FUN_110bba590;
  param_1[0x2b] = &UNK_110bba560;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar5 = param_1[0xc];
  if (lVar5 == 0) {
    bVar4 = false;
    lVar6 = param_4;
  }
  else {
    bVar4 = lVar5 != param_1[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_4;
    }
  }
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x37] = 0x10a28aa84;
  param_1[0x38] = &UNK_110bba070;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x33] = &PTR_FUN_110bba5d0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x28) + 8) == '\x01')) {
    param_1[0x3c] = lVar6 + 0x20;
  }
  if ((lVar5 == 0) || (lVar5 == param_1[0xb])) {
    FUN_10a28aba0();
    param_1[0x30] = param_4;
    param_1[0x31] = param_2;
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  return param_1;
}



/* Entry: 10a289b20; end: 10a289c4b;  */

void FUN_10a289b20(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 8;
  *param_1 = &PTR_FUN_110bb9fe8;
  FUN_10a28a2cc(&puStack_28);
  func_0x0001098bba44(param_1);
  return;
}



/* Entry: 10a289c4c; end: 10a289c63;  */

void FUN_10a289c4c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(char *)(param_1 + 400) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x180);
    ppuVar2 = &PTR_PTR_113306300;
    FUN_10ae079a0(0,&PTR_PTR_113306300);
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_113306300);
    *(undefined4 *)(lVar1 + 0x24) = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    func_0x0001096e4e8c(lVar1 + 0x140,0x11382aac8,&uStack_40);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10aada088(&puStack_28);
    FUN_10aab1c58(lVar1 + 0x68);
    return;
  }
  return;
}



/* Entry: 10a289c64; end: 10a289cdb;  */

uint FUN_10a289c64(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x150;
  if (lVar4 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  func_0x00010a286b48(lVar1 + 0x20);
  lStack_38 = param_1;
  FUN_10a28ac18(lVar1 + 0x20,&lStack_38);
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    FUN_10a28a860(uVar3,*(undefined8 *)(lVar1 + 0x20));
    uVar2 = (uint)uVar3 ^ 1;
  }
  return uVar2;
}



/* Entry: 10a289cdc; end: 10a289d13;  */

void FUN_10a289cdc(long param_1)

{
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(lStack_28 + 0x20);
  plStack_30 = &lStack_18;
  lStack_38 = param_1;
  lStack_18 = param_1;
  FUN_10a28af10(&lStack_38);
  return;
}



/* Entry: 10a289d14; end: 10a289d97;  */

void FUN_10a289d14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba028;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a28a00c();
  *param_1 = puVar1;
  return;
}



/* Entry: 10a289d98; end: 10a289ddb;  */

void FUN_10a289d98(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 < *(ulong *)(param_1 + 0x50)) {
    FUN_10a230bf4(uVar1);
    lVar2 = uVar1 + 0xb8;
  }
  else {
    lVar2 = param_1 + 0x40;
    FUN_10a28a354();
  }
  *(long *)(param_1 + 0x48) = lVar2;
  return;
}



/* Entry: 10a289ddc; end: 10a289de7;  */

void FUN_10a289ddc(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar4 = (lVar5 - lVar3 >> 3) * -0x2c8590b21642c859;
  if (uVar2 + 1 != uVar4) {
    if ((lVar3 == lVar5) || (uVar4 < uVar2 || uVar4 - uVar2 == 0)) goto LAB_10a28a630;
    uVar8 = *(undefined8 *)(lVar5 + -0xb0);
    uVar7 = *(undefined8 *)(lVar5 + -0xb8);
    puVar6 = (undefined8 *)(lVar3 + uVar2 * 0xb8);
    *(undefined8 *)((long)puVar6 + 0xf) = *(undefined8 *)(lVar5 + -0xa9);
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    func_0x00010a230998(puVar6 + 3,lVar5 + -0xa0);
    func_0x00010a230a6c(puVar6 + 7,lVar5 + -0x80);
    *(undefined1 *)(puVar6 + 0x13) = *(undefined1 *)(lVar5 + -0x20);
    FUN_10a230b90(puVar6 + 0x14);
    uVar7 = *(undefined8 *)(lVar5 + -0x18);
    puVar6[0x15] = *(undefined8 *)(lVar5 + -0x10);
    puVar6[0x14] = uVar7;
    puVar6[0x16] = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -0x18) = 0;
    *(undefined8 *)(lVar5 + -0x10) = 0;
    *(undefined8 *)(lVar5 + -8) = 0;
    lVar3 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    uVar4 = (lVar5 - lVar3 >> 3) * -0x2c8590b21642c859;
    if (uVar4 < uVar2 || uVar4 - uVar2 == 0) goto LAB_10a28a630;
  }
  if (lVar3 != lVar5) {
    FUN_10a28a274(lVar5 + -0xb8);
    *(long *)(param_1 + 0x48) = lVar5 + -0xb8;
    return;
  }
LAB_10a28a630:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28a634);
  (*pcVar1)();
}



/* Entry: 10a289de8; end: 10a289e73;  */

undefined8 * FUN_10a289de8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110bba028;
  FUN_10a28a2cc(&puStack_28);
  return param_1;
}


