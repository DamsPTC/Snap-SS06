/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7a9cac; end: 10a7a9daf;  */

void FUN_10a7a9cac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7a9008(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a770ff4(&stack0xffffffffffffffb0,plVar6[8]);
  FUN_10a204898(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a7a9db0; end: 10a7a9efb;  */

void FUN_10a7a9db0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a7a9008(param_2,param_3);
  FUN_10a3ff054(param_5);
  plVar7 = param_2;
  func_0x00010a137904(param_2,param_4);
  plVar8 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a096284();
  FUN_10a7710c0(&stack0xffffffffffffffa0,plVar6[8],plVar7,plVar8,plVar9);
  FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar10 = lVar12 - 1;
  plVar5[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar15 = plVar5[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar5[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar16;
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar5[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar10;
  return;
}



/* Entry: 10a7a9efc; end: 10a7a9fb3;  */

void FUN_10a7a9efc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7a9fb4(param_1,param_2,FUN_10a76f73c,0,param_3,param_4,param_5);
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



/* Entry: 10a7a9fb4; end: 10a7aa12b;  */

void FUN_10a7a9fb4(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a7a9008(param_2,param_5);
  FUN_10a7aa12c(param_7);
  FUN_10a76b320(auStack_60,param_2,param_6);
  FUN_10a059354(auStack_70,param_2,param_6 + 0x10);
  func_0x000109898570(auStack_88,param_2,param_6 + 0x20);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60,auStack_70,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a7aa12c; end: 10a7aa14f;  */

void FUN_10a7aa12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar5 = 0;
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
  FUN_10a7aa208(extraout_x8,plVar3,FUN_10a76faf8,0,uVar5,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
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



/* Entry: 10a7aa150; end: 10a7aa207;  */

void FUN_10a7aa150(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7aa208(param_1,param_2,FUN_10a76faf8,0,param_3,param_4,param_5);
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



/* Entry: 10a7aa208; end: 10a7aa3bb;  */

void FUN_10a7aa208(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a7a9008(param_2,param_5);
  FUN_10a7aa3bc(param_7);
  FUN_10a76b320(auStack_60,param_2,param_6);
  FUN_10a059354(auStack_70,param_2,param_6 + 0x10);
  func_0x000109898570(auStack_88,param_2,param_6 + 0x20);
  func_0x000109898570(auStack_a0,param_2,param_6 + 0x30);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60,auStack_70,auStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a7aa3bc; end: 10a7aa3df;  */

/* WARNING: Removing unreachable block (ram,0x00010a7aa56c) */
/* WARNING: Removing unreachable block (ram,0x00010a7aa55c) */
/* WARNING: Removing unreachable block (ram,0x00010a7aa57c) */

void FUN_10a7aa3bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
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
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *aplStack_78 [3];
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar5 = (long *)0x4;
  uVar8 = 0;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a7a9008(plVar5,uVar8);
  FUN_10a7aa748(param_4);
  FUN_10a76b320(&uStack_e8,plVar5,param_1);
  FUN_10a059354(auStack_f8,plVar5,param_1 + 0x10);
  func_0x000109898570(auStack_110,plVar5,param_1 + 0x20);
  func_0x000109898570(auStack_128,plVar5,param_1 + 0x30);
  func_0x000109898570(auStack_140,plVar5,param_1 + 0x40);
  FUN_10a76fc50(aplStack_78,auStack_110,0x20);
  FUN_10a76fc50(&lStack_90,auStack_128,0x10);
  lVar11 = plVar7[8];
  func_0x000107c2b054(auStack_a8,&UNK_10f674def);
  func_0x000107c2b054(auStack_c0,&UNK_10f674def);
  func_0x000107c2b054(auStack_d8,&UNK_10f674def);
  FUN_10a76f8cc(lVar11,uStack_e8,plStack_e0,auStack_f8,0,auStack_140,auStack_a8,aplStack_78,
                &lStack_90,auStack_c0,auStack_d8);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (plStack_f0 != (long *)0x0) {
    plVar5 = plStack_f0 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  if (plStack_e0 != (long *)0x0) {
    plVar5 = plStack_e0 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar11 + 2];
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
  lVar11 = *plVar5;
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
        aplStack_78[0] = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar10 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a7aa3e0; end: 10a7aa747;  */

/* WARNING: Removing unreachable block (ram,0x00010a7aa56c) */
/* WARNING: Removing unreachable block (ram,0x00010a7aa55c) */
/* WARNING: Removing unreachable block (ram,0x00010a7aa57c) */

void FUN_10a7aa3e0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *aplStack_68 [3];
  
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
  FUN_10a7a9008(param_2,param_3);
  FUN_10a7aa748(param_5);
  FUN_10a76b320(&uStack_d8,param_2,param_4);
  FUN_10a059354(auStack_e8,param_2,param_4 + 0x10);
  func_0x000109898570(auStack_100,param_2,param_4 + 0x20);
  func_0x000109898570(auStack_118,param_2,param_4 + 0x30);
  func_0x000109898570(auStack_130,param_2,param_4 + 0x40);
  FUN_10a76fc50(aplStack_68,auStack_100,0x20);
  FUN_10a76fc50(&lStack_80,auStack_118,0x10);
  lVar9 = plVar6[8];
  func_0x000107c2b054(auStack_98,&UNK_10f674def);
  func_0x000107c2b054(auStack_b0,&UNK_10f674def);
  func_0x000107c2b054(auStack_c8,&UNK_10f674def);
  FUN_10a76f8cc(lVar9,uStack_d8,plStack_d0,auStack_e8,0,auStack_130,auStack_98,aplStack_68,
                &lStack_80,auStack_b0,auStack_c8);
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  if (cStack_119 < '\0') {
    __ZdlPv(auStack_130[0]);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (cStack_e9 < '\0') {
    __ZdlPv(auStack_100[0]);
  }
  if (plStack_e0 != (long *)0x0) {
    plVar6 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if (plStack_d0 != (long *)0x0) {
    plVar6 = plStack_d0 + 1;
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
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
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
        aplStack_68[0] = plVar6;
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



/* Entry: 10a7aa748; end: 10a7aa76b;  */

void FUN_10a7aa748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar3 = (long *)0x5;
  uVar5 = 0;
  FUN_10a052ee0(5,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a7aa208(extraout_x8,plVar3,FUN_10a76ff60,0,uVar5,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
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



/* Entry: 10a7aa76c; end: 10a7aa823;  */

void FUN_10a7aa76c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7aa208(param_1,param_2,FUN_10a76ff60,0,param_3,param_4,param_5);
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



/* Entry: 10a7aa824; end: 10a7aa8db;  */

void FUN_10a7aa824(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7aa208(param_1,param_2,FUN_10a7700bc,0,param_3,param_4,param_5);
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



/* Entry: 10a7aa8dc; end: 10a7aa993;  */

void FUN_10a7aa8dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7a9fb4(param_1,param_2,FUN_10a76fdd0,0,param_3,param_4,param_5);
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



/* Entry: 10a7aa994; end: 10a7aaa4b;  */

void FUN_10a7aa994(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7a9128(param_1,param_2,FUN_10a770b84,0,param_3,param_4,param_5);
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



/* Entry: 10a7aaa4c; end: 10a7aabc7;  */

undefined8 * FUN_10a7aaa4c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar4 = (undefined8 *)0x8;
  __Znwm();
  *puVar4 = param_2;
  param_1[0xb] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[9] = puVar4;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xf] = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x10);
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1109e6c08;
  plVar5[1] = 0;
  plStack_50 = plVar5 + 3;
  *(undefined1 *)plStack_50 = 0;
  plStack_48 = plVar5;
  func_0x00010a78f914(param_1 + 7,&plStack_50);
  plVar5 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a7aabc8; end: 10a7aac33;  */

void FUN_10a7aabc8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a15206c(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a7aac34; end: 10a7aae0b;  */

void FUN_10a7aac34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a7aac34(param_1,*param_2);
    FUN_10a7aac34(param_1,param_2[1]);
    func_0x00010a79dda0(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a7aae0c; end: 10a7ab1eb;  */

undefined1  [16] FUN_10a7aae0c(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

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
  
  uVar15 = (ulong)*param_2;
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
          if ((int)plVar14[2] == *param_2) {
            uVar5 = 0;
            goto LAB_10a7ab168;
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
  plVar14 = (long *)0x30;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  *(undefined4 *)(plVar14 + 2) = *(undefined4 *)*param_4;
  plVar14[4] = 0;
  plVar14[5] = 0;
  plVar14[3] = 0;
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
LAB_10a7aaf78:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7ab1d0);
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
        if (uVar6 != 0) goto LAB_10a7aaf78;
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
    if (*plVar14 == 0) goto LAB_10a7ab158;
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
LAB_10a7ab158:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a7ab168:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10a7ab1ec; end: 10a7ab28b;  */

void FUN_10a7ab1ec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
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



/* Entry: 10a7ab28c; end: 10a7ab55b;  */

void FUN_10a7ab28c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7ab340;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7ab340;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a7ab340:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a7ab55c; end: 10a7ab5d7;  */

void FUN_10a7ab55c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010a7ab3ac();
  if (lVar1 != 0) {
    func_0x00010a7ab590(param_1,lVar1);
  }
  return;
}



/* Entry: 10a7ab5d8; end: 10a7ab6f7;  */

void FUN_10a7ab5d8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7ab68c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7ab68c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a7ab68c:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a7ab6f8; end: 10a7ab74f;  */

long FUN_10a7ab6f8(long param_1)

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



/* Entry: 10a7ab750; end: 10a7abb47;  */

undefined1  [16] FUN_10a7ab750(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10a7abad0;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *(long *)*param_4;
  *(undefined4 *)(plVar15 + 3) = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10a7ab8e0:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7abb34);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10a7ab8e0;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10a7abac0;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10a7abac0:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a7abad0:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10a7abb48; end: 10a7abd27;  */

void FUN_10a7abb48(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
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
  plVar7 = param_2;
  FUN_10a7abd28(param_2,param_3);
  FUN_10a7abd90(param_5);
  iVar11 = 0;
  uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
  puVar1 = (uint *)&uStack_70;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (1 < *puVar1) {
    FUN_10a7abdb4();
    if (param_2 == (long *)0x0) {
      iVar11 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x90))();
      if (param_2 == (long *)0x0) {
        in_stack_ffffffffffffffa8 = (long *)0x0;
        in_stack_ffffffffffffffa0 = 0;
      }
      else {
        func_0x00010a443248(&stack0xffffffffffffffa0,param_2 + 2);
      }
      plVar7 = (long *)plVar7[10];
      if (plVar7 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        (**(code **)(*plVar7 + 0x10))(plVar7,in_stack_ffffffffffffffa0 + 0x30);
        iVar11 = (int)plVar7;
      }
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar7 = in_stack_ffffffffffffffa8 + 1;
        do {
          lVar10 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
    }
    if ((3 < (int)(uint)uStack_70) && (plStack_68 != (long *)0x0)) {
      (**(code **)*plStack_68)();
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar11;
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
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar10;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar10,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          uStack_70 = lVar15;
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
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar14 != lVar10) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a7abd28; end: 10a7abd8f;  */

void FUN_10a7abd28(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined **ppuVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *extraout_x8;
  ulong uVar24;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar25;
  undefined8 unaff_x22;
  long lVar26;
  long lVar27;
  undefined8 unaff_x23;
  long lVar28;
  undefined8 unaff_x24;
  ulong uVar29;
  undefined8 unaff_x25;
  ulong uVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar31;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  ppuVar12 = param_1;
  func_0x000109898688();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar20 = param_1;
    FUN_10a053854(param_1,ppuVar12);
    if (ppuVar20 != (undefined **)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar20 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar12 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((uint)ppuVar12 < 2) {
    return;
  }
  pcStack_28 = FUN_10a7abd90;
  ppuVar13 = (undefined **)0x1;
  ppuVar20 = (undefined **)0x1;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_10a052ee0(1,1,ppuVar12);
  pppuVar10 = (undefined8 ***)&stack0xffffffffffffffb0;
  pcStack_38 = FUN_10a7abdb4;
  ppppuVar31 = &pppuStack_40;
  ppuVar14 = ppuVar13;
  pppuStack_40 = &ppuStack_30;
  func_0x000109898688();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar15 = (undefined **)&UNK_10f68f52e;
    pcVar9 = FUN_10a7abdec;
    func_0x00010988bd28();
  }
  else {
    pppuVar10 = &ppuStack_30;
    ppuVar15 = ppuVar13;
    ppuVar20 = ppuVar14;
    ppuVar13 = param_1;
    ppppuVar31 = (undefined8 ****)pppuStack_40;
    pcVar9 = pcStack_38;
  }
  *(undefined8 *****)((long)pppuVar10 + -0x10) = ppppuVar31;
  *(code **)((long)pppuVar10 + -8) = pcVar9;
  FUN_10a053854();
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar20 = &PTR_DAT_110b178e0;
    ppuVar12 = &PTR_DAT_110c41a28;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar15 != (undefined **)0x0) {
      return;
    }
  }
  plVar16 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)pppuVar10 + -0x50) = unaff_x24;
  *(undefined8 *)((long)pppuVar10 + -0x48) = unaff_x23;
  *(undefined8 *)((long)pppuVar10 + -0x40) = unaff_x22;
  *(undefined8 *)((long)pppuVar10 + -0x38) = unaff_x21;
  *(undefined8 *)((long)pppuVar10 + -0x30) = unaff_x20;
  *(undefined ***)((long)pppuVar10 + -0x28) = ppuVar13;
  *(undefined1 **)((long)pppuVar10 + -0x20) = (undefined1 *)((long)pppuVar10 + -0x10);
  *(code **)((long)pppuVar10 + -0x18) = FUN_10a7abe2c;
  plVar17 = plVar16;
  (**(code **)(*plVar16 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  plVar19 = plVar16;
  FUN_10a7abd28(plVar16,ppuVar20);
  FUN_10a5645cc(param_4);
  plVar18 = plVar16;
  func_0x000109898518(plVar16,ppuVar12);
  func_0x000109898518(plVar16,ppuVar12 + 2);
  plVar19 = (long *)plVar19[10];
  if (plVar19 != (long *)0x0) {
    iVar21 = (int)plVar16;
    if (0 < iVar21) {
      iVar21 = 1;
    }
    (**(code **)(*plVar19 + 0x20))(plVar19,plVar18,iVar21 + -1);
  }
  *extraout_x8 = 0;
  plVar16 = plVar17 + 0x4b;
  uVar1 = *(undefined8 *)((long)pppuVar10 + -0x20);
  uVar5 = *(undefined8 *)((long)pppuVar10 + -0x18);
  uVar2 = *(undefined8 *)((long)pppuVar10 + -0x30);
  uVar6 = *(undefined8 *)((long)pppuVar10 + -0x28);
  uVar3 = *(undefined8 *)((long)pppuVar10 + -0x40);
  uVar7 = *(undefined8 *)((long)pppuVar10 + -0x38);
  uVar4 = *(undefined8 *)((long)pppuVar10 + -0x50);
  uVar8 = *(undefined8 *)((long)pppuVar10 + -0x48);
  lVar22 = plVar17[0x59];
  uVar23 = lVar22 - 1;
  plVar17[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar16[lVar22 + 2];
    if (plVar17[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar23) {
      return;
    }
  }
  *(undefined8 *)((long)pppuVar10 + -0x70) = unaff_x28;
  *(undefined8 *)((long)pppuVar10 + -0x68) = unaff_x27;
  *(undefined8 *)((long)pppuVar10 + -0x60) = unaff_x26;
  *(undefined8 *)((long)pppuVar10 + -0x58) = unaff_x25;
  *(undefined8 *)((long)pppuVar10 + -0x50) = uVar4;
  *(undefined8 *)((long)pppuVar10 + -0x48) = uVar8;
  *(undefined8 *)((long)pppuVar10 + -0x40) = uVar3;
  *(undefined8 *)((long)pppuVar10 + -0x38) = uVar7;
  *(undefined8 *)((long)pppuVar10 + -0x30) = uVar2;
  *(undefined8 *)((long)pppuVar10 + -0x28) = uVar6;
  *(undefined8 *)((long)pppuVar10 + -0x20) = uVar1;
  *(undefined8 *)((long)pppuVar10 + -0x18) = uVar5;
  lVar22 = *plVar16;
  lVar27 = plVar17[0x4c];
  lVar25 = lVar27 - lVar22;
  uVar29 = lVar25 >> 4;
  if (uVar29 < uVar23) {
    uVar30 = uVar23 - uVar29;
    lVar28 = plVar17[0x4d];
    if ((ulong)(lVar28 - lVar27 >> 4) < uVar30) {
      if (uVar23 >> 0x3c == 0) {
        uVar24 = lVar28 - lVar22 >> 3;
        if (uVar24 <= uVar23) {
          uVar24 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar28 - lVar22)) {
          uVar24 = 0xfffffffffffffff;
        }
        *(long **)((long)pppuVar10 + -0x78) = plVar16;
        if (uVar24 >> 0x3c == 0) {
          lVar11 = uVar24 << 4;
          __Znwm();
          lVar27 = lVar11 + lVar25;
          _bzero(lVar27,uVar30 * 0x10);
          lVar26 = lVar27 + uVar29 * -0x10;
          _memcpy(lVar26,lVar22,lVar25);
          *plVar16 = lVar26;
          plVar17[0x4c] = lVar27 + uVar30 * 0x10;
          plVar17[0x4d] = lVar11 + uVar24 * 0x10;
          *(long *)((long)pppuVar10 + -0x88) = lVar22;
          *(long *)((long)pppuVar10 + -0x80) = lVar28;
          *(long *)((long)pppuVar10 + -0x98) = lVar22;
          *(long *)((long)pppuVar10 + -0x90) = lVar22;
          func_0x00010988c1b8((undefined1 *)((long)pppuVar10 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(lVar27,uVar30 * 0x10);
    plVar17[0x4c] = lVar27 + uVar30 * 0x10;
  }
  else if (uVar23 < uVar29) {
    lVar22 = lVar22 + uVar23 * 0x10;
    while (lVar27 != lVar22) {
      lVar27 = lVar27 + -0x10;
      func_0x00010988c204(lVar27);
    }
    plVar17[0x4c] = lVar22;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar23;
  return;
}



/* Entry: 10a7abd90; end: 10a7abdb3;  */

void FUN_10a7abd90(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *extraout_x8;
  ulong uVar23;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar24;
  undefined8 unaff_x22;
  long lVar25;
  long lVar26;
  undefined8 unaff_x23;
  long lVar27;
  undefined8 unaff_x24;
  ulong uVar28;
  undefined8 unaff_x25;
  ulong uVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar30;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((uint)param_1 < 2) {
    return;
  }
  ppuVar12 = (undefined **)0x1;
  ppuVar19 = (undefined **)0x1;
  FUN_10a052ee0(1,1,param_1);
  puVar10 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a7abdb4;
  ppppuVar30 = &pppuStack_20;
  ppuVar13 = ppuVar12;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar14 = (undefined **)&UNK_10f68f52e;
    pcVar9 = FUN_10a7abdec;
    func_0x00010988bd28();
  }
  else {
    puVar10 = &stack0xfffffffffffffff0;
    ppuVar14 = ppuVar12;
    ppuVar19 = ppuVar13;
    ppuVar12 = unaff_x19;
    ppppuVar30 = (undefined8 ****)pppuStack_20;
    pcVar9 = pcStack_18;
  }
  *(undefined8 *****)(puVar10 + -0x10) = ppppuVar30;
  *(code **)(puVar10 + -8) = pcVar9;
  FUN_10a053854();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar19 = &PTR_DAT_110b178e0;
    param_1 = &PTR_DAT_110c41a28;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar14 != (undefined **)0x0) {
      return;
    }
  }
  plVar15 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar10 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar10 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar10 + -0x30) = unaff_x20;
  *(undefined ***)(puVar10 + -0x28) = ppuVar12;
  *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
  *(code **)(puVar10 + -0x18) = FUN_10a7abe2c;
  plVar16 = plVar15;
  (**(code **)(*plVar15 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar18 = plVar15;
  FUN_10a7abd28(plVar15,ppuVar19);
  FUN_10a5645cc(param_4);
  plVar17 = plVar15;
  func_0x000109898518(plVar15,param_1);
  func_0x000109898518(plVar15,param_1 + 2);
  plVar18 = (long *)plVar18[10];
  if (plVar18 != (long *)0x0) {
    iVar20 = (int)plVar15;
    if (0 < iVar20) {
      iVar20 = 1;
    }
    (**(code **)(*plVar18 + 0x20))(plVar18,plVar17,iVar20 + -1);
  }
  *extraout_x8 = 0;
  plVar15 = plVar16 + 0x4b;
  uVar1 = *(undefined8 *)(puVar10 + -0x20);
  uVar5 = *(undefined8 *)(puVar10 + -0x18);
  uVar2 = *(undefined8 *)(puVar10 + -0x30);
  uVar6 = *(undefined8 *)(puVar10 + -0x28);
  uVar3 = *(undefined8 *)(puVar10 + -0x40);
  uVar7 = *(undefined8 *)(puVar10 + -0x38);
  uVar4 = *(undefined8 *)(puVar10 + -0x50);
  uVar8 = *(undefined8 *)(puVar10 + -0x48);
  lVar21 = plVar16[0x59];
  uVar22 = lVar21 - 1;
  plVar16[0x59] = uVar22;
  if (uVar22 < 8) {
    uVar22 = plVar15[lVar21 + 2];
    if (plVar16[0x5a] == uVar22) {
      return;
    }
  }
  else {
    uVar22 = *(ulong *)(plVar16[0x57] + -8);
    plVar16[0x57] = plVar16[0x57] + -8;
    if (plVar16[0x5a] == uVar22) {
      return;
    }
  }
  *(undefined8 *)(puVar10 + -0x70) = unaff_x28;
  *(undefined8 *)(puVar10 + -0x68) = unaff_x27;
  *(undefined8 *)(puVar10 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar10 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar10 + -0x50) = uVar4;
  *(undefined8 *)(puVar10 + -0x48) = uVar8;
  *(undefined8 *)(puVar10 + -0x40) = uVar3;
  *(undefined8 *)(puVar10 + -0x38) = uVar7;
  *(undefined8 *)(puVar10 + -0x30) = uVar2;
  *(undefined8 *)(puVar10 + -0x28) = uVar6;
  *(undefined8 *)(puVar10 + -0x20) = uVar1;
  *(undefined8 *)(puVar10 + -0x18) = uVar5;
  lVar21 = *plVar15;
  lVar26 = plVar16[0x4c];
  lVar24 = lVar26 - lVar21;
  uVar28 = lVar24 >> 4;
  if (uVar28 < uVar22) {
    uVar29 = uVar22 - uVar28;
    lVar27 = plVar16[0x4d];
    if ((ulong)(lVar27 - lVar26 >> 4) < uVar29) {
      if (uVar22 >> 0x3c == 0) {
        uVar23 = lVar27 - lVar21 >> 3;
        if (uVar23 <= uVar22) {
          uVar23 = uVar22;
        }
        if (0x7fffffffffffffef < (ulong)(lVar27 - lVar21)) {
          uVar23 = 0xfffffffffffffff;
        }
        *(long **)(puVar10 + -0x78) = plVar15;
        if (uVar23 >> 0x3c == 0) {
          lVar11 = uVar23 << 4;
          __Znwm();
          lVar26 = lVar11 + lVar24;
          _bzero(lVar26,uVar29 * 0x10);
          lVar25 = lVar26 + uVar28 * -0x10;
          _memcpy(lVar25,lVar21,lVar24);
          *plVar15 = lVar25;
          plVar16[0x4c] = lVar26 + uVar29 * 0x10;
          plVar16[0x4d] = lVar11 + uVar23 * 0x10;
          *(long *)(puVar10 + -0x88) = lVar21;
          *(long *)(puVar10 + -0x80) = lVar27;
          *(long *)(puVar10 + -0x98) = lVar21;
          *(long *)(puVar10 + -0x90) = lVar21;
          func_0x00010988c1b8(puVar10 + -0x98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(lVar26,uVar29 * 0x10);
    plVar16[0x4c] = lVar26 + uVar29 * 0x10;
  }
  else if (uVar22 < uVar28) {
    lVar21 = lVar21 + uVar22 * 0x10;
    while (lVar26 != lVar21) {
      lVar26 = lVar26 + -0x10;
      func_0x00010988c204(lVar26);
    }
    plVar16[0x4c] = lVar21;
  }
code_r0x00010988c138:
  plVar16[0x5a] = uVar22;
  return;
}



/* Entry: 10a7abdb4; end: 10a7abdeb;  */

void FUN_10a7abdb4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *extraout_x8;
  ulong uVar21;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 unaff_x22;
  long lVar23;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar12 = param_1;
  func_0x000109898688();
  ppuVar13 = param_1;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a7abdec;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar12 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar12 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c41a28;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar13 != (undefined **)0x0) {
      return;
    }
  }
  plVar14 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a7abe2c;
  plVar15 = plVar14;
  (**(code **)(*plVar14 + 0x58))();
  if ((ulong)plVar15[0x59] < 8) {
    plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
    plVar15[0x59] = plVar15[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar15 + 0x4b);
  }
  plVar17 = plVar14;
  FUN_10a7abd28(plVar14,ppuVar12);
  FUN_10a5645cc(param_4);
  plVar16 = plVar14;
  func_0x000109898518(plVar14,param_3);
  func_0x000109898518(plVar14,param_3 + 2);
  plVar17 = (long *)plVar17[10];
  if (plVar17 != (long *)0x0) {
    iVar18 = (int)plVar14;
    if (0 < iVar18) {
      iVar18 = 1;
    }
    (**(code **)(*plVar17 + 0x20))(plVar17,plVar16,iVar18 + -1);
  }
  *extraout_x8 = 0;
  plVar14 = plVar15 + 0x4b;
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
  lVar19 = plVar15[0x59];
  uVar20 = lVar19 - 1;
  plVar15[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar14[lVar19 + 2];
    if (plVar15[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar15[0x57] + -8);
    plVar15[0x57] = plVar15[0x57] + -8;
    if (plVar15[0x5a] == uVar20) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
  lVar19 = *plVar14;
  lVar24 = plVar15[0x4c];
  lVar22 = lVar24 - lVar19;
  uVar26 = lVar22 >> 4;
  if (uVar26 < uVar20) {
    uVar27 = uVar20 - uVar26;
    lVar25 = plVar15[0x4d];
    if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = lVar25 - lVar19 >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar25 - lVar19)) {
          uVar21 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x78) = plVar14;
        if (uVar21 >> 0x3c == 0) {
          lVar11 = uVar21 << 4;
          __Znwm();
          lVar24 = lVar11 + lVar22;
          _bzero(lVar24,uVar27 * 0x10);
          lVar23 = lVar24 + uVar26 * -0x10;
          _memcpy(lVar23,lVar19,lVar22);
          *plVar14 = lVar23;
          plVar15[0x4c] = lVar24 + uVar27 * 0x10;
          plVar15[0x4d] = lVar11 + uVar21 * 0x10;
          *(long *)((long)register0x00000008 + -0x88) = lVar19;
          *(long *)((long)register0x00000008 + -0x80) = lVar25;
          *(long *)((long)register0x00000008 + -0x98) = lVar19;
          *(long *)((long)register0x00000008 + -0x90) = lVar19;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar10)();
    }
    _bzero(lVar24,uVar27 * 0x10);
    plVar15[0x4c] = lVar24 + uVar27 * 0x10;
  }
  else if (uVar20 < uVar26) {
    lVar19 = lVar19 + uVar20 * 0x10;
    while (lVar24 != lVar19) {
      lVar24 = lVar24 + -0x10;
      func_0x00010988c204(lVar24);
    }
    plVar15[0x4c] = lVar19;
  }
code_r0x00010988c138:
  plVar15[0x5a] = uVar20;
  return;
}



/* Entry: 10a7abdec; end: 10a7abe2b;  */

void FUN_10a7abdec(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c41a28;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar6 = plVar3;
  FUN_10a7abd28(plVar3,param_2);
  FUN_10a5645cc(param_4);
  plVar5 = plVar3;
  func_0x000109898518(plVar3,param_3);
  func_0x000109898518(plVar3,param_3 + 2);
  plVar6 = (long *)plVar6[10];
  if (plVar6 != (long *)0x0) {
    iVar7 = (int)plVar3;
    if (0 < iVar7) {
      iVar7 = 1;
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar5,iVar7 + -1);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar9 = lVar8 - 1;
  plVar4[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar3[lVar8 + 2];
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar3;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar3 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar9;
  return;
}



/* Entry: 10a7abe2c; end: 10a7abf1f;  */

void FUN_10a7abe2c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a7abd28(param_2,param_3);
  FUN_10a5645cc(param_5);
  plVar4 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  plVar5 = (long *)plVar5[10];
  if (plVar5 != (long *)0x0) {
    iVar6 = (int)param_2;
    if (0 < iVar6) {
      iVar6 = 1;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar4,iVar6 + -1);
  }
  *param_1 = 0;
  plVar5 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar8 = lVar7 - 1;
  plVar3[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar3[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar3[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar3[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar3[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar8;
  return;
}



/* Entry: 10a7abf20; end: 10a7abff3;  */

void FUN_10a7abf20(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  plVar4 = (long *)plVar4[10];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
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



/* Entry: 10a7abff4; end: 10a7ac0c7;  */

void FUN_10a7abff4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  plVar4 = (long *)plVar4[10];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
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



/* Entry: 10a7ac0c8; end: 10a7ac19b;  */

void FUN_10a7ac0c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  plVar4 = (long *)plVar4[10];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
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



/* Entry: 10a7ac19c; end: 10a7ac26f;  */

void FUN_10a7ac19c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  plVar4 = (long *)plVar4[10];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2);
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



/* Entry: 10a7ac270; end: 10a7ac32f;  */

void FUN_10a7ac270(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((long *)param_2[10] != (long *)0x0) {
    (**(code **)(*(long *)param_2[10] + 0x58))();
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



/* Entry: 10a7ac330; end: 10a7ac3ef;  */

void FUN_10a7ac330(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((long *)param_2[10] != (long *)0x0) {
    (**(code **)(*(long *)param_2[10] + 0x60))();
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



/* Entry: 10a7ac3f0; end: 10a7ac4c3;  */

void FUN_10a7ac3f0(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a7ac5c4(param_3,param_4);
  FUN_10a052e3c(param_6);
  if ((long *)param_3[10] == (long *)0x0) {
    param_2 = 1.0;
  }
  else {
    (**(code **)(*(long *)param_3[10] + 0x38))();
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10a7ac4c4; end: 10a7ac5c3;  */

void FUN_10a7ac4c4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  FUN_10a7abd28(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7ac5b0);
    (*pcVar3)();
  }
  if ((long *)param_2[10] != (long *)0x0) {
    fVar2 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar2 = 0.0;
    }
    (**(code **)(*(long *)param_2[10] + 0x30))(fVar2);
  }
  *param_1 = 0;
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



/* Entry: 10a7ac5c4; end: 10a7ac62b;  */

void FUN_10a7ac5c4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
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
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
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
  FUN_10a7ac5c4(plVar6,param_2);
  FUN_10a052e3c(param_4);
  plVar8 = *(long **)(plVar6[3] + 0x1c8);
  (**(code **)(*plVar8 + 0x48))();
  plVar9 = (long *)plVar8[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  plVar8 = (long *)*plVar8;
  (**(code **)(*plVar8 + 0x10))();
  plVar6 = plVar9 + 1;
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
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar8;
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
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
  lVar12 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
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
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a7ac62c; end: 10a7ac763;  */

void FUN_10a7ac62c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a7ac5c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = *(long **)(param_2[3] + 0x1c8);
  (**(code **)(*plVar7 + 0x48))();
  plVar8 = (long *)plVar7[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  plVar7 = (long *)*plVar7;
  (**(code **)(*plVar7 + 0x10))();
  plVar1 = plVar8 + 1;
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
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar7;
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



/* Entry: 10a7ac764; end: 10a7ac803;  */

long * FUN_10a7ac764(long *param_1)

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



/* Entry: 10a7ac804; end: 10a7acbf3;  */

undefined1  [16] FUN_10a7ac804(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10a7acb7c;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x18;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10a7ac98c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7acbe0);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10a7ac98c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10a7acb6c;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10a7acb6c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a7acb7c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10a7acbf4; end: 10a7acc27;  */

void FUN_10a7acbf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a7acc28();
  if (lVar1 != 0) {
    FUN_10a7acd00(param_1,lVar1);
  }
  return;
}



/* Entry: 10a7acc28; end: 10a7accff;  */

long * FUN_10a7acc28(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 10a7acd00; end: 10a7acd47;  */

undefined8 FUN_10a7acd00(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [3];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a7acd48(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7acd48);
  (*pcVar2)();
}



/* Entry: 10a7acd48; end: 10a7ace67;  */

void FUN_10a7acd48(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7acdfc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a7acdfc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a7acdfc:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a7ace68; end: 10a7acebf;  */

long FUN_10a7ace68(long param_1)

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



/* Entry: 10a7acec0; end: 10a7acf0f;  */

ulong FUN_10a7acec0(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (long)*param_1 + 0x9e3779b9;
  uVar2 = (long)param_1[1] + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar1 = (long)param_1[2] + 0x9e3779b9;
  return uVar2 * 0x40 + (uVar2 >> 2) +
         ((long)param_1[3] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9 ^ uVar2;
}



/* Entry: 10a7acf10; end: 10a7ad0df;  */

long * FUN_10a7acf10(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a7ad0e0; end: 10a7ad2fb;  */

long * FUN_10a7ad0e0(long *param_1)

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



/* Entry: 10a7ad2fc; end: 10a7ad3c3;  */

void FUN_10a7ad2fc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)*param_1;
  uVar4 = param_1[3] - (long)puVar3;
  uVar6 = param_1[2] - param_1[1];
  if (uVar6 < uVar4) {
    if (param_1[2] == param_1[1]) {
      puVar1 = (undefined8 *)0x0;
      param_2 = 0;
    }
    else {
      puVar1 = (undefined8 *)((long)uVar6 >> 3);
      func_0x00010a7ad260();
      puVar3 = (undefined8 *)*param_1;
      uVar4 = param_1[3] - (long)puVar3;
    }
    puVar2 = puVar1;
    if (param_2 < (ulong)((long)uVar4 >> 3)) {
      puVar5 = (undefined8 *)param_1[1];
      lVar7 = param_1[2] - (long)puVar5;
      puVar2 = puVar3;
      puVar3 = puVar1;
      puVar8 = puVar5;
      if (lVar7 != 0) {
        do {
          *puVar3 = *puVar5;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
        puVar5 = (undefined8 *)param_1[1];
        puVar2 = (undefined8 *)*param_1;
        puVar8 = (undefined8 *)param_1[2];
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)puVar1 + ((long)puVar8 - (long)puVar5);
      param_1[3] = (long)(puVar1 + param_2);
    }
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a7ad3c4; end: 10a7ad41b;  */

long FUN_10a7ad3c4(long param_1)

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



/* Entry: 10a7ad41c; end: 10a7ad477;  */

long * FUN_10a7ad41c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a7ad478(plVar1 + 2);
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



/* Entry: 10a7ad478; end: 10a7ad563;  */

void FUN_10a7ad478(undefined8 *param_1)

{
  func_0x00010a7ad50c(param_1 + 4);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a7ad564; end: 10a7ad5ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ac50) */
/* WARNING: Removing unreachable block (ram,0x00010a779ee4) */
/* WARNING: Removing unreachable block (ram,0x00010a77a480) */

void FUN_10a7ad564(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  long *unaff_x20;
  uint *****unaff_x21;
  uint ****ppppuVar25;
  long *plVar26;
  ulong *puVar27;
  long *plVar28;
  uint *****pppppuVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iStack_2e8;
  undefined8 ****ppppuStack_2e0;
  uint ****ppppuStack_2d8;
  byte bStack_2c9;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  uint ****ppppuStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  uint ****ppppuStack_280;
  uint ****ppppuStack_278;
  long lStack_270;
  long lStack_268;
  uint ****ppppuStack_260;
  uint ****ppppuStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  long lStack_230;
  uint ****ppppuStack_228;
  long *plStack_220;
  long *plStack_218;
  uint ****ppppuStack_210;
  long *plStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint **ppuStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  long *plStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  uint ****ppppuStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  uint **ppuStack_188;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  byte bStack_13c;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  uint ****ppppuStack_120;
  uint ****ppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  byte bStack_e0;
  byte bStack_dc;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  long lStack_b8;
  byte bStack_90;
  long lStack_88;
  
  plVar13 = *(long **)(param_2 + 0x10);
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)plVar13[0x15];
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_1b8 = plVar10;
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  puStack_1c0 = (uint *)plVar13[0x14];
  if (puStack_1c0 == (uint *)0x0) goto LAB_10a77af1c;
  if (plVar13[0x22] == 0) goto LAB_10a77af1c;
  if (plVar13[0x24] == 0) goto LAB_10a77af1c;
  if (*(long *)(plVar13[0x24] + 8) == -1) goto LAB_10a77af1c;
  uVar24 = *puStack_1c0;
  unaff_x20 = (long *)(ulong)uVar24;
  uVar22 = (ulong)(uVar24 * (int)plVar13[0x1b]);
  uVar16 = uVar22 + (long)unaff_x20;
  uVar15 = *(long *)(puStack_1c0 + 4) - *(long *)(puStack_1c0 + 2);
  unaff_x21 = (uint *****)0x0;
  if (uVar16 <= uVar15) {
    unaff_x21 = (uint *****)(*(long *)(puStack_1c0 + 2) + uVar22);
  }
  if (uVar24 == 0) goto LAB_10a77af1c;
  if (uVar15 < uVar16) goto LAB_10a77af1c;
  _bzero(unaff_x21,unaff_x20);
  uStack_1f4 = 0;
  fStack_1f0 = 0.0;
  fStack_1fc = 0.0;
  fStack_1f8 = 0.0;
  fStack_200 = 1.0;
  fStack_1ec = 1.0;
  ppuStack_1e8 = (uint **)0x0;
  uStack_1e0 = (uint ***)0x0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  fStack_1d8 = 1.0;
  uStack_1c4 = 0x3f800000;
  plVar10 = (long *)plVar13[0x28];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_198 = SUB87(plVar10,0);
    uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
    if (plVar10 != (long *)0x0) {
      ppppuStack_1a0 = (uint ****)plVar13[0x27];
      if ((uint *****)ppppuStack_1a0 != (uint *****)0x0) {
        ppppuVar25 = (uint ****)ppppuStack_1a0[0x28];
        if ((*(byte *)((long)ppppuVar25 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(ppppuVar25);
        }
        ppuStack_1e8 = (uint **)ppppuVar25[0x1b];
        fStack_1f8 = SUB84(ppppuVar25[0x19],0);
        uStack_1f4 = (undefined4)((ulong)ppppuVar25[0x19] >> 0x20);
        fStack_200 = SUB84(ppppuVar25[0x18],0);
        fStack_1fc = (float)((ulong)ppppuVar25[0x18] >> 0x20);
        fStack_1f0 = SUB84(ppppuVar25[0x1a],0);
        fStack_1ec = (float)((ulong)ppppuVar25[0x1a] >> 0x20);
        uStack_1e0 = ppppuVar25[0x1c];
        fStack_1d8 = SUB84(ppppuVar25[0x1d],0);
        uStack_1d4 = (undefined4)((ulong)ppppuVar25[0x1d] >> 0x20);
        uStack_1c8 = SUB84(ppppuVar25[0x1f],0);
        uStack_1c4 = (undefined4)((ulong)ppppuVar25[0x1f] >> 0x20);
        uStack_1d0 = SUB84(ppppuVar25[0x1e],0);
        uStack_1cc = (undefined4)((ulong)ppppuVar25[0x1e] >> 0x20);
      }
      plVar26 = plVar10 + 1;
      do {
        lVar21 = *plVar26;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  pppppuVar11 = (uint *****)plVar13[0x4a];
  if ((pppppuVar11 != (uint *****)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_118 = (uint ****)pppppuVar11,
     pppppuVar11 != (uint *****)0x0)) {
    ppppuStack_120 = (uint ****)plVar13[0x49];
    if (((uint *****)ppppuStack_120 != (uint *****)0x0) &&
       (ppppuVar25 = (uint ****)ppppuStack_120[0x60], ppppuVar25 != (uint ****)0x0)) {
      if ((*(byte *)((long)ppppuVar25 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(ppppuVar25);
      }
      func_0x000109519fd0(&ppppuStack_1a0,&fStack_200,ppppuVar25 + 0x18);
      fStack_1f8 = (float)uStack_198;
      uStack_1f4 = (undefined4)(CONCAT17(uStack_191,uStack_198) >> 0x20);
      fStack_200 = SUB84(ppppuStack_1a0,0);
      fStack_1fc = (float)((ulong)ppppuStack_1a0 >> 0x20);
      ppuStack_1e8 = ppuStack_188;
      fStack_1f0 = (float)uStack_190;
      fStack_1ec = (float)(CONCAT17(cStack_189,uStack_190) >> 0x20);
      uStack_1e0 = (uint ***)CONCAT44(fStack_17c,CONCAT22(uStack_180._2_2_,(ushort)uStack_180));
      fStack_1d8 = fStack_178;
      uStack_1d4 = uStack_174;
      uStack_1c8 = uStack_168;
      uStack_1c4 = uStack_164;
      uStack_1d0 = uStack_170;
      uStack_1cc = uStack_16c;
    }
    pppppuVar29 = pppppuVar11 + 1;
    do {
      ppppuVar25 = *pppppuVar29;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
      if (bVar8) {
        *pppppuVar29 = (uint ****)((long)ppppuVar25 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar25 == (uint ****)0x0) {
      (*(code *)(*pppppuVar11)[2])(pppppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    }
  }
  if ((bRam00000001137eb960 & 1) == 0) goto LAB_10a77af8c;
  do {
    if ((bRam00000001137eb968 & 1) == 0) {
      iVar14 = 0x137eb968;
      ___cxa_guard_acquire();
      if (iVar14 != 0) {
        func_0x000107c2b07c(0x1137eb9c8,&DAT_10f67536e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9c8,0x100000000);
        ___cxa_guard_release(0x1137eb968);
      }
    }
    if ((bRam00000001137eb970 & 1) == 0) {
      iVar14 = 0x137eb970;
      ___cxa_guard_acquire();
      if (iVar14 != 0) {
        func_0x000107c2b07c(0x1137eb9e8,&DAT_10f67537e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9e8,0x100000000);
        ___cxa_guard_release(0x1137eb970);
      }
    }
    if ((bRam00000001137eb978 & 1) == 0) {
      iVar14 = 0x137eb978;
      ___cxa_guard_acquire();
      if (iVar14 != 0) {
        func_0x000107c2b07c(0x1137eba08,&DAT_10f675393);
        ___cxa_atexit(FUN_10a32edf4,0x1137eba08,0x100000000);
        ___cxa_guard_release(0x1137eb978);
      }
    }
    plVar10 = (long *)plVar13[0x4a];
    if (plVar10 == (long *)0x0) {
LAB_10a7799c4:
      iStack_2e8 = 0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_198 = SUB87(plVar10,0);
      uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
      if (plVar10 == (long *)0x0) goto LAB_10a7799c4;
      pppppuVar11 = (uint *****)plVar13[0x49];
      ppppuStack_1a0 = (uint ****)pppppuVar11;
      if (pppppuVar11 == (uint *****)0x0) {
        iStack_2e8 = 0;
      }
      else {
        func_0x00010a777f8c();
        iStack_2e8 = (int)pppppuVar11;
      }
      plVar26 = plVar10 + 1;
      do {
        lVar21 = *plVar26;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar21 = plVar13[0x29];
    lVar19 = plVar13[0x2a];
    if (lVar21 != lVar19) {
      plVar10 = (long *)(*(long *)(plVar13[0x22] + 0x1b8) + 8);
      do {
        uVar16 = *(ulong *)(lVar21 + 0x18);
        uVar24 = (uint)unaff_x20;
        if (uVar16 == uRam00000001137eb9c0) {
          fStack_178 = fStack_1d8;
          uStack_174 = uStack_1d4;
          uStack_168 = uStack_1c8;
          uStack_164 = uStack_1c4;
          uStack_170 = uStack_1d0;
          uStack_16c = uStack_1cc;
          ppppuStack_1a0 = (uint ****)CONCAT44(fStack_1fc,fStack_200);
          uStack_198 = (undefined7)CONCAT44(uStack_1f4,fStack_1f8);
          uStack_191 = (undefined1)((uint)uStack_1f4 >> 0x18);
          ppuStack_188 = ppuStack_1e8;
          uStack_190 = (undefined7)CONCAT44(fStack_1ec,fStack_1f0);
          cStack_189 = (char)((uint)fStack_1ec >> 0x18);
          uVar16 = 8;
          uStack_160 = CONCAT31(uStack_160._1_3_,8);
          uVar15 = (ulong)*(uint *)(lVar21 + 0x24);
          fStack_17c = uStack_1e0._4_4_;
          uStack_180 = (float)uStack_1e0;
          if (*(uint *)(lVar21 + 0x24) <= uVar24) {
            uVar16 = (ulong)*(uint *)(lVar21 + 0x28);
            if ((long)unaff_x20 - uVar15 < uVar16) {
              uVar16 = 8;
            }
            else {
LAB_10a779bb8:
              FUN_10a7a33dc((long)unaff_x21 + uVar15,uVar16,(long)*(short *)(lVar21 + 0x20),
                            &ppppuStack_1a0);
              uVar16 = (ulong)(byte)uStack_160;
              if (0x10 < (byte)uStack_160) goto LAB_10a77b3e0;
            }
          }
LAB_10a779bd4:
          pcVar17 = (code *)(&PTR_FUN_110ba1f88)[uVar16];
LAB_10a779bd8:
          (*pcVar17)(&ppppuStack_1a0);
        }
        else {
          if (uVar16 == uRam00000001137eb9e0) {
            fVar31 = -(uStack_1e0._4_4_ * ppuStack_1e8._0_4_) + fStack_1d8 * fStack_1ec;
            fVar33 = -(fStack_1ec * fStack_1f8) + ppuStack_1e8._0_4_ * fStack_1fc;
            fVar32 = 1.0 / (-(fStack_1f0 *
                             (-(uStack_1e0._4_4_ * fStack_1f8) + fStack_1d8 * fStack_1fc)) +
                            fVar31 * fStack_200 + fVar33 * (float)uStack_1e0);
            uStack_180 = (-(fStack_1f0 * fStack_1fc) + fStack_1ec * fStack_200) * fVar32;
            ppppuStack_1a0 =
                 (uint ****)
                 CONCAT44((-(fStack_1f0 * fStack_1d8) - -((float)uStack_1e0 * ppuStack_1e8._0_4_)) *
                          fVar32,fVar31 * fVar32);
            fVar31 = (-(fStack_1fc * fStack_1d8) - -(uStack_1e0._4_4_ * fStack_1f8)) * fVar32;
            fVar30 = (-(fStack_200 * uStack_1e0._4_4_) - -((float)uStack_1e0 * fStack_1fc)) * fVar32
            ;
            ppuStack_188 = (uint **)CONCAT44((-(fStack_200 * ppuStack_1e8._0_4_) -
                                             -(fStack_1f0 * fStack_1f8)) * fVar32,fVar33 * fVar32);
            uStack_198 = (undefined7)
                         CONCAT44(fVar31,(-((float)uStack_1e0 * fStack_1ec) +
                                         uStack_1e0._4_4_ * fStack_1f0) * fVar32);
            uStack_191 = (undefined1)((uint)fVar31 >> 0x18);
            uStack_190 = (undefined7)
                         CONCAT44(fVar30,(-((float)uStack_1e0 * fStack_1f8) +
                                         fStack_1d8 * fStack_200) * fVar32);
            cStack_189 = (char)((uint)fVar30 >> 0x18);
            uVar16 = 7;
            uStack_160 = CONCAT31(uStack_160._1_3_,7);
            uVar15 = (ulong)*(uint *)(lVar21 + 0x24);
            if (*(uint *)(lVar21 + 0x24) <= uVar24) {
              uVar16 = (ulong)*(uint *)(lVar21 + 0x28);
              if (uVar16 <= (long)unaff_x20 - uVar15) goto LAB_10a779bb8;
              uVar16 = 7;
            }
            goto LAB_10a779bd4;
          }
          if (uVar16 == uRam00000001137eba00) {
            iVar14 = *(int *)((long)plVar13 + 0xdc);
LAB_10a779b88:
            ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,iVar14);
            uVar16 = 9;
            uStack_160 = CONCAT31(uStack_160._1_3_,9);
            uVar15 = (ulong)*(uint *)(lVar21 + 0x24);
            if (*(uint *)(lVar21 + 0x24) <= uVar24) {
              uVar16 = (ulong)*(uint *)(lVar21 + 0x28);
              if (uVar16 <= (long)unaff_x20 - uVar15) goto LAB_10a779bb8;
              uVar16 = 9;
            }
            goto LAB_10a779bd4;
          }
          iVar14 = iStack_2e8;
          if (uVar16 == uRam00000001137eba20) goto LAB_10a779b88;
          ppppuStack_1a0 = (uint ****)((ulong)ppppuStack_1a0 & 0xffffffffffffff00);
          uStack_15c = uStack_15c & 0xffffff00;
          plVar23 = (long *)*plVar10;
          plVar26 = plVar10;
          if (plVar23 != (long *)0x0) {
            do {
              lVar18 = 8;
              if (uVar16 <= (ulong)plVar23[7]) {
                lVar18 = 0;
                plVar26 = plVar23;
              }
              plVar23 = *(long **)((long)plVar23 + lVar18);
            } while (plVar23 != (long *)0x0);
            if (((plVar26 != plVar10) && ((ulong)plVar26[7] <= uVar16)) &&
               (lVar18 = plVar26[8], lVar18 != 0)) {
              uVar4 = *(ushort *)(lVar18 + 0x20);
              uVar3 = *(ushort *)(lVar21 + 0x20);
              if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                 (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7) &&
                  (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                func_0x00010a77bef4(&ppppuStack_120,lVar18 + 0x24,(int)(short)uVar4,
                                    (int)(short)uVar3);
                FUN_10a77c0b8(&ppppuStack_1a0,&ppppuStack_120);
                if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
              }
            }
          }
          FUN_10a77c0e8(&ppppuStack_120,plVar13,lVar21);
          if (bStack_dc == 1) {
            func_0x00010a7a3610(&ppppuStack_1a0,&ppppuStack_120);
            if ((bStack_dc & 1) != 0) {
              if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
              (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
            }
          }
          if ((char)uStack_15c == '\x01') {
            uVar2 = *(uint *)(lVar21 + 0x24);
            if ((uVar2 <= uVar24) &&
               ((ulong)*(uint *)(lVar21 + 0x28) <= (long)unaff_x20 - (ulong)uVar2)) {
              FUN_10a7a33dc((long)unaff_x21 + (ulong)uVar2,(ulong)*(uint *)(lVar21 + 0x28),
                            (long)*(short *)(lVar21 + 0x20),&ppppuStack_1a0);
              if ((char)uStack_15c != '\x01') goto LAB_10a779be0;
            }
            if ((ulong)(byte)uStack_160 < 0x11) {
              pcVar17 = (code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160];
              goto LAB_10a779bd8;
            }
            goto LAB_10a77b3e0;
          }
        }
LAB_10a779be0:
        lVar21 = lVar21 + 0x30;
      } while (lVar21 != lVar19);
    }
    ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,(int)plVar13[0x1b]);
    func_0x000107426fd8(puStack_1c0 + 0x16,&ppppuStack_1a0,&ppppuStack_1a0);
    plVar10 = (long *)plVar13[0x17];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_290 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)plVar13[0x16];
        ppppuStack_298 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)plVar13[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_2a8 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar26 = (long *)plVar13[0x49];
              plStack_2b0 = plVar26;
              if (plVar26 != (long *)0x0) {
                uVar24 = *(uint *)unaff_x21;
                uVar15 = (ulong)(uVar24 * *(int *)((long)plVar13 + 0xdc));
                uVar16 = uVar15 + (long)(ulong)uVar24;
                pppppuVar11 = unaff_x21 + 1;
                uVar22 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar16 <= uVar22) {
                  unaff_x21 = (uint *****)(ulong)uVar24;
                }
                ppppuStack_2e0 = (undefined8 *****)0x0;
                if (uVar16 <= uVar22) {
                  ppppuStack_2e0 = (undefined8 *****)((long)*pppppuVar11 + uVar15);
                }
                ppppuStack_2d8 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(ppppuStack_2e0,unaff_x21);
                  if ((*(char *)((long)plVar13 + 0xe4) == '\x01') && (1 < *(uint *)(plVar13 + 0x1c))
                     ) {
                    ppppuStack_118 = (uint ****)0x0;
                    ppppuStack_120 = (uint ****)0x0;
                    uStack_108 = 0;
                    lStack_110 = 0;
                    uStack_100 = 0x3f800000;
                    pppppuVar29 = (uint *****)plVar13[0x3e];
                    for (pppppuVar11 = (uint *****)plVar13[0x3d]; pppppuVar11 != pppppuVar29;
                        pppppuVar11 = pppppuVar11 + 0xd) {
                      ppppuStack_258 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                      ppppuStack_260 = (uint ****)pppppuVar11;
                      if ((long)ppppuStack_258 < 0) {
                        ppppuStack_258 = pppppuVar11[1];
                        ppppuStack_260 = *pppppuVar11;
                      }
                      if (*(short *)(pppppuVar11 + 4) == 6) {
                        pppppuVar12 = &ppppuStack_260;
                        FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                        if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t'))
                        {
                          ppppuStack_278 = ppppuStack_258;
                          if ((uint *****)((long)ppppuStack_258 + -10) <= ppppuStack_258) {
                            ppppuStack_278 = (uint ****)((long)ppppuStack_258 + -10);
                          }
                          ppppuStack_280 = ppppuStack_260;
                          if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                            func_0x0001098998d4(&ppppuStack_d0,&ppppuStack_280);
                            ppppuVar25 = ppppuStack_c0;
                            uStack_198 = SUB87(ppppuStack_c8,0);
                            uStack_191 = (undefined1)((ulong)ppppuStack_c8 >> 0x38);
                            ppppuStack_1a0 = ppppuStack_d0;
                            ppppuStack_c8 = (uint ****)0x0;
                            ppppuStack_c0 = (uint ****)0x0;
                            ppppuStack_d0 = (uint ****)0x0;
                            uStack_190 = SUB87(ppppuVar25,0);
                            cStack_189 = (char)((ulong)ppppuVar25 >> 0x38);
                            ppuStack_188 = (uint **)0x0;
                            func_0x000107c2b080(&ppppuStack_1a0);
                            FUN_10a7ad610(&ppppuStack_120,ppuStack_188,&ppppuStack_1a0,
                                          (uint *)((long)pppppuVar11 + 0x24));
                            if (cStack_189 < '\0') {
                              __ZdlPv(ppppuStack_1a0);
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar26 + 0x1f0))(&ppppuStack_260,plVar26);
                    ppppuStack_d0 = (uint ****)plVar13[0x22];
                    ppppuStack_c8 = (uint ****)&ppppuStack_120;
                    lStack_b8 = (long)ppppuStack_258 - (long)ppppuStack_260 >> 5;
                    ppppuStack_c0 = ppppuStack_260;
                    ppppuStack_280 = (uint ****)0x0;
                    ppppuStack_278 = (uint ****)0x0;
                    lStack_270 = 0;
                    FUN_10a7771c8(&uStack_138,plVar13 + 0x31,&ppppuStack_d0,&ppppuStack_280);
                    lVar19 = CONCAT17(uStack_129,uStack_130);
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (lVar21 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                        ppppuStack_2e0 = pppppuVar6, lVar21 != lVar19; lVar21 = lVar21 + 0x68) {
                      lVar18 = plVar13[0x31];
                      if (lVar18 != plVar13[0x32]) {
                        do {
                          if (*(long *)(lVar18 + 0x18) == *(long *)(lVar21 + 0x18)) {
                            uVar4 = *(ushort *)(lVar21 + 0x20);
                            uVar3 = *(ushort *)(lVar18 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar24 = *(uint *)(lVar18 + 0x28),
                                 (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,lVar21 + 0x24,(int)(short)uVar4,
                                                    (int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar24,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar18 = lVar18 + 0x30;
                        } while (lVar18 != plVar13[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&uStack_138);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_280;
                    FUN_10a044868(&ppppuStack_1a0);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_260;
                    FUN_10a044868(&ppppuStack_1a0);
                    FUN_10a7ad5ac(&ppppuStack_120);
                  }
                  else {
                    lVar21 = plVar13[0x22];
                    (**(code **)(*plVar26 + 0x1e8))(&ppppuStack_1a0,plVar26);
                    (**(code **)(*plVar26 + 0x1f0))(&ppppuStack_d0,plVar26);
                    FUN_10a77c4d0(&ppppuStack_120,lVar21,&ppppuStack_1a0,&ppppuStack_d0,
                                  iStack_2e8 != 1);
                    ppppuStack_260 = (uint ****)&ppppuStack_d0;
                    FUN_10a044868(&ppppuStack_260);
                    ppppuStack_d0 = (uint ****)&ppppuStack_1a0;
                    FUN_10a66db40(&ppppuStack_d0);
                    ppppuVar25 = ppppuStack_118;
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (pppppuVar11 = (uint *****)ppppuStack_120; ppppuStack_2e0 = pppppuVar6,
                        pppppuVar11 != (uint *****)ppppuVar25; pppppuVar11 = pppppuVar11 + 0xd) {
                      lVar21 = plVar13[0x31];
                      if (lVar21 != plVar13[0x32]) {
                        do {
                          if (*(uint *****)(lVar21 + 0x18) == pppppuVar11[3]) {
                            uVar4 = *(ushort *)(pppppuVar11 + 4);
                            uVar3 = *(ushort *)(lVar21 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar29 = (uint *****)(ulong)*(uint *)(lVar21 + 0x24);
                              if ((pppppuVar29 <= unaff_x21) &&
                                 (uVar24 = *(uint *)(lVar21 + 0x28),
                                 (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar29))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,
                                                    (uint *)((long)pppppuVar11 + 0x24),
                                                    (int)(short)uVar4,(int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar29,(ulong)uVar24,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar21 = lVar21 + 0x30;
                        } while (lVar21 != plVar13[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&ppppuStack_120);
                  }
                  lVar19 = plVar13[0x3e];
                  pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  for (lVar21 = plVar13[0x3d]; ppppuStack_2e0 = pppppuVar6, lVar21 != lVar19;
                      lVar21 = lVar21 + 0x68) {
                    lVar18 = plVar13[0x31];
                    if (lVar18 != plVar13[0x32]) {
                      do {
                        if (*(long *)(lVar18 + 0x18) == *(long *)(lVar21 + 0x18)) {
                          uVar4 = *(ushort *)(lVar21 + 0x20);
                          uVar3 = *(ushort *)(lVar18 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar24 = *(uint *)(lVar18 + 0x28),
                               (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar21 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar24,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar18 = lVar18 + 0x30;
                      } while (lVar18 != plVar13[0x32]);
                    }
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(plVar13 + 0x4b);
                  plVar26 = plStack_2b0 + 0x57;
                  FUN_10a5e7d1c(plVar26,&ppppuStack_1a0);
                  if (((plVar26 != (long *)0x0) && ((char)plVar26[0xe] == '\x01')) &&
                     (plVar26 = (long *)plVar26[0xb], plVar26 != (long *)0x0)) {
                    do {
                      plVar23 = (long *)plVar26[6];
                      if ((plVar23 != (long *)plVar26[7]) &&
                         (puVar27 = (ulong *)*plVar23, puVar27 != (ulong *)0x0)) {
                        ppppuStack_280 = (uint ****)0x0;
                        ppppuStack_278 = (uint ****)0x0;
                        pppppuVar11 = (uint *****)puVar27[1];
                        if (pppppuVar11 != (uint *****)0x0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (pppppuVar11 != (uint *****)0x0) {
                            ppppuStack_280 = (uint ****)*puVar27;
                          }
                          ppppuStack_278 = (uint ****)pppppuVar11;
                          if ((uint *****)ppppuStack_280 != (uint *****)0x0) {
                            pppppuVar11 = (uint *****)ppppuStack_280;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)pppppuVar11) {
                              iVar14 = (int)((ulong)pppppuVar11 >> 0x20);
                              bVar9 = SBORROW4(iVar14,1);
                              bVar8 = iVar14 + -1 < 0;
                            }
                            ppppuStack_210 = (uint ****)pppppuVar11;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar26 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar26[2],plVar26[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar26[3];
                                ppppuStack_d0 = (uint ****)plVar26[2];
                                ppppuStack_c0 = (uint ****)plVar26[4];
                              }
                              func_0x0001098998d4(&ppppuStack_260,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_258;
                              pppppuVar29 = (uint *****)ppppuStack_260;
                              if (-1 < (long)uStack_250) {
                                pppppuVar11 = (uint *****)(uStack_250 >> 0x38);
                                pppppuVar29 = &ppppuStack_260;
                              }
                              pppppuVar12 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar12,pppppuVar29,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar12;
                              uStack_138._0_7_ = SUB87(pppppuVar12[1],0);
                              uStack_138._7_1_ =
                                   (undefined1)*(undefined8 *)((long)pppppuVar12 + 0xf);
                              uStack_130 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar12 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar12 + 0x17);
                              pppppuVar12[1] = (uint ****)0x0;
                              pppppuVar12[2] = (uint ****)0x0;
                              *pppppuVar12 = (uint ****)0x0;
                              uStack_190 = uStack_130;
                              uStack_198 = (undefined7)uStack_138;
                              uStack_191 = uStack_138._7_1_;
                              uStack_138._0_7_ = 0;
                              uStack_138._7_1_ = 0;
                              uStack_130 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,plVar13[0x22],plVar26 + 2,
                                            *(undefined8 *)(*plVar23 + 0x18),&ppppuStack_210);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              FUN_10a77c39c(plVar13[0x31],plVar13[0x32],&ppppuStack_2e0,
                                            &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((long)uStack_250 < 0) {
                                __ZdlPv(ppppuStack_260);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&ppppuStack_280);
                      }
                      plVar26 = (long *)*plVar26;
                    } while (plVar26 != (long *)0x0);
                  }
                  ppppuVar7 = ppppuStack_2e0;
                  puVar27 = (ulong *)plVar13[0x31];
                  puVar1 = (ulong *)plVar13[0x32];
                  if (puVar27 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,plVar13,puVar27);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar27 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar27,puVar27[1]);
                          ppuStack_188 = (uint **)puVar27[3];
                          uStack_180._0_2_ = (ushort)puVar27[4];
                          if ((bStack_dc & 1) == 0) goto LAB_10a77b3e0;
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar27;
                          ppuStack_188 = (uint **)puVar27[3];
                          uStack_198 = (undefined7)puVar27[1];
                          uStack_191 = (undefined1)(puVar27[1] >> 0x38);
                          uStack_190 = (undefined7)puVar27[2];
                          cStack_189 = (char)(puVar27[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar27[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar16 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar16 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar16;
                        for (lVar21 = plVar13[0x31]; lVar21 != plVar13[0x32]; lVar21 = lVar21 + 0x30
                            ) {
                          if (*(uint ****)(lVar21 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar21 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar21 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar24 = *(uint *)(lVar21 + 0x28),
                                 (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc((long)ppppuVar7 + (long)pppppuVar11,(ulong)uVar24,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar16 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar16) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar16])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar27 = puVar27 + 6;
                    } while (puVar27 != puVar1);
                  }
                  ppppuStack_1a0 =
                       (uint ****)
                       CONCAT44(ppppuStack_1a0._4_4_,*(undefined4 *)((long)plVar13 + 0xdc));
                  func_0x000107426fd8(ppppuStack_298 + 0xb,&ppppuStack_1a0,&ppppuStack_1a0);
                }
              }
              plVar26 = plVar10 + 1;
              do {
                lVar21 = *plVar26;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar8) {
                  *plVar26 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
          }
          unaff_x20 = plStack_290;
          if (plStack_290 == (long *)0x0) goto LAB_10a77a708;
        }
        unaff_x20 = plStack_290;
        plVar10 = plStack_290 + 1;
        do {
          lVar21 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77a708:
    plVar10 = (long *)plVar13[0x19];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_208 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)plVar13[0x18];
        ppppuStack_210 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)plVar13[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_218 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar26 = (long *)plVar13[0x49];
              plStack_220 = plVar26;
              if (plVar26 != (long *)0x0) {
                uVar24 = *(uint *)unaff_x21;
                uVar15 = (ulong)(uVar24 * (int)plVar13[0x1b]);
                uVar16 = uVar15 + (long)(ulong)uVar24;
                pppppuVar11 = unaff_x21 + 1;
                uVar22 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar16 <= uVar22) {
                  unaff_x21 = (uint *****)(ulong)uVar24;
                }
                lStack_230 = 0;
                if (uVar16 <= uVar22) {
                  lStack_230 = (long)*pppppuVar11 + uVar15;
                }
                ppppuStack_228 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(lStack_230,unaff_x21);
                  ppppuStack_258 = (uint ****)0x0;
                  ppppuStack_260 = (uint ****)0x0;
                  uStack_248 = 0;
                  uStack_250 = 0;
                  uStack_240 = 0x3f800000;
                  pppppuVar29 = (uint *****)plVar13[0x3e];
                  for (pppppuVar11 = (uint *****)plVar13[0x3d]; pppppuVar11 != pppppuVar29;
                      pppppuVar11 = pppppuVar11 + 0xd) {
                    ppppuStack_c8 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                    ppppuStack_d0 = (uint ****)pppppuVar11;
                    if ((long)ppppuStack_c8 < 0) {
                      ppppuStack_c8 = pppppuVar11[1];
                      ppppuStack_d0 = *pppppuVar11;
                    }
                    if (*(short *)(pppppuVar11 + 4) == 6) {
                      pppppuVar12 = &ppppuStack_d0;
                      FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                      if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t')) {
                        ppppuStack_278 = ppppuStack_c8;
                        if ((uint *****)((long)ppppuStack_c8 + -10) <= ppppuStack_c8) {
                          ppppuStack_278 = (uint ****)((long)ppppuStack_c8 + -10);
                        }
                        ppppuStack_280 = ppppuStack_d0;
                        if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                          func_0x0001098998d4(&ppppuStack_120,&ppppuStack_280);
                          lVar21 = lStack_110;
                          uStack_198 = SUB87(ppppuStack_118,0);
                          uStack_191 = (undefined1)((ulong)ppppuStack_118 >> 0x38);
                          ppppuStack_1a0 = ppppuStack_120;
                          ppppuStack_118 = (uint ****)0x0;
                          lStack_110 = 0;
                          ppppuStack_120 = (uint ****)0x0;
                          uStack_190 = (undefined7)lVar21;
                          cStack_189 = (char)((ulong)lVar21 >> 0x38);
                          ppuStack_188 = (uint **)0x0;
                          func_0x000107c2b080(&ppppuStack_1a0);
                          FUN_10a7ad610(&ppppuStack_260,ppuStack_188,&ppppuStack_1a0,
                                        (uint *)((long)pppppuVar11 + 0x24));
                          if (cStack_189 < '\0') {
                            __ZdlPv(ppppuStack_1a0);
                          }
                          if (lStack_110 < 0) {
                            __ZdlPv(ppppuStack_120);
                          }
                        }
                      }
                    }
                  }
                  (**(code **)(*plVar26 + 0x1f0))(&uStack_138,plVar26);
                  ppppuStack_280 = (uint ****)plVar13[0x22];
                  ppppuStack_278 = (uint ****)&ppppuStack_260;
                  lStack_270 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                  lStack_268 = CONCAT17(uStack_129,uStack_130) - lStack_270 >> 5;
                  ppppuStack_298 = (uint ****)0x0;
                  plStack_290 = (long *)0x0;
                  uStack_288 = 0;
                  FUN_10a7771c8(&plStack_2b0,plVar13 + 0x35,&ppppuStack_280,&ppppuStack_298);
                  plVar23 = plStack_2a8;
                  lVar21 = lStack_230;
                  for (plVar26 = plStack_2b0; plVar26 != plVar23; plVar26 = plVar26 + 0xd) {
                    lVar19 = plVar13[0x35];
                    lStack_230 = lVar21;
                    if (lVar19 != plVar13[0x36]) {
                      do {
                        if (*(long *)(lVar19 + 0x18) == plVar26[3]) {
                          uVar4 = *(ushort *)(plVar26 + 4);
                          uVar3 = *(ushort *)(lVar19 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar19 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar24 = *(uint *)(lVar19 + 0x28),
                               (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,(long)plVar26 + 0x24,
                                                  (int)(short)uVar4,(int)(short)uVar3);
                              FUN_10a7a33dc(lVar21 + (long)pppppuVar11,(ulong)uVar24,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar19 = lVar19 + 0x30;
                      } while (lVar19 != plVar13[0x36]);
                    }
                    lVar21 = lStack_230;
                  }
                  lVar18 = plVar13[0x3e];
                  for (lVar19 = plVar13[0x3d]; lStack_230 = lVar21, lVar19 != lVar18;
                      lVar19 = lVar19 + 0x68) {
                    lVar20 = plVar13[0x35];
                    if (lVar20 != plVar13[0x36]) {
                      do {
                        if (*(long *)(lVar20 + 0x18) == *(long *)(lVar19 + 0x18)) {
                          uVar4 = *(ushort *)(lVar19 + 0x20);
                          uVar3 = *(ushort *)(lVar20 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar20 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar24 = *(uint *)(lVar20 + 0x28),
                               (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar19 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc(lVar21 + (long)pppppuVar11,(ulong)uVar24,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar20 = lVar20 + 0x30;
                      } while (lVar20 != plVar13[0x36]);
                    }
                    lVar21 = lStack_230;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(plVar13 + 0x4b);
                  plVar26 = plStack_220 + 0x57;
                  FUN_10a5e7d1c(plVar26,&ppppuStack_1a0);
                  if (((plVar26 != (long *)0x0) && ((char)plVar26[0xe] == '\x01')) &&
                     (plVar26 = (long *)plVar26[0xb], plVar26 != (long *)0x0)) {
                    do {
                      plVar23 = (long *)plVar26[6];
                      if ((plVar23 != (long *)plVar26[7]) &&
                         (plVar28 = (long *)*plVar23, plVar28 != (long *)0x0)) {
                        lStack_2c0 = 0;
                        lStack_2b8 = 0;
                        lVar21 = plVar28[1];
                        if (lVar21 != 0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (lVar21 != 0) {
                            lStack_2c0 = *plVar28;
                          }
                          lStack_2b8 = lVar21;
                          if (lStack_2c0 != 0) {
                            lVar21 = lStack_2c0;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)lVar21) {
                              iVar14 = (int)((ulong)lVar21 >> 0x20);
                              bVar9 = SBORROW4(iVar14,1);
                              bVar8 = iVar14 + -1 < 0;
                            }
                            lStack_2c8 = lVar21;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar26 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar26[2],plVar26[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar26[3];
                                ppppuStack_d0 = (uint ****)plVar26[2];
                                ppppuStack_c0 = (uint ****)plVar26[4];
                              }
                              func_0x0001098998d4(&ppppuStack_2e0,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_2d8;
                              pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                              if (-1 < (char)bStack_2c9) {
                                pppppuVar11 = (uint *****)(ulong)bStack_2c9;
                                pppppuVar6 = &ppppuStack_2e0;
                              }
                              pppppuVar29 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar29,pppppuVar6,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar29;
                              uStack_1b0 = SUB87(pppppuVar29[1],0);
                              uStack_1a9 = (undefined1)*(undefined8 *)((long)pppppuVar29 + 0xf);
                              uStack_1a8 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar29 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar29 + 0x17);
                              pppppuVar29[1] = (uint ****)0x0;
                              pppppuVar29[2] = (uint ****)0x0;
                              *pppppuVar29 = (uint ****)0x0;
                              uStack_190 = uStack_1a8;
                              uStack_198 = uStack_1b0;
                              uStack_191 = uStack_1a9;
                              uStack_1b0 = 0;
                              uStack_1a9 = 0;
                              uStack_1a8 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,plVar13[0x22],plVar26 + 2,
                                            *(undefined8 *)(*plVar23 + 0x18),&lStack_2c8);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              func_0x00010a77d228(plVar13[0x35],plVar13[0x36],&lStack_230,
                                                  &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((char)bStack_2c9 < '\0') {
                                __ZdlPv(ppppuStack_2e0);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&lStack_2c0);
                      }
                      plVar26 = (long *)*plVar26;
                    } while (plVar26 != (long *)0x0);
                  }
                  lVar21 = lStack_230;
                  puVar27 = (ulong *)plVar13[0x35];
                  puVar1 = (ulong *)plVar13[0x36];
                  if (puVar27 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,plVar13,puVar27);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar27 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar27,puVar27[1]);
                          ppuStack_188 = (uint **)puVar27[3];
                          uStack_180._0_2_ = (ushort)puVar27[4];
                          if ((bStack_dc & 1) == 0) {
LAB_10a77b3e0:
                    /* WARNING: Does not return */
                            pcVar17 = (code *)SoftwareBreakpoint(1,0x10a77b3e4);
                            (*pcVar17)();
                          }
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar27;
                          ppuStack_188 = (uint **)puVar27[3];
                          uStack_198 = (undefined7)puVar27[1];
                          uStack_191 = (undefined1)(puVar27[1] >> 0x38);
                          uStack_190 = (undefined7)puVar27[2];
                          cStack_189 = (char)(puVar27[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar27[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar16 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar16 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar16;
                        for (lVar19 = plVar13[0x35]; lVar19 != plVar13[0x36]; lVar19 = lVar19 + 0x30
                            ) {
                          if (*(uint ****)(lVar19 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar19 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar19 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar24 = *(uint *)(lVar19 + 0x28),
                                 (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc(lVar21 + (long)pppppuVar11,(ulong)uVar24,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar16 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar16) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar16])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar27 = puVar27 + 6;
                    } while (puVar27 != puVar1);
                  }
                  ppppuStack_120 = (uint ****)CONCAT44(ppppuStack_120._4_4_,(int)plVar13[0x1b]);
                  func_0x000107426fd8(ppppuStack_210 + 0xb,&ppppuStack_120,&ppppuStack_120);
                  FUN_10a7a31fc(&plStack_2b0);
                  ppppuStack_1a0 = (uint ****)&ppppuStack_298;
                  FUN_10a044868(&ppppuStack_1a0);
                  ppppuStack_1a0 = (uint ****)&uStack_138;
                  FUN_10a044868(&ppppuStack_1a0);
                  FUN_10a7ad5ac(&ppppuStack_260);
                }
              }
              plVar26 = plVar10 + 1;
              do {
                lVar21 = *plVar26;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar8) {
                  *plVar26 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                plVar13 = plVar10;
              }
            }
          }
          unaff_x20 = plStack_208;
          if (plStack_208 == (long *)0x0) goto LAB_10a77af14;
        }
        unaff_x20 = plStack_208;
        plVar10 = plStack_208 + 1;
        do {
          lVar21 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77af14:
    if (plStack_1b8 != (long *)0x0) {
LAB_10a77af1c:
      plVar26 = plStack_1b8;
      plVar10 = plStack_1b8 + 1;
      do {
        lVar21 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
LAB_10a77af4c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
LAB_10a77af8c:
    iVar14 = 0x137eb960;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      func_0x000107c2b07c(0x1137eb9a8,&DAT_10f67535f);
      ___cxa_atexit(FUN_10a32edf4,0x1137eb9a8,0x100000000);
      ___cxa_guard_release(0x1137eb960);
    }
  } while( true );
}



/* Entry: 10a7ad5ac; end: 10a7ad60f;  */

long * FUN_10a7ad5ac(long *param_1)

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



/* Entry: 10a7ad610; end: 10a7ad823;  */

void FUN_10a7ad610(long *param_1,ulong param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x25;
  long lVar9;
  long lVar10;
  
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x25 = uVar3 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar8 <= param_2) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = param_2 / uVar8;
        }
        unaff_x25 = param_2 - uVar7 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10a7ad6c4;
          uVar7 = plVar5[1];
          if (uVar7 != param_2) break;
          if (plVar5[5] == param_2) {
            return;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar8 <= uVar7) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar7 / uVar8;
          }
          uVar7 = uVar7 - uVar2 * uVar8;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10a7ad6c4:
  plVar5 = (long *)0x38;
  __Znwm();
  lVar10 = param_3[1];
  lVar9 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar6 = param_3[2];
  lVar1 = param_3[3];
  param_3[2] = 0;
  *plVar5 = 0;
  plVar5[1] = param_2;
  plVar5[3] = lVar10;
  plVar5[2] = lVar9;
  plVar5[4] = lVar6;
  plVar5[5] = lVar1;
  *(undefined4 *)(plVar5 + 6) = *param_4;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    FUN_10a7ad824(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar8 <= param_2) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = param_2 / uVar8;
        }
        unaff_x25 = param_2 - uVar3 * uVar8;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10a7ad7e8;
    uVar3 = *(ulong *)(*plVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar3 = uVar3 & uVar8 - 1;
    }
    else if (uVar8 <= uVar3) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar3 / uVar8;
      }
      uVar3 = uVar3 - uVar7 * uVar8;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a7ad7e8:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a7ad824; end: 10a7ad9f3;  */

void FUN_10a7ad824(long *param_1,long *param_2)

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



/* Entry: 10a7ad9f4; end: 10a7ada6f;  */

void FUN_10a7ad9f4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a7ada70; end: 10a7adb7b;  */

void FUN_10a7ada70(long *param_1,ulong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10a7adad8:
      puVar1 = (undefined8 *)0x48;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar1 + 4,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        puVar1[5] = param_3[1];
        puVar1[4] = uVar5;
        puVar1[6] = param_3[2];
      }
      puVar1[7] = param_3[3];
      *(undefined4 *)(puVar1 + 8) = *param_4;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar1 = (undefined8 *)*plVar4;
      }
      func_0x000107c2b058(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10a7adad8;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10a7adb7c; end: 10a7adbc3;  */

void FUN_10a7adb7c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a7adb7c(*param_1);
    FUN_10a7adb7c(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a7adbc4; end: 10a7adccf;  */

void FUN_10a7adbc4(long *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10a7adc2c:
      puVar1 = (undefined8 *)0x50;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar1 + 4,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        puVar1[5] = param_3[1];
        puVar1[4] = uVar5;
        puVar1[6] = param_3[2];
      }
      puVar1[7] = param_3[3];
      uVar5 = *param_4;
      puVar1[9] = param_4[1];
      puVar1[8] = uVar5;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar1 = (undefined8 *)*plVar4;
      }
      func_0x000107c2b058(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10a7adc2c;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10a7adcd0; end: 10a7add17;  */

void FUN_10a7adcd0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a7adcd0(*param_1);
    FUN_10a7adcd0(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a7add18; end: 10a7ade1f;  */

void FUN_10a7add18(long *param_1,ulong param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10a7add80:
      puVar1 = (undefined8 *)0x48;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar1 + 4,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        puVar1[5] = param_3[1];
        puVar1[4] = uVar5;
        puVar1[6] = param_3[2];
      }
      puVar1[7] = param_3[3];
      *(undefined1 *)(puVar1 + 8) = param_4;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar1 = (undefined8 *)*plVar4;
      }
      func_0x000107c2b058(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10a7add80;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10a7ade20; end: 10a7ae1f3;  */

undefined8 *
FUN_10a7ade20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *unaff_x20;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  short *psVar27;
  ulong uVar28;
  undefined8 *unaff_x26;
  long lVar29;
  undefined8 uVar30;
  undefined8 *puStack_88;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar12 = param_2;
  if ((undefined8 *)0x1 < param_3) {
    if (param_3 == (undefined8 *)0x2) {
      uVar9 = (ulong)*(short *)(param_2 + -1);
      FUN_10a77ebb8();
      unaff_x20 = (undefined8 *)(uVar9 >> 0x20);
      puVar8 = (undefined8 *)(long)*(short *)(param_1 + 4);
      FUN_10a77ebb8();
      if ((undefined8 *)((ulong)puVar8 >> 0x20) < unaff_x20) {
        puVar16 = param_4;
        param_4 = unaff_x20;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
          puVar10 = param_2 + -5;
code_r0x00010a7aebdc:
          lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar19 = *param_1;
          uStack_58 = (undefined7)param_1[1];
          uVar21 = *(undefined8 *)((long)param_1 + 0xf);
          uStack_51 = (undefined1)uVar21;
          uVar3 = *(undefined1 *)((long)param_1 + 0x17);
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          uVar26 = param_1[3];
          uVar22 = puVar10[2];
          uVar30 = *puVar10;
          param_1[1] = puVar10[1];
          *param_1 = uVar30;
          param_1[2] = uVar22;
          *(undefined1 *)((long)puVar10 + 0x17) = 0;
          *(undefined1 *)puVar10 = 0;
          param_1[3] = puVar10[3];
          puVar8 = param_1;
          puVar12 = puVar10;
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            puVar8 = (undefined8 *)*puVar10;
            __ZdlPv();
          }
          *puVar10 = uVar19;
          puVar10[1] = CONCAT17(uStack_51,uStack_58);
          *(undefined8 *)((long)puVar10 + 0xf) = uVar21;
          *(undefined1 *)((long)puVar10 + 0x17) = uVar3;
          puVar10[3] = uVar26;
          uVar5 = *(undefined2 *)(param_1 + 4);
          *(undefined2 *)(param_1 + 4) = *(undefined2 *)(puVar10 + 4);
          *(undefined2 *)(puVar10 + 4) = uVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
            ___stack_chk_fail();
            if (*(char *)((long)puVar8 + 0x17) < '\0') {
              __ZdlPv(*puVar8);
            }
            uVar21 = puVar12[1];
            uVar19 = *puVar12;
            puVar8[2] = puVar12[2];
            puVar8[1] = uVar21;
            *puVar8 = uVar19;
            *(undefined1 *)((long)puVar12 + 0x17) = 0;
            *(undefined1 *)puVar12 = 0;
            puVar8[3] = puVar12[3];
            *(undefined2 *)(puVar8 + 4) = *(undefined2 *)(puVar12 + 4);
            return puVar8;
          }
          return puVar8;
        }
        goto LAB_10a7ae1a0;
      }
    }
    else {
      if (0 < (long)param_3) {
        uVar9 = (ulong)param_3 >> 1;
        puVar10 = param_1 + uVar9 * 5;
        if (param_5 < (long)param_3) {
          FUN_10a7ade20(param_1,puVar10,uVar9,param_4,param_5);
          puVar24 = (undefined8 *)((long)param_3 - uVar9);
          puVar8 = puVar10;
          param_3 = puVar24;
          puVar16 = param_4;
          FUN_10a7ade20();
          puVar17 = param_1;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
            while( true ) {
              if (puVar24 == (undefined8 *)0x0) {
                return param_1;
              }
              if (((long)uVar9 <= param_5) || ((long)puVar24 <= param_5)) break;
              if (uVar9 == 0) {
                return param_1;
              }
              lVar18 = 0;
              lVar15 = -uVar9;
              while( true ) {
                uVar9 = (ulong)*(short *)(puVar10 + 4);
                FUN_10a77ebb8();
                puVar8 = (undefined8 *)((long)puVar17 + lVar18);
                puVar12 = (undefined8 *)(long)*(short *)(puVar8 + 4);
                FUN_10a77ebb8();
                if ((ulong)puVar12 >> 0x20 < uVar9 >> 0x20) break;
                lVar18 = lVar18 + 0x28;
                bVar7 = lVar15 == -1;
                lVar15 = lVar15 + 1;
                if (bVar7) {
                  return puVar12;
                }
              }
              if (-lVar15 < (long)puVar24) {
                puStack_88 = (undefined8 *)((long)puVar24 / 2);
                puVar12 = puVar10 + (long)puStack_88 * 5;
                lVar1 = (long)puVar10 + (-lVar18 - (long)puVar17);
                puVar16 = puVar10;
                if (lVar1 != 0) {
                  uVar9 = (lVar1 >> 3) * -0x3333333333333333;
                  puVar16 = puVar8;
                  do {
                    uVar28 = uVar9 >> 1;
                    uVar13 = (ulong)*(short *)(puVar12 + 4);
                    FUN_10a77ebb8();
                    uVar14 = (ulong)*(short *)(puVar16 + uVar28 * 5 + 4);
                    FUN_10a77ebb8();
                    uVar11 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
                    uVar9 = uVar28;
                    if (uVar13 >> 0x20 <= uVar14 >> 0x20) {
                      uVar9 = uVar11;
                      puVar16 = puVar16 + uVar28 * 5 + 5;
                    }
                  } while (uVar9 != 0);
                }
                uVar9 = ((long)puVar16 + (-lVar18 - (long)puVar17) >> 3) * -0x3333333333333333;
              }
              else {
                if (lVar15 == -1) {
                  param_1 = (undefined8 *)((long)puVar17 + lVar18);
                  goto code_r0x00010a7aebdc;
                }
                uVar9 = -lVar15 / 2;
                puVar12 = puVar10;
                if (puVar10 != param_2) {
                  uVar11 = ((long)param_2 - (long)puVar10 >> 3) * -0x3333333333333333;
                  puVar16 = puVar10;
                  do {
                    uVar28 = uVar11 >> 1;
                    uVar13 = (ulong)*(short *)(puVar16 + uVar28 * 5 + 4);
                    FUN_10a77ebb8();
                    uVar14 = (ulong)*(short *)((long)puVar17 + lVar18 + uVar9 * 0x28 + 0x20);
                    FUN_10a77ebb8();
                    puVar12 = puVar16 + uVar28 * 5 + 5;
                    uVar11 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
                    if (uVar13 >> 0x20 <= uVar14 >> 0x20) {
                      puVar12 = puVar16;
                      uVar11 = uVar28;
                    }
                    puVar16 = puVar12;
                  } while (uVar11 != 0);
                }
                puStack_88 = (undefined8 *)
                             (((long)puVar12 - (long)puVar10 >> 3) * -0x3333333333333333);
                puVar16 = (undefined8 *)((long)puVar17 + lVar18 + uVar9 * 0x28);
              }
              puVar23 = puVar12;
              if ((puVar16 != puVar10) && (puVar23 = puVar16, puVar10 != puVar12)) {
                FUN_10a7aebdc(puVar16,puVar10);
                puVar20 = puVar10;
                while( true ) {
                  puVar23 = puVar23 + 5;
                  puVar10 = puVar10 + 5;
                  if (puVar10 == puVar12) break;
                  puVar2 = puVar10;
                  if (puVar23 != puVar20) {
                    puVar2 = puVar20;
                  }
                  FUN_10a7aebdc(puVar23,puVar10);
                  puVar20 = puVar2;
                }
                puVar2 = puVar20;
                puVar10 = puVar23;
                if (puVar23 != puVar20) {
                  do {
                    while( true ) {
                      puVar25 = puVar2;
                      FUN_10a7aebdc(puVar10,puVar20);
                      puVar10 = puVar10 + 5;
                      puVar20 = puVar20 + 5;
                      if (puVar20 == puVar12) break;
                      puVar2 = puVar20;
                      if (puVar10 != puVar25) {
                        puVar2 = puVar25;
                      }
                    }
                    puVar2 = puVar25;
                    puVar20 = puVar25;
                  } while (puVar10 != puVar25);
                }
              }
              if ((long)(uVar9 + (long)puStack_88) <
                  (long)((long)puVar24 + (-lVar15 - (uVar9 + (long)puStack_88)))) {
                param_1 = (undefined8 *)((long)puVar17 + lVar18);
                FUN_10a7ae66c(param_1,puVar16,puVar23,uVar9,puStack_88,param_4,param_5);
                uVar9 = -uVar9 - lVar15;
                puVar10 = puVar12;
                puVar24 = (undefined8 *)((long)puVar24 - (long)puStack_88);
                puVar17 = puVar23;
              }
              else {
                param_1 = puVar23;
                FUN_10a7ae66c(puVar23,puVar12,param_2,-uVar9 - lVar15,
                              (undefined8 *)((long)puVar24 - (long)puStack_88),param_4,param_5);
                puVar10 = puVar16;
                puVar24 = puStack_88;
                param_2 = puVar23;
                puVar17 = puVar8;
              }
            }
            puVar8 = param_4;
            if ((long)puVar24 < (long)uVar9) {
              if (puVar10 == param_2) {
                return param_1;
              }
              lVar18 = 0;
              puVar12 = (undefined8 *)0x0;
              do {
                puVar24 = (undefined8 *)((long)param_4 + lVar18);
                puVar16 = (undefined8 *)((long)puVar10 + lVar18);
                uVar21 = puVar16[1];
                uVar19 = *puVar16;
                puVar24[2] = puVar16[2];
                puVar24[1] = uVar21;
                *puVar24 = uVar19;
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = 0;
                puVar24[3] = puVar16[3];
                *(undefined2 *)(puVar24 + 4) = *(undefined2 *)(puVar16 + 4);
                puVar12 = (undefined8 *)((long)puVar12 + 1);
                lVar18 = lVar18 + 0x28;
              } while (puVar16 + 5 != param_2);
              puVar24 = (undefined8 *)((long)param_4 + lVar18);
              do {
                param_2 = param_2 + -5;
                if (puVar10 == puVar17) goto LAB_10a7aea68;
                uVar9 = (ulong)*(short *)(puVar24 + -1);
                FUN_10a77ebb8();
                uVar11 = (ulong)*(short *)(puVar10 + -1);
                FUN_10a77ebb8();
                puVar20 = puVar24 + -5;
                puVar23 = puVar10 + -5;
                puVar16 = puVar10 + -5;
                if (uVar9 >> 0x20 <= uVar11 >> 0x20) {
                  puVar24 = puVar20;
                  puVar23 = puVar10;
                  puVar16 = puVar20;
                }
                puVar10 = puVar23;
                param_1 = param_2;
                FUN_10a7aecb8(param_2,puVar16);
              } while (puVar24 != param_4);
            }
            else {
              if (puVar10 == puVar17) {
                return param_1;
              }
              puVar12 = (undefined8 *)0x0;
              puVar24 = puVar17;
              puVar16 = param_4;
              do {
                puVar20 = puVar16;
                uVar21 = puVar24[1];
                uVar19 = *puVar24;
                puVar20[2] = puVar24[2];
                puVar20[1] = uVar21;
                *puVar20 = uVar19;
                puVar24[1] = 0;
                puVar24[2] = 0;
                *puVar24 = 0;
                puVar20[3] = puVar24[3];
                *(undefined2 *)(puVar20 + 4) = *(undefined2 *)(puVar24 + 4);
                puVar12 = (undefined8 *)((long)puVar12 + 1);
                puVar24 = puVar24 + 5;
                puVar23 = param_4;
                puVar16 = puVar20 + 5;
              } while (puVar24 != puVar10);
              do {
                if (puVar10 == param_2) goto LAB_10a7aeb28;
                uVar9 = (ulong)*(short *)(puVar10 + 4);
                FUN_10a77ebb8();
                uVar11 = (ulong)*(short *)(puVar23 + 4);
                FUN_10a77ebb8();
                param_1 = puVar17;
                if (uVar11 >> 0x20 < uVar9 >> 0x20) {
                  FUN_10a7aecb8(puVar17,puVar10);
                  puVar10 = puVar10 + 5;
                }
                else {
                  FUN_10a7aecb8(puVar17,puVar23);
                  puVar23 = puVar23 + 5;
                }
                puVar17 = puVar17 + 5;
              } while (puVar20 + 5 != puVar23);
            }
            goto joined_r0x00010a7aeb44;
          }
          goto LAB_10a7ae1a0;
        }
        FUN_10a7ae1f4(param_1,puVar10,uVar9,param_4);
        puVar24 = (undefined8 *)((long)param_3 - uVar9);
        puVar16 = param_4 + uVar9 * 5;
        puVar17 = puVar16;
        FUN_10a7ae1f4();
        unaff_x26 = param_4 + (long)param_3 * 5;
        puVar12 = puVar16;
        puVar8 = param_4;
        do {
          puVar23 = param_3;
          unaff_x20 = param_4;
          puVar20 = param_4;
          if (puVar12 == unaff_x26) goto LAB_10a7ae154;
          uVar9 = (ulong)*(short *)(puVar12 + 4);
          FUN_10a77ebb8();
          uVar11 = (ulong)*(short *)(puVar8 + 4);
          FUN_10a77ebb8();
          puVar10 = param_1;
          if (uVar11 >> 0x20 < uVar9 >> 0x20) {
            param_2 = puVar12;
            FUN_10a7aecb8();
            puVar12 = puVar12 + 5;
          }
          else {
            param_2 = puVar8;
            FUN_10a7aecb8();
            puVar8 = puVar8 + 5;
          }
          param_1 = param_1 + 5;
        } while (puVar8 != puVar16);
        for (; puVar12 != unaff_x26; puVar12 = puVar12 + 5) {
          puVar10 = param_1;
          param_2 = puVar12;
          FUN_10a7aecb8();
          param_1 = param_1 + 5;
        }
        goto joined_r0x00010a7ae17c;
      }
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        lVar15 = 0;
        puVar10 = param_1 + 5;
        puVar17 = param_1;
        do {
          puVar24 = puVar10;
          uVar9 = (ulong)*(short *)(puVar17 + 9);
          FUN_10a77ebb8();
          unaff_x20 = (undefined8 *)(uVar9 >> 0x20);
          puVar8 = (undefined8 *)(long)*(short *)(puVar17 + 4);
          FUN_10a77ebb8();
          if ((undefined8 *)((ulong)puVar8 >> 0x20) < unaff_x20) {
            unaff_x20 = (undefined8 *)*puVar24;
            uStack_78 = (undefined7)puVar17[6];
            uVar19 = *(undefined8 *)((long)puVar17 + 0x37);
            uStack_71 = (undefined1)uVar19;
            cVar6 = *(char *)((long)puVar17 + 0x3f);
            unaff_x26 = (undefined8 *)(long)cVar6;
            *puVar24 = 0;
            puVar24[1] = 0;
            puVar24[2] = 0;
            uVar21 = puVar17[8];
            sVar4 = *(short *)(puVar17 + 9);
            lVar1 = lVar15;
            do {
              lVar29 = lVar1;
              puVar12 = (undefined8 *)((long)param_1 + lVar29);
              puVar8 = puVar12 + 5;
              FUN_10a7aecb8();
              puVar10 = param_1;
              if (lVar29 == 0) goto LAB_10a7ae058;
              uVar9 = (long)sVar4;
              FUN_10a77ebb8();
              puVar8 = (undefined8 *)(long)*(short *)((long)param_1 + lVar29 + -8);
              FUN_10a77ebb8();
              lVar1 = lVar29 + -0x28;
            } while ((ulong)puVar8 >> 0x20 < uVar9 >> 0x20);
            puVar10 = (undefined8 *)((long)param_1 + lVar29);
LAB_10a7ae058:
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              puVar8 = (undefined8 *)*puVar10;
              __ZdlPv();
            }
            *puVar10 = unaff_x20;
            puVar10[1] = CONCAT17(uStack_71,uStack_78);
            *(undefined8 *)((long)puVar10 + 0xf) = uVar19;
            *(char *)((long)puVar10 + 0x17) = cVar6;
            puVar10[3] = uVar21;
            *(short *)(puVar10 + 4) = sVar4;
          }
          lVar15 = lVar15 + 0x28;
          puVar10 = puVar24 + 5;
          puVar17 = puVar24;
        } while (puVar24 + 5 != param_2);
      }
    }
  }
  goto LAB_10a7ade58;
LAB_10a7aeb28:
  do {
    param_1 = puVar17;
    FUN_10a7aecb8(puVar17,puVar23);
    puVar17 = puVar17 + 5;
    bVar7 = puVar20 != puVar23;
    puVar23 = puVar23 + 5;
  } while (bVar7);
  goto joined_r0x00010a7aeb44;
LAB_10a7aea68:
  while (puVar24 != param_4) {
    puVar24 = puVar24 + -5;
    param_1 = param_2;
    FUN_10a7aecb8(param_2,puVar24);
    param_2 = param_2 + -5;
  }
joined_r0x00010a7aeb44:
  while (puVar8 != (undefined8 *)0x0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_4;
      __ZdlPv(param_1);
    }
    param_4 = param_4 + 5;
    puVar12 = (undefined8 *)((long)puVar12 + -1);
    puVar8 = puVar12;
  }
  return param_1;
LAB_10a7ae154:
  for (; puVar8 != puVar16; puVar8 = puVar8 + 5) {
    puVar10 = param_1;
    param_2 = puVar8;
    FUN_10a7aecb8();
    param_1 = param_1 + 5;
  }
joined_r0x00010a7ae17c:
  while (param_4 = puVar17, param_3 = puVar24, puVar8 = puVar10, puVar12 = param_2,
        puVar20 != (undefined8 *)0x0) {
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      puVar10 = (undefined8 *)*unaff_x20;
      __ZdlPv();
    }
    puVar23 = (undefined8 *)((long)puVar23 + -1);
    puVar24 = param_3;
    puVar17 = param_4;
    unaff_x20 = unaff_x20 + 5;
    puVar20 = puVar23;
  }
LAB_10a7ade58:
  puVar16 = param_4;
  param_4 = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar8;
  }
LAB_10a7ae1a0:
  ___stack_chk_fail();
  if (param_4 != (undefined8 *)0x0) {
    for (; unaff_x26 != (undefined8 *)0x0; unaff_x26 = (undefined8 *)((long)unaff_x26 + -1)) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
      }
      param_4 = param_4 + 5;
    }
  }
  __Unwind_Resume();
  puVar10 = puVar8;
  if (param_3 != (undefined8 *)0x0) {
    if (param_3 == (undefined8 *)0x2) {
      psVar27 = (short *)(puVar12 + -1);
      uVar9 = (ulong)*psVar27;
      puVar17 = puVar12 + -5;
      FUN_10a77ebb8();
      puVar10 = (undefined8 *)(long)*(short *)(puVar8 + 4);
      FUN_10a77ebb8();
      if ((ulong)puVar10 >> 0x20 < uVar9 >> 0x20) {
        uVar21 = puVar12[-4];
        uVar19 = *puVar17;
        puVar16[2] = puVar12[-3];
        puVar16[1] = uVar21;
        *puVar16 = uVar19;
        puVar12[-4] = 0;
        puVar12[-3] = 0;
        *puVar17 = 0;
        puVar16[3] = puVar12[-2];
        *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(puVar12 + -1);
        uVar21 = puVar8[1];
        uVar19 = *puVar8;
        puVar16[7] = puVar8[2];
        puVar16[6] = uVar21;
        puVar16[5] = uVar19;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        puVar12 = puVar8 + 3;
        psVar27 = (short *)(puVar8 + 4);
      }
      else {
        uVar21 = puVar8[1];
        uVar19 = *puVar8;
        puVar16[2] = puVar8[2];
        puVar16[1] = uVar21;
        *puVar16 = uVar19;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        puVar16[3] = puVar8[3];
        *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(puVar8 + 4);
        uVar21 = puVar12[-4];
        uVar19 = *puVar17;
        puVar16[7] = puVar12[-3];
        puVar16[6] = uVar21;
        puVar16[5] = uVar19;
        puVar12[-4] = 0;
        puVar12[-3] = 0;
        *puVar17 = 0;
        puVar12 = puVar12 + -2;
      }
      sVar4 = *psVar27;
      puVar16[8] = *puVar12;
      *(short *)(puVar16 + 9) = sVar4;
    }
    else if (param_3 == (undefined8 *)0x1) {
      uVar21 = puVar8[1];
      uVar19 = *puVar8;
      puVar16[2] = puVar8[2];
      puVar16[1] = uVar21;
      *puVar16 = uVar19;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar16[3] = puVar8[3];
      *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(puVar8 + 4);
    }
    else if ((long)param_3 < 9) {
      if (puVar8 != puVar12) {
        uVar21 = puVar8[1];
        uVar19 = *puVar8;
        puVar16[2] = puVar8[2];
        puVar16[1] = uVar21;
        *puVar16 = uVar19;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        puVar16[3] = puVar8[3];
        *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(puVar8 + 4);
        if (puVar8 + 5 != puVar12) {
          lVar18 = 0;
          puVar17 = puVar8 + 5;
          puVar24 = puVar16;
          do {
            puVar20 = puVar17;
            uVar9 = (ulong)*(short *)(puVar8 + 9);
            FUN_10a77ebb8();
            puVar10 = (undefined8 *)(long)*(short *)(puVar24 + 4);
            FUN_10a77ebb8();
            puVar23 = puVar24 + 5;
            if ((ulong)puVar10 >> 0x20 < uVar9 >> 0x20) {
              puVar24[6] = puVar24[1];
              *puVar23 = *puVar24;
              puVar24[7] = puVar24[2];
              puVar24[1] = 0;
              puVar24[2] = 0;
              *puVar24 = 0;
              puVar24[8] = puVar24[3];
              *(undefined2 *)(puVar24 + 9) = *(undefined2 *)(puVar24 + 4);
              puVar10 = puVar16;
              lVar15 = lVar18;
              if (puVar24 != puVar16) {
                do {
                  uVar9 = (ulong)*(short *)(puVar8 + 9);
                  FUN_10a77ebb8();
                  lVar1 = (long)puVar16 + lVar15;
                  uVar11 = (ulong)*(short *)(lVar1 + -8);
                  FUN_10a77ebb8();
                  if (uVar9 >> 0x20 <= uVar11 >> 0x20) {
                    puVar10 = (undefined8 *)((long)puVar16 + lVar15);
                    break;
                  }
                  FUN_10a7aecb8(lVar1,lVar1 + -0x28);
                  lVar15 = lVar15 + -0x28;
                } while (lVar15 != 0);
              }
              FUN_10a7aecb8(puVar10,puVar20);
            }
            else {
              uVar21 = puVar20[1];
              uVar19 = *puVar20;
              puVar24[7] = puVar20[2];
              puVar24[6] = uVar21;
              *puVar23 = uVar19;
              puVar20[1] = 0;
              puVar20[2] = 0;
              *puVar20 = 0;
              puVar24[8] = puVar8[8];
              *(undefined2 *)(puVar24 + 9) = *(undefined2 *)(puVar8 + 9);
            }
            lVar18 = lVar18 + 0x28;
            puVar17 = puVar20 + 5;
            puVar8 = puVar20;
            puVar24 = puVar23;
          } while (puVar20 + 5 != puVar12);
        }
      }
    }
    else {
      uVar9 = (ulong)param_3 >> 1;
      lVar18 = uVar9 * 4 + ((ulong)param_3 >> 1);
      puVar17 = puVar8 + lVar18;
      FUN_10a7ade20(puVar8,puVar17,uVar9,puVar16,uVar9);
      lVar15 = (long)param_3 - ((ulong)param_3 >> 1);
      puVar10 = puVar17;
      FUN_10a7ade20(puVar17,puVar12,lVar15,puVar16 + lVar18,lVar15);
      lVar18 = 0;
      puVar24 = puVar17;
      do {
        if (puVar24 == puVar12) {
          if (puVar8 == puVar17) {
            return puVar10;
          }
          lVar15 = 0;
          do {
            puVar12 = (undefined8 *)((long)puVar16 + lVar18 + lVar15);
            puVar24 = (undefined8 *)((long)puVar8 + lVar15);
            uVar21 = puVar24[1];
            uVar19 = *puVar24;
            puVar12[2] = puVar24[2];
            puVar12[1] = uVar21;
            *puVar12 = uVar19;
            puVar24[1] = 0;
            puVar24[2] = 0;
            *puVar24 = 0;
            puVar12[3] = puVar24[3];
            *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar24 + 4);
            lVar15 = lVar15 + 0x28;
          } while (puVar24 + 5 != puVar17);
          return puVar10;
        }
        uVar9 = (ulong)*(short *)(puVar24 + 4);
        FUN_10a77ebb8();
        puVar10 = (undefined8 *)(long)*(short *)(puVar8 + 4);
        FUN_10a77ebb8();
        puVar23 = (undefined8 *)((long)puVar16 + lVar18);
        if ((ulong)puVar10 >> 0x20 < uVar9 >> 0x20) {
          uVar21 = puVar24[1];
          uVar19 = *puVar24;
          puVar23[2] = puVar24[2];
          puVar23[1] = uVar21;
          *puVar23 = uVar19;
          puVar24[1] = 0;
          puVar24[2] = 0;
          *puVar24 = 0;
          puVar20 = puVar24;
          puVar23 = puVar8;
          puVar24 = puVar24 + 5;
        }
        else {
          uVar21 = puVar8[1];
          uVar19 = *puVar8;
          puVar23[2] = puVar8[2];
          puVar23[1] = uVar21;
          *puVar23 = uVar19;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar23 = puVar8 + 5;
          puVar20 = puVar8;
        }
        uVar5 = *(undefined2 *)(puVar20 + 4);
        *(undefined8 *)((long)puVar16 + lVar18 + 0x18) = puVar20[3];
        *(undefined2 *)((long)puVar16 + lVar18 + 0x20) = uVar5;
        lVar18 = lVar18 + 0x28;
        puVar8 = puVar23;
      } while (puVar23 != puVar17);
      if (puVar24 != puVar12) {
        lVar15 = 0;
        do {
          puVar8 = (undefined8 *)((long)puVar24 + lVar15);
          puVar17 = (undefined8 *)((long)puVar16 + lVar18 + lVar15);
          uVar21 = puVar8[1];
          uVar19 = *puVar8;
          puVar17[2] = puVar8[2];
          puVar17[1] = uVar21;
          *puVar17 = uVar19;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar17[3] = puVar8[3];
          *(undefined2 *)(puVar17 + 4) = *(undefined2 *)(puVar8 + 4);
          lVar15 = lVar15 + 0x28;
        } while (puVar8 + 5 != puVar12);
      }
    }
  }
  return puVar10;
}



/* Entry: 10a7ae1f4; end: 10a7ae66b;  */

void FUN_10a7ae1f4(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  short sVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      psVar11 = (short *)(param_2 + -1);
      uVar4 = (ulong)*psVar11;
      puVar6 = param_2 + -5;
      FUN_10a77ebb8();
      uVar5 = (ulong)*(short *)(param_1 + 4);
      FUN_10a77ebb8();
      if (uVar5 >> 0x20 < uVar4 >> 0x20) {
        uVar14 = param_2[-4];
        uVar13 = *puVar6;
        param_4[2] = param_2[-3];
        param_4[1] = uVar14;
        *param_4 = uVar13;
        param_2[-4] = 0;
        param_2[-3] = 0;
        *puVar6 = 0;
        param_4[3] = param_2[-2];
        *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_2 + -1);
        uVar14 = param_1[1];
        uVar13 = *param_1;
        param_4[7] = param_1[2];
        param_4[6] = uVar14;
        param_4[5] = uVar13;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_2 = param_1 + 3;
        psVar11 = (short *)(param_1 + 4);
      }
      else {
        uVar14 = param_1[1];
        uVar13 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar14;
        *param_4 = uVar13;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
        uVar14 = param_2[-4];
        uVar13 = *puVar6;
        param_4[7] = param_2[-3];
        param_4[6] = uVar14;
        param_4[5] = uVar13;
        param_2[-4] = 0;
        param_2[-3] = 0;
        *puVar6 = 0;
        param_2 = param_2 + -2;
      }
      sVar2 = *psVar11;
      param_4[8] = *param_2;
      *(short *)(param_4 + 9) = sVar2;
    }
    else if (param_3 == 1) {
      uVar14 = param_1[1];
      uVar13 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar14;
      *param_4 = uVar13;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_4[3] = param_1[3];
      *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        uVar14 = param_1[1];
        uVar13 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar14;
        *param_4 = uVar13;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
        if (param_1 + 5 != param_2) {
          lVar12 = 0;
          puVar6 = param_1 + 5;
          puVar10 = param_4;
          do {
            puVar8 = puVar6;
            uVar4 = (ulong)*(short *)(param_1 + 9);
            FUN_10a77ebb8();
            uVar5 = (ulong)*(short *)(puVar10 + 4);
            FUN_10a77ebb8();
            puVar9 = puVar10 + 5;
            if (uVar5 >> 0x20 < uVar4 >> 0x20) {
              puVar10[6] = puVar10[1];
              *puVar9 = *puVar10;
              puVar10[7] = puVar10[2];
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
              puVar10[8] = puVar10[3];
              *(undefined2 *)(puVar10 + 9) = *(undefined2 *)(puVar10 + 4);
              puVar6 = param_4;
              lVar7 = lVar12;
              if (puVar10 != param_4) {
                do {
                  uVar4 = (ulong)*(short *)(param_1 + 9);
                  FUN_10a77ebb8();
                  lVar1 = (long)param_4 + lVar7;
                  uVar5 = (ulong)*(short *)(lVar1 + -8);
                  FUN_10a77ebb8();
                  if (uVar4 >> 0x20 <= uVar5 >> 0x20) {
                    puVar6 = (undefined8 *)((long)param_4 + lVar7);
                    break;
                  }
                  FUN_10a7aecb8(lVar1,lVar1 + -0x28);
                  lVar7 = lVar7 + -0x28;
                } while (lVar7 != 0);
              }
              FUN_10a7aecb8(puVar6,puVar8);
            }
            else {
              uVar14 = puVar8[1];
              uVar13 = *puVar8;
              puVar10[7] = puVar8[2];
              puVar10[6] = uVar14;
              *puVar9 = uVar13;
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = 0;
              puVar10[8] = param_1[8];
              *(undefined2 *)(puVar10 + 9) = *(undefined2 *)(param_1 + 9);
            }
            lVar12 = lVar12 + 0x28;
            puVar6 = puVar8 + 5;
            param_1 = puVar8;
            puVar10 = puVar9;
          } while (puVar8 + 5 != param_2);
        }
      }
    }
    else {
      uVar4 = param_3 >> 1;
      lVar12 = uVar4 * 4 + (param_3 >> 1);
      puVar6 = param_1 + lVar12;
      FUN_10a7ade20(param_1,puVar6,uVar4,param_4,uVar4);
      lVar7 = param_3 - (param_3 >> 1);
      FUN_10a7ade20(puVar6,param_2,lVar7,param_4 + lVar12,lVar7);
      lVar12 = 0;
      puVar10 = puVar6;
      do {
        if (puVar10 == param_2) {
          if (param_1 == puVar6) {
            return;
          }
          lVar7 = 0;
          do {
            puVar10 = (undefined8 *)((long)param_4 + lVar12 + lVar7);
            puVar9 = (undefined8 *)((long)param_1 + lVar7);
            uVar14 = puVar9[1];
            uVar13 = *puVar9;
            puVar10[2] = puVar9[2];
            puVar10[1] = uVar14;
            *puVar10 = uVar13;
            puVar9[1] = 0;
            puVar9[2] = 0;
            *puVar9 = 0;
            puVar10[3] = puVar9[3];
            *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar9 + 4);
            lVar7 = lVar7 + 0x28;
          } while (puVar9 + 5 != puVar6);
          return;
        }
        uVar4 = (ulong)*(short *)(puVar10 + 4);
        FUN_10a77ebb8();
        uVar5 = (ulong)*(short *)(param_1 + 4);
        FUN_10a77ebb8();
        puVar9 = (undefined8 *)((long)param_4 + lVar12);
        if (uVar5 >> 0x20 < uVar4 >> 0x20) {
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          puVar9[2] = puVar10[2];
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          puVar8 = puVar10;
          puVar9 = param_1;
          puVar10 = puVar10 + 5;
        }
        else {
          uVar14 = param_1[1];
          uVar13 = *param_1;
          puVar9[2] = param_1[2];
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          puVar9 = param_1 + 5;
          puVar8 = param_1;
        }
        uVar3 = *(undefined2 *)(puVar8 + 4);
        *(undefined8 *)((long)param_4 + lVar12 + 0x18) = puVar8[3];
        *(undefined2 *)((long)param_4 + lVar12 + 0x20) = uVar3;
        lVar12 = lVar12 + 0x28;
        param_1 = puVar9;
      } while (puVar9 != puVar6);
      if (puVar10 != param_2) {
        lVar7 = 0;
        do {
          puVar6 = (undefined8 *)((long)puVar10 + lVar7);
          puVar9 = (undefined8 *)((long)param_4 + lVar12 + lVar7);
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar9[2] = puVar6[2];
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar9[3] = puVar6[3];
          *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar6 + 4);
          lVar7 = lVar7 + 0x28;
        } while (puVar6 + 5 != param_2);
      }
    }
  }
  return;
}



/* Entry: 10a7ae66c; end: 10a7aebdb;  */

undefined8 *
FUN_10a7ae66c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
             undefined8 *param_6,long param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_88;
  long lStack_68;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  puVar23 = param_1;
  lStack_68 = param_5;
  if (param_5 != 0) {
    while ((param_7 < param_4 && (param_7 < lStack_68))) {
      if (param_4 == 0) {
        return param_1;
      }
      lVar15 = 0;
      lVar18 = -param_4;
      while( true ) {
        uVar6 = (ulong)*(short *)(param_2 + 4);
        FUN_10a77ebb8();
        puVar11 = (undefined8 *)((long)puVar23 + lVar15);
        puVar7 = (undefined8 *)(long)*(short *)(puVar11 + 4);
        FUN_10a77ebb8();
        if ((ulong)puVar7 >> 0x20 < uVar6 >> 0x20) break;
        lVar15 = lVar15 + 0x28;
        bVar5 = lVar18 == -1;
        lVar18 = lVar18 + 1;
        if (bVar5) {
          return puVar7;
        }
      }
      if (-lVar18 < lStack_68) {
        lStack_88 = lStack_68 / 2;
        puVar7 = param_2 + lStack_88 * 5;
        lVar3 = (long)param_2 + (-lVar15 - (long)puVar23);
        puVar12 = param_2;
        if (lVar3 != 0) {
          uVar6 = (lVar3 >> 3) * -0x3333333333333333;
          puVar12 = puVar11;
          do {
            uVar21 = uVar6 >> 1;
            uVar8 = (ulong)*(short *)(puVar7 + 4);
            FUN_10a77ebb8();
            uVar9 = (ulong)*(short *)(puVar12 + uVar21 * 5 + 4);
            FUN_10a77ebb8();
            uVar10 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar21;
            if (uVar8 >> 0x20 <= uVar9 >> 0x20) {
              uVar6 = uVar10;
              puVar12 = puVar12 + uVar21 * 5 + 5;
            }
          } while (uVar6 != 0);
        }
        param_4 = ((long)((long)puVar12 + (-lVar15 - (long)puVar23)) >> 3) * -0x3333333333333333;
      }
      else {
        if (lVar18 == -1) {
          puVar23 = (undefined8 *)((long)puVar23 + lVar15);
          lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar24 = *puVar23;
          uStack_58 = (undefined7)puVar23[1];
          uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
          uStack_51 = (undefined1)uVar13;
          uVar1 = *(undefined1 *)((long)puVar23 + 0x17);
          puVar23[1] = 0;
          puVar23[2] = 0;
          *puVar23 = 0;
          uVar19 = puVar23[3];
          uVar14 = param_2[2];
          uVar25 = *param_2;
          puVar23[1] = param_2[1];
          *puVar23 = uVar25;
          puVar23[2] = uVar14;
          *(undefined1 *)((long)param_2 + 0x17) = 0;
          *(undefined1 *)param_2 = 0;
          puVar23[3] = param_2[3];
          puVar11 = puVar23;
          puVar7 = param_2;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*param_2;
            __ZdlPv();
          }
          *param_2 = uVar24;
          param_2[1] = CONCAT17(uStack_51,uStack_58);
          *(undefined8 *)((long)param_2 + 0xf) = uVar13;
          *(undefined1 *)((long)param_2 + 0x17) = uVar1;
          param_2[3] = uVar19;
          uVar2 = *(undefined2 *)(puVar23 + 4);
          *(undefined2 *)(puVar23 + 4) = *(undefined2 *)(param_2 + 4);
          *(undefined2 *)(param_2 + 4) = uVar2;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
            return puVar11;
          }
          ___stack_chk_fail();
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
          }
          uVar13 = puVar7[1];
          uVar24 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar13;
          *puVar11 = uVar24;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          *(undefined1 *)puVar7 = 0;
          puVar11[3] = puVar7[3];
          *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar7 + 4);
          return puVar11;
        }
        param_4 = -lVar18 / 2;
        puVar7 = param_2;
        if (param_2 != param_3) {
          uVar6 = ((long)param_3 - (long)param_2 >> 3) * -0x3333333333333333;
          puVar12 = param_2;
          do {
            uVar9 = uVar6 >> 1;
            uVar10 = (ulong)*(short *)(puVar12 + uVar9 * 5 + 4);
            FUN_10a77ebb8();
            uVar8 = (ulong)*(short *)((long)puVar23 + lVar15 + param_4 * 0x28 + 0x20);
            FUN_10a77ebb8();
            puVar7 = puVar12 + uVar9 * 5 + 5;
            uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            if (uVar10 >> 0x20 <= uVar8 >> 0x20) {
              puVar7 = puVar12;
              uVar6 = uVar9;
            }
            puVar12 = puVar7;
          } while (uVar6 != 0);
        }
        lStack_88 = ((long)puVar7 - (long)param_2 >> 3) * -0x3333333333333333;
        puVar12 = (undefined8 *)((long)puVar23 + lVar15 + param_4 * 0x28);
      }
      puVar22 = puVar7;
      if ((puVar12 != param_2) && (puVar22 = puVar12, param_2 != puVar7)) {
        FUN_10a7aebdc(puVar12,param_2);
        puVar16 = param_2;
        while( true ) {
          puVar22 = puVar22 + 5;
          param_2 = param_2 + 5;
          if (param_2 == puVar7) break;
          puVar20 = param_2;
          if (puVar22 != puVar16) {
            puVar20 = puVar16;
          }
          FUN_10a7aebdc(puVar22,param_2);
          puVar16 = puVar20;
        }
        puVar4 = puVar16;
        puVar20 = puVar22;
        if (puVar22 != puVar16) {
          do {
            while( true ) {
              puVar17 = puVar4;
              FUN_10a7aebdc(puVar20,puVar16);
              puVar20 = puVar20 + 5;
              puVar16 = puVar16 + 5;
              if (puVar16 == puVar7) break;
              puVar4 = puVar16;
              if (puVar20 != puVar17) {
                puVar4 = puVar17;
              }
            }
            puVar4 = puVar17;
            puVar16 = puVar17;
          } while (puVar20 != puVar17);
        }
      }
      if (param_4 + lStack_88 < (lStack_68 - (param_4 + lStack_88)) - lVar18) {
        param_1 = (undefined8 *)((long)puVar23 + lVar15);
        FUN_10a7ae66c(param_1,puVar12,puVar22,param_4,lStack_88,param_6,param_7);
        puVar11 = puVar22;
        puVar12 = puVar7;
        lStack_88 = lStack_68 - lStack_88;
        param_4 = -param_4 - lVar18;
        puVar22 = param_3;
      }
      else {
        param_1 = puVar22;
        FUN_10a7ae66c(puVar22,puVar7,param_3,-param_4 - lVar18,lStack_68 - lStack_88,param_6,param_7
                     );
      }
      param_2 = puVar12;
      puVar23 = puVar11;
      param_3 = puVar22;
      lStack_68 = lStack_88;
      if (lStack_88 == 0) {
        return param_1;
      }
    }
    puVar11 = param_6;
    if (lStack_68 < param_4) {
      if (param_2 != param_3) {
        lVar15 = 0;
        puVar7 = (undefined8 *)0x0;
        do {
          puVar12 = (undefined8 *)((long)param_6 + lVar15);
          puVar22 = (undefined8 *)((long)param_2 + lVar15);
          uVar13 = puVar22[1];
          uVar24 = *puVar22;
          puVar12[2] = puVar22[2];
          puVar12[1] = uVar13;
          *puVar12 = uVar24;
          puVar22[1] = 0;
          puVar22[2] = 0;
          *puVar22 = 0;
          puVar12[3] = puVar22[3];
          *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar22 + 4);
          puVar7 = (undefined8 *)((long)puVar7 + 1);
          lVar15 = lVar15 + 0x28;
        } while (puVar22 + 5 != param_3);
        puVar12 = (undefined8 *)((long)param_6 + lVar15);
        do {
          param_3 = param_3 + -5;
          if (param_2 == puVar23) goto LAB_10a7aea68;
          uVar6 = (ulong)*(short *)(puVar12 + -1);
          FUN_10a77ebb8();
          uVar10 = (ulong)*(short *)(param_2 + -1);
          FUN_10a77ebb8();
          puVar20 = puVar12 + -5;
          puVar16 = param_2 + -5;
          puVar22 = param_2 + -5;
          if (uVar6 >> 0x20 <= uVar10 >> 0x20) {
            puVar12 = puVar20;
            puVar16 = param_2;
            puVar22 = puVar20;
          }
          param_2 = puVar16;
          param_1 = param_3;
          FUN_10a7aecb8(param_3,puVar22);
        } while (puVar12 != param_6);
        goto joined_r0x00010a7aeb44;
      }
    }
    else if (param_2 != puVar23) {
      puVar7 = (undefined8 *)0x0;
      puVar12 = puVar23;
      puVar22 = param_6;
      do {
        puVar20 = puVar22;
        uVar13 = puVar12[1];
        uVar24 = *puVar12;
        puVar20[2] = puVar12[2];
        puVar20[1] = uVar13;
        *puVar20 = uVar24;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        puVar20[3] = puVar12[3];
        *(undefined2 *)(puVar20 + 4) = *(undefined2 *)(puVar12 + 4);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
        puVar12 = puVar12 + 5;
        puVar16 = param_6;
        puVar22 = puVar20 + 5;
      } while (puVar12 != param_2);
      do {
        if (param_2 == param_3) goto LAB_10a7aeb28;
        uVar6 = (ulong)*(short *)(param_2 + 4);
        FUN_10a77ebb8();
        uVar10 = (ulong)*(short *)(puVar16 + 4);
        FUN_10a77ebb8();
        param_1 = puVar23;
        if (uVar10 >> 0x20 < uVar6 >> 0x20) {
          FUN_10a7aecb8(puVar23,param_2);
          param_2 = param_2 + 5;
        }
        else {
          FUN_10a7aecb8(puVar23,puVar16);
          puVar16 = puVar16 + 5;
        }
        puVar23 = puVar23 + 5;
      } while (puVar20 + 5 != puVar16);
      goto joined_r0x00010a7aeb44;
    }
  }
  return param_1;
LAB_10a7aeb28:
  do {
    param_1 = puVar23;
    FUN_10a7aecb8(puVar23,puVar16);
    puVar23 = puVar23 + 5;
    bVar5 = puVar20 != puVar16;
    puVar16 = puVar16 + 5;
  } while (bVar5);
  goto joined_r0x00010a7aeb44;
LAB_10a7aea68:
  while (puVar12 != param_6) {
    puVar12 = puVar12 + -5;
    param_1 = param_3;
    FUN_10a7aecb8(param_3,puVar12);
    param_3 = param_3 + -5;
  }
joined_r0x00010a7aeb44:
  while (puVar11 != (undefined8 *)0x0) {
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_6;
      __ZdlPv(param_1);
    }
    param_6 = param_6 + 5;
    puVar7 = (undefined8 *)((long)puVar7 + -1);
    puVar11 = puVar7;
  }
  return param_1;
}



/* Entry: 10a7aebdc; end: 10a7aecb7;  */

undefined8 * FUN_10a7aebdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *param_1;
  uStack_58 = (undefined7)param_1[1];
  uVar6 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_51 = (undefined1)uVar6;
  uVar1 = *(undefined1 *)((long)param_1 + 0x17);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = param_1[3];
  uVar7 = param_2[2];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = uVar7;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  param_1[3] = param_2[3];
  puVar3 = param_1;
  puVar4 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar3 = (undefined8 *)*param_2;
    __ZdlPv();
  }
  *param_2 = uVar10;
  param_2[1] = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)((long)param_2 + 0xf) = uVar6;
  *(undefined1 *)((long)param_2 + 0x17) = uVar1;
  param_2[3] = uVar8;
  uVar2 = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_2 + 4) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    __ZdlPv(*puVar3);
  }
  uVar6 = puVar4[1];
  uVar10 = *puVar4;
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar10;
  *(undefined1 *)((long)puVar4 + 0x17) = 0;
  *(undefined1 *)puVar4 = 0;
  puVar3[3] = puVar4[3];
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar4 + 4);
  return puVar3;
}



/* Entry: 10a7aecb8; end: 10a7aed13;  */

undefined8 * FUN_10a7aecb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10a7aed14; end: 10a7af18f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7afa60) */

void FUN_10a7aed14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar18;
  undefined8 *unaff_x22;
  long lVar19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar20;
  undefined8 *unaff_x25;
  undefined8 *puVar21;
  undefined8 *unaff_x26;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  puVar4 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  puVar7 = param_2;
  puVar21 = param_3;
  puVar23 = param_4;
  puVar20 = unaff_x22;
  if (param_3 < (undefined8 *)0x2) goto LAB_10a7aed50;
  puVar20 = param_2;
  if (param_3 == (undefined8 *)0x2) {
    if (*(uint *)((long)param_1 + 0x24) <= *(uint *)((long)param_2 + -0xc)) goto LAB_10a7aed50;
    puVar8 = param_3;
    puVar18 = unaff_x20;
    puVar11 = unaff_x21;
    param_5 = unaff_x23;
    puVar20 = unaff_x24;
    puVar21 = unaff_x25;
    puVar12 = unaff_x26;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      puVar7 = param_2 + -6;
      param_2 = param_3;
      puVar20 = param_4;
      goto code_r0x00010a7af190;
    }
  }
  else {
    if ((long)param_3 < 1) {
      unaff_x21 = param_3;
      if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
        unaff_x20 = (undefined8 *)0x0;
        puVar12 = param_1;
        puVar8 = param_1 + 6;
        do {
          unaff_x21 = puVar8;
          if (*(uint *)((long)puVar12 + 0x54) < *(uint *)((long)puVar12 + 0x24)) {
            puStack_90 = (undefined8 *)*unaff_x21;
            uStack_88 = (undefined7)puVar12[7];
            uStack_81 = (undefined1)*(undefined8 *)((long)puVar12 + 0x3f);
            uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x3f) >> 8);
            bVar3 = *(byte *)((long)puVar12 + 0x47);
            unaff_x24 = (undefined8 *)(ulong)bVar3;
            *unaff_x21 = 0;
            unaff_x21[1] = 0;
            unaff_x21[2] = 0;
            unaff_x25 = (undefined8 *)puVar12[9];
            uVar1 = *(uint *)(puVar12 + 10);
            unaff_x26 = (undefined8 *)(ulong)uVar1;
            uVar2 = *(uint *)((long)puVar12 + 0x54);
            uVar14 = *(undefined8 *)((long)puVar12 + 0x54);
            puVar12 = unaff_x20;
            do {
              puVar8 = puVar12;
              unaff_x23 = (undefined8 *)((long)param_1 + (long)puVar8);
              if (*(char *)((long)unaff_x23 + 0x47) < '\0') {
                puVar6 = (undefined8 *)unaff_x23[6];
                __ZdlPv();
              }
              unaff_x23[7] = unaff_x23[1];
              unaff_x23[6] = *unaff_x23;
              *(undefined1 *)((long)unaff_x23 + 0x17) = 0;
              *(undefined1 *)unaff_x23 = 0;
              unaff_x23[8] = unaff_x23[2];
              unaff_x23[9] = unaff_x23[3];
              unaff_x23[10] = unaff_x23[4];
              *(undefined4 *)(unaff_x23 + 0xb) = *(undefined4 *)(unaff_x23 + 5);
              puVar12 = param_1;
              if (puVar8 == (undefined8 *)0x0) goto LAB_10a7aef64;
              puVar12 = puVar8 + -6;
            } while (uVar2 < *(uint *)((undefined1 *)((long)param_1 + (long)puVar8) + -0xc));
            puVar12 = (undefined8 *)((undefined1 *)((long)param_1 + (long)(puVar8 + -6)) + 0x30);
LAB_10a7aef64:
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              puVar6 = (undefined8 *)*puVar12;
              __ZdlPv();
            }
            *puVar12 = puStack_90;
            puVar12[1] = CONCAT17(uStack_81,uStack_88);
            *(ulong *)((long)puVar12 + 0xf) = CONCAT71(uStack_80,uStack_81);
            *(byte *)((long)puVar12 + 0x17) = bVar3;
            puVar12[3] = unaff_x25;
            *(uint *)((undefined1 *)((long)param_1 + (long)puVar8) + 0x20) = uVar1;
            *(undefined8 *)((long)puVar12 + 0x24) = uVar14;
          }
          unaff_x20 = unaff_x20 + 6;
          puVar12 = unaff_x21;
          puVar8 = unaff_x21 + 6;
        } while (unaff_x21 + 6 != param_2);
      }
      goto LAB_10a7aed50;
    }
    puVar20 = (undefined8 *)((ulong)param_3 >> 1);
    puVar12 = param_1 + (long)puVar20 * 6;
    puVar21 = (undefined8 *)((long)param_3 - ((ulong)param_3 >> 1));
    puVar6 = puVar12;
    if ((long)param_3 <= (long)param_5) {
      FUN_10a7af288(param_1,puVar12,puVar20);
      unaff_x23 = param_4 + (long)puVar20 * 6;
      puVar23 = unaff_x23;
      FUN_10a7af288();
      puVar20 = param_4 + (long)param_3 * 6;
      unaff_x24 = unaff_x23;
      unaff_x25 = param_4;
      do {
        if (unaff_x24 == puVar20) goto LAB_10a7af0d8;
        if (*(uint *)((long)unaff_x24 + 0x24) < *(uint *)((long)unaff_x25 + 0x24)) {
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            puVar6 = (undefined8 *)*param_1;
            __ZdlPv();
          }
          uVar25 = unaff_x24[1];
          uVar14 = *unaff_x24;
          param_1[2] = unaff_x24[2];
          param_1[1] = uVar25;
          *param_1 = uVar14;
          *(undefined1 *)((long)unaff_x24 + 0x17) = 0;
          *(undefined1 *)unaff_x24 = 0;
          param_1[3] = unaff_x24[3];
          uVar14 = unaff_x24[4];
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x24 + 5);
          param_1[4] = uVar14;
          unaff_x24 = unaff_x24 + 6;
        }
        else {
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            puVar6 = (undefined8 *)*param_1;
            __ZdlPv();
          }
          uVar25 = unaff_x25[1];
          uVar14 = *unaff_x25;
          param_1[2] = unaff_x25[2];
          param_1[1] = uVar25;
          *param_1 = uVar14;
          *(undefined1 *)((long)unaff_x25 + 0x17) = 0;
          *(undefined1 *)unaff_x25 = 0;
          param_1[3] = unaff_x25[3];
          uVar14 = unaff_x25[4];
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x25 + 5);
          param_1[4] = uVar14;
          unaff_x25 = unaff_x25 + 6;
        }
        param_1 = param_1 + 6;
      } while (unaff_x25 != unaff_x23);
      for (; unaff_x24 != puVar20; unaff_x24 = unaff_x24 + 6) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*param_1;
          __ZdlPv();
        }
        uVar25 = unaff_x24[1];
        uVar14 = *unaff_x24;
        param_1[2] = unaff_x24[2];
        param_1[1] = uVar25;
        *param_1 = uVar14;
        *(undefined1 *)((long)unaff_x24 + 0x17) = 0;
        *(undefined1 *)unaff_x24 = 0;
        param_1[3] = unaff_x24[3];
        uVar14 = unaff_x24[4];
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x24 + 5);
        param_1[4] = uVar14;
        param_1 = param_1 + 6;
      }
      goto LAB_10a7af134;
    }
    FUN_10a7aed14();
    puVar8 = puVar21;
    FUN_10a7aed14();
    puVar18 = param_4;
    puVar11 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      if (puVar21 == (undefined8 *)0x0) {
        return;
      }
      uStack_88 = SUB87(param_4,0);
      uStack_81 = (undefined1)((ulong)param_4 >> 0x38);
      puVar6 = param_2;
      puVar7 = puVar12;
      puVar23 = puVar20;
      do {
        if (((long)puVar23 <= (long)param_5) || ((long)puVar21 <= (long)param_5)) {
          if ((long)puVar21 < (long)puVar23) {
            if (puVar6 == puVar7) {
              return;
            }
            lVar19 = 0;
            puVar21 = (undefined8 *)0x0;
            do {
              puVar23 = (undefined8 *)((long)param_4 + lVar19);
              puVar20 = (undefined8 *)((long)puVar7 + lVar19);
              uVar25 = puVar20[1];
              uVar14 = *puVar20;
              puVar23[2] = puVar20[2];
              puVar23[1] = uVar25;
              *puVar23 = uVar14;
              puVar20[1] = 0;
              puVar20[2] = 0;
              *puVar20 = 0;
              puVar23[3] = puVar20[3];
              uVar14 = puVar20[4];
              *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar20 + 5);
              puVar23[4] = uVar14;
              puVar21 = (undefined8 *)((long)puVar21 + 1);
              lVar19 = lVar19 + 0x30;
            } while (puVar20 + 6 != puVar6);
            puStack_90 = (undefined8 *)((long)param_4 + lVar19);
            puVar8 = puVar6 + -3;
            puVar20 = puVar6;
            puVar12 = puStack_90;
            while (puVar7 != param_1) {
              puVar18 = puVar12;
              puVar22 = puVar7 + -6;
              puVar23 = puVar7 + -6;
              puVar11 = puVar7;
              if (*(uint *)((long)puVar7 + -0xc) <= *(uint *)((long)puVar12 + -0xc)) {
                puVar18 = puVar12 + -6;
                puVar22 = puVar7;
                puVar23 = puVar12 + -6;
                puVar11 = puVar12;
              }
              puVar7 = puVar22;
              uVar25 = puVar23[1];
              uVar14 = *puVar23;
              puVar8[-1] = puVar23[2];
              puVar8[-2] = uVar25;
              puVar8[-3] = uVar14;
              *(undefined1 *)((long)puVar11 + -0x19) = 0;
              *(undefined1 *)puVar23 = 0;
              *puVar8 = puVar11[-3];
              uVar14 = puVar11[-2];
              *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar11 + -1);
              puVar8[1] = uVar14;
              puVar20 = puVar20 + -6;
              puVar8 = puVar8 + -6;
              puVar12 = puVar18;
              puVar23 = param_4;
              if (puVar18 == param_4) goto joined_r0x00010a7afc3c;
            }
            FUN_10a7afd08(&uStack_80,puStack_90,puVar12,param_4,param_4,puVar6,puVar20);
          }
          else {
            if (param_1 == puVar7) {
              return;
            }
            puVar21 = (undefined8 *)0x0;
            puVar23 = param_1;
            puVar20 = param_4;
            do {
              uVar25 = puVar23[1];
              uVar14 = *puVar23;
              puVar20[2] = puVar23[2];
              puVar20[1] = uVar25;
              *puVar20 = uVar14;
              puVar23[1] = 0;
              puVar23[2] = 0;
              *puVar23 = 0;
              puVar20[3] = puVar23[3];
              uVar14 = puVar23[4];
              *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(puVar23 + 5);
              puVar20[4] = uVar14;
              puVar21 = (undefined8 *)((long)puVar21 + 1);
              puVar23 = puVar23 + 6;
              puVar20 = puVar20 + 6;
              puVar12 = param_4;
            } while (puVar23 != puVar7);
            while (puVar7 != puVar6) {
              if (*(uint *)((long)puVar7 + 0x24) < *(uint *)((long)puVar12 + 0x24)) {
                if (*(char *)((long)param_1 + 0x17) < '\0') {
                  __ZdlPv(*param_1);
                  param_4 = (undefined8 *)CONCAT17(uStack_81,uStack_88);
                }
                uVar25 = puVar7[1];
                uVar14 = *puVar7;
                param_1[2] = puVar7[2];
                param_1[1] = uVar25;
                *param_1 = uVar14;
                *(undefined1 *)((long)puVar7 + 0x17) = 0;
                *(undefined1 *)puVar7 = 0;
                param_1[3] = puVar7[3];
                uVar14 = puVar7[4];
                *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar7 + 5);
                param_1[4] = uVar14;
                puVar7 = puVar7 + 6;
              }
              else {
                if (*(char *)((long)param_1 + 0x17) < '\0') {
                  __ZdlPv(*param_1);
                  param_4 = (undefined8 *)CONCAT17(uStack_81,uStack_88);
                }
                uVar25 = puVar12[1];
                uVar14 = *puVar12;
                param_1[2] = puVar12[2];
                param_1[1] = uVar25;
                *param_1 = uVar14;
                *(undefined1 *)((long)puVar12 + 0x17) = 0;
                *(undefined1 *)puVar12 = 0;
                param_1[3] = puVar12[3];
                uVar14 = puVar12[4];
                *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar12 + 5);
                param_1[4] = uVar14;
                puVar12 = puVar12 + 6;
              }
              param_1 = param_1 + 6;
              puVar23 = param_4;
              if (puVar20 == puVar12) goto joined_r0x00010a7afc3c;
            }
            FUN_10a7afc84(puVar12,puVar20,param_1);
          }
          param_4 = (undefined8 *)CONCAT17(uStack_81,uStack_88);
          puVar23 = param_4;
joined_r0x00010a7afc3c:
          while (puVar23 != (undefined8 *)0x0) {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              __ZdlPv(*param_4);
            }
            param_4 = param_4 + 6;
            puVar21 = (undefined8 *)((long)puVar21 + -1);
            puVar23 = puVar21;
          }
          return;
        }
        if (puVar23 == (undefined8 *)0x0) {
          return;
        }
        lVar19 = 0;
        lVar10 = -(long)puVar23;
        while (puVar12 = (undefined8 *)((long)param_1 + lVar19),
              *(uint *)((long)puVar12 + 0x24) <= *(uint *)((long)puVar7 + 0x24)) {
          lVar19 = lVar19 + 0x30;
          bVar5 = lVar10 == -1;
          lVar10 = lVar10 + 1;
          if (bVar5) {
            return;
          }
        }
        if (-lVar10 < (long)puVar21) {
          puVar11 = (undefined8 *)((long)puVar21 / 2);
          puVar8 = puVar7 + (long)puVar11 * 6;
          puVar4 = (undefined1 *)((long)puVar7 + (-lVar19 - (long)param_1));
          puVar18 = puVar7;
          if (puVar4 != (undefined1 *)0x0) {
            uVar9 = ((long)puVar4 >> 4) * -0x5555555555555555;
            puVar18 = puVar12;
            do {
              uVar16 = uVar9 >> 1;
              uVar17 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
              uVar9 = uVar16;
              if (*(uint *)((long)puVar18 + uVar16 * 0x30 + 0x24) <= *(uint *)((long)puVar8 + 0x24))
              {
                uVar9 = uVar17;
                puVar18 = puVar18 + uVar16 * 6 + 6;
              }
            } while (uVar9 != 0);
          }
          puVar23 = (undefined8 *)
                    (((long)((long)puVar18 + (-lVar19 - (long)param_1)) >> 4) * -0x5555555555555555)
          ;
        }
        else {
          if (lVar10 == -1) {
            param_1 = (undefined8 *)((long)param_1 + lVar19);
            goto code_r0x00010a7af190;
          }
          puVar23 = (undefined8 *)(-lVar10 / 2);
          puVar8 = puVar6;
          if ((long)puVar6 - (long)puVar7 != 0) {
            uVar9 = ((long)puVar6 - (long)puVar7 >> 4) * -0x5555555555555555;
            puVar20 = puVar7;
            do {
              uVar17 = uVar9 >> 1;
              puVar8 = puVar20 + uVar17 * 6 + 6;
              uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
              if (*(uint *)((long)param_1 + lVar19 + (long)puVar23 * 0x30 + 0x24) <=
                  *(uint *)((long)puVar20 + uVar17 * 0x30 + 0x24)) {
                puVar8 = puVar20;
                uVar9 = uVar17;
              }
              puVar20 = puVar8;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)(((long)puVar8 - (long)puVar7 >> 4) * -0x5555555555555555);
          puVar18 = (undefined8 *)((long)param_1 + lVar19 + (long)puVar23 * 0x30);
        }
        param_1 = puVar8;
        if ((puVar18 != puVar7) && (param_1 = puVar18, puVar8 != puVar7)) {
          puStack_90 = puVar6;
          FUN_10a7af190(puVar18,puVar7);
          puVar6 = puVar7;
          while( true ) {
            puVar7 = puVar7 + 6;
            param_1 = param_1 + 6;
            if (puVar7 == puVar8) break;
            puVar20 = puVar7;
            if (param_1 != puVar6) {
              puVar20 = puVar6;
            }
            FUN_10a7af190(param_1,puVar7);
            puVar6 = puVar20;
          }
          puVar7 = param_1;
          puVar20 = puVar6;
          if (param_1 != puVar6) {
            do {
              while( true ) {
                puVar22 = puVar20;
                FUN_10a7af190(puVar7,puVar6);
                puVar7 = puVar7 + 6;
                puVar6 = puVar6 + 6;
                if (puVar6 == puVar8) break;
                puVar20 = puVar6;
                if (puVar7 != puVar22) {
                  puVar20 = puVar22;
                }
              }
              puVar6 = puVar22;
              puVar20 = puVar22;
            } while (puVar7 != puVar22);
          }
          param_4 = (undefined8 *)CONCAT17(uStack_81,uStack_88);
          puVar6 = puStack_90;
        }
        puVar22 = (undefined8 *)-((long)puVar23 + lVar10);
        if ((long)((long)puVar23 + (long)puVar11) <
            (long)((long)puVar21 + (-lVar10 - ((long)puVar23 + (long)puVar11)))) {
          param_2 = param_1;
          FUN_10a7af6f0(puVar12,puVar18);
          puVar20 = puVar23;
          puVar21 = (undefined8 *)((long)puVar21 - (long)puVar11);
          puVar7 = puVar8;
          puVar23 = puVar22;
        }
        else {
          FUN_10a7af6f0(param_1,puVar8,puVar6,puVar22,(undefined8 *)((long)puVar21 - (long)puVar11),
                        param_4);
          param_2 = puVar6;
          puVar20 = puVar22;
          puVar6 = param_1;
          puVar21 = puVar11;
          param_1 = puVar12;
          puVar7 = puVar18;
        }
        param_4 = (undefined8 *)CONCAT17(uStack_81,uStack_88);
        if (puVar21 == (undefined8 *)0x0) {
          return;
        }
      } while( true );
    }
  }
  goto LAB_10a7af158;
LAB_10a7af0d8:
  for (; unaff_x25 != unaff_x23; unaff_x25 = unaff_x25 + 6) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar6 = (undefined8 *)*param_1;
      __ZdlPv();
    }
    uVar25 = unaff_x25[1];
    uVar14 = *unaff_x25;
    param_1[2] = unaff_x25[2];
    param_1[1] = uVar25;
    *param_1 = uVar14;
    *(undefined1 *)((long)unaff_x25 + 0x17) = 0;
    *(undefined1 *)unaff_x25 = 0;
    param_1[3] = unaff_x25[3];
    uVar14 = unaff_x25[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x25 + 5);
    param_1[4] = uVar14;
    param_1 = param_1 + 6;
  }
LAB_10a7af134:
  puVar7 = param_2;
  unaff_x20 = param_4;
  unaff_x21 = param_3;
  unaff_x26 = puVar12;
  if (param_4 != (undefined8 *)0x0) {
    do {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        puVar6 = (undefined8 *)*param_4;
        __ZdlPv();
      }
      param_4 = param_4 + 6;
      param_3 = (undefined8 *)((long)param_3 + -1);
    } while (param_3 != (undefined8 *)0x0);
    puVar7 = param_2;
    unaff_x20 = param_4;
    unaff_x21 = (undefined8 *)0x0;
  }
LAB_10a7aed50:
  puVar8 = puVar21;
  puVar18 = unaff_x20;
  puVar11 = unaff_x21;
  param_2 = puVar20;
  param_5 = unaff_x23;
  puVar20 = unaff_x24;
  puVar21 = unaff_x25;
  puVar12 = unaff_x26;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
LAB_10a7af158:
  unaff_x26 = puVar12;
  unaff_x25 = puVar21;
  unaff_x24 = puVar20;
  unaff_x23 = param_5;
  unaff_x22 = param_2;
  unaff_x21 = puVar11;
  unaff_x20 = puVar18;
  ___stack_chk_fail();
  if ((unaff_x20 != (undefined8 *)0x0) && (puVar21 = unaff_x24, unaff_x21 != (undefined8 *)0x1)) {
    do {
      if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
        __ZdlPv(*unaff_x20);
      }
      unaff_x20 = unaff_x20 + 6;
      puVar21 = (undefined8 *)((long)puVar21 + -1);
      unaff_x24 = (undefined8 *)0x0;
    } while (puVar21 != (undefined8 *)0x0);
  }
  unaff_x30 = FUN_10a7af190;
  param_1 = puVar6;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)&puStack_90;
  param_2 = puVar8;
  puVar20 = puVar23;
  unaff_x19 = puVar6;
  unaff_x29 = puVar4;
code_r0x00010a7af190:
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *param_1;
  *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
  *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar25 = param_1[3];
  *(undefined8 *)((long)register0x00000008 + -0x68) = param_1[4];
  *(undefined4 *)((long)register0x00000008 + -0x60) = *(undefined4 *)(param_1 + 5);
  uVar13 = puVar7[2];
  uVar24 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar24;
  param_1[2] = uVar13;
  *(undefined1 *)((long)puVar7 + 0x17) = 0;
  *(undefined1 *)puVar7 = 0;
  param_1[3] = puVar7[3];
  puVar21 = puVar7 + 4;
  uVar13 = *puVar21;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar7 + 5);
  param_1[4] = uVar13;
  puVar6 = puVar7;
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    param_1 = (undefined8 *)*puVar7;
    __ZdlPv();
  }
  uVar13 = *(undefined8 *)((long)register0x00000008 + -0x58);
  *puVar7 = uVar14;
  puVar7[1] = uVar13;
  *(undefined8 *)((long)puVar7 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
  *(byte *)((long)puVar7 + 0x17) = bVar3;
  puVar7[3] = uVar25;
  *puVar21 = *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((long)register0x00000008 + -0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 **)((long)register0x00000008 + -0xc0) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0xb8) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0xb0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar21;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar25;
  *(ulong *)((long)register0x00000008 + -0x98) = (ulong)bVar3;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar14;
  *(undefined8 **)((long)register0x00000008 + -0x88) = puVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_10a7af288;
  if (param_2 != (undefined8 *)0x0) {
    if (param_2 == (undefined8 *)0x2) {
      puVar7 = puVar6 + -6;
      if (*(uint *)((long)puVar6 + -0xc) < *(uint *)((long)param_1 + 0x24)) {
        uVar25 = puVar6[-5];
        uVar14 = *puVar7;
        puVar20[2] = puVar6[-4];
        puVar20[1] = uVar25;
        *puVar20 = uVar14;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        *puVar7 = 0;
        puVar20[3] = puVar6[-3];
        uVar14 = puVar6[-2];
        *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(puVar6 + -1);
        puVar20[4] = uVar14;
        uVar25 = param_1[1];
        uVar14 = *param_1;
        puVar20[8] = param_1[2];
        puVar20[7] = uVar25;
        puVar20[6] = uVar14;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar20[9] = param_1[3];
        uVar14 = param_1[4];
        uVar15 = *(undefined4 *)(param_1 + 5);
      }
      else {
        uVar25 = param_1[1];
        uVar14 = *param_1;
        puVar20[2] = param_1[2];
        puVar20[1] = uVar25;
        *puVar20 = uVar14;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar20[3] = param_1[3];
        uVar14 = param_1[4];
        *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 5);
        puVar20[4] = uVar14;
        uVar25 = puVar6[-5];
        uVar14 = *puVar7;
        puVar20[8] = puVar6[-4];
        puVar20[7] = uVar25;
        puVar20[6] = uVar14;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        *puVar7 = 0;
        puVar20[9] = puVar6[-3];
        uVar14 = puVar6[-2];
        uVar15 = *(undefined4 *)(puVar6 + -1);
      }
      *(undefined4 *)(puVar20 + 0xb) = uVar15;
      puVar20[10] = uVar14;
    }
    else if (param_2 == (undefined8 *)0x1) {
      uVar25 = param_1[1];
      uVar14 = *param_1;
      puVar20[2] = param_1[2];
      puVar20[1] = uVar25;
      *puVar20 = uVar14;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puVar20[3] = param_1[3];
      uVar14 = param_1[4];
      *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 5);
      puVar20[4] = uVar14;
    }
    else if ((long)param_2 < 9) {
      if (param_1 != puVar6) {
        uVar25 = param_1[1];
        uVar14 = *param_1;
        puVar20[2] = param_1[2];
        puVar20[1] = uVar25;
        *puVar20 = uVar14;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar20[3] = param_1[3];
        uVar14 = param_1[4];
        *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 5);
        puVar20[4] = uVar14;
        if (param_1 + 6 != puVar6) {
          lVar19 = 0;
          puVar7 = puVar20;
          puVar21 = param_1 + 6;
          do {
            puVar12 = puVar21;
            puVar21 = puVar7 + 6;
            puVar23 = puVar7 + 10;
            if (*(uint *)((long)param_1 + 0x54) < *(uint *)((long)puVar7 + 0x24)) {
              puVar7[7] = puVar7[1];
              *puVar21 = *puVar7;
              *puVar23 = puVar7[4];
              *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(puVar7 + 5);
              puVar7[8] = puVar7[2];
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
              puVar7[9] = puVar7[3];
              puVar23 = puVar20;
              lVar10 = lVar19;
              if (puVar7 != puVar20) {
                do {
                  puVar23 = (undefined8 *)((long)puVar20 + lVar10);
                  if (*(uint *)((long)puVar23 + -0xc) <= *(uint *)((long)param_1 + 0x54)) break;
                  if (*(char *)((long)puVar23 + 0x17) < '\0') {
                    __ZdlPv(*puVar23);
                  }
                  puVar23[1] = puVar23[-5];
                  *puVar23 = puVar23[-6];
                  puVar23[2] = puVar23[-4];
                  *(undefined1 *)((long)puVar20 + lVar10 + -0x19) = 0;
                  *(undefined1 *)(puVar23 + -6) = 0;
                  *(undefined8 *)((long)puVar20 + lVar10 + 0x18) =
                       *(undefined8 *)((long)puVar20 + lVar10 + -0x18);
                  *(undefined8 *)((long)puVar20 + lVar10 + 0x20) =
                       *(undefined8 *)((long)puVar20 + lVar10 + -0x10);
                  *(undefined4 *)((long)puVar20 + lVar10 + 0x28) =
                       *(undefined4 *)((long)puVar20 + lVar10 + -8);
                  lVar10 = lVar10 + -0x30;
                  puVar23 = puVar20;
                } while (lVar10 != 0);
              }
              if (*(char *)((long)puVar23 + 0x17) < '\0') {
                __ZdlPv(*puVar23);
              }
              uVar25 = puVar12[1];
              uVar14 = *puVar12;
              puVar23[2] = puVar12[2];
              puVar23[1] = uVar25;
              *puVar23 = uVar14;
              *(undefined1 *)((long)param_1 + 0x47) = 0;
              *(undefined1 *)puVar12 = 0;
              puVar23[3] = param_1[9];
              puVar23 = puVar23 + 4;
            }
            else {
              uVar25 = puVar12[1];
              uVar14 = *puVar12;
              puVar7[8] = puVar12[2];
              puVar7[7] = uVar25;
              *puVar21 = uVar14;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              puVar7[9] = param_1[9];
            }
            uVar14 = param_1[10];
            *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(param_1 + 0xb);
            *puVar23 = uVar14;
            lVar19 = lVar19 + 0x30;
            puVar7 = puVar21;
            puVar21 = puVar12 + 6;
            param_1 = puVar12;
          } while (puVar12 + 6 != puVar6);
        }
      }
    }
    else {
      uVar9 = (ulong)param_2 >> 1;
      lVar19 = uVar9 * 2 + ((ulong)param_2 >> 1);
      puVar21 = param_1 + lVar19 * 2;
      FUN_10a7aed14(param_1,puVar21,uVar9,puVar20,uVar9);
      lVar10 = (long)param_2 - ((ulong)param_2 >> 1);
      FUN_10a7aed14(puVar21,puVar6,lVar10,puVar20 + lVar19 * 2,lVar10);
      puVar7 = puVar21;
      do {
        if (puVar7 == puVar6) {
          if (param_1 == puVar21) {
            return;
          }
          lVar19 = 0;
          do {
            puVar7 = (undefined8 *)((long)puVar20 + lVar19);
            puVar6 = (undefined8 *)((long)param_1 + lVar19);
            uVar25 = puVar6[1];
            uVar14 = *puVar6;
            puVar7[2] = puVar6[2];
            puVar7[1] = uVar25;
            *puVar7 = uVar14;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            puVar7[3] = puVar6[3];
            uVar14 = puVar6[4];
            *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar6 + 5);
            puVar7[4] = uVar14;
            lVar19 = lVar19 + 0x30;
          } while (puVar6 + 6 != puVar21);
          return;
        }
        if (*(uint *)((long)puVar7 + 0x24) < *(uint *)((long)param_1 + 0x24)) {
          uVar25 = puVar7[1];
          uVar14 = *puVar7;
          puVar20[2] = puVar7[2];
          puVar20[1] = uVar25;
          *puVar20 = uVar14;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar20[3] = puVar7[3];
          uVar14 = puVar7[4];
          *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(puVar7 + 5);
          puVar20[4] = uVar14;
          puVar7 = puVar7 + 6;
        }
        else {
          uVar25 = param_1[1];
          uVar14 = *param_1;
          puVar20[2] = param_1[2];
          puVar20[1] = uVar25;
          *puVar20 = uVar14;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          puVar20[3] = param_1[3];
          uVar14 = param_1[4];
          *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 5);
          puVar20[4] = uVar14;
          param_1 = param_1 + 6;
        }
        puVar20 = puVar20 + 6;
      } while (param_1 != puVar21);
      if (puVar7 != puVar6) {
        lVar19 = 0;
        do {
          puVar21 = (undefined8 *)((long)puVar7 + lVar19);
          puVar23 = (undefined8 *)((long)puVar20 + lVar19);
          uVar25 = puVar21[1];
          uVar14 = *puVar21;
          puVar23[2] = puVar21[2];
          puVar23[1] = uVar25;
          *puVar23 = uVar14;
          puVar21[1] = 0;
          puVar21[2] = 0;
          *puVar21 = 0;
          puVar23[3] = puVar21[3];
          uVar14 = puVar21[4];
          *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar21 + 5);
          puVar23[4] = uVar14;
          lVar19 = lVar19 + 0x30;
        } while (puVar21 + 6 != puVar6);
      }
    }
  }
  return;
}



/* Entry: 10a7af190; end: 10a7af287;  */

void FUN_10a7af190(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *param_1;
  uStack_58 = (undefined7)param_1[1];
  uVar8 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_51 = (undefined1)uVar8;
  uVar3 = *(undefined1 *)((long)param_1 + 0x17);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar16 = param_1[3];
  uVar2 = param_1[4];
  uVar12 = *(undefined4 *)(param_1 + 5);
  uVar9 = param_2[2];
  uVar15 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[2] = uVar9;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  param_1[3] = param_2[3];
  uVar9 = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar9;
  puVar4 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_2;
    __ZdlPv();
  }
  *param_2 = uVar10;
  param_2[1] = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)((long)param_2 + 0xf) = uVar8;
  *(undefined1 *)((long)param_2 + 0x17) = uVar3;
  param_2[3] = uVar16;
  param_2[4] = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != 0) {
    if (param_3 == 2) {
      puVar11 = puVar4 + -6;
      if (*(uint *)((long)puVar4 + -0xc) < *(uint *)((long)param_1 + 0x24)) {
        uVar16 = puVar4[-5];
        uVar10 = *puVar11;
        param_4[2] = puVar4[-4];
        param_4[1] = uVar16;
        *param_4 = uVar10;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        *puVar11 = 0;
        param_4[3] = puVar4[-3];
        uVar10 = puVar4[-2];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar4 + -1);
        param_4[4] = uVar10;
        uVar16 = param_1[1];
        uVar10 = *param_1;
        param_4[8] = param_1[2];
        param_4[7] = uVar16;
        param_4[6] = uVar10;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[9] = param_1[3];
        uVar10 = param_1[4];
        uVar12 = *(undefined4 *)(param_1 + 5);
      }
      else {
        uVar16 = param_1[1];
        uVar10 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar16;
        *param_4 = uVar10;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        uVar10 = param_1[4];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
        param_4[4] = uVar10;
        uVar16 = puVar4[-5];
        uVar10 = *puVar11;
        param_4[8] = puVar4[-4];
        param_4[7] = uVar16;
        param_4[6] = uVar10;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        *puVar11 = 0;
        param_4[9] = puVar4[-3];
        uVar10 = puVar4[-2];
        uVar12 = *(undefined4 *)(puVar4 + -1);
      }
      *(undefined4 *)(param_4 + 0xb) = uVar12;
      param_4[10] = uVar10;
    }
    else if (param_3 == 1) {
      uVar16 = param_1[1];
      uVar10 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar16;
      *param_4 = uVar10;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_4[3] = param_1[3];
      uVar10 = param_1[4];
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
      param_4[4] = uVar10;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != puVar4) {
        uVar16 = param_1[1];
        uVar10 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar16;
        *param_4 = uVar10;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        uVar10 = param_1[4];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
        param_4[4] = uVar10;
        if (param_1 + 6 != puVar4) {
          lVar7 = 0;
          puVar11 = param_4;
          puVar1 = param_1 + 6;
          do {
            puVar14 = puVar1;
            puVar1 = puVar11 + 6;
            puVar13 = puVar11 + 10;
            if (*(uint *)((long)param_1 + 0x54) < *(uint *)((long)puVar11 + 0x24)) {
              puVar11[7] = puVar11[1];
              *puVar1 = *puVar11;
              *puVar13 = puVar11[4];
              *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 5);
              puVar11[8] = puVar11[2];
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = 0;
              puVar11[9] = puVar11[3];
              puVar13 = param_4;
              lVar6 = lVar7;
              if (puVar11 != param_4) {
                do {
                  puVar13 = (undefined8 *)((long)param_4 + lVar6);
                  if (*(uint *)((long)puVar13 + -0xc) <= *(uint *)((long)param_1 + 0x54)) break;
                  if (*(char *)((long)puVar13 + 0x17) < '\0') {
                    __ZdlPv(*puVar13);
                  }
                  puVar13[1] = puVar13[-5];
                  *puVar13 = puVar13[-6];
                  puVar13[2] = puVar13[-4];
                  *(undefined1 *)((long)param_4 + lVar6 + -0x19) = 0;
                  *(undefined1 *)(puVar13 + -6) = 0;
                  *(undefined8 *)((long)param_4 + lVar6 + 0x18) =
                       *(undefined8 *)((long)param_4 + lVar6 + -0x18);
                  *(undefined8 *)((long)param_4 + lVar6 + 0x20) =
                       *(undefined8 *)((long)param_4 + lVar6 + -0x10);
                  *(undefined4 *)((long)param_4 + lVar6 + 0x28) =
                       *(undefined4 *)((long)param_4 + lVar6 + -8);
                  lVar6 = lVar6 + -0x30;
                  puVar13 = param_4;
                } while (lVar6 != 0);
              }
              if (*(char *)((long)puVar13 + 0x17) < '\0') {
                __ZdlPv(*puVar13);
              }
              uVar16 = puVar14[1];
              uVar10 = *puVar14;
              puVar13[2] = puVar14[2];
              puVar13[1] = uVar16;
              *puVar13 = uVar10;
              *(undefined1 *)((long)param_1 + 0x47) = 0;
              *(undefined1 *)puVar14 = 0;
              puVar13[3] = param_1[9];
              puVar13 = puVar13 + 4;
            }
            else {
              uVar16 = puVar14[1];
              uVar10 = *puVar14;
              puVar11[8] = puVar14[2];
              puVar11[7] = uVar16;
              *puVar1 = uVar10;
              puVar14[1] = 0;
              puVar14[2] = 0;
              *puVar14 = 0;
              puVar11[9] = param_1[9];
            }
            uVar10 = param_1[10];
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_1 + 0xb);
            *puVar13 = uVar10;
            lVar7 = lVar7 + 0x30;
            puVar11 = puVar1;
            puVar1 = puVar14 + 6;
            param_1 = puVar14;
          } while (puVar14 + 6 != puVar4);
        }
      }
    }
    else {
      uVar5 = param_3 >> 1;
      lVar7 = uVar5 * 2 + (param_3 >> 1);
      puVar1 = param_1 + lVar7 * 2;
      FUN_10a7aed14(param_1,puVar1,uVar5,param_4,uVar5);
      lVar6 = param_3 - (param_3 >> 1);
      FUN_10a7aed14(puVar1,puVar4,lVar6,param_4 + lVar7 * 2,lVar6);
      puVar11 = puVar1;
      do {
        if (puVar11 == puVar4) {
          if (param_1 == puVar1) {
            return;
          }
          lVar7 = 0;
          do {
            puVar4 = (undefined8 *)((long)param_4 + lVar7);
            puVar11 = (undefined8 *)((long)param_1 + lVar7);
            uVar16 = puVar11[1];
            uVar10 = *puVar11;
            puVar4[2] = puVar11[2];
            puVar4[1] = uVar16;
            *puVar4 = uVar10;
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = 0;
            puVar4[3] = puVar11[3];
            uVar10 = puVar11[4];
            *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar11 + 5);
            puVar4[4] = uVar10;
            lVar7 = lVar7 + 0x30;
          } while (puVar11 + 6 != puVar1);
          return;
        }
        if (*(uint *)((long)puVar11 + 0x24) < *(uint *)((long)param_1 + 0x24)) {
          uVar16 = puVar11[1];
          uVar10 = *puVar11;
          param_4[2] = puVar11[2];
          param_4[1] = uVar16;
          *param_4 = uVar10;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
          param_4[3] = puVar11[3];
          uVar10 = puVar11[4];
          *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar11 + 5);
          param_4[4] = uVar10;
          puVar11 = puVar11 + 6;
        }
        else {
          uVar16 = param_1[1];
          uVar10 = *param_1;
          param_4[2] = param_1[2];
          param_4[1] = uVar16;
          *param_4 = uVar10;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          param_4[3] = param_1[3];
          uVar10 = param_1[4];
          *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
          param_4[4] = uVar10;
          param_1 = param_1 + 6;
        }
        param_4 = param_4 + 6;
      } while (param_1 != puVar1);
      if (puVar11 != puVar4) {
        lVar7 = 0;
        do {
          puVar1 = (undefined8 *)((long)puVar11 + lVar7);
          puVar13 = (undefined8 *)((long)param_4 + lVar7);
          uVar16 = puVar1[1];
          uVar10 = *puVar1;
          puVar13[2] = puVar1[2];
          puVar13[1] = uVar16;
          *puVar13 = uVar10;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = 0;
          puVar13[3] = puVar1[3];
          uVar10 = puVar1[4];
          *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar1 + 5);
          puVar13[4] = uVar10;
          lVar7 = lVar7 + 0x30;
        } while (puVar1 + 6 != puVar4);
      }
    }
  }
  return;
}



