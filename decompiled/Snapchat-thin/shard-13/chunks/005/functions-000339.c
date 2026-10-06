/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7135a0; end: 10a713667;  */

void FUN_10a7135a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713538(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x53];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a713668; end: 10a713777;  */

void FUN_10a713668(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
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
  FUN_10a713778(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar9 = (long *)param_2[0x53];
  dVar16 = 0.0;
  if ((plVar9 != (long *)0x0) &&
     (plVar4 = plVar9, (**(code **)(*plVar9 + 0x50))(), -1 < (int)plVar4)) {
    plVar4 = plVar9;
    (**(code **)(*plVar9 + 0x50))();
    (**(code **)(*plVar9 + 0x58))();
    uVar5 = 1;
    if ((int)plVar9 < (int)plVar4) {
      uVar5 = 2;
    }
    dVar16 = (double)uVar5;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar16;
  plVar9 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar9[lVar6 + 2];
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
  lVar6 = *plVar9;
  lVar12 = plVar3[0x4c];
  lVar10 = lVar12 - lVar6;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar3[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar6,lVar10);
          *plVar9 = lVar11;
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar3[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar12 != lVar6) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a713778; end: 10a7137df;  */

void FUN_10a713778(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
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
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a713778(plVar6,param_2);
  FUN_10a052e3c(param_4);
  plVar6 = (long *)plVar6[0x53];
  if (plVar6 == (long *)0x0) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*plVar6 + 0x50))();
    iVar2 = (int)plVar6;
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar2;
  plVar6 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
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
  lVar7 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a7137e0; end: 10a7138b3;  */

void FUN_10a7137e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
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
  FUN_10a713778(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar5 = (long *)param_2[0x53];
  if (plVar5 == (long *)0x0) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*plVar5 + 0x50))();
    iVar2 = (int)plVar5;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
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
  lVar6 = *plVar5;
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
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
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



/* Entry: 10a7138b4; end: 10a7139cf;  */

void FUN_10a7138b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
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
  plVar8 = param_2;
  FUN_10a713778(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar8 = (long *)plVar8[0x4a];
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
  }
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar8[lVar10 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar10 = *plVar8;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar8 = lVar12;
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
  else if (uVar7 < uVar15) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a7139d0; end: 10a713aeb;  */

void FUN_10a7139d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713538(param_2,param_3);
  FUN_10a080bb8(param_5);
  FUN_10a079938(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a6e4440(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a713aec; end: 10a713b9b;  */

void FUN_10a713aec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713c54(param_1,param_2,FUN_10a6e4834,0,param_3,param_5);
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



/* Entry: 10a713b9c; end: 10a713c53;  */

void FUN_10a713b9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713cfc(param_1,param_2,FUN_10a6e48ac,0,param_3,param_4,param_5);
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



/* Entry: 10a713c54; end: 10a713cfb;  */

long * FUN_10a713c54(long *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                    undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_2;
  FUN_10a713778(param_2,param_5);
  FUN_10a052e3c(param_6);
  plVar2 = (long *)((long)plVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)();
  plVar3 = (long *)*plVar2;
  if ((plVar3 == (long *)0x0) || ((char)plVar3[8] != '\x02')) {
    *(int *)param_1 = 1;
    return plVar2;
  }
  lVar4 = *plVar3;
  iVar1 = *(int *)(lVar4 + 8);
  *(int *)param_1 = iVar1;
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar4 + 0x10);
      return param_1;
    }
    if (iVar1 == 3) {
      param_1[1] = *(long *)(lVar4 + 0x10);
      return param_1;
    }
  }
  else {
    if (iVar1 == 4) {
      (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(lVar4 + 0x10));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 5) {
      (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar4 + 0x10));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 6) {
      (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(lVar4 + 0x10));
      goto code_r0x000109884a78;
    }
  }
  if (iVar1 < 7) {
    return param_1;
  }
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar4 + 0x10));
code_r0x000109884a78:
  param_1[1] = (long)param_2;
  return param_1;
}



/* Entry: 10a713cfc; end: 10a713ddb;  */

