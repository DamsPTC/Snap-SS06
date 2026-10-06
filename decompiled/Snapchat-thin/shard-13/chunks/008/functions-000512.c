/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac86b70; end: 10ac86bd7;  */

void FUN_10ac86b70(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
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
  FUN_10ac86d70(plVar4,param_2);
  FUN_10a052e3c(param_4);
  uVar15 = NEON_ucvtf((ulong)*(uint *)(plVar4 + 0x53));
  *extraout_x8 = 3;
  *(undefined8 *)(extraout_x8 + 2) = uVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
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
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
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



/* Entry: 10ac86bd8; end: 10ac86c93;  */

void FUN_10ac86bd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86d70(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)(param_2 + 0x53));
  *param_1 = 3;
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



/* Entry: 10ac86c94; end: 10ac86d6f;  */

void FUN_10ac86c94(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86b70(param_2,param_3);
  FUN_10a142e2c(param_5);
  func_0x00010a137904(param_2,param_4);
  if (0x2c0 < (int)param_2 - 0x10U) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac86d5c);
    (*pcVar1)();
  }
  *(int *)(plVar4 + 0x53) = (int)param_2;
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



/* Entry: 10ac86d70; end: 10ac86dd7;  */

void FUN_10ac86d70(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
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
      param_4 = 0x28;
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
  FUN_10ac86d70(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a05b924(extraout_x8,plVar4,plVar6 + 0x54);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
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
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
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



/* Entry: 10ac86dd8; end: 10ac86e8f;  */

void FUN_10ac86dd8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86d70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0x54);
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



/* Entry: 10ac86e90; end: 10ac86fbb;  */

void FUN_10ac86e90(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86b70(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  __ZNSt3__15mutex4lockEv(plVar6 + 0x58);
  func_0x00010a04a704(plVar6 + 0x54,&stack0xffffffffffffffb0);
  __ZNSt3__15mutex6unlockEv(plVar6 + 0x58);
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



/* Entry: 10ac86fbc; end: 10ac87073;  */

void FUN_10ac86fbc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86d70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a052e5c(param_1,param_2,plVar4 + 0x56);
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



/* Entry: 10ac87074; end: 10ac8718f;  */

void FUN_10ac87074(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac86b70(param_2,param_3);
  FUN_10a05395c(param_5);
  FUN_10a053980(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ac74498(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10ac87190; end: 10ac871e7;  */

long FUN_10ac87190(long param_1)

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



/* Entry: 10ac871e8; end: 10ac87237;  */

void FUN_10ac871e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x228;
  __Znwm();
  FUN_10ac87238();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x68) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x70), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
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
      lVar5 = *(long *)(lVar4 + 0x70);
    }
    *(long *)(lVar4 + 0x68) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x70) = plVar6;
    if (lVar5 != 0) {
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
  }
  return;
}



/* Entry: 10ac87238; end: 10ac8729b;  */

undefined8 * FUN_10ac87238(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c67398;
  _bzero(param_1 + 3,0x210);
  func_0x0001094c9654(param_1 + 3,2);
  param_1[3] = &PTR_DAT_110c673e8;
  return param_1;
}



/* Entry: 10ac8729c; end: 10ac872ab;  */

void FUN_10ac8729c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c67398;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac872ac; end: 10ac872cb;  */

void FUN_10ac872ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c67398;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac872cc; end: 10ac872df;  */

void FUN_10ac872cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac872d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac872e0; end: 10ac872f3;  */

void FUN_10ac872e0(void)

{
  func_0x0001094ca7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac872f4; end: 10ac873a3;  */

void FUN_10ac872f4(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10ac873a4; end: 10ac873fb;  */

undefined8 * FUN_10ac873a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  uVar8 = param_1[1];
  uVar7 = *param_1;
  if (param_1[1] != 0) {
    plVar6 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)puVar4[1];
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10ac873fc; end: 10ac874a7;  */

void FUN_10ac873fc(int param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 uStack_21;
  
  uStack_21 = (undefined1)param_1;
  uVar5 = 2;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x74) = uVar5;
  plVar4 = *(long **)(param_2 + 0x30);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 0x28) != 0) {
        FUN_10a087a3c(*(long *)(param_2 + 0x28),&uStack_21);
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
  }
  return;
}



/* Entry: 10ac874a8; end: 10ac874d3;  */

long FUN_10ac874a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10ac874d4; end: 10ac87503;  */

void FUN_10ac874d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c67478;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ac87504; end: 10ac875ff;  */

undefined1  [16] FUN_10ac87504(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c67e28;
  puVar1 = &UNK_10f69e32c;
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
    ppuStack_40 = &PTR_DAT_110c67e28;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c67f30;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ac87600; end: 10ac876bb;  */

void FUN_10ac87600(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69faf7,0x2b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac876bc);
  (*pcVar4)();
}



/* Entry: 10ac876bc; end: 10ac8785b;  */

undefined8 * FUN_10ac876bc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110c620c0;
  FUN_10ac850c0(param_1 + 0x4e);
  func_0x00010a042b54(param_1 + 0x4c);
  func_0x00010a042b54(param_1 + 0x4a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x42);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3a);
  func_0x00010a0523dc(param_1 + 0x38);
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar6 = 0;
    lVar8 = param_1[0x34];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x164));
  }
  puVar7 = (undefined8 *)param_1[0x35];
  if (puVar7 != param_1 + 0x36 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    piVar1 = (int *)(param_1[0x22] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1b);
    }
  }
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  if (0 < *(int *)((long)param_1 + 0xdc)) {
    lVar6 = 0;
    lVar8 = param_1[0x23];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xdc));
  }
  puVar7 = (undefined8 *)param_1[0x24];
  if (puVar7 != param_1 + 0x25 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  plVar5 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x000109d18f34(param_1 + 3);
  plVar5 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return param_1;
}



/* Entry: 10ac8785c; end: 10ac8795b;  */

void FUN_10ac8785c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
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
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac878f0);
  (*pcVar4)();
}



/* Entry: 10ac8795c; end: 10ac879cb;  */

void FUN_10ac8795c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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



/* Entry: 10ac879cc; end: 10ac87ca7;  */

void FUN_10ac879cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10ac78d48(param_1 + 0x60,param_1 + 0x58);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
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
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac87ba4);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0x60);
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
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x58);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac87ca8; end: 10ac87db3;  */

void FUN_10ac87ca8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
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
    plVar4 = *(long **)(param_1 + 0x60);
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
  plVar4 = *(long **)(param_1 + 0x58);
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



/* Entry: 10ac87db4; end: 10ac87eb7;  */

void FUN_10ac87db4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar5 + 0x15) & 1) != 0) {
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
      func_0x0001092ba100(param_1 + 0x10);
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar5 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac87e4c);
  (*pcVar4)();
}



/* Entry: 10ac87eb8; end: 10ac87f27;  */

void FUN_10ac87eb8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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



/* Entry: 10ac87f28; end: 10ac881fb;  */

void FUN_10ac87f28(long param_1)

{
  ulong *puVar1;
  long *plVar2;
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
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10ac78ad8(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar6 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x60);
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
  plVar6 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac88138);
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
  plVar6 = *(long **)(param_1 + 0x70);
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
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
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



/* Entry: 10ac881fc; end: 10ac8833f;  */

void FUN_10ac881fc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac88340; end: 10ac8879b;  */

void FUN_10ac88340(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10ac8865c;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10ac8865c;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10ac883a8:
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
    else {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) goto LAB_10ac883a8;
    }
    plVar7 = *(long **)(param_1 + 0x68);
    plVar5 = (long *)*plVar7;
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
      plVar7 = *(long **)(param_1 + 0x68);
    }
    *plVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(long *)(param_1 + 0x58) = lVar6;
    *(long *)(param_1 + 0x60) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_38);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
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
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(long **)(param_1 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x70) + 8))();
    }
    func_0x0001092ba100(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x58);
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
    plVar5 = *(long **)(param_1 + 0x50);
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
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10ac8865c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac88660);
  (*pcVar4)();
}



/* Entry: 10ac8879c; end: 10ac888df;  */

void FUN_10ac8879c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10ac888c8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ac888c8;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
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
    plVar4 = *(long **)(param_1 + 0x58);
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
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10ac888c8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ac888c8;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_10ac888c8:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac888e0; end: 10ac88b83;  */

void FUN_10ac888e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    FUN_10ac85ec8(param_1 + 0xa8,param_1 + 0x48);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa8);
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      lVar8 = *(long *)(param_1 + 0x98);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
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
  plVar5 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac88ac0);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba100(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac88b84; end: 10ac88c97;  */

void FUN_10ac88b84(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x98);
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
    plVar4 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba41c(param_1 + 0x50);
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



/* Entry: 10ac88c98; end: 10ac88d13;  */

undefined1  [16] FUN_10ac88c98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6a0819;
  return auVar1;
}



/* Entry: 10ac88d14; end: 10ac8900f;  */

void FUN_10ac88d14(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a0819,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6a278;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xcffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x172;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6a278;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"width",FUN_10ac91a60,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f4fa8e9,FUN_10ac91b84,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f32deb9,FUN_10ac91c40,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69fe76,FUN_10ac91cfc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f477b7c,FUN_10ac91db8,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a0819,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac88ff4);
  (*pcVar6)();
}



/* Entry: 10ac89010; end: 10ac8905f;  */

undefined8 * FUN_10ac89010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68260;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89060; end: 10ac89063;  */

undefined8 * FUN_10ac89060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68260;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89064; end: 10ac89077;  */

void FUN_10ac89064(void)

