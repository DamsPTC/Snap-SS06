/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a76ab8c; end: 10a76abe3;  */

long FUN_10a76ab8c(long param_1)

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



/* Entry: 10a76abe4; end: 10a76ac9b;  */

void FUN_10a76abe4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a769ec8(param_1,param_2,FUN_10a7511ac,0,param_3,param_4,param_5);
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



/* Entry: 10a76ac9c; end: 10a76b08f;  */

/* WARNING: Removing unreachable block (ram,0x00010a76afa8) */

void FUN_10a76ac9c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a768ed0(param_2,param_3);
  FUN_10a76b090(param_5);
  func_0x000109898570(auStack_a8,param_2,param_4);
  if (*(uint *)(param_4 + 0x10) < 2) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = param_2;
    func_0x00010a7684c8();
  }
  FUN_10a2e79e4(&plStack_b8,param_2,param_4 + 0x20);
  FUN_10a05dcbc(auStack_c8,param_2,param_4 + 0x30);
  FUN_10a768f5c(auStack_d8,param_2,param_4 + 0x40);
  plVar4 = plStack_b0;
  plVar13 = plStack_b8;
  plStack_90 = plStack_b8;
  plStack_88 = plStack_b0;
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  FUN_10a750998(plVar14 == (long *)0x0,auStack_d8);
  if (plVar14 != (long *)0x0) {
    uVar9 = (ulong)*(uint *)(plVar14 + 3);
    FUN_10a750a50(uVar9,(char)plVar8[7],auStack_d8);
    if ((uVar9 & 1) == 0) {
      lVar11 = plVar8[5];
      if (lVar11 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f673102,&UNK_10f673989,0xea,&UNK_10f67323b);
        }
      }
      else {
        FUN_10a750de8(&stack0xffffffffffffffb0,plVar14);
        if (*(char *)((long)plVar14 + 0x4f) < '\0') {
          func_0x000107c3192c(&lStack_70,plVar14[7],plVar14[8]);
        }
        else {
          plStack_68 = (long *)plVar14[8];
          lStack_70 = plVar14[7];
        }
        plStack_80 = plVar13;
        plStack_78 = plVar4;
        if (plVar4 != (long *)0x0) {
          plVar8 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a870f7c(lVar11,&lStack_70,auStack_a8,&plStack_80,&stack0xffffffffffffffb0,auStack_c8,
                      auStack_d8);
        plVar8 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar14 = plStack_78 + 1;
          do {
            lVar11 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (in_stack_ffffffffffffffb8 != (long *)0x0) {
          plVar8 = in_stack_ffffffffffffffb8 + 1;
          do {
            lVar11 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
          }
        }
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar8 = plVar4 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_d0 != (long *)0x0) {
    plVar8 = plStack_d0 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    plVar8 = plStack_c0 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  plVar8 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar14 = plStack_b0 + 1;
    do {
      lVar11 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar11 + 2];
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
  plVar14 = (long *)*plVar8;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - (long)plVar14;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar13 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - (long)plVar14 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar14)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar11;
          _bzero(lVar1,uVar17 * 0x10);
          lVar12 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar12,plVar14,lVar11);
          *plVar8 = lVar12;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          plStack_88 = plVar14;
          plStack_80 = plVar14;
          plStack_78 = plVar14;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar13,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar17 * 2);
  }
  else if (uVar9 < uVar16) {
    while (plVar13 != plVar14 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)(plVar14 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a76b090; end: 10a76b0b3;  */

void FUN_10a76b090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar5 = (long *)0x5;
  uVar9 = 0;
  FUN_10a052ee0(5,0);
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
  FUN_10a768ed0(plVar5,uVar9);
  FUN_10a76b2fc(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar5,param_1);
  if (*(uint *)(param_1 + 0x10) < 2) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = plVar5;
    func_0x00010a767848();
  }
  FUN_10a76b320(&plStack_78,plVar5,param_1 + 0x20);
  FUN_10a768f5c(&lStack_88,plVar5,param_1 + 0x30);
  FUN_10a750998(plVar16 == (long *)0x0,&lStack_88);
  if (plVar16 != (long *)0x0) {
    uVar8 = (ulong)*(uint *)(plVar16 + 3);
    FUN_10a750a50(uVar8,(char)plVar7[7],&lStack_88);
    if ((uVar8 & 1) == 0) {
      if (plVar7[5] == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f673102,&UNK_10f673a9e,0xf8,&UNK_10f67323b);
        }
      }
      else {
        FUN_10a8705b0(plVar7[5],plVar16 + 4,&stack0xffffffffffffff98,(int)plVar16[3],&plStack_78,
                      &lStack_88);
      }
    }
  }
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (in_stack_ffffffffffffff90 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff90 + 1;
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
      (**(code **)(*in_stack_ffffffffffffff90 + 0x10))(in_stack_ffffffffffffff90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff90);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar8 = lVar11 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar11 + 2];
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
  lVar11 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar8) {
    uVar18 = uVar8 - uVar17;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar18) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar18 * 0x10);
          lVar13 = lVar14 + uVar17 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar18 * 0x10;
          plVar6[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
          plStack_80 = (long *)lVar15;
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
    _bzero(lVar14,uVar18 * 0x10);
    plVar6[0x4c] = lVar14 + uVar18 * 0x10;
  }
  else if (uVar8 < uVar17) {
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
}



/* Entry: 10a76b0b4; end: 10a76b2fb;  */

void FUN_10a76b0b4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a768ed0(param_2,param_3);
  FUN_10a76b2fc(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (*(uint *)(param_4 + 0x10) < 2) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = param_2;
    func_0x00010a767848();
  }
  FUN_10a76b320(&plStack_68,param_2,param_4 + 0x20);
  FUN_10a768f5c(&lStack_78,param_2,param_4 + 0x30);
  FUN_10a750998(plVar14 == (long *)0x0,&lStack_78);
  if (plVar14 != (long *)0x0) {
    uVar7 = (ulong)*(uint *)(plVar14 + 3);
    FUN_10a750a50(uVar7,(char)plVar6[7],&lStack_78);
    if ((uVar7 & 1) == 0) {
      if (plVar6[5] == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f673102,&UNK_10f673a9e,0xf8,&UNK_10f67323b);
        }
      }
      else {
        FUN_10a8705b0(plVar6[5],plVar14 + 4,&stack0xffffffffffffffa8,(int)plVar14[3],&plStack_68,
                      &lStack_78);
      }
    }
  }
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
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
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar16) {
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
          _bzero(lVar12,uVar16 * 0x10);
          lVar11 = lVar12 + uVar15 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          plStack_70 = (long *)lVar13;
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
    _bzero(lVar12,uVar16 * 0x10);
    plVar5[0x4c] = lVar12 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
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



/* Entry: 10a76b2fc; end: 10a76b31f;  */

void FUN_10a76b2fc(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 4) {
    return;
  }
  FUN_10a052ee0(4,0,param_1);
  FUN_10a76b378(auStack_58);
  FUN_10a76b4b0(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a76b320; end: 10a76b377;  */

void FUN_10a76b320(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a76b378(auStack_48);
  FUN_10a76b4b0(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a76b378; end: 10a76b4af;  */

void FUN_10a76b378(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a76b480;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a76b480:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a76b490);
  (*pcVar1)();
}



/* Entry: 10a76b4b0; end: 10a76b507;  */

void FUN_10a76b4b0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a76b508();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a76b508; end: 10a76b583;  */

void FUN_10a76b508(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c170c8;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a76b584; end: 10a76b5a3;  */

void FUN_10a76b584(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c170c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a76b5a4; end: 10a76b5cb;  */

undefined1  [16] FUN_10a76b5a4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a76b5c8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a76b5cc; end: 10a76b623;  */

long FUN_10a76b5cc(long param_1)

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



/* Entry: 10a76b624; end: 10a76b6db;  */

void FUN_10a76b624(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a76b6dc(param_1,param_2,FUN_10a751280,0,param_3,param_4,param_5);
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



/* Entry: 10a76b6dc; end: 10a76b7cf;  */

void FUN_10a76b6dc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar5 = param_2;
  FUN_10a768ed0(param_2,param_5);
  FUN_10a76b7d0(param_7);
  lVar4 = param_2;
  FUN_10a767f84(param_2,param_6);
  FUN_10a768f5c(auStack_60,param_2,param_6 + 0x10);
  plVar1 = (long *)(lVar5 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,lVar4,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a76b7d0; end: 10a76b7f3;  */

void FUN_10a76b7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
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
  FUN_10a76b6dc(extraout_x8,plVar3,FUN_10a751454,0,uVar5,param_1,param_4);
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



/* Entry: 10a76b7f4; end: 10a76b8ab;  */

void FUN_10a76b7f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a76b6dc(param_1,param_2,FUN_10a751454,0,param_3,param_4,param_5);
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



/* Entry: 10a76b8ac; end: 10a76b903;  */

long FUN_10a76b8ac(long param_1)

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



/* Entry: 10a76b904; end: 10a76b96f;  */

void FUN_10a76b904(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110c171d8;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a76b970; end: 10a76ba4f;  */

long * FUN_10a76b970(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a76ba50; end: 10a76bad3;  */

undefined1  [16] FUN_10a76ba50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f6767f5;
  return auVar1;
}



/* Entry: 10a76bad4; end: 10a76bbf3;  */

void FUN_10a76bad4(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_90 = (undefined **)0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f674def;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_5c = 0x124;
  uStack_58 = 0xffffffff;
  FUN_10a76bbf4(param_1,&puStack_98);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f674df0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0x133;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7a8ad0();
  puStack_a8 = &UNK_10f674e08;
  puStack_a0 = &UNK_10f674e0d;
  ppuStack_90 = &puStack_a8;
  puStack_98 = &UNK_10f674dfa;
  uStack_88 = 2;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f674def;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7a8c64(param_1,&puStack_98,0);
  FUN_10a7a8e4c(param_1);
  return;
}



/* Entry: 10a76bbf4; end: 10a76bccb;  */

/* WARNING: Removing unreachable block (ram,0x00010a76bc8c) */

undefined1  [16] FUN_10a76bbf4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6767f5,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a7a89d4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a76bccc; end: 10a76bd27;  */

undefined8 * FUN_10a76bccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17530;
  func_0x000107c2826c(param_1 + 0x10);
  func_0x000107c2826c(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a76bd28; end: 10a76bd2b;  */

undefined8 * FUN_10a76bd28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17530;
  func_0x000107c2826c(param_1 + 0x10);
  func_0x000107c2826c(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a76bd2c; end: 10a76bd3f;  */

void FUN_10a76bd2c(void)

{
  FUN_10a76bccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a76bd40; end: 10a76bdaf;  */

void FUN_10a76bd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__19to_stringEi(auStack_38,param_3);
  FUN_10a76bdb0(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a76bdb0; end: 10a76bf17;  */

void FUN_10a76bdb0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x100);
  uVar7 = *(ulong *)(lVar8 + 0x1e0);
  plVar1 = *(long **)(lVar8 + 0x1e8);
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar7 != 0) {
    uVar5 = param_1;
    FUN_10a1c5b90();
    if ((uVar5 & 1) == 0) {
      lVar8 = param_1 + 0x18;
      __ZNSt3__15mutex4lockEv(lVar8);
    }
    else {
      lVar8 = 0;
    }
    plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x150))();
    FUN_10acfcf5c(uVar7,param_2,param_3,plVar6);
    if ((uVar5 & 1) == 0) {
      __ZNSt3__15mutex6unlockEv(lVar8);
    }
    if (((uVar7 & 1) == 0) &&
       (0x172 < *(int *)(*(long *)(*(long *)(param_1 + 0xa8) + 0xa20) + 0x18))) {
      FUN_10a76bff0(param_2);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a76beec);
      (*pcVar4)();
    }
  }
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a76bf18; end: 10a76bf83;  */

void FUN_10a76bf18(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__19to_stringEd(auStack_38);
  FUN_10a76bdb0(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a76bf84; end: 10a76bfef;  */

void FUN_10a76bf84(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__19to_stringEd(auStack_38);
  FUN_10a76bdb0(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a76bff0; end: 10a76c07f;  */

void FUN_10a76bff0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10f676805,param_1);
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f676817,200);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a76c04c);
  (*pcVar1)();
}



/* Entry: 10a76c080; end: 10a76c16f;  */

void FUN_10a76c080(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar1 = param_1;
  FUN_10a1c5b90();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + 0x18;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = param_1 + 0x58;
  func_0x0001067e045c(lVar2,param_2);
  if (lVar2 == 0) {
    func_0x000107c2827c(param_1 + 0x58,param_2,param_2);
  }
  if ((uVar1 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv(lVar3);
  }
  if (lVar2 == 0) {
    func_0x000107c2b054(auStack_58,&UNK_10f674e13);
    FUN_10a76bdb0(param_1,auStack_58,param_2);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 10a76c170; end: 10a76c25f;  */

void FUN_10a76c170(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar1 = param_1;
  FUN_10a1c5b90();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + 0x18;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = param_1 + 0x80;
  func_0x0001067e045c(lVar2,param_2);
  if (lVar2 == 0) {
    func_0x000107c2827c(param_1 + 0x80,param_2,param_2);
  }
  if ((uVar1 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv(lVar3);
  }
  if (lVar2 == 0) {
    func_0x000107c2b054(auStack_58,&UNK_10f674e26);
    FUN_10a76bdb0(param_1,auStack_58,param_2);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 10a76c260; end: 10a76c38b;  */

void FUN_10a76c260(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (param_2 < 0x19) {
    puVar6 = auStack_48;
    func_0x000107c2b054(puVar6,(&PTR_DAT_110c17e00)[param_2 * 2]);
    lVar7 = *(long *)(*(long *)(param_1 + 0xa8) + 0x100);
    lVar8 = *(long *)(lVar7 + 0x1e0);
    plVar2 = *(long **)(lVar7 + 0x1e8);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar8 != 0) {
      FUN_10a1c5b90();
      if (((ulong)puVar6 & 1) == 0) {
        param_1 = param_1 + 0x18;
        __ZNSt3__15mutex4lockEv(param_1);
      }
      else {
        param_1 = 0;
      }
      FUN_10acfd5e4(lVar8,auStack_48);
      if (((ulong)puVar6 & 1) == 0) {
        __ZNSt3__15mutex6unlockEv(param_1);
      }
    }
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a76c358);
  (*pcVar5)();
}



/* Entry: 10a76c38c; end: 10a76c52b;  */

void FUN_10a76c38c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = *(long *)(*(long *)(param_2 + 0xa8) + 0x100);
  plVar2 = *(long **)(lVar8 + 0x1e0);
  plVar3 = *(long **)(lVar8 + 0x1e8);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_50 = plVar2;
  plStack_48 = plVar3;
  if (plVar2 != (long *)0x0) {
    uVar7 = param_2;
    FUN_10a1c5b90();
    if ((uVar7 & 1) == 0) {
      lVar8 = param_2 + 0x18;
      __ZNSt3__15mutex4lockEv(lVar8);
    }
    else {
      lVar8 = 0;
    }
    FUN_10acfd71c(&lStack_68,plVar2);
    if ((uVar7 & 1) == 0) {
      __ZNSt3__15mutex6unlockEv(lVar8);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plVar2 == (long *)0x0) {
    lVar8 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    lVar8 = (long)(float)(ulong)((lStack_60 - lStack_68 >> 4) * -0x3333333333333333);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000104c4f9b8(param_1,lVar8);
  lVar6 = lStack_60;
  for (lVar8 = lStack_68; lVar8 != lVar6; lVar8 = lVar8 + 0x50) {
    FUN_109cfa5ec(param_1,lVar8 + 0x18,lVar8 + 0x18,lVar8 + 0x30);
  }
  plStack_50 = &lStack_68;
  FUN_10a79d8e4(&plStack_50);
  return;
}



/* Entry: 10a76c52c; end: 10a76c5c7;  */

void FUN_10a76c52c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_2 + 0xd48;
  FUN_10a5aeb74(lVar1,&PTR_DAT_110bd9e28);
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != lVar1) {
    dVar4 = *(double *)(*(long *)(param_2 + 0x850) + 0x10);
    do {
      lVar2 = *(long *)(lVar3 + 0x28);
      lVar3 = *(long *)(lVar3 + 8);
      if ((*(ushort *)(lVar2 + 0x180) & 0x17) == 0) {
        FUN_10a41a100((float)dVar4,lVar2,*(undefined8 *)(lVar2 + 0x168));
        FUN_10a44086c(lVar2 + 0x310,lVar2 + 0x2e8);
        func_0x00010a440420(lVar2 + 0x2e8);
      }
    } while (lVar3 != lVar1);
  }
  return;
}



/* Entry: 10a76c5c8; end: 10a76c62b;  */

undefined8 * FUN_10a76c5c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a76c62c; end: 10a76d41b;  */

void FUN_10a76c62c(long param_1)

{
  ulong *puVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *****pppppuVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined *****pppppuVar9;
  undefined ***pppuVar10;
  undefined2 *puVar11;
  undefined8 ****ppppuVar12;
  undefined1 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 ***pppuVar16;
  undefined ****ppppuVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined8 uVar20;
  int *piVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  char *pcVar25;
  long *plVar26;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  undefined1 auStack_498 [8];
  undefined8 uStack_490;
  undefined1 auStack_488 [8];
  undefined8 uStack_480;
  undefined1 auStack_478 [8];
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined8 ***pppuStack_460;
  undefined1 uStack_458;
  undefined8 *puStack_450;
  undefined8 ***pppuStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined1 auStack_418 [8];
  undefined8 uStack_410;
  undefined8 ***pppuStack_408;
  undefined ***pppuStack_400;
  ulong uStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined ***pppuStack_3e8;
  ulong uStack_3e0;
  undefined ****ppppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 auStack_3b0 [56];
  undefined8 uStack_378;
  char cStack_361;
  undefined **appuStack_350 [19];
  undefined1 uStack_2b1;
  undefined1 uStack_2b0;
  undefined2 uStack_2af;
  undefined1 uStack_2ad;
  undefined2 uStack_2ac;
  undefined1 uStack_2aa;
  undefined1 uStack_2a9;
  undefined2 uStack_2a8;
  undefined1 uStack_2a6;
  undefined1 uStack_2a5;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined1 uStack_29e;
  undefined2 uStack_29d;
  undefined1 uStack_29b;
  undefined1 uStack_29a;
  char cStack_299;
  uint auStack_290 [96];
  undefined **appuStack_110 [19];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_418[0] = 0;
  uStack_410 = 0;
  cStack_299 = '\t';
  uStack_2b0 = 0x61;
  uStack_2af = 0x6970;
  uStack_2ad = 0x5f;
  uStack_2ac = 0x7375;
  uStack_2aa = 0x61;
  uStack_2a9 = 0x67;
  uStack_2a8 = 0x65;
  puVar8 = auStack_418;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  uVar24 = *(undefined8 *)(puVar8 + 8);
  *puVar8 = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  uVar20 = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar5 = *puVar8;
  *puVar8 = uVar4;
  pppuStack_3f0 = (undefined8 ***)CONCAT71(pppuStack_3f0._1_7_,uVar5);
  pppuStack_3e8 = *(undefined ****)(puVar8 + 8);
  *(undefined8 *)(puVar8 + 8) = uVar20;
  func_0x000109380ffc(&pppuStack_3e8);
  ppppuStack_3d0 = (undefined ****)((ulong)ppppuStack_3d0 & 0xffffffffffffff00);
  ppuStack_3c8 = (undefined **)0x0;
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar13;
  pppuStack_408 = (undefined8 ***)CONCAT71(pppuStack_408._1_7_,uVar4);
  pppuStack_400 = *(undefined ****)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar24;
  func_0x000109380ffc(&pppuStack_400);
  func_0x000109380ffc(&ppuStack_3c8,0);
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x100);
  if (*(char *)(lVar14 + 0x21f) < '\0') {
    func_0x000107c3192c(&uStack_430,*(undefined8 *)(lVar14 + 0x208),*(undefined8 *)(lVar14 + 0x210))
    ;
    lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x100);
  }
  else {
    uStack_428 = *(undefined8 *)(lVar14 + 0x210);
    uStack_430 = *(undefined8 *)(lVar14 + 0x208);
    lStack_420 = *(long *)(lVar14 + 0x218);
  }
  if ((*(long *)(lVar14 + 0x268) == 0) ||
     (uVar3 = *(uint *)(*(long *)(lVar14 + 0x268) + 0x98), 8 < uVar3)) {
    uVar22 = 7;
    uStack_438 = CONCAT17(7,(undefined7)uStack_438);
    ppppuVar12 = &pppuStack_448;
    pcVar25 = "Unknown";
    goto LAB_10a76c7e4;
  }
  uVar22 = 0;
  piVar21 = (int *)&UNK_110c18078;
  while( true ) {
    for (; piVar23 = (int *)(&UNK_110c17fa0 + uVar22 * 0x18), *piVar23 < (int)uVar3;
        uVar22 = uVar22 * 2 + 2) {
      piVar23 = piVar21;
      if (3 < uVar22) goto LAB_10a76d074;
    }
    if (3 < uVar22) break;
    uVar22 = uVar22 << 1 | 1;
    piVar21 = piVar23;
  }
LAB_10a76d074:
  if ((piVar23 == (int *)&UNK_110c18078) || ((int)uVar3 < *piVar23)) {
    piVar23 = (int *)&UNK_110c18078;
  }
  ppuVar18 = &PTR_s_Unknown_110c17f90;
  if (piVar23 != (int *)&UNK_110c18078) {
    ppuVar18 = (undefined **)(piVar23 + 2);
  }
  puVar1 = (ulong *)&UNK_110c17f98;
  if (piVar23 != (int *)&UNK_110c18078) {
    puVar1 = (ulong *)(piVar23 + 4);
  }
  uVar22 = *puVar1;
  if (0x7ffffffffffffff7 < uVar22) goto LAB_10a76d10c;
  pcVar25 = *ppuVar18;
  if (uVar22 < 0x17) {
    uStack_438 = CONCAT17((char)uVar22,(undefined7)uStack_438);
    ppppuVar12 = &pppuStack_448;
    if (uVar22 != 0) goto LAB_10a76c7e4;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar22 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar22 | 7) + 1);
    }
    ppppuVar12 = ppppuVar2;
    __Znwm();
    uStack_438 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_448 = ppppuVar12;
    uStack_440 = uVar22;
LAB_10a76c7e4:
    _memmove(ppppuVar12,pcVar25,uVar22);
  }
  *(undefined1 *)((long)ppppuVar12 + uVar22) = 0;
  puStack_450 = (undefined8 *)0x0;
  uStack_458 = 3;
  puVar15 = &uStack_430;
  func_0x00010938229c();
  cStack_299 = '\a';
  uStack_2b0 = 0x6c;
  uStack_2af = 0x6e65;
  uStack_2ad = 0x73;
  uStack_2ac = 0x695f;
  uStack_2aa = 100;
  uStack_2a9 = 0;
  puVar8 = auStack_418;
  puStack_450 = puVar15;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = uStack_458;
  puVar15 = *(undefined8 **)(puVar8 + 8);
  uStack_458 = uVar13;
  *(undefined8 **)(puVar8 + 8) = puStack_450;
  puStack_450 = puVar15;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = uStack_458;
  }
  func_0x000109380ffc(&puStack_450,uVar13);
  pppuStack_460 = (undefined8 ***)0x0;
  uStack_468 = 3;
  ppppuVar12 = &pppuStack_448;
  func_0x00010938229c();
  cStack_299 = '\v';
  uStack_2a8 = 0x6e69;
  uStack_2a6 = 0x74;
  uStack_2b0 = 0x65;
  uStack_2af = 0x746e;
  uStack_2ad = 0x72;
  uStack_2ac = 0x5f79;
  uStack_2aa = 0x70;
  uStack_2a9 = 0x6f;
  uStack_2a5 = 0;
  puVar8 = auStack_418;
  pppuStack_460 = ppppuVar12;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = uStack_468;
  pppuVar16 = *(undefined8 ****)(puVar8 + 8);
  uStack_468 = uVar13;
  *(undefined8 ****)(puVar8 + 8) = pppuStack_460;
  pppuStack_460 = pppuVar16;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = uStack_468;
  }
  func_0x000109380ffc(&pppuStack_460,uVar13);
  plVar26 = *(long **)(param_1 + 0x70);
  auStack_478[0] = 0;
  uStack_470 = 0;
  if (plVar26 != (long *)0x0) {
    do {
      ppppuStack_3d0 = (undefined ****)((ulong)ppppuStack_3d0 & 0xffffffffffffff00);
      ppuStack_3c8 = (undefined **)0x0;
      pppuStack_3e8 = (undefined ***)plVar26[5];
      pppuStack_3f0._0_1_ = 6;
      cStack_299 = '\x05';
      uStack_2b0 = 99;
      uStack_2af = 0x756f;
      uStack_2ad = 0x6e;
      uStack_2ac = 0x74;
      pppppuVar9 = &ppppuStack_3d0;
      func_0x0001095b7584(pppppuVar9,&uStack_2b0);
      uVar13 = *(undefined1 *)pppppuVar9;
      *(undefined1 *)pppppuVar9 = pppuStack_3f0._0_1_;
      pppuStack_3f0 = (undefined8 ***)CONCAT71(pppuStack_3f0._1_7_,uVar13);
      ppppuVar17 = pppppuVar9[1];
      pppppuVar9[1] = (undefined ****)pppuStack_3e8;
      pppuStack_3e8 = (undefined ***)ppppuVar17;
      if (cStack_299 < '\0') {
        __ZdlPv(CONCAT17(uStack_2a9,
                         CONCAT16(uStack_2aa,
                                  CONCAT24(uStack_2ac,
                                           CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
        uVar13 = pppuStack_3f0._0_1_;
      }
      func_0x000109380ffc(&pppuStack_3e8,uVar13);
      pppuStack_408._0_1_ = ppppuStack_3d0._0_1_;
      pppuStack_400 = (undefined ***)ppuStack_3c8;
      ppppuStack_3d0 = (undefined ****)((ulong)ppppuStack_3d0 & 0xffffffffffffff00);
      ppuStack_3c8 = (undefined **)0x0;
      puVar8 = auStack_478;
      func_0x0001095b7584(puVar8,plVar26 + 2);
      uVar13 = *puVar8;
      *puVar8 = pppuStack_408._0_1_;
      pppuStack_408 = (undefined8 ***)CONCAT71(pppuStack_408._1_7_,uVar13);
      ppppuVar17 = *(undefined *****)(puVar8 + 8);
      *(undefined ****)(puVar8 + 8) = pppuStack_400;
      pppuStack_400 = (undefined ***)ppppuVar17;
      func_0x000109380ffc(&pppuStack_400);
      func_0x000109380ffc(&ppuStack_3c8,(ulong)ppppuStack_3d0 & 0xff);
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
  }
  cStack_299 = '\x10';
  uStack_2a8 = 0x7263;
  uStack_2a6 = 0x65;
  uStack_2a5 = 0x61;
  uStack_2a4 = 0x6e6f6974;
  uStack_2b0 = 0x66;
  uStack_2af = 0x6361;
  uStack_2ad = 0x74;
  uStack_2ac = 0x726f;
  uStack_2aa = 0x79;
  uStack_2a9 = 0x5f;
  uStack_2a0 = 0;
  puVar8 = auStack_418;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = auStack_478[0];
  uVar20 = *(undefined8 *)(puVar8 + 8);
  auStack_478[0] = uVar13;
  *(undefined8 *)(puVar8 + 8) = uStack_470;
  uStack_470 = uVar20;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = auStack_478[0];
  }
  func_0x000109380ffc(&uStack_470,uVar13);
  auStack_488[0] = 0;
  uStack_480 = 0;
  ppuStack_3c8 = (undefined **)(ulong)*(byte *)(param_1 + 0x30);
  ppppuStack_3d0._0_1_ = 4;
  cStack_299 = '\x12';
  uStack_2a0 = 0x75;
  uStack_29f = 0x74;
  uStack_2a8 = 0x616c;
  uStack_2a6 = 0x79;
  uStack_2a5 = 0x5f;
  uStack_2a4 = 0x7074756f;
  uStack_2b0 = 0x68;
  uStack_2af = 0x7361;
  uStack_2ad = 0x5f;
  uStack_2ac = 0x766f;
  uStack_2aa = 0x65;
  uStack_2a9 = 0x72;
  uStack_29e = 0;
  puVar8 = auStack_488;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = 4;
  ppppuStack_3d0 = (undefined ****)CONCAT71(ppppuStack_3d0._1_7_,uVar13);
  ppuVar18 = *(undefined ***)(puVar8 + 8);
  *(undefined ***)(puVar8 + 8) = ppuStack_3c8;
  ppuStack_3c8 = ppuVar18;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = ppppuStack_3d0._0_1_;
  }
  func_0x000109380ffc(&ppuStack_3c8,uVar13);
  pppuStack_3e8 = (undefined ***)(ulong)*(byte *)(param_1 + 0x31);
  pppuStack_3f0._0_1_ = 4;
  puVar15 = (undefined8 *)0x20;
  __Znwm();
  uStack_2b0 = SUB81(puVar15,0);
  uStack_2af = (undefined2)((ulong)puVar15 >> 8);
  uStack_2ad = (undefined1)((ulong)puVar15 >> 0x18);
  uStack_2ac = (undefined2)((ulong)puVar15 >> 0x20);
  uStack_2aa = (undefined1)((ulong)puVar15 >> 0x30);
  uStack_2a9 = (undefined1)((ulong)puVar15 >> 0x38);
  uStack_2a0 = 0x20;
  uStack_29f = 0;
  uStack_29e = 0;
  uStack_29d = 0;
  uStack_29b = 0;
  uStack_29a = 0;
  cStack_299 = -0x80;
  uStack_2a8 = 0x1e;
  uStack_2a6 = 0;
  uStack_2a5 = 0;
  uStack_2a4 = 0;
  puVar15[1] = 0x6576696c5f646e61;
  *puVar15 = 0x5f65727574706163;
  *(undefined8 *)((long)puVar15 + 0x16) = 0x7265666669645f74;
  *(undefined8 *)((long)puVar15 + 0xe) = 0x757074756f5f6576;
  *(undefined1 *)((long)puVar15 + 0x1e) = 0;
  puVar8 = auStack_488;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = pppuStack_3f0._0_1_;
  pppuStack_3f0 = (undefined8 ***)CONCAT71(pppuStack_3f0._1_7_,uVar13);
  pppuVar19 = *(undefined ****)(puVar8 + 8);
  *(undefined ****)(puVar8 + 8) = pppuStack_3e8;
  pppuStack_3e8 = pppuVar19;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = pppuStack_3f0._0_1_;
  }
  func_0x000109380ffc(&pppuStack_3e8,uVar13);
  cStack_299 = '\x11';
  uStack_2a8 = 0x6c72;
  uStack_2a6 = 0x61;
  uStack_2a5 = 0x79;
  uStack_2a4 = 0x666e695f;
  uStack_2b0 = 0x6c;
  uStack_2af = 0x6e65;
  uStack_2ad = 0x73;
  uStack_2ac = 0x6f5f;
  uStack_2aa = 0x76;
  uStack_2a9 = 0x65;
  uStack_2a0 = 0x6f;
  uStack_29f = 0;
  puVar8 = auStack_418;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = auStack_488[0];
  uVar20 = *(undefined8 *)(puVar8 + 8);
  auStack_488[0] = uVar13;
  *(undefined8 *)(puVar8 + 8) = uStack_480;
  uStack_480 = uVar20;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = auStack_488[0];
  }
  func_0x000109380ffc(&uStack_480,uVar13);
  plVar26 = *(long **)(param_1 + 0x98);
  auStack_498[0] = 0;
  uStack_490 = 0;
  for (; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
    uStack_2a8 = 0;
    uStack_2a6 = 0;
    uStack_2a5 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 3;
    lVar14 = (long)(plVar26 + 2);
    func_0x00010938229c();
    uStack_2a8 = (undefined2)lVar14;
    uStack_2a6 = (undefined1)((ulong)lVar14 >> 0x10);
    uStack_2a5 = (undefined1)((ulong)lVar14 >> 0x18);
    uStack_2a4 = (undefined4)((ulong)lVar14 >> 0x20);
    FUN_10a0a4bec(auStack_498,&uStack_2b0);
    func_0x000109380ffc(&uStack_2a8,uStack_2b0);
  }
  cStack_299 = '\x15';
  uStack_2a8 = 0x6574;
  uStack_2a6 = 0x78;
  uStack_2a5 = 0x74;
  uStack_2b0 = 0x75;
  uStack_2af = 0x6573;
  uStack_2ad = 0x72;
  uStack_2ac = 0x635f;
  uStack_2aa = 0x6f;
  uStack_2a9 = 0x6e;
  uStack_2a4 = 0x7165725f;
  uStack_2a0 = 0x75;
  uStack_29f = 0x65;
  uStack_29e = 0x73;
  uStack_29d = 0x7374;
  uStack_29b = 0;
  puVar8 = auStack_418;
  func_0x0001095b7584(puVar8,&uStack_2b0);
  uVar13 = *puVar8;
  *puVar8 = auStack_498[0];
  uVar20 = *(undefined8 *)(puVar8 + 8);
  auStack_498[0] = uVar13;
  *(undefined8 *)(puVar8 + 8) = uStack_490;
  uStack_490 = uVar20;
  if (cStack_299 < '\0') {
    __ZdlPv(CONCAT17(uStack_2a9,
                     CONCAT16(uStack_2aa,
                              CONCAT24(uStack_2ac,
                                       CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))))));
    uVar13 = auStack_498[0];
  }
  func_0x000109380ffc(&uStack_490,uVar13);
  pppppuVar9 = &ppppuStack_3d0;
  FUN_109febc44();
  FUN_10ad03164();
  ppppuVar17 = pppppuVar9[1];
  pppppuVar6 = (undefined *****)*pppppuVar9;
  if (-1 < (char)*(byte *)((long)pppppuVar9 + 0x17)) {
    ppppuVar17 = (undefined ****)(ulong)*(byte *)((long)pppppuVar9 + 0x17);
    pppppuVar6 = pppppuVar9;
  }
  pppuVar19 = &ppuStack_3c0;
  FUN_10a002568(pppuVar19,pppppuVar6,ppppuVar17);
  FUN_10a002568();
  pcVar25 = (char *)0x20;
  __Znwm();
  builtin_strncpy(pcVar25,"lens_api_coverage_monitor",0x1a);
  FUN_10a002568(pppuVar19,pcVar25,0x19);
  FUN_10a002568();
  FUN_10a002568();
  __ZdlPv(pcVar25);
  func_0x00010a002480(&pppuStack_408,&ppuStack_3b8,&uStack_2b1);
  pppuStack_3e8 = pppuStack_400;
  pppuStack_3f0 = pppuStack_408;
  uStack_3e0 = uStack_3f8;
  pppuStack_408 = (undefined8 ****)0x0;
  pppuStack_400 = (undefined ***)0x0;
  uStack_3f8 = 0;
  __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(&pppuStack_3f0,0);
  if ((long)uStack_3e0 < 0) {
    __ZdlPv(pppuStack_3f0);
  }
  if ((long)uStack_3f8 < 0) {
    __ZdlPv(pppuStack_408);
  }
  pppuVar19 = &ppuStack_3c0;
  FUN_10a002568(pppuVar19,"/",1);
  FUN_10a002568();
  FUN_10a002568();
  pppuVar10 = pppuVar19;
  __ZNSt3__16chrono12system_clock3nowEv();
  __ZNSt3__19to_stringEx(&pppuStack_3f0,(long)pppuVar10 / 1000);
  ppppuVar17 = (undefined ****)pppuStack_3e8;
  ppppuVar12 = (undefined8 ****)pppuStack_3f0;
  if (-1 < (long)uStack_3e0) {
    ppppuVar17 = (undefined ****)(uStack_3e0 >> 0x38);
    ppppuVar12 = &pppuStack_3f0;
  }
  FUN_10a002568(pppuVar19,ppppuVar12,ppppuVar17);
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  if ((long)uStack_3e0 < 0) {
    __ZdlPv(pppuStack_3f0);
  }
  func_0x00010a002480(auStack_4b0,&ppuStack_3b8,&pppuStack_3f0);
  ppppuStack_3d0 = (undefined ****)&PTR_SUB_1108a5a38;
  ppuStack_3c0 = &PTR_DAT_1108a5a60;
  appuStack_350[0] = &PTR_DAT_1108a5a88;
  ppuStack_3b8 = &PTR_DAT_11088d7b0;
  if (cStack_361 < '\0') {
    __ZdlPv(uStack_378);
  }
  ppuStack_3b8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_3b0);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppuStack_3d0,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_350);
  func_0x000107c2800c(&uStack_2b0,auStack_4b0,0x10);
  if (cStack_499 < '\0') {
    __ZdlPv(auStack_4b0[0]);
  }
  FUN_10a0c32e4(&ppppuStack_3d0,auStack_418,0xffffffff,0x20,0,0);
  ppuVar18 = ppuStack_3c8;
  pppppuVar9 = (undefined *****)ppppuStack_3d0;
  if (-1 < (long)ppuStack_3c0) {
    ppuVar18 = (undefined **)((ulong)ppuStack_3c0 >> 0x38);
    pppppuVar9 = &ppppuStack_3d0;
  }
  FUN_10a002568(&uStack_2b0,pppppuVar9,ppuVar18);
  if ((long)ppuStack_3c0 < 0) {
    __ZdlPv(ppppuStack_3d0);
  }
  puVar11 = &uStack_2a8;
  func_0x000107c27ffc();
  if (puVar11 == (undefined2 *)0x0) {
    lVar14 = *(long *)(CONCAT17(uStack_2a9,
                                CONCAT16(uStack_2aa,
                                         CONCAT24(uStack_2ac,
                                                  CONCAT13(uStack_2ad,
                                                           CONCAT21(uStack_2af,uStack_2b0))))) +
                      -0x18);
    __ZNSt3__18ios_base5clearEj(&uStack_2b0 + lVar14,*(uint *)((long)auStack_290 + lVar14) | 4);
  }
  uStack_2b0 = 0x40;
  uStack_2af = 0x87cb;
  uStack_2ad = 0x10;
  uStack_2ac = 1;
  uStack_2aa = 0;
  uStack_2a9 = 0;
  appuStack_110[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(&uStack_2a8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&uStack_2b0,&PTR_PTR_11087cb80);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
  if ((long)uStack_438 < 0) {
    __ZdlPv(pppuStack_448);
  }
  if (lStack_420 < 0) {
    __ZdlPv(uStack_430);
  }
  func_0x000109380ffc(&uStack_410,auStack_418[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a76d10c:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a76d114);
  (*pcVar7)();
}



/* Entry: 10a76d41c; end: 10a76d49f;  */

undefined1  [16] FUN_10a76d41c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f676af0;
  return auVar1;
}



/* Entry: 10a76d4a0; end: 10a76db8b;  */

void FUN_10a76d4a0(ulong param_1)

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
  ulong uVar10;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f676af0,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c18e20;
  pppuVar2 = (undefined8 ***)&UNK_10f674def;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000019;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_64 = 0x124;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c18e20;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_a8 = (undefined8 ***)0x0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f25,FUN_10a7a8f08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f2e,FUN_10a7a9070,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f37,FUN_10a7a9230,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f40,FUN_10a7a9438,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f4c,FUN_10a7a951c,3,*(undefined8 *)(param_1 + 0x40));
  }
  appuStack_d8[0] = (undefined8 **)&DAT_10f305a7e;
  ppuStack_b0 = (undefined8 **)&UNK_10f674f5e;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000019;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_64 = 0x139;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar7 = param_1;
  ppuStack_a8 = appuStack_d8;
  FUN_10a7a97dc(param_1,&ppuStack_b0);
  appuStack_d8[0] = (undefined8 **)&DAT_10f305a7e;
  ppuStack_b0 = (undefined8 **)&UNK_10f674f7b;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000019;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_64 = 0x139;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_a8 = appuStack_d8;
  FUN_10a7a97dc();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674f91,FUN_10a7a9a04,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674fad,FUN_10a7a9b68,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674fbb,FUN_10a7a9cac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674fd0,FUN_10a7a9db0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f674ff6,FUN_10a7a9efc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f675004,FUN_10a7aa150,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f675019,FUN_10a7aa3e0,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f675034,FUN_10a7aa76c,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f67504c,FUN_10a7aa824,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f675064,FUN_10a7aa8dc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a76db6c;
    FUN_10a054dac(param_1,&UNK_10f675081,FUN_10a7aa994,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_a8 = *(undefined8 ***)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_88 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_68 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_64 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)uVar10;
    uStack_5c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f676af0,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a76db6c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a76db70);
  (*pcVar6)();
}