void FUN_10a713cfc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a713538(param_2,param_5);
  FUN_10a2f3410(param_7);
  FUN_10a05dcbc(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
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



/* Entry: 10a713ddc; end: 10a713e8b;  */

void FUN_10a713ddc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713c54(param_1,param_2,FUN_10a6e4938,0,param_3,param_5);
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



/* Entry: 10a713e8c; end: 10a713f43;  */

void FUN_10a713e8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713cfc(param_1,param_2,FUN_10a6e49b0,0,param_3,param_4,param_5);
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



/* Entry: 10a713f44; end: 10a71401f;  */

void FUN_10a713f44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  plVar6 = param_2;
  FUN_10a713778(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x4f];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
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
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
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
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a714020; end: 10a7140d7;  */

void FUN_10a714020(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713cfc(param_1,param_2,FUN_10a6e4a3c,0,param_3,param_4,param_5);
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



/* Entry: 10a7140d8; end: 10a7141b3;  */

void FUN_10a7140d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
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
  plVar6 = param_2;
  FUN_10a713778(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x51];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
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
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
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
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a7141b4; end: 10a71426b;  */

void FUN_10a7141b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a713cfc(param_1,param_2,0x10a6e4a44,0,param_3,param_4,param_5);
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



/* Entry: 10a71426c; end: 10a7142c3;  */

long FUN_10a71426c(long param_1)

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



/* Entry: 10a7142c4; end: 10a7142f3;  */

long * FUN_10a7142c4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_10a6e467c(lVar6 + 0x248);
  *(undefined1 *)(lVar6 + 0x218) = 0;
  if (*(long *)(lVar6 + 0x248) == 0) {
    plVar5 = *(long **)(lVar6 + 0x298);
    *(undefined8 *)(lVar6 + 0x298) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar7 = *(long **)(lVar6 + 0x2a8);
    *(undefined8 *)(lVar6 + 0x2a8) = 0;
    *(undefined8 *)(lVar6 + 0x2a0) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return plVar7;
      }
    }
  }
  else {
    cVar2 = *(char *)(*(long *)(lVar6 + 0x248) + 0xe0);
    if (cVar2 == '\x02') {
      uVar4 = 0x268;
      __Znwm();
      FUN_10a8281d0();
    }
    else if (cVar2 == '\x01') {
      plVar5 = (long *)0xe8;
      __Znwm();
      FUN_10a8275a0();
      uVar4 = 0x58;
      __Znwm();
      plStack_50 = plVar5;
      FUN_10a82c9dc();
      if (plStack_50 != (long *)0x0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    else {
      if (cVar2 != '\0') {
        plVar5 = (long *)&UNK_10f66e67a;
        FUN_10a00946c();
        if (plStack_50 != (long *)0x0) {
          (**(code **)(*plStack_50 + 8))();
        }
        __ZdlPv();
        __Unwind_Resume();
        lVar8 = param_1[1];
        lVar6 = *param_1;
        if (param_1[1] != 0) {
          plVar7 = (long *)(param_1[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar7 = (long *)plVar5[1];
        plVar5[1] = lVar8;
        *plVar5 = lVar6;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        return plVar5;
      }
      uVar4 = 0xe0;
      __Znwm();
      FUN_10a824c24();
    }
    plVar5 = *(long **)(lVar6 + 0x298);
    *(undefined8 *)(lVar6 + 0x298) = uVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a6e46f8(&plStack_50,*(undefined8 *)(*(long *)(lVar6 + 0x170) + 0x960),cVar2);
    plVar5 = (long *)(lVar6 + 0x2a0);
    FUN_10a6e47d0(plVar5,&plStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar7 = plStack_48 + 1;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        plVar5 = plStack_48;
      }
    }
  }
  return plVar5;
}



/* Entry: 10a7142f4; end: 10a714307;  */

void FUN_10a7142f4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a714308; end: 10a714323;  */

void FUN_10a714308(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a714324; end: 10a71435f;  */

long FUN_10a714324(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a714360; end: 10a714363;  */

void FUN_10a714360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a714364; end: 10a7143bb;  */

long FUN_10a714364(long param_1)

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



/* Entry: 10a7143bc; end: 10a714447;  */

void FUN_10a7143bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a714448; end: 10a71458f;  */

void FUN_10a714448(undefined8 *param_1,long *param_2)

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



/* Entry: 10a714590; end: 10a7145c3;  */

void FUN_10a714590(void)

{
  return;
}



/* Entry: 10a7145c4; end: 10a714637;  */

void FUN_10a7145c4(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a714638);
  (*pcVar1)();
}



/* Entry: 10a714638; end: 10a7146f7;  */

void FUN_10a714638(undefined8 *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  uVar2 = (ulong)*param_3;
  piVar1 = param_2;
  func_0x000105689068(param_2,uVar2,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000105689120(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar2 = (ulong)*param_3;
      func_0x000105689068(param_2,uVar2,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x10);
    piVar1[2] = *param_3;
    piVar1[3] = 0;
    func_0x0001056891b0(param_2,uVar2,piVar1);
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



/* Entry: 10a7146f8; end: 10a71476b;  */

undefined8 * FUN_10a7146f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a71476c(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a714978(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a71476c; end: 10a71483b;  */

undefined1  [16] FUN_10a71476c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_78 [3];
  
  plVar14 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = param_2;
  }
  plVar13 = (long *)param_1[1];
  if (param_2 >= plVar13 && param_2 != plVar13) {
LAB_10a7147b4:
    plVar14 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
        plVar14 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar6 = (ulong)(int)*param_2;
        uVar15 = param_1[1];
        if (uVar15 != 0) {
          uVar7 = uVar15 - 1;
          if ((uVar15 & uVar7) == 0) {
            unaff_x23 = uVar7 & uVar6;
          }
          else {
            unaff_x23 = uVar6;
            if (uVar15 <= uVar6) {
              uVar9 = 0;
              if (uVar15 != 0) {
                uVar9 = uVar6 / uVar15;
              }
              unaff_x23 = uVar6 - uVar9 * uVar15;
            }
          }
          puVar8 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            for (plVar14 = (long *)*puVar8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              uVar9 = plVar14[1];
              if (uVar9 == uVar6) {
                if ((int)plVar14[2] == (int)*param_2) {
                  uVar4 = 0;
                  goto LAB_10a714b60;
                }
              }
              else {
                if ((uVar15 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar15 <= uVar9) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar9 / uVar15;
                  }
                  uVar9 = uVar9 - uVar1 * uVar15;
                }
                if (uVar9 != unaff_x23) break;
              }
            }
          }
        }
        FUN_10a714b9c(aplStack_78,param_1,uVar6);
        if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
          uVar7 = 1;
          if (2 < uVar15) {
            uVar7 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar7 = uVar7 | uVar15 << 1;
          uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar7 <= uVar15) {
            uVar7 = uVar15;
          }
          FUN_10a71476c(param_1,uVar7);
          uVar15 = param_1[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x23 = uVar15 - 1 & uVar6;
          }
          else {
            unaff_x23 = uVar6;
            if (uVar15 <= uVar6) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar6 / uVar15;
              }
              unaff_x23 = uVar6 - uVar7 * uVar15;
            }
          }
        }
        plVar14 = aplStack_78[0];
        lVar3 = *param_1;
        plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
        if (plVar5 == (long *)0x0) {
          plVar5 = param_1 + 2;
          *aplStack_78[0] = *plVar5;
          *plVar5 = (long)aplStack_78[0];
          *(long **)(lVar3 + unaff_x23 * 8) = plVar5;
          if (*aplStack_78[0] != 0) {
            uVar6 = *(ulong *)(*aplStack_78[0] + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar6 = uVar6 & uVar15 - 1;
            }
            else if (uVar15 <= uVar6) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar6 / uVar15;
              }
              uVar6 = uVar6 - uVar7 * uVar15;
            }
            *(long **)(*param_1 + uVar6 * 8) = aplStack_78[0];
          }
        }
        else {
          *aplStack_78[0] = *plVar5;
          *plVar5 = (long)aplStack_78[0];
        }
        aplStack_78[0] = (long *)0x0;
        param_1[3] = param_1[3] + 1;
        FUN_10a714c44(aplStack_78,0);
        uVar4 = 1;
LAB_10a714b60:
        auVar18._8_8_ = uVar4;
        auVar18._0_8_ = plVar14;
        return auVar18;
      }
      lVar2 = (long)param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
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
        plVar13 = (long *)plVar5[1];
        uVar6 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar6) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar6);
        }
        else if (param_2 <= plVar13) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar13 / (ulong)param_2;
          }
          plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar5;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar6);
          }
          else if (param_2 <= plVar12) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar12 / (ulong)param_2;
            }
            plVar12 = (long *)((long)plVar12 - uVar15 * (long)param_2);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar13) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar2 + (long)plVar12 * 8) = plVar5;
              plVar13 = plVar12;
            }
            else {
              *plVar5 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar2 + (long)plVar12 * 8);
              **(long **)(lVar2 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar5;
            }
          }
          plVar5 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    auVar17._8_8_ = plVar14;
    auVar17._0_8_ = lVar3;
    return auVar17;
  }
  if (param_2 < plVar13) {
    plVar14 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar14) {
      plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
    }
    if (param_2 <= plVar14) {
      param_2 = plVar14;
    }
    if (param_2 < plVar13) goto LAB_10a7147b4;
  }
  auVar16._8_8_ = plVar5;
  auVar16._0_8_ = plVar14;
  return auVar16;
}



/* Entry: 10a71483c; end: 10a714977;  */

