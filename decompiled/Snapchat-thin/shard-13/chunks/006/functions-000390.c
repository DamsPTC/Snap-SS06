/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8b2c04; end: 10a8b2c6b;  */

void FUN_10a8b2c04(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
      param_4 = 0;
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
  plVar7 = plVar5;
  FUN_10a8b2c04(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[7];
  plVar1 = (long *)plVar7[6];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x47)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x47);
    plVar1 = plVar7 + 6;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
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
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a8b2c6c; end: 10a8b2d4b;  */

void FUN_10a8b2c6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8b2c04(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[7];
  plVar1 = (long *)plVar5[6];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x47)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x47);
    plVar1 = plVar5 + 6;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
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



/* Entry: 10a8b2d4c; end: 10a8b2e2b;  */

void FUN_10a8b2d4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8b2c04(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[10];
  plVar1 = (long *)plVar5[9];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x5f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x5f);
    plVar1 = plVar5 + 9;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
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



/* Entry: 10a8b2e2c; end: 10a8b2ee7;  */

void FUN_10a8b2e2c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a8b2c04(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[0xc];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
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
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8b2ee8; end: 10a8b2fc7;  */

void FUN_10a8b2ee8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8b2c04(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0xe];
  plVar1 = (long *)plVar5[0xd];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x7f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x7f);
    plVar1 = plVar5 + 0xd;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
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



/* Entry: 10a8b2fc8; end: 10a8b307f;  */

void FUN_10a8b2fc8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8b3080(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a88aaac(param_1,param_2,plVar4[3],plVar4[4]);
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



/* Entry: 10a8b3080; end: 10a8b30e7;  */

void FUN_10a8b3080(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
  FUN_10a8b3080(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar14 = plVar4[5];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)lVar14;
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar6 = lVar14 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar14 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar14 = *plVar4;
  lVar10 = plVar5[0x4c];
  lVar8 = lVar10 - lVar14;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar5[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar14 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar14,lVar8);
          *plVar4 = lVar9;
          plVar5[0x4c] = lVar10 + uVar13 * 0x10;
          plVar5[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar5[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar14 = lVar14 + uVar6 * 0x10;
    while (lVar10 != lVar14) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b30e8; end: 10a8b31a3;  */

void FUN_10a8b30e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a8b3080(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[5];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
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
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8b31a4; end: 10a8b3263;  */

void FUN_10a8b31a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8b3080(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88ae9c(param_1,param_2,plVar4[6],plVar4[7] - plVar4[6] >> 4);
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



/* Entry: 10a8b3264; end: 10a8b35cb;  */

void FUN_10a8b3264(undefined **param_1,code **param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code **unaff_x22;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0xe] & 1) == 0) {
    param_1[9] = param_1[10];
    iVar2 = *(int *)(param_1[0xc] + 8);
    ppuVar5 = param_1;
    FUN_109d1a80c();
    puVar10 = ppuVar5[0x12];
    if (iVar2 < 0x3d) {
      iVar2 = 0x3c;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_2 = (code **)(ppuVar5 + (ulong)(iVar2 - 0x1e) * 125000000);
    FUN_109d16728(param_1 + 0xb,param_1 + 9,param_2,puVar10);
    param_1[10] = param_1[0xb];
    plVar6 = (long *)(param_1[0xb] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(param_1[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      puVar11 = param_1[10];
      plVar6 = (long *)(puVar11 + 0x10);
      puVar10 = param_1[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            pcStack_78 = (code *)0x0;
            ppuVar5 = (undefined **)(puVar11 + 0x18);
            param_2 = &pcStack_78;
            ppuStack_70 = param_1;
            puStack_68 = puVar10;
            func_0x000109d1b588();
            *(undefined8 *)(puVar11 + 0x10) = 0;
            goto LAB_10a8b34d4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar6 = (long *)param_1[10];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = (long *)param_1[0xb];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  uVar12 = *(undefined8 *)(param_1[9] + 0x10);
  if (((uint)uVar12 >> 1 & 1) == 0) {
    puVar10 = param_1[0xd];
    uStack_60 = *(undefined8 *)(puVar10 + 0x20);
    puStack_68 = *(undefined **)(puVar10 + 0x18);
    if (*(long *)(puVar10 + 0x20) != 0) {
      plVar6 = (long *)(*(long *)(puVar10 + 0x20) + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar10 = param_1[0xd];
    }
    unaff_x22 = &pcStack_78;
    pcStack_78 = FUN_10a8813e8;
    ppuStack_70 = &PTR_DAT_110c241b0;
    param_2 = &pcStack_78;
    FUN_10a860860(puVar10);
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  else {
    func_0x0001092ba100(param_1 + 2);
  }
  plVar6 = (long *)param_1[9];
  if (plVar6 != (long *)0x0) {
    unaff_x22 = (code **)(plVar6 + 1);
    do {
      pcVar7 = *unaff_x22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar4) {
        *unaff_x22 = pcVar7 + -4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)pcVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        pcVar7 = *unaff_x22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
        if (bVar4) {
          *unaff_x22 = pcVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pcVar7 + -1 == (code *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (((uint)uVar12 >> 1 & 1) == 0) {
    func_0x0001092ba100(param_1 + 2);
  }
  while( true ) {
    func_0x000109d1a1d0(param_1 + 2);
    ppuVar5 = param_1;
    __ZdlPv();
LAB_10a8b34d4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    (*(code *)*ppuStack_70)(unaff_x22 + 1);
    plVar6 = (long *)param_1[9];
    if (plVar6 != (long *)0x0) {
      unaff_x22 = (code **)(plVar6 + 1);
      do {
        pcVar7 = *unaff_x22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
        if (bVar4) {
          *unaff_x22 = pcVar7 + -4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)pcVar7 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        do {
          pcVar7 = *unaff_x22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
          if (bVar4) {
            *unaff_x22 = pcVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pcVar7 + -1 == (code *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    ___cxa_begin_catch(ppuVar5);
    func_0x000109d1a178(param_1 + 2);
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  plVar6 = (long *)ppuVar5[10];
  if (((ulong)ppuVar5[0xe] & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_10a8b3720;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) != 4) goto LAB_10a8b3720;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar8 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    plVar6 = (long *)ppuVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)ppuVar5[9];
    if (plVar6 == (long *)0x0) goto LAB_10a8b3720;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) != 4) goto LAB_10a8b3720;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar8 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar8 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_10a8b3720:
  func_0x000109d1a1d0(ppuVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(ppuVar5);
  return;
}



/* Entry: 10a8b35cc; end: 10a8b373b;  */

void FUN_10a8b35cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a8b3720;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a8b3720;
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
    plVar5 = *(long **)(param_1 + 0x58);
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
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a8b3720;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a8b3720;
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
LAB_10a8b3720:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a8b373c; end: 10a8b3987;  */

void FUN_10a8b373c(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    FUN_10a881008(param_1 + 0x68,param_1 + 0x48);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68);
    plVar5 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar8 = *(long *)(param_1 + 0x58);
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
  plVar5 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8b38cc);
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
  plVar5 = *(long **)(param_1 + 0x68);
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



/* Entry: 10a8b3988; end: 10a8b3a4b;  */

void FUN_10a8b3988(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
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
    plVar4 = *(long **)(param_1 + 0x68);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a8b3a4c; end: 10a8b3aeb;  */

undefined4 * FUN_10a8b3a4c(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float extraout_s2;
  float fVar34;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar35;
  float fVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_188 [64];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  long lStack_100;
  undefined4 auStack_80 [14];
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  long lStack_28;
  
  puVar14 = auStack_80;
  puVar12 = auStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_80[0] = *(undefined4 *)(param_1 + 0xc);
  uStack_48 = 0;
  uStack_40 = 0x20;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = *(undefined4 *)(param_1 + 0x28);
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_10a4c3ba4(param_2 + 0x58);
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  FUN_10a22d0f8(auStack_80);
  __Unwind_Resume();
  lVar16 = *(long *)((long)puVar14 + 0x68);
  if (lVar16 != 0) {
    piVar19 = *(int **)(lVar16 + 0x28);
    piVar2 = *(int **)(lVar16 + 0x30);
    if (piVar19 == piVar2) {
LAB_10a8b3b58:
      if ((piVar19 != piVar2 && piVar19 != (int *)0x0) && (*(long *)(piVar19 + 0x72) != 0)) {
        fVar20 = *(float *)((long)puVar14 + 0x1ac);
        fVar21 = *(float *)((long)puVar14 + 0x1b0);
        fVar22 = *(float *)((long)puVar14 + 0x1b4);
        fVar23 = *(float *)((long)puVar14 + 0x1b8);
        puVar13 = (undefined1 *)((long)puVar14 + 0x198);
        FUN_10a0ec6f0();
        uVar18 = *(undefined8 *)((long)puVar14 + 0x19c);
        func_0x0001096b9684(&lStack_108,piVar19 + 0x70);
        lVar16 = *(long *)(piVar19 + 0x72);
        fStack_148 = *(float *)(lVar16 + 0x30);
        fStack_138 = *(float *)(lVar16 + 0x34);
        fStack_128 = *(float *)(lVar16 + 0x38);
        fStack_118 = *(float *)(lVar16 + 0x3c);
        fStack_144 = *(float *)(lVar16 + 0x40);
        fStack_134 = *(float *)(lVar16 + 0x44);
        fStack_124 = *(float *)(lVar16 + 0x48);
        fStack_114 = *(float *)(lVar16 + 0x4c);
        fStack_140 = *(float *)(lVar16 + 0x50);
        fStack_130 = *(float *)(lVar16 + 0x54);
        fStack_120 = *(float *)(lVar16 + 0x58);
        fStack_110 = *(float *)(lVar16 + 0x5c);
        uStack_13c = 0;
        uStack_12c = 0;
        uStack_11c = 0;
        uStack_10c = 0x3f800000;
        func_0x0001094f5708(auStack_188,&fStack_148);
        bVar11 = ((ulong)puVar13 & 1) != 0;
        iVar15 = (int)((ulong)uVar18 >> 0x20);
        iVar17 = (int)uVar18;
        iVar1 = iVar15;
        if (bVar11) {
          iVar1 = iVar17;
        }
        fVar24 = (float)iVar1;
        if (bVar11) {
          iVar17 = iVar15;
        }
        fVar25 = (float)iVar17;
        fVar39 = *(float *)(lVar16 + 0x3c) * 0.0;
        fVar40 = *(float *)(lVar16 + 0x4c) * 0.0;
        fVar41 = *(float *)(lVar16 + 0x5c) * 0.0;
        fVar32 = fVar39 + *(float *)(lVar16 + 0x4c) + fVar41;
        fVar26 = *(float *)(lVar16 + 0x3c) + fVar40 + fVar41 + 0.0;
        fVar27 = fVar32 + 0.0;
        fVar28 = *(float *)(lVar16 + 0x5c) + fVar39 + fVar40 + 0.0;
        fVar39 = fVar28;
        FUN_10a8b40c0(lStack_108,lStack_100,&UNK_10e4e1138,1,auStack_188);
        FUN_10a8b40c0(lStack_108,lStack_100,&UNK_10e4e113c,0x22,auStack_188);
        fVar9 = fStack_128;
        fVar8 = fStack_130;
        fVar7 = fStack_134;
        fVar6 = fStack_138;
        fVar5 = fStack_140;
        fVar41 = fStack_144;
        fVar40 = fStack_148;
        fVar34 = 1.0 / (fStack_140 * fVar39 + fStack_130 * fVar32 +
                       fStack_120 * extraout_s2 + fStack_110);
        fVar33 = fVar23 + fVar21 * (fStack_144 * fVar39 + fStack_134 * fVar32 +
                                   fStack_124 * extraout_s2 + fStack_114) * fVar34;
        fVar39 = ((fVar22 - fVar20 * (fVar39 * fStack_148 + fVar32 * fStack_138 +
                                     extraout_s2 * fStack_128 + fStack_118) * fVar34) / fVar25) *
                 2.0 + -1.0;
        fVar32 = (fVar33 / fVar24) * 2.0 + -1.0;
        fVar29 = -fVar32;
        fVar30 = fVar29;
        FUN_10a8b40c0(lStack_108,lStack_100,&UNK_10e4e11c4,1,auStack_188);
        fVar34 = fVar33;
        fVar31 = fVar30;
        FUN_10a8b40c0(lStack_108,lStack_100,&UNK_10e4e11c8,1,auStack_188);
        uVar18 = NEON_fmov(0x3f800000,4);
        fVar35 = (float)uVar18 / (fVar28 + extraout_s2_01 + fVar31 * 0.0 + fVar34 * 0.0);
        fVar37 = (float)((ulong)uVar18 >> 0x20) /
                 (fVar28 + extraout_s2_00 + fVar30 * 0.0 + fVar33 * 0.0);
        auVar36 = NEON_fmov(0x4000000000000000,8);
        auVar38 = NEON_fmov(0xbff0000000000000,8);
        fVar28 = (float)(auVar38._8_8_ +
                        auVar36._8_8_ *
                        (double)((fVar23 + fVar37 * (fVar33 + fVar30 * 0.0 +
                                                    fVar27 + extraout_s2_00 * 0.0) * fVar21) /
                                fVar24));
        fVar20 = (fVar25 / fVar24) *
                 ((float)(auVar38._8_8_ +
                         auVar36._8_8_ *
                         (double)((fVar22 - fVar37 * (fVar30 + fVar33 * 0.0 +
                                                     fVar26 + extraout_s2_00 * 0.0) * fVar20) /
                                 fVar25)) -
                 (float)(auVar38._0_8_ +
                        auVar36._0_8_ *
                        (double)((fVar22 - fVar35 * (fVar31 + fVar34 * 0.0 +
                                                    fVar26 + extraout_s2_01 * 0.0) * fVar20) /
                                fVar25)));
        _hypotf(fVar20,CONCAT44(fVar28 - fVar28,
                                (float)(auVar38._0_8_ +
                                       auVar36._0_8_ *
                                       (double)((fVar23 + fVar35 * (fVar34 + fVar31 * 0.0 +
                                                                   fVar27 + extraout_s2_01 * 0.0) *
                                                                   fVar21) / fVar24)) - fVar28));
        fVar21 = (fVar24 / fVar25) * fVar20 * *(float *)((long)puVar12 + 0x10);
        lVar16 = *param_3;
        fVar29 = fVar29 - fVar20 * *(float *)((long)puVar12 + 0x14);
        fVar32 = fVar20 * *(float *)((long)puVar12 + 0x14) - fVar32;
        *(ulong *)(lVar16 + 0x2c) =
             CONCAT17((char)((uint)fVar32 >> 0x18),
                      CONCAT16((char)((uint)fVar32 >> 0x10),
                               CONCAT15((char)((uint)fVar32 >> 8),
                                        CONCAT14(SUB41(fVar32,0),fVar21 + fVar39))));
        *(ulong *)(lVar16 + 0x24) =
             CONCAT17((char)((uint)fVar29 >> 0x18),
                      CONCAT16((char)((uint)fVar29 >> 0x10),
                               CONCAT15((char)((uint)fVar29 >> 8),
                                        CONCAT14(SUB41(fVar29,0),fVar39 - fVar21))));
        fVar24 = (fVar40 - fVar7) - fStack_120;
        fVar21 = (fVar7 - fVar40) - fStack_120;
        fVar22 = (fStack_120 - fVar40) - fVar7;
        fVar23 = fVar40 + fVar7 + fStack_120;
        fVar20 = fVar24;
        if (fVar24 <= fVar23) {
          fVar20 = fVar23;
        }
        bVar3 = 2;
        if (fVar21 <= fVar20) {
          fVar21 = fVar20;
          bVar3 = fVar23 < fVar24;
        }
        bVar4 = 3;
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
          bVar4 = bVar3;
        }
        fVar20 = SQRT(fVar22 + 1.0) * 0.5;
        fVar21 = 0.25 / fVar20;
        if (bVar4 < 2) {
          fVar23 = fVar20;
          fVar24 = fVar41 - fVar6;
          fVar39 = fVar9 - fVar5;
          fVar22 = (fVar8 - fStack_124) * fVar21;
          if (bVar4 != 0) {
            fVar23 = (fVar8 - fStack_124) * fVar21;
            fVar24 = fVar5 + fVar9;
            fVar39 = fVar41 + fVar6;
            fVar22 = fVar20;
          }
          fVar24 = fVar24 * fVar21;
          fVar20 = fVar39 * fVar21;
        }
        else {
          fVar22 = fVar41 + fVar6;
          if (bVar4 != 2) {
            fVar22 = fVar5 + fVar9;
          }
          fVar22 = fVar22 * fVar21;
          fVar24 = (fVar8 + fStack_124) * fVar21;
          fVar23 = (fVar9 - fVar5) * fVar21;
          if (bVar4 != 2) {
            fVar24 = fVar20;
            fVar23 = (fVar41 - fVar6) * fVar21;
            fVar20 = (fVar8 + fStack_124) * fVar21;
          }
        }
        fVar39 = fVar24 * fVar23 + fVar20 * fVar22;
        fVar39 = fVar39 + fVar39;
        fVar32 = ABS(fVar39);
        fVar21 = 0.0;
        bVar11 = false;
        bVar10 = true;
        if (ABS(((fVar22 * fVar22 + fVar23 * fVar23) - fVar20 * fVar20) - fVar24 * fVar24) <=
            1.1920929e-07) {
          bVar11 = false;
          bVar10 = true;
          if (!NAN(fVar32)) {
            bVar11 = fVar32 == 1.1920929e-07;
            bVar10 = 1.1920929e-07 <= fVar32;
          }
        }
        if (bVar10 && !bVar11) {
          fVar21 = fVar39;
          _atan2f();
        }
        *(float *)(param_3 + 2) = -fVar21;
        if (lStack_108 != 0) {
          lStack_100 = lStack_108;
          __ZdlPv(lStack_108);
        }
        return (undefined4 *)(undefined1 *)0x1;
      }
    }
    else {
      do {
        if ((*piVar19 == 0) && (piVar19[1] == *(int *)((long)puVar12 + 0xc))) goto LAB_10a8b3b58;
        piVar19 = piVar19 + 0x88;
      } while (piVar19 != piVar2);
    }
  }
  return (undefined4 *)(undefined1 *)0x0;
}



/* Entry: 10a8b3aec; end: 10a8b40bf;  */

undefined8 FUN_10a8b3aec(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float extraout_s2;
  float fVar32;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_108 [64];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  
  lVar14 = *(long *)(param_2 + 0x68);
  if (lVar14 != 0) {
    piVar17 = *(int **)(lVar14 + 0x28);
    piVar2 = *(int **)(lVar14 + 0x30);
    if (piVar17 == piVar2) {
LAB_10a8b3b58:
      if ((piVar17 != piVar2 && piVar17 != (int *)0x0) && (*(long *)(piVar17 + 0x72) != 0)) {
        fVar18 = *(float *)(param_2 + 0x1ac);
        fVar19 = *(float *)(param_2 + 0x1b0);
        fVar20 = *(float *)(param_2 + 0x1b4);
        fVar21 = *(float *)(param_2 + 0x1b8);
        uVar12 = param_2 + 0x198;
        FUN_10a0ec6f0();
        uVar16 = *(undefined8 *)(param_2 + 0x19c);
        func_0x0001096b9684(&lStack_88,piVar17 + 0x70);
        lVar14 = *(long *)(piVar17 + 0x72);
        fStack_c8 = *(float *)(lVar14 + 0x30);
        fStack_b8 = *(float *)(lVar14 + 0x34);
        fStack_a8 = *(float *)(lVar14 + 0x38);
        fStack_98 = *(float *)(lVar14 + 0x3c);
        fStack_c4 = *(float *)(lVar14 + 0x40);
        fStack_b4 = *(float *)(lVar14 + 0x44);
        fStack_a4 = *(float *)(lVar14 + 0x48);
        fStack_94 = *(float *)(lVar14 + 0x4c);
        fStack_c0 = *(float *)(lVar14 + 0x50);
        fStack_b0 = *(float *)(lVar14 + 0x54);
        fStack_a0 = *(float *)(lVar14 + 0x58);
        fStack_90 = *(float *)(lVar14 + 0x5c);
        uStack_bc = 0;
        uStack_ac = 0;
        uStack_9c = 0;
        uStack_8c = 0x3f800000;
        func_0x0001094f5708(auStack_108,&fStack_c8);
        bVar11 = (uVar12 & 1) != 0;
        iVar13 = (int)((ulong)uVar16 >> 0x20);
        iVar15 = (int)uVar16;
        iVar1 = iVar13;
        if (bVar11) {
          iVar1 = iVar15;
        }
        fVar22 = (float)iVar1;
        if (bVar11) {
          iVar15 = iVar13;
        }
        fVar23 = (float)iVar15;
        fVar37 = *(float *)(lVar14 + 0x3c) * 0.0;
        fVar38 = *(float *)(lVar14 + 0x4c) * 0.0;
        fVar39 = *(float *)(lVar14 + 0x5c) * 0.0;
        fVar30 = fVar37 + *(float *)(lVar14 + 0x4c) + fVar39;
        fVar24 = *(float *)(lVar14 + 0x3c) + fVar38 + fVar39 + 0.0;
        fVar25 = fVar30 + 0.0;
        fVar26 = *(float *)(lVar14 + 0x5c) + fVar37 + fVar38 + 0.0;
        fVar37 = fVar26;
        FUN_10a8b40c0(lStack_88,lStack_80,&UNK_10e4e1138,1,auStack_108);
        FUN_10a8b40c0(lStack_88,lStack_80,&UNK_10e4e113c,0x22,auStack_108);
        fVar9 = fStack_a8;
        fVar8 = fStack_b0;
        fVar7 = fStack_b4;
        fVar6 = fStack_b8;
        fVar5 = fStack_c0;
        fVar39 = fStack_c4;
        fVar38 = fStack_c8;
        fVar32 = 1.0 / (fStack_c0 * fVar37 + fStack_b0 * fVar30 +
                       fStack_a0 * extraout_s2 + fStack_90);
        fVar31 = fVar21 + fVar19 * (fStack_c4 * fVar37 + fStack_b4 * fVar30 +
                                   fStack_a4 * extraout_s2 + fStack_94) * fVar32;
        fVar37 = ((fVar20 - fVar18 * (fVar37 * fStack_c8 + fVar30 * fStack_b8 +
                                     extraout_s2 * fStack_a8 + fStack_98) * fVar32) / fVar23) * 2.0
                 + -1.0;
        fVar30 = (fVar31 / fVar22) * 2.0 + -1.0;
        fVar27 = -fVar30;
        fVar28 = fVar27;
        FUN_10a8b40c0(lStack_88,lStack_80,&UNK_10e4e11c4,1,auStack_108);
        fVar32 = fVar31;
        fVar29 = fVar28;
        FUN_10a8b40c0(lStack_88,lStack_80,&UNK_10e4e11c8,1,auStack_108);
        uVar16 = NEON_fmov(0x3f800000,4);
        fVar33 = (float)uVar16 / (fVar26 + extraout_s2_01 + fVar29 * 0.0 + fVar32 * 0.0);
        fVar35 = (float)((ulong)uVar16 >> 0x20) /
                 (fVar26 + extraout_s2_00 + fVar28 * 0.0 + fVar31 * 0.0);
        auVar34 = NEON_fmov(0x4000000000000000,8);
        auVar36 = NEON_fmov(0xbff0000000000000,8);
        fVar26 = (float)(auVar36._8_8_ +
                        auVar34._8_8_ *
                        (double)((fVar21 + fVar35 * (fVar31 + fVar28 * 0.0 +
                                                    fVar25 + extraout_s2_00 * 0.0) * fVar19) /
                                fVar22));
        fVar18 = (fVar23 / fVar22) *
                 ((float)(auVar36._8_8_ +
                         auVar34._8_8_ *
                         (double)((fVar20 - fVar35 * (fVar28 + fVar31 * 0.0 +
                                                     fVar24 + extraout_s2_00 * 0.0) * fVar18) /
                                 fVar23)) -
                 (float)(auVar36._0_8_ +
                        auVar34._0_8_ *
                        (double)((fVar20 - fVar33 * (fVar29 + fVar32 * 0.0 +
                                                    fVar24 + extraout_s2_01 * 0.0) * fVar18) /
                                fVar23)));
        _hypotf(fVar18,CONCAT44(fVar26 - fVar26,
                                (float)(auVar36._0_8_ +
                                       auVar34._0_8_ *
                                       (double)((fVar21 + fVar33 * (fVar32 + fVar29 * 0.0 +
                                                                   fVar25 + extraout_s2_01 * 0.0) *
                                                                   fVar19) / fVar22)) - fVar26));
        fVar19 = (fVar22 / fVar23) * fVar18 * *(float *)(param_1 + 0x10);
        fVar18 = fVar18 * *(float *)(param_1 + 0x14);
        lVar14 = *param_3;
        fVar27 = fVar27 - fVar18;
        fVar18 = fVar18 - fVar30;
        *(ulong *)(lVar14 + 0x2c) =
             CONCAT17((char)((uint)fVar18 >> 0x18),
                      CONCAT16((char)((uint)fVar18 >> 0x10),
                               CONCAT15((char)((uint)fVar18 >> 8),
                                        CONCAT14(SUB41(fVar18,0),fVar19 + fVar37))));
        *(ulong *)(lVar14 + 0x24) =
             CONCAT17((char)((uint)fVar27 >> 0x18),
                      CONCAT16((char)((uint)fVar27 >> 0x10),
                               CONCAT15((char)((uint)fVar27 >> 8),
                                        CONCAT14(SUB41(fVar27,0),fVar37 - fVar19))));
        fVar22 = (fVar38 - fVar7) - fStack_a0;
        fVar19 = (fVar7 - fVar38) - fStack_a0;
        fVar20 = (fStack_a0 - fVar38) - fVar7;
        fVar21 = fVar38 + fVar7 + fStack_a0;
        fVar18 = fVar22;
        if (fVar22 <= fVar21) {
          fVar18 = fVar21;
        }
        bVar3 = 2;
        if (fVar19 <= fVar18) {
          fVar19 = fVar18;
          bVar3 = fVar21 < fVar22;
        }
        bVar4 = 3;
        if (fVar20 <= fVar19) {
          fVar20 = fVar19;
          bVar4 = bVar3;
        }
        fVar18 = SQRT(fVar20 + 1.0) * 0.5;
        fVar19 = 0.25 / fVar18;
        if (bVar4 < 2) {
          fVar21 = fVar18;
          fVar22 = fVar39 - fVar6;
          fVar37 = fVar9 - fVar5;
          fVar20 = (fVar8 - fStack_a4) * fVar19;
          if (bVar4 != 0) {
            fVar21 = (fVar8 - fStack_a4) * fVar19;
            fVar22 = fVar5 + fVar9;
            fVar37 = fVar39 + fVar6;
            fVar20 = fVar18;
          }
          fVar22 = fVar22 * fVar19;
          fVar18 = fVar37 * fVar19;
        }
        else {
          fVar20 = fVar39 + fVar6;
          if (bVar4 != 2) {
            fVar20 = fVar5 + fVar9;
          }
          fVar20 = fVar20 * fVar19;
          fVar22 = (fVar8 + fStack_a4) * fVar19;
          fVar21 = (fVar9 - fVar5) * fVar19;
          if (bVar4 != 2) {
            fVar22 = fVar18;
            fVar21 = (fVar39 - fVar6) * fVar19;
            fVar18 = (fVar8 + fStack_a4) * fVar19;
          }
        }
        fVar37 = fVar22 * fVar21 + fVar18 * fVar20;
        fVar37 = fVar37 + fVar37;
        fVar30 = ABS(fVar37);
        fVar19 = 0.0;
        bVar11 = false;
        bVar10 = true;
        if (ABS(((fVar20 * fVar20 + fVar21 * fVar21) - fVar18 * fVar18) - fVar22 * fVar22) <=
            1.1920929e-07) {
          bVar11 = false;
          bVar10 = true;
          if (!NAN(fVar30)) {
            bVar11 = fVar30 == 1.1920929e-07;
            bVar10 = 1.1920929e-07 <= fVar30;
          }
        }
        if (bVar10 && !bVar11) {
          fVar19 = fVar37;
          _atan2f();
        }
        *(float *)(param_3 + 2) = -fVar19;
        if (lStack_88 != 0) {
          lStack_80 = lStack_88;
          __ZdlPv(lStack_88);
        }
        return 1;
      }
    }
    else {
      do {
        if ((*piVar17 == 0) && (piVar17[1] == *(int *)(param_1 + 0xc))) goto LAB_10a8b3b58;
        piVar17 = piVar17 + 0x88;
      } while (piVar17 != piVar2);
    }
  }
  return 0;
}



/* Entry: 10a8b40c0; end: 10a8b418b;  */

float FUN_10a8b40c0(long param_1,long param_2,int *param_3,ulong param_4,undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  if (param_4 == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar3 = (param_2 - param_1 >> 2) * -0x5555555555555555;
    lVar4 = param_4 << 2;
    fVar6 = 0.0;
    do {
      iVar1 = *param_3;
      if (uVar3 < (ulong)(long)iVar1 || uVar3 - (long)iVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8b418c);
        (*pcVar2)();
      }
      pfVar5 = (float *)(param_1 + (long)iVar1 * 0xc);
      fVar6 = fVar6 + (float)*param_5 * *pfVar5 + (float)param_5[2] * pfVar5[1] +
                      (float)param_5[6] + (float)param_5[4] * pfVar5[2];
      param_3 = param_3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  return fVar6 / (float)param_4;
}



/* Entry: 10a8b418c; end: 10a8b43af;  */

void FUN_10a8b418c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fab5;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fac3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fad0;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f56edd5;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fadf;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67faf4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fb08;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67fb16;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8b43b0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8b43b0; end: 10a8b4453;  */

undefined8 * FUN_10a8b43b0(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8b4454);
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



/* Entry: 10a8b4454; end: 10a8b445b;  */

void FUN_10a8b4454(void)

{
  return;
}



/* Entry: 10a8b445c; end: 10a8b44fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_10a8b445c(float param_1,float param_2,long param_3,long param_4,long *param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  float *pfVar16;
  float *pfVar17;
  ulong uVar18;
  int *piVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 auStack_1b8 [16];
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [16];
  float fStack_120;
  float fStack_11c;
  long alStack_118 [3];
  undefined4 auStack_80 [14];
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  long lStack_28;
  
  puVar11 = auStack_80;
  puVar8 = auStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_80[0] = *(undefined4 *)(param_3 + 0xc);
  uStack_48 = 0;
  uStack_40 = 8;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0xffffffff;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_10a4c3ba4(param_4 + 0x58);
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar8;
  }
  ___stack_chk_fail();
  FUN_10a22d0f8(auStack_80);
  __Unwind_Resume();
  lVar14 = *(long *)((long)puVar11 + 0x68);
  if (lVar14 == 0) {
    return (undefined4 *)(undefined1 *)0x0;
  }
  piVar19 = *(int **)(lVar14 + 0x28);
  piVar15 = *(int **)(lVar14 + 0x30);
  if (piVar19 != piVar15) {
    while ((*piVar19 != 0 || (piVar19[1] != *(int *)((long)puVar8 + 0xc)))) {
      piVar19 = piVar19 + 0x88;
      if (piVar19 == piVar15) {
        return (undefined4 *)(undefined1 *)0x0;
      }
    }
  }
  if (piVar19 == piVar15 || piVar19 == (int *)0x0) {
    return (undefined4 *)(undefined1 *)0x0;
  }
  puVar9 = (undefined1 *)0x0;
  alStack_118[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = piVar19[0x62];
  iVar3 = piVar19[99];
  iVar4 = *(int *)((long)puVar8 + 8);
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      uVar22 = *(undefined8 *)(piVar19 + 6);
      uVar12 = *(undefined8 *)(piVar19 + 8);
      uVar13 = 0;
LAB_10a8b476c:
      FUN_10a8b4f94(puVar8,uVar22,uVar12,param_5,param_6,uVar13);
      goto LAB_10a8b4ce8;
    }
    if (iVar4 == 1) {
      uVar22 = *(undefined8 *)(piVar19 + 6);
      uVar12 = *(undefined8 *)(piVar19 + 8);
      uVar13 = 1;
      goto LAB_10a8b476c;
    }
    if (iVar4 != 2) goto LAB_10a8b4d5c;
    FUN_10a8b4eac(*(undefined8 *)(piVar19 + 6),*(undefined8 *)(piVar19 + 8),uRam00000001137ebdd8,
                  uRam00000001137ebddc);
    fVar20 = param_2;
    fVar23 = param_1;
    FUN_10a8b4eac(*(undefined8 *)(piVar19 + 6),*(undefined8 *)(piVar19 + 8),uRam00000001137ebde0,
                  uRam00000001137ebde4);
    lVar14 = *(long *)(piVar19 + 6);
    if (0x1b0 < (ulong)(*(long *)(piVar19 + 8) - lVar14)) {
      fVar27 = (param_2 + fVar20) * 0.5;
      fVar28 = (param_1 + fVar23) * 0.5;
      fVar24 = fVar28 - (*(float *)(lVar14 + 0x1b0) + *(float *)(lVar14 + 0x180)) * 0.5;
      fVar25 = fVar27 - (*(float *)(lVar14 + 0x1b4) + *(float *)(lVar14 + 0x184)) * 0.5;
      fVar20 = (param_2 - fVar20) + fVar24;
      _atan2f(fVar20,(param_1 - fVar23) - fVar25);
      *(float *)(param_5 + 2) = fVar20;
      fVar28 = fVar28 - fVar24 * *(float *)((long)puVar8 + 0x24);
      fVar27 = fVar27 - fVar25 * *(float *)((long)puVar8 + 0x24);
      fVar20 = (float)*(undefined8 *)(piVar19 + 0x46);
      fVar23 = (float)((ulong)*(undefined8 *)(piVar19 + 0x46) >> 0x20);
      fVar20 = SQRT(fVar20 * fVar20 + fVar23 * fVar23 + (float)piVar19[0x48] * (float)piVar19[0x48])
      ;
      fVar23 = *(float *)((long)puVar8 + 0x10) * fVar20;
      fVar20 = *(float *)((long)puVar8 + 0x14) * fVar20;
      fVar24 = fVar27 - fVar20;
      fVar27 = fVar27 + fVar20;
      lVar14 = *param_5;
      *(ulong *)(lVar14 + 0x2c) =
           CONCAT17((char)((uint)fVar24 >> 0x18),
                    CONCAT16((char)((uint)fVar24 >> 0x10),
                             CONCAT15((char)((uint)fVar24 >> 8),
                                      CONCAT14(SUB41(fVar24,0),fVar28 + fVar23))));
      *(ulong *)(lVar14 + 0x24) =
           CONCAT17((char)((uint)fVar27 >> 0x18),
                    CONCAT16((char)((uint)fVar27 >> 0x10),
                             CONCAT15((char)((uint)fVar27 >> 8),
                                      CONCAT14(SUB41(fVar27,0),fVar28 - fVar23))));
      goto LAB_10a8b4ce8;
    }
LAB_10a8b4da0:
    FUN_10a8d3e80();
  }
  else {
    if (iVar4 == 3) {
      puStack_178 = (undefined8 *)0xc0000000bf000000;
      uStack_180 = (undefined8 *)0xc00000003f000000;
      uStack_170 = 0;
      FUN_10a8b540c(piVar19 + 2,param_5,&uStack_180);
LAB_10a8b4ce8:
      fVar20 = *(float *)(*param_5 + 0x24);
      *(float *)(*param_5 + 0x24) = (fVar20 + fVar20) / (float)iVar2 + -1.0;
      fVar20 = *(float *)(*param_5 + 0x2c);
      *(float *)(*param_5 + 0x2c) = (fVar20 + fVar20) / (float)iVar2 + -1.0;
      fVar20 = *(float *)(*param_5 + 0x28);
      *(float *)(*param_5 + 0x28) = 1.0 - (fVar20 + fVar20) / (float)iVar3;
      fVar20 = *(float *)(*param_5 + 0x30);
      *(float *)(*param_5 + 0x30) = 1.0 - (fVar20 + fVar20) / (float)iVar3;
      puVar9 = (undefined1 *)0x1;
LAB_10a8b4d5c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_118[0]) {
        return (undefined4 *)puVar9;
      }
      ___stack_chk_fail(puVar9);
      goto LAB_10a8b4da0;
    }
    if (iVar4 == 4) {
      puStack_178 = (undefined8 *)0xbfc00000bf000000;
      uStack_180 = (undefined8 *)0xbfc000003f000000;
      uStack_170 = 0x3e2aaaab00000000;
      FUN_10a8b540c(piVar19 + 2,param_5,&uStack_180);
      goto LAB_10a8b4ce8;
    }
    if (iVar4 != 6) goto LAB_10a8b4d5c;
    lVar14 = *(long *)(piVar19 + 6);
    lVar1 = *(long *)(piVar19 + 8);
    FUN_10a0ee900(&uStack_180,&UNK_10f67fb1f,0x25);
    puStack_200 = (undefined8 *)(long)uStack_170._7_1_;
    if ((long)puStack_200 < 0) {
      uStack_208 = uStack_180;
      puStack_200 = puStack_178;
      if (0x250 < (ulong)(lVar1 - lVar14)) {
        __ZdlPv();
        goto LAB_10a8b47b4;
      }
    }
    else {
      uStack_208 = &uStack_180;
      if (0x250 < (ulong)(lVar1 - lVar14)) {
LAB_10a8b47b4:
        *(int **)(param_6 + 2) = *(int **)param_6;
        pfVar16 = *(float **)(piVar19 + 6);
        pfVar17 = pfVar16 + 0x88;
        piVar15 = *(int **)param_6;
        do {
          fVar20 = pfVar16[1];
          uStack_180 = (undefined8 *)CONCAT44((int)fVar20,(int)*pfVar16);
          if (piVar15 < *(int **)(param_6 + 4)) {
            piVar10 = piVar15 + 2;
            *piVar15 = (int)*pfVar16;
            piVar15[1] = (int)fVar20;
          }
          else {
            piVar10 = param_6;
            func_0x0001092e7794(param_6,&uStack_180);
          }
          *(int **)(param_6 + 2) = piVar10;
          pfVar16 = pfVar16 + 2;
          piVar15 = piVar10;
        } while (pfVar16 != pfVar17);
        pfVar16 = *(float **)(piVar19 + 8);
        for (pfVar17 = (float *)(*(long *)(piVar19 + 6) + 600); pfVar17 != pfVar16;
            pfVar17 = pfVar17 + 2) {
          fVar20 = pfVar17[1];
          uStack_180 = (undefined8 *)CONCAT44((int)fVar20,(int)*pfVar17);
          if (piVar10 < *(int **)(param_6 + 4)) {
            piVar19 = piVar10 + 2;
            *piVar10 = (int)*pfVar17;
            piVar10[1] = (int)fVar20;
          }
          else {
            piVar19 = param_6;
            func_0x0001092e7794(param_6,&uStack_180);
          }
          *(int **)(param_6 + 2) = piVar19;
          piVar10 = piVar19;
        }
        piVar19 = *(int **)param_6;
        lVar14 = (long)piVar10 - (long)piVar19;
        uVar18 = lVar14 >> 3;
        if (uVar18 < 0x2b) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        if (uVar18 < 0x2e) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        dVar21 = (double)((int)(long)(float)(int)((float)(piVar19[0x5b] + piVar19[0x55]) / 2.0) -
                         (int)(long)(float)(int)((float)(piVar19[0x4f] + piVar19[0x49]) / 2.0));
        _atan2(dVar21,(double)((int)(long)(float)(int)((float)(piVar19[0x5a] + piVar19[0x54]) / 2.0)
                              - (int)(long)(float)(int)((float)(piVar19[0x4e] + piVar19[0x48]) / 2.0
                                                       )));
        *(float *)(param_5 + 2) = (float)dVar21;
        puStack_250 = (undefined8 *)0x0;
        puStack_248 = (undefined8 *)0x0;
        uStack_240 = 0;
        puVar26 = puStack_250;
        if (piVar10 != piVar19) {
          FUN_10a4f94d4(&puStack_250,uVar18);
          puVar26 = puStack_248;
          _bzero(puStack_248,lVar14);
          puStack_248 = (undefined8 *)((long)puVar26 + lVar14);
          piVar19 = *(int **)param_6;
          piVar10 = *(int **)(param_6 + 2);
          puVar26 = puStack_250;
        }
        while (piVar19 != piVar10) {
          uVar22 = NEON_scvtf(*(undefined8 *)piVar19,4);
          *puVar26 = uVar22;
          piVar19 = piVar19 + 2;
          puVar26 = puVar26 + 1;
        }
        lStack_268 = 0;
        lStack_260 = 0;
        uStack_258 = 0;
        FUN_10a4f9464(&lStack_268,puStack_250,puStack_248,(long)puStack_248 - (long)puStack_250 >> 3
                     );
        fVar20 = *(float *)(param_5 + 2);
        uStack_208 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_180,(double)(fVar20 * 57.29578),0x3ff0000000000000,&uStack_208);
        FUN_10a8b5358(&uStack_198,&lStack_268,&uStack_180);
        uStack_1f8 = 0;
        uStack_208 = (undefined8 *)CONCAT44(uStack_208._4_4_,0x8103000d);
        puStack_200 = &uStack_198;
        func_0x000109b42928(&iStack_1a8,&uStack_208);
        uStack_220 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_208,(double)(fVar20 * -57.29578),0x3ff0000000000000,&uStack_220)
        ;
        fStack_120 = (float)(int)(long)(double)(long)((double)(iStack_1a0 + iStack_1a8 * 2) / 2.0);
        fStack_11c = (float)(int)(long)(double)(long)((double)(iStack_19c + iStack_1a4 * 2) / 2.0);
        lStack_230 = 0;
        uStack_228 = 0;
        lStack_238 = 0;
        FUN_10a6c1720(&lStack_238,&fStack_120,alStack_118,1);
        FUN_10a8b5358(&uStack_220,&lStack_238,&uStack_208);
        if (uStack_218 == uStack_220) goto LAB_10a8b4dbc;
        puVar26 = (undefined8 *)*uStack_220;
        uStack_218 = uStack_220;
        __ZdlPv();
        if (lStack_238 != 0) {
          lStack_230 = lStack_238;
          __ZdlPv();
        }
        if (lStack_1d0 != 0) {
          piVar19 = (int *)(lStack_1d0 + 0x14);
          do {
            iVar4 = *piVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_208);
          }
        }
        lStack_1d0 = 0;
        uStack_1f0 = 0;
        uStack_1f8 = 0;
        uStack_1e0 = 0;
        uStack_1e8 = 0;
        if (0 < uStack_208._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(lStack_1c8 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_208._4_4_);
        }
        if (puStack_1c0 != auStack_1b8 && puStack_1c0 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1c0 + -8));
        }
        if (CONCAT44(uStack_198._4_4_,(undefined4)uStack_198) != 0) {
          __ZdlPv();
        }
        if (lStack_148 != 0) {
          piVar19 = (int *)(lStack_148 + 0x14);
          do {
            iVar4 = *piVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_180);
          }
        }
        lStack_148 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        if (0 < uStack_180._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(lStack_140 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_180._4_4_);
        }
        if (puStack_138 != auStack_130 && puStack_138 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_138 + -8));
        }
        if (lStack_268 != 0) {
          lStack_260 = lStack_268;
          __ZdlPv();
        }
        uStack_208 = puVar26;
        func_0x000109b1f55c(&uStack_180,(double)(*(float *)(param_5 + 2) * 57.29578),
                            0x3ff0000000000000,&uStack_208);
        FUN_10a8b5358(&uStack_208,&puStack_250,&uStack_180);
        uStack_188 = 0;
        uStack_198._0_4_ = 0x8103000d;
        puStack_190 = &uStack_208;
        func_0x000109b42928(&uStack_220,&uStack_198);
        fVar23 = *(float *)((long)puVar8 + 0x1c);
        fVar27 = (float)(uStack_218._4_4_ + uStack_220._4_4_) - (float)uStack_220._4_4_;
        fVar20 = ((float)((int)uStack_218 + (int)uStack_220) - (float)(int)uStack_220) *
                 *(float *)((long)puVar8 + 0x18);
        lVar14 = *param_5;
        *(ulong *)(lVar14 + 0x24) =
             CONCAT44(fVar27 * *(float *)((long)puVar8 + 0x20) +
                      (float)(uStack_218._4_4_ + uStack_220._4_4_),(float)(int)uStack_220 - fVar20);
        *(ulong *)(lVar14 + 0x2c) =
             CONCAT44((float)uStack_220._4_4_ - fVar27 * fVar23,
                      fVar20 + (float)((int)uStack_218 + (int)uStack_220));
        if (uStack_208 != (undefined8 *)0x0) {
          puStack_200 = uStack_208;
          __ZdlPv();
        }
        if (lStack_148 != 0) {
          piVar19 = (int *)(lStack_148 + 0x14);
          do {
            iVar4 = *piVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_180);
          }
        }
        lStack_148 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        if (0 < uStack_180._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(lStack_140 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_180._4_4_);
        }
        if (puStack_138 != auStack_130 && puStack_138 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_138 + -8));
        }
        if (puStack_250 != (undefined8 *)0x0) {
          puStack_248 = puStack_250;
          __ZdlPv();
        }
        goto LAB_10a8b4ce8;
      }
    }
  }
  FUN_10a0edfc4(&uStack_208);
LAB_10a8b4dbc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8b4dc0);
  (*pcVar7)();
}



/* Entry: 10a8b44fc; end: 10a8b4553;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10a8b44fc(float param_1,float param_2,long param_3,long param_4,long *param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  int *piVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [16];
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  float fStack_a0;
  float fStack_9c;
  long alStack_98 [3];
  
  lVar12 = *(long *)(param_4 + 0x68);
  if (lVar12 == 0) {
    return 0;
  }
  piVar17 = *(int **)(lVar12 + 0x28);
  piVar13 = *(int **)(lVar12 + 0x30);
  if (piVar17 != piVar13) {
    while ((*piVar17 != 0 || (piVar17[1] != *(int *)(param_3 + 0xc)))) {
      piVar17 = piVar17 + 0x88;
      if (piVar17 == piVar13) {
        return 0;
      }
    }
  }
  if (piVar17 == piVar13 || piVar17 == (int *)0x0) {
    return 0;
  }
  uVar8 = 0;
  alStack_98[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = piVar17[0x62];
  iVar3 = piVar17[99];
  iVar4 = *(int *)(param_3 + 8);
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      uVar8 = *(undefined8 *)(piVar17 + 6);
      uVar10 = *(undefined8 *)(piVar17 + 8);
      uVar11 = 0;
LAB_10a8b476c:
      FUN_10a8b4f94(param_3,uVar8,uVar10,param_5,param_6,uVar11);
      goto LAB_10a8b4ce8;
    }
    if (iVar4 == 1) {
      uVar8 = *(undefined8 *)(piVar17 + 6);
      uVar10 = *(undefined8 *)(piVar17 + 8);
      uVar11 = 1;
      goto LAB_10a8b476c;
    }
    if (iVar4 != 2) goto LAB_10a8b4d5c;
    FUN_10a8b4eac(*(undefined8 *)(piVar17 + 6),*(undefined8 *)(piVar17 + 8),uRam00000001137ebdd8,
                  uRam00000001137ebddc);
    fVar18 = param_2;
    fVar20 = param_1;
    FUN_10a8b4eac(*(undefined8 *)(piVar17 + 6),*(undefined8 *)(piVar17 + 8),uRam00000001137ebde0,
                  uRam00000001137ebde4);
    lVar12 = *(long *)(piVar17 + 6);
    if (0x1b0 < (ulong)(*(long *)(piVar17 + 8) - lVar12)) {
      fVar24 = (param_2 + fVar18) * 0.5;
      fVar25 = (param_1 + fVar20) * 0.5;
      fVar21 = fVar25 - (*(float *)(lVar12 + 0x1b0) + *(float *)(lVar12 + 0x180)) * 0.5;
      fVar22 = fVar24 - (*(float *)(lVar12 + 0x1b4) + *(float *)(lVar12 + 0x184)) * 0.5;
      fVar18 = (param_2 - fVar18) + fVar21;
      _atan2f(fVar18,(param_1 - fVar20) - fVar22);
      *(float *)(param_5 + 2) = fVar18;
      fVar25 = fVar25 - fVar21 * *(float *)(param_3 + 0x24);
      fVar24 = fVar24 - fVar22 * *(float *)(param_3 + 0x24);
      fVar18 = (float)*(undefined8 *)(piVar17 + 0x46);
      fVar20 = (float)((ulong)*(undefined8 *)(piVar17 + 0x46) >> 0x20);
      fVar18 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + (float)piVar17[0x48] * (float)piVar17[0x48])
      ;
      fVar20 = *(float *)(param_3 + 0x10) * fVar18;
      fVar18 = *(float *)(param_3 + 0x14) * fVar18;
      fVar21 = fVar24 - fVar18;
      fVar24 = fVar24 + fVar18;
      lVar12 = *param_5;
      *(ulong *)(lVar12 + 0x2c) =
           CONCAT17((char)((uint)fVar21 >> 0x18),
                    CONCAT16((char)((uint)fVar21 >> 0x10),
                             CONCAT15((char)((uint)fVar21 >> 8),
                                      CONCAT14(SUB41(fVar21,0),fVar25 + fVar20))));
      *(ulong *)(lVar12 + 0x24) =
           CONCAT17((char)((uint)fVar24 >> 0x18),
                    CONCAT16((char)((uint)fVar24 >> 0x10),
                             CONCAT15((char)((uint)fVar24 >> 8),
                                      CONCAT14(SUB41(fVar24,0),fVar25 - fVar20))));
      goto LAB_10a8b4ce8;
    }
LAB_10a8b4da0:
    FUN_10a8d3e80();
  }
  else {
    if (iVar4 == 3) {
      puStack_f8 = (undefined8 *)0xc0000000bf000000;
      uStack_100 = (undefined8 *)0xc00000003f000000;
      uStack_f0 = 0;
      FUN_10a8b540c(piVar17 + 2,param_5,&uStack_100);
LAB_10a8b4ce8:
      fVar18 = *(float *)(*param_5 + 0x24);
      *(float *)(*param_5 + 0x24) = (fVar18 + fVar18) / (float)iVar2 + -1.0;
      fVar18 = *(float *)(*param_5 + 0x2c);
      *(float *)(*param_5 + 0x2c) = (fVar18 + fVar18) / (float)iVar2 + -1.0;
      fVar18 = *(float *)(*param_5 + 0x28);
      *(float *)(*param_5 + 0x28) = 1.0 - (fVar18 + fVar18) / (float)iVar3;
      fVar18 = *(float *)(*param_5 + 0x30);
      *(float *)(*param_5 + 0x30) = 1.0 - (fVar18 + fVar18) / (float)iVar3;
      uVar8 = 1;
LAB_10a8b4d5c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_98[0]) {
        return uVar8;
      }
      ___stack_chk_fail(uVar8);
      goto LAB_10a8b4da0;
    }
    if (iVar4 == 4) {
      puStack_f8 = (undefined8 *)0xbfc00000bf000000;
      uStack_100 = (undefined8 *)0xbfc000003f000000;
      uStack_f0 = 0x3e2aaaab00000000;
      FUN_10a8b540c(piVar17 + 2,param_5,&uStack_100);
      goto LAB_10a8b4ce8;
    }
    if (iVar4 != 6) goto LAB_10a8b4d5c;
    lVar12 = *(long *)(piVar17 + 6);
    lVar1 = *(long *)(piVar17 + 8);
    FUN_10a0ee900(&uStack_100,&UNK_10f67fb1f,0x25);
    puStack_180 = (undefined8 *)(long)uStack_f0._7_1_;
    if ((long)puStack_180 < 0) {
      uStack_188 = uStack_100;
      puStack_180 = puStack_f8;
      if (0x250 < (ulong)(lVar1 - lVar12)) {
        __ZdlPv();
        goto LAB_10a8b47b4;
      }
    }
    else {
      uStack_188 = &uStack_100;
      if (0x250 < (ulong)(lVar1 - lVar12)) {
LAB_10a8b47b4:
        *(int **)(param_6 + 2) = *(int **)param_6;
        pfVar14 = *(float **)(piVar17 + 6);
        pfVar15 = pfVar14 + 0x88;
        piVar13 = *(int **)param_6;
        do {
          fVar18 = pfVar14[1];
          uStack_100 = (undefined8 *)CONCAT44((int)fVar18,(int)*pfVar14);
          if (piVar13 < *(int **)(param_6 + 4)) {
            piVar9 = piVar13 + 2;
            *piVar13 = (int)*pfVar14;
            piVar13[1] = (int)fVar18;
          }
          else {
            piVar9 = param_6;
            func_0x0001092e7794(param_6,&uStack_100);
          }
          *(int **)(param_6 + 2) = piVar9;
          pfVar14 = pfVar14 + 2;
          piVar13 = piVar9;
        } while (pfVar14 != pfVar15);
        pfVar14 = *(float **)(piVar17 + 8);
        for (pfVar15 = (float *)(*(long *)(piVar17 + 6) + 600); pfVar15 != pfVar14;
            pfVar15 = pfVar15 + 2) {
          fVar18 = pfVar15[1];
          uStack_100 = (undefined8 *)CONCAT44((int)fVar18,(int)*pfVar15);
          if (piVar9 < *(int **)(param_6 + 4)) {
            piVar17 = piVar9 + 2;
            *piVar9 = (int)*pfVar15;
            piVar9[1] = (int)fVar18;
          }
          else {
            piVar17 = param_6;
            func_0x0001092e7794(param_6,&uStack_100);
          }
          *(int **)(param_6 + 2) = piVar17;
          piVar9 = piVar17;
        }
        piVar17 = *(int **)param_6;
        lVar12 = (long)piVar9 - (long)piVar17;
        uVar16 = lVar12 >> 3;
        if (uVar16 < 0x2b) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        if (uVar16 < 0x2e) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        dVar19 = (double)((int)(long)(float)(int)((float)(piVar17[0x5b] + piVar17[0x55]) / 2.0) -
                         (int)(long)(float)(int)((float)(piVar17[0x4f] + piVar17[0x49]) / 2.0));
        _atan2(dVar19,(double)((int)(long)(float)(int)((float)(piVar17[0x5a] + piVar17[0x54]) / 2.0)
                              - (int)(long)(float)(int)((float)(piVar17[0x4e] + piVar17[0x48]) / 2.0
                                                       )));
        *(float *)(param_5 + 2) = (float)dVar19;
        puStack_1d0 = (undefined8 *)0x0;
        puStack_1c8 = (undefined8 *)0x0;
        uStack_1c0 = 0;
        puVar23 = puStack_1d0;
        if (piVar9 != piVar17) {
          FUN_10a4f94d4(&puStack_1d0,uVar16);
          puVar23 = puStack_1c8;
          _bzero(puStack_1c8,lVar12);
          puStack_1c8 = (undefined8 *)((long)puVar23 + lVar12);
          piVar17 = *(int **)param_6;
          piVar9 = *(int **)(param_6 + 2);
          puVar23 = puStack_1d0;
        }
        while (piVar17 != piVar9) {
          uVar8 = NEON_scvtf(*(undefined8 *)piVar17,4);
          *puVar23 = uVar8;
          piVar17 = piVar17 + 2;
          puVar23 = puVar23 + 1;
        }
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        uStack_1d8 = 0;
        FUN_10a4f9464(&lStack_1e8,puStack_1d0,puStack_1c8,(long)puStack_1c8 - (long)puStack_1d0 >> 3
                     );
        fVar18 = *(float *)(param_5 + 2);
        uStack_188 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_100,(double)(fVar18 * 57.29578),0x3ff0000000000000,&uStack_188);
        FUN_10a8b5358(&uStack_118,&lStack_1e8,&uStack_100);
        uStack_178 = 0;
        uStack_188 = (undefined8 *)CONCAT44(uStack_188._4_4_,0x8103000d);
        puStack_180 = &uStack_118;
        func_0x000109b42928(&iStack_128,&uStack_188);
        uStack_1a0 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_188,(double)(fVar18 * -57.29578),0x3ff0000000000000,&uStack_1a0)
        ;
        fStack_a0 = (float)(int)(long)(double)(long)((double)(iStack_120 + iStack_128 * 2) / 2.0);
        fStack_9c = (float)(int)(long)(double)(long)((double)(iStack_11c + iStack_124 * 2) / 2.0);
        lStack_1b0 = 0;
        uStack_1a8 = 0;
        lStack_1b8 = 0;
        FUN_10a6c1720(&lStack_1b8,&fStack_a0,alStack_98,1);
        FUN_10a8b5358(&uStack_1a0,&lStack_1b8,&uStack_188);
        if (uStack_198 == uStack_1a0) goto LAB_10a8b4dbc;
        puVar23 = (undefined8 *)*uStack_1a0;
        uStack_198 = uStack_1a0;
        __ZdlPv();
        if (lStack_1b8 != 0) {
          lStack_1b0 = lStack_1b8;
          __ZdlPv();
        }
        if (lStack_150 != 0) {
          piVar17 = (int *)(lStack_150 + 0x14);
          do {
            iVar4 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_188);
          }
        }
        lStack_150 = 0;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        if (0 < uStack_188._4_4_) {
          lVar12 = 0;
          do {
            *(undefined4 *)(lStack_148 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_188._4_4_);
        }
        if (puStack_140 != auStack_138 && puStack_140 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_140 + -8));
        }
        if (CONCAT44(uStack_118._4_4_,(undefined4)uStack_118) != 0) {
          __ZdlPv();
        }
        if (lStack_c8 != 0) {
          piVar17 = (int *)(lStack_c8 + 0x14);
          do {
            iVar4 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_100);
          }
        }
        lStack_c8 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (0 < uStack_100._4_4_) {
          lVar12 = 0;
          do {
            *(undefined4 *)(lStack_c0 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_100._4_4_);
        }
        if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b8 + -8));
        }
        if (lStack_1e8 != 0) {
          lStack_1e0 = lStack_1e8;
          __ZdlPv();
        }
        uStack_188 = puVar23;
        func_0x000109b1f55c(&uStack_100,(double)(*(float *)(param_5 + 2) * 57.29578),
                            0x3ff0000000000000,&uStack_188);
        FUN_10a8b5358(&uStack_188,&puStack_1d0,&uStack_100);
        uStack_108 = 0;
        uStack_118._0_4_ = 0x8103000d;
        puStack_110 = &uStack_188;
        func_0x000109b42928(&uStack_1a0,&uStack_118);
        fVar20 = *(float *)(param_3 + 0x1c);
        fVar24 = (float)(uStack_198._4_4_ + uStack_1a0._4_4_) - (float)uStack_1a0._4_4_;
        fVar18 = ((float)((int)uStack_198 + (int)uStack_1a0) - (float)(int)uStack_1a0) *
                 *(float *)(param_3 + 0x18);
        lVar12 = *param_5;
        *(ulong *)(lVar12 + 0x24) =
             CONCAT44(fVar24 * *(float *)(param_3 + 0x20) +
                      (float)(uStack_198._4_4_ + uStack_1a0._4_4_),(float)(int)uStack_1a0 - fVar18);
        *(ulong *)(lVar12 + 0x2c) =
             CONCAT44((float)uStack_1a0._4_4_ - fVar24 * fVar20,
                      fVar18 + (float)((int)uStack_198 + (int)uStack_1a0));
        if (uStack_188 != (undefined8 *)0x0) {
          puStack_180 = uStack_188;
          __ZdlPv();
        }
        if (lStack_c8 != 0) {
          piVar17 = (int *)(lStack_c8 + 0x14);
          do {
            iVar4 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_100);
          }
        }
        lStack_c8 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (0 < uStack_100._4_4_) {
          lVar12 = 0;
          do {
            *(undefined4 *)(lStack_c0 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_100._4_4_);
        }
        if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b8 + -8));
        }
        if (puStack_1d0 != (undefined8 *)0x0) {
          puStack_1c8 = puStack_1d0;
          __ZdlPv();
        }
        goto LAB_10a8b4ce8;
      }
    }
  }
  FUN_10a0edfc4(&uStack_188);
LAB_10a8b4dbc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8b4dc0);
  (*pcVar7)();
}



/* Entry: 10a8b4554; end: 10a8b4eab;  */

void FUN_10a8b4554(float param_1,float param_2,long param_3,long param_4,long *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [16];
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  float fStack_a0;
  float fStack_9c;
  long alStack_98 [3];
  
  uVar7 = 0;
  alStack_98[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_4 + 0x180);
  iVar2 = *(int *)(param_4 + 0x184);
  iVar3 = *(int *)(param_3 + 8);
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      uVar10 = 0;
LAB_10a8b476c:
      FUN_10a8b4f94(param_3,uVar7,uVar9,param_5,param_6,uVar10);
      goto LAB_10a8b4ce8;
    }
    if (iVar3 == 1) {
      uVar7 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      uVar10 = 1;
      goto LAB_10a8b476c;
    }
    if (iVar3 != 2) goto LAB_10a8b4d5c;
    FUN_10a8b4eac(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                  uRam00000001137ebdd8,uRam00000001137ebddc);
    fVar16 = param_2;
    fVar18 = param_1;
    FUN_10a8b4eac(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                  uRam00000001137ebde0,uRam00000001137ebde4);
    lVar11 = *(long *)(param_4 + 0x10);
    if (0x1b0 < (ulong)(*(long *)(param_4 + 0x18) - lVar11)) {
      fVar22 = (param_2 + fVar16) * 0.5;
      fVar23 = (param_1 + fVar18) * 0.5;
      fVar19 = fVar23 - (*(float *)(lVar11 + 0x1b0) + *(float *)(lVar11 + 0x180)) * 0.5;
      fVar20 = fVar22 - (*(float *)(lVar11 + 0x1b4) + *(float *)(lVar11 + 0x184)) * 0.5;
      fVar16 = (param_2 - fVar16) + fVar19;
      _atan2f(fVar16,(param_1 - fVar18) - fVar20);
      *(float *)(param_5 + 2) = fVar16;
      fVar23 = fVar23 - fVar19 * *(float *)(param_3 + 0x24);
      fVar22 = fVar22 - fVar20 * *(float *)(param_3 + 0x24);
      fVar16 = (float)*(undefined8 *)(param_4 + 0x110);
      fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 0x110) >> 0x20);
      fVar16 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 +
                    *(float *)(param_4 + 0x118) * *(float *)(param_4 + 0x118));
      fVar18 = *(float *)(param_3 + 0x10) * fVar16;
      fVar16 = *(float *)(param_3 + 0x14) * fVar16;
      fVar19 = fVar22 - fVar16;
      fVar22 = fVar22 + fVar16;
      lVar11 = *param_5;
      *(ulong *)(lVar11 + 0x2c) =
           CONCAT17((char)((uint)fVar19 >> 0x18),
                    CONCAT16((char)((uint)fVar19 >> 0x10),
                             CONCAT15((char)((uint)fVar19 >> 8),
                                      CONCAT14(SUB41(fVar19,0),fVar23 + fVar18))));
      *(ulong *)(lVar11 + 0x24) =
           CONCAT17((char)((uint)fVar22 >> 0x18),
                    CONCAT16((char)((uint)fVar22 >> 0x10),
                             CONCAT15((char)((uint)fVar22 >> 8),
                                      CONCAT14(SUB41(fVar22,0),fVar23 - fVar18))));
      goto LAB_10a8b4ce8;
    }
LAB_10a8b4da0:
    FUN_10a8d3e80();
  }
  else {
    if (iVar3 == 3) {
      puStack_f8 = (undefined8 *)0xc0000000bf000000;
      uStack_100 = (undefined8 *)0xc00000003f000000;
      uStack_f0 = 0;
      FUN_10a8b540c(param_4,param_5,&uStack_100);
LAB_10a8b4ce8:
      fVar16 = *(float *)(*param_5 + 0x24);
      *(float *)(*param_5 + 0x24) = (fVar16 + fVar16) / (float)iVar1 + -1.0;
      fVar16 = *(float *)(*param_5 + 0x2c);
      *(float *)(*param_5 + 0x2c) = (fVar16 + fVar16) / (float)iVar1 + -1.0;
      fVar16 = *(float *)(*param_5 + 0x28);
      *(float *)(*param_5 + 0x28) = 1.0 - (fVar16 + fVar16) / (float)iVar2;
      fVar16 = *(float *)(*param_5 + 0x30);
      *(float *)(*param_5 + 0x30) = 1.0 - (fVar16 + fVar16) / (float)iVar2;
      uVar7 = 1;
LAB_10a8b4d5c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_98[0]) {
        return;
      }
      ___stack_chk_fail(uVar7);
      goto LAB_10a8b4da0;
    }
    if (iVar3 == 4) {
      puStack_f8 = (undefined8 *)0xbfc00000bf000000;
      uStack_100 = (undefined8 *)0xbfc000003f000000;
      uStack_f0 = 0x3e2aaaab00000000;
      FUN_10a8b540c(param_4,param_5,&uStack_100);
      goto LAB_10a8b4ce8;
    }
    if (iVar3 != 6) goto LAB_10a8b4d5c;
    uVar12 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    FUN_10a0ee900(&uStack_100,&UNK_10f67fb1f,0x25);
    puStack_180 = (undefined8 *)(long)uStack_f0._7_1_;
    if ((long)puStack_180 < 0) {
      uStack_188 = uStack_100;
      puStack_180 = puStack_f8;
      if (0x250 < uVar12) {
        __ZdlPv();
        goto LAB_10a8b47b4;
      }
    }
    else {
      uStack_188 = &uStack_100;
      if (0x250 < uVar12) {
LAB_10a8b47b4:
        *(int **)(param_6 + 2) = *(int **)param_6;
        pfVar13 = *(float **)(param_4 + 0x10);
        pfVar14 = pfVar13 + 0x88;
        piVar15 = *(int **)param_6;
        do {
          fVar16 = pfVar13[1];
          uStack_100 = (undefined8 *)CONCAT44((int)fVar16,(int)*pfVar13);
          if (piVar15 < *(int **)(param_6 + 4)) {
            piVar8 = piVar15 + 2;
            *piVar15 = (int)*pfVar13;
            piVar15[1] = (int)fVar16;
          }
          else {
            piVar8 = param_6;
            func_0x0001092e7794(param_6,&uStack_100);
          }
          *(int **)(param_6 + 2) = piVar8;
          pfVar13 = pfVar13 + 2;
          piVar15 = piVar8;
        } while (pfVar13 != pfVar14);
        pfVar13 = *(float **)(param_4 + 0x18);
        for (pfVar14 = (float *)(*(long *)(param_4 + 0x10) + 600); pfVar14 != pfVar13;
            pfVar14 = pfVar14 + 2) {
          fVar16 = pfVar14[1];
          uStack_100 = (undefined8 *)CONCAT44((int)fVar16,(int)*pfVar14);
          if (piVar8 < *(int **)(param_6 + 4)) {
            piVar15 = piVar8 + 2;
            *piVar8 = (int)*pfVar14;
            piVar8[1] = (int)fVar16;
          }
          else {
            piVar15 = param_6;
            func_0x0001092e7794(param_6,&uStack_100);
          }
          *(int **)(param_6 + 2) = piVar15;
          piVar8 = piVar15;
        }
        piVar15 = *(int **)param_6;
        lVar11 = (long)piVar8 - (long)piVar15;
        uVar12 = lVar11 >> 3;
        if (uVar12 < 0x2b) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        if (uVar12 < 0x2e) {
          func_0x00010a8d3e94();
          goto LAB_10a8b4dbc;
        }
        dVar17 = (double)((int)(long)(float)(int)((float)(piVar15[0x5b] + piVar15[0x55]) / 2.0) -
                         (int)(long)(float)(int)((float)(piVar15[0x4f] + piVar15[0x49]) / 2.0));
        _atan2(dVar17,(double)((int)(long)(float)(int)((float)(piVar15[0x5a] + piVar15[0x54]) / 2.0)
                              - (int)(long)(float)(int)((float)(piVar15[0x4e] + piVar15[0x48]) / 2.0
                                                       )));
        *(float *)(param_5 + 2) = (float)dVar17;
        puStack_1d0 = (undefined8 *)0x0;
        puStack_1c8 = (undefined8 *)0x0;
        uStack_1c0 = 0;
        puVar21 = puStack_1d0;
        if (piVar8 != piVar15) {
          FUN_10a4f94d4(&puStack_1d0,uVar12);
          puVar21 = puStack_1c8;
          _bzero(puStack_1c8,lVar11);
          puStack_1c8 = (undefined8 *)((long)puVar21 + lVar11);
          piVar15 = *(int **)param_6;
          piVar8 = *(int **)(param_6 + 2);
          puVar21 = puStack_1d0;
        }
        while (piVar15 != piVar8) {
          uVar7 = NEON_scvtf(*(undefined8 *)piVar15,4);
          *puVar21 = uVar7;
          piVar15 = piVar15 + 2;
          puVar21 = puVar21 + 1;
        }
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        uStack_1d8 = 0;
        FUN_10a4f9464(&lStack_1e8,puStack_1d0,puStack_1c8,(long)puStack_1c8 - (long)puStack_1d0 >> 3
                     );
        fVar16 = *(float *)(param_5 + 2);
        uStack_188 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_100,(double)(fVar16 * 57.29578),0x3ff0000000000000,&uStack_188);
        FUN_10a8b5358(&uStack_118,&lStack_1e8,&uStack_100);
        uStack_178 = 0;
        uStack_188 = (undefined8 *)CONCAT44(uStack_188._4_4_,0x8103000d);
        puStack_180 = &uStack_118;
        func_0x000109b42928(&iStack_128,&uStack_188);
        uStack_1a0 = (undefined8 *)0x0;
        func_0x000109b1f55c(&uStack_188,(double)(fVar16 * -57.29578),0x3ff0000000000000,&uStack_1a0)
        ;
        fStack_a0 = (float)(int)(long)(double)(long)((double)(iStack_120 + iStack_128 * 2) / 2.0);
        fStack_9c = (float)(int)(long)(double)(long)((double)(iStack_11c + iStack_124 * 2) / 2.0);
        lStack_1b0 = 0;
        uStack_1a8 = 0;
        lStack_1b8 = 0;
        FUN_10a6c1720(&lStack_1b8,&fStack_a0,alStack_98,1);
        FUN_10a8b5358(&uStack_1a0,&lStack_1b8,&uStack_188);
        if (uStack_198 == uStack_1a0) goto LAB_10a8b4dbc;
        puVar21 = (undefined8 *)*uStack_1a0;
        uStack_198 = uStack_1a0;
        __ZdlPv();
        if (lStack_1b8 != 0) {
          lStack_1b0 = lStack_1b8;
          __ZdlPv();
        }
        if (lStack_150 != 0) {
          piVar15 = (int *)(lStack_150 + 0x14);
          do {
            iVar3 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_188);
          }
        }
        lStack_150 = 0;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        if (0 < uStack_188._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_148 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_188._4_4_);
        }
        if (puStack_140 != auStack_138 && puStack_140 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_140 + -8));
        }
        if (CONCAT44(uStack_118._4_4_,(undefined4)uStack_118) != 0) {
          __ZdlPv();
        }
        if (lStack_c8 != 0) {
          piVar15 = (int *)(lStack_c8 + 0x14);
          do {
            iVar3 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_100);
          }
        }
        lStack_c8 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (0 < uStack_100._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_c0 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_100._4_4_);
        }
        if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b8 + -8));
        }
        if (lStack_1e8 != 0) {
          lStack_1e0 = lStack_1e8;
          __ZdlPv();
        }
        uStack_188 = puVar21;
        func_0x000109b1f55c(&uStack_100,(double)(*(float *)(param_5 + 2) * 57.29578),
                            0x3ff0000000000000,&uStack_188);
        FUN_10a8b5358(&uStack_188,&puStack_1d0,&uStack_100);
        uStack_108 = 0;
        uStack_118._0_4_ = 0x8103000d;
        puStack_110 = &uStack_188;
        func_0x000109b42928(&uStack_1a0,&uStack_118);
        fVar18 = *(float *)(param_3 + 0x1c);
        fVar22 = (float)(uStack_198._4_4_ + uStack_1a0._4_4_) - (float)uStack_1a0._4_4_;
        fVar16 = ((float)((int)uStack_198 + (int)uStack_1a0) - (float)(int)uStack_1a0) *
                 *(float *)(param_3 + 0x18);
        lVar11 = *param_5;
        *(ulong *)(lVar11 + 0x24) =
             CONCAT44(fVar22 * *(float *)(param_3 + 0x20) +
                      (float)(uStack_198._4_4_ + uStack_1a0._4_4_),(float)(int)uStack_1a0 - fVar16);
        *(ulong *)(lVar11 + 0x2c) =
             CONCAT44((float)uStack_1a0._4_4_ - fVar22 * fVar18,
                      fVar16 + (float)((int)uStack_198 + (int)uStack_1a0));
        if (uStack_188 != (undefined8 *)0x0) {
          puStack_180 = uStack_188;
          __ZdlPv();
        }
        if (lStack_c8 != 0) {
          piVar15 = (int *)(lStack_c8 + 0x14);
          do {
            iVar3 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_100);
          }
        }
        lStack_c8 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (0 < uStack_100._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_c0 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_100._4_4_);
        }
        if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b8 + -8));
        }
        if (puStack_1d0 != (undefined8 *)0x0) {
          puStack_1c8 = puStack_1d0;
          __ZdlPv();
        }
        goto LAB_10a8b4ce8;
      }
    }
  }
  FUN_10a0edfc4(&uStack_188);
LAB_10a8b4dbc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8b4dc0);
  (*pcVar6)();
}



/* Entry: 10a8b4eac; end: 10a8b4f93;  */

float FUN_10a8b4eac(long param_1,long param_2,uint param_3,int param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 - param_1 >> 3;
  if ((ulong)(long)param_4 <= uVar3) {
    fVar6 = 0.0;
    if (param_4 - param_3 != 0 && (int)param_3 <= param_4) {
      uVar1 = 0;
      if ((ulong)(long)(int)param_3 <= uVar3) {
        uVar1 = uVar3 - (long)(int)param_3;
      }
      if (uVar1 <= param_4 + ~param_3) goto LAB_10a8b4f5c;
      lVar4 = (long)param_4 - (long)(int)param_3;
      fVar6 = 0.0;
      puVar5 = (undefined8 *)(param_1 + (long)(int)param_3 * 8);
      do {
        fVar6 = fVar6 + (float)*puVar5;
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
    }
    return fVar6 / (float)(int)(param_4 - param_3);
  }
  __ZNSt3__19to_stringEm(auStack_50,uVar3);
  FUN_109feb280(auStack_38,&UNK_10f56ee75,auStack_50);
  FUN_10a0029c0(auStack_38);
LAB_10a8b4f5c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8b4f60);
  (*pcVar2)();
}



/* Entry: 10a8b4f94; end: 10a8b5357;  */

void FUN_10a8b4f94(long param_1,float *param_2,float *param_3,long *param_4,float *param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 auStack_1a8 [2];
  float *pfStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [2];
  float *pfStack_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  float *pfStack_170;
  undefined8 uStack_168;
  float *pfStack_160;
  long lStack_158;
  undefined8 uStack_150;
  float *pfStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined4 auStack_130 [2];
  undefined8 *puStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  float fStack_f0;
  float fStack_ec;
  float *pfStack_e8;
  double *pdStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long alStack_a0 [2];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  pfVar7 = *(float **)param_5;
  *(float **)(param_5 + 2) = pfVar7;
  pfVar11 = param_3;
  pfVar8 = pfVar7;
  pfVar10 = param_2;
  if (param_2 != param_3) {
    do {
      fStack_f0 = (float)(int)*pfVar10;
      fStack_ec = (float)(int)pfVar10[1];
      if (pfVar7 < *(float **)(param_5 + 4)) {
        pfVar8 = pfVar7 + 2;
        *pfVar7 = fStack_f0;
        pfVar7[1] = fStack_ec;
      }
      else {
        param_2 = &fStack_f0;
        pfVar8 = param_5;
        func_0x0001092e7794();
      }
      *(float **)(param_5 + 2) = pfVar8;
      pfVar10 = pfVar10 + 2;
      pfVar7 = pfVar8;
    } while (pfVar10 != param_3);
    param_3 = pfVar11;
    pfVar8 = *(float **)param_5;
  }
  if ((ulong)((long)pfVar7 - (long)pfVar8) < 0x169) {
    func_0x00010a8d3e94();
    func_0x000104bd46a0();
    if (uStack_108 != (undefined8 *)0x0) {
      puStack_100 = uStack_108;
      __ZdlPv();
    }
    func_0x00010567aa40(&fStack_f0);
    pfVar10 = pfVar7;
    __Unwind_Resume();
    pcStack_138 = FUN_10a8b5358;
    pfVar10[0] = 0.0;
    pfVar10[1] = 0.0;
    pfVar10[2] = 0.0;
    pfVar10[3] = 0.0;
    pfVar10[4] = 0.0;
    pfVar10[5] = 0.0;
    pfStack_160 = param_5;
    lStack_158 = param_1;
    uStack_150 = param_6;
    pfStack_148 = pfVar7;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x0001093f458c();
    uStack_168 = 0;
    auStack_178[0] = 0x8103000d;
    auStack_190[0] = 0x8203000d;
    uStack_180 = 0;
    uStack_198 = 0;
    auStack_1a8[0] = 0x1010000;
    pfStack_1a0 = param_3;
    pfStack_188 = pfVar10;
    pfStack_170 = param_2;
    func_0x000109a6b6dc(auStack_178,auStack_190,auStack_1a8);
    return;
  }
  dVar16 = (double)((int)pfVar8[0x5b] - (int)pfVar8[0x49]);
  _atan2(dVar16,(double)((int)pfVar8[0x5a] - (int)pfVar8[0x48]));
  *(float *)(param_4 + 2) = (float)dVar16;
  pdStack_e0 = (double *)0x0;
  fStack_f0 = -2.4060934e-38;
  pfStack_e8 = param_5;
  func_0x000109b42928(&iStack_90,&fStack_f0);
  uStack_108 = (undefined8 *)
               CONCAT44((float)(int)(long)(double)(long)((double)(iStack_84 + iStack_8c * 2) / 2.0),
                        (float)(int)(long)(double)(long)((double)(iStack_88 + iStack_90 * 2) / 2.0))
  ;
  func_0x000109b1f55c(&fStack_f0,(double)(*(float *)(param_4 + 2) * 57.29578),0x3ff0000000000000,
                      &uStack_108);
  uStack_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  func_0x0001092c8954(&uStack_108,*(long *)(param_5 + 2) - *(long *)param_5 >> 3);
  piVar15 = *(int **)param_5;
  piVar2 = *(int **)(param_5 + 2);
  if (piVar15 != piVar2) {
    dVar16 = *pdStack_e0;
    dVar19 = pdStack_e0[1];
    dVar20 = pdStack_e0[2];
    pdVar1 = (double *)((long)pdStack_e0 + *plStack_a8);
    dVar21 = *pdVar1;
    dVar22 = pdVar1[1];
    dVar23 = pdVar1[2];
    do {
      auStack_130[0] =
           (undefined4)
           (long)(double)(long)(dVar20 + dVar19 * (double)piVar15[1] + dVar16 * (double)*piVar15);
      iStack_118 = (int)(long)(double)(long)(dVar23 + dVar22 * (double)piVar15[1] +
                                                      dVar21 * (double)*piVar15);
      if (puStack_100 < puStack_f8) {
        puVar9 = puStack_100 + 1;
        *(undefined4 *)puStack_100 = auStack_130[0];
        *(int *)((long)puStack_100 + 4) = iStack_118;
      }
      else {
        puVar9 = &uStack_108;
        FUN_109fff0e8(puVar9,auStack_130,&iStack_118);
      }
      piVar15 = piVar15 + 2;
      puStack_100 = puVar9;
    } while (piVar15 != piVar2);
  }
  auStack_130[0] = 0x8103000c;
  puStack_128 = &uStack_108;
  uStack_120 = 0;
  func_0x000109b42928(&iStack_118,auStack_130);
  iVar12 = (int)((*(float *)(param_1 + 0x14) + -1.0) * (float)iStack_10c * 0.5);
  iVar13 = (int)((*(float *)(param_1 + 0x10) + -1.0) * (float)iStack_110 * 0.5);
  iVar5 = iStack_118 - iVar13;
  iStack_114 = iStack_114 - iVar12;
  iStack_110 = iStack_110 + iVar13 * 2;
  iStack_10c = iStack_10c + iVar12 * 2;
  iVar12 = iVar5;
  iVar13 = iStack_114 - ((uint)(iStack_110 - iStack_10c) >> 1);
  iVar6 = iStack_110;
  if (iStack_110 <= iStack_10c) {
    iVar12 = iVar5 - ((uint)(iStack_10c - iStack_110) >> 1);
    iVar13 = iStack_114;
    iVar6 = iStack_10c;
  }
  if ((int)param_6 != 0) {
    iVar5 = iVar12;
    iStack_114 = iVar13;
    iStack_110 = iVar6;
    iStack_10c = iVar6;
  }
  lVar14 = *param_4;
  uVar17 = NEON_scvtf(CONCAT44(iVar5 + iStack_110,iVar5),4);
  uVar18 = NEON_scvtf(CONCAT44(iStack_114 + iStack_10c,iStack_114),4);
  *(ulong *)(lVar14 + 0x2c) =
       CONCAT17((char)((ulong)uVar18 >> 0x38),
                CONCAT16((char)((ulong)uVar18 >> 0x30),
                         CONCAT15((char)((ulong)uVar18 >> 0x28),
                                  CONCAT14((char)((ulong)uVar18 >> 0x20),
                                           (int)((ulong)uVar17 >> 0x20)))));
  *(ulong *)(lVar14 + 0x24) =
       CONCAT17((char)((ulong)uVar18 >> 0x18),
                CONCAT16((char)((ulong)uVar18 >> 0x10),
                         CONCAT15((char)((ulong)uVar18 >> 8),CONCAT14((char)uVar18,(int)uVar17))));
  if (uStack_108 != (undefined8 *)0x0) {
    puStack_100 = uStack_108;
    __ZdlPv();
  }
  if (lStack_b8 != 0) {
    piVar15 = (int *)(lStack_b8 + 0x14);
    do {
      iVar12 = *piVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&fStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  pdStack_e0 = (double *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < (int)fStack_ec) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_b0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)fStack_ec);
  }
  if (plStack_a8 != alStack_a0 && plStack_a8 != (long *)0x0) {
    _free(plStack_a8[-1]);
  }
  return;
}



/* Entry: 10a8b5358; end: 10a8b540b;  */

void FUN_10a8b5358(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001093f458c(param_1,param_2[1] - *param_2 >> 3);
  uStack_38 = 0;
  auStack_48[0] = 0x8103000d;
  auStack_60[0] = 0x8203000d;
  uStack_50 = 0;
  uStack_68 = 0;
  auStack_78[0] = 0x1010000;
  uStack_70 = param_3;
  puStack_58 = param_1;
  plStack_40 = param_2;
  func_0x000109a6b6dc(auStack_48,auStack_60,auStack_78);
  return;
}



/* Entry: 10a8b540c; end: 10a8b5a4b;  */

void FUN_10a8b540c(float param_1,long param_2,long *param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  code *pcVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_b1;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 in_register_00005021;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 in_register_00005022;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 in_register_00005023;
  undefined1 uVar22;
  undefined1 uVar23;
  float extraout_s2;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  ulong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long alStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
  FUN_10a0ee900(&uStack_c0,&UNK_10f67fb1f,0x25);
  uStack_110 = (float **)(long)uStack_b0._7_1_;
  if ((long)uStack_110 < 0) {
    uStack_118 = uStack_c0;
    uStack_110 = (float **)lStack_b8;
    if (0x218 < uVar10) {
      __ZdlPv();
      goto LAB_10a8b5498;
    }
  }
  else {
    uStack_118 = &uStack_c0;
    if (0x218 < uVar10) {
LAB_10a8b5498:
      puVar11 = (undefined8 *)(param_2 + 0x10);
      puVar12 = (undefined8 *)(param_2 + 0x18);
      uVar36 = *(undefined8 *)(param_2 + 0x180);
      FUN_10a8b4eac(*puVar11,*puVar12,uRam00000001137ebdd8,uRam00000001137ebddc);
      fVar30 = (float)CONCAT13(in_register_00005023,
                               CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
      fVar27 = param_1;
      FUN_10a8b4eac(*puVar11,*puVar12,uRam00000001137ebde0,uRam00000001137ebde4);
      fVar14 = (float)CONCAT13(in_register_00005023,
                               CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
      fVar13 = fVar27;
      FUN_10a8b4eac(*puVar11,*puVar12,uRam00000001137ebde8,uRam00000001137ebdec);
      uVar36 = NEON_scvtf(uVar36,4);
      fVar15 = (float)CONCAT13(in_register_00005023,
                               CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
      fVar26 = (float)uVar36;
      fVar29 = (float)((ulong)uVar36 >> 0x20);
      fVar30 = (fVar30 + fVar30) / fVar29;
      fVar14 = (fVar14 + fVar14) / fVar29;
      auVar24 = NEON_fmov(0xbf800000,4);
      auVar25._0_4_ = (param_1 + param_1) / fVar26 + auVar24._0_4_;
      auVar25._4_4_ = fVar30 + auVar24._4_4_;
      auVar25._8_4_ = (fVar27 + fVar27) / fVar26 + auVar24._8_4_;
      auVar25._12_4_ = fVar14 + auVar24._12_4_;
      auVar28 = NEON_fmov(0x3f800000,4);
      auVar24 = NEON_rev64(auVar25,4);
      uVar36 = NEON_fmov(0xbf800000,4);
      uVar31 = NEON_fmov(0x3f800000,4);
      fVar27 = (float)((ulong)uVar31 >> 0x20);
      uStack_b0 = (float *)CONCAT44(fVar27 - (fVar15 + fVar15) / fVar29,
                                    (fVar13 + fVar13) / fVar26 + (float)uVar36);
      uStack_c0 = (undefined8 *)CONCAT44(auVar28._4_4_ - fVar30,auVar24._4_4_);
      lStack_b8 = CONCAT44(auVar28._12_4_ - fVar14,auVar24._12_4_);
      pfStack_d0 = (float *)0x0;
      uStack_c8 = 0;
      pfStack_d8 = (float *)0x0;
      FUN_10a6c1720(&pfStack_d8,&uStack_c0,&uStack_a8,3);
      uStack_108 = 0;
      uStack_118 = (undefined8 *)CONCAT44(uStack_118._4_4_,0x8103000d);
      lStack_f0 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_110 = &pfStack_d8;
      FUN_10a6c1720(&lStack_f0,param_4,param_4 + 0x18,3);
      uStack_130 = 0;
      fStack_140 = -2.4060936e-38;
      uStack_138 = &lStack_f0;
      func_0x000109b1fe78(&uStack_c0,&uStack_118,&fStack_140);
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      uStack_118._0_4_ = 9.477423e-38;
      uStack_110 = (float **)&uStack_c0;
      uStack_108 = 0;
      func_0x000109a41858(0x3ff0000000000000,&uStack_c0,&uStack_118,5);
      pfVar5 = uStack_b0;
      pfVar7 = (float *)((long)uStack_b0 + *plStack_78);
      fVar13 = *pfVar7;
      _atan2f();
      *(float *)(param_3 + 2) = fVar13;
      fVar35 = *pfVar7;
      fVar37 = pfVar7[1];
      fVar15 = fVar35 * fVar35 + fVar37 * fVar37;
      fVar30 = SQRT(fVar15);
      uVar16 = SUB41(fVar30,0);
      uVar18 = (undefined1)((uint)fVar30 >> 8);
      uVar20 = (undefined1)((uint)fVar30 >> 0x10);
      uVar22 = (undefined1)((uint)fVar30 >> 0x18);
      ___sincosf_stret();
      fVar26 = *pfVar5;
      fVar29 = pfVar5[1];
      fVar32 = -(fVar13 * fVar29) +
               fVar26 * (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16)));
      fVar14 = -0.0001;
      if (fVar32 <= -0.0001) {
        fVar14 = fVar32;
      }
      fVar33 = 0.0001;
      if (0.0001 <= fVar32) {
        fVar33 = fVar32;
      }
      if (0.0 <= fVar32) {
        fVar14 = fVar33;
      }
      fVar14 = (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16))) +
               fVar13 * (((float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16))) * fVar29
                         + fVar26 * fVar13) / fVar14);
      uVar16 = 0x17;
      uVar18 = 0xb7;
      uVar20 = 0xd1;
      uVar22 = 0xb8;
      if (fVar14 <= -0.0001) {
        uVar16 = SUB41(fVar14,0);
        uVar18 = (undefined1)((uint)fVar14 >> 8);
        uVar20 = (undefined1)((uint)fVar14 >> 0x10);
        uVar22 = (undefined1)((uint)fVar14 >> 0x18);
      }
      fVar13 = 0.0001;
      if (0.0001 <= fVar14) {
        fVar13 = fVar14;
      }
      fVar32 = (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16)));
      if (0.0 <= fVar14) {
        fVar32 = fVar13;
      }
      fVar32 = fVar26 / fVar32;
      fVar33 = -(fVar35 * fVar29) + fVar37 * fVar26;
      fVar14 = (float)*(int *)(param_2 + 0x180) * 0.5;
      fVar13 = (float)*(int *)(param_2 + 0x184) * 0.5;
      lVar8 = *param_3;
      uVar34 = CONCAT44(fVar32,fVar33);
      uVar41 = uVar34 ^ (uVar34 ^ 0xb8d1b717b8d1b717) &
                        CONCAT44(-(uint)(-0.0001 < fVar32),-(uint)(-0.0001 < fVar33));
      uVar10 = (CONCAT44(fVar30,fVar33) ^ 0xb8d1b717b8d1b717) &
               ~CONCAT44(-(uint)(-0.0001 < fVar30),-(uint)(-0.0001 < fVar33)) ^ 0xb8d1b717b8d1b717;
      uVar41 = uVar41 ^ (uVar41 ^ uVar34 ^ (uVar34 ^ 0x38d1b71738d1b717) &
                                           CONCAT44(-(uint)(fVar32 < 0.0001),
                                                    -(uint)(fVar33 < 0.0001))) &
                        CONCAT44(-(uint)(0.0 <= fVar32),-(uint)(0.0 <= fVar33));
      uVar10 = uVar10 ^ (uVar10 ^ (CONCAT44(fVar30,fVar33) ^ 0x38d1b71738d1b717) &
                                  ~CONCAT44(-(uint)(fVar30 < 0.0001),-(uint)(fVar33 < 0.0001)) ^
                                  0x38d1b71738d1b717) &
                        CONCAT44(-(uint)(0.0 <= fVar15),-(uint)(0.0 <= fVar33));
      fVar30 = (-(pfVar5[2] * fVar37) + fVar29 * pfVar7[2]) / (float)uVar41;
      fVar29 = fVar27 / (float)(uVar41 >> 0x20);
      fVar26 = (-(pfVar5[2] * fVar35) - -(pfVar7[2] * fVar26)) / (float)uVar10;
      fVar32 = fVar27 / (float)(uVar10 >> 0x20);
      fVar15 = ((fVar26 - fVar32) + (float)uVar31) * fVar13;
      fVar13 = (fVar32 + fVar26 + 0.0 + fVar27) * fVar13;
      *(ulong *)(lVar8 + 0x2c) =
           CONCAT17((char)((uint)fVar13 >> 0x18),
                    CONCAT16((char)((uint)fVar13 >> 0x10),
                             CONCAT15((char)((uint)fVar13 >> 8),
                                      CONCAT14(SUB41(fVar13,0),
                                               (fVar29 + fVar30 + 0.0 + fVar27) * fVar14))));
      *(ulong *)(lVar8 + 0x24) =
           CONCAT17((char)((uint)fVar15 >> 0x18),
                    CONCAT16((char)((uint)fVar15 >> 0x10),
                             CONCAT15((char)((uint)fVar15 >> 8),
                                      CONCAT14(SUB41(fVar15,0),
                                               ((fVar30 - fVar29) + (float)uVar31) * fVar14))));
      lVar9 = *param_3;
      lVar8 = param_3[2];
      FUN_10a8b5a4c((int)lVar8,&uStack_118,lVar9);
      FUN_10a8b5a4c((int)lVar8,&fStack_140);
      fVar29 = -(fStack_fc * uStack_108._4_4_) + fStack_f8 * (float)uStack_108;
      fVar30 = -(fStack_fc * (float)uStack_110) + fStack_f8 * uStack_118._4_4_;
      fVar26 = -((float)uStack_108 * (float)uStack_110) + uStack_108._4_4_ * uStack_118._4_4_;
      fVar15 = 1.0 / (-(uStack_110._4_4_ * fVar30) + fVar29 * (float)uStack_118 +
                     fVar26 * fStack_100);
      fVar29 = fVar29 * fVar15;
      fVar35 = -((-(fStack_100 * uStack_108._4_4_) + fStack_f8 * uStack_110._4_4_) * fVar15);
      fVar37 = (-(fStack_100 * (float)uStack_108) + fStack_fc * uStack_110._4_4_) * fVar15;
      fVar32 = -(fVar30 * fVar15);
      fVar14 = (-(fStack_100 * (float)uStack_110) + fStack_f8 * (float)uStack_118) * fVar15;
      fVar27 = -((-(fStack_100 * uStack_118._4_4_) + fStack_fc * (float)uStack_118) * fVar15);
      fVar26 = fVar26 * fVar15;
      fVar13 = -((-(uStack_110._4_4_ * (float)uStack_110) + uStack_108._4_4_ * (float)uStack_118) *
                fVar15);
      fVar15 = (-(uStack_110._4_4_ * uStack_118._4_4_) + (float)uStack_108 * (float)uStack_118) *
               fVar15;
      fVar30 = uStack_130._4_4_ * fVar27 + fVar37 * (float)uStack_138 + fVar15 * fStack_120;
      uVar16 = SUB41(fVar30,0);
      uVar18 = (undefined1)((uint)fVar30 >> 8);
      uVar20 = (undefined1)((uint)fVar30 >> 0x10);
      uVar22 = (undefined1)((uint)fVar30 >> 0x18);
      *(float *)((long)param_3 + 0x14) =
           uStack_138._4_4_ * fVar32 + fVar29 * fStack_140 + fVar26 * fStack_128;
      *(float *)(param_3 + 3) =
           (float)uStack_130 * fVar32 + fVar29 * fStack_13c + fVar26 * fStack_124;
      *(float *)((long)param_3 + 0x1c) =
           uStack_130._4_4_ * fVar32 + fVar29 * (float)uStack_138 + fVar26 * fStack_120;
      *(float *)(param_3 + 4) =
           uStack_138._4_4_ * fVar14 + fVar35 * fStack_140 + fVar13 * fStack_128;
      *(float *)((long)param_3 + 0x24) =
           (float)uStack_130 * fVar14 + fVar35 * fStack_13c + fVar13 * fStack_124;
      *(float *)(param_3 + 5) =
           uStack_130._4_4_ * fVar14 + fVar35 * (float)uStack_138 + fVar13 * fStack_120;
      *(float *)((long)param_3 + 0x2c) =
           uStack_138._4_4_ * fVar27 + fVar37 * fStack_140 + fVar15 * fStack_128;
      *(float *)(param_3 + 6) =
           (float)uStack_130 * fVar27 + fVar37 * fStack_13c + fVar15 * fStack_124;
      *(float *)((long)param_3 + 0x34) = fVar30;
      if (lStack_88 != 0) {
        piVar1 = (int *)(lStack_88 + 0x14);
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
          func_0x000109a848d4(&uStack_c0);
        }
      }
      lStack_88 = 0;
      fVar15 = 0.0;
      uStack_a8 = 0;
      uStack_b0 = (float *)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      if (0 < uStack_c0._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(lStack_80 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_c0._4_4_);
      }
      if (plStack_78 != alStack_70 && plStack_78 != (long *)0x0) {
        fVar15 = 0.0;
        _free(plStack_78[-1]);
      }
      pfVar7 = pfStack_d8;
      if (pfStack_d8 != (float *)0x0) {
        pfStack_d0 = pfStack_d8;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      if ((int)lVar9 != 0) {
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_c0);
        if (pfStack_d8 != (float *)0x0) {
          pfStack_d0 = pfStack_d8;
          __ZdlPv();
        }
      }
      __Unwind_Resume();
      FUN_10a8cc1a0(&fStack_220);
      uVar17 = SUB41(fStack_21c,0);
      uVar19 = (undefined1)((uint)fStack_21c >> 8);
      uVar21 = (undefined1)((uint)fStack_21c >> 0x10);
      uVar23 = (undefined1)((uint)fStack_21c >> 0x18);
      fVar14 = 0.25;
      fVar40 = (fStack_21c + 0.0 + fStack_214 + fStack_20c + fStack_204) * 0.25;
      func_0x00010acae698(lVar9);
      fVar30 = ((float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar17))) * 0.5) /
               (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16)));
      uVar17 = SUB41(fVar30,0);
      uVar19 = (undefined1)((uint)fVar30 >> 8);
      uVar21 = (undefined1)((uint)fVar30 >> 0x10);
      uVar23 = (undefined1)((uint)fVar30 >> 0x18);
      fVar39 = 1.0 / (fVar14 * 0.5);
      fVar38 = (fStack_220 + 0.0 + fStack_218 + fStack_210 + fStack_208) * -0.25;
      ___sincosf_stret();
      fVar14 = 1.0 - (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar17)));
      fVar27 = fVar14 * 0.0;
      fVar26 = (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar17))) + fVar27 * 0.0;
      fVar29 = fVar27 * 0.0 - fVar15;
      fVar33 = fVar15 * 0.0 + fVar27;
      fVar32 = fVar15 + fVar27 * 0.0;
      fVar27 = fVar15 * -0.0 + fVar27;
      fVar13 = fVar15 * -0.0 + fVar14 * 0.0;
      fVar37 = fVar15 * 0.0 + fVar14 * 0.0;
      fVar14 = (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar17))) + fVar14;
      fVar15 = fVar26 * 0.0;
      fVar42 = fVar29 * 0.0;
      fVar35 = fVar33 * 0.0;
      fVar44 = fVar35 + fVar26 + fVar42;
      fVar35 = fVar35 + fVar29 + fVar15;
      fVar33 = fVar33 + fVar15 + fVar42;
      fVar43 = fVar32 * 0.0;
      fVar29 = fVar27 * 0.0;
      fVar42 = fVar29 + fVar32 + fVar15;
      fVar29 = fVar29 + fVar26 + fVar43;
      fVar27 = fVar27 + fVar43 + fVar15;
      fVar26 = fVar13 * 0.0;
      fVar43 = fVar37 * 0.0;
      fVar32 = fVar14 * 0.0;
      fVar15 = fVar32 + fVar13 + fVar43;
      fVar32 = fVar32 + fVar37 + fVar26;
      fVar14 = fVar14 + fVar26 + fVar43;
      fVar26 = fVar44 + fVar42 * 0.0 + fVar15 * 0.0;
      fVar43 = fVar35 + fVar29 * 0.0 + fVar32 * 0.0;
      fVar45 = fVar33 + fVar27 * 0.0 + fVar14 * 0.0;
      fVar46 = (fVar44 * 0.0 - fVar42) + fVar15 * 0.0;
      fVar47 = (fVar35 * 0.0 - fVar29) + fVar32 * 0.0;
      fVar48 = (fVar33 * 0.0 - fVar27) + fVar14 * 0.0;
      fVar15 = fVar15 + fVar42 * fVar40 + fVar38 * fVar44;
      fVar32 = fVar32 + fVar29 * fVar40 + fVar38 * fVar35;
      fVar14 = fVar14 + fVar27 * fVar40 + fVar38 * fVar33;
      fVar13 = fVar39 * 0.0;
      fVar27 = (1.0 / fVar30) * 0.0;
      fVar29 = 1.0 / (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16)));
      fVar35 = fVar29 * 0.0;
      fVar37 = fVar27 * 0.0;
      fVar33 = fVar39 + fVar37 + 0.0;
      fVar40 = fVar13 + fVar27 + 0.0;
      fVar42 = fVar13 + fVar37 + 0.0;
      fVar44 = (fVar27 - extraout_s2 * fVar39) + 0.0;
      fVar49 = (1.0 / fVar30 - extraout_s2 * fVar13) + 0.0;
      fVar50 = (fVar27 - extraout_s2 * fVar13) + 0.0;
      fVar51 = fVar37 + fVar39 * 0.0 + 0.0;
      fVar27 = fVar27 + fVar13 * 0.0 + 0.0;
      fVar30 = fVar37 + fVar13 * 0.0 + 1.0;
      fVar37 = fVar43 * fVar44 + fVar26 * fVar33 + fVar45 * fVar51;
      fVar52 = fVar43 * fVar49 + fVar26 * fVar40 + fVar45 * fVar27;
      fVar13 = fVar43 * fVar50 + fVar26 * fVar42 + fVar45 * fVar30;
      fVar26 = fVar47 * fVar44 + fVar46 * fVar33 + fVar48 * fVar51;
      fVar38 = fVar47 * fVar49 + fVar46 * fVar40 + fVar48 * fVar27;
      fVar39 = fVar47 * fVar50 + fVar46 * fVar42 + fVar48 * fVar30;
      fVar33 = fVar32 * fVar44 + fVar15 * fVar33 + fVar14 * fVar51;
      fVar27 = fVar32 * fVar49 + fVar15 * fVar40 + fVar14 * fVar27;
      fVar30 = fVar32 * fVar50 + fVar15 * fVar42 + fVar14 * fVar30;
      fVar15 = fVar26 * 0.0;
      fVar14 = fVar38 * 0.0;
      fVar32 = fVar39 * 0.0;
      *pfVar7 = fVar37 + fVar15 + fVar33 * 0.0;
      pfVar7[1] = fVar52 + fVar14 + fVar27 * 0.0;
      pfVar7[2] = fVar13 + fVar32 + fVar30 * 0.0;
      pfVar7[3] = fVar29 * fVar26 + fVar35 * fVar37 + fVar35 * fVar33;
      pfVar7[4] = fVar29 * fVar38 + fVar35 * fVar52 + fVar35 * fVar27;
      pfVar7[5] = fVar29 * fVar39 + fVar35 * fVar13 + fVar35 * fVar30;
      pfVar7[6] = fVar33 + fVar15 + fVar37 * 0.0;
      pfVar7[7] = fVar27 + fVar14 + fVar52 * 0.0;
      pfVar7[8] = fVar30 + fVar32 + fVar13 * 0.0;
      return;
    }
  }
  FUN_10a0edfc4(&uStack_118);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8b59d0);
  (*pcVar6)();
}



/* Entry: 10a8b5a4c; end: 10a8b5d77;  */

void FUN_10a8b5a4c(float param_1,float param_2,float param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  FUN_10a8cc1a0(&fStack_90);
  fVar1 = 0.25;
  fVar12 = (fStack_8c + 0.0 + fStack_84 + fStack_7c + fStack_74) * 0.25;
  func_0x00010acae698(param_5);
  fVar2 = (fStack_8c * 0.5) / param_2;
  fVar11 = 1.0 / (fVar1 * 0.5);
  fVar10 = (fStack_90 + 0.0 + fStack_88 + fStack_80 + fStack_78) * -0.25;
  fVar13 = 1.0 / fVar2;
  ___sincosf_stret();
  fVar3 = 1.0 - fVar2;
  fVar5 = fVar3 * 0.0;
  fVar6 = fVar2 + fVar5 * 0.0;
  fVar7 = fVar5 * 0.0 - param_1;
  fVar9 = param_1 * 0.0 + fVar5;
  fVar14 = param_1 + fVar5 * 0.0;
  fVar5 = param_1 * -0.0 + fVar5;
  fVar1 = param_1 * -0.0 + fVar3 * 0.0;
  fVar8 = param_1 * 0.0 + fVar3 * 0.0;
  fVar4 = fVar6 * 0.0;
  fVar15 = fVar7 * 0.0;
  fVar17 = fVar9 * 0.0;
  fVar16 = fVar17 + fVar6 + fVar15;
  fVar17 = fVar17 + fVar7 + fVar4;
  fVar9 = fVar9 + fVar4 + fVar15;
  fVar15 = fVar14 * 0.0;
  fVar7 = fVar5 * 0.0;
  fVar14 = fVar7 + fVar14 + fVar4;
  fVar7 = fVar7 + fVar6 + fVar15;
  fVar5 = fVar5 + fVar15 + fVar4;
  fVar4 = fVar1 * 0.0;
  fVar15 = fVar8 * 0.0;
  fVar6 = (fVar2 + fVar3) * 0.0;
  fVar1 = fVar6 + fVar1 + fVar15;
  fVar6 = fVar6 + fVar8 + fVar4;
  fVar2 = fVar2 + fVar3 + fVar4 + fVar15;
  fVar4 = fVar16 + fVar14 * 0.0 + fVar1 * 0.0;
  fVar8 = fVar17 + fVar7 * 0.0 + fVar6 * 0.0;
  fVar15 = fVar9 + fVar5 * 0.0 + fVar2 * 0.0;
  fVar18 = (fVar16 * 0.0 - fVar14) + fVar1 * 0.0;
  fVar19 = (fVar17 * 0.0 - fVar7) + fVar6 * 0.0;
  fVar20 = (fVar9 * 0.0 - fVar5) + fVar2 * 0.0;
  fVar1 = fVar1 + fVar14 * fVar12 + fVar10 * fVar16;
  fVar6 = fVar6 + fVar7 * fVar12 + fVar10 * fVar17;
  fVar2 = fVar2 + fVar5 * fVar12 + fVar10 * fVar9;
  fVar3 = fVar11 * 0.0;
  fVar5 = fVar13 * 0.0;
  param_2 = 1.0 / param_2;
  fVar7 = param_2 * 0.0;
  fVar17 = fVar5 * 0.0;
  fVar9 = fVar11 + fVar17 + 0.0;
  fVar12 = fVar3 + fVar5 + 0.0;
  fVar14 = fVar3 + fVar17 + 0.0;
  fVar16 = (fVar5 - param_3 * fVar11) + 0.0;
  fVar13 = (fVar13 - param_3 * fVar3) + 0.0;
  fVar21 = (fVar5 - param_3 * fVar3) + 0.0;
  fVar22 = fVar17 + fVar11 * 0.0 + 0.0;
  fVar5 = fVar5 + fVar3 * 0.0 + 0.0;
  fVar3 = fVar17 + fVar3 * 0.0 + 1.0;
  fVar17 = fVar8 * fVar16 + fVar4 * fVar9 + fVar15 * fVar22;
  fVar23 = fVar8 * fVar13 + fVar4 * fVar12 + fVar15 * fVar5;
  fVar4 = fVar8 * fVar21 + fVar4 * fVar14 + fVar15 * fVar3;
  fVar8 = fVar19 * fVar16 + fVar18 * fVar9 + fVar20 * fVar22;
  fVar10 = fVar19 * fVar13 + fVar18 * fVar12 + fVar20 * fVar5;
  fVar11 = fVar19 * fVar21 + fVar18 * fVar14 + fVar20 * fVar3;
  fVar9 = fVar6 * fVar16 + fVar1 * fVar9 + fVar2 * fVar22;
  fVar5 = fVar6 * fVar13 + fVar1 * fVar12 + fVar2 * fVar5;
  fVar1 = fVar6 * fVar21 + fVar1 * fVar14 + fVar2 * fVar3;
  fVar2 = fVar8 * 0.0;
  fVar3 = fVar10 * 0.0;
  fVar6 = fVar11 * 0.0;
  *param_4 = fVar17 + fVar2 + fVar9 * 0.0;
  param_4[1] = fVar23 + fVar3 + fVar5 * 0.0;
  param_4[2] = fVar4 + fVar6 + fVar1 * 0.0;
  param_4[3] = param_2 * fVar8 + fVar7 * fVar17 + fVar7 * fVar9;
  param_4[4] = param_2 * fVar10 + fVar7 * fVar23 + fVar7 * fVar5;
  param_4[5] = param_2 * fVar11 + fVar7 * fVar4 + fVar7 * fVar1;
  param_4[6] = fVar9 + fVar2 + fVar17 * 0.0;
  param_4[7] = fVar5 + fVar3 + fVar23 * 0.0;
  param_4[8] = fVar1 + fVar6 + fVar4 * 0.0;
  return;
}



/* Entry: 10a8b5d78; end: 10a8b5e23;  */

undefined8 * FUN_10a8b5d78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c25a30;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a8b5e24; end: 10a8b5fab;  */

undefined ** FUN_10a8b5e24(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    puStack_50 = (undefined1 *)((ulong)puStack_50 & 0xffffffffffffff00);
    puStack_48 = (undefined *)0x0;
    ppuVar5 = &puStack_50;
    func_0x00010945a80c(ppuVar5,&UNK_10f67fb45);
    ppuStack_58 = (undefined **)0x0;
    uStack_60 = 3;
    ppuVar7 = (undefined **)(param_2 + 8);
    func_0x00010938229c();
    ppuVar6 = ppuVar5;
    ppuStack_58 = ppuVar7;
    func_0x00010945a80c(ppuVar5,&DAT_10f56f6ff);
    uVar2 = *(undefined1 *)ppuVar6;
    *(undefined1 *)ppuVar6 = 3;
    _uStack_60 = CONCAT71(uStack_5f,uVar2);
    ppuVar7 = (undefined **)ppuVar6[1];
    ppuVar6[1] = (undefined1 *)ppuStack_58;
    ppuStack_58 = ppuVar7;
    func_0x000109380ffc(&ppuStack_58);
    puStack_68 = *(undefined1 **)(param_2 + 0x28);
    func_0x00010945a80c(ppuVar5,&DAT_10f3909e3);
    *(undefined1 *)ppuVar5 = 5;
    puVar8 = ppuVar5[1];
    ppuVar5[1] = puStack_68;
    puStack_68 = puVar8;
    func_0x000109380ffc(&puStack_68);
    FUN_10a0c32e4(param_1,&puStack_50,0xffffffff,0x20,0,0);
    ppuVar7 = &puStack_48;
    func_0x000109380ffc(ppuVar7,(ulong)puStack_50 & 0xff);
    return ppuVar7;
  }
  ppuVar7 = (undefined **)&UNK_10f67fb58;
  func_0x000107c613d0();
  if ((undefined **)0x7ffffffffffffff7 < ppuVar7) {
    func_0x000107c2b040();
    puStack_48 = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      ppuVar7 = (undefined **)0x1132ffc88;
      ppuStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if ((int)ppuVar7 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        ppuVar7 = (undefined **)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return ppuVar7;
      }
    }
    return ppuVar7;
  }
  if (ppuVar7 < (undefined **)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)ppuVar7;
    ppuVar3 = param_1;
    if (ppuVar7 == (undefined **)0x0) goto code_r0x0001000537e0;
  }
  else {
    ppuVar1 = (undefined **)0x19;
    if (((ulong)ppuVar7 | 7) != 0x17) {
      ppuVar1 = (undefined **)(((ulong)ppuVar7 | 7) + 1);
    }
    ppuVar3 = ppuVar1;
    func_0x000107c60e20();
    param_1[1] = (undefined *)ppuVar7;
    param_1[2] = (undefined *)((ulong)ppuVar1 | 0x8000000000000000);
    *param_1 = (undefined *)ppuVar3;
  }
  func_0x000107c610b8(ppuVar3,&UNK_10f67fb58,ppuVar7);
code_r0x0001000537e0:
  *(undefined1 *)((long)ppuVar3 + (long)ppuVar7) = 0;
  return param_1;
}



/* Entry: 10a8b5fac; end: 10a8b6353;  */

void FUN_10a8b5fac(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  plVar2 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  while (plVar4 != plVar2) {
    plVar4 = plVar4 + -1;
    plVar1 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x40))();
    }
  }
  param_1[1] = plVar2;
  if (*(char *)(param_1 + 8) == '\x01') {
    plVar2 = (long *)0x30;
    __Znwm();
    *plVar2 = (long)&PTR_FUN_110c25a30;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      func_0x000107c3192c(plVar2 + 1,param_1[3],param_1[4]);
    }
    else {
      lVar5 = param_1[3];
      plVar2[2] = param_1[4];
      plVar2[1] = lVar5;
      plVar2[3] = param_1[5];
    }
    *(undefined1 *)(plVar2 + 4) = 0;
    plVar2[5] = 0;
    plStack_48 = plVar2;
    FUN_10a8d3ea8(param_1,&plStack_48);
    if (plStack_48 != (long *)0x0) {
      (**(code **)(*plStack_48 + 0x40))();
    }
    plVar2 = (long *)0x38;
    __Znwm();
    *plVar2 = (long)&PTR_FUN_110c25a88;
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    func_0x000107c2b054(&plStack_48,&UNK_10f67fb59);
    if (cStack_31 < '\0') {
      func_0x000107c3192c(puVar3,plStack_48,uStack_40);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[1] = (long)puVar3;
      if (cStack_31 < '\0') {
        __ZdlPv(plStack_48);
      }
    }
    else {
      puVar3[1] = uStack_40;
      *puVar3 = plStack_48;
      puVar3[2] = CONCAT17(cStack_31,uStack_38);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[1] = (long)puVar3;
    }
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    func_0x000107c2b054(&plStack_48,&UNK_10f67fb68);
    if (cStack_31 < '\0') {
      func_0x000107c3192c(puVar3,plStack_48,uStack_40);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[2] = (long)puVar3;
      if (cStack_31 < '\0') {
        __ZdlPv(plStack_48);
      }
    }
    else {
      puVar3[1] = uStack_40;
      *puVar3 = plStack_48;
      puVar3[2] = CONCAT17(cStack_31,uStack_38);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[2] = (long)puVar3;
    }
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    func_0x000107c2b054(&plStack_48,&UNK_10f67fb74);
    if (cStack_31 < '\0') {
      func_0x000107c3192c(puVar3,plStack_48,uStack_40);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[3] = (long)puVar3;
      if (cStack_31 < '\0') {
        __ZdlPv(plStack_48);
      }
    }
    else {
      puVar3[1] = uStack_40;
      *puVar3 = plStack_48;
      puVar3[2] = CONCAT17(cStack_31,uStack_38);
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      plVar2[3] = (long)puVar3;
    }
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      func_0x000107c3192c(plVar2 + 4,param_1[3],param_1[4]);
    }
    else {
      lVar5 = param_1[3];
      plVar2[5] = param_1[4];
      plVar2[4] = lVar5;
      plVar2[6] = param_1[5];
    }
    plStack_50 = plVar2;
    FUN_10a8d3ea8(param_1,&plStack_50);
    if (plStack_50 != (long *)0x0) {
      (**(code **)(*plStack_50 + 0x40))();
    }
  }
  return;
}



/* Entry: 10a8b6354; end: 10a8b644f;  */

void FUN_10a8b6354(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  char cStack_59;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)param_1[1];
    for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x30))(&uStack_58);
      uVar4 = (uint)(char)bStack_41;
      uVar1 = uStack_50;
      if (-1 < (int)uVar4) {
        uVar1 = (ulong)bStack_41;
      }
      if (uVar1 != 0) {
        cStack_59 = '\x0f';
        uStack_70 = 0x4c4c4d68636554;
        uStack_69 = 0x65;
        uStack_68 = 0x746e657645736e;
        uStack_61 = 0;
        FUN_10a76bdb0(param_2,&uStack_70,&uStack_58);
        if (cStack_59 < '\0') {
          __ZdlPv(CONCAT17(uStack_69,uStack_70));
        }
        uVar4 = (uint)bStack_41;
      }
      if ((uVar4 >> 7 & 1) != 0) {
        __ZdlPv(uStack_58);
      }
    }
  }
  return;
}



/* Entry: 10a8b6450; end: 10a8b64bb;  */

undefined8 * FUN_10a8b6450(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c25a88;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  return param_1;
}



/* Entry: 10a8b64bc; end: 10a8b64bf;  */

undefined8 * FUN_10a8b64bc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c25a88;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10a8dd3bc();
  }
  return param_1;
}



/* Entry: 10a8b64c0; end: 10a8b64d3;  */

void FUN_10a8b64c0(void)

{
  FUN_10a8b6450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8b64d4; end: 10a8b6507;  */

void FUN_10a8b64d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(lVar2 + 0x18) = lVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(lVar2 + 0x18) = lVar1;
  return;
}



/* Entry: 10a8b6508; end: 10a8b650f;  */

void FUN_10a8b6508(long param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar5 + 0x38) & 1) == 0) {
    lVar6 = lVar5;
    __ZNSt3__16chrono12steady_clock3nowEv();
    dVar9 = (double)(lVar6 - *(long *)(lVar5 + 0x18)) / 1000000.0;
    dVar8 = *(double *)(lVar5 + 0x20);
    uVar1 = *(long *)(lVar5 + 0x30) + 1;
    dVar7 = dVar9 - dVar8;
    dVar10 = dVar7 / (double)uVar1;
    bVar2 = false;
    if ((0.0 < dVar10) && (bVar2 = false, !NAN(1.79769313486232e+308 - dVar10) && !NAN(dVar8))) {
      bVar2 = 1.79769313486232e+308 - dVar10 < dVar8;
    }
    if (!bVar2) {
      dVar11 = 2.2250738585072014e-308 - dVar10;
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (dVar10 < 0.0) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar11) && !NAN(dVar8)) {
          bVar2 = dVar11 < dVar8;
          bVar3 = dVar11 == dVar8;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        dVar9 = dVar9 - (dVar8 + dVar10);
        if ((dVar9 == 0.0) || (ABS(dVar7) <= 1.79769313486232e+308 / ABS(dVar9))) {
          dVar11 = *(double *)(lVar5 + 0x28);
          dVar12 = dVar7 * dVar9;
          bVar2 = false;
          if ((0.0 < dVar12) &&
             (bVar2 = false, !NAN(1.79769313486232e+308 - dVar12) && !NAN(dVar11))) {
            bVar2 = 1.79769313486232e+308 - dVar12 < dVar11;
          }
          if (!bVar2) {
            dVar13 = 2.2250738585072014e-308 - dVar12;
            bVar2 = false;
            bVar3 = true;
            bVar4 = false;
            if (dVar12 < 0.0) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = true;
              if (!NAN(dVar13) && !NAN(dVar11)) {
                bVar2 = dVar13 < dVar11;
                bVar3 = dVar13 == dVar11;
                bVar4 = false;
              }
            }
            if (bVar3 || bVar2 != bVar4) {
              *(ulong *)(lVar5 + 0x30) = uVar1;
              *(double *)(lVar5 + 0x20) = dVar8 + dVar10;
              *(double *)(lVar5 + 0x28) = dVar11 + dVar9 * dVar7;
              return;
            }
          }
        }
      }
    }
    *(undefined1 *)(lVar5 + 0x38) = 1;
  }
  return;
}



/* Entry: 10a8b6510; end: 10a8b6637;  */

void FUN_10a8b6510(long param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar5 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    dVar8 = (double)(lVar5 - *(long *)(param_1 + 0x18)) / 1000000.0;
    dVar7 = *(double *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x30) + 1;
    dVar6 = dVar8 - dVar7;
    dVar9 = dVar6 / (double)uVar1;
    bVar2 = false;
    if ((0.0 < dVar9) && (bVar2 = false, !NAN(1.79769313486232e+308 - dVar9) && !NAN(dVar7))) {
      bVar2 = 1.79769313486232e+308 - dVar9 < dVar7;
    }
    if (!bVar2) {
      dVar10 = 2.2250738585072014e-308 - dVar9;
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (dVar9 < 0.0) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar10) && !NAN(dVar7)) {
          bVar2 = dVar10 < dVar7;
          bVar3 = dVar10 == dVar7;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        dVar8 = dVar8 - (dVar7 + dVar9);
        if ((dVar8 == 0.0) || (ABS(dVar6) <= 1.79769313486232e+308 / ABS(dVar8))) {
          dVar10 = *(double *)(param_1 + 0x28);
          dVar11 = dVar6 * dVar8;
          bVar2 = false;
          if ((0.0 < dVar11) &&
             (bVar2 = false, !NAN(1.79769313486232e+308 - dVar11) && !NAN(dVar10))) {
            bVar2 = 1.79769313486232e+308 - dVar11 < dVar10;
          }
          if (!bVar2) {
            dVar12 = 2.2250738585072014e-308 - dVar11;
            bVar2 = false;
            bVar3 = true;
            bVar4 = false;
            if (dVar11 < 0.0) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = true;
              if (!NAN(dVar12) && !NAN(dVar10)) {
                bVar2 = dVar12 < dVar10;
                bVar3 = dVar12 == dVar10;
                bVar4 = false;
              }
            }
            if (bVar3 || bVar2 != bVar4) {
              *(ulong *)(param_1 + 0x30) = uVar1;
              *(double *)(param_1 + 0x20) = dVar7 + dVar9;
              *(double *)(param_1 + 0x28) = dVar10 + dVar8 * dVar6;
              return;
            }
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10a8b6638; end: 10a8b6647;  */

void FUN_10a8b6638(long param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
    lVar5 = lVar6;
    __ZNSt3__16chrono12steady_clock3nowEv();
    dVar9 = (double)(lVar5 - *(long *)(lVar6 + 0x18)) / 1000000.0;
    dVar8 = *(double *)(lVar6 + 0x20);
    uVar1 = *(long *)(lVar6 + 0x30) + 1;
    dVar7 = dVar9 - dVar8;
    dVar10 = dVar7 / (double)uVar1;
    bVar2 = false;
    if ((0.0 < dVar10) && (bVar2 = false, !NAN(1.79769313486232e+308 - dVar10) && !NAN(dVar8))) {
      bVar2 = 1.79769313486232e+308 - dVar10 < dVar8;
    }
    if (!bVar2) {
      dVar11 = 2.2250738585072014e-308 - dVar10;
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (dVar10 < 0.0) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar11) && !NAN(dVar8)) {
          bVar2 = dVar11 < dVar8;
          bVar3 = dVar11 == dVar8;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        dVar9 = dVar9 - (dVar8 + dVar10);
        if ((dVar9 == 0.0) || (ABS(dVar7) <= 1.79769313486232e+308 / ABS(dVar9))) {
          dVar11 = *(double *)(lVar6 + 0x28);
          dVar12 = dVar7 * dVar9;
          bVar2 = false;
          if ((0.0 < dVar12) &&
             (bVar2 = false, !NAN(1.79769313486232e+308 - dVar12) && !NAN(dVar11))) {
            bVar2 = 1.79769313486232e+308 - dVar12 < dVar11;
          }
          if (!bVar2) {
            dVar13 = 2.2250738585072014e-308 - dVar12;
            bVar2 = false;
            bVar3 = true;
            bVar4 = false;
            if (dVar12 < 0.0) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = true;
              if (!NAN(dVar13) && !NAN(dVar11)) {
                bVar2 = dVar13 < dVar11;
                bVar3 = dVar13 == dVar11;
                bVar4 = false;
              }
            }
            if (bVar3 || bVar2 != bVar4) {
              *(ulong *)(lVar6 + 0x30) = uVar1;
              *(double *)(lVar6 + 0x20) = dVar8 + dVar10;
              *(double *)(lVar6 + 0x28) = dVar11 + dVar9 * dVar7;
              return;
            }
          }
        }
      }
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  return;
}



/* Entry: 10a8b6648; end: 10a8b67b3;  */

undefined ** FUN_10a8b6648(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (((*(long *)(*(long *)(param_2 + 8) + 0x30) != 0) &&
      (*(long *)(*(long *)(param_2 + 0x10) + 0x30) != 0)) &&
     (*(long *)(*(long *)(param_2 + 0x18) + 0x30) != 0)) {
    puStack_50 = (undefined1 *)((ulong)puStack_50 & 0xffffffffffffff00);
    puStack_48 = (undefined *)0x0;
    ppuVar4 = &puStack_50;
    func_0x00010945a80c(ppuVar4,&UNK_10f67fb7e);
    ppuStack_58 = (undefined **)0x0;
    ppuVar6 = (undefined **)(param_2 + 0x20);
    func_0x00010938229c();
    ppuVar5 = ppuVar4;
    ppuStack_58 = ppuVar6;
    func_0x00010945a80c(ppuVar4,&DAT_10f56f6ff);
    *(undefined1 *)ppuVar5 = 3;
    ppuVar6 = (undefined **)ppuVar5[1];
    ppuVar5[1] = (undefined1 *)ppuStack_58;
    ppuStack_58 = ppuVar6;
    func_0x000109380ffc(&ppuStack_58);
    FUN_10a8b67b4(*(undefined8 *)(param_2 + 8),ppuVar4);
    FUN_10a8b67b4(*(undefined8 *)(param_2 + 0x10),ppuVar4);
    FUN_10a8b67b4(*(undefined8 *)(param_2 + 0x18),ppuVar4);
    FUN_10a0c32e4(param_1,&puStack_50,0xffffffff,0x20,0,0);
    ppuVar6 = &puStack_48;
    func_0x000109380ffc(ppuVar6,(ulong)puStack_50 & 0xff);
    return ppuVar6;
  }
  ppuVar6 = (undefined **)&UNK_10f67fb58;
  func_0x000107c613d0();
  if ((undefined **)0x7ffffffffffffff7 < ppuVar6) {
    func_0x000107c2b040();
    puStack_48 = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      ppuVar6 = (undefined **)0x1132ffc88;
      ppuStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if ((int)ppuVar6 != 0) {
        puVar3 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar3;
        puVar3[1] = 0x434948504152475f;
        *puVar3 = 0x45524f43534e454c;
        puVar3[3] = 0x525f595a414c5f54;
        puVar3[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar3 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar3 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar3 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        ppuVar6 = (undefined **)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return ppuVar6;
      }
    }
    return ppuVar6;
  }
  if (ppuVar6 < (undefined **)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)ppuVar6;
    ppuVar2 = param_1;
    if (ppuVar6 == (undefined **)0x0) goto code_r0x0001000537e0;
  }
  else {
    ppuVar1 = (undefined **)0x19;
    if (((ulong)ppuVar6 | 7) != 0x17) {
      ppuVar1 = (undefined **)(((ulong)ppuVar6 | 7) + 1);
    }
    ppuVar2 = ppuVar1;
    func_0x000107c60e20();
    param_1[1] = (undefined *)ppuVar6;
    param_1[2] = (undefined *)((ulong)ppuVar1 | 0x8000000000000000);
    *param_1 = (undefined *)ppuVar2;
  }
  func_0x000107c610b8(ppuVar2,&UNK_10f67fb58,ppuVar6);
code_r0x0001000537e0:
  *(undefined1 *)((long)ppuVar2 + (long)ppuVar6) = 0;
  return param_1;
}



/* Entry: 10a8b67b4; end: 10a8b68c7;  */

void FUN_10a8b67b4(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = 7;
  puVar2 = param_2;
  func_0x0001095b7584(param_2,param_1);
  func_0x00010945a80c();
  uVar1 = *puVar2;
  *puVar2 = uStack_40;
  uVar3 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = uStack_38;
  uStack_40 = uVar1;
  uStack_38 = uVar3;
  func_0x000109380ffc(&uStack_38);
  dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
  dStack_48 = SQRT(*(double *)(param_1 + 0x28) / dVar4);
  func_0x0001095b7584(param_2,param_1);
  func_0x00010945a80c();
  *param_2 = 7;
  dVar4 = *(double *)(param_2 + 8);
  *(double *)(param_2 + 8) = dStack_48;
  dStack_48 = dVar4;
  func_0x000109380ffc(&dStack_48);
  return;
}



/* Entry: 10a8b68c8; end: 10a8b6993;  */

undefined1  [16] FUN_10a8b68c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f662a62;
  return auVar1;
}



/* Entry: 10a8b6994; end: 10a8b72e7;  */

void FUN_10a8b6994(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662a62,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28270;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
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
    ppuStack_b0 = &PTR_DAT_110c28270;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fb8c,FUN_10a8dd450,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f63299a,FUN_10a8dd5d4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f6329a3,FUN_10a8dd7fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fb98,FUN_10a8dd9bc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fba2,FUN_10a8ddb74,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8ddd2c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f632a85,FUN_10a8de314,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbb3,FUN_10a8de45c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbc4,FUN_10a8de628,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbdb,FUN_10a8de720,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbe9,FUN_10a8de88c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,"cancel",FUN_10a8de978,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a8dea44,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fbf7,FUN_10a8deb04,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fc04,FUN_10a8debcc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fc11,FUN_10a8dece8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fc23,FUN_10a8dedb4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8b72c8;
    FUN_10a054dac(param_1,&UNK_10f67fc33,FUN_10a8dee80,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a8def50,FUN_10a8df018);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6856fe,FUN_10a8df158,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67fc3f,FUN_10a8df22c,FUN_10a8df2f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67fc4d,FUN_10a8df3e4,FUN_10a8df4d0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67fc5f,FUN_10a8df668,FUN_10a8df74c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67fc71,FUN_10a8df804,FUN_10a8df8e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67fc81,FUN_10a8dfa78,FUN_10a8dfb54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67fc91,FUN_10a8dfc0c,FUN_10a8dfccc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b43,FUN_10a8dfdbc,FUN_10a8dfe78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67fc9b,FUN_10a8dff38,FUN_10a8dfff0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662a62,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a8b72c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8b72cc);
  (*pcVar6)();
}



/* Entry: 10a8b72e8; end: 10a8b7527;  */

void FUN_10a8b72e8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67fca3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f67fb58;
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
  puStack_98 = &UNK_10f67fcaf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8b7484(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3725f0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8b7484();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67fcb4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8b7484();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67fcbf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8b7484();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8b7528; end: 10a8b760b;  */

undefined8 * FUN_10a8b7528(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x4f] = &PTR_FUN_110c383b8;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  puVar1 = param_1;
  FUN_10a38a7f0(param_1,&PTR_PTR_110c25e30,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x41,&PTR_PTR_110c25e50);
  *param_1 = &PTR_FUN_110c25ae8;
  param_1[2] = &PTR_DAT_110c25c28;
  param_1[7] = &PTR_DAT_110c25c80;
  param_1[0xd] = &PTR_DAT_110c25ca0;
  param_1[0x4f] = &PTR_DAT_110c25df0;
  param_1[0x16] = &PTR_DAT_110c25d10;
  param_1[0x17] = &PTR_DAT_110c25d40;
  param_1[0x41] = &PTR_DAT_110c25d78;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)((long)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined4 *)((long)param_1 + 0x271) = 0;
  *(undefined2 *)((long)param_1 + 0x275) = 0;
  return param_1;
}



/* Entry: 10a8b760c; end: 10a8b7717;  */

void FUN_10a8b760c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c25ae8;
  param_1[2] = &PTR_DAT_110c25c28;
  param_1[7] = &PTR_DAT_110c25c80;
  param_1[0xd] = &PTR_DAT_110c25ca0;
  param_1[0x4f] = &PTR_DAT_110c25df0;
  param_1[0x16] = &PTR_DAT_110c25d10;
  param_1[0x17] = &PTR_DAT_110c25d40;
  param_1[0x41] = &PTR_DAT_110c25d78;
  func_0x00010a07a8a8(param_1 + 0x4c);
  func_0x00010a07a8a8(param_1 + 0x4a);
  if ((ulong)*(byte *)((long)param_1 + 0x24c) < 3) {
    (*(code *)(&PTR_FUN_110c2b510)[*(byte *)((long)param_1 + 0x24c)])(param_1 + 0x48);
    func_0x00010a761ebc(param_1 + 0x46);
    param_1[0x41] = &PTR_DAT_110c281c0;
    param_1[0x4f] = &PTR_FUN_110c28238;
    func_0x00010a004e5c(param_1 + 0x44);
    func_0x00010a004e04(param_1 + 0x42);
    *param_1 = &PTR_FUN_110c27eb8;
    param_1[2] = &PTR_DAT_110bcf758;
    param_1[7] = &PTR_DAT_110bcf7b0;
    param_1[0xd] = &PTR_DAT_110bcf7d0;
    param_1[0x4f] = &PTR_DAT_110c27ff0;
    param_1[0x16] = &PTR_DAT_110bcf840;
    param_1[0x17] = &PTR_DAT_110bcf870;
    func_0x00010a004e5c(param_1 + 0x3f);
    *param_1 = &PTR_FUN_110c28040;
    param_1[2] = &PTR_DAT_110bcfec8;
    param_1[7] = &PTR_DAT_110bcff20;
    param_1[0xd] = &PTR_DAT_110bcff40;
    param_1[0x16] = &PTR_DAT_110bcffb0;
    param_1[0x4f] = &PTR_DAT_110c28170;
    param_1[0x17] = &PTR_DAT_110bcffe0;
    FUN_10a044790(param_1 + 0x35);
    (**(code **)param_1[0x36])(param_1 + 0x36);
    func_0x00010a004e5c(param_1 + 0x33);
    if (*(char *)((long)param_1 + 0x167) < '\0') {
      __ZdlPv(param_1[0x2a]);
    }
    param_1[0x17] = &PTR_DAT_110bd14c8;
    FUN_10a1c0934(param_1 + 0x17);
    lVar2 = param_1[0x14];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x15];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x13];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    lVar2 = param_1[0x10];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x11];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
    }
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0xf];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    puStack_28 = param_1 + 10;
    FUN_10a3ebf4c(&puStack_28);
    FUN_10a572f54(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8b7718);
  (*pcVar1)();
}



/* Entry: 10a8b7718; end: 10a8b775b;  */

void FUN_10a8b7718(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c25ae8;
  param_1[2] = &PTR_DAT_110c25c28;
  param_1[7] = &PTR_DAT_110c25c80;
  param_1[0xd] = &PTR_DAT_110c25ca0;
  param_1[0x4f] = &PTR_DAT_110c25df0;
  param_1[0x16] = &PTR_DAT_110c25d10;
  param_1[0x17] = &PTR_DAT_110c25d40;
  param_1[0x41] = &PTR_DAT_110c25d78;
  func_0x00010a07a8a8(param_1 + 0x4c);
  func_0x00010a07a8a8(param_1 + 0x4a);
  if ((ulong)*(byte *)((long)param_1 + 0x24c) < 3) {
    (*(code *)(&PTR_FUN_110c2b510)[*(byte *)((long)param_1 + 0x24c)])(param_1 + 0x48);
    func_0x00010a761ebc(param_1 + 0x46);
    param_1[0x41] = &PTR_DAT_110c281c0;
    param_1[0x4f] = &PTR_FUN_110c28238;
    func_0x00010a004e5c(param_1 + 0x44);
    func_0x00010a004e04(param_1 + 0x42);
    *param_1 = &PTR_FUN_110c27eb8;
    param_1[2] = &PTR_DAT_110bcf758;
    param_1[7] = &PTR_DAT_110bcf7b0;
    param_1[0xd] = &PTR_DAT_110bcf7d0;
    param_1[0x4f] = &PTR_DAT_110c27ff0;
    param_1[0x16] = &PTR_DAT_110bcf840;
    param_1[0x17] = &PTR_DAT_110bcf870;
    func_0x00010a004e5c(param_1 + 0x3f);
    *param_1 = &PTR_FUN_110c28040;
    param_1[2] = &PTR_DAT_110bcfec8;
    param_1[7] = &PTR_DAT_110bcff20;
    param_1[0xd] = &PTR_DAT_110bcff40;
    param_1[0x16] = &PTR_DAT_110bcffb0;
    param_1[0x4f] = &PTR_DAT_110c28170;
    param_1[0x17] = &PTR_DAT_110bcffe0;
    FUN_10a044790(param_1 + 0x35);
    (**(code **)param_1[0x36])(param_1 + 0x36);
    func_0x00010a004e5c(param_1 + 0x33);
    if (*(char *)((long)param_1 + 0x167) < '\0') {
      __ZdlPv(param_1[0x2a]);
    }
    param_1[0x17] = &PTR_DAT_110bd14c8;
    FUN_10a1c0934(param_1 + 0x17);
    lVar2 = param_1[0x14];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x15];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x13];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    lVar2 = param_1[0x10];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0x11];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
    }
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
      plVar3 = (long *)param_1[0xf];
      *plVar3 = lVar2;
      *(long **)(lVar2 + 8) = plVar3;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    puStack_28 = param_1 + 10;
    FUN_10a3ebf4c(&puStack_28);
    FUN_10a572f54(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8b7718);
  (*pcVar1)();
}



/* Entry: 10a8b775c; end: 10a8b77ff;  */

void FUN_10a8b775c(void)

{
  FUN_10a8b760c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8b7800; end: 10a8b782f;  */

void FUN_10a8b7800(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a8b760c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8b7830; end: 10a8b7987;  */

void FUN_10a8b7830(long *param_1)

{
  long *plVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  
  if (*(int *)(*(long *)(param_1[0x2e] + 0x100) + 0x2a8) - 7U < 2) {
    plVar5 = param_1;
    FUN_10a8d40c0();
    uVar7 = (uint)plVar5;
    FUN_10a8d40c0();
    uVar7 = uVar7 >> 2 & 1;
    if (((uint)plVar5 >> 1 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x275) & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar3 = *(byte **)(*(long *)(param_1[0x2e] + 0x8b8) + 0x20);
      if (pbVar3 == (byte *)0x0) {
        if ((*(byte *)((long)param_1 + 0x275) & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        FUN_10a8b7988(pbVar3,&UNK_10f680bf1,0x1e);
        if ((*(byte *)((long)param_1 + 0x275) & 1) == 0) {
          if ((*pbVar3 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar5 = param_1;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar5 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x275) & 1) == 0) goto LAB_10a8b7918;
    uVar7 = 0;
  }
  plVar5 = param_1;
  FUN_10a8b7a80();
  FUN_10a8c6f54(*(long *)(*plVar5 + 0x10),*(undefined1 *)(*(long *)(*plVar5 + 0x10) + 0x2e8));
  if (((*(byte *)((long)param_1 + 0x276) & 1) != 0) || (uVar7 != 0)) {
    FUN_10a8b7b10(param_1,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar4 = *(long *)(*param_1 + 0x10);
  plVar5 = *(long **)(lVar4 + 0x38);
  while (plVar5 != (long *)(lVar4 + 0x40)) {
    FUN_10a8b7bb0(plVar5[7]);
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b7988; end: 10a8b7a7f;  */

long FUN_10a8b7988(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  undefined1 uStack_81;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    __Unwind_Resume();
    if (*(long *)(param_1 + 0x230) == 0) {
      uStack_a0 = *(undefined8 *)(param_1 + 0x170);
      FUN_10a761f14(auStack_98,&uStack_81,&uStack_a0);
      FUN_10a74bcf4(param_1 + 0x230,auStack_98);
      if (plStack_90 != (long *)0x0) {
        plVar1 = plStack_90 + 1;
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
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
    }
    return param_1 + 0x230;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar5 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10a8b7a08;
  }
  else {
    pppuVar2 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar2 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar5 = pppuVar2;
    __Znwm();
    uStack_48 = (ulong)pppuVar2 | 0x8000000000000000;
    ppuStack_58 = pppuVar5;
    uStack_50 = param_3;
  }
  _memmove(pppuVar5,param_2,param_3);
LAB_10a8b7a08:
  *(undefined1 *)((long)pppuVar5 + param_3) = 0;
  param_1 = param_1 + 0x38;
  FUN_10a54a2c0(param_1,&ppuStack_58);
  if (param_1 == 0) {
    FUN_10a8e00fc();
  }
  else {
    param_1 = param_1 + 0x28;
    FUN_10a8e00b0(param_1);
  }
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return param_1;
}



/* Entry: 10a8b7a80; end: 10a8b7b0f;  */

long FUN_10a8b7a80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x230) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a761f14(auStack_38,&uStack_21,&uStack_40);
    FUN_10a74bcf4(param_1 + 0x230,auStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return param_1 + 0x230;
}



/* Entry: 10a8b7b10; end: 10a8b7baf;  */

void FUN_10a8b7b10(undefined8 param_1,undefined4 param_2,long param_3,undefined1 param_4,int param_5
                  ,int param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  byte *pbVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  undefined4 uVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  
  if ((*(long *)(param_3 + 0x230) == 0) ||
     (*(int *)(*(long *)(*(long *)(param_3 + 0x230) + 0x10) + 0x140) != 1)) {
    if ((ulong)*(byte *)(param_3 + 0x24c) < 3) {
      (*(code *)(&PTR_FUN_110c2b510)[*(byte *)(param_3 + 0x24c)])(param_3 + 0x240);
      *(undefined1 *)(param_3 + 0x240) = param_4;
      *(int *)(param_3 + 0x244) = param_5;
      *(int *)(param_3 + 0x248) = param_6;
      *(undefined1 *)(param_3 + 0x24c) = 1;
      *(bool *)(param_3 + 0x271) = param_5 != param_6;
      *(undefined1 *)(param_3 + 0x272) = 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8b7ba4);
    (*pcVar2)();
  }
  puVar6 = &UNK_10f67ff6d;
  FUN_10a00946c();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar6[0x1a4] == '\x01') {
    puVar6[0x1a4] = 0;
  }
  if ((((puVar6[0x128] == '\x01') && (*(long *)(puVar6 + 0x108) != 0)) &&
      (*(long *)(puVar6 + 0xf8) == 0)) &&
     ((plVar7 = *(long **)(*(long *)(puVar6 + 0x108) + 0x268), plVar7 != (long *)0x0 &&
      (___dynamic_cast(plVar7,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0), plVar7 != (long *)0x0)))) {
    lVar10 = *(long *)(puVar6 + 0x58);
    if ((lVar10 != 0) &&
       ((((*(byte *)(lVar10 + 100) & 1) != 0 || ((*(byte *)(lVar10 + 0x65) & 1) != 0)) ||
        ((*(char *)(lVar10 + 0x60) != '\0' || ((*(byte *)(lVar10 + 99) & 1) == 0)))))) {
      FUN_10a8bb1fc();
      pbVar5 = (byte *)(*plVar7 + 0x2c0);
      FUN_10a08fec0();
      if ((*pbVar5 >> 2 & 1) == 0) goto LAB_10a8b7c00;
    }
    lVar10 = *(long *)(puVar6 + 0x118);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x60) != '\0')) goto LAB_10a8b7c00;
    lVar12 = *(long *)(puVar6 + 0x58);
    if (lVar12 == 0) {
      uVar8 = 0;
      uVar11 = 0;
    }
    else if (((((*(byte *)(lVar12 + 100) & 1) == 0) && ((*(byte *)(lVar12 + 0x65) & 1) == 0)) &&
             (*(char *)(lVar12 + 0x60) == '\0')) && ((*(byte *)(lVar12 + 99) & 1) != 0)) {
      uVar8 = 0;
      uVar11 = 0;
    }
    else {
      uVar8 = *(undefined1 *)(lVar12 + 0x50);
      uStack_70 = *(undefined8 *)(lVar12 + 0x51);
      uStack_68 = (undefined7)*(undefined8 *)(lVar12 + 0x59);
      uStack_61 = (undefined1)*(undefined8 *)(lVar12 + 0x60);
      uStack_60 = (undefined7)((ulong)*(undefined8 *)(lVar12 + 0x60) >> 8);
      uVar11 = 1;
    }
    if (lVar10 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined1 *)(lVar10 + 0x50);
      uStack_90 = *(undefined8 *)(lVar10 + 0x51);
      uStack_88 = (undefined3)*(undefined8 *)(lVar10 + 0x59);
      uStack_7d = *(undefined8 *)(lVar10 + 100);
      uStack_85 = (undefined5)*(undefined8 *)(lVar10 + 0x5c);
      uStack_80 = (undefined3)((ulong)*(undefined8 *)(lVar10 + 0x5c) >> 0x28);
    }
    lVar12 = *(long *)(puVar6 + 0xf8);
    if (lVar12 == 0) {
      plVar7 = (long *)(puVar6 + 0x108);
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(*(long *)(lVar12 + 0x298) + 0x2c);
      uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0x298) + 0x24);
      param_2 = *(undefined4 *)(lVar12 + 0x2a8);
      plVar7 = (long *)(lVar12 + 0x288);
    }
    lVar14 = *(long *)(*plVar7 + 0x268);
    if (*(char *)(lVar14 + 0x334) == '\x01') {
      uVar15 = *(undefined4 *)(lVar14 + 0x2d0);
    }
    else {
      uVar15 = 0x7fffffff;
    }
    if (*(int *)(puVar6 + 0x50) - 1U < 4) {
      uVar1 = *(undefined4 *)(&UNK_10e496020 + (ulong)(*(int *)(puVar6 + 0x50) - 1U) * 4);
      *(undefined4 *)(puVar6 + 0x140) = uVar15;
      *(undefined4 *)(puVar6 + 0x144) = uVar1;
      *(undefined8 *)(puVar6 + 0x148) = *(undefined8 *)(puVar6 + 0x48);
      puVar6[0x150] = uVar8;
      *(ulong *)(puVar6 + 0x160) = CONCAT71(uStack_60,uStack_61);
      *(ulong *)(puVar6 + 0x159) = CONCAT17(uStack_61,uStack_68);
      *(undefined8 *)(puVar6 + 0x151) = uStack_70;
      puVar6[0x168] = uVar11;
      puVar6[0x16c] = uVar13;
      *(ulong *)(puVar6 + 0x175) = CONCAT53(uStack_85,uStack_88);
      *(undefined8 *)(puVar6 + 0x16d) = uStack_90;
      *(undefined8 *)(puVar6 + 0x180) = uStack_7d;
      *(ulong *)(puVar6 + 0x178) = CONCAT35(uStack_80,uStack_85);
      puVar6[0x188] = lVar10 != 0;
      *(undefined8 *)(puVar6 + 0x194) = uVar19;
      *(undefined8 *)(puVar6 + 0x18c) = uVar18;
      *(undefined4 *)(puVar6 + 0x19c) = param_2;
      puVar6[0x1a0] = lVar12 != 0;
      if (puVar6[0x1a4] == '\x01') {
        if ((*(byte *)(lVar14 + 0x334) & 1) != 0) {
LAB_10a8b7e00:
          uVar19 = *(undefined8 *)(puVar6 + 0x148);
          uVar18 = *(undefined8 *)(puVar6 + 0x140);
          uVar20 = *(undefined8 *)(puVar6 + 0x150);
          uVar22 = *(undefined8 *)(puVar6 + 0x168);
          uVar21 = *(undefined8 *)(puVar6 + 0x160);
          *(undefined8 *)(lVar14 + 0x2e8) = *(undefined8 *)(puVar6 + 0x158);
          *(undefined8 *)(lVar14 + 0x2e0) = uVar20;
          *(undefined8 *)(lVar14 + 0x2f8) = uVar22;
          *(undefined8 *)(lVar14 + 0x2f0) = uVar21;
          *(undefined8 *)(lVar14 + 0x2d8) = uVar19;
          *(undefined8 *)(lVar14 + 0x2d0) = uVar18;
          uVar19 = *(undefined8 *)(puVar6 + 0x178);
          uVar18 = *(undefined8 *)(puVar6 + 0x170);
          uVar21 = *(undefined8 *)(puVar6 + 0x188);
          uVar20 = *(undefined8 *)(puVar6 + 0x180);
          uVar23 = *(undefined8 *)(puVar6 + 0x198);
          uVar22 = *(undefined8 *)(puVar6 + 400);
          *(undefined4 *)(lVar14 + 0x330) = *(undefined4 *)(puVar6 + 0x1a0);
          *(undefined8 *)(lVar14 + 0x318) = uVar21;
          *(undefined8 *)(lVar14 + 0x310) = uVar20;
          *(undefined8 *)(lVar14 + 0x328) = uVar23;
          *(undefined8 *)(lVar14 + 800) = uVar22;
          *(undefined8 *)(lVar14 + 0x308) = uVar19;
          *(undefined8 *)(lVar14 + 0x300) = uVar18;
        }
      }
      else {
        puVar6[0x1a4] = 1;
        if (*(char *)(lVar14 + 0x334) == '\x01') goto LAB_10a8b7e00;
      }
      goto LAB_10a8b7c00;
    }
  }
  else {
LAB_10a8b7c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar6 = &UNK_10f6818d6;
  FUN_10a00946c();
  plVar7 = (long *)(puVar6 + -0x68);
  if (*(int *)(*(long *)(*(long *)(puVar6 + 0x108) + 0x100) + 0x2a8) - 7U < 2) {
    plVar4 = plVar7;
    FUN_10a8d40c0();
    uVar17 = (uint)plVar4;
    FUN_10a8d40c0();
    uVar17 = uVar17 >> 2 & 1;
    if (((uint)plVar4 >> 1 & 1) == 0) {
      if ((puVar6[0x20d] & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar5 = *(byte **)(*(long *)(*(long *)(puVar6 + 0x108) + 0x8b8) + 0x20);
      if (pbVar5 == (byte *)0x0) {
        if ((puVar6[0x20d] & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        FUN_10a8b7988(pbVar5,&UNK_10f680bf1,0x1e);
        if ((puVar6[0x20d] & 1) == 0) {
          if ((*pbVar5 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar4 = plVar7;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar4 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((puVar6[0x20d] & 1) == 0) goto LAB_10a8b7918;
    uVar17 = 0;
  }
  plVar4 = plVar7;
  FUN_10a8b7a80();
  FUN_10a8c6f54(*(long *)(*plVar4 + 0x10),*(undefined1 *)(*(long *)(*plVar4 + 0x10) + 0x2e8));
  if (((puVar6[0x20e] & 1) != 0) || (uVar17 != 0)) {
    FUN_10a8b7b10(plVar7,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar9 = *(long *)(*plVar7 + 0x10);
  plVar7 = *(long **)(lVar9 + 0x38);
  while (plVar7 != (long *)(lVar9 + 0x40)) {
    FUN_10a8b7bb0(plVar7[7]);
    plVar4 = (long *)plVar7[1];
    plVar16 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar16[2];
        bVar3 = (long *)*plVar7 != plVar16;
        plVar16 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b7bb0; end: 10a8b7e3f;  */

void FUN_10a8b7bb0(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  long *plVar3;
  byte *pbVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_60;
  undefined3 uStack_58;
  undefined5 uStack_55;
  undefined3 uStack_50;
  undefined8 uStack_4d;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_3 + 0x1a4) == '\x01') {
    *(undefined1 *)(param_3 + 0x1a4) = 0;
  }
  if ((((*(char *)(param_3 + 0x128) == '\x01') && (*(long *)(param_3 + 0x108) != 0)) &&
      (*(long *)(param_3 + 0xf8) == 0)) &&
     ((plVar6 = *(long **)(*(long *)(param_3 + 0x108) + 0x268), plVar6 != (long *)0x0 &&
      (___dynamic_cast(plVar6,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0), plVar6 != (long *)0x0)))) {
    lVar9 = *(long *)(param_3 + 0x58);
    if ((lVar9 != 0) &&
       ((((*(byte *)(lVar9 + 100) & 1) != 0 || ((*(byte *)(lVar9 + 0x65) & 1) != 0)) ||
        ((*(char *)(lVar9 + 0x60) != '\0' || ((*(byte *)(lVar9 + 99) & 1) == 0)))))) {
      FUN_10a8bb1fc();
      pbVar4 = (byte *)(*plVar6 + 0x2c0);
      FUN_10a08fec0();
      if ((*pbVar4 >> 2 & 1) == 0) goto LAB_10a8b7c00;
    }
    lVar9 = *(long *)(param_3 + 0x118);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x60) != '\0')) goto LAB_10a8b7c00;
    lVar11 = *(long *)(param_3 + 0x58);
    if (lVar11 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else if (((((*(byte *)(lVar11 + 100) & 1) == 0) && ((*(byte *)(lVar11 + 0x65) & 1) == 0)) &&
             (*(char *)(lVar11 + 0x60) == '\0')) && ((*(byte *)(lVar11 + 99) & 1) != 0)) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(lVar11 + 0x50);
      uStack_40 = *(undefined8 *)(lVar11 + 0x51);
      uStack_38 = (undefined7)*(undefined8 *)(lVar11 + 0x59);
      uStack_31 = (undefined1)*(undefined8 *)(lVar11 + 0x60);
      uStack_30 = (undefined7)((ulong)*(undefined8 *)(lVar11 + 0x60) >> 8);
      uVar10 = 1;
    }
    if (lVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined1 *)(lVar9 + 0x50);
      uStack_60 = *(undefined8 *)(lVar9 + 0x51);
      uStack_58 = (undefined3)*(undefined8 *)(lVar9 + 0x59);
      uStack_4d = *(undefined8 *)(lVar9 + 100);
      uStack_55 = (undefined5)*(undefined8 *)(lVar9 + 0x5c);
      uStack_50 = (undefined3)((ulong)*(undefined8 *)(lVar9 + 0x5c) >> 0x28);
    }
    lVar11 = *(long *)(param_3 + 0xf8);
    if (lVar11 == 0) {
      plVar6 = (long *)(param_3 + 0x108);
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar11 + 0x298) + 0x2c);
      uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0x298) + 0x24);
      param_2 = *(undefined4 *)(lVar11 + 0x2a8);
      plVar6 = (long *)(lVar11 + 0x288);
    }
    lVar13 = *(long *)(*plVar6 + 0x268);
    if (*(char *)(lVar13 + 0x334) == '\x01') {
      uVar14 = *(undefined4 *)(lVar13 + 0x2d0);
    }
    else {
      uVar14 = 0x7fffffff;
    }
    uVar16 = *(int *)(param_3 + 0x50) - 1;
    if (uVar16 < 4) {
      uVar1 = *(undefined4 *)(&UNK_10e496020 + (ulong)uVar16 * 4);
      *(undefined4 *)(param_3 + 0x140) = uVar14;
      *(undefined4 *)(param_3 + 0x144) = uVar1;
      *(undefined8 *)(param_3 + 0x148) = *(undefined8 *)(param_3 + 0x48);
      *(undefined1 *)(param_3 + 0x150) = uVar7;
      *(ulong *)(param_3 + 0x160) = CONCAT71(uStack_30,uStack_31);
      *(ulong *)(param_3 + 0x159) = CONCAT17(uStack_31,uStack_38);
      *(undefined8 *)(param_3 + 0x151) = uStack_40;
      *(undefined1 *)(param_3 + 0x168) = uVar10;
      *(undefined1 *)(param_3 + 0x16c) = uVar12;
      *(ulong *)(param_3 + 0x175) = CONCAT53(uStack_55,uStack_58);
      *(undefined8 *)(param_3 + 0x16d) = uStack_60;
      *(undefined8 *)(param_3 + 0x180) = uStack_4d;
      *(ulong *)(param_3 + 0x178) = CONCAT35(uStack_50,uStack_55);
      *(bool *)(param_3 + 0x188) = lVar9 != 0;
      *(undefined8 *)(param_3 + 0x194) = uVar18;
      *(undefined8 *)(param_3 + 0x18c) = uVar17;
      *(undefined4 *)(param_3 + 0x19c) = param_2;
      *(bool *)(param_3 + 0x1a0) = lVar11 != 0;
      if (*(char *)(param_3 + 0x1a4) == '\x01') {
        if ((*(byte *)(lVar13 + 0x334) & 1) != 0) {
LAB_10a8b7e00:
          uVar18 = *(undefined8 *)(param_3 + 0x148);
          uVar17 = *(undefined8 *)(param_3 + 0x140);
          uVar19 = *(undefined8 *)(param_3 + 0x150);
          uVar21 = *(undefined8 *)(param_3 + 0x168);
          uVar20 = *(undefined8 *)(param_3 + 0x160);
          *(undefined8 *)(lVar13 + 0x2e8) = *(undefined8 *)(param_3 + 0x158);
          *(undefined8 *)(lVar13 + 0x2e0) = uVar19;
          *(undefined8 *)(lVar13 + 0x2f8) = uVar21;
          *(undefined8 *)(lVar13 + 0x2f0) = uVar20;
          *(undefined8 *)(lVar13 + 0x2d8) = uVar18;
          *(undefined8 *)(lVar13 + 0x2d0) = uVar17;
          uVar18 = *(undefined8 *)(param_3 + 0x178);
          uVar17 = *(undefined8 *)(param_3 + 0x170);
          uVar20 = *(undefined8 *)(param_3 + 0x188);
          uVar19 = *(undefined8 *)(param_3 + 0x180);
          uVar22 = *(undefined8 *)(param_3 + 0x198);
          uVar21 = *(undefined8 *)(param_3 + 400);
          *(undefined4 *)(lVar13 + 0x330) = *(undefined4 *)(param_3 + 0x1a0);
          *(undefined8 *)(lVar13 + 0x318) = uVar20;
          *(undefined8 *)(lVar13 + 0x310) = uVar19;
          *(undefined8 *)(lVar13 + 0x328) = uVar22;
          *(undefined8 *)(lVar13 + 800) = uVar21;
          *(undefined8 *)(lVar13 + 0x308) = uVar18;
          *(undefined8 *)(lVar13 + 0x300) = uVar17;
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x1a4) = 1;
        if (*(char *)(lVar13 + 0x334) == '\x01') goto LAB_10a8b7e00;
      }
      goto LAB_10a8b7c00;
    }
  }
  else {
LAB_10a8b7c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar5 = &UNK_10f6818d6;
  FUN_10a00946c();
  plVar6 = (long *)(puVar5 + -0x68);
  if (*(int *)(*(long *)(*(long *)(puVar5 + 0x108) + 0x100) + 0x2a8) - 7U < 2) {
    plVar3 = plVar6;
    FUN_10a8d40c0();
    uVar16 = (uint)plVar3;
    FUN_10a8d40c0();
    uVar16 = uVar16 >> 2 & 1;
    if (((uint)plVar3 >> 1 & 1) == 0) {
      if ((puVar5[0x20d] & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar4 = *(byte **)(*(long *)(*(long *)(puVar5 + 0x108) + 0x8b8) + 0x20);
      if (pbVar4 == (byte *)0x0) {
        if ((puVar5[0x20d] & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        FUN_10a8b7988(pbVar4,&UNK_10f680bf1,0x1e);
        if ((puVar5[0x20d] & 1) == 0) {
          if ((*pbVar4 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar3 = plVar6;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar3 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((puVar5[0x20d] & 1) == 0) goto LAB_10a8b7918;
    uVar16 = 0;
  }
  plVar3 = plVar6;
  FUN_10a8b7a80();
  FUN_10a8c6f54(*(long *)(*plVar3 + 0x10),*(undefined1 *)(*(long *)(*plVar3 + 0x10) + 0x2e8));
  if (((puVar5[0x20e] & 1) != 0) || (uVar16 != 0)) {
    FUN_10a8b7b10(plVar6,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar8 = *(long *)(*plVar6 + 0x10);
  plVar6 = *(long **)(lVar8 + 0x38);
  while (plVar6 != (long *)(lVar8 + 0x40)) {
    FUN_10a8b7bb0(plVar6[7]);
    plVar3 = (long *)plVar6[1];
    plVar15 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar15[2];
        bVar2 = (long *)*plVar6 != plVar15;
        plVar15 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b7e40; end: 10a8b7e47;  */

void FUN_10a8b7e40(long param_1)

{
  bool bVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  plVar4 = (long *)(param_1 + -0x68);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x2a8) - 7U < 2) {
    plVar2 = plVar4;
    FUN_10a8d40c0();
    uVar7 = (uint)plVar2;
    FUN_10a8d40c0();
    uVar7 = uVar7 >> 2 & 1;
    if (((uint)plVar2 >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x20d) & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar3 = *(byte **)(*(long *)(*(long *)(param_1 + 0x108) + 0x8b8) + 0x20);
      if (pbVar3 == (byte *)0x0) {
        if ((*(byte *)(param_1 + 0x20d) & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        FUN_10a8b7988(pbVar3,&UNK_10f680bf1,0x1e);
        if ((*(byte *)(param_1 + 0x20d) & 1) == 0) {
          if ((*pbVar3 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar2 = plVar4;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar2 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x20d) & 1) == 0) goto LAB_10a8b7918;
    uVar7 = 0;
  }
  plVar2 = plVar4;
  FUN_10a8b7a80();
  FUN_10a8c6f54(*(long *)(*plVar2 + 0x10),*(undefined1 *)(*(long *)(*plVar2 + 0x10) + 0x2e8));
  if (((*(byte *)(param_1 + 0x20e) & 1) != 0) || (uVar7 != 0)) {
    FUN_10a8b7b10(plVar4,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar5 = *(long *)(*plVar4 + 0x10);
  plVar4 = *(long **)(lVar5 + 0x38);
  while (plVar4 != (long *)(lVar5 + 0x40)) {
    FUN_10a8b7bb0(plVar4[7]);
    plVar2 = (long *)plVar4[1];
    plVar6 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar1 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar1);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b7e48; end: 10a8b7f17;  */

void FUN_10a8b7e48(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  uVar2 = 0;
  FUN_10a8b7a80();
  lVar3 = *(long *)(*param_1 + 0x10);
  if (*(char *)(lVar3 + 0x309) != '\x01') {
    return;
  }
  if ((*(byte *)(*(long *)(lVar3 + 8) + 0x1b1) & 1) == 0) {
    FUN_10a8c0dd8();
  }
  FUN_10a8d49b4(lVar3);
  FUN_10a8e03ac(auStack_38,lVar3 + 0x38);
  puVar1 = auStack_38;
  FUN_10a8db818(puVar1,*(undefined8 *)(*(long *)(lVar3 + 8) + 0x138),
                *(undefined8 *)(*(long *)(lVar3 + 8) + 0x140));
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010a8d4e78(uStack_30);
  }
  else {
    FUN_10a8e0560(auStack_50,lVar3 + 0x50);
    FUN_10a8db8dc(auStack_50,*(undefined8 *)(*(long *)(lVar3 + 8) + 0x150),
                  *(undefined8 *)(*(long *)(lVar3 + 8) + 0x158));
    func_0x00010a8d4ef4(uStack_48);
    func_0x00010a8d4e78(uStack_30);
    if ((uVar2 & 1) != 0) goto LAB_10a8b7ef0;
  }
  FUN_10a8d4a4c(lVar3);
LAB_10a8b7ef0:
  *(undefined1 *)(lVar3 + 0x309) = 0;
  return;
}



/* Entry: 10a8b7f18; end: 10a8b7f1f;  */

void FUN_10a8b7f18(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  plVar3 = (long *)(param_1 + -0x68);
  uVar2 = 0;
  FUN_10a8b7a80();
  lVar4 = *(long *)(*plVar3 + 0x10);
  if (*(char *)(lVar4 + 0x309) != '\x01') {
    return;
  }
  if ((*(byte *)(*(long *)(lVar4 + 8) + 0x1b1) & 1) == 0) {
    FUN_10a8c0dd8();
  }
  FUN_10a8d49b4(lVar4);
  FUN_10a8e03ac(auStack_38,lVar4 + 0x38);
  puVar1 = auStack_38;
  FUN_10a8db818(puVar1,*(undefined8 *)(*(long *)(lVar4 + 8) + 0x138),
                *(undefined8 *)(*(long *)(lVar4 + 8) + 0x140));
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010a8d4e78(uStack_30);
  }
  else {
    FUN_10a8e0560(auStack_50,lVar4 + 0x50);
    FUN_10a8db8dc(auStack_50,*(undefined8 *)(*(long *)(lVar4 + 8) + 0x150),
                  *(undefined8 *)(*(long *)(lVar4 + 8) + 0x158));
    func_0x00010a8d4ef4(uStack_48);
    func_0x00010a8d4e78(uStack_30);
    if ((uVar2 & 1) != 0) goto LAB_10a8b7ef0;
  }
  FUN_10a8d4a4c(lVar4);
LAB_10a8b7ef0:
  *(undefined1 *)(lVar4 + 0x309) = 0;
  return;
}



/* Entry: 10a8b7f20; end: 10a8b7fb3;  */

void FUN_10a8b7f20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x1f8),&PTR_DAT_110bcf9d0,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x208 + *(long *)(*(long *)(param_1 + 0x208) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x220);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x208);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a8b7fb4; end: 10a8b823f;  */

void FUN_10a8b7fb4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x1f8));
  plVar3 = *(long **)(param_1 + 0x220);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a8b8240; end: 10a8b8247;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c6a88) */
/* WARNING: Removing unreachable block (ram,0x00010a8c6a98) */

void FUN_10a8b8240(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auStack_80 [40];
  undefined8 *****pppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_1 + 0x1e4) == '\x01') && (*(char *)(param_1 + 0x1d8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x20a) = 1;
  }
  iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1c8) + 0x10);
  FUN_10a8c7000();
  if ((iVar12 != 0) && (*(char *)(param_1 + 0x1e4) != '\0')) {
    if (*(int *)(param_1 + 0x1dc) == 2) {
      iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1c8) + 0x10);
      FUN_10a8c6990();
      if (iVar12 != 0) {
        func_0x00010a8b81ac(param_1 + -0x68);
      }
    }
    if ((*(char *)(param_1 + 0x1e4) != '\0') && (*(int *)(param_1 + 0x1e0) == 2)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x1c8) + 0x10);
      if (plVar6[0x56] != 0) {
        plVar1 = plVar6 + 0x56;
        if ((0x146 < *(int *)(*(long *)(*plVar6 + 0xa20) + 0x18)) &&
           (((uint)*(undefined8 *)(plVar6[0x56] + 0x10) >> 5 & 1) != 0)) {
          pppppuStack_58 = (undefined8 ******)0x0;
          uStack_50 = 0;
          uStack_48 = 0;
          func_0x0001092af8bc(plVar1);
          if ((*(byte *)(*plVar1 + 0xc0) & 1) != 0) {
            plVar8 = (long *)(*plVar1 + 0x98);
            func_0x00010952d47c(auStack_80);
            func_0x000109379fe8(auStack_80);
            plVar6 = (long *)0x1;
            goto LAB_10a8c6bdc;
          }
LAB_10a8c6ef0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8c6ef4);
          (*pcVar5)();
        }
        if ((*(byte *)(plVar6 + 0x57) & 1) == 0) {
          plVar8 = (long *)0x77359400;
          plVar7 = plVar1;
          FUN_109d1a400();
          if ((int)plVar7 == 0) {
            do {
              plVar7 = (long *)&UNK_10f681289;
              FUN_10a00946c();
              iVar12 = (int)plVar8;
              if (iVar12 == 3) {
                ___cxa_begin_catch();
                if (((char)plVar6[0x59] == '\x01') &&
                   (((uint)*(undefined8 *)(plVar6[0x58] + 0x10) >> 1 & 1) != 0)) {
                  FUN_10a8d82c4(plVar6,&UNK_10f6812cf);
                  goto LAB_10a8c6ef0;
                }
                (**(code **)(*plVar7 + 0x10))();
                func_0x000107c2c4dc(&pppppuStack_58);
                *(undefined4 *)(plVar6 + 0x28) = 2;
                plVar8 = plVar7;
                if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                  plVar8 = plVar6 + 0x19;
                  (*(code *)*plVar8)(&pppppuStack_58);
                }
                ___cxa_end_catch();
              }
              else {
                ___cxa_begin_catch();
                if (iVar12 == 2) {
                  (**(code **)(*plVar7 + 0x10))();
                  func_0x000107c2c4dc(&pppppuStack_58);
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  plVar8 = plVar7;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
                else {
                  if (uStack_48 < 0) {
                    uStack_50 = 0x13;
                    ppppppuVar9 = (undefined8 ******)pppppuStack_58;
                  }
                  else {
                    uStack_48 = CONCAT17(0x13,(undefined7)uStack_48);
                    ppppppuVar9 = &pppppuStack_58;
                  }
                  *(undefined4 *)((long)ppppppuVar9 + 0xf) = 0x6c65646f;
                  ppppppuVar9[1] = (undefined8 *****)0x6f6d20676e696e6e;
                  *ppppppuVar9 = (undefined8 *****)0x757220726f727245;
                  *(undefined1 *)((long)ppppppuVar9 + 0x13) = 0;
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
              }
              plVar6 = (long *)0x0;
LAB_10a8c6bdc:
              plVar7 = (long *)*plVar1;
              if (plVar7 != (long *)0x0) {
                puVar2 = (ulong *)(plVar7 + 1);
                do {
                  uVar10 = *puVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar4) {
                    *puVar2 = uVar10 - 4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((uVar10 & 0x1fffffffc) == 4) {
                  do {
                    uVar10 = *puVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar4) {
                      *puVar2 = uVar10 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (uVar10 - 1 == 0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                }
              }
              *plVar1 = 0;
              if (uStack_48 < 0) {
                __ZdlPv(pppppuStack_58);
              }
              if ((int)plVar6 == 0) {
                return;
              }
            } while( true );
          }
        }
        else {
          plVar8 = plVar6;
          __ZNSt3__16chrono12steady_clock3nowEv();
          plVar7 = plVar1;
          FUN_109d1a244();
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((2000000000 < (long)plVar7 - (long)plVar8) && ((bRam000000011330a9e8 >> 1 & 1) != 0))
          {
            plVar11 = plVar6 + 0x5a;
            if (*(char *)((long)plVar6 + 0x2e7) < '\0') {
              plVar11 = (long *)*plVar11;
            }
            func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f681319,0x2e6,&UNK_10f6813b1,in_x6,in_x7,
                                (ulong)((long)plVar7 - (long)plVar8) / 1000000,2000,plVar11);
          }
        }
        func_0x00010a8d7168(auStack_80,plVar1);
        func_0x0001093f2488(plVar6 + 0x23,auStack_80);
        func_0x000109379fe8(auStack_80);
        *(undefined4 *)(plVar6 + 0x28) = 2;
        FUN_10a8d7414(plVar6);
      }
      return;
    }
  }
  return;
}



/* Entry: 10a8b8248; end: 10a8b82cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c6a88) */
/* WARNING: Removing unreachable block (ram,0x00010a8c6a98) */

void FUN_10a8b8248(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auStack_80 [40];
  undefined8 *****pppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x230) + 0x10);
  FUN_10a8c7000();
  if ((iVar12 != 0) && (*(char *)(param_1 + 0x24c) != '\0')) {
    if (*(int *)(param_1 + 0x244) == 3) {
      iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x230) + 0x10);
      FUN_10a8c6990();
      if (iVar12 != 0) {
        func_0x00010a8b81ac(param_1);
      }
    }
    if ((*(char *)(param_1 + 0x24c) != '\0') && (*(int *)(param_1 + 0x248) == 3)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x230) + 0x10);
      if (plVar6[0x56] != 0) {
        plVar1 = plVar6 + 0x56;
        if ((0x146 < *(int *)(*(long *)(*plVar6 + 0xa20) + 0x18)) &&
           (((uint)*(undefined8 *)(plVar6[0x56] + 0x10) >> 5 & 1) != 0)) {
          pppppuStack_58 = (undefined8 ******)0x0;
          uStack_50 = 0;
          uStack_48 = 0;
          func_0x0001092af8bc(plVar1);
          if ((*(byte *)(*plVar1 + 0xc0) & 1) != 0) {
            plVar8 = (long *)(*plVar1 + 0x98);
            func_0x00010952d47c(auStack_80);
            func_0x000109379fe8(auStack_80);
            plVar6 = (long *)0x1;
            goto LAB_10a8c6bdc;
          }
LAB_10a8c6ef0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8c6ef4);
          (*pcVar5)();
        }
        if ((*(byte *)(plVar6 + 0x57) & 1) == 0) {
          plVar8 = (long *)0x77359400;
          plVar7 = plVar1;
          FUN_109d1a400();
          if ((int)plVar7 == 0) {
            do {
              plVar7 = (long *)&UNK_10f681289;
              FUN_10a00946c();
              iVar12 = (int)plVar8;
              if (iVar12 == 3) {
                ___cxa_begin_catch();
                if (((char)plVar6[0x59] == '\x01') &&
                   (((uint)*(undefined8 *)(plVar6[0x58] + 0x10) >> 1 & 1) != 0)) {
                  FUN_10a8d82c4(plVar6,&UNK_10f6812cf);
                  goto LAB_10a8c6ef0;
                }
                (**(code **)(*plVar7 + 0x10))();
                func_0x000107c2c4dc(&pppppuStack_58);
                *(undefined4 *)(plVar6 + 0x28) = 2;
                plVar8 = plVar7;
                if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                  plVar8 = plVar6 + 0x19;
                  (*(code *)*plVar8)(&pppppuStack_58);
                }
                ___cxa_end_catch();
              }
              else {
                ___cxa_begin_catch();
                if (iVar12 == 2) {
                  (**(code **)(*plVar7 + 0x10))();
                  func_0x000107c2c4dc(&pppppuStack_58);
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  plVar8 = plVar7;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
                else {
                  if (uStack_48 < 0) {
                    uStack_50 = 0x13;
                    ppppppuVar9 = (undefined8 ******)pppppuStack_58;
                  }
                  else {
                    uStack_48 = CONCAT17(0x13,(undefined7)uStack_48);
                    ppppppuVar9 = &pppppuStack_58;
                  }
                  *(undefined4 *)((long)ppppppuVar9 + 0xf) = 0x6c65646f;
                  ppppppuVar9[1] = (undefined8 *****)0x6f6d20676e696e6e;
                  *ppppppuVar9 = (undefined8 *****)0x757220726f727245;
                  *(undefined1 *)((long)ppppppuVar9 + 0x13) = 0;
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
              }
              plVar6 = (long *)0x0;
LAB_10a8c6bdc:
              plVar7 = (long *)*plVar1;
              if (plVar7 != (long *)0x0) {
                puVar2 = (ulong *)(plVar7 + 1);
                do {
                  uVar10 = *puVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar4) {
                    *puVar2 = uVar10 - 4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((uVar10 & 0x1fffffffc) == 4) {
                  do {
                    uVar10 = *puVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar4) {
                      *puVar2 = uVar10 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (uVar10 - 1 == 0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                }
              }
              *plVar1 = 0;
              if (uStack_48 < 0) {
                __ZdlPv(pppppuStack_58);
              }
              if ((int)plVar6 == 0) {
                return;
              }
            } while( true );
          }
        }
        else {
          plVar8 = plVar6;
          __ZNSt3__16chrono12steady_clock3nowEv();
          plVar7 = plVar1;
          FUN_109d1a244();
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((2000000000 < (long)plVar7 - (long)plVar8) && ((bRam000000011330a9e8 >> 1 & 1) != 0))
          {
            plVar11 = plVar6 + 0x5a;
            if (*(char *)((long)plVar6 + 0x2e7) < '\0') {
              plVar11 = (long *)*plVar11;
            }
            func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f681319,0x2e6,&UNK_10f6813b1,in_x6,in_x7,
                                (ulong)((long)plVar7 - (long)plVar8) / 1000000,2000,plVar11);
          }
        }
        func_0x00010a8d7168(auStack_80,plVar1);
        func_0x0001093f2488(plVar6 + 0x23,auStack_80);
        func_0x000109379fe8(auStack_80);
        *(undefined4 *)(plVar6 + 0x28) = 2;
        FUN_10a8d7414(plVar6);
      }
      return;
    }
  }
  return;
}



/* Entry: 10a8b82cc; end: 10a8b82d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c6a88) */
/* WARNING: Removing unreachable block (ram,0x00010a8c6a98) */

void FUN_10a8b82cc(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auStack_80 [40];
  undefined8 *****pppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1c8) + 0x10);
  FUN_10a8c7000();
  if ((iVar12 != 0) && (*(char *)(param_1 + 0x1e4) != '\0')) {
    if (*(int *)(param_1 + 0x1dc) == 3) {
      iVar12 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1c8) + 0x10);
      FUN_10a8c6990();
      if (iVar12 != 0) {
        func_0x00010a8b81ac(param_1 + -0x68);
      }
    }
    if ((*(char *)(param_1 + 0x1e4) != '\0') && (*(int *)(param_1 + 0x1e0) == 3)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x1c8) + 0x10);
      if (plVar6[0x56] != 0) {
        plVar1 = plVar6 + 0x56;
        if ((0x146 < *(int *)(*(long *)(*plVar6 + 0xa20) + 0x18)) &&
           (((uint)*(undefined8 *)(plVar6[0x56] + 0x10) >> 5 & 1) != 0)) {
          pppppuStack_58 = (undefined8 ******)0x0;
          uStack_50 = 0;
          uStack_48 = 0;
          func_0x0001092af8bc(plVar1);
          if ((*(byte *)(*plVar1 + 0xc0) & 1) != 0) {
            plVar8 = (long *)(*plVar1 + 0x98);
            func_0x00010952d47c(auStack_80);
            func_0x000109379fe8(auStack_80);
            plVar6 = (long *)0x1;
            goto LAB_10a8c6bdc;
          }
LAB_10a8c6ef0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8c6ef4);
          (*pcVar5)();
        }
        if ((*(byte *)(plVar6 + 0x57) & 1) == 0) {
          plVar8 = (long *)0x77359400;
          plVar7 = plVar1;
          FUN_109d1a400();
          if ((int)plVar7 == 0) {
            do {
              plVar7 = (long *)&UNK_10f681289;
              FUN_10a00946c();
              iVar12 = (int)plVar8;
              if (iVar12 == 3) {
                ___cxa_begin_catch();
                if (((char)plVar6[0x59] == '\x01') &&
                   (((uint)*(undefined8 *)(plVar6[0x58] + 0x10) >> 1 & 1) != 0)) {
                  FUN_10a8d82c4(plVar6,&UNK_10f6812cf);
                  goto LAB_10a8c6ef0;
                }
                (**(code **)(*plVar7 + 0x10))();
                func_0x000107c2c4dc(&pppppuStack_58);
                *(undefined4 *)(plVar6 + 0x28) = 2;
                plVar8 = plVar7;
                if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                  plVar8 = plVar6 + 0x19;
                  (*(code *)*plVar8)(&pppppuStack_58);
                }
                ___cxa_end_catch();
              }
              else {
                ___cxa_begin_catch();
                if (iVar12 == 2) {
                  (**(code **)(*plVar7 + 0x10))();
                  func_0x000107c2c4dc(&pppppuStack_58);
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  plVar8 = plVar7;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
                else {
                  if (uStack_48 < 0) {
                    uStack_50 = 0x13;
                    ppppppuVar9 = (undefined8 ******)pppppuStack_58;
                  }
                  else {
                    uStack_48 = CONCAT17(0x13,(undefined7)uStack_48);
                    ppppppuVar9 = &pppppuStack_58;
                  }
                  *(undefined4 *)((long)ppppppuVar9 + 0xf) = 0x6c65646f;
                  ppppppuVar9[1] = (undefined8 *****)0x6f6d20676e696e6e;
                  *ppppppuVar9 = (undefined8 *****)0x757220726f727245;
                  *(undefined1 *)((long)ppppppuVar9 + 0x13) = 0;
                  *(undefined4 *)(plVar6 + 0x28) = 2;
                  if (*(char *)(plVar6[0x1a] + 8) == '\x01') {
                    plVar8 = plVar6 + 0x19;
                    (*(code *)*plVar8)(&pppppuStack_58);
                  }
                  ___cxa_end_catch();
                }
              }
              plVar6 = (long *)0x0;
LAB_10a8c6bdc:
              plVar7 = (long *)*plVar1;
              if (plVar7 != (long *)0x0) {
                puVar2 = (ulong *)(plVar7 + 1);
                do {
                  uVar10 = *puVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar4) {
                    *puVar2 = uVar10 - 4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((uVar10 & 0x1fffffffc) == 4) {
                  do {
                    uVar10 = *puVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar4) {
                      *puVar2 = uVar10 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (uVar10 - 1 == 0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                }
              }
              *plVar1 = 0;
              if (uStack_48 < 0) {
                __ZdlPv(pppppuStack_58);
              }
              if ((int)plVar6 == 0) {
                return;
              }
            } while( true );
          }
        }
        else {
          plVar8 = plVar6;
          __ZNSt3__16chrono12steady_clock3nowEv();
          plVar7 = plVar1;
          FUN_109d1a244();
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((2000000000 < (long)plVar7 - (long)plVar8) && ((bRam000000011330a9e8 >> 1 & 1) != 0))
          {
            plVar11 = plVar6 + 0x5a;
            if (*(char *)((long)plVar6 + 0x2e7) < '\0') {
              plVar11 = (long *)*plVar11;
            }
            func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f681319,0x2e6,&UNK_10f6813b1,in_x6,in_x7,
                                (ulong)((long)plVar7 - (long)plVar8) / 1000000,2000,plVar11);
          }
        }
        func_0x00010a8d7168(auStack_80,plVar1);
        func_0x0001093f2488(plVar6 + 0x23,auStack_80);
        func_0x000109379fe8(auStack_80);
        *(undefined4 *)(plVar6 + 0x28) = 2;
        FUN_10a8d7414(plVar6);
      }
      return;
    }
  }
  return;
}



/* Entry: 10a8b82d4; end: 10a8b83c7;  */

void FUN_10a8b82d4(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (((param_1[0x46] != 0) && (*(int *)(*(long *)(param_1[0x46] + 0x10) + 0x140) != 3)) &&
     ((param_1[0x46] == 0 || (*(int *)(*(long *)(param_1[0x46] + 0x10) + 0x140) != 0)))) {
    FUN_10a8b7a80();
    lVar3 = *(long *)(*param_1 + 0x10);
    plVar5 = *(long **)(lVar3 + 0x38);
    while (plVar5 != (long *)(lVar3 + 0x40)) {
      lVar4 = plVar5[7];
      if (*(char *)(lVar4 + 0x1a4) == '\x01') {
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
          *(undefined1 *)(param_2 + 0x48) = 1;
        }
        FUN_10aad32e0(param_2 + 0x20,lVar4 + 0x140);
      }
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 10a8b83c8; end: 10a8b83cf;  */

void FUN_10a8b83c8(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)(param_1 + -0x208);
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x140) != 3)) &&
     ((*(long *)(param_1 + 0x28) == 0 ||
      (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x140) != 0)))) {
    FUN_10a8b7a80();
    lVar4 = *(long *)(*plVar3 + 0x10);
    plVar3 = *(long **)(lVar4 + 0x38);
    while (plVar3 != (long *)(lVar4 + 0x40)) {
      lVar5 = plVar3[7];
      if (*(char *)(lVar5 + 0x1a4) == '\x01') {
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
          *(undefined1 *)(param_2 + 0x48) = 1;
        }
        FUN_10aad32e0(param_2 + 0x20,lVar5 + 0x140);
      }
      plVar1 = (long *)plVar3[1];
      plVar6 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar6[2];
          bVar2 = (long *)*plVar3 != plVar6;
          plVar6 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 10a8b83d0; end: 10a8b850f;  */

void FUN_10a8b83d0(long *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_60 [8];
  long *plStack_58;
  int iStack_50;
  int iStack_4c;
  char cStack_48;
  
  FUN_10a8b7a80();
  lVar4 = *(long *)(*param_1 + 0x10);
  plVar6 = *(long **)(lVar4 + 0x38);
  while (plVar6 != (long *)(lVar4 + 0x40)) {
    if ((*(char *)(plVar6[7] + 0x1a4) == '\x01') &&
       (FUN_10aad301c(auStack_60,*(undefined8 *)(param_2 + 0x58),plVar6[7] + 0x140),
       cStack_48 == '\x01')) {
      lVar5 = plVar6[7];
      if (*(long *)(lVar5 + 0x58) != 0) {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x48));
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x4c));
        FUN_10a8c87d0((float)iStack_50 / (float)iStack_4c,fVar8 / fVar9,*(long *)(lVar5 + 0x58),
                      &UNK_10e482b24);
      }
      FUN_10a2382fc(lVar5 + 0x130,auStack_60);
      plVar2 = plStack_58;
      if ((cStack_48 == '\x01') && (plStack_58 != (long *)0x0)) {
        plVar7 = plStack_58 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    plVar2 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b8510; end: 10a8b8517;  */

void FUN_10a8b8510(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_60 [8];
  long *plStack_58;
  int iStack_50;
  int iStack_4c;
  char cStack_48;
  
  plVar4 = (long *)(param_1 + -0x208);
  FUN_10a8b7a80();
  lVar5 = *(long *)(*plVar4 + 0x10);
  plVar4 = *(long **)(lVar5 + 0x38);
  while (plVar4 != (long *)(lVar5 + 0x40)) {
    if ((*(char *)(plVar4[7] + 0x1a4) == '\x01') &&
       (FUN_10aad301c(auStack_60,*(undefined8 *)(param_2 + 0x58),plVar4[7] + 0x140),
       cStack_48 == '\x01')) {
      lVar6 = plVar4[7];
      if (*(long *)(lVar6 + 0x58) != 0) {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x48));
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x4c));
        FUN_10a8c87d0((float)iStack_50 / (float)iStack_4c,fVar8 / fVar9,*(long *)(lVar6 + 0x58),
                      &UNK_10e482b24);
      }
      FUN_10a2382fc(lVar6 + 0x130,auStack_60);
      plVar2 = plStack_58;
      if ((cStack_48 == '\x01') && (plStack_58 != (long *)0x0)) {
        plVar7 = plStack_58 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    plVar2 = (long *)plVar4[1];
    plVar7 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar7[2];
        bVar3 = (long *)*plVar4 != plVar7;
        plVar7 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8b8518; end: 10a8b85b7;  */

void FUN_10a8b8518(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *******pppppppuVar12;
  byte bVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  undefined1 auStack_80 [40];
  undefined8 ******ppppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar16 = (int)*(undefined8 *)(*(long *)(param_1 + 0x230) + 0x10);
  FUN_10a8c7000();
  if (iVar16 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x24c) == '\0') {
    if ((*(byte *)(param_1 + 0x271) & 1) == 0) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x244) == 4 || *(int *)(param_1 + 0x244) == 1) {
      iVar16 = (int)*(undefined8 *)(*(long *)(param_1 + 0x230) + 0x10);
      FUN_10a8c6990();
      if (iVar16 != 0) {
        func_0x00010a8b81ac(param_1);
      }
      if (*(char *)(param_1 + 0x24c) == '\0') {
        return;
      }
    }
    if (*(int *)(param_1 + 0x248) == 4) {
      uVar10 = 1;
      goto LAB_10a8b85a4;
    }
    if (*(int *)(param_1 + 0x248) != 1) {
      return;
    }
  }
  uVar10 = 0;
LAB_10a8b85a4:
  plVar8 = *(long **)(*(long *)(param_1 + 0x230) + 0x10);
  if (plVar8[0x56] != 0) {
    lVar3 = 2;
    if (uVar10 == 0) {
      lVar3 = 0;
      bVar13 = 0;
    }
    else {
      bVar13 = *(byte *)(plVar8 + 0x57);
    }
    plVar1 = plVar8 + 0x56;
    if ((0x146 < *(int *)(*(long *)(*plVar8 + 0xa20) + 0x18)) &&
       (((uint)*(undefined8 *)(plVar8[0x56] + 0x10) >> 5 & 1) != 0)) {
      ppppppuStack_58 = (undefined8 *******)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x0001092af8bc(plVar1);
      if ((*(byte *)(*plVar1 + 0xc0) & 1) != 0) {
        plVar11 = (long *)(*plVar1 + 0x98);
        func_0x00010952d47c(auStack_80);
        func_0x000109379fe8(auStack_80);
        plVar8 = (long *)0x1;
        goto LAB_10a8c6bdc;
      }
LAB_10a8c6ef0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8c6ef4);
      (*pcVar7)();
    }
    if ((bVar13 & 1) == 0) {
      plVar11 = (long *)(lVar3 * 1000000000);
      plVar9 = plVar1;
      FUN_109d1a400();
      uVar6 = uVar10;
      if ((int)plVar9 == 0) {
        do {
          if (uVar6 == 0) {
            return;
          }
          plVar9 = (long *)&UNK_10f681289;
          FUN_10a00946c();
          iVar16 = (int)plVar11;
          if (iVar16 == 3) {
            ___cxa_begin_catch();
            if (((char)plVar8[0x59] == '\x01') &&
               (((uint)*(undefined8 *)(plVar8[0x58] + 0x10) >> 1 & 1) != 0)) {
              FUN_10a8d82c4(plVar8,&UNK_10f6812cf);
              goto LAB_10a8c6ef0;
            }
            (**(code **)(*plVar9 + 0x10))();
            func_0x000107c2c4dc(&ppppppuStack_58);
            *(undefined4 *)(plVar8 + 0x28) = 2;
            plVar11 = plVar9;
            if (*(char *)(plVar8[0x1a] + 8) == '\x01') {
              plVar11 = plVar8 + 0x19;
              (*(code *)*plVar11)(&ppppppuStack_58);
            }
            ___cxa_end_catch();
          }
          else {
            ___cxa_begin_catch();
            if (iVar16 == 2) {
              (**(code **)(*plVar9 + 0x10))();
              func_0x000107c2c4dc(&ppppppuStack_58);
              *(undefined4 *)(plVar8 + 0x28) = 2;
              plVar11 = plVar9;
              if (*(char *)(plVar8[0x1a] + 8) == '\x01') {
                plVar11 = plVar8 + 0x19;
                (*(code *)*plVar11)(&ppppppuStack_58);
              }
              ___cxa_end_catch();
            }
            else {
              if (uStack_48 < 0) {
                uStack_50 = 0x13;
                pppppppuVar12 = (undefined8 *******)ppppppuStack_58;
              }
              else {
                uStack_48 = CONCAT17(0x13,(undefined7)uStack_48);
                pppppppuVar12 = &ppppppuStack_58;
              }
              *(undefined4 *)((long)pppppppuVar12 + 0xf) = 0x6c65646f;
              pppppppuVar12[1] = (undefined8 ******)0x6f6d20676e696e6e;
              *pppppppuVar12 = (undefined8 ******)0x757220726f727245;
              *(undefined1 *)((long)pppppppuVar12 + 0x13) = 0;
              *(undefined4 *)(plVar8 + 0x28) = 2;
              if (*(char *)(plVar8[0x1a] + 8) == '\x01') {
                plVar11 = plVar8 + 0x19;
                (*(code *)*plVar11)(&ppppppuStack_58);
              }
              ___cxa_end_catch();
            }
          }
          plVar8 = (long *)0x0;
LAB_10a8c6bdc:
          plVar9 = (long *)*plVar1;
          if (plVar9 != (long *)0x0) {
            puVar2 = (ulong *)(plVar9 + 1);
            do {
              uVar14 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar14 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar14 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          *plVar1 = 0;
          if (uStack_48 < 0) {
            __ZdlPv(ppppppuStack_58);
          }
          uVar6 = uVar10 & (uint)plVar8;
        } while( true );
      }
    }
    else {
      plVar11 = plVar8;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar9 = plVar1;
      FUN_109d1a244();
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((lVar3 * 1000000000 < (long)plVar9 - (long)plVar11) &&
         ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        plVar15 = plVar8 + 0x5a;
        if (*(char *)((long)plVar8 + 0x2e7) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f681319,0x2e6,&UNK_10f6813b1,in_x6,in_x7,
                            (ulong)((long)plVar9 - (long)plVar11) / 1000000,lVar3 * 1000,plVar15);
      }
    }
    func_0x00010a8d7168(auStack_80,plVar1);
    func_0x0001093f2488(plVar8 + 0x23,auStack_80);
    func_0x000109379fe8(auStack_80);
    *(undefined4 *)(plVar8 + 0x28) = 2;
    FUN_10a8d7414(plVar8);
  }
  return;
}



/* Entry: 10a8b85b8; end: 10a8b8e13;  */

void FUN_10a8b85b8(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  char cVar10;
  long **pplVar11;
  undefined8 *puVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  if (param_4 == 0) {
    plVar19 = param_2;
    uVar18 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_c8 = (long *)param_2[9];
    plStack_d0 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_d0);
    puVar15 = (undefined8 *)((ulong)&plStack_d0 | 8);
    pplVar11 = &plStack_d0;
    if (param_4 != 0) {
      puVar15 = (undefined8 *)(param_4 + 0x28);
      pplVar11 = (long **)(param_4 + 0x20);
    }
    uVar18 = *puVar15;
    plVar19 = *pplVar11;
  }
  plVar23 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar23);
  FUN_10a576504(plVar23,plVar19,uVar18);
  plVar19 = (long *)0x28;
  plStack_100 = plVar23;
  __Znwm();
  plVar24 = plVar19 + 1;
  *plVar24 = 0;
  *plVar19 = (long)&PTR_FUN_110c2b538;
  plVar19[2] = 0;
  plVar19[3] = (long)plVar23;
  plVar19[4] = (long)FUN_10a3df8cc;
  plStack_f8 = plVar19;
  if (plVar23 != (long *)0x0) {
    if (plVar23[6] == 0) {
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar14) {
          *plVar24 = *plVar24 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar1 = plVar19 + 2;
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar23[5] = (long)plVar23;
      plVar23[6] = (long)plVar19;
    }
    else {
      if (*(long *)(plVar23[6] + 8) != -1) goto LAB_10a8b8724;
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar14) {
          *plVar24 = *plVar24 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar1 = plVar19 + 2;
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = *plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar23[5] = (long)plVar23;
      plVar23[6] = (long)plVar19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar16 = *plVar24;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar14) {
        *plVar24 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
LAB_10a8b8724:
  plVar19 = plStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_100 + 0x2a,param_2 + 0x2a);
  uVar3 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(plVar19 + 0x30) & 0xfffc;
  *(ushort *)(plVar19 + 0x30) = uVar4 | *(ushort *)(plVar19 + 0x30) & 1 | uVar3;
  *(ushort *)(plVar19 + 0x30) = uVar4 | uVar3 | *(ushort *)(param_2 + 0x30) & 1;
  plStack_d0 = plVar19;
  plStack_c8 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar19 = plStack_f8 + 1;
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar14) {
        *plVar19 = *plVar19 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_10a3c7ce8(param_3,&plStack_d0);
  plVar19 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar23 = plStack_c8 + 1;
    do {
      lVar16 = *plVar23;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  puVar26 = *(undefined8 **)(param_2[0x46] + 0x10);
  puVar15 = (undefined8 *)0x338;
  __Znwm();
  FUN_10a8dbe78();
  *puVar15 = *puVar26;
  func_0x00010a8d4878(puVar15 + 1,puVar26[1],puVar26[2]);
  plVar19 = (long *)0xe8;
  __Znwm();
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&PTR_FUN_110c114e0;
  plVar19[0x1c] = 0;
  plVar19[0x1b] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  plVar19[0xc] = 0;
  plVar19[0xb] = 0;
  plVar19[0xe] = 0;
  plVar19[0xd] = 0;
  plVar19[0x10] = 0;
  plVar19[0xf] = 0;
  plVar19[0x12] = 0;
  plVar19[0x11] = 0;
  plVar19[0x14] = 0;
  plVar19[0x13] = 0;
  plVar19[0x16] = 0;
  plVar19[0x15] = 0;
  plVar19[0x18] = 0;
  plVar19[0x17] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x19] = 0;
  plStack_d0 = plVar19 + 3;
  plVar19[4] = 0;
  *plStack_d0 = 0;
  *(undefined4 *)(plVar19 + 0x1b) = 0x3f800000;
  plStack_c8 = plVar19;
  FUN_10a8dbdb0(puVar15 + 3,&plStack_d0);
  plVar19 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar23 = plStack_c8 + 1;
    do {
      lVar16 = *plVar23;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = (long *)0x30;
  __Znwm();
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&PTR_DAT_110c2afe8;
  plVar19[4] = 0;
  plVar19[5] = 0;
  plStack_d0 = plVar19 + 3;
  *plStack_d0 = 0;
  plStack_c8 = plVar19;
  func_0x00010a8dbe14(puVar15 + 5,&plStack_d0);
  plVar19 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar23 = plStack_c8 + 1;
    do {
      lVar16 = *plVar23;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  FUN_10a8d4f70(&plStack_d0);
  puVar20 = puVar15 + 0x62;
  func_0x00010a8d4950(puVar20,&plStack_d0);
  plVar19 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar23 = plStack_c8 + 1;
    do {
      lVar16 = *plVar23;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if ((puVar26[1] != 0) && (*(char *)(puVar26[1] + 0x1b1) == '\x01')) {
    FUN_10a8b5fac(*(undefined8 *)*puVar20);
    lVar16 = puVar26[1];
    plVar19 = (long *)*(long *)(lVar16 + 0x58);
    uVar17 = *(ulong *)(lVar16 + 0x60);
    if (-1 < (char)*(byte *)(lVar16 + 0x6f)) {
      plVar19 = (long *)(lVar16 + 0x58);
      uVar17 = (ulong)*(byte *)(lVar16 + 0x6f);
    }
    func_0x000107c2c4d8(*(long *)*puVar20 + 0x18,plVar19,uVar17);
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar20 = (undefined8 *)puVar26[7];
  while (puVar20 != puVar26 + 8) {
    FUN_10a8b9a24(&uStack_88,puVar20 + 7);
    puVar12 = (undefined8 *)puVar20[1];
    puVar21 = puVar20;
    if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
      do {
        puVar20 = (undefined8 *)puVar21[2];
        bVar14 = (undefined8 *)*puVar20 != puVar21;
        puVar21 = puVar20;
      } while (bVar14);
    }
    else {
      do {
        puVar20 = puVar12;
        puVar12 = (undefined8 *)*puVar20;
      } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
    }
  }
  puVar20 = (undefined8 *)puVar26[10];
  while (puVar20 != puVar26 + 0xb) {
    FUN_10a8b9c68(&uStack_a0,puVar20 + 7);
    puVar12 = (undefined8 *)puVar20[1];
    puVar21 = puVar20;
    if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
      do {
        puVar20 = (undefined8 *)puVar21[2];
        bVar14 = (undefined8 *)*puVar20 != puVar21;
        puVar21 = puVar20;
      } while (bVar14);
    }
    else {
      do {
        puVar20 = puVar12;
        puVar12 = (undefined8 *)*puVar20;
      } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
    }
  }
  FUN_10a8d51b0(&plStack_d0,uStack_88,uStack_80);
  plVar19 = plStack_c8;
  for (plVar23 = plStack_d0; plVar23 != plVar19; plVar23 = plVar23 + 2) {
    plStack_e8 = (long *)(*plVar23 + 0x30);
    puVar20 = puVar15 + 7;
    FUN_10a8d58e4(puVar20,plStack_e8,&plStack_e8);
    func_0x00010a8d4680(puVar20 + 7,*plVar23,plVar23[1]);
  }
  FUN_10a8d54fc(&plStack_e8,uStack_a0,uStack_98,auStack_b8);
  for (plVar19 = plStack_e8; plVar19 != plStack_e0; plVar19 = plVar19 + 2) {
    alStack_70[0] = *plVar19 + 0x30;
    puVar20 = puVar15 + 10;
    FUN_10a8d5afc(puVar20,alStack_70[0],alStack_70);
    func_0x00010a8d46f4(puVar20 + 7,*plVar19,plVar19[1]);
  }
  func_0x00010a2e268c(puVar15 + 0xd,puVar26 + 0xd);
  func_0x00010a2e268c(puVar15 + 0xf,puVar26 + 0xf);
  if (puVar15 == puVar26) goto LAB_10a8b8bf0;
  lVar6 = puVar26[0x3f];
  lVar7 = puVar26[0x40];
  uVar22 = lVar7 - lVar6;
  uVar17 = puVar15[0x41];
  lVar16 = puVar15[0x3f];
  if (uVar17 - lVar16 < uVar22) {
    uVar27 = (long)uVar22 >> 2;
    if (lVar16 != 0) {
      puVar15[0x40] = lVar16;
      __ZdlPv(lVar16);
      uVar17 = 0;
      puVar15[0x3f] = 0;
      puVar15[0x40] = 0;
      puVar15[0x41] = 0;
    }
    if (uVar27 >> 0x3e != 0) {
      FUN_10a8d5e54();
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10a8b8da4);
      (*pcVar13)();
    }
    uVar5 = (long)uVar17 >> 1;
    if ((ulong)((long)uVar17 >> 1) <= uVar27) {
      uVar5 = uVar27;
    }
    if (0x7ffffffffffffffb < uVar17) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10a8d5e1c(puVar15 + 0x3f,uVar5);
    lVar16 = puVar15[0x40];
LAB_10a8b8bb8:
    if (lVar7 != lVar6) {
      _memmove(lVar16,lVar6,uVar22);
    }
    lVar16 = lVar16 + uVar22;
  }
  else {
    lVar25 = puVar15[0x40];
    if (uVar22 <= (ulong)(lVar25 - lVar16)) goto LAB_10a8b8bb8;
    lVar2 = lVar6 + (lVar25 - lVar16);
    if (lVar25 != lVar16) {
      _memmove(lVar16,lVar6);
      lVar25 = puVar15[0x40];
    }
    lVar7 = lVar7 - lVar2;
    if (lVar7 != 0) {
      _memmove(lVar25,lVar2,lVar7);
    }
    lVar16 = lVar25 + lVar7;
  }
  puVar15[0x40] = lVar16;
  func_0x00010a14ddc8(puVar15 + 0x42,puVar26[0x42],puVar26[0x43],
                      (long)(puVar26[0x43] - puVar26[0x42]) >> 2);
LAB_10a8b8bf0:
  uVar8 = *(undefined4 *)(puVar26 + 0x45);
  *(undefined4 *)((long)puVar15 + 0x22b) = *(undefined4 *)((long)puVar26 + 0x22b);
  *(undefined4 *)(puVar15 + 0x45) = uVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puVar15 + 0x46,puVar26 + 0x46);
  uVar28 = puVar26[0x4a];
  uVar18 = puVar26[0x49];
  uVar30 = puVar26[0x4c];
  uVar29 = puVar26[0x4b];
  uVar32 = puVar26[0x4e];
  uVar31 = puVar26[0x4d];
  uVar33 = *(undefined8 *)((long)puVar26 + 0x271);
  *(undefined8 *)((long)puVar15 + 0x279) = *(undefined8 *)((long)puVar26 + 0x279);
  *(undefined8 *)((long)puVar15 + 0x271) = uVar33;
  puVar15[0x4c] = uVar30;
  puVar15[0x4b] = uVar29;
  puVar15[0x4e] = uVar32;
  puVar15[0x4d] = uVar31;
  puVar15[0x4a] = uVar28;
  puVar15[0x49] = uVar18;
  *(undefined4 *)((long)puVar15 + 0x2ec) = *(undefined4 *)((long)puVar26 + 0x2ec);
  *(undefined1 *)(puVar15 + 0x5d) = *(undefined1 *)(puVar26 + 0x5d);
  FUN_10a8c6f54(puVar15);
  func_0x00010a8d439c(&plStack_e8);
  func_0x00010a8d5abc(uStack_b0);
  func_0x00010a8d42ac(&plStack_d0);
  func_0x00010a8d439c(&uStack_a0);
  func_0x00010a8d42ac(&uStack_88);
  plVar19 = (long *)0x30;
  __Znwm();
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&PTR_FUN_110c17448;
  *(undefined1 *)(plVar19 + 4) = 0;
  plVar19[3] = (long)&PTR_FUN_110c267e0;
  plVar19[5] = 0;
  FUN_10a8ed8dc(plVar19 + 5,puVar15);
  plStack_110 = plVar19 + 3;
  plStack_108 = plVar19;
  FUN_10a74bcf4(plStack_100 + 0x46,&plStack_110);
  plVar19 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar23 = plStack_108 + 1;
    do {
      lVar16 = *plVar23;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  lVar16 = param_2[0x4e];
  uVar9 = *(undefined2 *)((long)param_2 + 0x273);
  param_1[1] = (long)plStack_f8;
  *param_1 = (long)plStack_100;
  *(short *)(plStack_100 + 0x4e) = (short)lVar16;
  *(undefined2 *)((long)plStack_100 + 0x273) = uVar9;
  return;
}



/* Entry: 10a8b8e14; end: 10a8b90cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a8b8fa4) */

void FUN_10a8b8e14(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_c8,uVar1 + 0xd,&ppuStack_e0);
  pppuVar2 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar2 = appuStack_c8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x6c20636e79736120;
  *(undefined8 *)((long)puVar5 + 5) = 0x203a64616f6c2063;
  *(undefined1 *)((long)puVar5 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&ppuStack_e0,*(undefined1 *)(param_2 + 0x270));
  pppuVar2 = (undefined8 ***)ppuStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    pppuVar2 = &ppuStack_e0;
  }
  pppuVar3 = appuStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_d8);
  puStack_a8 = pppuVar3[1];
  puStack_b0 = *pppuVar3;
  puStack_a0 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f67fcd6,0xf);
  uStack_88 = ppuVar4[1];
  uStack_90 = *ppuVar4;
  lStack_80 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEi(&ppuStack_f8,*(undefined1 *)(param_2 + 0x274));
  pppuVar2 = (undefined8 ***)ppuStack_f8;
  if (-1 < (char)bStack_e1) {
    uStack_f0 = (ulong)bStack_e1;
    pppuVar2 = &ppuStack_f8;
  }
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_f0);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f68f57e,1);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_e1 < '\0') {
    __ZdlPv(ppuStack_f8);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(ppuStack_e0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a8b90d0; end: 10a8b90d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a8b8fa4) */

void FUN_10a8b90d0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_c8,uVar1 + 0xd,&ppuStack_e0);
  pppuVar2 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar2 = appuStack_c8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x6c20636e79736120;
  *(undefined8 *)((long)puVar5 + 5) = 0x203a64616f6c2063;
  *(undefined1 *)((long)puVar5 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&ppuStack_e0,*(undefined1 *)(param_2 + 0x260));
  pppuVar2 = (undefined8 ***)ppuStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    pppuVar2 = &ppuStack_e0;
  }
  pppuVar3 = appuStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_d8);
  puStack_a8 = pppuVar3[1];
  puStack_b0 = *pppuVar3;
  puStack_a0 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f67fcd6,0xf);
  uStack_88 = ppuVar4[1];
  uStack_90 = *ppuVar4;
  lStack_80 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEi(&ppuStack_f8,*(undefined1 *)(param_2 + 0x264));
  pppuVar2 = (undefined8 ***)ppuStack_f8;
  if (-1 < (char)bStack_e1) {
    uStack_f0 = (ulong)bStack_e1;
    pppuVar2 = &ppuStack_f8;
  }
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_f0);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f68f57e,1);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_e1 < '\0') {
    __ZdlPv(ppuStack_f8);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(ppuStack_e0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a8b90d8; end: 10a8b96bf;  */

long ***** FUN_10a8b90d8(long *****param_1,long *****param_2)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  long **pplVar3;
  undefined8 *****pppppuVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long *****ppppplVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined8 *puVar15;
  long *****ppppplVar16;
  undefined8 *puVar17;
  long *****unaff_x21;
  long ***ppplVar18;
  long ****unaff_x22;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long *plStack_128;
  long **pplStack_120;
  code *pcStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  char cStack_e1;
  undefined8 ****ppppuStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long **pplStack_88;
  long ****pppplStack_80;
  long **pplStack_78;
  long ****pppplStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar16 = param_2;
  if ((param_1[0x46] != (long ****)0x0) && (*(int *)(param_1[0x46][2] + 0x28) == 1))
  goto LAB_10a8b95d4;
  pppplStack_a0 = (long ****)0x0;
  pppplStack_98 = (long ****)0x0;
  if (*param_2 != (long ****)0x0) {
    ppplVar18 = (*param_2)[0x1c];
    unaff_x21 = (long *****)0x0;
    if (ppplVar18 != (long ***)0x0) {
      if (*(char *)((long)ppplVar18 + 0xbf) < '\0') {
        func_0x000107c3192c(&ppppuStack_e0,ppplVar18[0x15],ppplVar18[0x16]);
      }
      else {
        plStack_d8 = (long *)ppplVar18[0x16];
        ppppuStack_e0 = (undefined8 ****)ppplVar18[0x15];
        uStack_d0 = ppplVar18[0x17];
      }
      if (*(char *)((long)ppplVar18 + 0xd7) < '\0') {
        func_0x000107c3192c(&plStack_c8,ppplVar18[0x18],ppplVar18[0x19]);
      }
      else {
        plStack_c0 = (long *)ppplVar18[0x19];
        plStack_c8 = (long *)ppplVar18[0x18];
        plStack_b8 = (long *)ppplVar18[0x1a];
      }
      uStack_b0 = *(undefined4 *)(ppplVar18 + 0x1b);
      pplVar3 = (long **)plStack_d8;
      if (-1 < (long)uStack_d0) {
        pplVar3 = (long **)((ulong)uStack_d0 >> 0x38);
      }
      FUN_10a003c90(&pppplStack_f8,(long)pplVar3 + 1,&pplStack_78);
      ppppplVar16 = (long *****)pppplStack_f8;
      if (-1 < cStack_e1) {
        ppppplVar16 = &pppplStack_f8;
      }
      if (pplVar3 != (long **)0x0) {
        pppppuVar4 = (undefined8 *****)ppppuStack_e0;
        if (-1 < (long)uStack_d0) {
          pppppuVar4 = &ppppuStack_e0;
        }
        _memmove(ppppplVar16,pppppuVar4,pplVar3);
      }
      *(undefined2 *)((long)ppppplVar16 + (long)pplVar3) = 0x2f;
      ppppplVar16 = &pppplStack_f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppplVar16,&UNK_10f5722f7,9);
      pppppuVar4 = (undefined8 *****)*ppppplVar16;
      uStack_68 = SUB87(ppppplVar16[1],0);
      uStack_61 = (undefined1)*(undefined8 *)((long)ppppplVar16 + 0xf);
      uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)ppppplVar16 + 0xf) >> 8);
      uVar5 = *(undefined1 *)((long)ppppplVar16 + 0x17);
      ppppplVar16[1] = (long ****)0x0;
      ppppplVar16[2] = (long ****)0x0;
      *ppppplVar16 = (long ****)0x0;
      if ((long)uStack_d0 < 0) {
        __ZdlPv(ppppuStack_e0);
      }
      *(undefined8 *)((ulong)&ppppuStack_e0 | 8) = CONCAT17(uStack_61,uStack_68);
      *(ulong *)((long)((ulong)&ppppuStack_e0 | 8) + 7) = CONCAT71(uStack_60,uStack_61);
      uStack_d0 = (long **)CONCAT17(uVar5,(undefined7)uStack_d0);
      ppppuStack_e0 = pppppuVar4;
      if (cStack_e1 < '\0') {
        __ZdlPv(pppplStack_f8);
      }
      unaff_x22 = (long ****)(*param_2)[10];
      if (unaff_x22 == (long ****)0x0) {
        ppppplVar16 = (long *****)0x1d0;
        __Znwm();
        ppppplVar16[1] = (long ****)0x0;
        ppppplVar16[2] = (long ****)0x0;
        *ppppplVar16 = (long ****)&PTR_DAT_110bc7fe0;
        unaff_x21 = ppppplVar16 + 3;
        FUN_10a8c1200(unaff_x21,0,&ppppuStack_e0,1);
        pppplStack_f8 = (long ****)unaff_x21;
        pppplStack_f0 = (long ****)ppppplVar16;
        FUN_10a37d52c(&pppplStack_f8,ppppplVar16 + 8,unaff_x21);
        FUN_10a37d328(&pppplStack_110,&pppplStack_f8);
        if ((long *****)pppplStack_f0 != (long *****)0x0) {
          ppppplVar16 = (long *****)(pppplStack_f0 + 1);
          do {
            pppplVar14 = *ppppplVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar7) {
              *ppppplVar16 = (long ****)((long)pppplVar14 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
            ppppplVar8 = (long *****)pppplStack_f0;
          } while (cVar6 != '\0');
          goto LAB_10a8b94a0;
        }
      }
      else {
        ppplVar18 = unaff_x22[0x10b];
        ppppplVar16 = (long *****)unaff_x22[0x10c];
        if (ppppplVar16 != (long *****)0x0) {
          ppppplVar8 = ppppplVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar7) {
              *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        unaff_x21 = (long *****)0x1b8;
        pplStack_88 = (long **)ppplVar18;
        pppplStack_80 = (long ****)ppppplVar16;
        __Znwm();
        FUN_10a8c1200();
        pplStack_78 = (long **)ppplVar18;
        pppplStack_70 = (long ****)ppppplVar16;
        if (ppppplVar16 != (long *****)0x0) {
          ppppplVar8 = ppppplVar16 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar7) {
              *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          ppppplVar8 = ppppplVar16 + 2;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar7) {
              *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar7) {
              *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
        }
        uStack_68 = SUB87(ppplVar18,0);
        uStack_61 = (undefined1)((ulong)ppplVar18 >> 0x38);
        uStack_60 = SUB87(ppppplVar16,0);
        uStack_59 = (undefined1)((ulong)ppppplVar16 >> 0x38);
        FUN_10a37d48c(&pppplStack_f8,unaff_x21,&uStack_68);
        FUN_10a37d328(&pppplStack_110,&pppplStack_f8);
        pppplVar14 = pppplStack_f0;
        if ((long *****)pppplStack_f0 != (long *****)0x0) {
          ppppplVar16 = (long *****)(pppplStack_f0 + 1);
          do {
            pppplVar13 = *ppppplVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar7) {
              *ppppplVar16 = (long ****)((long)pppplVar13 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppplVar13 == (long ****)0x0) {
            (*(code *)(*pppplStack_f0)[2])(pppplStack_f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
          }
        }
        if (CONCAT17(uStack_59,uStack_60) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        pppplVar14 = pppplStack_70;
        if ((long *****)pppplStack_70 != (long *****)0x0) {
          ppppplVar16 = (long *****)(pppplStack_70 + 1);
          do {
            pppplVar13 = *ppppplVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar7) {
              *ppppplVar16 = (long ****)((long)pppplVar13 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppplVar13 == (long ****)0x0) {
            (*(code *)(*pppplStack_70)[2])(pppplStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
          }
        }
        if (((long ***)pplStack_88 != (long ***)0x0) &&
           ((long *****)pppplStack_110 != (long *****)0x0)) {
          pppplStack_f8 = pppplStack_110;
          pppplStack_f0 = pppplStack_108;
          if ((long *****)pppplStack_108 != (long *****)0x0) {
            ppppplVar16 = (long *****)(pppplStack_108 + 1);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
              if (bVar7) {
                *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          FUN_10aa88c30(pplStack_88,&pppplStack_f8);
          pppplVar14 = pppplStack_f0;
          if ((long *****)pppplStack_f0 != (long *****)0x0) {
            ppppplVar16 = (long *****)(pppplStack_f0 + 1);
            do {
              pppplVar13 = *ppppplVar16;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
              if (bVar7) {
                *ppppplVar16 = (long ****)((long)pppplVar13 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (pppplVar13 == (long ****)0x0) {
              (*(code *)(*pppplStack_f0)[2])(pppplStack_f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
            }
          }
        }
        if ((long *****)pppplStack_80 != (long *****)0x0) {
          ppppplVar16 = (long *****)(pppplStack_80 + 1);
          do {
            pppplVar14 = *ppppplVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar7) {
              *ppppplVar16 = (long ****)((long)pppplVar14 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
            ppppplVar8 = (long *****)pppplStack_80;
          } while (cVar6 != '\0');
LAB_10a8b94a0:
          if (pppplVar14 == (long ****)0x0) {
            (*(code *)(*ppppplVar8)[2])(ppppplVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar8);
          }
        }
      }
      pppplVar14 = pppplStack_98;
      pppplStack_98 = pppplStack_108;
      pppplStack_a0 = pppplStack_110;
      pppplStack_110 = (long ****)0x0;
      pppplStack_108 = (long ****)0x0;
      if ((long *****)pppplVar14 != (long *****)0x0) {
        ppppplVar16 = (long *****)(pppplVar14 + 1);
        do {
          pppplVar13 = *ppppplVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
          if (bVar7) {
            *ppppplVar16 = (long ****)((long)pppplVar13 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppplVar13 == (long ****)0x0) {
          (*(code *)(*pppplVar14)[2])(pppplVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
        }
      }
      ppppplVar16 = (long *****)pppplStack_108;
      if ((long *****)pppplStack_108 != (long *****)0x0) {
        ppppplVar8 = (long *****)(pppplStack_108 + 1);
        do {
          pppplVar14 = *ppppplVar8;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
          if (bVar7) {
            *ppppplVar8 = (long ****)((long)pppplVar14 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*pppplStack_108)[2])(pppplStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
        }
      }
      if ((long)plStack_b8 < 0) {
        __ZdlPv(plStack_c8);
      }
      if ((long)uStack_d0 < 0) {
        __ZdlPv(ppppuStack_e0);
      }
    }
  }
  param_2 = &pppplStack_a0;
  FUN_10a8b96c0(param_1);
  ppppplVar8 = (long *****)pppplStack_98;
  if ((long *****)pppplStack_98 != (long *****)0x0) {
    ppppplVar2 = (long *****)(pppplStack_98 + 1);
    do {
      pppplVar14 = *ppppplVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
      if (bVar7) {
        *ppppplVar2 = (long ****)((long)pppplVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppplVar14 == (long ****)0x0) {
      (*(code *)(*pppplStack_98)[2])(pppplStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar8);
      param_1 = ppppplVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10a8b95d4:
  plVar11 = (long *)&UNK_10f67fce6;
  FUN_10a00946c();
  func_0x00010a0536d4(&pppplStack_f8);
  func_0x00010a051ed8(&pppplStack_110);
  FUN_10a054c5c(&pplStack_88);
  FUN_10a0ff214(&ppppuStack_e0);
  func_0x00010a051ed8(&pppplStack_a0);
  plVar9 = plVar11;
  __Unwind_Resume();
  pcStack_118 = FUN_10a8b96c0;
  pppplStack_140 = (long ****)&pplStack_120;
  pppplStack_130 = (long ****)ppppplVar16;
  plStack_128 = plVar11;
  pplStack_120 = (long **)&stack0xfffffffffffffff0;
  if ((plVar9[0x46] != 0) && (*(int *)(*(long *)(plVar9[0x46] + 0x10) + 0x140) == 1)) {
    plVar11 = (long *)&UNK_10f67fce6;
    ppppplVar8 = param_2;
    FUN_10a00946c();
    pppplStack_138 = (long ****)0x10a8b9714;
    pppplStack_150 = (long ****)ppppplVar16;
    pppplStack_148 = (long ****)param_2;
    FUN_10a8b7a80();
    lVar10 = *(long *)(*plVar11 + 0x10);
    pppplVar13 = ppppplVar8[1];
    pppplVar14 = *ppppplVar8;
    if (ppppplVar8[1] != (long ****)0x0) {
      pppplVar1 = ppppplVar8[1] + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar7) {
          *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar11 = *(long **)(lVar10 + 0x70);
    *(long *****)(lVar10 + 0x70) = pppplVar13;
    *(long *****)(lVar10 + 0x68) = pppplVar14;
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 1;
      do {
        lVar12 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return (long *****)(lVar10 + 0x68);
  }
  FUN_10a8b7a80();
  lVar10 = *(long *)(*plVar9 + 0x10);
  func_0x00010a8d4768();
  func_0x00010a8d4878(lVar10 + 8,*param_2,param_2[1]);
  *(undefined4 *)(lVar10 + 0x140) = 3;
  ppppplVar16 = (long *****)0x40;
  __Znwm();
  ppppplVar16[1] = (long ****)0x0;
  ppppplVar16[2] = (long ****)0x0;
  *ppppplVar16 = (long ****)&PTR_FUN_110c2ad30;
  ppppplVar16[6] = (long ****)0x0;
  ppppplVar16[5] = (long ****)0x0;
  *(undefined4 *)(ppppplVar16 + 7) = 0x3f800000;
  pppplStack_140 = (long ****)(ppppplVar16 + 3);
  ppppplVar16[4] = (long ****)0x0;
  *pppplStack_140 = (long ***)0x0;
  pppplStack_138 = (long ****)ppppplVar16;
  func_0x00010a8d48ec(lVar10 + 0x288,&pppplStack_140);
  pppplVar14 = pppplStack_138;
  if ((long *****)pppplStack_138 != (long *****)0x0) {
    ppppplVar16 = (long *****)(pppplStack_138 + 1);
    do {
      pppplVar13 = *ppppplVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
      if (bVar7) {
        *ppppplVar16 = (long ****)((long)pppplVar13 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppplVar13 == (long ****)0x0) {
      (*(code *)(*pppplStack_138)[2])(pppplStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
    }
  }
  if (*(long *)(lVar10 + 8) == 0) {
    puVar17 = (undefined8 *)(lVar10 + 0x40);
    func_0x00010a8d4e78(*puVar17);
    puVar15 = (undefined8 *)(lVar10 + 0x58);
    *(undefined8 **)(lVar10 + 0x38) = puVar17;
    *puVar17 = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    func_0x00010a8d4ef4(*puVar15);
    *puVar15 = 0;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    *(undefined8 **)(lVar10 + 0x50) = puVar15;
    FUN_10a8d4f70(&pppplStack_140);
    ppppplVar16 = (long *****)(lVar10 + 0x310);
    func_0x00010a8d4950(ppppplVar16,&pppplStack_140);
    ppppplVar8 = (long *****)pppplStack_138;
    if ((long *****)pppplStack_138 != (long *****)0x0) {
      ppppplVar2 = (long *****)(pppplStack_138 + 1);
      do {
        pppplVar14 = *ppppplVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
        if (bVar7) {
          *ppppplVar2 = (long ****)((long)pppplVar14 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppplVar14 == (long ****)0x0) {
        (*(code *)(*pppplStack_138)[2])(pppplStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppppplVar8);
        return ppppplVar8;
      }
    }
    return ppppplVar16;
  }
  if ((*(byte *)(*(long *)(lVar10 + 8) + 0x1b1) & 1) == 0) {
    FUN_10a8c0dd8();
  }
  FUN_10a8d49b4(lVar10);
  FUN_10a8d4a4c(lVar10);
  lVar12 = *(long *)(lVar10 + 8);
  pppplStack_140 = unaff_x22;
  pppplStack_138 = (long ****)unaff_x21;
  if (lVar12 == 0) {
    FUN_10a00946c(&UNK_10f6811b8);
  }
  else if ((*(byte *)(lVar12 + 0x1b1) & 1) != 0) {
    *(undefined1 *)(lVar10 + 0x308) = 1;
    plVar11 = (long *)(ulong)*(uint *)(lVar10 + 0x2ec);
    if (((*(uint *)(lVar10 + 0x2ec) & 0xfffffffb) == 0) && (*(char *)(lVar12 + 0x1b0) == '\x01')) {
      uStack_160 = 1;
      ppppplVar16 = (long *****)(lVar10 + 0x1f8);
      FUN_10a8d5cfc(ppppplVar16,&uStack_160,&uStack_15c,1);
    }
    else {
      FUN_10a8c09d8();
      lVar12 = *(long *)(lVar10 + 8);
      uVar5 = *(undefined1 *)(lVar12 + 0x1b0);
      plVar9 = plVar11;
      FUN_10a8d5cd4();
      FUN_109d20f54(&uStack_160,plVar11,uVar5,lVar12 + 0x108,lVar10 + 0x148,
                    *(undefined1 *)(*plVar9 + 8));
      ppppplVar16 = *(long ******)(lVar10 + 0x1f8);
      if (ppppplVar16 != (long *****)0x0) {
        *(long ******)(lVar10 + 0x200) = ppppplVar16;
        __ZdlPv();
      }
      *(undefined8 *)(lVar10 + 0x200) = uStack_158;
      *(ulong *)(lVar10 + 0x1f8) = CONCAT44(uStack_15c,uStack_160);
      *(long *****)(lVar10 + 0x208) = pppplStack_150;
    }
    return ppppplVar16;
  }
  ppppplVar16 = (long *****)&UNK_10f6811f1;
  FUN_10a00946c();
  pppplVar14 = ppppplVar16[1];
  if (pppplVar14 != (long ****)0x0) {
    pppplVar13 = pppplVar14 + 1;
    do {
      ppplVar18 = *pppplVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar7) {
        *pppplVar13 = (long ***)((long)ppplVar18 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppplVar18 == (long ***)0x0) {
      (*(code *)(*pppplVar14)[2])(pppplVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
    }
  }
  return ppppplVar16;
}



/* Entry: 10a8b96c0; end: 10a8b9743;  */

long * FUN_10a8b96c0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 in_stack_ffffffffffffffc0;
  
  if ((param_1[0x46] != 0) && (*(int *)(*(long *)(param_1[0x46] + 0x10) + 0x140) == 1)) {
    plVar6 = (long *)&UNK_10f67fce6;
    FUN_10a00946c();
    FUN_10a8b7a80();
    lVar5 = *(long *)(*plVar6 + 0x10);
    lVar11 = param_2[1];
    lVar7 = *param_2;
    if (param_2[1] != 0) {
      plVar6 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(lVar5 + 0x70);
    *(long *)(lVar5 + 0x70) = lVar11;
    *(long *)(lVar5 + 0x68) = lVar7;
    if (plVar6 != (long *)0x0) {
      plVar10 = plVar6 + 1;
      do {
        lVar7 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(lVar5 + 0x68);
  }
  FUN_10a8b7a80();
  lVar5 = *(long *)(*param_1 + 0x10);
  func_0x00010a8d4768();
  func_0x00010a8d4878(lVar5 + 8,*param_2,param_2[1]);
  *(undefined4 *)(lVar5 + 0x140) = 3;
  plVar6 = (long *)0x40;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c2ad30;
  plVar6[6] = 0;
  plVar6[5] = 0;
  *(undefined4 *)(plVar6 + 7) = 0x3f800000;
  plVar6[4] = 0;
  plVar6[3] = 0;
  func_0x00010a8d48ec(lVar5 + 0x288,&stack0xffffffffffffffd0);
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 1;
    do {
      lVar7 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(long *)(lVar5 + 8) != 0) {
    if ((*(byte *)(*(long *)(lVar5 + 8) + 0x1b1) & 1) == 0) {
      FUN_10a8c0dd8();
    }
    FUN_10a8d49b4(lVar5);
    FUN_10a8d4a4c(lVar5);
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 == 0) {
      FUN_10a00946c(&UNK_10f6811b8);
    }
    else if ((*(byte *)(lVar7 + 0x1b1) & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x308) = 1;
      plVar6 = (long *)(ulong)*(uint *)(lVar5 + 0x2ec);
      if (((*(uint *)(lVar5 + 0x2ec) & 0xfffffffb) == 0) && (*(char *)(lVar7 + 0x1b0) == '\x01')) {
        uStack_50 = 1;
        plVar6 = (long *)(lVar5 + 0x1f8);
        FUN_10a8d5cfc(plVar6,&uStack_50,&uStack_4c,1);
      }
      else {
        FUN_10a8c09d8();
        lVar7 = *(long *)(lVar5 + 8);
        uVar2 = *(undefined1 *)(lVar7 + 0x1b0);
        plVar10 = plVar6;
        FUN_10a8d5cd4();
        FUN_109d20f54(&uStack_50,plVar6,uVar2,lVar7 + 0x108,lVar5 + 0x148,
                      *(undefined1 *)(*plVar10 + 8));
        plVar6 = *(long **)(lVar5 + 0x1f8);
        if (plVar6 != (long *)0x0) {
          *(long **)(lVar5 + 0x200) = plVar6;
          __ZdlPv();
        }
        *(undefined8 *)(lVar5 + 0x200) = uStack_48;
        *(ulong *)(lVar5 + 0x1f8) = CONCAT44(uStack_4c,uStack_50);
        *(undefined8 *)(lVar5 + 0x208) = in_stack_ffffffffffffffc0;
      }
      return plVar6;
    }
    plVar6 = (long *)&UNK_10f6811f1;
    FUN_10a00946c();
    plVar10 = (long *)plVar6[1];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    return plVar6;
  }
  puVar9 = (undefined8 *)(lVar5 + 0x40);
  func_0x00010a8d4e78(*puVar9);
  puVar8 = (undefined8 *)(lVar5 + 0x58);
  *(undefined8 **)(lVar5 + 0x38) = puVar9;
  *puVar9 = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  func_0x00010a8d4ef4(*puVar8);
  *puVar8 = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 **)(lVar5 + 0x50) = puVar8;
  FUN_10a8d4f70(&stack0xffffffffffffffd0);
  plVar10 = (long *)(lVar5 + 0x310);
  func_0x00010a8d4950(plVar10,&stack0xffffffffffffffd0);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return plVar6;
    }
  }
  return plVar10;
}



/* Entry: 10a8b9744; end: 10a8b9753;  */

undefined8 * FUN_10a8b9744(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x230) + 0x10);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(lVar4 + 0x80);
  *(undefined8 *)(lVar4 + 0x80) = uVar8;
  *(undefined8 *)(lVar4 + 0x78) = uVar7;
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
  return (undefined8 *)(lVar4 + 0x78);
}



/* Entry: 10a8b9754; end: 10a8b98f3;  */

void FUN_10a8b9754(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_10a5afc68(param_1 + 0x4a);
  plVar3 = param_1;
  FUN_10a8b7a80();
  lVar4 = *plVar3;
  lVar7 = param_1[0x4b];
  lVar6 = param_1[0x4a];
  if (param_1[0x4b] != 0) {
    plVar3 = (long *)(param_1[0x4b] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  puVar5 = (undefined8 *)(lVar4 + 0x90);
  *(code **)(lVar4 + 0x88) = FUN_10a8e02e4;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_DAT_110c2b578;
  *(long *)(lVar4 + 0xa0) = lVar7;
  *(long *)(lVar4 + 0x98) = lVar6;
  return;
}



/* Entry: 10a8b98f4; end: 10a8b9a23;  */

void FUN_10a8b98f4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a8b7a80();
  lVar5 = *(long *)(*param_2 + 0x10) + 0x38;
  FUN_10a8e03ac(&puStack_80);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uStack_70 != 0) {
    if (uStack_70 >> 0x3c != 0) {
      FUN_10a8d4218();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8b9a04);
      (*pcVar2)();
    }
    uVar4 = uStack_70;
    plStack_48 = param_1;
    FUN_10a8d422c();
    lVar7 = uVar4 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_68 = *param_1;
    *param_1 = lVar7;
    param_1[1] = uVar4;
    lStack_50 = param_1[2];
    param_1[2] = uVar4 + lVar5 * 0x10;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a8d4260(&lStack_68);
  }
  puVar6 = puStack_80;
  while (puVar6 != &uStack_78) {
    FUN_10a8b9a24(param_1,puVar6 + 7);
    puVar1 = (undefined8 *)puVar6[1];
    puVar8 = puVar6;
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar8[2];
        bVar3 = (undefined8 *)*puVar6 != puVar8;
        puVar8 = puVar6;
      } while (bVar3);
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
  func_0x00010a8d4e78(uStack_78);
  return;
}



/* Entry: 10a8b9a24; end: 10a8b9b37;  */

void FUN_10a8b9a24(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar13 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar13;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = puVar8 + 2;
  }
  else {
    lVar9 = (long)puVar8 - *param_1;
    uVar6 = (lVar9 >> 4) + 1;
    if (uVar6 >> 0x3c != 0) {
      FUN_10a8d4218();
      FUN_10a8b7a80();
      lVar9 = *(long *)(*param_1 + 0x10) + 0x50;
      FUN_10a8e0560(&puStack_e0);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (uStack_d0 != 0) {
        if (uStack_d0 >> 0x3c != 0) {
          FUN_10a8d4308();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8b9c48);
          (*pcVar4)();
        }
        uVar6 = uStack_d0;
        FUN_10a8d431c();
        lVar12 = uVar6 - (extraout_x8[1] - *extraout_x8);
        _memcpy(lVar12);
        lStack_c8 = *extraout_x8;
        *extraout_x8 = lVar12;
        extraout_x8[1] = uVar6;
        lStack_b0 = extraout_x8[2];
        extraout_x8[2] = uVar6 + lVar9 * 0x10;
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x00010a8d4350(&lStack_c8);
      }
      puVar8 = puStack_e0;
      while (puVar8 != &uStack_d8) {
        FUN_10a8b9c68(extraout_x8,puVar8 + 7);
        puVar2 = (undefined8 *)puVar8[1];
        puVar7 = puVar8;
        if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar7[2];
            bVar5 = (undefined8 *)*puVar8 != puVar7;
            puVar7 = puVar8;
          } while (bVar5);
        }
        else {
          do {
            puVar8 = puVar2;
            puVar2 = (undefined8 *)*puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
      }
      func_0x00010a8d4ef4(uStack_d8);
      return;
    }
    uVar10 = param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    puVar7 = param_2;
    plStack_38 = param_1;
    FUN_10a8d422c();
    puVar2 = (undefined8 *)(uVar11 + lVar9);
    lVar9 = param_2[1];
    uVar13 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar13;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = puVar2 + 2;
    lVar9 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar8;
    lStack_40 = param_1[2];
    param_1[2] = uVar11 + (long)puVar7 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a8d4260(&lStack_58);
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a8b9b38; end: 10a8b9c67;  */

void FUN_10a8b9b38(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a8b7a80();
  lVar5 = *(long *)(*param_2 + 0x10) + 0x50;
  FUN_10a8e0560(&puStack_80);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uStack_70 != 0) {
    if (uStack_70 >> 0x3c != 0) {
      FUN_10a8d4308();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8b9c48);
      (*pcVar2)();
    }
    uVar4 = uStack_70;
    plStack_48 = param_1;
    FUN_10a8d431c();
    lVar7 = uVar4 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_68 = *param_1;
    *param_1 = lVar7;
    param_1[1] = uVar4;
    lStack_50 = param_1[2];
    param_1[2] = uVar4 + lVar5 * 0x10;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a8d4350(&lStack_68);
  }
  puVar6 = puStack_80;
  while (puVar6 != &uStack_78) {
    FUN_10a8b9c68(param_1,puVar6 + 7);
    puVar1 = (undefined8 *)puVar6[1];
    puVar8 = puVar6;
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar8[2];
        bVar3 = (undefined8 *)*puVar6 != puVar8;
        puVar8 = puVar6;
      } while (bVar3);
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
  func_0x00010a8d4ef4(uStack_78);
  return;
}



/* Entry: 10a8b9c68; end: 10a8b9d7b;  */

/* WARNING: Possible PIC construction at 0x00010a8d93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a8ba258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8d93b8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10a8b9c68(undefined8 param_1,undefined8 param_2,undefined ********param_3,
             undefined ********param_4,undefined8 param_5)

{
  undefined ****ppppuVar1;
  ulong *puVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined ********ppppppppuVar9;
  bool bVar10;
  byte *pbVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  code *pcVar20;
  undefined **ppuVar21;
  undefined ********ppppppppuVar22;
  code *pcVar23;
  undefined ********ppppppppuVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  byte bVar29;
  uint uVar30;
  undefined ******ppppppuVar31;
  code *extraout_x8;
  undefined ****ppppuVar32;
  long lVar33;
  byte bVar34;
  int iVar35;
  long lVar36;
  undefined *******pppppppuVar37;
  ulong uVar38;
  undefined *******pppppppuVar39;
  undefined ******ppppppuVar40;
  byte bVar41;
  ulong uVar42;
  undefined *****pppppuVar43;
  byte *pbVar44;
  long lVar45;
  undefined4 uVar46;
  undefined8 *puVar47;
  long *plVar48;
  undefined ********ppppppppuVar49;
  undefined8 *puVar50;
  long *plVar51;
  undefined *******pppppppuVar52;
  undefined8 *puVar53;
  undefined ******unaff_x23;
  undefined ******ppppppuVar54;
  undefined *******unaff_x24;
  undefined *******unaff_x26;
  undefined8 uVar55;
  undefined *******pppppppuVar56;
  undefined4 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auStack_340 [8];
  undefined ********ppppppppuStack_338;
  undefined1 auStack_330 [8];
  undefined ******ppppppuStack_328;
  undefined *******pppppppuStack_320;
  undefined ********ppppppppuStack_318;
  undefined *******pppppppuStack_310;
  undefined8 uStack_300;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined8 uStack_2f0;
  undefined *******pppppppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  char cStack_2b9;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_2a0;
  undefined2 uStack_29f;
  undefined *******pppppppuStack_298;
  undefined8 *apuStack_290 [7];
  code *pcStack_258;
  undefined8 *apuStack_250 [7];
  long lStack_218;
  long *plStack_210;
  undefined *******pppppppuStack_208;
  undefined *******pppppppuStack_200;
  undefined *******pppppppuStack_1f8;
  undefined *******pppppppuStack_1f0;
  undefined8 uStack_1e0;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  char cStack_1c9;
  code *pcStack_1c8;
  undefined *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined ******ppppppuStack_1a8;
  undefined ********ppppppppuStack_1a0;
  undefined ********ppppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined ********ppppppppuStack_188;
  undefined ********ppppppppuStack_180;
  code *pcStack_178;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined ******ppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  code *pcStack_108;
  undefined *******pppppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined3 uStack_e8;
  undefined5 uStack_e5;
  undefined3 uStack_e0;
  undefined5 uStack_dd;
  undefined3 uStack_d8;
  undefined5 uStack_d5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined ******ppppppuStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *******pppppppuStack_58;
  undefined *******pppppppuStack_50;
  undefined *******pppppppuStack_48;
  undefined *******pppppppuStack_40;
  undefined ********ppppppppuStack_38;
  
  pppppppuVar39 = param_3[1];
  if (pppppppuVar39 < param_3[2]) {
    pppppppuVar37 = param_4[1];
    pppppppuVar56 = *param_4;
    pppppppuVar39[1] = (undefined ******)param_4[1];
    *pppppppuVar39 = (undefined ******)pppppppuVar56;
    if (pppppppuVar37 != (undefined *******)0x0) {
      pppppppuVar37 = pppppppuVar37 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
        if (bVar10) {
          *pppppppuVar37 = (undefined ******)((long)*pppppppuVar37 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppppuVar39 = pppppppuVar39 + 2;
    ppppppppuVar49 = param_3;
LAB_10a8b9d60:
    param_3[1] = pppppppuVar39;
    auVar64._8_8_ = param_4;
    auVar64._0_8_ = ppppppppuVar49;
    return auVar64;
  }
  ppppppppuVar49 = (undefined ********)((long)pppppppuVar39 - (long)*param_3);
  uVar16 = ((long)ppppppppuVar49 >> 4) + 1;
  if (uVar16 >> 0x3c == 0) {
    uVar38 = (long)param_3[2] - (long)*param_3;
    uVar42 = (long)uVar38 >> 3;
    if (uVar42 <= uVar16) {
      uVar42 = uVar16;
    }
    if (0x7fffffffffffffef < uVar38) {
      uVar42 = 0xfffffffffffffff;
    }
    ppppppppuVar24 = param_4;
    ppppppppuStack_38 = param_3;
    FUN_10a8d431c();
    plVar15 = (long *)(uVar42 + (long)ppppppppuVar49);
    pppppppuVar39 = param_4[1];
    pppppppuVar37 = *param_4;
    plVar15[1] = (long)param_4[1];
    *plVar15 = (long)pppppppuVar37;
    if (pppppppuVar39 != (undefined *******)0x0) {
      pppppppuVar39 = pppppppuVar39 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar39,0x10);
        if (bVar10) {
          *pppppppuVar39 = (undefined ******)((long)*pppppppuVar39 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppppuVar39 = (undefined *******)(plVar15 + 2);
    param_4 = (undefined ********)*param_3;
    pppppppuVar37 = (undefined *******)((long)plVar15 - ((long)param_3[1] - (long)param_4));
    _memcpy(pppppppuVar37);
    pppppppuStack_58 = *param_3;
    *param_3 = pppppppuVar37;
    param_3[1] = pppppppuVar39;
    pppppppuStack_40 = param_3[2];
    param_3[2] = (undefined *******)(uVar42 + (long)ppppppppuVar24 * 0x10);
    ppppppppuVar49 = &pppppppuStack_58;
    pppppppuStack_50 = pppppppuStack_58;
    pppppppuStack_48 = pppppppuStack_58;
    func_0x00010a8d4350(ppppppppuVar49);
    goto LAB_10a8b9d60;
  }
  FUN_10a8d4308();
  pcStack_68 = FUN_10a8b9d7c;
  ppppppppuVar12 = param_3;
  ppppppppuVar24 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10a8b7a80();
  if (*(int *)((*ppppppppuVar12)[2] + 0x28) != 3) {
LAB_10a8b9fb0:
    ppppppppuVar12 = (undefined ********)&UNK_10f67fd11;
    FUN_10a00946c();
    func_0x00010a6d1c00(&uStack_c8);
    ppppppppuVar13 = ppppppppuVar12;
    __Unwind_Resume();
    uStack_e8 = SUB83(ppppppppuVar12,0);
    uStack_e5 = (undefined5)((ulong)ppppppppuVar12 >> 0x18);
    uStack_e0 = SUB83(&puStack_70,0);
    uStack_dd = (undefined5)((ulong)&puStack_70 >> 0x18);
    uStack_d8 = 0x8b9fe0;
    uStack_d5 = 0x10a;
    uStack_f0 = param_5;
    FUN_10a8b9d7c();
    ppppppppuVar12 = ppppppppuVar13;
    FUN_10a8b7a80();
    if ((*ppppppppuVar12)[2][0x53] != (undefined *****)0x0) {
      ppppuVar32 = (*ppppppppuVar12)[2][0x53][2];
      if (ppppuVar32 != (undefined ****)0x0) {
        ppppuVar1 = ppppuVar32 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar10) {
            *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined *****)extraout_x8 = ppppuVar32;
      auVar66._8_8_ = ppppppppuVar24;
      auVar66._0_8_ = ppppppppuVar12;
      return auVar66;
    }
    plVar15 = (long *)&UNK_10f68188d;
    FUN_10a00946c();
    pcStack_f8 = (code *)0x10a8ba04c;
    ppppppppuStack_120 = &pppppppuStack_100;
    ppppppppuStack_110 = ppppppppuVar13;
    pcStack_108 = extraout_x8;
    pppppppuStack_100 = (undefined *******)&uStack_e0;
    if ((plVar15[0x46] != 0) && (*(int *)(*(long *)(plVar15[0x46] + 0x10) + 0x140) != 3)) {
      plVar15 = (long *)&UNK_10f67fd4f;
      ppppppppuVar22 = ppppppppuVar24;
      FUN_10a00946c();
      ppppppppuVar9 = (undefined ********)&stack0xfffffffffffffeb0;
      ppppppppuStack_118 = (undefined ********)0x10a8ba0a0;
      ppppppppuVar12 = (undefined ********)&ppppppppuStack_120;
      ppppppppuStack_130 = ppppppppuVar13;
      ppppppppuStack_128 = ppppppppuVar24;
      if ((plVar15[0x46] != 0) && (*(int *)(*(long *)(plVar15[0x46] + 0x10) + 0x140) != 3)) {
        puVar26 = &UNK_10f67fdd8;
        ppppppppuVar24 = ppppppppuVar22;
        FUN_10a00946c();
        ppppppppuStack_170 = ppppppppuVar13;
        ppppppppuStack_168 = ppppppppuVar22;
        if (*(int *)(*(long *)(*(long *)(puVar26 + 0x230) + 0x10) + 0x140) == 1) {
          puVar26 = &UNK_10f67fe1c;
          FUN_10a00946c();
          pcVar23 = *(code **)(**(long **)(*(long *)(puVar26 + 0x230) + 0x10) + 0x8d8);
          pcVar8 = *(code **)(*(long **)(*(long *)(puVar26 + 0x230) + 0x10))[0x62];
          pcStack_178 = FUN_10a8ba290;
          pcVar20 = pcVar23;
          if (pcVar23 != (code *)0x0) {
            puVar47 = *(undefined8 **)(pcVar8 + 8);
            ppppppppuStack_180 = (undefined ********)&stack0xfffffffffffffea0;
            ppppppppuStack_190 = ppppppppuVar13;
            ppppppppuStack_188 = ppppppppuVar22;
            ppppppppuStack_198 = ppppppppuVar49;
            ppppppppuStack_1a0 = param_4;
            ppppppuStack_1a8 = unaff_x23;
            pppppppuStack_1b0 = unaff_x24;
            for (puVar50 = *(undefined8 **)pcVar8; puVar50 != puVar47; puVar50 = puVar50 + 1) {
              pcVar8 = (code *)*puVar50;
              (**(code **)(*(long *)pcVar8 + 0x30))(&pcStack_1c8);
              uVar30 = (uint)(char)uStack_1b8._7_1_;
              pppppppuVar39 = pppppppuStack_1c0;
              if (-1 < (int)uVar30) {
                pppppppuVar39 = (undefined *******)(ulong)uStack_1b8._7_1_;
              }
              if (pppppppuVar39 != (undefined *******)0x0) {
                cStack_1c9 = '\x0f';
                uStack_1e0._0_7_ = 0x4c4c4d68636554;
                uStack_1e0._7_1_ = 0x65;
                uStack_1d8 = 0x746e657645736e;
                uStack_1d1 = 0;
                pcVar8 = pcVar23;
                pcVar20 = (code *)&uStack_1e0;
                FUN_10a76bdb0(pcVar23,&uStack_1e0,&pcStack_1c8);
                if (cStack_1c9 < '\0') {
                  pcVar8 = (code *)CONCAT17(uStack_1e0._7_1_,(undefined7)uStack_1e0);
                  __ZdlPv(pcVar8);
                }
                uVar30 = (uint)uStack_1b8._7_1_;
              }
              if ((uVar30 >> 7 & 1) != 0) {
                pcVar8 = pcStack_1c8;
                __ZdlPv(pcStack_1c8);
              }
            }
          }
          auVar60._8_8_ = pcVar20;
          auVar60._0_8_ = pcVar8;
          return auVar60;
        }
        puVar14 = *(undefined **)(*(long *)(puVar26 + 0x230) + 0x10);
        ppppppppuVar49 = ppppppppuVar24;
        FUN_10a8c7000();
        if (((ulong)puVar14 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            puVar26 = &UNK_10f67fe69;
            puVar14 = &UNK_10f67feac;
            puVar28 = &UNK_10f67fefd;
            uVar17 = 0;
            uVar25 = 1;
            uVar27 = 0x1c5;
            uVar55 = 0x10a8ba15c;
SUB_10ae06f08:
            *(undefined *********)((long)ppppppppuVar9 + -0x10) = ppppppppuVar12;
            *(undefined8 *)((long)ppppppppuVar9 + -8) = uVar55;
            *(undefined *********)((long)ppppppppuVar9 + -0x18) = ppppppppuVar9;
            FUN_10ae06f30(uVar17,uVar25,puVar26,puVar14,uVar27,puVar28,ppppppppuVar9);
            auVar78._8_8_ = uVar25;
            auVar78._0_8_ = uVar17;
            return auVar78;
          }
        }
        else {
          puVar26[0x272] = 1;
          if (2 < (ulong)(byte)puVar26[0x24c]) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8ba284);
            (*pcVar8)();
          }
          (*(code *)(&PTR_FUN_110c2b510)[(byte)puVar26[0x24c]])(puVar26 + 0x240);
          puVar26[0x240] = (byte)ppppppppuVar24;
          puVar26[0x24c] = 0;
          puVar26[0x271] = (byte)ppppppppuVar24 ^ 1;
          puVar14 = *(undefined **)(*(long *)(puVar26 + 0x230) + 0x10);
          FUN_10a8c6990();
          if ((int)puVar14 == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              puVar26 = &UNK_10f67fe69;
              puVar14 = &UNK_10f67feac;
              puVar28 = &UNK_10f67ff40;
              uVar17 = 0;
              uVar25 = 1;
              uVar27 = 0x1cf;
              uVar55 = 0x10a8ba25c;
              ppppppppuVar9 = (undefined ********)&ppppppppuStack_170;
              ppppppppuVar12 = (undefined ********)&stack0xfffffffffffffea0;
              goto SUB_10ae06f08;
            }
          }
          else {
            puVar14 = puVar26;
            func_0x00010a8b81ac(puVar26);
          }
          if ((int)ppppppppuVar24 != 0) {
            puVar14 = *(undefined **)(*(long *)(puVar26 + 0x230) + 0x10);
            ppppppppuVar49 = (undefined ********)0x1;
            FUN_10a8c6a58(puVar14,1);
          }
          puVar26[0x272] = 0;
        }
        auVar68._8_8_ = ppppppppuVar49;
        auVar68._0_8_ = puVar14;
        return auVar68;
      }
      ppppppppuVar49 = ppppppppuVar22;
      FUN_10a8b7a80();
      lVar33 = *(long *)(*plVar15 + 0x10);
      if (*(char *)(lVar33 + 399) < '\0') {
        if (*(long *)(lVar33 + 0x180) != 0) goto LAB_10a8ba140;
      }
      else if (*(char *)(lVar33 + 399) != '\0') goto LAB_10a8ba140;
      ppppppppuVar49 =
           (undefined ********)
           (((long)ppppppppuVar22[1] - (long)*ppppppppuVar22 >> 3) * -0x5555555555555555);
      FUN_109d218f0(&stack0xfffffffffffffeb0,*ppppppppuVar22,ppppppppuVar49);
      plVar15 = *(long **)(lVar33 + 0x1f8);
      if (plVar15 != (long *)0x0) {
        *(long **)(lVar33 + 0x200) = plVar15;
        __ZdlPv();
      }
      *(undefined8 *)(lVar33 + 0x200) = uStack_148;
      *(undefined8 *)(lVar33 + 0x1f8) = in_stack_fffffffffffffeb0;
      *(undefined *********)(lVar33 + 0x208) = uStack_140;
      *(undefined1 *)(lVar33 + 0x308) = 1;
LAB_10a8ba140:
      auVar67._8_8_ = ppppppppuVar49;
      auVar67._0_8_ = plVar15;
      return auVar67;
    }
    FUN_10a8b7a80();
    ppppppppuVar12 = ppppppppuStack_110;
    auVar69._0_8_ = *(long *)(*plVar15 + 0x10);
    if ((uint)ppppppppuVar24 < 8) {
      *(uint *)(auVar69._0_8_ + 0x2ec) = (uint)ppppppppuVar24;
      *(undefined1 *)(auVar69._0_8_ + 0x308) = 0;
      if ((*(long *)(auVar69._0_8_ + 8) != 0) &&
         (*(char *)(*(long *)(auVar69._0_8_ + 8) + 0x1b1) == '\x01')) {
        puVar50 = &uStack_140;
        lVar33 = *(long *)(auVar69._0_8_ + 8);
        ppppppppuStack_120 = param_4;
        ppppppppuStack_118 = ppppppppuVar49;
        if (lVar33 == 0) {
          FUN_10a00946c(&UNK_10f6811b8);
        }
        else if ((*(byte *)(lVar33 + 0x1b1) & 1) != 0) {
          *(undefined1 *)(auVar69._0_8_ + 0x308) = 1;
          plVar15 = (long *)(ulong)*(uint *)(auVar69._0_8_ + 0x2ec);
          if (((*(uint *)(auVar69._0_8_ + 0x2ec) & 0xfffffffb) == 0) &&
             (*(char *)(lVar33 + 0x1b0) == '\x01')) {
            uStack_140 = (undefined ********)CONCAT44(uStack_140._4_4_,1);
            lVar33 = auVar69._0_8_ + 0x1f8;
            FUN_10a8d5cfc(lVar33,&uStack_140,(long)&uStack_140 + 4,1);
          }
          else {
            FUN_10a8c09d8();
            lVar33 = *(long *)(auVar69._0_8_ + 8);
            puVar50 = (undefined8 *)(ulong)*(byte *)(lVar33 + 0x1b0);
            plVar51 = plVar15;
            FUN_10a8d5cd4();
            FUN_109d20f54(&uStack_140,plVar15,puVar50,lVar33 + 0x108,auVar69._0_8_ + 0x148,
                          *(undefined1 *)(*plVar51 + 8));
            lVar33 = *(long *)(auVar69._0_8_ + 0x1f8);
            if (lVar33 != 0) {
              *(long *)(auVar69._0_8_ + 0x200) = lVar33;
              __ZdlPv();
            }
            *(undefined *******)(auVar69._0_8_ + 0x200) = ppppppuStack_138;
            *(undefined *********)(auVar69._0_8_ + 0x1f8) = uStack_140;
            *(undefined *********)(auVar69._0_8_ + 0x208) = ppppppppuStack_130;
          }
          auVar73._8_8_ = puVar50;
          auVar73._0_8_ = lVar33;
          return auVar73;
        }
        puVar26 = &UNK_10f6811f1;
        FUN_10a00946c();
        plVar15 = *(long **)(puVar26 + 8);
        if (plVar15 != (long *)0x0) {
          plVar51 = plVar15 + 1;
          do {
            lVar33 = *plVar51;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
            if (bVar10) {
              *plVar51 = lVar33 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar33 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        auVar74._8_8_ = ppppppppuVar24;
        auVar74._0_8_ = puVar26;
        return auVar74;
      }
      auVar69._8_8_ = ppppppppuVar24;
      return auVar69;
    }
    plVar15 = (long *)&UNK_10f5878a4;
    FUN_10a00946c();
    ppppppppuStack_120 = ppppppppuVar12;
    ppppppppuStack_118 = (undefined ********)pcStack_108;
    pcStack_108 = FUN_10a8c6f54;
    if ((int)plVar15[0x28] != 3) {
      auVar70._8_8_ = ppppppppuVar24;
      auVar70._0_8_ = plVar15;
      return auVar70;
    }
    if ((plVar15[9] != 0) || (ppppppppuStack_110 = &pppppppuStack_100, plVar15[0xc] != 0)) {
      lVar33 = plVar15[1];
      if (lVar33 == 0) {
        ppppppppuStack_110 = &pppppppuStack_100;
        FUN_10a00946c(&UNK_10f681554);
      }
      else {
        ppppppppuStack_110 = &pppppppuStack_100;
        if ((*(byte *)(lVar33 + 0x1b1) & 1) != 0) {
          ppppppppuStack_110 = &pppppppuStack_100;
          if (((*(byte *)(plVar15 + 100) & 1) == 0) &&
             (ppppppppuStack_110 = &pppppppuStack_100, *(char *)(lVar33 + 0x1b0) == '\x01')) {
            ppppppppuStack_110 = &pppppppuStack_100;
            FUN_10a8d852c(plVar15);
          }
          FUN_10a8d8a78(plVar15);
          ppppppppuVar13 = ppppppppuStack_120;
          pcStack_178 = *(code **)PTR____stack_chk_guard_11034bdc0;
          plVar51 = plVar15;
          ppppppppuVar12 = ppppppppuVar24;
          uStack_140 = (undefined ********)unaff_x24;
          ppppppuStack_138 = unaff_x23;
          ppppppppuStack_130 = param_4;
          ppppppppuStack_128 = ppppppppuVar49;
          if ((*(byte *)(plVar15 + 0x61) & 1) == 0) {
            FUN_10a8d4b90();
          }
          if (plVar15[1] == 0) {
            ppppppppuVar49 = (undefined ********)&UNK_10f681700;
            FUN_10a00946c();
          }
          else {
            func_0x00010ad031c0();
            plVar3 = (long *)*plVar51;
            if (-1 < *(char *)((long)plVar51 + 0x17)) {
              plVar3 = plVar51;
            }
            func_0x000107c2b054(&uStack_300,plVar3);
            if (*(char *)((long)plVar15 + 0x247) < '\0') {
              __ZdlPv(plVar15[0x46]);
            }
            plVar15[0x47] = CONCAT17(uStack_2f1,uStack_2f8);
            plVar15[0x46] = CONCAT17(uStack_300._7_1_,(undefined7)uStack_300);
            plVar15[0x48] = (long)uStack_2f0;
            *(char *)(plVar15 + 0x49) = (char)plVar15[0x5e];
            lVar33 = plVar15[0x3f];
            lVar36 = plVar15[0x40];
            uVar16 = (ulong)*(uint *)((long)plVar15 + 0x2ec);
            FUN_10a8c09d8(uVar16);
            FUN_109d20fac(lVar33,lVar36 - lVar33 >> 2,uVar16,plVar15[1] + 0x108,plVar15 + 0x42,
                          plVar15 + 0x29);
            ppppppppuVar49 = (undefined ********)(plVar15 + 0x5f);
            if (plVar15[0x5f] == 0) {
              FUN_10a8da3cc(&uStack_300,plVar15);
              FUN_10a8da5c8(&pppppppuStack_208,&uStack_300,plVar15[1] + 0x168,plVar15 + 0x3f,
                            plVar15 + 0x42);
              FUN_10a8da564(ppppppppuVar49,&pppppppuStack_208);
              pppppppuVar39 = pppppppuStack_200;
              if (pppppppuStack_200 != (undefined *******)0x0) {
                pppppppuVar37 = pppppppuStack_200 + 1;
                do {
                  ppppppuVar31 = *pppppppuVar37;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
                  if (bVar10) {
                    *pppppppuVar37 = (undefined ******)((long)ppppppuVar31 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (ppppppuVar31 == (undefined ******)0x0) {
                  (*(code *)(*pppppppuStack_200)[2])(pppppppuStack_200);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar39);
                }
              }
              if (cStack_2b9 < '\0') {
                __ZdlPv(uStack_2d0);
              }
              pppppppuStack_320 = (undefined *******)&pppppppuStack_2e8;
              FUN_10a04b2ac(&pppppppuStack_320);
              ppppppppuVar49 = &pppppppuStack_320;
              pppppppuStack_320 = (undefined *******)&uStack_300;
              FUN_10a04b2ac();
LAB_10a8d9494:
              pppppppuVar39 = (undefined *******)plVar15[0x62];
              lVar33 = *(long *)(*plVar15 + 0x8d8);
              if ((lVar33 != 0) &&
                 (ppppppuVar31 = *pppppppuVar39, ((ulong)ppppppuVar31[8] & 1) != 0)) {
                __ZNSt3__16chrono12steady_clock3nowEv();
                pppppppuStack_320 =
                     (undefined *******)((ulong)pppppppuStack_320 & 0xffffffffffffff00);
                ppppppppuStack_318 = (undefined ********)0x0;
                pppppppuVar39 = (undefined *******)&pppppppuStack_320;
                func_0x00010945a80c(pppppppuVar39,"ml_build_request");
                ppppppuStack_328 = (undefined ******)0x0;
                auStack_330[0] = 3;
                ppppppuVar31 = ppppppuVar31 + 3;
                func_0x00010938229c();
                pppppppuVar37 = pppppppuVar39;
                ppppppuStack_328 = ppppppuVar31;
                func_0x00010945a80c(pppppppuVar39,&DAT_10f56f6ff);
                auStack_330[0] = *(undefined1 *)pppppppuVar37;
                *(undefined1 *)pppppppuVar37 = 3;
                ppppppuVar31 = pppppppuVar37[1];
                pppppppuVar37[1] = ppppppuStack_328;
                ppppppuStack_328 = ppppppuVar31;
                func_0x000109380ffc(&ppppppuStack_328);
                auStack_340[0] = 5;
                ppppppppuStack_338 = ppppppppuVar49;
                func_0x00010945a80c(pppppppuVar39,"start");
                auStack_340[0] = *(undefined1 *)pppppppuVar39;
                *(undefined1 *)pppppppuVar39 = 5;
                pppppppuVar37 = (undefined *******)pppppppuVar39[1];
                pppppppuVar39[1] = (undefined ******)ppppppppuStack_338;
                ppppppppuStack_338 = (undefined ********)pppppppuVar37;
                func_0x000109380ffc(&ppppppppuStack_338);
                uStack_2f0 = (undefined **)CONCAT17(0xf,(undefined7)uStack_2f0);
                uStack_300._0_7_ = 0x4c4c4d68636554;
                uStack_300._7_1_ = 0x65;
                uStack_2f8 = 0x746e657645736e;
                uStack_2f1 = 0;
                FUN_10a0c32e4(&pppppppuStack_208,&pppppppuStack_320,0xffffffff,0x20,0,0);
                FUN_10a76bdb0(lVar33,&uStack_300,&pppppppuStack_208);
                if ((long)uStack_2f0 < 0) {
                  __ZdlPv(CONCAT17(uStack_300._7_1_,(undefined7)uStack_300));
                }
                ppppppppuVar49 = (undefined ********)&ppppppppuStack_318;
                func_0x000109380ffc(ppppppppuVar49,(ulong)pppppppuStack_320 & 0xff);
                pppppppuVar39 = (undefined *******)plVar15[0x62];
              }
              pppppppuStack_1f0 = (undefined *******)plVar15[99];
              if (pppppppuStack_1f0 == (undefined *******)0x0) {
                pppppppuStack_1b0 = (undefined *******)0x0;
                pppppppuStack_1f0 = (undefined *******)0x0;
                uStack_1b8 = pppppppuVar39;
              }
              else {
                pppppppuVar37 = pppppppuStack_1f0 + 1;
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
                  if (bVar10) {
                    *pppppppuVar37 = (undefined ******)((long)*pppppppuVar37 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                uStack_1b8 = (undefined *******)plVar15[0x62];
                pppppppuStack_1b0 = (undefined *******)plVar15[99];
                if (pppppppuStack_1b0 != (undefined *******)0x0) {
                  plVar51 = (long *)((long)pppppppuStack_1b0 + 8);
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                    if (bVar10) {
                      *plVar51 = *plVar51 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
              }
              pppppppuStack_200 = (undefined *******)&PTR_FUN_110c2ae90;
              pppppppuStack_208 = (undefined *******)0x10a8da720;
              ppppppppuVar13 = &pppppppuStack_200;
              pcStack_1c8 = FUN_10a8da778;
              pppppppuStack_1c0 = (undefined *******)&PTR_FUN_110c2aea8;
              ppppppppuStack_188 = (undefined ********)plVar15[0x65];
              ppppppppuStack_180 = (undefined ********)plVar15[0x66];
              if (ppppppppuStack_180 != (undefined ********)0x0) {
                plVar51 = (long *)(ppppppppuStack_180 + 1);
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                  if (bVar10) {
                    *plVar51 = *plVar51 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              unaff_x24 = (undefined *******)&pppppppuStack_208;
              pppppppuStack_1f8 = pppppppuVar39;
              FUN_10a8bb1fc();
              pppppppuVar39 = *ppppppppuVar49 + 0x11b;
              FUN_10a08fec0();
              lVar33 = *plVar15;
              if ((((ulong)*pppppppuVar39 & 1) == 0) ||
                 (*(int *)(*(long *)(lVar33 + 0x100) + 0x2a8) == 8)) {
                pbVar18 = *(byte **)(*(long *)(lVar33 + 0x8b8) + 0x20);
                if (pbVar18 == (byte *)0x0) {
LAB_10a8d96fc:
                  if (1 < *(int *)(*(long *)(lVar33 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
                  FUN_10a8d40c0();
                  if (((ulong)pbVar18 & 1) == 0) {
                    lVar33 = *plVar15;
                    goto LAB_10a8d971c;
                  }
                  uVar30 = 0;
                }
                else {
                  FUN_10a8b7988(pbVar18,&UNK_10f680bf1,0x1e);
                  lVar33 = *plVar15;
                  if ((*pbVar18 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
                  uVar30 = (uint)(*(int *)(*(long *)(lVar33 + 0x100) + 0x2a8) != 8);
                }
                uVar30 = (uint)ppppppppuVar24 & uVar30;
              }
              else {
                uVar30 = 1;
              }
              *(undefined4 *)(plVar15 + 0x28) = 0;
              lVar33 = plVar15[0x60];
              uStack_300._0_7_ = (undefined7)plVar15[0x5f];
              uStack_300._7_1_ = (undefined1)((ulong)plVar15[0x5f] >> 0x38);
              uStack_2f8 = (undefined7)lVar33;
              uStack_2f1 = (undefined1)((ulong)lVar33 >> 0x38);
              if (lVar33 != 0) {
                plVar51 = (long *)(lVar33 + 8);
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                  if (bVar10) {
                    *plVar51 = *plVar51 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              puVar50 = (undefined8 *)plVar15[1];
              FUN_10a8c1848();
              uStack_2f0 = (undefined **)0x10a8da7d0;
              pppppppuStack_2e8 = (undefined *******)&PTR_DAT_110c2bdf0;
              uStack_2d8 = puVar50[1];
              uStack_2e0 = *puVar50;
              if (puVar50[1] != 0) {
                plVar51 = (long *)(puVar50[1] + 8);
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                  if (bVar10) {
                    *plVar51 = *plVar51 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              FUN_10a8d5cd4();
              plStack_2a8 = (long *)puVar50[1];
              uStack_2b0 = *puVar50;
              if (puVar50[1] != 0) {
                plVar51 = (long *)(puVar50[1] + 8);
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                  if (bVar10) {
                    *plVar51 = *plVar51 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_2a0 = (undefined1)uVar30;
              uStack_29f = 1;
              pppppppuStack_298 = pppppppuStack_208;
              unaff_x26 = (undefined *******)&uStack_300;
              (*(code *)pppppppuStack_200[2])(apuStack_290,ppppppppuVar13);
              pcStack_258 = pcStack_1c8;
              ppppppppuVar12 = &pppppppuStack_1c0;
              (*(code *)pppppppuStack_1c0[2])(apuStack_250);
              plStack_210 = (long *)ppppppppuStack_180;
              lStack_218 = (long)ppppppppuStack_188;
              ppppppppuStack_188 = (undefined ********)0x0;
              ppppppppuStack_180 = (undefined ********)0x0;
              FUN_109d23f70(&pppppppuStack_320,&uStack_300);
              pppppppuVar39 = (undefined *******)(plVar15 + 0x53);
              if ((undefined ********)pppppppuVar39 != &pppppppuStack_320) {
                if (*pppppppuVar39 != (undefined ******)0x0) {
                  ppppppuVar31 = *pppppppuVar39 + 3;
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                    if (bVar10) {
                      *(int *)ppppppuVar31 = *(int *)ppppppuVar31 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  func_0x00010a8d4cd8(pppppppuVar39);
                }
                ppppppppuVar49 = ppppppppuStack_318;
                pppppppuVar37 = pppppppuStack_320;
                pppppppuStack_320 = (undefined *******)0x0;
                ppppppppuStack_318 = (undefined ********)0x0;
                plVar51 = (long *)plVar15[0x54];
                plVar15[0x54] = (long)ppppppppuVar49;
                *pppppppuVar39 = (undefined ******)pppppppuVar37;
                if (plVar51 != (long *)0x0) {
                  plVar3 = plVar51 + 1;
                  do {
                    lVar33 = *plVar3;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar10) {
                      *plVar3 = lVar33 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar33 == 0) {
                    (**(code **)(*plVar51 + 0x10))(plVar51);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
                  }
                }
              }
              ppppppppuVar49 = ppppppppuStack_318;
              if (pppppppuStack_320 != (undefined *******)0x0) {
                pppppppuVar37 = pppppppuStack_320 + 3;
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
                  if (bVar10) {
                    *(int *)pppppppuVar37 = *(int *)pppppppuVar37 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (ppppppppuStack_318 != (undefined ********)0x0) {
                ppppppppuVar24 = ppppppppuStack_318 + 1;
                do {
                  pppppppuVar37 = *ppppppppuVar24;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                  if (bVar10) {
                    *ppppppppuVar24 = (undefined *******)((long)pppppppuVar37 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppppppuVar37 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_318)[2])(ppppppppuStack_318);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar49);
                }
              }
              plVar51 = plStack_210;
              if (plStack_210 != (long *)0x0) {
                plVar3 = plStack_210 + 1;
                do {
                  lVar33 = *plVar3;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar10) {
                    *plVar3 = lVar33 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar33 == 0) {
                  (**(code **)(*plStack_210 + 0x10))(plStack_210);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
                }
              }
              (*(code *)*apuStack_250[0])(apuStack_250);
              (*(code *)*apuStack_290[0])(apuStack_290);
              plVar51 = plStack_2a8;
              if (plStack_2a8 != (long *)0x0) {
                plVar3 = plStack_2a8 + 1;
                do {
                  lVar33 = *plVar3;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar10) {
                    *plVar3 = lVar33 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar33 == 0) {
                  (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
                }
              }
              (*(code *)*pppppppuStack_2e8)(&pppppppuStack_2e8);
              plVar51 = (long *)CONCAT17(uStack_2f1,uStack_2f8);
              if (plVar51 != (long *)0x0) {
                plVar3 = plVar51 + 1;
                do {
                  lVar33 = *plVar3;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar10) {
                    *plVar3 = lVar33 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar33 == 0) {
                  (**(code **)(*plVar51 + 0x10))(plVar51);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
                }
              }
              if ((((char)plVar15[0x59] == '\x01') && (*pppppppuVar39 != (undefined ******)0x0)) &&
                 (ppppppuVar31 = (undefined ******)(*pppppppuVar39)[2],
                 ppppppuVar31 != (undefined ******)0x0)) {
                ppppppuVar40 = ppppppuVar31 + 1;
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
                  if (bVar10) {
                    *ppppppuVar40 = (undefined *****)((long)*ppppppuVar40 + 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                pppppppuVar37 = (undefined *******)0x118;
                __Znwm();
                pppppppuVar37[2] = (undefined ******)0x0;
                pppppppuVar37[1] = (undefined ******)0x200000006;
                *(undefined2 *)(pppppppuVar37 + 3) = 4;
                pppppppuVar37[5] = (undefined ******)0x0;
                pppppppuVar37[4] = (undefined ******)0x0;
                pppppppuVar37[7] = (undefined ******)0x0;
                pppppppuVar37[6] = (undefined ******)0x0;
                pppppppuVar37[9] = (undefined ******)0x0;
                pppppppuVar37[8] = (undefined ******)0x0;
                pppppppuVar37[0xb] = (undefined ******)0x0;
                pppppppuVar37[10] = (undefined ******)0x0;
                pppppppuVar37[0xd] = (undefined ******)0x0;
                pppppppuVar37[0xc] = (undefined ******)0x0;
                pppppppuVar37[0xf] = (undefined ******)0x0;
                pppppppuVar37[0xe] = (undefined ******)0x0;
                pppppppuVar37[0x10] = (undefined ******)0x0;
                pppppppuVar37[0x11] = (undefined ******)(pppppppuVar37 + 3);
                pppppppuVar37[0x12] = (undefined ******)0x0;
                *(undefined1 *)(pppppppuVar37 + 0x13) = 0;
                *(undefined1 *)(pppppppuVar37 + 0x15) = 0;
                *pppppppuVar37 = (undefined ******)&PTR_FUN_110c2aed0;
                pppppppuVar56 = pppppppuVar37 + 0x16;
                *pppppppuVar56 = ppppppuVar31;
                ppppppuVar31 = (undefined ******)plVar15[0x58] + 1;
                pppppppuVar37[0x17] = (undefined ******)plVar15[0x58];
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                  if (bVar10) {
                    *ppppppuVar31 = (undefined *****)((long)*ppppppuVar31 + 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                pppppppuVar37[0x1a] = (undefined ******)0x0;
                pppppppuVar37[0x1b] = (undefined ******)0x32aaaba7;
                pppppppuVar37[0x1d] = (undefined ******)0x0;
                pppppppuVar37[0x1c] = (undefined ******)0x0;
                pppppppuVar37[0x1f] = (undefined ******)0x0;
                pppppppuVar37[0x1e] = (undefined ******)0x0;
                pppppppuVar37[0x21] = (undefined ******)0x0;
                pppppppuVar37[0x20] = (undefined ******)0x0;
                pppppppuVar37[0x22] = (undefined ******)0x0;
                ppppppppuStack_318 = (undefined ********)0x0;
                pppppppuVar37[0x18] = (undefined ******)pppppppuVar37;
                pppppppuVar37[0x19] = (undefined ******)0x0;
                pppppppuStack_320 = pppppppuVar37;
                pppppppuStack_310 = pppppppuVar56;
                if (((uint)pppppppuVar37[0x17][2] >> 1 & 1) == 0) {
                  __ZNSt3__15mutex4lockEv(pppppppuVar37 + 0x1b);
                  ppppppuVar40 = *pppppppuVar56;
                  ppppppuVar31 = ppppppuVar40 + 2;
                  do {
                    pppppuVar43 = *ppppppuVar31;
                    if (pppppuVar43 == (undefined *****)0x0) {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                      if (bVar10) {
                        *ppppppuVar31 = (undefined *****)0x1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') {
                        ppppppuVar31 = ppppppuVar40 + 3;
                        uStack_300._0_7_ = 0x10a8da86c;
                        uStack_300._7_1_ = 0;
                        uStack_2f8 = SUB87(pppppppuVar56,0);
                        uVar6 = uStack_2f8;
                        uStack_2f1 = (undefined1)((ulong)pppppppuVar56 >> 0x38);
                        uVar7 = uStack_2f1;
                        uStack_2f0 = &PTR_PTR_1132fed68;
                        func_0x000109d1b588(ppppppuVar31,&uStack_300);
                        ppppppuVar40[2] = (undefined *****)0x0;
                        pppppppuStack_310[3] = ppppppuVar31;
                        ppppppuVar54 = pppppppuVar37[0x17];
                        ppppppuVar40 = ppppppuVar54 + 2;
                        goto LAB_10a8d9cf8;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  } while (((uint)pppppuVar43 >> 1 & 1) == 0);
                  pppppppuStack_310[3] = (undefined ******)0x0;
                  ppppppuVar40 = pppppppuVar37[0x18];
                  ppppppuVar31 = ppppppuVar40 + 2;
                  do {
                    pppppuVar43 = *ppppppuVar31;
                    if (pppppuVar43 == (undefined *****)0x0) {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                      if (bVar10) {
                        *ppppppuVar31 = (undefined *****)0x2;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') {
                        func_0x000109d1b4dc(ppppppuVar40 + 3);
                        break;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  } while (((uint)pppppuVar43 >> 1 & 1) == 0);
                  ppppppuVar31 = pppppppuVar37[0x17];
                  pppppppuVar37[0x17] = (undefined ******)0x0;
                  if (ppppppuVar31 != (undefined ******)0x0) {
                    ppppppuVar40 = ppppppuVar31 + 1;
                    do {
                      pppppuVar43 = *ppppppuVar40;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
                      if (bVar10) {
                        *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -4);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (((ulong)pppppuVar43 & 0x1fffffffc) == 4) {
                      (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
                      do {
                        pppppuVar43 = *ppppppuVar40;
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
                        if (bVar10) {
                          *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if ((undefined *****)((long)pppppuVar43 + -1) == (undefined *****)0x0) {
                        (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
                      }
                    }
                  }
                  ppppppuVar31 = pppppppuVar37[0x18];
                  pppppppuVar37[0x18] = (undefined ******)0x0;
                  if (ppppppuVar31 != (undefined ******)0x0) {
                    func_0x0001092b4274(pppppppuVar37 + 0x18);
                  }
                  pppppppuVar52 = (undefined *******)*pppppppuVar56;
                  *pppppppuVar56 = (undefined ******)0x0;
LAB_10a8d9f3c:
                  __ZNSt3__15mutex6unlockEv(pppppppuVar37 + 0x1b);
                  unaff_x26 = pppppppuVar56;
                }
                else {
                  ppppppuVar31 = pppppppuVar37[0x18];
                  pppppppuVar52 = pppppppuVar37;
                  FUN_109d1857c();
                  func_0x000109d1b350(ppppppuVar31,pppppppuVar52);
                  ppppppuVar31 = *pppppppuVar56;
                  *pppppppuVar56 = (undefined ******)0x0;
                  if (ppppppuVar31 != (undefined ******)0x0) {
                    ppppppuVar40 = ppppppuVar31 + 1;
                    do {
                      pppppuVar43 = *ppppppuVar40;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
                      if (bVar10) {
                        *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -4);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (((ulong)pppppuVar43 & 0x1fffffffc) == 4) {
                      do {
                        pppppuVar43 = *ppppppuVar40;
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
                        if (bVar10) {
                          *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if ((undefined *****)((long)pppppuVar43 + -1) == (undefined *****)0x0) {
                        (*(code *)(*ppppppuVar31)[1])();
                      }
                    }
                  }
                  ppppppuVar31 = pppppppuVar37[0x17];
                  pppppppuVar37[0x17] = (undefined ******)0x0;
                  if (ppppppuVar31 != (undefined ******)0x0) {
                    unaff_x26 = (undefined *******)(ppppppuVar31 + 1);
                    do {
                      ppppppuVar40 = *unaff_x26;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                      if (bVar10) {
                        *unaff_x26 = (undefined ******)((long)ppppppuVar40 + -4);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (((ulong)ppppppuVar40 & 0x1fffffffc) == 4) {
                      (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
                      do {
                        ppppppuVar40 = *unaff_x26;
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                        if (bVar10) {
                          *unaff_x26 = (undefined ******)((long)ppppppuVar40 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if ((undefined ******)((long)ppppppuVar40 + -1) == (undefined ******)0x0) {
                        (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
                      }
                    }
                  }
                  ppppppuVar31 = pppppppuVar37[0x18];
                  pppppppuVar37[0x18] = (undefined ******)0x0;
                  if (ppppppuVar31 != (undefined ******)0x0) {
                    func_0x0001092b4274(pppppppuVar37 + 0x18);
                  }
                  pppppppuVar52 = pppppppuStack_320;
                  pppppppuStack_320 = (undefined *******)0x0;
                }
                ppppppppuVar12 = ppppppppuStack_318;
                if (ppppppppuStack_318 != (undefined ********)0x0) {
                  func_0x0001092b4274(&ppppppppuStack_318);
                }
                if (pppppppuStack_320 != (undefined *******)0x0) {
                  pppppppuVar37 = pppppppuStack_320 + 1;
                  do {
                    ppppppuVar31 = *pppppppuVar37;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
                    if (bVar10) {
                      *pppppppuVar37 = (undefined ******)((long)ppppppuVar31 + -4);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)ppppppuVar31 & 0x1fffffffc) == 4) {
                    do {
                      ppppppuVar31 = *pppppppuVar37;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
                      if (bVar10) {
                        *pppppppuVar37 = (undefined ******)((long)ppppppuVar31 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if ((undefined ******)((long)ppppppuVar31 + -1) == (undefined ******)0x0) {
                      (*(code *)(*pppppppuStack_320)[1])();
                    }
                  }
                }
                plVar51 = (long *)plVar15[0x55];
                if (plVar51 != (long *)0x0) {
                  puVar2 = (ulong *)(plVar51 + 1);
                  do {
                    uVar16 = *puVar2;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar10) {
                      *puVar2 = uVar16 - 4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if ((uVar16 & 0x1fffffffc) == 4) {
                    do {
                      uVar16 = *puVar2;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar10) {
                        *puVar2 = uVar16 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (uVar16 - 1 == 0) {
                      (**(code **)(*plVar51 + 8))();
                    }
                  }
                }
                plVar15[0x55] = (long)pppppppuVar52;
              }
              else {
                plVar51 = (long *)plVar15[0x55];
                if (plVar51 != (long *)0x0) {
                  puVar2 = (ulong *)(plVar51 + 1);
                  do {
                    uVar16 = *puVar2;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar10) {
                      *puVar2 = uVar16 - 4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if ((uVar16 & 0x1fffffffc) == 4) {
                    do {
                      uVar16 = *puVar2;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar10) {
                        *puVar2 = uVar16 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (uVar16 - 1 == 0) {
                      (**(code **)(*plVar51 + 8))();
                    }
                  }
                }
                plVar15[0x55] = 0;
              }
              if (((uVar30 == 0) && (*pppppppuVar39 != (undefined ******)0x0)) &&
                 ((*pppppppuVar39)[2] != (undefined *****)0x0)) {
                ppppppppuVar12 = (undefined ********)&UNK_10f68165b;
                FUN_10a8da354(plVar15);
                FUN_10a8c7000(plVar15);
              }
              ppppppppuVar49 = ppppppppuStack_180;
              if (ppppppppuStack_180 != (undefined ********)0x0) {
                plVar15 = (long *)(ppppppppuStack_180 + 1);
                do {
                  lVar33 = *plVar15;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar10) {
                    *plVar15 = lVar33 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar33 == 0) {
                  (**(code **)((long)*ppppppppuStack_180 + 0x10))(ppppppppuStack_180);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar49);
                }
              }
              (*(code *)*pppppppuStack_1c0)(&pppppppuStack_1c0);
              ppppppppuVar49 = ppppppppuVar13;
              (*(code *)*pppppppuStack_200)();
            }
            else {
              FUN_10a8da3cc(&uStack_300,plVar15);
              FUN_10a8da5c8(&pppppppuStack_320,&uStack_300,plVar15[1] + 0x168,plVar15 + 0x3f,
                            plVar15 + 0x42);
              if (cStack_2b9 < '\0') {
                __ZdlPv(uStack_2d0);
              }
              pppppppuStack_208 = (undefined *******)&pppppppuStack_2e8;
              FUN_10a04b2ac(&pppppppuStack_208);
              pppppppuStack_208 = (undefined *******)&uStack_300;
              FUN_10a04b2ac(&pppppppuStack_208);
              pppppppuVar39 = *ppppppppuVar49;
              uStack_2f0 = (undefined **)(pppppppuVar39 + 0xc);
              pppppppuStack_2e8 = pppppppuVar39 + 0xf;
              uStack_300._0_7_ = SUB87(pppppppuVar39,0);
              uStack_300._7_1_ = (undefined1)((ulong)pppppppuVar39 >> 0x38);
              uStack_2f8 = SUB87(pppppppuVar39 + 9,0);
              uStack_2f1 = (undefined1)((ulong)(pppppppuVar39 + 9) >> 0x38);
              pppppppuStack_200 = pppppppuStack_320 + 9;
              pppppppuStack_1f8 = pppppppuStack_320 + 0xc;
              pppppppuStack_1f0 = pppppppuStack_320 + 0xf;
              pppppppuStack_208 = pppppppuStack_320;
              ppppppppuVar9 = (undefined ********)auStack_330;
              ppppppppuVar12 = (undefined ********)&uStack_300;
              FUN_109d2d6b8(ppppppppuVar9,ppppppppuVar12,&pppppppuStack_208);
              if (((ulong)ppppppppuVar9 & 1) == 0) {
                func_0x00010a8d4768(plVar15);
                ppppppppuVar12 = &pppppppuStack_320;
                FUN_10a8da564();
              }
              else {
                ppppppppuVar49 = ppppppppuVar9;
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  puVar26 = &UNK_10f6812de;
                  puVar14 = &UNK_10f68166d;
                  puVar28 = &UNK_10f6816c0;
                  uVar17 = 1;
                  uVar25 = 2;
                  uVar27 = 0xb9;
                  uVar55 = 0x10a8d93b8;
                  ppppppppuVar9 = (undefined ********)auStack_340;
                  ppppppppuVar12 = (undefined ********)&ppppppppuStack_110;
                  goto SUB_10ae06f08;
                }
              }
              ppppppppuVar13 = ppppppppuStack_318;
              if (ppppppppuStack_318 != (undefined ********)0x0) {
                ppppppppuVar22 = ppppppppuStack_318 + 1;
                do {
                  pppppppuVar39 = *ppppppppuVar22;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
                  if (bVar10) {
                    *ppppppppuVar22 = (undefined *******)((long)pppppppuVar39 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppppppuVar39 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_318)[2])(ppppppppuStack_318);
                  ppppppppuVar49 = ppppppppuVar13;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
              }
              if (((ulong)ppppppppuVar9 & 1) == 0) goto LAB_10a8d9494;
            }
            if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_178) {
              auVar75._8_8_ = ppppppppuVar12;
              auVar75._0_8_ = ppppppppuVar49;
              return auVar75;
            }
          }
          ___stack_chk_fail();
          __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
          FUN_10a8daae8(&pppppppuStack_320);
          FUN_10a8d4068(unaff_x24 + 0x10);
          (*(code *)*pppppppuStack_1c0)(unaff_x24 + 9);
          (*(code *)*pppppppuStack_200)(ppppppppuVar13);
          __Unwind_Resume(ppppppppuVar49);
          puVar26 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if (ppppppppuVar12 < (undefined ********)0x2e8ba2e8ba2e8bb) {
            lVar33 = (long)ppppppppuVar12 * 0x58;
            __Znwm(lVar33);
            auVar76._8_8_ = ppppppppuVar12;
            auVar76._0_8_ = lVar33;
            return auVar76;
          }
          func_0x000109ffded8();
          puVar47 = (undefined8 *)(puVar26 + 8);
          puVar53 = (undefined8 *)*puVar47;
          ppppppppuVar49 = ppppppppuVar12;
          puVar50 = puVar47;
          if (puVar53 != (undefined8 *)0x0) {
            do {
              puVar19 = puVar53 + 4;
              ppppppppuVar49 = ppppppppuVar12;
              FUN_10a003e3c(puVar19,ppppppppuVar12);
              if (-1 < (char)puVar19) {
                puVar50 = puVar53;
              }
              puVar53 = *(undefined8 **)((long)puVar53 + ((ulong)puVar19 >> 4 & 8));
            } while (puVar53 != (undefined8 *)0x0);
            if (puVar50 != puVar47) {
              ppppppppuVar49 = (undefined ********)(puVar50 + 4);
              FUN_10a003e3c(ppppppppuVar12,ppppppppuVar49);
              if (((uint)ppppppppuVar12 >> 7 & 1) == 0) goto LAB_10a8da28c;
            }
          }
          puVar50 = puVar47;
LAB_10a8da28c:
          auVar77._8_8_ = ppppppppuVar49;
          auVar77._0_8_ = puVar50;
          return auVar77;
        }
      }
      FUN_10a00946c(&UNK_10f68156f);
    }
    plVar15 = (long *)&UNK_10f681523;
    FUN_10a00946c();
    uStack_140 = (undefined ********)&ppppppppuStack_130;
    ppppppppuStack_128 = (undefined ********)FUN_10a8c7000;
    if ((int)plVar15[0x28] == 3) {
LAB_10a8c7018:
      uVar55 = 0;
    }
    else {
      if ((((int)plVar15[0x28] != 2) && ((int)plVar15[0x28] != 1)) && ((int)plVar15[0x28] != 4)) {
        if (((plVar15[0x53] == 0) || (lVar33 = *(long *)(plVar15[0x53] + 0x10), lVar33 == 0)) ||
           (((uint)*(undefined8 *)(lVar33 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
        ppppppppuStack_130 = (undefined ********)&ppppppppuStack_110;
        if (0x143 < *(int *)(*(long *)(*plVar15 + 0xa20) + 0x18)) {
          if (plVar15[0x53] == 0) {
            pppppppuVar39 = (undefined *******)&UNK_10f681734;
            func_0x000105688514();
            ppppppppuVar49 = (undefined ********)&ppppppppuStack_170;
            ppppppuStack_138 = (undefined ******)FUN_10a8c70b8;
            pppppppuVar37 = pppppppuVar39;
            if (*(int *)(pppppppuVar39 + 0x28) == 1) {
              if ((*(char *)(pppppppuVar39 + 0x59) == '\x01') &&
                 (((uint)pppppppuVar39[0x58][2] >> 1 & 1) != 0)) {
                pppppppuVar37 = (undefined *******)pppppppuVar39[0x56];
                if (pppppppuVar37 != (undefined *******)0x0) {
                  pppppppuVar56 = pppppppuVar37 + 1;
                  do {
                    ppppppuVar31 = *pppppppuVar56;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar56,0x10);
                    if (bVar10) {
                      *pppppppuVar56 = (undefined ******)((long)ppppppuVar31 - 4);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)ppppppuVar31 & 0x1fffffffc) == 4) {
                    do {
                      ppppppuVar31 = *pppppppuVar56;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar56,0x10);
                      if (bVar10) {
                        *pppppppuVar56 = (undefined ******)((long)ppppppuVar31 - 1U);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if ((undefined ******)((long)ppppppuVar31 - 1U) == (undefined ******)0x0) {
                      (*(code *)(*pppppppuVar37)[1])();
                    }
                  }
                }
                pppppppuVar39[0x56] = (undefined ******)0x0;
                *(undefined4 *)(pppppppuVar39 + 0x28) = 2;
              }
              else {
                pppppppuVar56 = (undefined *******)pppppppuVar39[0x10];
                pppppppuVar39[0xf] = (undefined ******)0x0;
                pppppppuVar39[0x10] = (undefined ******)0x0;
                uStack_140 = (undefined ********)&ppppppppuStack_130;
                if ((*(char *)(pppppppuVar39 + 0x5e) == '\x01') &&
                   ((uStack_140 = (undefined ********)&ppppppppuStack_130,
                    pppppppuVar39[0x21] != (undefined ******)0x0 &&
                    (ppppuVar32 = (*pppppppuVar39[0x21])[0x11],
                    uStack_140 = (undefined ********)&ppppppppuStack_130,
                    ppppuVar32 != (undefined ****)0x0)))) {
                  uStack_140 = (undefined ********)&ppppppppuStack_130;
                  (*(code *)(*ppppuVar32)[9])(ppppuVar32,1);
                }
                ppppppppuStack_168 = (undefined ********)&stack0xfffffffffffffea0;
                ppppppppuVar24 = (undefined ********)0x1;
                ppppppppuStack_170 = (undefined ********)pppppppuVar39;
                FUN_10a8c6a58(pppppppuVar39,1);
                FUN_10a8db76c(&ppppppppuStack_170);
                pppppppuVar37 = (undefined *******)ppppppppuVar49;
                if (pppppppuVar56 != (undefined *******)0x0) {
                  pppppppuVar39 = pppppppuVar56 + 1;
                  do {
                    ppppppuVar31 = *pppppppuVar39;
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar39,0x10);
                    if (bVar10) {
                      *pppppppuVar39 = (undefined ******)((long)ppppppuVar31 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (ppppppuVar31 == (undefined ******)0x0) {
                    (*(code *)(*pppppppuVar56)[2])(pppppppuVar56);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar56);
                    pppppppuVar37 = pppppppuVar56;
                  }
                }
              }
            }
            auVar72._8_8_ = ppppppppuVar24;
            auVar72._0_8_ = pppppppuVar37;
            return auVar72;
          }
          if (((uint)*(undefined8 *)(*(long *)(plVar15[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
            FUN_10a8dae18();
            goto LAB_10a8c7048;
          }
        }
        FUN_10a8dafa0();
      }
LAB_10a8c7048:
      uVar55 = 1;
    }
    auVar71._8_8_ = ppppppppuVar24;
    auVar71._0_8_ = uVar55;
    return auVar71;
  }
  unaff_x23 = (*ppppppppuVar12)[2];
  unaff_x24 = *param_4;
  pppppppuVar39 = param_4[1];
  if (unaff_x24 != pppppppuVar39) {
    ppppppuVar31 = unaff_x23 + 8;
    func_0x00010a8d4e78(*ppppppuVar31);
    ppppppuVar40 = unaff_x23 + 0xb;
    unaff_x23[7] = (undefined *****)ppppppuVar31;
    *ppppppuVar31 = (undefined *****)0x0;
    unaff_x23[9] = (undefined *****)0x0;
    func_0x00010a8d4ef4(*ppppppuVar40);
    *ppppppuVar40 = (undefined *****)0x0;
    unaff_x23[0xc] = (undefined *****)0x0;
    unaff_x23[10] = (undefined *****)ppppppuVar40;
    *(undefined1 *)(unaff_x23 + 100) = 0;
    unaff_x24 = *param_4;
    pppppppuVar39 = param_4[1];
  }
  for (; uVar57 = (undefined4)param_2, unaff_x24 != pppppppuVar39; unaff_x24 = unaff_x24 + 2) {
    ppppppuVar31 = *unaff_x24;
    if (ppppppuVar31 == (undefined ******)0x0) {
      FUN_10a00946c(&UNK_10f681502);
      ppppppppuVar49 = ppppppppuVar12;
      goto LAB_10a8b9fb0;
    }
    iVar35 = *(int *)(ppppppuVar31 + 5);
    if (iVar35 == 1) {
      ppppppuVar40 = unaff_x24[1];
      uStack_c8._0_7_ = SUB87(ppppppuVar31,0);
      uStack_c8._7_1_ = (undefined1)((ulong)ppppppuVar31 >> 0x38);
      uStack_c0 = SUB87(ppppppuVar40,0);
      uStack_b9 = (undefined1)((ulong)ppppppuVar40 >> 0x38);
      if (ppppppuVar40 != (undefined ******)0x0) {
        ppppppuVar40 = ppppppuVar40 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
          if (bVar10) {
            *ppppppuVar40 = (undefined *****)((long)*ppppppuVar40 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppppppuVar31 = *unaff_x24;
      }
      ppppppuStack_b8 = ppppppuVar31 + 6;
      ppppppuVar31 = unaff_x23 + 10;
      FUN_10a8d5afc(ppppppuVar31,ppppppuStack_b8,&ppppppuStack_b8);
      ppppppppuVar24 = (undefined ********)&uStack_c8;
      func_0x00010a8c5be4(ppppppuVar31 + 7);
      param_4 = (undefined ********)CONCAT17(uStack_b9,uStack_c0);
      if (param_4 != (undefined ********)0x0) {
        ppppppppuVar49 = param_4 + 1;
        do {
          pppppppuVar37 = *ppppppppuVar49;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar49,0x10);
          if (bVar10) {
            *ppppppppuVar49 = (undefined *******)((long)pppppppuVar37 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar37 == (undefined *******)0x0) {
          (*(code *)(*param_4)[2])(param_4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
        }
      }
      ppppppuVar31 = *unaff_x24;
      iVar35 = *(int *)(ppppppuVar31 + 5);
    }
    if (iVar35 == 0) {
      ppppppuVar40 = unaff_x24[1];
      uStack_c8._0_7_ = SUB87(ppppppuVar31,0);
      uStack_c8._7_1_ = (undefined1)((ulong)ppppppuVar31 >> 0x38);
      uStack_c0 = SUB87(ppppppuVar40,0);
      uStack_b9 = (undefined1)((ulong)ppppppuVar40 >> 0x38);
      if (ppppppuVar40 != (undefined ******)0x0) {
        ppppppuVar40 = ppppppuVar40 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
          if (bVar10) {
            *ppppppuVar40 = (undefined *****)((long)*ppppppuVar40 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppppppuVar31 = *unaff_x24;
      }
      ppppppuStack_b8 = ppppppuVar31 + 6;
      ppppppuVar31 = unaff_x23 + 7;
      FUN_10a8d58e4(ppppppuVar31,ppppppuStack_b8,&ppppppuStack_b8);
      ppppppppuVar24 = (undefined ********)&uStack_c8;
      func_0x00010a8c5edc(ppppppuVar31 + 7);
      param_4 = (undefined ********)CONCAT17(uStack_b9,uStack_c0);
      if (param_4 != (undefined ********)0x0) {
        ppppppppuVar49 = param_4 + 1;
        do {
          pppppppuVar37 = *ppppppppuVar49;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar49,0x10);
          if (bVar10) {
            *ppppppppuVar49 = (undefined *******)((long)pppppppuVar37 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar37 == (undefined *******)0x0) {
          (*(code *)(*param_4)[2])(param_4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
        }
      }
    }
  }
  ppppppuVar31 = (*ppppppppuVar12)[2];
  FUN_10a8c6f54(ppppppuVar31,param_5);
  if (((*(byte *)((long)param_3 + 0x275) & 1) != 0) || (*(char *)((long)param_3 + 0x276) != '\x01'))
  {
    auVar65._8_8_ = param_5;
    auVar65._0_8_ = ppppppuVar31;
    return auVar65;
  }
  ppuVar21 = (undefined **)0x1;
  if ((param_3[0x46] == (undefined *******)0x0) || (*(int *)(param_3[0x46][2] + 0x28) != 1)) {
    if (2 < (ulong)*(byte *)((long)param_3 + 0x24c)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8b7ba4);
      (*pcVar8)();
    }
    ppppppppuVar49 = param_3 + 0x48;
    (*(code *)(&PTR_FUN_110c2b510)[*(byte *)((long)param_3 + 0x24c)])(ppppppppuVar49);
    *(undefined1 *)(param_3 + 0x48) = 1;
    *(undefined4 *)((long)param_3 + 0x244) = 4;
    *(undefined4 *)(param_3 + 0x49) = 4;
    *(undefined1 *)((long)param_3 + 0x24c) = 1;
    *(undefined1 *)((long)param_3 + 0x271) = 0;
    *(undefined1 *)((long)param_3 + 0x272) = 1;
    auVar62._8_8_ = ppuVar21;
    auVar62._0_8_ = ppppppppuVar49;
    return auVar62;
  }
  pbVar18 = &UNK_10f67ff6d;
  FUN_10a00946c();
  ppppppuStack_b8 = *(undefined *******)PTR____stack_chk_guard_11034bdc0;
  if (pbVar18[0x1a4] == 1) {
    pbVar18[0x1a4] = 0;
  }
  pbVar11 = pbVar18;
  if ((((pbVar18[0x128] == 1) && (*(long *)(pbVar18 + 0x108) != 0)) &&
      (*(long *)(pbVar18 + 0xf8) == 0)) &&
     (pbVar11 = *(byte **)(*(long *)(pbVar18 + 0x108) + 0x268), pbVar11 != (byte *)0x0)) {
    ppuVar21 = &PTR_DAT_110bb3788;
    ___dynamic_cast(pbVar11,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0);
    if (pbVar11 == (byte *)0x0) goto LAB_10a8b7c00;
    lVar33 = *(long *)(pbVar18 + 0x58);
    if ((lVar33 != 0) &&
       ((((*(byte *)(lVar33 + 100) & 1) != 0 || ((*(byte *)(lVar33 + 0x65) & 1) != 0)) ||
        ((*(char *)(lVar33 + 0x60) != '\0' || ((*(byte *)(lVar33 + 99) & 1) == 0)))))) {
      FUN_10a8bb1fc();
      pbVar11 = (byte *)(*(long *)pbVar11 + 0x2c0);
      FUN_10a08fec0();
      if ((*pbVar11 >> 2 & 1) == 0) goto LAB_10a8b7c00;
    }
    lVar33 = *(long *)(pbVar18 + 0x118);
    if ((lVar33 != 0) && (*(char *)(lVar33 + 0x60) != '\0')) goto LAB_10a8b7c00;
    lVar36 = *(long *)(pbVar18 + 0x58);
    if (lVar36 == 0) {
      bVar29 = 0;
      bVar34 = 0;
    }
    else if (((((*(byte *)(lVar36 + 100) & 1) == 0) && ((*(byte *)(lVar36 + 0x65) & 1) == 0)) &&
             (*(char *)(lVar36 + 0x60) == '\0')) && ((*(byte *)(lVar36 + 99) & 1) != 0)) {
      bVar29 = 0;
      bVar34 = 0;
    }
    else {
      bVar29 = *(byte *)(lVar36 + 0x50);
      uStack_d0 = *(undefined8 *)(lVar36 + 0x51);
      uStack_c8._0_7_ = (undefined7)*(undefined8 *)(lVar36 + 0x59);
      uStack_c8._7_1_ = (undefined1)*(undefined8 *)(lVar36 + 0x60);
      uStack_c0 = (undefined7)((ulong)*(undefined8 *)(lVar36 + 0x60) >> 8);
      bVar34 = 1;
    }
    if (lVar33 == 0) {
      bVar41 = 0;
    }
    else {
      bVar41 = *(byte *)(lVar33 + 0x50);
      uStack_f0 = *(undefined8 *)(lVar33 + 0x51);
      uStack_e8 = (undefined3)*(undefined8 *)(lVar33 + 0x59);
      uStack_dd = (undefined5)*(undefined8 *)(lVar33 + 100);
      uStack_d8 = (undefined3)((ulong)*(undefined8 *)(lVar33 + 100) >> 0x28);
      uStack_e5 = (undefined5)*(undefined8 *)(lVar33 + 0x5c);
      uStack_e0 = (undefined3)((ulong)*(undefined8 *)(lVar33 + 0x5c) >> 0x28);
    }
    lVar36 = *(long *)(pbVar18 + 0xf8);
    if (lVar36 == 0) {
      pbVar44 = pbVar18 + 0x108;
      uVar55 = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(lVar36 + 0x298) + 0x2c);
      uVar55 = *(undefined8 *)(*(long *)(lVar36 + 0x298) + 0x24);
      uVar57 = *(undefined4 *)(lVar36 + 0x2a8);
      pbVar44 = (byte *)(lVar36 + 0x288);
    }
    lVar45 = *(long *)(*(long *)pbVar44 + 0x268);
    if (*(char *)(lVar45 + 0x334) == '\x01') {
      uVar46 = *(undefined4 *)(lVar45 + 0x2d0);
    }
    else {
      uVar46 = 0x7fffffff;
    }
    if (*(int *)(pbVar18 + 0x50) - 1U < 4) {
      uVar4 = *(undefined4 *)(&UNK_10e496020 + (ulong)(*(int *)(pbVar18 + 0x50) - 1U) * 4);
      *(undefined4 *)(pbVar18 + 0x140) = uVar46;
      *(undefined4 *)(pbVar18 + 0x144) = uVar4;
      *(undefined8 *)(pbVar18 + 0x148) = *(undefined8 *)(pbVar18 + 0x48);
      pbVar18[0x150] = bVar29;
      *(ulong *)(pbVar18 + 0x160) = CONCAT71(uStack_c0,uStack_c8._7_1_);
      *(ulong *)(pbVar18 + 0x159) = CONCAT17(uStack_c8._7_1_,(undefined7)uStack_c8);
      *(undefined8 *)(pbVar18 + 0x151) = uStack_d0;
      pbVar18[0x168] = bVar34;
      pbVar18[0x16c] = bVar41;
      *(ulong *)(pbVar18 + 0x175) = CONCAT53(uStack_e5,uStack_e8);
      *(undefined8 *)(pbVar18 + 0x16d) = uStack_f0;
      *(ulong *)(pbVar18 + 0x180) = CONCAT35(uStack_d8,uStack_dd);
      *(ulong *)(pbVar18 + 0x178) = CONCAT35(uStack_e0,uStack_e5);
      pbVar18[0x188] = lVar33 != 0;
      *(undefined8 *)(pbVar18 + 0x194) = uVar17;
      *(undefined8 *)(pbVar18 + 0x18c) = uVar55;
      *(undefined4 *)(pbVar18 + 0x19c) = uVar57;
      pbVar18[0x1a0] = lVar36 != 0;
      if (pbVar18[0x1a4] == 1) {
        if ((*(byte *)(lVar45 + 0x334) & 1) != 0) {
LAB_10a8b7e00:
          uVar17 = *(undefined8 *)(pbVar18 + 0x148);
          uVar55 = *(undefined8 *)(pbVar18 + 0x140);
          uVar25 = *(undefined8 *)(pbVar18 + 0x150);
          uVar58 = *(undefined8 *)(pbVar18 + 0x168);
          uVar27 = *(undefined8 *)(pbVar18 + 0x160);
          *(undefined8 *)(lVar45 + 0x2e8) = *(undefined8 *)(pbVar18 + 0x158);
          *(undefined8 *)(lVar45 + 0x2e0) = uVar25;
          *(undefined8 *)(lVar45 + 0x2f8) = uVar58;
          *(undefined8 *)(lVar45 + 0x2f0) = uVar27;
          *(undefined8 *)(lVar45 + 0x2d8) = uVar17;
          *(undefined8 *)(lVar45 + 0x2d0) = uVar55;
          uVar17 = *(undefined8 *)(pbVar18 + 0x178);
          uVar55 = *(undefined8 *)(pbVar18 + 0x170);
          uVar27 = *(undefined8 *)(pbVar18 + 0x188);
          uVar25 = *(undefined8 *)(pbVar18 + 0x180);
          uVar59 = *(undefined8 *)(pbVar18 + 0x198);
          uVar58 = *(undefined8 *)(pbVar18 + 400);
          *(undefined4 *)(lVar45 + 0x330) = *(undefined4 *)(pbVar18 + 0x1a0);
          *(undefined8 *)(lVar45 + 0x318) = uVar27;
          *(undefined8 *)(lVar45 + 0x310) = uVar25;
          *(undefined8 *)(lVar45 + 0x328) = uVar59;
          *(undefined8 *)(lVar45 + 800) = uVar58;
          *(undefined8 *)(lVar45 + 0x308) = uVar17;
          *(undefined8 *)(lVar45 + 0x300) = uVar55;
        }
      }
      else {
        pbVar18[0x1a4] = 1;
        if (*(char *)(lVar45 + 0x334) == '\x01') goto LAB_10a8b7e00;
      }
      goto LAB_10a8b7c00;
    }
  }
  else {
LAB_10a8b7c00:
    if ((undefined ******)*(undefined ******)PTR____stack_chk_guard_11034bdc0 == ppppppuStack_b8) {
      auVar63._8_8_ = ppuVar21;
      auVar63._0_8_ = pbVar11;
      return auVar63;
    }
    ___stack_chk_fail();
  }
  puVar26 = &UNK_10f6818d6;
  FUN_10a00946c();
  plVar15 = (long *)(puVar26 + -0x68);
  ppppppppuStack_120 = (undefined ********)0x1;
  ppppppppuStack_118 = (undefined ********)0x4;
  ppppppppuStack_110 = (undefined ********)0x4;
  pcStack_f8 = FUN_10a8b7e40;
  pcStack_108 = (code *)pbVar18;
  pppppppuStack_100 = (undefined *******)&stack0xffffffffffffff60;
  if (*(int *)(*(long *)(*(long *)(puVar26 + 0x108) + 0x100) + 0x2a8) - 7U < 2) {
    plVar51 = plVar15;
    FUN_10a8d40c0();
    uVar30 = (uint)plVar51;
    FUN_10a8d40c0();
    uVar30 = uVar30 >> 2 & 1;
    if (((uint)plVar51 >> 1 & 1) == 0) {
      if ((puVar26[0x20d] & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar18 = *(byte **)(*(long *)(*(long *)(puVar26 + 0x108) + 0x8b8) + 0x20);
      if (pbVar18 == (byte *)0x0) {
        if ((puVar26[0x20d] & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        ppuVar21 = (undefined **)&UNK_10f680bf1;
        FUN_10a8b7988(pbVar18,&UNK_10f680bf1,0x1e);
        if ((puVar26[0x20d] & 1) == 0) {
          if ((*pbVar18 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar51 = plVar15;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar51 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((puVar26[0x20d] & 1) == 0) goto LAB_10a8b7918;
    uVar30 = 0;
  }
  plVar51 = plVar15;
  FUN_10a8b7a80();
  ppuVar21 = (undefined **)(ulong)*(byte *)(*(long *)(*plVar51 + 0x10) + 0x2e8);
  FUN_10a8c6f54(*(long *)(*plVar51 + 0x10),ppuVar21);
  if (((puVar26[0x20e] & 1) != 0) || (uVar30 != 0)) {
    ppuVar21 = (undefined **)0x1;
    FUN_10a8b7b10(plVar15,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar33 = *(long *)(*plVar15 + 0x10);
  plVar51 = *(long **)(lVar33 + 0x38);
  while (plVar51 != (long *)(lVar33 + 0x40)) {
    plVar15 = (long *)plVar51[7];
    FUN_10a8b7bb0(plVar15);
    plVar3 = (long *)plVar51[1];
    plVar48 = plVar51;
    if ((long *)plVar51[1] == (long *)0x0) {
      do {
        plVar51 = (long *)plVar48[2];
        bVar10 = (long *)*plVar51 != plVar48;
        plVar48 = plVar51;
      } while (bVar10);
    }
    else {
      do {
        plVar51 = plVar3;
        plVar3 = (long *)*plVar51;
      } while ((long *)*plVar51 != (long *)0x0);
    }
  }
  auVar61._8_8_ = ppuVar21;
  auVar61._0_8_ = plVar15;
  return auVar61;
LAB_10a8d9cf8:
  do {
    pppppuVar43 = *ppppppuVar40;
    if (pppppuVar43 == (undefined *****)0x0) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
      if (bVar10) {
        *ppppppuVar40 = (undefined *****)0x1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        ppppppuVar31 = ppppppuVar54 + 3;
        uStack_300._0_7_ = 0x10a8daa08;
        uStack_300._7_1_ = 0;
        uStack_2f0 = &PTR_PTR_1132fed68;
        uStack_2f8 = uVar6;
        uStack_2f1 = uVar7;
        func_0x000109d1b588(ppppppuVar31,&uStack_300);
        ppppppuVar54[2] = (undefined *****)0x0;
        pppppppuStack_310[4] = ppppppuVar31;
        pppppppuVar52 = pppppppuStack_320;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar43 >> 1 & 1) == 0);
  pppppppuStack_310[4] = (undefined ******)0x0;
  ppppppuVar40 = pppppppuVar37[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar40,ppppppuVar31);
  ppppppuVar31 = pppppppuVar37[0x17];
  pppppppuVar37[0x17] = (undefined ******)0x0;
  if (ppppppuVar31 != (undefined ******)0x0) {
    ppppppuVar40 = ppppppuVar31 + 1;
    do {
      pppppuVar43 = *ppppppuVar40;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
      if (bVar10) {
        *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar43 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
      do {
        pppppuVar43 = *ppppppuVar40;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
        if (bVar10) {
          *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar43 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
      }
    }
  }
  ppppppuVar54 = *pppppppuVar56;
  ppppppuVar31 = ppppppuVar54 + 2;
  ppppppuVar40 = pppppppuStack_310[3];
  while (pppppuVar43 = *ppppppuVar31, pppppuVar43 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar52 = pppppppuStack_320;
    if (((uint)pppppuVar43 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
  if (bVar10) {
    *ppppppuVar31 = (undefined *****)0x1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_10a8d9de4;
  uStack_300._0_7_ = 0x10a8da86c;
  uStack_300._7_1_ = 0;
  uStack_2f0 = &PTR_PTR_1132fed68;
  uStack_2f8 = uVar6;
  uStack_2f1 = uVar7;
  FUN_109d1b624(ppppppuVar54 + 3,&uStack_300,ppppppuVar40);
  ppppppuVar54[2] = (undefined *****)0x0;
  pppppppuStack_310[3] = (undefined ******)0x0;
  ppppppuVar31 = *pppppppuVar56;
  *pppppppuVar56 = (undefined ******)0x0;
  if (ppppppuVar31 != (undefined ******)0x0) {
    ppppppuVar40 = ppppppuVar31 + 1;
    do {
      pppppuVar43 = *ppppppuVar40;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
      if (bVar10) {
        *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar43 & 0x1fffffffc) == 4) {
      do {
        pppppuVar43 = *ppppppuVar40;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar40,0x10);
        if (bVar10) {
          *ppppppuVar40 = (undefined *****)((long)pppppuVar43 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar43 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar31)[1])();
      }
    }
  }
  ppppppuVar31 = pppppppuVar37[0x18];
  pppppppuVar37[0x18] = (undefined ******)0x0;
  pppppppuVar52 = pppppppuStack_320;
  if (ppppppuVar31 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar37 + 0x18);
    pppppppuVar52 = pppppppuStack_320;
  }
LAB_10a8d9f38:
  pppppppuStack_320 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8b9d7c; end: 10a8b9fdf;  */

/* WARNING: Possible PIC construction at 0x00010a8d93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a8ba258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8d93b8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10a8b9d7c(undefined8 param_1,undefined8 param_2,undefined ********param_3,
             undefined ********param_4,undefined8 param_5)

{
  undefined ****ppppuVar1;
  undefined ********ppppppppuVar2;
  ulong *puVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined ********ppppppppuVar10;
  bool bVar11;
  byte *pbVar12;
  undefined ********ppppppppuVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined ********ppppppppuVar17;
  undefined8 uVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  code *pcVar21;
  undefined **ppuVar22;
  undefined ********ppppppppuVar23;
  code *pcVar24;
  undefined ********ppppppppuVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  byte bVar30;
  uint uVar31;
  undefined ******ppppppuVar32;
  code *extraout_x8;
  undefined ****ppppuVar33;
  long lVar34;
  undefined *******pppppppuVar35;
  byte bVar36;
  int iVar37;
  long lVar38;
  undefined ******ppppppuVar39;
  undefined *******pppppppuVar40;
  byte bVar41;
  undefined *****pppppuVar42;
  byte *pbVar43;
  long lVar44;
  undefined4 uVar45;
  undefined8 *puVar46;
  long *plVar47;
  undefined ********unaff_x21;
  undefined8 *puVar48;
  long *plVar49;
  undefined *******pppppppuVar50;
  undefined8 *puVar51;
  undefined ******unaff_x23;
  undefined ******ppppppuVar52;
  undefined *******unaff_x24;
  undefined *******unaff_x26;
  undefined8 uVar53;
  undefined *******pppppppuVar54;
  undefined4 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_2e0 [8];
  undefined ********ppppppppuStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined ******ppppppuStack_2c8;
  undefined *******pppppppuStack_2c0;
  undefined ********ppppppppuStack_2b8;
  undefined *******pppppppuStack_2b0;
  undefined8 uStack_2a0;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined8 uStack_290;
  undefined *******pppppppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_259;
  undefined8 uStack_250;
  long *plStack_248;
  undefined1 uStack_240;
  undefined2 uStack_23f;
  undefined *******pppppppuStack_238;
  undefined8 *apuStack_230 [7];
  code *pcStack_1f8;
  undefined8 *apuStack_1f0 [7];
  long lStack_1b8;
  long *plStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined *******pppppppuStack_1a0;
  undefined *******pppppppuStack_198;
  undefined *******pppppppuStack_190;
  undefined8 uStack_180;
  undefined7 uStack_178;
  undefined1 uStack_171;
  char cStack_169;
  code *pcStack_168;
  undefined *******pppppppuStack_160;
  undefined8 uStack_158;
  undefined *******pppppppuStack_150;
  undefined ******ppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  code *pcStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined8 in_stack_ffffffffffffff10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined ******ppppppuStack_d8;
  undefined ********ppppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined ********ppppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ********ppppppppuStack_b0;
  code *pcStack_a8;
  undefined *******pppppppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined ******ppppppuStack_58;
  
  ppppppppuVar13 = param_3;
  ppppppppuVar25 = param_4;
  FUN_10a8b7a80();
  if (*(int *)((*ppppppppuVar13)[2] + 0x28) != 3) {
LAB_10a8b9fb0:
    ppppppppuVar13 = (undefined ********)&UNK_10f67fd11;
    FUN_10a00946c();
    func_0x00010a6d1c00(&uStack_68);
    ppppppppuVar23 = ppppppppuVar13;
    __Unwind_Resume();
    uStack_88 = SUB83(ppppppppuVar13,0);
    uStack_85 = (undefined5)((ulong)ppppppppuVar13 >> 0x18);
    uStack_80 = SUB83(&stack0xfffffffffffffff0,0);
    uStack_7d = (undefined5)((ulong)&stack0xfffffffffffffff0 >> 0x18);
    uStack_78 = 0x8b9fe0;
    uStack_75 = 0x10a;
    uStack_90 = param_5;
    FUN_10a8b9d7c();
    ppppppppuVar13 = ppppppppuVar23;
    FUN_10a8b7a80();
    if ((*ppppppppuVar13)[2][0x53] != (undefined *****)0x0) {
      ppppuVar33 = (*ppppppppuVar13)[2][0x53][2];
      if (ppppuVar33 != (undefined ****)0x0) {
        ppppuVar1 = ppppuVar33 + 1;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar11) {
            *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 4);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *(undefined *****)extraout_x8 = ppppuVar33;
      auVar63._8_8_ = ppppppppuVar25;
      auVar63._0_8_ = ppppppppuVar13;
      return auVar63;
    }
    plVar15 = (long *)&UNK_10f68188d;
    FUN_10a00946c();
    pcStack_98 = (code *)0x10a8ba04c;
    ppppppppuStack_c0 = &pppppppuStack_a0;
    ppppppppuStack_b0 = ppppppppuVar23;
    pcStack_a8 = extraout_x8;
    pppppppuStack_a0 = (undefined *******)&uStack_80;
    if ((plVar15[0x46] != 0) && (*(int *)(*(long *)(plVar15[0x46] + 0x10) + 0x140) != 3)) {
      plVar15 = (long *)&UNK_10f67fd4f;
      ppppppppuVar17 = ppppppppuVar25;
      FUN_10a00946c();
      ppppppppuVar10 = (undefined ********)&stack0xffffffffffffff10;
      ppppppppuStack_b8 = (undefined ********)0x10a8ba0a0;
      ppppppppuVar13 = (undefined ********)&ppppppppuStack_c0;
      ppppppppuStack_d0 = ppppppppuVar23;
      ppppppppuStack_c8 = ppppppppuVar25;
      if ((plVar15[0x46] != 0) && (*(int *)(*(long *)(plVar15[0x46] + 0x10) + 0x140) != 3)) {
        puVar27 = &UNK_10f67fdd8;
        ppppppppuVar25 = ppppppppuVar17;
        FUN_10a00946c();
        ppppppppuStack_110 = ppppppppuVar23;
        ppppppppuStack_108 = ppppppppuVar17;
        if (*(int *)(*(long *)(*(long *)(puVar27 + 0x230) + 0x10) + 0x140) == 1) {
          puVar27 = &UNK_10f67fe1c;
          FUN_10a00946c();
          pcVar24 = *(code **)(**(long **)(*(long *)(puVar27 + 0x230) + 0x10) + 0x8d8);
          pcVar9 = *(code **)(*(long **)(*(long *)(puVar27 + 0x230) + 0x10))[0x62];
          pcStack_118 = FUN_10a8ba290;
          pcVar21 = pcVar24;
          if (pcVar24 != (code *)0x0) {
            puVar46 = *(undefined8 **)(pcVar9 + 8);
            ppppppppuStack_120 = (undefined ********)&stack0xffffffffffffff00;
            ppppppppuStack_130 = ppppppppuVar23;
            ppppppppuStack_128 = ppppppppuVar17;
            ppppppppuStack_138 = unaff_x21;
            ppppppppuStack_140 = param_4;
            ppppppuStack_148 = unaff_x23;
            pppppppuStack_150 = unaff_x24;
            for (puVar48 = *(undefined8 **)pcVar9; puVar48 != puVar46; puVar48 = puVar48 + 1) {
              pcVar9 = (code *)*puVar48;
              (**(code **)(*(long *)pcVar9 + 0x30))(&pcStack_168);
              uVar31 = (uint)(char)uStack_158._7_1_;
              pppppppuVar35 = pppppppuStack_160;
              if (-1 < (int)uVar31) {
                pppppppuVar35 = (undefined *******)(ulong)uStack_158._7_1_;
              }
              if (pppppppuVar35 != (undefined *******)0x0) {
                cStack_169 = '\x0f';
                uStack_180._0_7_ = 0x4c4c4d68636554;
                uStack_180._7_1_ = 0x65;
                uStack_178 = 0x746e657645736e;
                uStack_171 = 0;
                pcVar9 = pcVar24;
                pcVar21 = (code *)&uStack_180;
                FUN_10a76bdb0(pcVar24,&uStack_180,&pcStack_168);
                if (cStack_169 < '\0') {
                  pcVar9 = (code *)CONCAT17(uStack_180._7_1_,(undefined7)uStack_180);
                  __ZdlPv(pcVar9);
                }
                uVar31 = (uint)uStack_158._7_1_;
              }
              if ((uVar31 >> 7 & 1) != 0) {
                pcVar9 = pcStack_168;
                __ZdlPv(pcStack_168);
              }
            }
          }
          auVar58._8_8_ = pcVar21;
          auVar58._0_8_ = pcVar9;
          return auVar58;
        }
        puVar14 = *(undefined **)(*(long *)(puVar27 + 0x230) + 0x10);
        ppppppppuVar23 = ppppppppuVar25;
        FUN_10a8c7000();
        if (((ulong)puVar14 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            puVar27 = &UNK_10f67fe69;
            puVar14 = &UNK_10f67feac;
            puVar29 = &UNK_10f67fefd;
            uVar18 = 0;
            uVar26 = 1;
            uVar28 = 0x1c5;
            uVar53 = 0x10a8ba15c;
SUB_10ae06f08:
            *(undefined *********)((long)ppppppppuVar10 + -0x10) = ppppppppuVar13;
            *(undefined8 *)((long)ppppppppuVar10 + -8) = uVar53;
            *(undefined *********)((long)ppppppppuVar10 + -0x18) = ppppppppuVar10;
            FUN_10ae06f30(uVar18,uVar26,puVar27,puVar14,uVar28,puVar29,ppppppppuVar10);
            auVar75._8_8_ = uVar26;
            auVar75._0_8_ = uVar18;
            return auVar75;
          }
        }
        else {
          puVar27[0x272] = 1;
          if (2 < (ulong)(byte)puVar27[0x24c]) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a8ba284);
            (*pcVar9)();
          }
          (*(code *)(&PTR_FUN_110c2b510)[(byte)puVar27[0x24c]])(puVar27 + 0x240);
          puVar27[0x240] = (byte)ppppppppuVar25;
          puVar27[0x24c] = 0;
          puVar27[0x271] = (byte)ppppppppuVar25 ^ 1;
          puVar14 = *(undefined **)(*(long *)(puVar27 + 0x230) + 0x10);
          FUN_10a8c6990();
          if ((int)puVar14 == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              puVar27 = &UNK_10f67fe69;
              puVar14 = &UNK_10f67feac;
              puVar29 = &UNK_10f67ff40;
              uVar18 = 0;
              uVar26 = 1;
              uVar28 = 0x1cf;
              uVar53 = 0x10a8ba25c;
              ppppppppuVar10 = (undefined ********)&ppppppppuStack_110;
              ppppppppuVar13 = (undefined ********)&stack0xffffffffffffff00;
              goto SUB_10ae06f08;
            }
          }
          else {
            puVar14 = puVar27;
            func_0x00010a8b81ac(puVar27);
          }
          if ((int)ppppppppuVar25 != 0) {
            puVar14 = *(undefined **)(*(long *)(puVar27 + 0x230) + 0x10);
            ppppppppuVar23 = (undefined ********)0x1;
            FUN_10a8c6a58(puVar14,1);
          }
          puVar27[0x272] = 0;
        }
        auVar65._8_8_ = ppppppppuVar23;
        auVar65._0_8_ = puVar14;
        return auVar65;
      }
      ppppppppuVar25 = ppppppppuVar17;
      FUN_10a8b7a80();
      lVar34 = *(long *)(*plVar15 + 0x10);
      if (*(char *)(lVar34 + 399) < '\0') {
        if (*(long *)(lVar34 + 0x180) != 0) goto LAB_10a8ba140;
      }
      else if (*(char *)(lVar34 + 399) != '\0') goto LAB_10a8ba140;
      ppppppppuVar25 =
           (undefined ********)
           (((long)ppppppppuVar17[1] - (long)*ppppppppuVar17 >> 3) * -0x5555555555555555);
      FUN_109d218f0(&stack0xffffffffffffff10,*ppppppppuVar17,ppppppppuVar25);
      plVar15 = *(long **)(lVar34 + 0x1f8);
      if (plVar15 != (long *)0x0) {
        *(long **)(lVar34 + 0x200) = plVar15;
        __ZdlPv();
      }
      *(undefined8 *)(lVar34 + 0x200) = uStack_e8;
      *(undefined8 *)(lVar34 + 0x1f8) = in_stack_ffffffffffffff10;
      *(undefined *********)(lVar34 + 0x208) = uStack_e0;
      *(undefined1 *)(lVar34 + 0x308) = 1;
LAB_10a8ba140:
      auVar64._8_8_ = ppppppppuVar25;
      auVar64._0_8_ = plVar15;
      return auVar64;
    }
    FUN_10a8b7a80();
    ppppppppuVar13 = ppppppppuStack_b0;
    auVar66._0_8_ = *(long *)(*plVar15 + 0x10);
    if ((uint)ppppppppuVar25 < 8) {
      *(uint *)(auVar66._0_8_ + 0x2ec) = (uint)ppppppppuVar25;
      *(undefined1 *)(auVar66._0_8_ + 0x308) = 0;
      if ((*(long *)(auVar66._0_8_ + 8) != 0) &&
         (*(char *)(*(long *)(auVar66._0_8_ + 8) + 0x1b1) == '\x01')) {
        puVar48 = &uStack_e0;
        lVar34 = *(long *)(auVar66._0_8_ + 8);
        ppppppppuStack_c0 = param_4;
        ppppppppuStack_b8 = unaff_x21;
        if (lVar34 == 0) {
          FUN_10a00946c(&UNK_10f6811b8);
        }
        else if ((*(byte *)(lVar34 + 0x1b1) & 1) != 0) {
          *(undefined1 *)(auVar66._0_8_ + 0x308) = 1;
          plVar15 = (long *)(ulong)*(uint *)(auVar66._0_8_ + 0x2ec);
          if (((*(uint *)(auVar66._0_8_ + 0x2ec) & 0xfffffffb) == 0) &&
             (*(char *)(lVar34 + 0x1b0) == '\x01')) {
            uStack_e0 = (undefined ********)CONCAT44(uStack_e0._4_4_,1);
            lVar34 = auVar66._0_8_ + 0x1f8;
            FUN_10a8d5cfc(lVar34,&uStack_e0,(long)&uStack_e0 + 4,1);
          }
          else {
            FUN_10a8c09d8();
            lVar34 = *(long *)(auVar66._0_8_ + 8);
            puVar48 = (undefined8 *)(ulong)*(byte *)(lVar34 + 0x1b0);
            plVar49 = plVar15;
            FUN_10a8d5cd4();
            FUN_109d20f54(&uStack_e0,plVar15,puVar48,lVar34 + 0x108,auVar66._0_8_ + 0x148,
                          *(undefined1 *)(*plVar49 + 8));
            lVar34 = *(long *)(auVar66._0_8_ + 0x1f8);
            if (lVar34 != 0) {
              *(long *)(auVar66._0_8_ + 0x200) = lVar34;
              __ZdlPv();
            }
            *(undefined *******)(auVar66._0_8_ + 0x200) = ppppppuStack_d8;
            *(undefined *********)(auVar66._0_8_ + 0x1f8) = uStack_e0;
            *(undefined *********)(auVar66._0_8_ + 0x208) = ppppppppuStack_d0;
          }
          auVar70._8_8_ = puVar48;
          auVar70._0_8_ = lVar34;
          return auVar70;
        }
        puVar27 = &UNK_10f6811f1;
        FUN_10a00946c();
        plVar15 = *(long **)(puVar27 + 8);
        if (plVar15 != (long *)0x0) {
          plVar49 = plVar15 + 1;
          do {
            lVar34 = *plVar49;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
            if (bVar11) {
              *plVar49 = lVar34 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar34 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        auVar71._8_8_ = ppppppppuVar25;
        auVar71._0_8_ = puVar27;
        return auVar71;
      }
      auVar66._8_8_ = ppppppppuVar25;
      return auVar66;
    }
    plVar15 = (long *)&UNK_10f5878a4;
    FUN_10a00946c();
    ppppppppuStack_c0 = ppppppppuVar13;
    ppppppppuStack_b8 = (undefined ********)pcStack_a8;
    pcStack_a8 = FUN_10a8c6f54;
    if ((int)plVar15[0x28] != 3) {
      auVar67._8_8_ = ppppppppuVar25;
      auVar67._0_8_ = plVar15;
      return auVar67;
    }
    if ((plVar15[9] != 0) || (ppppppppuStack_b0 = &pppppppuStack_a0, plVar15[0xc] != 0)) {
      lVar34 = plVar15[1];
      if (lVar34 == 0) {
        ppppppppuStack_b0 = &pppppppuStack_a0;
        FUN_10a00946c(&UNK_10f681554);
      }
      else {
        ppppppppuStack_b0 = &pppppppuStack_a0;
        if ((*(byte *)(lVar34 + 0x1b1) & 1) != 0) {
          ppppppppuStack_b0 = &pppppppuStack_a0;
          if (((*(byte *)(plVar15 + 100) & 1) == 0) &&
             (ppppppppuStack_b0 = &pppppppuStack_a0, *(char *)(lVar34 + 0x1b0) == '\x01')) {
            ppppppppuStack_b0 = &pppppppuStack_a0;
            FUN_10a8d852c(plVar15);
          }
          FUN_10a8d8a78(plVar15);
          ppppppppuVar23 = ppppppppuStack_c0;
          pcStack_118 = *(code **)PTR____stack_chk_guard_11034bdc0;
          plVar49 = plVar15;
          ppppppppuVar13 = ppppppppuVar25;
          uStack_e0 = (undefined ********)unaff_x24;
          ppppppuStack_d8 = unaff_x23;
          ppppppppuStack_d0 = param_4;
          ppppppppuStack_c8 = unaff_x21;
          if ((*(byte *)(plVar15 + 0x61) & 1) == 0) {
            FUN_10a8d4b90();
          }
          if (plVar15[1] == 0) {
            ppppppppuVar10 = (undefined ********)&UNK_10f681700;
            FUN_10a00946c();
          }
          else {
            func_0x00010ad031c0();
            plVar4 = (long *)*plVar49;
            if (-1 < *(char *)((long)plVar49 + 0x17)) {
              plVar4 = plVar49;
            }
            func_0x000107c2b054(&uStack_2a0,plVar4);
            if (*(char *)((long)plVar15 + 0x247) < '\0') {
              __ZdlPv(plVar15[0x46]);
            }
            plVar15[0x47] = CONCAT17(uStack_291,uStack_298);
            plVar15[0x46] = CONCAT17(uStack_2a0._7_1_,(undefined7)uStack_2a0);
            plVar15[0x48] = (long)uStack_290;
            *(char *)(plVar15 + 0x49) = (char)plVar15[0x5e];
            lVar34 = plVar15[0x3f];
            lVar38 = plVar15[0x40];
            uVar16 = (ulong)*(uint *)((long)plVar15 + 0x2ec);
            FUN_10a8c09d8(uVar16);
            FUN_109d20fac(lVar34,lVar38 - lVar34 >> 2,uVar16,plVar15[1] + 0x108,plVar15 + 0x42,
                          plVar15 + 0x29);
            ppppppppuVar10 = (undefined ********)(plVar15 + 0x5f);
            if (plVar15[0x5f] == 0) {
              FUN_10a8da3cc(&uStack_2a0,plVar15);
              FUN_10a8da5c8(&pppppppuStack_1a8,&uStack_2a0,plVar15[1] + 0x168,plVar15 + 0x3f,
                            plVar15 + 0x42);
              FUN_10a8da564(ppppppppuVar10,&pppppppuStack_1a8);
              pppppppuVar35 = pppppppuStack_1a0;
              if (pppppppuStack_1a0 != (undefined *******)0x0) {
                pppppppuVar40 = pppppppuStack_1a0 + 1;
                do {
                  ppppppuVar32 = *pppppppuVar40;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                  if (bVar11) {
                    *pppppppuVar40 = (undefined ******)((long)ppppppuVar32 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (ppppppuVar32 == (undefined ******)0x0) {
                  (*(code *)(*pppppppuStack_1a0)[2])(pppppppuStack_1a0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar35);
                }
              }
              if (cStack_259 < '\0') {
                __ZdlPv(uStack_270);
              }
              pppppppuStack_2c0 = (undefined *******)&pppppppuStack_288;
              FUN_10a04b2ac(&pppppppuStack_2c0);
              ppppppppuVar10 = &pppppppuStack_2c0;
              pppppppuStack_2c0 = (undefined *******)&uStack_2a0;
              FUN_10a04b2ac();
LAB_10a8d9494:
              pppppppuVar35 = (undefined *******)plVar15[0x62];
              lVar34 = *(long *)(*plVar15 + 0x8d8);
              if ((lVar34 != 0) &&
                 (ppppppuVar32 = *pppppppuVar35, ((ulong)ppppppuVar32[8] & 1) != 0)) {
                __ZNSt3__16chrono12steady_clock3nowEv();
                pppppppuStack_2c0 =
                     (undefined *******)((ulong)pppppppuStack_2c0 & 0xffffffffffffff00);
                ppppppppuStack_2b8 = (undefined ********)0x0;
                pppppppuVar35 = (undefined *******)&pppppppuStack_2c0;
                func_0x00010945a80c(pppppppuVar35,"ml_build_request");
                ppppppuStack_2c8 = (undefined ******)0x0;
                auStack_2d0[0] = 3;
                ppppppuVar32 = ppppppuVar32 + 3;
                func_0x00010938229c();
                pppppppuVar40 = pppppppuVar35;
                ppppppuStack_2c8 = ppppppuVar32;
                func_0x00010945a80c(pppppppuVar35,&DAT_10f56f6ff);
                auStack_2d0[0] = *(undefined1 *)pppppppuVar40;
                *(undefined1 *)pppppppuVar40 = 3;
                ppppppuVar32 = pppppppuVar40[1];
                pppppppuVar40[1] = ppppppuStack_2c8;
                ppppppuStack_2c8 = ppppppuVar32;
                func_0x000109380ffc(&ppppppuStack_2c8);
                auStack_2e0[0] = 5;
                ppppppppuStack_2d8 = ppppppppuVar10;
                func_0x00010945a80c(pppppppuVar35,"start");
                auStack_2e0[0] = *(undefined1 *)pppppppuVar35;
                *(undefined1 *)pppppppuVar35 = 5;
                pppppppuVar40 = (undefined *******)pppppppuVar35[1];
                pppppppuVar35[1] = (undefined ******)ppppppppuStack_2d8;
                ppppppppuStack_2d8 = (undefined ********)pppppppuVar40;
                func_0x000109380ffc(&ppppppppuStack_2d8);
                uStack_290 = (undefined **)CONCAT17(0xf,(undefined7)uStack_290);
                uStack_2a0._0_7_ = 0x4c4c4d68636554;
                uStack_2a0._7_1_ = 0x65;
                uStack_298 = 0x746e657645736e;
                uStack_291 = 0;
                FUN_10a0c32e4(&pppppppuStack_1a8,&pppppppuStack_2c0,0xffffffff,0x20,0,0);
                FUN_10a76bdb0(lVar34,&uStack_2a0,&pppppppuStack_1a8);
                if ((long)uStack_290 < 0) {
                  __ZdlPv(CONCAT17(uStack_2a0._7_1_,(undefined7)uStack_2a0));
                }
                ppppppppuVar10 = (undefined ********)&ppppppppuStack_2b8;
                func_0x000109380ffc(ppppppppuVar10,(ulong)pppppppuStack_2c0 & 0xff);
                pppppppuVar35 = (undefined *******)plVar15[0x62];
              }
              pppppppuStack_190 = (undefined *******)plVar15[99];
              if (pppppppuStack_190 == (undefined *******)0x0) {
                pppppppuStack_150 = (undefined *******)0x0;
                pppppppuStack_190 = (undefined *******)0x0;
                uStack_158 = pppppppuVar35;
              }
              else {
                pppppppuVar40 = pppppppuStack_190 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                  if (bVar11) {
                    *pppppppuVar40 = (undefined ******)((long)*pppppppuVar40 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                uStack_158 = (undefined *******)plVar15[0x62];
                pppppppuStack_150 = (undefined *******)plVar15[99];
                if (pppppppuStack_150 != (undefined *******)0x0) {
                  plVar49 = (long *)((long)pppppppuStack_150 + 8);
                  do {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                    if (bVar11) {
                      *plVar49 = *plVar49 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
              }
              pppppppuStack_1a0 = (undefined *******)&PTR_FUN_110c2ae90;
              pppppppuStack_1a8 = (undefined *******)0x10a8da720;
              ppppppppuVar23 = &pppppppuStack_1a0;
              pcStack_168 = FUN_10a8da778;
              pppppppuStack_160 = (undefined *******)&PTR_FUN_110c2aea8;
              ppppppppuStack_128 = (undefined ********)plVar15[0x65];
              ppppppppuStack_120 = (undefined ********)plVar15[0x66];
              if (ppppppppuStack_120 != (undefined ********)0x0) {
                plVar49 = (long *)(ppppppppuStack_120 + 1);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar11) {
                    *plVar49 = *plVar49 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              unaff_x24 = (undefined *******)&pppppppuStack_1a8;
              pppppppuStack_198 = pppppppuVar35;
              FUN_10a8bb1fc();
              pppppppuVar35 = *ppppppppuVar10 + 0x11b;
              FUN_10a08fec0();
              lVar34 = *plVar15;
              if ((((ulong)*pppppppuVar35 & 1) == 0) ||
                 (*(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) == 8)) {
                pbVar19 = *(byte **)(*(long *)(lVar34 + 0x8b8) + 0x20);
                if (pbVar19 == (byte *)0x0) {
LAB_10a8d96fc:
                  if (1 < *(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
                  FUN_10a8d40c0();
                  if (((ulong)pbVar19 & 1) == 0) {
                    lVar34 = *plVar15;
                    goto LAB_10a8d971c;
                  }
                  uVar31 = 0;
                }
                else {
                  FUN_10a8b7988(pbVar19,&UNK_10f680bf1,0x1e);
                  lVar34 = *plVar15;
                  if ((*pbVar19 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
                  uVar31 = (uint)(*(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) != 8);
                }
                uVar31 = (uint)ppppppppuVar25 & uVar31;
              }
              else {
                uVar31 = 1;
              }
              *(undefined4 *)(plVar15 + 0x28) = 0;
              lVar34 = plVar15[0x60];
              uStack_2a0._0_7_ = (undefined7)plVar15[0x5f];
              uStack_2a0._7_1_ = (undefined1)((ulong)plVar15[0x5f] >> 0x38);
              uStack_298 = (undefined7)lVar34;
              uStack_291 = (undefined1)((ulong)lVar34 >> 0x38);
              if (lVar34 != 0) {
                plVar49 = (long *)(lVar34 + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar11) {
                    *plVar49 = *plVar49 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              puVar48 = (undefined8 *)plVar15[1];
              FUN_10a8c1848();
              uStack_290 = (undefined **)0x10a8da7d0;
              pppppppuStack_288 = (undefined *******)&PTR_DAT_110c2bdf0;
              uStack_278 = puVar48[1];
              uStack_280 = *puVar48;
              if (puVar48[1] != 0) {
                plVar49 = (long *)(puVar48[1] + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar11) {
                    *plVar49 = *plVar49 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_10a8d5cd4();
              plStack_248 = (long *)puVar48[1];
              uStack_250 = *puVar48;
              if (puVar48[1] != 0) {
                plVar49 = (long *)(puVar48[1] + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar11) {
                    *plVar49 = *plVar49 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              uStack_240 = (undefined1)uVar31;
              uStack_23f = 1;
              pppppppuStack_238 = pppppppuStack_1a8;
              unaff_x26 = (undefined *******)&uStack_2a0;
              (*(code *)pppppppuStack_1a0[2])(apuStack_230,ppppppppuVar23);
              pcStack_1f8 = pcStack_168;
              ppppppppuVar13 = &pppppppuStack_160;
              (*(code *)pppppppuStack_160[2])(apuStack_1f0);
              plStack_1b0 = (long *)ppppppppuStack_120;
              lStack_1b8 = (long)ppppppppuStack_128;
              ppppppppuStack_128 = (undefined ********)0x0;
              ppppppppuStack_120 = (undefined ********)0x0;
              FUN_109d23f70(&pppppppuStack_2c0,&uStack_2a0);
              pppppppuVar35 = (undefined *******)(plVar15 + 0x53);
              if ((undefined ********)pppppppuVar35 != &pppppppuStack_2c0) {
                if (*pppppppuVar35 != (undefined ******)0x0) {
                  ppppppuVar32 = *pppppppuVar35 + 3;
                  do {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
                    if (bVar11) {
                      *(int *)ppppppuVar32 = *(int *)ppppppuVar32 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  func_0x00010a8d4cd8(pppppppuVar35);
                }
                ppppppppuVar25 = ppppppppuStack_2b8;
                pppppppuVar40 = pppppppuStack_2c0;
                pppppppuStack_2c0 = (undefined *******)0x0;
                ppppppppuStack_2b8 = (undefined ********)0x0;
                plVar49 = (long *)plVar15[0x54];
                plVar15[0x54] = (long)ppppppppuVar25;
                *pppppppuVar35 = (undefined ******)pppppppuVar40;
                if (plVar49 != (long *)0x0) {
                  plVar4 = plVar49 + 1;
                  do {
                    lVar34 = *plVar4;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar11) {
                      *plVar4 = lVar34 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar34 == 0) {
                    (**(code **)(*plVar49 + 0x10))(plVar49);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                  }
                }
              }
              ppppppppuVar25 = ppppppppuStack_2b8;
              if (pppppppuStack_2c0 != (undefined *******)0x0) {
                pppppppuVar40 = pppppppuStack_2c0 + 3;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                  if (bVar11) {
                    *(int *)pppppppuVar40 = *(int *)pppppppuVar40 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (ppppppppuStack_2b8 != (undefined ********)0x0) {
                ppppppppuVar10 = ppppppppuStack_2b8 + 1;
                do {
                  pppppppuVar40 = *ppppppppuVar10;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
                  if (bVar11) {
                    *ppppppppuVar10 = (undefined *******)((long)pppppppuVar40 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppppuVar40 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_2b8)[2])(ppppppppuStack_2b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar25);
                }
              }
              plVar49 = plStack_1b0;
              if (plStack_1b0 != (long *)0x0) {
                plVar4 = plStack_1b0 + 1;
                do {
                  lVar34 = *plVar4;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar11) {
                    *plVar4 = lVar34 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar34 == 0) {
                  (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                }
              }
              (*(code *)*apuStack_1f0[0])(apuStack_1f0);
              (*(code *)*apuStack_230[0])(apuStack_230);
              plVar49 = plStack_248;
              if (plStack_248 != (long *)0x0) {
                plVar4 = plStack_248 + 1;
                do {
                  lVar34 = *plVar4;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar11) {
                    *plVar4 = lVar34 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar34 == 0) {
                  (**(code **)(*plStack_248 + 0x10))(plStack_248);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                }
              }
              (*(code *)*pppppppuStack_288)(&pppppppuStack_288);
              plVar49 = (long *)CONCAT17(uStack_291,uStack_298);
              if (plVar49 != (long *)0x0) {
                plVar4 = plVar49 + 1;
                do {
                  lVar34 = *plVar4;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar11) {
                    *plVar4 = lVar34 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar34 == 0) {
                  (**(code **)(*plVar49 + 0x10))(plVar49);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                }
              }
              if ((((char)plVar15[0x59] == '\x01') && (*pppppppuVar35 != (undefined ******)0x0)) &&
                 (ppppppuVar32 = (undefined ******)(*pppppppuVar35)[2],
                 ppppppuVar32 != (undefined ******)0x0)) {
                ppppppuVar39 = ppppppuVar32 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                  if (bVar11) {
                    *ppppppuVar39 = (undefined *****)((long)*ppppppuVar39 + 4);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                pppppppuVar40 = (undefined *******)0x118;
                __Znwm();
                pppppppuVar40[2] = (undefined ******)0x0;
                pppppppuVar40[1] = (undefined ******)0x200000006;
                *(undefined2 *)(pppppppuVar40 + 3) = 4;
                pppppppuVar40[5] = (undefined ******)0x0;
                pppppppuVar40[4] = (undefined ******)0x0;
                pppppppuVar40[7] = (undefined ******)0x0;
                pppppppuVar40[6] = (undefined ******)0x0;
                pppppppuVar40[9] = (undefined ******)0x0;
                pppppppuVar40[8] = (undefined ******)0x0;
                pppppppuVar40[0xb] = (undefined ******)0x0;
                pppppppuVar40[10] = (undefined ******)0x0;
                pppppppuVar40[0xd] = (undefined ******)0x0;
                pppppppuVar40[0xc] = (undefined ******)0x0;
                pppppppuVar40[0xf] = (undefined ******)0x0;
                pppppppuVar40[0xe] = (undefined ******)0x0;
                pppppppuVar40[0x10] = (undefined ******)0x0;
                pppppppuVar40[0x11] = (undefined ******)(pppppppuVar40 + 3);
                pppppppuVar40[0x12] = (undefined ******)0x0;
                *(undefined1 *)(pppppppuVar40 + 0x13) = 0;
                *(undefined1 *)(pppppppuVar40 + 0x15) = 0;
                *pppppppuVar40 = (undefined ******)&PTR_FUN_110c2aed0;
                pppppppuVar54 = pppppppuVar40 + 0x16;
                *pppppppuVar54 = ppppppuVar32;
                ppppppuVar32 = (undefined ******)plVar15[0x58] + 1;
                pppppppuVar40[0x17] = (undefined ******)plVar15[0x58];
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
                  if (bVar11) {
                    *ppppppuVar32 = (undefined *****)((long)*ppppppuVar32 + 4);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                pppppppuVar40[0x1a] = (undefined ******)0x0;
                pppppppuVar40[0x1b] = (undefined ******)0x32aaaba7;
                pppppppuVar40[0x1d] = (undefined ******)0x0;
                pppppppuVar40[0x1c] = (undefined ******)0x0;
                pppppppuVar40[0x1f] = (undefined ******)0x0;
                pppppppuVar40[0x1e] = (undefined ******)0x0;
                pppppppuVar40[0x21] = (undefined ******)0x0;
                pppppppuVar40[0x20] = (undefined ******)0x0;
                pppppppuVar40[0x22] = (undefined ******)0x0;
                ppppppppuStack_2b8 = (undefined ********)0x0;
                pppppppuVar40[0x18] = (undefined ******)pppppppuVar40;
                pppppppuVar40[0x19] = (undefined ******)0x0;
                pppppppuStack_2c0 = pppppppuVar40;
                pppppppuStack_2b0 = pppppppuVar54;
                if (((uint)pppppppuVar40[0x17][2] >> 1 & 1) == 0) {
                  __ZNSt3__15mutex4lockEv(pppppppuVar40 + 0x1b);
                  ppppppuVar39 = *pppppppuVar54;
                  ppppppuVar32 = ppppppuVar39 + 2;
                  do {
                    pppppuVar42 = *ppppppuVar32;
                    if (pppppuVar42 == (undefined *****)0x0) {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
                      if (bVar11) {
                        *ppppppuVar32 = (undefined *****)0x1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') {
                        ppppppuVar32 = ppppppuVar39 + 3;
                        uStack_2a0._0_7_ = 0x10a8da86c;
                        uStack_2a0._7_1_ = 0;
                        uStack_298 = SUB87(pppppppuVar54,0);
                        uVar7 = uStack_298;
                        uStack_291 = (undefined1)((ulong)pppppppuVar54 >> 0x38);
                        uVar8 = uStack_291;
                        uStack_290 = &PTR_PTR_1132fed68;
                        func_0x000109d1b588(ppppppuVar32,&uStack_2a0);
                        ppppppuVar39[2] = (undefined *****)0x0;
                        pppppppuStack_2b0[3] = ppppppuVar32;
                        ppppppuVar52 = pppppppuVar40[0x17];
                        ppppppuVar39 = ppppppuVar52 + 2;
                        goto LAB_10a8d9cf8;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  } while (((uint)pppppuVar42 >> 1 & 1) == 0);
                  pppppppuStack_2b0[3] = (undefined ******)0x0;
                  ppppppuVar39 = pppppppuVar40[0x18];
                  ppppppuVar32 = ppppppuVar39 + 2;
                  do {
                    pppppuVar42 = *ppppppuVar32;
                    if (pppppuVar42 == (undefined *****)0x0) {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
                      if (bVar11) {
                        *ppppppuVar32 = (undefined *****)0x2;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') {
                        func_0x000109d1b4dc(ppppppuVar39 + 3);
                        break;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  } while (((uint)pppppuVar42 >> 1 & 1) == 0);
                  ppppppuVar32 = pppppppuVar40[0x17];
                  pppppppuVar40[0x17] = (undefined ******)0x0;
                  if (ppppppuVar32 != (undefined ******)0x0) {
                    ppppppuVar39 = ppppppuVar32 + 1;
                    do {
                      pppppuVar42 = *ppppppuVar39;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                      if (bVar11) {
                        *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -4);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (((ulong)pppppuVar42 & 0x1fffffffc) == 4) {
                      (*(code *)(*ppppppuVar32)[2])(ppppppuVar32);
                      do {
                        pppppuVar42 = *ppppppuVar39;
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                        if (bVar11) {
                          *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((undefined *****)((long)pppppuVar42 + -1) == (undefined *****)0x0) {
                        (*(code *)(*ppppppuVar32)[1])(ppppppuVar32);
                      }
                    }
                  }
                  ppppppuVar32 = pppppppuVar40[0x18];
                  pppppppuVar40[0x18] = (undefined ******)0x0;
                  if (ppppppuVar32 != (undefined ******)0x0) {
                    func_0x0001092b4274(pppppppuVar40 + 0x18);
                  }
                  pppppppuVar50 = (undefined *******)*pppppppuVar54;
                  *pppppppuVar54 = (undefined ******)0x0;
LAB_10a8d9f3c:
                  __ZNSt3__15mutex6unlockEv(pppppppuVar40 + 0x1b);
                  unaff_x26 = pppppppuVar54;
                }
                else {
                  ppppppuVar32 = pppppppuVar40[0x18];
                  pppppppuVar50 = pppppppuVar40;
                  FUN_109d1857c();
                  func_0x000109d1b350(ppppppuVar32,pppppppuVar50);
                  ppppppuVar32 = *pppppppuVar54;
                  *pppppppuVar54 = (undefined ******)0x0;
                  if (ppppppuVar32 != (undefined ******)0x0) {
                    ppppppuVar39 = ppppppuVar32 + 1;
                    do {
                      pppppuVar42 = *ppppppuVar39;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                      if (bVar11) {
                        *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -4);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (((ulong)pppppuVar42 & 0x1fffffffc) == 4) {
                      do {
                        pppppuVar42 = *ppppppuVar39;
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                        if (bVar11) {
                          *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((undefined *****)((long)pppppuVar42 + -1) == (undefined *****)0x0) {
                        (*(code *)(*ppppppuVar32)[1])();
                      }
                    }
                  }
                  ppppppuVar32 = pppppppuVar40[0x17];
                  pppppppuVar40[0x17] = (undefined ******)0x0;
                  if (ppppppuVar32 != (undefined ******)0x0) {
                    unaff_x26 = (undefined *******)(ppppppuVar32 + 1);
                    do {
                      ppppppuVar39 = *unaff_x26;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                      if (bVar11) {
                        *unaff_x26 = (undefined ******)((long)ppppppuVar39 + -4);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (((ulong)ppppppuVar39 & 0x1fffffffc) == 4) {
                      (*(code *)(*ppppppuVar32)[2])(ppppppuVar32);
                      do {
                        ppppppuVar39 = *unaff_x26;
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                        if (bVar11) {
                          *unaff_x26 = (undefined ******)((long)ppppppuVar39 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((undefined ******)((long)ppppppuVar39 + -1) == (undefined ******)0x0) {
                        (*(code *)(*ppppppuVar32)[1])(ppppppuVar32);
                      }
                    }
                  }
                  ppppppuVar32 = pppppppuVar40[0x18];
                  pppppppuVar40[0x18] = (undefined ******)0x0;
                  if (ppppppuVar32 != (undefined ******)0x0) {
                    func_0x0001092b4274(pppppppuVar40 + 0x18);
                  }
                  pppppppuVar50 = pppppppuStack_2c0;
                  pppppppuStack_2c0 = (undefined *******)0x0;
                }
                ppppppppuVar13 = ppppppppuStack_2b8;
                if (ppppppppuStack_2b8 != (undefined ********)0x0) {
                  func_0x0001092b4274(&ppppppppuStack_2b8);
                }
                if (pppppppuStack_2c0 != (undefined *******)0x0) {
                  pppppppuVar40 = pppppppuStack_2c0 + 1;
                  do {
                    ppppppuVar32 = *pppppppuVar40;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                    if (bVar11) {
                      *pppppppuVar40 = (undefined ******)((long)ppppppuVar32 + -4);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (((ulong)ppppppuVar32 & 0x1fffffffc) == 4) {
                    do {
                      ppppppuVar32 = *pppppppuVar40;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                      if (bVar11) {
                        *pppppppuVar40 = (undefined ******)((long)ppppppuVar32 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if ((undefined ******)((long)ppppppuVar32 + -1) == (undefined ******)0x0) {
                      (*(code *)(*pppppppuStack_2c0)[1])();
                    }
                  }
                }
                plVar49 = (long *)plVar15[0x55];
                if (plVar49 != (long *)0x0) {
                  puVar3 = (ulong *)(plVar49 + 1);
                  do {
                    uVar16 = *puVar3;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar11) {
                      *puVar3 = uVar16 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar16 & 0x1fffffffc) == 4) {
                    do {
                      uVar16 = *puVar3;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                      if (bVar11) {
                        *puVar3 = uVar16 - 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (uVar16 - 1 == 0) {
                      (**(code **)(*plVar49 + 8))();
                    }
                  }
                }
                plVar15[0x55] = (long)pppppppuVar50;
              }
              else {
                plVar49 = (long *)plVar15[0x55];
                if (plVar49 != (long *)0x0) {
                  puVar3 = (ulong *)(plVar49 + 1);
                  do {
                    uVar16 = *puVar3;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar11) {
                      *puVar3 = uVar16 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar16 & 0x1fffffffc) == 4) {
                    do {
                      uVar16 = *puVar3;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                      if (bVar11) {
                        *puVar3 = uVar16 - 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (uVar16 - 1 == 0) {
                      (**(code **)(*plVar49 + 8))();
                    }
                  }
                }
                plVar15[0x55] = 0;
              }
              if (((uVar31 == 0) && (*pppppppuVar35 != (undefined ******)0x0)) &&
                 ((*pppppppuVar35)[2] != (undefined *****)0x0)) {
                ppppppppuVar13 = (undefined ********)&UNK_10f68165b;
                FUN_10a8da354(plVar15);
                FUN_10a8c7000(plVar15);
              }
              ppppppppuVar25 = ppppppppuStack_120;
              if (ppppppppuStack_120 != (undefined ********)0x0) {
                plVar15 = (long *)(ppppppppuStack_120 + 1);
                do {
                  lVar34 = *plVar15;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *plVar15 = lVar34 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar34 == 0) {
                  (**(code **)((long)*ppppppppuStack_120 + 0x10))(ppppppppuStack_120);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar25);
                }
              }
              (*(code *)*pppppppuStack_160)(&pppppppuStack_160);
              ppppppppuVar10 = ppppppppuVar23;
              (*(code *)*pppppppuStack_1a0)();
            }
            else {
              FUN_10a8da3cc(&uStack_2a0,plVar15);
              FUN_10a8da5c8(&pppppppuStack_2c0,&uStack_2a0,plVar15[1] + 0x168,plVar15 + 0x3f,
                            plVar15 + 0x42);
              if (cStack_259 < '\0') {
                __ZdlPv(uStack_270);
              }
              pppppppuStack_1a8 = (undefined *******)&pppppppuStack_288;
              FUN_10a04b2ac(&pppppppuStack_1a8);
              pppppppuStack_1a8 = (undefined *******)&uStack_2a0;
              FUN_10a04b2ac(&pppppppuStack_1a8);
              pppppppuVar35 = *ppppppppuVar10;
              uStack_290 = (undefined **)(pppppppuVar35 + 0xc);
              pppppppuStack_288 = pppppppuVar35 + 0xf;
              uStack_2a0._0_7_ = SUB87(pppppppuVar35,0);
              uStack_2a0._7_1_ = (undefined1)((ulong)pppppppuVar35 >> 0x38);
              uStack_298 = SUB87(pppppppuVar35 + 9,0);
              uStack_291 = (undefined1)((ulong)(pppppppuVar35 + 9) >> 0x38);
              pppppppuStack_1a0 = pppppppuStack_2c0 + 9;
              pppppppuStack_198 = pppppppuStack_2c0 + 0xc;
              pppppppuStack_190 = pppppppuStack_2c0 + 0xf;
              pppppppuStack_1a8 = pppppppuStack_2c0;
              ppppppppuVar17 = (undefined ********)auStack_2d0;
              ppppppppuVar13 = (undefined ********)&uStack_2a0;
              FUN_109d2d6b8(ppppppppuVar17,ppppppppuVar13,&pppppppuStack_1a8);
              if (((ulong)ppppppppuVar17 & 1) == 0) {
                func_0x00010a8d4768(plVar15);
                ppppppppuVar13 = &pppppppuStack_2c0;
                FUN_10a8da564();
              }
              else {
                ppppppppuVar10 = ppppppppuVar17;
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  puVar27 = &UNK_10f6812de;
                  puVar14 = &UNK_10f68166d;
                  puVar29 = &UNK_10f6816c0;
                  uVar18 = 1;
                  uVar26 = 2;
                  uVar28 = 0xb9;
                  uVar53 = 0x10a8d93b8;
                  ppppppppuVar10 = (undefined ********)auStack_2e0;
                  ppppppppuVar13 = (undefined ********)&ppppppppuStack_b0;
                  goto SUB_10ae06f08;
                }
              }
              ppppppppuVar23 = ppppppppuStack_2b8;
              if (ppppppppuStack_2b8 != (undefined ********)0x0) {
                ppppppppuVar2 = ppppppppuStack_2b8 + 1;
                do {
                  pppppppuVar35 = *ppppppppuVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
                  if (bVar11) {
                    *ppppppppuVar2 = (undefined *******)((long)pppppppuVar35 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppppuVar35 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_2b8)[2])(ppppppppuStack_2b8);
                  ppppppppuVar10 = ppppppppuVar23;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
              }
              if (((ulong)ppppppppuVar17 & 1) == 0) goto LAB_10a8d9494;
            }
            if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_118) {
              auVar72._8_8_ = ppppppppuVar13;
              auVar72._0_8_ = ppppppppuVar10;
              return auVar72;
            }
          }
          ___stack_chk_fail();
          __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
          FUN_10a8daae8(&pppppppuStack_2c0);
          FUN_10a8d4068(unaff_x24 + 0x10);
          (*(code *)*pppppppuStack_160)(unaff_x24 + 9);
          (*(code *)*pppppppuStack_1a0)(ppppppppuVar23);
          __Unwind_Resume(ppppppppuVar10);
          puVar27 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if (ppppppppuVar13 < (undefined ********)0x2e8ba2e8ba2e8bb) {
            lVar34 = (long)ppppppppuVar13 * 0x58;
            __Znwm(lVar34);
            auVar73._8_8_ = ppppppppuVar13;
            auVar73._0_8_ = lVar34;
            return auVar73;
          }
          func_0x000109ffded8();
          puVar46 = (undefined8 *)(puVar27 + 8);
          puVar51 = (undefined8 *)*puVar46;
          ppppppppuVar25 = ppppppppuVar13;
          puVar48 = puVar46;
          if (puVar51 != (undefined8 *)0x0) {
            do {
              puVar20 = puVar51 + 4;
              ppppppppuVar25 = ppppppppuVar13;
              FUN_10a003e3c(puVar20,ppppppppuVar13);
              if (-1 < (char)puVar20) {
                puVar48 = puVar51;
              }
              puVar51 = *(undefined8 **)((long)puVar51 + ((ulong)puVar20 >> 4 & 8));
            } while (puVar51 != (undefined8 *)0x0);
            if (puVar48 != puVar46) {
              ppppppppuVar25 = (undefined ********)(puVar48 + 4);
              FUN_10a003e3c(ppppppppuVar13,ppppppppuVar25);
              if (((uint)ppppppppuVar13 >> 7 & 1) == 0) goto LAB_10a8da28c;
            }
          }
          puVar48 = puVar46;
LAB_10a8da28c:
          auVar74._8_8_ = ppppppppuVar25;
          auVar74._0_8_ = puVar48;
          return auVar74;
        }
      }
      FUN_10a00946c(&UNK_10f68156f);
    }
    plVar15 = (long *)&UNK_10f681523;
    FUN_10a00946c();
    uStack_e0 = (undefined ********)&ppppppppuStack_d0;
    ppppppppuStack_c8 = (undefined ********)FUN_10a8c7000;
    if ((int)plVar15[0x28] == 3) {
LAB_10a8c7018:
      uVar53 = 0;
    }
    else {
      if ((((int)plVar15[0x28] != 2) && ((int)plVar15[0x28] != 1)) && ((int)plVar15[0x28] != 4)) {
        if (((plVar15[0x53] == 0) || (lVar34 = *(long *)(plVar15[0x53] + 0x10), lVar34 == 0)) ||
           (((uint)*(undefined8 *)(lVar34 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
        ppppppppuStack_d0 = (undefined ********)&ppppppppuStack_b0;
        if (0x143 < *(int *)(*(long *)(*plVar15 + 0xa20) + 0x18)) {
          if (plVar15[0x53] == 0) {
            pppppppuVar35 = (undefined *******)&UNK_10f681734;
            func_0x000105688514();
            ppppppppuVar13 = (undefined ********)&ppppppppuStack_110;
            ppppppuStack_d8 = (undefined ******)FUN_10a8c70b8;
            pppppppuVar40 = pppppppuVar35;
            if (*(int *)(pppppppuVar35 + 0x28) == 1) {
              if ((*(char *)(pppppppuVar35 + 0x59) == '\x01') &&
                 (((uint)pppppppuVar35[0x58][2] >> 1 & 1) != 0)) {
                pppppppuVar40 = (undefined *******)pppppppuVar35[0x56];
                if (pppppppuVar40 != (undefined *******)0x0) {
                  pppppppuVar54 = pppppppuVar40 + 1;
                  do {
                    ppppppuVar32 = *pppppppuVar54;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar54,0x10);
                    if (bVar11) {
                      *pppppppuVar54 = (undefined ******)((long)ppppppuVar32 - 4);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (((ulong)ppppppuVar32 & 0x1fffffffc) == 4) {
                    do {
                      ppppppuVar32 = *pppppppuVar54;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar54,0x10);
                      if (bVar11) {
                        *pppppppuVar54 = (undefined ******)((long)ppppppuVar32 - 1U);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if ((undefined ******)((long)ppppppuVar32 - 1U) == (undefined ******)0x0) {
                      (*(code *)(*pppppppuVar40)[1])();
                    }
                  }
                }
                pppppppuVar35[0x56] = (undefined ******)0x0;
                *(undefined4 *)(pppppppuVar35 + 0x28) = 2;
              }
              else {
                pppppppuVar54 = (undefined *******)pppppppuVar35[0x10];
                pppppppuVar35[0xf] = (undefined ******)0x0;
                pppppppuVar35[0x10] = (undefined ******)0x0;
                uStack_e0 = (undefined ********)&ppppppppuStack_d0;
                if ((*(char *)(pppppppuVar35 + 0x5e) == '\x01') &&
                   ((uStack_e0 = (undefined ********)&ppppppppuStack_d0,
                    pppppppuVar35[0x21] != (undefined ******)0x0 &&
                    (ppppuVar33 = (*pppppppuVar35[0x21])[0x11],
                    uStack_e0 = (undefined ********)&ppppppppuStack_d0,
                    ppppuVar33 != (undefined ****)0x0)))) {
                  uStack_e0 = (undefined ********)&ppppppppuStack_d0;
                  (*(code *)(*ppppuVar33)[9])(ppppuVar33,1);
                }
                ppppppppuStack_108 = (undefined ********)&stack0xffffffffffffff00;
                ppppppppuVar25 = (undefined ********)0x1;
                ppppppppuStack_110 = (undefined ********)pppppppuVar35;
                FUN_10a8c6a58(pppppppuVar35,1);
                FUN_10a8db76c(&ppppppppuStack_110);
                pppppppuVar40 = (undefined *******)ppppppppuVar13;
                if (pppppppuVar54 != (undefined *******)0x0) {
                  pppppppuVar35 = pppppppuVar54 + 1;
                  do {
                    ppppppuVar32 = *pppppppuVar35;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar35,0x10);
                    if (bVar11) {
                      *pppppppuVar35 = (undefined ******)((long)ppppppuVar32 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (ppppppuVar32 == (undefined ******)0x0) {
                    (*(code *)(*pppppppuVar54)[2])(pppppppuVar54);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar54);
                    pppppppuVar40 = pppppppuVar54;
                  }
                }
              }
            }
            auVar69._8_8_ = ppppppppuVar25;
            auVar69._0_8_ = pppppppuVar40;
            return auVar69;
          }
          if (((uint)*(undefined8 *)(*(long *)(plVar15[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
            FUN_10a8dae18();
            goto LAB_10a8c7048;
          }
        }
        FUN_10a8dafa0();
      }
LAB_10a8c7048:
      uVar53 = 1;
    }
    auVar68._8_8_ = ppppppppuVar25;
    auVar68._0_8_ = uVar53;
    return auVar68;
  }
  unaff_x23 = (*ppppppppuVar13)[2];
  unaff_x24 = *param_4;
  pppppppuVar35 = param_4[1];
  if (unaff_x24 != pppppppuVar35) {
    ppppppuVar32 = unaff_x23 + 8;
    func_0x00010a8d4e78(*ppppppuVar32);
    ppppppuVar39 = unaff_x23 + 0xb;
    unaff_x23[7] = (undefined *****)ppppppuVar32;
    *ppppppuVar32 = (undefined *****)0x0;
    unaff_x23[9] = (undefined *****)0x0;
    func_0x00010a8d4ef4(*ppppppuVar39);
    *ppppppuVar39 = (undefined *****)0x0;
    unaff_x23[0xc] = (undefined *****)0x0;
    unaff_x23[10] = (undefined *****)ppppppuVar39;
    *(undefined1 *)(unaff_x23 + 100) = 0;
    unaff_x24 = *param_4;
    pppppppuVar35 = param_4[1];
  }
  for (; uVar55 = (undefined4)param_2, unaff_x24 != pppppppuVar35; unaff_x24 = unaff_x24 + 2) {
    ppppppuVar32 = *unaff_x24;
    if (ppppppuVar32 == (undefined ******)0x0) {
      FUN_10a00946c(&UNK_10f681502);
      unaff_x21 = ppppppppuVar13;
      goto LAB_10a8b9fb0;
    }
    iVar37 = *(int *)(ppppppuVar32 + 5);
    if (iVar37 == 1) {
      ppppppuVar39 = unaff_x24[1];
      uStack_68._0_7_ = SUB87(ppppppuVar32,0);
      uStack_68._7_1_ = (undefined1)((ulong)ppppppuVar32 >> 0x38);
      uStack_60 = SUB87(ppppppuVar39,0);
      uStack_59 = (undefined1)((ulong)ppppppuVar39 >> 0x38);
      if (ppppppuVar39 != (undefined ******)0x0) {
        ppppppuVar39 = ppppppuVar39 + 1;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
          if (bVar11) {
            *ppppppuVar39 = (undefined *****)((long)*ppppppuVar39 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppuVar32 = *unaff_x24;
      }
      ppppppuStack_58 = ppppppuVar32 + 6;
      ppppppuVar32 = unaff_x23 + 10;
      FUN_10a8d5afc(ppppppuVar32,ppppppuStack_58,&ppppppuStack_58);
      ppppppppuVar25 = (undefined ********)&uStack_68;
      func_0x00010a8c5be4(ppppppuVar32 + 7);
      param_4 = (undefined ********)CONCAT17(uStack_59,uStack_60);
      if (param_4 != (undefined ********)0x0) {
        ppppppppuVar23 = param_4 + 1;
        do {
          pppppppuVar40 = *ppppppppuVar23;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar11) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar40 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppppuVar40 == (undefined *******)0x0) {
          (*(code *)(*param_4)[2])(param_4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
        }
      }
      ppppppuVar32 = *unaff_x24;
      iVar37 = *(int *)(ppppppuVar32 + 5);
    }
    if (iVar37 == 0) {
      ppppppuVar39 = unaff_x24[1];
      uStack_68._0_7_ = SUB87(ppppppuVar32,0);
      uStack_68._7_1_ = (undefined1)((ulong)ppppppuVar32 >> 0x38);
      uStack_60 = SUB87(ppppppuVar39,0);
      uStack_59 = (undefined1)((ulong)ppppppuVar39 >> 0x38);
      if (ppppppuVar39 != (undefined ******)0x0) {
        ppppppuVar39 = ppppppuVar39 + 1;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
          if (bVar11) {
            *ppppppuVar39 = (undefined *****)((long)*ppppppuVar39 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppuVar32 = *unaff_x24;
      }
      ppppppuStack_58 = ppppppuVar32 + 6;
      ppppppuVar32 = unaff_x23 + 7;
      FUN_10a8d58e4(ppppppuVar32,ppppppuStack_58,&ppppppuStack_58);
      ppppppppuVar25 = (undefined ********)&uStack_68;
      func_0x00010a8c5edc(ppppppuVar32 + 7);
      param_4 = (undefined ********)CONCAT17(uStack_59,uStack_60);
      if (param_4 != (undefined ********)0x0) {
        ppppppppuVar23 = param_4 + 1;
        do {
          pppppppuVar40 = *ppppppppuVar23;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar11) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar40 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppppuVar40 == (undefined *******)0x0) {
          (*(code *)(*param_4)[2])(param_4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
        }
      }
    }
  }
  ppppppuVar32 = (*ppppppppuVar13)[2];
  FUN_10a8c6f54(ppppppuVar32,param_5);
  if (((*(byte *)((long)param_3 + 0x275) & 1) != 0) || (*(char *)((long)param_3 + 0x276) != '\x01'))
  {
    auVar62._8_8_ = param_5;
    auVar62._0_8_ = ppppppuVar32;
    return auVar62;
  }
  ppuVar22 = (undefined **)0x1;
  if ((param_3[0x46] == (undefined *******)0x0) || (*(int *)(param_3[0x46][2] + 0x28) != 1)) {
    if (2 < (ulong)*(byte *)((long)param_3 + 0x24c)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a8b7ba4);
      (*pcVar9)();
    }
    ppppppppuVar25 = param_3 + 0x48;
    (*(code *)(&PTR_FUN_110c2b510)[*(byte *)((long)param_3 + 0x24c)])(ppppppppuVar25);
    *(undefined1 *)(param_3 + 0x48) = 1;
    *(undefined4 *)((long)param_3 + 0x244) = 4;
    *(undefined4 *)(param_3 + 0x49) = 4;
    *(undefined1 *)((long)param_3 + 0x24c) = 1;
    *(undefined1 *)((long)param_3 + 0x271) = 0;
    *(undefined1 *)((long)param_3 + 0x272) = 1;
    auVar60._8_8_ = ppuVar22;
    auVar60._0_8_ = ppppppppuVar25;
    return auVar60;
  }
  pbVar19 = &UNK_10f67ff6d;
  FUN_10a00946c();
  ppppppuStack_58 = *(undefined *******)PTR____stack_chk_guard_11034bdc0;
  if (pbVar19[0x1a4] == 1) {
    pbVar19[0x1a4] = 0;
  }
  pbVar12 = pbVar19;
  if ((((pbVar19[0x128] == 1) && (*(long *)(pbVar19 + 0x108) != 0)) &&
      (*(long *)(pbVar19 + 0xf8) == 0)) &&
     (pbVar12 = *(byte **)(*(long *)(pbVar19 + 0x108) + 0x268), pbVar12 != (byte *)0x0)) {
    ppuVar22 = &PTR_DAT_110bb3788;
    ___dynamic_cast(pbVar12,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0);
    if (pbVar12 == (byte *)0x0) goto LAB_10a8b7c00;
    lVar34 = *(long *)(pbVar19 + 0x58);
    if ((lVar34 != 0) &&
       ((((*(byte *)(lVar34 + 100) & 1) != 0 || ((*(byte *)(lVar34 + 0x65) & 1) != 0)) ||
        ((*(char *)(lVar34 + 0x60) != '\0' || ((*(byte *)(lVar34 + 99) & 1) == 0)))))) {
      FUN_10a8bb1fc();
      pbVar12 = (byte *)(*(long *)pbVar12 + 0x2c0);
      FUN_10a08fec0();
      if ((*pbVar12 >> 2 & 1) == 0) goto LAB_10a8b7c00;
    }
    lVar34 = *(long *)(pbVar19 + 0x118);
    if ((lVar34 != 0) && (*(char *)(lVar34 + 0x60) != '\0')) goto LAB_10a8b7c00;
    lVar38 = *(long *)(pbVar19 + 0x58);
    if (lVar38 == 0) {
      bVar30 = 0;
      bVar36 = 0;
    }
    else if (((((*(byte *)(lVar38 + 100) & 1) == 0) && ((*(byte *)(lVar38 + 0x65) & 1) == 0)) &&
             (*(char *)(lVar38 + 0x60) == '\0')) && ((*(byte *)(lVar38 + 99) & 1) != 0)) {
      bVar30 = 0;
      bVar36 = 0;
    }
    else {
      bVar30 = *(byte *)(lVar38 + 0x50);
      uStack_70 = *(undefined8 *)(lVar38 + 0x51);
      uStack_68._0_7_ = (undefined7)*(undefined8 *)(lVar38 + 0x59);
      uStack_68._7_1_ = (undefined1)*(undefined8 *)(lVar38 + 0x60);
      uStack_60 = (undefined7)((ulong)*(undefined8 *)(lVar38 + 0x60) >> 8);
      bVar36 = 1;
    }
    if (lVar34 == 0) {
      bVar41 = 0;
    }
    else {
      bVar41 = *(byte *)(lVar34 + 0x50);
      uStack_90 = *(undefined8 *)(lVar34 + 0x51);
      uStack_88 = (undefined3)*(undefined8 *)(lVar34 + 0x59);
      uStack_7d = (undefined5)*(undefined8 *)(lVar34 + 100);
      uStack_78 = (undefined3)((ulong)*(undefined8 *)(lVar34 + 100) >> 0x28);
      uStack_85 = (undefined5)*(undefined8 *)(lVar34 + 0x5c);
      uStack_80 = (undefined3)((ulong)*(undefined8 *)(lVar34 + 0x5c) >> 0x28);
    }
    lVar38 = *(long *)(pbVar19 + 0xf8);
    if (lVar38 == 0) {
      pbVar43 = pbVar19 + 0x108;
      uVar53 = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar38 + 0x298) + 0x2c);
      uVar53 = *(undefined8 *)(*(long *)(lVar38 + 0x298) + 0x24);
      uVar55 = *(undefined4 *)(lVar38 + 0x2a8);
      pbVar43 = (byte *)(lVar38 + 0x288);
    }
    lVar44 = *(long *)(*(long *)pbVar43 + 0x268);
    if (*(char *)(lVar44 + 0x334) == '\x01') {
      uVar45 = *(undefined4 *)(lVar44 + 0x2d0);
    }
    else {
      uVar45 = 0x7fffffff;
    }
    if (*(int *)(pbVar19 + 0x50) - 1U < 4) {
      uVar5 = *(undefined4 *)(&UNK_10e496020 + (ulong)(*(int *)(pbVar19 + 0x50) - 1U) * 4);
      *(undefined4 *)(pbVar19 + 0x140) = uVar45;
      *(undefined4 *)(pbVar19 + 0x144) = uVar5;
      *(undefined8 *)(pbVar19 + 0x148) = *(undefined8 *)(pbVar19 + 0x48);
      pbVar19[0x150] = bVar30;
      *(ulong *)(pbVar19 + 0x160) = CONCAT71(uStack_60,uStack_68._7_1_);
      *(ulong *)(pbVar19 + 0x159) = CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
      *(undefined8 *)(pbVar19 + 0x151) = uStack_70;
      pbVar19[0x168] = bVar36;
      pbVar19[0x16c] = bVar41;
      *(ulong *)(pbVar19 + 0x175) = CONCAT53(uStack_85,uStack_88);
      *(undefined8 *)(pbVar19 + 0x16d) = uStack_90;
      *(ulong *)(pbVar19 + 0x180) = CONCAT35(uStack_78,uStack_7d);
      *(ulong *)(pbVar19 + 0x178) = CONCAT35(uStack_80,uStack_85);
      pbVar19[0x188] = lVar34 != 0;
      *(undefined8 *)(pbVar19 + 0x194) = uVar18;
      *(undefined8 *)(pbVar19 + 0x18c) = uVar53;
      *(undefined4 *)(pbVar19 + 0x19c) = uVar55;
      pbVar19[0x1a0] = lVar38 != 0;
      if (pbVar19[0x1a4] == 1) {
        if ((*(byte *)(lVar44 + 0x334) & 1) != 0) {
LAB_10a8b7e00:
          uVar18 = *(undefined8 *)(pbVar19 + 0x148);
          uVar53 = *(undefined8 *)(pbVar19 + 0x140);
          uVar26 = *(undefined8 *)(pbVar19 + 0x150);
          uVar56 = *(undefined8 *)(pbVar19 + 0x168);
          uVar28 = *(undefined8 *)(pbVar19 + 0x160);
          *(undefined8 *)(lVar44 + 0x2e8) = *(undefined8 *)(pbVar19 + 0x158);
          *(undefined8 *)(lVar44 + 0x2e0) = uVar26;
          *(undefined8 *)(lVar44 + 0x2f8) = uVar56;
          *(undefined8 *)(lVar44 + 0x2f0) = uVar28;
          *(undefined8 *)(lVar44 + 0x2d8) = uVar18;
          *(undefined8 *)(lVar44 + 0x2d0) = uVar53;
          uVar18 = *(undefined8 *)(pbVar19 + 0x178);
          uVar53 = *(undefined8 *)(pbVar19 + 0x170);
          uVar28 = *(undefined8 *)(pbVar19 + 0x188);
          uVar26 = *(undefined8 *)(pbVar19 + 0x180);
          uVar57 = *(undefined8 *)(pbVar19 + 0x198);
          uVar56 = *(undefined8 *)(pbVar19 + 400);
          *(undefined4 *)(lVar44 + 0x330) = *(undefined4 *)(pbVar19 + 0x1a0);
          *(undefined8 *)(lVar44 + 0x318) = uVar28;
          *(undefined8 *)(lVar44 + 0x310) = uVar26;
          *(undefined8 *)(lVar44 + 0x328) = uVar57;
          *(undefined8 *)(lVar44 + 800) = uVar56;
          *(undefined8 *)(lVar44 + 0x308) = uVar18;
          *(undefined8 *)(lVar44 + 0x300) = uVar53;
        }
      }
      else {
        pbVar19[0x1a4] = 1;
        if (*(char *)(lVar44 + 0x334) == '\x01') goto LAB_10a8b7e00;
      }
      goto LAB_10a8b7c00;
    }
  }
  else {
LAB_10a8b7c00:
    if ((undefined ******)*(undefined ******)PTR____stack_chk_guard_11034bdc0 == ppppppuStack_58) {
      auVar61._8_8_ = ppuVar22;
      auVar61._0_8_ = pbVar12;
      return auVar61;
    }
    ___stack_chk_fail();
  }
  puVar27 = &UNK_10f6818d6;
  FUN_10a00946c();
  plVar15 = (long *)(puVar27 + -0x68);
  ppppppppuStack_c0 = (undefined ********)0x1;
  ppppppppuStack_b8 = (undefined ********)0x4;
  ppppppppuStack_b0 = (undefined ********)0x4;
  pcStack_98 = FUN_10a8b7e40;
  pcStack_a8 = (code *)pbVar19;
  pppppppuStack_a0 = (undefined *******)&stack0xffffffffffffffc0;
  if (*(int *)(*(long *)(*(long *)(puVar27 + 0x108) + 0x100) + 0x2a8) - 7U < 2) {
    plVar49 = plVar15;
    FUN_10a8d40c0();
    uVar31 = (uint)plVar49;
    FUN_10a8d40c0();
    uVar31 = uVar31 >> 2 & 1;
    if (((uint)plVar49 >> 1 & 1) == 0) {
      if ((puVar27[0x20d] & 1) == 0) goto LAB_10a8b7918;
    }
    else {
      pbVar19 = *(byte **)(*(long *)(*(long *)(puVar27 + 0x108) + 0x8b8) + 0x20);
      if (pbVar19 == (byte *)0x0) {
        if ((puVar27[0x20d] & 1) == 0) goto LAB_10a8b78c8;
      }
      else {
        ppuVar22 = (undefined **)&UNK_10f680bf1;
        FUN_10a8b7988(pbVar19,&UNK_10f680bf1,0x1e);
        if ((puVar27[0x20d] & 1) == 0) {
          if ((*pbVar19 & 1) != 0) goto LAB_10a8b7918;
LAB_10a8b78c8:
          plVar49 = plVar15;
          FUN_10a8b7a80();
          if (*(long *)(*(long *)(*plVar49 + 0x10) + 8) == 0) goto LAB_10a8b7918;
        }
      }
    }
  }
  else {
    if ((puVar27[0x20d] & 1) == 0) goto LAB_10a8b7918;
    uVar31 = 0;
  }
  plVar49 = plVar15;
  FUN_10a8b7a80();
  ppuVar22 = (undefined **)(ulong)*(byte *)(*(long *)(*plVar49 + 0x10) + 0x2e8);
  FUN_10a8c6f54(*(long *)(*plVar49 + 0x10),ppuVar22);
  if (((puVar27[0x20e] & 1) != 0) || (uVar31 != 0)) {
    ppuVar22 = (undefined **)0x1;
    FUN_10a8b7b10(plVar15,1,4,4);
  }
LAB_10a8b7918:
  FUN_10a8b7a80();
  lVar34 = *(long *)(*plVar15 + 0x10);
  plVar49 = *(long **)(lVar34 + 0x38);
  while (plVar49 != (long *)(lVar34 + 0x40)) {
    plVar15 = (long *)plVar49[7];
    FUN_10a8b7bb0(plVar15);
    plVar4 = (long *)plVar49[1];
    plVar47 = plVar49;
    if ((long *)plVar49[1] == (long *)0x0) {
      do {
        plVar49 = (long *)plVar47[2];
        bVar11 = (long *)*plVar49 != plVar47;
        plVar47 = plVar49;
      } while (bVar11);
    }
    else {
      do {
        plVar49 = plVar4;
        plVar4 = (long *)*plVar49;
      } while ((long *)*plVar49 != (long *)0x0);
    }
  }
  auVar59._8_8_ = ppuVar22;
  auVar59._0_8_ = plVar15;
  return auVar59;
LAB_10a8d9cf8:
  do {
    pppppuVar42 = *ppppppuVar39;
    if (pppppuVar42 == (undefined *****)0x0) {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
      if (bVar11) {
        *ppppppuVar39 = (undefined *****)0x1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        ppppppuVar32 = ppppppuVar52 + 3;
        uStack_2a0._0_7_ = 0x10a8daa08;
        uStack_2a0._7_1_ = 0;
        uStack_290 = &PTR_PTR_1132fed68;
        uStack_298 = uVar7;
        uStack_291 = uVar8;
        func_0x000109d1b588(ppppppuVar32,&uStack_2a0);
        ppppppuVar52[2] = (undefined *****)0x0;
        pppppppuStack_2b0[4] = ppppppuVar32;
        pppppppuVar50 = pppppppuStack_2c0;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar42 >> 1 & 1) == 0);
  pppppppuStack_2b0[4] = (undefined ******)0x0;
  ppppppuVar39 = pppppppuVar40[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar39,ppppppuVar32);
  ppppppuVar32 = pppppppuVar40[0x17];
  pppppppuVar40[0x17] = (undefined ******)0x0;
  if (ppppppuVar32 != (undefined ******)0x0) {
    ppppppuVar39 = ppppppuVar32 + 1;
    do {
      pppppuVar42 = *ppppppuVar39;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
      if (bVar11) {
        *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -4);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((ulong)pppppuVar42 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar32)[2])(ppppppuVar32);
      do {
        pppppuVar42 = *ppppppuVar39;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
        if (bVar11) {
          *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((undefined *****)((long)pppppuVar42 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar32)[1])(ppppppuVar32);
      }
    }
  }
  ppppppuVar52 = *pppppppuVar54;
  ppppppuVar32 = ppppppuVar52 + 2;
  ppppppuVar39 = pppppppuStack_2b0[3];
  while (pppppuVar42 = *ppppppuVar32, pppppuVar42 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar50 = pppppppuStack_2c0;
    if (((uint)pppppuVar42 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
  if (bVar11) {
    *ppppppuVar32 = (undefined *****)0x1;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 != '\0') goto LAB_10a8d9de4;
  uStack_2a0._0_7_ = 0x10a8da86c;
  uStack_2a0._7_1_ = 0;
  uStack_290 = &PTR_PTR_1132fed68;
  uStack_298 = uVar7;
  uStack_291 = uVar8;
  FUN_109d1b624(ppppppuVar52 + 3,&uStack_2a0,ppppppuVar39);
  ppppppuVar52[2] = (undefined *****)0x0;
  pppppppuStack_2b0[3] = (undefined ******)0x0;
  ppppppuVar32 = *pppppppuVar54;
  *pppppppuVar54 = (undefined ******)0x0;
  if (ppppppuVar32 != (undefined ******)0x0) {
    ppppppuVar39 = ppppppuVar32 + 1;
    do {
      pppppuVar42 = *ppppppuVar39;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
      if (bVar11) {
        *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -4);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((ulong)pppppuVar42 & 0x1fffffffc) == 4) {
      do {
        pppppuVar42 = *ppppppuVar39;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
        if (bVar11) {
          *ppppppuVar39 = (undefined *****)((long)pppppuVar42 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((undefined *****)((long)pppppuVar42 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar32)[1])();
      }
    }
  }
  ppppppuVar32 = pppppppuVar40[0x18];
  pppppppuVar40[0x18] = (undefined ******)0x0;
  pppppppuVar50 = pppppppuStack_2c0;
  if (ppppppuVar32 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar40 + 0x18);
    pppppppuVar50 = pppppppuStack_2c0;
  }
LAB_10a8d9f38:
  pppppppuStack_2c0 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8b9fe0; end: 10a8ba28f;  */

/* WARNING: Possible PIC construction at 0x00010a8d93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a8ba258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8d93b8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9ff8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9ffc) */
/* WARNING: Removing unreachable block (ram,0x00010a8da004) */
/* WARNING: Removing unreachable block (ram,0x00010a8da00c) */
/* WARNING: Removing unreachable block (ram,0x00010a8da010) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a8b9fe0(code *param_1,undefined ********param_2,undefined ********param_3)

{
  undefined ****ppppuVar1;
  undefined ********ppppppppuVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined ********ppppppppuVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined ********ppppppppuVar14;
  undefined8 uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined ********ppppppppuVar19;
  code *pcVar20;
  undefined ********ppppppppuVar21;
  undefined ********ppppppppuVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  uint uVar28;
  undefined ****ppppuVar29;
  long lVar30;
  undefined *******pppppppuVar31;
  undefined *******pppppppuVar32;
  long *plVar33;
  long lVar34;
  undefined *****pppppuVar35;
  undefined8 *puVar36;
  long lVar37;
  undefined1 *puVar38;
  undefined *******pppppppuVar39;
  undefined8 *puVar40;
  undefined ******ppppppuVar41;
  undefined ******ppppppuVar42;
  undefined *******unaff_x24;
  undefined ******ppppppuVar43;
  undefined *******unaff_x26;
  undefined8 uVar44;
  undefined *******pppppppuVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auStack_270 [8];
  undefined ********ppppppppuStack_268;
  undefined1 auStack_260 [8];
  undefined ******ppppppuStack_258;
  undefined *******pppppppuStack_250;
  undefined ********ppppppppuStack_248;
  undefined *******pppppppuStack_240;
  undefined8 uStack_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined8 uStack_220;
  undefined *******pppppppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1e9;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined *******pppppppuStack_1c8;
  undefined8 *apuStack_1c0 [7];
  code *pcStack_188;
  undefined8 *apuStack_180 [7];
  long lStack_148;
  long *plStack_140;
  undefined *******pppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined *******pppppppuStack_120;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  char cStack_f9;
  code *pcStack_f8;
  undefined *******pppppppuStack_f0;
  undefined8 uStack_e8;
  undefined ********ppppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined ********ppppppppuStack_40;
  code *pcStack_38;
  undefined *******pppppppuStack_30;
  undefined8 uStack_28;
  
  FUN_10a8b9d7c(param_2,param_3,1);
  ppppppppuVar21 = param_2;
  FUN_10a8b7a80();
  if ((*ppppppppuVar21)[2][0x53] != (undefined *****)0x0) {
    ppppuVar29 = (*ppppppppuVar21)[2][0x53][2];
    if (ppppuVar29 != (undefined ****)0x0) {
      ppppuVar1 = ppppuVar29 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar6) {
          *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(undefined *****)param_1 = ppppuVar29;
    auVar47._8_8_ = param_3;
    auVar47._0_8_ = ppppppppuVar21;
    return auVar47;
  }
  plVar12 = (long *)&UNK_10f68188d;
  FUN_10a00946c();
  uStack_28 = 0x10a8ba04c;
  ppppppppuStack_40 = param_2;
  pcStack_38 = param_1;
  pppppppuStack_30 = (undefined *******)&stack0xfffffffffffffff0;
  if ((plVar12[0x46] != 0) && (*(int *)(*(long *)(plVar12[0x46] + 0x10) + 0x140) != 3)) {
    plVar12 = (long *)&UNK_10f67fd4f;
    FUN_10a00946c();
    ppppppppuVar21 = (undefined ********)&stack0xffffffffffffffb0;
    if ((plVar12[0x46] != 0) && (*(int *)(*(long *)(plVar12[0x46] + 0x10) + 0x140) != 3)) {
      puVar25 = &UNK_10f67fdd8;
      ppppppppuVar19 = param_3;
      FUN_10a00946c();
      ppppppppuVar10 = (undefined ********)&ppppppppuStack_a0;
      ppppppppuStack_a0 = param_2;
      ppppppppuStack_98 = param_3;
      if (*(int *)(*(long *)(*(long *)(puVar25 + 0x230) + 0x10) + 0x140) == 1) {
        puVar25 = &UNK_10f67fe1c;
        FUN_10a00946c();
        pcVar23 = *(code **)(**(long **)(*(long *)(puVar25 + 0x230) + 0x10) + 0x8d8);
        pcVar9 = *(code **)(*(long **)(*(long *)(puVar25 + 0x230) + 0x10))[0x62];
        pcVar20 = pcVar23;
        if (pcVar23 != (code *)0x0) {
          puVar36 = *(undefined8 **)(pcVar9 + 8);
          for (puVar17 = *(undefined8 **)pcVar9; puVar17 != puVar36; puVar17 = puVar17 + 1) {
            pcVar9 = (code *)*puVar17;
            (**(code **)(*(long *)pcVar9 + 0x30))(&pcStack_f8);
            uVar28 = (uint)(char)uStack_e8._7_1_;
            pppppppuVar31 = pppppppuStack_f0;
            if (-1 < (int)uVar28) {
              pppppppuVar31 = (undefined *******)(ulong)uStack_e8._7_1_;
            }
            if (pppppppuVar31 != (undefined *******)0x0) {
              cStack_f9 = '\x0f';
              uStack_110._0_7_ = 0x4c4c4d68636554;
              uStack_110._7_1_ = 0x65;
              uStack_108 = 0x746e657645736e;
              uStack_101 = 0;
              pcVar9 = pcVar23;
              pcVar20 = (code *)&uStack_110;
              FUN_10a76bdb0(pcVar23,&uStack_110,&pcStack_f8);
              if (cStack_f9 < '\0') {
                pcVar9 = (code *)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
                __ZdlPv(pcVar9);
              }
              uVar28 = (uint)uStack_e8._7_1_;
            }
            if ((uVar28 >> 7 & 1) != 0) {
              pcVar9 = pcStack_f8;
              __ZdlPv(pcStack_f8);
            }
          }
        }
        auVar46._8_8_ = pcVar20;
        auVar46._0_8_ = pcVar9;
        return auVar46;
      }
      puVar11 = *(undefined **)(*(long *)(puVar25 + 0x230) + 0x10);
      ppppppppuVar22 = ppppppppuVar19;
      FUN_10a8c7000();
      if (((ulong)puVar11 & 1) == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          puVar25 = &UNK_10f67fe69;
          puVar11 = &UNK_10f67feac;
          puVar27 = &UNK_10f67fefd;
          uVar15 = 0;
          uVar24 = 1;
          uVar26 = 0x1c5;
          uVar44 = 0x10a8ba15c;
          ppppppppuVar10 = (undefined ********)&stack0xffffffffffffff80;
SUB_10ae06f08:
          *(undefined *********)((long)ppppppppuVar10 + -0x10) = ppppppppuVar21;
          *(undefined8 *)((long)ppppppppuVar10 + -8) = uVar44;
          *(undefined *********)((long)ppppppppuVar10 + -0x18) = ppppppppuVar10;
          FUN_10ae06f30(uVar15,uVar24,puVar25,puVar11,uVar26,puVar27,ppppppppuVar10);
          auVar59._8_8_ = uVar24;
          auVar59._0_8_ = uVar15;
          return auVar59;
        }
      }
      else {
        puVar25[0x272] = 1;
        if (2 < (ulong)(byte)puVar25[0x24c]) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10a8ba284);
          (*pcVar9)();
        }
        (*(code *)(&PTR_FUN_110c2b510)[(byte)puVar25[0x24c]])(puVar25 + 0x240);
        puVar25[0x240] = (byte)ppppppppuVar19;
        puVar25[0x24c] = 0;
        puVar25[0x271] = (byte)ppppppppuVar19 ^ 1;
        puVar11 = *(undefined **)(*(long *)(puVar25 + 0x230) + 0x10);
        FUN_10a8c6990();
        if ((int)puVar11 == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            puVar25 = &UNK_10f67fe69;
            puVar11 = &UNK_10f67feac;
            puVar27 = &UNK_10f67ff40;
            uVar15 = 0;
            uVar24 = 1;
            uVar26 = 0x1cf;
            uVar44 = 0x10a8ba25c;
            ppppppppuVar21 = (undefined ********)&stack0xffffffffffffff70;
            goto SUB_10ae06f08;
          }
        }
        else {
          puVar11 = puVar25;
          func_0x00010a8b81ac(puVar25);
        }
        if ((int)ppppppppuVar19 != 0) {
          puVar11 = *(undefined **)(*(long *)(puVar25 + 0x230) + 0x10);
          ppppppppuVar22 = (undefined ********)0x1;
          FUN_10a8c6a58(puVar11,1);
        }
        puVar25[0x272] = 0;
      }
      auVar49._8_8_ = ppppppppuVar22;
      auVar49._0_8_ = puVar11;
      return auVar49;
    }
    ppppppppuVar21 = param_3;
    FUN_10a8b7a80();
    lVar30 = *(long *)(*plVar12 + 0x10);
    if (*(char *)(lVar30 + 399) < '\0') {
      if (*(long *)(lVar30 + 0x180) != 0) goto LAB_10a8ba140;
    }
    else if (*(char *)(lVar30 + 399) != '\0') goto LAB_10a8ba140;
    ppppppppuVar21 =
         (undefined ********)(((long)param_3[1] - (long)*param_3 >> 3) * -0x5555555555555555);
    FUN_109d218f0(&stack0xffffffffffffff80,*param_3,ppppppppuVar21);
    plVar12 = *(long **)(lVar30 + 0x1f8);
    if (plVar12 != (long *)0x0) {
      *(long **)(lVar30 + 0x200) = plVar12;
      __ZdlPv();
    }
    *(undefined8 *)(lVar30 + 0x200) = in_stack_ffffffffffffff88;
    *(undefined8 *)(lVar30 + 0x1f8) = in_stack_ffffffffffffff80;
    *(undefined8 *)(lVar30 + 0x208) = in_stack_ffffffffffffff90;
    *(undefined1 *)(lVar30 + 0x308) = 1;
LAB_10a8ba140:
    auVar48._8_8_ = ppppppppuVar21;
    auVar48._0_8_ = plVar12;
    return auVar48;
  }
  FUN_10a8b7a80();
  ppppppppuVar21 = ppppppppuStack_40;
  auVar50._0_8_ = *(long *)(*plVar12 + 0x10);
  if ((uint)param_3 < 8) {
    *(uint *)(auVar50._0_8_ + 0x2ec) = (uint)param_3;
    *(undefined1 *)(auVar50._0_8_ + 0x308) = 0;
    if ((*(long *)(auVar50._0_8_ + 8) != 0) &&
       (*(char *)(*(long *)(auVar50._0_8_ + 8) + 0x1b1) == '\x01')) {
      puVar38 = &stack0xffffffffffffff90;
      lVar30 = *(long *)(auVar50._0_8_ + 8);
      if (lVar30 == 0) {
        FUN_10a00946c(&UNK_10f6811b8);
      }
      else if ((*(byte *)(lVar30 + 0x1b1) & 1) != 0) {
        *(undefined1 *)(auVar50._0_8_ + 0x308) = 1;
        plVar12 = (long *)(ulong)*(uint *)(auVar50._0_8_ + 0x2ec);
        if (((*(uint *)(auVar50._0_8_ + 0x2ec) & 0xfffffffb) == 0) &&
           (*(char *)(lVar30 + 0x1b0) == '\x01')) {
          lVar30 = auVar50._0_8_ + 0x1f8;
          FUN_10a8d5cfc(lVar30,&stack0xffffffffffffff90,&stack0xffffffffffffff94,1);
        }
        else {
          FUN_10a8c09d8();
          lVar30 = *(long *)(auVar50._0_8_ + 8);
          puVar38 = (undefined1 *)(ulong)*(byte *)(lVar30 + 0x1b0);
          plVar33 = plVar12;
          FUN_10a8d5cd4();
          FUN_109d20f54(&stack0xffffffffffffff90,plVar12,puVar38,lVar30 + 0x108,
                        auVar50._0_8_ + 0x148,*(undefined1 *)(*plVar33 + 8));
          lVar30 = *(long *)(auVar50._0_8_ + 0x1f8);
          if (lVar30 != 0) {
            *(long *)(auVar50._0_8_ + 0x200) = lVar30;
            __ZdlPv();
          }
          *(undefined8 *)(auVar50._0_8_ + 0x200) = in_stack_ffffffffffffff98;
          *(undefined8 *)(auVar50._0_8_ + 0x1f8) = in_stack_ffffffffffffff90;
          *(undefined8 *)(auVar50._0_8_ + 0x208) = in_stack_ffffffffffffffa0;
        }
        auVar54._8_8_ = puVar38;
        auVar54._0_8_ = lVar30;
        return auVar54;
      }
      puVar25 = &UNK_10f6811f1;
      FUN_10a00946c();
      plVar12 = *(long **)(puVar25 + 8);
      if (plVar12 != (long *)0x0) {
        plVar33 = plVar12 + 1;
        do {
          lVar30 = *plVar33;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar6) {
            *plVar33 = lVar30 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar30 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      auVar55._8_8_ = param_3;
      auVar55._0_8_ = puVar25;
      return auVar55;
    }
    auVar50._8_8_ = param_3;
    return auVar50;
  }
  plVar12 = (long *)&UNK_10f5878a4;
  FUN_10a00946c();
  pcStack_38 = FUN_10a8c6f54;
  if ((int)plVar12[0x28] != 3) {
    auVar51._8_8_ = param_3;
    auVar51._0_8_ = plVar12;
    return auVar51;
  }
  if ((plVar12[9] != 0) || (ppppppppuStack_40 = &pppppppuStack_30, plVar12[0xc] != 0)) {
    lVar30 = plVar12[1];
    if (lVar30 == 0) {
      ppppppppuStack_40 = &pppppppuStack_30;
      FUN_10a00946c(&UNK_10f681554);
    }
    else {
      ppppppppuStack_40 = &pppppppuStack_30;
      if ((*(byte *)(lVar30 + 0x1b1) & 1) != 0) {
        ppppppppuStack_40 = &pppppppuStack_30;
        if (((*(byte *)(plVar12 + 100) & 1) == 0) &&
           (ppppppppuStack_40 = &pppppppuStack_30, *(char *)(lVar30 + 0x1b0) == '\x01')) {
          ppppppppuStack_40 = &pppppppuStack_30;
          FUN_10a8d852c(plVar12);
        }
        FUN_10a8d8a78(plVar12);
        ppppppppuVar10 = (undefined ********)auStack_270;
        lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar33 = plVar12;
        ppppppppuVar19 = param_3;
        if ((*(byte *)(plVar12 + 0x61) & 1) == 0) {
          FUN_10a8d4b90();
        }
        if (plVar12[1] == 0) {
          ppppppppuVar22 = (undefined ********)&UNK_10f681700;
          FUN_10a00946c();
        }
        else {
          func_0x00010ad031c0();
          plVar3 = (long *)*plVar33;
          if (-1 < *(char *)((long)plVar33 + 0x17)) {
            plVar3 = plVar33;
          }
          func_0x000107c2b054(&uStack_230,plVar3);
          if (*(char *)((long)plVar12 + 0x247) < '\0') {
            __ZdlPv(plVar12[0x46]);
          }
          plVar12[0x47] = CONCAT17(uStack_221,uStack_228);
          plVar12[0x46] = CONCAT17(uStack_230._7_1_,(undefined7)uStack_230);
          plVar12[0x48] = (long)uStack_220;
          *(char *)(plVar12 + 0x49) = (char)plVar12[0x5e];
          lVar37 = plVar12[0x3f];
          lVar34 = plVar12[0x40];
          uVar13 = (ulong)*(uint *)((long)plVar12 + 0x2ec);
          FUN_10a8c09d8(uVar13);
          FUN_109d20fac(lVar37,lVar34 - lVar37 >> 2,uVar13,plVar12[1] + 0x108,plVar12 + 0x42,
                        plVar12 + 0x29);
          ppppppppuVar22 = (undefined ********)(plVar12 + 0x5f);
          if (plVar12[0x5f] == 0) {
            FUN_10a8da3cc(&uStack_230,plVar12);
            FUN_10a8da5c8(&pppppppuStack_138,&uStack_230,plVar12[1] + 0x168,plVar12 + 0x3f,
                          plVar12 + 0x42);
            FUN_10a8da564(ppppppppuVar22,&pppppppuStack_138);
            pppppppuVar31 = pppppppuStack_130;
            if (pppppppuStack_130 != (undefined *******)0x0) {
              pppppppuVar32 = pppppppuStack_130 + 1;
              do {
                ppppppuVar43 = *pppppppuVar32;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                if (bVar6) {
                  *pppppppuVar32 = (undefined ******)((long)ppppppuVar43 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (ppppppuVar43 == (undefined ******)0x0) {
                (*(code *)(*pppppppuStack_130)[2])(pppppppuStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar31);
              }
            }
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            pppppppuStack_250 = (undefined *******)&pppppppuStack_218;
            FUN_10a04b2ac(&pppppppuStack_250);
            ppppppppuVar22 = &pppppppuStack_250;
            pppppppuStack_250 = (undefined *******)&uStack_230;
            FUN_10a04b2ac();
LAB_10a8d9494:
            pppppppuVar31 = (undefined *******)plVar12[0x62];
            lVar37 = *(long *)(*plVar12 + 0x8d8);
            if ((lVar37 != 0) && (ppppppuVar43 = *pppppppuVar31, ((ulong)ppppppuVar43[8] & 1) != 0))
            {
              __ZNSt3__16chrono12steady_clock3nowEv();
              pppppppuStack_250 = (undefined *******)((ulong)pppppppuStack_250 & 0xffffffffffffff00)
              ;
              ppppppppuStack_248 = (undefined ********)0x0;
              pppppppuVar31 = (undefined *******)&pppppppuStack_250;
              func_0x00010945a80c(pppppppuVar31,"ml_build_request");
              ppppppuStack_258 = (undefined ******)0x0;
              auStack_260[0] = 3;
              ppppppuVar43 = ppppppuVar43 + 3;
              func_0x00010938229c();
              pppppppuVar32 = pppppppuVar31;
              ppppppuStack_258 = ppppppuVar43;
              func_0x00010945a80c(pppppppuVar31,&DAT_10f56f6ff);
              auStack_260[0] = *(undefined1 *)pppppppuVar32;
              *(undefined1 *)pppppppuVar32 = 3;
              ppppppuVar43 = pppppppuVar32[1];
              pppppppuVar32[1] = ppppppuStack_258;
              ppppppuStack_258 = ppppppuVar43;
              func_0x000109380ffc(&ppppppuStack_258);
              auStack_270[0] = 5;
              ppppppppuStack_268 = ppppppppuVar22;
              func_0x00010945a80c(pppppppuVar31,"start");
              auStack_270[0] = *(undefined1 *)pppppppuVar31;
              *(undefined1 *)pppppppuVar31 = 5;
              pppppppuVar32 = (undefined *******)pppppppuVar31[1];
              pppppppuVar31[1] = (undefined ******)ppppppppuStack_268;
              ppppppppuStack_268 = (undefined ********)pppppppuVar32;
              func_0x000109380ffc(&ppppppppuStack_268);
              uStack_220 = (undefined **)CONCAT17(0xf,(undefined7)uStack_220);
              uStack_230._0_7_ = 0x4c4c4d68636554;
              uStack_230._7_1_ = 0x65;
              uStack_228 = 0x746e657645736e;
              uStack_221 = 0;
              FUN_10a0c32e4(&pppppppuStack_138,&pppppppuStack_250,0xffffffff,0x20,0,0);
              FUN_10a76bdb0(lVar37,&uStack_230,&pppppppuStack_138);
              if ((long)uStack_220 < 0) {
                __ZdlPv(CONCAT17(uStack_230._7_1_,(undefined7)uStack_230));
              }
              ppppppppuVar22 = (undefined ********)&ppppppppuStack_248;
              func_0x000109380ffc(ppppppppuVar22,(ulong)pppppppuStack_250 & 0xff);
              pppppppuVar31 = (undefined *******)plVar12[0x62];
            }
            pppppppuStack_120 = (undefined *******)plVar12[99];
            if (pppppppuStack_120 == (undefined *******)0x0) {
              pppppppuStack_120 = (undefined *******)0x0;
              uStack_e8 = pppppppuVar31;
            }
            else {
              pppppppuVar32 = pppppppuStack_120 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                if (bVar6) {
                  *pppppppuVar32 = (undefined ******)((long)*pppppppuVar32 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              uStack_e8 = (undefined *******)plVar12[0x62];
              if (plVar12[99] != 0) {
                plVar33 = (long *)(plVar12[99] + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar6) {
                    *plVar33 = *plVar33 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            pppppppuStack_130 = (undefined *******)&PTR_FUN_110c2ae90;
            pppppppuStack_138 = (undefined *******)0x10a8da720;
            ppppppppuVar21 = &pppppppuStack_130;
            pcStack_f8 = FUN_10a8da778;
            pppppppuStack_f0 = (undefined *******)&PTR_FUN_110c2aea8;
            lVar37 = plVar12[0x65];
            plVar33 = (long *)plVar12[0x66];
            if (plVar33 != (long *)0x0) {
              plVar3 = plVar33 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = *plVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            unaff_x24 = (undefined *******)&pppppppuStack_138;
            pppppppuStack_128 = pppppppuVar31;
            FUN_10a8bb1fc();
            pppppppuVar31 = *ppppppppuVar22 + 0x11b;
            FUN_10a08fec0();
            lVar34 = *plVar12;
            if ((((ulong)*pppppppuVar31 & 1) == 0) ||
               (*(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) == 8)) {
              pbVar16 = *(byte **)(*(long *)(lVar34 + 0x8b8) + 0x20);
              if (pbVar16 == (byte *)0x0) {
LAB_10a8d96fc:
                if (1 < *(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
                FUN_10a8d40c0();
                if (((ulong)pbVar16 & 1) == 0) {
                  lVar34 = *plVar12;
                  goto LAB_10a8d971c;
                }
                uVar28 = 0;
              }
              else {
                FUN_10a8b7988(pbVar16,&UNK_10f680bf1,0x1e);
                lVar34 = *plVar12;
                if ((*pbVar16 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
                uVar28 = (uint)(*(int *)(*(long *)(lVar34 + 0x100) + 0x2a8) != 8);
              }
              uVar28 = (uint)param_3 & uVar28;
            }
            else {
              uVar28 = 1;
            }
            *(undefined4 *)(plVar12 + 0x28) = 0;
            lVar34 = plVar12[0x60];
            uStack_230._0_7_ = (undefined7)plVar12[0x5f];
            uStack_230._7_1_ = (undefined1)((ulong)plVar12[0x5f] >> 0x38);
            uStack_228 = (undefined7)lVar34;
            uStack_221 = (undefined1)((ulong)lVar34 >> 0x38);
            if (lVar34 != 0) {
              plVar3 = (long *)(lVar34 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = *plVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puVar17 = (undefined8 *)plVar12[1];
            FUN_10a8c1848();
            uStack_220 = (undefined **)0x10a8da7d0;
            pppppppuStack_218 = (undefined *******)&PTR_DAT_110c2bdf0;
            uStack_208 = puVar17[1];
            uStack_210 = *puVar17;
            if (puVar17[1] != 0) {
              plVar3 = (long *)(puVar17[1] + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = *plVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10a8d5cd4();
            plStack_1d8 = (long *)puVar17[1];
            uStack_1e0 = *puVar17;
            if (puVar17[1] != 0) {
              plVar3 = (long *)(puVar17[1] + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = *plVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_1d0 = (undefined1)uVar28;
            uStack_1cf = 1;
            pppppppuStack_1c8 = pppppppuStack_138;
            unaff_x26 = (undefined *******)&uStack_230;
            (*(code *)pppppppuStack_130[2])(apuStack_1c0,ppppppppuVar21);
            pcStack_188 = pcStack_f8;
            ppppppppuVar19 = &pppppppuStack_f0;
            (*(code *)pppppppuStack_f0[2])(apuStack_180);
            lStack_148 = lVar37;
            plStack_140 = plVar33;
            FUN_109d23f70(&pppppppuStack_250,&uStack_230);
            pppppppuVar31 = (undefined *******)(plVar12 + 0x53);
            if ((undefined ********)pppppppuVar31 != &pppppppuStack_250) {
              if (*pppppppuVar31 != (undefined ******)0x0) {
                ppppppuVar43 = *pppppppuVar31 + 3;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar43,0x10);
                  if (bVar6) {
                    *(int *)ppppppuVar43 = *(int *)ppppppuVar43 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                func_0x00010a8d4cd8(pppppppuVar31);
              }
              ppppppppuVar22 = ppppppppuStack_248;
              pppppppuVar32 = pppppppuStack_250;
              pppppppuStack_250 = (undefined *******)0x0;
              ppppppppuStack_248 = (undefined ********)0x0;
              plVar33 = (long *)plVar12[0x54];
              plVar12[0x54] = (long)ppppppppuVar22;
              *pppppppuVar31 = (undefined ******)pppppppuVar32;
              if (plVar33 != (long *)0x0) {
                plVar3 = plVar33 + 1;
                do {
                  lVar37 = *plVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar6) {
                    *plVar3 = lVar37 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar37 == 0) {
                  (**(code **)(*plVar33 + 0x10))(plVar33);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
                }
              }
            }
            ppppppppuVar22 = ppppppppuStack_248;
            if (pppppppuStack_250 != (undefined *******)0x0) {
              pppppppuVar32 = pppppppuStack_250 + 3;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                if (bVar6) {
                  *(int *)pppppppuVar32 = *(int *)pppppppuVar32 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (ppppppppuStack_248 != (undefined ********)0x0) {
              ppppppppuVar14 = ppppppppuStack_248 + 1;
              do {
                pppppppuVar32 = *ppppppppuVar14;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
                if (bVar6) {
                  *ppppppppuVar14 = (undefined *******)((long)pppppppuVar32 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppppppuVar32 == (undefined *******)0x0) {
                (*(code *)(*ppppppppuStack_248)[2])(ppppppppuStack_248);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar22);
              }
            }
            plVar33 = plStack_140;
            if (plStack_140 != (long *)0x0) {
              plVar3 = plStack_140 + 1;
              do {
                lVar37 = *plVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = lVar37 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar37 == 0) {
                (**(code **)(*plStack_140 + 0x10))(plStack_140);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
              }
            }
            (*(code *)*apuStack_180[0])(apuStack_180);
            (*(code *)*apuStack_1c0[0])(apuStack_1c0);
            plVar33 = plStack_1d8;
            if (plStack_1d8 != (long *)0x0) {
              plVar3 = plStack_1d8 + 1;
              do {
                lVar37 = *plVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = lVar37 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar37 == 0) {
                (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
              }
            }
            (*(code *)*pppppppuStack_218)(&pppppppuStack_218);
            plVar33 = (long *)CONCAT17(uStack_221,uStack_228);
            if (plVar33 != (long *)0x0) {
              plVar3 = plVar33 + 1;
              do {
                lVar37 = *plVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = lVar37 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar37 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
              }
            }
            if ((((char)plVar12[0x59] == '\x01') && (*pppppppuVar31 != (undefined ******)0x0)) &&
               (ppppppuVar43 = (undefined ******)(*pppppppuVar31)[2],
               ppppppuVar43 != (undefined ******)0x0)) {
              ppppppuVar41 = ppppppuVar43 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
                if (bVar6) {
                  *ppppppuVar41 = (undefined *****)((long)*ppppppuVar41 + 4);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              pppppppuVar32 = (undefined *******)0x118;
              __Znwm();
              pppppppuVar32[2] = (undefined ******)0x0;
              pppppppuVar32[1] = (undefined ******)0x200000006;
              *(undefined2 *)(pppppppuVar32 + 3) = 4;
              pppppppuVar32[5] = (undefined ******)0x0;
              pppppppuVar32[4] = (undefined ******)0x0;
              pppppppuVar32[7] = (undefined ******)0x0;
              pppppppuVar32[6] = (undefined ******)0x0;
              pppppppuVar32[9] = (undefined ******)0x0;
              pppppppuVar32[8] = (undefined ******)0x0;
              pppppppuVar32[0xb] = (undefined ******)0x0;
              pppppppuVar32[10] = (undefined ******)0x0;
              pppppppuVar32[0xd] = (undefined ******)0x0;
              pppppppuVar32[0xc] = (undefined ******)0x0;
              pppppppuVar32[0xf] = (undefined ******)0x0;
              pppppppuVar32[0xe] = (undefined ******)0x0;
              pppppppuVar32[0x10] = (undefined ******)0x0;
              pppppppuVar32[0x11] = (undefined ******)(pppppppuVar32 + 3);
              pppppppuVar32[0x12] = (undefined ******)0x0;
              *(undefined1 *)(pppppppuVar32 + 0x13) = 0;
              *(undefined1 *)(pppppppuVar32 + 0x15) = 0;
              *pppppppuVar32 = (undefined ******)&PTR_FUN_110c2aed0;
              pppppppuVar45 = pppppppuVar32 + 0x16;
              *pppppppuVar45 = ppppppuVar43;
              ppppppuVar43 = (undefined ******)plVar12[0x58] + 1;
              pppppppuVar32[0x17] = (undefined ******)plVar12[0x58];
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar43,0x10);
                if (bVar6) {
                  *ppppppuVar43 = (undefined *****)((long)*ppppppuVar43 + 4);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              pppppppuVar32[0x1a] = (undefined ******)0x0;
              pppppppuVar32[0x1b] = (undefined ******)0x32aaaba7;
              pppppppuVar32[0x1d] = (undefined ******)0x0;
              pppppppuVar32[0x1c] = (undefined ******)0x0;
              pppppppuVar32[0x1f] = (undefined ******)0x0;
              pppppppuVar32[0x1e] = (undefined ******)0x0;
              pppppppuVar32[0x21] = (undefined ******)0x0;
              pppppppuVar32[0x20] = (undefined ******)0x0;
              pppppppuVar32[0x22] = (undefined ******)0x0;
              ppppppppuStack_248 = (undefined ********)0x0;
              pppppppuVar32[0x18] = (undefined ******)pppppppuVar32;
              pppppppuVar32[0x19] = (undefined ******)0x0;
              pppppppuStack_250 = pppppppuVar32;
              pppppppuStack_240 = pppppppuVar45;
              if (((uint)pppppppuVar32[0x17][2] >> 1 & 1) == 0) {
                __ZNSt3__15mutex4lockEv(pppppppuVar32 + 0x1b);
                ppppppuVar41 = *pppppppuVar45;
                ppppppuVar43 = ppppppuVar41 + 2;
                do {
                  pppppuVar35 = *ppppppuVar43;
                  if (pppppuVar35 == (undefined *****)0x0) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar43,0x10);
                    if (bVar6) {
                      *ppppppuVar43 = (undefined *****)0x1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      ppppppuVar43 = ppppppuVar41 + 3;
                      uStack_230._0_7_ = 0x10a8da86c;
                      uStack_230._7_1_ = 0;
                      uStack_228 = SUB87(pppppppuVar45,0);
                      uVar7 = uStack_228;
                      uStack_221 = (undefined1)((ulong)pppppppuVar45 >> 0x38);
                      uVar8 = uStack_221;
                      uStack_220 = &PTR_PTR_1132fed68;
                      func_0x000109d1b588(ppppppuVar43,&uStack_230);
                      ppppppuVar41[2] = (undefined *****)0x0;
                      pppppppuStack_240[3] = ppppppuVar43;
                      ppppppuVar42 = pppppppuVar32[0x17];
                      ppppppuVar41 = ppppppuVar42 + 2;
                      goto LAB_10a8d9cf8;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)pppppuVar35 >> 1 & 1) == 0);
                pppppppuStack_240[3] = (undefined ******)0x0;
                ppppppuVar41 = pppppppuVar32[0x18];
                ppppppuVar43 = ppppppuVar41 + 2;
                do {
                  pppppuVar35 = *ppppppuVar43;
                  if (pppppuVar35 == (undefined *****)0x0) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar43,0x10);
                    if (bVar6) {
                      *ppppppuVar43 = (undefined *****)0x2;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      func_0x000109d1b4dc(ppppppuVar41 + 3);
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)pppppuVar35 >> 1 & 1) == 0);
                ppppppuVar43 = pppppppuVar32[0x17];
                pppppppuVar32[0x17] = (undefined ******)0x0;
                if (ppppppuVar43 != (undefined ******)0x0) {
                  ppppppuVar41 = ppppppuVar43 + 1;
                  do {
                    pppppuVar35 = *ppppppuVar41;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
                    if (bVar6) {
                      *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -4);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)pppppuVar35 & 0x1fffffffc) == 4) {
                    (*(code *)(*ppppppuVar43)[2])(ppppppuVar43);
                    do {
                      pppppuVar35 = *ppppppuVar41;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
                      if (bVar6) {
                        *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if ((undefined *****)((long)pppppuVar35 + -1) == (undefined *****)0x0) {
                      (*(code *)(*ppppppuVar43)[1])(ppppppuVar43);
                    }
                  }
                }
                ppppppuVar43 = pppppppuVar32[0x18];
                pppppppuVar32[0x18] = (undefined ******)0x0;
                if (ppppppuVar43 != (undefined ******)0x0) {
                  func_0x0001092b4274(pppppppuVar32 + 0x18);
                }
                pppppppuVar39 = (undefined *******)*pppppppuVar45;
                *pppppppuVar45 = (undefined ******)0x0;
LAB_10a8d9f3c:
                __ZNSt3__15mutex6unlockEv(pppppppuVar32 + 0x1b);
                unaff_x26 = pppppppuVar45;
              }
              else {
                ppppppuVar43 = pppppppuVar32[0x18];
                pppppppuVar39 = pppppppuVar32;
                FUN_109d1857c();
                func_0x000109d1b350(ppppppuVar43,pppppppuVar39);
                ppppppuVar43 = *pppppppuVar45;
                *pppppppuVar45 = (undefined ******)0x0;
                if (ppppppuVar43 != (undefined ******)0x0) {
                  ppppppuVar41 = ppppppuVar43 + 1;
                  do {
                    pppppuVar35 = *ppppppuVar41;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
                    if (bVar6) {
                      *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -4);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)pppppuVar35 & 0x1fffffffc) == 4) {
                    do {
                      pppppuVar35 = *ppppppuVar41;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
                      if (bVar6) {
                        *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if ((undefined *****)((long)pppppuVar35 + -1) == (undefined *****)0x0) {
                      (*(code *)(*ppppppuVar43)[1])();
                    }
                  }
                }
                ppppppuVar43 = pppppppuVar32[0x17];
                pppppppuVar32[0x17] = (undefined ******)0x0;
                if (ppppppuVar43 != (undefined ******)0x0) {
                  unaff_x26 = (undefined *******)(ppppppuVar43 + 1);
                  do {
                    ppppppuVar41 = *unaff_x26;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                    if (bVar6) {
                      *unaff_x26 = (undefined ******)((long)ppppppuVar41 + -4);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)ppppppuVar41 & 0x1fffffffc) == 4) {
                    (*(code *)(*ppppppuVar43)[2])(ppppppuVar43);
                    do {
                      ppppppuVar41 = *unaff_x26;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                      if (bVar6) {
                        *unaff_x26 = (undefined ******)((long)ppppppuVar41 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if ((undefined ******)((long)ppppppuVar41 + -1) == (undefined ******)0x0) {
                      (*(code *)(*ppppppuVar43)[1])(ppppppuVar43);
                    }
                  }
                }
                ppppppuVar43 = pppppppuVar32[0x18];
                pppppppuVar32[0x18] = (undefined ******)0x0;
                if (ppppppuVar43 != (undefined ******)0x0) {
                  func_0x0001092b4274(pppppppuVar32 + 0x18);
                }
                pppppppuVar39 = pppppppuStack_250;
                pppppppuStack_250 = (undefined *******)0x0;
              }
              ppppppppuVar19 = ppppppppuStack_248;
              if (ppppppppuStack_248 != (undefined ********)0x0) {
                func_0x0001092b4274(&ppppppppuStack_248);
              }
              if (pppppppuStack_250 != (undefined *******)0x0) {
                pppppppuVar32 = pppppppuStack_250 + 1;
                do {
                  ppppppuVar43 = *pppppppuVar32;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                  if (bVar6) {
                    *pppppppuVar32 = (undefined ******)((long)ppppppuVar43 + -4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (((ulong)ppppppuVar43 & 0x1fffffffc) == 4) {
                  do {
                    ppppppuVar43 = *pppppppuVar32;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                    if (bVar6) {
                      *pppppppuVar32 = (undefined ******)((long)ppppppuVar43 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if ((undefined ******)((long)ppppppuVar43 + -1) == (undefined ******)0x0) {
                    (*(code *)(*pppppppuStack_250)[1])();
                  }
                }
              }
              plVar33 = (long *)plVar12[0x55];
              if (plVar33 != (long *)0x0) {
                puVar4 = (ulong *)(plVar33 + 1);
                do {
                  uVar13 = *puVar4;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                  if (bVar6) {
                    *puVar4 = uVar13 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar13 & 0x1fffffffc) == 4) {
                  do {
                    uVar13 = *puVar4;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                    if (bVar6) {
                      *puVar4 = uVar13 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar13 - 1 == 0) {
                    (**(code **)(*plVar33 + 8))();
                  }
                }
              }
              plVar12[0x55] = (long)pppppppuVar39;
            }
            else {
              plVar33 = (long *)plVar12[0x55];
              if (plVar33 != (long *)0x0) {
                puVar4 = (ulong *)(plVar33 + 1);
                do {
                  uVar13 = *puVar4;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                  if (bVar6) {
                    *puVar4 = uVar13 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar13 & 0x1fffffffc) == 4) {
                  do {
                    uVar13 = *puVar4;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                    if (bVar6) {
                      *puVar4 = uVar13 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar13 - 1 == 0) {
                    (**(code **)(*plVar33 + 8))();
                  }
                }
              }
              plVar12[0x55] = 0;
            }
            if (((uVar28 == 0) && (*pppppppuVar31 != (undefined ******)0x0)) &&
               ((*pppppppuVar31)[2] != (undefined *****)0x0)) {
              ppppppppuVar19 = (undefined ********)&UNK_10f68165b;
              FUN_10a8da354(plVar12);
              FUN_10a8c7000(plVar12);
            }
            (*(code *)*pppppppuStack_f0)(&pppppppuStack_f0);
            ppppppppuVar22 = ppppppppuVar21;
            (*(code *)*pppppppuStack_130)();
          }
          else {
            FUN_10a8da3cc(&uStack_230,plVar12);
            FUN_10a8da5c8(&pppppppuStack_250,&uStack_230,plVar12[1] + 0x168,plVar12 + 0x3f,
                          plVar12 + 0x42);
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            pppppppuStack_138 = (undefined *******)&pppppppuStack_218;
            FUN_10a04b2ac(&pppppppuStack_138);
            pppppppuStack_138 = (undefined *******)&uStack_230;
            FUN_10a04b2ac(&pppppppuStack_138);
            pppppppuVar31 = *ppppppppuVar22;
            uStack_220 = (undefined **)(pppppppuVar31 + 0xc);
            pppppppuStack_218 = pppppppuVar31 + 0xf;
            uStack_230._0_7_ = SUB87(pppppppuVar31,0);
            uStack_230._7_1_ = (undefined1)((ulong)pppppppuVar31 >> 0x38);
            uStack_228 = SUB87(pppppppuVar31 + 9,0);
            uStack_221 = (undefined1)((ulong)(pppppppuVar31 + 9) >> 0x38);
            pppppppuStack_130 = pppppppuStack_250 + 9;
            pppppppuStack_128 = pppppppuStack_250 + 0xc;
            pppppppuStack_120 = pppppppuStack_250 + 0xf;
            pppppppuStack_138 = pppppppuStack_250;
            ppppppppuVar14 = (undefined ********)auStack_260;
            ppppppppuVar19 = (undefined ********)&uStack_230;
            FUN_109d2d6b8(ppppppppuVar14,ppppppppuVar19,&pppppppuStack_138);
            if (((ulong)ppppppppuVar14 & 1) == 0) {
              func_0x00010a8d4768(plVar12);
              ppppppppuVar19 = &pppppppuStack_250;
              FUN_10a8da564();
            }
            else {
              ppppppppuVar22 = ppppppppuVar14;
              if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                puVar25 = &UNK_10f6812de;
                puVar11 = &UNK_10f68166d;
                puVar27 = &UNK_10f6816c0;
                uVar15 = 1;
                uVar24 = 2;
                uVar26 = 0xb9;
                uVar44 = 0x10a8d93b8;
                ppppppppuVar21 = (undefined ********)&ppppppppuStack_40;
                goto SUB_10ae06f08;
              }
            }
            ppppppppuVar21 = ppppppppuStack_248;
            if (ppppppppuStack_248 != (undefined ********)0x0) {
              ppppppppuVar2 = ppppppppuStack_248 + 1;
              do {
                pppppppuVar31 = *ppppppppuVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
                if (bVar6) {
                  *ppppppppuVar2 = (undefined *******)((long)pppppppuVar31 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppppppuVar31 == (undefined *******)0x0) {
                (*(code *)(*ppppppppuStack_248)[2])(ppppppppuStack_248);
                ppppppppuVar22 = ppppppppuVar21;
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
            if (((ulong)ppppppppuVar14 & 1) == 0) goto LAB_10a8d9494;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
            auVar56._8_8_ = ppppppppuVar19;
            auVar56._0_8_ = ppppppppuVar22;
            return auVar56;
          }
        }
        ___stack_chk_fail();
        __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
        FUN_10a8daae8(&pppppppuStack_250);
        FUN_10a8d4068(unaff_x24 + 0x10);
        (*(code *)*pppppppuStack_f0)(unaff_x24 + 9);
        (*(code *)*pppppppuStack_130)(ppppppppuVar21);
        __Unwind_Resume(ppppppppuVar22);
        puVar25 = &DAT_10f62a4d8;
        FUN_109ffde64();
        if (ppppppppuVar19 < (undefined ********)0x2e8ba2e8ba2e8bb) {
          lVar30 = (long)ppppppppuVar19 * 0x58;
          __Znwm(lVar30);
          auVar57._8_8_ = ppppppppuVar19;
          auVar57._0_8_ = lVar30;
          return auVar57;
        }
        func_0x000109ffded8();
        puVar36 = (undefined8 *)(puVar25 + 8);
        puVar40 = (undefined8 *)*puVar36;
        ppppppppuVar21 = ppppppppuVar19;
        puVar17 = puVar36;
        if (puVar40 != (undefined8 *)0x0) {
          do {
            puVar18 = puVar40 + 4;
            ppppppppuVar21 = ppppppppuVar19;
            FUN_10a003e3c(puVar18,ppppppppuVar19);
            if (-1 < (char)puVar18) {
              puVar17 = puVar40;
            }
            puVar40 = *(undefined8 **)((long)puVar40 + ((ulong)puVar18 >> 4 & 8));
          } while (puVar40 != (undefined8 *)0x0);
          if (puVar17 != puVar36) {
            ppppppppuVar21 = (undefined ********)(puVar17 + 4);
            FUN_10a003e3c(ppppppppuVar19,ppppppppuVar21);
            if (((uint)ppppppppuVar19 >> 7 & 1) == 0) goto LAB_10a8da28c;
          }
        }
        puVar17 = puVar36;
LAB_10a8da28c:
        auVar58._8_8_ = ppppppppuVar21;
        auVar58._0_8_ = puVar17;
        return auVar58;
      }
    }
    FUN_10a00946c(&UNK_10f68156f);
  }
  plVar12 = (long *)&UNK_10f681523;
  FUN_10a00946c();
  if ((int)plVar12[0x28] == 3) {
LAB_10a8c7018:
    uVar44 = 0;
  }
  else {
    if ((((int)plVar12[0x28] != 2) && ((int)plVar12[0x28] != 1)) && ((int)plVar12[0x28] != 4)) {
      if (((plVar12[0x53] == 0) || (lVar30 = *(long *)(plVar12[0x53] + 0x10), lVar30 == 0)) ||
         (((uint)*(undefined8 *)(lVar30 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
      if (0x143 < *(int *)(*(long *)(*plVar12 + 0xa20) + 0x18)) {
        if (plVar12[0x53] == 0) {
          pppppppuVar31 = (undefined *******)&UNK_10f681734;
          func_0x000105688514();
          ppppppppuVar21 = (undefined ********)&ppppppppuStack_a0;
          pppppppuVar32 = pppppppuVar31;
          if (*(int *)(pppppppuVar31 + 0x28) == 1) {
            if ((*(char *)(pppppppuVar31 + 0x59) == '\x01') &&
               (((uint)pppppppuVar31[0x58][2] >> 1 & 1) != 0)) {
              pppppppuVar32 = (undefined *******)pppppppuVar31[0x56];
              if (pppppppuVar32 != (undefined *******)0x0) {
                pppppppuVar45 = pppppppuVar32 + 1;
                do {
                  ppppppuVar43 = *pppppppuVar45;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                  if (bVar6) {
                    *pppppppuVar45 = (undefined ******)((long)ppppppuVar43 - 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (((ulong)ppppppuVar43 & 0x1fffffffc) == 4) {
                  do {
                    ppppppuVar43 = *pppppppuVar45;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                    if (bVar6) {
                      *pppppppuVar45 = (undefined ******)((long)ppppppuVar43 - 1U);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if ((undefined ******)((long)ppppppuVar43 - 1U) == (undefined ******)0x0) {
                    (*(code *)(*pppppppuVar32)[1])();
                  }
                }
              }
              pppppppuVar31[0x56] = (undefined ******)0x0;
              *(undefined4 *)(pppppppuVar31 + 0x28) = 2;
            }
            else {
              pppppppuVar45 = (undefined *******)pppppppuVar31[0x10];
              pppppppuVar31[0xf] = (undefined ******)0x0;
              pppppppuVar31[0x10] = (undefined ******)0x0;
              if ((*(char *)(pppppppuVar31 + 0x5e) == '\x01') &&
                 ((pppppppuVar31[0x21] != (undefined ******)0x0 &&
                  (ppppuVar29 = (*pppppppuVar31[0x21])[0x11], ppppuVar29 != (undefined ****)0x0))))
              {
                (*(code *)(*ppppuVar29)[9])(ppppuVar29,1);
              }
              ppppppppuStack_98 = (undefined ********)&stack0xffffffffffffff70;
              param_3 = (undefined ********)0x1;
              ppppppppuStack_a0 = (undefined ********)pppppppuVar31;
              FUN_10a8c6a58(pppppppuVar31,1);
              FUN_10a8db76c(&ppppppppuStack_a0);
              pppppppuVar32 = (undefined *******)ppppppppuVar21;
              if (pppppppuVar45 != (undefined *******)0x0) {
                pppppppuVar31 = pppppppuVar45 + 1;
                do {
                  ppppppuVar43 = *pppppppuVar31;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
                  if (bVar6) {
                    *pppppppuVar31 = (undefined ******)((long)ppppppuVar43 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (ppppppuVar43 == (undefined ******)0x0) {
                  (*(code *)(*pppppppuVar45)[2])(pppppppuVar45);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar45);
                  pppppppuVar32 = pppppppuVar45;
                }
              }
            }
          }
          auVar53._8_8_ = param_3;
          auVar53._0_8_ = pppppppuVar32;
          return auVar53;
        }
        if (((uint)*(undefined8 *)(*(long *)(plVar12[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
          FUN_10a8dae18();
          goto LAB_10a8c7048;
        }
      }
      FUN_10a8dafa0();
    }
LAB_10a8c7048:
    uVar44 = 1;
  }
  auVar52._8_8_ = param_3;
  auVar52._0_8_ = uVar44;
  return auVar52;
LAB_10a8d9cf8:
  do {
    pppppuVar35 = *ppppppuVar41;
    if (pppppuVar35 == (undefined *****)0x0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
      if (bVar6) {
        *ppppppuVar41 = (undefined *****)0x1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        ppppppuVar43 = ppppppuVar42 + 3;
        uStack_230._0_7_ = 0x10a8daa08;
        uStack_230._7_1_ = 0;
        uStack_220 = &PTR_PTR_1132fed68;
        uStack_228 = uVar7;
        uStack_221 = uVar8;
        func_0x000109d1b588(ppppppuVar43,&uStack_230);
        ppppppuVar42[2] = (undefined *****)0x0;
        pppppppuStack_240[4] = ppppppuVar43;
        pppppppuVar39 = pppppppuStack_250;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar35 >> 1 & 1) == 0);
  pppppppuStack_240[4] = (undefined ******)0x0;
  ppppppuVar41 = pppppppuVar32[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar41,ppppppuVar43);
  ppppppuVar43 = pppppppuVar32[0x17];
  pppppppuVar32[0x17] = (undefined ******)0x0;
  if (ppppppuVar43 != (undefined ******)0x0) {
    ppppppuVar41 = ppppppuVar43 + 1;
    do {
      pppppuVar35 = *ppppppuVar41;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
      if (bVar6) {
        *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar35 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar43)[2])(ppppppuVar43);
      do {
        pppppuVar35 = *ppppppuVar41;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
        if (bVar6) {
          *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar35 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar43)[1])(ppppppuVar43);
      }
    }
  }
  ppppppuVar42 = *pppppppuVar45;
  ppppppuVar43 = ppppppuVar42 + 2;
  ppppppuVar41 = pppppppuStack_240[3];
  while (pppppuVar35 = *ppppppuVar43, pppppuVar35 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar39 = pppppppuStack_250;
    if (((uint)pppppuVar35 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar43,0x10);
  if (bVar6) {
    *ppppppuVar43 = (undefined *****)0x1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_10a8d9de4;
  uStack_230._0_7_ = 0x10a8da86c;
  uStack_230._7_1_ = 0;
  uStack_220 = &PTR_PTR_1132fed68;
  uStack_228 = uVar7;
  uStack_221 = uVar8;
  FUN_109d1b624(ppppppuVar42 + 3,&uStack_230,ppppppuVar41);
  ppppppuVar42[2] = (undefined *****)0x0;
  pppppppuStack_240[3] = (undefined ******)0x0;
  ppppppuVar43 = *pppppppuVar45;
  *pppppppuVar45 = (undefined ******)0x0;
  if (ppppppuVar43 != (undefined ******)0x0) {
    ppppppuVar41 = ppppppuVar43 + 1;
    do {
      pppppuVar35 = *ppppppuVar41;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
      if (bVar6) {
        *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar35 & 0x1fffffffc) == 4) {
      do {
        pppppuVar35 = *ppppppuVar41;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar41,0x10);
        if (bVar6) {
          *ppppppuVar41 = (undefined *****)((long)pppppuVar35 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar35 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar43)[1])();
      }
    }
  }
  ppppppuVar43 = pppppppuVar32[0x18];
  pppppppuVar32[0x18] = (undefined ******)0x0;
  pppppppuVar39 = pppppppuStack_250;
  if (ppppppuVar43 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar32 + 0x18);
    pppppppuVar39 = pppppppuStack_250;
  }
LAB_10a8d9f38:
  pppppppuStack_250 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8ba290; end: 10a8ba39f;  */

void FUN_10a8ba290(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  char cStack_59;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x230) + 0x10);
  lVar4 = *(long *)(*plVar6 + 0x8d8);
  plVar6 = *(long **)plVar6[0x62];
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)plVar6[1];
    for (puVar2 = (undefined8 *)*plVar6; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x30))(&uStack_58);
      uVar5 = (uint)(char)bStack_41;
      uVar1 = uStack_50;
      if (-1 < (int)uVar5) {
        uVar1 = (ulong)bStack_41;
      }
      if (uVar1 != 0) {
        cStack_59 = '\x0f';
        uStack_70 = 0x4c4c4d68636554;
        uStack_69 = 0x65;
        uStack_68 = 0x746e657645736e;
        uStack_61 = 0;
        FUN_10a76bdb0(lVar4,&uStack_70,&uStack_58);
        if (cStack_59 < '\0') {
          __ZdlPv(CONCAT17(uStack_69,uStack_70));
        }
        uVar5 = (uint)bStack_41;
      }
      if ((uVar5 >> 7 & 1) != 0) {
        __ZdlPv(uStack_58);
      }
    }
  }
  return;
}



/* Entry: 10a8ba3a0; end: 10a8ba447;  */

void FUN_10a8ba3a0(undefined8 param_1)

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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8ba448(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67fff8;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f67fb58;
  uStack_38 = 0;
  FUN_10a8e0810();
  FUN_10a8e0ac4(param_1);
  return;
}



/* Entry: 10a8ba448; end: 10a8ba51f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8ba4e0) */

undefined1  [16] FUN_10a8ba448(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f680c1a,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e0714(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8ba520; end: 10a8ba5e7;  */

undefined8 * FUN_10a8ba520(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x45] = &PTR_FUN_110c383b8;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c26200,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c26210);
  *param_1 = &PTR_FUN_110c25ec8;
  param_1[2] = &PTR_DAT_110c25ff8;
  param_1[7] = &PTR_DAT_110c26050;
  param_1[0xd] = &PTR_DAT_110c26070;
  param_1[0x45] = &PTR_DAT_110c261c0;
  param_1[0x16] = &PTR_DAT_110c260e0;
  param_1[0x17] = &PTR_DAT_110c26110;
  param_1[0x3e] = &PTR_DAT_110c26148;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  return param_1;
}



/* Entry: 10a8ba5e8; end: 10a8ba67b;  */

void FUN_10a8ba5e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c25ec8;
  param_1[2] = &PTR_DAT_110c25ff8;
  param_1[7] = &PTR_DAT_110c26050;
  param_1[0xd] = &PTR_DAT_110c26070;
  param_1[0x45] = &PTR_DAT_110c261c0;
  param_1[0x16] = &PTR_DAT_110c260e0;
  param_1[0x17] = &PTR_DAT_110c26110;
  param_1[0x3e] = &PTR_DAT_110c26148;
  func_0x00010a05248c(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c28440;
  param_1[0x45] = &PTR_FUN_110c284b8;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c282c0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110c283f0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a8ba67c; end: 10a8ba6bf;  */

void FUN_10a8ba67c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c25ec8;
  param_1[2] = &PTR_DAT_110c25ff8;
  param_1[7] = &PTR_DAT_110c26050;
  param_1[0xd] = &PTR_DAT_110c26070;
  param_1[0x45] = &PTR_DAT_110c261c0;
  param_1[0x16] = &PTR_DAT_110c260e0;
  param_1[0x17] = &PTR_DAT_110c26110;
  param_1[0x3e] = &PTR_DAT_110c26148;
  func_0x00010a05248c(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c28440;
  param_1[0x45] = &PTR_FUN_110c284b8;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c282c0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110c283f0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a8ba6c0; end: 10a8ba763;  */

void FUN_10a8ba6c0(void)

{
  FUN_10a8ba5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8ba764; end: 10a8ba793;  */

void FUN_10a8ba764(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a8ba5e8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8ba794; end: 10a8ba79b;  */

void FUN_10a8ba794(void)

{
  return;
}



/* Entry: 10a8ba79c; end: 10a8ba817;  */

void FUN_10a8ba79c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a8ba818; end: 10a8ba82b;  */

void FUN_10a8ba818(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a8ba82c; end: 10a8ba9af;  */

void FUN_10a8ba82c(float param_1,float param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (*(long *)(param_3 + 0x218) != 0) {
    lVar4 = *(long *)(*(long *)(param_3 + 0x168) + 0x248);
    if (lVar4 != 0) {
      FUN_10a8ba9f4(&lStack_50);
      if (lStack_50 == 0) {
        *(undefined1 *)(lVar4 + 0x219) = 1;
        uStack_58 = 0x3f8000003f800000;
        uStack_60 = 0xbf800000bf800000;
        FUN_10a395800(lVar4,&uStack_60);
        FUN_10a395710(0,0,0,0,lVar4);
      }
      else {
        uVar5 = *(undefined8 *)(lStack_50 + 0x298);
        func_0x00010acae6ac(uVar5);
        fVar6 = param_1;
        fVar8 = param_2;
        func_0x00010acae698(uVar5);
        *(undefined1 *)(lVar4 + 0x219) = 1;
        uStack_60 = CONCAT44(param_2 - fVar8 * 0.5,param_1 - fVar6 * 0.5);
        uStack_58 = CONCAT44(param_2 + fVar8 * 0.5,param_1 + fVar6 * 0.5);
        FUN_10a395800(lVar4,&uStack_60);
        FUN_10a395710(0,0,0,0,lVar4);
        uVar5 = 0xbf000000;
        uVar7 = (ulong)(uint)(*(float *)(lStack_50 + 0x2a8) * -0.5);
        ___sincosf_stret(uVar7);
        fVar6 = (float)uVar7 * 0.0;
        FUN_10a395654(fVar6,fVar6,uVar7,uVar5,lVar4);
      }
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  return;
}



/* Entry: 10a8ba9b0; end: 10a8ba9f3;  */

void FUN_10a8ba9b0(float param_1,float param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (*(long *)(param_3 + 0x1b0) != 0) {
    lVar4 = *(long *)(*(long *)(param_3 + 0x100) + 0x248);
    if (lVar4 != 0) {
      FUN_10a8ba9f4(&lStack_50);
      if (lStack_50 == 0) {
        *(undefined1 *)(lVar4 + 0x219) = 1;
        uStack_58 = 0x3f8000003f800000;
        uStack_60 = 0xbf800000bf800000;
        FUN_10a395800(lVar4,&uStack_60);
        FUN_10a395710(0,0,0,0,lVar4);
      }
      else {
        uVar5 = *(undefined8 *)(lStack_50 + 0x298);
        func_0x00010acae6ac(uVar5);
        fVar6 = param_1;
        fVar8 = param_2;
        func_0x00010acae698(uVar5);
        *(undefined1 *)(lVar4 + 0x219) = 1;
        uStack_60 = CONCAT44(param_2 - fVar8 * 0.5,param_1 - fVar6 * 0.5);
        uStack_58 = CONCAT44(param_2 + fVar8 * 0.5,param_1 + fVar6 * 0.5);
        FUN_10a395800(lVar4,&uStack_60);
        FUN_10a395710(0,0,0,0,lVar4);
        uVar5 = 0xbf000000;
        uVar7 = (ulong)(uint)(*(float *)(lStack_50 + 0x2a8) * -0.5);
        ___sincosf_stret(uVar7);
        fVar6 = (float)uVar7 * 0.0;
        FUN_10a395654(fVar6,fVar6,uVar7,uVar5,lVar4);
      }
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  return;
}



/* Entry: 10a8ba9f4; end: 10a8baa5f;  */

void FUN_10a8ba9f4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x268);
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110c2c758,0), lVar4 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x270);
    *param_1 = lVar4;
    param_1[1] = lVar5;
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
  }
  return;
}



/* Entry: 10a8baa60; end: 10a8baa6f;  */

undefined8 FUN_10a8baa60(void)

{
  return 0;
}



/* Entry: 10a8baa70; end: 10a8bab23;  */

void FUN_10a8baa70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a8ba9f4(&plStack_30);
    if (plStack_30 == (long *)0x0) {
      bVar4 = 1;
    }
    else {
      (**(code **)(*plStack_30 + 0x120))(plStack_30);
      bVar4 = *(byte *)(plStack_30 + 0x5a);
    }
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),bVar4 & 1);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a8bab24; end: 10a8bab2b;  */

void FUN_10a8bab24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10a8ba9f4(&plStack_30);
    if (plStack_30 == (long *)0x0) {
      bVar4 = 1;
    }
    else {
      (**(code **)(*plStack_30 + 0x120))(plStack_30);
      bVar4 = *(byte *)(plStack_30 + 0x5a);
    }
    FUN_10a3e4548(*(undefined8 *)(param_1 + -0x88),bVar4 & 1);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a8bab2c; end: 10a8bad9b;  */

void FUN_10a8bab2c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a5764a8(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c2b5b8;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a8bac90;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a8bac90:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010a04a704(lVar10 + 0x218,param_2 + 0x218);
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a8bad9c; end: 10a8baeab;  */

void FUN_10a8bad9c(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  uStack_78 = 0x10a8e0c4c;
  ppuStack_70 = &PTR_FUN_110c2b5f8;
  ppuVar5 = &PTR_DAT_110c26230;
  lStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c26230,&uStack_78,0);
  pppuVar3 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  pppuStack_a8 = pppuVar3;
  if ((param_2 & 1) == 0) {
    puStack_88 = (undefined *)0x0;
    pppuStack_80 = (undefined ***)0x0;
    pppuVar3 = (undefined ***)(param_1 + 0x218);
    ppuVar5 = &puStack_88;
    func_0x00010a04a704();
    pppuVar4 = pppuStack_80;
    pppuStack_a8 = pppuVar3;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar3 = pppuStack_80 + 1;
      do {
        ppuVar7 = *pppuVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)ppuVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuStack_a8 = pppuVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar3 = pppuStack_a8;
  __Unwind_Resume();
  pcStack_98 = FUN_10a8baeac;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010a3c7928();
  puStack_c0 = &UNK_10f680c3f;
  uStack_b8 = 0xd;
  ppuStack_c8 = pppuVar3[0x44];
  ppuStack_d0 = pppuVar3[0x43];
  if (pppuVar3[0x44] != (undefined **)0x0) {
    ppuVar7 = pppuVar3[0x44] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar2) {
        *ppuVar7 = *ppuVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*ppuVar5 + 0x108))(ppuVar5,&PTR_DAT_110c26230,&ppuStack_d0,&puStack_c0);
  ppuVar5 = ppuStack_c8;
  if (ppuStack_c8 != (undefined **)0x0) {
    ppuVar7 = ppuStack_c8 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar2) {
        *ppuVar7 = puVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return;
}



/* Entry: 10a8baeac; end: 10a8bb1a7;  */

void FUN_10a8baeac(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a3c7928();
  puStack_30 = &UNK_10f680c3f;
  uStack_28 = 0xd;
  plStack_38 = *(long **)(param_1 + 0x220);
  uStack_40 = *(undefined8 *)(param_1 + 0x218);
  if (*(long *)(param_1 + 0x220) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x220) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c26230,&uStack_40,&puStack_30);
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



/* Entry: 10a8bb1a8; end: 10a8bb1fb;  */

undefined8 * FUN_10a8bb1a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x940;
  __Znwm();
  _bzero();
  FUN_10a8e0c9c(uVar1);
  *param_1 = uVar1;
  return param_1;
}