/* Entry: 10a76db8c; end: 10a76dc8b;  */

undefined8 * FUN_10a76db8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03e114(param_1 + 3);
  *param_1 = &PTR_FUN_110c17588;
  param_1[3] = &PTR_DAT_110c175e8;
  param_1[7] = param_2;
  uVar1 = 0xc0;
  __Znwm();
  FUN_10a7aaa4c();
  param_1[8] = uVar1;
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b9fab0,param_2,param_1 + 3);
  return param_1;
}



/* Entry: 10a76dc8c; end: 10a76dd03;  */

undefined8 * FUN_10a76dc8c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c17588;
  param_1[3] = &PTR_DAT_110c175e8;
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    func_0x00010a7aac7c();
  }
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a76dd04; end: 10a76dd0f;  */

undefined8 * FUN_10a76dd04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c17588;
  param_1[3] = &PTR_DAT_110c175e8;
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    func_0x00010a7aac7c();
  }
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a76dd10; end: 10a76dd3b;  */

void FUN_10a76dd10(void)

{
  FUN_10a76dc8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a76dd3c; end: 10a76dd43;  */

void FUN_10a76dd3c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  __ZNSt3__115recursive_mutex4lockEv(lVar1 + 0x80);
  puVar2 = (undefined8 *)(lVar1 + 0x70);
  func_0x00010a79d998(lVar1 + 0x68,*puVar2);
  *(undefined8 **)(lVar1 + 0x68) = puVar2;
  *puVar2 = 0;
  puVar2 = (undefined8 *)(lVar1 + 0x58);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  func_0x00010a79da34(lVar1 + 0x50,*puVar2);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 **)(lVar1 + 0x50) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar1 + 0x80);
  return;
}



/* Entry: 10a76dd44; end: 10a76dd9f;  */

void FUN_10a76dd44(long param_1)

{
  undefined8 *puVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x80);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  func_0x00010a79d998(param_1 + 0x68,*puVar1);
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = 0;
  func_0x00010a79da34(param_1 + 0x50,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x80);
  return;
}



/* Entry: 10a76dda0; end: 10a76dda7;  */

void FUN_10a76dda0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv(lVar1 + 0x80);
  puVar2 = (undefined8 *)(lVar1 + 0x70);
  func_0x00010a79d998(lVar1 + 0x68,*puVar2);
  *(undefined8 **)(lVar1 + 0x68) = puVar2;
  *puVar2 = 0;
  puVar2 = (undefined8 *)(lVar1 + 0x58);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  func_0x00010a79da34(lVar1 + 0x50,*puVar2);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 **)(lVar1 + 0x50) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar1 + 0x80);
  return;
}



/* Entry: 10a76dda8; end: 10a76de27;  */

void FUN_10a76dda8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)(param_2 + 0x40);
  lVar7 = lVar11;
  func_0x00010a79db50();
  if (lVar11 + 8 != lVar7) {
    FUN_10a79dbcc(lVar11,param_3,param_3);
    lVar7 = *(long *)(lVar11 + 0x40);
    uVar12 = *(undefined8 *)(lVar11 + 0x38);
    param_1[1] = *(undefined8 *)(lVar11 + 0x40);
    *param_1 = uVar12;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  puVar5 = &UNK_10f63b8ac;
  FUN_10a00946c();
  puVar10 = *(undefined8 **)(puVar5 + 0x40);
  puVar6 = puVar10;
  func_0x00010a79db50();
  if (puVar10 + 1 == puVar6) {
    return;
  }
  puVar9 = puVar6;
  puVar3 = (undefined8 *)puVar6[1];
  if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
    do {
      puVar8 = (undefined8 *)puVar9[2];
      bVar4 = (undefined8 *)*puVar8 != puVar9;
      puVar9 = puVar8;
    } while (bVar4);
  }
  else {
    do {
      puVar8 = puVar3;
      puVar3 = (undefined8 *)*puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*puVar10 == puVar6) {
    *puVar10 = puVar8;
  }
  puVar10[2] = puVar10[2] + -1;
  FUN_10a04815c(puVar10[1],puVar6);
  func_0x00010a79dda0(puVar6 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar6);
  return;
}



/* Entry: 10a76de28; end: 10a76dec7;  */

void FUN_10a76de28(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = puVar6;
  func_0x00010a79db50();
  if (puVar6 + 1 == puVar3) {
    return;
  }
  puVar5 = puVar3;
  puVar1 = (undefined8 *)puVar3[1];
  if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar5[2];
      bVar2 = (undefined8 *)*puVar4 != puVar5;
      puVar5 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*puVar6 == puVar3) {
    *puVar6 = puVar4;
  }
  puVar6[2] = puVar6[2] + -1;
  FUN_10a04815c(puVar6[1],puVar3);
  func_0x00010a79dda0(puVar3 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 10a76dec8; end: 10a76e453;  */

/* WARNING: Removing unreachable block (ram,0x00010a76e2c4) */
/* WARNING: Removing unreachable block (ram,0x00010a76dff0) */
/* WARNING: Removing unreachable block (ram,0x00010a76e2d4) */

void FUN_10a76dec8(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 uVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***apppuStack_140 [2];
  undefined **appuStack_130 [2];
  undefined **appuStack_120 [3];
  long *plStack_108;
  undefined8 uStack_100;
  char cStack_e9;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  char cStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  char cStack_b1;
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****appppuStack_90 [2];
  ulong uStack_80;
  undefined8 ****ppppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  
  ppppuVar8 = &pppuStack_150;
  ppppuVar9 = &pppuStack_150;
  ppppuVar10 = &pppuStack_150;
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f676afc);
LAB_10a76e304:
    param_2 = (long *)0x1137eb938;
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x113302b38,0x100000000);
      param_2 = (long *)0x1137eb938;
      ___cxa_guard_release();
    }
  }
  else {
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x21 = param_2;
    if ((bRam00000001137eb938 & 1) == 0) goto LAB_10a76e304;
  }
  func_0x00010ad031c0();
  uVar3 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_10a003c90(appppuStack_90,uVar3 + 1,&ppppuStack_b0);
  if (uVar3 != 0) {
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    _memmove(appppuStack_90,plVar1,uVar3);
  }
  *(undefined2 *)((long)appppuStack_90 + uVar3) = 0x2f;
  uVar3 = uRam0000000113302b40;
  uVar6 = uRam0000000113302b38;
  if (-1 < (char)bRam0000000113302b4f) {
    uVar3 = (ulong)bRam0000000113302b4f;
    uVar6 = 0x113302b38;
  }
  pppppuVar7 = appppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,uVar6,uVar3);
  pppuStack_148 = pppppuVar7[1];
  pppuStack_150 = *pppppuVar7;
  apppuStack_140[0] = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&pppuStack_150,"/",1)
  ;
  ppuStack_68 = ppppuVar8[1];
  ppppuStack_70 = (undefined8 ****)*ppppuVar8;
  ppuStack_60 = ppppuVar8[2];
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  if ((long)apppuStack_140[0] < 0) {
    ppppuVar8 = (undefined8 ****)pppuStack_150;
    __ZdlPv();
  }
  func_0x00010ad0321c();
  pppuVar4 = ppppuVar8[1];
  if (-1 < (char)*(byte *)((long)ppppuVar8 + 0x17)) {
    pppuVar4 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar8 + 0x17);
  }
  FUN_10a003c90(&ppppuStack_b0,(long)pppuVar4 + 1,&uStack_c8);
  pppppuVar7 = (undefined8 *****)ppppuStack_b0;
  if (-1 < uStack_a0) {
    pppppuVar7 = &ppppuStack_b0;
  }
  if (pppuVar4 != (undefined8 ***)0x0) {
    ppppuVar2 = (undefined8 ****)*ppppuVar8;
    if (-1 < *(char *)((long)ppppuVar8 + 0x17)) {
      ppppuVar2 = ppppuVar8;
    }
    _memmove(pppppuVar7,ppppuVar2,pppuVar4);
  }
  *(undefined2 *)((long)pppppuVar7 + (long)pppuVar4) = 0x2f;
  uVar3 = uRam0000000113302b40;
  uVar6 = uRam0000000113302b38;
  if (-1 < (char)bRam0000000113302b4f) {
    uVar3 = (ulong)bRam0000000113302b4f;
    uVar6 = 0x113302b38;
  }
  pppppuVar7 = &ppppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,uVar6,uVar3);
  pppuStack_148 = pppppuVar7[1];
  pppuStack_150 = *pppppuVar7;
  apppuStack_140[0] = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&pppuStack_150,"/",1)
  ;
  appppuStack_90[1] = (undefined8 ****)ppppuVar9[1];
  appppuStack_90[0] = (undefined8 ****)*ppppuVar9;
  uStack_80 = (ulong)ppppuVar9[2];
  ppppuVar9[1] = (undefined8 ***)0x0;
  ppppuVar9[2] = (undefined8 ***)0x0;
  *ppppuVar9 = (undefined8 ***)0x0;
  if ((long)apppuStack_140[0] < 0) {
    __ZdlPv(pppuStack_150);
  }
  if (uStack_a0._7_1_ < '\0') {
    __ZdlPv(ppppuStack_b0);
  }
  pppppuVar7 = &ppppuStack_70;
  FUN_10ad015f0(pppppuVar7,0x4000);
  if ((int)pppppuVar7 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_68;
    if (-1 < (long)ppuStack_60) {
      pppuVar4 = (undefined8 ***)((ulong)ppuStack_60 >> 0x38);
    }
    ppppuVar8 = appppuStack_90[1];
    if (-1 < (long)uStack_80) {
      ppppuVar8 = (undefined8 ****)(uStack_80 >> 0x38);
    }
    if ((undefined8 ****)pppuVar4 == ppppuVar8) {
      pppppuVar7 = (undefined8 *****)ppppuStack_70;
      if (-1 < (long)ppuStack_60) {
        pppppuVar7 = &ppppuStack_70;
      }
      pppppuVar5 = (undefined8 *****)appppuStack_90[0];
      if (-1 < (long)uStack_80) {
        pppppuVar5 = appppuStack_90;
      }
      _memcmp(pppppuVar7,pppppuVar5);
      if ((int)pppppuVar7 == 0) goto LAB_10a76e154;
    }
    FUN_10ad00b0c(&ppppuStack_70);
  }
LAB_10a76e154:
  func_0x000107c2b054(&uStack_c8,&UNK_10f674def);
  FUN_10ad016b8(&pppuStack_150,appppuStack_90,&uStack_c8);
  cStack_c9 = '\b';
  uStack_e0 = 0x746e65746e6f432f;
  uStack_d8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&pppuStack_150,&uStack_e0,8);
  uStack_a8 = ppppuVar10[1];
  ppppuStack_b0 = (undefined8 ****)*ppppuVar10;
  uStack_a0 = (long)ppppuVar10[2];
  ppppuVar10[1] = (undefined8 ***)0x0;
  ppppuVar10[2] = (undefined8 ***)0x0;
  *ppppuVar10 = (undefined8 ***)0x0;
  if (cStack_c9 < '\0') {
    __ZdlPv(uStack_e0);
  }
  if ((long)apppuStack_140[0] < 0) {
    __ZdlPv(pppuStack_150);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(uStack_c8);
  }
  FUN_10a3dda08(&uStack_c8,unaff_x21[6]);
  FUN_10a5708d0(&pppuStack_150,uStack_c8,&ppppuStack_b0);
  FUN_10a34aea4(unaff_x20,unaff_x19,&ppppuStack_b0,&pppuStack_150);
  pppuStack_150 = (undefined8 ***)&PTR_FUN_110bf2bd8;
  pppuStack_148 = (undefined8 ***)&PTR_FUN_110bf2da0;
  if (cStack_e9 < '\0') {
    __ZdlPv(uStack_100);
  }
  plVar1 = plStack_108;
  pppuStack_150 = (undefined8 ***)&PTR_FUN_110ba53b0;
  pppuStack_148 = (undefined8 ***)&PTR_FUN_110ba5578;
  plStack_108 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  appuStack_120[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_120);
  appuStack_130[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_130);
  apppuStack_140[0] = (undefined8 ***)&PTR_SUB_110b01d60;
  func_0x000107c2acd4(apppuStack_140);
  if (cStack_b8 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_c0);
  }
  if (uStack_a0 < 0) {
    __ZdlPv(ppppuStack_b0);
  }
  return;
}



/* Entry: 10a76e454; end: 10a76e51b;  */

void FUN_10a76e454(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  plVar4 = (long *)param_3[1];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      uVar5 = *param_3;
      goto LAB_10a76e4a4;
    }
  }
  uVar5 = 0;