undefined1  [16] FUN_10a71483c(long *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  ulong unaff_x23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *aplStack_78 [3];
  
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      piVar4 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar7 = (ulong)*param_2;
      uVar15 = param_1[1];
      if (uVar15 != 0) {
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          unaff_x23 = uVar8 & uVar7;
        }
        else {
          unaff_x23 = uVar7;
          if (uVar15 <= uVar7) {
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = uVar7 / uVar15;
            }
            unaff_x23 = uVar7 - uVar11 * uVar15;
          }
        }
        puVar10 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar9 = (long *)*puVar10; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            uVar11 = plVar9[1];
            if (uVar11 == uVar7) {
              if ((int)plVar9[2] == *param_2) {
                uVar5 = 0;
                goto LAB_10a714b60;
              }
            }
            else {
              if ((uVar15 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar15 <= uVar11) {
                uVar1 = 0;
                if (uVar15 != 0) {
                  uVar1 = uVar11 / uVar15;
                }
                uVar11 = uVar11 - uVar1 * uVar15;
              }
              if (uVar11 != unaff_x23) break;
            }
          }
        }
      }
      FUN_10a714b9c(aplStack_78,param_1,uVar7);
      if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
        uVar8 = 1;
        if (2 < uVar15) {
          uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar8 = uVar8 | uVar15 << 1;
        uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        FUN_10a71476c(param_1,uVar8);
        uVar15 = param_1[1];
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x23 = uVar15 - 1 & uVar7;
        }
        else {
          unaff_x23 = uVar7;
          if (uVar15 <= uVar7) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar7 / uVar15;
            }
            unaff_x23 = uVar7 - uVar8 * uVar15;
          }
        }
      }
      plVar9 = aplStack_78[0];
      lVar3 = *param_1;
      plVar12 = *(long **)(lVar3 + unaff_x23 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = param_1 + 2;
        *aplStack_78[0] = *plVar12;
        *plVar12 = (long)aplStack_78[0];
        *(long **)(lVar3 + unaff_x23 * 8) = plVar12;
        if (*aplStack_78[0] != 0) {
          uVar7 = *(ulong *)(*aplStack_78[0] + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar7 = uVar7 & uVar15 - 1;
          }
          else if (uVar15 <= uVar7) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar8 * uVar15;
          }
          *(long **)(*param_1 + uVar7 * 8) = aplStack_78[0];
        }
      }
      else {
        *aplStack_78[0] = *plVar12;
        *plVar12 = (long)aplStack_78[0];
      }
      aplStack_78[0] = (long *)0x0;
      param_1[3] = param_1[3] + 1;
      FUN_10a714c44(aplStack_78,0);
      uVar5 = 1;
LAB_10a714b60:
      auVar17._8_8_ = uVar5;
      auVar17._0_8_ = plVar9;
      return auVar17;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    piVar6 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar6 * 8) = 0;
      piVar6 = (int *)((long)piVar6 + 1);
    } while (param_2 != piVar6);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      piVar6 = (int *)plVar9[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        piVar6 = (int *)((ulong)piVar6 & uVar7);
      }
      else if (param_2 <= piVar6) {
        uVar15 = 0;
        if (param_2 != (int *)0x0) {
          uVar15 = (ulong)piVar6 / (ulong)param_2;
        }
        piVar6 = (int *)((long)piVar6 - uVar15 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar6 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar9;
      while (plVar12 != (long *)0x0) {
        piVar14 = (int *)plVar12[1];
        if (((ulong)param_2 & uVar7) == 0) {
          piVar14 = (int *)((ulong)piVar14 & uVar7);
        }
        else if (param_2 <= piVar14) {
          uVar15 = 0;
          if (param_2 != (int *)0x0) {
            uVar15 = (ulong)piVar14 / (ulong)param_2;
          }
          piVar14 = (int *)((long)piVar14 - uVar15 * (long)param_2);
        }
        plVar13 = plVar12;
        if (piVar14 != piVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)piVar14 * 8) == 0) {
            *(long **)(lVar2 + (long)piVar14 * 8) = plVar9;
            piVar6 = piVar14;
          }
          else {
            *plVar9 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar2 + (long)piVar14 * 8);
            **(long **)(lVar2 + (long)piVar14 * 8) = (long)plVar12;
            plVar13 = plVar9;
          }
        }
        plVar9 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  auVar16._8_8_ = piVar4;
  auVar16._0_8_ = lVar3;
  return auVar16;
}



/* Entry: 10a714978; end: 10a714b9b;  */

undefined1  [16] FUN_10a714978(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  long *aplStack_58 [3];
  
  uVar8 = (ulong)*param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
    if ((uVar10 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar6 * uVar10;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar5; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar6 = plVar9[1];
        if (uVar6 == uVar8) {
          if ((int)plVar9[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10a714b60;
          }
        }
        else {
          if ((uVar10 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar10 <= uVar6) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar1 * uVar10;
          }
          if (uVar6 != unaff_x23) break;
        }
      }
    }
  }
  FUN_10a714b9c(aplStack_58,param_1,uVar8);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar10) {
      uVar3 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    FUN_10a71476c(param_1,uVar3);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar3 * uVar10;
      }
    }
  }
  plVar9 = aplStack_58[0];
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar7;
    if (*aplStack_58[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar8 / uVar10;
        }
        uVar8 = uVar8 - uVar3 * uVar10;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10a714c44(aplStack_58,0);
  uVar2 = 1;
LAB_10a714b60:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar9;
  return auVar11;
}



/* Entry: 10a714b9c; end: 10a714c43;  */

void FUN_10a714b9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  puStack_48 = puVar1 + 3;
  *(undefined1 *)(puVar1 + 9) = 3;
  FUN_10a700d30(&puStack_48,param_4 + 2,*(undefined1 *)(param_4 + 0xe));
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_4 + 0xe);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a714c44; end: 10a714ca7;  */