{
  FUN_10ac89010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac89078; end: 10ac8910f;  */

undefined1  [16] FUN_10ac89078(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f69fea6;
  return auVar1;
}



/* Entry: 10ac89110; end: 10ac894df;  */

void FUN_10ac89110(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f69fea6,0x13);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c69018;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x172;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c69018;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac894c0;
    FUN_10a054dac(param_1,&UNK_10f69fe81,FUN_10ac91e78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac894c0;
    FUN_10a054dac(param_1,&UNK_10f69fe88,FUN_10ac91fc4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac894c0;
    FUN_10a054dac(param_1,&UNK_10f69fe90,FUN_10ac920a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac894c0;
    FUN_10a054dac(param_1,&UNK_10f69fe9e,FUN_10ac921d4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac894c0;
    FUN_10a054dac(param_1,&DAT_10f2e4657,FUN_10ac923ec,1,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f69fea6,0x13);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f69fea6;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f69fe75;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f69fe75;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac894c0;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ac92598,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac894c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac894c4);
  (*pcVar6)();
}



/* Entry: 10ac894e0; end: 10ac8952f;  */

undefined8 * FUN_10ac894e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c682b8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89530; end: 10ac89533;  */

undefined8 * FUN_10ac89530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c682b8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89534; end: 10ac89547;  */

void FUN_10ac89534(void)

{
  FUN_10ac894e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac89548; end: 10ac89637;  */

void FUN_10ac89548(undefined8 *param_1,long param_2)

{
  undefined6 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uStack_5a;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar1 = *(undefined6 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  if (&uStack_50 != (undefined8 *)(param_2 + 0x28)) {
    func_0x00010a14ddc8();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  puVar2 = (undefined8 *)0x60;
  uStack_38 = uVar4;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110c69fb0;
  puVar2[5] = 0;
  puVar2[6] = CONCAT26(uStack_5a,uVar1);
  *(undefined4 *)(puVar2 + 7) = uVar3;
  puVar2[4] = 0;
  puVar2[3] = &PTR_FUN_110c68260;
  puVar2[9] = uStack_48;
  puVar2[8] = uStack_50;
  puVar2[10] = uStack_40;
  *(undefined4 *)(puVar2 + 0xb) = uVar4;
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10ac89638; end: 10ac896af;  */

undefined1  [16] FUN_10ac89638(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f6a0826;
  return auVar1;
}



/* Entry: 10ac896b0; end: 10ac897df;  */

void FUN_10ac896b0(undefined8 param_1)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xc);
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  puStack_70 = &UNK_10f69fe75;
  uStack_68 = 0;
  uStack_60 = 0x176;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ac897e0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a0046;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac928e0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a004b;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ac92adc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a0054;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac92bec(param_1,&puStack_98);
  FUN_10ac92cfc(param_1);
  return;
}



/* Entry: 10ac897e0; end: 10ac898b7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac89878) */

undefined1  [16] FUN_10ac897e0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a0826,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac927e4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac898b8; end: 10ac89907;  */

undefined8 * FUN_10ac898b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68310;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89908; end: 10ac8990b;  */

undefined8 * FUN_10ac89908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68310;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac8990c; end: 10ac8991f;  */

void FUN_10ac8990c(void)

{
  FUN_10ac898b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac89920; end: 10ac899ab;  */

undefined1  [16] FUN_10ac89920(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6a0083;
  return auVar1;
}



/* Entry: 10ac899ac; end: 10ac89d7b;  */

void FUN_10ac899ac(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f6a0083,0x11);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c69030;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x176;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c69030;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac89d5c;
    FUN_10a054dac(param_1,&UNK_10f6566eb,FUN_10ac92db8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac89d5c;
    FUN_10a054dac(param_1,&UNK_10f6a0068,FUN_10ac92efc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac89d5c;
    FUN_10a054dac(param_1,&UNK_10f6a0072,FUN_10ac92fbc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac89d5c;
    FUN_10a054dac(param_1,&UNK_10f6804d0,FUN_10ac930d0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac89d5c;
    FUN_10a054dac(param_1,&DAT_10f2e4657,FUN_10ac93190,1,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f6a0083,0x11);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f6a0083;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f69fe75;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f69fe75;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac89d5c;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ac9333c,2,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac89d5c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac89d60);
  (*pcVar6)();
}



/* Entry: 10ac89d7c; end: 10ac89dcb;  */

undefined8 * FUN_10ac89d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68368;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89dcc; end: 10ac89dcf;  */

undefined8 * FUN_10ac89dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c68368;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac89dd0; end: 10ac89de3;  */

void FUN_10ac89dd0(void)

{
  FUN_10ac89d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac89de4; end: 10ac89edb;  */

void FUN_10ac89de4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_51 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  uStack_48 = 0x19041800000;
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_3c = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_60,param_2 + 0x18);
  uStack_48 = *(undefined8 *)(param_2 + 0x30);
  uStack_40 = CONCAT31(uStack_40._1_3_,*(undefined1 *)(param_2 + 0x38));
  uStack_3c = *(undefined4 *)(param_2 + 0x3c);
  uStack_38 = *(undefined1 *)(param_2 + 0x40);
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c6a050;
  puVar1[6] = uStack_60;
  puVar1[7] = CONCAT17(uStack_51,uStack_58);
  *(ulong *)((long)puVar1 + 0x3f) = CONCAT71(uStack_50,uStack_51);
  puVar1[10] = CONCAT44(uStack_3c,uStack_40);
  puVar1[9] = uStack_48;
  *(undefined1 *)(puVar1 + 0xb) = uStack_38;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110c68310;
  *(undefined1 *)((long)puVar1 + 0x47) = uStack_49;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10ac89edc; end: 10ac8a20b;  */

byte * FUN_10ac89edc(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_a8;
  byte *apbStack_a0 [2];
  char cStack_89;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar2 == 0) {
    param_4 = unaff_x20;
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar10 = &UNK_10f6a0210;
      uVar9 = 0xd;
      goto LAB_10ac8a120;
    }
  }
  else if ((param_3 == 0) || (*(long *)(param_3 + 0x100) == 0)) {
    param_4 = unaff_x20;
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar10 = &UNK_10f6a0242;
      uVar9 = 0x12;
      goto LAB_10ac8a120;
    }
  }
  else {
    plVar5 = *(long **)(*(long *)(param_3 + 0x100) + 0x1c8);
    (**(code **)(*plVar5 + 0x88))();
    pbVar6 = (byte *)plVar5[1];
    if ((pbVar6 != (byte *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), pbVar6 != (byte *)0x0)
       ) {
      lVar12 = *plVar5;
      pbVar8 = pbVar6 + 8;
      do {
        lVar11 = *(long *)pbVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar8,0x10);
        if (bVar4) {
          *(long *)pbVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)pbVar6 + 0x10))(pbVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar12 != 0) {
        FUN_10ac8a20c(param_2);
        FUN_10a08d2e0(apbStack_a0,param_4);
        uStack_88 = *(undefined8 *)(param_2 + 0x70);
        (**(code **)(*(long *)(param_2 + 0x78) + 0x18))(apuStack_80);
        FUN_10ad838d0(&plStack_a8,apbStack_a0,lVar12,&uStack_88);
        FUN_10a00e0a0(param_2 + 0x28,&plStack_a8);
        plVar5 = plStack_a8;
        plStack_a8 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        (*(code *)*apuStack_80[0])(apuStack_80);
        plVar5 = *(long **)(param_2 + 0x28);
        pbVar6 = (byte *)(ulong)(plVar5 != (long *)0x0);
        if (plVar5 == (long *)0x0) {
          param_2 = (byte *)0x0;
          if ((bRam000000011330a9e8 & 1) != 0) {
            param_2 = (byte *)0x0;
            func_0x00010ae06f08(0,1,&UNK_10f6a016b,&UNK_10f6a01a7,0x22,&UNK_10f6a02c3);
          }
        }
        else {
          (**(code **)(*plVar5 + 0x20))
                    (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 4),param_1,plVar5,1);
          if ((*param_2 >> 3 & 1) == 0) {
            (**(code **)(**(long **)(param_2 + 0x28) + 0x40))();
          }
          param_2[0x68] = 0;
          param_2[0x69] = 0;
          param_2[0x6a] = 0;
          param_2[0x6b] = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_2 + 0x10,param_4);
          func_0x00010ac8a284(param_2);
          *param_2 = *param_2 | 5;
          func_0x00010ac8a2ec();
        }
        if (cStack_89 < '\0') {
          param_2 = apbStack_a0[0];
          __ZdlPv();
        }
        goto LAB_10ac8a128;
      }
    }
    param_2 = pbVar6;
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar10 = &UNK_10f6a0285;
      uVar9 = 0x19;
      unaff_x20 = param_4;
LAB_10ac8a120:
      param_2 = (byte *)0x0;
      func_0x00010ae06f08(0,1,&UNK_10f6a016b,&UNK_10f6a01a7,uVar9,puVar10);
      param_4 = unaff_x20;
    }
  }
  pbVar6 = (byte *)0x0;
LAB_10ac8a128:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(apbStack_a0[0]);
  }
  pbVar7 = param_2;
  __Unwind_Resume();
  pcStack_b8 = FUN_10ac8a20c;
  uStack_e0 = 0;
  pbStack_d8 = (byte *)0x0;
  pbVar6 = pbVar7 + 0x28;
  lStack_d0 = param_4;
  pbStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10ac41044(pbVar6,&uStack_e0);
  pbVar8 = pbStack_d8;
  if (pbStack_d8 != (byte *)0x0) {
    pbVar1 = pbStack_d8 + 8;
    do {
      lVar12 = *(long *)pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *(long *)pbVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)pbStack_d8 + 0x10))(pbStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pbVar8);
      pbVar6 = pbVar8;
    }
  }
  pbVar7[0x50] = 0;
  pbVar7[0x51] = 0;
  pbVar7[0x52] = 0;
  pbVar7[0x53] = 0;
  pbVar7[0x54] = 0;
  pbVar7[0x55] = 0;
  pbVar7[0x56] = 0;
  pbVar7[0x57] = 0;
  *pbVar7 = 0x38;
  return pbVar6;
}



/* Entry: 10ac8a20c; end: 10ac8a47b;  */

void FUN_10ac8a20c(undefined1 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10ac41044(param_1 + 0x28,&uStack_30);
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
  *(undefined8 *)(param_1 + 0x50) = 0;
  *param_1 = 0x38;
  return;
}



/* Entry: 10ac8a47c; end: 10ac8a50f;  */

void FUN_10ac8a47c(float param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x60))(), (int)plVar1 != 0)) {
    plVar1 = *(long **)(param_2 + 0x28);
    fVar2 = 0.0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x60))();
      fVar2 = 0.0;
      if ((int)plVar1 != 0) {
        func_0x00010ac8a2ec(param_2);
        fVar2 = *(float *)(param_2 + 0x54);
      }
    }
    if (param_1 <= fVar2) {
      fVar2 = param_1;
    }
    fVar3 = 0.0;
    if (0.0 <= param_1) {
      fVar3 = fVar2;
    }
    (**(code **)(**(long **)(param_2 + 0x28) + 0x28))(fVar3);
  }
  return;
}



/* Entry: 10ac8a510; end: 10ac8a6f3;  */

/* WARNING: Possible PIC construction at 0x00010ac8a584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac8a588) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a5c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a5cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a5d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a5e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a610) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a618) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a61c) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a620) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a624) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a628) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a62c) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a638) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a63c) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a640) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a64c) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a650) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a654) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a658) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a674) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a694) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a69c) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a6a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a6a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a6b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a6b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a5ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a404) */
/* WARNING: Removing unreachable block (ram,0x00010ac8a410) */