LAB_10a76e4a4:
  FUN_10a76dec8(param_1,uVar7,uVar5);
  if (plVar4 != (long *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a76e51c; end: 10a76e643;  */

void FUN_10a76e51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  func_0x000107c2b054(auStack_68,&UNK_10f674def);
  func_0x000107c2b054(auStack_80,&UNK_10f674def);
  func_0x000107c2b054(auStack_98,&UNK_10f674def);
  FUN_10a76e644(param_1,param_2,param_3,auStack_68,auStack_80,param_4,param_5,param_6,auStack_98);
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10a76e644; end: 10a76e70b;  */

void FUN_10a76e644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_78,&UNK_10f674def);
  FUN_10a76efec(uVar1,param_2,param_3,auStack_78,param_4,param_5,param_8,param_9,param_6,param_7);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10a76e70c; end: 10a76e80f;  */

void FUN_10a76e70c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *extraout_x8;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 uVar20;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_88;
  undefined8 auStack_80 [6];
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(param_2 + 0x40);
  puStack_88 = auStack_80;
  bStack_50 = 3;
  FUN_10a700d30(&puStack_88,param_4,*(byte *)(param_4 + 0x30));
  bStack_50 = *(byte *)(param_4 + 0x30);
  puVar18 = auStack_80;
  FUN_10a76e810(param_1,uVar17,param_3);
  if (3 < (ulong)bStack_50) {
LAB_10a76e800:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a76e804);
    (*pcVar8)();
  }
  puVar9 = auStack_80;
  (*(code *)(&PTR_FUN_110c14970)[bStack_50])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (3 < (ulong)bStack_50) goto LAB_10a76e800;
  (*(code *)(&PTR_FUN_110c14970)[bStack_50])(auStack_80);
  __Unwind_Resume(puVar9);
  puVar10 = (undefined8 *)0x1c8;
  __Znwm();
  *puVar10 = FUN_10a7c9ebc;
  puVar10[1] = FUN_10a7ca374;
  puVar1 = puVar10 + 0x19;
  cVar5 = *(char *)(puVar18 + 6);
  if (cVar5 == '\x02') {
LAB_10a76e87c:
    uVar17 = *puVar18;
    puVar10[0x1a] = puVar18[1];
    *puVar1 = uVar17;
    puVar10[0x1b] = puVar18[2];
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
    puVar7 = puVar18 + 4;
    uVar20 = puVar18[3];
    uVar17 = puVar18[5];
    puVar18 = puVar18 + 3;
    puVar10[0x1d] = *puVar7;
    puVar10[0x1c] = uVar20;
    puVar10[0x1e] = uVar17;
LAB_10a76e8bc:
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
  }
  else {
    if (cVar5 == '\x01') {
      uVar17 = *puVar18;
      puVar10[0x1a] = puVar18[1];
      *puVar1 = uVar17;
      puVar10[0x1b] = puVar18[2];
      goto LAB_10a76e8bc;
    }
    if (cVar5 == '\0') goto LAB_10a76e87c;
  }
  *(char *)(puVar10 + 0x1f) = cVar5;
  FUN_10a6fc7f0(puVar10 + 2);
  lVar14 = puVar10[7];
  if (lVar14 != 0) {
    plVar13 = (long *)(lVar14 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar18 = puVar10 + 0x20;
  *extraout_x8 = lVar14;
  FUN_10a79dddc(puVar10 + 0x32);
  lVar14 = puVar10[0x33];
  if (lVar14 == 0) {
    lVar15 = 0;
    puVar10[10] = &PTR_FUN_110c18080;
    puVar10[9] = 0x10a79dfa4;
    puVar10[0xb] = 0;
  }
  else {
    plVar13 = (long *)(lVar14 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 0x200000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar10[10] = &PTR_FUN_110c18080;
    lVar15 = puVar10[0x33];
    puVar10[9] = 0x10a79dfa4;
    puVar10[0xb] = lVar14;
    if (lVar15 != 0) {
      plVar13 = (long *)(lVar15 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 0x200000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  puVar10[0x12] = &PTR_FUN_110c18098;
  puVar10[0x37] = puVar10 + 10;
  puVar10[0x11] = FUN_10a79e03c;
  puVar10[0x13] = lVar15;
  func_0x000107c2b054(puVar18,&UNK_10f674def);
  *(undefined4 *)(puVar10 + 0x38) = 2;
  func_0x000107c2b054(puVar10 + 0x23,&UNK_10f674def);
  puVar7 = puVar10 + 0x26;
  func_0x000107c2b054(puVar7,&UNK_10f674def);
  func_0x000107c2b054(puVar10 + 0x29,&UNK_10f674def);
  puVar2 = puVar10 + 0x2c;
  func_0x000107c2b054(puVar2,&UNK_10f674def);
  puVar3 = puVar10 + 0x2f;
  func_0x000107c2b054(puVar3,&UNK_10f674def);
  cVar5 = *(char *)(puVar10 + 0x1f);
  puStack_110 = puVar2;
  puStack_108 = puVar3;
  if (cVar5 == '\x02') {
    ppuVar19 = &puStack_110;
    puVar11 = puVar18;
LAB_10a76ea58:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11,puVar1);
    puVar11 = puVar10 + 0x1c;
    puVar12 = *ppuVar19;
  }
  else {
    puVar12 = puVar18;
    puVar11 = puVar1;
    if (cVar5 != '\x01') {
      if (cVar5 != '\0') {
        FUN_10a05bab8(&UNK_10f6347d3,puVar1);
        goto LAB_10a76ef30;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar18,param_3);
      *(undefined4 *)(puVar10 + 0x38) = 5;
      ppuVar19 = &puStack_108;
      puVar11 = puVar7;
      goto LAB_10a76ea58;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar12,puVar11);
  FUN_10a76efec(puVar9,puVar18,*(undefined4 *)(puVar10 + 0x38),puVar10 + 0x23,puVar7,puVar10 + 0x29,
                puVar2,puVar3,puVar10 + 9,puVar10 + 0x11);
  puVar10[0x35] = 0;
  *(undefined1 *)((long)puVar10 + 0x1c4) = 0;
  puVar9 = puVar10 + 0x35;
  FUN_10a79de4c(puVar9,puVar10);
  if (((ulong)puVar9 & 1) != 0) {
    return;
  }
  puVar10[0x34] = puVar10[0x35];
  FUN_10a6db324(puVar10 + 0x36,puVar10 + 0x34,puVar10 + 0x32);
  puVar10[0x35] = puVar10[0x36];
  plVar13 = (long *)(puVar10[0x36] + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = *plVar13 + 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((uint)*(undefined8 *)(puVar10[0x35] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar10 + 0x1c4) = 1;
    lVar14 = puVar10[0x35];
    plVar13 = (long *)(lVar14 + 0x10);
    uStack_f8 = puVar10[3];
    do {
      lVar15 = *plVar13;
      if (lVar15 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          puStack_108 = (undefined8 *)0x0;
          puStack_100 = puVar10;
          func_0x000109d1b588(lVar14 + 0x18,&puStack_108);
          *(undefined8 *)(lVar14 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  lVar14 = puVar10[0x35];
  if (((uint)*(undefined8 *)(puVar10[0x35] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar14 + 0xa8) & 1) != 0) {
      FUN_10a79def0(puVar10 + 2,lVar14 + 0x98);
      plVar13 = (long *)puVar10[0x35];
      if (plVar13 != (long *)0x0) {
        puVar4 = (ulong *)(plVar13 + 1);
        do {
          uVar16 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      plVar13 = (long *)puVar10[0x36];
      if (plVar13 != (long *)0x0) {
        puVar4 = (ulong *)(plVar13 + 1);
        do {
          uVar16 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      plVar13 = (long *)puVar10[0x34];
      if (plVar13 != (long *)0x0) {
        puVar4 = (ulong *)(plVar13 + 1);
        do {
          uVar16 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          do {
            uVar16 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      if (*(char *)((long)puVar10 + 399) < '\0') {
        __ZdlPv(*puVar3);
      }
      if (*(char *)((long)puVar10 + 0x177) < '\0') {
        __ZdlPv(*puVar2);
      }
      if (*(char *)((long)puVar10 + 0x15f) < '\0') {
        __ZdlPv(puVar10[0x29]);
      }
      if (*(char *)((long)puVar10 + 0x147) < '\0') {
        __ZdlPv(*puVar7);
      }
      if (*(char *)((long)puVar10 + 0x12f) < '\0') {
        __ZdlPv(puVar10[0x23]);
      }
      if (*(char *)((long)puVar10 + 0x117) < '\0') {
        __ZdlPv(*puVar18);
      }
      puVar18 = (undefined8 *)puVar10[0x37];
      (**(code **)puVar10[0x12])(puVar10 + 0x12);
      (**(code **)*puVar18)(puVar18);
      if (puVar10[0x33] != 0) {
        func_0x0001092b4274(puVar10 + 0x33);
      }
      plVar13 = (long *)puVar10[0x32];
      if (plVar13 != (long *)0x0) {
        puVar4 = (ulong *)(plVar13 + 1);
        do {
          uVar16 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar10 + 2);
      if ((ulong)*(byte *)(puVar10 + 0x1f) < 4) {
        (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar10 + 0x1f)])(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar10);
        return;
      }
    }
  }
  else {
    func_0x0001092af97c(lVar14 + 0x90);
  }
LAB_10a76ef30:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a76ef34);
  (*pcVar8)();
}



/* Entry: 10a76e810; end: 10a76efeb;  */

void FUN_10a76e810(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined8 uVar19;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar9 = (undefined8 *)0x1c8;
  __Znwm();
  *puVar9 = FUN_10a7c9ebc;
  puVar9[1] = FUN_10a7ca374;
  puVar1 = puVar9 + 0x19;
  cVar6 = *(char *)(param_4 + 6);
  if (cVar6 == '\x02') {
LAB_10a76e87c:
    uVar14 = *param_4;
    puVar9[0x1a] = param_4[1];
    *puVar1 = uVar14;
    puVar9[0x1b] = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    puVar17 = param_4 + 4;
    uVar19 = param_4[3];
    uVar14 = param_4[5];
    param_4 = param_4 + 3;
    puVar9[0x1d] = *puVar17;
    puVar9[0x1c] = uVar19;
    puVar9[0x1e] = uVar14;
LAB_10a76e8bc:
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  else {
    if (cVar6 == '\x01') {
      uVar14 = *param_4;
      puVar9[0x1a] = param_4[1];
      *puVar1 = uVar14;
      puVar9[0x1b] = param_4[2];
      goto LAB_10a76e8bc;
    }
    if (cVar6 == '\0') goto LAB_10a76e87c;
  }
  *(char *)(puVar9 + 0x1f) = cVar6;
  FUN_10a6fc7f0(puVar9 + 2);
  lVar13 = puVar9[7];
  if (lVar13 != 0) {
    plVar12 = (long *)(lVar13 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = *plVar12 + 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar17 = puVar9 + 0x20;
  *param_1 = lVar13;
  FUN_10a79dddc(puVar9 + 0x32);
  lVar13 = puVar9[0x33];
  if (lVar13 == 0) {
    lVar15 = 0;
    puVar9[10] = &PTR_FUN_110c18080;
    puVar9[9] = 0x10a79dfa4;
    puVar9[0xb] = 0;
  }
  else {
    plVar12 = (long *)(lVar13 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = *plVar12 + 0x200000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    puVar9[10] = &PTR_FUN_110c18080;
    lVar15 = puVar9[0x33];
    puVar9[9] = 0x10a79dfa4;
    puVar9[0xb] = lVar13;
    if (lVar15 != 0) {
      plVar12 = (long *)(lVar15 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 0x200000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  puVar9[0x12] = &PTR_FUN_110c18098;
  puVar9[0x37] = puVar9 + 10;
  puVar9[0x11] = FUN_10a79e03c;
  puVar9[0x13] = lVar15;
  func_0x000107c2b054(puVar17,&UNK_10f674def);
  *(undefined4 *)(puVar9 + 0x38) = 2;
  func_0x000107c2b054(puVar9 + 0x23,&UNK_10f674def);
  puVar2 = puVar9 + 0x26;
  func_0x000107c2b054(puVar2,&UNK_10f674def);
  func_0x000107c2b054(puVar9 + 0x29,&UNK_10f674def);
  puVar3 = puVar9 + 0x2c;
  func_0x000107c2b054(puVar3,&UNK_10f674def);
  puVar4 = puVar9 + 0x2f;
  func_0x000107c2b054(puVar4,&UNK_10f674def);
  cVar6 = *(char *)(puVar9 + 0x1f);
  puStack_80 = puVar3;
  puStack_78 = puVar4;
  if (cVar6 == '\x02') {
    ppuVar18 = &puStack_80;
    puVar11 = puVar17;
LAB_10a76ea58:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11,puVar1);
    puVar11 = puVar9 + 0x1c;
    puVar10 = *ppuVar18;
  }
  else {
    puVar10 = puVar17;
    puVar11 = puVar1;
    if (cVar6 != '\x01') {
      if (cVar6 != '\0') {
        FUN_10a05bab8(&UNK_10f6347d3,puVar1);
        goto LAB_10a76ef30;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar17,param_3);
      *(undefined4 *)(puVar9 + 0x38) = 5;
      ppuVar18 = &puStack_78;
      puVar11 = puVar2;
      goto LAB_10a76ea58;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar10,puVar11);
  FUN_10a76efec(param_2,puVar17,*(undefined4 *)(puVar9 + 0x38),puVar9 + 0x23,puVar2,puVar9 + 0x29,
                puVar3,puVar4,puVar9 + 9,puVar9 + 0x11);
  puVar9[0x35] = 0;
  *(undefined1 *)((long)puVar9 + 0x1c4) = 0;
  puVar11 = puVar9 + 0x35;
  FUN_10a79de4c(puVar11,puVar9);
  if (((ulong)puVar11 & 1) != 0) {
    return;
  }
  puVar9[0x34] = puVar9[0x35];
  FUN_10a6db324(puVar9 + 0x36,puVar9 + 0x34,puVar9 + 0x32);
  puVar9[0x35] = puVar9[0x36];
  plVar12 = (long *)(puVar9[0x36] + 8);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = *plVar12 + 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((uint)*(undefined8 *)(puVar9[0x35] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar9 + 0x1c4) = 1;
    lVar13 = puVar9[0x35];
    plVar12 = (long *)(lVar13 + 0x10);
    uStack_68 = puVar9[3];
    do {
      lVar15 = *plVar12;
      if (lVar15 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          puStack_78 = (undefined8 *)0x0;
          puStack_70 = puVar9;
          func_0x000109d1b588(lVar13 + 0x18,&puStack_78);
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  lVar13 = puVar9[0x35];
  if (((uint)*(undefined8 *)(puVar9[0x35] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar13 + 0xa8) & 1) != 0) {
      FUN_10a79def0(puVar9 + 2,lVar13 + 0x98);
      plVar12 = (long *)puVar9[0x35];
      if (plVar12 != (long *)0x0) {
        puVar5 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar7) {
            *puVar5 = uVar16 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar7) {
              *puVar5 = uVar16 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = (long *)puVar9[0x36];
      if (plVar12 != (long *)0x0) {
        puVar5 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar7) {
            *puVar5 = uVar16 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar7) {
              *puVar5 = uVar16 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = (long *)puVar9[0x34];
      if (plVar12 != (long *)0x0) {
        puVar5 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar7) {
            *puVar5 = uVar16 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          do {
            uVar16 = *puVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar7) {
              *puVar5 = uVar16 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (*(char *)((long)puVar9 + 399) < '\0') {
        __ZdlPv(*puVar4);
      }
      if (*(char *)((long)puVar9 + 0x177) < '\0') {
        __ZdlPv(*puVar3);
      }
      if (*(char *)((long)puVar9 + 0x15f) < '\0') {
        __ZdlPv(puVar9[0x29]);
      }
      if (*(char *)((long)puVar9 + 0x147) < '\0') {
        __ZdlPv(*puVar2);
      }
      if (*(char *)((long)puVar9 + 0x12f) < '\0') {
        __ZdlPv(puVar9[0x23]);
      }
      if (*(char *)((long)puVar9 + 0x117) < '\0') {
        __ZdlPv(*puVar17);
      }
      puVar17 = (undefined8 *)puVar9[0x37];
      (**(code **)puVar9[0x12])(puVar9 + 0x12);
      (**(code **)*puVar17)(puVar17);
      if (puVar9[0x33] != 0) {
        func_0x0001092b4274(puVar9 + 0x33);
      }
      plVar12 = (long *)puVar9[0x32];
      if (plVar12 != (long *)0x0) {
        puVar5 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar7) {
            *puVar5 = uVar16 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar7) {
              *puVar5 = uVar16 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar9 + 2);
      if ((ulong)*(byte *)(puVar9 + 0x1f) < 4) {
        (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar9 + 0x1f)])(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar9);
        return;
      }
    }
  }
  else {
    func_0x0001092af97c(lVar13 + 0x90);
  }
LAB_10a76ef30:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a76ef34);
  (*pcVar8)();
}



/* Entry: 10a76efec; end: 10a76f73b;  */

void FUN_10a76efec(long param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8,undefined8 *param_9,
                  undefined8 *param_10)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  int aiStack_1a8 [2];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  undefined8 uStack_b8;
  undefined8 *apuStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_100 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_188,param_4);
  aiStack_1a8[0] = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_158,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_140,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_170,*(long *)(*(long *)(param_1 + 0x30) + 0x100) + 0x208);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_110,param_7);
  plVar10 = param_2;
  if (param_3 != 2) {
    plVar10 = param_8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_128,plVar10);
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x80);
  puVar11 = *(undefined8 **)(param_1 + 0x58);
  puVar17 = (undefined8 *)(param_1 + 0x58);
  while (puVar16 = puVar17, puVar11 != (undefined8 *)0x0) {
    while( true ) {
      puVar16 = puVar11;
      puVar11 = &uStack_1a0;
      FUN_10a003e3c(puVar11,puVar16 + 4);
      if (((uint)puVar11 >> 7 & 1) != 0) break;
      puVar11 = puVar16 + 4;
      FUN_10a003e3c(puVar11,&uStack_1a0);
      if (((uint)puVar11 >> 7 & 1) == 0) {
        pcVar6 = (code *)*puVar17;
        if (pcVar6 == (code *)0x0) goto LAB_10a76f140;
        goto LAB_10a76f1c4;
      }
      puVar17 = puVar16 + 1;
      puVar11 = (undefined8 *)*puVar17;
      if ((undefined8 *)*puVar17 == (undefined8 *)0x0) goto LAB_10a76f140;
    }
    puVar17 = puVar16;
    puVar11 = (undefined8 *)*puVar16;
  }
LAB_10a76f140:
  pcVar6 = (code *)0x50;
  __Znwm();
  ppuVar15 = (undefined **)(param_1 + 0x50);
  plStack_e8 = (long *)0x0;
  pcStack_f8 = pcVar6;
  ppuStack_f0 = ppuVar15;
  if (lStack_190 < 0) {
    func_0x000107c3192c(pcVar6 + 0x20,uStack_1a0,uStack_198);
  }
  else {
    *(undefined8 *)(pcVar6 + 0x28) = uStack_198;
    *(undefined8 *)(pcVar6 + 0x20) = uStack_1a0;
    *(long *)(pcVar6 + 0x30) = lStack_190;
  }
  *(undefined8 *)(pcVar6 + 0x38) = 0;
  *(undefined8 *)(pcVar6 + 0x40) = 0;
  *(undefined8 *)(pcVar6 + 0x48) = 0;
  *(undefined8 *)pcVar6 = 0;
  *(undefined8 *)(pcVar6 + 8) = 0;
  *(undefined8 **)(pcVar6 + 0x10) = puVar16;
  *puVar17 = pcVar6;
  if (*(undefined **)*ppuVar15 != (undefined *)0x0) {
    *ppuVar15 = *(undefined **)*ppuVar15;
    pcVar6 = (code *)*puVar17;
  }
  func_0x000107c2b058(*(undefined8 *)(param_1 + 0x58),pcVar6);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  pcVar6 = pcStack_f8;
LAB_10a76f1c4:
  pcStack_f8 = (code *)*param_9;
  (**(code **)(param_9[1] + 0x10))(&ppuStack_f0);
  uStack_b8 = *param_10;
  plVar10 = param_10 + 1;
  (**(code **)(*plVar10 + 0x10))(apuStack_b0,plVar10);
  puVar17 = *(undefined8 **)(pcVar6 + 0x40);
  if (puVar17 < *(undefined8 **)(pcVar6 + 0x48)) {
    *puVar17 = pcStack_f8;
    (*(code *)ppuStack_f0[2])(puVar17 + 1,&ppuStack_f0);
    puVar17[8] = uStack_b8;
    (*(code *)apuStack_b0[0][2])(puVar17 + 9,apuStack_b0);
    puVar17 = puVar17 + 0x10;
LAB_10a76f39c:
    *(undefined8 **)(pcVar6 + 0x40) = puVar17;
    (*(code *)*apuStack_b0[0])(apuStack_b0);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    lVar14 = *(long *)(pcVar6 + 0x38);
    lVar7 = *(long *)(pcVar6 + 0x40);
    __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x80);
    if ((ulong)(lVar7 - lVar14) < 0x81) {
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) + 0x100) + 0x1c8);
      (**(code **)(*plVar8 + 0x18))();
      puStack_1b8 = (undefined8 *)0x0;
      plStack_1b0 = (long *)0x0;
      plVar9 = (long *)plVar8[1];
      if (((plVar9 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1b0 = plVar9, plVar9 == (long *)0x0))
         || (puVar17 = (undefined8 *)*plVar8, puStack_1b8 = puVar17, puVar17 == (undefined8 *)0x0))
      {
        plVar9 = plStack_1b0;
        if (*(char *)(*plVar10 + 8) == '\x01') {
          (*(code *)*param_10)(&uStack_1a0,param_10);
        }
        if (plVar9 == (long *)0x0) goto LAB_10a76f5a8;
      }
      else {
        lStack_1e8 = *(long *)(param_1 + 0x38);
        lVar14 = *(long *)(param_1 + 0x40);
        if (lVar14 == 0) {
          lStack_1e0 = 0;
        }
        else {
          plVar10 = (long *)(lVar14 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            lStack_1e0 = lVar14;
          } while (cVar4 != '\0');
        }
        lStack_1f0 = param_1;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(&lStack_1d8,*param_2,param_2[1]);
        }
        else {
          lStack_1d0 = param_2[1];
          lStack_1d8 = *param_2;
          lStack_1c8 = param_2[2];
        }
        pcStack_f8 = FUN_10a79e1c8;
        ppuStack_f0 = &PTR_FUN_110c180e0;
        plVar10 = (long *)0x30;
        __Znwm();
        plVar10[1] = lStack_1e8;
        *plVar10 = lStack_1f0;
        plVar10[2] = lStack_1e0;
        *(undefined8 *)((ulong)&lStack_1f0 | 8) = 0;
        ((undefined8 *)((ulong)&lStack_1f0 | 8))[1] = 0;
        if (lStack_1c8 < 0) {
          func_0x000107c3192c(plVar10 + 3,lStack_1d8,lStack_1d0);
        }
        else {
          plVar10[4] = lStack_1d0;
          plVar10[3] = lStack_1d8;
          plVar10[5] = lStack_1c8;
        }
        plStack_e8 = plVar10;
        (**(code **)*puVar17)(puVar17,aiStack_1a8,&pcStack_f8);
        (*(code *)*ppuStack_f0)(&ppuStack_f0);
        if (lStack_1c8 < 0) {
          __ZdlPv(lStack_1d8);
        }
        if (lStack_1e0 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lVar14 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
        }
      }
      plVar10 = plVar9 + 1;
      do {
        lVar14 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
LAB_10a76f5a8:
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
    if (lStack_118 < 0) {
      __ZdlPv(uStack_128);
    }
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    if (lStack_148 < 0) {
      __ZdlPv(uStack_158);
    }
    if (lStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (lStack_190 < 0) {
      __ZdlPv(uStack_1a0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar14 = (long)puVar17 - *(long *)(pcVar6 + 0x38);
    uVar1 = (lVar14 >> 7) + 1;
    if (uVar1 >> 0x39 == 0) {
      uVar12 = (long)*(undefined8 **)(pcVar6 + 0x48) - *(long *)(pcVar6 + 0x38);
      uVar13 = (long)uVar12 >> 6;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7fffffffffffff7f < uVar12) {
        uVar13 = 0x1ffffffffffffff;
      }
      if (uVar13 >> 0x39 != 0) {
        func_0x000109ffded8();
        goto LAB_10a76f660;
      }
      lVar7 = uVar13 << 7;
      __Znwm();
      puVar17 = (undefined8 *)(lVar7 + lVar14);
      *puVar17 = pcStack_f8;
      (*(code *)ppuStack_f0[2])(puVar17 + 1,&ppuStack_f0);
      puVar17[8] = uStack_b8;
      (*(code *)apuStack_b0[0][2])(puVar17 + 9,apuStack_b0);
      puVar16 = *(undefined8 **)(pcVar6 + 0x38);
      puVar3 = *(undefined8 **)(pcVar6 + 0x40);
      puVar2 = (undefined8 *)((long)puVar17 + ((long)puVar16 - (long)puVar3));
      puVar11 = puVar16;
      puVar18 = puVar2;
      if (puVar3 != puVar16) {
        do {
          *puVar18 = *puVar11;
          (**(code **)(puVar11[1] + 0x10))(puVar18 + 1);
          puVar18[8] = puVar11[8];
          (**(code **)(puVar11[9] + 0x10))(puVar18 + 9,puVar11 + 9);
          puVar11 = puVar11 + 0x10;
          puVar18 = puVar18 + 0x10;
        } while (puVar11 != puVar3);
        puVar16 = puVar16 + 9;
        do {
          (**(code **)*puVar16)(puVar16);
          (**(code **)puVar16[-8])(puVar16 + -8);
          puVar11 = puVar16 + 7;
          puVar16 = puVar16 + 0x10;
        } while (puVar11 != puVar3);
        puVar16 = *(undefined8 **)(pcVar6 + 0x38);
      }
      puVar17 = puVar17 + 0x10;
      *(undefined8 **)(pcVar6 + 0x38) = puVar2;
      *(undefined8 **)(pcVar6 + 0x40) = puVar17;
      *(ulong *)(pcVar6 + 0x48) = lVar7 + uVar13 * 0x80;
      if (puVar16 != (undefined8 *)0x0) {
        __ZdlPv(puVar16);
      }
      goto LAB_10a76f39c;
    }
  }
  FUN_10a79e1b4();
LAB_10a76f660:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a76f664);
  (*pcVar6)();
}



/* Entry: 10a76f73c; end: 10a76f8cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a76f830) */

void FUN_10a76f73c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_58,&UNK_10f674def);
  func_0x000107c2b054(auStack_70,&UNK_10f674def);
  func_0x000107c2b054(auStack_88,&UNK_10f674def);
  func_0x000107c2b054(auStack_a0,&UNK_10f674def);
  func_0x000107c2b054(auStack_b8,&UNK_10f674def);
  FUN_10a76f8cc(uVar1,*param_2,param_2[1],param_3,1,param_4,auStack_58,auStack_70,auStack_88,
                auStack_a0,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a76f8cc; end: 10a76faf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a76fbcc) */

void FUN_10a76f8cc(undefined8 param_1,undefined8 param_2,undefined ***param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  undefined ***pppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined1 auStack_148 [24];
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != (undefined ***)0x0) {
    pppuVar7 = param_3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar5) {
        *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar5) {
        *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_70 = &PTR_FUN_110c18110;
  pcStack_78 = FUN_10a7a07c4;
  pppuVar7 = &ppuStack_70;
  uStack_d8 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 == (long *)0x0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plStack_a0 = plVar3;
    } while (cVar4 != '\0');
  }
  ppuStack_b0 = &PTR_DAT_110c18128;
  uStack_b8 = 0x10a7a10c0;
  plStack_d0 = plVar3;
  uStack_c8 = param_2;
  pppuStack_c0 = param_3;
  uStack_a8 = uStack_d8;
  uStack_68 = param_2;
  pppuStack_60 = param_3;
  FUN_10a76efec(param_1,param_6,param_5,param_7,param_8,param_9,param_10,param_11);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (*(code *)*ppuStack_70)();
  pppuVar6 = pppuStack_c0;
  if (pppuStack_c0 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_c0 + 1;
    do {
      ppuVar9 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar9 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_c0)[2])(pppuStack_c0);
      pppuVar7 = pppuVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  func_0x00010a07a8a8(&uStack_d8);
  (*(code *)*ppuStack_70)(pppuVar6);
  FUN_10a76b5cc(&uStack_c8);
  __Unwind_Resume();
  ppuVar9 = pppuVar7[8];
  func_0x000107c2b054(auStack_148,&UNK_10f674def);
  func_0x000107c2b054(auStack_160,&UNK_10f674def);
  func_0x000107c2b054(auStack_178,&UNK_10f674def);
  func_0x000107c2b054(auStack_190,&UNK_10f674def);
  FUN_10a76f8cc(ppuVar9,*param_6,param_6[1],param_5,2,param_7,auStack_148,auStack_160,auStack_178,
                param_8,auStack_190);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  if (cStack_149 < '\0') {
    __ZdlPv(auStack_160[0]);
  }
  return;
}



/* Entry: 10a76faf8; end: 10a76fc4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a76fbcc) */

void FUN_10a76faf8(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_58,&UNK_10f674def);
  func_0x000107c2b054(auStack_70,&UNK_10f674def);
  func_0x000107c2b054(auStack_88,&UNK_10f674def);
  func_0x000107c2b054(auStack_a0,&UNK_10f674def);
  FUN_10a76f8cc(uVar1,*param_2,param_2[1],param_3,2,param_4,auStack_58,auStack_70,auStack_88,param_5
                ,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a76fc50; end: 10a76fdcf;  */

/* WARNING: Removing unreachable block (ram,0x00010a76fec4) */

void FUN_10a76fc50(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined1 auStack_d8 [24];
  byte bStack_78;
  undefined7 uStack_77;
  char cStack_61;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar4 != param_3 * 2) {
    puVar3 = &UNK_10f676e87;
    FUN_10a00946c();
    if (lStack_60 != 0) {
      lStack_58 = lStack_60;
      __ZdlPv();
    }
    __Unwind_Resume();
    uVar5 = *(undefined8 *)(puVar3 + 0x40);
    func_0x000107c2b054(auStack_d8,&UNK_10f674def);
    func_0x000107c2b054(auStack_f0,&UNK_10f674def);
    func_0x000107c2b054(auStack_108,&UNK_10f674def);
    func_0x000107c2b054(auStack_120,&UNK_10f674def);
    func_0x000107c2b054(auStack_138,&UNK_10f674def);
    FUN_10a76f8cc(uVar5,*param_2,param_2[1],param_3,3,param_4,auStack_d8,auStack_f0,auStack_108,
                  auStack_120,auStack_138);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    if (cStack_d9 < '\0') {
      __ZdlPv(auStack_f0[0]);
    }
    return;
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  func_0x0001081867d4(&lStack_60,param_3);
  uVar4 = 0;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&bStack_78,param_2,uVar4,1,&uStack_41);
    pbVar1 = &bStack_78;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(pbVar1,0,0x10);
    if (cStack_61 < '\0') {
      __ZdlPv(CONCAT71(uStack_77,bStack_78));
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&bStack_78,param_2,uVar4 + 1,1,&uStack_41);
    pbVar2 = &bStack_78;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(pbVar2,0,0x10);
    if (cStack_61 < '\0') {
      __ZdlPv(CONCAT71(uStack_77,bStack_78));
    }
    bStack_78 = (byte)pbVar2 | (byte)((int)pbVar1 << 4);
    FUN_10a0cd570(&lStack_60,&bStack_78);
    uVar4 = uVar4 + 2;
  } while (uVar4 < (ulong)(param_3 << 1));
  FUN_10a477838(param_1,lStack_60,lStack_58,lStack_58 - lStack_60);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a76fdd0; end: 10a76ff5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a76fec4) */

void FUN_10a76fdd0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_58,&UNK_10f674def);
  func_0x000107c2b054(auStack_70,&UNK_10f674def);
  func_0x000107c2b054(auStack_88,&UNK_10f674def);
  func_0x000107c2b054(auStack_a0,&UNK_10f674def);
  func_0x000107c2b054(auStack_b8,&UNK_10f674def);
  FUN_10a76f8cc(uVar1,*param_2,param_2[1],param_3,3,param_4,auStack_58,auStack_70,auStack_88,
                auStack_a0,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a76ff60; end: 10a7700bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a770038) */

void FUN_10a76ff60(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_58,&UNK_10f674def);
  func_0x000107c2b054(auStack_70,&UNK_10f674def);
  func_0x000107c2b054(auStack_88,&UNK_10f674def);
  func_0x000107c2b054(auStack_a0,&UNK_10f674def);
  FUN_10a76f8cc(uVar1,*param_2,param_2[1],param_3,1,param_4,param_5,auStack_58,auStack_70,auStack_88
                ,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a7700bc; end: 10a770217;  */

/* WARNING: Removing unreachable block (ram,0x00010a770194) */

void FUN_10a7700bc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c2b054(auStack_58,&UNK_10f674def);
  func_0x000107c2b054(auStack_70,&UNK_10f674def);
  func_0x000107c2b054(auStack_88,&UNK_10f674def);
  func_0x000107c2b054(auStack_a0,&UNK_10f674def);
  FUN_10a76f8cc(uVar1,*param_2,param_2[1],param_3,4,param_4,param_5,auStack_58,auStack_70,auStack_88
                ,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a770218; end: 10a7702cb;  */

void FUN_10a770218(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a7702cc(uVar5,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7702cc; end: 10a770b83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7702cc(code ******param_1,undefined8 *****param_2,undefined **param_3,
                  undefined8 *******param_4,undefined8 ******param_5,undefined8 ******param_6,
                  undefined8 *param_7,code ******param_8,undefined8 param_9,uint param_10)

{
  code ****ppppcVar1;
  code *******pppppppcVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  code ******ppppppcVar10;
  undefined8 *******pppppppuVar11;
  code ******ppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code *****pppppcVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ***pppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 extraout_x8;
  code *****pppppcVar22;
  code ***pppcVar23;
  long lVar24;
  undefined8 *******pppppppuVar25;
  code *******pppppppcStack_280;
  code ******ppppppcStack_278;
  code *******pppppppcStack_270;
  code ******ppppppcStack_268;
  code ******ppppppcStack_260;
  code *******pppppppcStack_258;
  ulong uStack_250;
  byte bStack_241;
  undefined1 auStack_240 [24];
  code *******pppppppcStack_228;
  code ******ppppppcStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined8 uStack_210;
  ulong uStack_208;
  code ******ppppppcStack_200;
  undefined8 ******ppppppuStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  code ******ppppppcStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  code ******ppppppcStack_1d8;
  long lStack_1d0;
  code ******ppppppcStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  code ******ppppppcStack_1b0;
  code ******ppppppcStack_1a0;
  undefined8 *puStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined7 uStack_180;
  byte bStack_179;
  code ******ppppppcStack_178;
  undefined8 uStack_170;
  byte bStack_161;
  code ******ppppppcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 ******ppppppuStack_140;
  code ******ppppppcStack_138;
  undefined8 *******pppppppuStack_130;
  code ******ppppppcStack_128;
  long lStack_120;
  undefined1 uStack_111;
  undefined8 *******pppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  long lStack_100;
  undefined8 ******ppppppuStack_f0;
  code ******ppppppcStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ******ppppppuStack_b0;
  code ******appppppcStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2ea178(&ppppppuStack_f0,*param_3);
  puStack_198 = param_7;
  if (ppppppuStack_f0 == (undefined8 ******)0x0) {
LAB_10a770360:
    ppppppuVar21 = &ppppppuStack_140;
  }
  else {
    param_3 = &PTR_DAT_110c42c58;
    ppppppuVar19 = ppppppuStack_f0;
    ___dynamic_cast(ppppppuStack_f0,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0);
    if (ppppppuVar19 == (undefined8 ******)0x0) goto LAB_10a770360;
    ppppppcStack_138 = ppppppcStack_e8;
    ppppppuVar21 = &ppppppuStack_f0;
    ppppppuStack_140 = ppppppuVar19;
  }
  *ppppppuVar21 = (undefined8 *****)0x0;
  ppppppuVar21[1] = (undefined8 *****)0x0;
  ppppppcVar8 = ppppppcStack_e8;
  if (ppppppcStack_e8 != (code ******)0x0) {
    ppppppcVar9 = ppppppcStack_e8 + 1;
    do {
      pppppcVar22 = *ppppppcVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar9,0x10);
      if (bVar6) {
        *ppppppcVar9 = (code *****)((long)pppppcVar22 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppcVar22 == (code *****)0x0) {
      (*(code *)(*ppppppcStack_e8)[2])(ppppppcStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar8);
    }
  }
  if (ppppppuStack_140 == (undefined8 ******)0x0) {
    FUN_10a00946c(&UNK_10f67704a);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a770a38);
    (*pcVar7)();
  }
  FUN_10a349b54(&ppppppcStack_160,ppppppuStack_140);
  if (param_10 == 5) {
    FUN_10a349b54(&pppppppuStack_190);
    func_0x00010ad0321c();
    if (*(char *)((long)ppppppuStack_140 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppppuStack_f0,*ppppppuStack_140,ppppppuStack_140[1]);
    }
    else {
      ppppppcStack_e8 = (code ******)ppppppuStack_140[1];
      ppppppuStack_f0 = (undefined8 ******)*ppppppuStack_140;
      pppppuStack_e0 = ppppppuStack_140[2];
    }
    func_0x000107c2b054(&pppppppuStack_110,&UNK_10f674def);
    FUN_10ad016b8(&ppppppcStack_178,&ppppppuStack_f0,&pppppppuStack_110);
    if (lStack_100 < 0) {
      __ZdlPv(pppppppuStack_110);
    }
    ppppppuVar19 = (undefined8 ******)(ulong)bStack_179;
    if ((char)bStack_179 < '\0') {
      func_0x000107c3192c(&pppppppuStack_110,pppppppuStack_190,ppppppuStack_188);
      ppppppuVar19 = (undefined8 ******)(ulong)bStack_179;
      if (-1 < (char)bStack_179) goto LAB_10a77046c;
      if ((undefined8 ******)0x8 < ppppppuStack_188) {
        bVar6 = true;
        ppppppuVar21 = ppppppuStack_188;
        pppppppuVar11 = pppppppuStack_190;
        goto LAB_10a770480;
      }
    }
    else {
      ppppppuStack_108 = ppppppuStack_188;
      pppppppuStack_110 = pppppppuStack_190;
      lStack_100 = CONCAT17(bStack_179,uStack_180);
LAB_10a77046c:
      if (8 < (uint)ppppppuVar19) {
        bVar6 = false;
        ppppppuVar21 = ppppppuVar19;
        pppppppuVar11 = &pppppppuStack_190;
LAB_10a770480:
        if (*(long *)((long)pppppppuVar11 + (long)ppppppuVar21 + -8) == 0x746e65746e6f432f) {
          if (!bVar6) {
            ppppppuStack_188 = ppppppuVar19;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (&pppppppuStack_130,&pppppppuStack_190,0,ppppppuStack_188 + -1,&uStack_111);
          if (lStack_100 < 0) {
            __ZdlPv(pppppppuStack_110);
          }
          ppppppuStack_108 = (undefined8 ******)ppppppcStack_128;
          pppppppuStack_110 = pppppppuStack_130;
          lStack_100 = lStack_120;
        }
      }
    }
    param_3 = (undefined **)&ppppppcStack_178;
    FUN_10ad0220c(&pppppppuStack_110,param_3,1);
    if ((int)param_9 != 0) {
      FUN_10ad00b0c(&pppppppuStack_110);
    }
    if (lStack_100 < 0) {
      __ZdlPv(pppppppuStack_110);
    }
    if ((long)pppppuStack_e0 < 0) {
      __ZdlPv(ppppppuStack_f0);
    }
    if (uStack_150._7_1_ < '\0') {
      __ZdlPv(ppppppcStack_160);
    }
    ppppppcStack_160 = (code ******)CONCAT71(ppppppcStack_178._1_7_,ppppppcStack_178._0_1_);
    uStack_158 = uStack_170;
    uStack_150 = (ulong)bStack_161 << 0x38;
    bStack_161 = 0;
    ppppppcStack_178._0_1_ = 0;
    if ((char)bStack_179 < '\0') {
      __ZdlPv(pppppppuStack_190);
    }
    param_9 = 1;
  }
  ppppppcVar8 = (code ******)param_2[6][0x20][0x39];
  (*(code *)(*ppppppcVar8)[3])();
  pppppppuStack_130 = (undefined8 *******)0x0;
  ppppppcStack_128 = (code ******)0x0;
  ppppppcVar9 = (code ******)ppppppcVar8[1];
  if (((ppppppcVar9 == (code ******)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), ppppppcStack_128 = ppppppcVar9,
      ppppppcVar9 == (code ******)0x0)) ||
     (pppppppuStack_130 = (undefined8 *******)*ppppppcVar8,
     pppppppuStack_130 == (undefined8 *******)0x0)) {
    ppppppcVar9 = ppppppcStack_128;
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      param_3 = (undefined **)0x2;
      func_0x00010ae06f08(1,2,&UNK_10f676bc8,&UNK_10f676eab,0x23a,&UNK_10f67700b);
    }
    FUN_10a7a1140();
    lVar24 = 1;
    if (ppppppcVar9 != (code ******)0x0) goto LAB_10a7707fc;
  }
  else {
    ppppppcStack_1a0 = (code ******)param_2[8];
    ppppuStack_d0 = param_2[8];
    ppppuStack_d8 = param_2[7];
    if (ppppppcStack_1a0 == (code ******)0x0) {
      pppuVar20 = param_2[6][0x20];
    }
    else {
      ppppppcVar8 = ppppppcStack_1a0 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
        if (bVar6) {
          *ppppppcVar8 = (code *****)((long)*ppppppcVar8 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppuVar20 = param_2[6][0x20];
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
        if (bVar6) {
          *ppppppcVar8 = (code *****)((long)*ppppppcVar8 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppppcVar8 = (code ******)&ppppppuStack_f0;
    ppppppuStack_f0 = (undefined8 ******)FUN_10a7a11b0;
    ppppppcStack_e8 = (code ******)&PTR_DAT_110c18140;
    param_3 = (undefined **)&ppppppcStack_160;
    ppppppcStack_1b0 = ppppppcVar8;
    pppppuStack_e0 = param_2;
    (*(code *)(*pppppppuStack_130)[1])
              (param_1,pppppppuStack_130,param_3,pppuVar20 + 0x41,param_4,param_5,param_6,param_9,
               (ulong)param_10);
    (*(code *)*ppppppcStack_e8)(&ppppppcStack_e8);
    ppppppcVar10 = ppppppcStack_1a0;
    bVar4 = *(byte *)((long)param_1 + 0x17);
    pppppcVar22 = param_1[1];
    if (-1 < (char)bVar4) {
      pppppcVar22 = (code *****)(ulong)bVar4;
    }
    if (pppppcVar22 == (code *****)0x0) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        param_3 = (undefined **)0x4;
        func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676eab,0x230,&UNK_10f676fb2);
      }
      FUN_10a7a1140();
      lVar24 = 0;
      if (ppppppcVar10 != (code ******)0x0) goto LAB_10a7707f0;
    }
    else {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        ppppppcStack_1b0 = (code ******)*param_1;
        if (-1 < (char)bVar4) {
          ppppppcStack_1b0 = param_1;
        }
        func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676eab,0x233,&UNK_10f676fe7);
      }
      __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x10);
      ppppppuStack_f0 = (undefined8 ******)*puStack_198;
      ppppppcVar8 = (code ******)&ppppppuStack_f0;
      (**(code **)(puStack_198[1] + 0x10))(&ppppppcStack_e8);
      ppppppuStack_b0 = (undefined8 ******)*param_8;
      (*(code *)param_8[1][2])(appppppcStack_a8,param_8 + 1);
      param_5 = (undefined8 ******)(param_2 + 0xe);
      ppppppuVar21 = (undefined8 ******)*param_5;
      ppppppuVar19 = param_5;
      param_6 = param_5;
      while (ppppppuVar21 != (undefined8 ******)0x0) {
        while (param_6 = ppppppuVar21, ppppppcVar10 = param_1, FUN_10a003e3c(param_1,param_6 + 4),
              ((uint)ppppppcVar10 >> 7 & 1) != 0) {
          ppppppuVar21 = (undefined8 ******)*param_6;
          ppppppuVar19 = param_6;
          if ((undefined8 ******)*param_6 == (undefined8 ******)0x0) goto LAB_10a7708d0;
        }
        ppppppuVar21 = param_6 + 4;
        FUN_10a003e3c(ppppppuVar21,param_1);
        if (((uint)ppppppuVar21 >> 7 & 1) == 0) {
          pppppppuVar11 = (undefined8 *******)*ppppppuVar19;
          if (pppppppuVar11 != (undefined8 *******)0x0) goto LAB_10a77098c;
          break;
        }
        ppppppuVar19 = param_6 + 1;
        ppppppuVar21 = (undefined8 ******)*ppppppuVar19;
      }
LAB_10a7708d0:
      pppppppuVar11 = (undefined8 *******)0xb8;
      __Znwm();
      param_5 = (undefined8 ******)(param_2 + 0xd);
      lStack_100 = 0;
      pppppppuStack_110 = pppppppuVar11;
      ppppppuStack_108 = param_5;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(pppppppuVar11 + 4,*param_1,param_1[1]);
      }
      else {
        ppppppuVar21 = (undefined8 ******)*param_1;
        pppppppuVar11[5] = (undefined8 ******)param_1[1];
        pppppppuVar11[4] = ppppppuVar21;
        pppppppuVar11[6] = (undefined8 ******)param_1[2];
      }
      pppppppuVar11[0x10] = (undefined8 ******)0x0;
      pppppppuVar11[0xf] = (undefined8 ******)0x0;
      pppppppuVar11[0x16] = (undefined8 ******)0x0;
      pppppppuVar11[0x15] = (undefined8 ******)0x0;
      pppppppuVar11[0x14] = (undefined8 ******)0x0;
      pppppppuVar11[0x13] = (undefined8 ******)0x0;
      pppppppuVar11[0x12] = (undefined8 ******)0x0;
      pppppppuVar11[0x11] = (undefined8 ******)0x0;
      pppppppuVar11[0xe] = (undefined8 ******)0x0;
      pppppppuVar11[0xd] = (undefined8 ******)0x0;
      pppppppuVar11[0xc] = (undefined8 ******)0x0;
      pppppppuVar11[0xb] = (undefined8 ******)0x0;
      pppppppuVar11[10] = (undefined8 ******)0x0;
      pppppppuVar11[9] = (undefined8 ******)0x0;
      pppppppuVar11[7] = (undefined8 ******)FUN_10a7a1508;
      pppppppuVar11[8] = (undefined8 ******)&PTR_DAT_110ae9180;
      pppppppuVar11[0xf] = (undefined8 ******)&UNK_10897d5f0;
      pppppppuVar11[0x10] = (undefined8 ******)&PTR_DAT_110ae9180;
      *pppppppuVar11 = (undefined8 ******)0x0;
      pppppppuVar11[1] = (undefined8 ******)0x0;
      pppppppuVar11[2] = param_6;
      *ppppppuVar19 = pppppppuVar11;
      if ((undefined8 *****)**param_5 != (undefined8 *****)0x0) {
        *param_5 = (undefined8 *****)**param_5;
        pppppppuVar11 = (undefined8 *******)*ppppppuVar19;
      }
      func_0x000107c2b058(param_2[0xe],pppppppuVar11);
      param_2[0xf] = (undefined8 ****)((long)param_2[0xf] + 1);
      pppppppuVar11 = pppppppuStack_110;
LAB_10a77098c:
      pppppppuVar11[7] = ppppppuStack_f0;
      param_4 = pppppppuVar11 + 8;
      (*(code *)**param_4)(param_4);
      (*(code *)ppppppcStack_e8[2])(param_4,&ppppppcStack_e8);
      pppppppuVar25 = pppppppuVar11 + 0x10;
      pppppppuVar11[0xf] = ppppppuStack_b0;
      (*(code *)**pppppppuVar25)(pppppppuVar25);
      param_3 = (undefined **)appppppcStack_a8;
      (*(code *)appppppcStack_a8[0][2])(pppppppuVar25);
      (*(code *)*appppppcStack_a8[0])(appppppcStack_a8);
      (*(code *)*ppppppcStack_e8)(&ppppppcStack_e8);
      param_8 = (code ******)(param_2 + 0x10);
      __ZNSt3__115recursive_mutex6unlockEv();
      ppppppcVar10 = ppppppcStack_1a0;
      if (ppppppcStack_1a0 == (code ******)0x0) {
        lVar24 = 0;
      }
      else {
LAB_10a7707f0:
        param_8 = ppppppcVar10;
        ppppppcVar8 = (code ******)&ppppppuStack_f0;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        lVar24 = 0;
      }
    }
LAB_10a7707fc:
    ppppppcVar10 = ppppppcVar9 + 1;
    do {
      pppppcVar22 = *ppppppcVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar10,0x10);
      if (bVar6) {
        *ppppppcVar10 = (code *****)((long)pppppcVar22 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppcVar22 == (code *****)0x0) {
      (*(code *)(*ppppppcVar9)[2])(ppppppcVar9);
      param_8 = ppppppcVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (uStack_150 < 0) {
    param_8 = ppppppcStack_160;
    __ZdlPv();
  }
  if (lVar24 != 0) {
    param_3 = (undefined **)&UNK_10f674def;
    func_0x000107c2b054();
    param_8 = param_1;
  }
  ppppppcVar10 = ppppppcStack_138;
  if (ppppppcStack_138 != (code ******)0x0) {
    ppppppcVar12 = ppppppcStack_138 + 1;
    do {
      pppppcVar22 = *ppppppcVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar12,0x10);
      if (bVar6) {
        *ppppppcVar12 = (code *****)((long)pppppcVar22 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppcVar22 == (code *****)0x0) {
      (*(code *)(*ppppppcStack_138)[2])(ppppppcStack_138);
      param_8 = ppppppcVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a7a1518(&pppppppuStack_110);
  (*(code *)*appppppcStack_a8[0])(ppppppcVar8 + 9);
  (*(code *)*ppppppcStack_e8)(ppppppcVar8 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(lVar24 + 0x80);
  if (*(char *)((long)ppppppcVar10 + 0x17) < '\0') {
    __ZdlPv(*ppppppcVar10);
  }
  if (ppppppcStack_1a0 != (code ******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcStack_1a0);
  }
  func_0x00010a23a4e4(&pppppppuStack_130);
  if (uStack_150._7_1_ < '\0') {
    __ZdlPv(ppppppcStack_160);
  }
  FUN_10a37985c(&ppppppuStack_140);
  ppppppcVar12 = param_8;
  __Unwind_Resume();
  ppppppcStack_1c8 = ppppppcVar10;
  pcStack_1b8 = FUN_10a770b84;
  pppppppcVar18 = (code *******)&UNK_10f67508d;
  pppppppcVar13 = (code *******)&pppppppcStack_258;
  uStack_210 = param_9;
  uStack_208 = (ulong)param_10;
  ppppppcStack_200 = ppppppcVar9;
  ppppppuStack_1f8 = param_5;
  ppppppuStack_1f0 = param_6;
  ppppppcStack_1e8 = ppppppcVar8;
  pppppppuStack_1e0 = param_4;
  ppppppcStack_1d8 = param_8;
  lStack_1d0 = lVar24;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000107c2b054(pppppppcVar13,&UNK_10f67508d);
  cVar5 = *(char *)((long)param_3 + 0x17);
  if (cVar5 < '\0') {
    pppppppcVar18 = (code *******)*param_3;
    pppppppcVar13 = (code *******)&pppppppcStack_270;
    func_0x000107c3192c(pppppppcVar13,pppppppcVar18,param_3[1]);
    cVar5 = *(char *)((long)param_3 + 0x17);
    if (cVar5 < '\0') {
      pppppppcVar14 = (code *******)*param_3;
      ppppppcVar8 = (code ******)param_3[1];
      goto LAB_10a770bf8;
    }
  }
  else {
    ppppppcStack_268 = (code ******)param_3[1];
    pppppppcStack_270 = (code *******)*param_3;
    ppppppcStack_260 = (code ******)param_3[2];
  }
  ppppppcVar8 = (code ******)(long)(int)cVar5;
  pppppppcVar14 = (code *******)param_3;
LAB_10a770bf8:
  uVar3 = uStack_250;
  pppppppcVar15 = pppppppcStack_258;
  if (-1 < (char)bStack_241) {
    uVar3 = (ulong)bStack_241;
    pppppppcVar15 = (code *******)&pppppppcStack_258;
  }
  if (uVar3 != 0) {
    if ((long)uVar3 <= (long)ppppppcVar8) {
      pppppppcVar2 = (code *******)((long)pppppppcVar14 + (long)ppppppcVar8);
      cVar5 = *(char *)pppppppcVar15;
      pppppppcVar17 = pppppppcVar14;
      do {
        if ((0xfffffffffffffffe < (long)ppppppcVar8 - uVar3) ||
           (_memchr(pppppppcVar17,(long)cVar5,((long)ppppppcVar8 - uVar3) + 1),
           pppppppcVar17 == (code *******)0x0)) break;
        pppppppcVar13 = pppppppcVar17;
        pppppppcVar18 = pppppppcVar15;
        _memcmp();
        if ((int)pppppppcVar13 == 0) {
          if ((pppppppcVar17 != pppppppcVar2) && ((long)pppppppcVar17 - (long)pppppppcVar14 != -1))
          goto LAB_10a770c50;
          break;
        }
        pppppppcVar17 = (code *******)((long)pppppppcVar17 + 1);
        ppppppcVar8 = (code ******)((long)pppppppcVar2 - (long)pppppppcVar17);
      } while ((long)uVar3 <= (long)ppppppcVar8);
    }
    pppppppcVar13 = (code *******)&pppppppcStack_258;
    FUN_10a0b4df8(&pppppppcStack_228,pppppppcVar13,param_3);
    pppppppcVar18 = (code *******)param_3;
    if ((long)ppppppcStack_260 < 0) {
      __ZdlPv();
      pppppppcVar13 = pppppppcStack_270;
      pppppppcVar18 = (code *******)param_3;
    }
    ppppppcStack_268 = ppppppcStack_220;
    pppppppcStack_270 = pppppppcStack_228;
    ppppppcStack_260 = (code ******)CONCAT17(uStack_211,uStack_218);
  }
LAB_10a770c50:
  pppppcVar22 = ppppppcVar12[7];
  ppppppcStack_278 = ppppppcStack_268;
  pppppppcStack_280 = pppppppcStack_270;
  if (-1 < (long)ppppppcStack_260) {
    ppppppcStack_278 = (code ******)((ulong)ppppppcStack_260 >> 0x38);
    pppppppcStack_280 = (code *******)&pppppppcStack_270;
  }
  func_0x00010a0fda30();
  pppppppcVar14 = pppppppcVar13;
  FUN_10a3ca004();
  FUN_10a3ca840();
  pppppppcVar15 = pppppppcVar14;
  FUN_10a10bbb4();
  if (pppppppcVar15 == (code *******)0x0) {
    FUN_10a0ee900(&pppppppcStack_228,&UNK_10f63cd1e,0x2c);
    FUN_10a10bcb0(&pppppppcStack_228);
  }
  else if (*(int *)(pppppppcVar15 + 4) < *(int *)(pppppcVar22[0x20] + 0x51)) {
    FUN_10a0ee900(&pppppppcStack_228,&UNK_10f63cd4b,0x32);
    if (((byte)uRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f63cd7e,&UNK_10f6773f3,0xbf,"%s");
    }
    func_0x0001098998d4(auStack_240,&pppppppcStack_280);
    FUN_10a10be38(&pppppppcStack_228,auStack_240,pppppppcVar13,pppppppcVar18,
                  *(undefined4 *)(pppppppcVar15 + 4));
  }
  else {
    pppppcVar16 = pppppcVar22;
    (*(code *)pppppppcVar15[5])(pppppcVar22,pppppppcVar13,pppppppcVar18);
    if ((pppppcVar16 != (code *****)0x0) && (___dynamic_cast(), pppppcVar16 != (code *****)0x0)) {
      FUN_10a570894(pppppppcVar14,pppppcVar22,pppppppcStack_280,ppppppcStack_278);
      pppppppcStack_228 = (code *******)pppppcVar22[0x10b];
      ppppppcStack_220 = (code ******)pppppcVar22[0x10c];
      if (ppppppcStack_220 != (code ******)0x0) {
        ppppcVar1 = (code ****)(ppppppcStack_220 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
          if (bVar6) {
            *ppppcVar1 = (code ***)((long)*ppppcVar1 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a10b9d8(extraout_x8,&pppppppcStack_228,pppppcVar16);
      ppppppcVar8 = ppppppcStack_220;
      if (ppppppcStack_220 != (code ******)0x0) {
        ppppcVar1 = (code ****)(ppppppcStack_220 + 1);
        do {
          pppcVar23 = *ppppcVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
          if (bVar6) {
            *ppppcVar1 = (code ***)((long)pppcVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppcVar23 == (code ***)0x0) {
          (*(code *)(*ppppppcStack_220)[2])(ppppppcStack_220);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar8);
        }
      }
      if ((long)ppppppcStack_260 < 0) {
        __ZdlPv(pppppppcStack_270);
      }
      if ((char)bStack_241 < '\0') {
        __ZdlPv(pppppppcStack_258);
      }
      return;
    }
    FUN_10a2719b0(&UNK_10f648c9d);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a770edc);
  (*pcVar7)();
}



/* Entry: 10a770b84; end: 10a770f5b;  */

void FUN_10a770b84(undefined8 param_1,long param_2,long ****param_3)

{
  long *plVar1;
  long ****pppplVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long lVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  undefined8 in_x6;
  undefined8 in_x7;
  long ***ppplVar14;
  long lVar15;
  long ***ppplStack_d0;
  long **pplStack_c8;
  long ***ppplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long ***ppplStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined1 auStack_90 [24];
  long ***ppplStack_78;
  long **pplStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  pppplVar13 = (long ****)&UNK_10f67508d;
  pppplVar8 = &ppplStack_a8;
  func_0x000107c2b054(pppplVar8,&UNK_10f67508d);
  cVar4 = *(char *)((long)param_3 + 0x17);
  if (cVar4 < '\0') {
    pppplVar13 = (long ****)*param_3;
    pppplVar8 = &ppplStack_c0;
    func_0x000107c3192c(pppplVar8,pppplVar13,param_3[1]);
    cVar4 = *(char *)((long)param_3 + 0x17);
    if (cVar4 < '\0') {
      pppplVar9 = (long ****)*param_3;
      ppplVar14 = param_3[1];
      goto LAB_10a770bf8;
    }
  }
  else {
    pplStack_b8 = (long **)param_3[1];
    ppplStack_c0 = *param_3;
    pplStack_b0 = (long **)param_3[2];
  }
  ppplVar14 = (long ***)(long)(int)cVar4;
  pppplVar9 = param_3;
LAB_10a770bf8:
  uVar3 = uStack_a0;
  pppplVar10 = (long ****)ppplStack_a8;
  if (-1 < (char)bStack_91) {
    uVar3 = (ulong)bStack_91;
    pppplVar10 = &ppplStack_a8;
  }
  if (uVar3 != 0) {
    if ((long)uVar3 <= (long)ppplVar14) {
      pppplVar2 = (long ****)((long)pppplVar9 + (long)ppplVar14);
      cVar4 = *(char *)pppplVar10;
      pppplVar12 = pppplVar9;
      do {
        if ((0xfffffffffffffffe < (long)ppplVar14 - uVar3) ||
           (_memchr(pppplVar12,(long)cVar4,((long)ppplVar14 - uVar3) + 1),
           pppplVar12 == (long ****)0x0)) break;
        pppplVar8 = pppplVar12;
        pppplVar13 = pppplVar10;
        _memcmp();
        if ((int)pppplVar8 == 0) {
          if ((pppplVar12 != pppplVar2) && ((long)pppplVar12 - (long)pppplVar9 != -1))
          goto LAB_10a770c50;
          break;
        }
        pppplVar12 = (long ****)((long)pppplVar12 + 1);
        ppplVar14 = (long ***)((long)pppplVar2 - (long)pppplVar12);
      } while ((long)uVar3 <= (long)ppplVar14);
    }
    pppplVar8 = &ppplStack_a8;
    FUN_10a0b4df8(&ppplStack_78,pppplVar8,param_3);
    pppplVar13 = param_3;
    if ((long)pplStack_b0 < 0) {
      __ZdlPv();
      pppplVar8 = (long ****)ppplStack_c0;
      pppplVar13 = param_3;
    }
    pplStack_b8 = pplStack_70;
    ppplStack_c0 = ppplStack_78;
    pplStack_b0 = (long **)CONCAT17(cStack_61,uStack_68);
  }
LAB_10a770c50:
  lVar15 = *(long *)(param_2 + 0x38);
  pplStack_c8 = pplStack_b8;
  ppplStack_d0 = ppplStack_c0;
  if (-1 < (long)pplStack_b0) {
    pplStack_c8 = (long **)((ulong)pplStack_b0 >> 0x38);
    ppplStack_d0 = (long ***)&ppplStack_c0;
  }
  func_0x00010a0fda30();
  pppplVar9 = pppplVar8;
  FUN_10a3ca004();
  FUN_10a3ca840();
  pppplVar10 = pppplVar9;
  FUN_10a10bbb4();
  if (pppplVar10 == (long ****)0x0) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd1e,0x2c);
    FUN_10a10bcb0(&ppplStack_78);
  }
  else if (*(int *)(pppplVar10 + 4) < *(int *)(*(long *)(lVar15 + 0x100) + 0x288)) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd4b,0x32);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      if (-1 < cStack_61) {
        ppplStack_78 = (long ***)&ppplStack_78;
      }
      func_0x00010ae06f08(1,8,&UNK_10f63cd7e,&UNK_10f6773f3,0xbf,"%s",in_x6,in_x7,ppplStack_78);
    }
    func_0x0001098998d4(auStack_90,&ppplStack_d0);
    FUN_10a10be38(&ppplStack_78,auStack_90,pppplVar8,pppplVar13,*(undefined4 *)(pppplVar10 + 4));
  }
  else {
    lVar11 = lVar15;
    (*(code *)pppplVar10[5])(lVar15,pppplVar8,pppplVar13);
    if ((lVar11 != 0) && (___dynamic_cast(), lVar11 != 0)) {
      FUN_10a570894(pppplVar9,lVar15,ppplStack_d0,pplStack_c8);
      ppplStack_78 = *(long ****)(lVar15 + 0x858);
      pplStack_70 = *(long ***)(lVar15 + 0x860);
      if (pplStack_70 != (long **)0x0) {
        plVar1 = (long *)(pplStack_70 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a10b9d8(param_1,&ppplStack_78,lVar11);
      pplVar6 = pplStack_70;
      if (pplStack_70 != (long **)0x0) {
        plVar1 = (long *)(pplStack_70 + 1);
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
          (**(code **)((long)*pplStack_70 + 0x10))(pplStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar6);
        }
      }
      if ((long)pplStack_b0 < 0) {
        __ZdlPv(ppplStack_c0);
      }
      if ((char)bStack_91 < '\0') {
        __ZdlPv(ppplStack_a8);
      }
      return;
    }
    FUN_10a2719b0(&UNK_10f648c9d);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a770edc);
  (*pcVar7)();
}



/* Entry: 10a770f5c; end: 10a770ff3;  */

void FUN_10a770f5c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_38,&UNK_10f689b04);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (((uint)(int)(char)bStack_21 >> 7 & 1) == 0) {
      return;
    }
  }
  else {
    FUN_10a7a1560(param_1,*(undefined8 *)(param_2 + 0x30),&uStack_38);
    if (-1 < (char)bStack_21) {
      return;
    }
  }
  __ZdlPv(uStack_38);
  return;
}



/* Entry: 10a770ff4; end: 10a7710bf;  */

void FUN_10a770ff4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [8];
  byte bStack_38;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x30) + 0x900);
  FUN_10a597fb4();
  if ((*plVar1 == plVar1[1]) || (FUN_10a0ef2e4(auStack_58,*plVar1,400,0), (bStack_38 & 1) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a7a1b28(param_1,*(undefined8 *)(param_2 + 0x30),auStack_58,auStack_40);
    if ((bStack_38 == 1) && (cStack_41 < '\0')) {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 10a7710c0; end: 10a771177;  */

void FUN_10a7710c0(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_41;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uStack_41 = 1;
  uStack_30 = param_5;
  uStack_2c = param_4;
  uStack_28 = param_3;
  FUN_10a7a2644(auStack_40,&uStack_21,(undefined8 *)(param_2 + 0x30),&uStack_28,&uStack_2c,
                &uStack_30,&uStack_41);
  FUN_10a7a208c(param_1,uVar5,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a771178; end: 10a771363;  */

void FUN_10a771178(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    lStack_50 = param_3[2];
  }
  FUN_10ad0279c(auStack_40,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  FUN_10a34b9a4(&lStack_70,*(undefined8 *)(param_2 + 0x30),param_3,auStack_40,param_4);
  if (lStack_70 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(int *)(lStack_70 + 0x110) == 2) {
    *param_1 = lStack_70;
    param_1[1] = (long)plStack_68;
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
  }
  else {
    if (*(int *)(lStack_70 + 0x110) != 1) {
      FUN_10a00946c(&UNK_10f6771e0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a771314);
      (*pcVar5)();
    }
    FUN_10a34a3a8(&uStack_80,lStack_70,0,1);
    FUN_10a2ea178(param_1,uStack_80);
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a771364; end: 10a7713cb;  */

void FUN_10a771364(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)0x20;
  __Znwm();
  lVar5 = param_2[1];
  lVar6 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar6;
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
  lVar5 = *param_1;
  *plVar4 = lVar5;
  plVar4[1] = (long)param_1;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a7713cc; end: 10a7717e3;  */

long * FUN_10a7713cc(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined2 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  plVar10 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar10 + 0xf0))();
  plVar11 = (long *)plVar10[1];
  if (plVar11 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar10;
      if (lVar15 != 0) {
        lVar12 = 0x103a8;
        __Znwm();
        FUN_10ad173d8();
        lVar3 = *(long *)(lVar15 + 0x78);
        lVar5 = *(long *)(lVar15 + 0x80);
        if (lVar5 != 0) {
          plVar10 = (long *)(lVar5 + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = *plVar10 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_68 = 0;
        plVar10 = (long *)0x38;
        lStack_78 = lVar3;
        lStack_70 = lVar5;
        lStack_60 = lVar12;
        __Znwm();
        lStack_78 = 0;
        lStack_70 = 0;
        *plVar10 = (long)&PTR_FUN_110c181c8;
        plVar10[1] = 0;
        plVar10[2] = 0;
        plVar10[3] = lVar12;
        plVar10[4] = lVar3;
        plVar10[5] = lVar5;
        *(undefined2 *)(plVar10 + 6) = uStack_68;
        *(undefined4 *)((long)plVar10 + 0x32) = 0;
        *(undefined2 *)((long)plVar10 + 0x36) = 0;
        piVar14 = *(int **)(lVar15 + 0x78);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar8) {
            *piVar14 = *piVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        puVar1 = (undefined4 *)(*(long *)(lVar15 + 0x78) + 4);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *puVar1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        puVar1 = (undefined4 *)(*(long *)(lVar15 + 0x78) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *puVar1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (plVar10 != (long *)0x0) {
          plVar6 = plVar10 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = *plVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uVar4 = *(undefined8 *)(lVar15 + 0x58);
        plVar6 = *(long **)(lVar15 + 0x60);
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = uVar4;
        plStack_80 = plVar6;
        plStack_58 = plVar10;
        __ZNSt3__15mutex4lockEv(uVar4);
        lVar3 = lStack_60;
        FUN_10ad17574(lStack_60,lVar15 + 0x68);
        lStack_a8 = lVar3;
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_a0 = plVar10;
        FUN_10a2b7e7c(lVar15 + 0x18,&lStack_a8,&lStack_a8);
        if (plStack_a0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        __ZNSt3__15mutex6unlockEv(uVar4);
        puVar13 = (undefined8 *)0x38;
        __Znwm();
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = &PTR_DAT_110c18228;
        puVar13[3] = uVar4;
        puVar13[4] = plVar6;
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        puVar13[5] = lVar3;
        puVar13[6] = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            lVar15 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (plVar10 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
        plVar10 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar6 = plStack_58 + 1;
          do {
            lVar15 = *plVar6;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = (long *)param_1[3];
        param_1[2] = (long)(puVar13 + 3);
        param_1[3] = (long)puVar13;
        if (plVar10 != (long *)0x0) {
          plVar6 = plVar10 + 1;
          do {
            lVar15 = *plVar6;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plVar11 != (long *)0x0) {
          plVar10 = plVar11 + 1;
          do {
            lVar15 = *plVar10;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        return param_1;
      }
    }
  }
  FUN_10a00946c(&UNK_10f675094);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a771780);
  (*pcVar9)();
}



/* Entry: 10a7717e4; end: 10a77184f;  */

undefined8 FUN_10a7717e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  uVar1 = *puVar2;
  __ZNSt3__15mutex4lockEv(uVar1);
  FUN_10ad17ad8(puVar2[2],param_3);
  __ZNSt3__15mutex6unlockEv(uVar1);
  return param_1;
}



/* Entry: 10a771850; end: 10a7718b3;  */

void FUN_10a771850(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_3[1];
  plVar1 = (long *)*param_3;
  plVar3 = plVar1;
  for (; (plVar1 != plVar2 && (plVar3 = plVar1, *plVar1 != param_2)); plVar1 = plVar1 + 2) {
    plVar3 = plVar2;
  }
  if (plVar2 != plVar3) {
    while (plVar1 = plVar3 + 2, plVar1 != plVar2) {
      plVar1[-2] = *plVar1;
      *(int *)(plVar1 + -1) = (int)plVar1[1];
      plVar3 = plVar1;
    }
    param_3[1] = (long)plVar3;
  }
  return;
}



/* Entry: 10a7718b4; end: 10a771983;  */

void FUN_10a7718b4(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_51;
  
  uStack_58 = (undefined4)param_4;
  puStack_68 = &uStack_58;
  lVar1 = param_2 + 0x20;
  FUN_10a7aae0c(lVar1,&uStack_58,&UNK_10dd5b8f9,&puStack_68,&uStack_51);
  FUN_10a771850();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  uVar2 = *puVar3;
  __ZNSt3__15mutex4lockEv(uVar2);
  FUN_10ad17a68(param_1,puVar3[2],param_4);
  __ZNSt3__15mutex6unlockEv(uVar2);
  uStack_60 = (undefined4)param_1;
  puStack_68 = param_3;
  FUN_10a771984(lVar1 + 0x18,&puStack_68);
  return;
}



/* Entry: 10a771984; end: 10a771a4b;  */

void FUN_10a771984(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar9;
    puVar10 = puVar10 + 2;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a7a2bf8();
      plVar8 = (long *)param_1[6];
      do {
        if (plVar8 == (long *)0x0) {
          return;
        }
        while( true ) {
          FUN_10a771850();
          puVar10 = (undefined8 *)param_1[2];
          lVar7 = plVar8[2];
          if (plVar8[3] == plVar8[4]) break;
          uVar11 = *(undefined4 *)(plVar8[4] + -8);
          uVar9 = *puVar10;
          __ZNSt3__15mutex4lockEv(uVar9);
          FUN_10ad17a68(uVar11,puVar10[2],(int)lVar7);
          __ZNSt3__15mutex6unlockEv(uVar9);
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        uVar9 = *puVar10;
        __ZNSt3__15mutex4lockEv(uVar9);
        FUN_10ad17a68(0,puVar10[2],(int)lVar7);
        __ZNSt3__15mutex6unlockEv(uVar9);
        plVar3 = param_1 + 4;
        func_0x00010a7ab23c(plVar3,plVar8);
        plVar8 = plVar3;
      } while( true );
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar8 = param_1;
    FUN_10a7a2c0c();
    puVar2 = (undefined8 *)((long)plVar8 + lVar7);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar10 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar8 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a771a4c; end: 10a771b2f;  */

void FUN_10a771a4c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  
  plVar3 = *(long **)(param_1 + 0x30);
  do {
    if (plVar3 == (long *)0x0) {
      return;
    }
    while( true ) {
      FUN_10a771850();
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      lVar1 = plVar3[2];
      if (plVar3[3] == plVar3[4]) break;
      uVar6 = *(undefined4 *)(plVar3[4] + -8);
      uVar4 = *puVar5;
      __ZNSt3__15mutex4lockEv(uVar4);
      FUN_10ad17a68(uVar6,puVar5[2],(int)lVar1);
      __ZNSt3__15mutex6unlockEv(uVar4);
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return;
      }
    }
    uVar4 = *puVar5;
    __ZNSt3__15mutex4lockEv(uVar4);
    FUN_10ad17a68(0,puVar5[2],(int)lVar1);
    __ZNSt3__15mutex6unlockEv(uVar4);
    plVar2 = (long *)(param_1 + 0x20);
    func_0x00010a7ab23c(plVar2,plVar3);
    plVar3 = plVar2;
  } while( true );
}



/* Entry: 10a771b30; end: 10a771bcb;  */

long *******
FUN_10a771b30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long *******ppppppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long *******ppppppplVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *****ppppplVar28;
  long ******pppppplVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  long **pplStack_530;
  long ******pppppplStack_528;
  undefined8 ******ppppppuStack_518;
  undefined1 uStack_509;
  undefined8 ******ppppppuStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined *puStack_4f0;
  long ******pppppplStack_4e8;
  undefined8 ******ppppppuStack_4e0;
  code *pcStack_4d8;
  long ******apppppplStack_4c8 [2];
  char cStack_4b1;
  undefined8 ******ppppppuStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  char cStack_491;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined *puStack_480;
  long *plStack_478;
  undefined8 ******ppppppuStack_470;
  code *pcStack_468;
  undefined8 ******ppppppuStack_458;
  undefined8 ******ppppppuStack_420;
  code *pcStack_418;
  undefined8 ******ppppppuStack_408;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ******ppppppuStack_3b8;
  undefined8 ******ppppppuStack_380;
  code *pcStack_378;
  undefined8 ******ppppppuStack_368;
  undefined8 ******ppppppuStack_330;
  code *pcStack_328;
  undefined8 ******ppppppuStack_318;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  undefined8 ******ppppppuStack_2c8;
  undefined8 ******ppppppuStack_290;
  code *pcStack_288;
  undefined8 ******ppppppuStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ******ppppppuStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 ******ppppppuStack_210;
  code *pcStack_208;
  undefined8 ******ppppppuStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ******ppppppuStack_1d0;
  code *pcStack_1c8;
  undefined8 *****pppppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 *****pppppuStack_190;
  code *pcStack_188;
  undefined8 ****ppppuStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined *puStack_158;
  undefined1 ****ppppuStack_150;
  code *pcStack_148;
  long ******apppppplStack_138 [2];
  char cStack_121;
  undefined8 ***pppuStack_120;
  long ******apppppplStack_118 [2];
  char cStack_101;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *puStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar30 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_48;
  uVar22 = param_4;
  uStack_48 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar24 = (long *******)*puVar30;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    func_0x00010ad17b50(puVar30[2],uVar3,param_4,param_5);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
    return ppppppplVar24;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_58 = FUN_10a771bcc;
  puVar30 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppuVar14 = &puStack_88;
  uVar21 = uVar22;
  puStack_88 = puVar25;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar24 = (long *******)*puVar30;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    func_0x00010ad17bb0(puVar30[2],uVar3,uVar22);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
    return ppppppplVar24;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(param_4);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a771c58;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppuVar15 = &ppuStack_c8;
  ppuStack_c8 = ppuVar14;
  puStack_c0 = puVar30;
  ppuStack_a0 = &puStack_60;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar24 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    FUN_10ad17c08(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
    return ppppppplVar24;
  }
  plVar8 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar6);
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a771cdc;
  plVar26 = plVar9 + 9;
  pppuStack_120 = pppuVar15;
  puStack_100 = puVar30;
  puStack_f8 = puVar25;
  plStack_f0 = plVar8;
  puStack_e8 = puVar6;
  pppuStack_e0 = &ppuStack_a0;
  func_0x00010a7ab484(plVar26,&pppuStack_120);
  if (plVar26 == (long *)0x0) {
    lVar23 = *plVar9;
    ppppppplVar24 = apppppplStack_138;
    func_0x000107c2b054(ppppppplVar24,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar24 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(apppppplStack_118,&UNK_10f6750ed);
      FUN_10a76bdb0(ppppppplVar24,apppppplStack_138,apppppplStack_118);
      if (cStack_101 < '\0') {
        __ZdlPv(apppppplStack_118[0]);
        ppppppplVar24 = (long *******)apppppplStack_118[0];
      }
    }
    if (cStack_121 < '\0') {
      __ZdlPv(apppppplStack_138[0]);
      ppppppplVar24 = (long *******)apppppplStack_138[0];
    }
  }
  else {
    plVar26 = (long *)plVar9[2];
    plVar9 = plVar9 + 9;
    ppppuVar16 = &pppuStack_120;
    func_0x00010a7ab3ac();
    if (plVar9 == (long *)0x0) {
      puVar6 = &UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_101 < '\0') {
        __ZdlPv(apppppplStack_118[0]);
      }
      if (cStack_121 < '\0') {
        __ZdlPv(apppppplStack_138[0]);
      }
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_148 = FUN_10a771e08;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppuVar17 = &ppppuStack_178;
      ppppuStack_178 = ppppuVar16;
      puStack_170 = puVar30;
      plStack_168 = plVar26;
      plStack_160 = plVar8;
      puStack_158 = puVar6;
      ppppuStack_150 = &pppuStack_e0;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17c98(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_188 = FUN_10a771e8c;
      puVar27 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      ppppppuVar18 = &pppppuStack_1b8;
      pppppuStack_1b8 = pppppuVar17;
      puStack_1b0 = puVar30;
      puStack_1a8 = puVar25;
      puStack_1a0 = puVar7;
      puStack_198 = puVar6;
      pppppuStack_190 = &ppppuStack_150;
      func_0x00010a7ab484();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        uVar22 = *puVar27;
        __ZNSt3__15mutex4lockEv(uVar22);
        ppppppplVar24 = (long *******)puVar27[2];
        func_0x00010ad17d70(ppppppplVar24,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar22);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_1c8 = FUN_10a771f18;
      puVar25 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppppuVar19 = &ppppppuStack_1f8;
      ppppppuStack_1f8 = ppppppuVar18;
      puStack_1f0 = puVar30;
      puStack_1e8 = puVar27;
      puStack_1e0 = puVar7;
      puStack_1d8 = puVar6;
      ppppppuStack_1d0 = &pppppuStack_190;
      func_0x00010a7ab3ac();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17ce0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_208 = FUN_10a771f9c;
      puVar27 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppppuVar20 = &ppppppuStack_238;
      ppppppuStack_238 = pppppppuVar19;
      puStack_230 = puVar30;
      puStack_228 = puVar25;
      puStack_220 = puVar7;
      puStack_218 = puVar6;
      ppppppuStack_210 = &ppppppuStack_1d0;
      func_0x00010a7ab3ac();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17d28(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_248 = FUN_10a772020;
      puVar25 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppppuVar19 = &ppppppuStack_278;
      ppppppuStack_278 = pppppppuVar20;
      puStack_270 = puVar30;
      puStack_268 = puVar27;
      puStack_260 = puVar7;
      puStack_258 = puVar6;
      ppppppuStack_250 = &ppppppuStack_210;
      func_0x00010a7ab484();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        uVar22 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar22);
        ppppppplVar24 = (long *******)puVar25[2];
        func_0x00010ad17db8(ppppppplVar24,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar22);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_288 = FUN_10a7720ac;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar20 = &ppppppuStack_2c8;
      ppppppuStack_2c8 = pppppppuVar19;
      ppppppuStack_290 = &ppppppuStack_250;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17e00(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_2d8 = FUN_10a772140;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_318;
      uVar22 = param_1;
      ppppppuStack_318 = pppppppuVar20;
      ppppppuStack_2e0 = &ppppppuStack_290;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17e48(param_1,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_328 = FUN_10a7721d4;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar20 = &ppppppuStack_368;
      ppppppuStack_368 = pppppppuVar19;
      ppppppuStack_330 = &ppppppuStack_2e0;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17ea0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_378 = FUN_10a772268;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_3b8;
      ppppppuStack_3b8 = pppppppuVar20;
      ppppppuStack_380 = &ppppppuStack_330;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17ee8(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_3c8 = FUN_10a7722fc;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar20 = &ppppppuStack_408;
      uVar31 = uVar22;
      ppppppuStack_408 = pppppppuVar19;
      ppppppuStack_3d0 = &ppppppuStack_380;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17f30(uVar22,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar6 = puVar7;
      __Unwind_Resume();
      pcStack_418 = FUN_10a772390;
      puVar30 = *(undefined8 **)(puVar6 + 0x10);
      puVar6 = puVar6 + 0x48;
      pppppppuVar19 = &ppppppuStack_458;
      uVar22 = uVar21;
      ppppppuStack_458 = pppppppuVar20;
      ppppppuStack_420 = &ppppppuStack_3d0;
      func_0x00010a7ab3ac();
      if (puVar6 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar6 + 0x18);
        ppppppplVar24 = (long *******)*puVar30;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17f88(uVar31,puVar30[2],uVar3,uVar21);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      plVar8 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      plVar9 = plVar8;
      __Unwind_Resume();
      pcStack_468 = FUN_10a77242c;
      plVar26 = plVar9 + 9;
      ppppppuStack_4b0 = pppppppuVar19;
      puStack_490 = puVar30;
      puStack_488 = puVar25;
      puStack_480 = puVar7;
      plStack_478 = plVar8;
      ppppppuStack_470 = &ppppppuStack_420;
      func_0x00010a7ab484(plVar26,&ppppppuStack_4b0);
      if (plVar26 == (long *)0x0) {
        lVar23 = *plVar9;
        ppppppplVar24 = apppppplStack_4c8;
        func_0x000107c2b054(ppppppplVar24,&UNK_10f6750c5);
        if (lVar23 != 0) {
          ppppppplVar24 = *(long ********)(lVar23 + 0x8d8);
          func_0x000107c2b054(&uStack_4a8,&UNK_10f6750f2);
          FUN_10a76bdb0(ppppppplVar24,apppppplStack_4c8,&uStack_4a8);
          if (cStack_491 < '\0') {
            ppppppplVar24 = (long *******)CONCAT44(uStack_4a4,uStack_4a8);
            __ZdlPv(ppppppplVar24);
          }
        }
        if (cStack_4b1 < '\0') {
          __ZdlPv(apppppplStack_4c8[0]);
          ppppppplVar24 = (long *******)apppppplStack_4c8[0];
        }
      }
      else {
        puVar25 = (undefined8 *)plVar9[2];
        plVar8 = plVar9 + 9;
        pppppppuVar19 = &ppppppuStack_4b0;
        func_0x00010a7ab3ac();
        if (plVar8 == (long *)0x0) {
          ppppppplVar24 = (long *******)&UNK_10f677487;
          FUN_109ffdddc();
          if (cStack_491 < '\0') {
            __ZdlPv(CONCAT44(uStack_4a4,uStack_4a8));
          }
          if (cStack_4b1 < '\0') {
            __ZdlPv(apppppplStack_4c8[0]);
          }
          ppppppplVar11 = ppppppplVar24;
          __Unwind_Resume();
          pcStack_4d8 = FUN_10a772568;
          if (pppppppuVar19 != (undefined8 *******)0x0) {
            pppplVar12 = (*ppppppplVar11)[0x20][0x39];
            ppppppuStack_518 = pppppppuVar19;
            puStack_500 = puVar30;
            puStack_4f8 = puVar25;
            puStack_4f0 = puVar7;
            pppppplStack_4e8 = (long ******)ppppppplVar24;
            ppppppuStack_4e0 = &ppppppuStack_470;
            (*(code *)(*pppplVar12)[0x13])();
            pppppplStack_528 = (long ******)pppplVar12[1];
            pplStack_530 = (long **)*pppplVar12;
            if (pppplVar12[1] != (long ***)0x0) {
              ppplVar1 = pppplVar12[1] + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
                if (bVar5) {
                  *ppplVar1 = (long **)((long)*ppplVar1 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppplVar29 = ppppppplVar11[2];
            ppppplVar28 = *pppppplVar29;
            __ZNSt3__15mutex4lockEv(ppppplVar28);
            ppppplVar13 = pppppplVar29[2];
            FUN_10ad18048(ppppplVar13,&pplStack_530,uVar22,*(undefined1 *)(ppppppplVar11 + 1));
            __ZNSt3__15mutex6unlockEv(ppppplVar28);
            ppppppuStack_508 = &ppppppuStack_518;
            ppppppplVar11 = ppppppplVar11 + 9;
            FUN_10a7ab750(ppppppplVar11,&ppppppuStack_518,&UNK_10dd5b8f9,&ppppppuStack_508,
                          &uStack_509);
            ppppppplVar24 = (long *******)pppppplStack_528;
            *(int *)(ppppppplVar11 + 3) = (int)ppppplVar13;
            if ((long *******)pppppplStack_528 != (long *******)0x0) {
              ppppppplVar2 = (long *******)(pppppplStack_528 + 1);
              do {
                pppppplVar29 = *ppppppplVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
                if (bVar5) {
                  *ppppppplVar2 = (long ******)((long)pppppplVar29 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppppplVar29 == (long ******)0x0) {
                (*(code *)(*pppppplStack_528)[2])(pppppplStack_528);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
                ppppppplVar11 = ppppppplVar24;
              }
            }
          }
          return ppppppplVar11;
        }
        lVar23 = plVar8[3];
        uVar22 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar22);
        uStack_4a8 = (int)lVar23;
        FUN_10ad18548(puVar25[2] + 0x10,&uStack_4a8);
        __ZNSt3__15mutex6unlockEv(uVar22);
        ppppppplVar24 = (long *******)(plVar9 + 9);
        FUN_10a7ab55c(ppppppplVar24,&ppppppuStack_4b0);
      }
      return ppppppplVar24;
    }
    lVar23 = plVar9[3];
    ppppppplVar24 = (long *******)*plVar26;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    func_0x00010ad17c50(plVar26[2],(int)lVar23);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
  }
  return ppppppplVar24;
}



/* Entry: 10a771bcc; end: 10a771c57;  */

long ******* FUN_10a771bcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long *******ppppppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long *******ppppppplVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *****ppppplVar28;
  undefined8 *puVar29;
  long ******pppppplVar30;
  undefined8 uVar31;
  long **pplStack_4e0;
  long ******pppppplStack_4d8;
  undefined8 ******ppppppuStack_4c8;
  undefined1 uStack_4b9;
  undefined8 ******ppppppuStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined *puStack_4a0;
  long ******pppppplStack_498;
  undefined8 ******ppppppuStack_490;
  code *pcStack_488;
  long ******apppppplStack_478 [2];
  char cStack_461;
  undefined8 ******ppppppuStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  char cStack_441;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  long *plStack_428;
  undefined8 ******ppppppuStack_420;
  code *pcStack_418;
  undefined8 ******ppppppuStack_408;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ******ppppppuStack_3b8;
  undefined8 ******ppppppuStack_380;
  code *pcStack_378;
  undefined8 ******ppppppuStack_368;
  undefined8 ******ppppppuStack_330;
  code *pcStack_328;
  undefined8 ******ppppppuStack_318;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  undefined8 ******ppppppuStack_2c8;
  undefined8 ******ppppppuStack_290;
  code *pcStack_288;
  undefined8 ******ppppppuStack_278;
  undefined8 ******ppppppuStack_240;
  code *pcStack_238;
  undefined8 ******ppppppuStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 ******ppppppuStack_200;
  code *pcStack_1f8;
  undefined8 ******ppppppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 ******ppppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *****pppppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *****pppppuStack_180;
  code *pcStack_178;
  undefined8 ****ppppuStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 ****ppppuStack_140;
  code *pcStack_138;
  undefined8 ***pppuStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long ******apppppplStack_e8 [2];
  char cStack_d1;
  undefined8 **ppuStack_d0;
  long ******apppppplStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar29 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar27 = &uStack_38;
  uVar22 = param_4;
  uStack_38 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar24 = (long *******)*puVar29;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    func_0x00010ad17bb0(puVar29[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
    return ppppppplVar24;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_48 = FUN_10a771c58;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppuVar14 = &puStack_78;
  puStack_78 = puVar27;
  puStack_70 = puVar29;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar24 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    FUN_10ad17c08(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
    return ppppppplVar24;
  }
  plVar8 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar6);
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_88 = FUN_10a771cdc;
  plVar26 = plVar9 + 9;
  ppuStack_d0 = ppuVar14;
  puStack_b0 = puVar29;
  puStack_a8 = puVar25;
  plStack_a0 = plVar8;
  puStack_98 = puVar6;
  ppuStack_90 = &puStack_50;
  func_0x00010a7ab484(plVar26,&ppuStack_d0);
  if (plVar26 == (long *)0x0) {
    lVar23 = *plVar9;
    ppppppplVar24 = apppppplStack_e8;
    func_0x000107c2b054(ppppppplVar24,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar24 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(apppppplStack_c8,&UNK_10f6750ed);
      FUN_10a76bdb0(ppppppplVar24,apppppplStack_e8,apppppplStack_c8);
      if (cStack_b1 < '\0') {
        __ZdlPv(apppppplStack_c8[0]);
        ppppppplVar24 = (long *******)apppppplStack_c8[0];
      }
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(apppppplStack_e8[0]);
      ppppppplVar24 = (long *******)apppppplStack_e8[0];
    }
  }
  else {
    plVar26 = (long *)plVar9[2];
    plVar9 = plVar9 + 9;
    pppuVar15 = &ppuStack_d0;
    func_0x00010a7ab3ac();
    if (plVar9 == (long *)0x0) {
      puVar6 = &UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_b1 < '\0') {
        __ZdlPv(apppppplStack_c8[0]);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(apppppplStack_e8[0]);
      }
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_f8 = FUN_10a771e08;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      ppppuVar16 = &pppuStack_128;
      pppuStack_128 = pppuVar15;
      puStack_120 = puVar29;
      plStack_118 = plVar26;
      plStack_110 = plVar8;
      puStack_108 = puVar6;
      pppuStack_100 = &ppuStack_90;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17c98(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_138 = FUN_10a771e8c;
      puVar25 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppuVar17 = &ppppuStack_168;
      ppppuStack_168 = ppppuVar16;
      puStack_160 = puVar29;
      puStack_158 = puVar27;
      puStack_150 = puVar7;
      puStack_148 = puVar6;
      ppppuStack_140 = &pppuStack_100;
      func_0x00010a7ab484();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        uVar22 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar22);
        ppppppplVar24 = (long *******)puVar25[2];
        func_0x00010ad17d70(ppppppplVar24,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar22);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_178 = FUN_10a771f18;
      puVar27 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      ppppppuVar18 = &pppppuStack_1a8;
      pppppuStack_1a8 = pppppuVar17;
      puStack_1a0 = puVar29;
      puStack_198 = puVar25;
      puStack_190 = puVar7;
      puStack_188 = puVar6;
      pppppuStack_180 = &ppppuStack_140;
      func_0x00010a7ab3ac();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17ce0(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_1b8 = FUN_10a771f9c;
      puVar25 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppppuVar19 = &ppppppuStack_1e8;
      ppppppuStack_1e8 = ppppppuVar18;
      puStack_1e0 = puVar29;
      puStack_1d8 = puVar27;
      puStack_1d0 = puVar7;
      puStack_1c8 = puVar6;
      ppppppuStack_1c0 = &pppppuStack_180;
      func_0x00010a7ab3ac();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        ppppppplVar24 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17d28(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar10 = puVar7;
      __Unwind_Resume();
      pcStack_1f8 = FUN_10a772020;
      puVar27 = *(undefined8 **)(puVar10 + 0x10);
      puVar10 = puVar10 + 0x48;
      pppppppuVar20 = &ppppppuStack_228;
      ppppppuStack_228 = pppppppuVar19;
      puStack_220 = puVar29;
      puStack_218 = puVar25;
      puStack_210 = puVar7;
      puStack_208 = puVar6;
      ppppppuStack_200 = &ppppppuStack_1c0;
      func_0x00010a7ab484();
      if (puVar10 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 0x18);
        uVar22 = *puVar27;
        __ZNSt3__15mutex4lockEv(uVar22);
        ppppppplVar24 = (long *******)puVar27[2];
        func_0x00010ad17db8(ppppppplVar24,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar22);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_238 = FUN_10a7720ac;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_278;
      ppppppuStack_278 = pppppppuVar20;
      ppppppuStack_240 = &ppppppuStack_200;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17e00(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_288 = FUN_10a772140;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar20 = &ppppppuStack_2c8;
      uVar21 = param_1;
      ppppppuStack_2c8 = pppppppuVar19;
      ppppppuStack_290 = &ppppppuStack_240;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17e48(param_1,puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_2d8 = FUN_10a7721d4;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_318;
      ppppppuStack_318 = pppppppuVar20;
      ppppppuStack_2e0 = &ppppppuStack_290;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17ea0(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_328 = FUN_10a772268;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar20 = &ppppppuStack_368;
      ppppppuStack_368 = pppppppuVar19;
      ppppppuStack_330 = &ppppppuStack_2e0;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        func_0x00010ad17ee8(puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_378 = FUN_10a7722fc;
      puVar27 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_3b8;
      uVar31 = uVar21;
      ppppppuStack_3b8 = pppppppuVar20;
      ppppppuStack_380 = &ppppppuStack_330;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar24 = (long *******)*puVar27;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17f30(uVar21,puVar27[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar6 = puVar7;
      __Unwind_Resume();
      pcStack_3c8 = FUN_10a772390;
      puVar29 = *(undefined8 **)(puVar6 + 0x10);
      puVar6 = puVar6 + 0x48;
      pppppppuVar20 = &ppppppuStack_408;
      uVar21 = uVar22;
      ppppppuStack_408 = pppppppuVar19;
      ppppppuStack_3d0 = &ppppppuStack_380;
      func_0x00010a7ab3ac();
      if (puVar6 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar6 + 0x18);
        ppppppplVar24 = (long *******)*puVar29;
        __ZNSt3__15mutex4lockEv(ppppppplVar24);
        FUN_10ad17f88(uVar31,puVar29[2],uVar3,uVar22);
        __ZNSt3__15mutex6unlockEv(ppppppplVar24);
        return ppppppplVar24;
      }
      plVar8 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      plVar9 = plVar8;
      __Unwind_Resume();
      pcStack_418 = FUN_10a77242c;
      plVar26 = plVar9 + 9;
      ppppppuStack_460 = pppppppuVar20;
      puStack_440 = puVar29;
      puStack_438 = puVar27;
      puStack_430 = puVar7;
      plStack_428 = plVar8;
      ppppppuStack_420 = &ppppppuStack_3d0;
      func_0x00010a7ab484(plVar26,&ppppppuStack_460);
      if (plVar26 == (long *)0x0) {
        lVar23 = *plVar9;
        ppppppplVar24 = apppppplStack_478;
        func_0x000107c2b054(ppppppplVar24,&UNK_10f6750c5);
        if (lVar23 != 0) {
          ppppppplVar24 = *(long ********)(lVar23 + 0x8d8);
          func_0x000107c2b054(&uStack_458,&UNK_10f6750f2);
          FUN_10a76bdb0(ppppppplVar24,apppppplStack_478,&uStack_458);
          if (cStack_441 < '\0') {
            ppppppplVar24 = (long *******)CONCAT44(uStack_454,uStack_458);
            __ZdlPv(ppppppplVar24);
          }
        }
        if (cStack_461 < '\0') {
          __ZdlPv(apppppplStack_478[0]);
          ppppppplVar24 = (long *******)apppppplStack_478[0];
        }
      }
      else {
        puVar27 = (undefined8 *)plVar9[2];
        plVar8 = plVar9 + 9;
        pppppppuVar19 = &ppppppuStack_460;
        func_0x00010a7ab3ac();
        if (plVar8 == (long *)0x0) {
          ppppppplVar24 = (long *******)&UNK_10f677487;
          FUN_109ffdddc();
          if (cStack_441 < '\0') {
            __ZdlPv(CONCAT44(uStack_454,uStack_458));
          }
          if (cStack_461 < '\0') {
            __ZdlPv(apppppplStack_478[0]);
          }
          ppppppplVar11 = ppppppplVar24;
          __Unwind_Resume();
          pcStack_488 = FUN_10a772568;
          if (pppppppuVar19 != (undefined8 *******)0x0) {
            pppplVar12 = (*ppppppplVar11)[0x20][0x39];
            ppppppuStack_4c8 = pppppppuVar19;
            puStack_4b0 = puVar29;
            puStack_4a8 = puVar27;
            puStack_4a0 = puVar7;
            pppppplStack_498 = (long ******)ppppppplVar24;
            ppppppuStack_490 = &ppppppuStack_420;
            (*(code *)(*pppplVar12)[0x13])();
            pppppplStack_4d8 = (long ******)pppplVar12[1];
            pplStack_4e0 = (long **)*pppplVar12;
            if (pppplVar12[1] != (long ***)0x0) {
              ppplVar1 = pppplVar12[1] + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
                if (bVar5) {
                  *ppplVar1 = (long **)((long)*ppplVar1 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppplVar30 = ppppppplVar11[2];
            ppppplVar28 = *pppppplVar30;
            __ZNSt3__15mutex4lockEv(ppppplVar28);
            ppppplVar13 = pppppplVar30[2];
            FUN_10ad18048(ppppplVar13,&pplStack_4e0,uVar21,*(undefined1 *)(ppppppplVar11 + 1));
            __ZNSt3__15mutex6unlockEv(ppppplVar28);
            ppppppuStack_4b8 = &ppppppuStack_4c8;
            ppppppplVar11 = ppppppplVar11 + 9;
            FUN_10a7ab750(ppppppplVar11,&ppppppuStack_4c8,&UNK_10dd5b8f9,&ppppppuStack_4b8,
                          &uStack_4b9);
            ppppppplVar24 = (long *******)pppppplStack_4d8;
            *(int *)(ppppppplVar11 + 3) = (int)ppppplVar13;
            if ((long *******)pppppplStack_4d8 != (long *******)0x0) {
              ppppppplVar2 = (long *******)(pppppplStack_4d8 + 1);
              do {
                pppppplVar30 = *ppppppplVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
                if (bVar5) {
                  *ppppppplVar2 = (long ******)((long)pppppplVar30 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppppplVar30 == (long ******)0x0) {
                (*(code *)(*pppppplStack_4d8)[2])(pppppplStack_4d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
                ppppppplVar11 = ppppppplVar24;
              }
            }
          }
          return ppppppplVar11;
        }
        lVar23 = plVar8[3];
        uVar22 = *puVar27;
        __ZNSt3__15mutex4lockEv(uVar22);
        uStack_458 = (int)lVar23;
        FUN_10ad18548(puVar27[2] + 0x10,&uStack_458);
        __ZNSt3__15mutex6unlockEv(uVar22);
        ppppppplVar24 = (long *******)(plVar9 + 9);
        FUN_10a7ab55c(ppppppplVar24,&ppppppuStack_460);
      }
      return ppppppplVar24;
    }
    lVar23 = plVar9[3];
    ppppppplVar24 = (long *******)*plVar26;
    __ZNSt3__15mutex4lockEv(ppppppplVar24);
    func_0x00010ad17c50(plVar26[2],(int)lVar23);
    __ZNSt3__15mutex6unlockEv(ppppppplVar24);
  }
  return ppppppplVar24;
}



/* Entry: 10a771c58; end: 10a771cdb;  */

long ******* FUN_10a771c58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *******ppppppplVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  undefined8 **ppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long *******ppppppplVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_4a0;
  long ******pppppplStack_498;
  undefined8 ******ppppppuStack_488;
  undefined1 uStack_479;
  undefined8 ******ppppppuStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined *puStack_460;
  long ******pppppplStack_458;
  undefined8 ******ppppppuStack_450;
  code *pcStack_448;
  long ******apppppplStack_438 [2];
  char cStack_421;
  undefined8 ******ppppppuStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  char cStack_401;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined *puStack_3f0;
  long *plStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  code *pcStack_3d8;
  undefined8 ******ppppppuStack_3c8;
  undefined8 ******ppppppuStack_390;
  code *pcStack_388;
  undefined8 ******ppppppuStack_378;
  undefined8 ******ppppppuStack_340;
  code *pcStack_338;
  undefined8 ******ppppppuStack_328;
  undefined8 ******ppppppuStack_2f0;
  code *pcStack_2e8;
  undefined8 ******ppppppuStack_2d8;
  undefined8 ******ppppppuStack_2a0;
  code *pcStack_298;
  undefined8 ******ppppppuStack_288;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ******ppppppuStack_238;
  undefined8 ******ppppppuStack_200;
  code *pcStack_1f8;
  undefined8 ******ppppppuStack_1e8;
  undefined1 ******ppppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *****pppppuStack_1a8;
  undefined1 *****pppppuStack_180;
  code *pcStack_178;
  undefined8 ****ppppuStack_168;
  undefined1 ****ppppuStack_140;
  code *pcStack_138;
  undefined8 ***pppuStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  long ******apppppplStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  long ******apppppplStack_88 [2];
  char cStack_71;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar23 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar20 = (long *******)*puVar23;
    __ZNSt3__15mutex4lockEv(ppppppplVar20);
    FUN_10ad17c08(puVar23[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar20);
    return ppppppplVar20;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a771cdc;
  plVar24 = plVar6 + 9;
  puStack_90 = puVar25;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484(plVar24,&puStack_90);
  if (plVar24 == (long *)0x0) {
    lVar22 = *plVar6;
    ppppppplVar20 = apppppplStack_a8;
    func_0x000107c2b054(ppppppplVar20,&UNK_10f6750c5);
    if (lVar22 != 0) {
      ppppppplVar20 = *(long ********)(lVar22 + 0x8d8);
      func_0x000107c2b054(apppppplStack_88,&UNK_10f6750ed);
      FUN_10a76bdb0(ppppppplVar20,apppppplStack_a8,apppppplStack_88);
      if (cStack_71 < '\0') {
        __ZdlPv(apppppplStack_88[0]);
        ppppppplVar20 = (long *******)apppppplStack_88[0];
      }
    }
    if (cStack_91 < '\0') {
      __ZdlPv(apppppplStack_a8[0]);
      ppppppplVar20 = (long *******)apppppplStack_a8[0];
    }
  }
  else {
    plVar24 = (long *)plVar6[2];
    plVar6 = plVar6 + 9;
    ppuVar13 = &puStack_90;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_71 < '\0') {
        __ZdlPv(apppppplStack_88[0]);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(apppppplStack_a8[0]);
      }
      puVar8 = puVar7;
      __Unwind_Resume();
      pcStack_b8 = FUN_10a771e08;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppuVar14 = &ppuStack_e8;
      ppuStack_e8 = ppuVar13;
      ppuStack_c0 = &puStack_50;
      func_0x00010a7ab3ac();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17c98(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_f8 = FUN_10a771e8c;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      ppppuVar15 = &pppuStack_128;
      pppuStack_128 = pppuVar14;
      pppuStack_100 = &ppuStack_c0;
      func_0x00010a7ab484();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        ppppppplVar20 = (long *******)puVar25[2];
        func_0x00010ad17d70(ppppppplVar20,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar21);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_138 = FUN_10a771f18;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppuVar16 = &ppppuStack_168;
      ppppuStack_168 = ppppuVar15;
      ppppuStack_140 = &pppuStack_100;
      func_0x00010a7ab3ac();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17ce0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_178 = FUN_10a771f9c;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      ppppppuVar17 = &pppppuStack_1a8;
      pppppuStack_1a8 = pppppuVar16;
      pppppuStack_180 = &ppppuStack_140;
      func_0x00010a7ab3ac();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17d28(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_1b8 = FUN_10a772020;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar18 = &ppppppuStack_1e8;
      ppppppuStack_1e8 = ppppppuVar17;
      ppppppuStack_1c0 = &pppppuStack_180;
      func_0x00010a7ab484();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        ppppppplVar20 = (long *******)puVar25[2];
        func_0x00010ad17db8(ppppppplVar20,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar21);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_1f8 = FUN_10a7720ac;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar19 = &ppppppuStack_238;
      ppppppuStack_238 = pppppppuVar18;
      ppppppuStack_200 = &ppppppuStack_1c0;
      func_0x00010a7ab484();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17e00(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_248 = FUN_10a772140;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar18 = &ppppppuStack_288;
      uVar21 = param_1;
      ppppppuStack_288 = pppppppuVar19;
      ppppppuStack_250 = &ppppppuStack_200;
      func_0x00010a7ab3ac();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17e48(param_1,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_298 = FUN_10a7721d4;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar19 = &ppppppuStack_2d8;
      ppppppuStack_2d8 = pppppppuVar18;
      ppppppuStack_2a0 = &ppppppuStack_250;
      func_0x00010a7ab484();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17ea0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_2e8 = FUN_10a772268;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar18 = &ppppppuStack_328;
      ppppppuStack_328 = pppppppuVar19;
      ppppppuStack_2f0 = &ppppppuStack_2a0;
      func_0x00010a7ab484();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17ee8(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      __Unwind_Resume();
      pcStack_338 = FUN_10a7722fc;
      puVar25 = *(undefined8 **)(puVar8 + 0x10);
      puVar8 = puVar8 + 0x48;
      pppppppuVar19 = &ppppppuStack_378;
      uVar28 = uVar21;
      ppppppuStack_378 = pppppppuVar18;
      ppppppuStack_340 = &ppppppuStack_2f0;
      func_0x00010a7ab3ac();
      if (puVar8 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar8 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17f30(uVar21,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar8 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      puVar7 = puVar8;
      __Unwind_Resume();
      pcStack_388 = FUN_10a772390;
      puVar23 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar18 = &ppppppuStack_3c8;
      uVar21 = param_4;
      ppppppuStack_3c8 = pppppppuVar19;
      ppppppuStack_390 = &ppppppuStack_340;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar23;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17f88(uVar28,puVar23[2],uVar3,param_4);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      plVar24 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar8);
      plVar9 = plVar24;
      __Unwind_Resume();
      pcStack_3d8 = FUN_10a77242c;
      plVar6 = plVar9 + 9;
      ppppppuStack_420 = pppppppuVar18;
      puStack_400 = puVar23;
      puStack_3f8 = puVar25;
      puStack_3f0 = puVar8;
      plStack_3e8 = plVar24;
      ppppppuStack_3e0 = &ppppppuStack_390;
      func_0x00010a7ab484(plVar6,&ppppppuStack_420);
      if (plVar6 == (long *)0x0) {
        lVar22 = *plVar9;
        ppppppplVar20 = apppppplStack_438;
        func_0x000107c2b054(ppppppplVar20,&UNK_10f6750c5);
        if (lVar22 != 0) {
          ppppppplVar20 = *(long ********)(lVar22 + 0x8d8);
          func_0x000107c2b054(&uStack_418,&UNK_10f6750f2);
          FUN_10a76bdb0(ppppppplVar20,apppppplStack_438,&uStack_418);
          if (cStack_401 < '\0') {
            ppppppplVar20 = (long *******)CONCAT44(uStack_414,uStack_418);
            __ZdlPv(ppppppplVar20);
          }
        }
        if (cStack_421 < '\0') {
          __ZdlPv(apppppplStack_438[0]);
          ppppppplVar20 = (long *******)apppppplStack_438[0];
        }
      }
      else {
        puVar25 = (undefined8 *)plVar9[2];
        plVar24 = plVar9 + 9;
        pppppppuVar18 = &ppppppuStack_420;
        func_0x00010a7ab3ac();
        if (plVar24 == (long *)0x0) {
          ppppppplVar20 = (long *******)&UNK_10f677487;
          FUN_109ffdddc();
          if (cStack_401 < '\0') {
            __ZdlPv(CONCAT44(uStack_414,uStack_418));
          }
          if (cStack_421 < '\0') {
            __ZdlPv(apppppplStack_438[0]);
          }
          ppppppplVar10 = ppppppplVar20;
          __Unwind_Resume();
          pcStack_448 = FUN_10a772568;
          if (pppppppuVar18 != (undefined8 *******)0x0) {
            pppplVar11 = (*ppppppplVar10)[0x20][0x39];
            ppppppuStack_488 = pppppppuVar18;
            puStack_470 = puVar23;
            puStack_468 = puVar25;
            puStack_460 = puVar8;
            pppppplStack_458 = (long ******)ppppppplVar20;
            ppppppuStack_450 = &ppppppuStack_3e0;
            (*(code *)(*pppplVar11)[0x13])();
            pppppplStack_498 = (long ******)pppplVar11[1];
            pplStack_4a0 = (long **)*pppplVar11;
            if (pppplVar11[1] != (long ***)0x0) {
              ppplVar1 = pppplVar11[1] + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
                if (bVar5) {
                  *ppplVar1 = (long **)((long)*ppplVar1 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppplVar27 = ppppppplVar10[2];
            ppppplVar26 = *pppppplVar27;
            __ZNSt3__15mutex4lockEv(ppppplVar26);
            ppppplVar12 = pppppplVar27[2];
            FUN_10ad18048(ppppplVar12,&pplStack_4a0,uVar21,*(undefined1 *)(ppppppplVar10 + 1));
            __ZNSt3__15mutex6unlockEv(ppppplVar26);
            ppppppuStack_478 = &ppppppuStack_488;
            ppppppplVar10 = ppppppplVar10 + 9;
            FUN_10a7ab750(ppppppplVar10,&ppppppuStack_488,&UNK_10dd5b8f9,&ppppppuStack_478,
                          &uStack_479);
            ppppppplVar20 = (long *******)pppppplStack_498;
            *(int *)(ppppppplVar10 + 3) = (int)ppppplVar12;
            if ((long *******)pppppplStack_498 != (long *******)0x0) {
              ppppppplVar2 = (long *******)(pppppplStack_498 + 1);
              do {
                pppppplVar27 = *ppppppplVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
                if (bVar5) {
                  *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppppplVar27 == (long ******)0x0) {
                (*(code *)(*pppppplStack_498)[2])(pppppplStack_498);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar20);
                ppppppplVar10 = ppppppplVar20;
              }
            }
          }
          return ppppppplVar10;
        }
        lVar22 = plVar24[3];
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        uStack_418 = (int)lVar22;
        FUN_10ad18548(puVar25[2] + 0x10,&uStack_418);
        __ZNSt3__15mutex6unlockEv(uVar21);
        ppppppplVar20 = (long *******)(plVar9 + 9);
        FUN_10a7ab55c(ppppppplVar20,&ppppppuStack_420);
      }
      return ppppppplVar20;
    }
    lVar22 = plVar6[3];
    ppppppplVar20 = (long *******)*plVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar20);
    func_0x00010ad17c50(plVar24[2],(int)lVar22);
    __ZNSt3__15mutex6unlockEv(ppppppplVar20);
  }
  return ppppppplVar20;
}



/* Entry: 10a771cdc; end: 10a771e07;  */

long ******* FUN_10a771cdc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *******ppppppplVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  undefined8 **ppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long *******ppppppplVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_460;
  long ******pppppplStack_458;
  undefined8 ******ppppppuStack_448;
  undefined1 uStack_439;
  undefined8 ******ppppppuStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined *puStack_420;
  long ******pppppplStack_418;
  undefined8 ******ppppppuStack_410;
  code *pcStack_408;
  long ******apppppplStack_3f8 [2];
  char cStack_3e1;
  undefined8 ******ppppppuStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  char cStack_3c1;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  long *plStack_3a8;
  undefined8 ******ppppppuStack_3a0;
  code *pcStack_398;
  undefined8 ******ppppppuStack_388;
  undefined8 ******ppppppuStack_350;
  code *pcStack_348;
  undefined8 ******ppppppuStack_338;
  undefined8 ******ppppppuStack_300;
  code *pcStack_2f8;
  undefined8 ******ppppppuStack_2e8;
  undefined8 ******ppppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 ******ppppppuStack_298;
  undefined8 ******ppppppuStack_260;
  code *pcStack_258;
  undefined8 ******ppppppuStack_248;
  undefined8 ******ppppppuStack_210;
  code *pcStack_208;
  undefined8 ******ppppppuStack_1f8;
  undefined1 ******ppppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *****pppppuStack_1a8;
  undefined1 *****pppppuStack_180;
  code *pcStack_178;
  undefined8 ****ppppuStack_168;
  undefined1 ****ppppuStack_140;
  code *pcStack_138;
  undefined8 ***pppuStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long ******apppppplStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  long ******apppppplStack_48 [2];
  char cStack_31;
  
  plVar23 = param_2 + 9;
  uStack_50 = param_3;
  func_0x00010a7ab484(plVar23,&uStack_50);
  if (plVar23 == (long *)0x0) {
    lVar22 = *param_2;
    ppppppplVar20 = apppppplStack_68;
    func_0x000107c2b054(ppppppplVar20,&UNK_10f6750c5);
    if (lVar22 != 0) {
      ppppppplVar20 = *(long ********)(lVar22 + 0x8d8);
      func_0x000107c2b054(apppppplStack_48,&UNK_10f6750ed);
      FUN_10a76bdb0(ppppppplVar20,apppppplStack_68,apppppplStack_48);
      if (cStack_31 < '\0') {
        __ZdlPv(apppppplStack_48[0]);
        ppppppplVar20 = (long *******)apppppplStack_48[0];
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(apppppplStack_68[0]);
      ppppppplVar20 = (long *******)apppppplStack_68[0];
    }
  }
  else {
    plVar23 = (long *)param_2[2];
    param_2 = param_2 + 9;
    puVar25 = &uStack_50;
    func_0x00010a7ab3ac();
    if (param_2 == (long *)0x0) {
      puVar6 = &UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_31 < '\0') {
        __ZdlPv(apppppplStack_48[0]);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(apppppplStack_68[0]);
      }
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_78 = FUN_10a771e08;
      puVar24 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      ppuVar13 = &puStack_a8;
      puStack_a8 = puVar25;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar24;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17c98(puVar24[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_b8 = FUN_10a771e8c;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppuVar14 = &ppuStack_e8;
      ppuStack_e8 = ppuVar13;
      ppuStack_c0 = &puStack_80;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        ppppppplVar20 = (long *******)puVar25[2];
        func_0x00010ad17d70(ppppppplVar20,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar21);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_f8 = FUN_10a771f18;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      ppppuVar15 = &pppuStack_128;
      pppuStack_128 = pppuVar14;
      pppuStack_100 = &ppuStack_c0;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17ce0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_138 = FUN_10a771f9c;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppuVar16 = &ppppuStack_168;
      ppppuStack_168 = ppppuVar15;
      ppppuStack_140 = &pppuStack_100;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17d28(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_178 = FUN_10a772020;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      ppppppuVar17 = &pppppuStack_1a8;
      pppppuStack_1a8 = pppppuVar16;
      pppppuStack_180 = &ppppuStack_140;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        ppppppplVar20 = (long *******)puVar25[2];
        func_0x00010ad17db8(ppppppplVar20,uVar3);
        __ZNSt3__15mutex6unlockEv(uVar21);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_1b8 = FUN_10a7720ac;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar18 = &ppppppuStack_1f8;
      ppppppuStack_1f8 = ppppppuVar17;
      ppppppuStack_1c0 = &pppppuStack_180;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17e00(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_208 = FUN_10a772140;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_248;
      uVar21 = param_1;
      ppppppuStack_248 = pppppppuVar18;
      ppppppuStack_210 = &ppppppuStack_1c0;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17e48(param_1,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_258 = FUN_10a7721d4;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar18 = &ppppppuStack_298;
      ppppppuStack_298 = pppppppuVar19;
      ppppppuStack_260 = &ppppppuStack_210;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17ea0(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_2a8 = FUN_10a772268;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar19 = &ppppppuStack_2e8;
      ppppppuStack_2e8 = pppppppuVar18;
      ppppppuStack_2b0 = &ppppppuStack_260;
      func_0x00010a7ab484();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        func_0x00010ad17ee8(puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      __Unwind_Resume();
      pcStack_2f8 = FUN_10a7722fc;
      puVar25 = *(undefined8 **)(puVar7 + 0x10);
      puVar7 = puVar7 + 0x48;
      pppppppuVar18 = &ppppppuStack_338;
      uVar28 = uVar21;
      ppppppuStack_338 = pppppppuVar19;
      ppppppuStack_300 = &ppppppuStack_2b0;
      func_0x00010a7ab3ac();
      if (puVar7 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar7 + 0x18);
        ppppppplVar20 = (long *******)*puVar25;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17f30(uVar21,puVar25[2],uVar3);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      puVar7 = &UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar6);
      puVar6 = puVar7;
      __Unwind_Resume();
      pcStack_348 = FUN_10a772390;
      puVar24 = *(undefined8 **)(puVar6 + 0x10);
      puVar6 = puVar6 + 0x48;
      pppppppuVar19 = &ppppppuStack_388;
      uVar21 = param_4;
      ppppppuStack_388 = pppppppuVar18;
      ppppppuStack_350 = &ppppppuStack_300;
      func_0x00010a7ab3ac();
      if (puVar6 != (undefined *)0x0) {
        uVar3 = *(undefined4 *)(puVar6 + 0x18);
        ppppppplVar20 = (long *******)*puVar24;
        __ZNSt3__15mutex4lockEv(ppppppplVar20);
        FUN_10ad17f88(uVar28,puVar24[2],uVar3,param_4);
        __ZNSt3__15mutex6unlockEv(ppppppplVar20);
        return ppppppplVar20;
      }
      plVar23 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      __ZNSt3__15mutex6unlockEv(puVar7);
      plVar8 = plVar23;
      __Unwind_Resume();
      pcStack_398 = FUN_10a77242c;
      plVar9 = plVar8 + 9;
      ppppppuStack_3e0 = pppppppuVar19;
      puStack_3c0 = puVar24;
      puStack_3b8 = puVar25;
      puStack_3b0 = puVar7;
      plStack_3a8 = plVar23;
      ppppppuStack_3a0 = &ppppppuStack_350;
      func_0x00010a7ab484(plVar9,&ppppppuStack_3e0);
      if (plVar9 == (long *)0x0) {
        lVar22 = *plVar8;
        ppppppplVar20 = apppppplStack_3f8;
        func_0x000107c2b054(ppppppplVar20,&UNK_10f6750c5);
        if (lVar22 != 0) {
          ppppppplVar20 = *(long ********)(lVar22 + 0x8d8);
          func_0x000107c2b054(&uStack_3d8,&UNK_10f6750f2);
          FUN_10a76bdb0(ppppppplVar20,apppppplStack_3f8,&uStack_3d8);
          if (cStack_3c1 < '\0') {
            ppppppplVar20 = (long *******)CONCAT44(uStack_3d4,uStack_3d8);
            __ZdlPv(ppppppplVar20);
          }
        }
        if (cStack_3e1 < '\0') {
          __ZdlPv(apppppplStack_3f8[0]);
          ppppppplVar20 = (long *******)apppppplStack_3f8[0];
        }
      }
      else {
        puVar25 = (undefined8 *)plVar8[2];
        plVar23 = plVar8 + 9;
        pppppppuVar18 = &ppppppuStack_3e0;
        func_0x00010a7ab3ac();
        if (plVar23 == (long *)0x0) {
          ppppppplVar20 = (long *******)&UNK_10f677487;
          FUN_109ffdddc();
          if (cStack_3c1 < '\0') {
            __ZdlPv(CONCAT44(uStack_3d4,uStack_3d8));
          }
          if (cStack_3e1 < '\0') {
            __ZdlPv(apppppplStack_3f8[0]);
          }
          ppppppplVar10 = ppppppplVar20;
          __Unwind_Resume();
          pcStack_408 = FUN_10a772568;
          if (pppppppuVar18 != (undefined8 *******)0x0) {
            pppplVar11 = (*ppppppplVar10)[0x20][0x39];
            ppppppuStack_448 = pppppppuVar18;
            puStack_430 = puVar24;
            puStack_428 = puVar25;
            puStack_420 = puVar7;
            pppppplStack_418 = (long ******)ppppppplVar20;
            ppppppuStack_410 = &ppppppuStack_3a0;
            (*(code *)(*pppplVar11)[0x13])();
            pppppplStack_458 = (long ******)pppplVar11[1];
            pplStack_460 = (long **)*pppplVar11;
            if (pppplVar11[1] != (long ***)0x0) {
              ppplVar1 = pppplVar11[1] + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
                if (bVar5) {
                  *ppplVar1 = (long **)((long)*ppplVar1 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppplVar27 = ppppppplVar10[2];
            ppppplVar26 = *pppppplVar27;
            __ZNSt3__15mutex4lockEv(ppppplVar26);
            ppppplVar12 = pppppplVar27[2];
            FUN_10ad18048(ppppplVar12,&pplStack_460,uVar21,*(undefined1 *)(ppppppplVar10 + 1));
            __ZNSt3__15mutex6unlockEv(ppppplVar26);
            ppppppuStack_438 = &ppppppuStack_448;
            ppppppplVar10 = ppppppplVar10 + 9;
            FUN_10a7ab750(ppppppplVar10,&ppppppuStack_448,&UNK_10dd5b8f9,&ppppppuStack_438,
                          &uStack_439);
            ppppppplVar20 = (long *******)pppppplStack_458;
            *(int *)(ppppppplVar10 + 3) = (int)ppppplVar12;
            if ((long *******)pppppplStack_458 != (long *******)0x0) {
              ppppppplVar2 = (long *******)(pppppplStack_458 + 1);
              do {
                pppppplVar27 = *ppppppplVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
                if (bVar5) {
                  *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppppplVar27 == (long ******)0x0) {
                (*(code *)(*pppppplStack_458)[2])(pppppplStack_458);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar20);
                ppppppplVar10 = ppppppplVar20;
              }
            }
          }
          return ppppppplVar10;
        }
        lVar22 = plVar23[3];
        uVar21 = *puVar25;
        __ZNSt3__15mutex4lockEv(uVar21);
        uStack_3d8 = (int)lVar22;
        FUN_10ad18548(puVar25[2] + 0x10,&uStack_3d8);
        __ZNSt3__15mutex6unlockEv(uVar21);
        ppppppplVar20 = (long *******)(plVar8 + 9);
        FUN_10a7ab55c(ppppppplVar20,&ppppppuStack_3e0);
      }
      return ppppppplVar20;
    }
    lVar22 = param_2[3];
    ppppppplVar20 = (long *******)*plVar23;
    __ZNSt3__15mutex4lockEv(ppppppplVar20);
    func_0x00010ad17c50(plVar23[2],(int)lVar22);
    __ZNSt3__15mutex6unlockEv(ppppppplVar20);
  }
  return ppppppplVar20;
}



/* Entry: 10a771e08; end: 10a771e8b;  */

long ******* FUN_10a771e08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *******ppppppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  long *******ppppppplVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_3f0;
  long ******pppppplStack_3e8;
  undefined8 ******ppppppuStack_3d8;
  undefined1 uStack_3c9;
  undefined8 ******ppppppuStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  long ******pppppplStack_3a8;
  undefined8 ******ppppppuStack_3a0;
  code *pcStack_398;
  long ******apppppplStack_388 [2];
  char cStack_371;
  undefined8 ******ppppppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  char cStack_351;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined *puStack_340;
  long *plStack_338;
  undefined8 ******ppppppuStack_330;
  code *pcStack_328;
  undefined8 ******ppppppuStack_318;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  undefined8 ******ppppppuStack_2c8;
  undefined8 ******ppppppuStack_290;
  code *pcStack_288;
  undefined8 ******ppppppuStack_278;
  undefined8 ******ppppppuStack_240;
  code *pcStack_238;
  undefined8 ******ppppppuStack_228;
  undefined8 ******ppppppuStack_1f0;
  code *pcStack_1e8;
  undefined8 ******ppppppuStack_1d8;
  undefined1 ******ppppppuStack_1a0;
  code *pcStack_198;
  undefined8 *****pppppuStack_188;
  undefined1 *****pppppuStack_150;
  code *pcStack_148;
  undefined8 ****ppppuStack_138;
  undefined1 ****ppppuStack_110;
  code *pcStack_108;
  undefined8 ***pppuStack_f8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar24 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17c98(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a771e8c;
  puVar24 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppuVar14 = &puStack_78;
  puStack_78 = puVar25;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    uVar22 = *puVar24;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar21 = (long *******)puVar24[2];
    func_0x00010ad17d70(ppppppplVar21,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_88 = FUN_10a771f18;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppuVar15 = &ppuStack_b8;
  ppuStack_b8 = ppuVar14;
  ppuStack_90 = &puStack_50;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17ce0(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_c8 = FUN_10a771f9c;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppuVar16 = &pppuStack_f8;
  pppuStack_f8 = pppuVar15;
  pppuStack_d0 = &ppuStack_90;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17d28(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_108 = FUN_10a772020;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppuVar17 = &ppppuStack_138;
  ppppuStack_138 = ppppuVar16;
  ppppuStack_110 = &pppuStack_d0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar21 = (long *******)puVar25[2];
    func_0x00010ad17db8(ppppppplVar21,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_148 = FUN_10a7720ac;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppppuVar18 = &pppppuStack_188;
  pppppuStack_188 = pppppuVar17;
  pppppuStack_150 = &ppppuStack_110;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17e00(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_198 = FUN_10a772140;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar19 = &ppppppuStack_1d8;
  uVar22 = param_1;
  ppppppuStack_1d8 = ppppppuVar18;
  ppppppuStack_1a0 = &pppppuStack_150;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17e48(param_1,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_1e8 = FUN_10a7721d4;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar20 = &ppppppuStack_228;
  ppppppuStack_228 = pppppppuVar19;
  ppppppuStack_1f0 = &ppppppuStack_1a0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17ea0(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_238 = FUN_10a772268;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar19 = &ppppppuStack_278;
  ppppppuStack_278 = pppppppuVar20;
  ppppppuStack_240 = &ppppppuStack_1f0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17ee8(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_288 = FUN_10a7722fc;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar20 = &ppppppuStack_2c8;
  uVar28 = uVar22;
  ppppppuStack_2c8 = pppppppuVar19;
  ppppppuStack_290 = &ppppppuStack_240;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f30(uVar22,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_2d8 = FUN_10a772390;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar19 = &ppppppuStack_318;
  uVar22 = param_4;
  ppppppuStack_318 = pppppppuVar20;
  ppppppuStack_2e0 = &ppppppuStack_290;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f88(uVar28,puVar24[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  plVar8 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar6);
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_328 = FUN_10a77242c;
  plVar10 = plVar9 + 9;
  ppppppuStack_370 = pppppppuVar19;
  puStack_350 = puVar24;
  puStack_348 = puVar25;
  puStack_340 = puVar6;
  plStack_338 = plVar8;
  ppppppuStack_330 = &ppppppuStack_2e0;
  func_0x00010a7ab484(plVar10,&ppppppuStack_370);
  if (plVar10 == (long *)0x0) {
    lVar23 = *plVar9;
    ppppppplVar21 = apppppplStack_388;
    func_0x000107c2b054(ppppppplVar21,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar21 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(&uStack_368,&UNK_10f6750f2);
      FUN_10a76bdb0(ppppppplVar21,apppppplStack_388,&uStack_368);
      if (cStack_351 < '\0') {
        ppppppplVar21 = (long *******)CONCAT44(uStack_364,uStack_368);
        __ZdlPv(ppppppplVar21);
      }
    }
    if (cStack_371 < '\0') {
      __ZdlPv(apppppplStack_388[0]);
      ppppppplVar21 = (long *******)apppppplStack_388[0];
    }
  }
  else {
    puVar25 = (undefined8 *)plVar9[2];
    plVar8 = plVar9 + 9;
    pppppppuVar19 = &ppppppuStack_370;
    func_0x00010a7ab3ac();
    if (plVar8 == (long *)0x0) {
      ppppppplVar21 = (long *******)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_351 < '\0') {
        __ZdlPv(CONCAT44(uStack_364,uStack_368));
      }
      if (cStack_371 < '\0') {
        __ZdlPv(apppppplStack_388[0]);
      }
      ppppppplVar11 = ppppppplVar21;
      __Unwind_Resume();
      pcStack_398 = FUN_10a772568;
      if (pppppppuVar19 != (undefined8 *******)0x0) {
        pppplVar12 = (*ppppppplVar11)[0x20][0x39];
        ppppppuStack_3d8 = pppppppuVar19;
        puStack_3c0 = puVar24;
        puStack_3b8 = puVar25;
        puStack_3b0 = puVar6;
        pppppplStack_3a8 = (long ******)ppppppplVar21;
        ppppppuStack_3a0 = &ppppppuStack_330;
        (*(code *)(*pppplVar12)[0x13])();
        pppppplStack_3e8 = (long ******)pppplVar12[1];
        pplStack_3f0 = (long **)*pppplVar12;
        if (pppplVar12[1] != (long ***)0x0) {
          ppplVar1 = pppplVar12[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
            if (bVar5) {
              *ppplVar1 = (long **)((long)*ppplVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppplVar27 = ppppppplVar11[2];
        ppppplVar26 = *pppppplVar27;
        __ZNSt3__15mutex4lockEv(ppppplVar26);
        ppppplVar13 = pppppplVar27[2];
        FUN_10ad18048(ppppplVar13,&pplStack_3f0,uVar22,*(undefined1 *)(ppppppplVar11 + 1));
        __ZNSt3__15mutex6unlockEv(ppppplVar26);
        ppppppuStack_3c8 = &ppppppuStack_3d8;
        ppppppplVar11 = ppppppplVar11 + 9;
        FUN_10a7ab750(ppppppplVar11,&ppppppuStack_3d8,&UNK_10dd5b8f9,&ppppppuStack_3c8,&uStack_3c9);
        ppppppplVar21 = (long *******)pppppplStack_3e8;
        *(int *)(ppppppplVar11 + 3) = (int)ppppplVar13;
        if ((long *******)pppppplStack_3e8 != (long *******)0x0) {
          ppppppplVar2 = (long *******)(pppppplStack_3e8 + 1);
          do {
            pppppplVar27 = *ppppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
            if (bVar5) {
              *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar27 == (long ******)0x0) {
            (*(code *)(*pppppplStack_3e8)[2])(pppppplStack_3e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar21);
            ppppppplVar11 = ppppppplVar21;
          }
        }
      }
      return ppppppplVar11;
    }
    lVar23 = plVar8[3];
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    uStack_368 = (int)lVar23;
    FUN_10ad18548(puVar25[2] + 0x10,&uStack_368);
    __ZNSt3__15mutex6unlockEv(uVar22);
    ppppppplVar21 = (long *******)(plVar9 + 9);
    FUN_10a7ab55c(ppppppplVar21,&ppppppuStack_370);
  }
  return ppppppplVar21;
}



/* Entry: 10a771e8c; end: 10a771f17;  */

long ******* FUN_10a771e8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *******ppppppplVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  undefined8 **ppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_3b0;
  long ******pppppplStack_3a8;
  undefined8 ******ppppppuStack_398;
  undefined1 uStack_389;
  undefined8 ******ppppppuStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  long ******pppppplStack_368;
  undefined8 ******ppppppuStack_360;
  code *pcStack_358;
  long ******apppppplStack_348 [2];
  char cStack_331;
  undefined8 ******ppppppuStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  char cStack_311;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined *puStack_300;
  long *plStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  code *pcStack_2e8;
  undefined8 ******ppppppuStack_2d8;
  undefined8 ******ppppppuStack_2a0;
  code *pcStack_298;
  undefined8 ******ppppppuStack_288;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ******ppppppuStack_238;
  undefined8 ******ppppppuStack_200;
  code *pcStack_1f8;
  undefined8 ******ppppppuStack_1e8;
  undefined1 ******ppppppuStack_1b0;
  code *pcStack_1a8;
  undefined8 *****pppppuStack_198;
  undefined1 *****pppppuStack_160;
  code *pcStack_158;
  undefined8 ****ppppuStack_148;
  undefined1 ****ppppuStack_110;
  code *pcStack_108;
  undefined8 ***pppuStack_f8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar24 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab484();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar22 = *puVar24;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar6 = (long *******)puVar24[2];
    func_0x00010ad17d70(ppppppplVar6,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a771f18;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppuVar15 = &puStack_78;
  puStack_78 = puVar25;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17ce0(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_88 = FUN_10a771f9c;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppuVar16 = &ppuStack_b8;
  ppuStack_b8 = ppuVar15;
  ppuStack_90 = &puStack_50;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17d28(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_c8 = FUN_10a772020;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppppuVar17 = &pppuStack_f8;
  pppuStack_f8 = pppuVar16;
  pppuStack_d0 = &ppuStack_90;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar6 = (long *******)puVar25[2];
    func_0x00010ad17db8(ppppppplVar6,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_108 = FUN_10a7720ac;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppuVar18 = &ppppuStack_148;
  ppppuStack_148 = ppppuVar17;
  ppppuStack_110 = &pppuStack_d0;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17e00(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_158 = FUN_10a772140;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppppppuVar19 = &pppppuStack_198;
  uVar22 = param_1;
  pppppuStack_198 = pppppuVar18;
  pppppuStack_160 = &ppppuStack_110;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17e48(param_1,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_1a8 = FUN_10a7721d4;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar20 = &ppppppuStack_1e8;
  ppppppuStack_1e8 = ppppppuVar19;
  ppppppuStack_1b0 = &pppppuStack_160;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17ea0(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_1f8 = FUN_10a772268;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar21 = &ppppppuStack_238;
  ppppppuStack_238 = pppppppuVar20;
  ppppppuStack_200 = &ppppppuStack_1b0;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17ee8(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_248 = FUN_10a7722fc;
  puVar25 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar20 = &ppppppuStack_288;
  uVar28 = uVar22;
  ppppppuStack_288 = pppppppuVar21;
  ppppppuStack_250 = &ppppppuStack_200;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17f30(uVar22,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_298 = FUN_10a772390;
  puVar24 = *(undefined8 **)(puVar8 + 0x10);
  puVar8 = puVar8 + 0x48;
  pppppppuVar21 = &ppppppuStack_2d8;
  uVar22 = param_4;
  ppppppuStack_2d8 = pppppppuVar20;
  ppppppuStack_2a0 = &ppppppuStack_250;
  func_0x00010a7ab3ac();
  if (puVar8 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar8 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17f88(uVar28,puVar24[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  plVar9 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar7);
  plVar10 = plVar9;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10a77242c;
  plVar11 = plVar10 + 9;
  ppppppuStack_330 = pppppppuVar21;
  puStack_310 = puVar24;
  puStack_308 = puVar25;
  puStack_300 = puVar7;
  plStack_2f8 = plVar9;
  ppppppuStack_2f0 = &ppppppuStack_2a0;
  func_0x00010a7ab484(plVar11,&ppppppuStack_330);
  if (plVar11 == (long *)0x0) {
    lVar23 = *plVar10;
    ppppppplVar6 = apppppplStack_348;
    func_0x000107c2b054(ppppppplVar6,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar6 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(&uStack_328,&UNK_10f6750f2);
      FUN_10a76bdb0(ppppppplVar6,apppppplStack_348,&uStack_328);
      if (cStack_311 < '\0') {
        ppppppplVar6 = (long *******)CONCAT44(uStack_324,uStack_328);
        __ZdlPv(ppppppplVar6);
      }
    }
    if (cStack_331 < '\0') {
      __ZdlPv(apppppplStack_348[0]);
      ppppppplVar6 = (long *******)apppppplStack_348[0];
    }
  }
  else {
    puVar25 = (undefined8 *)plVar10[2];
    plVar9 = plVar10 + 9;
    pppppppuVar20 = &ppppppuStack_330;
    func_0x00010a7ab3ac();
    if (plVar9 == (long *)0x0) {
      ppppppplVar6 = (long *******)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_311 < '\0') {
        __ZdlPv(CONCAT44(uStack_324,uStack_328));
      }
      if (cStack_331 < '\0') {
        __ZdlPv(apppppplStack_348[0]);
      }
      ppppppplVar12 = ppppppplVar6;
      __Unwind_Resume();
      pcStack_358 = FUN_10a772568;
      if (pppppppuVar20 != (undefined8 *******)0x0) {
        pppplVar13 = (*ppppppplVar12)[0x20][0x39];
        ppppppuStack_398 = pppppppuVar20;
        puStack_380 = puVar24;
        puStack_378 = puVar25;
        puStack_370 = puVar7;
        pppppplStack_368 = (long ******)ppppppplVar6;
        ppppppuStack_360 = &ppppppuStack_2f0;
        (*(code *)(*pppplVar13)[0x13])();
        pppppplStack_3a8 = (long ******)pppplVar13[1];
        pplStack_3b0 = (long **)*pppplVar13;
        if (pppplVar13[1] != (long ***)0x0) {
          ppplVar1 = pppplVar13[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
            if (bVar5) {
              *ppplVar1 = (long **)((long)*ppplVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppplVar27 = ppppppplVar12[2];
        ppppplVar26 = *pppppplVar27;
        __ZNSt3__15mutex4lockEv(ppppplVar26);
        ppppplVar14 = pppppplVar27[2];
        FUN_10ad18048(ppppplVar14,&pplStack_3b0,uVar22,*(undefined1 *)(ppppppplVar12 + 1));
        __ZNSt3__15mutex6unlockEv(ppppplVar26);
        ppppppuStack_388 = &ppppppuStack_398;
        ppppppplVar12 = ppppppplVar12 + 9;
        FUN_10a7ab750(ppppppplVar12,&ppppppuStack_398,&UNK_10dd5b8f9,&ppppppuStack_388,&uStack_389);
        ppppppplVar6 = (long *******)pppppplStack_3a8;
        *(int *)(ppppppplVar12 + 3) = (int)ppppplVar14;
        if ((long *******)pppppplStack_3a8 != (long *******)0x0) {
          ppppppplVar2 = (long *******)(pppppplStack_3a8 + 1);
          do {
            pppppplVar27 = *ppppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
            if (bVar5) {
              *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar27 == (long ******)0x0) {
            (*(code *)(*pppppplStack_3a8)[2])(pppppplStack_3a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar6);
            ppppppplVar12 = ppppppplVar6;
          }
        }
      }
      return ppppppplVar12;
    }
    lVar23 = plVar9[3];
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    uStack_328 = (int)lVar23;
    FUN_10ad18548(puVar25[2] + 0x10,&uStack_328);
    __ZNSt3__15mutex6unlockEv(uVar22);
    ppppppplVar6 = (long *******)(plVar10 + 9);
    FUN_10a7ab55c(ppppppplVar6,&ppppppuStack_330);
  }
  return ppppppplVar6;
}



/* Entry: 10a771f18; end: 10a771f9b;  */

long ******* FUN_10a771f18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *******ppppppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  long *******ppppppplVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_370;
  long ******pppppplStack_368;
  undefined8 ******ppppppuStack_358;
  undefined1 uStack_349;
  undefined8 ******ppppppuStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  long ******pppppplStack_328;
  undefined8 ******ppppppuStack_320;
  code *pcStack_318;
  long ******apppppplStack_308 [2];
  char cStack_2f1;
  undefined8 ******ppppppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  char cStack_2d1;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined *puStack_2c0;
  long *plStack_2b8;
  undefined8 ******ppppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 ******ppppppuStack_298;
  undefined8 ******ppppppuStack_260;
  code *pcStack_258;
  undefined8 ******ppppppuStack_248;
  undefined8 ******ppppppuStack_210;
  code *pcStack_208;
  undefined8 ******ppppppuStack_1f8;
  undefined1 ******ppppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *****pppppuStack_1a8;
  undefined1 *****pppppuStack_170;
  code *pcStack_168;
  undefined8 ****ppppuStack_158;
  undefined1 ****ppppuStack_120;
  code *pcStack_118;
  undefined8 ***pppuStack_108;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar24 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17ce0(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a771f9c;
  puVar24 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppuVar14 = &puStack_78;
  puStack_78 = puVar25;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17d28(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_88 = FUN_10a772020;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppuVar15 = &ppuStack_b8;
  ppuStack_b8 = ppuVar14;
  ppuStack_90 = &puStack_50;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar21 = (long *******)puVar25[2];
    func_0x00010ad17db8(ppppppplVar21,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_c8 = FUN_10a7720ac;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppuVar16 = &pppuStack_108;
  pppuStack_108 = pppuVar15;
  pppuStack_d0 = &ppuStack_90;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17e00(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_118 = FUN_10a772140;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppuVar17 = &ppppuStack_158;
  uVar22 = param_1;
  ppppuStack_158 = ppppuVar16;
  ppppuStack_120 = &pppuStack_d0;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17e48(param_1,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_168 = FUN_10a7721d4;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppppuVar18 = &pppppuStack_1a8;
  pppppuStack_1a8 = pppppuVar17;
  pppppuStack_170 = &ppppuStack_120;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17ea0(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_1b8 = FUN_10a772268;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar19 = &ppppppuStack_1f8;
  ppppppuStack_1f8 = ppppppuVar18;
  ppppppuStack_1c0 = &pppppuStack_170;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17ee8(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_208 = FUN_10a7722fc;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar20 = &ppppppuStack_248;
  uVar28 = uVar22;
  ppppppuStack_248 = pppppppuVar19;
  ppppppuStack_210 = &ppppppuStack_1c0;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f30(uVar22,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_258 = FUN_10a772390;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar19 = &ppppppuStack_298;
  uVar22 = param_4;
  ppppppuStack_298 = pppppppuVar20;
  ppppppuStack_260 = &ppppppuStack_210;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f88(uVar28,puVar24[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  plVar8 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar6);
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a77242c;
  plVar10 = plVar9 + 9;
  ppppppuStack_2f0 = pppppppuVar19;
  puStack_2d0 = puVar24;
  puStack_2c8 = puVar25;
  puStack_2c0 = puVar6;
  plStack_2b8 = plVar8;
  ppppppuStack_2b0 = &ppppppuStack_260;
  func_0x00010a7ab484(plVar10,&ppppppuStack_2f0);
  if (plVar10 == (long *)0x0) {
    lVar23 = *plVar9;
    ppppppplVar21 = apppppplStack_308;
    func_0x000107c2b054(ppppppplVar21,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar21 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(&uStack_2e8,&UNK_10f6750f2);
      FUN_10a76bdb0(ppppppplVar21,apppppplStack_308,&uStack_2e8);
      if (cStack_2d1 < '\0') {
        ppppppplVar21 = (long *******)CONCAT44(uStack_2e4,uStack_2e8);
        __ZdlPv(ppppppplVar21);
      }
    }
    if (cStack_2f1 < '\0') {
      __ZdlPv(apppppplStack_308[0]);
      ppppppplVar21 = (long *******)apppppplStack_308[0];
    }
  }
  else {
    puVar25 = (undefined8 *)plVar9[2];
    plVar8 = plVar9 + 9;
    pppppppuVar19 = &ppppppuStack_2f0;
    func_0x00010a7ab3ac();
    if (plVar8 == (long *)0x0) {
      ppppppplVar21 = (long *******)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_2d1 < '\0') {
        __ZdlPv(CONCAT44(uStack_2e4,uStack_2e8));
      }
      if (cStack_2f1 < '\0') {
        __ZdlPv(apppppplStack_308[0]);
      }
      ppppppplVar11 = ppppppplVar21;
      __Unwind_Resume();
      pcStack_318 = FUN_10a772568;
      if (pppppppuVar19 != (undefined8 *******)0x0) {
        pppplVar12 = (*ppppppplVar11)[0x20][0x39];
        ppppppuStack_358 = pppppppuVar19;
        puStack_340 = puVar24;
        puStack_338 = puVar25;
        puStack_330 = puVar6;
        pppppplStack_328 = (long ******)ppppppplVar21;
        ppppppuStack_320 = &ppppppuStack_2b0;
        (*(code *)(*pppplVar12)[0x13])();
        pppppplStack_368 = (long ******)pppplVar12[1];
        pplStack_370 = (long **)*pppplVar12;
        if (pppplVar12[1] != (long ***)0x0) {
          ppplVar1 = pppplVar12[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
            if (bVar5) {
              *ppplVar1 = (long **)((long)*ppplVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppplVar27 = ppppppplVar11[2];
        ppppplVar26 = *pppppplVar27;
        __ZNSt3__15mutex4lockEv(ppppplVar26);
        ppppplVar13 = pppppplVar27[2];
        FUN_10ad18048(ppppplVar13,&pplStack_370,uVar22,*(undefined1 *)(ppppppplVar11 + 1));
        __ZNSt3__15mutex6unlockEv(ppppplVar26);
        ppppppuStack_348 = &ppppppuStack_358;
        ppppppplVar11 = ppppppplVar11 + 9;
        FUN_10a7ab750(ppppppplVar11,&ppppppuStack_358,&UNK_10dd5b8f9,&ppppppuStack_348,&uStack_349);
        ppppppplVar21 = (long *******)pppppplStack_368;
        *(int *)(ppppppplVar11 + 3) = (int)ppppplVar13;
        if ((long *******)pppppplStack_368 != (long *******)0x0) {
          ppppppplVar2 = (long *******)(pppppplStack_368 + 1);
          do {
            pppppplVar27 = *ppppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
            if (bVar5) {
              *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar27 == (long ******)0x0) {
            (*(code *)(*pppppplStack_368)[2])(pppppplStack_368);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar21);
            ppppppplVar11 = ppppppplVar21;
          }
        }
      }
      return ppppppplVar11;
    }
    lVar23 = plVar8[3];
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    uStack_2e8 = (int)lVar23;
    FUN_10ad18548(puVar25[2] + 0x10,&uStack_2e8);
    __ZNSt3__15mutex6unlockEv(uVar22);
    ppppppplVar21 = (long *******)(plVar9 + 9);
    FUN_10a7ab55c(ppppppplVar21,&ppppppuStack_2f0);
  }
  return ppppppplVar21;
}



/* Entry: 10a771f9c; end: 10a77201f;  */

long ******* FUN_10a771f9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *******ppppppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  long *******ppppppplVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  long **pplStack_330;
  long ******pppppplStack_328;
  undefined8 ******ppppppuStack_318;
  undefined1 uStack_309;
  undefined8 ******ppppppuStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long ******pppppplStack_2e8;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  long ******apppppplStack_2c8 [2];
  char cStack_2b1;
  undefined8 ******ppppppuStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  char cStack_291;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  long *plStack_278;
  undefined8 ******ppppppuStack_270;
  code *pcStack_268;
  undefined8 ******ppppppuStack_258;
  undefined8 ******ppppppuStack_220;
  code *pcStack_218;
  undefined8 ******ppppppuStack_208;
  undefined1 ******ppppppuStack_1d0;
  code *pcStack_1c8;
  undefined8 *****pppppuStack_1b8;
  undefined1 *****pppppuStack_180;
  code *pcStack_178;
  undefined8 ****ppppuStack_168;
  undefined1 ****ppppuStack_130;
  code *pcStack_128;
  undefined8 ***pppuStack_118;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_c8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar24 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar25 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17d28(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a772020;
  puVar24 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppuVar14 = &puStack_78;
  puStack_78 = puVar25;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    uVar22 = *puVar24;
    __ZNSt3__15mutex4lockEv(uVar22);
    ppppppplVar21 = (long *******)puVar24[2];
    func_0x00010ad17db8(ppppppplVar21,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar22);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_88 = FUN_10a7720ac;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppuVar15 = &ppuStack_c8;
  ppuStack_c8 = ppuVar14;
  ppuStack_90 = &puStack_50;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17e00(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_d8 = FUN_10a772140;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppuVar16 = &pppuStack_118;
  uVar22 = param_1;
  pppuStack_118 = pppuVar15;
  pppuStack_e0 = &ppuStack_90;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17e48(param_1,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_128 = FUN_10a7721d4;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppuVar17 = &ppppuStack_168;
  ppppuStack_168 = ppppuVar16;
  ppppuStack_130 = &pppuStack_e0;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17ea0(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_178 = FUN_10a772268;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  ppppppuVar18 = &pppppuStack_1b8;
  pppppuStack_1b8 = pppppuVar17;
  pppppuStack_180 = &ppppuStack_130;
  func_0x00010a7ab484();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    func_0x00010ad17ee8(puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_1c8 = FUN_10a7722fc;
  puVar25 = *(undefined8 **)(puVar6 + 0x10);
  puVar6 = puVar6 + 0x48;
  pppppppuVar19 = &ppppppuStack_208;
  uVar28 = uVar22;
  ppppppuStack_208 = ppppppuVar18;
  ppppppuStack_1d0 = &pppppuStack_180;
  func_0x00010a7ab3ac();
  if (puVar6 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar6 + 0x18);
    ppppppplVar21 = (long *******)*puVar25;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f30(uVar22,puVar25[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  puVar6 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_218 = FUN_10a772390;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppppuVar20 = &ppppppuStack_258;
  uVar22 = param_4;
  ppppppuStack_258 = pppppppuVar19;
  ppppppuStack_220 = &ppppppuStack_1d0;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar21 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar21);
    FUN_10ad17f88(uVar28,puVar24[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar21);
    return ppppppplVar21;
  }
  plVar8 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar6);
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_268 = FUN_10a77242c;
  plVar10 = plVar9 + 9;
  ppppppuStack_2b0 = pppppppuVar20;
  puStack_290 = puVar24;
  puStack_288 = puVar25;
  puStack_280 = puVar6;
  plStack_278 = plVar8;
  ppppppuStack_270 = &ppppppuStack_220;
  func_0x00010a7ab484(plVar10,&ppppppuStack_2b0);
  if (plVar10 == (long *)0x0) {
    lVar23 = *plVar9;
    ppppppplVar21 = apppppplStack_2c8;
    func_0x000107c2b054(ppppppplVar21,&UNK_10f6750c5);
    if (lVar23 != 0) {
      ppppppplVar21 = *(long ********)(lVar23 + 0x8d8);
      func_0x000107c2b054(&uStack_2a8,&UNK_10f6750f2);
      FUN_10a76bdb0(ppppppplVar21,apppppplStack_2c8,&uStack_2a8);
      if (cStack_291 < '\0') {
        ppppppplVar21 = (long *******)CONCAT44(uStack_2a4,uStack_2a8);
        __ZdlPv(ppppppplVar21);
      }
    }
    if (cStack_2b1 < '\0') {
      __ZdlPv(apppppplStack_2c8[0]);
      ppppppplVar21 = (long *******)apppppplStack_2c8[0];
    }
  }
  else {
    puVar25 = (undefined8 *)plVar9[2];
    plVar8 = plVar9 + 9;
    pppppppuVar19 = &ppppppuStack_2b0;
    func_0x00010a7ab3ac();
    if (plVar8 == (long *)0x0) {
      ppppppplVar21 = (long *******)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_291 < '\0') {
        __ZdlPv(CONCAT44(uStack_2a4,uStack_2a8));
      }
      if (cStack_2b1 < '\0') {
        __ZdlPv(apppppplStack_2c8[0]);
      }
      ppppppplVar11 = ppppppplVar21;
      __Unwind_Resume();
      pcStack_2d8 = FUN_10a772568;
      if (pppppppuVar19 != (undefined8 *******)0x0) {
        pppplVar12 = (*ppppppplVar11)[0x20][0x39];
        ppppppuStack_318 = pppppppuVar19;
        puStack_300 = puVar24;
        puStack_2f8 = puVar25;
        puStack_2f0 = puVar6;
        pppppplStack_2e8 = (long ******)ppppppplVar21;
        ppppppuStack_2e0 = &ppppppuStack_270;
        (*(code *)(*pppplVar12)[0x13])();
        pppppplStack_328 = (long ******)pppplVar12[1];
        pplStack_330 = (long **)*pppplVar12;
        if (pppplVar12[1] != (long ***)0x0) {
          ppplVar1 = pppplVar12[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
            if (bVar5) {
              *ppplVar1 = (long **)((long)*ppplVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppplVar27 = ppppppplVar11[2];
        ppppplVar26 = *pppppplVar27;
        __ZNSt3__15mutex4lockEv(ppppplVar26);
        ppppplVar13 = pppppplVar27[2];
        FUN_10ad18048(ppppplVar13,&pplStack_330,uVar22,*(undefined1 *)(ppppppplVar11 + 1));
        __ZNSt3__15mutex6unlockEv(ppppplVar26);
        ppppppuStack_308 = &ppppppuStack_318;
        ppppppplVar11 = ppppppplVar11 + 9;
        FUN_10a7ab750(ppppppplVar11,&ppppppuStack_318,&UNK_10dd5b8f9,&ppppppuStack_308,&uStack_309);
        ppppppplVar21 = (long *******)pppppplStack_328;
        *(int *)(ppppppplVar11 + 3) = (int)ppppplVar13;
        if ((long *******)pppppplStack_328 != (long *******)0x0) {
          ppppppplVar2 = (long *******)(pppppplStack_328 + 1);
          do {
            pppppplVar27 = *ppppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
            if (bVar5) {
              *ppppppplVar2 = (long ******)((long)pppppplVar27 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar27 == (long ******)0x0) {
            (*(code *)(*pppppplStack_328)[2])(pppppplStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar21);
            ppppppplVar11 = ppppppplVar21;
          }
        }
      }
      return ppppppplVar11;
    }
    lVar23 = plVar8[3];
    uVar22 = *puVar25;
    __ZNSt3__15mutex4lockEv(uVar22);
    uStack_2a8 = (int)lVar23;
    FUN_10ad18548(puVar25[2] + 0x10,&uStack_2a8);
    __ZNSt3__15mutex6unlockEv(uVar22);
    ppppppplVar21 = (long *******)(plVar9 + 9);
    FUN_10a7ab55c(ppppppplVar21,&ppppppuStack_2b0);
  }
  return ppppppplVar21;
}



/* Entry: 10a772020; end: 10a7720ab;  */

long ******* FUN_10a772020(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long ***ppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *******ppppppplVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  undefined8 **ppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *****ppppplVar25;
  long ******pppppplVar26;
  undefined8 uVar27;
  long **pplStack_2f0;
  long ******pppppplStack_2e8;
  undefined8 ******ppppppuStack_2d8;
  undefined1 uStack_2c9;
  undefined8 ******ppppppuStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  long ******pppppplStack_2a8;
  undefined8 ******ppppppuStack_2a0;
  code *pcStack_298;
  long ******apppppplStack_288 [2];
  char cStack_271;
  undefined8 ******ppppppuStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  char cStack_251;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  long *plStack_238;
  undefined8 ******ppppppuStack_230;
  code *pcStack_228;
  undefined8 ******ppppppuStack_218;
  undefined1 ******ppppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 *****pppppuStack_1c8;
  undefined1 *****pppppuStack_190;
  code *pcStack_188;
  undefined8 ****ppppuStack_178;
  undefined1 ****ppppuStack_140;
  code *pcStack_138;
  undefined8 ***pppuStack_128;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined8 **ppuStack_d8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *puStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  puVar23 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar24 = &uStack_38;
  uStack_38 = param_3;
  func_0x00010a7ab484();
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar21 = *puVar23;
    __ZNSt3__15mutex4lockEv(uVar21);
    ppppppplVar6 = (long *******)puVar23[2];
    func_0x00010ad17db8(ppppppplVar6,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar21);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_48 = FUN_10a7720ac;
  puVar23 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppuVar15 = &puStack_88;
  puStack_88 = puVar24;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar23;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17e00(puVar23[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_98 = FUN_10a772140;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppuVar16 = &ppuStack_d8;
  uVar21 = param_1;
  ppuStack_d8 = ppuVar15;
  ppuStack_a0 = &puStack_50;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17e48(param_1,puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_e8 = FUN_10a7721d4;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppppuVar17 = &pppuStack_128;
  pppuStack_128 = pppuVar16;
  pppuStack_f0 = &ppuStack_a0;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17ea0(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_138 = FUN_10a772268;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  pppppuVar18 = &ppppuStack_178;
  ppppuStack_178 = ppppuVar17;
  ppppuStack_140 = &pppuStack_f0;
  func_0x00010a7ab484();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    func_0x00010ad17ee8(puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_188 = FUN_10a7722fc;
  puVar24 = *(undefined8 **)(puVar7 + 0x10);
  puVar7 = puVar7 + 0x48;
  ppppppuVar19 = &pppppuStack_1c8;
  uVar27 = uVar21;
  pppppuStack_1c8 = pppppuVar18;
  pppppuStack_190 = &ppppuStack_140;
  func_0x00010a7ab3ac();
  if (puVar7 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar7 + 0x18);
    ppppppplVar6 = (long *******)*puVar24;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17f30(uVar21,puVar24[2],uVar3);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  puVar7 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10a772390;
  puVar23 = *(undefined8 **)(puVar8 + 0x10);
  puVar8 = puVar8 + 0x48;
  pppppppuVar20 = &ppppppuStack_218;
  uVar21 = param_4;
  ppppppuStack_218 = ppppppuVar19;
  ppppppuStack_1e0 = &pppppuStack_190;
  func_0x00010a7ab3ac();
  if (puVar8 != (undefined *)0x0) {
    uVar3 = *(undefined4 *)(puVar8 + 0x18);
    ppppppplVar6 = (long *******)*puVar23;
    __ZNSt3__15mutex4lockEv(ppppppplVar6);
    FUN_10ad17f88(uVar27,puVar23[2],uVar3,param_4);
    __ZNSt3__15mutex6unlockEv(ppppppplVar6);
    return ppppppplVar6;
  }
  plVar9 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar7);
  plVar10 = plVar9;
  __Unwind_Resume();
  pcStack_228 = FUN_10a77242c;
  plVar11 = plVar10 + 9;
  ppppppuStack_270 = pppppppuVar20;
  puStack_250 = puVar23;
  puStack_248 = puVar24;
  puStack_240 = puVar7;
  plStack_238 = plVar9;
  ppppppuStack_230 = &ppppppuStack_1e0;
  func_0x00010a7ab484(plVar11,&ppppppuStack_270);
  if (plVar11 == (long *)0x0) {
    lVar22 = *plVar10;
    ppppppplVar6 = apppppplStack_288;
    func_0x000107c2b054(ppppppplVar6,&UNK_10f6750c5);
    if (lVar22 != 0) {
      ppppppplVar6 = *(long ********)(lVar22 + 0x8d8);
      func_0x000107c2b054(&uStack_268,&UNK_10f6750f2);
      FUN_10a76bdb0(ppppppplVar6,apppppplStack_288,&uStack_268);
      if (cStack_251 < '\0') {
        ppppppplVar6 = (long *******)CONCAT44(uStack_264,uStack_268);
        __ZdlPv(ppppppplVar6);
      }
    }
    if (cStack_271 < '\0') {
      __ZdlPv(apppppplStack_288[0]);
      ppppppplVar6 = (long *******)apppppplStack_288[0];
    }
  }
  else {
    puVar24 = (undefined8 *)plVar10[2];
    plVar9 = plVar10 + 9;
    pppppppuVar20 = &ppppppuStack_270;
    func_0x00010a7ab3ac();
    if (plVar9 == (long *)0x0) {
      ppppppplVar6 = (long *******)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_251 < '\0') {
        __ZdlPv(CONCAT44(uStack_264,uStack_268));
      }
      if (cStack_271 < '\0') {
        __ZdlPv(apppppplStack_288[0]);
      }
      ppppppplVar12 = ppppppplVar6;
      __Unwind_Resume();
      pcStack_298 = FUN_10a772568;
      if (pppppppuVar20 != (undefined8 *******)0x0) {
        pppplVar13 = (*ppppppplVar12)[0x20][0x39];
        ppppppuStack_2d8 = pppppppuVar20;
        puStack_2c0 = puVar23;
        puStack_2b8 = puVar24;
        puStack_2b0 = puVar7;
        pppppplStack_2a8 = (long ******)ppppppplVar6;
        ppppppuStack_2a0 = &ppppppuStack_230;
        (*(code *)(*pppplVar13)[0x13])();
        pppppplStack_2e8 = (long ******)pppplVar13[1];
        pplStack_2f0 = (long **)*pppplVar13;
        if (pppplVar13[1] != (long ***)0x0) {
          ppplVar1 = pppplVar13[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
            if (bVar5) {
              *ppplVar1 = (long **)((long)*ppplVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppplVar26 = ppppppplVar12[2];
        ppppplVar25 = *pppppplVar26;
        __ZNSt3__15mutex4lockEv(ppppplVar25);
        ppppplVar14 = pppppplVar26[2];
        FUN_10ad18048(ppppplVar14,&pplStack_2f0,uVar21,*(undefined1 *)(ppppppplVar12 + 1));
        __ZNSt3__15mutex6unlockEv(ppppplVar25);
        ppppppuStack_2c8 = &ppppppuStack_2d8;
        ppppppplVar12 = ppppppplVar12 + 9;
        FUN_10a7ab750(ppppppplVar12,&ppppppuStack_2d8,&UNK_10dd5b8f9,&ppppppuStack_2c8,&uStack_2c9);
        ppppppplVar6 = (long *******)pppppplStack_2e8;
        *(int *)(ppppppplVar12 + 3) = (int)ppppplVar14;
        if ((long *******)pppppplStack_2e8 != (long *******)0x0) {
          ppppppplVar2 = (long *******)(pppppplStack_2e8 + 1);
          do {
            pppppplVar26 = *ppppppplVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
            if (bVar5) {
              *ppppppplVar2 = (long ******)((long)pppppplVar26 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar26 == (long ******)0x0) {
            (*(code *)(*pppppplStack_2e8)[2])(pppppplStack_2e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar6);
            ppppppplVar12 = ppppppplVar6;
          }
        }
      }
      return ppppppplVar12;
    }
    lVar22 = plVar9[3];
    uVar21 = *puVar24;
    __ZNSt3__15mutex4lockEv(uVar21);
    uStack_268 = (int)lVar22;
    FUN_10ad18548(puVar24[2] + 0x10,&uStack_268);
    __ZNSt3__15mutex6unlockEv(uVar21);
    ppppppplVar6 = (long *******)(plVar10 + 9);
    FUN_10a7ab55c(ppppppplVar6,&ppppppuStack_270);
  }
  return ppppppplVar6;
}



/* Entry: 10a7720ac; end: 10a77213f;  */

long FUN_10a7720ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_2b0;
  long *plStack_2a8;
  undefined8 ***pppuStack_298;
  undefined1 uStack_289;
  undefined8 ***pppuStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long *plStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 ***pppuStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  char cStack_211;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  long *plStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 ***pppuStack_1d8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined8 ***pppuStack_138;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar16 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar17 = &uStack_48;
  uStack_48 = param_3;
  func_0x00010a7ab484();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    func_0x00010ad17e00(puVar16[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_58 = FUN_10a772140;
  puVar16 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppuVar10 = &puStack_98;
  lVar19 = param_1;
  puStack_98 = puVar17;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17e48(param_1,puVar16[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_a8 = FUN_10a7721d4;
  puVar17 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  pppuVar11 = &ppuStack_e8;
  ppuStack_e8 = ppuVar10;
  ppuStack_b0 = &puStack_60;
  func_0x00010a7ab484();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17ea0(puVar17[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_f8 = FUN_10a772268;
  puVar17 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppppuVar12 = &pppuStack_138;
  pppuStack_138 = pppuVar11;
  pppuStack_100 = &ppuStack_b0;
  func_0x00010a7ab484();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    func_0x00010ad17ee8(puVar17[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_148 = FUN_10a7722fc;
  puVar17 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppppuVar13 = &pppuStack_188;
  lVar14 = lVar19;
  pppuStack_188 = ppppuVar12;
  pppuStack_150 = &pppuStack_100;
  func_0x00010a7ab3ac();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17f30(lVar19,puVar17[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_198 = FUN_10a772390;
  puVar16 = *(undefined8 **)(puVar5 + 0x10);
  puVar5 = puVar5 + 0x48;
  ppppuVar12 = &pppuStack_1d8;
  uVar15 = param_4;
  lVar19 = lVar14;
  pppuStack_1d8 = ppppuVar13;
  pppuStack_1a0 = &pppuStack_150;
  func_0x00010a7ab3ac();
  if (puVar5 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar5 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17f88(lVar14,puVar16[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar14;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar4);
  plVar8 = plVar6;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10a77242c;
  plVar7 = plVar8 + 9;
  pppuStack_230 = ppppuVar12;
  puStack_210 = puVar16;
  puStack_208 = puVar17;
  puStack_200 = puVar4;
  plStack_1f8 = plVar6;
  pppuStack_1f0 = &pppuStack_1a0;
  func_0x00010a7ab484(plVar7,&pppuStack_230);
  if (plVar7 == (long *)0x0) {
    lVar14 = *plVar8;
    func_0x000107c2b054(auStack_248,&UNK_10f6750c5);
    if (lVar14 != 0) {
      uVar15 = *(undefined8 *)(lVar14 + 0x8d8);
      func_0x000107c2b054(&uStack_228,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar15,auStack_248,&uStack_228);
      if (cStack_211 < '\0') {
        __ZdlPv(CONCAT44(uStack_224,uStack_228));
      }
    }
    if (cStack_231 < '\0') {
      __ZdlPv(auStack_248[0]);
    }
  }
  else {
    puVar17 = (undefined8 *)plVar8[2];
    plVar6 = plVar8 + 9;
    ppppuVar12 = &pppuStack_230;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_211 < '\0') {
        __ZdlPv(CONCAT44(uStack_224,uStack_228));
      }
      if (cStack_231 < '\0') {
        __ZdlPv(auStack_248[0]);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      pcStack_258 = FUN_10a772568;
      if (ppppuVar12 != (undefined8 ****)0x0) {
        plVar8 = *(long **)(*(long *)(*plVar7 + 0x100) + 0x1c8);
        pppuStack_298 = ppppuVar12;
        puStack_280 = puVar16;
        puStack_278 = puVar17;
        puStack_270 = puVar4;
        plStack_268 = plVar6;
        pppuStack_260 = &pppuStack_1f0;
        (**(code **)(*plVar8 + 0x98))();
        plStack_2a8 = (long *)plVar8[1];
        lVar19 = *plVar8;
        if (plVar8[1] != 0) {
          plVar6 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar17 = (undefined8 *)plVar7[2];
        uVar18 = *puVar17;
        lStack_2b0 = lVar19;
        __ZNSt3__15mutex4lockEv(uVar18);
        uVar9 = puVar17[2];
        FUN_10ad18048(uVar9,&lStack_2b0,uVar15,(char)plVar7[1]);
        __ZNSt3__15mutex6unlockEv(uVar18);
        pppuStack_288 = &pppuStack_298;
        plVar7 = plVar7 + 9;
        FUN_10a7ab750(plVar7,&pppuStack_298,&UNK_10dd5b8f9,&pppuStack_288,&uStack_289);
        plVar6 = plStack_2a8;
        *(int *)(plVar7 + 3) = (int)uVar9;
        if (plStack_2a8 != (long *)0x0) {
          plVar7 = plStack_2a8 + 1;
          do {
            lVar14 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      return lVar19;
    }
    lVar14 = plVar6[3];
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    uStack_228 = (int)lVar14;
    FUN_10ad18548(puVar17[2] + 0x10,&uStack_228);
    __ZNSt3__15mutex6unlockEv(uVar15);
    FUN_10a7ab55c(plVar8 + 9,&pppuStack_230);
  }
  return lVar19;
}



/* Entry: 10a772140; end: 10a7721d3;  */

long FUN_10a772140(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_248;
  undefined1 uStack_239;
  undefined8 ***pppuStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  long *plStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 ***pppuStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  char cStack_1c1;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined8 ***pppuStack_138;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar16 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar17 = &uStack_48;
  lVar19 = param_1;
  uStack_48 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17e48(param_1,puVar16[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_58 = FUN_10a7721d4;
  puVar16 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppuVar10 = &puStack_98;
  puStack_98 = puVar17;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17ea0(puVar16[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_a8 = FUN_10a772268;
  puVar17 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  pppuVar11 = &ppuStack_e8;
  ppuStack_e8 = ppuVar10;
  ppuStack_b0 = &puStack_60;
  func_0x00010a7ab484();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    func_0x00010ad17ee8(puVar17[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_f8 = FUN_10a7722fc;
  puVar17 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppppuVar12 = &pppuStack_138;
  lVar14 = lVar19;
  pppuStack_138 = pppuVar11;
  pppuStack_100 = &ppuStack_b0;
  func_0x00010a7ab3ac();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17f30(lVar19,puVar17[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar19;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_10a772390;
  puVar16 = *(undefined8 **)(puVar5 + 0x10);
  puVar5 = puVar5 + 0x48;
  ppppuVar13 = &pppuStack_188;
  uVar15 = param_4;
  lVar19 = lVar14;
  pppuStack_188 = ppppuVar12;
  pppuStack_150 = &pppuStack_100;
  func_0x00010a7ab3ac();
  if (puVar5 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar5 + 0x18);
    uVar15 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar15);
    FUN_10ad17f88(lVar14,puVar16[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar15);
    return lVar14;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar4);
  plVar8 = plVar6;
  __Unwind_Resume();
  pcStack_198 = FUN_10a77242c;
  plVar7 = plVar8 + 9;
  pppuStack_1e0 = ppppuVar13;
  puStack_1c0 = puVar16;
  puStack_1b8 = puVar17;
  puStack_1b0 = puVar4;
  plStack_1a8 = plVar6;
  pppuStack_1a0 = &pppuStack_150;
  func_0x00010a7ab484(plVar7,&pppuStack_1e0);
  if (plVar7 == (long *)0x0) {
    lVar14 = *plVar8;
    func_0x000107c2b054(auStack_1f8,&UNK_10f6750c5);
    if (lVar14 != 0) {
      uVar15 = *(undefined8 *)(lVar14 + 0x8d8);
      func_0x000107c2b054(&uStack_1d8,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar15,auStack_1f8,&uStack_1d8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
      }
    }
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
  }
  else {
    puVar17 = (undefined8 *)plVar8[2];
    plVar6 = plVar8 + 9;
    ppppuVar12 = &pppuStack_1e0;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_1c1 < '\0') {
        __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
      }
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      pcStack_208 = FUN_10a772568;
      if (ppppuVar12 != (undefined8 ****)0x0) {
        plVar8 = *(long **)(*(long *)(*plVar7 + 0x100) + 0x1c8);
        pppuStack_248 = ppppuVar12;
        puStack_230 = puVar16;
        puStack_228 = puVar17;
        puStack_220 = puVar4;
        plStack_218 = plVar6;
        pppuStack_210 = &pppuStack_1a0;
        (**(code **)(*plVar8 + 0x98))();
        plStack_258 = (long *)plVar8[1];
        lVar19 = *plVar8;
        if (plVar8[1] != 0) {
          plVar6 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar17 = (undefined8 *)plVar7[2];
        uVar18 = *puVar17;
        lStack_260 = lVar19;
        __ZNSt3__15mutex4lockEv(uVar18);
        uVar9 = puVar17[2];
        FUN_10ad18048(uVar9,&lStack_260,uVar15,(char)plVar7[1]);
        __ZNSt3__15mutex6unlockEv(uVar18);
        pppuStack_238 = &pppuStack_248;
        plVar7 = plVar7 + 9;
        FUN_10a7ab750(plVar7,&pppuStack_248,&UNK_10dd5b8f9,&pppuStack_238,&uStack_239);
        plVar6 = plStack_258;
        *(int *)(plVar7 + 3) = (int)uVar9;
        if (plStack_258 != (long *)0x0) {
          plVar7 = plStack_258 + 1;
          do {
            lVar14 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_258 + 0x10))(plStack_258);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      return lVar19;
    }
    lVar14 = plVar6[3];
    uVar15 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar15);
    uStack_1d8 = (int)lVar14;
    FUN_10ad18548(puVar17[2] + 0x10,&uStack_1d8);
    __ZNSt3__15mutex6unlockEv(uVar15);
    FUN_10a7ab55c(plVar8 + 9,&pppuStack_1e0);
  }
  return lVar19;
}



/* Entry: 10a7721d4; end: 10a772267;  */

long FUN_10a7721d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_210;
  long *plStack_208;
  undefined8 ***pppuStack_1f8;
  undefined1 uStack_1e9;
  undefined8 ***pppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  long *plStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 ***pppuStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  char cStack_171;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  long *plStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined8 ***pppuStack_138;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar15 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar16 = &uStack_48;
  uStack_48 = param_3;
  func_0x00010a7ab484();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    FUN_10ad17ea0(puVar15[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_58 = FUN_10a772268;
  puVar15 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppuVar10 = &puStack_98;
  puStack_98 = puVar16;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab484();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    func_0x00010ad17ee8(puVar15[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_a8 = FUN_10a7722fc;
  puVar16 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  pppuVar11 = &ppuStack_e8;
  lVar13 = param_1;
  ppuStack_e8 = ppuVar10;
  ppuStack_b0 = &puStack_60;
  func_0x00010a7ab3ac();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar14 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar14);
    FUN_10ad17f30(param_1,puVar16[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a772390;
  puVar15 = *(undefined8 **)(puVar5 + 0x10);
  puVar5 = puVar5 + 0x48;
  ppppuVar12 = &pppuStack_138;
  uVar14 = param_4;
  lVar18 = lVar13;
  pppuStack_138 = pppuVar11;
  pppuStack_100 = &ppuStack_b0;
  func_0x00010a7ab3ac();
  if (puVar5 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar5 + 0x18);
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    FUN_10ad17f88(lVar13,puVar15[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return lVar13;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar4);
  plVar8 = plVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_10a77242c;
  plVar7 = plVar8 + 9;
  pppuStack_190 = ppppuVar12;
  puStack_170 = puVar15;
  puStack_168 = puVar16;
  puStack_160 = puVar4;
  plStack_158 = plVar6;
  pppuStack_150 = &pppuStack_100;
  func_0x00010a7ab484(plVar7,&pppuStack_190);
  if (plVar7 == (long *)0x0) {
    lVar13 = *plVar8;
    func_0x000107c2b054(auStack_1a8,&UNK_10f6750c5);
    if (lVar13 != 0) {
      uVar14 = *(undefined8 *)(lVar13 + 0x8d8);
      func_0x000107c2b054(&uStack_188,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar14,auStack_1a8,&uStack_188);
      if (cStack_171 < '\0') {
        __ZdlPv(CONCAT44(uStack_184,uStack_188));
      }
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
  }
  else {
    puVar16 = (undefined8 *)plVar8[2];
    plVar6 = plVar8 + 9;
    ppppuVar12 = &pppuStack_190;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_171 < '\0') {
        __ZdlPv(CONCAT44(uStack_184,uStack_188));
      }
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      pcStack_1b8 = FUN_10a772568;
      if (ppppuVar12 != (undefined8 ****)0x0) {
        plVar8 = *(long **)(*(long *)(*plVar7 + 0x100) + 0x1c8);
        pppuStack_1f8 = ppppuVar12;
        puStack_1e0 = puVar15;
        puStack_1d8 = puVar16;
        puStack_1d0 = puVar4;
        plStack_1c8 = plVar6;
        pppuStack_1c0 = &pppuStack_150;
        (**(code **)(*plVar8 + 0x98))();
        plStack_208 = (long *)plVar8[1];
        lVar18 = *plVar8;
        if (plVar8[1] != 0) {
          plVar6 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar16 = (undefined8 *)plVar7[2];
        uVar17 = *puVar16;
        lStack_210 = lVar18;
        __ZNSt3__15mutex4lockEv(uVar17);
        uVar9 = puVar16[2];
        FUN_10ad18048(uVar9,&lStack_210,uVar14,(char)plVar7[1]);
        __ZNSt3__15mutex6unlockEv(uVar17);
        pppuStack_1e8 = &pppuStack_1f8;
        plVar7 = plVar7 + 9;
        FUN_10a7ab750(plVar7,&pppuStack_1f8,&UNK_10dd5b8f9,&pppuStack_1e8,&uStack_1e9);
        plVar6 = plStack_208;
        *(int *)(plVar7 + 3) = (int)uVar9;
        if (plStack_208 != (long *)0x0) {
          plVar7 = plStack_208 + 1;
          do {
            lVar13 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      return lVar18;
    }
    lVar13 = plVar6[3];
    uVar14 = *puVar16;
    __ZNSt3__15mutex4lockEv(uVar14);
    uStack_188 = (int)lVar13;
    FUN_10ad18548(puVar16[2] + 0x10,&uStack_188);
    __ZNSt3__15mutex6unlockEv(uVar14);
    FUN_10a7ab55c(plVar8 + 9,&pppuStack_190);
  }
  return lVar18;
}



/* Entry: 10a772268; end: 10a7722fb;  */

long FUN_10a772268(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 ***pppuStack_1a8;
  undefined1 uStack_199;
  undefined8 ***pppuStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 ***pppuStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  char cStack_121;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  long *plStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar15 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar17 = &uStack_48;
  uStack_48 = param_3;
  func_0x00010a7ab484();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    func_0x00010ad17ee8(puVar15[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  pcStack_58 = FUN_10a7722fc;
  puVar15 = *(undefined8 **)(puVar4 + 0x10);
  puVar4 = puVar4 + 0x48;
  ppuVar10 = &puStack_98;
  lVar13 = param_1;
  puStack_98 = puVar17;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar4 + 0x18);
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    FUN_10ad17f30(param_1,puVar15[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return param_1;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a772390;
  puVar17 = *(undefined8 **)(puVar5 + 0x10);
  puVar5 = puVar5 + 0x48;
  pppuVar11 = &ppuStack_e8;
  uVar14 = param_4;
  lVar18 = lVar13;
  ppuStack_e8 = ppuVar10;
  ppuStack_b0 = &puStack_60;
  func_0x00010a7ab3ac();
  if (puVar5 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar5 + 0x18);
    uVar14 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar14);
    FUN_10ad17f88(lVar13,puVar17[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar14);
    return lVar13;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar4);
  plVar8 = plVar6;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a77242c;
  plVar7 = plVar8 + 9;
  pppuStack_140 = pppuVar11;
  puStack_120 = puVar17;
  puStack_118 = puVar15;
  puStack_110 = puVar4;
  plStack_108 = plVar6;
  pppuStack_100 = &ppuStack_b0;
  func_0x00010a7ab484(plVar7,&pppuStack_140);
  if (plVar7 == (long *)0x0) {
    lVar13 = *plVar8;
    func_0x000107c2b054(auStack_158,&UNK_10f6750c5);
    if (lVar13 != 0) {
      uVar14 = *(undefined8 *)(lVar13 + 0x8d8);
      func_0x000107c2b054(&uStack_138,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar14,auStack_158,&uStack_138);
      if (cStack_121 < '\0') {
        __ZdlPv(CONCAT44(uStack_134,uStack_138));
      }
    }
    if (cStack_141 < '\0') {
      __ZdlPv(auStack_158[0]);
    }
  }
  else {
    puVar15 = (undefined8 *)plVar8[2];
    plVar6 = plVar8 + 9;
    ppppuVar12 = &pppuStack_140;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_121 < '\0') {
        __ZdlPv(CONCAT44(uStack_134,uStack_138));
      }
      if (cStack_141 < '\0') {
        __ZdlPv(auStack_158[0]);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      pcStack_168 = FUN_10a772568;
      if (ppppuVar12 != (undefined8 ****)0x0) {
        plVar8 = *(long **)(*(long *)(*plVar7 + 0x100) + 0x1c8);
        pppuStack_1a8 = ppppuVar12;
        puStack_190 = puVar17;
        puStack_188 = puVar15;
        puStack_180 = puVar4;
        plStack_178 = plVar6;
        pppuStack_170 = &pppuStack_100;
        (**(code **)(*plVar8 + 0x98))();
        plStack_1b8 = (long *)plVar8[1];
        lVar18 = *plVar8;
        if (plVar8[1] != 0) {
          plVar6 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar17 = (undefined8 *)plVar7[2];
        uVar16 = *puVar17;
        lStack_1c0 = lVar18;
        __ZNSt3__15mutex4lockEv(uVar16);
        uVar9 = puVar17[2];
        FUN_10ad18048(uVar9,&lStack_1c0,uVar14,(char)plVar7[1]);
        __ZNSt3__15mutex6unlockEv(uVar16);
        pppuStack_198 = &pppuStack_1a8;
        plVar7 = plVar7 + 9;
        FUN_10a7ab750(plVar7,&pppuStack_1a8,&UNK_10dd5b8f9,&pppuStack_198,&uStack_199);
        plVar6 = plStack_1b8;
        *(int *)(plVar7 + 3) = (int)uVar9;
        if (plStack_1b8 != (long *)0x0) {
          plVar7 = plStack_1b8 + 1;
          do {
            lVar13 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      return lVar18;
    }
    lVar13 = plVar6[3];
    uVar14 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar14);
    uStack_138 = (int)lVar13;
    FUN_10ad18548(puVar15[2] + 0x10,&uStack_138);
    __ZNSt3__15mutex6unlockEv(uVar14);
    FUN_10a7ab55c(plVar8 + 9,&pppuStack_140);
  }
  return lVar18;
}



/* Entry: 10a7722fc; end: 10a77238f;  */

void FUN_10a7722fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lStack_170;
  long *plStack_168;
  undefined8 ***pppuStack_158;
  undefined1 uStack_149;
  undefined8 ***pppuStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 **ppuStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  
  puVar14 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar15 = &uStack_48;
  uVar12 = param_1;
  uStack_48 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar12 = *puVar14;
    __ZNSt3__15mutex4lockEv(uVar12);
    FUN_10ad17f30(param_1,puVar14[2],uVar1);
    __ZNSt3__15mutex6unlockEv(uVar12);
    return;
  }
  puVar4 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_58 = FUN_10a772390;
  puVar17 = *(undefined8 **)(puVar5 + 0x10);
  puVar5 = puVar5 + 0x48;
  ppuVar9 = &puStack_98;
  uVar13 = param_4;
  puStack_98 = puVar15;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010a7ab3ac();
  if (puVar5 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar5 + 0x18);
    uVar13 = *puVar17;
    __ZNSt3__15mutex4lockEv(uVar13);
    FUN_10ad17f88(uVar12,puVar17[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar13);
    return;
  }
  plVar6 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv(puVar4);
  plVar8 = plVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a77242c;
  plVar7 = plVar8 + 9;
  ppuStack_f0 = ppuVar9;
  puStack_d0 = puVar17;
  puStack_c8 = puVar14;
  puStack_c0 = puVar4;
  plStack_b8 = plVar6;
  ppuStack_b0 = &puStack_60;
  func_0x00010a7ab484(plVar7,&ppuStack_f0);
  if (plVar7 == (long *)0x0) {
    lVar11 = *plVar8;
    func_0x000107c2b054(auStack_108,&UNK_10f6750c5);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + 0x8d8);
      func_0x000107c2b054(&uStack_e8,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar12,auStack_108,&uStack_e8);
      if (cStack_d1 < '\0') {
        __ZdlPv(CONCAT44(uStack_e4,uStack_e8));
      }
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
  }
  else {
    puVar15 = (undefined8 *)plVar8[2];
    plVar6 = plVar8 + 9;
    pppuVar10 = &ppuStack_f0;
    func_0x00010a7ab3ac();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_d1 < '\0') {
        __ZdlPv(CONCAT44(uStack_e4,uStack_e8));
      }
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      pcStack_118 = FUN_10a772568;
      if (pppuVar10 != (undefined8 ***)0x0) {
        plVar8 = *(long **)(*(long *)(*plVar7 + 0x100) + 0x1c8);
        pppuStack_158 = pppuVar10;
        puStack_140 = puVar17;
        puStack_138 = puVar15;
        puStack_130 = puVar4;
        plStack_128 = plVar6;
        pppuStack_120 = &ppuStack_b0;
        (**(code **)(*plVar8 + 0x98))();
        plStack_168 = (long *)plVar8[1];
        lStack_170 = *plVar8;
        if (plVar8[1] != 0) {
          plVar6 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar15 = (undefined8 *)plVar7[2];
        uVar16 = *puVar15;
        __ZNSt3__15mutex4lockEv(uVar16);
        uVar12 = puVar15[2];
        FUN_10ad18048(uVar12,&lStack_170,uVar13,(char)plVar7[1]);
        __ZNSt3__15mutex6unlockEv(uVar16);
        pppuStack_148 = &pppuStack_158;
        plVar7 = plVar7 + 9;
        FUN_10a7ab750(plVar7,&pppuStack_158,&UNK_10dd5b8f9,&pppuStack_148,&uStack_149);
        plVar6 = plStack_168;
        *(int *)(plVar7 + 3) = (int)uVar12;
        if (plStack_168 != (long *)0x0) {
          plVar7 = plStack_168 + 1;
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
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      return;
    }
    lVar11 = plVar6[3];
    uVar12 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar12);
    uStack_e8 = (int)lVar11;
    FUN_10ad18548(puVar15[2] + 0x10,&uStack_e8);
    __ZNSt3__15mutex6unlockEv(uVar12);
    FUN_10a7ab55c(plVar8 + 9,&ppuStack_f0);
  }
  return;
}



/* Entry: 10a772390; end: 10a77242b;  */

void FUN_10a772390(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lStack_120;
  long *plStack_118;
  undefined8 **ppuStack_108;
  undefined1 uStack_f9;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char cStack_81;
  undefined8 *puStack_80;
  undefined8 uStack_48;
  
  puVar12 = *(undefined8 **)(param_2 + 0x10);
  param_2 = param_2 + 0x48;
  puVar10 = &uStack_48;
  uVar9 = param_4;
  uStack_48 = param_3;
  func_0x00010a7ab3ac();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar9 = *puVar12;
    __ZNSt3__15mutex4lockEv(uVar9);
    FUN_10ad17f88(param_1,puVar12[2],uVar1,param_4);
    __ZNSt3__15mutex6unlockEv(uVar9);
    return;
  }
  plVar4 = (long *)&UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  plVar5 = plVar4 + 9;
  puStack_a0 = puVar10;
  puStack_80 = puVar12;
  func_0x00010a7ab484(plVar5,&puStack_a0);
  if (plVar5 == (long *)0x0) {
    lVar8 = *plVar4;
    func_0x000107c2b054(auStack_b8,&UNK_10f6750c5);
    if (lVar8 != 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x8d8);
      func_0x000107c2b054(&uStack_98,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar9,auStack_b8,&uStack_98);
      if (cStack_81 < '\0') {
        __ZdlPv(CONCAT44(uStack_94,uStack_98));
      }
    }
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
    }
  }
  else {
    puVar10 = (undefined8 *)plVar4[2];
    plVar5 = plVar4 + 9;
    ppuVar7 = &puStack_a0;
    func_0x00010a7ab3ac();
    if (plVar5 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_81 < '\0') {
        __ZdlPv(CONCAT44(uStack_94,uStack_98));
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      __Unwind_Resume();
      if (ppuVar7 != (undefined8 **)0x0) {
        plVar5 = *(long **)(*(long *)(*plVar4 + 0x100) + 0x1c8);
        ppuStack_108 = ppuVar7;
        puStack_f0 = puVar12;
        puStack_e8 = puVar10;
        (**(code **)(*plVar5 + 0x98))();
        plStack_118 = (long *)plVar5[1];
        lStack_120 = *plVar5;
        if (plVar5[1] != 0) {
          plVar5 = (long *)(plVar5[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar10 = (undefined8 *)plVar4[2];
        uVar11 = *puVar10;
        __ZNSt3__15mutex4lockEv(uVar11);
        uVar6 = puVar10[2];
        FUN_10ad18048(uVar6,&lStack_120,uVar9,(char)plVar4[1]);
        __ZNSt3__15mutex6unlockEv(uVar11);
        ppuStack_f8 = &ppuStack_108;
        plVar4 = plVar4 + 9;
        FUN_10a7ab750(plVar4,&ppuStack_108,&UNK_10dd5b8f9,&ppuStack_f8,&uStack_f9);
        plVar5 = plStack_118;
        *(int *)(plVar4 + 3) = (int)uVar6;
        if (plStack_118 != (long *)0x0) {
          plVar4 = plStack_118 + 1;
          do {
            lVar8 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      return;
    }
    lVar8 = plVar5[3];
    uVar9 = *puVar10;
    __ZNSt3__15mutex4lockEv(uVar9);
    uStack_98 = (int)lVar8;
    FUN_10ad18548(puVar10[2] + 0x10,&uStack_98);
    __ZNSt3__15mutex6unlockEv(uVar9);
    FUN_10a7ab55c(plVar4 + 9,&puStack_a0);
  }
  return;
}



/* Entry: 10a77242c; end: 10a772567;  */

void FUN_10a77242c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lStack_d0;
  long *plStack_c8;
  undefined8 *puStack_b8;
  undefined1 uStack_a9;
  undefined8 **ppuStack_a8;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_31;
  
  plVar3 = param_1 + 9;
  uStack_50 = param_2;
  func_0x00010a7ab484(plVar3,&uStack_50);
  if (plVar3 == (long *)0x0) {
    lVar5 = *param_1;
    func_0x000107c2b054(auStack_68,&UNK_10f6750c5);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x8d8);
      func_0x000107c2b054(&uStack_48,&UNK_10f6750f2);
      FUN_10a76bdb0(uVar6,auStack_68,&uStack_48);
      if (cStack_31 < '\0') {
        __ZdlPv(CONCAT44(uStack_44,uStack_48));
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[2];
    plVar3 = param_1 + 9;
    puVar9 = &uStack_50;
    func_0x00010a7ab3ac();
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f677487;
      FUN_109ffdddc();
      if (cStack_31 < '\0') {
        __ZdlPv(CONCAT44(uStack_44,uStack_48));
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
      __Unwind_Resume();
      if (puVar9 != (undefined8 *)0x0) {
        plVar4 = *(long **)(*(long *)(*plVar3 + 0x100) + 0x1c8);
        puStack_b8 = puVar9;
        (**(code **)(*plVar4 + 0x98))();
        plStack_c8 = (long *)plVar4[1];
        lStack_d0 = *plVar4;
        if (plVar4[1] != 0) {
          plVar4 = (long *)(plVar4[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = (undefined8 *)plVar3[2];
        uVar8 = *puVar9;
        __ZNSt3__15mutex4lockEv(uVar8);
        uVar6 = puVar9[2];
        FUN_10ad18048(uVar6,&lStack_d0,param_3,(char)plVar3[1]);
        __ZNSt3__15mutex6unlockEv(uVar8);
        ppuStack_a8 = &puStack_b8;
        plVar3 = plVar3 + 9;
        FUN_10a7ab750(plVar3,&puStack_b8,&UNK_10dd5b8f9,&ppuStack_a8,&uStack_a9);
        plVar4 = plStack_c8;
        *(int *)(plVar3 + 3) = (int)uVar6;
        if (plStack_c8 != (long *)0x0) {
          plVar3 = plStack_c8 + 1;
          do {
            lVar5 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      return;
    }
    lVar5 = plVar3[3];
    uVar6 = *puVar7;
    __ZNSt3__15mutex4lockEv(uVar6);
    uStack_48 = (int)lVar5;
    FUN_10ad18548(puVar7[2] + 0x10,&uStack_48);
    __ZNSt3__15mutex6unlockEv(uVar6);
    FUN_10a7ab55c(param_1 + 9,&uStack_50);
  }
  return;
}



/* Entry: 10a772568; end: 10a772693;  */

void FUN_10a772568(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lStack_60;
  long *plStack_58;
  long lStack_48;
  undefined1 uStack_39;
  long *plStack_38;
  
  if (param_2 != 0) {
    plVar4 = *(long **)(*(long *)(*param_1 + 0x100) + 0x1c8);
    lStack_48 = param_2;
    (**(code **)(*plVar4 + 0x98))();
    plStack_58 = (long *)plVar4[1];
    lStack_60 = *plVar4;
    if (plVar4[1] != 0) {
      plVar4 = (long *)(plVar4[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar8 = (undefined8 *)param_1[2];
    uVar7 = *puVar8;
    __ZNSt3__15mutex4lockEv(uVar7);
    uVar5 = puVar8[2];
    FUN_10ad18048(uVar5,&lStack_60,param_3,(char)param_1[1]);
    __ZNSt3__15mutex6unlockEv(uVar7);
    plStack_38 = &lStack_48;
    param_1 = param_1 + 9;
    FUN_10a7ab750(param_1,&lStack_48,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
    plVar4 = plStack_58;
    *(int *)(param_1 + 3) = (int)uVar5;
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
  }
  return;
}



/* Entry: 10a772694; end: 10a772703;  */

void FUN_10a772694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = *puVar2;
  __ZNSt3__15mutex4lockEv(uVar1);
  uStack_38 = param_2;
  FUN_10ad18b2c(puVar2[2] + 0x10360,&uStack_38,&uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10a772704; end: 10a77278f;  */

void FUN_10a772704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_38;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  param_1 = param_1 + 0x48;
  puVar5 = &uStack_38;
  uVar3 = param_3;
  uStack_38 = param_2;
  func_0x00010a7ab3ac();
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *puVar6;
    __ZNSt3__15mutex4lockEv(uVar3);
    FUN_10ad1811c(puVar6[2],uVar1,param_3);
    __ZNSt3__15mutex6unlockEv(uVar3);
    return;
  }
  puVar2 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  puVar7 = *(undefined8 **)(puVar2 + 0x10);
  puVar2 = puVar2 + 0x48;
  puStack_78 = puVar5;
  puStack_70 = puVar6;
  func_0x00010a7ab3ac(puVar2,&puStack_78);
  if (puVar2 != (undefined *)0x0) {
    uVar1 = *(undefined4 *)(puVar2 + 0x18);
    uVar4 = *puVar7;
    __ZNSt3__15mutex4lockEv(uVar4);
    FUN_10ad17ff0(puVar7[2],uVar1,uVar3);
    __ZNSt3__15mutex6unlockEv(uVar4);
    return;
  }
  puVar2 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  puVar5 = *(undefined8 **)(puVar2 + 0x10);
  uVar4 = *puVar5;
  __ZNSt3__15mutex4lockEv(uVar4);
  uVar3 = puVar5[2];
  puVar2[8] = 1;
  func_0x00010ad18174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar4);
  return;
}



/* Entry: 10a772790; end: 10a77281b;  */

void FUN_10a772790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  param_1 = param_1 + 0x48;
  uStack_38 = param_2;
  func_0x00010a7ab3ac(param_1,&uStack_38);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *puVar5;
    __ZNSt3__15mutex4lockEv(uVar4);
    FUN_10ad17ff0(puVar5[2],uVar1,param_3);
    __ZNSt3__15mutex6unlockEv(uVar4);
    return;
  }
  puVar2 = &UNK_10f677487;
  FUN_109ffdddc();
  __ZNSt3__15mutex6unlockEv();
  __Unwind_Resume();
  puVar5 = *(undefined8 **)(puVar2 + 0x10);
  uVar3 = *puVar5;
  __ZNSt3__15mutex4lockEv(uVar3);
  uVar4 = puVar5[2];
  puVar2[8] = 1;
  func_0x00010ad18174(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar3);
  return;
}



/* Entry: 10a77281c; end: 10a772877;  */

void FUN_10a77281c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *puVar3;
  __ZNSt3__15mutex4lockEv(uVar2);
  uVar1 = puVar3[2];
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010ad18174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
  return;
}



/* Entry: 10a772878; end: 10a7728cf;  */

void FUN_10a772878(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *puVar3;
  __ZNSt3__15mutex4lockEv(uVar2);
  uVar1 = puVar3[2];
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x00010ad181d8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
  return;
}



/* Entry: 10a7728d0; end: 10a772953;  */

undefined1  [16] FUN_10a7728d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f6771fe;
  return auVar1;
}