void FUN_10a714c44(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    if (3 < (ulong)*(byte *)(lVar2 + 0x48)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a714ca8);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110c14970)[*(byte *)(lVar2 + 0x48)])(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a714ca8; end: 10a714ee7;  */

long * FUN_10a714ca8(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar8) {
          if (*(int *)(plVar4 + 2) == param_2) {
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
  uStack_48 = 1;
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *param_3;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  *(undefined1 *)(plVar4 + 9) = 0;
  plStack_58 = plVar4;
  plStack_50 = param_1;
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
    FUN_10a71476c(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  plVar4 = plStack_58;
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plStack_58 = *plVar6;
    *plVar6 = (long)plStack_58;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*plStack_58 != 0) {
      uVar8 = *(ulong *)(*plStack_58 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar2 * uVar7;
      }
      *(long **)(*param_1 + uVar8 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar6;
    *plVar6 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10a714c44(&plStack_58,0);
  return plVar4;
}



/* Entry: 10a714ee8; end: 10a715067;  */

long * FUN_10a714ee8(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a715068; end: 10a715087;  */

void FUN_10a715068(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c13c40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a715088; end: 10a715163;  */

void FUN_10a715088(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  FUN_10a7018e0(param_1 + 0x30);
  plVar4 = *(long **)(param_1 + 0x28);
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
  plVar4 = *(long **)(param_1 + 0x20);
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
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      FUN_109d1b3c4(plVar4,1,param_1 + 0x18);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))(plVar4);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a715164; end: 10a715167;  */

void FUN_10a715164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a715168; end: 10a7151fb;  */

undefined8 * FUN_10a715168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13c90;
  FUN_10a700ce4(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a7151fc; end: 10a7152d3;  */

void FUN_10a7151fc(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a70183c(lVar8 + 0x98);
        uVar10 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa8) = param_2[2];
        *(undefined8 *)(lVar8 + 0xa0) = uVar10;
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        uVar10 = param_2[4];
        uVar9 = param_2[3];
        *(undefined8 *)(lVar8 + 0xc0) = param_2[5];
        *(undefined8 *)(lVar8 + 0xb8) = uVar10;
        *(undefined8 *)(lVar8 + 0xb0) = uVar9;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[3] = 0;
        *(undefined1 *)(lVar8 + 200) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a7152a4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a7152a4:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a7152d4; end: 10a7156db;  */

void FUN_10a7152d4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a72a880;
  puVar5[1] = FUN_10a72abb0;
  puVar5[0xc] = param_2;
  FUN_10a7156dc(puVar5 + 2);
  lVar6 = puVar5[7];
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar6;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  lVar6 = puVar5[6];
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = (long *)puVar5[10];
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  puVar5[9] = lVar6;
  puVar5[10] = lVar6;
  FUN_10a7157bc(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
  puVar5[10] = puVar5[0xb];
  plVar9 = (long *)(puVar5[0xb] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xd) = 1;
    lVar6 = puVar5[10];
    plVar9 = (long *)(lVar6 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar8 = *plVar9;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar6 + 0x18,&uStack_48);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  lVar6 = puVar5[10];
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar6 + 200) & 1) != 0) {
      FUN_10a71577c(puVar5 + 2,lVar6 + 0x98);
      plVar9 = (long *)puVar5[10];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar5[0xb];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar5[9];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar6 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7155b0);
  (*pcVar4)();
}



/* Entry: 10a7156dc; end: 10a71577b;  */

undefined8 * FUN_10a7156dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  *puVar1 = &PTR_FUN_110c13c90;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a71577c; end: 10a7157bb;  */

void FUN_10a71577c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a715d40(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7157bc; end: 10a715d3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a715914) */
/* WARNING: Removing unreachable block (ram,0x00010a715b24) */
/* WARNING: Removing unreachable block (ram,0x00010a7158d4) */
/* WARNING: Removing unreachable block (ram,0x00010a715a68) */

void FUN_10a7157bc(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x138;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x19) = 0;
  *plVar4 = (long)&PTR_FUN_110c13cc8;
  plVar10 = plVar4 + 0x1a;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x1b] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0x32aaaba7;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x26] = 0;
  lStack_78 = 0;
  plVar4[0x1c] = (long)plVar4;
  plVar4[0x1d] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x1b] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1f);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a715e2c;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x1b];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a715a54;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x1c];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x1b];
    plVar4[0x1b] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x1c];
    plVar4[0x1c] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x1c);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a715c94:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1f);
  }
  else {
    lVar8 = plVar4[0x1c];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x1b];
    plVar4[0x1b] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x1c];
    plVar4[0x1c] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x1c);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a715a54:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a715f3c;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a715c90;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x1c];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x1b];
  plVar4[0x1b] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a715b38:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a715c88;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a715b38;
  pcStack_68 = FUN_10a715e2c;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x1c];
  plVar4[0x1c] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x1c);
  }
LAB_10a715c88:
  *param_1 = (long)plVar4;
LAB_10a715c90:
  plStack_80 = (long *)0x0;
  goto LAB_10a715c94;
}



/* Entry: 10a715d40; end: 10a715e2b;  */

void FUN_10a715d40(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a70183c(param_1 + 0x98);
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(param_1 + 0x98,*param_2,param_2[1]);
        }
        else {
          uVar10 = param_2[1];
          uVar9 = *param_2;
          *(undefined8 *)(param_1 + 0xa8) = param_2[2];
          *(undefined8 *)(param_1 + 0xa0) = uVar10;
          *(undefined8 *)(param_1 + 0x98) = uVar9;
        }
        if (*(char *)((long)param_2 + 0x2f) < '\0') {
          func_0x000107c3192c(param_1 + 0xb0,param_2[3],param_2[4]);
        }
        else {
          uVar10 = param_2[4];
          uVar9 = param_2[3];
          *(undefined8 *)(param_1 + 0xc0) = param_2[5];
          *(undefined8 *)(param_1 + 0xb8) = uVar10;
          *(undefined8 *)(param_1 + 0xb0) = uVar9;
        }
        *(undefined1 *)(param_1 + 200) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a715e2c; end: 10a715f3b;  */

void FUN_10a715e2c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a715f3c;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 200) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a715f38);
      (*pcVar4)();
    }
    FUN_10a715d40(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  FUN_10a7162c4(param_1,param_1 + 3);
  return;
}



/* Entry: 10a715f3c; end: 10a71601b;  */

void FUN_10a715f3c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a715e2c;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a7162c4(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a71601c; end: 10a71608f;  */

long * FUN_10a71601c(long *param_1)

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



/* Entry: 10a716090; end: 10a7162c3;  */

undefined8 * FUN_10a716090(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c13cc8;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x1b];
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
  plVar5 = (long *)param_1[0x1a];
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
  *param_1 = &PTR_FUN_110c13c90;
  FUN_10a700ce4(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a7162c4; end: 10a71638b;  */

void FUN_10a7162c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a71638c; end: 10a71639f;  */

long * FUN_10a71638c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a7163a0; end: 10a7163f3;  */

long * FUN_10a7163a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7163f4; end: 10a716527;  */

void FUN_10a7163f4(long *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long alStack_50 [4];
  
  lVar4 = *(long *)(param_2 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar4 + 0x18);
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x0001092af8bc(param_1);
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 200) & 1) != 0) {
    func_0x0001098d58d4(alStack_50,lVar5 + 0x90,param_2 + 0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (alStack_50[0] + 0x10,lVar3 + 0xb0);
    iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x10) + -1;
    *(int *)(*(long *)(param_2 + 0x10) + 0x10) = iVar1;
    if (iVar1 == 0) {
      FUN_10a6e5f9c();
    }
    __ZNSt3__15mutex6unlockEv(lVar4 + 0x18);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a71648c);
  (*pcVar2)();
}



/* Entry: 10a716528; end: 10a716597;  */

