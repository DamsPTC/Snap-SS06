/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3b6788; end: 10a3b6857;  */

void FUN_10a3b6788(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
  FUN_10a3b4bfc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x294);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x28c);
  FUN_10a1fb84c(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a3b6858; end: 10a3b690f;  */

void FUN_10a3b6858(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3b66f8(param_1,param_2,FUN_10a39610c,0,param_3,param_4,param_5);
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



/* Entry: 10a3b6910; end: 10a3b691f;  */

void FUN_10a3b6910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcfba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3b6920; end: 10a3b693f;  */

void FUN_10a3b6920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcfba8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b6940; end: 10a3b6957;  */

long FUN_10a3b6940(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
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



/* Entry: 10a3b6958; end: 10a3b69b7;  */

undefined8 FUN_10a3b6958(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3a8;
  __Znwm(0x3a8);
  FUN_10a394788();
  return uVar1;
}



/* Entry: 10a3b69b8; end: 10a3b69bb;  */

void FUN_10a3b69b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3b69bc; end: 10a3b69cf;  */

void FUN_10a3b69bc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b69d0; end: 10a3b69eb;  */

void FUN_10a3b69d0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3b69ec; end: 10a3b6a27;  */

long FUN_10a3b69ec(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3b6a28; end: 10a3b6a2b;  */

void FUN_10a3b6a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b6a2c; end: 10a3b6baf;  */

long FUN_10a3b6a2c(long param_1)

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



/* Entry: 10a3b6bb0; end: 10a3b6cd7;  */

void FUN_10a3b6bb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_38,param_1 + 1,*param_1);
  plVar3 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plVar3 + 0xb8))(&puStack_40,plVar3,puVar2,uVar1);
  func_0x0001098962e4(&puStack_38,plVar3,&puStack_40,param_3);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a3b6cd8; end: 10a3b6e83;  */

void FUN_10a3b6cd8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a3b6e84(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a3990e8(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb8,0,0);
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



/* Entry: 10a3b6e84; end: 10a3b6eeb;  */

/* WARNING: Removing unreachable block (ram,0x00010a3b7100) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7104) */
/* WARNING: Removing unreachable block (ram,0x00010a3b710c) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7114) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7118) */

void FUN_10a3b6e84(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff80;
  long *in_stack_ffffffffffffff88;
  long *in_stack_ffffffffffffff90;
  long *in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bcdb88;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
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
  plVar8 = plVar6;
  FUN_10a3b6e84(plVar6,param_2);
  FUN_10a3b71b0(param_4);
  if (*(int *)param_3 == 1) {
    in_stack_ffffffffffffff88 = (long *)0x0;
    in_stack_ffffffffffffff80 = (long *)0x0;
  }
  else {
    func_0x000109898688(plVar6,param_3);
    if (plVar6 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a3b7178:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3b717c);
      (*pcVar3)();
    }
    func_0x00010989879c(&stack0xffffffffffffff90);
    puVar10 = (undefined8 *)&stack0xffffffffffffff80;
    if ((in_stack_ffffffffffffff90 != (long *)0x0) &&
       (___dynamic_cast(in_stack_ffffffffffffff90,&PTR_DAT_110b178e0,&PTR_DAT_110bf6810,0x10),
       puVar10 = (undefined8 *)&stack0xffffffffffffff80, in_stack_ffffffffffffff90 != (long *)0x0))
    {
      puVar10 = (undefined8 *)&stack0xffffffffffffff90;
      in_stack_ffffffffffffff80 = in_stack_ffffffffffffff90;
      in_stack_ffffffffffffff88 = in_stack_ffffffffffffff98;
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    if (in_stack_ffffffffffffff98 != (long *)0x0) {
      plVar6 = in_stack_ffffffffffffff98 + 1;
      do {
        lVar12 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
      }
    }
    if (in_stack_ffffffffffffff80 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a3b7178;
    }
  }
  lVar12 = plVar8[0x44] - plVar8[0x43];
  if (lVar12 != 0) {
    lVar15 = 0;
    lVar12 = lVar12 >> 4;
    puVar10 = (undefined8 *)plVar8[0x43];
LAB_10a3b7034:
    if ((long *)*puVar10 != in_stack_ffffffffffffff80) goto code_r0x00010a3b7040;
    *(undefined1 *)(in_stack_ffffffffffffff80 + 0x12) = 0;
    (**(code **)(*in_stack_ffffffffffffff80 + 0x60))();
    lVar15 = plVar8[0x43] - lVar15;
    lVar12 = plVar8[0x44];
    if (lVar15 != lVar12) {
      lVar13 = lVar15;
      if (lVar15 + 0x10 != lVar12) {
        do {
          lVar15 = lVar13 + 0x10;
          FUN_10a399d98(lVar13,lVar15);
          lVar16 = lVar13 + 0x20;
          lVar13 = lVar15;
        } while (lVar16 != lVar12);
        lVar12 = plVar8[0x44];
      }
      while (lVar12 != lVar15) {
        lVar12 = lVar12 + -0x10;
        func_0x00010a3b7784(lVar12);
      }
      plVar8[0x44] = lVar15;
      FUN_10a3c6798(plVar8);
      goto LAB_10a3b70c4;
    }
    goto LAB_10a3b7178;
  }
LAB_10a3b70c4:
  if (in_stack_ffffffffffffff88 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff88 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffff88 + 0x10))(in_stack_ffffffffffffff88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff88);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar9 = lVar12 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar12 + 2];
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
  lVar12 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar12 = lVar12 + uVar9 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
code_r0x00010a3b7040:
  lVar15 = lVar15 + -0x10;
  lVar12 = lVar12 + -1;
  puVar10 = puVar10 + 2;
  if (lVar12 == 0) goto LAB_10a3b70c4;
  goto LAB_10a3b7034;
}



/* Entry: 10a3b6eec; end: 10a3b71af;  */

/* WARNING: Removing unreachable block (ram,0x00010a3b7100) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7104) */
/* WARNING: Removing unreachable block (ram,0x00010a3b710c) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7114) */
/* WARNING: Removing unreachable block (ram,0x00010a3b7118) */

