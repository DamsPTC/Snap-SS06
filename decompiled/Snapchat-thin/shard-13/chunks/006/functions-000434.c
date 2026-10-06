/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa09144; end: 10aa0925b;  */

void FUN_10aa09144(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  FUN_10aa0925c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x10];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f689841);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar8 = param_2[0xd];
  lVar10 = param_2[0xe];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)((ulong)(lVar10 - lVar8) >> 4);
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
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
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10aa0925c; end: 10aa092c3;  */

void FUN_10aa0925c(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
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
  long *in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c382f0;
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
  plVar8 = plVar6;
  FUN_10aa0925c(plVar6,param_2);
  FUN_10a076f00(param_4);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_3);
  FUN_10a9de60c(&stack0xffffffffffffff90,plVar8,plVar9);
  FUN_10aa093dc(extraout_x8,plVar6,&stack0xffffffffffffff90);
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



/* Entry: 10aa092c4; end: 10aa093db;  */

void FUN_10aa092c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
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
  FUN_10aa0925c(param_2,param_3);
  FUN_10a076f00(param_5);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a9de60c(&stack0xffffffffffffffb0,plVar6,plVar7);
  FUN_10aa093dc(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aa093dc; end: 10aa0946b;  */

void FUN_10aa093dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_38 = &PTR_DAT_110c37440;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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
  return;
}



/* Entry: 10aa0946c; end: 10aa09523;  */

void FUN_10aa0946c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa09524(param_1,param_2,FUN_10a9de7b4,0,param_3,param_4,param_5);
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



/* Entry: 10aa09524; end: 10aa0962b;  */