/* Entry: 10a7af288; end: 10a7af6ef;  */

void FUN_10a7af288(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      puVar5 = param_2 + -6;
      if (*(uint *)((long)param_2 + -0xc) < *(uint *)((long)param_1 + 0x24)) {
        uVar10 = param_2[-5];
        uVar4 = *puVar5;
        param_4[2] = param_2[-4];
        param_4[1] = uVar10;
        *param_4 = uVar4;
        param_2[-5] = 0;
        param_2[-4] = 0;
        *puVar5 = 0;
        param_4[3] = param_2[-3];
        uVar4 = param_2[-2];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_2 + -1);
        param_4[4] = uVar4;
        uVar10 = param_1[1];
        uVar4 = *param_1;
        param_4[8] = param_1[2];
        param_4[7] = uVar10;
        param_4[6] = uVar4;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[9] = param_1[3];
        uVar4 = param_1[4];
        uVar6 = *(undefined4 *)(param_1 + 5);
      }
      else {
        uVar10 = param_1[1];
        uVar4 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar10;
        *param_4 = uVar4;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        uVar4 = param_1[4];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
        param_4[4] = uVar4;
        uVar10 = param_2[-5];
        uVar4 = *puVar5;
        param_4[8] = param_2[-4];
        param_4[7] = uVar10;
        param_4[6] = uVar4;
        param_2[-5] = 0;
        param_2[-4] = 0;
        *puVar5 = 0;
        param_4[9] = param_2[-3];
        uVar4 = param_2[-2];
        uVar6 = *(undefined4 *)(param_2 + -1);
      }
      *(undefined4 *)(param_4 + 0xb) = uVar6;
      param_4[10] = uVar4;
    }
    else if (param_3 == 1) {
      uVar10 = param_1[1];
      uVar4 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar10;
      *param_4 = uVar4;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_4[3] = param_1[3];
      uVar4 = param_1[4];
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
      param_4[4] = uVar4;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        uVar10 = param_1[1];
        uVar4 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar10;
        *param_4 = uVar4;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        uVar4 = param_1[4];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
        param_4[4] = uVar4;
        if (param_1 + 6 != param_2) {
          lVar9 = 0;
          puVar5 = param_4;
          puVar1 = param_1 + 6;
          do {
            puVar8 = puVar1;
            puVar1 = puVar5 + 6;
            puVar7 = puVar5 + 10;
            if (*(uint *)((long)param_1 + 0x54) < *(uint *)((long)puVar5 + 0x24)) {
              puVar5[7] = puVar5[1];
              *puVar1 = *puVar5;
              *puVar7 = puVar5[4];
              *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(puVar5 + 5);
              puVar5[8] = puVar5[2];
              puVar5[1] = 0;
              puVar5[2] = 0;
              *puVar5 = 0;
              puVar5[9] = puVar5[3];
              puVar7 = param_4;
              lVar3 = lVar9;
              if (puVar5 != param_4) {
                do {
                  puVar7 = (undefined8 *)((long)param_4 + lVar3);
                  if (*(uint *)((long)puVar7 + -0xc) <= *(uint *)((long)param_1 + 0x54)) break;
                  if (*(char *)((long)puVar7 + 0x17) < '\0') {
                    __ZdlPv(*puVar7);
                  }
                  puVar7[1] = puVar7[-5];
                  *puVar7 = puVar7[-6];
                  puVar7[2] = puVar7[-4];
                  *(undefined1 *)((long)param_4 + lVar3 + -0x19) = 0;
                  *(undefined1 *)(puVar7 + -6) = 0;
                  *(undefined8 *)((long)param_4 + lVar3 + 0x18) =
                       *(undefined8 *)((long)param_4 + lVar3 + -0x18);
                  *(undefined8 *)((long)param_4 + lVar3 + 0x20) =
                       *(undefined8 *)((long)param_4 + lVar3 + -0x10);
                  *(undefined4 *)((long)param_4 + lVar3 + 0x28) =
                       *(undefined4 *)((long)param_4 + lVar3 + -8);
                  lVar3 = lVar3 + -0x30;
                  puVar7 = param_4;
                } while (lVar3 != 0);
              }
              if (*(char *)((long)puVar7 + 0x17) < '\0') {
                __ZdlPv(*puVar7);
              }
              uVar10 = puVar8[1];
              uVar4 = *puVar8;
              puVar7[2] = puVar8[2];
              puVar7[1] = uVar10;
              *puVar7 = uVar4;
              *(undefined1 *)((long)param_1 + 0x47) = 0;
              *(undefined1 *)puVar8 = 0;
              puVar7[3] = param_1[9];
              puVar7 = puVar7 + 4;
            }
            else {
              uVar10 = puVar8[1];
              uVar4 = *puVar8;
              puVar5[8] = puVar8[2];
              puVar5[7] = uVar10;
              *puVar1 = uVar4;
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = 0;
              puVar5[9] = param_1[9];
            }
            uVar4 = param_1[10];
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_1 + 0xb);
            *puVar7 = uVar4;
            lVar9 = lVar9 + 0x30;
            puVar5 = puVar1;
            puVar1 = puVar8 + 6;
            param_1 = puVar8;
          } while (puVar8 + 6 != param_2);
        }
      }
    }
    else {
      uVar2 = param_3 >> 1;
      lVar9 = uVar2 * 2 + (param_3 >> 1);
      puVar1 = param_1 + lVar9 * 2;
      FUN_10a7aed14(param_1,puVar1,uVar2,param_4,uVar2);
      lVar3 = param_3 - (param_3 >> 1);
      FUN_10a7aed14(puVar1,param_2,lVar3,param_4 + lVar9 * 2,lVar3);
      puVar5 = puVar1;
      do {
        if (puVar5 == param_2) {
          if (param_1 == puVar1) {
            return;
          }
          lVar9 = 0;
          do {
            puVar5 = (undefined8 *)((long)param_4 + lVar9);
            puVar7 = (undefined8 *)((long)param_1 + lVar9);
            uVar10 = puVar7[1];
            uVar4 = *puVar7;
            puVar5[2] = puVar7[2];
            puVar5[1] = uVar10;
            *puVar5 = uVar4;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            puVar5[3] = puVar7[3];
            uVar4 = puVar7[4];
            *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar7 + 5);
            puVar5[4] = uVar4;
            lVar9 = lVar9 + 0x30;
          } while (puVar7 + 6 != puVar1);
          return;
        }
        if (*(uint *)((long)puVar5 + 0x24) < *(uint *)((long)param_1 + 0x24)) {
          uVar10 = puVar5[1];
          uVar4 = *puVar5;
          param_4[2] = puVar5[2];
          param_4[1] = uVar10;
          *param_4 = uVar4;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          param_4[3] = puVar5[3];
          uVar4 = puVar5[4];
          *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar5 + 5);
          param_4[4] = uVar4;
          puVar5 = puVar5 + 6;
        }
        else {
          uVar10 = param_1[1];
          uVar4 = *param_1;
          param_4[2] = param_1[2];
          param_4[1] = uVar10;
          *param_4 = uVar4;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          param_4[3] = param_1[3];
          uVar4 = param_1[4];
          *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
          param_4[4] = uVar4;
          param_1 = param_1 + 6;
        }
        param_4 = param_4 + 6;
      } while (param_1 != puVar1);
      if (puVar5 != param_2) {
        lVar9 = 0;
        do {
          puVar1 = (undefined8 *)((long)puVar5 + lVar9);
          puVar7 = (undefined8 *)((long)param_4 + lVar9);
          uVar10 = puVar1[1];
          uVar4 = *puVar1;
          puVar7[2] = puVar1[2];
          puVar7[1] = uVar10;
          *puVar7 = uVar4;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = 0;
          puVar7[3] = puVar1[3];
          uVar4 = puVar1[4];
          *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar1 + 5);
          puVar7[4] = uVar4;
          lVar9 = lVar9 + 0x30;
        } while (puVar1 + 6 != param_2);
      }
    }
  }
  return;
}