void FUN_10a716528(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = (code *)*param_1;
  func_0x000107c2b054(auStack_38,&UNK_10f6717f4);
  (*pcVar1)(auStack_38,param_1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a716598; end: 10a7165ff;  */

long FUN_10a716598(long param_1)

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



/* Entry: 10a716600; end: 10a716657;  */

void FUN_10a716600(long *param_1)

{
  long lVar1;
  
  lVar1 = 200;
  __Znwm();
  FUN_10a716658();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a716658; end: 10a71669f;  */

undefined8 * FUN_10a716658(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c13d20;
  FUN_10a7167b0(param_1 + 3);
  return param_1;
}



/* Entry: 10a7166a0; end: 10a7166af;  */

void FUN_10a7166a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13d20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7166b0; end: 10a7166cf;  */

void FUN_10a7166b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13d20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7166d0; end: 10a7167ab;  */

void FUN_10a7166d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  func_0x00010a717318(param_1 + 0x30);
  plVar4 = *(long **)(param_1 + 0x28);
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
  plVar4 = *(long **)(param_1 + 0x20);
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
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      FUN_109d1b3c4(plVar4,1,param_1 + 0x18);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))(plVar4);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a7167ac; end: 10a7167af;  */

void FUN_10a7167ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7167b0; end: 10a716d47;  */

/* WARNING: Removing unreachable block (ram,0x00010a716964) */

long * FUN_10a7167b0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_1[6] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  FUN_10a6e8b54(&lStack_68);
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  param_1[1] = lStack_68;
  lVar11 = lStack_68;
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
    lVar11 = param_1[1];
  }
  *param_1 = (long)puStack_60;
  if (lVar11 != 0) {
    plVar5 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_10a7343b8;
  puVar6[1] = FUN_10a7346a4;
  FUN_10a718b18(puVar6 + 2);
  lVar12 = puVar6[7];
  if (lVar12 != 0) {
    plVar5 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0xb] = lVar11;
  puVar6[9] = param_2;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  puVar7 = puVar6 + 9;
  FUN_10a716d48(puVar7,puVar6);
  if (((ulong)puVar7 & 1) != 0) {
LAB_10a716aac:
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    param_1[2] = lVar12;
    return param_1;
  }
  FUN_10a716e24(puVar6 + 0xc,puVar6 + 0xb);
  puVar6[9] = puVar6[0xc];
  plVar5 = (long *)(puVar6[0xc] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    lVar11 = puVar6[9];
    plVar5 = (long *)(lVar11 + 0x10);
    uVar9 = puVar6[3];
    do {
      lVar10 = *plVar5;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lStack_68 = 0;
          puStack_60 = puVar6;
          uStack_58 = uVar9;
          func_0x000109d1b588(lVar11 + 0x18,&lStack_68);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          goto LAB_10a716aac;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar11 = puVar6[9];
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0xb0) & 1) != 0) {
      FUN_10a716de4(puVar6 + 2,lVar11 + 0x98);
      plVar5 = (long *)puVar6[9];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = (long *)puVar6[0xc];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = (long *)puVar6[0xb];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      goto LAB_10a716aac;
    }
  }
  else {
    func_0x0001092af97c(lVar11 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a716b24);
  (*pcVar4)();
}



/* Entry: 10a716d48; end: 10a716de3;  */

byte FUN_10a716d48(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_109d18960(param_2 + 0x10,*param_1,&lStack_38);
  if (lStack_38 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)*param_1;
      uStack_50 = 0;
      lStack_48 = param_2;
      (**(code **)*puStack_40)(puStack_40,&uStack_50);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
    return bVar1 ^ 1;
  }
  func_0x0001092af97c(&lStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a716dd0);
  (*pcVar2)();
}



/* Entry: 10a716de4; end: 10a716e23;  */