void FUN_10aa09524(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar4 = param_2;
  FUN_10aa0925c(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_78,plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10aa093dc(param_1,param_2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10aa0962c; end: 10aa096e3;  */

void FUN_10aa0962c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa09524(param_1,param_2,FUN_10a9de6d8,0,param_3,param_4,param_5);
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



/* Entry: 10aa096e4; end: 10aa09923;  */

void FUN_10aa096e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10aa0925c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9de934(&lStack_98,plVar16);
  lVar13 = lStack_90 - lStack_98 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar13);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lStack_90 != lStack_98) {
    lVar14 = 0;
    do {
      lVar12 = lStack_98 + lVar14 * 0x10;
      lVar10 = *(long *)(lVar12 + 8);
      plVar16 = *(long **)(lVar12 + 8);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c37440;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar14,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  FUN_10a9f8dc0(&stack0xffffffffffffffa0);
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar13 = plVar7[0x59];
  uVar9 = lVar13 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    puVar8 = ppuVar2[lVar13 + 2];
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  else {
    puVar8 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar11 = (undefined *)plVar7[0x4c];
  lVar13 = (long)puVar11 - (long)puVar3;
  puVar15 = (undefined *)(lVar13 >> 4);
  if (puVar15 < puVar8) {
    uVar9 = (long)puVar8 - (long)puVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar11 >> 4) < uVar9) {
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar11 = (undefined *)(lVar14 - (long)puVar3 >> 3);
        if (puVar11 <= puVar8) {
          puVar11 = puVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar3)) {
          puVar11 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar11 >> 0x3c == 0) {
          lVar10 = (long)puVar11 << 4;
          __Znwm();
          lVar12 = lVar10 + lVar13;
          _bzero(lVar12,uVar9 * 0x10);
          puVar15 = (undefined *)(lVar12 + (long)puVar15 * -0x10);
          _memcpy(puVar15,puVar3,lVar13);
          *ppuVar2 = puVar15;
          plVar7[0x4c] = lVar12 + uVar9 * 0x10;
          plVar7[0x4d] = lVar10 + (long)puVar11 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar14;
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
    _bzero(puVar11,uVar9 * 0x10);
    plVar7[0x4c] = (long)(puVar11 + uVar9 * 0x10);
  }
  else if (puVar8 < puVar15) {
    while (puVar11 != puVar3 + (long)puVar8 * 0x10) {
      puVar11 = puVar11 + -0x10;
      func_0x00010988c204(puVar11);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar8 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar8;
  return;
}



/* Entry: 10aa09924; end: 10aa09a2b;  */

long * FUN_10aa09924(long *param_1)

{
  long lVar1;
  
  func_0x00010aa0995c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa09a2c; end: 10aa0a3ab;  */

void FUN_10aa09a2c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  char cVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  char acStack_248 [8];
  long lStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 ****ppppuStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 ****ppppuStack_1e0;
  long lStack_1d8;
  undefined7 uStack_1d0;
  char cStack_1c9;
  undefined8 ****ppppuStack_1c8;
  long lStack_1c0;
  undefined7 uStack_1b8;
  char cStack_1b1;
  undefined8 ****ppppuStack_1b0;
  long lStack_1a8;
  undefined7 uStack_1a0;
  char cStack_199;
  undefined8 ****ppppuStack_198;
  long lStack_190;
  undefined7 uStack_188;
  char cStack_181;
  undefined8 ****ppppuStack_180;
  long lStack_178;
  undefined7 uStack_170;
  char cStack_169;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [56];
  long lStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [40];
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = param_1[1];
  plStack_150 = (long *)*param_1;
  lStack_140 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_130 = param_1[4];
  plStack_138 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_128 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_120 = (undefined4)param_1[6];
  lStack_118 = param_1[7];
  lStack_110 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_108,param_1 + 9);
  lStack_d0 = param_1[0x10];
  uStack_c8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_c0,param_1 + 0x12);
  lVar15 = *(long *)(param_2 + 0x10);
  FUN_109ffe064(auStack_238,lStack_118,lStack_d0);
  plStack_80 = (long *)0x0;
  FUN_109fc89b4(acStack_248,auStack_238,alStack_98,0,0);
  if (plStack_80 == alStack_98) {
    lVar12 = 0x20;
LAB_10aa09b2c:
    (**(code **)(*plStack_80 + lVar12))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar12 = 0x28;
    goto LAB_10aa09b2c;
  }
  if (acStack_248[0] == '\t') {
    cVar10 = '\t';
LAB_10aa0a0d4:
    func_0x000109380ffc(&lStack_240,cVar10);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    func_0x000104c4f944(auStack_c0);
    plVar9 = &lStack_118;
    FUN_10a042634(plVar9);
    if (lStack_128 < 0) {
      plVar9 = plStack_138;
      __ZdlPv(plStack_138);
    }
    if (lStack_140 < 0) {
      plVar9 = plStack_150;
      __ZdlPv(plStack_150);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    if (uStack_210._7_1_ < '\0') {
      __ZdlPv(ppppuStack_220);
    }
    func_0x000109380ffc(&lStack_240,acStack_248[0]);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    FUN_10a05bd10(&plStack_150);
    __Unwind_Resume(plVar9);
    return;
  }
  lVar12 = *(long *)(lVar15 + 0x68);
  lVar7 = *(long *)(lVar15 + 0x70);
  while (lVar7 != lVar12) {
    lVar7 = lVar7 + -0x10;
    func_0x00010aa099d4();
  }
  *(long *)(lVar15 + 0x70) = lVar12;
  FUN_10aa0a3c8(lVar15 + 0x40);
  FUN_10aa0a3c8(lVar15 + 0x18);
  if ((acStack_248[0] == '\x01') &&
     (lVar12 = lStack_240, FUN_109fc8c5c(lStack_240,"friends"), lStack_240 + 8 != lVar12)) {
    func_0x000107c2b054(&ppppuStack_220,"friends");
    pcVar8 = acStack_248;
    func_0x000109406570(pcVar8,&ppppuStack_220);
    cVar10 = *pcVar8;
    if (uStack_210 < 0) {
      __ZdlPv(ppppuStack_220);
    }
    if (cVar10 == '\x02') {
      func_0x000107c2b054(&ppppuStack_220,"friends");
      func_0x000109406570(acStack_248,&ppppuStack_220);
      func_0x0001094ce958(&pppuStack_168);
      if (uStack_210 < 0) {
        __ZdlPv(ppppuStack_220);
      }
      for (ppppuVar5 = (undefined8 ****)pppuStack_168; ppppuVar5 != (undefined8 ****)pppuStack_160;
          ppppuVar5 = ppppuVar5 + 2) {
        func_0x000107c2b054(&ppppuStack_220,"userId");
        FUN_10a5d1128(&ppppuStack_180,ppppuVar5,&ppppuStack_220,&UNK_10f6891b4);
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        func_0x000107c2b054(&ppppuStack_220,"username");
        FUN_10a5d1128(&ppppuStack_198,ppppuVar5,&ppppuStack_220,&UNK_10f6891b4);
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        func_0x000107c2b054(&ppppuStack_220,&DAT_10f3b56ce);
        FUN_10a5d1128(&ppppuStack_1b0,ppppuVar5,&ppppuStack_220,&UNK_10f6891b4);
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        func_0x000107c2b054(&ppppuStack_220,&DAT_10f3b56da);
        FUN_10a5d1128(&ppppuStack_1c8,ppppuVar5,&ppppuStack_220,&UNK_10f6891b4);
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        func_0x000107c2b054(&ppppuStack_220,&DAT_10f3b56ec);
        pppppuVar11 = &ppppuStack_220;
        FUN_10a5d1128(&ppppuStack_1e0,ppppuVar5,pppppuVar11,&UNK_10f6891b4);
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        iVar3 = *(int *)(lVar15 + 0x58);
        plVar9 = (long *)0xb0;
        __Znwm();
        plVar18 = plVar9 + 1;
        *plVar18 = 0;
        plVar9[2] = 0;
        plVar17 = plVar9 + 3;
        *plVar17 = (long)&PTR_DAT_110c36dc8;
        *plVar9 = (long)&PTR_FUN_110c37f78;
        plVar9[4] = 0;
        plVar9[5] = 0;
        if (cStack_169 < '\0') {
          pppppuVar11 = (undefined8 *****)ppppuStack_180;
          func_0x000107c3192c(plVar9 + 6,ppppuStack_180,lStack_178);
        }
        else {
          plVar9[7] = lStack_178;
          plVar9[6] = (long)ppppuStack_180;
          plVar9[8] = CONCAT17(cStack_169,uStack_170);
        }
        if (cStack_181 < '\0') {
          pppppuVar11 = (undefined8 *****)ppppuStack_198;
          func_0x000107c3192c(plVar9 + 9,ppppuStack_198,lStack_190);
        }
        else {
          plVar9[10] = lStack_190;
          plVar9[9] = (long)ppppuStack_198;
          plVar9[0xb] = CONCAT17(cStack_181,uStack_188);
        }
        if (cStack_199 < '\0') {
          pppppuVar11 = (undefined8 *****)ppppuStack_1b0;
          func_0x000107c3192c(plVar9 + 0xc,ppppuStack_1b0,lStack_1a8);
        }
        else {
          plVar9[0xd] = lStack_1a8;
          plVar9[0xc] = (long)ppppuStack_1b0;
          plVar9[0xe] = CONCAT17(cStack_199,uStack_1a0);
        }
        if (cStack_1b1 < '\0') {
          pppppuVar11 = (undefined8 *****)ppppuStack_1c8;
          func_0x000107c3192c(plVar9 + 0xf,ppppuStack_1c8,lStack_1c0);
        }
        else {
          plVar9[0x10] = lStack_1c0;
          plVar9[0xf] = (long)ppppuStack_1c8;
          plVar9[0x11] = CONCAT17(cStack_1b1,uStack_1b8);
        }
        if (cStack_1c9 < '\0') {
          pppppuVar11 = (undefined8 *****)ppppuStack_1e0;
          func_0x000107c3192c(plVar9 + 0x12,ppppuStack_1e0,lStack_1d8);
        }
        else {
          plVar9[0x13] = lStack_1d8;
          plVar9[0x12] = (long)ppppuStack_1e0;
          plVar9[0x14] = CONCAT17(cStack_1c9,uStack_1d0);
        }
        *(int *)(plVar9 + 0x15) = iVar3 + 1;
        puVar16 = *(undefined8 **)(lVar15 + 0x70);
        plStack_1f0 = plVar17;
        plStack_1e8 = plVar9;
        if (puVar16 < *(undefined8 **)(lVar15 + 0x78)) {
          *puVar16 = plVar17;
          puVar16[1] = plVar9;
          do {
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = *plVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          puVar16 = puVar16 + 2;
        }
        else {
          lVar12 = (long)puVar16 - *(long *)(lVar15 + 0x68);
          uVar1 = (lVar12 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a9f8e30();
            goto LAB_10aa0a170;
          }
          uVar13 = (long)*(undefined8 **)(lVar15 + 0x78) - *(long *)(lVar15 + 0x68);
          uVar14 = (long)uVar13 >> 3;
          if (uVar14 <= uVar1) {
            uVar14 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar14 = 0xfffffffffffffff;
          }
          FUN_10a9f8e44();
          puVar2 = (undefined8 *)(uVar14 + lVar12);
          *puVar2 = plVar17;
          puVar2[1] = plVar9;
          do {
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = *plVar18 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          puVar16 = puVar2 + 2;
          lVar7 = (long)puVar2 - (*(long *)(lVar15 + 0x70) - *(long *)(lVar15 + 0x68));
          _memcpy(lVar7);
          lVar12 = *(long *)(lVar15 + 0x68);
          *(long *)(lVar15 + 0x68) = lVar7;
          *(undefined8 **)(lVar15 + 0x70) = puVar16;
          *(ulong *)(lVar15 + 0x78) = uVar14 + (long)pppppuVar11 * 0x10;
          if (lVar12 != 0) {
            __ZdlPv();
          }
        }
        *(undefined8 **)(lVar15 + 0x70) = puVar16;
        if (cStack_181 < '\0') {
          func_0x000107c3192c(&ppppuStack_220,ppppuStack_198,lStack_190);
        }
        else {
          lStack_218 = lStack_190;
          ppppuStack_220 = ppppuStack_198;
          uStack_210 = CONCAT17(cStack_181,uStack_188);
        }
        do {
          cVar10 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plStack_208 = plVar17;
        plStack_200 = plVar9;
        FUN_10aa0a45c(lVar15 + 0x40,&ppppuStack_220,&ppppuStack_220);
        plVar9 = plStack_200;
        if (plStack_200 != (long *)0x0) {
          plVar17 = plStack_200 + 1;
          do {
            lVar12 = *plVar17;
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_200 + 0x10))(plStack_200);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        if (cStack_169 < '\0') {
          func_0x000107c3192c(&ppppuStack_220,ppppuStack_180,lStack_178);
        }
        else {
          lStack_218 = lStack_178;
          ppppuStack_220 = ppppuStack_180;
          uStack_210 = CONCAT17(cStack_169,uStack_170);
        }
        plStack_200 = plStack_1e8;
        plStack_208 = plStack_1f0;
        if (plStack_1e8 != (long *)0x0) {
          plVar9 = plStack_1e8 + 1;
          do {
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        FUN_10aa0a45c(lVar15 + 0x18,&ppppuStack_220,&ppppuStack_220);
        plVar9 = plStack_200;
        if (plStack_200 != (long *)0x0) {
          plVar17 = plStack_200 + 1;
          do {
            lVar12 = *plVar17;
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_200 + 0x10))(plStack_200);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        plVar9 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar17 = plStack_1e8 + 1;
          do {
            lVar12 = *plVar17;
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (cStack_1c9 < '\0') {
          __ZdlPv(ppppuStack_1e0);
        }
        if (cStack_1b1 < '\0') {
          __ZdlPv(ppppuStack_1c8);
        }
        if (cStack_199 < '\0') {
          __ZdlPv(ppppuStack_1b0);
        }
        if (cStack_181 < '\0') {
          __ZdlPv(ppppuStack_198);
        }
        if (cStack_169 < '\0') {
          __ZdlPv(ppppuStack_180);
        }
      }
      ppppuStack_220 = &pppuStack_168;
      FUN_10a051118(&ppppuStack_220);
      cVar10 = acStack_248[0];
      goto LAB_10aa0a0d4;
    }
  }
  FUN_10a00946c(&UNK_10f689811);
LAB_10aa0a170:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa0a174);
  (*pcVar6)();
}



/* Entry: 10aa0a3ac; end: 10aa0a3c7;  */

void FUN_10aa0a3ac(void)

{
  return;
}



/* Entry: 10aa0a3c8; end: 10aa0a41b;  */

void FUN_10aa0a3c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010aa0995c(param_1,param_1[2]);
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



/* Entry: 10aa0a41c; end: 10aa0a42b;  */

void FUN_10aa0a41c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37f78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa0a42c; end: 10aa0a44b;  */

void FUN_10aa0a42c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37f78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0a44c; end: 10aa0a45b;  */

void FUN_10aa0a44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa0a454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa0a45c; end: 10aa0a863;  */

void FUN_10aa0a45c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x24;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c2b05c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x24 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x24 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x24 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000107c2b068(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  lVar3 = param_3[3];
  plVar5[6] = param_3[4];
  plVar5[5] = lVar3;
  param_3[3] = 0;
  param_3[4] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10aa0a778;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_10aa0a600:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0a84c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_10aa0a600;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x24 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x24 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x24 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_10aa0a778:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa0a864; end: 10aa0a8ab;  */

void FUN_10aa0a864(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010aa09998(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0a8ac; end: 10aa0a98f;  */

long FUN_10aa0a8ac(long *param_1,undefined8 param_2)

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
        if (plVar2 == plVar4) {
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



/* Entry: 10aa0a990; end: 10aa0aa7f;  */

undefined1  [16] FUN_10aa0a990(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_a8 [3];
  undefined4 uStack_90;
  ulong uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c37fb8;
  puVar1 = &UNK_10f6891b4;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  auStack_a8[0] = *param_2;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = (undefined4)param_2[2];
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = (undefined4)param_2[8];
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,auStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,(int)param_2[1],(int)param_2[8],*(undefined4 *)((long)param_2 + 0xc)
                ,(int)param_2[2]);
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c37fb8;
    uStack_38 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
    auStack_a8[2] = auStack_a8[2] & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,auStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)(uint)param_2[1] << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa0aa80; end: 10aa0aae3;  */

ulong FUN_10aa0aa80(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa0aae4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa0aae4,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aa0aae4; end: 10aa0abaf;  */

void FUN_10aa0aae4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
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
  FUN_10aa0abb0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = *plVar2;
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10aa0abb0; end: 10aa0abf3;  */

undefined8 * FUN_10aa0abb0(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c37fc8) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10aa0abf4; end: 10aa0ac1f;  */

undefined8 FUN_10aa0abf4(void)

{
  return 0;
}



/* Entry: 10aa0ac20; end: 10aa0ac83;  */

ulong FUN_10aa0ac20(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa0ac84);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa0ac84,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aa0ac84; end: 10aa0ad3f;  */

void FUN_10aa0ac84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa0abb0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[1];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10aa0ad40; end: 10aa0adfb;  */

void FUN_10aa0ad40(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f689f68,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa0adfc);
  (*pcVar4)();
}



/* Entry: 10aa0adfc; end: 10aa0b18f;  */

void FUN_10aa0adfc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *unaff_x27;
  long *plVar20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar14 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  if (plVar14 != plVar3) {
    plVar20 = (long *)0x0;
    plVar19 = (long *)0x0;
    plVar1 = param_2 + 3;
    plVar2 = param_2 + 5;
    do {
      plVar12 = plVar14;
      FUN_10a2063e0();
      plVar18 = (long *)param_2[4];
      if (plVar18 != (long *)0x0) {
        uVar13 = (long)plVar18 - 1;
        if (((ulong)plVar18 & uVar13) == 0) {
          unaff_x27 = (long *)(uVar13 & (ulong)plVar12);
        }
        else {
          unaff_x27 = plVar12;
          if (plVar18 <= plVar12) {
            uVar11 = 0;
            if (plVar18 != (long *)0x0) {
              uVar11 = (ulong)plVar12 / (ulong)plVar18;
            }
            unaff_x27 = (long *)((long)plVar12 - uVar11 * (long)plVar18);
          }
        }
        puVar8 = *(undefined8 **)(*plVar1 + (long)unaff_x27 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar15 = (long *)*puVar8; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            plVar9 = (long *)plVar15[1];
            if (plVar9 == plVar12) {
              if (plVar15[6] == plVar14[4]) {
                plVar9 = plVar15 + 2;
                FUN_10a2064c0(plVar9,plVar14);
                if (((ulong)plVar9 & 1) != 0) goto LAB_10aa0b04c;
              }
            }
            else {
              if (((ulong)plVar18 & uVar13) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar13);
              }
              else if (plVar18 <= plVar9) {
                uVar11 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar11 = (ulong)plVar9 / (ulong)plVar18;
                }
                plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar18);
              }
              if (plVar9 != unaff_x27) break;
            }
          }
        }
      }
      plVar15 = (long *)0x48;
      __Znwm();
      *plVar15 = 0;
      plVar15[1] = (long)plVar12;
      plVar15[2] = *plVar14;
      plVar15[4] = 0;
      plVar15[5] = 0;
      plVar15[3] = 0;
      FUN_10a0ca588();
      lVar10 = plVar14[4];
      plVar15[7] = 0;
      plVar15[8] = 0;
      plVar15[6] = lVar10;
      if ((plVar18 == (long *)0x0) ||
         (*(float *)(param_2 + 7) * (float)plVar18 < (float)(param_2[6] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar18) {
          uVar13 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar18 << 1;
        uVar11 = (ulong)((float)(param_2[6] + 1) / *(float *)(param_2 + 7));
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        FUN_10aa0b1a4(plVar1,uVar13);
        plVar18 = (long *)param_2[4];
        if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
          unaff_x27 = (long *)((long)plVar18 - 1U & (ulong)plVar12);
        }
        else {
          unaff_x27 = plVar12;
          if (plVar18 <= plVar12) {
            uVar13 = 0;
            if (plVar18 != (long *)0x0) {
              uVar13 = (ulong)plVar12 / (ulong)plVar18;
            }
            unaff_x27 = (long *)((long)plVar12 - uVar13 * (long)plVar18);
          }
        }
      }
      lVar10 = *plVar1;
      plVar12 = *(long **)(lVar10 + (long)unaff_x27 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar15 = *plVar2;
        *plVar2 = (long)plVar15;
        *(long **)(lVar10 + (long)unaff_x27 * 8) = plVar2;
        if (*plVar15 != 0) {
          plVar12 = *(long **)(*plVar15 + 8);
          if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar18 - 1U);
          }
          else if (plVar18 <= plVar12) {
            uVar13 = 0;
            if (plVar18 != (long *)0x0) {
              uVar13 = (ulong)plVar12 / (ulong)plVar18;
            }
            plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar18);
          }
          *(long **)(*plVar1 + (long)plVar12 * 8) = plVar15;
        }
      }
      else {
        *plVar15 = *plVar12;
        *plVar12 = (long)plVar15;
      }
      param_2[6] = param_2[6] + 1;
LAB_10aa0b04c:
      unaff_x27 = (long *)plVar15[7];
      lVar10 = plVar15[8];
      if (plVar19 < plVar20) {
        *plVar19 = (long)unaff_x27;
        plVar19[1] = lVar10;
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar19 = plVar19 + 2;
      }
      else {
        lVar16 = *param_1;
        lVar17 = (long)plVar19 - lVar16;
        uVar13 = (lVar17 >> 4) + 1;
        if (uVar13 >> 0x3c != 0) {
          FUN_10aa0b190();
LAB_10aa0b15c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa0b160);
          (*pcVar6)();
        }
        uVar11 = (long)plVar20 - lVar16 >> 3;
        if (uVar11 <= uVar13) {
          uVar11 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar20 - lVar16)) {
          uVar11 = 0xfffffffffffffff;
        }
        if (uVar11 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10aa0b15c;
        }
        lVar7 = uVar11 << 4;
        __Znwm();
        plVar12 = (long *)(lVar7 + lVar17);
        *plVar12 = (long)unaff_x27;
        plVar12[1] = lVar10;
        if (lVar10 != 0) {
          plVar19 = (long *)(lVar10 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *plVar19 = *plVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar20 = (long *)(lVar7 + uVar11 * 0x10);
        plVar19 = plVar12 + 2;
        _memcpy(plVar12 + (lVar17 >> 4) * -2,lVar16,lVar17);
        *param_1 = (long)(plVar12 + (lVar17 >> 4) * -2);
        param_1[2] = (long)plVar20;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
      }
      param_1[1] = (long)plVar19;
      plVar14 = plVar14 + 5;
    } while (plVar14 != plVar3);
  }
  return;
}



/* Entry: 10aa0b190; end: 10aa0b1a3;  */

void FUN_10aa0b190(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar5 = plVar2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)plVar2[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)plVar2[3] / *(float *)(plVar2 + 4));
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
      lVar3 = *plVar2;
      *plVar2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      plVar2[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *plVar2;
    *plVar2 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    plVar2[1] = (long)param_2;
    do {
      *(undefined8 *)(*plVar2 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)plVar2[2];
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
      *(long **)(*plVar2 + (long)plVar10 * 8) = plVar2 + 2;
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
          lVar3 = *plVar2;
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
  *plVar5 = 0;
  if (lVar3 == 0) {
    return;
  }
  if ((char)plVar5[2] == '\x01') {
    func_0x00010a283f5c(lVar3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10aa0b1a4; end: 10aa0b373;  */

void FUN_10aa0b1a4(long *param_1,long *param_2)

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
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010a283f5c(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aa0b374; end: 10aa0b417;  */

void FUN_10aa0b374(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a283f5c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0b418; end: 10aa0b647;  */

void FUN_10aa0b418(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10aa0b648(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa0adfc(&lStack_98,plVar16);
  lVar13 = lStack_90 - lStack_98 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar13);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lStack_90 != lStack_98) {
    lVar14 = 0;
    do {
      lVar12 = lStack_98 + lVar14 * 0x10;
      lVar10 = *(long *)(lVar12 + 8);
      plVar16 = *(long **)(lVar12 + 8);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c48fb0;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar14,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  func_0x00010aa0b3bc(&lStack_98);
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar13 = plVar7[0x59];
  uVar9 = lVar13 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    puVar8 = ppuVar2[lVar13 + 2];
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  else {
    puVar8 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar11 = (undefined *)plVar7[0x4c];
  lVar13 = (long)puVar11 - (long)puVar3;
  puVar15 = (undefined *)(lVar13 >> 4);
  if (puVar15 < puVar8) {
    uVar9 = (long)puVar8 - (long)puVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar11 >> 4) < uVar9) {
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar11 = (undefined *)(lVar14 - (long)puVar3 >> 3);
        if (puVar11 <= puVar8) {
          puVar11 = puVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar3)) {
          puVar11 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar11 >> 0x3c == 0) {
          lVar10 = (long)puVar11 << 4;
          __Znwm();
          lVar12 = lVar10 + lVar13;
          _bzero(lVar12,uVar9 * 0x10);
          puVar15 = (undefined *)(lVar12 + (long)puVar15 * -0x10);
          _memcpy(puVar15,puVar3,lVar13);
          *ppuVar2 = puVar15;
          plVar7[0x4c] = lVar12 + uVar9 * 0x10;
          plVar7[0x4d] = lVar10 + (long)puVar11 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar14;
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
    _bzero(puVar11,uVar9 * 0x10);
    plVar7[0x4c] = (long)(puVar11 + uVar9 * 0x10);
  }
  else if (puVar8 < puVar15) {
    while (puVar11 != puVar3 + (long)puVar8 * 0x10) {
      puVar11 = puVar11 + -0x10;
      func_0x00010988c204(puVar11);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar8 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar8;
  return;
}



/* Entry: 10aa0b648; end: 10aa0b68b;  */

undefined8 * FUN_10aa0b648(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c38018) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10aa0b68c; end: 10aa0b6a3;  */

undefined8 FUN_10aa0b68c(void)

{
  return 0;
}



/* Entry: 10aa0b6a4; end: 10aa0b6d3;  */

void FUN_10aa0b6a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a283e44(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10aa0b6d4; end: 10aa0b75f;  */

void FUN_10aa0b6d4(ulong *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plStack_100;
  long *plStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar14 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar14 == 0) {
    return;
  }
  uVar3 = (lVar14 >> 2) * -0x5555555555555555;
  if (uVar3 < 0x1555555555555556) {
    FUN_10aa0b774();
    *param_1 = uVar3;
    param_1[2] = uVar3 + param_3 * 0xc;
    _memmove();
    param_1[1] = uVar3 + lVar14;
    return;
  }
  FUN_10aa0b760();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar4 < (long *)0x1555555555555556) {
    __Znwm((long)plVar4 * 0xc);
    return;
  }
  func_0x000109ffded8();
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
  FUN_10aa0b648(plVar4,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa0b6d4(&plStack_100,plVar6);
  lVar14 = ((long)plStack_f8 - (long)plStack_100 >> 2) * -0x5555555555555555;
  (**(code **)(*plVar4 + 600))(&puStack_d0,plVar4,lVar14);
  puStack_d8 = puStack_d0;
  if (plStack_f8 == plStack_100) {
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_d0;
    if (plStack_100 != (long *)0x0) goto LAB_10aa0ba0c;
  }
  else {
    lVar16 = 0;
    plVar6 = plStack_100;
    do {
      plVar7 = plVar4;
      (**(code **)(*plVar4 + 0x58))();
      if ((*(byte *)(plVar7 + 0x3c) & 1) == 0) {
LAB_10aa0ba38:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0ba3c);
        (*pcVar2)();
      }
      plVar19 = (long *)plVar7[4];
      if (plVar19 == (long *)0x0) {
        func_0x000109899fd8(plVar7);
        plVar19 = (long *)plVar7[4];
      }
      plVar7[4] = *plVar19;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&PTR_FUN_110c37fc8;
      lVar10 = *plVar6;
      *(int *)(plVar19 + 2) = (int)plVar6[1];
      plVar19[1] = lVar10;
      plVar8 = plVar4;
      (**(code **)(*plVar4 + 0x58))();
      plVar7 = plVar8;
      FUN_10a065534();
      if (plVar7 == (long *)0x0) {
        if ((*(byte *)(plVar8 + 0x3c) & 1) == 0) goto LAB_10aa0ba38;
        plVar7 = plVar8 + 0x1b;
      }
      puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,7);
      plVar9 = plVar4;
      (**(code **)(*plVar4 + 0x98))(plVar4,*plVar7);
      plStack_c8 = plVar9;
      (**(code **)(*plVar4 + 0x2f8))(&puStack_e0,plVar4,plVar19,plVar8,&UNK_10989ba24,&puStack_d0);
      puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,7);
      if ((3 < (int)puStack_d0) && (plStack_c8 != (long *)0x0)) {
        (**(code **)*plStack_c8)();
      }
      (**(code **)(*plVar4 + 0x290))(plVar4,&puStack_d8,lVar16,&puStack_e8);
      if ((3 < (int)puStack_e8) && (puStack_e0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e0)();
      }
      lVar16 = lVar16 + 1;
      plVar6 = (long *)((long)plVar6 + 0xc);
    } while (lVar14 - lVar16 != 0);
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_d8;
LAB_10aa0ba0c:
    __ZdlPv(plStack_100);
  }
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar3 = lVar14 - 1;
  plVar5[0x59] = uVar3;
  if (uVar3 < 8) {
    uVar3 = plVar4[lVar14 + 2];
    if (plVar5[0x5a] == uVar3) {
      return;
    }
  }
  else {
    uVar3 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar3) {
      return;
    }
  }
  puVar1 = (undefined8 *)*plVar4;
  puVar13 = (undefined8 *)plVar5[0x4c];
  lVar14 = (long)puVar13 - (long)puVar1;
  uVar17 = lVar14 >> 4;
  if (uVar17 < uVar3) {
    uVar18 = uVar3 - uVar17;
    puVar15 = (undefined8 *)plVar5[0x4d];
    if ((ulong)((long)puVar15 - (long)puVar13 >> 4) < uVar18) {
      if (uVar3 >> 0x3c == 0) {
        uVar11 = (long)puVar15 - (long)puVar1 >> 3;
        if (uVar11 <= uVar3) {
          uVar11 = uVar3;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)puVar1)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar4;
        if (uVar11 >> 0x3c == 0) {
          lVar10 = uVar11 << 4;
          __Znwm();
          lVar16 = lVar10 + lVar14;
          _bzero(lVar16,uVar18 * 0x10);
          lVar12 = lVar16 + uVar17 * -0x10;
          _memcpy(lVar12,puVar1,lVar14);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar16 + uVar18 * 0x10;
          plVar5[0x4d] = lVar10 + uVar11 * 0x10;
          puStack_e8 = puVar1;
          puStack_e0 = puVar1;
          puStack_d8 = puVar1;
          puStack_d0 = puVar15;
          func_0x00010988c1b8(&puStack_e8);
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
    _bzero(puVar13,uVar18 * 0x10);
    plVar5[0x4c] = (long)(puVar13 + uVar18 * 2);
  }
  else if (uVar3 < uVar17) {
    while (puVar13 != puVar1 + uVar3 * 2) {
      puVar13 = puVar13 + -2;
      func_0x00010988c204(puVar13);
    }
    plVar5[0x4c] = (long)(puVar1 + uVar3 * 2);
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar3;
  return;
}



/* Entry: 10aa0b760; end: 10aa0b773;  */

void FUN_10aa0b760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar3 < (long *)0x1555555555555556) {
    __Znwm((long)plVar3 * 0xc);
    return;
  }
  func_0x000109ffded8();
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
  FUN_10aa0b648(plVar3,param_2);
  FUN_10a052e3c(param_4);
  FUN_10aa0b6d4(&plStack_d0,plVar5);
  lVar14 = ((long)plStack_c8 - (long)plStack_d0 >> 2) * -0x5555555555555555;
  (**(code **)(*plVar3 + 600))(&puStack_a0,plVar3,lVar14);
  puStack_a8 = puStack_a0;
  if (plStack_c8 == plStack_d0) {
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_a0;
    if (plStack_d0 != (long *)0x0) goto LAB_10aa0ba0c;
  }
  else {
    lVar16 = 0;
    plVar5 = plStack_d0;
    do {
      plVar6 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      if ((*(byte *)(plVar6 + 0x3c) & 1) == 0) {
LAB_10aa0ba38:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0ba3c);
        (*pcVar2)();
      }
      plVar19 = (long *)plVar6[4];
      if (plVar19 == (long *)0x0) {
        func_0x000109899fd8(plVar6);
        plVar19 = (long *)plVar6[4];
      }
      plVar6[4] = *plVar19;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&PTR_FUN_110c37fc8;
      lVar10 = *plVar5;
      *(int *)(plVar19 + 2) = (int)plVar5[1];
      plVar19[1] = lVar10;
      plVar7 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      plVar6 = plVar7;
      FUN_10a065534();
      if (plVar6 == (long *)0x0) {
        if ((*(byte *)(plVar7 + 0x3c) & 1) == 0) goto LAB_10aa0ba38;
        plVar6 = plVar7 + 0x1b;
      }
      puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,7);
      plVar8 = plVar3;
      (**(code **)(*plVar3 + 0x98))(plVar3,*plVar6);
      plStack_98 = plVar8;
      (**(code **)(*plVar3 + 0x2f8))(&puStack_b0,plVar3,plVar19,plVar7,&UNK_10989ba24,&puStack_a0);
      puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,7);
      if ((3 < (int)puStack_a0) && (plStack_98 != (long *)0x0)) {
        (**(code **)*plStack_98)();
      }
      (**(code **)(*plVar3 + 0x290))(plVar3,&puStack_a8,lVar16,&puStack_b8);
      if ((3 < (int)puStack_b8) && (puStack_b0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_b0)();
      }
      lVar16 = lVar16 + 1;
      plVar5 = (long *)((long)plVar5 + 0xc);
    } while (lVar14 - lVar16 != 0);
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_a8;
LAB_10aa0ba0c:
    __ZdlPv(plStack_d0);
  }
  plVar3 = plVar4 + 0x4b;
  lVar14 = plVar4[0x59];
  uVar9 = lVar14 - 1;
  plVar4[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar3[lVar14 + 2];
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
  puVar1 = (undefined8 *)*plVar3;
  puVar13 = (undefined8 *)plVar4[0x4c];
  lVar14 = (long)puVar13 - (long)puVar1;
  uVar17 = lVar14 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    puVar15 = (undefined8 *)plVar4[0x4d];
    if ((ulong)((long)puVar15 - (long)puVar13 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = (long)puVar15 - (long)puVar1 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)puVar1)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_98 = plVar3;
        if (uVar11 >> 0x3c == 0) {
          lVar10 = uVar11 << 4;
          __Znwm();
          lVar16 = lVar10 + lVar14;
          _bzero(lVar16,uVar18 * 0x10);
          lVar12 = lVar16 + uVar17 * -0x10;
          _memcpy(lVar12,puVar1,lVar14);
          *plVar3 = lVar12;
          plVar4[0x4c] = lVar16 + uVar18 * 0x10;
          plVar4[0x4d] = lVar10 + uVar11 * 0x10;
          puStack_b8 = puVar1;
          puStack_b0 = puVar1;
          puStack_a8 = puVar1;
          puStack_a0 = puVar15;
          func_0x00010988c1b8(&puStack_b8);
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
    _bzero(puVar13,uVar18 * 0x10);
    plVar4[0x4c] = (long)(puVar13 + uVar18 * 2);
  }
  else if (uVar9 < uVar17) {
    while (puVar13 != puVar1 + uVar9 * 2) {
      puVar13 = puVar13 + -2;
      func_0x00010988c204(puVar13);
    }
    plVar4[0x4c] = (long)(puVar1 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar9;
  return;
}



/* Entry: 10aa0b774; end: 10aa0b7b7;  */

void FUN_10aa0b774(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  
  if (param_1 < (long *)0x1555555555555556) {
    __Znwm((long)param_1 * 0xc);
    return;
  }
  func_0x000109ffded8();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_1;
  FUN_10aa0b648(param_1,param_2);
  FUN_10a052e3c(param_4);
  FUN_10aa0b6d4(&plStack_c0,plVar4);
  lVar13 = ((long)plStack_b8 - (long)plStack_c0 >> 2) * -0x5555555555555555;
  (**(code **)(*param_1 + 600))(&puStack_90,param_1,lVar13);
  puStack_98 = puStack_90;
  if (plStack_b8 == plStack_c0) {
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_90;
    if (plStack_c0 != (long *)0x0) goto LAB_10aa0ba0c;
  }
  else {
    lVar15 = 0;
    plVar4 = plStack_c0;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x58))();
      if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
LAB_10aa0ba38:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0ba3c);
        (*pcVar2)();
      }
      plVar18 = (long *)plVar5[4];
      if (plVar18 == (long *)0x0) {
        func_0x000109899fd8(plVar5);
        plVar18 = (long *)plVar5[4];
      }
      plVar5[4] = *plVar18;
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110c37fc8;
      lVar9 = *plVar4;
      *(int *)(plVar18 + 2) = (int)plVar4[1];
      plVar18[1] = lVar9;
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x58))();
      plVar5 = plVar6;
      FUN_10a065534();
      if (plVar5 == (long *)0x0) {
        if ((*(byte *)(plVar6 + 0x3c) & 1) == 0) goto LAB_10aa0ba38;
        plVar5 = plVar6 + 0x1b;
      }
      puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,7);
      plVar7 = param_1;
      (**(code **)(*param_1 + 0x98))(param_1,*plVar5);
      plStack_88 = plVar7;
      (**(code **)(*param_1 + 0x2f8))(&puStack_a0,param_1,plVar18,plVar6,&UNK_10989ba24,&puStack_90)
      ;
      puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,7);
      if ((3 < (int)puStack_90) && (plStack_88 != (long *)0x0)) {
        (**(code **)*plStack_88)();
      }
      (**(code **)(*param_1 + 0x290))(param_1,&puStack_98,lVar15,&puStack_a8);
      if ((3 < (int)puStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a0)();
      }
      lVar15 = lVar15 + 1;
      plVar4 = (long *)((long)plVar4 + 0xc);
    } while (lVar13 - lVar15 != 0);
    *extraout_x8 = 7;
    *(undefined8 **)(extraout_x8 + 2) = puStack_98;
LAB_10aa0ba0c:
    __ZdlPv(plStack_c0);
  }
  plVar4 = plVar3 + 0x4b;
  lVar13 = plVar3[0x59];
  uVar8 = lVar13 - 1;
  plVar3[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar13 + 2];
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
  puVar1 = (undefined8 *)*plVar4;
  puVar12 = (undefined8 *)plVar3[0x4c];
  lVar13 = (long)puVar12 - (long)puVar1;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    puVar14 = (undefined8 *)plVar3[0x4d];
    if ((ulong)((long)puVar14 - (long)puVar12 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = (long)puVar14 - (long)puVar1 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar14 - (long)puVar1)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar9 = uVar10 << 4;
          __Znwm();
          lVar15 = lVar9 + lVar13;
          _bzero(lVar15,uVar17 * 0x10);
          lVar11 = lVar15 + uVar16 * -0x10;
          _memcpy(lVar11,puVar1,lVar13);
          *plVar4 = lVar11;
          plVar3[0x4c] = lVar15 + uVar17 * 0x10;
          plVar3[0x4d] = lVar9 + uVar10 * 0x10;
          puStack_a8 = puVar1;
          puStack_a0 = puVar1;
          puStack_98 = puVar1;
          puStack_90 = puVar14;
          func_0x00010988c1b8(&puStack_a8);
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
    _bzero(puVar12,uVar17 * 0x10);
    plVar3[0x4c] = (long)(puVar12 + uVar17 * 2);
  }
  else if (uVar8 < uVar16) {
    while (puVar12 != puVar1 + uVar8 * 2) {
      puVar12 = puVar12 + -2;
      func_0x00010988c204(puVar12);
    }
    plVar3[0x4c] = (long)(puVar1 + uVar8 * 2);
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar8;
  return;
}



/* Entry: 10aa0b7b8; end: 10aa0babb;  */

void FUN_10aa0b7b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plStack_a0;
  long *plStack_98;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
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
  FUN_10aa0b648(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa0b6d4(&plStack_a0,plVar4);
  lVar13 = ((long)plStack_98 - (long)plStack_a0 >> 2) * -0x5555555555555555;
  (**(code **)(*param_2 + 600))(&puStack_70,param_2,lVar13);
  puStack_78 = puStack_70;
  if (plStack_98 == plStack_a0) {
    *param_1 = 7;
    *(undefined8 **)(param_1 + 2) = puStack_70;
    if (plStack_a0 != (long *)0x0) goto LAB_10aa0ba0c;
  }
  else {
    lVar15 = 0;
    plVar4 = plStack_a0;
    do {
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
LAB_10aa0ba38:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0ba3c);
        (*pcVar2)();
      }
      plVar18 = (long *)plVar5[4];
      if (plVar18 == (long *)0x0) {
        func_0x000109899fd8(plVar5);
        plVar18 = (long *)plVar5[4];
      }
      plVar5[4] = *plVar18;
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110c37fc8;
      lVar9 = *plVar4;
      *(int *)(plVar18 + 2) = (int)plVar4[1];
      plVar18[1] = lVar9;
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x58))();
      plVar5 = plVar6;
      FUN_10a065534();
      if (plVar5 == (long *)0x0) {
        if ((*(byte *)(plVar6 + 0x3c) & 1) == 0) goto LAB_10aa0ba38;
        plVar5 = plVar6 + 0x1b;
      }
      puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,7);
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*plVar5);
      plStack_68 = plVar7;
      (**(code **)(*param_2 + 0x2f8))(&puStack_80,param_2,plVar18,plVar6,&UNK_10989ba24,&puStack_70)
      ;
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,7);
      if ((3 < (int)puStack_70) && (plStack_68 != (long *)0x0)) {
        (**(code **)*plStack_68)();
      }
      (**(code **)(*param_2 + 0x290))(param_2,&puStack_78,lVar15,&puStack_88);
      if ((3 < (int)puStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      lVar15 = lVar15 + 1;
      plVar4 = (long *)((long)plVar4 + 0xc);
    } while (lVar13 - lVar15 != 0);
    *param_1 = 7;
    *(undefined8 **)(param_1 + 2) = puStack_78;
LAB_10aa0ba0c:
    __ZdlPv(plStack_a0);
  }
  plVar4 = plVar3 + 0x4b;
  lVar13 = plVar3[0x59];
  uVar8 = lVar13 - 1;
  plVar3[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar13 + 2];
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
  puVar1 = (undefined8 *)*plVar4;
  puVar12 = (undefined8 *)plVar3[0x4c];
  lVar13 = (long)puVar12 - (long)puVar1;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    puVar14 = (undefined8 *)plVar3[0x4d];
    if ((ulong)((long)puVar14 - (long)puVar12 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = (long)puVar14 - (long)puVar1 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar14 - (long)puVar1)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar9 = uVar10 << 4;
          __Znwm();
          lVar15 = lVar9 + lVar13;
          _bzero(lVar15,uVar17 * 0x10);
          lVar11 = lVar15 + uVar16 * -0x10;
          _memcpy(lVar11,puVar1,lVar13);
          *plVar4 = lVar11;
          plVar3[0x4c] = lVar15 + uVar17 * 0x10;
          plVar3[0x4d] = lVar9 + uVar10 * 0x10;
          puStack_88 = puVar1;
          puStack_80 = puVar1;
          puStack_78 = puVar1;
          puStack_70 = puVar14;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar12,uVar17 * 0x10);
    plVar3[0x4c] = (long)(puVar12 + uVar17 * 2);
  }
  else if (uVar8 < uVar16) {
    while (puVar12 != puVar1 + uVar8 * 2) {
      puVar12 = puVar12 + -2;
      func_0x00010988c204(puVar12);
    }
    plVar3[0x4c] = (long)(puVar1 + uVar8 * 2);
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar8;
  return;
}