/* Entry: 10a7af6f0; end: 10a7afc83;  */

/* WARNING: Removing unreachable block (ram,0x00010a7afa60) */

void FUN_10a7af6f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  puVar23 = param_4;
  puVar7 = param_3;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if (((long)puVar23 <= param_7) || (param_5 <= param_7)) break;
    if (puVar23 == (undefined8 *)0x0) {
      return;
    }
    lVar12 = 0;
    lVar18 = -(long)puVar23;
    while (puVar1 = (undefined8 *)((long)param_1 + lVar12),
          *(uint *)((long)puVar1 + 0x24) <= *(uint *)((long)param_2 + 0x24)) {
      lVar12 = lVar12 + 0x30;
      bVar6 = lVar18 == -1;
      lVar18 = lVar18 + 1;
      if (bVar6) {
        return;
      }
    }
    if (-lVar18 < param_5) {
      lVar8 = param_5 / 2;
      puVar13 = param_2 + lVar8 * 6;
      lVar3 = (long)param_2 + (-lVar12 - (long)param_1);
      puVar19 = param_2;
      if (lVar3 != 0) {
        uVar15 = (lVar3 >> 4) * -0x5555555555555555;
        puVar19 = puVar1;
        do {
          uVar16 = uVar15 >> 1;
          uVar17 = uVar15 + (uVar15 >> 1 ^ 0xffffffffffffffff);
          uVar15 = uVar16;
          if (*(uint *)((long)puVar19 + uVar16 * 0x30 + 0x24) <= *(uint *)((long)puVar13 + 0x24)) {
            uVar15 = uVar17;
            puVar19 = puVar19 + uVar16 * 6 + 6;
          }
        } while (uVar15 != 0);
      }
      puVar23 = (undefined8 *)
                (((long)puVar19 + (-lVar12 - (long)param_1) >> 4) * -0x5555555555555555);
    }
    else {
      if (lVar18 == -1) {
        param_1 = (undefined8 *)((long)param_1 + lVar12);
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar11 = *param_1;
        uStack_58 = (undefined7)param_1[1];
        uVar9 = *(undefined8 *)((long)param_1 + 0xf);
        uStack_51 = (undefined1)uVar9;
        uVar2 = *(undefined1 *)((long)param_1 + 0x17);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        uVar25 = param_1[3];
        uStack_68 = param_1[4];
        uVar14 = *(undefined4 *)(param_1 + 5);
        uVar10 = param_2[2];
        uVar24 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar24;
        param_1[2] = uVar10;
        *(undefined1 *)((long)param_2 + 0x17) = 0;
        *(undefined1 *)param_2 = 0;
        param_1[3] = param_2[3];
        uVar10 = param_2[4];
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
        param_1[4] = uVar10;
        puVar23 = param_2;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          param_1 = (undefined8 *)*param_2;
          __ZdlPv();
        }
        *param_2 = uVar11;
        param_2[1] = CONCAT17(uStack_51,uStack_58);
        *(undefined8 *)((long)param_2 + 0xf) = uVar9;
        *(undefined1 *)((long)param_2 + 0x17) = uVar2;
        param_2[3] = uVar25;
        param_2[4] = uStack_68;
        *(undefined4 *)(param_2 + 5) = uVar14;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
          return;
        }
        ___stack_chk_fail();
        pcStack_78 = FUN_10a7af288;
        if (param_3 == (undefined8 *)0x0) {
          return;
        }
        if (param_3 == (undefined8 *)0x2) {
          puVar7 = puVar23 + -6;
          if (*(uint *)((long)puVar23 + -0xc) < *(uint *)((long)param_1 + 0x24)) {
            uVar25 = puVar23[-5];
            uVar11 = *puVar7;
            param_4[2] = puVar23[-4];
            param_4[1] = uVar25;
            *param_4 = uVar11;
            puVar23[-5] = 0;
            puVar23[-4] = 0;
            *puVar7 = 0;
            param_4[3] = puVar23[-3];
            uVar11 = puVar23[-2];
            *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar23 + -1);
            param_4[4] = uVar11;
            uVar25 = param_1[1];
            uVar11 = *param_1;
            param_4[8] = param_1[2];
            param_4[7] = uVar25;
            param_4[6] = uVar11;
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            param_4[9] = param_1[3];
            uVar11 = param_1[4];
            uVar14 = *(undefined4 *)(param_1 + 5);
          }
          else {
            uVar25 = param_1[1];
            uVar11 = *param_1;
            param_4[2] = param_1[2];
            param_4[1] = uVar25;
            *param_4 = uVar11;
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            param_4[3] = param_1[3];
            uVar11 = param_1[4];
            *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
            param_4[4] = uVar11;
            uVar25 = puVar23[-5];
            uVar11 = *puVar7;
            param_4[8] = puVar23[-4];
            param_4[7] = uVar25;
            param_4[6] = uVar11;
            puVar23[-5] = 0;
            puVar23[-4] = 0;
            *puVar7 = 0;
            param_4[9] = puVar23[-3];
            uVar11 = puVar23[-2];
            uVar14 = *(undefined4 *)(puVar23 + -1);
          }
          *(undefined4 *)(param_4 + 0xb) = uVar14;
          param_4[10] = uVar11;
          return;
        }
        if (param_3 == (undefined8 *)0x1) {
          uVar25 = param_1[1];
          uVar11 = *param_1;
          param_4[2] = param_1[2];
          param_4[1] = uVar25;
          *param_4 = uVar11;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          param_4[3] = param_1[3];
          uVar11 = param_1[4];
          *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
          param_4[4] = uVar11;
          return;
        }
        puStack_80 = &stack0xfffffffffffffff0;
        if (8 < (long)param_3) {
          uVar15 = (ulong)param_3 >> 1;
          lVar12 = uVar15 * 2 + ((ulong)param_3 >> 1);
          puVar1 = param_1 + lVar12 * 2;
          FUN_10a7aed14(param_1,puVar1,uVar15,param_4,uVar15);
          lVar18 = (long)param_3 - ((ulong)param_3 >> 1);
          FUN_10a7aed14(puVar1,puVar23,lVar18,param_4 + lVar12 * 2,lVar18);
          puVar7 = puVar1;
          do {
            if (puVar7 == puVar23) {
              if (param_1 == puVar1) {
                return;
              }
              lVar12 = 0;
              do {
                puVar23 = (undefined8 *)((long)param_4 + lVar12);
                puVar7 = (undefined8 *)((long)param_1 + lVar12);
                uVar25 = puVar7[1];
                uVar11 = *puVar7;
                puVar23[2] = puVar7[2];
                puVar23[1] = uVar25;
                *puVar23 = uVar11;
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                puVar23[3] = puVar7[3];
                uVar11 = puVar7[4];
                *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar7 + 5);
                puVar23[4] = uVar11;
                lVar12 = lVar12 + 0x30;
              } while (puVar7 + 6 != puVar1);
              return;
            }
            if (*(uint *)((long)puVar7 + 0x24) < *(uint *)((long)param_1 + 0x24)) {
              uVar25 = puVar7[1];
              uVar11 = *puVar7;
              param_4[2] = puVar7[2];
              param_4[1] = uVar25;
              *param_4 = uVar11;
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
              param_4[3] = puVar7[3];
              uVar11 = puVar7[4];
              *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar7 + 5);
              param_4[4] = uVar11;
              puVar7 = puVar7 + 6;
            }
            else {
              uVar25 = param_1[1];
              uVar11 = *param_1;
              param_4[2] = param_1[2];
              param_4[1] = uVar25;
              *param_4 = uVar11;
              param_1[1] = 0;
              param_1[2] = 0;
              *param_1 = 0;
              param_4[3] = param_1[3];
              uVar11 = param_1[4];
              *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
              param_4[4] = uVar11;
              param_1 = param_1 + 6;
            }
            param_4 = param_4 + 6;
          } while (param_1 != puVar1);
          if (puVar7 != puVar23) {
            lVar12 = 0;
            do {
              puVar1 = (undefined8 *)((long)puVar7 + lVar12);
              puVar13 = (undefined8 *)((long)param_4 + lVar12);
              uVar25 = puVar1[1];
              uVar11 = *puVar1;
              puVar13[2] = puVar1[2];
              puVar13[1] = uVar25;
              *puVar13 = uVar11;
              puVar1[1] = 0;
              puVar1[2] = 0;
              *puVar1 = 0;
              puVar13[3] = puVar1[3];
              uVar11 = puVar1[4];
              *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar1 + 5);
              puVar13[4] = uVar11;
              lVar12 = lVar12 + 0x30;
            } while (puVar1 + 6 != puVar23);
          }
          return;
        }
        if (param_1 == puVar23) {
          return;
        }
        uVar25 = param_1[1];
        uVar11 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar25;
        *param_4 = uVar11;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        uVar11 = param_1[4];
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_1 + 5);
        param_4[4] = uVar11;
        if (param_1 + 6 == puVar23) {
          return;
        }
        lVar12 = 0;
        puVar7 = param_4;
        puVar1 = param_1 + 6;
        do {
          puVar19 = puVar1;
          puVar1 = puVar7 + 6;
          puVar13 = puVar7 + 10;
          if (*(uint *)((long)param_1 + 0x54) < *(uint *)((long)puVar7 + 0x24)) {
            puVar7[7] = puVar7[1];
            *puVar1 = *puVar7;
            *puVar13 = puVar7[4];
            *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(puVar7 + 5);
            puVar7[8] = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            puVar7[9] = puVar7[3];
            puVar13 = param_4;
            lVar18 = lVar12;
            if (puVar7 != param_4) {
              do {
                puVar13 = (undefined8 *)((long)param_4 + lVar18);
                if (*(uint *)((long)puVar13 + -0xc) <= *(uint *)((long)param_1 + 0x54)) break;
                if (*(char *)((long)puVar13 + 0x17) < '\0') {
                  __ZdlPv(*puVar13);
                }
                puVar13[1] = puVar13[-5];
                *puVar13 = puVar13[-6];
                puVar13[2] = puVar13[-4];
                *(undefined1 *)((long)param_4 + lVar18 + -0x19) = 0;
                *(undefined1 *)(puVar13 + -6) = 0;
                *(undefined8 *)((long)param_4 + lVar18 + 0x18) =
                     *(undefined8 *)((long)param_4 + lVar18 + -0x18);
                *(undefined8 *)((long)param_4 + lVar18 + 0x20) =
                     *(undefined8 *)((long)param_4 + lVar18 + -0x10);
                *(undefined4 *)((long)param_4 + lVar18 + 0x28) =
                     *(undefined4 *)((long)param_4 + lVar18 + -8);
                lVar18 = lVar18 + -0x30;
                puVar13 = param_4;
              } while (lVar18 != 0);
            }
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              __ZdlPv(*puVar13);
            }
            uVar25 = puVar19[1];
            uVar11 = *puVar19;
            puVar13[2] = puVar19[2];
            puVar13[1] = uVar25;
            *puVar13 = uVar11;
            *(undefined1 *)((long)param_1 + 0x47) = 0;
            *(undefined1 *)puVar19 = 0;
            puVar13[3] = param_1[9];
            puVar13 = puVar13 + 4;
          }
          else {
            uVar25 = puVar19[1];
            uVar11 = *puVar19;
            puVar7[8] = puVar19[2];
            puVar7[7] = uVar25;
            *puVar1 = uVar11;
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            puVar7[9] = param_1[9];
          }
          uVar11 = param_1[10];
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_1 + 0xb);
          *puVar13 = uVar11;
          lVar12 = lVar12 + 0x30;
          puVar7 = puVar1;
          puVar1 = puVar19 + 6;
          param_1 = puVar19;
          if (puVar19 + 6 == puVar23) {
            return;
          }
        } while( true );
      }
      puVar23 = (undefined8 *)(-lVar18 / 2);
      puVar13 = puVar7;
      if ((long)puVar7 - (long)param_2 != 0) {
        uVar15 = ((long)puVar7 - (long)param_2 >> 4) * -0x5555555555555555;
        puVar19 = param_2;
        do {
          uVar17 = uVar15 >> 1;
          puVar13 = puVar19 + uVar17 * 6 + 6;
          uVar15 = uVar15 + (uVar15 >> 1 ^ 0xffffffffffffffff);
          if (*(uint *)((long)param_1 + lVar12 + (long)puVar23 * 0x30 + 0x24) <=
              *(uint *)((long)puVar19 + uVar17 * 0x30 + 0x24)) {
            puVar13 = puVar19;
            uVar15 = uVar17;
          }
          puVar19 = puVar13;
        } while (uVar15 != 0);
      }
      lVar8 = ((long)puVar13 - (long)param_2 >> 4) * -0x5555555555555555;
      puVar19 = (undefined8 *)((long)param_1 + lVar12 + (long)puVar23 * 0x30);
    }
    param_1 = puVar13;
    if ((puVar19 != param_2) && (param_1 = puVar19, puVar13 != param_2)) {
      FUN_10a7af190(puVar19,param_2);
      puVar22 = param_2;
      while( true ) {
        param_2 = param_2 + 6;
        param_1 = param_1 + 6;
        if (param_2 == puVar13) break;
        puVar20 = param_2;
        if (param_1 != puVar22) {
          puVar20 = puVar22;
        }
        FUN_10a7af190(param_1,param_2);
        puVar22 = puVar20;
      }
      puVar20 = param_1;
      puVar4 = puVar22;
      if (param_1 != puVar22) {
        do {
          while( true ) {
            puVar21 = puVar4;
            FUN_10a7af190(puVar20,puVar22);
            puVar20 = puVar20 + 6;
            puVar22 = puVar22 + 6;
            if (puVar22 == puVar13) break;
            puVar4 = puVar22;
            if (puVar20 != puVar21) {
              puVar4 = puVar21;
            }
          }
          puVar22 = puVar21;
          puVar4 = puVar21;
        } while (puVar20 != puVar21);
      }
    }
    puVar22 = (undefined8 *)-((long)puVar23 + lVar18);
    if ((long)puVar23 + lVar8 < (param_5 - ((long)puVar23 + lVar8)) - lVar18) {
      param_3 = param_1;
      FUN_10a7af6f0(puVar1,puVar19);
      param_5 = param_5 - lVar8;
      param_4 = puVar23;
      puVar23 = puVar22;
      param_2 = puVar13;
    }
    else {
      FUN_10a7af6f0(param_1,puVar13,puVar7,puVar22,param_5 - lVar8,param_6);
      param_5 = lVar8;
      param_4 = puVar22;
      param_3 = puVar7;
      puVar7 = param_1;
      param_2 = puVar19;
      param_1 = puVar1;
    }
  }
  puVar1 = param_6;
  if (param_5 < (long)puVar23) {
    if (puVar7 == param_2) {
      return;
    }
    lVar12 = 0;
    puVar23 = (undefined8 *)0x0;
    do {
      puVar13 = (undefined8 *)((long)param_6 + lVar12);
      puVar19 = (undefined8 *)((long)param_2 + lVar12);
      uVar25 = puVar19[1];
      uVar11 = *puVar19;
      puVar13[2] = puVar19[2];
      puVar13[1] = uVar25;
      *puVar13 = uVar11;
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      puVar13[3] = puVar19[3];
      uVar11 = puVar19[4];
      *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar19 + 5);
      puVar13[4] = uVar11;
      puVar23 = (undefined8 *)((long)puVar23 + 1);
      lVar12 = lVar12 + 0x30;
    } while (puVar19 + 6 != puVar7);
    puVar22 = puVar7 + -3;
    puVar13 = puVar7;
    puVar19 = (undefined8 *)((long)param_6 + lVar12);
    do {
      if (param_2 == param_1) {
        FUN_10a7afd08(&puStack_80,(undefined8 *)((long)param_6 + lVar12),puVar19,param_6,param_6,
                      puVar7,puVar13);
        break;
      }
      puVar20 = puVar19;
      puVar5 = param_2 + -6;
      puVar4 = param_2 + -6;
      puVar21 = param_2;
      if (*(uint *)((long)param_2 + -0xc) <= *(uint *)((long)puVar19 + -0xc)) {
        puVar20 = puVar19 + -6;
        puVar5 = param_2;
        puVar4 = puVar19 + -6;
        puVar21 = puVar19;
      }
      param_2 = puVar5;
      uVar25 = puVar4[1];
      uVar11 = *puVar4;
      puVar22[-1] = puVar4[2];
      puVar22[-2] = uVar25;
      puVar22[-3] = uVar11;
      *(undefined1 *)((long)puVar21 + -0x19) = 0;
      *(undefined1 *)puVar4 = 0;
      *puVar22 = puVar21[-3];
      uVar11 = puVar21[-2];
      *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar21 + -1);
      puVar22[1] = uVar11;
      puVar13 = puVar13 + -6;
      puVar22 = puVar22 + -6;
      puVar19 = puVar20;
    } while (puVar20 != param_6);
  }
  else {
    if (param_1 == param_2) {
      return;
    }
    puVar23 = (undefined8 *)0x0;
    puVar13 = param_1;
    puVar19 = param_6;
    do {
      uVar25 = puVar13[1];
      uVar11 = *puVar13;
      puVar19[2] = puVar13[2];
      puVar19[1] = uVar25;
      *puVar19 = uVar11;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar19[3] = puVar13[3];
      uVar11 = puVar13[4];
      *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(puVar13 + 5);
      puVar19[4] = uVar11;
      puVar23 = (undefined8 *)((long)puVar23 + 1);
      puVar13 = puVar13 + 6;
      puVar19 = puVar19 + 6;
      puVar22 = param_6;
    } while (puVar13 != param_2);
    do {
      if (param_2 == puVar7) {
        FUN_10a7afc84(puVar22,puVar19,param_1);
        break;
      }
      if (*(uint *)((long)param_2 + 0x24) < *(uint *)((long)puVar22 + 0x24)) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        uVar25 = param_2[1];
        uVar11 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar25;
        *param_1 = uVar11;
        *(undefined1 *)((long)param_2 + 0x17) = 0;
        *(undefined1 *)param_2 = 0;
        param_1[3] = param_2[3];
        uVar11 = param_2[4];
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
        param_1[4] = uVar11;
        param_2 = param_2 + 6;
      }
      else {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        uVar25 = puVar22[1];
        uVar11 = *puVar22;
        param_1[2] = puVar22[2];
        param_1[1] = uVar25;
        *param_1 = uVar11;
        *(undefined1 *)((long)puVar22 + 0x17) = 0;
        *(undefined1 *)puVar22 = 0;
        param_1[3] = puVar22[3];
        uVar11 = puVar22[4];
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar22 + 5);
        param_1[4] = uVar11;
        puVar22 = puVar22 + 6;
      }
      param_1 = param_1 + 6;
    } while (puVar19 != puVar22);
  }
  while (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      __ZdlPv(*param_6);
    }
    param_6 = param_6 + 6;
    puVar23 = (undefined8 *)((long)puVar23 + -1);
    puVar1 = puVar23;
  }
  return;
}