void FUN_10ac8a510(float param_1,byte *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if (((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x60))(), (int)plVar1 != 0)) &&
     (((*param_2 >> 3 & 1) != 0 || (*(long *)(param_2 + 0x38) == 0)))) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x58))();
    fVar4 = *(float *)(param_2 + 4);
    if (param_1 != fVar4) {
      (**(code **)(**(long **)(param_2 + 0x28) + 0x50))();
    }
    plVar1 = *(long **)(param_2 + 0x28);
    if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x60))(), (int)plVar1 != 0)) {
      uVar2 = (uint)*param_2;
      if ((*param_2 & 1) != 0) {
        (**(code **)(**(long **)(param_2 + 0x28) + 0x30))();
        *(float *)(param_2 + 0x54) = fVar4;
        uVar2 = *param_2 & 0xf8 | 6;
        *param_2 = (byte)uVar2;
      }
      if (((uVar2 >> 2 & 1) != 0) &&
         (fVar4 = *(float *)(param_2 + 8), fVar4 <= *(float *)(param_2 + 0xc))) {
        (**(code **)(**(long **)(param_2 + 0x28) + 0x78))();
        *(float *)(param_2 + 0x48) = fVar4;
        uVar3 = *(undefined4 *)(param_2 + 0xc);
        (**(code **)(**(long **)(param_2 + 0x28) + 0x78))();
        *(undefined4 *)(param_2 + 0x4c) = uVar3;
        *(float *)(param_2 + 0x50) =
             (*(float *)(param_2 + 0xc) - *(float *)(param_2 + 8)) * *(float *)(param_2 + 0x54);
        *param_2 = *param_2 & 0xfb | 0x20;
      }
    }
    return;
  }
  return;
}



/* Entry: 10ac8a6f4; end: 10ac8a77f;  */

undefined1  [16] FUN_10ac8a6f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f663271;
  return auVar1;
}



/* Entry: 10ac8a780; end: 10ac8b0af;  */

void FUN_10ac8a780(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663271,0x1d);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6a2a8;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
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
    ppuStack_b0 = &PTR_DAT_110c6a2a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10ac935e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10ac93718,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,"resume",FUN_10ac93808,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10ac93908,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f6750f8,FUN_10ac939bc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&DAT_10f3111e1,FUN_10ac93a7c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&DAT_10f2ee80c,FUN_10ac93b50,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f6a030a,FUN_10ac93c4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f656bd6,FUN_10ac93de4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f6a0315,FUN_10ac93e9c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f6a031f,FUN_10ac93fe0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8b090;
    FUN_10a054dac(param_1,&UNK_10f644f3f,FUN_10ac940a0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656bf9,FUN_10ac9416c,FUN_10ac94224);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0333,FUN_10ac942ec,FUN_10ac943a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a0342,FUN_10ac94470,FUN_10ac94530);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350e61,FUN_10ac946c8,FUN_10ac94788);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a034f,FUN_10ac9487c,FUN_10ac94944);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0361,FUN_10ac949fc,FUN_10ac94ac4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0371,FUN_10ac93fe0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c44d,FUN_10ac940a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10ac94b7c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f495bda,FUN_10ac94c44,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f47a280,FUN_10ac94d30,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0382,FUN_10ac94e08,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"status",FUN_10ac93e9c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f6a0390,FUN_10ac94ec8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f6a03a0,FUN_10ac95034,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f656755,FUN_10ac950e4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663271,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac8b090:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac8b094);
  (*pcVar6)();
}



/* Entry: 10ac8b0b0; end: 10ac8b28f;  */

void FUN_10ac8b0b0(ulong param_1)

{
  ulong uVar1;
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
  puStack_a8 = &UNK_10f6a03af;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  puStack_70 = &UNK_10f69fe75;
  uStack_68 = 0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a03bb;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac8b290(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a03c4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac8b290();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f448854;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac8b290();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f36b6f5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac8b290();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a03ce;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69fe75;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac8b290();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac8b290; end: 10ac8b333;  */

undefined8 * FUN_10ac8b290(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac8b334);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ac8b334; end: 10ac8b383;  */

void FUN_10ac8b334(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x328);
  uVar5 = *(undefined8 *)(param_2 + 800);
  param_1[1] = *(undefined8 *)(param_2 + 0x328);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10ac8b384; end: 10ac8b94f;  */

undefined8 *
FUN_10ac8b384(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plStack_70;
  long *plStack_68;
  
  param_1[0x7b] = &PTR_FUN_110c383b8;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0x100;
  puVar4 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c68680,param_2);
  FUN_10aaea2c8(puVar4 + 0x51,param_3);
  plStack_70 = (long *)CONCAT62(plStack_70._2_6_,0x101);
  FUN_10a00db68(param_1 + 0x5b,param_2,&plStack_70);
  *param_1 = &PTR_DAT_110c683c8;
  param_1[2] = &PTR_FUN_110c68510;
  param_1[5] = &PTR_FUN_110c68540;
  param_1[0x7b] = &PTR_FUN_110c68640;
  param_1[0x15] = &PTR_FUN_110c68598;
  param_1[0x5b] = &PTR_FUN_110c685b8;
  param_1[0x60] = &PTR_FUN_110c685e0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined1 *)((long)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar9 = *param_4;
  param_1[0x6a] = param_4[1];
  param_1[0x69] = uVar9;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined1 *)((long)param_1 + 0x364) = 0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bf7fc8;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined8 *)((long)puVar4 + 0x4d) = 0;
  *(undefined8 *)((long)puVar4 + 0x45) = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  param_1[0x6d] = puVar4 + 3;
  param_1[0x6e] = puVar4;
  FUN_10a5cf1fc(param_1 + 0x6d);
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bf7fc8;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined8 *)((long)puVar4 + 0x4d) = 0;
  *(undefined8 *)((long)puVar4 + 0x45) = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  param_1[0x6f] = puVar4 + 3;
  param_1[0x70] = puVar4;
  FUN_10a5cf1fc(param_1 + 0x6f);
  puVar4 = (undefined8 *)0xc8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar8 = puVar4 + 3;
  puVar4[4] = 0;
  *puVar8 = 0;
  *puVar4 = &PTR_FUN_110c6a0a0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  puVar4[0x12] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[0x18] = 0;
  puVar4[0x17] = 0;
  *(undefined1 *)puVar8 = 0x38;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)((long)puVar4 + 0x24) = 0x3f800000;
  func_0x000107c2b054(puVar4 + 5,&UNK_10f69fe75);
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  *(undefined4 *)((long)puVar4 + 0x7c) = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0x3f800000;
  puVar4[0x11] = FUN_10ac41034;
  puVar4[0x12] = &PTR_DAT_110950c70;
  param_1[0x71] = puVar8;
  param_1[0x72] = puVar4;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  plVar5 = (long *)0x78;
  __Znwm();
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110c6a0f0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xb] = 1;
  plVar5[0xc] = 0xac440000ac44;
  *(undefined1 *)((long)plVar5 + 0x6a) = 1;
  param_1[0x77] = plVar5 + 3;
  param_1[0x78] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  plVar5[3] = (long)(plVar5 + 3);
  plVar5[4] = (long)plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  plVar5 = (long *)0x98;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9a070;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0x12] = 0;
  plStack_70 = plVar5 + 3;
  *plStack_70 = (long)&PTR_FUN_110b9a0c0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 10) = 0x3f800000;
  plVar5[0xb] = (long)FUN_10a004c4c;
  plVar5[0xc] = (long)&PTR_DAT_110ae9180;
  plStack_68 = plVar5;
  FUN_10a3ce310(param_1 + 100,&plStack_70);
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x98;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9a070;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0x12] = 0;
  plStack_70 = plVar5 + 3;
  *plStack_70 = (long)&PTR_FUN_110b9a0c0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 10) = 0x3f800000;
  plVar5[0xb] = (long)FUN_10a004c4c;
  plVar5[0xc] = (long)&PTR_DAT_110ae9180;
  plStack_68 = plVar5;
  FUN_10a3ce310(param_1 + 0x66,&plStack_70);
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  FUN_10a5ae998(param_1[0x6d],&PTR_DAT_110c6a2a8,param_2,param_1);
  if (param_5 != 0) {
    FUN_10a5ae998(param_1[0x6f],&PTR_DAT_110bd31c8,param_2,param_1 + 0x60);
  }
  *(bool *)((long)param_1 + 0x31c) = 0x13b < *(int *)(*(long *)(param_2 + 0xa20) + 0x18);
  lVar7 = param_1[0x77];
  uVar10 = param_1[0x72];
  uVar9 = param_1[0x71];
  if (param_1[0x72] != 0) {
    plVar5 = (long *)(param_1[0x72] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(lVar7 + 0x18);
  *(undefined8 *)(lVar7 + 0x18) = uVar10;
  *(undefined8 *)(lVar7 + 0x10) = uVar9;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar7 = param_1[0x77];
  *(undefined4 *)(lVar7 + 0x4c) = 0xac44;
  *(bool *)(lVar7 + 0x51) = *(char *)(param_2 + 0xe2d) == '\x02';
  return param_1;
}



/* Entry: 10ac8b950; end: 10ac8bb67;  */

undefined *** FUN_10ac8b950(undefined ***param_1,undefined ***param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  char cStack_c9;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  char cStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1;
  pppuVar7 = param_2;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    pppuVar5 = (undefined ***)0x1;
    pppuVar7 = (undefined ***)0x8;
    func_0x00010ae06f08(1,8,&UNK_10f6a03d6,&UNK_10f6a0415,99,&UNK_10f6a045d);
  }
  *(char *)(param_1 + 0x61) = (char)param_2;
  if ((int)param_2 != 0) {
    puVar6 = (undefined8 *)0xa8;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110c6a140;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[0xd] = 0x32aaaba7;
    puVar6[0x14] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    ppuVar8 = param_1[0x77];
    plVar10 = (long *)ppuVar8[5];
    ppuVar8[4] = (undefined *)(puVar6 + 3);
    ppuVar8[5] = (undefined *)puVar6;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    FUN_10a3dd9ac(&uStack_80,param_1[0x12]);
    FUN_10a772694(uStack_80,param_1);
    FUN_10a7718b4(0x3f800000,uStack_80,param_1,0xb);
    FUN_10a7718b4(0x42c80000,uStack_80,param_1,0xc);
    ppuVar8 = param_1[0x77];
    puVar2 = ppuVar8[2];
    puStack_50 = ppuVar8[1];
    puStack_58 = *ppuVar8;
    if (ppuVar8[1] != (undefined *)0x0) {
      plVar10 = (long *)(ppuVar8[1] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_68 = (undefined **)FUN_10ac9558c;
    ppuStack_60 = &PTR_DAT_110c6a1d0;
    param_2 = &ppuStack_68;
    *(code **)(puVar2 + 0x70) = FUN_10ac9558c;
    pppuVar7 = &ppuStack_60;
    func_0x0001092b2a94(puVar2 + 0x78,pppuVar7);
    pppuVar5 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
    if (cStack_70 == '\x01') {
      pppuVar5 = pppuStack_78;
      __ZNSt3__15mutex6unlockEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(param_2 + 1);
  if (cStack_70 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppuStack_78);
  }
  __Unwind_Resume(pppuVar5);
  func_0x000107c2b054(auStack_110,&UNK_10f69fe75);
  func_0x000107c2b054(auStack_128,&UNK_10f69fe75);
  FUN_10a107e2c(auStack_f8,auStack_110,auStack_128,0);
  uStack_138 = 0;
  plStack_130 = (long *)0x0;
  FUN_10ac8b384(pppuVar5,pppuVar7,auStack_f8,&uStack_138,1);
  plVar10 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(uStack_e0);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  return pppuVar5;
}



/* Entry: 10ac8bb68; end: 10ac8bcaf;  */

undefined8 FUN_10ac8bb68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  func_0x000107c2b054(auStack_80,&UNK_10f69fe75);
  func_0x000107c2b054(auStack_98,&UNK_10f69fe75);
  FUN_10a107e2c(auStack_68,auStack_80,auStack_98,0);
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  FUN_10ac8b384(param_1,param_2,auStack_68,&uStack_a8,1);
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
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
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  return param_1;
}



/* Entry: 10ac8bcb0; end: 10ac8bf93;  */

void FUN_10ac8bcb0(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  undefined4 uVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = *(long **)(param_1[0x71] + 0x28);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x60))();
  if ((int)plVar4 == 0) {
    return;
  }
  if ((0 < *(int *)((long)param_1 + 0x35c)) &&
     (*(int *)((long)param_1 + 0x35c) <= *(int *)(param_1[0x71] + 0x68))) {
    if (*(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18) < 0x15d) {
      FUN_10a1cc18c(&lStack_50,&UNK_10f6a0582);
      if (*(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18) < 0x15d) {
        *(undefined4 *)((long)param_1 + 0x35c) = 0;
        *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) & 0xfb;
        *(undefined4 *)(param_1 + 99) = 4;
        plVar4 = (long *)param_1[0x67];
        if (plVar4 != (long *)0x0) {
          plVar5 = plVar4 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_10a07e58c();
        if (plVar4 != (long *)0x0) {
          plVar5 = plVar4 + 1;
          do {
            lVar10 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        func_0x00010ac8a20c(param_1[0x71]);
      }
      else if ((int)param_1[99] - 1U < 3) {
        pbVar8 = (byte *)param_1[0x71];
        if ((*pbVar8 >> 3 & 1) != 0) {
          func_0x00010ac8a3ec();
          pbVar8 = (byte *)param_1[0x71];
        }
        plVar4 = *(long **)(pbVar8 + 0x28);
        if ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 0x60))(), (int)plVar4 != 0)) {
          FUN_10ac8a47c(0,param_1[0x71]);
        }
        *(undefined4 *)(param_1 + 99) = 4;
      }
      else if ((int)param_1[99] != 4) {
        FUN_10a00946c(&UNK_10f6a059d);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac8c0d0);
        (*pcVar3)();
      }
      FUN_10a1d33b4(&lStack_50);
      return;
    }
    if ((int)param_1[99] != 2) {
      return;
    }
    func_0x00010ac8a3ec();
    *(undefined4 *)(param_1 + 99) = 3;
    *(undefined4 *)((long)param_1 + 0x35c) = 0;
    lStack_50 = param_1[0x66];
    plVar4 = (long *)param_1[0x67];
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_48 = plVar4;
    FUN_10a07e58c();
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar5 = plVar4 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto LAB_10ac8bf48;
  }
  FUN_10ac8a510();
  lVar10 = param_1[0x71];
  plVar4 = *(long **)(lVar10 + 0x38);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x28))();
  plVar5 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  if ((int)plVar4 == (int)plVar5) {
    plVar5 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar5 + 0x30))();
    plVar4 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    if ((int)plVar5 != (int)plVar4) goto LAB_10ac8bd94;
    plVar5 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar5 + 0x50))();
    plVar4 = param_1;
    (**(code **)(*param_1 + 0xe8))();
    if ((int)plVar5 != (int)plVar4) goto LAB_10ac8bd94;
  }
  else {
LAB_10ac8bd94:
    plVar4 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar5 + 0x30))();
    plVar6 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar6 + 0x50))();
    plVar7 = *(long **)(lVar10 + 0x38);
    (**(code **)(*plVar7 + 0x70))();
    FUN_10a1da3a4(param_1,plVar4,plVar5,0,0,plVar6,plVar7,0);
  }
  if ((int)param_1[99] != 1) {
    return;
  }
  plVar4 = *(long **)(param_1[0x71] + 0x28);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x60))();
  if ((int)plVar4 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x6b) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
      func_0x00010ac8a3ac(param_1[0x71]);
    }
    uVar9 = 2;
  }
  else {
    *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) & 0xfb;
    uVar9 = 4;
  }
  *(undefined4 *)(param_1 + 99) = uVar9;
  *(byte *)param_1[0x71] = *(byte *)param_1[0x71] & 0xef | *(char *)((long)param_1 + 0x364) << 4;
  func_0x00010ac8a2ec();
  lStack_50 = param_1[100];
  plVar4 = (long *)param_1[0x65];
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_48 = plVar4;
  FUN_10a07e58c();
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar5 = plVar4 + 1;
  do {
    lVar10 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_10ac8bf48:
  if (lVar10 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10ac8bf94; end: 10ac8c0f3;  */

void FUN_10ac8bf94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_50 [48];
  
  FUN_10a1cc18c(auStack_50,&UNK_10f6a0582);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18) < 0x15d) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfb;
    *(undefined4 *)(param_1 + 0x318) = 4;
    plVar6 = *(long **)(param_1 + 0x338);
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
    FUN_10a07e58c();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    func_0x00010ac8a20c(*(undefined8 *)(param_1 + 0x388));
  }
  else if (*(int *)(param_1 + 0x318) - 1U < 3) {
    pbVar5 = *(byte **)(param_1 + 0x388);
    if ((*pbVar5 >> 3 & 1) != 0) {
      func_0x00010ac8a3ec();
      pbVar5 = *(byte **)(param_1 + 0x388);
    }
    plVar6 = *(long **)(pbVar5 + 0x28);
    if ((plVar6 != (long *)0x0) && ((**(code **)(*plVar6 + 0x60))(), (int)plVar6 != 0)) {
      FUN_10ac8a47c(0,*(undefined8 *)(param_1 + 0x388));
    }
    *(undefined4 *)(param_1 + 0x318) = 4;
  }
  else if (*(int *)(param_1 + 0x318) != 4) {
    FUN_10a00946c(&UNK_10f6a059d);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac8c0d0);
    (*pcVar4)();
  }
  FUN_10a1d33b4(auStack_50);
  return;
}