void FUN_10a716de4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a7171c4(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a716e24; end: 10a7171c3;  */

void FUN_10a716e24(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a733f1c;
  puVar5[1] = FUN_10a734248;
  puVar5[0xc] = param_2;
  FUN_10a718b18(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a6e8bc4(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a6e8ca8(puVar5 + 0xb,puVar5 + 9,puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    lVar8 = puVar5[10];
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
        FUN_10a6e8c68(puVar5 + 2,lVar8 + 0x98);
        plVar7 = (long *)puVar5[10];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar5[0xb];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar5[9];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar8 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a717098);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a7171c4; end: 10a71723b;  */

undefined1 FUN_10a7171c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a71723c(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a71723c; end: 10a7172a7;  */

undefined8 * FUN_10a71723c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    puStack_28 = param_1;
    FUN_10a7172a8(&puStack_28);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 10a7172a8; end: 10a71738f;  */

void FUN_10a7172a8(long *param_1)

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
        lVar1 = lVar1 + -0xe0;
        FUN_10ae0e238();
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



/* Entry: 10a717390; end: 10a7173e7;  */

long FUN_10a717390(long param_1)

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



/* Entry: 10a7173e8; end: 10a71757f;  */

long ***** FUN_10a7173e8(long param_1)

{
  long lVar1;
  long lVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  long ****pppplStack_98;
  char cStack_90;
  long **pplStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppplVar3 = &pppplStack_98;
    pppplStack_98 = (long ****)(param_1 + 0x70);
    func_0x00010a701888();
    ppppplVar4 = ppppplVar3;
    if (((ulong)ppppplVar3 & 1) != 0) {
      ppplStack_b0 = (long ***)0x0;
      ppplStack_a8 = (long ***)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      pppplVar7 = *(long *****)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      pppplVar5 = *(long *****)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      ppplStack_b0 = (long ***)pppplVar7;
      ppplStack_a8 = (long ***)pppplVar5;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; pppplVar7 != pppplVar5; pppplVar7 = pppplVar7 + 8) {
        pplStack_88 = (long **)*pppplVar7;
        (*(code *)pppplVar7[1][3])(apuStack_80,pppplVar7 + 1);
        (*(code *)pplStack_88)(param_1 + 8,&pplStack_88);
        (*(code *)*apuStack_80[0])(apuStack_80);
      }
      ppppplVar4 = (long *****)&ppplStack_b0;
      func_0x00010a717318();
    }
    if (cStack_90 == '\x01') {
      ppppplVar4 = (long *****)pppplStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppplVar3 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    ppppplVar4 = (long *****)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar2 != lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar4;
  }
  ___stack_chk_fail();
  func_0x00010a717318(&ppplStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppplStack_98);
  }
  __Unwind_Resume(ppppplVar4);
  ppppplVar3 = (long *****)&DAT_10f62a4d8;
  FUN_109ffde64();
  pppplVar7 = ppppplVar3[1];
  pppplVar5 = ppppplVar3[2];
  while (pppplVar5 != pppplVar7) {
    ppplVar6 = pppplVar5[-7];
    ppppplVar3[2] = pppplVar5 + -8;
    (*(code *)*ppplVar6)();
    pppplVar5 = ppppplVar3[2];
  }
  if (*ppppplVar3 != (long ****)0x0) {
    __ZdlPv();
  }
  return ppppplVar3;
}



/* Entry: 10a717580; end: 10a717593;  */

long * FUN_10a717580(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a717594; end: 10a7175e7;  */

long * FUN_10a717594(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7175e8; end: 10a71777f;  */

void FUN_10a7175e8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  plVar6 = *(long **)(param_2 + 0x18);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    plVar9 = *(long **)(param_2 + 0x10);
    plStack_48 = plVar9;
    plStack_40 = plVar6;
    if (plVar9 != (long *)0x0) {
      uVar7 = *(ulong *)(param_1 + 0x10);
      puVar3 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar3 = (ulong *)(uVar7 + 7);
      }
      lStack_58 = 0;
      uStack_50 = 0;
      lStack_60 = 0;
      FUN_10a717780(&lStack_60,puVar3,puVar3 + *(int *)(param_1 + 0x18));
      lVar10 = *plVar9;
      plVar1 = (long *)(lVar10 + 0x10);
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puVar2 = (undefined8 *)(lVar10 + 0x98);
            if (*(char *)(lVar10 + 0xb0) == '\x01') {
              puStack_38 = puVar2;
              FUN_10a7172a8(&puStack_38);
              *(undefined1 *)(lVar10 + 0xb0) = 0;
            }
            *puVar2 = 0;
            *(undefined8 *)(lVar10 + 0xa0) = 0;
            *(undefined8 *)(lVar10 + 0xa8) = 0;
            FUN_10a71793c(puVar2,lStack_60,lStack_58,
                          (lStack_58 - lStack_60 >> 5) * 0x6db6db6db6db6db7);
            *(undefined1 *)(lVar10 + 0xb0) = 1;
            *(undefined8 *)(lVar10 + 0x10) = 2;
            FUN_109d1b4dc(lVar10 + 0x18);
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
      FUN_10a7173e8(plVar9);
      puStack_38 = &lStack_60;
      FUN_10a7172a8(&puStack_38);
    }
    plVar9 = plVar6 + 1;
    do {
      lVar10 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a717780; end: 10a717803;  */

void FUN_10a717780(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a717804(param_1,param_4);
    lVar1 = param_1;
    FUN_10a7178ac(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a717804; end: 10a71784f;  */

undefined1  [16] FUN_10a717804(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < (undefined8 *)0x124924924924925) {
    plVar1 = param_1;
    FUN_10a717864();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 0x1c);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_10a717850();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (undefined8 *)0x124924924924925) {
    lVar4 = (long)param_2 * 0xe0;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
  if (param_2 != param_3) {
    lVar4 = 0;
    puVar2 = param_2;
    do {
      puVar3 = puVar2 + 1;
      param_2 = (undefined8 *)0x0;
      FUN_10ae0e0f0(param_4 + lVar4,0,*puVar2);
      lVar4 = lVar4 + 0xe0;
      puVar2 = puVar3;
    } while (puVar3 != param_3);
    param_4 = param_4 + lVar4;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a717850; end: 10a717863;  */

undefined1  [16]
FUN_10a717850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (undefined8 *)0x124924924924925) {
    lVar3 = (long)param_2 * 0xe0;
    __Znwm(lVar3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar3;
    return auVar4;
  }
  func_0x000109ffded8();
  if (param_2 != param_3) {
    lVar3 = 0;
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 1;
      param_2 = (undefined8 *)0x0;
      FUN_10ae0e0f0(param_4 + lVar3,0,*puVar1);
      lVar3 = lVar3 + 0xe0;
      puVar1 = puVar2;
    } while (puVar2 != param_3);
    param_4 = param_4 + lVar3;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a717864; end: 10a7178ab;  */

undefined1  [16]
FUN_10a717864(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 < (undefined8 *)0x124924924924925) {
    lVar3 = (long)param_2 * 0xe0;
    __Znwm(lVar3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar3;
    return auVar4;
  }
  func_0x000109ffded8();
  if (param_2 != param_3) {
    lVar3 = 0;
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 1;
      param_2 = (undefined8 *)0x0;
      FUN_10ae0e0f0(param_4 + lVar3,0,*puVar1);
      lVar3 = lVar3 + 0xe0;
      puVar1 = puVar2;
    } while (puVar2 != param_3);
    param_4 = param_4 + lVar3;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a7178ac; end: 10a71793b;  */

long FUN_10a7178ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      puVar1 = param_2 + 1;
      FUN_10ae0e0f0(param_4 + lVar2,0,*param_2);
      lVar2 = lVar2 + 0xe0;
      param_2 = puVar1;
    } while (puVar1 != param_3);
    param_4 = param_4 + lVar2;
  }
  return param_4;
}



/* Entry: 10a71793c; end: 10a7179bf;  */

void FUN_10a71793c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a717804(param_1,param_4);
    lVar1 = param_1;
    FUN_10a7179c0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a7179c0; end: 10a717a53;  */

long FUN_10a7179c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      FUN_10ae0e0f0(param_4 + lVar1,0,param_2 + lVar1);
      lVar1 = lVar1 + 0xe0;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  return param_4;
}



/* Entry: 10a717a54; end: 10a717ab3;  */

void FUN_10a717a54(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a717ab4; end: 10a717d2b;  */

void FUN_10a717ab4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x22;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x20);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x10) + 0x18);
        uStack_f8 = param_1[1];
        uStack_100 = *param_1;
        lStack_f0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        unaff_x22 = &uStack_100;
        uStack_e0 = param_1[4];
        uStack_e8 = param_1[3];
        lStack_d8 = param_1[5];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        uStack_d0 = *(undefined4 *)(param_1 + 6);
        uStack_c8 = param_1[7];
        uStack_c0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
        uStack_80 = param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        *(undefined4 *)*puVar8 = uStack_d0;
        uVar6 = 0;
        FUN_10a0f0eb8();
        if ((uVar6 & 1) == 0) goto LAB_10a717c70;
        ppuStack_130 = &PTR_FUN_110c78ec0;
        uStack_128 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        FUN_10a0f10ac(&ppuStack_130,uStack_c8,uStack_80);
        puVar8 = puVar8 + 2;
        (*(code *)*puVar8)(&ppuStack_130,puVar8);
        FUN_10ae0fc78(&ppuStack_130);
        func_0x000104c4f944(auStack_70);
        FUN_10a042634(&uStack_c8);
        if (lStack_d8 < 0) {
          __ZdlPv(uStack_e8);
        }
        if (lStack_f0 < 0) {
          __ZdlPv(uStack_100);
        }
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a717c70:
  FUN_10a109200(unaff_x22 + 3);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a717c7c);
  (*pcVar4)();
}



/* Entry: 10a717d2c; end: 10a717d57;  */

undefined8 * FUN_10a717d2c(long param_1)

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



/* Entry: 10a717d58; end: 10a717e07;  */

void FUN_10a717d58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x60) + 0x940);
  plVar6 = *(long **)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
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
  }
  FUN_10a25f3f4(uVar4,&uStack_30);
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
  return;
}