/* Entry: 10a7afc84; end: 10a7afd07;  */

void FUN_10a7afc84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __ZdlPv(*param_3);
    }
    uVar2 = param_1[1];
    uVar1 = *param_1;
    param_3[2] = param_1[2];
    param_3[1] = uVar2;
    *param_3 = uVar1;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)param_1 = 0;
    param_3[3] = param_1[3];
    uVar1 = param_1[4];
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 5);
    param_3[4] = uVar1;
    param_3 = param_3 + 6;
  }
  return;
}



/* Entry: 10a7afd08; end: 10a7afdd3;  */

/* WARNING: Removing unreachable block (ram,0x00010a7afd58) */

void FUN_10a7afd08(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_3;
  if (param_3 != param_5) {
    lVar4 = 0;
    do {
      lVar3 = param_7 + lVar4;
      lVar1 = param_3 + lVar4;
      uVar5 = *(undefined8 *)(lVar1 + -0x28);
      uVar2 = *(undefined8 *)(lVar1 + -0x30);
      *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
      *(undefined8 *)(lVar3 + -0x28) = uVar5;
      *(undefined8 *)(lVar3 + -0x30) = uVar2;
      *(undefined1 *)(lVar1 + -0x19) = 0;
      *(undefined1 *)(lVar1 + -0x30) = 0;
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
      uVar2 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar1 + -8);
      *(undefined8 *)(lVar3 + -0x10) = uVar2;
      lVar4 = lVar4 + -0x30;
      lVar3 = param_3 + lVar4;
    } while (lVar3 != param_5);
    param_7 = param_7 + lVar4;
  }
  *param_1 = param_2;
  param_1[1] = lVar3;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return;
}