void FUN_10a3b6eec(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  undefined8 *puVar9;
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
  long *in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a3b6e84(param_2,param_3);
  FUN_10a3b71b0(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
    in_stack_ffffffffffffffa0 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a3b7178:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3b717c);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar9 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != (long *)0x0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110bf6810,0x10),
       puVar9 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != (long *)0x0)) {
      puVar9 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffb8 + 1;
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
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a3b7178;
    }
  }
  lVar11 = plVar7[0x44] - plVar7[0x43];
  if (lVar11 != 0) {
    lVar14 = 0;
    lVar11 = lVar11 >> 4;
    puVar9 = (undefined8 *)plVar7[0x43];
LAB_10a3b7034:
    if ((long *)*puVar9 != in_stack_ffffffffffffffa0) goto code_r0x00010a3b7040;
    *(undefined1 *)(in_stack_ffffffffffffffa0 + 0x12) = 0;
    (**(code **)(*in_stack_ffffffffffffffa0 + 0x60))();
    lVar14 = plVar7[0x43] - lVar14;
    lVar11 = plVar7[0x44];
    if (lVar14 != lVar11) {
      lVar12 = lVar14;
      if (lVar14 + 0x10 != lVar11) {
        do {
          lVar14 = lVar12 + 0x10;
          FUN_10a399d98(lVar12,lVar14);
          lVar15 = lVar12 + 0x20;
          lVar12 = lVar14;
        } while (lVar15 != lVar11);
        lVar11 = plVar7[0x44];
      }
      while (lVar11 != lVar14) {
        lVar11 = lVar11 + -0x10;
        func_0x00010a3b7784(lVar11);
      }
      plVar7[0x44] = lVar14;
      FUN_10a3c6798(plVar7);
      goto LAB_10a3b70c4;
    }
    goto LAB_10a3b7178;
  }
LAB_10a3b70c4:
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar8 = lVar11 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar11 + 2];
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
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
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
  else if (uVar8 < uVar16) {
    lVar11 = lVar11 + uVar8 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
code_r0x00010a3b7040:
  lVar14 = lVar14 + -0x10;
  lVar11 = lVar11 + -1;
  puVar9 = puVar9 + 2;
  if (lVar11 == 0) goto LAB_10a3b70c4;
  goto LAB_10a3b7034;
}



/* Entry: 10a3b71b0; end: 10a3b71d3;  */