/* Entry: 10aa0babc; end: 10aa0bbc7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa0bb6c) */

void FUN_10aa0babc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa0b648(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0e9a40(&stack0xffffffffffffffa8,plVar4[0x15],plVar4[0x16],plVar4[0x16] - plVar4[0x15] >> 2)
  ;
  FUN_10a2e43f8(param_1,param_2,0,0);
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



/* Entry: 10aa0bbc8; end: 10aa0bcbb;  */

void FUN_10aa0bbc8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = *(long **)(param_2 + 0xc0);
  plVar1 = *(long **)(param_2 + 200);
  lVar2 = (long)plVar1 - (long)plVar3;
  if (lVar2 != 0) {
    FUN_10a7fdb38(param_1,(lVar2 >> 3) * -0x5555555555555555);
    puVar5 = (undefined8 *)param_1[1];
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1;
    puStack_50 = puVar5;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      plVar4 = plVar3 + 3;
      puStack_48 = puVar5;
      FUN_10a0e9a40(puVar5,*plVar3,plVar3[1],plVar3[1] - *plVar3 >> 2);
      puVar5 = puStack_48 + 3;
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
    uStack_58 = 1;
    puStack_48 = puVar5;
    FUN_10aa0bcbc(&puStack_70);
    param_1[1] = puVar5;
  }
  return;
}