/* Entry: 10a7afdd4; end: 10a7b03e7;  */

/* WARNING: Possible PIC construction at 0x00010a7b03cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b05b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b06bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b07f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b04bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7b0dd8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0dec) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e00) */
/* WARNING: Removing unreachable block (ram,0x00010a7b1048) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e08) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e68) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e2c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e6c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e74) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e44) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0e94) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0ecc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cd0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0c74) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0c7c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0ca4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cec) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cac) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0c84) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0c88) */
/* WARNING: Removing unreachable block (ram,0x00010a7b04c0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0834) */
/* WARNING: Removing unreachable block (ram,0x00010a7b07f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0838) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0848) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0850) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0854) */
/* WARNING: Removing unreachable block (ram,0x00010a7b08a0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06c0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05bc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0538) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0544) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0554) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05c4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0578) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0608) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0610) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0648) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06d8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0634) */
/* WARNING: Removing unreachable block (ram,0x00010a7b064c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0658) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0660) */
/* WARNING: Removing unreachable block (ram,0x00010a7b09a4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0694) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0644) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06dc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06e0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06e8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06f0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0724) */
/* WARNING: Removing unreachable block (ram,0x00010a7b073c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0588) */
/* WARNING: Removing unreachable block (ram,0x00010a7b03d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f28) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f40) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f44) */
/* WARNING: Removing unreachable block (ram,0x00010a7b106c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f4c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0fc4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f68) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0fc8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0fd0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0fd8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f78) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f80) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0f88) */
/* WARNING: Removing unreachable block (ram,0x00010a7b1010) */
/* WARNING: Removing unreachable block (ram,0x00010a7b101c) */
/* WARNING: Type propagation algorithm not settling */