/* Entry: 10ac8c0f4; end: 10ac8c0fb;  */

void FUN_10ac8c0f4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar9 = (long *)(param_1 + -0x2d8);
  plVar4 = *(long **)(*(long *)(param_1 + 0xb0) + 0x28);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x60))();
  if ((int)plVar4 == 0) {
    return;
  }
  if ((0 < *(int *)(param_1 + 0x84)) &&
     (*(int *)(param_1 + 0x84) <= *(int *)(*(long *)(param_1 + 0xb0) + 0x68))) {
    if (*(int *)(*(long *)(*(long *)(param_1 + -0x248) + 0xa20) + 0x18) < 0x15d) {
      FUN_10a1cc18c(&uStack_50,&UNK_10f6a0582);
      if (*(int *)(*(long *)(*(long *)(param_1 + -0x248) + 0xa20) + 0x18) < 0x15d) {
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfb;
        *(undefined4 *)(param_1 + 0x40) = 4;
        plVar4 = *(long **)(param_1 + 0x60);
        if (plVar4 != (long *)0x0) {
          plVar9 = plVar4 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_10a07e58c();
        if (plVar4 != (long *)0x0) {
          plVar9 = plVar4 + 1;
          do {
            lVar11 = *plVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = lVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        func_0x00010ac8a20c(*(undefined8 *)(param_1 + 0xb0));
      }
      else if (*(int *)(param_1 + 0x40) - 1U < 3) {
        pbVar8 = *(byte **)(param_1 + 0xb0);
        if ((*pbVar8 >> 3 & 1) != 0) {
          func_0x00010ac8a3ec();
          pbVar8 = *(byte **)(param_1 + 0xb0);
        }
        plVar4 = *(long **)(pbVar8 + 0x28);
        if ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 0x60))(), (int)plVar4 != 0)) {
          FUN_10ac8a47c(0,*(undefined8 *)(param_1 + 0xb0));
        }
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      else if (*(int *)(param_1 + 0x40) != 4) {
        FUN_10a00946c(&UNK_10f6a059d);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac8c0d0);
        (*pcVar3)();
      }
      FUN_10a1d33b4(&uStack_50);
      return;
    }
    if (*(int *)(param_1 + 0x40) != 2) {
      return;
    }
    func_0x00010ac8a3ec();
    *(undefined4 *)(param_1 + 0x40) = 3;
    *(undefined4 *)(param_1 + 0x84) = 0;
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      plVar9 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_48 = plVar4;
    FUN_10a07e58c();
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar9 = plVar4 + 1;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto LAB_10ac8bf48;
  }
  FUN_10ac8a510();
  lVar11 = *(long *)(param_1 + 0xb0);
  plVar4 = *(long **)(lVar11 + 0x38);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x28))();
  plVar5 = plVar9;
  (**(code **)(*plVar9 + 0xb0))();
  if ((int)plVar4 == (int)plVar5) {
    plVar5 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar5 + 0x30))();
    plVar4 = plVar9;
    (**(code **)(*plVar9 + 0xb8))();
    if ((int)plVar5 != (int)plVar4) goto LAB_10ac8bd94;
    plVar5 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar5 + 0x50))();
    plVar4 = plVar9;
    (**(code **)(*plVar9 + 0xe8))();
    if ((int)plVar5 != (int)plVar4) goto LAB_10ac8bd94;
  }
  else {
LAB_10ac8bd94:
    plVar4 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar5 + 0x30))();
    plVar6 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar6 + 0x50))();
    plVar7 = *(long **)(lVar11 + 0x38);
    (**(code **)(*plVar7 + 0x70))();
    FUN_10a1da3a4(plVar9,plVar4,plVar5,0,0,plVar6,plVar7,0);
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0xb0) + 0x28);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x60))();
  if ((int)plVar4 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x80) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      func_0x00010ac8a3ac(*(undefined8 *)(param_1 + 0xb0));
    }
    uVar10 = 2;
  }
  else {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfb;
    uVar10 = 4;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  **(byte **)(param_1 + 0xb0) = **(byte **)(param_1 + 0xb0) & 0xef | *(char *)(param_1 + 0x8c) << 4;
  func_0x00010ac8a2ec();
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 != (long *)0x0) {
    plVar9 = plVar4 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_48 = plVar4;
  FUN_10a07e58c();
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar9 = plVar4 + 1;
  do {
    lVar11 = *plVar9;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_10ac8bf48:
  if (lVar11 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10ac8c0fc; end: 10ac8c20f;  */

void FUN_10ac8c0fc(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  if (param_2 != 2) {
    return;
  }
  if (((*(int *)(param_1 + 0x340) != 0) && (*(int *)(param_1 + 0x318) == 0)) &&
     ((*(byte *)(param_1 + 0x358) & 1) == 0)) {
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) | 1;
    FUN_10ac8c444(param_1);
  }
  if (*(long *)(*(long *)(param_1 + 0x388) + 0x38) == 0) {
    lStack_30 = *(long *)(param_1 + 0x348);
    if (lStack_30 == 0) {
      return;
    }
    plStack_28 = *(long **)(param_1 + 0x350);
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
    }
    FUN_10a1e3a04(param_1,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
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
  }
  else {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a1e3a04(param_1,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
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
  }
  plVar1 = plStack_28;
  if (lVar4 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10ac8c210; end: 10ac8c267;  */

void FUN_10ac8c210(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = param_1 + -0x10;
  if (param_2 != 2) {
    return;
  }
  if (((*(int *)(param_1 + 0x330) != 0) && (*(int *)(param_1 + 0x308) == 0)) &&
     ((*(byte *)(param_1 + 0x348) & 1) == 0)) {
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 1;
    FUN_10ac8c444(lVar4);
  }
  if (*(long *)(*(long *)(param_1 + 0x378) + 0x38) == 0) {
    lStack_30 = *(long *)(param_1 + 0x338);
    if (lStack_30 == 0) {
      return;
    }
    plStack_28 = *(long **)(param_1 + 0x340);
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
    }
    FUN_10a1e3a04(lVar4,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
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
  }
  else {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a1e3a04(lVar4,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
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
  }
  plVar1 = plStack_28;
  if (lVar4 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10ac8c268; end: 10ac8c2bb;  */

byte * FUN_10ac8c268(long param_1)

{
  byte *pbVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar2 = &puStack_20;
  pbVar1 = (byte *)(*(long *)(param_1 + 0x388) + 0x38);
  if (*(long *)pbVar1 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar3 == 0) {
      FUN_10a0edfc4();
      pbVar1 = *(byte **)((long)ppuVar2 + 0x388);
      if (*(int *)(*(long *)(*(long *)((long)ppuVar2 + 0x90) + 0xa20) + 0x18) < 0x66) {
        func_0x00010ac8a20c(pbVar1);
        *(byte *)((long)ppuVar2 + 0x358) = *(byte *)((long)ppuVar2 + 0x358) & 0xfd;
        pbVar1 = *(byte **)((long)ppuVar2 + 0x388);
        *pbVar1 = *pbVar1 & 0xef;
        func_0x00010ac8a2ec();
      }
      else {
        func_0x00010ac8a284();
        if (*(int *)((long)ppuVar2 + 0x318) != 0) {
          pbVar1 = (byte *)ppuVar2;
          FUN_10ac8c33c(ppuVar2,0);
        }
      }
      *(byte *)((long)ppuVar2 + 0x358) = *(byte *)((long)ppuVar2 + 0x358) & 0xfb;
      return pbVar1;
    }
    pbVar1 = (byte *)(lVar3 + 0x128);
  }
  return pbVar1;
}



/* Entry: 10ac8c2bc; end: 10ac8c33b;  */

void FUN_10ac8c2bc(long param_1)

{
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18) < 0x66) {
    func_0x00010ac8a20c(*(undefined8 *)(param_1 + 0x388));
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfd;
    **(byte **)(param_1 + 0x388) = **(byte **)(param_1 + 0x388) & 0xef;
    func_0x00010ac8a2ec();
  }
  else {
    func_0x00010ac8a284();
    if (*(int *)(param_1 + 0x318) != 0) {
      FUN_10ac8c33c(param_1,0);
    }
  }
  *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfb;
  return;
}



/* Entry: 10ac8c33c; end: 10ac8c443;  */

void FUN_10ac8c33c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [48];
  
  FUN_10a1cc18c(auStack_50,&UNK_10f6a0528);
  if (*(int *)(param_1 + 0x318) - 1U < 4) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfb;
    *(undefined4 *)(param_1 + 0x318) = 0;
    if (param_2 != 0) {
      plVar6 = *(long **)(param_1 + 0x338);
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
      FUN_10a07e58c();
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    func_0x00010ac8a284(*(undefined8 *)(param_1 + 0x388));
    func_0x00010ac8a20c(*(undefined8 *)(param_1 + 0x388));
    FUN_10a1d33b4(auStack_50);
    return;
  }
  FUN_10a00946c(&UNK_10f6a0545);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac8c420);
  (*pcVar4)();
}



/* Entry: 10ac8c444; end: 10ac8c5d3;  */

void FUN_10ac8c444(long param_1,uint param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  FUN_10a1cc18c(auStack_60,&UNK_10f6a048b);
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x340) != 0) && ((*(byte *)(param_1 + 0x358) & 1) == 0)) {
      *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) | 1;
      param_2 = *(uint *)(param_1 + 0x340);
    }
    if ((((*(int *)(param_1 + 0x318) - 2U < 3) &&
         (plVar2 = *(long **)(*(long *)(param_1 + 0x388) + 0x28), plVar2 != (long *)0x0)) &&
        ((**(code **)(*plVar2 + 0x60))(), (int)plVar2 != 0)) &&
       (1 < param_2 != ((*(byte *)(param_1 + 0x358) & 2) == 0))) {
      FUN_10ac8a47c(0,*(undefined8 *)(param_1 + 0x388));
      *(undefined4 *)(*(long *)(param_1 + 0x388) + 0x68) = 0;
      *(uint *)(param_1 + 0x35c) = param_2;
      *(undefined4 *)(param_1 + 0x360) = 0;
      *(bool *)(param_1 + 0x364) = 1 < param_2;
      *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfb;
      *(undefined4 *)(param_1 + 0x318) = 1;
    }
    else {
      FUN_10a1cc18c(auStack_90,&UNK_10f6a04c4);
      if (*(int *)(param_1 + 0x318) != 0) {
        FUN_10ac8c33c(param_1,0);
      }
      FUN_10ac8a20c(*(undefined8 *)(param_1 + 0x388));
      **(byte **)(param_1 + 0x388) = **(byte **)(param_1 + 0x388) & 0xef;
      func_0x00010ac8a2ec();
      *(uint *)(param_1 + 0x35c) = param_2;
      *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfb;
      *(bool *)(param_1 + 0x364) = 1 < param_2;
      FUN_10ac8c5d4(param_1);
      FUN_10a1d33b4(auStack_90);
    }
    FUN_10a1d33b4(auStack_60);
    return;
  }
  FUN_10a00946c(&UNK_10f6a04a6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac8c5a8);
  (*pcVar1)();
}