/* Entry: 10aa0bcbc; end: 10aa0bd1f;  */

long FUN_10aa0bcbc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10aa0bd20; end: 10aa0bf03;  */

void FUN_10aa0bd20(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 *in_stack_ffffffffffffffb0;
  
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
  FUN_10aa0b648(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa0bbc8(&lStack_78,plVar4);
  lVar8 = (lStack_70 - lStack_78 >> 3) * -0x5555555555555555;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar8);
  if (lStack_70 != lStack_78) {
    lVar10 = 0;
    plVar4 = (long *)(lStack_78 + 8);
    do {
      FUN_10a2e43f8(&stack0xffffffffffffffa8,param_2,plVar4[-1],*plVar4 - plVar4[-1] >> 2);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar10,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      plVar4 = plVar4 + 3;
      lVar10 = lVar10 + 1;
    } while (lVar8 - lVar10 != 0);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  func_0x00010a1f4bf4(&stack0xffffffffffffffa8);
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar5 = lVar8 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10aa0bf04; end: 10aa0bfff;  */

undefined1  [16] FUN_10aa0bf04(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c38320;
  puVar1 = &UNK_10f6891b4;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c38320;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa0c000; end: 10aa0c063;  */

ulong FUN_10aa0c000(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa0c064);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa0c064,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aa0c064; end: 10aa0c667;  */

/* WARNING: Removing unreachable block (ram,0x00010aa0c410) */

void FUN_10aa0c064(undefined4 *param_1,ulong *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong **ppuVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong **ppuStack_1f0;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  ulong *puStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  puVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if (*(ulong *)((long)puVar6 + 0x2c8) < 8) {
    *(undefined8 *)((long)puVar6 + *(ulong *)((long)puVar6 + 0x2c8) * 8 + 0x270) =
         *(undefined8 *)((long)puVar6 + 0x2d0);
    *(long *)((long)puVar6 + 0x2c8) = *(long *)((long)puVar6 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc((long)puVar6 + 600);
  }
  puVar7 = param_2;
  func_0x000109898688(param_2,param_3);
  if (puVar7 == (ulong *)0x0) {
    puVar9 = &UNK_10f68f52e;
  }
  else {
    puVar11 = param_2;
    FUN_10a053854(param_2,puVar7);
    if ((puVar11 != (ulong *)0x0) && (___dynamic_cast(), puVar11 != (ulong *)0x0)) {
      FUN_10aa0c668(param_5);
      FUN_10a3f3f30(&pppuStack_c8,param_2,param_4);
      if (*(int *)(param_4 + 0x10) == 7) {
        puVar7 = param_2;
        (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
        puVar19 = param_2;
        puStack_210 = puVar7;
        (**(code **)(*param_2 + 0x208))(param_2,&puStack_210);
        if (((ulong)puVar19 & 1) != 0) {
          puStack_b0 = puStack_210;
          ppuVar10 = &puStack_b0;
          puVar7 = param_2;
          (**(code **)(*param_2 + 0x268))();
          puStack_e0 = (ulong *)0x0;
          puStack_d8 = (ulong *)0x0;
          puStack_d0 = (ulong *)0x0;
          if (puVar7 != (ulong *)0x0) {
            if ((ulong)puVar7 >> 0x3c != 0) {
              func_0x00010aa0c68c();
              goto LAB_10aa0c588;
            }
            puVar19 = puVar7;
            ppuStack_1f0 = &puStack_e0;
            FUN_10aa0c6a0();
            puVar21 = (ulong *)((long)puVar19 - ((long)puStack_d8 - (long)puStack_e0));
            _memcpy(puVar21);
            puStack_200 = puStack_e0;
            puStack_1f8 = puStack_d0;
            puStack_210 = puStack_e0;
            puStack_208 = puStack_e0;
            puStack_e0 = puVar21;
            puStack_d8 = puVar19;
            puStack_d0 = puVar19 + (long)ppuVar10 * 2;
            func_0x00010aa0c6d4(&puStack_210);
            puVar19 = (ulong *)0x0;
            do {
              (**(code **)(*param_2 + 0x288))(&puStack_98,param_2,&puStack_b0,puVar19);
              ppuVar10 = &puStack_98;
              FUN_10a204940(&uStack_80,param_2);
              if (puStack_d8 < puStack_d0) {
                puStack_d8[1] = (ulong)puStack_78;
                *puStack_d8 = uStack_80;
                uStack_80 = 0;
                puStack_78 = (ulong *)0x0;
                puStack_d8 = puStack_d8 + 2;
              }
              else {
                lVar12 = (long)puStack_d8 - (long)puStack_e0;
                uVar13 = (lVar12 >> 4) + 1;
                if (uVar13 >> 0x3c != 0) {
                  func_0x00010aa0c68c();
                  goto LAB_10aa0c588;
                }
                uVar15 = (long)puStack_d0 - (long)puStack_e0 >> 3;
                if (uVar15 <= uVar13) {
                  uVar15 = uVar13;
                }
                if (0x7fffffffffffffef < (ulong)((long)puStack_d0 - (long)puStack_e0)) {
                  uVar15 = 0xfffffffffffffff;
                }
                ppuStack_1f0 = &puStack_e0;
                FUN_10aa0c6a0();
                puVar21 = (ulong *)(uVar15 + lVar12);
                puVar17 = puVar21 + 2;
                puVar21[1] = (ulong)puStack_78;
                *puVar21 = uStack_80;
                uStack_80 = 0;
                puStack_78 = (ulong *)0x0;
                puVar21 = (ulong *)((long)puVar21 - ((long)puStack_d8 - (long)puStack_e0));
                _memcpy(puVar21);
                puStack_200 = puStack_e0;
                puStack_1f8 = puStack_d0;
                puStack_210 = puStack_e0;
                puStack_208 = puStack_e0;
                puStack_e0 = puVar21;
                puStack_d8 = puVar17;
                puStack_d0 = (ulong *)(uVar15 + (long)ppuVar10 * 0x10);
                func_0x00010aa0c6d4(&puStack_210);
                puVar21 = puStack_78;
                puStack_d8 = puVar17;
                if (puStack_78 != (ulong *)0x0) {
                  plVar1 = (long *)(puStack_78 + 1);
                  do {
                    lVar12 = *plVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = lVar12 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar12 == 0) {
                    (**(code **)(*puStack_78 + 0x10))(puStack_78);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar21);
                  }
                }
              }
              if ((3 < (int)puStack_98) && (puStack_90 != (ulong *)0x0)) {
                (**(code **)*puStack_90)();
              }
              puVar19 = (ulong *)((long)puVar19 + 1);
            } while (puVar19 != puVar7);
          }
          if (puStack_b0 != (ulong *)0x0) {
            (**(code **)*puStack_b0)();
          }
          if (-1 < (char)bStack_b1) {
            uStack_c0 = (ulong)bStack_b1;
            pppuStack_c8 = &pppuStack_c8;
          }
          FUN_10a1c0bf8(&uStack_80,pppuStack_c8,uStack_c0,0);
          puStack_210 = (ulong *)CONCAT44(puStack_210._4_4_,0x3f800000);
          FUN_10a14e0c0(&puStack_98,
                        ((long)((long)puStack_78 - uStack_80) >> 4) * -0x5555555555555555,
                        &puStack_210);
          puStack_b0 = (ulong *)0x0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          if ((puStack_e0 != puStack_d8) && ((ulong *)*puStack_e0 != (ulong *)0x0)) {
            puStack_b0 = (ulong *)*puStack_e0;
          }
          FUN_10a9e2380(&puStack_210,*(undefined8 *)((long)puVar11 + 0x18),&uStack_80,&puStack_98,
                        &puStack_b0,0,0,0,0);
          if (puStack_98 != (ulong *)0x0) {
            puStack_90 = puStack_98;
            __ZdlPv();
          }
          puStack_98 = &uStack_80;
          FUN_10a1cd268(&puStack_98);
          func_0x00010aa0c720(&puStack_e0);
          puVar7 = param_2;
          (**(code **)(*param_2 + 0x58))();
          if ((puVar7[0x3c] & 1) != 0) {
            puVar8 = (undefined8 *)0x138;
            __ZnwmRKSt9nothrow_t(0x138,PTR___ZSt7nothrow_1103469d8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &PTR_FUN_110c38018;
              func_0x00010a283ccc(puVar8 + 1,&puStack_210);
            }
            puVar11 = param_2;
            (**(code **)(*param_2 + 0x58))();
            puVar7 = puVar11;
            FUN_10a065534();
            if (puVar7 == (ulong *)0x0) {
              if ((puVar11[0x3c] & 1) == 0) goto LAB_10aa0c588;
              puVar7 = puVar11 + 0x1b;
            }
            uStack_80 = CONCAT44(uStack_80._4_4_,7);
            puVar19 = param_2;
            (**(code **)(*param_2 + 0x98))(param_2,*puVar7);
            puStack_78 = puVar19;
            (**(code **)(*param_2 + 0x2f8))
                      (param_1 + 2,param_2,puVar8,puVar11,&UNK_10989ba24,&uStack_80);
            *param_1 = 7;
            if ((3 < (int)uStack_80) && (puStack_78 != (ulong *)0x0)) {
              (**(code **)*puStack_78)();
            }
            FUN_10a283e44(&puStack_210);
            puVar7 = (ulong *)((long)puVar6 + 600);
            lVar12 = *(long *)((long)puVar6 + 0x2c8);
            uVar13 = lVar12 - 1;
            *(ulong *)((long)puVar6 + 0x2c8) = uVar13;
            if (uVar13 < 8) {
              uVar13 = puVar7[lVar12 + 2];
              if (*(ulong *)((long)puVar6 + 0x2d0) == uVar13) {
                return;
              }
            }
            else {
              puVar11 = (ulong *)(*(long *)((long)puVar6 + 0x2b8) + -8);
              uVar13 = *puVar11;
              *(ulong **)((long)puVar6 + 0x2b8) = puVar11;
              if (*(ulong *)((long)puVar6 + 0x2d0) == uVar13) {
                return;
              }
            }
            uVar15 = *puVar7;
            lVar12 = *(long *)((long)puVar6 + 0x260);
            lVar16 = lVar12 - uVar15;
            uVar20 = lVar16 >> 4;
            if (uVar20 < uVar13) {
              uVar22 = uVar13 - uVar20;
              lVar18 = *(long *)((long)puVar6 + 0x268);
              if ((ulong)(lVar18 - lVar12 >> 4) < uVar22) {
                if (uVar13 >> 0x3c == 0) {
                  uVar14 = (long)(lVar18 - uVar15) >> 3;
                  if (uVar14 <= uVar13) {
                    uVar14 = uVar13;
                  }
                  if (0x7fffffffffffffef < lVar18 - uVar15) {
                    uVar14 = 0xfffffffffffffff;
                  }
                  puStack_68 = puVar7;
                  if (uVar14 >> 0x3c == 0) {
                    lVar5 = uVar14 << 4;
                    __Znwm();
                    lVar12 = lVar5 + lVar16;
                    _bzero(lVar12,uVar22 * 0x10);
                    uVar20 = lVar12 + uVar20 * -0x10;
                    _memcpy(uVar20,uVar15,lVar16);
                    *puVar7 = uVar20;
                    *(ulong *)((long)puVar6 + 0x260) = lVar12 + uVar22 * 0x10;
                    *(ulong *)((long)puVar6 + 0x268) = lVar5 + uVar14 * 0x10;
                    uStack_88 = uVar15;
                    uStack_80 = uVar15;
                    puStack_78 = (ulong *)uVar15;
                    lStack_70 = lVar18;
                    func_0x00010988c1b8(&uStack_88);
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
              _bzero(lVar12,uVar22 * 0x10);
              *(ulong *)((long)puVar6 + 0x260) = lVar12 + uVar22 * 0x10;
            }
            else if (uVar13 < uVar20) {
              lVar16 = uVar15 + uVar13 * 0x10;
              while (lVar12 != lVar16) {
                lVar12 = lVar12 + -0x10;
                func_0x00010988c204(lVar12);
              }
              *(long *)((long)puVar6 + 0x260) = lVar16;
            }
code_r0x00010988c138:
            *(ulong *)((long)puVar6 + 0x2d0) = uVar13;
            return;
          }
          goto LAB_10aa0c588;
        }
        if (puStack_210 != (ulong *)0x0) {
          (**(code **)*puStack_210)();
        }
      }
      func_0x00010988bd28(&UNK_10f58253c);
      goto LAB_10aa0c588;
    }
    puVar9 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar9);
LAB_10aa0c588:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa0c58c);
  (*pcVar4)();
}



/* Entry: 10aa0c668; end: 10aa0c69f;  */

undefined1  [16] FUN_10aa0c668(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((int)param_1 == 2) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  uVar3 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = plVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar4 = plVar1[2];
  while (lVar4 != lVar2) {
    plVar1[2] = lVar4 + -0x10;
    func_0x00010a1ff0cc();
    lVar4 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10aa0c6a0; end: 10aa0c837;  */

undefined1  [16] FUN_10aa0c6a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a1ff0cc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10aa0c838; end: 10aa0c85f;  */

void FUN_10aa0c838(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10aa0c860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa0c860; end: 10aa0cb9f;  */

void FUN_10aa0c860(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010aa0c954(param_1 + 0x1a8);
  func_0x00010aa0c954(param_1 + 0x1e8);
  func_0x00010a9fa77c(param_1 + 0x40);
  func_0x000109759af8(*(undefined8 *)(param_1 + 0x228));
  if (*(char *)(param_1 + 599) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x240));
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x200);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (lVar1 != 0) {
    FUN_10a9fa638();
  }
  func_0x00010a1f4b9c(param_1 + 0x1e8);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c0);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar1 != 0) {
    FUN_10a9fa638();
  }
  func_0x00010a1f4b9c(param_1 + 0x1a8);
  func_0x00010aa0c9f8(param_1 + 0x178);
  if (*(long *)(param_1 + 0x160) != 0) {
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
    __ZdlPv();
  }
  func_0x00010aa0ca30(param_1 + 0xb8);
  func_0x00010aa0cac0(param_1 + 0x90);
  func_0x00010aa0caf8(param_1 + 0x68);
  func_0x00010aa0cb30(param_1 + 0x40);
  lStack_28 = param_1 + 0x28;
  func_0x00010a7bf8dc(&lStack_28);
  func_0x00010aa0cb68(param_1);
  return;
}



/* Entry: 10aa0cba0; end: 10aa0ce7b;  */

undefined8 * FUN_10aa0cba0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
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
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  uStack_70 = 0x80000000800;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  FUN_10aa0ce7c(&lStack_90,&uStack_70,&uStack_68,1);
  FUN_10aa0cf20(param_1 + 0x34,&lStack_90,0x26);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  uStack_68 = 0x40000000400;
  uStack_70 = 0x20000000200;
  lStack_60 = 0x80000000800;
  puStack_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  puStack_a8 = (undefined8 *)0x0;
  FUN_10aa0ce7c(&puStack_a8,&uStack_70,&lStack_58,3);
  puVar4 = (undefined8 *)0x4;
  FUN_10aa0cf20(param_1 + 0x3c,&puStack_a8);
  puVar1 = puStack_a8;
  if (puStack_a8 != (undefined8 *)0x0) {
    puStack_a0 = puStack_a8;
    __ZdlPv();
  }
  param_1[0x44] = param_2;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0x20d03;
  puVar3 = param_1 + 0x48;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  func_0x00010ad032d4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar3);
  lVar5 = (long)*(char *)((long)param_1 + 599);
  if (lVar5 < 0) {
    lVar5 = param_1[0x49];
  }
  *(bool *)(param_1 + 0x46) = lVar5 != 0;
  if (lVar5 != 0) {
    func_0x000107c2b054(&uStack_70,&UNK_10f689975);
    puVar1 = &uStack_70;
    FUN_10ad01b9c(puVar3);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  puVar2 = param_1 + 0x45;
  func_0x0001097599e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(*puVar3);
  }
  func_0x00010aa0c9b0(param_1 + 0x3c);
  func_0x00010aa0c9b0(param_1 + 0x34);
  func_0x00010aa0c9f8(param_1 + 0x2f);
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  func_0x00010aa0ca30(param_1 + 0x17);
  func_0x00010aa0cac0(param_1 + 0x12);
  func_0x00010aa0caf8(param_1 + 0xd);
  func_0x00010aa0cb30(param_1 + 8);
  puStack_78 = param_1 + 5;
  func_0x00010a7bf8dc(&puStack_78);
  func_0x00010aa0cb68(param_1);
  __Unwind_Resume();
  puVar3 = puVar2;
  FUN_10aa0cee8();
  puVar6 = (undefined8 *)puVar2[1];
  for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
    *puVar6 = *puVar1;
    puVar6 = puVar6 + 1;
  }
  puVar2[1] = puVar6;
  return puVar3;
}



/* Entry: 10aa0ce7c; end: 10aa0cee7;  */

void FUN_10aa0ce7c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  FUN_10aa0cee8(param_1,param_4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10aa0cee8; end: 10aa0cf1f;  */

undefined8 * FUN_10aa0cee8(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar4 = param_1;
    FUN_10a7a5734();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + (long)param_2;
    return puVar4;
  }
  FUN_10a7a5720();
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (param_1 + 4 != param_2) {
    lVar1 = *param_2;
    lVar2 = param_2[1] - lVar1;
    if (lVar2 == 0) {
      param_1[5] = 0;
    }
    else {
      if ((ulong)(lVar2 >> 3) >> 0x3d != 0) {
        FUN_10a7a5720();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa0cfcc);
        (*pcVar3)();
      }
      FUN_10aa0cee8(param_1 + 4);
      lVar5 = param_1[5];
      _memmove(lVar5,lVar1,lVar2);
      param_1[5] = lVar5 + lVar2;
    }
  }
  *(undefined4 *)(param_1 + 7) = param_3;
  return param_1;
}



/* Entry: 10aa0cf20; end: 10aa0cfff;  */

undefined4 * FUN_10aa0cf20(undefined4 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if ((long *)(param_1 + 8) != param_2) {
    lVar1 = *param_2;
    lVar2 = param_2[1] - lVar1;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 10) = 0;
    }
    else {
      if ((ulong)(lVar2 >> 3) >> 0x3d != 0) {
        FUN_10a7a5720();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa0cfcc);
        (*pcVar3)();
      }
      FUN_10aa0cee8(param_1 + 8);
      lVar4 = *(long *)(param_1 + 10);
      _memmove(lVar4,lVar1,lVar2);
      *(long *)(param_1 + 10) = lVar4 + lVar2;
    }
  }
  param_1[0xe] = param_3;
  return param_1;
}