undefined **
FUN_10a7afdd4(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined **ppuVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  undefined **ppuVar18;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined1 auVar19 [8];
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar20;
  undefined **unaff_x23;
  long lVar21;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  ulong uVar22;
  undefined **unaff_x27;
  long unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  code *pcVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  char acStack_160 [32];
  long lStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  byte bStack_6c;
  long lStack_68;
  
  pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  ppuVar4 = param_2;
  ppuVar13 = param_3;
  ppuVar16 = param_4;
  ppuVar12 = unaff_x20;
  ppuVar8 = unaff_x21;
  if (param_3 < (undefined **)0x2) {
LAB_10a7afe0c:
    param_4 = ppuVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppuVar9;
    }
  }
  else {
    if (param_3 == (undefined **)0x2) {
      ppuVar12 = param_2 + -0xd;
      ppuVar8 = (undefined **)(long)*(short *)(param_2 + -9);
      FUN_10a77ebb8();
      ppuVar9 = (undefined **)(long)*(short *)(param_1 + 4);
      FUN_10a77ebb8();
      if ((uint)ppuVar8 == (uint)ppuVar9) {
        ppuVar9 = ppuVar12;
        param_2 = param_1;
        FUN_10a003e3c();
        ppuVar4 = param_2;
        ppuVar13 = param_3;
        ppuVar16 = param_4;
        if (((uint)ppuVar9 >> 7 & 1) != 0) {
LAB_10a7aff38:
          ppuVar4 = param_2;
          param_4 = ppuVar12;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
FUN_10a7b10f0:
            *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            puVar25 = *param_1;
            *(undefined **)((long)register0x00000008 + -0x98) = param_1[1];
            *(undefined **)((long)register0x00000008 + -0xa0) = puVar25;
            puVar25 = param_1[2];
            puVar27 = param_1[3];
            param_1[1] = (undefined *)0x0;
            param_1[2] = (undefined *)0x0;
            *param_1 = (undefined *)0x0;
            *(undefined **)((long)register0x00000008 + -0x90) = puVar25;
            *(undefined **)((long)register0x00000008 + -0x88) = puVar27;
            *(undefined2 *)((long)register0x00000008 + -0x80) = *(undefined2 *)(param_1 + 4);
            unaff_x20 = (undefined **)((long)register0x00000008 + -0x7c);
            unaff_x22 = (undefined **)((long)param_1 + 0x24);
            *(undefined1 *)((long)register0x00000008 + -0x3c) = 0x10;
            *(undefined ***)((long)register0x00000008 + -0xa8) = unaff_x20;
            if (*(char *)((long)param_1 + 100) == '\0') {
              *(undefined4 *)((long)register0x00000008 + -0x7c) = *(undefined4 *)unaff_x22;
              *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
            }
            else {
              FUN_10a351904((undefined1 *)((long)register0x00000008 + -0xa8),unaff_x22);
              cVar2 = *(char *)((long)param_1 + 0x17);
              *(undefined1 *)((long)register0x00000008 + -0x3c) =
                   *(undefined1 *)((long)param_1 + 100);
              if (cVar2 < '\0') {
                __ZdlPv(*param_1);
              }
            }
            puVar27 = ppuVar12[1];
            puVar25 = *ppuVar12;
            param_1[2] = ppuVar12[2];
            param_1[1] = puVar27;
            *param_1 = puVar25;
            *(undefined1 *)((long)ppuVar12 + 0x17) = 0;
            *(undefined1 *)ppuVar12 = 0;
            param_1[3] = ppuVar12[3];
            *(undefined2 *)(param_1 + 4) = *(undefined2 *)(ppuVar12 + 4);
            FUN_10a7a35b4(unaff_x22,(long)ppuVar12 + 0x24);
            if (*(char *)((long)ppuVar12 + 0x17) < '\0') {
              __ZdlPv(*ppuVar12);
            }
            puVar25 = *(undefined **)((long)register0x00000008 + -0xa0);
            ppuVar12[1] = *(undefined **)((long)register0x00000008 + -0x98);
            *ppuVar12 = puVar25;
            puVar25 = *(undefined **)((long)register0x00000008 + -0x88);
            *(undefined1 *)((long)register0x00000008 + -0x89) = 0;
            *(undefined1 *)((long)register0x00000008 + -0xa0) = 0;
            ppuVar12[2] = *(undefined **)((long)register0x00000008 + -0x90);
            ppuVar12[3] = puVar25;
            *(undefined2 *)(ppuVar12 + 4) = *(undefined2 *)((long)register0x00000008 + -0x80);
            param_4 = unaff_x20;
            FUN_10a7a35b4((long)ppuVar12 + 0x24);
            if (0x10 < (ulong)*(byte *)((long)register0x00000008 + -0x3c)) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x10a7b1260);
              (*pcVar24)();
            }
            param_3 = unaff_x20;
            (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)register0x00000008 + -0x3c)])();
            if (*(char *)((long)register0x00000008 + -0x89) < '\0') {
              param_3 = *(undefined ***)((long)register0x00000008 + -0xa0);
              __ZdlPv();
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return param_3;
            }
            unaff_x30 = 0x10a7b1264;
            ___stack_chk_fail();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
            unaff_x19 = ppuVar12;
            unaff_x21 = param_1;
            goto SUB_10a7b1264;
          }
          goto LAB_10a7b03a4;
        }
      }
      else {
        ppuVar4 = param_2;
        ppuVar13 = param_3;
        ppuVar16 = param_4;
        if ((uint)ppuVar9 < (uint)ppuVar8) goto LAB_10a7aff38;
      }
      goto LAB_10a7afe0c;
    }
    ppuVar8 = param_2;
    if ((long)param_3 < 1) {
      if ((param_1 != param_2) && (param_1 + 0xd != param_2)) {
        unaff_x25 = (undefined **)0x0;
        ppuVar12 = (undefined **)(auStack_b0 + 4);
        unaff_x26 = (undefined **)0x10;
        unaff_x27 = &PTR_FUN_110ba1f88;
        ppuVar11 = param_1 + 0xd;
        ppuVar20 = param_1;
LAB_10a7affa8:
        ppuVar18 = ppuVar11;
        unaff_x24 = (undefined **)(long)*(short *)(ppuVar20 + 0x11);
        FUN_10a77ebb8();
        ppuVar9 = (undefined **)(long)*(short *)(ppuVar20 + 4);
        FUN_10a77ebb8();
        unaff_x23 = ppuVar20;
        if ((uint)unaff_x24 == (uint)ppuVar9) {
          ppuVar9 = ppuVar18;
          ppuVar4 = ppuVar20;
          FUN_10a003e3c();
          if (((uint)ppuVar9 >> 7 & 1) != 0) {
LAB_10a7affe4:
            puStack_c8 = ppuVar18[1];
            ppuStack_d0 = (undefined **)*ppuVar18;
            puStack_c0 = ppuVar18[2];
            ppuVar18[1] = (undefined *)0x0;
            ppuVar18[2] = (undefined *)0x0;
            *ppuVar18 = (undefined *)0x0;
            ppuStack_b8 = (undefined **)ppuVar20[0x10];
            auStack_b0._0_2_ = *(undefined2 *)(ppuVar20 + 0x11);
            bStack_6c = 0x10;
            ppuVar13 = (undefined **)(ulong)*(byte *)((long)ppuVar20 + 0xcc);
            unaff_x24 = unaff_x25;
            ppuStack_d8 = ppuVar12;
            if (ppuVar13 == (undefined **)0x0) {
              bStack_6c = 0;
              auStack_b0._4_4_ = *(undefined4 *)((long)ppuVar20 + 0x8c);
            }
            else {
              FUN_10a351904(&ppuStack_d8);
              bStack_6c = *(byte *)((long)ppuVar20 + 0xcc);
            }
            do {
              puVar1 = (undefined8 *)((long)param_1 + (long)unaff_x24);
              if (*(char *)((long)puVar1 + 0x7f) < '\0') {
                __ZdlPv(puVar1[0xd]);
              }
              puVar1[0xe] = puVar1[1];
              puVar1[0xd] = *puVar1;
              *(undefined1 *)((long)puVar1 + 0x17) = 0;
              *(undefined1 *)puVar1 = 0;
              puVar1[0xf] = puVar1[2];
              puVar1[0x10] = puVar1[3];
              *(undefined2 *)(puVar1 + 0x11) = *(undefined2 *)(puVar1 + 4);
              FUN_10a7a35b4((undefined1 *)((long)puVar1 + 0x8c),(undefined1 *)((long)puVar1 + 0x24))
              ;
              unaff_x23 = param_1;
              if (unaff_x24 == (undefined **)0x0) goto LAB_10a7b00d4;
              uVar6 = (uint)(short)auStack_b0._0_2_;
              FUN_10a77ebb8();
              unaff_x28 = (long)param_1 + (long)unaff_x24;
              uVar7 = (uint)*(short *)(unaff_x28 + -0x48);
              FUN_10a77ebb8();
              if (uVar6 == uVar7) {
                pppuVar10 = &ppuStack_d0;
                FUN_10a003e3c(pppuVar10,unaff_x28 + -0x68);
                if (((uint)pppuVar10 >> 7 & 1) == 0) goto LAB_10a7b00d0;
              }
              else if (uVar6 <= uVar7) goto LAB_10a7b00d0;
              unaff_x24 = unaff_x24 + -0xd;
            } while( true );
          }
        }
        else if ((uint)ppuVar9 < (uint)unaff_x24) goto LAB_10a7affe4;
        goto LAB_10a7b0144;
      }
      goto LAB_10a7afe0c;
    }
    unaff_x24 = (undefined **)((ulong)param_3 >> 1);
    ppuVar12 = param_1 + (long)unaff_x24 * 0xd;
    if ((long)param_5 < (long)param_3) {
      FUN_10a7afdd4(param_1,ppuVar12,unaff_x24,param_4,param_5);
      param_3 = (undefined **)((long)param_3 - (long)unaff_x24);
      ppuVar9 = ppuVar12;
      ppuVar13 = param_3;
      FUN_10a7afdd4();
      unaff_x23 = param_5;
      unaff_x25 = ppuVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        ppuVar4 = &puStack_c0;
        pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
        ppuStack_90 = param_5;
        ppuStack_88 = param_3;
        auVar19 = (undefined1  [8])unaff_x20;
        ppuVar8 = param_1;
        ppuVar9 = param_1;
joined_r0x00010a7b0a04:
        if (ppuStack_88 != (undefined **)0x0) {
          if (((long)ppuStack_90 < (long)unaff_x24) && ((long)ppuStack_90 < (long)ppuStack_88)) {
            if (unaff_x24 != (undefined **)0x0) {
              lVar15 = 0;
              lVar21 = -(long)unaff_x24;
              do {
                uVar6 = (uint)*(short *)(ppuVar12 + 4);
                FUN_10a77ebb8();
                ppuVar8 = (undefined **)(long)*(short *)((long)ppuVar9 + lVar15 + 0x20);
                FUN_10a77ebb8();
                if (uVar6 == (uint)ppuVar8) {
                  ppuVar8 = ppuVar12;
                  FUN_10a003e3c(ppuVar12,(long)ppuVar9 + lVar15);
                  if (((uint)ppuVar8 >> 7 & 1) != 0) goto LAB_10a7b0a84;
                }
                else if ((uint)ppuVar8 < uVar6) goto LAB_10a7b0a84;
                lVar15 = lVar15 + 0x68;
                bVar5 = lVar21 == -1;
                lVar21 = lVar21 + 1;
                if (bVar5) {
                  return ppuVar8;
                }
              } while( true );
            }
          }
          else {
            if ((long)ppuStack_88 < (long)unaff_x24) {
              if (ppuVar12 != param_2) {
                puVar27 = ppuVar12[1];
                puVar25 = *ppuVar12;
                param_4[2] = ppuVar12[2];
                param_4[1] = puVar27;
                *param_4 = puVar25;
                ppuVar12[1] = (undefined *)0x0;
                ppuVar12[2] = (undefined *)0x0;
                *ppuVar12 = (undefined *)0x0;
                param_4[3] = ppuVar12[3];
                *(undefined2 *)(param_4 + 4) = *(undefined2 *)(ppuVar12 + 4);
                ppuVar8 = (undefined **)((long)param_4 + 0x24);
                ppuVar11 = (undefined **)((long)ppuVar12 + 0x24);
                pcVar24 = (code *)0x10a7b0dd8;
                ppuVar4 = &puStack_c0;
                ppuVar16 = (undefined **)0x0;
                auVar19 = (undefined1  [8])ppuVar12;
                goto SUB_10a3518a0;
              }
            }
            else if (ppuVar12 != ppuVar9) {
              ppuVar11 = (undefined **)((long)ppuVar9 + 0x24);
              puVar27 = ppuVar9[1];
              puVar25 = *ppuVar9;
              param_4[2] = ppuVar9[2];
              param_4[1] = puVar27;
              *param_4 = puVar25;
              ppuVar9[2] = (undefined *)0x0;
              ppuVar9[1] = (undefined *)0x0;
              *ppuVar9 = (undefined *)0x0;
              param_4[3] = ppuVar9[3];
              *(undefined2 *)(param_4 + 4) = *(undefined2 *)(ppuVar9 + 4);
              ppuVar8 = (undefined **)((long)param_4 + 0x24);
              pcVar24 = (code *)0x10a7b0f28;
              ppuVar16 = ppuVar11;
              goto SUB_10a3518a0;
            }
            if (param_4 != (undefined **)0x0) {
              param_3 = (undefined **)0x0;
              goto SUB_10a7b1264;
            }
          }
        }
        return ppuVar8;
      }
    }
    else {
      FUN_10a7b03e8(param_1,ppuVar12,unaff_x24,param_4);
      ppuVar13 = (undefined **)((long)param_3 - (long)unaff_x24);
      unaff_x23 = param_4 + (long)unaff_x24 * 0xd;
      ppuVar16 = unaff_x23;
      FUN_10a7b03e8();
      unaff_x26 = param_4 + (long)param_3 * 0xd;
      unaff_x25 = (undefined **)((long)param_1 + 0x17);
      ppuVar9 = unaff_x23;
      ppuVar8 = param_4;
      do {
        if (ppuVar9 == unaff_x26) {
          if (ppuVar8 != unaff_x23) {
            lVar15 = 0;
            do {
              unaff_x24 = (undefined **)((long)unaff_x25 + lVar15);
              unaff_x26 = (undefined **)((long)unaff_x24 + -0x17);
              if (*(char *)unaff_x24 < '\0') {
                __ZdlPv(*unaff_x26);
              }
              unaff_x27 = (undefined **)((long)ppuVar8 + lVar15);
              puVar27 = unaff_x27[1];
              puVar25 = *unaff_x27;
              *(undefined **)((long)unaff_x24 + -7) = unaff_x27[2];
              *(undefined **)((long)unaff_x24 + -0xf) = puVar27;
              *unaff_x26 = puVar25;
              *(undefined1 *)((long)unaff_x27 + 0x17) = 0;
              param_2 = (undefined **)((long)unaff_x27 + 0x24);
              *(undefined1 *)unaff_x27 = 0;
              *(undefined **)((long)unaff_x24 + 1) = unaff_x27[3];
              *(undefined2 *)((long)unaff_x24 + 9) = *(undefined2 *)(unaff_x27 + 4);
              ppuVar12 = (undefined **)((long)unaff_x24 + 0xd);
              FUN_10a7a35b4();
              lVar15 = lVar15 + 0x68;
            } while (unaff_x27 + 0xd != unaff_x23);
          }
          goto LAB_10a7b035c;
        }
        unaff_x24 = (undefined **)(long)*(short *)(ppuVar9 + 4);
        FUN_10a77ebb8();
        uVar6 = (uint)*(short *)(ppuVar8 + 4);
        FUN_10a77ebb8();
        unaff_x27 = (undefined **)((long)unaff_x25 + -0x17);
        if ((uint)unaff_x24 == uVar6) {
          ppuVar12 = ppuVar9;
          FUN_10a003e3c(ppuVar9,ppuVar8);
          if (((uint)ppuVar12 >> 7 & 1) == 0) goto LAB_10a7b01dc;
LAB_10a7b022c:
          if (*(char *)unaff_x25 < '\0') {
            __ZdlPv(*unaff_x27);
          }
          puVar27 = ppuVar9[1];
          puVar25 = *ppuVar9;
          *(undefined **)((long)unaff_x25 + -7) = ppuVar9[2];
          *(undefined **)((long)unaff_x25 + -0xf) = puVar27;
          *unaff_x27 = puVar25;
          *(undefined1 *)((long)ppuVar9 + 0x17) = 0;
          *(undefined1 *)ppuVar9 = 0;
          *(undefined **)((long)unaff_x25 + 1) = ppuVar9[3];
          *(undefined2 *)((long)unaff_x25 + 9) = *(undefined2 *)(ppuVar9 + 4);
          ppuVar12 = (undefined **)((long)unaff_x25 + 0xd);
          param_2 = (undefined **)((long)ppuVar9 + 0x24);
          FUN_10a7a35b4();
          ppuVar9 = ppuVar9 + 0xd;
        }
        else {
          if (uVar6 < (uint)unaff_x24) goto LAB_10a7b022c;
LAB_10a7b01dc:
          if (*(char *)unaff_x25 < '\0') {
            __ZdlPv(*unaff_x27);
          }
          puVar27 = ppuVar8[1];
          puVar25 = *ppuVar8;
          *(undefined **)((long)unaff_x25 + -7) = ppuVar8[2];
          *(undefined **)((long)unaff_x25 + -0xf) = puVar27;
          *unaff_x27 = puVar25;
          *(undefined1 *)((long)ppuVar8 + 0x17) = 0;
          *(undefined1 *)ppuVar8 = 0;
          *(undefined **)((long)unaff_x25 + 1) = ppuVar8[3];
          *(undefined2 *)((long)unaff_x25 + 9) = *(undefined2 *)(ppuVar8 + 4);
          ppuVar12 = (undefined **)((long)unaff_x25 + 0xd);
          param_2 = (undefined **)((long)ppuVar8 + 0x24);
          FUN_10a7a35b4();
          ppuVar8 = ppuVar8 + 0xd;
        }
        unaff_x25 = unaff_x25 + 0xd;
      } while (ppuVar8 != unaff_x23);
      if (ppuVar9 != unaff_x26) {
        ppuVar8 = (undefined **)0x0;
        do {
          unaff_x23 = (undefined **)((long)unaff_x25 + (long)ppuVar8);
          unaff_x24 = (undefined **)((long)unaff_x23 + -0x17);
          if (*(char *)unaff_x23 < '\0') {
            __ZdlPv(*unaff_x24);
          }
          unaff_x27 = (undefined **)((long)ppuVar9 + (long)ppuVar8);
          puVar27 = unaff_x27[1];
          puVar25 = *unaff_x27;
          *(undefined **)((long)unaff_x23 + -7) = unaff_x27[2];
          *(undefined **)((long)unaff_x23 + -0xf) = puVar27;
          *unaff_x24 = puVar25;
          *(undefined1 *)((long)unaff_x27 + 0x17) = 0;
          param_2 = (undefined **)((long)unaff_x27 + 0x24);
          *(undefined1 *)unaff_x27 = 0;
          *(undefined **)((long)unaff_x23 + 1) = unaff_x27[3];
          *(undefined2 *)((long)unaff_x23 + 9) = *(undefined2 *)(unaff_x27 + 4);
          ppuVar12 = (undefined **)((long)unaff_x23 + 0xd);
          FUN_10a7a35b4();
          ppuVar8 = ppuVar8 + 0xd;
        } while (unaff_x27 + 0xd != unaff_x26);
      }
LAB_10a7b035c:
      ppuVar9 = ppuVar12;
      ppuVar4 = param_2;
      ppuVar12 = param_4;
      if (param_4 == (undefined **)0x0) goto LAB_10a7afe0c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto SUB_10a7b1264;
    }
  }