/* Entry: 10ac8c5d4; end: 10ac8c687;  */

void FUN_10ac8c5d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  FUN_10a1cc18c(auStack_50,&UNK_10f6a0567);
  if (*(int *)(param_1 + 0x318) != 0) {
    FUN_10ac8c33c(param_1,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x388);
  FUN_10ac89edc(0,uVar1,*(undefined8 *)(param_1 + 0x90),param_1 + 0x290);
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfd | *(char *)(param_1 + 0x364) << 1
    ;
    **(byte **)(param_1 + 0x388) =
         **(byte **)(param_1 + 0x388) & 0xef | *(char *)(param_1 + 0x364) << 4;
    func_0x00010ac8a2ec();
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  FUN_10a1d33b4(auStack_50);
  return;
}



/* Entry: 10ac8c688; end: 10ac8c723;  */

void FUN_10ac8c688(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10ac8c724((undefined8 *)(param_1 + 800),param_1 + 0x398);
  if (*param_2 != 0) {
    FUN_10ac8c778(auStack_40,*(undefined8 *)(param_1 + 800),param_2);
    FUN_10a76c5c8(param_1 + 0x398,auStack_40);
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
  }
  return;
}



/* Entry: 10ac8c724; end: 10ac8c777;  */

void FUN_10ac8c724(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    lVar1 = *param_1;
    func_0x00010a07d3d4(lVar1 + 0x18);
    if (*(char *)(*(long *)(lVar1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac8c768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x40))(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10ac8c778; end: 10ac8c873;  */

void FUN_10ac8c778(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puStack_88;
  undefined1 auStack_80 [64];
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *param_3;
  bStack_40 = 3;
  puStack_88 = auStack_80;
  if (*(char *)(lVar3 + 0x40) == '\0') {
    bStack_40 = 0;
  }
  else {
    FUN_10a005398(&puStack_88,lVar3);
    bStack_40 = *(byte *)(lVar3 + 0x40);
  }
  FUN_10a07ca84(param_1,param_2,auStack_80);
  if ((ulong)bStack_40 < 4) {
    puVar2 = auStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume(puVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac8c874);
  (*pcVar1)();
}



/* Entry: 10ac8c874; end: 10ac8c90f;  */

void FUN_10ac8c874(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10ac8c724((undefined8 *)(param_1 + 0x330),param_1 + 0x3a8);
  if (*param_2 != 0) {
    FUN_10ac8c778(auStack_40,*(undefined8 *)(param_1 + 0x330),param_2);
    FUN_10a76c5c8(param_1 + 0x3a8,auStack_40);
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
  }
  return;
}



/* Entry: 10ac8c910; end: 10ac8c96f;  */

void FUN_10ac8c910(float param_1,long param_2)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  pbVar2 = *(byte **)(param_2 + 0x388);
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  fVar4 = 0.0;
  if (0.0 <= param_1) {
    fVar4 = fVar5;
  }
  *(float *)(pbVar2 + 8) = fVar4;
  *pbVar2 = *pbVar2 | 4;
  plVar1 = *(long **)(pbVar2 + 0x28);
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x60))(), (int)plVar1 != 0)) {
    uVar3 = (uint)*pbVar2;
    if ((*pbVar2 & 1) != 0) {
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x30))();
      *(float *)(pbVar2 + 0x54) = fVar4;
      uVar3 = *pbVar2 & 0xf8 | 6;
      *pbVar2 = (byte)uVar3;
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (fVar5 = *(float *)(pbVar2 + 8), fVar5 <= *(float *)(pbVar2 + 0xc))) {
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x78))();
      *(float *)(pbVar2 + 0x48) = fVar5;
      uVar6 = *(undefined4 *)(pbVar2 + 0xc);
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x78))();
      *(undefined4 *)(pbVar2 + 0x4c) = uVar6;
      *(float *)(pbVar2 + 0x50) =
           (*(float *)(pbVar2 + 0xc) - *(float *)(pbVar2 + 8)) * *(float *)(pbVar2 + 0x54);
      *pbVar2 = *pbVar2 & 0xfb | 0x20;
    }
  }
  return;
}



/* Entry: 10ac8c970; end: 10ac8caaf;  */