/* Entry: 10aa0d000; end: 10aa0d253;  */

long * FUN_10aa0d000(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar8 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - 1;
    if ((uVar4 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar6 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar4 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar4 <= uVar6) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar1 * uVar4;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[2] = *param_3;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 7) = 0x3f800000;
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar4) {
      uVar2 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar2 = uVar2 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_10aa0d254(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar2 * uVar4;
      }
    }
  }
  lVar7 = *param_1;
  plVar3 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_10aa0d218;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar2 * uVar4;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_10aa0d218:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10aa0d254; end: 10aa0d423;  */

void FUN_10aa0d254(long *param_1,long *param_2)

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
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010a9faa70(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aa0d424; end: 10aa0d46b;  */

void FUN_10aa0d424(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a9faa70(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0d46c; end: 10aa0d57f;  */

long FUN_10aa0d46c(long *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_58;
  
  uVar2 = (ulong)*param_2;
  FUN_10a206478(uVar2,param_2 + 2);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          if (*(uint *)(plVar3 + 2) == *param_2) {
            puStack_58 = &UNK_10e49e72c;
            uVar4 = (ulong)(plVar3 + 3);
            FUN_10a20651c(uVar4,param_2 + 2,&puStack_58);
            if ((uVar4 & 1) != 0) {
              return (long)plVar3;
            }
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aa0d580; end: 10aa0d58f;  */

void FUN_10aa0d580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa0d590; end: 10aa0d5af;  */

void FUN_10aa0d590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38050;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0d5b0; end: 10aa0d5bf;  */

void FUN_10aa0d5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa0d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa0d5c0; end: 10aa0d667;  */

void FUN_10aa0d5c0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = param_1 + 2;
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
    param_2[1] = param_1;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
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
        (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa0d668; end: 10aa0da93;  */

long * FUN_10aa0d668(long *param_1,uint *param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  ulong uVar14;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar3 = (ulong)*param_2;
  FUN_10a206478(uVar3,param_2 + 2);
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      unaff_x26 = uVar14 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar13 <= uVar3) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar3 / uVar13;
        }
        unaff_x26 = uVar3 - uVar7 * uVar13;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(uint *)(plVar6 + 2) == *param_2) {
            plStack_78 = (long *)&UNK_10e49e72c;
            uVar7 = (ulong)(plVar6 + 3);
            FUN_10a20651c(uVar7,param_2 + 2,&plStack_78);
            if ((uVar7 & 1) != 0) {
              return plVar6;
            }
          }
        }
        else {
          if ((uVar13 & uVar14) == 0) {
            uVar7 = uVar7 & uVar14;
          }
          else if (uVar13 <= uVar7) {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar8 * uVar13;
          }
          if (uVar7 != unaff_x26) break;
        }
      }
    }
  }
  plVar6 = (long *)0x40;
  __Znwm();
  uStack_68 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar3;
  *(undefined4 *)(plVar6 + 2) = *param_3;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[3] = 0;
  plStack_78 = plVar6;
  plStack_70 = param_1;
  FUN_10a0ca588();
  plVar6[6] = 0;
  plVar6[7] = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10aa0d9a0;
  uVar14 = 1;
  if (2 < uVar13) {
    uVar14 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar14 = uVar14 | uVar13 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar13 = param_1[1];
  if (uVar13 < uVar14) {
LAB_10aa0d828:
    if (uVar14 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0da7c);
      (*pcVar2)();
    }
    lVar4 = uVar14 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar13 = 0;
    param_1[1] = uVar14;
    do {
      *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
    plVar9 = (long *)param_1[2];
    uVar13 = uVar14;
    if (plVar9 != (long *)0x0) {
      uVar7 = plVar9[1];
      uVar8 = uVar14 - 1;
      if ((uVar14 & uVar8) == 0) {
        uVar7 = uVar7 & uVar8;
      }
      else if (uVar14 <= uVar7) {
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar12 * uVar14;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar14 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar14 <= uVar12) {
          uVar1 = 0;
          if (uVar14 != 0) {
            uVar1 = uVar12 / uVar14;
          }
          uVar12 = uVar12 - uVar1 * uVar14;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar7) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar12 * 8) == 0) {
            *(long **)(lVar4 + uVar12 * 8) = plVar9;
            uVar7 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + uVar12 * 8);
            **(long **)(lVar4 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar14 < uVar13) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar14 <= uVar7) {
      uVar14 = uVar7;
    }
    if (uVar14 < uVar13) {
      if (uVar14 != 0) goto LAB_10aa0d828;
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x26 = uVar13 - 1 & uVar3;
  }
  else {
    unaff_x26 = uVar3;
    if (uVar13 <= uVar3) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar3 / uVar13;
      }
      unaff_x26 = uVar3 - uVar14 * uVar13;
    }
  }
LAB_10aa0d9a0:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
    *(long **)(lVar4 + unaff_x26 * 8) = plVar9;
    if (*plVar6 != 0) {
      uVar3 = *(ulong *)(*plVar6 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar3 = uVar3 & uVar13 - 1;
      }
      else if (uVar13 <= uVar3) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar3 / uVar13;
        }
        uVar3 = uVar3 - uVar14 * uVar13;
      }
      *(long **)(*param_1 + uVar3 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return plVar6;
}



/* Entry: 10aa0da94; end: 10aa0dadb;  */

void FUN_10aa0da94(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a9faae4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0dadc; end: 10aa0db83;  */

int FUN_10aa0dadc(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar2 = 0;
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar3);
      if ((char)bVar1 < '\0') {
        uVar4 = uVar3 + 1;
        if ((uVar4 < param_2) && ((bVar1 & 0xe0) == 0xc0)) {
          iVar2 = iVar2 + 1;
          uVar4 = uVar3 + 2;
        }
        else if ((uVar3 + 2 < param_2) && ((bVar1 & 0xf0) == 0xe0)) {
          iVar2 = iVar2 + 1;
          uVar4 = uVar3 + 3;
        }
        else if ((uVar3 + 3 < param_2) && ((bVar1 & 0xf8) == 0xf0)) {
          iVar2 = iVar2 + 2;
          uVar4 = uVar3 + 4;
        }
        else {
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iVar2 = iVar2 + 1;
        uVar4 = uVar3 + 1;
      }
      uVar3 = uVar4;
    } while (uVar4 < param_2);
  }
  return iVar2;
}



/* Entry: 10aa0db84; end: 10aa0dd1b;  */

long * FUN_10aa0db84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < (undefined8 *)param_1[2]) {
    *puVar14 = *param_2;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    uVar15 = param_2[1];
    puVar14[2] = param_2[2];
    puVar14[1] = uVar15;
    puVar14[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    uVar17 = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar14 + 0x35) = *(undefined8 *)((long)param_2 + 0x35);
    *(undefined8 *)((long)puVar14 + 0x2d) = uVar17;
    puVar14[5] = uVar16;
    puVar14[4] = uVar15;
    puVar14 = puVar14 + 8;
    plVar6 = param_1;
LAB_10aa0dcfc:
    param_1[1] = (long)puVar14;
    return plVar6;
  }
  lVar13 = (long)puVar14 - *param_1;
  uVar1 = (lVar13 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 5;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar8) {
      uVar10 = 0x3ffffffffffffff;
    }
    if (uVar10 >> 0x3a == 0) {
      plVar6 = (long *)(uVar10 << 6);
      __Znwm();
      puVar2 = (undefined8 *)((long)plVar6 + lVar13);
      plVar3 = plVar6 + uVar10 * 8;
      *puVar2 = *param_2;
      uVar15 = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[1] = uVar15;
      puVar2[3] = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      uVar15 = param_2[4];
      puVar2[5] = param_2[5];
      puVar2[4] = uVar15;
      uVar15 = *(undefined8 *)((long)param_2 + 0x2d);
      *(undefined8 *)((long)puVar2 + 0x35) = *(undefined8 *)((long)param_2 + 0x35);
      *(undefined8 *)((long)puVar2 + 0x2d) = uVar15;
      puVar14 = puVar2 + 8;
      plVar11 = (long *)*param_1;
      plVar5 = (long *)param_1[1];
      plVar4 = (long *)((long)puVar2 + ((long)plVar11 - (long)plVar5));
      plVar7 = plVar11;
      plVar9 = plVar4;
      if ((long)plVar11 - (long)plVar5 != 0) {
        do {
          *plVar9 = *plVar7;
          plVar9[1] = 0;
          plVar9[2] = 0;
          plVar9[3] = 0;
          lVar13 = plVar7[1];
          plVar9[2] = plVar7[2];
          plVar9[1] = lVar13;
          plVar9[3] = plVar7[3];
          plVar7[1] = 0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          lVar12 = plVar7[5];
          lVar13 = plVar7[4];
          uVar15 = *(undefined8 *)((long)plVar7 + 0x2d);
          *(undefined8 *)((long)plVar9 + 0x35) = *(undefined8 *)((long)plVar7 + 0x35);
          *(undefined8 *)((long)plVar9 + 0x2d) = uVar15;
          plVar9[5] = lVar12;
          plVar9[4] = lVar13;
          plVar7 = plVar7 + 8;
          plVar9 = plVar9 + 8;
        } while (plVar7 != plVar5);
        do {
          plVar6 = (long *)plVar11[1];
          if (plVar6 != (long *)0x0) {
            plVar11[2] = (long)plVar6;
            __ZdlPv();
          }
          plVar11 = plVar11 + 8;
        } while (plVar11 != plVar5);
        plVar11 = (long *)*param_1;
      }
      *param_1 = (long)plVar4;
      param_1[1] = (long)puVar14;
      param_1[2] = (long)plVar3;
      if (plVar11 != (long *)0x0) {
        __ZdlPv(plVar11);
        plVar6 = plVar11;
      }
      goto LAB_10aa0dcfc;
    }
  }
  else {
    FUN_10aa0dd78();
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar12 = *param_1;
    *(undefined1 *)(lVar12 + 0x1a4) = 0;
    lVar13 = *(long *)(lVar12 + 0x1b8);
    *(undefined8 *)(lVar12 + 0x1b8) = 0;
    if (lVar13 != 0) {
      FUN_10a9fa638();
    }
    *(undefined1 *)(lVar12 + 0x1e4) = 0;
    lVar13 = *(long *)(lVar12 + 0x1f8);
    *(undefined8 *)(lVar12 + 0x1f8) = 0;
    if (lVar13 != 0) {
      FUN_10a9fa638();
    }
  }
  return param_1;
}



/* Entry: 10aa0dd1c; end: 10aa0dd77;  */

long * FUN_10aa0dd1c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar2 = *param_1;
    *(undefined1 *)(lVar2 + 0x1a4) = 0;
    lVar1 = *(long *)(lVar2 + 0x1b8);
    *(undefined8 *)(lVar2 + 0x1b8) = 0;
    if (lVar1 != 0) {
      FUN_10a9fa638();
    }
    *(undefined1 *)(lVar2 + 0x1e4) = 0;
    lVar1 = *(long *)(lVar2 + 0x1f8);
    *(undefined8 *)(lVar2 + 0x1f8) = 0;
    if (lVar1 != 0) {
      FUN_10a9fa638();
    }
  }
  return param_1;
}



/* Entry: 10aa0dd78; end: 10aa0dd8b;  */