LAB_10a7b03a4:
  param_3 = unaff_x26;
  ___stack_chk_fail();
  if (param_4 != (undefined **)0x0) {
    unaff_x30 = 0x10a7b03d0;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = ppuVar9;
    unaff_x20 = param_4;
    unaff_x21 = ppuVar8;
    unaff_x22 = param_3;
    unaff_x29 = pppppppuVar23;
SUB_10a7b1264:
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    ppuVar12 = (undefined **)0x0;
    while( true ) {
      if (param_3 == (undefined **)0x0) {
        return ppuVar12;
      }
      if (0x10 < (ulong)*(byte *)((long)param_4 + 100)) break;
      ppuVar12 = (undefined **)((long)param_4 + 0x24);
      (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)param_4 + 100)])(ppuVar12);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        ppuVar12 = (undefined **)*param_4;
        __ZdlPv(ppuVar12);
      }
      param_4 = param_4 + 0xd;
      param_3 = (undefined **)((long)param_3 + -1);
    }
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10a7b12d0);
    (*pcVar24)();
  }
  ppuVar11 = ppuVar9;
  __Unwind_Resume();
  lStack_140 = unaff_x28;
  ppuStack_138 = unaff_x27;
  ppuStack_130 = param_3;
  ppuStack_128 = unaff_x25;
  ppuStack_120 = unaff_x24;
  ppuStack_118 = unaff_x23;
  ppuStack_110 = param_3;
  ppuStack_108 = ppuVar8;
  uStack_100 = param_4;
  ppuStack_f8 = ppuVar9;
  pppppppuStack_f0 = pppppppuVar23;
  pcStack_e8 = FUN_10a7b03e8;
  pppppppuVar23 = &pppppppuStack_f0;
  if (ppuVar13 == (undefined **)0x0) {
    return ppuVar11;
  }
  if (ppuVar13 == (undefined **)0x2) {
    uVar6 = (uint)*(short *)(ppuVar4 + -9);
    FUN_10a77ebb8();
    uVar7 = (uint)*(short *)(ppuVar11 + 4);
    FUN_10a77ebb8();
    ppuVar12 = ppuVar4 + -0xd;
    if (uVar6 == uVar7) {
      ppuVar8 = ppuVar12;
      FUN_10a003e3c(ppuVar12,ppuVar11);
      if (((uint)ppuVar8 >> 7 & 1) != 0) {
LAB_10a7b08a8:
        puVar27 = ppuVar4[-0xc];
        puVar25 = *ppuVar12;
        ppuVar16[2] = ppuVar4[-0xb];
        ppuVar16[1] = puVar27;
        *ppuVar16 = puVar25;
        ppuVar4[-0xc] = (undefined *)0x0;
        ppuVar4[-0xb] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
        ppuVar16[3] = ppuVar4[-10];
        *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar4 + -9);
        func_0x00010a3518a0((long)ppuVar16 + 0x24,(long)ppuVar4 + -0x44);
        puVar27 = ppuVar11[1];
        puVar25 = *ppuVar11;
        ppuVar16[0xf] = ppuVar11[2];
        ppuVar16[0xe] = puVar27;
        ppuVar16[0xd] = puVar25;
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar16[0x10] = ppuVar11[3];
        *(undefined2 *)(ppuVar16 + 0x11) = *(undefined2 *)(ppuVar11 + 4);
        ppuVar8 = (undefined **)((long)ppuVar16 + 0x8c);
        goto LAB_10a7b0908;
      }
    }
    else if (uVar7 < uVar6) goto LAB_10a7b08a8;
    puVar27 = ppuVar11[1];
    puVar25 = *ppuVar11;
    ppuVar16[2] = ppuVar11[2];
    ppuVar16[1] = puVar27;
    *ppuVar16 = puVar25;
    ppuVar11[1] = (undefined *)0x0;
    ppuVar11[2] = (undefined *)0x0;
    *ppuVar11 = (undefined *)0x0;
    ppuVar16[3] = ppuVar11[3];
    *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar11 + 4);
    ppuVar8 = (undefined **)((long)ppuVar16 + 0x24);
    ppuVar11 = (undefined **)((long)ppuVar11 + 0x24);
    pcVar24 = (code *)0x10a7b04c0;
    ppuVar4 = (undefined **)(acStack_160 + 0x10);
    auVar19 = (undefined1  [8])param_4;
  }
  else {
    if (ppuVar13 != (undefined **)0x1) {
      if ((long)ppuVar13 < 9) {
        if (ppuVar11 == ppuVar4) {
          return ppuVar11;
        }
        puVar27 = ppuVar11[1];
        puVar25 = *ppuVar11;
        ppuVar16[2] = ppuVar11[2];
        ppuVar16[1] = puVar27;
        *ppuVar16 = puVar25;
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar16[3] = ppuVar11[3];
        *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar11 + 4);
        ppuVar8 = (undefined **)((long)ppuVar16 + 0x24);
        ppuVar11 = (undefined **)((long)ppuVar11 + 0x24);
        pcVar24 = (code *)0x10a7b0538;
        ppuVar4 = (undefined **)(acStack_160 + 0x10);
        auVar19 = (undefined1  [8])param_4;
        goto SUB_10a3518a0;
      }
      uVar14 = (ulong)ppuVar13 >> 1;
      ppuVar12 = ppuVar11 + uVar14 * 0xd;
      FUN_10a7afdd4(ppuVar11,ppuVar12,uVar14,ppuVar16,uVar14);
      lVar15 = (long)ppuVar13 - ((ulong)ppuVar13 >> 1);
      ppuVar9 = ppuVar12;
      FUN_10a7afdd4(ppuVar12,ppuVar4,lVar15,ppuVar16 + uVar14 * 0xd,lVar15);
      ppuVar8 = (undefined **)((long)ppuVar16 + 0x24);
      if (ppuVar12 == ppuVar4) {
        if (ppuVar11 != ppuVar12) {
          lVar15 = (long)ppuVar11 + 0x24;
          do {
            uVar28 = *(undefined8 *)(lVar15 + -0x1c);
            uVar26 = *(undefined8 *)(lVar15 + -0x24);
            *(undefined8 *)((long)ppuVar8 + -0x14) = *(undefined8 *)(lVar15 + -0x14);
            *(undefined8 *)((long)ppuVar8 + -0x1c) = uVar28;
            *(undefined8 *)((long)ppuVar8 + -0x24) = uVar26;
            *(undefined8 *)(lVar15 + -0x14) = 0;
            *(undefined8 *)(lVar15 + -0x1c) = 0;
            *(undefined8 *)(lVar15 + -0x24) = 0;
            *(undefined8 *)((long)ppuVar8 + -0xc) = *(undefined8 *)(lVar15 + -0xc);
            *(undefined2 *)((long)ppuVar8 + -4) = *(undefined2 *)(lVar15 + -4);
            ppuVar9 = ppuVar8;
            func_0x00010a3518a0(ppuVar8,lVar15);
            ppuVar8 = ppuVar8 + 0xd;
            ppuVar4 = (undefined **)(lVar15 + 0x44);
            lVar15 = lVar15 + 0x68;
          } while (ppuVar4 != ppuVar12);
        }
        return ppuVar9;
      }
      uVar6 = (uint)*(short *)(ppuVar12 + 4);
      FUN_10a77ebb8();
      uVar7 = (uint)*(short *)(ppuVar11 + 4);
      FUN_10a77ebb8();
      auVar19 = (undefined1  [8])ppuVar16;
      if (uVar6 == uVar7) {
        ppuVar9 = ppuVar12;
        FUN_10a003e3c(ppuVar12,ppuVar11);
        if (((uint)ppuVar9 >> 7 & 1) != 0) {
LAB_10a7b0800:
          puVar27 = ppuVar12[1];
          puVar25 = *ppuVar12;
          ppuVar16[2] = ppuVar12[2];
          ppuVar16[1] = puVar27;
          *ppuVar16 = puVar25;
          ppuVar12[1] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
          ppuVar16[3] = ppuVar12[3];
          *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar12 + 4);
          ppuVar11 = (undefined **)((long)ppuVar12 + 0x24);
          pcVar24 = (code *)0x10a7b0834;
          ppuVar4 = (undefined **)(acStack_160 + 0x10);
          goto SUB_10a3518a0;
        }
      }
      else if (uVar7 < uVar6) goto LAB_10a7b0800;
      puVar27 = ppuVar11[1];
      puVar25 = *ppuVar11;
      ppuVar16[2] = ppuVar11[2];
      ppuVar16[1] = puVar27;
      *ppuVar16 = puVar25;
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)0x0;
      ppuVar16[3] = ppuVar11[3];
      *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar11 + 4);
      ppuVar11 = (undefined **)((long)ppuVar11 + 0x24);
      pcVar24 = (code *)0x10a7b07f4;
      ppuVar4 = (undefined **)(acStack_160 + 0x10);
      goto SUB_10a3518a0;
    }
    puVar27 = ppuVar11[1];
    puVar25 = *ppuVar11;
    ppuVar16[2] = ppuVar11[2];
    ppuVar16[1] = puVar27;
    *ppuVar16 = puVar25;
    ppuVar11[1] = (undefined *)0x0;
    ppuVar11[2] = (undefined *)0x0;
    *ppuVar11 = (undefined *)0x0;
    ppuVar16[3] = ppuVar11[3];
    *(undefined2 *)(ppuVar16 + 4) = *(undefined2 *)(ppuVar11 + 4);
    ppuVar8 = (undefined **)((long)ppuVar16 + 0x24);
LAB_10a7b0908:
    ppuVar11 = (undefined **)((long)ppuVar11 + 0x24);
    ppuVar4 = (undefined **)auStack_e0;
    ppuVar16 = ppuStack_f8;
    auVar19 = (undefined1  [8])uStack_100;
    pppppppuVar23 = pppppppuStack_f0;
    pcVar24 = pcStack_e8;
  }
SUB_10a3518a0:
  *(undefined1 (*) [8])((long)ppuVar4 + -0x20) = auVar19;
  *(undefined ***)((long)ppuVar4 + -0x18) = ppuVar16;
  *(undefined8 ********)((long)ppuVar4 + -0x10) = pppppppuVar23;
  *(code **)((long)ppuVar4 + -8) = pcVar24;
  *(undefined1 *)(ppuVar8 + 8) = 0x10;
  *(undefined ***)((long)ppuVar4 + -0x28) = ppuVar8;
  if (*(char *)(ppuVar11 + 8) == '\0') {
    uVar17 = 0;
    *(undefined4 *)ppuVar8 = *(undefined4 *)ppuVar11;
  }
  else {
    FUN_10a351904((undefined1 *)((long)ppuVar4 + -0x28),ppuVar11);
    uVar17 = *(undefined1 *)(ppuVar11 + 8);
  }
  *(undefined1 *)(ppuVar8 + 8) = uVar17;
  return ppuVar8;
LAB_10a7b00d0:
  unaff_x23 = (undefined **)((long)param_1 + (long)unaff_x24);
LAB_10a7b00d4:
  if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
    __ZdlPv(*unaff_x23);
  }
  unaff_x23[2] = puStack_c0;
  unaff_x23[1] = puStack_c8;
  *unaff_x23 = (undefined *)ppuStack_d0;
  puStack_c0 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff);
  ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
  unaff_x23[3] = (undefined *)ppuStack_b8;
  *(undefined2 *)(unaff_x23 + 4) = auStack_b0._0_2_;
  ppuVar4 = ppuVar12;
  FUN_10a7a35b4((long)param_1 + (long)unaff_x24 + 0x24);
  if (0x10 < (ulong)bStack_6c) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10a7b03a4);
    (*pcVar24)();
  }
  ppuVar9 = ppuVar12;
  (*(code *)(&PTR_FUN_110ba1f88)[bStack_6c])();
  if ((long)puStack_c0 < 0) {
    ppuVar9 = ppuStack_d0;
    __ZdlPv();
  }
LAB_10a7b0144:
  unaff_x25 = unaff_x25 + 0xd;
  ppuVar11 = ppuVar18 + 0xd;
  ppuVar20 = ppuVar18;
  if (ppuVar18 + 0xd == param_2) goto LAB_10a7afe0c;
  goto LAB_10a7affa8;
LAB_10a7b0a84:
  ppuVar8 = (undefined **)((long)ppuVar9 + lVar15);
  auVar19 = (undefined1  [8])ppuVar8;
  ppuStack_a8 = param_2;
  ppuStack_a0 = param_4;
  if (-lVar21 < (long)ppuStack_88) {
    ppuStack_98 = (undefined **)((long)ppuStack_88 / 2);
    ppuVar13 = ppuVar12 + (long)ppuStack_98 * 0xd;
    lVar3 = (long)ppuVar12 + (-lVar15 - (long)ppuVar9);
    param_1 = ppuVar12;
    if (lVar3 != 0) {
      uVar14 = (lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5;
      auStack_b0 = (undefined1  [8])ppuVar8;
      do {
        uVar22 = uVar14 >> 1;
        ppuVar16 = ppuVar8 + uVar22 * 0xd;
        uVar6 = (uint)*(short *)(ppuVar13 + 4);
        FUN_10a77ebb8();
        uVar7 = (uint)*(short *)(ppuVar16 + 4);
        FUN_10a77ebb8();
        if (uVar6 == uVar7) {
          ppuVar11 = ppuVar13;
          FUN_10a003e3c(ppuVar13,ppuVar16);
          if (((uint)ppuVar11 >> 7 & 1) == 0) {
LAB_10a7b0b18:
            ppuVar8 = ppuVar16 + 0xd;
            uVar22 = uVar14 + ~uVar22;
          }
        }
        else if (uVar6 <= uVar7) goto LAB_10a7b0b18;
        uVar14 = uVar22;
        param_1 = ppuVar8;
        auVar19 = auStack_b0;
      } while (uVar14 != 0);
    }
    unaff_x24 = (undefined **)
                (((long)param_1 + (-lVar15 - (long)ppuVar9) >> 3) * 0x4ec4ec4ec4ec4ec5);
  }
  else {
    if (lVar21 == -1) {
      param_1 = (undefined **)((long)ppuVar9 + lVar15);
      goto FUN_10a7b10f0;
    }
    ppuVar16 = (undefined **)(-lVar21 / 2);
    unaff_x24 = ppuVar16;
    ppuVar13 = ppuVar12;
    if (ppuVar12 != param_2) {
      ppuStack_98 = ppuVar9 + (long)ppuVar16 * 0xd;
      uVar14 = ((long)param_2 - (long)ppuVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
      ppuStack_b8 = ppuVar16;
      auStack_b0 = (undefined1  [8])ppuVar8;
      do {
        uVar22 = uVar14 >> 1;
        ppuVar8 = ppuVar13 + uVar22 * 0xd;
        uVar6 = (uint)*(short *)(ppuVar8 + 4);
        FUN_10a77ebb8();
        uVar7 = (uint)*(short *)((long)ppuVar9 + lVar15 + (long)ppuVar16 * 0x68 + 0x20);
        FUN_10a77ebb8();
        if (uVar6 == uVar7) {
          ppuVar11 = ppuVar8;
          FUN_10a003e3c(ppuVar8,(long)ppuStack_98 + lVar15);
          if (((uint)ppuVar11 >> 7 & 1) != 0) {
LAB_10a7b0bd8:
            ppuVar13 = ppuVar8 + 0xd;
            uVar22 = uVar14 + ~uVar22;
          }
        }
        else if (uVar7 < uVar6) goto LAB_10a7b0bd8;
        unaff_x24 = ppuStack_b8;
        auVar19 = auStack_b0;
        uVar14 = uVar22;
      } while (uVar22 != 0);
    }
    ppuStack_98 = (undefined **)(((long)ppuVar13 - (long)ppuVar12 >> 3) * 0x4ec4ec4ec4ec4ec5);
    param_1 = (undefined **)((long)ppuVar9 + lVar15 + (long)unaff_x24 * 0x68);
  }
  ppuVar16 = ppuStack_98;
  ppuVar11 = ppuVar13;
  if ((param_1 != ppuVar12) && (ppuVar11 = param_1, ppuVar12 != ppuVar13)) {
    unaff_x30 = 0x10a7b0c74;
    register0x00000008 = (BADSPACEBASE *)&puStack_c0;
    unaff_x19 = param_1;
    unaff_x20 = (undefined **)auVar19;
    unaff_x21 = ppuVar9;
    unaff_x22 = ppuVar12;
    unaff_x29 = pppppppuVar23;
    ppuStack_b8 = unaff_x24;
    goto FUN_10a7b10f0;
  }
  ppuVar12 = (undefined **)((long)ppuStack_88 - (long)ppuStack_98);
  if ((long)((long)unaff_x24 + (long)ppuStack_98) <
      (long)((long)ppuStack_88 + (-lVar21 - ((long)unaff_x24 + (long)ppuStack_98)))) {
    ppuVar8 = (undefined **)((long)ppuVar9 + lVar15);
    FUN_10a7b09e0(ppuVar8,param_1,ppuVar11,unaff_x24,ppuStack_98,ppuStack_a0,ppuStack_90);
    auVar19 = (undefined1  [8])ppuVar11;
    ppuVar16 = ppuVar12;
    unaff_x24 = (undefined **)-((long)unaff_x24 + lVar21);
    param_1 = ppuVar13;
  }
  else {
    ppuVar8 = ppuVar11;
    FUN_10a7b09e0(ppuVar11,ppuVar13,ppuStack_a8,(undefined **)-((long)unaff_x24 + lVar21),ppuVar12,
                  ppuStack_a0,ppuStack_90);
    ppuStack_a8 = ppuVar11;
  }
  ppuStack_88 = ppuVar16;
  ppuVar12 = param_1;
  param_4 = ppuStack_a0;
  param_2 = ppuStack_a8;
  ppuVar9 = (undefined **)auVar19;
  goto joined_r0x00010a7b0a04;
}



/* Entry: 10a7b03e8; end: 10a7b09df;  */

/* WARNING: Possible PIC construction at 0x00010a7b0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b05b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b06bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b07f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b0830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7b04bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7b0834) */
/* WARNING: Removing unreachable block (ram,0x00010a7b07f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0838) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0848) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0850) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0854) */
/* WARNING: Removing unreachable block (ram,0x00010a7b08a0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06c0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05bc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0538) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0544) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0554) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05c4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0578) */
/* WARNING: Removing unreachable block (ram,0x00010a7b05c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0608) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0610) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0648) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06d8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0634) */
/* WARNING: Removing unreachable block (ram,0x00010a7b064c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0658) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0660) */
/* WARNING: Removing unreachable block (ram,0x00010a7b09a4) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0694) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0644) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06dc) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06e0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06e8) */
/* WARNING: Removing unreachable block (ram,0x00010a7b06f0) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0724) */
/* WARNING: Removing unreachable block (ram,0x00010a7b073c) */
/* WARNING: Removing unreachable block (ram,0x00010a7b0588) */
/* WARNING: Removing unreachable block (ram,0x00010a7b04c0) */

undefined8 *
FUN_10a7b03e8(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [16];
  
  puVar1 = auStack_70;
  puVar12 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    return param_1;
  }
  if (param_3 == 2) {
    uVar2 = (uint)*(short *)(param_2 + -9);
    FUN_10a77ebb8();
    uVar3 = (uint)*(short *)(param_1 + 4);
    FUN_10a77ebb8();
    puVar4 = param_2 + -0xd;
    if (uVar2 == uVar3) {
      puVar5 = puVar4;
      FUN_10a003e3c(puVar4,param_1);
      if (((uint)puVar5 >> 7 & 1) != 0) {
LAB_10a7b08a8:
        uVar14 = param_2[-0xc];
        uVar13 = *puVar4;
        param_4[2] = param_2[-0xb];
        param_4[1] = uVar14;
        *param_4 = uVar13;
        param_2[-0xc] = 0;
        param_2[-0xb] = 0;
        *puVar4 = 0;
        param_4[3] = param_2[-10];
        *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_2 + -9);
        func_0x00010a3518a0((long)param_4 + 0x24,(long)param_2 + -0x44);
        uVar14 = param_1[1];
        uVar13 = *param_1;
        param_4[0xf] = param_1[2];
        param_4[0xe] = uVar14;
        param_4[0xd] = uVar13;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[0x10] = param_1[3];
        *(undefined2 *)(param_4 + 0x11) = *(undefined2 *)(param_1 + 4);
        puVar4 = (undefined8 *)((long)param_4 + 0x8c);
        goto LAB_10a7b0908;
      }
    }
    else if (uVar3 < uVar2) goto LAB_10a7b08a8;
    uVar14 = param_1[1];
    uVar13 = *param_1;
    param_4[2] = param_1[2];
    param_4[1] = uVar14;
    *param_4 = uVar13;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_4[3] = param_1[3];
    *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
    puVar4 = (undefined8 *)((long)param_4 + 0x24);
    puVar8 = (undefined4 *)((long)param_1 + 0x24);
    unaff_x30 = 0x10a7b04c0;
  }
  else {
    if (param_3 != 1) {
      if ((long)param_3 < 9) {
        if (param_1 == param_2) {
          return param_1;
        }
        uVar14 = param_1[1];
        uVar13 = *param_1;
        param_4[2] = param_1[2];
        param_4[1] = uVar14;
        *param_4 = uVar13;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_4[3] = param_1[3];
        *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
        puVar4 = (undefined8 *)((long)param_4 + 0x24);
        puVar8 = (undefined4 *)((long)param_1 + 0x24);
        unaff_x30 = 0x10a7b0538;
        puVar1 = auStack_70;
        goto SUB_10a3518a0;
      }
      uVar9 = param_3 >> 1;
      puVar5 = param_1 + uVar9 * 0xd;
      FUN_10a7afdd4(param_1,puVar5,uVar9,param_4,uVar9);
      lVar10 = param_3 - (param_3 >> 1);
      puVar6 = puVar5;
      FUN_10a7afdd4(puVar5,param_2,lVar10,param_4 + uVar9 * 0xd,lVar10);
      puVar4 = (undefined8 *)((long)param_4 + 0x24);
      if (puVar5 == param_2) {
        if (param_1 == puVar5) {
          return puVar6;
        }
        lVar10 = (long)param_1 + 0x24;
        do {
          uVar14 = *(undefined8 *)(lVar10 + -0x1c);
          uVar13 = *(undefined8 *)(lVar10 + -0x24);
          *(undefined8 *)((long)puVar4 + -0x14) = *(undefined8 *)(lVar10 + -0x14);
          *(undefined8 *)((long)puVar4 + -0x1c) = uVar14;
          *(undefined8 *)((long)puVar4 + -0x24) = uVar13;
          *(undefined8 *)(lVar10 + -0x14) = 0;
          *(undefined8 *)(lVar10 + -0x1c) = 0;
          *(undefined8 *)(lVar10 + -0x24) = 0;
          *(undefined8 *)((long)puVar4 + -0xc) = *(undefined8 *)(lVar10 + -0xc);
          *(undefined2 *)((long)puVar4 + -4) = *(undefined2 *)(lVar10 + -4);
          puVar7 = puVar4;
          func_0x00010a3518a0(puVar4,lVar10);
          puVar4 = puVar4 + 0xd;
          puVar6 = (undefined8 *)(lVar10 + 0x44);
          lVar10 = lVar10 + 0x68;
        } while (puVar6 != puVar5);
        return puVar7;
      }
      uVar2 = (uint)*(short *)(puVar5 + 4);
      FUN_10a77ebb8();
      uVar3 = (uint)*(short *)(param_1 + 4);
      FUN_10a77ebb8();
      unaff_x20 = param_4;
      if (uVar2 == uVar3) {
        puVar6 = puVar5;
        FUN_10a003e3c(puVar5,param_1);
        if (((uint)puVar6 >> 7 & 1) != 0) {
LAB_10a7b0800:
          uVar14 = puVar5[1];
          uVar13 = *puVar5;
          param_4[2] = puVar5[2];
          param_4[1] = uVar14;
          *param_4 = uVar13;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          param_4[3] = puVar5[3];
          *(undefined2 *)(param_4 + 4) = *(undefined2 *)(puVar5 + 4);
          puVar8 = (undefined4 *)((long)puVar5 + 0x24);
          unaff_x30 = 0x10a7b0834;
          puVar1 = auStack_70;
          goto SUB_10a3518a0;
        }
      }
      else if (uVar3 < uVar2) goto LAB_10a7b0800;
      uVar14 = param_1[1];
      uVar13 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar14;
      *param_4 = uVar13;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_4[3] = param_1[3];
      *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
      puVar8 = (undefined4 *)((long)param_1 + 0x24);
      unaff_x30 = 0x10a7b07f4;
      puVar1 = auStack_70;
      goto SUB_10a3518a0;
    }
    uVar14 = param_1[1];
    uVar13 = *param_1;
    param_4[2] = param_1[2];
    param_4[1] = uVar14;
    *param_4 = uVar13;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_4[3] = param_1[3];
    *(undefined2 *)(param_4 + 4) = *(undefined2 *)(param_1 + 4);
    puVar4 = (undefined8 *)((long)param_4 + 0x24);
LAB_10a7b0908:
    puVar8 = (undefined4 *)((long)param_1 + 0x24);
    puVar1 = (undefined1 *)register0x00000008;
    param_4 = unaff_x19;
    puVar12 = unaff_x29;
  }