void FUN_10ac8c970(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &UNK_10f663271;
  uStack_38 = 0x1d;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c69e70,&puStack_40);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c686a8,param_1 + 0x290);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c686c8,param_1 + 0x290);
  (**(code **)(*param_2 + 0x60))
            (*(undefined4 *)(*(long *)(param_1 + 0x388) + 4),param_2,&PTR_DAT_110c686e8);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c68708,*(undefined4 *)(param_1 + 0x340));
  lVar1 = *(long *)(param_1 + 0x388);
  func_0x00010ac8a2ec(lVar1);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(lVar1 + 8),param_2,&PTR_DAT_110c68728);
  lVar1 = *(long *)(param_1 + 0x388);
  func_0x00010ac8a2ec(lVar1);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(lVar1 + 0xc),param_2,&PTR_DAT_110c68748);
  if (*(long *)(param_1 + 0x348) != 0) {
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c68768);
  }
  return;
}



/* Entry: 10ac8cab0; end: 10ac8ce37;  */

/* WARNING: Removing unreachable block (ram,0x00010ac8cc00) */
/* WARNING: Removing unreachable block (ram,0x00010ac8cb50) */
/* WARNING: Removing unreachable block (ram,0x00010ac8cb40) */
/* WARNING: Removing unreachable block (ram,0x00010ac8cb98) */
/* WARNING: Removing unreachable block (ram,0x00010ac8cc10) */

void FUN_10ac8cab0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long lStack_88;
  char cStack_71;
  undefined1 auStack_68 [56];
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar4);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c686a8);
  if ((int)plVar4 == 0) {
    func_0x000107c2b054(auStack_68,&UNK_10f69fe75);
    FUN_10a0fed30(auStack_a0,param_2,&PTR_DAT_110c686c8,auStack_68);
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x248))();
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_c0,*plVar4,plVar4[1]);
    }
    else {
      lStack_b8 = plVar4[1];
      lStack_c0 = *plVar4;
      lStack_b0 = plVar4[2];
    }
    FUN_10a107e2c(auStack_68,auStack_a0,&lStack_c0,0);
    FUN_10ac8ce38(param_1,auStack_68);
    lStack_88 = lStack_c0;
    if (-1 < lStack_b0) goto LAB_10ac8cc28;
  }
  else {
    FUN_10a1e3e54(auStack_a0);
    (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c686a8,auStack_a0);
    FUN_10ac8ce38(param_1,auStack_68);
    if (-1 < cStack_71) goto LAB_10ac8cc28;
  }
  __ZdlPv(lStack_88);
LAB_10ac8cc28:
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c686e8);
  func_0x00010ac8a42c(*(undefined8 *)(param_1 + 0x388));
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c68708,0xffffffff);
  *(int *)(param_1 + 0x340) = (int)plVar4;
  *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfe;
  fVar7 = 0.0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c68728);
  pbVar5 = *(byte **)(param_1 + 0x388);
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar7) {
    fVar3 = fVar8;
  }
  *(float *)(pbVar5 + 8) = fVar3;
  *pbVar5 = *pbVar5 | 4;
  func_0x00010ac8a2ec();
  fVar7 = 1.0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c68748);
  pbVar5 = *(byte **)(param_1 + 0x388);
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar7) {
    fVar3 = fVar8;
  }
  *(float *)(pbVar5 + 0xc) = fVar3;
  *pbVar5 = *pbVar5 | 4;
  func_0x00010ac8a2ec();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c68768);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c68768);
    FUN_10ab6b998(auStack_d0,param_2,0);
    FUN_10ab76cb8(param_1 + 0x348,auStack_d0);
    if (plStack_c8 != (long *)0x0) {
      plVar4 = plStack_c8 + 1;
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
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10ac8ce38; end: 10ac8cf3b;  */

void FUN_10ac8ce38(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((int)param_2[6] == *(int *)(param_1 + 0x2c0)) {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(param_1 + 0x2a7);
    uVar3 = *(ulong *)(param_1 + 0x298);
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar2 == uVar3) {
      plVar8 = (long *)*param_2;
      if (-1 < (char)bVar4) {
        plVar8 = param_2;
      }
      plVar1 = (long *)*(long *)(param_1 + 0x290);
      if (-1 < (char)bVar5) {
        plVar1 = (long *)(param_1 + 0x290);
      }
      _memcmp(plVar8,plVar1);
      if ((int)plVar8 == 0) {
        bVar4 = *(byte *)((long)param_2 + 0x2f);
        uVar2 = param_2[4];
        if (-1 < (char)bVar4) {
          uVar2 = (ulong)bVar4;
        }
        bVar5 = *(byte *)(param_1 + 0x2bf);
        uVar3 = *(ulong *)(param_1 + 0x2b0);
        if (-1 < (char)bVar5) {
          uVar3 = (ulong)bVar5;
        }
        if (uVar2 == uVar3) {
          plVar8 = (long *)param_2[3];
          if (-1 < (char)bVar4) {
            plVar8 = param_2 + 3;
          }
          lVar9 = *(long *)(param_1 + 0x2a8);
          if (-1 < (char)bVar5) {
            lVar9 = param_1 + 0x2a8;
          }
          _memcmp(plVar8,lVar9);
          if ((int)plVar8 == 0) {
            return;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x318) != 0) {
    FUN_10ac8c33c(param_1,0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x2a8,param_2 + 3);
  *(int *)(param_1 + 0x2c0) = (int)param_2[6];
  FUN_10a08d2e0(auStack_48,param_1 + 0x290);
  FUN_10ad0279c(auStack_30,auStack_48);
  FUN_10a152118(param_1 + 0x2c8,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar8 = plStack_28 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ac8cf3c; end: 10ac8cfc3;  */

void FUN_10ac8cf3c(undefined4 param_1,long param_2)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_2 + 0x3d0) = 1;
  pbVar2 = *(byte **)(param_2 + 0x388);
  if ((*pbVar2 >> 3 & 1) == 0) {
    return;
  }
  if (*(long **)(pbVar2 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(pbVar2 + 0x28) + 0x40))();
  }
  *pbVar2 = *pbVar2 & 0xf7;
  plVar1 = *(long **)(pbVar2 + 0x28);
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x60))(), (int)plVar1 != 0)) {
    uVar3 = (uint)*pbVar2;
    if ((*pbVar2 & 1) != 0) {
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x30))();
      *(undefined4 *)(pbVar2 + 0x54) = param_1;
      uVar3 = *pbVar2 & 0xf8 | 6;
      *pbVar2 = (byte)uVar3;
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (fVar4 = *(float *)(pbVar2 + 8), fVar4 <= *(float *)(pbVar2 + 0xc))) {
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x78))();
      *(float *)(pbVar2 + 0x48) = fVar4;
      uVar5 = *(undefined4 *)(pbVar2 + 0xc);
      (**(code **)(**(long **)(pbVar2 + 0x28) + 0x78))();
      *(undefined4 *)(pbVar2 + 0x4c) = uVar5;
      *(float *)(pbVar2 + 0x50) =
           (*(float *)(pbVar2 + 0xc) - *(float *)(pbVar2 + 8)) * *(float *)(pbVar2 + 0x54);
      *pbVar2 = *pbVar2 & 0xfb | 0x20;
    }
  }
  return;
}



/* Entry: 10ac8cfc4; end: 10ac8d7d7;  */

void FUN_10ac8cfc4(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar12;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  long lVar13;
  undefined8 *unaff_x27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar14;
  undefined8 uVar15;
  
code_r0x00010ac8cfc4:
  *(int **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x278) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x138),param_2 + 0x28);
  plVar6 = *(long **)(*(long *)(param_2 + 0x388) + 0x28);
  pcVar10 = "false";
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))();
    pcVar10 = "true";
    if (((ulong)plVar6 & 1) == 0) {
      pcVar10 = "false";
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x150),pcVar10);
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6a03bb);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6a03c4);
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&DAT_10f448854);
  *(undefined4 *)((long)register0x00000008 + -0xc0) = 3;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&DAT_10f36b6f5);
  *(long *)((long)register0x00000008 + -0x270) = param_2;
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined4 *)((long)register0x00000008 + -0xa0) = 4;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f6a03ce);
  puVar11 = (undefined8 *)0x0;
  lVar13 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0x168);
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x160);
  *(undefined8 **)((long)register0x00000008 + -0x168) = puVar8;
  puVar7 = puVar8;
  do {
    unaff_x28 = (int *)(unaff_x25 + lVar13);
    iVar3 = *unaff_x28;
    puVar9 = puVar8;
    puVar12 = puVar8;
    unaff_x24 = puVar8;
    if (puVar7 == puVar8) {
LAB_10ac8d190:
      puVar7 = unaff_x27;
      if (puVar11 != (undefined8 *)0x0) {
        puVar12 = puVar9 + 1;
        puVar7 = puVar9;
        unaff_x24 = puVar9;
      }
      if (puVar7[1] == 0) goto LAB_10ac8d1ac;
    }
    else {
      puVar7 = puVar8;
      puVar4 = puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar7[2];
          bVar5 = (undefined8 *)*puVar9 == puVar7;
          puVar7 = puVar9;
        } while (bVar5);
        if (*(int *)(puVar9 + 4) < iVar3) goto LAB_10ac8d190;
      }
      else {
        do {
          puVar9 = puVar4;
          puVar4 = (undefined8 *)puVar9[1];
        } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
        if (*(int *)(puVar9 + 4) < iVar3) goto LAB_10ac8d190;
        do {
          while (unaff_x24 = puVar11, *(int *)(unaff_x24 + 4) <= iVar3) {
            if (iVar3 <= *(int *)(unaff_x24 + 4)) goto LAB_10ac8d21c;
            puVar11 = (undefined8 *)unaff_x24[1];
            if ((undefined8 *)unaff_x24[1] == (undefined8 *)0x0) {
              puVar12 = unaff_x24 + 1;
              goto LAB_10ac8d1ac;
            }
          }
          puVar11 = (undefined8 *)*unaff_x24;
          puVar12 = unaff_x24;
        } while ((undefined8 *)*unaff_x24 != (undefined8 *)0x0);
      }
LAB_10ac8d1ac:
      puVar7 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar7 + 4) = iVar3;
      if (*(char *)((long)unaff_x28 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar7 + 5,*(undefined8 *)(unaff_x28 + 2),*(undefined8 *)(unaff_x28 + 4)
                           );
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x28 + 2);
        puVar7[6] = *(undefined8 *)(unaff_x28 + 4);
        puVar7[5] = uVar14;
        puVar7[7] = *(undefined8 *)(unaff_x28 + 6);
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = unaff_x24;
      *puVar12 = puVar7;
      if (**(long **)((long)register0x00000008 + -0x168) != 0) {
        *(long *)((long)register0x00000008 + -0x168) =
             **(long **)((long)register0x00000008 + -0x168);
        puVar7 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x160),puVar7);
      *(long *)((long)register0x00000008 + -0x158) =
           *(long *)((long)register0x00000008 + -0x158) + 1;
    }