void FUN_10aa0dd78(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x24;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar4 = (undefined8 *)plVar3[1];
  if (puVar4 < (undefined8 *)plVar3[2]) {
    *puVar4 = *param_2;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    FUN_10a0ca588();
    puVar4[4] = param_2[4];
    puVar4 = puVar4 + 5;
    plVar3[1] = (long)puVar4;
    goto LAB_10aa0df40;
  }
  lVar15 = (long)puVar4 - *plVar3;
  uVar12 = (lVar15 >> 3) * -0x3333333333333333 + 1;
  if (uVar12 < 0x666666666666667) {
    lVar8 = plVar3[2] - *plVar3 >> 3;
    uVar10 = lVar8 * -0x6666666666666666;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    plStack_58 = plVar3;
    if (uVar10 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x666666666666666 < uVar10) goto LAB_10aa0df60;
      puVar4 = (undefined8 *)(uVar10 * 0x28);
      __Znwm();
    }
    puVar1 = (undefined8 *)((long)puVar4 + lVar15);
    *puVar1 = *param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puStack_78 = puVar4;
    puStack_70 = puVar1;
    puStack_68 = puVar1;
    puStack_60 = puVar4 + uVar10 * 5;
    FUN_10a0ca588();
    puVar1[4] = param_2[4];
    puStack_68 = puVar1 + 5;
    puVar13 = (undefined8 *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar13 - (long)puVar2));
    puVar5 = puVar1;
    puVar11 = puVar13;
    puVar16 = puVar4 + uVar10 * 5;
    puVar4 = puStack_68;
    if ((long)puVar13 - (long)puVar2 != 0) {
      do {
        *puVar5 = *puVar11;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        uVar6 = puVar11[1];
        puVar5[2] = puVar11[2];
        puVar5[1] = uVar6;
        uVar6 = puVar11[4];
        puVar5[3] = puVar11[3];
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar5[4] = uVar6;
        puVar11 = puVar11 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar11 != puVar2);
      do {
        if (puVar13[1] != 0) {
          puVar13[2] = puVar13[1];
          __ZdlPv();
        }
        puVar13 = puVar13 + 5;
      } while (puVar13 != puVar2);
      puVar13 = (undefined8 *)*plVar3;
      puVar16 = puStack_60;
      puVar4 = puStack_68;
    }
    *plVar3 = (long)puVar1;
    plVar3[1] = (long)puVar4;
    puStack_60 = (undefined8 *)plVar3[2];
    plVar3[2] = (long)puVar16;
    puStack_78 = puVar13;
    puStack_70 = puVar13;
    puStack_68 = puVar13;
    FUN_10aa0e540(&puStack_78);
LAB_10aa0df40:
    plVar3[1] = (long)puVar4;
    return;
  }
  FUN_10aa0e52c();
LAB_10aa0df60:
  func_0x000109ffded8();
  FUN_10aa0e540(&puStack_78);
  __Unwind_Resume();
  puVar4 = (undefined8 *)plVar3[1];
  if (puVar4 < (undefined8 *)plVar3[2]) {
    uVar6 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar4 = uVar6;
    lVar15 = (long)puVar4 + 0xc;
LAB_10aa0e060:
    plVar3[1] = lVar15;
    return;
  }
  lVar15 = (long)puVar4 - *plVar3;
  uVar12 = (lVar15 >> 2) * -0x5555555555555555 + 1;
  if (uVar12 < 0x1555555555555556) {
    lVar8 = plVar3[2] - *plVar3 >> 2;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    puVar11 = param_2;
    FUN_10aa0b774();
    puVar4 = (undefined8 *)(uVar10 + lVar15);
    uVar6 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar4 = uVar6;
    lVar15 = (long)puVar4 + 0xc;
    lVar14 = (long)puVar4 - (plVar3[1] - *plVar3);
    _memcpy(lVar14);
    lVar8 = *plVar3;
    *plVar3 = lVar14;
    plVar3[1] = lVar15;
    plVar3[2] = uVar10 + (long)puVar11 * 0xc;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    goto LAB_10aa0e060;
  }
  FUN_10aa0b760();
  puVar4 = (undefined8 *)plVar3[1];
  if (puVar4 != (undefined8 *)0x0) {
    uVar12 = (long)puVar4 - 1;
    if (((ulong)puVar4 & uVar12) == 0) {
      unaff_x24 = (undefined8 *)(uVar12 & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar4 <= param_2) {
        uVar10 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar10 = (ulong)param_2 / (ulong)puVar4;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar10 * (long)puVar4);
      }
    }
    plVar9 = *(long **)(*plVar3 + (long)unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10aa0e128;
          puVar11 = (undefined8 *)plVar9[1];
          if (puVar11 != param_2) break;
          if ((undefined8 *)plVar9[2] == param_2) {
            return;
          }
        }
        if (((ulong)puVar4 & uVar12) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & uVar12);
        }
        else if (puVar4 <= puVar11) {
          uVar10 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            uVar10 = (ulong)puVar11 / (ulong)puVar4;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar10 * (long)puVar4);
        }
      } while (puVar11 == unaff_x24);
    }
  }
LAB_10aa0e128:
  plVar9 = (long *)0x50;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = (long)param_2;
  plVar9[2] = *param_3;
  *(int *)(plVar9 + 3) = (int)param_3[1];
  *(undefined2 *)((long)plVar9 + 0x1c) = *(undefined2 *)((long)param_3 + 0xc);
  lVar14 = param_3[4];
  lVar8 = param_3[7];
  lVar15 = param_3[6];
  plVar9[7] = param_3[5];
  plVar9[6] = lVar14;
  plVar9[9] = lVar8;
  plVar9[8] = lVar15;
  lVar8 = param_3[3];
  lVar15 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar9[5] = lVar8;
  plVar9[4] = lVar15;
  if ((puVar4 == (undefined8 *)0x0) ||
     (*(float *)(plVar3 + 4) * (float)puVar4 < (float)(plVar3[3] + 1))) {
    uVar12 = 1;
    if ((undefined8 *)0x2 < puVar4) {
      uVar12 = (ulong)(((ulong)puVar4 & (long)puVar4 - 1U) != 0);
    }
    uVar12 = uVar12 | (long)puVar4 << 1;
    uVar10 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    FUN_10aa0e29c(plVar3,uVar12);
    puVar4 = (undefined8 *)plVar3[1];
    if (((ulong)puVar4 & (long)puVar4 - 1U) == 0) {
      unaff_x24 = (undefined8 *)((long)puVar4 - 1U & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar4 <= param_2) {
        uVar12 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar12 = (ulong)param_2 / (ulong)puVar4;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar12 * (long)puVar4);
      }
    }
  }
  lVar15 = *plVar3;
  plVar7 = *(long **)(lVar15 + (long)unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar3 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar15 + (long)unaff_x24 * 8) = plVar7;
    if (*plVar9 == 0) goto LAB_10aa0e264;
    puVar11 = *(undefined8 **)(*plVar9 + 8);
    if (((ulong)puVar4 & (long)puVar4 - 1U) == 0) {
      puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar4 - 1U);
    }
    else if (puVar4 <= puVar11) {
      uVar12 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        uVar12 = (ulong)puVar11 / (ulong)puVar4;
      }
      puVar11 = (undefined8 *)((long)puVar11 - uVar12 * (long)puVar4);
    }
    plVar7 = (long *)(*plVar3 + (long)puVar11 * 8);
  }
  else {
    *plVar9 = *plVar7;
  }
  *plVar7 = (long)plVar9;
LAB_10aa0e264:
  plVar3[3] = plVar3[3] + 1;
  return;
}



/* Entry: 10aa0dd8c; end: 10aa0df83;  */

void FUN_10aa0dd8c(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    *puVar3 = *param_2;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = 0;
    FUN_10a0ca588();
    puVar3[4] = param_2[4];
    puVar3 = puVar3 + 5;
    param_1[1] = (long)puVar3;
    goto LAB_10aa0df40;
  }
  lVar14 = (long)puVar3 - *param_1;
  uVar11 = (lVar14 >> 3) * -0x3333333333333333 + 1;
  if (uVar11 < 0x666666666666667) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * -0x6666666666666666;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      if (0x666666666666666 < uVar9) goto LAB_10aa0df60;
      puVar3 = (undefined8 *)(uVar9 * 0x28);
      __Znwm();
    }
    puVar1 = (undefined8 *)((long)puVar3 + lVar14);
    *puVar1 = *param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puStack_68 = puVar3;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_50 = puVar3 + uVar9 * 5;
    FUN_10a0ca588();
    puVar1[4] = param_2[4];
    puStack_58 = puVar1 + 5;
    puVar12 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar12 - (long)puVar2));
    puVar4 = puVar1;
    puVar10 = puVar12;
    puVar15 = puVar3 + uVar9 * 5;
    puVar3 = puStack_58;
    if ((long)puVar12 - (long)puVar2 != 0) {
      do {
        *puVar4 = *puVar10;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        uVar5 = puVar10[1];
        puVar4[2] = puVar10[2];
        puVar4[1] = uVar5;
        uVar5 = puVar10[4];
        puVar4[3] = puVar10[3];
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar4[4] = uVar5;
        puVar10 = puVar10 + 5;
        puVar4 = puVar4 + 5;
      } while (puVar10 != puVar2);
      do {
        if (puVar12[1] != 0) {
          puVar12[2] = puVar12[1];
          __ZdlPv();
        }
        puVar12 = puVar12 + 5;
      } while (puVar12 != puVar2);
      puVar12 = (undefined8 *)*param_1;
      puVar15 = puStack_50;
      puVar3 = puStack_58;
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar3;
    puStack_50 = (undefined8 *)param_1[2];
    param_1[2] = (long)puVar15;
    puStack_68 = puVar12;
    puStack_60 = puVar12;
    puStack_58 = puVar12;
    FUN_10aa0e540(&puStack_68);
LAB_10aa0df40:
    param_1[1] = (long)puVar3;
    return;
  }
  FUN_10aa0e52c();
LAB_10aa0df60:
  func_0x000109ffded8();
  FUN_10aa0e540(&puStack_68);
  __Unwind_Resume();
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar3 = uVar5;
    lVar14 = (long)puVar3 + 0xc;
LAB_10aa0e060:
    param_1[1] = lVar14;
    return;
  }
  lVar14 = (long)puVar3 - *param_1;
  uVar11 = (lVar14 >> 2) * -0x5555555555555555 + 1;
  if (uVar11 < 0x1555555555555556) {
    lVar7 = param_1[2] - *param_1 >> 2;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    puVar10 = param_2;
    FUN_10aa0b774();
    puVar3 = (undefined8 *)(uVar9 + lVar14);
    uVar5 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar3 = uVar5;
    lVar14 = (long)puVar3 + 0xc;
    lVar13 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lVar7 = *param_1;
    *param_1 = lVar13;
    param_1[1] = lVar14;
    param_1[2] = uVar9 + (long)puVar10 * 0xc;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    goto LAB_10aa0e060;
  }
  FUN_10aa0b760();
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    uVar11 = (long)puVar3 - 1;
    if (((ulong)puVar3 & uVar11) == 0) {
      unaff_x24 = (undefined8 *)(uVar11 & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar3 <= param_2) {
        uVar9 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)puVar3;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar9 * (long)puVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10aa0e128;
          puVar10 = (undefined8 *)plVar8[1];
          if (puVar10 != param_2) break;
          if ((undefined8 *)plVar8[2] == param_2) {
            return;
          }
        }
        if (((ulong)puVar3 & uVar11) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar11);
        }
        else if (puVar3 <= puVar10) {
          uVar9 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar10 / (ulong)puVar3;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar9 * (long)puVar3);
        }
      } while (puVar10 == unaff_x24);
    }
  }
LAB_10aa0e128:
  plVar8 = (long *)0x50;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)param_2;
  plVar8[2] = *param_3;
  *(int *)(plVar8 + 3) = (int)param_3[1];
  *(undefined2 *)((long)plVar8 + 0x1c) = *(undefined2 *)((long)param_3 + 0xc);
  lVar13 = param_3[4];
  lVar7 = param_3[7];
  lVar14 = param_3[6];
  plVar8[7] = param_3[5];
  plVar8[6] = lVar13;
  plVar8[9] = lVar7;
  plVar8[8] = lVar14;
  lVar7 = param_3[3];
  lVar14 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar8[5] = lVar7;
  plVar8[4] = lVar14;
  if ((puVar3 == (undefined8 *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar3 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if ((undefined8 *)0x2 < puVar3) {
      uVar11 = (ulong)(((ulong)puVar3 & (long)puVar3 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)puVar3 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    FUN_10aa0e29c(param_1,uVar11);
    puVar3 = (undefined8 *)param_1[1];
    if (((ulong)puVar3 & (long)puVar3 - 1U) == 0) {
      unaff_x24 = (undefined8 *)((long)puVar3 - 1U & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar3 <= param_2) {
        uVar11 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar11 = (ulong)param_2 / (ulong)puVar3;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar11 * (long)puVar3);
      }
    }
  }
  lVar14 = *param_1;
  plVar6 = *(long **)(lVar14 + (long)unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
    *(long **)(lVar14 + (long)unaff_x24 * 8) = plVar6;
    if (*plVar8 == 0) goto LAB_10aa0e264;
    puVar10 = *(undefined8 **)(*plVar8 + 8);
    if (((ulong)puVar3 & (long)puVar3 - 1U) == 0) {
      puVar10 = (undefined8 *)((ulong)puVar10 & (long)puVar3 - 1U);
    }
    else if (puVar3 <= puVar10) {
      uVar11 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar11 = (ulong)puVar10 / (ulong)puVar3;
      }
      puVar10 = (undefined8 *)((long)puVar10 - uVar11 * (long)puVar3);
    }
    plVar6 = (long *)(*param_1 + (long)puVar10 * 8);
  }
  else {
    *plVar8 = *plVar6;
  }
  *plVar6 = (long)plVar8;
LAB_10aa0e264:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa0df84; end: 10aa0e077;  */

void FUN_10aa0df84(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x24;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar1 = *param_2;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar10 = uVar1;
    lVar9 = (long)puVar10 + 0xc;
LAB_10aa0e060:
    param_1[1] = lVar9;
    return;
  }
  lVar9 = (long)puVar10 - *param_1;
  uVar5 = (lVar9 >> 2) * -0x5555555555555555 + 1;
  if (uVar5 < 0x1555555555555556) {
    lVar3 = param_1[2] - *param_1 >> 2;
    uVar7 = lVar3 * 0x5555555555555556;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar7 = 0x1555555555555555;
    }
    puVar6 = param_2;
    FUN_10aa0b774();
    puVar10 = (undefined8 *)(uVar7 + lVar9);
    uVar1 = *param_2;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar10 = uVar1;
    lVar9 = (long)puVar10 + 0xc;
    lVar8 = (long)puVar10 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar3 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9;
    param_1[2] = uVar7 + (long)puVar6 * 0xc;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    goto LAB_10aa0e060;
  }
  FUN_10aa0b760();
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 != (undefined8 *)0x0) {
    uVar5 = (long)puVar10 - 1;
    if (((ulong)puVar10 & uVar5) == 0) {
      unaff_x24 = (undefined8 *)(uVar5 & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar10 <= param_2) {
        uVar7 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = (ulong)param_2 / (ulong)puVar10;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar7 * (long)puVar10);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10aa0e128;
          puVar6 = (undefined8 *)plVar4[1];
          if (puVar6 != param_2) break;
          if ((undefined8 *)plVar4[2] == param_2) {
            return;
          }
        }
        if (((ulong)puVar10 & uVar5) == 0) {
          puVar6 = (undefined8 *)((ulong)puVar6 & uVar5);
        }
        else if (puVar10 <= puVar6) {
          uVar7 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar7 = (ulong)puVar6 / (ulong)puVar10;
          }
          puVar6 = (undefined8 *)((long)puVar6 - uVar7 * (long)puVar10);
        }
      } while (puVar6 == unaff_x24);
    }
  }