SUB_10a3518a0:
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar1 + -0x18) = param_4;
  *(undefined1 **)(puVar1 + -0x10) = puVar12;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined1 *)(puVar4 + 8) = 0x10;
  *(undefined8 **)(puVar1 + -0x28) = puVar4;
  if (*(char *)(puVar8 + 0x10) == '\0') {
    uVar11 = 0;
    *(undefined4 *)puVar4 = *puVar8;
  }
  else {
    FUN_10a351904(puVar1 + -0x28,puVar8);
    uVar11 = *(undefined1 *)(puVar8 + 0x10);
  }
  *(undefined1 *)(puVar4 + 8) = uVar11;
  return puVar4;
}



/* Entry: 10a7b09e0; end: 10a7b10ef;  */

void FUN_10a7b09e0(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong param_5,
                  ulong *param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *unaff_x19;
  undefined1 *puVar10;
  ulong *unaff_x20;
  ulong *unaff_x21;
  undefined4 *unaff_x22;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined2 auStack_80 [2];
  undefined4 auStack_7c [7];
  
  uStack_90 = param_7;
  uStack_88 = param_5;
joined_r0x00010a7b0a04:
  if (uStack_88 != 0) {
    if (((long)uStack_90 < param_4) && ((long)uStack_90 < (long)uStack_88)) {
      if (param_4 != 0) {
        lVar19 = 0;
        lVar13 = -param_4;
        do {
          uVar5 = (uint)(short)param_2[4];
          FUN_10a77ebb8();
          uVar6 = (uint)*(short *)((undefined1 *)((long)param_1 + lVar19) + 0x20);
          FUN_10a77ebb8();
          if (uVar5 == uVar6) {
            puVar7 = param_2;
            FUN_10a003e3c(param_2,(undefined1 *)((long)param_1 + lVar19));
            if (((uint)puVar7 >> 7 & 1) != 0) goto LAB_10a7b0a84;
          }
          else if (uVar6 < uVar5) goto LAB_10a7b0a84;
          lVar19 = lVar19 + 0x68;
          bVar4 = lVar13 == -1;
          lVar13 = lVar13 + 1;
          if (bVar4) {
            return;
          }
        } while( true );
      }
    }
    else {
      puVar7 = param_6;
      if ((long)uStack_88 < param_4) {
        if (param_2 == param_3) {
LAB_10a7b0edc:
          puVar14 = (ulong *)0x0;
        }
        else {
          lVar19 = 0;
          puVar14 = (ulong *)0x0;
          do {
            puVar1 = (undefined8 *)((long)param_6 + lVar19);
            puVar2 = (undefined8 *)((long)param_2 + lVar19);
            uVar21 = puVar2[1];
            uVar20 = *puVar2;
            puVar1[2] = puVar2[2];
            puVar1[1] = uVar21;
            *puVar1 = uVar20;
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = 0;
            puVar1[3] = puVar2[3];
            *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar2 + 4);
            func_0x00010a3518a0((undefined1 *)((long)puVar1 + 0x24),
                                (undefined1 *)((long)puVar2 + 0x24));
            puVar14 = (ulong *)((long)puVar14 + 1);
            lVar19 = lVar19 + 0x68;
          } while (puVar2 + 0xd != param_3);
          puVar16 = (ulong *)((long)param_6 + lVar19);
          puVar9 = param_3;
          puStack_a8 = param_3;
          puStack_a0 = param_6;
          do {
            puVar7 = puStack_a0;
            puVar11 = puVar9 + -0xd;
            if (param_2 == param_1) {
              FUN_10a7b136c(auStack_80,(ulong *)((long)param_6 + lVar19),puVar16,puStack_a0,
                            puStack_a0,puStack_a8,param_3);
              break;
            }
            uVar5 = (uint)(short)puVar16[-9];
            FUN_10a77ebb8();
            uVar6 = (uint)(short)param_2[-9];
            FUN_10a77ebb8();
            puVar7 = param_2 + -0xd;
            puVar15 = puVar16 + -0xd;
            if (uVar5 == uVar6) {
              puVar8 = puVar15;
              FUN_10a003e3c(puVar15,puVar7);
              if (((uint)puVar8 >> 7 & 1) != 0) goto LAB_10a7b0e6c;
LAB_10a7b0e3c:
              if (*(char *)((long)puVar9 + -0x51) < '\0') {
                __ZdlPv(*puVar11);
              }
              uVar18 = puVar16[-0xc];
              uVar17 = *puVar15;
              puVar9[-0xb] = puVar16[-0xb];
              puVar9[-0xc] = uVar18;
              *puVar11 = uVar17;
              puVar8 = puVar16;
              puVar7 = param_2;
              puVar16 = puVar15;
            }
            else {
              if (uVar5 <= uVar6) goto LAB_10a7b0e3c;
LAB_10a7b0e6c:
              if (*(char *)((long)puVar9 + -0x51) < '\0') {
                __ZdlPv(*puVar11);
              }
              uVar18 = param_2[-0xc];
              uVar17 = *puVar7;
              puVar9[-0xb] = param_2[-0xb];
              puVar9[-0xc] = uVar18;
              *puVar11 = uVar17;
              puVar8 = param_2;
            }
            *(undefined1 *)((long)puVar8 + -0x51) = 0;
            *(undefined1 *)(puVar8 + -0xd) = 0;
            puVar9[-10] = puVar8[-10];
            *(short *)(puVar9 + -9) = (short)puVar8[-9];
            FUN_10a7a35b4((undefined1 *)((long)puVar9 + -0x44),(undefined1 *)((long)puVar8 + -0x44))
            ;
            param_3 = param_3 + -0xd;
            param_2 = puVar7;
            puVar7 = puStack_a0;
            puVar9 = puVar11;
          } while (puVar16 != puStack_a0);
        }
      }
      else {
        if (param_2 == param_1) goto LAB_10a7b0edc;
        puVar14 = (ulong *)0x0;
        puVar10 = (undefined1 *)((long)param_1 + 0x24);
        puVar16 = param_6;
        do {
          uVar18 = *(ulong *)(puVar10 + -0x1c);
          uVar17 = *(ulong *)(puVar10 + -0x24);
          puVar16[2] = *(ulong *)(puVar10 + -0x14);
          puVar16[1] = uVar18;
          *puVar16 = uVar17;
          *(undefined8 *)(puVar10 + -0x14) = 0;
          *(undefined8 *)(puVar10 + -0x1c) = 0;
          *(undefined8 *)(puVar10 + -0x24) = 0;
          puVar16[3] = *(ulong *)(puVar10 + -0xc);
          *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(puVar10 + -4);
          func_0x00010a3518a0((undefined1 *)((long)puVar16 + 0x24),puVar10);
          puVar14 = (ulong *)((long)puVar14 + 1);
          puVar16 = puVar16 + 0xd;
          puVar9 = (ulong *)(puVar10 + 0x44);
          puVar10 = puVar10 + 0x68;
        } while (puVar9 != param_2);
        do {
          if (param_2 == param_3) {
            FUN_10a7b12d0(param_6,puVar16,param_1);
            break;
          }
          uVar5 = (uint)(short)param_2[4];
          FUN_10a77ebb8();
          uVar6 = (uint)(short)param_6[4];
          FUN_10a77ebb8();
          if (uVar5 == uVar6) {
            puVar9 = param_2;
            FUN_10a003e3c(param_2,param_6);
            if (((uint)puVar9 >> 7 & 1) != 0) goto LAB_10a7b0fc8;
LAB_10a7b0f78:
            if (*(char *)((long)param_1 + 0x17) < '\0') {
              __ZdlPv(*param_1);
            }
            uVar18 = param_6[1];
            uVar17 = *param_6;
            param_1[2] = param_6[2];
            param_1[1] = uVar18;
            *param_1 = uVar17;
            *(undefined1 *)((long)param_6 + 0x17) = 0;
            *(undefined1 *)param_6 = 0;
            param_1[3] = param_6[3];
            *(short *)(param_1 + 4) = (short)param_6[4];
            FUN_10a7a35b4((undefined1 *)((long)param_1 + 0x24),(undefined1 *)((long)param_6 + 0x24))
            ;
            param_6 = param_6 + 0xd;
          }
          else {
            if (uVar5 <= uVar6) goto LAB_10a7b0f78;
LAB_10a7b0fc8:
            if (*(char *)((long)param_1 + 0x17) < '\0') {
              __ZdlPv(*param_1);
            }
            uVar18 = param_2[1];
            uVar17 = *param_2;
            param_1[2] = param_2[2];
            param_1[1] = uVar18;
            *param_1 = uVar17;
            *(undefined1 *)((long)param_2 + 0x17) = 0;
            *(undefined1 *)param_2 = 0;
            param_1[3] = param_2[3];
            *(short *)(param_1 + 4) = (short)param_2[4];
            FUN_10a7a35b4((undefined1 *)((long)param_1 + 0x24),(undefined1 *)((long)param_2 + 0x24))
            ;
            param_2 = param_2 + 0xd;
          }
          param_1 = param_1 + 0xd;
        } while (puVar16 != param_6);
      }
      if (puVar7 != (ulong *)0x0) {
SUB_10a7b1264:
        *(undefined4 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        while( true ) {
          if (puVar14 == (ulong *)0x0) {
            return;
          }
          if (0x10 < (ulong)*(byte *)((long)puVar7 + 100)) break;
          (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)puVar7 + 100)])
                    ((undefined1 *)((long)puVar7 + 0x24));
          if (*(char *)((long)puVar7 + 0x17) < '\0') {
            __ZdlPv(*puVar7);
          }
          puVar7 = puVar7 + 0xd;
          puVar14 = (ulong *)((long)puVar14 + -1);
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7b12d0);
        (*pcVar3)();
      }
    }
  }
  return;
LAB_10a7b0a84:
  puVar7 = (ulong *)((long)param_1 + lVar19);
  puVar14 = puVar7;
  if (-lVar13 < (long)uStack_88) {
    puStack_98 = (ulong *)((long)uStack_88 / 2);
    puVar16 = param_2 + (long)puStack_98 * 0xd;
    puVar10 = (undefined1 *)((long)param_2 + (-lVar19 - (long)param_1));
    puVar9 = param_2;
    puStack_a8 = param_3;
    puStack_a0 = param_6;
    if (puVar10 != (undefined1 *)0x0) {
      uVar17 = ((long)puVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
      puStack_b0 = puVar7;
      do {
        uVar18 = uVar17 >> 1;
        puVar14 = puVar7 + uVar18 * 0xd;
        uVar5 = (uint)(short)puVar16[4];
        FUN_10a77ebb8();
        uVar6 = (uint)(short)puVar14[4];
        FUN_10a77ebb8();
        if (uVar5 == uVar6) {
          puVar9 = puVar16;
          FUN_10a003e3c(puVar16,puVar14);
          if (((uint)puVar9 >> 7 & 1) == 0) {
LAB_10a7b0b18:
            puVar7 = puVar14 + 0xd;
            uVar18 = uVar17 + ~uVar18;
          }
        }
        else if (uVar5 <= uVar6) goto LAB_10a7b0b18;
        uVar17 = uVar18;
        puVar9 = puVar7;
        puVar14 = puStack_b0;
      } while (uVar17 != 0);
    }
    param_4 = ((long)((long)puVar9 + (-lVar19 - (long)param_1)) >> 3) * 0x4ec4ec4ec4ec4ec5;
  }
  else {
    if (lVar13 == -1) {
      unaff_x21 = (ulong *)((long)param_1 + lVar19);
      unaff_x29 = &stack0xfffffffffffffff0;
      lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_98 = (ulong *)unaff_x21[1];
      puStack_a0 = (ulong *)*unaff_x21;
      uStack_90 = unaff_x21[2];
      uStack_88 = unaff_x21[3];
      unaff_x21[1] = 0;
      unaff_x21[2] = 0;
      *unaff_x21 = 0;
      auStack_80[0] = (undefined2)unaff_x21[4];
      unaff_x20 = (ulong *)auStack_7c;
      unaff_x22 = (undefined4 *)((long)unaff_x21 + 0x24);
      puStack_a8 = unaff_x20;
      if (*(char *)((long)unaff_x21 + 100) == '\0') {
        auStack_7c[0] = *unaff_x22;
        uVar17 = 0;
      }
      else {
        FUN_10a351904(&puStack_a8,unaff_x22);
        uVar17 = (ulong)*(byte *)((long)unaff_x21 + 100) << 0x20;
        if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
          __ZdlPv(*unaff_x21);
        }
      }
      uVar22 = param_2[1];
      uVar18 = *param_2;
      unaff_x21[2] = param_2[2];
      unaff_x21[1] = uVar22;
      *unaff_x21 = uVar18;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
      unaff_x21[3] = param_2[3];
      *(short *)(unaff_x21 + 4) = (short)param_2[4];
      FUN_10a7a35b4(unaff_x22,(undefined1 *)((long)param_2 + 0x24));
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      uVar18 = uStack_90;
      param_2[1] = (ulong)puStack_98;
      *param_2 = (ulong)puStack_a0;
      uStack_90 = uStack_90 & 0xffffffffffffff;
      puStack_a0 = (ulong *)((ulong)puStack_a0 & 0xffffffffffffff00);
      param_2[2] = uVar18;
      param_2[3] = uStack_88;
      *(undefined2 *)(param_2 + 4) = auStack_80[0];
      puVar7 = unaff_x20;
      FUN_10a7a35b4((undefined1 *)((long)param_2 + 0x24));
      if (0x10 < uVar17 >> 0x20) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7b1260);
        (*pcVar3)();
      }
      puVar14 = unaff_x20;
      (*(code *)(&PTR_FUN_110ba1f88)[uVar17 >> 0x20])();
      if ((long)uStack_90 < 0) {
        puVar14 = puStack_a0;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
        return;
      }
      unaff_x30 = 0x10a7b1264;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)&puStack_b0;
      unaff_x19 = param_2;
      goto SUB_10a7b1264;
    }
    param_4 = -lVar13 / 2;
    puVar16 = param_2;
    puStack_a8 = param_3;
    puStack_a0 = param_6;
    if (param_2 != param_3) {
      puStack_98 = param_1 + param_4 * 0xd;
      uVar17 = ((long)param_3 - (long)param_2 >> 3) * 0x4ec4ec4ec4ec4ec5;
      puStack_b0 = puVar7;
      do {
        uVar18 = uVar17 >> 1;
        puVar7 = puVar16 + uVar18 * 0xd;
        uVar5 = (uint)(short)puVar7[4];
        FUN_10a77ebb8();
        uVar6 = (uint)*(short *)((long)param_1 + lVar19 + param_4 * 0x68 + 0x20);
        FUN_10a77ebb8();
        if (uVar5 == uVar6) {
          puVar14 = puVar7;
          FUN_10a003e3c(puVar7,(undefined1 *)((long)puStack_98 + lVar19));
          if (((uint)puVar14 >> 7 & 1) != 0) {
LAB_10a7b0bd8:
            puVar16 = puVar7 + 0xd;
            uVar18 = uVar17 + ~uVar18;
          }
        }
        else if (uVar6 < uVar5) goto LAB_10a7b0bd8;
        puVar14 = puStack_b0;
        uVar17 = uVar18;
      } while (uVar18 != 0);
    }
    puStack_98 = (ulong *)(((long)puVar16 - (long)param_2 >> 3) * 0x4ec4ec4ec4ec4ec5);
    puVar9 = (ulong *)((long)param_1 + lVar19 + param_4 * 0x68);
  }
  puVar7 = puVar16;
  if ((puVar9 != param_2) && (puVar7 = puVar9, param_2 != puVar16)) {
    FUN_10a7b10f0(puVar9,param_2);
    puVar11 = param_2;
    while( true ) {
      puVar7 = puVar7 + 0xd;
      param_2 = param_2 + 0xd;
      if (param_2 == puVar16) break;
      puVar15 = param_2;
      if (puVar7 != puVar11) {
        puVar15 = puVar11;
      }
      FUN_10a7b10f0(puVar7,param_2);
      puVar11 = puVar15;
    }
    puVar8 = puVar11;
    puVar15 = puVar7;
    if (puVar7 != puVar11) {
      do {
        while( true ) {
          puVar12 = puVar8;
          FUN_10a7b10f0(puVar15,puVar11);
          puVar15 = puVar15 + 0xd;
          puVar11 = puVar11 + 0xd;
          if (puVar11 == puVar16) break;
          puVar8 = puVar11;
          if (puVar15 != puVar12) {
            puVar8 = puVar12;
          }
        }
        puVar8 = puVar12;
        puVar11 = puVar12;
      } while (puVar15 != puVar12);
    }
  }
  puVar11 = puStack_98;
  uVar17 = uStack_88 - (long)puStack_98;
  if (param_4 + (long)puStack_98 < (long)((uStack_88 - (param_4 + (long)puStack_98)) - lVar13)) {
    FUN_10a7b09e0((undefined1 *)((long)param_1 + lVar19),puVar9,puVar7,param_4,puStack_98,puStack_a0
                  ,uStack_90);
    uStack_88 = uVar17;
    param_6 = puStack_a0;
    param_4 = -(param_4 + lVar13);
    param_3 = puStack_a8;
    param_2 = puVar16;
    param_1 = puVar7;
  }
  else {
    FUN_10a7b09e0(puVar7,puVar16,puStack_a8,-(param_4 + lVar13),uVar17,puStack_a0,uStack_90);
    uStack_88 = (ulong)puVar11;
    param_6 = puStack_a0;
    param_3 = puVar7;
    param_2 = puVar9;
    param_1 = puVar14;
    puStack_a8 = puVar7;
  }
  goto joined_r0x00010a7b0a04;
}



/* Entry: 10a7b10f0; end: 10a7b12cf;  */

void FUN_10a7b10f0(ulong *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined2 uStack_80;
  undefined4 auStack_7c [16];
  byte bStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_1[1];
  puStack_a0 = (undefined8 *)*param_1;
  uStack_90 = param_1[2];
  uStack_88 = param_1[3];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_80 = (undefined2)param_1[4];
  puVar3 = (undefined8 *)auStack_7c;
  puVar1 = (undefined4 *)((long)param_1 + 0x24);
  bStack_3c = 0x10;
  puStack_a8 = puVar3;
  if (*(char *)((long)param_1 + 100) == '\0') {
    auStack_7c[0] = *puVar1;
    bStack_3c = 0;
  }
  else {
    FUN_10a351904(&puStack_a8,puVar1);
    bStack_3c = *(byte *)((long)param_1 + 100);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  param_1[3] = param_2[3];
  *(short *)(param_1 + 4) = (short)param_2[4];
  FUN_10a7a35b4(puVar1,(undefined1 *)((long)param_2 + 0x24));
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  uVar5 = uStack_90;
  param_2[1] = uStack_98;
  *param_2 = (ulong)puStack_a0;
  uStack_90 = uStack_90 & 0xffffffffffffff;
  puStack_a0 = (undefined8 *)((ulong)puStack_a0 & 0xffffffffffffff00);
  param_2[2] = uVar5;
  param_2[3] = uStack_88;
  *(undefined2 *)(param_2 + 4) = uStack_80;
  puVar4 = puVar3;
  FUN_10a7a35b4((undefined1 *)((long)param_2 + 0x24));
  if ((ulong)bStack_3c < 0x11) {
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_3c])();
    if ((long)uStack_90 < 0) {
      puVar3 = puStack_a0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    while( true ) {
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if (0x10 < (ulong)*(byte *)((long)puVar4 + 100)) break;
      (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)puVar4 + 100)])
                ((undefined4 *)((long)puVar4 + 0x24));
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      puVar4 = puVar4 + 0xd;
      puVar3 = (undefined8 *)((long)puVar3 + -1);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b12d0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7b1260);
  (*pcVar2)();
}



/* Entry: 10a7b12d0; end: 10a7b136b;  */

void FUN_10a7b12d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        __ZdlPv(*puVar1);
      }
      puVar2 = (undefined8 *)((long)param_1 + lVar3);
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
      *(undefined1 *)puVar2 = 0;
      puVar1[3] = puVar2[3];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar2 + 4);
      FUN_10a7a35b4((long)puVar1 + 0x24,(undefined1 *)((long)puVar2 + 0x24));
      lVar3 = lVar3 + 0x68;
    } while (puVar2 + 0xd != param_2);
  }
  return;
}



/* Entry: 10a7b136c; end: 10a7b143b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7b13bc) */

void FUN_10a7b136c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_3;
  if (param_3 != param_5) {
    lVar3 = 0;
    do {
      lVar2 = param_7 + lVar3;
      lVar1 = param_3 + lVar3;
      uVar5 = *(undefined8 *)(lVar1 + -0x60);
      uVar4 = *(undefined8 *)(lVar1 + -0x68);
      *(undefined8 *)(lVar2 + -0x58) = *(undefined8 *)(lVar1 + -0x58);
      *(undefined8 *)(lVar2 + -0x60) = uVar5;
      *(undefined8 *)(lVar2 + -0x68) = uVar4;
      *(undefined1 *)(lVar1 + -0x51) = 0;
      *(undefined1 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
      *(undefined2 *)(lVar2 + -0x48) = *(undefined2 *)(lVar1 + -0x48);
      FUN_10a7a35b4(lVar2 + -0x44,lVar1 + -0x44);
      lVar3 = lVar3 + -0x68;
      lVar2 = param_3 + lVar3;
    } while (lVar2 != param_5);
    param_7 = param_7 + lVar3;
  }
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return;
}



/* Entry: 10a7b143c; end: 10a7b16f3;  */

long * FUN_10a7b143c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a7b1498(plVar1 + 6);
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



/* Entry: 10a7b16f4; end: 10a7b188b;  */

void FUN_10a7b16f4(long param_1)

{
  long lStack_28;
  
  func_0x00010a7a55ac(param_1 + 0xa8);
  lStack_28 = param_1 + 0x80;
  FUN_10a044868(&lStack_28);
  func_0x00010a7a3ed4(param_1 + 0x68);
  FUN_10a7a3f50(param_1 + 0x50);
  func_0x00010a436ff0(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a7b188c; end: 10a7b19af;  */

void FUN_10a7b188c(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar16 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        uVar14 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar14 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297) +
                 *plVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar11 = param_1[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar17 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar14 == 0) {
          lVar15 = 8;
          do {
            uVar13 = uVar13 + lVar15 & uVar11;
            uVar17 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar15 = lVar15 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar4 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar14) = bVar4;
        *(byte *)(uVar10 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar4;
        lVar15 = *plVar1;
        plVar7 = (long *)(uVar9 + uVar14 * 0x10);
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 10a7b19b0; end: 10a7b1a4f;  */

ulong * FUN_10a7b19b0(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_1[2];
  if ((uVar12 < 9) || (uVar12 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar19 = param_1[2];
      param_1[2] = uVar12 << 1 | 1;
      puVar10 = param_1;
      func_0x000104ab30b8();
      if (uVar19 != 0) {
        uVar12 = 0;
        uVar13 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar12)) {
            plVar1 = (long *)(uVar3 + uVar12 * 0x10);
            uVar18 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            uVar18 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297)
                     + *plVar1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            uVar16 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297;
            uVar14 = *param_1;
            uVar15 = param_1[2];
            uVar17 = (uVar16 >> 7 ^ uVar14 >> 0xc) & uVar15;
            uVar20 = *(undefined8 *)(uVar14 + uVar17);
            uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar18 == 0) {
              lVar11 = 8;
              do {
                uVar17 = uVar17 + lVar11 & uVar15;
                uVar20 = *(undefined8 *)(uVar14 + uVar17);
                uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar11 = lVar11 + 8;
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar15;
            bVar4 = (byte)uVar16 & 0x7f;
            *(byte *)(uVar14 + uVar18) = bVar4;
            *(byte *)(uVar14 + (uVar18 - 7 & uVar15) + (uVar15 & 7)) = bVar4;
            lVar11 = *plVar1;
            plVar9 = (long *)(uVar13 + uVar18 * 0x10);
            plVar9[1] = plVar1[1];
            *plVar9 = lVar11;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
        puVar10 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar10);
        return puVar10;
      }
      return puVar10;
    }
  }
  else {
    param_2 = (long *)&UNK_110c185d0;
    FUN_10ae6c914(param_1,&UNK_110c185d0,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar12 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar12 = (SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297) +
           *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar12;
  return (ulong *)(SUB168(auVar8 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297);
}



/* Entry: 10a7b1a50; end: 10a7b1a9b;  */

ulong FUN_10a7b1a50(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a7b1a9c; end: 10a7b1bd3;  */

void FUN_10a7b1a9c(long *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  
  plVar6 = param_1 + 1;
  plVar4 = (long *)*plVar6;
  do {
    plVar7 = plVar6;
    if (plVar4 == (long *)0x0) {
LAB_10a7b1b08:
      puVar3 = (undefined8 *)0x50;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar3 + 4,*param_3,param_3[1]);
      }
      else {
        uVar8 = *param_3;
        puVar3[5] = param_3[1];
        puVar3[4] = uVar8;
        puVar3[6] = param_3[2];
      }
      puVar3[7] = param_3[3];
      lVar5 = param_4[1];
      uVar8 = *param_4;
      puVar3[9] = param_4[1];
      puVar3[8] = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar6;
      *plVar7 = (long)puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar7;
      }
      func_0x000107c2b058(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar6 = plVar4, (ulong)plVar6[7] <= param_2) {
      if (param_2 <= (ulong)plVar6[7]) {
        return;
      }
      plVar4 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar7 = plVar6 + 1;
        goto LAB_10a7b1b08;
      }
    }
    plVar4 = (long *)*plVar6;
  } while( true );
}



/* Entry: 10a7b1bd4; end: 10a7b1cdb;  */

void FUN_10a7b1bd4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a7b1c1c(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7b1cdc; end: 10a7b1eab;  */

long * FUN_10a7b1cdc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    if ((char)plVar3[2] == '\x01') {
      func_0x00010a7b1c98(lVar2 + 0x10);
    }
    __ZdlPv(lVar2);
  }
  return plVar3;
}



/* Entry: 10a7b1eac; end: 10a7b1ef3;  */

long * FUN_10a7b1eac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a7b1c98(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10a7b1ef4; end: 10a7b2067;  */

void FUN_10a7b1ef4(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110c18600;
  uVar1 = param_2;
  if (param_2 < 2) {
    uVar1 = 1;
  }
  *(uint *)(puVar2 + 3) = uVar1;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = 0x4000 / uVar1;
  }
  if (0xff < uVar4) {
    uVar4 = 0x100;
  }
  *(uint *)((long)puVar2 + 0x1c) = uVar4;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = puVar2 + 0xf;
  puVar2[0x10] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  uStack_51 = 0;
  if (param_2 < 0x4001) {
    func_0x000105343774(puVar2 + 4,uVar4 * uVar1,&uStack_51);
    uVar4 = *(uint *)((long)puVar2 + 0x1c);
  }
  func_0x0001056c5718(puVar2 + 7,uVar4);
  uVar3 = (ulong)*(uint *)((long)puVar2 + 0x1c);
  uStack_52 = 0;
  uVar5 = puVar2[0xb] - puVar2[10];
  if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
    if (uVar3 < uVar5) {
      puVar2[0xb] = puVar2[10] + uVar3;
    }
  }
  else {
    func_0x000105343774(puVar2 + 10,uVar3 - uVar5,&uStack_52);
  }
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10a7b2068; end: 10a7b2077;  */

void FUN_10a7b2068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18600;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b2078; end: 10a7b2097;  */

void FUN_10a7b2078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18600;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b2098; end: 10a7b20f7;  */

void FUN_10a7b2098(long param_1)

{
  func_0x000107c28478(param_1 + 0x70,*(undefined8 *)(param_1 + 0x78));
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a7b20f8; end: 10a7b20fb;  */

void FUN_10a7b20f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b20fc; end: 10a7b21ef;  */

long * FUN_10a7b20fc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = param_2;
  FUN_10a77e8a8();
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    uVar5 = (long)plVar4 - 1;
    if (((ulong)plVar4 & uVar5) == 0) {
      plVar6 = (long *)(uVar5 & (ulong)plVar2);
    }
    else {
      plVar6 = plVar2;
      if (plVar4 <= plVar2) {
        uVar1 = 0;
        if (plVar4 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar4;
        }
        plVar6 = (long *)((long)plVar2 - uVar1 * (long)plVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        plVar7 = (long *)plVar3[1];
        if (plVar7 == plVar2) {
          if ((((plVar3[2] == *param_2) && (plVar3[3] == param_2[1])) && (plVar3[4] == param_2[2]))
             && ((int)plVar3[5] == (int)param_2[3])) {
            return plVar3;
          }
        }
        else {
          if (((ulong)plVar4 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar4 <= plVar7) {
            uVar1 = 0;
            if (plVar4 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar4;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
          }
          if (plVar7 != plVar6) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7b21f0; end: 10a7b23c3;  */

void FUN_10a7b21f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  
  puVar4 = (undefined8 *)0xf8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c18650;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar7 = *param_2;
  FUN_10a7a5130(&uStack_80,lVar7,param_2[1],(param_2[1] - lVar7 >> 4) * -0x5555555555555555);
  uStack_68 = (undefined4)param_2[3];
  uStack_64 = *(undefined1 *)((long)param_2 + 0x1c);
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  lVar6 = param_2[4];
  lVar1 = param_2[5];
  lVar2 = lVar1 - lVar6;
  if (lVar2 == 0) {
    lVar6 = 0;
    uStack_60 = 0;
    lStack_50 = 0;
  }
  else {
    uVar5 = (lVar2 >> 5) * -0x5555555555555555;
    if (0x2aaaaaaaaaaaaaa < uVar5) {
      FUN_10a7a4be0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7b2380);
      (*pcVar3)();
    }
    FUN_10a7a4bf4();
    lStack_50 = uVar5 + lVar7 * 0x60;
    uStack_60 = uVar5;
    uStack_58 = uVar5;
    FUN_10a7a53c4(lVar6,lVar1,uVar5);
  }
  puVar4[4] = uStack_78;
  puVar4[3] = uStack_80;
  puVar4[5] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  *(undefined4 *)(puVar4 + 6) = uStack_68;
  *(undefined1 *)((long)puVar4 + 0x34) = uStack_64;
  puVar4[7] = uStack_60;
  puVar4[8] = lVar6;
  puVar4[9] = lStack_50;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  *(undefined4 *)(puVar4 + 0x16) = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  *(undefined8 *)((long)puVar4 + 0xa5) = 0;
  *(undefined8 *)((long)puVar4 + 0x9d) = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0x17] = puVar4 + 0x18;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  *(undefined4 *)(puVar4 + 0x1e) = 0x3f800000;
  func_0x00010a7a55ac(&uStack_60);
  puStack_48 = (undefined1 *)&uStack_80;
  func_0x00010a1f4614(&puStack_48);
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a7b23c4; end: 10a7b23d3;  */

void FUN_10a7b23c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7b23d4; end: 10a7b23f3;  */

void FUN_10a7b23d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7b23f4; end: 10a7b246f;  */

void FUN_10a7b23f4(long param_1)

{
  long lStack_28;
  
  FUN_10a7ad41c(param_1 + 0xd0);
  FUN_10a7b2474(*(undefined8 *)(param_1 + 0xc0));
  lStack_28 = param_1 + 0x90;
  func_0x00010a1f4614(&lStack_28);
  FUN_10a7ad3c4(param_1 + 0x80);
  FUN_10a7ad3c4(param_1 + 0x70);
  lStack_28 = param_1 + 0x58;
  func_0x00010a581140(&lStack_28);
  func_0x00010a7a55ac(param_1 + 0x38);
  lStack_28 = param_1 + 0x18;
  func_0x00010a1f4614(&lStack_28);
  return;
}