LAB_10ac8d21c:
    lVar13 = lVar13 + 0x20;
    if (lVar13 == 0xa0) break;
    puVar7 = *(undefined8 **)((long)register0x00000008 + -0x168);
    puVar11 = *(undefined8 **)((long)register0x00000008 + -0x160);
  } while( true );
  lVar13 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x270);
  do {
    if (*(char *)((long)register0x00000008 + lVar13 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar13 + -0x98));
    }
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != -0xa0);
  iVar3 = 4;
  if (*(int *)(unaff_x23 + 0x318) != 0 ||
      0x15c < *(int *)(*(long *)(*(long *)(unaff_x23 + 0x90) + 0xa20) + 0x18)) {
    iVar3 = *(int *)(unaff_x23 + 0x318);
  }
  puVar11 = *(undefined8 **)((long)register0x00000008 + -0x160);
  puVar7 = puVar8;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      lVar13 = 8;
      if (iVar3 <= *(int *)(puVar11 + 4)) {
        lVar13 = 0;
        puVar7 = puVar11;
      }
      puVar11 = *(undefined8 **)((long)puVar11 + lVar13);
    } while (puVar11 != (undefined8 *)0x0);
    if ((puVar7 != puVar8) && (*(int *)(puVar7 + 4) <= iVar3)) {
      if (*(char *)((long)puVar7 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x120),puVar7[5],puVar7[6]);
      }
      else {
        uVar14 = puVar7[5];
        *(undefined8 *)((long)register0x00000008 + -0x118) = puVar7[6];
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x110) = puVar7[7];
      }
      goto LAB_10ac8d2d0;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f6a05bd);
LAB_10ac8d2d0:
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x121)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0x121);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x238),unaff_x21 + 10,
                (undefined1 *)((long)register0x00000008 + -0x250));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x238);
  if (-1 < *(char *)((long)register0x00000008 + -0x221)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x238);
  }
  if (unaff_x21 != 0) {
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x138);
    if (-1 < *(char *)((long)register0x00000008 + -0x121)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x138);
    }
    _memmove(unaff_x22,puVar1,unaff_x21);
  }
  puVar8 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar8 = 0x656d756c6f76202c;
  *(undefined2 *)(puVar8 + 1) = 0x203a;
  *(undefined1 *)((long)puVar8 + 10) = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x250),
             *(undefined4 *)(*(long *)(unaff_x23 + 0x388) + 4));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x248);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x250);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x239)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x239);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x250);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x238);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x210) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x218) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x220) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a05e2,0x14);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x268),
             *(undefined4 *)(*(long *)(unaff_x23 + 0x388) + 0x68));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x260);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x268);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x251)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x251);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x268);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar15;
  *unaff_x20 = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a05f7,0xb);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x148);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x150);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x139)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x139);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x150);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -400) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x198) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a0603,0xf);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x170) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x180) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x118);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x120);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x109)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x109);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x120);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar14 = *puVar8;
  puVar7 = *(undefined8 **)((long)register0x00000008 + -0x278);
  puVar7[1] = puVar8[1];
  *puVar7 = uVar14;
  puVar7[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (*(char *)((long)register0x00000008 + -0x169) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x180));
  }
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
  }
  if (*(char *)((long)register0x00000008 + -0x251) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x268));
  }
  if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
  }
  if (*(char *)((long)register0x00000008 + -0x209) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x220));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x221) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x238));
  }
  if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x160);
  FUN_10ac95994();
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x150);
    __ZdlPv();
  }
  if (*(char *)((long)register0x00000008 + -0x121) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x138);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ac95994(*(undefined8 *)((long)register0x00000008 + -0x160));
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x121) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x138));
  }
  unaff_x30 = FUN_10ac8d7d8;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x28;
  unaff_x26 = 0xa0;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
  param_1 = extraout_x8;
  goto code_r0x00010ac8cfc4;
}



/* Entry: 10ac8d7d8; end: 10ac8d86b;  */

void FUN_10ac8d7d8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *pcVar10;
  undefined8 *puVar11;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar12;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  long lVar13;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar14;
  undefined8 uVar15;
  
FUN_10ac8cfc4:
  *(int **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x278) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0x138),param_2);
  plVar6 = *(long **)(*(long *)(param_2 + 0x360) + 0x28);
  pcVar10 = "false";
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))();
    pcVar10 = "true";
    if (((ulong)plVar6 & 1) == 0) {
      pcVar10 = "false";
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x150),pcVar10);
  *(undefined4 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),&UNK_10f6a03bb);
  *(undefined4 *)((long)register0x00000008 + -0x100) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f6a03c4);
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&DAT_10f448854);
  *(undefined4 *)((long)register0x00000008 + -0xc0) = 3;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb8),&DAT_10f36b6f5);
  *(long *)((long)register0x00000008 + -0x270) = param_2 + -0x28;
  unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined4 *)((long)register0x00000008 + -0xa0) = 4;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f6a03ce);
  puVar11 = (undefined8 *)0x0;
  lVar13 = 0;
  unaff_x27 = (undefined8 *)((long)register0x00000008 + -0x168);
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x160);
  *(undefined8 **)((long)register0x00000008 + -0x168) = puVar8;
  puVar7 = puVar8;
  do {
    unaff_x28 = (int *)(unaff_x25 + lVar13);
    iVar3 = *unaff_x28;
    puVar9 = puVar8;
    puVar12 = puVar8;
    unaff_x24 = puVar8;
    if (puVar7 == puVar8) {
LAB_10ac8d190:
      puVar7 = unaff_x27;
      if (puVar11 != (undefined8 *)0x0) {
        puVar12 = puVar9 + 1;
        puVar7 = puVar9;
        unaff_x24 = puVar9;
      }
      if (puVar7[1] == 0) goto LAB_10ac8d1ac;
    }
    else {
      puVar7 = puVar8;
      puVar4 = puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar7[2];
          bVar5 = (undefined8 *)*puVar9 == puVar7;
          puVar7 = puVar9;
        } while (bVar5);
        if (*(int *)(puVar9 + 4) < iVar3) goto LAB_10ac8d190;
      }
      else {
        do {
          puVar9 = puVar4;
          puVar4 = (undefined8 *)puVar9[1];
        } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
        if (*(int *)(puVar9 + 4) < iVar3) goto LAB_10ac8d190;
        do {
          while (unaff_x24 = puVar11, *(int *)(unaff_x24 + 4) <= iVar3) {
            if (iVar3 <= *(int *)(unaff_x24 + 4)) goto LAB_10ac8d21c;
            puVar11 = (undefined8 *)unaff_x24[1];
            if ((undefined8 *)unaff_x24[1] == (undefined8 *)0x0) {
              puVar12 = unaff_x24 + 1;
              goto LAB_10ac8d1ac;
            }
          }
          puVar11 = (undefined8 *)*unaff_x24;
          puVar12 = unaff_x24;
        } while ((undefined8 *)*unaff_x24 != (undefined8 *)0x0);
      }
LAB_10ac8d1ac:
      puVar7 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar7 + 4) = iVar3;
      if (*(char *)((long)unaff_x28 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar7 + 5,*(undefined8 *)(unaff_x28 + 2),*(undefined8 *)(unaff_x28 + 4)
                           );
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x28 + 2);
        puVar7[6] = *(undefined8 *)(unaff_x28 + 4);
        puVar7[5] = uVar14;
        puVar7[7] = *(undefined8 *)(unaff_x28 + 6);
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = unaff_x24;
      *puVar12 = puVar7;
      if (**(long **)((long)register0x00000008 + -0x168) != 0) {
        *(long *)((long)register0x00000008 + -0x168) =
             **(long **)((long)register0x00000008 + -0x168);
        puVar7 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x160),puVar7);
      *(long *)((long)register0x00000008 + -0x158) =
           *(long *)((long)register0x00000008 + -0x158) + 1;
    }
LAB_10ac8d21c:
    lVar13 = lVar13 + 0x20;
    if (lVar13 == 0xa0) break;
    puVar7 = *(undefined8 **)((long)register0x00000008 + -0x168);
    puVar11 = *(undefined8 **)((long)register0x00000008 + -0x160);
  } while( true );
  lVar13 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x270);
  do {
    if (*(char *)((long)register0x00000008 + lVar13 + -0x81) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar13 + -0x98));
    }
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != -0xa0);
  iVar3 = 4;
  if (*(int *)(unaff_x23 + 0x318) != 0 ||
      0x15c < *(int *)(*(long *)(*(long *)(unaff_x23 + 0x90) + 0xa20) + 0x18)) {
    iVar3 = *(int *)(unaff_x23 + 0x318);
  }
  puVar11 = *(undefined8 **)((long)register0x00000008 + -0x160);
  puVar7 = puVar8;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      lVar13 = 8;
      if (iVar3 <= *(int *)(puVar11 + 4)) {
        lVar13 = 0;
        puVar7 = puVar11;
      }
      puVar11 = *(undefined8 **)((long)puVar11 + lVar13);
    } while (puVar11 != (undefined8 *)0x0);
    if ((puVar7 != puVar8) && (*(int *)(puVar7 + 4) <= iVar3)) {
      if (*(char *)((long)puVar7 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x120),puVar7[5],puVar7[6]);
      }
      else {
        uVar14 = puVar7[5];
        *(undefined8 *)((long)register0x00000008 + -0x118) = puVar7[6];
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x110) = puVar7[7];
      }
      goto LAB_10ac8d2d0;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f6a05bd);
LAB_10ac8d2d0:
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x121)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0x121);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x238),unaff_x21 + 10,
                (undefined1 *)((long)register0x00000008 + -0x250));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x238);
  if (-1 < *(char *)((long)register0x00000008 + -0x221)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x238);
  }
  if (unaff_x21 != 0) {
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x138);
    if (-1 < *(char *)((long)register0x00000008 + -0x121)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x138);
    }
    _memmove(unaff_x22,puVar1,unaff_x21);
  }
  puVar8 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar8 = 0x656d756c6f76202c;
  *(undefined2 *)(puVar8 + 1) = 0x203a;
  *(undefined1 *)((long)puVar8 + 10) = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x250),
             *(undefined4 *)(*(long *)(unaff_x23 + 0x388) + 4));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x248);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x250);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x239)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x239);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x250);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x238);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x210) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x218) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x220) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a05e2,0x14);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x268),
             *(undefined4 *)(*(long *)(unaff_x23 + 0x388) + 0x68));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x260);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x268);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x251)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x251);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x268);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar15;
  *unaff_x20 = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a05f7,0xb);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x148);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x150);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x139)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x139);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x150);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -400) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x198) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f6a0603,0xf);
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  *(undefined8 *)((long)register0x00000008 + -0x170) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x180) = uVar14;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0x118);
  puVar1 = *(undefined1 **)((long)register0x00000008 + -0x120);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x109)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x109);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x120);
  }
  puVar8 = (undefined8 *)((long)register0x00000008 + -0x180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,puVar1,uVar2);
  uVar14 = *puVar8;
  puVar7 = *(undefined8 **)((long)register0x00000008 + -0x278);
  puVar7[1] = puVar8[1];
  *puVar7 = uVar14;
  puVar7[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (*(char *)((long)register0x00000008 + -0x169) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x180));
  }
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
  }
  if (*(char *)((long)register0x00000008 + -0x251) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x268));
  }
  if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
  }
  if (*(char *)((long)register0x00000008 + -0x209) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x220));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x221) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x238));
  }
  if (*(char *)((long)register0x00000008 + -0x109) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x120));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x160);
  FUN_10ac95994();
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x150);
    __ZdlPv();
  }
  if (*(char *)((long)register0x00000008 + -0x121) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x138);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ac95994(*(undefined8 *)((long)register0x00000008 + -0x160));
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x121) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x138));
  }
  unaff_x30 = FUN_10ac8d7d8;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x26 = 0xa0;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
  param_1 = extraout_x8;
  goto FUN_10ac8cfc4;
}