LAB_10aa0e128:
  plVar4 = (long *)0x50;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = *param_3;
  *(int *)(plVar4 + 3) = (int)param_3[1];
  *(undefined2 *)((long)plVar4 + 0x1c) = *(undefined2 *)((long)param_3 + 0xc);
  lVar8 = param_3[4];
  lVar3 = param_3[7];
  lVar9 = param_3[6];
  plVar4[7] = param_3[5];
  plVar4[6] = lVar8;
  plVar4[9] = lVar3;
  plVar4[8] = lVar9;
  lVar3 = param_3[3];
  lVar9 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar4[5] = lVar3;
  plVar4[4] = lVar9;
  if ((puVar10 == (undefined8 *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if ((undefined8 *)0x2 < puVar10) {
      uVar5 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)puVar10 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    FUN_10aa0e29c(param_1,uVar5);
    puVar10 = (undefined8 *)param_1[1];
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      unaff_x24 = (undefined8 *)((long)puVar10 - 1U & (ulong)param_2);
    }
    else {
      unaff_x24 = param_2;
      if (puVar10 <= param_2) {
        uVar5 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar5 = (ulong)param_2 / (ulong)puVar10;
        }
        unaff_x24 = (undefined8 *)((long)param_2 - uVar5 * (long)puVar10);
      }
    }
  }
  lVar9 = *param_1;
  plVar2 = *(long **)(lVar9 + (long)unaff_x24 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
    *(long **)(lVar9 + (long)unaff_x24 * 8) = plVar2;
    if (*plVar4 == 0) goto LAB_10aa0e264;
    puVar6 = *(undefined8 **)(*plVar4 + 8);
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar10 - 1U);
    }
    else if (puVar10 <= puVar6) {
      uVar5 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar5 = (ulong)puVar6 / (ulong)puVar10;
      }
      puVar6 = (undefined8 *)((long)puVar6 - uVar5 * (long)puVar10);
    }
    plVar2 = (long *)(*param_1 + (long)puVar6 * 8);
  }
  else {
    *plVar4 = *plVar2;
  }
  *plVar2 = (long)plVar4;
LAB_10aa0e264:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa0e078; end: 10aa0e29b;  */

void FUN_10aa0e078(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  long lVar8;
  long lVar9;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar6 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10aa0e128;
          uVar6 = plVar4[1];
          if (uVar6 != param_2) break;
          if (plVar4[2] == param_2) {
            return;
          }
        }
        if ((uVar7 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (uVar7 <= uVar6) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar1 * uVar7;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_10aa0e128:
  plVar4 = (long *)0x50;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  plVar4[2] = *param_3;
  *(int *)(plVar4 + 3) = (int)param_3[1];
  *(undefined2 *)((long)plVar4 + 0x1c) = *(undefined2 *)((long)param_3 + 0xc);
  lVar9 = param_3[4];
  lVar8 = param_3[7];
  lVar5 = param_3[6];
  plVar4[7] = param_3[5];
  plVar4[6] = lVar9;
  plVar4[9] = lVar8;
  plVar4[8] = lVar5;
  lVar8 = param_3[3];
  lVar5 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar4[5] = lVar8;
  plVar4[4] = lVar5;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10aa0e29c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10aa0e264;
    uVar2 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar6 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10aa0e264:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa0e29c; end: 10aa0e46b;  */

void FUN_10aa0e29c(long *param_1,long *param_2)

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
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_10a1d37cc(lVar2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aa0e46c; end: 10aa0e4b3;  */

void FUN_10aa0e46c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a1d37cc(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0e4b4; end: 10aa0e52b;  */

void FUN_10aa0e4b4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a9faefc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10aa0e52c; end: 10aa0e53f;  */

long * FUN_10aa0e52c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x28;
    lVar2 = lVar4 + -0x28;
    if (*(long *)(lVar4 + -0x20) != 0) {
      *(long *)(lVar4 + -0x18) = *(long *)(lVar4 + -0x20);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10aa0e540; end: 10aa0e59f;  */

long * FUN_10aa0e540(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x28;
    lVar2 = lVar3 + -0x28;
    if (*(long *)(lVar3 + -0x20) != 0) {
      *(long *)(lVar3 + -0x18) = *(long *)(lVar3 + -0x20);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa0e5a0; end: 10aa0e5cf;  */

long * FUN_10aa0e5a0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa0e5d0; end: 10aa0e5ff;  */

long * FUN_10aa0e5d0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa0e600; end: 10aa0e897;  */

undefined8 FUN_10aa0e600(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 < 0x4e6b6f6f) {
    if (param_1 < 0x47757275) {
      if (param_1 == 0x41726162) {
        return uVar1;
      }
      if (param_1 == 0x42656e67) {
        return uVar1;
      }
      iVar2 = 0x44657661;
    }
    else if (param_1 < 0x4d6f6469) {
      if (param_1 == 0x47757275) {
        return uVar1;
      }
      iVar2 = 0x4d616e64;
    }
    else {
      if (param_1 == 0x4d6f6469) {
        return uVar1;
      }
      iVar2 = 0x4d6f6e67;
    }
  }
  else if (param_1 < 0x50686c70) {
    if (param_1 == 0x4e6b6f6f) {
      return uVar1;
    }
    if (param_1 == 0x4f67616d) {
      return uVar1;
    }
    iVar2 = 0x50686167;
  }
  else if (param_1 < 0x53796c6f) {
    if (param_1 == 0x50686c70) {
      return uVar1;
    }
    iVar2 = 0x53687264;
  }
  else {
    if (param_1 == 0x53796c6f) {
      return uVar1;
    }
    iVar2 = 0x54697268;
  }
  if (param_1 == iVar2) {
    return uVar1;
  }
  return 1;
}



/* Entry: 10aa0e898; end: 10aa0e8ab;  */

void FUN_10aa0e898(void)

{
  __ZNSt3__17codecvtIDsc11__mbstate_tED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0e8ac; end: 10aa0ed2b;  */

void FUN_10aa0e8ac(long *param_1,ulong param_2,long *param_3,long *param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lStack_118;
  long *plStack_110;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if (*(long *)(param_2 + 0x30) == 0) {
LAB_10aa0ea80:
    if (*(char *)(param_2 + 0x2f) < '\0') {
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_10aa0eccc;
      func_0x000107407ae4(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      if (*(char *)(param_2 + 0x2f) == '\0') goto LAB_10aa0eccc;
      lVar12 = *(long *)(param_2 + 0x18);
      param_1[1] = *(long *)(param_2 + 0x20);
      *param_1 = lVar12;
      param_1[2] = *(long *)(param_2 + 0x28);
    }
LAB_10aa0eb44:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar12 = (long)param_4 - (long)param_3;
    uVar11 = lVar12 * 2;
    if (uVar11 < 0x7ffffffffffffff8) {
      if (uVar11 < 0xb) {
        *(char *)((long)param_1 + 0x17) = (char)uVar11;
        plVar8 = param_1;
        if (param_4 != param_3) goto LAB_10aa0e950;
      }
      else {
        plVar8 = (long *)0xd;
        if ((uVar11 | 3) != 0xb) {
          plVar8 = (long *)((uVar11 | 3) + 1);
        }
        uVar9 = param_2;
        FUN_10aa0ed40();
        param_1[1] = uVar11;
        param_1[2] = uVar9 | 0x8000000000000000;
        *param_1 = (long)plVar8;
LAB_10aa0e950:
        _bzero(plVar8,lVar12 * 4);
      }
      *(undefined2 *)((long)plVar8 + lVar12 * 4) = 0;
      if (param_3 != param_4) {
        lVar12 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          lVar12 = 10;
        }
        func_0x0001078a86d4(param_1,lVar12,0);
        uStack_a8 = *(undefined8 *)(param_2 + 0x80);
        uStack_b0 = *(undefined8 *)(param_2 + 0x78);
        uStack_98 = *(undefined8 *)(param_2 + 0x90);
        uStack_a0 = *(undefined8 *)(param_2 + 0x88);
        uStack_88 = *(undefined8 *)(param_2 + 0xa0);
        uStack_90 = *(undefined8 *)(param_2 + 0x98);
        uStack_78 = *(undefined8 *)(param_2 + 0xb0);
        uStack_80 = *(undefined8 *)(param_2 + 0xa8);
        uStack_e8 = *(undefined8 *)(param_2 + 0x40);
        uStack_f0 = *(undefined8 *)(param_2 + 0x38);
        uStack_d8 = *(undefined8 *)(param_2 + 0x50);
        uStack_e0 = *(undefined8 *)(param_2 + 0x48);
        uStack_c8 = *(undefined8 *)(param_2 + 0x60);
        uStack_d0 = *(undefined8 *)(param_2 + 0x58);
        uStack_b8 = *(undefined8 *)(param_2 + 0x70);
        uStack_c0 = *(undefined8 *)(param_2 + 0x68);
        uVar11 = param_1[1];
        plVar8 = (long *)*param_1;
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar11 = (ulong)*(byte *)((long)param_1 + 0x17);
          plVar8 = param_1;
        }
        lVar12 = (long)plVar8 + uVar11 * 2;
        do {
          plVar4 = *(long **)(param_2 + 0x30);
          (**(code **)(*plVar4 + 0x20))
                    (plVar4,&uStack_f0,param_3,param_4,&plStack_110,plVar8,lVar12,&lStack_118);
          *(long *)(param_2 + 0xb8) =
               ((long)plStack_110 - (long)param_3) + *(long *)(param_2 + 0xb8);
          if ((long)plStack_110 - (long)param_3 == 0) {
LAB_10aa0eb08:
            if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_10aa0eb10;
            goto LAB_10aa0ea80;
          }
          iVar3 = (int)plVar4;
          if (iVar3 != 1) {
            if (iVar3 == 0) {
              plVar8 = (long *)*param_1;
              if (-1 < *(char *)((long)param_1 + 0x17)) {
                plVar8 = param_1;
              }
              func_0x0001078a86d4(param_1,lStack_118 - (long)plVar8 >> 1,0);
              goto LAB_10aa0eb44;
            }
            if (iVar3 != 3) goto LAB_10aa0eb08;
            plVar4 = (long *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              plVar4 = param_1;
            }
            func_0x0001078a86d4(param_1,(long)plVar8 - (long)plVar4 >> 1,0);
            uVar9 = (ulong)*(char *)((long)param_1 + 0x17);
            uVar11 = (long)param_4 - (long)param_3;
            if ((long)uVar9 < 0) {
              if (uVar11 == 0) goto LAB_10aa0eb44;
              uVar10 = param_1[1];
              if ((long)uVar10 < -1) goto LAB_10aa0ece0;
              uVar6 = (param_1[2] & 0x7fffffffffffffffU) - 1;
              plVar8 = (long *)*param_1;
              uVar9 = (ulong)param_1[2] >> 0x38;
            }
            else {
              if (uVar11 == 0) goto LAB_10aa0eb44;
              uVar6 = 10;
              plVar8 = param_1;
              uVar10 = uVar9;
            }
            uVar7 = (uint)uVar9;
            uVar9 = (long)uVar11 >> 1;
            if ((param_3 < plVar8) || ((long *)((long)plVar8 + uVar10 * 2 + 2) <= param_3)) {
              if (uVar6 - uVar10 < uVar9) {
                func_0x000107828284(param_1,uVar6,(uVar9 - uVar6) + uVar10,uVar10,uVar10,0,0);
                param_1[1] = uVar10;
                uVar7 = (uint)*(byte *)((long)param_1 + 0x17);
              }
              plVar8 = param_1;
              if ((uVar7 >> 7 & 1) != 0) {
                plVar8 = (long *)*param_1;
              }
              lVar12 = (long)plVar8 + uVar10 * 2;
              _memmove(lVar12,param_3,uVar11);
              *(undefined2 *)(lVar12 + uVar11) = 0;
              if (*(char *)((long)param_1 + 0x17) < '\0') {
                param_1[1] = uVar10 + uVar9;
              }
              else {
                *(byte *)((long)param_1 + 0x17) = (byte)(uVar10 + uVar9) & 0x7f;
              }
            }
            else {
              if (0x7ffffffffffffff7 < uVar9) {
                FUN_10aa0ed2c();
                goto LAB_10aa0ece0;
              }
              if (uVar9 < 0xb) {
                uStack_f8 = CONCAT17((char)(uVar11 >> 1),(undefined7)uStack_f8);
                ppppuVar5 = &pppuStack_108;
              }
              else {
                ppppuVar5 = (undefined8 ****)0xd;
                if ((uVar9 | 3) != 0xb) {
                  ppppuVar5 = (undefined8 ****)((uVar9 | 3) + 1);
                }
                FUN_10aa0ed40();
                uStack_f8 = uVar6 | 0x8000000000000000;
                pppuStack_108 = ppppuVar5;
                uStack_100 = uVar9;
              }
              _memmove(ppppuVar5,param_3,uVar11);
              *(undefined2 *)((long)ppppuVar5 + uVar11) = 0;
              uVar11 = uStack_100;
              ppppuVar5 = (undefined8 ****)pppuStack_108;
              if (-1 < (long)uStack_f8) {
                uVar11 = uStack_f8 >> 0x38;
                ppppuVar5 = &pppuStack_108;
              }
              func_0x000107827d70(param_1,ppppuVar5,uVar11);
              if ((long)uStack_f8 < 0) {
                __ZdlPv(pppuStack_108);
              }
            }
            goto LAB_10aa0eb44;
          }
          plVar8 = (long *)*param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            plVar8 = param_1;
          }
          lVar12 = lStack_118 - (long)plVar8;
          func_0x0001078a86d4(param_1,lVar12,0);
          bVar1 = *(byte *)((long)param_1 + 0x17);
          uVar11 = param_1[1];
          plVar4 = (long *)*param_1;
          if (-1 < (char)bVar1) {
            uVar11 = (ulong)bVar1;
            plVar4 = param_1;
          }
          plVar8 = (long *)((long)plVar4 + lVar12);
          lVar12 = (long)plVar4 + uVar11 * 2;
          param_3 = plStack_110;
        } while (plStack_110 < param_4);
        if (((uint)(int)(char)bVar1 >> 7 & 1) != 0) {
LAB_10aa0eb10:
          __ZdlPv(*param_1);
        }
        goto LAB_10aa0ea80;
      }
      goto LAB_10aa0eb44;
    }
  }
  FUN_10aa0ed2c();
LAB_10aa0eccc:
  FUN_10a99da88(&UNK_10f3dc1cc);
LAB_10aa0ece0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0ece4);
  (*pcVar2)();
}



/* Entry: 10aa0ed2c; end: 10aa0ed3f;  */

undefined1  [16] FUN_10aa0ed2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&DAT_10f2fca96;
  FUN_109ffde64();
  if (-1 < (long)puVar1) {
    lVar2 = (long)puVar1 << 1;
    __Znwm(lVar2);
    auVar3._8_8_ = puVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((long *)puVar1[6] != (long *)0x0) {
    (**(code **)(*(long *)puVar1[6] + 8))();
  }
  if (*(char *)((long)puVar1 + 0x2f) < '\0') {
    __ZdlPv(puVar1[3]);
  }
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10aa0ed40; end: 10aa0edc3;  */

undefined1  [16] FUN_10aa0ed40(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (-1 < (long)param_1) {
    lVar1 = (long)param_1 << 1;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa0edc4; end: 10aa0f17b;  */

long * FUN_10aa0edc4(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
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
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  *(undefined8 *)((long)plVar8 + 0x14) = 0;
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
LAB_10aa0ef1c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa0f168);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
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
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
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
        if (uVar6 != 0) goto LAB_10aa0ef1c;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
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
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar10 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10aa0f100;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10aa0f100:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10aa0f17c; end: 10aa0f1c3;  */

long * FUN_10aa0f17c(long *param_1)

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



/* Entry: 10aa0f1c4; end: 10aa0f39b;  */

long * FUN_10aa0f1c4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  plVar3 = param_1;
  if (param_3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    if ((long *)(param_1[2] - (long)plVar4 >> 2) < param_3) {
      lVar9 = *param_1;
      uVar5 = (long)param_3 + ((long)plVar4 - lVar9 >> 2);
      if (uVar5 >> 0x3e != 0) {
        FUN_10a001cf8();
        if (param_2 != (long *)0x0) {
          uVar5 = (long)param_2 - 1;
          if (((ulong)param_2 & uVar5) == 0) {
            plVar3 = (long *)(uVar5 & (ulong)param_3);
          }
          else {
            plVar3 = param_3;
            if (param_2 <= param_3) {
              uVar10 = 0;
              if (param_2 != (long *)0x0) {
                uVar10 = (ulong)param_3 / (ulong)param_2;
              }
              plVar3 = (long *)((long)param_3 - uVar10 * (long)param_2);
            }
          }
          if ((long *)param_1[(long)plVar3] != (long *)0x0) {
            plVar4 = *(long **)param_1[(long)plVar3];
            do {
              if (plVar4 == (long *)0x0) {
                return (long *)0x0;
              }
              plVar11 = (long *)plVar4[1];
              if (plVar11 == param_3) {
                if ((long *)plVar4[2] == param_3) {
                  return plVar4;
                }
              }
              else {
                if (((ulong)param_2 & uVar5) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & uVar5);
                }
                else if (param_2 <= plVar11) {
                  uVar10 = 0;
                  if (param_2 != (long *)0x0) {
                    uVar10 = (ulong)plVar11 / (ulong)param_2;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar10 * (long)param_2);
                }
                if (plVar11 != plVar3) {
                  return (long *)0x0;
                }
              }
              plVar4 = (long *)*plVar4;
            } while( true );
          }
        }
        return (long *)0x0;
      }
      uVar6 = param_1[2] - lVar9;
      uVar10 = (long)uVar6 >> 1;
      if (uVar10 <= uVar5) {
        uVar10 = uVar5;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        FUN_10a001d0c();
      }
      puVar1 = (undefined4 *)((long)plVar3 + ((long)param_2 - lVar9));
      lVar9 = (long)param_3 << 2;
      lVar13 = *param_4;
      puVar8 = puVar1;
      do {
        *puVar8 = (int)lVar13;
        lVar9 = lVar9 + -4;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
      _memcpy(puVar1 + (long)param_3,param_2,param_1[1] - (long)param_2);
      lVar9 = param_1[1];
      param_1[1] = (long)param_2;
      lVar13 = (long)puVar1 - ((long)param_2 - *param_1);
      _memcpy(lVar13);
      plVar4 = (long *)*param_1;
      *param_1 = lVar13;
      param_1[1] = (long)(puVar1 + (long)param_3) + (lVar9 - (long)param_2);
      param_1[2] = (long)plVar3 + uVar10 * 4;
      plVar3 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar4;
      }
    }
    else {
      plVar11 = (long *)((long)plVar4 - (long)param_2 >> 2);
      plVar7 = plVar4;
      plVar14 = param_3;
      if (plVar11 < param_3) {
        lVar9 = 0;
        plVar7 = (long *)((long)plVar4 + ((long)param_3 - (long)plVar11) * 4);
        lVar13 = *param_4;
        do {
          *(int *)((long)plVar4 + lVar9) = (int)lVar13;
          lVar9 = lVar9 + 4;
        } while ((long)param_3 * 4 + (long)plVar11 * -4 != lVar9);
        param_1[1] = (long)plVar7;
        plVar14 = plVar11;
        if (plVar4 == param_2) {
          return param_1;
        }
      }
      plVar11 = (long *)((long)param_2 + (long)param_3 * 4);
      plVar2 = plVar7;
      for (plVar12 = (long *)((long)plVar7 + (long)param_3 * -4); plVar12 < plVar4;
          plVar12 = (long *)((long)plVar12 + 4)) {
        *(int *)plVar2 = (int)*plVar12;
        plVar2 = (long *)((long)plVar2 + 4);
      }
      param_1[1] = (long)plVar2;
      if (plVar7 != plVar11) {
        _memmove(plVar11,param_2);
        plVar3 = plVar11;
      }
      if (param_2 <= param_4) {
        if ((long *)param_1[1] <= param_4) {
          param_3 = (long *)0x0;
        }
        param_4 = (long *)((long)param_4 + (long)param_3 * 4);
      }
      lVar9 = *param_4;
      do {
        *(int *)param_2 = (int)lVar9;
        plVar14 = (long *)((long)plVar14 - 1);
        param_2 = (long *)((long)param_2 + 4);
      } while (plVar14 != (long *)0x0);
    }
  }
  return plVar3;
}



/* Entry: 10aa0f39c; end: 10aa0f42f;  */

long * FUN_10aa0f39c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    if ((param_2 & uVar2) == 0) {
      uVar3 = uVar2 & param_3;
    }
    else {
      uVar3 = param_3;
      if (param_2 <= param_3) {
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = param_3 / param_2;
        }
        uVar3 = param_3 - uVar3 * param_2;
      }
    }
    plVar4 = *(long **)(param_1 + uVar3 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar5 = plVar4[1];
        if (uVar5 == param_3) {
          if (plVar4[2] == param_3) {
            return plVar4;
          }
        }
        else {
          if ((param_2 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar3) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa0f430; end: 10aa0f807;  */

long * FUN_10aa0f430(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_2) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x60;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  plVar7[2] = *param_3;
  plVar7[4] = 0;
  plVar7[3] = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xb] = 0;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar13) {
      uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar5 = uVar5 | uVar13 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar5) {
LAB_10aa0f5a8:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0f7f4);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      plVar9 = (long *)param_1[2];
      uVar13 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar13) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar13) {
        if (uVar5 != 0) goto LAB_10aa0f5a8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x24 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar5 * uVar13;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10aa0f788;
    uVar5 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar5 = uVar5 & uVar13 - 1;
    }
    else if (uVar13 <= uVar5) {
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = uVar5 / uVar13;
      }
      uVar5 = uVar5 - uVar8 * uVar13;
    }
    plVar9 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10aa0f788:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10aa0f808; end: 10aa0f84f;  */

void FUN_10aa0f808(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1f4d70(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa0f850; end: 10aa0fa5b;  */

void FUN_10aa0f850(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (0 < param_5) {
    puVar2 = (undefined4 *)param_1[1];
    if (param_1[2] - (long)puVar2 >> 2 < param_5) {
      lVar9 = *param_1;
      uVar1 = param_5 + ((long)puVar2 - lVar9 >> 2);
      if (uVar1 >> 0x3e != 0) {
        func_0x000109ffdfac();
        *param_1 = (long)&PTR_FUN_110c38118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
        return;
      }
      uVar5 = param_1[2] - lVar9;
      uVar10 = (long)uVar5 >> 1;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar5) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_109ffdfc0();
      }
      puVar2 = (undefined4 *)((long)plVar3 + ((long)param_2 - lVar9));
      lVar9 = param_5 << 2;
      puVar6 = puVar2;
      do {
        *puVar6 = *param_3;
        lVar9 = lVar9 + -4;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      } while (lVar9 != 0);
      _memcpy(puVar2 + param_5,param_2,param_1[1] - (long)param_2);
      lVar9 = param_1[1];
      param_1[1] = (long)param_2;
      lVar11 = (long)puVar2 - ((long)param_2 - *param_1);
      _memcpy(lVar11);
      lVar4 = *param_1;
      *param_1 = lVar11;
      param_1[1] = (long)(puVar2 + param_5) + (lVar9 - (long)param_2);
      param_1[2] = (long)plVar3 + uVar10 * 4;
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar9 = (long)puVar2 - (long)param_2;
      if (param_5 <= lVar9 >> 2) {
        puVar6 = puVar2;
        for (puVar8 = puVar2 + -param_5; puVar8 < puVar2; puVar8 = puVar8 + 1) {
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        if (puVar2 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar9 = param_5 << 2;
LAB_10aa0fa30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar9);
        return;
      }
      puVar6 = puVar2;
      puVar7 = puVar2;
      for (puVar8 = (undefined4 *)(lVar9 + (long)param_3); puVar8 != param_4; puVar8 = puVar8 + 1) {
        *puVar7 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      param_1[1] = (long)puVar6;
      if (0 < lVar9 >> 2) {
        puVar8 = puVar6 + -param_5;
        for (; puVar8 < puVar2; puVar8 = puVar8 + 1) {
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        if (puVar7 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (puVar2 != param_2) goto LAB_10aa0fa30;
      }
    }
  }
  return;
}



/* Entry: 10aa0fa5c; end: 10aa0fa6b;  */

void FUN_10aa0fa5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa0fa6c; end: 10aa0fa8b;  */

void FUN_10aa0fa6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38118;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0fa8c; end: 10aa0fa9b;  */

void FUN_10aa0fa8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa0fa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa0fa9c; end: 10aa0faf3;  */

long FUN_10aa0fa9c(long param_1)

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



/* Entry: 10aa0faf4; end: 10aa0fd4f;  */

void FUN_10aa0faf4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x24;
  ulong uVar8;
  
  uVar5 = param_2;
  FUN_10a2063e0();
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x24 = uVar8 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar7 <= uVar5) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar5 / uVar7;
        }
        unaff_x24 = uVar5 - uVar3 * uVar7;
      }
    }
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar2 != (long *)0x0) {
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar3 = plVar2[1];
        if (uVar3 == uVar5) {
          if (plVar2[6] == *(long *)(param_2 + 0x20)) {
            uVar3 = (ulong)(plVar2 + 2);
            FUN_10a2064c0(uVar3,param_2);
            if ((uVar3 & 1) != 0) {
              return;
            }
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar3 = uVar3 & uVar8;
          }
          else if (uVar7 <= uVar3) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar3 / uVar7;
            }
            uVar3 = uVar3 - uVar1 * uVar7;
          }
          if (uVar3 != unaff_x24) break;
        }
      }
    }
  }
  plVar2 = (long *)0x48;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = uVar5;
  plVar2[2] = *param_3;
  lVar4 = param_3[1];
  plVar2[4] = param_3[2];
  plVar2[3] = lVar4;
  plVar2[5] = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  lVar4 = param_3[4];
  plVar2[7] = param_3[5];
  plVar2[6] = lVar4;
  plVar2[8] = param_3[6];
  param_3[5] = 0;
  param_3[6] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar8 = 1;
    if (2 < uVar7) {
      uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar8 = uVar8 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_10aa0b1a4(param_1,uVar8);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar7 <= uVar5) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar5 / uVar7;
        }
        unaff_x24 = uVar5 - uVar8 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*plVar2 != 0) {
      uVar5 = *(ulong *)(*plVar2 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar5 = uVar5 & uVar7 - 1;
      }
      else if (uVar7 <= uVar5) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar5 / uVar7;
        }
        uVar5 = uVar5 - uVar8 * uVar7;
      }
      *(long **)(*param_1 + uVar5 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa0fd50; end: 10aa0ff7b;  */

long * FUN_10aa0fd50(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[2] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x50;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  plVar4[2] = *param_3;
  plVar4[3] = 0x1ffffffff;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 6) = 0x3f800000;
  *(undefined8 *)((long)plVar4 + 0x34) = 0;
  *(undefined8 *)((long)plVar4 + 0x44) = 0;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0;
  *(undefined4 *)((long)plVar4 + 0x4c) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10aa0e29c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10aa0ff40;
    uVar2 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar5 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10aa0ff40:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10aa0ff7c; end: 10aa0ffd7;  */

long * FUN_10aa0ff7c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar2 = *param_1;
    *(undefined1 *)(lVar2 + 0x1a4) = 0;
    lVar1 = *(long *)(lVar2 + 0x1b8);
    *(undefined8 *)(lVar2 + 0x1b8) = 0;
    if (lVar1 != 0) {
      FUN_10a9fa638();
    }
    *(undefined1 *)(lVar2 + 0x1e4) = 0;
    lVar1 = *(long *)(lVar2 + 0x1f8);
    *(undefined8 *)(lVar2 + 0x1f8) = 0;
    if (lVar1 != 0) {
      FUN_10a9fa638();
    }
  }
  return param_1;
}