/* Entry: 10a717e08; end: 10a717e6b;  */

long FUN_10a717e08(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a717e6c; end: 10a718153;  */

void FUN_10a717e6c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 **ppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_2 + 0x10);
  plVar6 = (long *)plVar9[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    if (*plVar9 != 0) {
      uStack_f8 = param_1[1];
      uStack_100 = *param_1;
      lStack_f0 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      uStack_e0 = param_1[4];
      uStack_e8 = param_1[3];
      param_1[2] = 0;
      param_1[3] = 0;
      lStack_d8 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      uStack_d0 = *(undefined4 *)(param_1 + 6);
      uStack_c8 = param_1[7];
      uStack_c0 = param_1[8];
      param_1[7] = 0;
      (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
      uStack_80 = param_1[0x10];
      uStack_78 = *(undefined4 *)(param_1 + 0x11);
      FUN_10a0424c4(auStack_70,param_1 + 0x12);
      iVar5 = (int)&uStack_100;
      FUN_10a0f0eb8();
      if (iVar5 == 0) {
        func_0x000107c2b054(auStack_118,&UNK_10f671918);
        func_0x000107c2b054(&ppuStack_130,&UNK_10f67192f);
        puVar7 = auStack_70;
        func_0x000104c5e210(puVar7,&ppuStack_130);
        if ((char)bStack_119 < '\0') {
          __ZdlPv(ppuStack_130);
        }
        if (puVar7 != (undefined1 *)0x0) {
          func_0x000107c2b054(auStack_148,&UNK_10f67192f);
          puVar7 = auStack_70;
          func_0x000104c5e210(puVar7,auStack_148);
          if (puVar7 == (undefined1 *)0x0) goto LAB_10a7180c4;
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&ppuStack_130,&UNK_10f67193c,puVar7 + 0x28);
          pppuVar3 = (undefined8 ***)ppuStack_130;
          if (-1 < (char)bStack_119) {
            uStack_128 = (ulong)bStack_119;
            pppuVar3 = &ppuStack_130;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (auStack_118,pppuVar3,uStack_128);
          if ((char)bStack_119 < '\0') {
            __ZdlPv(ppuStack_130);
          }
          if (cStack_131 < '\0') {
            __ZdlPv(auStack_148[0]);
          }
        }
        (*(code *)plVar9[10])(auStack_118,plVar9 + 10);
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
      }
      else {
        (*(code *)plVar9[2])(plVar9 + 2);
      }
      func_0x000104c4f944(auStack_70);
      FUN_10a042634(&uStack_c8);
      if (lStack_d8 < 0) {
        __ZdlPv(uStack_e8);
      }
      if (lStack_f0 < 0) {
        __ZdlPv(uStack_100);
      }
    }
    plVar9 = plVar6 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a7180c4:
  FUN_109ffdddc(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7180d4);
  (*pcVar4)();
}



/* Entry: 10a718154; end: 10a7181b3;  */

void FUN_10a718154(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x58))();
    (*(code *)**(undefined8 **)(lVar1 + 0x18))((undefined8 *)(lVar1 + 0x18));
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7181b4; end: 10a7181cb;  */

void FUN_10a7181b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7181cc; end: 10a71827f;  */