void FUN_10a3b71b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long in_stack_ffffffffffffff90;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar8 = (long *)0x1;
  uVar12 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10a3b6e84(plVar8,uVar12);
  FUN_10a052e3c(param_4);
  FUN_10a39c5e0(&lStack_a8,plVar10);
  lVar16 = lStack_a0 - lStack_a8 >> 4;
  (**(code **)(*plVar8 + 600))(&stack0xffffffffffffff90,plVar8,lVar16);
  lStack_80 = in_stack_ffffffffffffff90;
  if (lStack_a0 != lStack_a8) {
    lVar17 = 0;
    do {
      plVar10 = *(long **)(lStack_a8 + lVar17 * 0x10 + 8);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_78 = &PTR_DAT_110bf6810;
      func_0x000109899de4(&puStack_90,plVar8,&stack0xffffffffffffff90,&ppuStack_78,0,0);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar15 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      (**(code **)(*plVar8 + 0x290))(plVar8,&lStack_80,lVar17,&puStack_90);
      if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
        (**(code **)*puStack_88)();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar16);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_80;
  FUN_10a3a7a48(&stack0xffffffffffffff90);
  ppuVar2 = (undefined **)(plVar9 + 0x4b);
  lVar16 = plVar9[0x59];
  uVar13 = lVar16 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    puVar11 = ppuVar2[lVar16 + 2];
    if ((undefined *)plVar9[0x5a] == puVar11) {
      return;
    }
  }
  else {
    puVar11 = *(undefined **)(plVar9[0x57] + -8);
    plVar9[0x57] = (long)(plVar9[0x57] + -8);
    if ((undefined *)plVar9[0x5a] == puVar11) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar14 = (undefined *)plVar9[0x4c];
  lVar16 = (long)puVar14 - (long)puVar3;
  puVar18 = (undefined *)(lVar16 >> 4);
  if (puVar18 < puVar11) {
    uVar13 = (long)puVar11 - (long)puVar18;
    lVar17 = plVar9[0x4d];
    if ((ulong)(lVar17 - (long)puVar14 >> 4) < uVar13) {
      if ((ulong)puVar11 >> 0x3c == 0) {
        puVar14 = (undefined *)(lVar17 - (long)puVar3 >> 3);
        if (puVar14 <= puVar11) {
          puVar14 = puVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)puVar3)) {
          puVar14 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_78 = ppuVar2;
        if ((ulong)puVar14 >> 0x3c == 0) {
          lVar7 = (long)puVar14 << 4;
          __Znwm();
          lVar15 = lVar7 + lVar16;
          _bzero(lVar15,uVar13 * 0x10);
          puVar18 = (undefined *)(lVar15 + (long)puVar18 * -0x10);
          _memcpy(puVar18,puVar3,lVar16);
          *ppuVar2 = puVar18;
          plVar9[0x4c] = lVar15 + uVar13 * 0x10;
          plVar9[0x4d] = lVar7 + (long)puVar14 * 0x10;
          puStack_98 = puVar3;
          puStack_90 = puVar3;
          puStack_88 = (undefined8 *)puVar3;
          lStack_80 = lVar17;
          func_0x00010988c1b8(&puStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar14,uVar13 * 0x10);
    plVar9[0x4c] = (long)(puVar14 + uVar13 * 0x10);
  }
  else if (puVar11 < puVar18) {
    while (puVar14 != puVar3 + (long)puVar11 * 0x10) {
      puVar14 = puVar14 + -0x10;
      func_0x00010988c204(puVar14);
    }
    plVar9[0x4c] = (long)(puVar3 + (long)puVar11 * 0x10);
  }
code_r0x00010988c138:
  plVar9[0x5a] = (long)puVar11;
  return;
}



/* Entry: 10a3b71d4; end: 10a3b741b;  */

void FUN_10a3b71d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a3b6e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a39c5e0(&lStack_98,plVar9);
  lVar14 = lStack_90 - lStack_98 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar14);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lStack_90 != lStack_98) {
    lVar15 = 0;
    do {
      plVar9 = *(long **)(lStack_98 + lVar15 * 0x10 + 8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110bf6810;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar15,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  FUN_10a3a7a48(&stack0xffffffffffffffa0);
  ppuVar2 = (undefined **)(plVar8 + 0x4b);
  lVar14 = plVar8[0x59];
  uVar11 = lVar14 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    puVar10 = ppuVar2[lVar14 + 2];
    if ((undefined *)plVar8[0x5a] == puVar10) {
      return;
    }
  }
  else {
    puVar10 = *(undefined **)(plVar8[0x57] + -8);
    plVar8[0x57] = (long)(plVar8[0x57] + -8);
    if ((undefined *)plVar8[0x5a] == puVar10) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar12 = (undefined *)plVar8[0x4c];
  lVar14 = (long)puVar12 - (long)puVar3;
  puVar16 = (undefined *)(lVar14 >> 4);
  if (puVar16 < puVar10) {
    uVar11 = (long)puVar10 - (long)puVar16;
    lVar15 = plVar8[0x4d];
    if ((ulong)(lVar15 - (long)puVar12 >> 4) < uVar11) {
      if ((ulong)puVar10 >> 0x3c == 0) {
        puVar12 = (undefined *)(lVar15 - (long)puVar3 >> 3);
        if (puVar12 <= puVar10) {
          puVar12 = puVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar3)) {
          puVar12 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar12 >> 0x3c == 0) {
          lVar7 = (long)puVar12 << 4;
          __Znwm();
          lVar13 = lVar7 + lVar14;
          _bzero(lVar13,uVar11 * 0x10);
          puVar16 = (undefined *)(lVar13 + (long)puVar16 * -0x10);
          _memcpy(puVar16,puVar3,lVar14);
          *ppuVar2 = puVar16;
          plVar8[0x4c] = lVar13 + uVar11 * 0x10;
          plVar8[0x4d] = lVar7 + (long)puVar12 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&puStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar12,uVar11 * 0x10);
    plVar8[0x4c] = (long)(puVar12 + uVar11 * 0x10);
  }
  else if (puVar10 < puVar16) {
    while (puVar12 != puVar3 + (long)puVar10 * 0x10) {
      puVar12 = puVar12 + -0x10;
      func_0x00010988c204(puVar12);
    }
    plVar8[0x4c] = (long)(puVar3 + (long)puVar10 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar10;
  return;
}



/* Entry: 10a3b741c; end: 10a3b74ef;  */

void FUN_10a3b741c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a3b6e84(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
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



/* Entry: 10a3b74f0; end: 10a3b7607;  */

void FUN_10a3b74f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffb0;
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
  FUN_10a3b7608(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a397168(&stack0xffffffffffffffb0,plVar6);
  if (in_stack_ffffffffffffffb0 == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,in_stack_ffffffffffffffb0 + 8);
  }
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



/* Entry: 10a3b7608; end: 10a3b766f;  */

void FUN_10a3b7608(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a3b7608(plVar5,param_2);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar5 + 0x18c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
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
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a3b7670; end: 10a3b772b;  */

void FUN_10a3b7670(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
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
  FUN_10a3b7608(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x18c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a3b772c; end: 10a3b78c3;  */

long FUN_10a3b772c(long param_1)

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



/* Entry: 10a3b78c4; end: 10a3b7a07;  */

char * FUN_10a3b78c4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  puVar6 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    ppuVar8 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar9 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar8 & 1) == 0) {
      ppuVar8 = ppuVar9;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
      (*(code *)puVar6)();
      *(undefined1 *)ppuVar11 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar12 = (undefined8 *)ppuVar9[2];
    if ((puVar12 != (undefined8 *)0x0) &&
       (((*(byte *)(puVar12[1] + 0x42) | *(byte *)(puVar12[1] + 0x43)) & 1) != 0)) {
      uVar2 = *(undefined2 *)(param_1 + 2);
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar13 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar13 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar13 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar13 = uVar4 + uVar3 * 1000000000;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      puVar10 = puVar12;
      FUN_10a1333cc();
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &UNK_10f651d0b;
        puVar10[1] = 0;
        puVar10[2] = uVar13;
        *(undefined4 *)(puVar10 + 3) = uVar1;
        *(undefined2 *)((long)puVar10 + 0x1c) = uVar2;
        *(undefined2 *)((long)puVar10 + 0x1e) = 6;
        if ((*(byte *)(puVar12 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3b7a04);
          (*pcVar7)();
        }
        puVar12[0x18] = puVar12[0x18] + 1;
      }
    }
  }
  return param_1;
}



/* Entry: 10a3b7a08; end: 10a3b7af7;  */

void FUN_10a3b7a08(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar7 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = (long)*(char *)(lVar7 + 0x57);
  if (lVar6 < 0) {
    lVar5 = *(long *)(lVar7 + 0x40);
    lVar6 = *(long *)(lVar7 + 0x48);
  }
  else {
    lVar5 = lVar7 + 0x40;
  }
  FUN_10a3b7b84(auStack_30,&uStack_40,lVar5,lVar6);
  FUN_10a3b7af8(lVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  plVar1 = plStack_38;
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



/* Entry: 10a3b7af8; end: 10a3b7b83;  */

void FUN_10a3b7af8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3b7b84; end: 10a3b7c5b;  */

void FUN_10a3b7b84(long *param_1,long *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c4efd8,0);
    if (lVar5 != 0) {
      lVar6 = param_2[1];
      *param_1 = lVar5;
      param_1[1] = lVar6;
      if (lVar6 == 0) {
        return;
      }
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_10a3b772c(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f651d0b;
      if (param_4 != 0) {
        puVar2 = param_3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f653368,0x34,&UNK_10f63498b,in_x6,in_x7,param_4,
                          puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a3b7c5c; end: 10a3b7cab;  */

void FUN_10a3b7c5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b7cac; end: 10a3b7cc3;  */

void FUN_10a3b7cac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a3b7cc4; end: 10a3b7d93;  */

void FUN_10a3b7cc4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  plStack_38 = plVar2;
  if (lVar5 != 0) {
    plStack_38 = (long *)0x0;
    lStack_30 = lVar5;
    plStack_28 = plVar2;
    FUN_10a398cb0(*(undefined8 *)(param_2 + 0x10),&lStack_30);
    plVar2 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a3b7d94; end: 10a3b7daf;  */

void FUN_10a3b7d94(void)

{
  return;
}



/* Entry: 10a3b7db0; end: 10a3b81c3;  */

undefined1  [16]
FUN_10a3b7db0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c2b05c();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = param_1;
          func_0x000107c2b068(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10a3b8140;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)*param_4;
  plVar14 = (long *)0x38;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*plVar7,plVar7[1]);
  }
  else {
    lVar4 = plVar7[1];
    lVar3 = *plVar7;
    plVar14[4] = plVar7[2];
    plVar14[3] = lVar4;
    plVar14[2] = lVar3;
  }
  plVar14[5] = 0;
  plVar14[6] = 0;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10a3b80c8;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_10a3b7f50:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3b81ac);
      (*pcVar2)();
    }
    lVar3 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar7;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
            **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_10a3b7f50;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_10a3b80c8:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a3b8140:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10a3b81c4; end: 10a3b820b;  */

void FUN_10a3b81c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a3b7888(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b820c; end: 10a3b82cb;  */

void FUN_10a3b820c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar5 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_28 = param_2 + 0x18;
  lVar5 = lVar5 + 600;
  FUN_10a3b7db0(lVar5,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  func_0x00010a328268(lVar5 + 0x28,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a3b82cc; end: 10a3b830b;  */

void FUN_10a3b82cc(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a3b830c; end: 10a3b8557;  */

undefined1  [16]
FUN_10a3b830c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000107c2b05c();
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
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a3b8514;
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
  FUN_10a3b8558(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
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
    FUN_10a3b8608(param_1,uVar9);
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
LAB_10a3b8514:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a3b8558; end: 10a3b8607;  */

void FUN_10a3b8558(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x60;
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
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a3b8608; end: 10a3b86d7;  */

void FUN_10a3b8608(ulong *param_1,ulong param_2)

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
LAB_10a3b8650:
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
            func_0x00010a3b6b14(uVar7 + 0x10);
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
    if (param_2 < uVar7) goto LAB_10a3b8650;
  }
  return;
}



/* Entry: 10a3b86d8; end: 10a3b885b;  */

void FUN_10a3b86d8(ulong *param_1,ulong param_2)

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
          func_0x00010a3b6b14(uVar1 + 0x10);
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



/* Entry: 10a3b885c; end: 10a3b8c3f;  */

void FUN_10a3b885c(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *****pppppuVar5;
  long *plVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 ****ppppuStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 ****ppppuStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  long *plStack_58;
  
  plVar11 = *(long **)(param_2 + 0x10);
  lVar10 = (long)*(char *)((long)plVar11 + 0x37);
  if (lVar10 < 0) {
    plVar6 = (long *)plVar11[4];
    lVar10 = plVar11[5];
  }
  else {
    plVar6 = plVar11 + 4;
  }
  lVar12 = *plVar11;
  if ((lVar10 == 0x14) &&
     ((*plVar6 == 0x6e656e6f706d6f43 && plVar6[1] == 0x69566873654d2e74) &&
      (int)plVar6[2] == 0x6c617573)) {
    pppppuVar7 = (undefined8 *****)0x20;
    __Znwm();
    uStack_68 = 0x8000000000000020;
    plStack_70 = (long *)0x18;
    pppppuVar7[1] = (undefined8 ****)0x654d657361422e74;
    *pppppuVar7 = (undefined8 ****)0x6e656e6f706d6f43;
    pppppuVar7[2] = (undefined8 ****)0x6c61757369566873;
    pppppuVar5 = pppppuVar7 + 3;
    ppppuStack_78 = pppppuVar7;
  }
  else {
    plVar4 = param_1;
    FUN_10a3ca004();
    FUN_10a3ca840();
    func_0x000109887510();
    plVar9 = plVar6;
    func_0x000109887bd0();
    if ((long *)0x7ffffffffffffff7 < plVar9) {
      func_0x000109ffde50();
      if ((int)plVar6 < 0) {
        __ZdlPv(ppppuStack_78);
      }
      __Unwind_Resume();
      lVar10 = plVar4[1];
      if (lVar10 != 0) {
        if (*(char *)(lVar10 + 0x37) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar10 + 0x20));
        }
        if (*(char *)(lVar10 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar10 + 8));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar10);
        return;
      }
      return;
    }
    if (plVar9 < (long *)0x17) {
      uStack_68 = CONCAT17((char)plVar9,(undefined7)uStack_68);
      pppppuVar5 = &ppppuStack_78;
      if (plVar9 != (long *)0x0) goto LAB_10a3b894c;
    }
    else {
      pppppuVar7 = (undefined8 *****)0x19;
      if (((ulong)plVar9 | 7) != 0x17) {
        pppppuVar7 = (undefined8 *****)(((ulong)plVar9 | 7) + 1);
      }
      pppppuVar5 = pppppuVar7;
      __Znwm();
      uStack_68 = (ulong)pppppuVar7 | 0x8000000000000000;
      ppppuStack_78 = pppppuVar5;
      plStack_70 = plVar9;
LAB_10a3b894c:
      _memmove(pppppuVar5,plVar4,plVar9);
    }
    pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + (long)plVar9);
  }
  *(undefined1 *)pppppuVar5 = 0;
  if (*param_1 == 0) {
LAB_10a3b8998:
    if ((long)uStack_68 < 0) {
      func_0x000107c3192c(&ppppuStack_b0,ppppuStack_78,plStack_70);
    }
    else {
      plStack_a8 = plStack_70;
      ppppuStack_b0 = ppppuStack_78;
      uStack_a0 = uStack_68;
    }
    lStack_98 = *param_1;
    lStack_90 = param_1[1];
    if (lStack_90 == 0) {
      plStack_80 = (long *)0x0;
      lStack_88 = lStack_98;
    }
    else {
      plVar6 = (long *)(lStack_90 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_80 = (long *)param_1[1];
      lStack_88 = *param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    plStack_58 = plVar11 + 1;
    lVar12 = lVar12 + 0x230;
    FUN_10a3b830c(lVar12,plStack_58,&UNK_10dd5b8f9,&plStack_58,&uStack_59);
    if (*(char *)(lVar12 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar12 + 0x28));
    }
    lVar3 = lStack_90;
    lVar10 = lStack_98;
    *(long **)(lVar12 + 0x30) = plStack_a8;
    *(undefined8 *****)(lVar12 + 0x28) = ppppuStack_b0;
    *(ulong *)(lVar12 + 0x38) = uStack_a0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
    lStack_98 = 0;
    lStack_90 = 0;
    lVar8 = *(long *)(lVar12 + 0x48);
    *(long *)(lVar12 + 0x48) = lVar3;
    *(long *)(lVar12 + 0x40) = lVar10;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010a328268(lVar12 + 0x50,&lStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10a3b8bc4;
    plVar11 = plStack_80 + 1;
    do {
      lVar10 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar6 = (long *)(*param_1 + 0x10);
    (**(code **)(*plVar6 + 0x18))();
    if ((int)plVar6 == 0) goto LAB_10a3b8998;
    if ((long)uStack_68 < 0) {
      func_0x000107c3192c(&ppppuStack_b0,ppppuStack_78,plStack_70);
    }
    else {
      plStack_a8 = plStack_70;
      ppppuStack_b0 = ppppuStack_78;
      uStack_a0 = uStack_68;
    }
    lStack_90 = param_1[1];
    lStack_98 = *param_1;
    if (param_1[1] != 0) {
      plVar6 = (long *)(param_1[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_58 = plVar11 + 1;
    lVar12 = lVar12 + 0x230;
    FUN_10a3b830c(lVar12,plStack_58,&UNK_10dd5b8f9,&plStack_58,&uStack_59);
    if (*(char *)(lVar12 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar12 + 0x28));
    }
    lVar3 = lStack_90;
    lVar10 = lStack_98;
    *(long **)(lVar12 + 0x30) = plStack_a8;
    *(undefined8 *****)(lVar12 + 0x28) = ppppuStack_b0;
    *(ulong *)(lVar12 + 0x38) = uStack_a0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
    lStack_98 = 0;
    lStack_90 = 0;
    lVar8 = *(long *)(lVar12 + 0x48);
    *(long *)(lVar12 + 0x48) = lVar3;
    *(long *)(lVar12 + 0x40) = lVar10;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010a328268(lVar12 + 0x50,&lStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10a3b8bc4;
    plVar11 = plStack_80 + 1;
    do {
      lVar10 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar11 = plStack_80;
  if (lVar10 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a3b8bc4:
  if (lStack_90 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((long)uStack_a0 < 0) {
    __ZdlPv(ppppuStack_b0);
  }
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppppuStack_78);
  }
  return;
}



/* Entry: 10a3b8c40; end: 10a3b8c8f;  */

void FUN_10a3b8c40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b8c90; end: 10a3b8ca7;  */

void FUN_10a3b8c90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a3b8ca8; end: 10a3b8dab;  */

void FUN_10a3b8ca8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = *(long *)(param_2 + 0x10);
  puVar8 = *(undefined8 **)(lVar10 + 0x2c8);
  if (puVar8 < *(undefined8 **)(lVar10 + 0x2d0)) {
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8 = puVar8 + 2;
  }
  else {
    plVar6 = (long *)(lVar10 + 0x2c0);
    lVar11 = (long)puVar8 - *plVar6;
    uVar1 = (lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a3a82b4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3b8d98);
      (*pcVar5)();
    }
    uVar7 = (long)*(undefined8 **)(lVar10 + 0x2d0) - *plVar6;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_38 = plVar6;
    FUN_10a3a82c8();
    puVar2 = (undefined8 *)((long)plVar6 + lVar11);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    puVar8 = puVar2 + 2;
    lVar11 = (long)puVar2 - (*(long *)(lVar10 + 0x2c8) - *(long *)(lVar10 + 0x2c0));
    _memcpy(lVar11);
    uStack_58 = *(undefined8 *)(lVar10 + 0x2c0);
    *(long *)(lVar10 + 0x2c0) = lVar11;
    *(undefined8 **)(lVar10 + 0x2c8) = puVar8;
    uStack_40 = *(undefined8 *)(lVar10 + 0x2d0);
    *(long **)(lVar10 + 0x2d0) = plVar6 + uVar9 * 2;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010a3a82fc(&uStack_58);
  }
  *(undefined8 **)(lVar10 + 0x2c8) = puVar8;
  return;
}



/* Entry: 10a3b8dac; end: 10a3b8dc7;  */

void FUN_10a3b8dac(void)

{
  return;
}



/* Entry: 10a3b8dc8; end: 10a3b8e57;  */

void FUN_10a3b8dc8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar5 = (long *)param_1[1];
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x2d8);
  if ((ulong)*(uint *)(param_2 + 0x18) <
      (ulong)(*(long *)(*(long *)(param_2 + 0x10) + 0x2e0) - lVar4 >> 5)) {
    FUN_10a39c654(lVar4 + (ulong)*(uint *)(param_2 + 0x18) * 0x20,&uStack_30);
    plVar5 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a3b8e58; end: 10a3b8e73;  */

void FUN_10a3b8e58(void)

{
  return;
}



/* Entry: 10a3b8e74; end: 10a3b8ecb;  */

long FUN_10a3b8e74(long param_1)

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



/* Entry: 10a3b8ecc; end: 10a3b8f1f;  */

long * FUN_10a3b8ecc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a3b8f20(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110bcf1c0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a3b900c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a3b8f20; end: 10a3b8f77;  */

undefined8 FUN_10a3b8f20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x330;
  __Znwm(0x330);
  FUN_10a396cf4();
  return uVar1;
}



/* Entry: 10a3b8f78; end: 10a3b900b;  */

long * FUN_10a3b8f78(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110bcf1c0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a3b900c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a3b900c; end: 10a3b90bb;  */

void FUN_10a3b900c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a3b90bc; end: 10a3b90bf;  */

void FUN_10a3b90bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3b90c0; end: 10a3b90d3;  */

void FUN_10a3b90c0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b90d4; end: 10a3b90ef;  */

void FUN_10a3b90d4(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3b90f0; end: 10a3b912b;  */

long FUN_10a3b90f0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3b912c; end: 10a3b912f;  */

void FUN_10a3b912c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b9130; end: 10a3b9213;  */

long FUN_10a3b9130(long param_1)

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



/* Entry: 10a3b9214; end: 10a3b9247;  */

void FUN_10a3b9214(void)

{
  return;
}



/* Entry: 10a3b9248; end: 10a3b92d3;  */

void FUN_10a3b9248(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
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
  return;
}



/* Entry: 10a3b92d4; end: 10a3b9307;  */

void FUN_10a3b92d4(void)

{
  return;
}



/* Entry: 10a3b9308; end: 10a3b939b;  */

void FUN_10a3b9308(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_1;
  if (lStack_30 == 0) {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = (long *)param_1[1];
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  func_0x00010a328268(*(undefined8 *)(param_2 + 0x10),&lStack_30);
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



/* Entry: 10a3b939c; end: 10a3b93cf;  */

void FUN_10a3b939c(void)

{
  return;
}



/* Entry: 10a3b93d0; end: 10a3b945b;  */

void FUN_10a3b93d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3b945c; end: 10a3b95a3;  */

void FUN_10a3b945c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a3b95a4; end: 10a3b95d7;  */

void FUN_10a3b95a4(void)

{
  return;
}



/* Entry: 10a3b95d8; end: 10a3b969b;  */

void FUN_10a3b95d8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_3[1];
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    lVar5 = 0;
    if (plVar4 != (long *)0x0) {
      lVar5 = *param_3;
    }
  }
  lStack_40 = 0;
  if (lVar5 != 0) {
    lStack_40 = lVar5 + 0x10;
  }
  ppuStack_48 = &PTR_DAT_110bf32c0;
  plStack_38 = plVar4;
  FUN_10a05348c(param_1,param_2,&lStack_40,&ppuStack_48,0,0);
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
  return;
}



/* Entry: 10a3b969c; end: 10a3b96f3;  */

long FUN_10a3b969c(long param_1)

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



/* Entry: 10a3b96f4; end: 10a3b977f;  */

void FUN_10a3b96f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar4 = (undefined8 *)0x80;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bcfa70;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar9 = puVar4 + 8;
  puVar4[9] = 0;
  *puVar9 = 0;
  puVar5 = puVar4;
  func_0x00010a0fda30();
  puVar4[0xc] = param_3;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[5] = &PTR_DAT_110bda8f0;
  puVar7 = puVar4 + 3;
  *puVar7 = &PTR_FUN_110bda868;
  puVar4[10] = &PTR_FUN_110bda948;
  puVar4[0xb] = puVar5;
  *param_1 = puVar7;
  param_1[1] = puVar4;
  if ((puVar9 != (undefined8 *)0x0) &&
     ((lVar6 = puVar4[9], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
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
      lVar6 = puVar4[9];
    }
    *puVar9 = puVar7;
    puVar4[9] = plVar8;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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



/* Entry: 10a3b9780; end: 10a3b978f;  */

void FUN_10a3b9780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcfa70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3b9790; end: 10a3b97af;  */

void FUN_10a3b9790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcfa70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b97b0; end: 10a3b97bf;  */

void FUN_10a3b97b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3b97b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3b97c0; end: 10a3b98c7;  */

void FUN_10a3b97c0(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a3b98c8; end: 10a3b991f;  */

void FUN_10a3b98c8(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if ((*(ushort *)(lVar6 + 0x180) & 0x17) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar7 = lVar6;
  FUN_10a3c5cc8();
  cVar2 = *(char *)(lVar7 + 0x107);
  plVar10 = (long *)*(long *)(lVar7 + 0xf0);
  if (-1 < (long)cVar2) {
    plVar10 = (long *)(lVar7 + 0xf0);
  }
  lVar7 = *(long *)(lVar7 + 0xf8);
  if (-1 < cVar2) {
    lVar7 = (long)cVar2;
  }
  FUN_10a3a7ab8(auStack_98,plVar10);
  if ((((uVar1 & 0x2b0) != 0) || (3 < *(int *)(lVar6 + 0x2a8))) &&
     ((uVar1 != 0x10 || ((*(ushort *)(lVar6 + 0x180) >> 6 & 1) != 0)))) {
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x170) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar11 = *(undefined8 **)(lVar6 + 0x218);
    puVar13 = *(undefined8 **)(lVar6 + 0x220);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar8 = (long)puVar13 - (long)puVar11;
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)(lVar8 >> 4);
      if ((ulong)puVar5 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar4)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar5 + lVar7 * 2;
      puStack_a8 = puVar5;
      do {
        lVar7 = puVar11[1];
        uVar14 = *puVar11;
        puStack_a8[1] = puVar11[1];
        *puStack_a8 = uVar14;
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar11 = puVar11 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar5;
      } while (puVar11 != puVar13);
    }
    lVar7 = *(long *)(lVar6 + 0x2f8);
    lVar8 = *(long *)(lVar6 + 0x2f0);
    puVar11 = puStack_b0;
    puVar13 = puStack_a8;
    if (lVar7 != lVar8) {
      uVar12 = 0;
      do {
        plVar10 = *(long **)(lVar8 + uVar12 * 8);
        if ((*(uint *)(plVar10 + 0xb) & uVar1) != 0) {
          *(undefined1 *)(plVar10 + 10) = 1;
          (**(code **)(*plVar10 + 0x80))(plVar10);
          *(undefined1 *)(plVar10 + 10) = 0;
          lVar7 = *(long *)(lVar6 + 0x2f8);
          lVar8 = *(long *)(lVar6 + 0x2f0);
        }
        uVar12 = uVar12 + 1;
        puVar11 = puStack_b0;
        puVar13 = puStack_a8;
      } while (uVar12 < (ulong)(lVar7 - lVar8 >> 3));
    }
    for (; puVar5 = puStack_a8, puVar11 != puStack_a8; puVar11 = puVar11 + 2) {
      plVar10 = (long *)*puVar11;
      puStack_a8 = puVar13;
      if ((*(uint *)(plVar10 + 0xb) & uVar1) != 0) {
        *(undefined1 *)(plVar10 + 10) = 1;
        (**(code **)(*plVar10 + 0x80))(plVar10);
        *(undefined1 *)(plVar10 + 10) = 0;
      }
      puVar13 = puStack_a8;
      puStack_a8 = puVar5;
    }
    puStack_a8 = puVar13;
    FUN_10a462340(uVar9);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a3b9920; end: 10a3b9973;  */

void FUN_10a3b9920(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010a07d3d4(lVar1 + 0x18,param_1 + 0x10);
  if (*(char *)(*(long *)(lVar1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a3b9964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x40))(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b9974; end: 10a3b999f;  */

long FUN_10a3b9974(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a3b99a0; end: 10a3b9b37;  */

void FUN_10a3b99a0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar14 = (undefined8 *)**(long **)(param_1 + 0x18);
  puVar7 = (undefined8 *)(*(long **)(param_1 + 0x18))[1];
  lVar12 = (long)puVar7 - (long)puVar14;
  if (0 < lVar12 >> 4) {
    lVar13 = *(long *)(param_1 + 0x10);
    puVar11 = *(undefined8 **)(lVar13 + 0x220);
    if (*(long *)(lVar13 + 0x228) - (long)puVar11 < lVar12) {
      lVar15 = (long)puVar11 - *(long *)(lVar13 + 0x218);
      uVar2 = (lVar12 >> 4) + (lVar15 >> 4);
      if (uVar2 >> 0x3c != 0) {
        FUN_10a3a826c();
        return;
      }
      lStack_48 = lVar13 + 0x218;
      uVar9 = *(long *)(lVar13 + 0x228) - *(long *)(lVar13 + 0x218);
      uVar10 = (long)uVar9 >> 3;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 == 0) {
        param_2 = 0;
      }
      else {
        FUN_10a3a8280();
      }
      puVar3 = (undefined8 *)(uVar10 + lVar15);
      lStack_50 = uVar10 + param_2 * 0x10;
      puVar4 = (undefined8 *)((long)puVar3 + lVar12);
      puVar7 = puVar3;
      do {
        lVar12 = puVar14[1];
        uVar8 = *puVar14;
        puVar7[1] = puVar14[1];
        *puVar7 = uVar8;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar7 = puVar7 + 2;
        puVar14 = puVar14 + 2;
      } while (puVar7 != puVar4);
      _memcpy(puVar4,puVar11,*(long *)(lVar13 + 0x220) - (long)puVar11);
      lVar12 = *(long *)(lVar13 + 0x220);
      *(undefined8 **)(lVar13 + 0x220) = puVar11;
      lVar15 = (long)puVar3 - ((long)puVar11 - *(long *)(lVar13 + 0x218));
      _memcpy(lVar15);
      uStack_68 = *(undefined8 *)(lVar13 + 0x218);
      *(long *)(lVar13 + 0x218) = lVar15;
      *(long *)(lVar13 + 0x220) = (long)puVar4 + (lVar12 - (long)puVar11);
      uVar8 = *(undefined8 *)(lVar13 + 0x228);
      *(long *)(lVar13 + 0x228) = lStack_50;
      uStack_60 = uStack_68;
      uStack_58 = uStack_68;
      lStack_50 = uVar8;
      FUN_10a3a83b4(&uStack_68);
    }
    else {
      for (; puVar14 != puVar7; puVar14 = puVar14 + 2) {
        lVar12 = puVar14[1];
        uVar8 = *puVar14;
        puVar11[1] = puVar14[1];
        *puVar11 = uVar8;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar11 = puVar11 + 2;
      }
      *(undefined8 **)(lVar13 + 0x220) = puVar11;
    }
  }
  return;
}



/* Entry: 10a3b9b38; end: 10a3b9b53;  */

void FUN_10a3b9b38(void)

{
  return;
}



/* Entry: 10a3b9b54; end: 10a3b9ba7;  */

void FUN_10a3b9b54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((3 < *(int *)(lVar1 + 8)) && (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b9ba8; end: 10a3b9bab;  */

void FUN_10a3b9ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3b9bac; end: 10a3b9bbf;  */

void FUN_10a3b9bac(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b9bc0; end: 10a3b9c47;  */

void FUN_10a3b9bc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((3 < *(int *)(lVar1 + 8)) && (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3b9c48; end: 10a3b9c4b;  */

void FUN_10a3b9c48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3b9c4c; end: 10a3b9d0f;  */

void FUN_10a3b9c4c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_3[1];
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    lVar5 = 0;
    if (plVar4 != (long *)0x0) {
      lVar5 = *param_3;
    }
  }
  lStack_40 = 0;
  if (lVar5 != 0) {
    lStack_40 = lVar5 + 0x10;
  }
  ppuStack_48 = &PTR_DAT_110bcdb88;
  plStack_38 = plVar4;
  FUN_10a05348c(param_1,param_2,&lStack_40,&ppuStack_48,0,0);
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
  return;
}



/* Entry: 10a3b9d10; end: 10a3b9e5f;  */

void FUN_10a3b9d10(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a3b9e60(param_2,param_3);
  FUN_10a06cd04(param_5);
  func_0x000109898570(&lStack_78,param_2,param_4);
  plVar1 = plStack_68;
  lVar6 = lStack_78;
  lStack_78 = 0;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  FUN_10a39cc1c(&lStack_88,plVar5,&stack0xffffffffffffffa0);
  if ((long)plVar1 < 0) {
    __ZdlPv(lVar6);
  }
  if ((long)plStack_68 < 0) {
    __ZdlPv(lStack_78);
  }
  FUN_10a26f500(param_1,param_2,&lStack_88);
  if (lStack_80 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
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
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a3b9e60; end: 10a3b9ec7;  */

void FUN_10a3b9e60(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long in_stack_ffffffffffffff80;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bcf920;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
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
  plVar8 = plVar6;
  FUN_10a3b9e60(plVar6,param_2);
  FUN_10a3ba0d0(param_4);
  func_0x000109898570(&uStack_c8,plVar6,param_3);
  FUN_10a2eb314(&lStack_e0,plVar6,param_3 + 2);
  lVar14 = lStack_d8;
  lVar9 = lStack_e0;
  lStack_a8 = lStack_c0;
  uStack_b0 = uStack_c8;
  lStack_a0 = lStack_b8;
  uStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  FUN_10a0d09b4(&lStack_90,&uStack_b0);
  plVar8 = plVar8 + 0x3e;
  FUN_10a0d7904(plVar8,&lStack_90,&UNK_10dd5b8f9,&stack0xffffffffffffff98,&stack0xffffffffffffff97);
  if (lVar14 != 0) {
    plVar6 = (long *)(lVar14 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar11 = plVar8[7];
  plVar8[7] = lVar14;
  plVar8[6] = lVar9;
  if (lVar11 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar11);
  }
  if (in_stack_ffffffffffffff80 < 0) {
    __ZdlPv(lStack_90);
  }
  if (lVar14 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if (lStack_d8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar11 = lVar14 - lVar9;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar12 = lVar15 - lVar9 >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar4 = uVar12 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar11);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar12 * 0x10;
          lStack_a8 = lVar9;
          lStack_a0 = lVar9;
          lStack_98 = lVar9;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a3b9ec8; end: 10a3ba0cf;  */

void FUN_10a3b9ec8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
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
  FUN_10a3b9e60(param_2,param_3);
  FUN_10a3ba0d0(param_5);
  func_0x000109898570(&uStack_a8,param_2,param_4);
  FUN_10a2eb314(&lStack_c0,param_2,param_4 + 0x10);
  lVar13 = lStack_b8;
  lVar8 = lStack_c0;
  lStack_88 = lStack_a0;
  uStack_90 = uStack_a8;
  lStack_80 = lStack_98;
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  FUN_10a0d09b4(&lStack_70,&uStack_90);
  plVar7 = plVar7 + 0x3e;
  FUN_10a0d7904(plVar7,&lStack_70,&UNK_10dd5b8f9,&stack0xffffffffffffffb8,&stack0xffffffffffffffb7);
  if (lVar13 != 0) {
    plVar1 = (long *)(lVar13 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar10 = plVar7[7];
  plVar7[7] = lVar13;
  plVar7[6] = lVar8;
  if (lVar10 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar10);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_b8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar8 + 2];
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
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar8;
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar14 - lVar8 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar10);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a3ba0d0; end: 10a3ba0f3;  */

void FUN_10a3ba0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
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
  long in_stack_ffffffffffffff90;
  long in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
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
  FUN_10a3b9e60(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  FUN_10a39cba8(&stack0xffffffffffffff90,plVar5);
  func_0x00010989a420(extraout_x8,plVar3,in_stack_ffffffffffffff90,
                      (in_stack_ffffffffffffff98 - in_stack_ffffffffffffff90 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffa8);
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



/* Entry: 10a3ba0f4; end: 10a3ba1fb;  */

void FUN_10a3ba0f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a3b9e60(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a39cba8(&stack0xffffffffffffffa0,plVar4);
  func_0x00010989a420(param_1,param_2,in_stack_ffffffffffffffa0,
                      (in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
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



/* Entry: 10a3ba1fc; end: 10a3ba2af;  */

void FUN_10a3ba1fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3b9e60(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3ba840(param_2 + 0x3e);
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



/* Entry: 10a3ba2b0; end: 10a3ba45b;  */

void FUN_10a3ba2b0(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    plVar9 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar6 = plVar9;
    if (plVar9 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar6 + 2,param_2 + 2);
        plVar6[5] = param_2[5];
        lVar8 = param_2[7];
        lVar7 = param_2[6];
        if (param_2[7] != 0) {
          plVar9 = (long *)(param_2[7] + 0x10);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar3 = plVar6[7];
        plVar6[7] = lVar8;
        plVar6[6] = lVar7;
        if (lVar3 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar9 = (long *)*plVar6;
        plVar6[1] = plVar6[5];
        plVar4 = param_1;
        FUN_10a3ba45c(param_1,plVar6[5],plVar6 + 2);
        FUN_10a3ba770(param_1,plVar6,plVar4);
        param_2 = (long *)*param_2;
      } while ((plVar9 != (long *)0x0) && (plVar6 = plVar9, param_2 != param_3));
    }
    func_0x00010a0d8aa4(param_1,plVar9);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    puVar5 = (undefined8 *)0x40;
    __Znwm();
    *puVar5 = 0;
    puVar5[1] = 0;
    FUN_10a3aab84(puVar5 + 2,param_2 + 2);
    puVar5[1] = puVar5[5];
    plVar6 = param_1;
    FUN_10a3ba45c(param_1,puVar5[5],puVar5 + 2);
    FUN_10a3ba770(param_1,puVar5,plVar6);
  }
  return;
}



/* Entry: 10a3ba45c; end: 10a3ba76f;  */

long * FUN_10a3ba45c(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)param_1[1];
  if ((plVar18 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10a3ba664;
  uVar8 = 1;
  if ((long *)0x2 < plVar18) {
    uVar8 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
  }
  plVar6 = (long *)(uVar8 | (long)plVar18 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar7) {
    plVar6 = plVar7;
  }
  plVar7 = param_1;
  plVar10 = param_2;
  plVar15 = param_3;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar18 = (long *)param_1[1];
    plVar7 = plVar6;
  }
  if (plVar18 > plVar6 || plVar6 == plVar18) {
    if (plVar18 <= plVar6) goto LAB_10a3ba664;
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar18 <= plVar6) {
      plVar18 = (long *)param_1[1];
      goto LAB_10a3ba664;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10a3ba664;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    lVar4 = (long)plVar6 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (plVar6 != plVar18);
    plVar7 = (long *)param_1[2];
    plVar18 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar8 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar8);
      }
      else if (plVar6 <= plVar10) {
        uVar9 = 0;
        if (plVar6 != (long *)0x0) {
          uVar9 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
        plVar14 = (long *)plVar7[1];
        if (((ulong)plVar6 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar6 <= plVar14) {
          uVar9 = 0;
          if (plVar6 != (long *)0x0) {
            uVar9 = (ulong)plVar14 / (ulong)plVar6;
          }
          plVar14 = (long *)((long)plVar14 - uVar9 * (long)plVar6);
        }
        if (plVar14 != plVar10) {
          lVar4 = *param_1;
          plVar17 = plVar7;
          if (*(long *)(lVar4 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar14 * 8) = plVar15;
            plVar10 = plVar14;
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
              if (plVar17 == (long *)0x0) break;
            } while (plVar7[5] == plVar17[5]);
            *plVar15 = (long)plVar17;
            *plVar16 = **(long **)(lVar4 + (long)plVar14 * 8);
            **(long **)(lVar4 + (long)plVar14 * 8) = (long)plVar7;
            plVar7 = plVar15;
          }
        }
      }
    }
LAB_10a3ba664:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)(uVar8 & (ulong)param_2);
    }
    else {
      plVar6 = param_2;
      if (plVar18 <= param_2) {
        uVar9 = 0;
        if (plVar18 != (long *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)plVar18;
        }
        plVar6 = (long *)((long)param_2 - uVar9 * (long)plVar18);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      bVar12 = false;
      bVar1 = 0;
      do {
        plVar10 = plVar7;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) {
          return plVar10;
        }
        plVar15 = (long *)plVar7[1];
        if (((ulong)plVar18 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar15 & uVar8);
        }
        else {
          plVar14 = plVar15;
          if (plVar18 <= plVar15) {
            uVar9 = 0;
            if (plVar18 != (long *)0x0) {
              uVar9 = (ulong)plVar15 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar15 - uVar9 * (long)plVar18);
          }
        }
        if (plVar14 != plVar6) {
          return plVar10;
        }
        if (plVar15 == param_2) {
          bVar2 = plVar7[5] == param_3[3];
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar12;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar12 = (bool)(bVar12 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
    return plVar10;
  }
  func_0x000109ffded8();
  uVar8 = plVar7[1];
  uVar9 = plVar10[1];
  uVar11 = uVar8 - 1;
  if ((uVar8 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
    if (plVar15 != (long *)0x0) goto LAB_10a3ba798;
LAB_10a3ba7d4:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10a3ba830;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar9 * uVar8;
    }
  }
  else {
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar13 * uVar8;
    }
    if (plVar15 == (long *)0x0) goto LAB_10a3ba7d4;
LAB_10a3ba798:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10a3ba830;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar11 * uVar8;
    }
    if (uVar13 == uVar9) goto LAB_10a3ba830;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10a3ba830:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10a3ba770; end: 10a3ba83f;  */

void FUN_10a3ba770(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a3ba798;
LAB_10a3ba7d4:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a3ba830;
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
    if (param_3 == (long *)0x0) goto LAB_10a3ba7d4;
LAB_10a3ba798:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a3ba830;
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
    if (uVar4 == uVar2) goto LAB_10a3ba830;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a3ba830:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a3ba840; end: 10a3ba893;  */

void FUN_10a3ba840(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a0d8aa4(param_1,param_1[2]);
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



/* Entry: 10a3ba894; end: 10a3ba92f;  */

long * FUN_10a3ba894(long *param_1,ulong param_2)

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
          if (plVar5[5] == param_2) {
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



/* Entry: 10a3ba930; end: 10a3ba9ef;  */

void FUN_10a3ba930(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lVar5 = *(long *)(param_2 + 0x10);
  FUN_10a0d09b4(auStack_60,param_2 + 0x18);
  lVar5 = lVar5 + 0x1f0;
  puStack_38 = (undefined1 *)auStack_60;
  FUN_10a0d7904(lVar5,auStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  uVar7 = param_1[1];
  uVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar4);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10a3ba9f0; end: 10a3baa2f;  */

void FUN_10a3ba9f0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a3baa30; end: 10a3baabb;  */

void FUN_10a3baa30(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
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
  return;
}



/* Entry: 10a3baabc; end: 10a3baaef;  */

void FUN_10a3baabc(void)

{
  return;
}



/* Entry: 10a3baaf0; end: 10a3bab7b;  */

void FUN_10a3baaf0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
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
  return;
}



/* Entry: 10a3bab7c; end: 10a3babaf;  */

void FUN_10a3bab7c(void)

{
  return;
}