/* Entry: 10aa0ffd8; end: 10aa1038f;  */

long * FUN_10aa0ffd8(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
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
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  *(undefined8 *)((long)plVar8 + 0x14) = 0;
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
LAB_10aa10130:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa1037c);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
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
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
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
        if (uVar6 != 0) goto LAB_10aa10130;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
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
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar10 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10aa10314;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10aa10314:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10aa10390; end: 10aa104ef;  */

long * FUN_10aa10390(long *param_1)

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



/* Entry: 10aa104f0; end: 10aa106ef;  */

long * FUN_10aa104f0(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = (ulong)(uVar8 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = param_2 / uVar8;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar10) {
          if (*(uint *)(plVar5 + 2) == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar2 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x18;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  *(undefined4 *)((long)plVar5 + 0x14) = 0;
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
    func_0x000109df6ab0(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & param_2);
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
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10aa106b8;
    uVar10 = *(ulong *)(*plVar5 + 8);
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
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10aa106b8:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10aa106f0; end: 10aa10947;  */

void FUN_10aa106f0(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  ulong uVar9;
  
  uVar6 = param_2;
  FUN_10a2063e0();
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x24 = uVar9 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar8 <= uVar6) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar6 / uVar8;
        }
        unaff_x24 = uVar6 - uVar4 * uVar8;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar4 = plVar3[1];
        if (uVar4 == uVar6) {
          if (plVar3[6] == *(long *)(param_2 + 0x20)) {
            uVar4 = (ulong)(plVar3 + 2);
            FUN_10a2064c0(uVar4,param_2);
            if ((uVar4 & 1) != 0) {
              return;
            }
          }
        }
        else {
          if ((uVar8 & uVar9) == 0) {
            uVar4 = uVar4 & uVar9;
          }
          else if (uVar8 <= uVar4) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar4 / uVar8;
            }
            uVar4 = uVar4 - uVar2 * uVar8;
          }
          if (uVar4 != unaff_x24) break;
        }
      }
    }
  }
  plVar3 = (long *)0xf8;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = uVar6;
  plVar3[2] = *param_3;
  lVar5 = param_3[1];
  plVar3[4] = param_3[2];
  plVar3[3] = lVar5;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar5 = param_3[3];
  lVar1 = param_3[4];
  param_3[3] = 0;
  plVar3[5] = lVar5;
  plVar3[6] = lVar1;
  FUN_10a9fa504(plVar3 + 7,param_3 + 5);
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar8) {
      uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar9 = uVar9 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    FUN_10a20661c(param_1,uVar9);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        unaff_x24 = uVar6 - uVar9 * uVar8;
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar7;
    if (*plVar3 != 0) {
      uVar6 = *(ulong *)(*plVar3 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar9 * uVar8;
      }
      *(long **)(*param_1 + uVar6 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return;
}