/* Entry: 10ac8d86c; end: 10ac8d9f7;  */

void FUN_10ac8d86c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d410;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x11e0000011e;
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
  puStack_98 = &UNK_10f63346e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x11e0000011e;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac8d9f8(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633474;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x11e0000011e;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac8d9f8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63347a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x11e0000011e;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac8d9f8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f303078;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x11e0000011e;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac8d9f8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac8d9f8; end: 10ac8da9b;  */

undefined8 * FUN_10ac8d9f8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac8da9c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ac8da9c; end: 10ac8dccb;  */

undefined8 * FUN_10ac8da9c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_40;
  long *plStack_38;
  
  param_1[0x5d] = &PTR_FUN_110c383b8;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  puVar4 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c68a18,param_2);
  plStack_40 = (long *)CONCAT62(plStack_40._2_6_,1);
  FUN_10a00db68(puVar4 + 0x51,param_2,&plStack_40);
  *param_1 = &PTR_FUN_110c687a0;
  param_1[2] = &PTR_FUN_110c688d8;
  param_1[5] = &PTR_FUN_110c68908;
  param_1[0x5d] = &PTR_FUN_110c689d8;
  param_1[0x15] = &PTR_FUN_110c68960;
  param_1[0x51] = &PTR_FUN_110c68980;
  lVar6 = param_3[1];
  uVar7 = *param_3;
  param_1[0x57] = param_3[1];
  param_1[0x56] = uVar7;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x58] = 0;
  FUN_10a05a5d4(param_1 + 0x59,&plStack_40);
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  plVar5 = (long *)0x98;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9a070;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0x12] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110b9a0c0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 10) = 0x3f800000;
  plVar5[0xb] = (long)FUN_10a004c4c;
  plVar5[0xc] = (long)&PTR_DAT_110ae9180;
  plStack_38 = plVar5;
  FUN_10a3ce310(param_1 + 0x5b,&plStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  return param_1;
}



/* Entry: 10ac8dccc; end: 10ac8dd0b;  */

void FUN_10ac8dccc(void)

{
  return;
}



/* Entry: 10ac8dd0c; end: 10ac8dd73;  */

bool FUN_10ac8dd0c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf662846;
    _memcmp(&UNK_10f662846,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac8dd74; end: 10ac8dd7b;  */

bool FUN_10ac8dd74(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf662846;
    _memcmp(&UNK_10f662846,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac8dd7c; end: 10ac8e0d7;  */

void FUN_10ac8dd7c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662846,0x22);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c69900;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
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
  uStack_58 = 0x1350000013a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c69900;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x102,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8e0b8;
    FUN_10a054dac(param_1,&UNK_10f69c676,FUN_10ac959dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8e0b8;
    FUN_10a054dac(param_1,&UNK_10f6535a3,FUN_10ac95b18,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8e0b8;
    FUN_10a054dac(param_1,&UNK_10f69c5ac,FUN_10ac95bd8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6790a2,FUN_10ac95ca0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67909c,FUN_10ac95d58,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c5c9,FUN_10ac95e0c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662846,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac8e0b8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac8e0bc);
  (*pcVar6)();
}



/* Entry: 10ac8e0d8; end: 10ac8e5a3;  */

undefined8 *
FUN_10ac8e0d8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  long ***ppplVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long **pplStack_68;
  long *plStack_60;
  byte bStack_51;
  undefined1 uStack_41;
  
  param_5[100] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_5 + 0x67) = 0x100;
  param_5[0x66] = 0;
  param_5[0x65] = 0;
  puVar6 = param_5;
  FUN_10a1da04c(param_5,&PTR_PTR_110c68d00,param_6);
  puVar6[0x51] = &PTR_FUN_110c205d0;
  pplStack_68 = (long **)((ulong)pplStack_68 & 0xffffffffffff0000);
  FUN_10a00db68(puVar6 + 0x52,param_6,&pplStack_68);
  *param_5 = &PTR_FUN_110c68a58;
  param_5[2] = &PTR_FUN_110c68b98;
  param_5[5] = &PTR_FUN_110c68bc8;
  param_5[100] = &PTR_FUN_110c68cc0;
  param_5[0x15] = &PTR_FUN_110c68c20;
  param_5[0x51] = &PTR_FUN_110c68c40;
  param_5[0x52] = &PTR_DAT_110c68c68;
  puVar6 = param_5 + 0x61;
  param_5[99] = 0;
  param_5[0x58] = 0;
  param_5[0x57] = 0;
  param_5[0x5a] = 0;
  param_5[0x59] = 0;
  param_5[0x5c] = 0;
  param_5[0x5b] = 0;
  param_5[0x5e] = 0;
  param_5[0x5d] = 0;
  param_5[0x60] = 0;
  param_5[0x5f] = 0;
  param_5[0x62] = 0;
  param_5[0x61] = 0;
  plVar7 = (long *)0x368;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110be6fc0;
  ppplVar3 = (long ***)(plVar7 + 3);
  FUN_10ac27168(ppplVar3,param_6);
  pplStack_68 = (long **)ppplVar3;
  plStack_60 = plVar7;
  FUN_10a4bb050(&pplStack_68,plVar7 + 0xb,ppplVar3);
  FUN_10a4a1f90(param_5 + 0x5d,&pplStack_68);
  plVar7 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a4a1ff4(&pplStack_68,param_5[0x12],param_5 + 0x5d);
  FUN_10a015bec(param_5 + 0x5b,&pplStack_68);
  plVar7 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(undefined1 *)(param_5[0x5b] + 8) = 1;
  param_5[0x53] = param_6;
  FUN_10a5ae998(param_5[0x55],&PTR_DAT_110b9f720,param_6,param_5 + 0x52);
  uVar9 = 0x447a0000;
  uVar11 = 0x3f800000;
  FUN_10ac628bc(0);
  *(undefined4 *)(param_5 + 0x57) = uVar11;
  *(undefined4 *)((long)param_5 + 700) = uVar9;
  *(undefined4 *)(param_5 + 0x58) = param_3;
  *(undefined4 *)((long)param_5 + 0x2c4) = param_4;
  func_0x000107c2b074(&pplStack_68,&PTR_DAT_110c69e90);
  plVar7 = plStack_60;
  if (-1 < (char)bStack_51) {
    plVar7 = (long *)(ulong)bStack_51;
  }
  FUN_10a003c90(&ppuStack_a8,(long)plVar7 + 3,&uStack_41);
  pppuVar2 = (undefined8 ***)ppuStack_a8;
  if (-1 < lStack_98) {
    pppuVar2 = &ppuStack_a8;
  }
  if (plVar7 != (long *)0x0) {
    ppplVar3 = (long ***)pplStack_68;
    if (-1 < (char)bStack_51) {
      ppplVar3 = &pplStack_68;
    }
    _memmove(pppuVar2,ppplVar3,plVar7);
  }
  *(undefined4 *)((long)pppuVar2 + (long)plVar7) = 0x5d305b;
  lStack_80 = lStack_98;
  lStack_88 = lStack_a0;
  ppuStack_90 = ppuStack_a8;
  lStack_a0 = 0;
  lStack_98 = 0;
  ppuStack_a8 = (undefined8 ***)0x0;
  lStack_78 = 0;
  func_0x000107c2b080(&ppuStack_90);
  plVar7 = (long *)param_5[0x62];
  if (plVar7 < (long *)param_5[99]) {
    plVar7[2] = lStack_80;
    plVar7[1] = lStack_88;
    *plVar7 = (long)ppuStack_90;
    lStack_88 = 0;
    lStack_80 = 0;
    ppuStack_90 = (undefined8 ***)0x0;
    plVar7[3] = lStack_78;
    param_5[0x62] = plVar7 + 4;
  }
  else {
    puVar8 = puVar6;
    FUN_10ab1411c(puVar6,&ppuStack_90);
    param_5[0x62] = puVar8;
    if (lStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  if (lStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  plVar7 = plStack_60;
  if (-1 < (char)bStack_51) {
    plVar7 = (long *)(ulong)bStack_51;
  }
  FUN_10a003c90(&ppuStack_a8,(long)plVar7 + 3,&uStack_41);
  pppuVar2 = (undefined8 ***)ppuStack_a8;
  if (-1 < lStack_98) {
    pppuVar2 = &ppuStack_a8;
  }
  if (plVar7 != (long *)0x0) {
    ppplVar3 = (long ***)pplStack_68;
    if (-1 < (char)bStack_51) {
      ppplVar3 = &pplStack_68;
    }
    _memmove(pppuVar2,ppplVar3,plVar7);
  }
  *(undefined4 *)((long)pppuVar2 + (long)plVar7) = 0x5d315b;
  lStack_80 = lStack_98;
  lStack_88 = lStack_a0;
  ppuStack_90 = ppuStack_a8;
  lStack_a0 = 0;
  lStack_98 = 0;
  ppuStack_a8 = (undefined8 **)0x0;
  lStack_78 = 0;
  func_0x000107c2b080(&ppuStack_90);
  plVar7 = (long *)param_5[0x62];
  if (plVar7 < (long *)param_5[99]) {
    plVar7[2] = lStack_80;
    plVar7[1] = lStack_88;
    *plVar7 = (long)ppuStack_90;
    lStack_88 = 0;
    lStack_80 = 0;
    ppuStack_90 = (undefined8 ***)0x0;
    plVar7[3] = lStack_78;
    param_5[0x62] = plVar7 + 4;
  }
  else {
    FUN_10ab1411c(puVar6,&ppuStack_90);
    param_5[0x62] = puVar6;
    if (lStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  if (lStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(pplStack_68);
  }
  return param_5;
}



/* Entry: 10ac8e5a4; end: 10ac8e5bf;  */

long FUN_10ac8e5a4(long param_1)

{
  return param_1 + 0x2f8;
}