undefined8 * FUN_10a7181cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c148f0;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN_10ae0e238(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a718280; end: 10a718793;  */

/* WARNING: Removing unreachable block (ram,0x00010a71862c) */
/* WARNING: Removing unreachable block (ram,0x00010a71863c) */

void FUN_10a718280(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined **unaff_x22;
  undefined1 auStack_678 [16];
  undefined1 auStack_668 [272];
  undefined1 auStack_558 [8];
  undefined **appuStack_550 [2];
  undefined1 auStack_540 [272];
  undefined **ppuStack_430;
  undefined8 *puStack_428;
  long lStack_420;
  long *plStack_418;
  undefined1 *puStack_410;
  code *pcStack_408;
  undefined8 **ppuStack_400;
  undefined8 **ppuStack_3f0;
  ulong uStack_3e8;
  byte bStack_3d9;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  long lStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_348;
  long alStack_340 [34];
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_100 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_f0 = param_1[4];
  ppuStack_f8 = (undefined8 **)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_e8 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_e0 = *(undefined4 *)(param_1 + 6);
  uStack_d8 = param_1[7];
  uStack_d0 = param_1[8];
  param_1[7] = 0;
  plVar11 = param_1 + 9;
  (**(code **)(*plVar11 + 0x10))(auStack_c8,plVar11);
  uStack_90 = param_1[0x10];
  uStack_88 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_80,param_1 + 0x12);
  plVar5 = *(long **)(param_2 + 0x20);
  if ((plVar5 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_358 = plVar5, plVar5 != (long *)0x0)) {
    lStack_360 = *(long *)(param_2 + 0x18);
    if (lStack_360 != 0) {
      uVar6 = 0;
      FUN_10a0f0eb8();
      if ((uVar6 & 1) == 0) {
        __ZNSt3__19to_stringEi(auStack_3d8,uStack_e0);
        puVar7 = auStack_3d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar7,0,&UNK_10f67194d,0x32);
        uStack_3b8 = puVar7[1];
        uStack_3c0 = *puVar7;
        lStack_3b0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = &uStack_3c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&UNK_10f579baa,3);
        uStack_398 = puVar7[1];
        uStack_3a0 = *puVar7;
        lStack_390 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        uVar6 = uStack_f0;
        pppuVar4 = (undefined8 ***)ppuStack_f8;
        if (-1 < (long)uStack_e8) {
          uVar6 = uStack_e8 >> 0x38;
          pppuVar4 = &ppuStack_f8;
        }
        puVar7 = &uStack_3a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,pppuVar4,uVar6);
        uStack_348 = puVar7[1];
        ppuStack_350 = (undefined **)*puVar7;
        alStack_340[0] = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        pppuVar8 = &ppuStack_350;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar8,"; ",2);
        ppuStack_228 = pppuVar8[1];
        ppuStack_230 = *pppuVar8;
        ppuStack_220 = pppuVar8[2];
        pppuVar8[1] = (undefined **)0x0;
        pppuVar8[2] = (undefined **)0x0;
        *pppuVar8 = (undefined **)0x0;
        FUN_10a0f0e08(&ppuStack_3f0,&uStack_110);
        pppuVar4 = (undefined8 ***)ppuStack_3f0;
        if (-1 < (char)bStack_3d9) {
          uStack_3e8 = (ulong)bStack_3d9;
          pppuVar4 = &ppuStack_3f0;
        }
        pppuVar8 = &ppuStack_230;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar8,pppuVar4,uStack_3e8);
        ppuStack_378 = pppuVar8[1];
        ppuStack_380 = (undefined8 **)*pppuVar8;
        ppuStack_370 = pppuVar8[2];
        pppuVar8[1] = (undefined **)0x0;
        pppuVar8[2] = (undefined **)0x0;
        *pppuVar8 = (undefined **)0x0;
        if ((char)bStack_3d9 < '\0') {
          __ZdlPv(ppuStack_3f0);
        }
        if ((long)ppuStack_220 < 0) {
          __ZdlPv(ppuStack_230);
        }
        if (alStack_340[0] < 0) {
          __ZdlPv(ppuStack_350);
        }
        if (lStack_390 < 0) {
          __ZdlPv(uStack_3a0);
        }
        if (lStack_3b0 < 0) {
          __ZdlPv(uStack_3c0);
        }
        if (cStack_3c1 < '\0') {
          __ZdlPv(auStack_3d8[0]);
        }
        if ((bRam000000011330a9e8 & 1) != 0) {
          ppuStack_400 = ppuStack_380;
          if (-1 < (long)ppuStack_370) {
            ppuStack_400 = &ppuStack_380;
          }
          func_0x00010ae06f08(0,1,&UNK_10f66e891,&UNK_10f671980,0x27b,"%s");
        }
        FUN_10a002a94(&ppuStack_350,&ppuStack_380);
        unaff_x22 = &PTR_FUN_110b99e70;
        ppuStack_350 = &PTR_FUN_110b99e70;
        __ZNSt13runtime_errorC2ERKS_(&ppuStack_230,&ppuStack_350);
        _memcpy(&ppuStack_220,alStack_340,0x110);
        ppuStack_230 = &PTR_FUN_110b99e70;
        FUN_10a05bde0(&uStack_3a0,&ppuStack_230);
        __ZNSt13runtime_errorD2Ev(&ppuStack_230);
        func_0x000109d1b350(*(undefined8 *)(param_2 + 0x10),&uStack_3a0);
        __ZNSt13exception_ptrD1Ev(&uStack_3a0);
        __ZNSt13runtime_errorD2Ev(&ppuStack_350);
        if ((long)ppuStack_370 < 0) {
          __ZdlPv(ppuStack_380);
        }
      }
      else {
        ppuStack_230 = &PTR_FUN_110c78e70;
        ppuStack_228 = (undefined **)0x0;
        ppuStack_220 = (undefined **)0x0;
        ppuStack_218 = (undefined **)0x0;
        FUN_10a0f10ac(&ppuStack_230,uStack_d8,uStack_90);
        ppuVar1 = &PTR_PTR_11330c590;
        if (ppuStack_218 != (undefined **)0x0) {
          ppuVar1 = ppuStack_218;
        }
        FUN_10a71882c(*(undefined8 *)(param_2 + 0x10),ppuVar1);
        FUN_10ae0fac8(&ppuStack_230);
      }
    }
    plVar11 = plVar5 + 1;
    do {
      lVar10 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = plVar5;
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000104c4f944(auStack_80);
  puVar7 = &uStack_d8;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((long)ppuStack_370 < 0) {
      __ZdlPv(ppuStack_380);
    }
    func_0x00010a3f61b0(&lStack_360);
    FUN_10a05bd10(&uStack_110);
    puVar9 = puVar7;
    __Unwind_Resume();
    pcStack_408 = FUN_10a718794;
    ppuStack_430 = unaff_x22;
    puStack_428 = puVar7;
    lStack_420 = param_2;
    plStack_418 = plVar11;
    puStack_410 = &stack0xfffffffffffffff0;
    FUN_10a009538(auStack_678);
    __ZNSt13runtime_errorC2ERKS_(appuStack_550,auStack_678);
    _memcpy(auStack_540,auStack_668,0x110);
    appuStack_550[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_558,appuStack_550);
    __ZNSt13runtime_errorD2Ev(appuStack_550);
    func_0x000109d1b350(*puVar9,auStack_558);
    __ZNSt13exception_ptrD1Ev(auStack_558);
    __ZNSt13runtime_errorD2Ev(auStack_678);
    return;
  }
  return;
}



/* Entry: 10a718794; end: 10a71882b;  */

void FUN_10a718794(undefined8 *param_1)

{
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [272];
  undefined1 auStack_158 [8];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [272];
  
  FUN_10a009538(auStack_278);
  __ZNSt13runtime_errorC2ERKS_(appuStack_150,auStack_278);
  _memcpy(auStack_140,auStack_268,0x110);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_158,appuStack_150);
  __ZNSt13runtime_errorD2Ev(appuStack_150);
  func_0x000109d1b350(*param_1,auStack_158);
  __ZNSt13exception_ptrD1Ev(auStack_158);
  __ZNSt13runtime_errorD2Ev(auStack_278);
  return;
}



/* Entry: 10a71882c; end: 10a718923;  */

undefined1 FUN_10a71882c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x00010a7188a0(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a718924; end: 10a71894b;  */

void FUN_10a718924(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c13dd0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 10a71894c; end: 10a718b17;  */

undefined8 * FUN_10a71894c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c14960;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    FUN_10a7172a8(&puStack_28);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a718b18; end: 10a718bb7;  */

undefined8 * FUN_10a718b18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  *puVar1 = &PTR_FUN_110c14960;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a718bb8; end: 10a719133;  */

/* WARNING: Removing unreachable block (ram,0x00010a718d08) */
/* WARNING: Removing unreachable block (ram,0x00010a718f18) */
/* WARNING: Removing unreachable block (ram,0x00010a718cc8) */
/* WARNING: Removing unreachable block (ram,0x00010a718e5c) */

void FUN_10a718bb8(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  plVar4 = (long *)0x120;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  *plVar4 = (long)&PTR_FUN_110c14910;
  plVar9 = plVar4 + 0x17;
  *plVar9 = *param_3;
  *param_3 = 0;
  lVar5 = *param_2;
  plVar4[0x18] = lVar5;
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0x32aaaba7;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x23] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  lStack_78 = 0;
  plVar4[0x19] = (long)plVar4;
  plVar4[0x1a] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x18] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1c);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a719134;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x18];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a718e48;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x19];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
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
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a719088:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1c);
  }
  else {
    lVar5 = plVar4[0x19];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a718e48:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a719244;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a719084;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x19];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x18];
  plVar4[0x18] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
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
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a718f2c:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a71907c;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a718f2c;
  pcStack_68 = FUN_10a719134;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x19];
  plVar4[0x19] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x19);
  }
LAB_10a71907c:
  *param_1 = (long)plVar4;
LAB_10a719084:
  plStack_80 = (long *)0x0;
  goto LAB_10a719088;
}



/* Entry: 10a719134; end: 10a719243;  */

void FUN_10a719134(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a719244;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a719240);
      (*pcVar4)();
    }
    func_0x00010a718a24(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  FUN_10a719608(param_1,param_1 + 3);
  return;
}



/* Entry: 10a719244; end: 10a719323;  */

void FUN_10a719244(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a719134;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a719608(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a719324; end: 10a719397;  */

long * FUN_10a719324(long *param_1)

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


