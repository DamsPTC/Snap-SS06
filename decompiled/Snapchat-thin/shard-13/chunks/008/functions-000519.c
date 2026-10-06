/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acbc044; end: 10acbc067;  */

void FUN_10acbc044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar6 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10acbb638(plVar3,uVar6);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  FUN_10ac9b564(plVar5,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10acbc068; end: 10acbc163;  */

void FUN_10acbc068(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10acbb638(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10ac9b564(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
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



/* Entry: 10acbc164; end: 10acbc1bb;  */

long FUN_10acbc164(long param_1)

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



/* Entry: 10acbc1bc; end: 10acbc21f;  */

undefined8 * FUN_10acbc1bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b5b0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10acbc220; end: 10acbc223;  */

void FUN_10acbc220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acbc224; end: 10acbc237;  */

void FUN_10acbc224(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acbc238; end: 10acbc2a7;  */

void FUN_10acbc238(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010a061620(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10acbc2a8; end: 10acbc2ab;  */

void FUN_10acbc2a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acbc2ac; end: 10acbc2fb;  */

void FUN_10acbc2ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar2 = lVar1;
  ___cxa_throw(lVar1,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  plVar3 = *(long **)(lVar2 + 0x40);
  FUN_10acbc32c();
                    /* WARNING: Could not recover jumptable at 0x00010acbc328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,0);
  return;
}



/* Entry: 10acbc2fc; end: 10acbc32b;  */

void FUN_10acbc2fc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  FUN_10acbc32c();
                    /* WARNING: Could not recover jumptable at 0x00010acbc328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10acbc32c; end: 10acbc3bf;  */

void FUN_10acbc32c(long *param_1)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  plVar1 = param_1 + 3;
  FUN_10ad00b0c();
  if ((((ulong)plVar1 & 1) == 0) && ((bRam000000011330a9e8 & 1) != 0)) {
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f6a0bba,&UNK_10f6a1bfa,0x70,&UNK_10f6a1c6a,in_x6,in_x7,plVar1);
  }
  (*(code *)param_1[7])(param_1);
  return;
}



/* Entry: 10acbc3c0; end: 10acbc44f;  */

void FUN_10acbc3c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10acbc450; end: 10acbc53f;  */

void FUN_10acbc450(undefined4 *param_1,long *param_2,undefined8 param_3)

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
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbc540);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[4];
  if (plVar11 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar11 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar11;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110bf8420;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
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
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
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



/* Entry: 10acbc540; end: 10acbc5ff;  */

void FUN_10acbc540(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10acbc6b8(param_2,param_3);
  iVar3 = (int)param_2;
  FUN_10a052e3c(param_5);
  func_0x00010988c814();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar3;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acbc600; end: 10acbc6b7;  */

void FUN_10acbc600(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbc6b8; end: 10acbc6fb;  */

long * FUN_10acbc6b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf8420) {
    return param_1 + 1;
  }
  plVar6 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10acbc6b8(plVar6,param_2);
  iVar4 = (int)plVar6;
  FUN_10a052e3c(param_4);
  func_0x00010988c964();
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar4;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  lVar8 = *plVar6;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar5 + uVar10 * 0x10;
          plVar6 = &lStack_98;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(plVar6);
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
    plVar6 = plVar13;
    _bzero(plVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    plVar2 = (long *)(lVar8 + uVar9 * 0x10);
    while (plVar13 != plVar2) {
      plVar13 = plVar13 + -2;
      plVar6 = plVar13;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return plVar6;
}



/* Entry: 10acbc6fc; end: 10acbc7bb;  */

void FUN_10acbc6fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10acbc6b8(param_2,param_3);
  iVar3 = (int)param_2;
  FUN_10a052e3c(param_5);
  func_0x00010988c964();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar3;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acbc7bc; end: 10acbc873;  */

void FUN_10acbc7bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbc874; end: 10acbc933;  */

void FUN_10acbc874(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10acbc6b8(param_2,param_3);
  iVar3 = (int)param_2;
  FUN_10a052e3c(param_5);
  func_0x00010988cab0();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar3;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acbc934; end: 10acbc9eb;  */

void FUN_10acbc934(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbc9ec; end: 10acbcb07;  */

void FUN_10acbc9ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbc6b8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = *param_2;
  iVar8 = ((int)(lVar6 / 86400000) + (int)(lVar6 >> 0x3f)) -
          (SUB164(SEXT816(lVar6) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar8 * 86400000;
  uVar7 = lVar6 + (long)(int)(iVar8 - (uint)(lVar10 - lVar6 != 0 && lVar6 <= lVar10)) * -86400000;
  uVar5 = -uVar7;
  if (-1 < (long)uVar7) {
    uVar5 = uVar7;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)(uVar5 / 3600000);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar11 = lVar10 - lVar6;
  uVar7 = lVar11 >> 4;
  if (uVar7 < uVar5) {
    uVar14 = uVar5 - uVar7;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar10 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar6 >> 3;
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar11;
          _bzero(lVar10,uVar14 * 0x10);
          lVar12 = lVar10 + uVar7 * -0x10;
          _memcpy(lVar12,lVar6,lVar11);
          *plVar1 = lVar12;
          plVar4[0x4c] = lVar10 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar4[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar5 < uVar7) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10acbcb08; end: 10acbcbbf;  */

void FUN_10acbcb08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbcbc0; end: 10acbccf7;  */

void FUN_10acbcbc0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbc6b8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = *param_2;
  iVar8 = ((int)(lVar6 / 86400000) + (int)(lVar6 >> 0x3f)) -
          (SUB164(SEXT816(lVar6) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar8 * 86400000;
  uVar7 = lVar6 + (long)(int)(iVar8 - (uint)(lVar10 - lVar6 != 0 && lVar6 <= lVar10)) * -86400000;
  uVar5 = -uVar7;
  if (-1 < (long)uVar7) {
    uVar5 = uVar7;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((uVar5 % 3600000) / 60000);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar11 = lVar10 - lVar6;
  uVar7 = lVar11 >> 4;
  if (uVar7 < uVar5) {
    uVar14 = uVar5 - uVar7;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar10 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar6 >> 3;
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar11;
          _bzero(lVar10,uVar14 * 0x10);
          lVar12 = lVar10 + uVar7 * -0x10;
          _memcpy(lVar12,lVar6,lVar11);
          *plVar1 = lVar12;
          plVar4[0x4c] = lVar10 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar4[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar5 < uVar7) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10acbccf8; end: 10acbcdaf;  */

void FUN_10acbccf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbcdb0; end: 10acbceff;  */

void FUN_10acbcdb0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbc6b8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = *param_2;
  iVar8 = ((int)(lVar6 / 86400000) + (int)(lVar6 >> 0x3f)) -
          (SUB164(SEXT816(lVar6) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar8 * 86400000;
  uVar7 = lVar6 + (long)(int)(iVar8 - (uint)(lVar10 - lVar6 != 0 && lVar6 <= lVar10)) * -86400000;
  uVar5 = -uVar7;
  if (-1 < (long)uVar7) {
    uVar5 = uVar7;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) =
       (double)(((uint)((int)(uVar5 % 3600000) + (int)((uVar5 % 3600000) / 60000) * -60000) >> 3 &
                0x1fff) / 0x7d);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar11 = lVar10 - lVar6;
  uVar7 = lVar11 >> 4;
  if (uVar7 < uVar5) {
    uVar14 = uVar5 - uVar7;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar10 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar6 >> 3;
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar11;
          _bzero(lVar10,uVar14 * 0x10);
          lVar12 = lVar10 + uVar7 * -0x10;
          _memcpy(lVar12,lVar6,lVar11);
          *plVar1 = lVar12;
          plVar4[0x4c] = lVar10 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar4[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar5 < uVar7) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10acbcf00; end: 10acbcfb7;  */

void FUN_10acbcf00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbcfb8; end: 10acbd067;  */

void FUN_10acbcfb8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbc6b8(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbd068; end: 10acbd11f;  */

void FUN_10acbd068(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a5c3b08(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbd120; end: 10acbd23f;  */

void FUN_10acbd120(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a47bb38(param_5);
  FUN_10a05a42c(param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbd22c);
    (*pcVar1)();
  }
  FUN_10a0f0374(plVar4 + 3);
  FUN_10a065390(param_1,param_2,&stack0xffffffffffffffb4);
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



/* Entry: 10acbd240; end: 10acbd2a7;  */

void FUN_10acbd240(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c6c458;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10acbd240(plVar4,param_2);
  FUN_10a400de8(param_4);
  plVar7 = plVar4;
  func_0x00010a0655d8(plVar4,param_3);
  FUN_10a0f063c((int)*plVar7,*(undefined4 *)((long)plVar7 + 4),(int)plVar7[1],plVar6 + 3);
  FUN_10a07ff64(extraout_x8,plVar4,&stack0xffffffffffffff98);
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10acbd2a8; end: 10acbd38b;  */

void FUN_10acbd2a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a400de8(param_5);
  plVar5 = param_2;
  func_0x00010a0655d8(param_2,param_4);
  FUN_10a0f063c((int)*plVar5,*(undefined4 *)((long)plVar5 + 4),(int)plVar5[1],plVar4 + 3);
  FUN_10a07ff64(param_1,param_2,&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10acbd38c; end: 10acbd443;  */

void FUN_10acbd38c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,(long)plVar4 + 0x2c);
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



/* Entry: 10acbd444; end: 10acbd4fb;  */

void FUN_10acbd444(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,(long)plVar4 + 0x34);
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



/* Entry: 10acbd4fc; end: 10acbd5cf;  */

void FUN_10acbd4fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  float fStack_48;
  float fStack_44;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  fStack_48 = (float)*(int *)((long)plVar2 + 0x1c);
  fStack_44 = (float)(int)plVar2[4];
  FUN_10a07ff64(param_1,param_2,&fStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10acbd5d0; end: 10acbd687;  */

void FUN_10acbd5d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a368650(param_1,param_2,(long)plVar4 + 0x3c);
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



/* Entry: 10acbd688; end: 10acbd73f;  */

void FUN_10acbd688(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,(long)plVar4 + 0x24);
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



/* Entry: 10acbd740; end: 10acbd7fb;  */

void FUN_10acbd740(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbd7fc; end: 10acbd8c3;  */

void FUN_10acbd7fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = plVar4 + 3;
  func_0x00010a0ed4c8();
  func_0x00010989a1f4(param_1,param_2,*plVar4,plVar4[1] - *plVar4 >> 3);
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



/* Entry: 10acbd8c4; end: 10acbd983;  */

void FUN_10acbd8c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acbd240(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 2;
  *(bool *)(param_1 + 2) = (int)lVar5 == 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acbd984; end: 10acbdb5b;  */

void FUN_10acbd984(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_48 = CONCAT17((char)param_4,(undefined7)uStack_48);
      ppppuVar3 = &pppuStack_58;
      if (param_4 != 0) goto LAB_10acbd9f8;
    }
    else {
      ppppuVar1 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar1 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar3 = ppppuVar1;
      __Znwm();
      uStack_48 = (ulong)ppppuVar1 | 0x8000000000000000;
      pppuStack_58 = ppppuVar3;
      ppuStack_50 = (undefined8 **)param_4;
LAB_10acbd9f8:
      _memmove(ppppuVar3,param_3,param_4);
    }
    *(undefined1 *)((long)ppppuVar3 + param_4) = 0;
    param_2 = param_2 + 0x38;
    FUN_10a54a2c0(param_2,&pppuStack_58);
    if (param_2 != 0) {
      if (*(short *)(param_2 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_2 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6b688,0), lVar4 != 0)) {
          unaff_x21 = (long *)(lVar4 + 8);
          goto LAB_10acbda68;
        }
      }
      else if (*(short *)(param_2 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acbdafc;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acbdafc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acbdb00);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec7a8;
    unaff_x21 = (long *)0x1137ec8e8;
    if ((bRam00000001137ec7a8 & 1) != 0) goto LAB_10acbda68;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x140) = 0;
    *(undefined8 *)(unaff_x20 + 0x148) = 0;
    unaff_x21 = (long *)(unaff_x20 + 0x140);
    *(undefined8 *)(unaff_x20 + 0x150) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acbda68:
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar6 = *(undefined8 *)(*ppuVar5 + 0x870);
  ppuStack_50 = (undefined8 **)0x0;
  uStack_48 = 0;
  pppuStack_58 = (undefined8 ***)0x0;
  FUN_10a05151c(&pppuStack_58,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21);
  FUN_10a12c178(param_1,uVar6,&pppuStack_58);
  if (pppuStack_58 != (undefined8 ***)0x0) {
    ppuStack_50 = pppuStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acbdb5c; end: 10acbdc2b;  */

undefined8 * FUN_10acbdb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b650;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acbdc2c; end: 10acbdc97;  */

void FUN_10acbdc2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b650;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a05151c();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acbdc98; end: 10acbdddb;  */

void FUN_10acbdc98(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined1 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined1 **)(param_2 + 8);
  puVar2 = *(undefined1 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEi(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acbdddc; end: 10acbdf4b;  */

void FUN_10acbdddc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acbd984(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acbdf4c; end: 10acbdfb3;  */

void FUN_10acbdf4c(undefined **param_1,undefined **param_2,undefined **param_3)

{
  code ****ppppcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  code ****ppppcVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x8;
  code *pcVar13;
  long *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long lVar15;
  long *plStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  int aiStack_130 [2];
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  code ***pppcStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  int aiStack_a0 [2];
  long *plStack_98;
  long lStack_90;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c6c3d8;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((undefined **)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    goto LAB_10acbe504;
  }
  if (param_3 < (undefined **)0x17) {
    uStack_d0 = (long *)CONCAT17((char)param_3,(undefined7)uStack_d0);
    ppppcVar7 = &pppcStack_e0;
    if (param_3 != (undefined **)0x0) goto LAB_10acbe040;
  }
  else {
    ppppcVar1 = (code ****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      ppppcVar1 = (code ****)(((ulong)param_3 | 7) + 1);
    }
    ppppcVar7 = ppppcVar1;
    __Znwm();
    uStack_d0 = (long *)((ulong)ppppcVar1 | 0x8000000000000000);
    pppcStack_e0 = (code ***)ppppcVar7;
    ppuStack_d8 = param_3;
LAB_10acbe040:
    _memmove(ppppcVar7,param_2,param_3);
  }
  *(undefined1 *)((long)ppppcVar7 + (long)param_3) = 0;
  puVar6 = puVar6 + 0x38;
  FUN_10a54a2c0(puVar6,&pppcStack_e0);
  if (puVar6 == (undefined *)0x0) {
    unaff_x20 = (long *)0x1137ec7b0;
    unaff_x21 = (long *)0x1137ec900;
    if ((bRam00000001137ec7b0 & 1) == 0) goto LAB_10acbe508;
LAB_10acbe0b0:
    while( true ) {
      if ((long)uStack_d0 < 0) {
        __ZdlPv(pppcStack_e0);
      }
      ppuVar5 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      lVar15 = *(long *)(*ppuVar5 + 0x870);
      plStack_168 = (long *)0x0;
      lStack_160 = 0;
      uStack_158 = 0;
      FUN_10acbeb18(&plStack_168,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21);
      uVar4 = uStack_158;
      lVar8 = lStack_160;
      plVar12 = plStack_168;
      lStack_160 = 0;
      uStack_158 = 0;
      plStack_168 = (long *)0x0;
      lVar14 = *(long *)(lVar15 + 0x68);
      __ZNSt3__115recursive_mutex4lockEv(lVar15 + 0x70);
      lVar14 = *(long *)(lVar14 + 0xb8);
      if ((*(byte *)(lVar14 + 0x1e0) & 1) == 0) break;
      unaff_x20 = *(long **)(lVar14 + 0x50);
      pppcStack_e0 = (code ***)FUN_10acbead0;
      ppuStack_d8 = &PTR_DAT_110c6b740;
      uStack_d0 = plVar12;
      lStack_c8 = lVar8;
      uStack_c0 = uVar4;
      unaff_x21 = (long *)(lVar8 - (long)plVar12);
      if (unaff_x21 == (long *)0x0) {
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        plVar12 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        aiStack_a0[0] = 3;
        plStack_98 = (long *)0x0;
        (**(code **)(*unaff_x20 + 0x2b0))(&plStack_f8,unaff_x20,plVar12,aiStack_a0,1);
        if ((3 < aiStack_a0[0]) && (plStack_98 != (long *)0x0)) {
          (**(code **)*plStack_98)();
        }
        FUN_10a12c3a8(&lStack_140,aiStack_a0,&plStack_f8);
        if ((3 < (int)plStack_f8) && (plStack_f0 != (long *)0x0)) {
          (**(code **)*plStack_f0)();
        }
        plVar12 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,*(undefined8 *)(lStack_140 + 8));
        unaff_x21 = plVar12;
        FUN_10acbe9b8();
        if (plVar12 != (long *)0x0) {
          pcVar13 = *(code **)*plVar12;
          goto LAB_10acbe44c;
        }
      }
      else {
        plStack_148 = (long *)0x0;
        plStack_150 = (long *)0x0;
        plStack_138 = (long *)0x0;
        lStack_140 = 0;
        puVar9 = (undefined8 *)0x40;
        __Znwm();
        *puVar9 = FUN_10acbead0;
        puVar9[1] = &PTR_DAT_110c6b740;
        puVar9[2] = plVar12;
        puVar9[3] = lVar8;
        puVar9[4] = uVar4;
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d0 = (long *)0x0;
        plVar10 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        plVar11 = (long *)0x40;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)&PTR_FUN_110ba7960;
        plStack_f8 = plVar11 + 3;
        *plStack_f8 = (long)&PTR_FUN_110ba79b0;
        plVar11[4] = (long)plVar12;
        plVar11[5] = (long)unaff_x21;
        plVar11[6] = (long)FUN_10acbea5c;
        plVar11[7] = (long)puVar9;
        uStack_108 = 0;
        plStack_100 = (long *)0x0;
        plStack_f0 = plVar11;
        FUN_10a12c924(&puStack_e8,unaff_x20,&plStack_f8);
        aiStack_a0[0] = 7;
        plVar11 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,puStack_e8);
        plStack_98 = plVar11;
        (**(code **)(*unaff_x20 + 0x2b0))(aiStack_130,unaff_x20,plVar10,aiStack_a0,1);
        if ((3 < aiStack_a0[0]) && (plStack_98 != (long *)0x0)) {
          (**(code **)*plStack_98)();
        }
        if (puStack_e8 != (undefined8 *)0x0) {
          (**(code **)*puStack_e8)();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (long *)0x0) {
          plVar11 = plStack_f0 + 1;
          do {
            lVar8 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_100;
        if (plStack_100 != (long *)0x0) {
          plVar11 = plStack_100 + 1;
          do {
            lVar8 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_100 + 0x10))(plStack_100);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        FUN_10a12c3a8(&lStack_120,aiStack_a0,aiStack_130);
        plVar11 = plStack_118;
        lStack_140 = lStack_120;
        plVar10 = plStack_138;
        lStack_120 = 0;
        plStack_118 = (long *)0x0;
        plStack_138 = plVar11;
        if (plVar10 != (long *)0x0) {
          plVar11 = plVar10 + 1;
          do {
            lVar8 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar11 = plStack_118 + 1;
          do {
            lVar8 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        unaff_x20 = plVar12;
        if ((3 < aiStack_130[0]) && (plStack_128 != (long *)0x0)) {
          pcVar13 = *(code **)*plStack_128;
          plVar12 = plStack_128;
LAB_10acbe44c:
          (*pcVar13)(plVar12);
        }
      }
      puVar9 = (undefined8 *)0x38;
      plStack_150 = unaff_x20;
      plStack_148 = unaff_x21;
      __Znwm();
      puVar9[4] = plStack_148;
      puVar9[3] = plStack_150;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110c6b700;
      puVar9[6] = plStack_138;
      puVar9[5] = lStack_140;
      lStack_140 = 0;
      plStack_138 = (long *)0x0;
      *extraout_x8 = (long)(puVar9 + 3);
      extraout_x8[1] = (long)puVar9;
      (*(code *)*ppuStack_d8)(&ppuStack_d8);
      __ZNSt3__115recursive_mutex6unlockEv(lVar15 + 0x70);
      if (plStack_168 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
        return;
      }
LAB_10acbe504:
      ___stack_chk_fail();
LAB_10acbe508:
      plVar12 = unaff_x20;
      ___cxa_guard_acquire();
      if ((int)plVar12 != 0) {
        unaff_x20[0x2a] = 0;
        unaff_x20[0x2b] = 0;
        unaff_x21 = unaff_x20 + 0x2a;
        unaff_x20[0x2c] = 0;
        ___cxa_guard_release(unaff_x20);
      }
    }
  }
  else {
    if (*(short *)(puVar6 + 0x32) == 0xf) {
      lVar8 = *(long *)(puVar6 + 0x58);
      if ((lVar8 != 0) &&
         (___dynamic_cast(lVar8,&PTR_DAT_110c6b678,&PTR_DAT_110c6b6d8,0), lVar8 != 0)) {
        unaff_x21 = (long *)(lVar8 + 8);
        goto LAB_10acbe0b0;
      }
    }
    else if (*(short *)(puVar6 + 0x32) == 4) {
      FUN_10a14efe0();
      goto LAB_10acbe4fc;
    }
    FUN_10a00946c(&UNK_10f681ac3);
  }
LAB_10acbe4fc:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10acbe500);
  (*pcVar13)();
}



/* Entry: 10acbdfb4; end: 10acbe6a3;  */

void FUN_10acbdfb4(long *param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  code ****ppppcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code ****ppppcVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long *unaff_x20;
  long *unaff_x21;
  long lVar13;
  long lVar14;
  long *plStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  int aiStack_110 [2];
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  code ***pppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  int aiStack_80 [2];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((undefined **)0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    goto LAB_10acbe504;
  }
  if (param_4 < (undefined **)0x17) {
    uStack_b0 = (long *)CONCAT17((char)param_4,(undefined7)uStack_b0);
    ppppcVar5 = &pppcStack_c0;
    if (param_4 != (undefined **)0x0) goto LAB_10acbe040;
  }
  else {
    ppppcVar1 = (code ****)0x19;
    if (((ulong)param_4 | 7) != 0x17) {
      ppppcVar1 = (code ****)(((ulong)param_4 | 7) + 1);
    }
    ppppcVar5 = ppppcVar1;
    __Znwm();
    uStack_b0 = (long *)((ulong)ppppcVar1 | 0x8000000000000000);
    pppcStack_c0 = (code ***)ppppcVar5;
    ppuStack_b8 = param_4;
LAB_10acbe040:
    _memmove(ppppcVar5,param_3,param_4);
  }
  *(undefined1 *)((long)ppppcVar5 + (long)param_4) = 0;
  param_2 = param_2 + 0x38;
  FUN_10a54a2c0(param_2,&pppcStack_c0);
  if (param_2 == 0) {
    unaff_x20 = (long *)0x1137ec7b0;
    unaff_x21 = (long *)0x1137ec900;
    if ((bRam00000001137ec7b0 & 1) == 0) goto LAB_10acbe508;
LAB_10acbe0b0:
    while( true ) {
      if ((long)uStack_b0 < 0) {
        __ZdlPv(pppcStack_c0);
      }
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      lVar14 = *(long *)(*ppuVar7 + 0x870);
      plStack_148 = (long *)0x0;
      lStack_140 = 0;
      uStack_138 = 0;
      FUN_10acbeb18(&plStack_148,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21);
      uVar4 = uStack_138;
      lVar6 = lStack_140;
      plVar11 = plStack_148;
      lStack_140 = 0;
      uStack_138 = 0;
      plStack_148 = (long *)0x0;
      lVar13 = *(long *)(lVar14 + 0x68);
      __ZNSt3__115recursive_mutex4lockEv(lVar14 + 0x70);
      lVar13 = *(long *)(lVar13 + 0xb8);
      if ((*(byte *)(lVar13 + 0x1e0) & 1) == 0) break;
      unaff_x20 = *(long **)(lVar13 + 0x50);
      pppcStack_c0 = (code ***)FUN_10acbead0;
      ppuStack_b8 = &PTR_DAT_110c6b740;
      uStack_b0 = plVar11;
      lStack_a8 = lVar6;
      uStack_a0 = uVar4;
      unaff_x21 = (long *)(lVar6 - (long)plVar11);
      if (unaff_x21 == (long *)0x0) {
        plStack_130 = (long *)0x0;
        plStack_128 = (long *)0x0;
        plVar11 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        aiStack_80[0] = 3;
        plStack_78 = (long *)0x0;
        (**(code **)(*unaff_x20 + 0x2b0))(&plStack_d8,unaff_x20,plVar11,aiStack_80,1);
        if ((3 < aiStack_80[0]) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        FUN_10a12c3a8(&lStack_120,aiStack_80,&plStack_d8);
        if ((3 < (int)plStack_d8) && (plStack_d0 != (long *)0x0)) {
          (**(code **)*plStack_d0)();
        }
        plVar11 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,*(undefined8 *)(lStack_120 + 8));
        unaff_x21 = plVar11;
        FUN_10acbe9b8();
        if (plVar11 != (long *)0x0) {
          pcVar12 = *(code **)*plVar11;
          goto LAB_10acbe44c;
        }
      }
      else {
        plStack_128 = (long *)0x0;
        plStack_130 = (long *)0x0;
        plStack_118 = (long *)0x0;
        lStack_120 = 0;
        puVar8 = (undefined8 *)0x40;
        __Znwm();
        *puVar8 = FUN_10acbead0;
        puVar8[1] = &PTR_DAT_110c6b740;
        puVar8[2] = plVar11;
        puVar8[3] = lVar6;
        puVar8[4] = uVar4;
        lStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = (long *)0x0;
        plVar9 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        plVar10 = (long *)0x40;
        __Znwm();
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = (long)&PTR_FUN_110ba7960;
        plStack_d8 = plVar10 + 3;
        *plStack_d8 = (long)&PTR_FUN_110ba79b0;
        plVar10[4] = (long)plVar11;
        plVar10[5] = (long)unaff_x21;
        plVar10[6] = (long)FUN_10acbea5c;
        plVar10[7] = (long)puVar8;
        uStack_e8 = 0;
        plStack_e0 = (long *)0x0;
        plStack_d0 = plVar10;
        FUN_10a12c924(&puStack_c8,unaff_x20,&plStack_d8);
        aiStack_80[0] = 7;
        plVar10 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,puStack_c8);
        plStack_78 = plVar10;
        (**(code **)(*unaff_x20 + 0x2b0))(aiStack_110,unaff_x20,plVar9,aiStack_80,1);
        if ((3 < aiStack_80[0]) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        if (puStack_c8 != (undefined8 *)0x0) {
          (**(code **)*puStack_c8)();
        }
        plVar9 = plStack_d0;
        if (plStack_d0 != (long *)0x0) {
          plVar10 = plStack_d0 + 1;
          do {
            lVar6 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar10 = plStack_e0 + 1;
          do {
            lVar6 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        FUN_10a12c3a8(&lStack_100,aiStack_80,aiStack_110);
        plVar10 = plStack_f8;
        lStack_120 = lStack_100;
        plVar9 = plStack_118;
        lStack_100 = 0;
        plStack_f8 = (long *)0x0;
        plStack_118 = plVar10;
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar6 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          plVar10 = plStack_f8 + 1;
          do {
            lVar6 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        unaff_x20 = plVar11;
        if ((3 < aiStack_110[0]) && (plStack_108 != (long *)0x0)) {
          pcVar12 = *(code **)*plStack_108;
          plVar11 = plStack_108;
LAB_10acbe44c:
          (*pcVar12)(plVar11);
        }
      }
      puVar8 = (undefined8 *)0x38;
      plStack_130 = unaff_x20;
      plStack_128 = unaff_x21;
      __Znwm();
      puVar8[4] = plStack_128;
      puVar8[3] = plStack_130;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110c6b700;
      puVar8[6] = plStack_118;
      puVar8[5] = lStack_120;
      lStack_120 = 0;
      plStack_118 = (long *)0x0;
      *param_1 = (long)(puVar8 + 3);
      param_1[1] = (long)puVar8;
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      __ZNSt3__115recursive_mutex6unlockEv(lVar14 + 0x70);
      if (plStack_148 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
LAB_10acbe504:
      ___stack_chk_fail();
LAB_10acbe508:
      plVar11 = unaff_x20;
      ___cxa_guard_acquire();
      if ((int)plVar11 != 0) {
        unaff_x20[0x2a] = 0;
        unaff_x20[0x2b] = 0;
        unaff_x21 = unaff_x20 + 0x2a;
        unaff_x20[0x2c] = 0;
        ___cxa_guard_release(unaff_x20);
      }
    }
  }
  else {
    if (*(short *)(param_2 + 0x32) == 0xf) {
      lVar6 = *(long *)(param_2 + 0x58);
      if ((lVar6 != 0) &&
         (___dynamic_cast(lVar6,&PTR_DAT_110c6b678,&PTR_DAT_110c6b6d8,0), lVar6 != 0)) {
        unaff_x21 = (long *)(lVar6 + 8);
        goto LAB_10acbe0b0;
      }
    }
    else if (*(short *)(param_2 + 0x32) == 4) {
      FUN_10a14efe0();
      goto LAB_10acbe4fc;
    }
    FUN_10a00946c(&UNK_10f681ac3);
  }
LAB_10acbe4fc:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10acbe500);
  (*pcVar12)();
}



/* Entry: 10acbe6a4; end: 10acbe773;  */

undefined8 * FUN_10acbe6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b6b0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acbe774; end: 10acbe7df;  */

void FUN_10acbe774(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b6b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10acbeb18();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acbe7e0; end: 10acbe923;  */

void FUN_10acbe7e0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  char *pcVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  pcVar5 = *(char **)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x10);
  if (pcVar5 != pcVar2) {
    do {
      __ZNSt3__19to_stringEi(alStack_78,(long)*pcVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acbe924; end: 10acbe933;  */

void FUN_10acbe924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b700;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acbe934; end: 10acbe953;  */

void FUN_10acbe934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b700;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acbe954; end: 10acbe95f;  */

long FUN_10acbe954(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10acbe960; end: 10acbe9b7;  */

long FUN_10acbe960(long param_1)

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



/* Entry: 10acbe9b8; end: 10acbea5b;  */

undefined1  [16] FUN_10acbe9b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))();
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 10acbea5c; end: 10acbeacf;  */

void FUN_10acbea5c(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10acbead0; end: 10acbeb17;  */

void FUN_10acbead0(void)

{
  return;
}



/* Entry: 10acbeb18; end: 10acbebb3;  */

void FUN_10acbeb18(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_10acbebb4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbeb98);
      (*pcVar1)();
    }
    lVar2 = param_4;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 10acbebb4; end: 10acbebc7;  */

void FUN_10acbebb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  undefined1 *in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10acbdf4c(plVar6,param_2);
  FUN_10a48f3fc(param_4);
  FUN_10a3f3f30(&stack0xffffffffffffff98,plVar6,param_3);
  puVar3 = in_stack_ffffffffffffff98;
  if (-1 < (long)in_stack_ffffffffffffffa8) {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    puVar3 = &stack0xffffffffffffff98;
  }
  FUN_10acbdfb4(&plStack_78,plVar8,puVar3,in_stack_ffffffffffffffa0);
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  if (plStack_78 == (long *)0x0) {
    *extraout_x8 = 1;
  }
  else {
    func_0x0001098849a4(extraout_x8,plVar6,plStack_78[2]);
  }
  if (in_stack_ffffffffffffff90 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff90 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff90 + 0x10))(in_stack_ffffffffffffff90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff90);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&lStack_98);
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
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10acbebc8; end: 10acbed37;  */

void FUN_10acbebc8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acbdfb4(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acbed38; end: 10acbef13;  */

void FUN_10acbed38(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_48 = CONCAT17((char)param_4,(undefined7)uStack_48);
      ppppuVar3 = &pppuStack_58;
      if (param_4 != 0) goto LAB_10acbedac;
    }
    else {
      ppppuVar1 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar1 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar3 = ppppuVar1;
      __Znwm();
      uStack_48 = (ulong)ppppuVar1 | 0x8000000000000000;
      pppuStack_58 = ppppuVar3;
      ppuStack_50 = (undefined8 **)param_4;
LAB_10acbedac:
      _memmove(ppppuVar3,param_3,param_4);
    }
    *(undefined1 *)((long)ppppuVar3 + param_4) = 0;
    param_2 = param_2 + 0x38;
    FUN_10a54a2c0(param_2,&pppuStack_58);
    if (param_2 != 0) {
      if (*(short *)(param_2 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_2 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6b790,0), lVar4 != 0)) {
          unaff_x21 = (long *)(lVar4 + 8);
          goto LAB_10acbee1c;
        }
      }
      else if (*(short *)(param_2 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acbeeb4;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acbeeb4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acbeeb8);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec7b8;
    unaff_x21 = (long *)0x1137ec918;
    if ((bRam00000001137ec7b8 & 1) != 0) goto LAB_10acbee1c;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x160) = 0;
    *(undefined8 *)(unaff_x20 + 0x168) = 0;
    unaff_x21 = (long *)(unaff_x20 + 0x160);
    *(undefined8 *)(unaff_x20 + 0x170) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acbee1c:
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar6 = *(undefined8 *)(*ppuVar5 + 0x870);
  ppuStack_50 = (undefined8 **)0x0;
  uStack_48 = 0;
  pppuStack_58 = (undefined8 ***)0x0;
  FUN_10acbf198(&pppuStack_58,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21 >> 1);
  FUN_10a349344(param_1,uVar6,&pppuStack_58);
  if (pppuStack_58 != (undefined8 ***)0x0) {
    ppuStack_50 = pppuStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acbef14; end: 10acbefe3;  */

undefined8 * FUN_10acbef14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b768;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acbefe4; end: 10acbf053;  */

void FUN_10acbefe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b768;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10acbf198();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acbf054; end: 10acbf197;  */

void FUN_10acbf054(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined2 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined2 **)(param_2 + 8);
  puVar2 = *(undefined2 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEi(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acbf198; end: 10acbf20f;  */

void FUN_10acbf198(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a14f690(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10acbf210; end: 10acbf37f;  */

void FUN_10acbf210(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acbed38(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acbf380; end: 10acbfaa3;  */

void FUN_10acbf380(long *param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  code ******ppppppcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  code ******ppppppcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x20;
  long **unaff_x21;
  long *plVar13;
  long lVar14;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long **pplStack_128;
  long lStack_120;
  long *plStack_118;
  int aiStack_110 [2];
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  code *****pppppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((undefined **)0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    goto LAB_10acbf8dc;
  }
  if (param_4 < (undefined **)0x17) {
    uStack_b0 = (long *)CONCAT17((char)param_4,(undefined7)uStack_b0);
    ppppppcVar6 = &pppppcStack_c0;
    if (param_4 != (undefined **)0x0) goto LAB_10acbf40c;
  }
  else {
    ppppppcVar1 = (code ******)0x19;
    if (((ulong)param_4 | 7) != 0x17) {
      ppppppcVar1 = (code ******)(((ulong)param_4 | 7) + 1);
    }
    ppppppcVar6 = ppppppcVar1;
    __Znwm();
    uStack_b0 = (long *)((ulong)ppppppcVar1 | 0x8000000000000000);
    pppppcStack_c0 = (code *****)ppppppcVar6;
    ppuStack_b8 = param_4;
LAB_10acbf40c:
    _memmove(ppppppcVar6,param_3,param_4);
  }
  *(undefined1 *)((long)ppppppcVar6 + (long)param_4) = 0;
  param_2 = param_2 + 0x38;
  FUN_10a54a2c0(param_2,&pppppcStack_c0);
  if (param_2 == 0) {
    unaff_x20 = (long *)0x1137ec7c0;
    unaff_x21 = (long **)0x1137ec930;
    if ((bRam00000001137ec7c0 & 1) == 0) goto LAB_10acbf8e0;
LAB_10acbf47c:
    while( true ) {
      if ((long)uStack_b0 < 0) {
        __ZdlPv(pppppcStack_c0);
      }
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      lVar14 = *(long *)(*ppuVar8 + 0x870);
      plStack_140 = (long *)0x0;
      uStack_138 = 0;
      plStack_148 = (long *)0x0;
      FUN_10acbfde4(&plStack_148,*unaff_x21,unaff_x21[1],(long)unaff_x21[1] - (long)*unaff_x21 >> 1)
      ;
      uVar4 = uStack_138;
      plVar12 = plStack_140;
      unaff_x20 = plStack_148;
      plStack_140 = (long *)0x0;
      uStack_138 = 0;
      plStack_148 = (long *)0x0;
      lVar7 = *(long *)(lVar14 + 0x68);
      __ZNSt3__115recursive_mutex4lockEv(lVar14 + 0x70);
      lVar7 = *(long *)(lVar7 + 0xb8);
      if ((*(byte *)(lVar7 + 0x1e0) & 1) == 0) break;
      plVar13 = *(long **)(lVar7 + 0x50);
      pppppcStack_c0 = (code *****)FUN_10acbfd9c;
      ppuStack_b8 = &PTR_DAT_110c6b7f8;
      uStack_b0 = unaff_x20;
      plStack_a8 = plVar12;
      uStack_a0 = uVar4;
      if (plVar12 == unaff_x20) {
        plStack_130 = (long *)0x0;
        pplStack_128 = (long **)0x0;
        plVar12 = plVar13;
        (**(code **)(*plVar13 + 0x58))(plVar13);
        func_0x000109899ccc();
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,3);
        plStack_78 = (long *)0x0;
        (**(code **)(*plVar13 + 0x2b0))(&plStack_d8,plVar13,plVar12,&plStack_80,1);
        if ((3 < (int)plStack_80) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        FUN_10a12c3a8(&lStack_120,&plStack_80,&plStack_d8);
        if ((3 < (int)plStack_d8) && (plStack_d0 != (long *)0x0)) {
          (**(code **)*plStack_d0)();
        }
        plVar12 = plVar13;
        (**(code **)(*plVar13 + 0x98))(plVar13,*(undefined8 *)(lStack_120 + 8));
        unaff_x21 = &plStack_80;
        plStack_80 = plVar12;
        FUN_10ac83250();
        unaff_x20 = plVar13;
        plVar12 = plStack_80;
joined_r0x00010acbf814:
        if (plVar12 != (long *)0x0) {
          (**(code **)*plVar12)();
        }
      }
      else {
        pplStack_128 = (long **)0x0;
        plStack_130 = (long *)0x0;
        plStack_118 = (long *)0x0;
        lStack_120 = 0;
        puVar9 = (undefined8 *)0x40;
        __Znwm();
        *puVar9 = FUN_10acbfd9c;
        puVar9[1] = &PTR_DAT_110c6b7f8;
        puVar9[2] = unaff_x20;
        puVar9[3] = plVar12;
        puVar9[4] = uVar4;
        plStack_a8 = (long *)0x0;
        uStack_a0 = 0;
        uStack_b0 = (long *)0x0;
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x58))(plVar13);
        func_0x000109899ccc();
        plVar11 = (long *)0x40;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)&PTR_FUN_110ba7960;
        plStack_d8 = plVar11 + 3;
        *plStack_d8 = (long)&PTR_FUN_110ba79b0;
        plVar11[4] = (long)unaff_x20;
        plVar11[5] = (long)plVar12 - (long)unaff_x20;
        plVar11[6] = (long)FUN_10acbfd28;
        plVar11[7] = (long)puVar9;
        uStack_e8 = 0;
        plStack_e0 = (long *)0x0;
        plStack_d0 = plVar11;
        FUN_10a12c924(&puStack_c8,plVar13,&plStack_d8);
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,7);
        plVar11 = plVar13;
        (**(code **)(*plVar13 + 0x98))(plVar13,puStack_c8);
        plStack_78 = plVar11;
        (**(code **)(*plVar13 + 0x2b0))(aiStack_110,plVar13,plVar10,&plStack_80,1);
        if ((3 < (int)plStack_80) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        if (puStack_c8 != (undefined8 *)0x0) {
          (**(code **)*puStack_c8)();
        }
        plVar13 = plStack_d0;
        if (plStack_d0 != (long *)0x0) {
          plVar10 = plStack_d0 + 1;
          do {
            lVar7 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar10 = plStack_e0 + 1;
          do {
            lVar7 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        FUN_10a12c3a8(&lStack_100,&plStack_80,aiStack_110);
        plVar10 = plStack_f8;
        lStack_120 = lStack_100;
        plVar13 = plStack_118;
        lStack_100 = 0;
        plStack_f8 = (long *)0x0;
        plStack_118 = plVar10;
        if (plVar13 != (long *)0x0) {
          plVar10 = plVar13 + 1;
          do {
            lVar7 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          plVar10 = plStack_f8 + 1;
          do {
            lVar7 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        unaff_x21 = (long **)((long)plVar12 - (long)unaff_x20 >> 1);
        plVar12 = plStack_108;
        if (3 < aiStack_110[0]) goto joined_r0x00010acbf814;
      }
      puVar9 = (undefined8 *)0x38;
      plStack_130 = unaff_x20;
      pplStack_128 = unaff_x21;
      __Znwm();
      puVar9[4] = pplStack_128;
      puVar9[3] = plStack_130;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110c68160;
      puVar9[6] = plStack_118;
      puVar9[5] = lStack_120;
      lStack_120 = 0;
      plStack_118 = (long *)0x0;
      *param_1 = (long)(puVar9 + 3);
      param_1[1] = (long)puVar9;
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      __ZNSt3__115recursive_mutex6unlockEv(lVar14 + 0x70);
      if (plStack_148 != (long *)0x0) {
        plStack_140 = plStack_148;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
LAB_10acbf8dc:
      ___stack_chk_fail();
LAB_10acbf8e0:
      plVar12 = unaff_x20;
      ___cxa_guard_acquire();
      if ((int)plVar12 != 0) {
        unaff_x20[0x2e] = 0;
        unaff_x20[0x2f] = 0;
        unaff_x21 = (long **)(unaff_x20 + 0x2e);
        unaff_x20[0x30] = 0;
        ___cxa_guard_release(unaff_x20);
      }
    }
  }
  else {
    if (*(short *)(param_2 + 0x32) == 0xf) {
      lVar7 = *(long *)(param_2 + 0x58);
      if ((lVar7 != 0) &&
         (___dynamic_cast(lVar7,&PTR_DAT_110c6b678,&PTR_DAT_110c6b7e0,0), lVar7 != 0)) {
        unaff_x21 = (long **)(lVar7 + 8);
        goto LAB_10acbf47c;
      }
    }
    else if (*(short *)(param_2 + 0x32) == 4) {
      FUN_10a14efe0();
      goto LAB_10acbf8d4;
    }
    FUN_10a00946c(&UNK_10f681ac3);
  }
LAB_10acbf8d4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acbf8d8);
  (*pcVar5)();
}



/* Entry: 10acbfaa4; end: 10acbfb73;  */

undefined8 * FUN_10acbfaa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b7b8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acbfb74; end: 10acbfbe3;  */

void FUN_10acbfb74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b7b8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10acbfde4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acbfbe4; end: 10acbfd27;  */

void FUN_10acbfbe4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  short *psVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  short *psVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  psVar5 = *(short **)(param_2 + 8);
  psVar2 = *(short **)(param_2 + 0x10);
  if (psVar5 != psVar2) {
    do {
      __ZNSt3__19to_stringEi(alStack_78,(long)*psVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      psVar5 = psVar5 + 1;
    } while (psVar5 != psVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acbfd28; end: 10acbfd9b;  */

void FUN_10acbfd28(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10acbfd9c; end: 10acbfde3;  */

void FUN_10acbfd9c(void)

{
  return;
}



/* Entry: 10acbfde4; end: 10acbfe77;  */

void FUN_10acbfde4(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_10a9fa458();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbfe5c);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10a9fa46c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_4 * 2;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar2,param_2,param_3);
    }
    param_1[1] = (long)plVar2 + param_3;
  }
  return;
}



/* Entry: 10acbfe78; end: 10acbffe7;  */

void FUN_10acbfe78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acbf380(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acbffe8; end: 10acc01c3;  */

void FUN_10acbffe8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_48 = CONCAT17((char)param_4,(undefined7)uStack_48);
      ppppuVar3 = &pppuStack_58;
      if (param_4 != 0) goto LAB_10acc005c;
    }
    else {
      ppppuVar1 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar1 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar3 = ppppuVar1;
      __Znwm();
      uStack_48 = (ulong)ppppuVar1 | 0x8000000000000000;
      pppuStack_58 = ppppuVar3;
      ppuStack_50 = (undefined8 **)param_4;
LAB_10acc005c:
      _memmove(ppppuVar3,param_3,param_4);
    }
    *(undefined1 *)((long)ppppuVar3 + param_4) = 0;
    param_2 = param_2 + 0x38;
    FUN_10a54a2c0(param_2,&pppuStack_58);
    if (param_2 != 0) {
      if (*(short *)(param_2 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_2 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6b848,0), lVar4 != 0)) {
          unaff_x21 = (long *)(lVar4 + 8);
          goto LAB_10acc00cc;
        }
      }
      else if (*(short *)(param_2 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc0164;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc0164:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc0168);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec7c8;
    unaff_x21 = (long *)0x1137ec948;
    if ((bRam00000001137ec7c8 & 1) != 0) goto LAB_10acc00cc;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x180) = 0;
    *(undefined8 *)(unaff_x20 + 0x188) = 0;
    unaff_x21 = (long *)(unaff_x20 + 0x180);
    *(undefined8 *)(unaff_x20 + 400) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc00cc:
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar6 = *(undefined8 *)(*ppuVar5 + 0x870);
  ppuStack_50 = (undefined8 **)0x0;
  uStack_48 = 0;
  pppuStack_58 = (undefined8 ***)0x0;
  FUN_10a0723d0(&pppuStack_58,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21 >> 2);
  FUN_10a3493c0(param_1,uVar6,&pppuStack_58);
  if (pppuStack_58 != (undefined8 ***)0x0) {
    ppuStack_50 = pppuStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acc01c4; end: 10acc0293;  */

undefined8 * FUN_10acc01c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b820;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc0294; end: 10acc0303;  */

void FUN_10acc0294(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b820;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0723d0();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc0304; end: 10acc0447;  */

void FUN_10acc0304(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined4 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEj(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc0448; end: 10acc05b7;  */

void FUN_10acc0448(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acbffe8(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acc05b8; end: 10acc077f;  */

long FUN_10acc05b8(long *param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 ***pppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10acc0780();
  ppuVar4 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(param_2);
  lVar11 = *(long *)(*ppuVar4 + 0x870);
  lStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  FUN_10a0e9a40(&lStack_b0,*extraout_x8,extraout_x8[1],extraout_x8[1] - *extraout_x8 >> 2);
  uVar2 = uStack_a0;
  lVar7 = lStack_a8;
  lVar10 = lStack_b0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  lVar12 = *(long *)(lVar11 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(lVar11 + 0x70);
  lVar12 = *(long *)(lVar12 + 0xb8);
  if ((*(byte *)(lVar12 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acc0718);
    (*pcVar3)();
  }
  pcStack_78 = FUN_10acc0b78;
  ppuStack_70 = &PTR_DAT_110c6b8b0;
  uVar9 = lVar7 - lVar10 >> 2;
  lStack_68 = lVar10;
  uStack_58 = uVar2;
  lStack_60 = lVar7;
  lVar8 = lVar10;
  func_0x00010a9245e8(&uStack_98,*(undefined8 *)(lVar12 + 0x50),lVar10,uVar9,&pcStack_78);
  puVar5 = (undefined8 *)0x38;
  __Znwm();
  puVar5[4] = uStack_90;
  puVar5[3] = uStack_98;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c2f8a8;
  puVar5[6] = uStack_80;
  puVar5[5] = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(lVar11 + 0x70);
  lVar7 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar7;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_88);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(lVar11 + 0x70);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  lVar12 = lVar7;
  __Unwind_Resume();
  if (uVar9 < 0x7ffffffffffffff8) {
    if (uVar9 < 0x17) {
      uStack_108 = CONCAT17((char)uVar9,(undefined7)uStack_108);
      ppppuVar6 = &pppuStack_118;
      if (uVar9 != 0) goto LAB_10acc07f0;
    }
    else {
      ppppuVar1 = (undefined8 ****)0x19;
      if ((uVar9 | 7) != 0x17) {
        ppppuVar1 = (undefined8 ****)((uVar9 | 7) + 1);
      }
      ppppuVar6 = ppppuVar1;
      __Znwm();
      uStack_108 = (ulong)ppppuVar1 | 0x8000000000000000;
      pppuStack_118 = ppppuVar6;
      uStack_110 = uVar9;
LAB_10acc07f0:
      _memmove(ppppuVar6,lVar8,uVar9);
    }
    *(undefined1 *)((long)ppppuVar6 + uVar9) = 0;
    lVar12 = lVar12 + 0x38;
    FUN_10a54a2c0(lVar12,&pppuStack_118);
    if (lVar12 != 0) {
      if (*(short *)(lVar12 + 0x32) == 0xf) {
        lVar7 = *(long *)(lVar12 + 0x58);
        if ((lVar7 != 0) &&
           (___dynamic_cast(lVar7,&PTR_DAT_110c6b678,&PTR_DAT_110c6b898,0), lVar7 != 0)) {
          lVar7 = lVar7 + 8;
          goto LAB_10acc0860;
        }
      }
      else if (*(short *)(lVar12 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc08a8;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc08a8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10acc08ac);
      (*pcVar3)();
    }
    lVar10 = 0x1137ec7d0;
    lVar7 = 0x1137ec960;
    if ((bRam00000001137ec7d0 & 1) != 0) goto LAB_10acc0860;
  }
  else {
    func_0x000109ffde50();
  }
  lVar12 = lVar10;
  ___cxa_guard_acquire();
  if ((int)lVar12 != 0) {
    *(undefined8 *)(lVar10 + 400) = 0;
    *(undefined8 *)(lVar10 + 0x198) = 0;
    lVar7 = lVar10 + 400;
    *(undefined8 *)(lVar10 + 0x1a0) = 0;
    ___cxa_guard_release(lVar10);
  }
LAB_10acc0860:
  if ((long)uStack_108 < 0) {
    __ZdlPv(pppuStack_118);
  }
  return lVar7;
}



/* Entry: 10acc0780; end: 10acc08f3;  */

long FUN_10acc0780(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc07f0;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc07f0:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6b898,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc0860;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc08a8;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc08a8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc08ac);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec7d0;
    unaff_x19 = 0x1137ec960;
    if ((bRam00000001137ec7d0 & 1) != 0) goto LAB_10acc0860;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 400) = 0;
    *(undefined8 *)(unaff_x20 + 0x198) = 0;
    unaff_x19 = unaff_x20 + 400;
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc0860:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc08f4; end: 10acc09c3;  */

undefined8 * FUN_10acc08f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b870;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc09c4; end: 10acc0a33;  */

void FUN_10acc09c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b870;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0e9a40();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc0a34; end: 10acc0b77;  */

void FUN_10acc0a34(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined4 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEi(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc0b78; end: 10acc0bbf;  */

void FUN_10acc0b78(void)

{
  return;
}



/* Entry: 10acc0bc0; end: 10acc0d2f;  */

void FUN_10acc0bc0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acc05b8(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acc0d30; end: 10acc0dcb;  */

void FUN_10acc0d30(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long *extraout_x8;
  undefined8 uVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_10acc0dcc();
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(param_2);
  uVar2 = *(undefined8 *)(*ppuVar1 + 0x870);
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_10a0ca588(&lStack_38,*extraout_x8,extraout_x8[1],extraout_x8[1] - *extraout_x8 >> 2);
  FUN_10a347f28(param_1,uVar2,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acc0dcc; end: 10acc0f3f;  */

long FUN_10acc0dcc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc0e3c;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc0e3c:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6b900,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc0eac;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc0ef4;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc0ef4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc0ef8);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec7d8;
    unaff_x19 = 0x1137ec978;
    if ((bRam00000001137ec7d8 & 1) != 0) goto LAB_10acc0eac;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
    unaff_x19 = unaff_x20 + 0x1a0;
    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc0eac:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc0f40; end: 10acc100f;  */

undefined8 * FUN_10acc0f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b8d8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc1010; end: 10acc107f;  */

void FUN_10acc1010(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b8d8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0ca588();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc1080; end: 10acc11c3;  */

void FUN_10acc1080(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined4 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEf(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc11c4; end: 10acc1333;  */

void FUN_10acc11c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acc0d30(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acc1334; end: 10acc1a5f;  */

void FUN_10acc1334(long *param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  code ****ppppcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  code ****ppppcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  long *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  int aiStack_110 [2];
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  code ***pppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  int aiStack_80 [2];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((undefined **)0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    goto LAB_10acc1898;
  }
  if (param_4 < (undefined **)0x17) {
    uStack_b0 = (long *)CONCAT17((char)param_4,(undefined7)uStack_b0);
    ppppcVar6 = &pppcStack_c0;
    if (param_4 != (undefined **)0x0) goto LAB_10acc13c0;
  }
  else {
    ppppcVar1 = (code ****)0x19;
    if (((ulong)param_4 | 7) != 0x17) {
      ppppcVar1 = (code ****)(((ulong)param_4 | 7) + 1);
    }
    ppppcVar6 = ppppcVar1;
    __Znwm();
    uStack_b0 = (long *)((ulong)ppppcVar1 | 0x8000000000000000);
    pppcStack_c0 = (code ***)ppppcVar6;
    ppuStack_b8 = param_4;
LAB_10acc13c0:
    _memmove(ppppcVar6,param_3,param_4);
  }
  *(undefined1 *)((long)ppppcVar6 + (long)param_4) = 0;
  param_2 = param_2 + 0x38;
  FUN_10a54a2c0(param_2,&pppcStack_c0);
  if (param_2 == 0) {
    unaff_x20 = (long *)0x1137ec7e0;
    unaff_x21 = (long *)0x1137ec990;
    if ((bRam00000001137ec7e0 & 1) == 0) goto LAB_10acc189c;
LAB_10acc1430:
    while( true ) {
      if ((long)uStack_b0 < 0) {
        __ZdlPv(pppcStack_c0);
      }
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      lVar14 = *(long *)(*ppuVar8 + 0x870);
      plStack_140 = (long *)0x0;
      uStack_138 = 0;
      plStack_148 = (long *)0x0;
      FUN_10a108d94(&plStack_148,*unaff_x21,unaff_x21[1],unaff_x21[1] - *unaff_x21 >> 3);
      uVar5 = uStack_138;
      plVar4 = plStack_140;
      plVar12 = plStack_148;
      plStack_140 = (long *)0x0;
      uStack_138 = 0;
      plStack_148 = (long *)0x0;
      lVar7 = *(long *)(lVar14 + 0x68);
      __ZNSt3__115recursive_mutex4lockEv(lVar14 + 0x70);
      lVar7 = *(long *)(lVar7 + 0xb8);
      if ((*(byte *)(lVar7 + 0x1e0) & 1) == 0) break;
      unaff_x20 = *(long **)(lVar7 + 0x50);
      pppcStack_c0 = (code ***)FUN_10acc1e90;
      ppuStack_b8 = &PTR_DAT_110c6b9b8;
      uStack_b0 = plVar12;
      plStack_a8 = plVar4;
      uStack_a0 = uVar5;
      if (plVar4 == plVar12) {
        plStack_130 = (long *)0x0;
        plStack_128 = (long *)0x0;
        plVar12 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        aiStack_80[0] = 3;
        plStack_78 = (long *)0x0;
        (**(code **)(*unaff_x20 + 0x2b0))(&plStack_d8,unaff_x20,plVar12,aiStack_80,1);
        if ((3 < aiStack_80[0]) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        FUN_10a12c3a8(&lStack_120,aiStack_80,&plStack_d8);
        if ((3 < (int)plStack_d8) && (plStack_d0 != (long *)0x0)) {
          (**(code **)*plStack_d0)();
        }
        plVar12 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,*(undefined8 *)(lStack_120 + 8));
        unaff_x21 = plVar12;
        FUN_10acc1d78();
        if (plVar12 != (long *)0x0) {
          pcVar13 = *(code **)*plVar12;
          goto LAB_10acc17dc;
        }
      }
      else {
        plStack_128 = (long *)0x0;
        plStack_130 = (long *)0x0;
        plStack_118 = (long *)0x0;
        lStack_120 = 0;
        puVar9 = (undefined8 *)0x40;
        __Znwm();
        *puVar9 = FUN_10acc1e90;
        puVar9[1] = &PTR_DAT_110c6b9b8;
        puVar9[2] = plVar12;
        puVar9[3] = plVar4;
        puVar9[4] = uVar5;
        plStack_a8 = (long *)0x0;
        uStack_a0 = 0;
        uStack_b0 = (long *)0x0;
        plVar10 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x58))(unaff_x20);
        func_0x000109899ccc();
        plVar11 = (long *)0x40;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)&PTR_FUN_110ba7960;
        plStack_d8 = plVar11 + 3;
        *plStack_d8 = (long)&PTR_FUN_110ba79b0;
        plVar11[4] = (long)plVar12;
        plVar11[5] = (long)plVar4 - (long)plVar12;
        plVar11[6] = (long)FUN_10acc1e1c;
        plVar11[7] = (long)puVar9;
        uStack_e8 = 0;
        plStack_e0 = (long *)0x0;
        plStack_d0 = plVar11;
        FUN_10a12c924(&puStack_c8,unaff_x20,&plStack_d8);
        aiStack_80[0] = 7;
        plVar11 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x98))(unaff_x20,puStack_c8);
        plStack_78 = plVar11;
        (**(code **)(*unaff_x20 + 0x2b0))(aiStack_110,unaff_x20,plVar10,aiStack_80,1);
        if ((3 < aiStack_80[0]) && (plStack_78 != (long *)0x0)) {
          (**(code **)*plStack_78)();
        }
        if (puStack_c8 != (undefined8 *)0x0) {
          (**(code **)*puStack_c8)();
        }
        plVar10 = plStack_d0;
        if (plStack_d0 != (long *)0x0) {
          plVar11 = plStack_d0 + 1;
          do {
            lVar7 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar11 = plStack_e0 + 1;
          do {
            lVar7 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        FUN_10a12c3a8(&lStack_100,aiStack_80,aiStack_110);
        plVar11 = plStack_f8;
        lStack_120 = lStack_100;
        plVar10 = plStack_118;
        lStack_100 = 0;
        plStack_f8 = (long *)0x0;
        plStack_118 = plVar11;
        if (plVar10 != (long *)0x0) {
          plVar11 = plVar10 + 1;
          do {
            lVar7 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          plVar11 = plStack_f8 + 1;
          do {
            lVar7 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        unaff_x21 = (long *)((long)plVar4 - (long)plVar12 >> 3);
        unaff_x20 = plVar12;
        if ((3 < aiStack_110[0]) && (plStack_108 != (long *)0x0)) {
          pcVar13 = *(code **)*plStack_108;
          plVar12 = plStack_108;
LAB_10acc17dc:
          (*pcVar13)(plVar12);
        }
      }
      puVar9 = (undefined8 *)0x38;
      plStack_130 = unaff_x20;
      plStack_128 = unaff_x21;
      __Znwm();
      puVar9[4] = plStack_128;
      puVar9[3] = plStack_130;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110c6b978;
      puVar9[6] = plStack_118;
      puVar9[5] = lStack_120;
      lStack_120 = 0;
      plStack_118 = (long *)0x0;
      *param_1 = (long)(puVar9 + 3);
      param_1[1] = (long)puVar9;
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      __ZNSt3__115recursive_mutex6unlockEv(lVar14 + 0x70);
      if (plStack_148 != (long *)0x0) {
        plStack_140 = plStack_148;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
LAB_10acc1898:
      ___stack_chk_fail();
LAB_10acc189c:
      plVar12 = unaff_x20;
      ___cxa_guard_acquire();
      if ((int)plVar12 != 0) {
        unaff_x20[0x36] = 0;
        unaff_x20[0x37] = 0;
        unaff_x21 = unaff_x20 + 0x36;
        unaff_x20[0x38] = 0;
        ___cxa_guard_release(unaff_x20);
      }
    }
  }
  else {
    if (*(short *)(param_2 + 0x32) == 0xf) {
      lVar7 = *(long *)(param_2 + 0x58);
      if ((lVar7 != 0) &&
         (___dynamic_cast(lVar7,&PTR_DAT_110c6b678,&PTR_DAT_110c6b950,0), lVar7 != 0)) {
        unaff_x21 = (long *)(lVar7 + 8);
        goto LAB_10acc1430;
      }
    }
    else if (*(short *)(param_2 + 0x32) == 4) {
      FUN_10a14efe0();
      goto LAB_10acc1890;
    }
    FUN_10a00946c(&UNK_10f681ac3);
  }
LAB_10acc1890:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10acc1894);
  (*pcVar13)();
}



/* Entry: 10acc1a60; end: 10acc1b2f;  */

undefined8 * FUN_10acc1a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b928;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc1b30; end: 10acc1b9f;  */

void FUN_10acc1b30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6b928;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a108d94();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc1ba0; end: 10acc1ce3;  */

void FUN_10acc1ba0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEd(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc1ce4; end: 10acc1cf3;  */

void FUN_10acc1ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acc1cf4; end: 10acc1d13;  */

void FUN_10acc1cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b978;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acc1d14; end: 10acc1d1f;  */

long FUN_10acc1d14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10acc1d20; end: 10acc1d77;  */

long FUN_10acc1d20(long param_1)

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



/* Entry: 10acc1d78; end: 10acc1e1b;  */

undefined1  [16] FUN_10acc1d78(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))();
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = (ulong)param_1 >> 3;
  auVar3._0_8_ = plVar2;
  return auVar3;
}


