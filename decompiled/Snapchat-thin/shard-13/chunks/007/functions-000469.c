/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab0a9e8; end: 10ab0aa0b;  */

void FUN_10ab0a9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  FUN_10ab09e9c(plVar3,uVar5);
  FUN_10a136258(param_4);
  func_0x00010a13627c(plVar3,param_1);
  *extraout_x8 = 0;
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



/* Entry: 10ab0aa0c; end: 10ab0aac3;  */

void FUN_10ab0aa0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab09e9c(param_2,param_3);
  FUN_10a136258(param_5);
  func_0x00010a13627c(param_2,param_4);
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



/* Entry: 10ab0aac4; end: 10ab0ab7b;  */

void FUN_10ab0aac4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab0ac3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10ab0ab7c; end: 10ab0ac3b;  */

void FUN_10ab0ab7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab09e9c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 3) = (char)param_2;
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



/* Entry: 10ab0ac3c; end: 10ab0aca3;  */

void FUN_10ab0ac3c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
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
  FUN_10ab0ac3c(plVar5,param_2);
  FUN_10a052e3c(param_4);
  bVar1 = *(byte *)((long)plVar5 + 0x19);
  *extraout_x8 = 2;
  *(byte *)(extraout_x8 + 2) = bVar1 & 1;
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



/* Entry: 10ab0aca4; end: 10ab0ad5f;  */

void FUN_10ab0aca4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10ab0ac3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)((long)param_2 + 0x19);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 & 1;
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



/* Entry: 10ab0ad60; end: 10ab0ae2b;  */

void FUN_10ab0ad60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab09e9c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) & 0xfe | (byte)param_2;
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



/* Entry: 10ab0ae2c; end: 10ab0aee7;  */

void FUN_10ab0ae2c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10ab0ac3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)((long)param_2 + 0x19);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 1 & 1;
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



/* Entry: 10ab0aee8; end: 10ab0afbf;  */

void FUN_10ab0aee8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
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
  FUN_10ab09e9c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 2;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) & 0xfd | bVar7;
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
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab0afc0; end: 10ab0b07b;  */

void FUN_10ab0afc0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10ab0ac3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)((long)param_2 + 0x19);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 2 & 1;
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



/* Entry: 10ab0b07c; end: 10ab0b153;  */

void FUN_10ab0b07c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
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
  FUN_10ab09e9c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 4;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) & 0xfb | bVar7;
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
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab0b154; end: 10ab0b1b3;  */

void FUN_10ab0b154(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a5610b8(lVar1 + 0x58);
    func_0x00010a561060(lVar1 + 0x48);
    FUN_10a0e3194(lVar1 + 0x38);
    func_0x00010a5610b8(lVar1 + 0x20);
    func_0x00010a561060(lVar1 + 0x10);
    FUN_10a0e3194(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ab0b1b4; end: 10ab0b28f;  */

long FUN_10ab0b1b4(long param_1)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [64];
  undefined1 *puStack_28;
  
  FUN_10ab0b290(auStack_70);
  FUN_10a5554e4(param_1,auStack_70);
  puStack_28 = auStack_68;
  func_0x00010a190844(&puStack_28);
  FUN_10ab0b290(auStack_70);
  FUN_10a5554e4(param_1 + 0x38,auStack_70);
  puStack_28 = auStack_68;
  func_0x00010a190844(&puStack_28);
  *(undefined8 *)(*(long *)(param_1 + 0x58) + 0xe8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8) = 0x400000000;
  return param_1;
}



/* Entry: 10ab0b290; end: 10ab0b393;  */

void FUN_10ab0b290(undefined4 *param_1)

{
  undefined8 auStack_40 [2];
  char cStack_29;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_10a19079c(param_1 + 2);
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = 0;
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c461a8);
  FUN_10ab6f7f8(param_1,auStack_40,5,3,0);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c461c0);
  FUN_10ab6f7f8(param_1,auStack_40,5,4,1);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}



/* Entry: 10ab0b394; end: 10ab0b48f;  */

undefined1  [16] FUN_10ab0b394(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c45a88;
  puVar1 = &UNK_10f68e3e8;
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
    ppuStack_40 = &PTR_DAT_110c45a88;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c46558;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab0b490; end: 10ab0b57f;  */

void FUN_10ab0b490(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f50c,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab0b54c);
  (*pcVar4)();
}



/* Entry: 10ab0b580; end: 10ab0bd83;  */

undefined8 * FUN_10ab0b580(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 uStack_f9;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar9 = param_1 + 4;
  param_1[5] = 0;
  *plVar9 = 0;
  plVar10 = param_1 + 5;
  param_1[1] = 0;
  *param_1 = 0;
  uStack_98 = 10;
  puStack_a0 = &DAT_10f68f61d;
  uStack_b8 = 0xe;
  puStack_c0 = &DAT_10f68f628;
  uStack_b0 = 0x80f61e8a0c608a1d;
  puVar2 = &UNK_10f68fc03;
  if (param_3 == 0) {
    puVar2 = &UNK_10f68fc1d;
  }
  uVar6 = 0x19;
  if (param_3 == 0) {
    uVar6 = 0x1b;
  }
  lStack_78 = 0;
  plStack_88 = &lStack_80;
  lStack_80 = 0;
  uStack_90 = 0x796dea719b3262cf;
  FUN_10ab0bd84(auStack_d0,param_2,puVar2,uVar6,&plStack_88);
  FUN_10a0da1b8(&plStack_88,lStack_80);
  func_0x000107c2b074(&plStack_88,&puStack_a0);
  FUN_10a0d9f14(auStack_f8,&plStack_88,1,&uStack_f9);
  FUN_10ab0bd84(auStack_e0,param_2,puVar2,uVar6,auStack_f8);
  FUN_10a0da1b8(auStack_f8,uStack_f0);
  if (lStack_78 < 0) {
    __ZdlPv(plStack_88);
  }
  if ((bRam00000001137ec2c8 & 1) == 0) {
    iVar5 = 0x137ec2c8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(&plStack_88,&UNK_10f68f637);
      FUN_10a0d9f14(0x1137ec2f8,&plStack_88,1,auStack_f8);
      if (lStack_78 < 0) {
        __ZdlPv(plStack_88);
      }
      ___cxa_guard_release(0x1137ec2c8);
    }
  }
  if ((bRam00000001137ec2d0 & 1) == 0) {
    iVar5 = 0x137ec2d0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(&plStack_88,&UNK_10f68f63d);
      FUN_10a0d9f14(0x1137ec310,&plStack_88,1,auStack_f8);
      if (lStack_78 < 0) {
        __ZdlPv(plStack_88);
      }
      ___cxa_guard_release(0x1137ec2d0);
    }
  }
  if ((bRam00000001137ec2d8 & 1) == 0) {
    iVar5 = 0x137ec2d8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(&plStack_88,&UNK_10f68f646);
      FUN_10a0d9f14(0x1137ec328,&plStack_88,1,auStack_f8);
      if (lStack_78 < 0) {
        __ZdlPv(plStack_88);
      }
      ___cxa_guard_release(0x1137ec2d8);
    }
  }
  if ((bRam00000001137ec2e0 & 1) == 0) {
    iVar5 = 0x137ec2e0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(&plStack_88,&UNK_10f68f64f);
      FUN_10a0d9f14(0x1137ec340,&plStack_88,1,auStack_f8);
      if (lStack_78 < 0) {
        __ZdlPv(plStack_88);
      }
      ___cxa_guard_release(0x1137ec2e0);
    }
  }
  if ((bRam00000001137ec2e8 & 1) == 0) {
    iVar5 = 0x137ec2e8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(&plStack_88,&UNK_10f68f655);
      FUN_10a0d9f14(0x1137ec358,&plStack_88,1,auStack_f8);
      if (lStack_78 < 0) {
        __ZdlPv(plStack_88);
      }
      ___cxa_guard_release(0x1137ec2e8);
    }
  }
  uVar6 = 0x28;
  __Znwm(0x28);
  FUN_10ab147ec();
  plStack_88 = (long *)0x0;
  FUN_10ab1476c(param_1,uVar6);
  FUN_10ab1476c(&plStack_88,0);
  uVar6 = 0x28;
  __Znwm(0x28);
  FUN_10ab147ec();
  plStack_88 = (long *)0x0;
  FUN_10ab1476c(param_1 + 1,uVar6);
  FUN_10ab1476c(&plStack_88,0);
  uVar6 = 0x28;
  __Znwm(0x28);
  FUN_10ab147ec();
  plStack_88 = (long *)0x0;
  FUN_10ab1476c(param_1 + 2,uVar6);
  FUN_10ab1476c(&plStack_88,0);
  uVar6 = 0x28;
  __Znwm(0x28);
  FUN_10ab147ec();
  plStack_88 = (long *)0x0;
  FUN_10ab1476c(param_1 + 3,uVar6);
  FUN_10ab1476c(&plStack_88,0);
  uVar6 = 0x28;
  __Znwm(0x28);
  FUN_10ab147ec();
  plStack_88 = (long *)0x0;
  FUN_10ab1476c(plVar9,uVar6);
  FUN_10ab1476c(&plStack_88,0);
  puVar7 = (undefined8 *)0x18;
  __Znwm();
  *puVar7 = param_2;
  plStack_88 = &lStack_80;
  lStack_78 = 0;
  lStack_80 = 0;
  FUN_10ab0bd84(puVar7 + 1,param_2,&UNK_10f68ff08,0x10,&plStack_88);
  FUN_10a0da1b8(&plStack_88,lStack_80);
  plVar8 = plVar10;
  func_0x00010ab147b0(plVar10,puVar7);
  if (param_3 != 0) {
    plVar8 = *(long **)(*(long *)(param_1[3] + 8) + 0x228);
    if (plVar8 == *(long **)(*(long *)(param_1[3] + 8) + 0x230)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar8;
    }
    func_0x000107c2b074(&plStack_88,&puStack_c0);
    FUN_10a047898(lVar11 + 0x200,&plStack_88,&plStack_88);
    if (lStack_78 < 0) {
      __ZdlPv(plStack_88);
    }
    plVar8 = *(long **)(*(long *)(*plVar9 + 8) + 0x228);
    if (plVar8 == *(long **)(*(long *)(*plVar9 + 8) + 0x230)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar8;
    }
    func_0x000107c2b074(&plStack_88,&puStack_c0);
    FUN_10a047898(lVar11 + 0x200,&plStack_88,&plStack_88);
    if (lStack_78 < 0) {
      __ZdlPv(plStack_88);
    }
    plVar8 = *(long **)(*(long *)(*plVar10 + 8) + 0x228);
    if (plVar8 == *(long **)(*(long *)(*plVar10 + 8) + 0x230)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar8;
    }
    func_0x000107c2b074(&plStack_88,&puStack_c0);
    plVar8 = (long *)(lVar11 + 0x200);
    FUN_10a047898(plVar8,&plStack_88,&plStack_88);
    if (lStack_78 < 0) {
      plVar8 = plStack_88;
      __ZdlPv(plStack_88);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar8 = plStack_d8;
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      plVar8 = plStack_c8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137ec2e8);
  FUN_10a0617bc(auStack_e0);
  do {
    do {
      FUN_10a0617bc(auStack_d0);
      func_0x00010ab147b0(plVar10,0);
      FUN_10ab1476c(plVar9,0);
      FUN_10ab1476c(param_1 + 3,0);
      FUN_10ab1476c(plStack_c8,0);
      FUN_10ab1476c(param_1 + 1,0);
      FUN_10ab1476c(param_1,0);
      __Unwind_Resume(plVar8);
      FUN_10a0da1b8(auStack_f8,uStack_f0);
    } while (-1 < lStack_78);
    __ZdlPv(plStack_88);
  } while( true );
}



/* Entry: 10ab0bd84; end: 10ab0c03f;  */

undefined8 **
FUN_10ab0bd84(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined8 **ppuVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 *apuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab0c008);
    (*pcVar6)();
  }
  if (param_4 < 0x17) {
    uStack_b8 = CONCAT17((char)param_4,(undefined7)uStack_b8);
    ppppuVar7 = &pppuStack_c8;
    if (param_4 == 0) goto LAB_10ab0be20;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((param_4 | 7) + 1);
    }
    ppppuVar7 = ppppuVar3;
    __Znwm();
    uStack_b8 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_c8 = ppppuVar7;
    uStack_c0 = param_4;
  }
  _memmove(ppppuVar7,param_3,param_4);
LAB_10ab0be20:
  *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
  uVar2 = uStack_c0;
  ppppuVar3 = (undefined8 ****)pppuStack_c8;
  if (-1 < (long)uStack_b8) {
    uVar2 = uStack_b8 >> 0x38;
    ppppuVar3 = &pppuStack_c8;
  }
  FUN_10ab451f4(&lStack_b0,param_2,&UNK_10f68fc39,0x22,&UNK_10f68fc5c,0x1e,ppppuVar3,uVar2,1);
  if ((long)uStack_b8 < 0) {
    __ZdlPv(pppuStack_c8);
  }
  if (*(long **)(lStack_b0 + 0x228) == *(long **)(lStack_b0 + 0x230)) {
    lVar11 = 0;
  }
  else {
    lVar11 = **(long **)(lStack_b0 + 0x228);
  }
  lVar9 = *(long *)(lVar11 + 600);
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 6;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  func_0x00010a3326b8(lVar11 + 0x218,1);
  func_0x00010a332748(lVar11 + 0x219,0);
  func_0x00010a332700(lVar11 + 0x21a,0);
  func_0x00010a3325d0(lVar11,0);
  *(undefined4 *)(lVar11 + 0x21e) = 0x1010101;
  FUN_10a0e3500(&plStack_e0,param_5);
  FUN_10a0da1b8((long *)(lVar11 + 0x200),*(undefined8 *)(lVar11 + 0x208));
  *(long **)(lVar11 + 0x200) = plStack_e0;
  *(long *)(lVar11 + 0x208) = lStack_d8;
  *(long *)(lVar11 + 0x210) = lStack_d0;
  if (lStack_d0 == 0) {
    *(long *)(lVar11 + 0x200) = lVar11 + 0x208;
  }
  else {
    plStack_e0 = &lStack_d8;
    *(long *)(lStack_d8 + 0x10) = lVar11 + 0x208;
    lStack_d8 = 0;
    lStack_d0 = 0;
  }
  FUN_10a0da1b8(&plStack_e0,lStack_d8);
  param_1[1] = (long)ppuStack_a8;
  *param_1 = lStack_b0;
  if (ppuStack_a8 != (undefined8 **)0x0) {
    ppuVar8 = ppuStack_a8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar5) {
        *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a044790(auStack_a0);
  ppuVar8 = apuStack_98;
  (*(code *)*apuStack_98[0])();
  if (ppuStack_a8 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_a8 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = (undefined8 *)((long)puVar10 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_a8)[2])(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuStack_a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  if ((long)uStack_b8 < 0) {
    __ZdlPv(pppuStack_c8);
  }
  __Unwind_Resume(ppuVar8);
  func_0x00010ab147b0(ppuVar8 + 5,0);
  func_0x00010ab1476c(ppuVar8 + 4,0);
  func_0x00010ab1476c(ppuVar8 + 3,0);
  func_0x00010ab1476c(ppuVar8 + 2,0);
  func_0x00010ab1476c(ppuVar8 + 1,0);
  func_0x00010ab1476c(ppuVar8,0);
  return ppuVar8;
}



/* Entry: 10ab0c040; end: 10ab0c0a7;  */

long FUN_10ab0c040(long param_1)

{
  func_0x00010ab147b0(param_1 + 0x28,0);
  func_0x00010ab1476c(param_1 + 0x20,0);
  func_0x00010ab1476c(param_1 + 0x18,0);
  func_0x00010ab1476c(param_1 + 0x10,0);
  func_0x00010ab1476c(param_1 + 8,0);
  func_0x00010ab1476c(param_1,0);
  return param_1;
}



/* Entry: 10ab0c0a8; end: 10ab0c733;  */

void FUN_10ab0c0a8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  long *param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long *plStack_190;
  long lStack_188;
  long *plStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  undefined4 uStack_154;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long *plStack_68;
  
  FUN_10ab0c734(&lStack_168,param_3[3],param_4,param_5,param_6);
  FUN_10ab0c734(param_2,&lStack_178,param_3[4],param_4,param_5,param_6);
  FUN_10ab0c734(param_2,&lStack_188,*param_3,param_4,param_5,param_6);
  FUN_10ab0c734(param_2,&lStack_198,param_3[1],param_4,param_5,param_6);
  FUN_10ab0c734(param_2,&lStack_1a8,param_3[2],param_4,param_5,param_6);
  puVar9 = (undefined8 *)param_3[5];
  uVar8 = *puVar9;
  plVar3 = *(long **)(*param_5 + 0x268);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0xb0))();
    plVar4 = *(long **)(*param_5 + 0x268);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb8))();
      goto LAB_10ab0c1b4;
    }
  }
  plVar4 = (long *)0x0;
LAB_10ab0c1b4:
  FUN_10ab0f514(&lStack_1b8,uVar8,plVar3,plVar4);
  lVar5 = 0;
  FUN_10a2421c8();
  uVar8 = *(undefined8 *)(lVar5 + 0x208);
  plVar3 = *(long **)(lVar5 + 0x210);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_80 = 0x46e99c590c49dc7e;
  uStack_88 = 9;
  puStack_90 = &DAT_10f68fc99;
  uStack_a0 = 0xdd4a8a700c494f12;
  uStack_a8 = 8;
  puStack_b0 = &DAT_10f68fca3;
  uStack_c0 = 0x5f965db90c49df27;
  uStack_c8 = 9;
  puStack_d0 = &DAT_10f68fcac;
  uStack_e0 = 0x4678abc7ce169728;
  uStack_e8 = 0xc;
  puStack_f0 = &DAT_10f68fcb6;
  uStack_100 = 0x3370cbb7d956d664;
  uStack_108 = 0xc;
  puStack_110 = &DAT_10f68fcc3;
  uStack_128 = 7;
  puStack_130 = &DAT_10f68fcd0;
  uStack_120 = 0x1bd91870cd7651d9;
  lVar5 = param_4 + 0x20;
  uStack_70 = uVar8;
  plStack_68 = plVar3;
  FUN_10a5dfd94(lVar5,puVar9[1]);
  lVar6 = param_4 + 0x20;
  FUN_10a01eacc(lVar6,lVar5);
  func_0x000107c2b074(auStack_150,&puStack_90);
  if (lStack_168 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_168 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&puStack_b0);
  if (lStack_178 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_178 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&puStack_d0);
  if (lStack_188 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_188 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&puStack_f0);
  if (lStack_198 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_198 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&puStack_110);
  if (lStack_1a8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_1a8 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&PTR_DAT_110c46990);
  if (*param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*param_5 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_150,uVar7,&UNK_10e4ac8a8);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  func_0x000107c2b074(auStack_150,&puStack_130);
  uStack_154 = 0x3e4ccccd;
  FUN_10a01671c(lVar6,auStack_150,&uStack_154);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  FUN_10ab13c60(param_4,lVar5,uVar8,&lStack_1b8);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  puVar9 = (undefined8 *)0x1;
  FUN_10a088744(*(undefined8 *)(lStack_1b8 + 0x268));
  if (puVar9 == (undefined8 *)0x0) {
    lVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar9;
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  *param_1 = uVar8;
  param_1[1] = lVar5;
  if (plStack_1b0 != (long *)0x0) {
    plVar3 = plStack_1b0 + 1;
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
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b0);
    }
  }
  if (plStack_1a0 != (long *)0x0) {
    plVar3 = plStack_1a0 + 1;
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
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
    }
  }
  if (plStack_190 != (long *)0x0) {
    plVar3 = plStack_190 + 1;
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
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
    }
  }
  if (plStack_180 != (long *)0x0) {
    plVar3 = plStack_180 + 1;
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
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
    }
  }
  if (plStack_170 != (long *)0x0) {
    plVar3 = plStack_170 + 1;
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
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
    }
  }
  if (plStack_160 != (long *)0x0) {
    plVar3 = plStack_160 + 1;
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
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
    }
  }
  return;
}



/* Entry: 10ab0c734; end: 10ab0cad7;  */

void FUN_10ab0c734(undefined4 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  long *param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined4 uStack_64;
  
  uVar8 = *param_3;
  plVar3 = *(long **)(*param_6 + 0x268);
  uStack_64 = param_1;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
LAB_10ab0c7b0:
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0xb0))();
    plVar4 = *(long **)(*param_6 + 0x268);
    if (plVar4 == (long *)0x0) goto LAB_10ab0c7b0;
    (**(code **)(*plVar4 + 0xb8))();
  }
  FUN_10ab0f514(&lStack_78,uVar8,plVar3,plVar4);
  uVar8 = *param_3;
  plVar3 = *(long **)(*param_6 + 0x268);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0xb0))();
    plVar4 = *(long **)(*param_6 + 0x268);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb8))();
      goto LAB_10ab0c80c;
    }
  }
  plVar4 = (long *)0x0;
LAB_10ab0c80c:
  FUN_10ab0f514(param_2,uVar8,plVar3,plVar4);
  lVar5 = 0;
  FUN_10a2421c8();
  uVar8 = *(undefined8 *)(lVar5 + 0x208);
  plVar3 = *(long **)(lVar5 + 0x210);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_98 = 0xc;
  puStack_a0 = &DAT_10f65baf1;
  uStack_90 = 0x999aa7b071629166;
  uStack_b8 = 0x19;
  puStack_c0 = &DAT_10f640ba1;
  uStack_b0 = 0x30265f1b02be2681;
  lVar5 = param_4 + 0x20;
  uStack_88 = uVar8;
  plStack_80 = plVar3;
  FUN_10a5dfd94(lVar5,param_3[1]);
  lVar6 = param_4 + 0x20;
  FUN_10a01eacc(lVar6,lVar5);
  func_0x000107c2b074(auStack_e0,&PTR_DAT_110c46990);
  if (*param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*param_5 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_e0,uVar7,&UNK_10e4ac8a8);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  func_0x000107c2b074(auStack_e0,&puStack_a0);
  if (*param_6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*param_6 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_e0,uVar7,&UNK_10e4ac8a8);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  func_0x000107c2b074(auStack_e0,&puStack_c0);
  FUN_10a01671c(lVar6,auStack_e0,&uStack_64);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  FUN_10ab13c60(param_4,lVar5,uVar8,&lStack_78);
  lVar5 = param_4 + 0x20;
  FUN_10a5dfd94(lVar5,param_3[3]);
  lVar6 = param_4 + 0x20;
  FUN_10a01eacc(lVar6,lVar5);
  func_0x000107c2b074(auStack_e0,&PTR_DAT_110c46990);
  if (lStack_78 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lStack_78 + 0x268);
  }
  FUN_10a5e17a8(lVar6,auStack_e0,uVar7,&UNK_10e4ac8a8);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  FUN_10ab13c60(param_4,lVar5,uVar8,param_2);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_70 != (long *)0x0) {
    plVar3 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10ab0cad8; end: 10ab0d073;  */

undefined8 ** FUN_10ab0cad8(undefined8 **param_1)

{
  uint uVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  char cVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong uStack_160;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  char cStack_121;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined8 **ppuStack_108;
  long *plStack_100;
  undefined1 auStack_f8 [8];
  undefined8 *apuStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined8 **ppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_1 + 2;
  param_1[3] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar12 = param_1 + 0xb;
  param_1[0xc] = (undefined8 *)0x0;
  *ppuVar12 = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  ppuVar2 = param_1 + 8;
  ppuVar3 = param_1 + 0xe;
  param_1[5] = (undefined8 *)0x0;
  param_1[4] = (undefined8 *)0x0;
  param_1[1] = (undefined8 *)0x0;
  *param_1 = (undefined8 *)0x0;
  param_1[8] = (undefined8 *)0x0;
  param_1[7] = (undefined8 *)0x0;
  param_1[10] = (undefined8 *)0x0;
  param_1[9] = (undefined8 *)0x0;
  param_1[0xe] = (undefined8 *)0x0;
  param_1[0xd] = (undefined8 *)0x0;
  param_1[0x10] = (undefined8 *)0x0;
  param_1[0xf] = (undefined8 *)0x0;
  param_1[0x12] = (undefined8 *)0x0;
  param_1[0x11] = (undefined8 *)0x0;
  param_1[0x14] = (undefined8 *)0x0;
  param_1[0x13] = (undefined8 *)0x0;
  param_1[0x16] = (undefined8 *)0x0;
  param_1[0x15] = (undefined8 *)0x0;
  param_1[0x18] = (undefined8 *)0x0;
  param_1[0x17] = (undefined8 *)0x0;
  param_1[0x1a] = (undefined8 *)0x0;
  param_1[0x19] = (undefined8 *)0x0;
  param_1[0x1c] = (undefined8 *)0x0;
  param_1[0x1b] = (undefined8 *)0x0;
  FUN_10ab451f4(auStack_b8,0,&UNK_10f68f65a,0x1d,&UNK_10f68f678,0x19,&UNK_10f68f692,0x1d,1);
  func_0x00010a015c50(param_1,auStack_b8);
  plVar9 = (long *)(*param_1)[0x45];
  if (plVar9 == (long *)(*param_1)[0x46]) {
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar9;
  }
  lVar10 = *(long *)(lVar14 + 600);
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 6;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  func_0x00010a3326b8(lVar14 + 0x218,1);
  func_0x00010a332748(lVar14 + 0x219,0);
  func_0x00010a332700(lVar14 + 0x21a,0);
  func_0x00010a3325d0(lVar14,0);
  *(undefined4 *)(lVar14 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a063b58(&ppuStack_108,auStack_150,&uStack_138);
  FUN_10a02bf24(ppuVar8,&ppuStack_108);
  plVar9 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar4 = plStack_100 + 1;
    do {
      lVar10 = *plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uStack_138 = 0;
  FUN_10a17647c(&ppuStack_108,&uStack_138,ppuVar8);
  func_0x000107c2b074(&uStack_138,&PTR_DAT_110c46cb0);
  FUN_10a3368d0(lVar14,&uStack_138,&ppuStack_108,&UNK_10e4ac8a8,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uVar15 = 0;
  do {
    uStack_160 = uVar15;
    FUN_10a0ee900(&uStack_138,&UNK_10f68f6b0,0x19);
    puVar11 = param_1[9];
    if (puVar11 < param_1[10]) {
      puVar11[2] = CONCAT17(cStack_121,uStack_128);
      puVar11[3] = 0;
      puVar11[1] = CONCAT17(uStack_129,uStack_130);
      *puVar11 = uStack_138;
      uStack_130 = 0;
      uStack_129 = 0;
      uStack_128 = 0;
      cStack_121 = '\0';
      uStack_138 = 0;
      func_0x000107c2b080(puVar11);
      ppuVar8 = (undefined8 **)(puVar11 + 4);
    }
    else {
      ppuVar8 = ppuVar2;
      FUN_10ab14008(ppuVar2,&uStack_138);
    }
    param_1[9] = ppuVar8;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    uStack_160 = uVar15;
    FUN_10a0ee900(&uStack_138,&UNK_10f68f6ca,0x19);
    puVar11 = param_1[0xc];
    if (puVar11 < param_1[0xd]) {
      puVar11[2] = CONCAT17(cStack_121,uStack_128);
      puVar11[3] = 0;
      puVar11[1] = CONCAT17(uStack_129,uStack_130);
      *puVar11 = uStack_138;
      uStack_130 = 0;
      uStack_129 = 0;
      uStack_128 = 0;
      cStack_121 = '\0';
      uStack_138 = 0;
      func_0x000107c2b080(puVar11);
      ppuVar8 = (undefined8 **)(puVar11 + 4);
    }
    else {
      ppuVar8 = ppuVar12;
      FUN_10ab14008(ppuVar12,&uStack_138);
    }
    param_1[0xc] = ppuVar8;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    uVar1 = (int)uVar15 + 1;
    uVar15 = (ulong)uVar1;
  } while (uVar1 != 0x11);
  iVar13 = 0;
  do {
    __ZNSt3__19to_stringEj(auStack_150,iVar13);
    puVar11 = auStack_150;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar11,0,&UNK_10f68f6e4,0x1c);
    uStack_138 = *puVar11;
    uStack_118 = (undefined7)puVar11[1];
    uStack_111 = (undefined1)*(undefined8 *)((long)puVar11 + 0xf);
    uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar11 + 0xf) >> 8);
    cStack_121 = *(char *)((long)puVar11 + 0x17);
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    uStack_128 = uStack_110;
    uStack_130 = uStack_118;
    uStack_129 = uStack_111;
    uStack_120 = 0;
    func_0x000107c2b080(&uStack_138);
    puVar11 = param_1[0xf];
    if (puVar11 < param_1[0x10]) {
      puVar11[2] = CONCAT17(cStack_121,uStack_128);
      puVar11[1] = CONCAT17(uStack_129,uStack_130);
      *puVar11 = uStack_138;
      uStack_130 = 0;
      uStack_129 = 0;
      uStack_128 = 0;
      cStack_121 = '\0';
      uStack_138 = 0;
      puVar11[3] = uStack_120;
      param_1[0xf] = puVar11 + 4;
    }
    else {
      ppuVar8 = ppuVar3;
      FUN_10ab1411c(ppuVar3,&uStack_138);
      param_1[0xf] = ppuVar8;
      if (cStack_121 < '\0') {
        __ZdlPv(uStack_138);
      }
    }
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x12);
  FUN_10a044790(auStack_f8);
  (*(code *)*apuStack_f0[0])(apuStack_f0);
  if (plStack_100 != (long *)0x0) {
    plVar9 = plStack_100 + 1;
    do {
      lVar14 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_100);
    }
  }
  FUN_10a044790(auStack_a8);
  ppuVar8 = apuStack_a0;
  (*(code *)*apuStack_a0[0])();
  if (ppuStack_b0 != (undefined8 **)0x0) {
    ppuVar5 = ppuStack_b0 + 1;
    do {
      puVar11 = *ppuVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar7) {
        *ppuVar5 = (undefined8 *)((long)puVar11 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar11 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_b0)[2])(ppuStack_b0);
      ppuVar8 = ppuStack_b0;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  func_0x00010a015cec(&ppuStack_108);
  func_0x00010a015cb4(auStack_b8);
  if (param_1[0x1a] != (undefined8 *)0x0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != (undefined8 *)0x0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x14] != (undefined8 *)0x0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0x11] != (undefined8 *)0x0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  ppuStack_108 = ppuVar3;
  FUN_10a044868(&ppuStack_108);
  ppuStack_108 = ppuVar12;
  FUN_10a044868(&ppuStack_108);
  ppuStack_108 = ppuVar2;
  FUN_10a044868(&ppuStack_108);
  func_0x00010a061678(ppuStack_b0);
  FUN_10a0617bc(param_1);
  __Unwind_Resume();
  ppuStack_180 = ppuStack_b0;
  ppuStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  pcStack_168 = FUN_10ab0d074;
  if (ppuVar8[0x1a] != (undefined8 *)0x0) {
    ppuVar8[0x1b] = ppuVar8[0x1a];
    __ZdlPv();
  }
  if (ppuVar8[0x17] != (undefined8 *)0x0) {
    ppuVar8[0x18] = ppuVar8[0x17];
    __ZdlPv();
  }
  if (ppuVar8[0x14] != (undefined8 *)0x0) {
    ppuVar8[0x15] = ppuVar8[0x14];
    __ZdlPv();
  }
  if (ppuVar8[0x11] != (undefined8 *)0x0) {
    ppuVar8[0x12] = ppuVar8[0x11];
    __ZdlPv();
  }
  ppuStack_188 = ppuVar8 + 0xe;
  FUN_10a044868(&ppuStack_188);
  ppuStack_188 = ppuVar8 + 0xb;
  FUN_10a044868(&ppuStack_188);
  ppuStack_188 = ppuVar8 + 8;
  FUN_10a044868(&ppuStack_188);
  func_0x00010a061678(ppuVar8 + 2);
  FUN_10a0617bc(ppuVar8);
  return ppuVar8;
}



/* Entry: 10ab0d074; end: 10ab0d117;  */

void FUN_10ab0d074(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x70;
  FUN_10a044868(&lStack_28);
  lStack_28 = param_1 + 0x58;
  FUN_10a044868(&lStack_28);
  lStack_28 = param_1 + 0x40;
  FUN_10a044868(&lStack_28);
  func_0x00010a061678(param_1 + 0x10);
  FUN_10a0617bc(param_1);
  return;
}



/* Entry: 10ab0d118; end: 10ab0d5eb;  */

void FUN_10ab0d118(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6,undefined8 param_7,undefined8 *param_8,
                  int param_9,undefined8 param_10,int param_11)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_11 == 0) {
    if ((*(float *)(param_5 + 4) == param_1) && (*(float *)((long)param_5 + 0x24) == param_2)) {
      iVar1 = *(int *)(param_5 + 7);
      plVar3 = (long *)*param_8;
      (**(code **)(*plVar3 + 0x28))();
      if (iVar1 == (int)plVar3) {
        iVar1 = *(int *)((long)param_5 + 0x3c);
        plVar3 = (long *)*param_8;
        (**(code **)(*plVar3 + 0x30))();
        if ((iVar1 == (int)plVar3) && (*(char *)((long)param_5 + 0x34) == '\0')) goto LAB_10ab0d3b0;
      }
    }
    *(float *)(param_5 + 4) = param_1;
    *(float *)((long)param_5 + 0x24) = param_2;
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    *(int *)(param_5 + 7) = (int)plVar3;
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x30))();
    *(int *)((long)param_5 + 0x3c) = (int)plVar3;
    *(undefined1 *)((long)param_5 + 0x34) = 0;
    uVar9 = *(undefined4 *)(param_5 + 4);
    uVar10 = *(undefined4 *)((long)param_5 + 0x24);
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    plVar4 = (long *)*param_8;
    (**(code **)(*plVar4 + 0x30))();
    FUN_10ab0d7c0(uVar9,uVar10,plVar3,plVar4,0,param_5 + 0x11,param_5 + 0x14);
    uVar9 = *(undefined4 *)(param_5 + 4);
    uVar10 = *(undefined4 *)((long)param_5 + 0x24);
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    plVar4 = (long *)*param_8;
    (**(code **)(*plVar4 + 0x30))();
    FUN_10ab0d7c0(uVar9,uVar10,plVar3,plVar4,1,param_5 + 0x17,param_5 + 0x1a);
  }
  else {
    if (((*(int *)(param_5 + 5) == (int)param_10) &&
        (*(float *)((long)param_5 + 0x2c) == (float)param_3)) &&
       (*(float *)(param_5 + 6) == (float)param_4)) {
      iVar1 = *(int *)(param_5 + 7);
      plVar3 = (long *)*param_8;
      (**(code **)(*plVar3 + 0x28))();
      if (iVar1 == (int)plVar3) {
        iVar1 = *(int *)((long)param_5 + 0x3c);
        plVar3 = (long *)*param_8;
        (**(code **)(*plVar3 + 0x30))();
        if ((iVar1 == (int)plVar3) && ((*(byte *)((long)param_5 + 0x34) & 1) != 0))
        goto LAB_10ab0d3b0;
      }
    }
    *(int *)(param_5 + 5) = (int)param_10;
    *(float *)((long)param_5 + 0x2c) = (float)param_3;
    *(float *)(param_5 + 6) = (float)param_4;
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    *(int *)(param_5 + 7) = (int)plVar3;
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x30))();
    *(int *)((long)param_5 + 0x3c) = (int)plVar3;
    *(char *)((long)param_5 + 0x34) = (char)param_11;
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    plVar4 = (long *)*param_8;
    (**(code **)(*plVar4 + 0x30))();
    FUN_10ab0d5ec(param_3,param_4,param_10,plVar3,plVar4,0,param_5 + 0x11,param_5 + 0x14);
    plVar3 = (long *)*param_8;
    (**(code **)(*plVar3 + 0x28))();
    plVar4 = (long *)*param_8;
    (**(code **)(*plVar4 + 0x30))();
    FUN_10ab0d5ec(param_3,param_4,param_10,plVar3,plVar4,1,param_5 + 0x17,param_5 + 0x1a);
  }
LAB_10ab0d3b0:
  uStack_80 = 0;
  uStack_78 = 0;
  uVar5 = (long)(param_5[0x12] - param_5[0x11]) >> 2;
  puStack_88 = &uStack_80;
  if (uVar5 < (ulong)((long)(param_5[0xf] - param_5[0xe]) >> 5)) {
    lVar6 = param_5[0xe] + uVar5 * 0x20;
    FUN_10a047898(&puStack_88,lVar6,lVar6);
    if (param_9 != 0) {
      uStack_98 = 0x1d;
      puStack_a0 = &DAT_10f68f701;
      uStack_90 = 0xd10da28bcf2838b1;
      func_0x000107c2b074(&uStack_e0,&puStack_a0);
      FUN_10a20e230(&puStack_88,&uStack_e0,&uStack_e0);
      if (uStack_cc._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_dc,uStack_e0));
      }
    }
    plVar3 = param_6 + 4;
    FUN_10a5dfd94(plVar3,*param_5);
    plVar4 = param_6 + 4;
    FUN_10a01eacc(plVar4,plVar3);
    if ((undefined8 **)plVar4[0x2b] != &puStack_88) {
      FUN_10a1f503c((undefined8 **)plVar4[0x2b],puStack_88,&uStack_80);
    }
    FUN_10a1db4cc(param_5[2],param_8);
    lVar6 = param_5[0x11];
    if (param_5[0x12] != lVar6) {
      lVar7 = 0;
      lVar8 = 0;
      uVar5 = 0;
      do {
        if ((ulong)((long)(param_5[9] - param_5[8]) >> 5) <= uVar5) goto LAB_10ab0d5a8;
        FUN_10a01671c(plVar4,param_5[8] + lVar8,lVar6 + lVar7);
        if (((ulong)((long)(param_5[0xc] - param_5[0xb]) >> 5) <= uVar5) ||
           ((ulong)((long)(param_5[0x15] - param_5[0x14]) >> 2) <= uVar5)) goto LAB_10ab0d5a8;
        FUN_10a01671c(plVar4,param_5[0xb] + lVar8,param_5[0x14] + lVar7);
        uVar5 = uVar5 + 1;
        lVar6 = param_5[0x11];
        lVar8 = lVar8 + 0x20;
        lVar7 = lVar7 + 4;
      } while (uVar5 < (ulong)(param_5[0x12] - lVar6 >> 2));
    }
    uStack_e0 = 0x3f800000;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_cc = 0x3f800000;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0x3f800000;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_a4 = 0x3f800000;
    (**(code **)(*param_6 + 0x58))(param_6,param_7,plVar3,&uStack_e0,3);
    lVar6 = param_5[2];
    FUN_10a18cbd8(lVar6 + 0x288);
    FUN_10a1da3a4(lVar6,0,0,0,4,0,0,0);
    FUN_10a0da1b8(&puStack_88,uStack_80);
    return;
  }
LAB_10ab0d5a8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab0d5ac);
  (*pcVar2)();
}



/* Entry: 10ab0d5ec; end: 10ab0d7bf;  */

long *******
FUN_10ab0d5ec(float param_1,float param_2,ulong param_3,uint param_4,uint param_5,long *param_6,
             long *param_7,long *param_8)

{
  uint uVar1;
  long *******ppppppplVar2;
  undefined1 **ppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long **pplVar16;
  undefined8 *******pppppppuVar17;
  long *******ppppppplVar18;
  int iVar19;
  long *plVar21;
  long lVar22;
  long ****pppplVar23;
  long ******pppppplVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  long *******ppppppplVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  long ***ppplVar33;
  ulong uVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong unaff_d9;
  ulong uVar40;
  float fVar41;
  float fVar43;
  ulong unaff_d12;
  ulong unaff_d13;
  float fVar44;
  ulong unaff_d14;
  undefined8 unaff_d15;
  long ******pppppplStack_478;
  long ******pppppplStack_470;
  long ******pppppplStack_468;
  undefined1 ****ppppuStack_460;
  code *pcStack_458;
  undefined1 *puStack_450;
  ulong uStack_448;
  byte bStack_439;
  undefined8 ******ppppppuStack_430;
  long ****pppplStack_428;
  undefined8 uStack_420;
  undefined8 ******ppppppuStack_418;
  ulong uStack_410;
  byte bStack_401;
  long ******pppppplStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *aplStack_3c0 [3];
  long ******pppppplStack_3a8;
  undefined1 auStack_3a0 [7];
  char cStack_399;
  long *****appppplStack_398 [7];
  long lStack_360;
  undefined1 ***pppuStack_300;
  code *pcStack_2f8;
  long ******pppppplStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [8];
  long lStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long *plStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  float afStack_288 [9];
  float afStack_264 [9];
  float afStack_240 [17];
  float afStack_1fc [17];
  long lStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  float afStack_120 [17];
  float afStack_dc [17];
  long lStack_98;
  long lVar20;
  ulong uVar42;
  
  uVar13 = (uint)afStack_120;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar30 = (uint)param_3;
  if (0x20 < uVar30) {
    uVar30 = 0x21;
  }
  if (param_2 <= 1.0) {
    param_2 = 1.0;
  }
  uVar40 = (ulong)(uint)param_2;
  fVar39 = (float)(uVar30 >> 1);
  fVar41 = param_2 * fVar39;
  uVar42 = (ulong)(uint)fVar41;
  uVar32 = 0;
  plVar21 = param_7;
  if (0.0 <= fVar41) {
    uVar34 = 0;
    if (param_1 <= 0.1) {
      param_1 = 0.1;
    }
    fVar43 = param_1 * param_1 + param_1 * param_1;
    unaff_d12 = (ulong)(uint)fVar43;
    if ((int)param_6 == 0) {
      param_5 = param_4;
    }
    unaff_d13 = (ulong)(uint)(float)param_5;
    fVar44 = 1.0 / SQRT(fVar43 * 3.1415927);
    unaff_d14 = (ulong)(uint)fVar44;
    unaff_d15 = 0x40000000;
    unaff_d9 = 0;
    do {
      fVar38 = (float)unaff_d9;
      fVar37 = -(fVar38 * fVar38) / fVar43;
      _expf();
      fVar37 = fVar44 * fVar37;
      fVar39 = 2.0;
      if (fVar38 <= 0.0) {
        fVar39 = 1.0;
      }
      uVar32 = (ulong)(uint)((float)uVar32 + fVar39 * fVar37);
      afStack_dc[uVar34] = fVar37;
      afStack_120[uVar34] = fVar38 / (float)param_5;
      uVar34 = (ulong)((int)uVar34 + 1);
      unaff_d9 = (ulong)(uint)(param_2 + fVar38);
    } while (param_2 + fVar38 <= fVar41);
  }
  lVar22 = 0;
  uVar31 = (ulong)((uVar30 >> 1) + 1);
  uVar34 = param_3 & 0xffffffff;
  if (0x20 < uVar34) {
    uVar34 = 0x21;
  }
  do {
    fVar41 = *(float *)((long)afStack_dc + lVar22) / (float)uVar32;
    *(float *)((long)afStack_dc + lVar22) = fVar41;
    lVar22 = lVar22 + 4;
  } while ((uVar34 & 0x3e) * 2 + 4 != lVar22);
  func_0x00010742a308(param_7,uVar31);
  func_0x00010742a308(param_8,uVar31);
  if (param_7[1] == *param_7) {
LAB_10ab0d7b8:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab0d7bc);
    (*pcVar10)();
  }
  lVar22 = uVar31 << 2;
  _memcpy(*param_7,afStack_dc,lVar22);
  ppppppplVar14 = (long *******)*param_8;
  if ((long *******)param_8[1] == ppppppplVar14) goto LAB_10ab0d7b8;
  lVar20 = lVar22;
  _memcpy();
  iVar19 = (int)lVar20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return ppppppplVar14;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10ab0d7c0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar11 = false;
  bVar12 = true;
  if (1.0 <= fVar41) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar41)) {
      bVar11 = fVar41 == 16.0;
      bVar12 = 16.0 <= fVar41;
    }
  }
  uStack_1b0 = unaff_d15;
  uStack_1a8 = unaff_d14;
  uStack_1a0 = unaff_d13;
  uStack_198 = unaff_d12;
  uStack_190 = uVar42;
  uStack_188 = uVar40;
  uStack_180 = unaff_d9;
  uStack_178 = uVar32;
  puStack_130 = &stack0xfffffffffffffff0;
  if (bVar12 && !bVar11) {
    FUN_10a00946c(&UNK_10f68f71f);
LAB_10ab0daac:
    FUN_10a00946c(&UNK_10f68f75f);
  }
  else {
    bVar11 = false;
    bVar12 = true;
    if (0.0 <= fVar39) {
      bVar11 = false;
      bVar12 = true;
      if (!NAN(fVar39)) {
        bVar11 = fVar39 == 6.0;
        bVar12 = 6.0 <= fVar39;
      }
    }
    if (bVar12 && !bVar11) goto LAB_10ab0daac;
    if (1.0 <= fVar41) {
      uVar32 = 0;
      uVar30 = (uint)((float)(int)fVar41 * 2.0 + 1.0);
      fVar43 = fVar41 * 0.0625 * fVar41 * 0.0625 * 5.0 + 1.0;
      if (1.0 <= fVar39) {
        fVar43 = fVar39;
      }
      fVar43 = fVar43 * SQRT((fVar41 * fVar41) / (float)(uVar30 + 1));
      fVar43 = fVar43 * fVar43;
      fVar43 = fVar43 + fVar43;
      if (iVar19 == 0) {
        uVar13 = (uint)ppppppplVar14;
      }
      fVar39 = 0.0;
      fVar44 = 0.0;
      do {
        fVar38 = -(fVar44 * fVar44) / fVar43;
        _expf();
        fVar38 = (1.0 / SQRT(fVar43 * 3.1415927)) * fVar38;
        fVar37 = 2.0;
        if (fVar44 <= 0.0) {
          fVar37 = 1.0;
        }
        fVar39 = fVar39 + fVar37 * fVar38;
        afStack_1fc[uVar32] = fVar38;
        afStack_240[uVar32] = fVar44 / (float)uVar13;
        uVar32 = (ulong)((int)uVar32 + 1);
        fVar44 = fVar44 + 1.0;
      } while (fVar44 <= fVar41);
      lVar22 = 0;
      uVar6 = uVar30 >> 1;
      uVar13 = uVar6 + 1;
      do {
        *(float *)((long)afStack_1fc + lVar22) = *(float *)((long)afStack_1fc + lVar22) / fVar39;
        lVar22 = lVar22 + 4;
      } while (((ulong)uVar30 & 0xfffffffe) * 2 + 4 != lVar22);
      bVar11 = 5 < uVar30;
      bVar12 = (uVar30 & 3) == 1;
      uVar31 = (ulong)(bVar11 || bVar12);
      uVar1 = uVar13;
      if (bVar11 || bVar12) {
        afStack_264[0] = afStack_1fc[0];
        afStack_288[0] = afStack_240[0];
        uVar8 = uVar13 >> 1;
        uVar1 = uVar8 + 1;
        if (((uVar30 & 3) != 1) && (5 < uVar30)) {
          afStack_264[uVar8] = afStack_1fc[uVar6];
          afStack_288[uVar8] = afStack_240[uVar6];
          uVar13 = uVar6;
        }
        if (1 < uVar13) {
          lVar22 = (ulong)(uVar13 - 2 >> 1) + 1;
          pfVar25 = afStack_288;
          pfVar26 = afStack_264;
          pfVar27 = afStack_240;
          pfVar28 = afStack_1fc;
          do {
            pfVar28 = pfVar28 + 2;
            pfVar27 = pfVar27 + 2;
            pfVar26 = pfVar26 + 1;
            pfVar25 = pfVar25 + 1;
            fVar39 = pfVar28[-1];
            fVar41 = *pfVar28;
            fVar43 = fVar39 + fVar41;
            *pfVar26 = fVar43;
            *pfVar25 = (fVar41 * *pfVar27 + fVar39 * pfVar27[-1]) / fVar43;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      param_3 = (ulong)uVar1;
      func_0x00010742a308(param_6,param_3);
      func_0x00010742a308(plVar21,param_3);
      if (param_6[1] == *param_6) {
LAB_10ab0da9c:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab0daa0);
        (*pcVar10)();
      }
      pfVar25 = afStack_264;
      if (!bVar11 && !bVar12) {
        pfVar25 = afStack_1fc;
      }
      lVar22 = param_3 << 2;
      _memcpy(*param_6,pfVar25,lVar22);
      ppppppplVar14 = (long *******)*plVar21;
      if ((long *******)plVar21[1] == ppppppplVar14) goto LAB_10ab0da9c;
      pfVar25 = afStack_288;
      if (!bVar11 && !bVar12) {
        pfVar25 = afStack_240;
      }
      _memcpy(ppppppplVar14,pfVar25,lVar22);
      param_8 = plVar21;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
        return ppppppplVar14;
      }
      goto LAB_10ab0dac4;
    }
  }
  ppppppplVar14 = (long *******)&UNK_10f68f7a2;
  FUN_10a00946c();
LAB_10ab0dac4:
  ___stack_chk_fail();
  pcStack_298 = FUN_10ab0dac8;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *ppppppplVar14 = (long ******)&PTR_DAT_110c46938;
  ppppppplVar29 = ppppppplVar14 + 1;
  *ppppppplVar29 = (long ******)0x0;
  uStack_2e8 = 0x1b;
  pppppplStack_2f0 = (long ******)&DAT_10f68f7e1;
  uStack_2d8 = 0x1b;
  puStack_2e0 = &DAT_10f68f7e1;
  ppppppplVar14[2] = (long ******)0x0;
  ppppppplVar14[3] = (long ******)0x0;
  uStack_2c0 = uVar31;
  uStack_2b8 = param_3;
  lStack_2b0 = lVar22;
  plStack_2a8 = param_8;
  ppuStack_2a0 = &puStack_130;
  FUN_10aad6ec8(ppppppplVar29,&pppppplStack_2f0,auStack_2d0,2);
  *(undefined4 *)(ppppppplVar14 + 4) = 0x3c23d70a;
  ppppppplVar14[5] = (long ******)0x0;
  ppppppplVar14[6] = (long ******)0x0;
  ppppppplVar14[7] = (long ******)0x0;
  ppppppplVar15 = ppppppplVar14;
  FUN_10ab0dbb8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppppppplVar14;
  }
  ___stack_chk_fail();
  pppppplStack_2f0 = (long ******)(ppppppplVar14 + 5);
  FUN_10a0d4a18(&pppppplStack_2f0);
  if (*ppppppplVar29 != (long ******)0x0) {
    ppppppplVar14[2] = *ppppppplVar29;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_2f8 = FUN_10ab0dbb8;
  lStack_360 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_3c0[1] = (long *)0x3f800000;
  aplStack_3c0[0] = (long *)0x3f80000000000000;
  uStack_3d8 = 10;
  puStack_3e0 = &DAT_10f68f7fd;
  uStack_3d0 = 0x3527afb6cca663d5;
  ppppppplVar14 = ppppppplVar15;
  pppuStack_300 = &ppuStack_2a0;
  if (ppppppplVar15[2] != ppppppplVar15[1]) {
    ppppppplVar29 = (long *******)0x0;
    do {
      func_0x000107c2b054(aplStack_3c0 + 2,&UNK_10f68f808);
      __ZNSt3__19to_stringEm(&puStack_450,ppppppplVar29);
      uVar32 = uStack_448;
      ppuVar3 = (undefined1 **)puStack_450;
      if (-1 < (char)bStack_439) {
        uVar32 = (ulong)bStack_439;
        ppuVar3 = &puStack_450;
      }
      pplVar16 = aplStack_3c0 + 2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar16,ppuVar3,uVar32);
      plStack_3f8 = pplVar16[1];
      pppppplStack_400 = (long ******)*pplVar16;
      plStack_3f0 = pplVar16[2];
      pplVar16[1] = (long *)0x0;
      pplVar16[2] = (long *)0x0;
      *pplVar16 = (long *)0x0;
      if ((char)bStack_439 < '\0') {
        __ZdlPv(puStack_450);
      }
      if (cStack_399 < '\0') {
        __ZdlPv(aplStack_3c0[2]);
      }
      plVar9 = plStack_3f0;
      plVar21 = plStack_3f8;
      if (-1 < (long)plStack_3f0) {
        plVar21 = (long *)((ulong)plStack_3f0 >> 0x38);
      }
      FUN_10a003c90(&puStack_450,plVar21 + 1,&ppppppuStack_418);
      ppuVar3 = (undefined1 **)puStack_450;
      if (-1 < (char)bStack_439) {
        ppuVar3 = &puStack_450;
      }
      if (plVar21 != (long *)0x0) {
        ppppppplVar14 = (long *******)pppppplStack_400;
        if (-1 < (long)plVar9) {
          ppppppplVar14 = &pppppplStack_400;
        }
        _memmove(ppuVar3,ppppppplVar14,plVar21);
      }
      *(undefined8 *)((long)ppuVar3 + (long)plVar21) = 0x6c6169726574614d;
      *(undefined1 *)((undefined8 *)((long)ppuVar3 + (long)plVar21) + 1) = 0;
      uVar32 = uStack_448;
      ppuVar3 = (undefined1 **)puStack_450;
      if (-1 < (char)bStack_439) {
        uVar32 = (ulong)bStack_439;
        ppuVar3 = &puStack_450;
      }
      FUN_10a003c90(&ppppppuStack_418,(long)plVar21 + 4,&ppppppuStack_430);
      pppppppuVar4 = (undefined8 *******)ppppppuStack_418;
      if (-1 < (char)bStack_401) {
        pppppppuVar4 = &ppppppuStack_418;
      }
      if (plVar21 != (long *)0x0) {
        ppppppplVar14 = (long *******)pppppplStack_400;
        if (-1 < (long)plVar9) {
          ppppppplVar14 = &pppppplStack_400;
        }
        _memmove(pppppppuVar4,ppppppplVar14,plVar21);
      }
      *(undefined4 *)((long)pppppppuVar4 + (long)plVar21) = 0x73736150;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar4 + (long)plVar21) + 1) = 0;
      uVar40 = uStack_410;
      pppppppuVar4 = (undefined8 *******)ppppppuStack_418;
      if (-1 < (char)bStack_401) {
        uVar40 = (ulong)bStack_401;
        pppppppuVar4 = &ppppppuStack_418;
      }
      if ((long *******)((long)ppppppplVar15[2] - (long)ppppppplVar15[1] >> 4) <= ppppppplVar29)
      goto LAB_10ab0dfac;
      pppppplVar24 = ppppppplVar15[1] + (long)ppppppplVar29 * 2;
      ppppplVar35 = pppppplVar24[1];
      if ((long *****)0x7ffffffffffffff7 < ppppplVar35) {
        func_0x000109ffde50();
        goto LAB_10ab0dfac;
      }
      ppppplVar36 = *pppppplVar24;
      if (ppppplVar35 < (long *****)0x17) {
        uStack_420 = CONCAT17((char)ppppplVar35,(undefined7)uStack_420);
        pppppppuVar17 = &ppppppuStack_430;
        if (ppppplVar35 != (long *****)0x0) goto LAB_10ab0ddf8;
      }
      else {
        pppppppuVar5 = (undefined8 *******)0x19;
        if (((ulong)ppppplVar35 | 7) != 0x17) {
          pppppppuVar5 = (undefined8 *******)(((ulong)ppppplVar35 | 7) + 1);
        }
        pppppppuVar17 = pppppppuVar5;
        __Znwm();
        uStack_420 = (ulong)pppppppuVar5 | 0x8000000000000000;
        ppppppuStack_430 = pppppppuVar17;
        pppplStack_428 = (long ****)ppppplVar35;
LAB_10ab0ddf8:
        _memmove(pppppppuVar17,ppppplVar36,ppppplVar35);
      }
      *(undefined1 *)((long)pppppppuVar17 + (long)ppppplVar35) = 0;
      ppppplVar35 = (long *****)pppplStack_428;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_430;
      if (-1 < (long)uStack_420) {
        ppppplVar35 = (long *****)(uStack_420 >> 0x38);
        pppppppuVar5 = &ppppppuStack_430;
      }
      FUN_10ab451f4(aplStack_3c0 + 2,0,ppuVar3,uVar32,pppppppuVar4,uVar40,pppppppuVar5,ppppplVar35,1
                   );
      if ((long)uStack_420 < 0) {
        __ZdlPv(ppppppuStack_430);
      }
      if ((char)bStack_401 < '\0') {
        __ZdlPv(ppppppuStack_418);
      }
      if ((char)bStack_439 < '\0') {
        __ZdlPv(puStack_450);
      }
      func_0x00010a2f4be0(ppppppplVar15 + 5,aplStack_3c0 + 2);
      if (ppppppplVar15[5] == ppppppplVar15[6]) {
LAB_10ab0dfac:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab0dfb0);
        (*pcVar10)();
      }
      ppppplVar35 = ppppppplVar15[6][-2];
      pppplVar23 = ppppplVar35[0x45];
      if (pppplVar23 == ppppplVar35[0x46]) {
        ppplVar33 = (long ***)0x0;
      }
      else {
        ppplVar33 = *pppplVar23;
      }
      FUN_10ab0e0d4(ppplVar33);
      func_0x000107c2b074(&puStack_450,&puStack_3e0);
      if (ppppppplVar29 == (long *******)0x2) goto LAB_10ab0dfac;
      FUN_10a0da430(ppplVar33,&puStack_450,aplStack_3c0 + (long)ppppppplVar29);
      if ((char)bStack_439 < '\0') {
        __ZdlPv(puStack_450);
      }
      FUN_10a044790(auStack_3a0);
      ppppppplVar14 = (long *******)appppplStack_398;
      (*(code *)*appppplStack_398[0])();
      ppppppplVar18 = (long *******)pppppplStack_3a8;
      if ((long *******)pppppplStack_3a8 != (long *******)0x0) {
        ppppppplVar2 = (long *******)(pppppplStack_3a8 + 1);
        do {
          pppppplVar24 = *ppppppplVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
          if (bVar11) {
            *ppppppplVar2 = (long ******)((long)pppppplVar24 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar24 == (long ******)0x0) {
          (*(code *)(*pppppplStack_3a8)[2])(pppppplStack_3a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar14 = ppppppplVar18;
        }
      }
      if ((long)plStack_3f0 < 0) {
        ppppppplVar14 = (long *******)pppppplStack_400;
        __ZdlPv();
      }
      ppppppplVar29 = (long *******)((long)ppppppplVar29 + 1);
    } while (ppppppplVar29 < (long *******)((long)ppppppplVar15[2] - (long)ppppppplVar15[1] >> 4));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_360) {
    ___stack_chk_fail();
    if ((char)bStack_401 < '\0') {
      __ZdlPv(ppppppuStack_418);
    }
    if ((char)bStack_439 < '\0') {
      __ZdlPv(puStack_450);
    }
    if ((long)plStack_3f0 < 0) {
      __ZdlPv(pppppplStack_400);
    }
    ppppppplVar15 = ppppppplVar14;
    __Unwind_Resume();
    pcStack_458 = FUN_10ab0e080;
    *ppppppplVar15 = (long ******)&PTR_DAT_110c46938;
    pppppplStack_478 = (long ******)(ppppppplVar15 + 5);
    pppppplStack_470 = (long ******)ppppppplVar29;
    pppppplStack_468 = (long ******)ppppppplVar14;
    ppppuStack_460 = &pppuStack_300;
    FUN_10a0d4a18(&pppppplStack_478);
    if (ppppppplVar15[1] != (long ******)0x0) {
      ppppppplVar15[2] = ppppppplVar15[1];
      __ZdlPv();
    }
    return ppppppplVar15;
  }
  return ppppppplVar14;
}



/* Entry: 10ab0d7c0; end: 10ab0dac7;  */

long *******
FUN_10ab0d7c0(float param_1,float param_2,uint param_3,uint param_4,int param_5,long *param_6,
             undefined8 *param_7)

{
  uint uVar1;
  long *******ppppppplVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  uint uVar8;
  char cVar9;
  float fVar10;
  uint uVar11;
  long *plVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long **pplVar18;
  undefined8 *******pppppppuVar19;
  long *******ppppppplVar20;
  long lVar21;
  long ****pppplVar22;
  uint uVar23;
  long ******pppppplVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *******ppppppplVar29;
  uint uVar30;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar31;
  long ***ppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long ******pppppplStack_358;
  long ******pppppplStack_350;
  long ******pppppplStack_348;
  undefined1 ***pppuStack_340;
  code *pcStack_338;
  undefined1 *puStack_330;
  ulong uStack_328;
  byte bStack_319;
  undefined8 ******ppppppuStack_310;
  long ****pppplStack_308;
  undefined8 uStack_300;
  undefined8 ******ppppppuStack_2f8;
  ulong uStack_2f0;
  byte bStack_2e1;
  long ******pppppplStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *aplStack_2a0 [3];
  long ******pppppplStack_288;
  undefined1 auStack_280 [7];
  char cStack_279;
  long *****appppplStack_278 [7];
  long lStack_240;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  long ******pppppplStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  float afStack_168 [9];
  float afStack_144 [9];
  float afStack_120 [17];
  float afStack_dc [17];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar14 = false;
  bVar15 = true;
  if (1.0 <= param_1) {
    bVar14 = false;
    bVar15 = true;
    if (!NAN(param_1)) {
      bVar14 = param_1 == 16.0;
      bVar15 = 16.0 <= param_1;
    }
  }
  if (bVar15 && !bVar14) {
    FUN_10a00946c(&UNK_10f68f71f);
LAB_10ab0daac:
    FUN_10a00946c(&UNK_10f68f75f);
  }
  else {
    bVar14 = false;
    bVar15 = true;
    if (0.0 <= param_2) {
      bVar14 = false;
      bVar15 = true;
      if (!NAN(param_2)) {
        bVar14 = param_2 == 6.0;
        bVar15 = 6.0 <= param_2;
      }
    }
    if (bVar15 && !bVar14) goto LAB_10ab0daac;
    if (1.0 <= param_1) {
      uVar31 = 0;
      uVar30 = (uint)((float)(int)param_1 * 2.0 + 1.0);
      fVar35 = param_1 * 0.0625 * param_1 * 0.0625 * 5.0 + 1.0;
      if (1.0 <= param_2) {
        fVar35 = param_2;
      }
      fVar35 = fVar35 * SQRT((param_1 * param_1) / (float)(uVar30 + 1));
      fVar35 = fVar35 * fVar35;
      fVar35 = fVar35 + fVar35;
      if (param_5 == 0) {
        param_4 = param_3;
      }
      fVar37 = 0.0;
      fVar38 = 0.0;
      do {
        fVar36 = -(fVar38 * fVar38) / fVar35;
        _expf();
        fVar36 = (1.0 / SQRT(fVar35 * 3.1415927)) * fVar36;
        fVar10 = 2.0;
        if (fVar38 <= 0.0) {
          fVar10 = 1.0;
        }
        fVar37 = fVar37 + fVar10 * fVar36;
        afStack_dc[uVar31] = fVar36;
        afStack_120[uVar31] = fVar38 / (float)param_4;
        uVar31 = (ulong)((int)uVar31 + 1);
        fVar38 = fVar38 + 1.0;
      } while (fVar38 <= param_1);
      lVar21 = 0;
      uVar8 = uVar30 >> 1;
      uVar23 = uVar8 + 1;
      do {
        *(float *)((long)afStack_dc + lVar21) = *(float *)((long)afStack_dc + lVar21) / fVar37;
        lVar21 = lVar21 + 4;
      } while (((ulong)uVar30 & 0xfffffffe) * 2 + 4 != lVar21);
      bVar14 = 5 < uVar30;
      bVar15 = (uVar30 & 3) == 1;
      unaff_x22 = (ulong)(bVar14 || bVar15);
      uVar1 = uVar23;
      if (bVar14 || bVar15) {
        afStack_144[0] = afStack_dc[0];
        afStack_168[0] = afStack_120[0];
        uVar11 = uVar23 >> 1;
        uVar1 = uVar11 + 1;
        if (((uVar30 & 3) != 1) && (5 < uVar30)) {
          afStack_144[uVar11] = afStack_dc[uVar8];
          afStack_168[uVar11] = afStack_120[uVar8];
          uVar23 = uVar8;
        }
        if (1 < uVar23) {
          lVar21 = (ulong)(uVar23 - 2 >> 1) + 1;
          pfVar25 = afStack_168;
          pfVar26 = afStack_144;
          pfVar27 = afStack_120;
          pfVar28 = afStack_dc;
          do {
            pfVar28 = pfVar28 + 2;
            pfVar27 = pfVar27 + 2;
            pfVar26 = pfVar26 + 1;
            pfVar25 = pfVar25 + 1;
            fVar35 = pfVar28[-1];
            fVar37 = *pfVar28;
            fVar38 = fVar35 + fVar37;
            *pfVar26 = fVar38;
            *pfVar25 = (fVar37 * *pfVar27 + fVar35 * pfVar27[-1]) / fVar38;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
      }
      unaff_x21 = (ulong)uVar1;
      func_0x00010742a308(param_6,unaff_x21);
      func_0x00010742a308(param_7,unaff_x21);
      if (param_6[1] == *param_6) {
LAB_10ab0da9c:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10ab0daa0);
        (*pcVar13)();
      }
      pfVar25 = afStack_144;
      if (!bVar14 && !bVar15) {
        pfVar25 = afStack_dc;
      }
      unaff_x20 = unaff_x21 << 2;
      _memcpy(*param_6,pfVar25,unaff_x20);
      ppppppplVar16 = (long *******)*param_7;
      if ((long *******)param_7[1] == ppppppplVar16) goto LAB_10ab0da9c;
      pfVar25 = afStack_168;
      if (!bVar14 && !bVar15) {
        pfVar25 = afStack_120;
      }
      _memcpy(ppppppplVar16,pfVar25,unaff_x20);
      unaff_x19 = param_7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return ppppppplVar16;
      }
      goto LAB_10ab0dac4;
    }
  }
  ppppppplVar16 = (long *******)&UNK_10f68f7a2;
  FUN_10a00946c();
LAB_10ab0dac4:
  ___stack_chk_fail();
  pcStack_178 = FUN_10ab0dac8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *ppppppplVar16 = (long ******)&PTR_DAT_110c46938;
  ppppppplVar29 = ppppppplVar16 + 1;
  *ppppppplVar29 = (long ******)0x0;
  uStack_1c8 = 0x1b;
  pppppplStack_1d0 = (long ******)&DAT_10f68f7e1;
  uStack_1b8 = 0x1b;
  puStack_1c0 = &DAT_10f68f7e1;
  ppppppplVar16[2] = (long ******)0x0;
  ppppppplVar16[3] = (long ******)0x0;
  uStack_1a0 = unaff_x22;
  uStack_198 = unaff_x21;
  lStack_190 = unaff_x20;
  puStack_188 = unaff_x19;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_10aad6ec8(ppppppplVar29,&pppppplStack_1d0,auStack_1b0,2);
  *(undefined4 *)(ppppppplVar16 + 4) = 0x3c23d70a;
  ppppppplVar16[5] = (long ******)0x0;
  ppppppplVar16[6] = (long ******)0x0;
  ppppppplVar16[7] = (long ******)0x0;
  ppppppplVar17 = ppppppplVar16;
  FUN_10ab0dbb8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppppppplVar16;
  }
  ___stack_chk_fail();
  pppppplStack_1d0 = (long ******)(ppppppplVar16 + 5);
  FUN_10a0d4a18(&pppppplStack_1d0);
  if (*ppppppplVar29 != (long ******)0x0) {
    ppppppplVar16[2] = *ppppppplVar29;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_1d8 = FUN_10ab0dbb8;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_2a0[1] = (long *)0x3f800000;
  aplStack_2a0[0] = (long *)0x3f80000000000000;
  uStack_2b8 = 10;
  puStack_2c0 = &DAT_10f68f7fd;
  uStack_2b0 = 0x3527afb6cca663d5;
  ppppppplVar16 = ppppppplVar17;
  ppuStack_1e0 = &puStack_180;
  if (ppppppplVar17[2] != ppppppplVar17[1]) {
    ppppppplVar29 = (long *******)0x0;
    do {
      func_0x000107c2b054(aplStack_2a0 + 2,&UNK_10f68f808);
      __ZNSt3__19to_stringEm(&puStack_330,ppppppplVar29);
      uVar31 = uStack_328;
      ppuVar4 = (undefined1 **)puStack_330;
      if (-1 < (char)bStack_319) {
        uVar31 = (ulong)bStack_319;
        ppuVar4 = &puStack_330;
      }
      pplVar18 = aplStack_2a0 + 2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar18,ppuVar4,uVar31);
      plStack_2d8 = pplVar18[1];
      pppppplStack_2e0 = (long ******)*pplVar18;
      plStack_2d0 = pplVar18[2];
      pplVar18[1] = (long *)0x0;
      pplVar18[2] = (long *)0x0;
      *pplVar18 = (long *)0x0;
      if ((char)bStack_319 < '\0') {
        __ZdlPv(puStack_330);
      }
      if (cStack_279 < '\0') {
        __ZdlPv(aplStack_2a0[2]);
      }
      plVar12 = plStack_2d0;
      plVar3 = plStack_2d8;
      if (-1 < (long)plStack_2d0) {
        plVar3 = (long *)((ulong)plStack_2d0 >> 0x38);
      }
      FUN_10a003c90(&puStack_330,plVar3 + 1,&ppppppuStack_2f8);
      ppuVar4 = (undefined1 **)puStack_330;
      if (-1 < (char)bStack_319) {
        ppuVar4 = &puStack_330;
      }
      if (plVar3 != (long *)0x0) {
        ppppppplVar16 = (long *******)pppppplStack_2e0;
        if (-1 < (long)plVar12) {
          ppppppplVar16 = &pppppplStack_2e0;
        }
        _memmove(ppuVar4,ppppppplVar16,plVar3);
      }
      *(undefined8 *)((long)ppuVar4 + (long)plVar3) = 0x6c6169726574614d;
      *(undefined1 *)((undefined8 *)((long)ppuVar4 + (long)plVar3) + 1) = 0;
      uVar31 = uStack_328;
      ppuVar4 = (undefined1 **)puStack_330;
      if (-1 < (char)bStack_319) {
        uVar31 = (ulong)bStack_319;
        ppuVar4 = &puStack_330;
      }
      FUN_10a003c90(&ppppppuStack_2f8,(long)plVar3 + 4,&ppppppuStack_310);
      pppppppuVar5 = (undefined8 *******)ppppppuStack_2f8;
      if (-1 < (char)bStack_2e1) {
        pppppppuVar5 = &ppppppuStack_2f8;
      }
      if (plVar3 != (long *)0x0) {
        ppppppplVar16 = (long *******)pppppplStack_2e0;
        if (-1 < (long)plVar12) {
          ppppppplVar16 = &pppppplStack_2e0;
        }
        _memmove(pppppppuVar5,ppppppplVar16,plVar3);
      }
      *(undefined4 *)((long)pppppppuVar5 + (long)plVar3) = 0x73736150;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar5 + (long)plVar3) + 1) = 0;
      uVar6 = uStack_2f0;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_2f8;
      if (-1 < (char)bStack_2e1) {
        uVar6 = (ulong)bStack_2e1;
        pppppppuVar5 = &ppppppuStack_2f8;
      }
      if ((long *******)((long)ppppppplVar17[2] - (long)ppppppplVar17[1] >> 4) <= ppppppplVar29)
      goto LAB_10ab0dfac;
      pppppplVar24 = ppppppplVar17[1] + (long)ppppppplVar29 * 2;
      ppppplVar33 = pppppplVar24[1];
      if ((long *****)0x7ffffffffffffff7 < ppppplVar33) {
        func_0x000109ffde50();
        goto LAB_10ab0dfac;
      }
      ppppplVar34 = *pppppplVar24;
      if (ppppplVar33 < (long *****)0x17) {
        uStack_300 = CONCAT17((char)ppppplVar33,(undefined7)uStack_300);
        pppppppuVar19 = &ppppppuStack_310;
        if (ppppplVar33 != (long *****)0x0) goto LAB_10ab0ddf8;
      }
      else {
        pppppppuVar7 = (undefined8 *******)0x19;
        if (((ulong)ppppplVar33 | 7) != 0x17) {
          pppppppuVar7 = (undefined8 *******)(((ulong)ppppplVar33 | 7) + 1);
        }
        pppppppuVar19 = pppppppuVar7;
        __Znwm();
        uStack_300 = (ulong)pppppppuVar7 | 0x8000000000000000;
        ppppppuStack_310 = pppppppuVar19;
        pppplStack_308 = (long ****)ppppplVar33;
LAB_10ab0ddf8:
        _memmove(pppppppuVar19,ppppplVar34,ppppplVar33);
      }
      *(undefined1 *)((long)pppppppuVar19 + (long)ppppplVar33) = 0;
      ppppplVar33 = (long *****)pppplStack_308;
      pppppppuVar7 = (undefined8 *******)ppppppuStack_310;
      if (-1 < (long)uStack_300) {
        ppppplVar33 = (long *****)(uStack_300 >> 0x38);
        pppppppuVar7 = &ppppppuStack_310;
      }
      FUN_10ab451f4(aplStack_2a0 + 2,0,ppuVar4,uVar31,pppppppuVar5,uVar6,pppppppuVar7,ppppplVar33,1)
      ;
      if ((long)uStack_300 < 0) {
        __ZdlPv(ppppppuStack_310);
      }
      if ((char)bStack_2e1 < '\0') {
        __ZdlPv(ppppppuStack_2f8);
      }
      if ((char)bStack_319 < '\0') {
        __ZdlPv(puStack_330);
      }
      func_0x00010a2f4be0(ppppppplVar17 + 5,aplStack_2a0 + 2);
      if (ppppppplVar17[5] == ppppppplVar17[6]) {
LAB_10ab0dfac:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10ab0dfb0);
        (*pcVar13)();
      }
      ppppplVar33 = ppppppplVar17[6][-2];
      pppplVar22 = ppppplVar33[0x45];
      if (pppplVar22 == ppppplVar33[0x46]) {
        ppplVar32 = (long ***)0x0;
      }
      else {
        ppplVar32 = *pppplVar22;
      }
      FUN_10ab0e0d4(ppplVar32);
      func_0x000107c2b074(&puStack_330,&puStack_2c0);
      if (ppppppplVar29 == (long *******)0x2) goto LAB_10ab0dfac;
      FUN_10a0da430(ppplVar32,&puStack_330,aplStack_2a0 + (long)ppppppplVar29);
      if ((char)bStack_319 < '\0') {
        __ZdlPv(puStack_330);
      }
      FUN_10a044790(auStack_280);
      ppppppplVar16 = (long *******)appppplStack_278;
      (*(code *)*appppplStack_278[0])();
      ppppppplVar20 = (long *******)pppppplStack_288;
      if ((long *******)pppppplStack_288 != (long *******)0x0) {
        ppppppplVar2 = (long *******)(pppppplStack_288 + 1);
        do {
          pppppplVar24 = *ppppppplVar2;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
          if (bVar14) {
            *ppppppplVar2 = (long ******)((long)pppppplVar24 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppplVar24 == (long ******)0x0) {
          (*(code *)(*pppppplStack_288)[2])(pppppplStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar16 = ppppppplVar20;
        }
      }
      if ((long)plStack_2d0 < 0) {
        ppppppplVar16 = (long *******)pppppplStack_2e0;
        __ZdlPv();
      }
      ppppppplVar29 = (long *******)((long)ppppppplVar29 + 1);
    } while (ppppppplVar29 < (long *******)((long)ppppppplVar17[2] - (long)ppppppplVar17[1] >> 4));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_240) {
    ___stack_chk_fail();
    if ((char)bStack_2e1 < '\0') {
      __ZdlPv(ppppppuStack_2f8);
    }
    if ((char)bStack_319 < '\0') {
      __ZdlPv(puStack_330);
    }
    if ((long)plStack_2d0 < 0) {
      __ZdlPv(pppppplStack_2e0);
    }
    ppppppplVar17 = ppppppplVar16;
    __Unwind_Resume();
    pcStack_338 = FUN_10ab0e080;
    *ppppppplVar17 = (long ******)&PTR_DAT_110c46938;
    pppppplStack_358 = (long ******)(ppppppplVar17 + 5);
    pppppplStack_350 = (long ******)ppppppplVar29;
    pppppplStack_348 = (long ******)ppppppplVar16;
    pppuStack_340 = &ppuStack_1e0;
    FUN_10a0d4a18(&pppppplStack_358);
    if (ppppppplVar17[1] != (long ******)0x0) {
      ppppppplVar17[2] = ppppppplVar17[1];
      __ZdlPv();
    }
    return ppppppplVar17;
  }
  return ppppppplVar16;
}



/* Entry: 10ab0dac8; end: 10ab0dbb7;  */

long ******* FUN_10ab0dac8(long *******param_1)

{
  long *******ppppppplVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  code *pcVar11;
  long *******ppppppplVar12;
  long **pplVar13;
  undefined8 *******pppppppuVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long ****pppplVar17;
  long ******pppppplVar18;
  long *******ppppppplVar19;
  long ***ppplVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long ******pppppplStack_1e8;
  long ******pppppplStack_1e0;
  long ******pppppplStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 ******ppppppuStack_1a0;
  long ****pppplStack_198;
  undefined8 uStack_190;
  undefined8 ******ppppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  long ******pppppplStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *aplStack_130 [3];
  long ******pppppplStack_118;
  undefined1 auStack_110 [7];
  char cStack_109;
  long *****appppplStack_108 [7];
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  long ******pppppplStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long ******)&PTR_DAT_110c46938;
  ppppppplVar19 = param_1 + 1;
  *ppppppplVar19 = (long ******)0x0;
  uStack_58 = 0x1b;
  pppppplStack_60 = (long ******)&DAT_10f68f7e1;
  uStack_48 = 0x1b;
  puStack_50 = &DAT_10f68f7e1;
  param_1[2] = (long ******)0x0;
  param_1[3] = (long ******)0x0;
  FUN_10aad6ec8(ppppppplVar19,&pppppplStack_60,auStack_40,2);
  *(undefined4 *)(param_1 + 4) = 0x3c23d70a;
  param_1[5] = (long ******)0x0;
  param_1[6] = (long ******)0x0;
  param_1[7] = (long ******)0x0;
  ppppppplVar12 = param_1;
  FUN_10ab0dbb8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  pppppplStack_60 = (long ******)(param_1 + 5);
  FUN_10a0d4a18(&pppppplStack_60);
  if (*ppppppplVar19 != (long ******)0x0) {
    param_1[2] = *ppppppplVar19;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_68 = FUN_10ab0dbb8;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_130[1] = (long *)0x3f800000;
  aplStack_130[0] = (long *)0x3f80000000000000;
  uStack_148 = 10;
  puStack_150 = &DAT_10f68f7fd;
  uStack_140 = 0x3527afb6cca663d5;
  ppppppplVar15 = ppppppplVar12;
  puStack_70 = &stack0xfffffffffffffff0;
  if (ppppppplVar12[2] != ppppppplVar12[1]) {
    ppppppplVar19 = (long *******)0x0;
    do {
      func_0x000107c2b054(aplStack_130 + 2,&UNK_10f68f808);
      __ZNSt3__19to_stringEm(&puStack_1c0,ppppppplVar19);
      uVar4 = uStack_1b8;
      ppuVar3 = (undefined1 **)puStack_1c0;
      if (-1 < (char)bStack_1a9) {
        uVar4 = (ulong)bStack_1a9;
        ppuVar3 = &puStack_1c0;
      }
      pplVar13 = aplStack_130 + 2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar13,ppuVar3,uVar4);
      plStack_168 = pplVar13[1];
      pppppplStack_170 = (long ******)*pplVar13;
      plStack_160 = pplVar13[2];
      pplVar13[1] = (long *)0x0;
      pplVar13[2] = (long *)0x0;
      *pplVar13 = (long *)0x0;
      if ((char)bStack_1a9 < '\0') {
        __ZdlPv(puStack_1c0);
      }
      if (cStack_109 < '\0') {
        __ZdlPv(aplStack_130[2]);
      }
      plVar10 = plStack_160;
      plVar2 = plStack_168;
      if (-1 < (long)plStack_160) {
        plVar2 = (long *)((ulong)plStack_160 >> 0x38);
      }
      FUN_10a003c90(&puStack_1c0,plVar2 + 1,&ppppppuStack_188);
      ppuVar3 = (undefined1 **)puStack_1c0;
      if (-1 < (char)bStack_1a9) {
        ppuVar3 = &puStack_1c0;
      }
      if (plVar2 != (long *)0x0) {
        ppppppplVar15 = (long *******)pppppplStack_170;
        if (-1 < (long)plVar10) {
          ppppppplVar15 = &pppppplStack_170;
        }
        _memmove(ppuVar3,ppppppplVar15,plVar2);
      }
      *(undefined8 *)((long)ppuVar3 + (long)plVar2) = 0x6c6169726574614d;
      *(undefined1 *)((undefined8 *)((long)ppuVar3 + (long)plVar2) + 1) = 0;
      uVar4 = uStack_1b8;
      ppuVar3 = (undefined1 **)puStack_1c0;
      if (-1 < (char)bStack_1a9) {
        uVar4 = (ulong)bStack_1a9;
        ppuVar3 = &puStack_1c0;
      }
      FUN_10a003c90(&ppppppuStack_188,(long)plVar2 + 4,&ppppppuStack_1a0);
      pppppppuVar5 = (undefined8 *******)ppppppuStack_188;
      if (-1 < (char)bStack_171) {
        pppppppuVar5 = &ppppppuStack_188;
      }
      if (plVar2 != (long *)0x0) {
        ppppppplVar15 = (long *******)pppppplStack_170;
        if (-1 < (long)plVar10) {
          ppppppplVar15 = &pppppplStack_170;
        }
        _memmove(pppppppuVar5,ppppppplVar15,plVar2);
      }
      *(undefined4 *)((long)pppppppuVar5 + (long)plVar2) = 0x73736150;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar5 + (long)plVar2) + 1) = 0;
      uVar6 = uStack_180;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_188;
      if (-1 < (char)bStack_171) {
        uVar6 = (ulong)bStack_171;
        pppppppuVar5 = &ppppppuStack_188;
      }
      if ((long *******)((long)ppppppplVar12[2] - (long)ppppppplVar12[1] >> 4) <= ppppppplVar19)
      goto LAB_10ab0dfac;
      pppppplVar18 = ppppppplVar12[1] + (long)ppppppplVar19 * 2;
      ppppplVar21 = pppppplVar18[1];
      if ((long *****)0x7ffffffffffffff7 < ppppplVar21) {
        func_0x000109ffde50();
        goto LAB_10ab0dfac;
      }
      ppppplVar22 = *pppppplVar18;
      if (ppppplVar21 < (long *****)0x17) {
        uStack_190 = CONCAT17((char)ppppplVar21,(undefined7)uStack_190);
        pppppppuVar14 = &ppppppuStack_1a0;
        if (ppppplVar21 != (long *****)0x0) goto LAB_10ab0ddf8;
      }
      else {
        pppppppuVar7 = (undefined8 *******)0x19;
        if (((ulong)ppppplVar21 | 7) != 0x17) {
          pppppppuVar7 = (undefined8 *******)(((ulong)ppppplVar21 | 7) + 1);
        }
        pppppppuVar14 = pppppppuVar7;
        __Znwm();
        uStack_190 = (ulong)pppppppuVar7 | 0x8000000000000000;
        ppppppuStack_1a0 = pppppppuVar14;
        pppplStack_198 = (long ****)ppppplVar21;
LAB_10ab0ddf8:
        _memmove(pppppppuVar14,ppppplVar22,ppppplVar21);
      }
      *(undefined1 *)((long)pppppppuVar14 + (long)ppppplVar21) = 0;
      ppppplVar21 = (long *****)pppplStack_198;
      pppppppuVar7 = (undefined8 *******)ppppppuStack_1a0;
      if (-1 < (long)uStack_190) {
        ppppplVar21 = (long *****)(uStack_190 >> 0x38);
        pppppppuVar7 = &ppppppuStack_1a0;
      }
      FUN_10ab451f4(aplStack_130 + 2,0,ppuVar3,uVar4,pppppppuVar5,uVar6,pppppppuVar7,ppppplVar21,1);
      if ((long)uStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((char)bStack_171 < '\0') {
        __ZdlPv(ppppppuStack_188);
      }
      if ((char)bStack_1a9 < '\0') {
        __ZdlPv(puStack_1c0);
      }
      func_0x00010a2f4be0(ppppppplVar12 + 5,aplStack_130 + 2);
      if (ppppppplVar12[5] == ppppppplVar12[6]) {
LAB_10ab0dfac:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab0dfb0);
        (*pcVar11)();
      }
      ppppplVar21 = ppppppplVar12[6][-2];
      pppplVar17 = ppppplVar21[0x45];
      if (pppplVar17 == ppppplVar21[0x46]) {
        ppplVar20 = (long ***)0x0;
      }
      else {
        ppplVar20 = *pppplVar17;
      }
      FUN_10ab0e0d4(ppplVar20);
      func_0x000107c2b074(&puStack_1c0,&puStack_150);
      if (ppppppplVar19 == (long *******)0x2) goto LAB_10ab0dfac;
      FUN_10a0da430(ppplVar20,&puStack_1c0,aplStack_130 + (long)ppppppplVar19);
      if ((char)bStack_1a9 < '\0') {
        __ZdlPv(puStack_1c0);
      }
      FUN_10a044790(auStack_110);
      ppppppplVar15 = (long *******)appppplStack_108;
      (*(code *)*appppplStack_108[0])();
      ppppppplVar16 = (long *******)pppppplStack_118;
      if ((long *******)pppppplStack_118 != (long *******)0x0) {
        ppppppplVar1 = (long *******)(pppppplStack_118 + 1);
        do {
          pppppplVar18 = *ppppppplVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar9) {
            *ppppppplVar1 = (long ******)((long)pppppplVar18 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar18 == (long ******)0x0) {
          (*(code *)(*pppppplStack_118)[2])(pppppplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar15 = ppppppplVar16;
        }
      }
      if ((long)plStack_160 < 0) {
        ppppppplVar15 = (long *******)pppppplStack_170;
        __ZdlPv();
      }
      ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1);
    } while (ppppppplVar19 < (long *******)((long)ppppppplVar12[2] - (long)ppppppplVar12[1] >> 4));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return ppppppplVar15;
  }
  ___stack_chk_fail();
  if ((char)bStack_171 < '\0') {
    __ZdlPv(ppppppuStack_188);
  }
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(puStack_1c0);
  }
  if ((long)plStack_160 < 0) {
    __ZdlPv(pppppplStack_170);
  }
  ppppppplVar12 = ppppppplVar15;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10ab0e080;
  *ppppppplVar12 = (long ******)&PTR_DAT_110c46938;
  pppppplStack_1e8 = (long ******)(ppppppplVar12 + 5);
  pppppplStack_1e0 = (long ******)ppppppplVar19;
  pppppplStack_1d8 = (long ******)ppppppplVar15;
  ppuStack_1d0 = &puStack_70;
  FUN_10a0d4a18(&pppppplStack_1e8);
  if (ppppppplVar12[1] != (long ******)0x0) {
    ppppppplVar12[2] = ppppppplVar12[1];
    __ZdlPv();
  }
  return ppppppplVar12;
}



/* Entry: 10ab0dbb8; end: 10ab0e07f;  */

long ******* FUN_10ab0dbb8(long *******param_1)

{
  long *******ppppppplVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  code *pcVar11;
  long **pplVar12;
  undefined8 *******pppppppuVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long ****pppplVar16;
  long ******pppppplVar17;
  ulong unaff_x20;
  long ***ppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long ******pppppplStack_188;
  ulong uStack_180;
  long ******pppppplStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ******ppppppuStack_140;
  long ****pppplStack_138;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  long ******pppppplStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *aplStack_d0 [3];
  long ******pppppplStack_b8;
  undefined1 auStack_b0 [7];
  char cStack_a9;
  long *****appppplStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_d0[1] = (long *)0x3f800000;
  aplStack_d0[0] = (long *)0x3f80000000000000;
  uStack_e8 = 10;
  puStack_f0 = &DAT_10f68f7fd;
  uStack_e0 = 0x3527afb6cca663d5;
  ppppppplVar14 = param_1;
  if (param_1[2] != param_1[1]) {
    unaff_x20 = 0;
    do {
      func_0x000107c2b054(aplStack_d0 + 2,&UNK_10f68f808);
      __ZNSt3__19to_stringEm(&puStack_160,unaff_x20);
      uVar4 = uStack_158;
      ppuVar3 = (undefined1 **)puStack_160;
      if (-1 < (char)bStack_149) {
        uVar4 = (ulong)bStack_149;
        ppuVar3 = &puStack_160;
      }
      pplVar12 = aplStack_d0 + 2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar12,ppuVar3,uVar4);
      plStack_108 = pplVar12[1];
      pppppplStack_110 = (long ******)*pplVar12;
      plStack_100 = pplVar12[2];
      pplVar12[1] = (long *)0x0;
      pplVar12[2] = (long *)0x0;
      *pplVar12 = (long *)0x0;
      if ((char)bStack_149 < '\0') {
        __ZdlPv(puStack_160);
      }
      if (cStack_a9 < '\0') {
        __ZdlPv(aplStack_d0[2]);
      }
      plVar10 = plStack_100;
      plVar2 = plStack_108;
      if (-1 < (long)plStack_100) {
        plVar2 = (long *)((ulong)plStack_100 >> 0x38);
      }
      FUN_10a003c90(&puStack_160,plVar2 + 1,&ppppppuStack_128);
      ppuVar3 = (undefined1 **)puStack_160;
      if (-1 < (char)bStack_149) {
        ppuVar3 = &puStack_160;
      }
      if (plVar2 != (long *)0x0) {
        ppppppplVar14 = (long *******)pppppplStack_110;
        if (-1 < (long)plVar10) {
          ppppppplVar14 = &pppppplStack_110;
        }
        _memmove(ppuVar3,ppppppplVar14,plVar2);
      }
      *(undefined8 *)((long)ppuVar3 + (long)plVar2) = 0x6c6169726574614d;
      *(undefined1 *)((undefined8 *)((long)ppuVar3 + (long)plVar2) + 1) = 0;
      uVar4 = uStack_158;
      ppuVar3 = (undefined1 **)puStack_160;
      if (-1 < (char)bStack_149) {
        uVar4 = (ulong)bStack_149;
        ppuVar3 = &puStack_160;
      }
      FUN_10a003c90(&ppppppuStack_128,(long)plVar2 + 4,&ppppppuStack_140);
      pppppppuVar5 = (undefined8 *******)ppppppuStack_128;
      if (-1 < (char)bStack_111) {
        pppppppuVar5 = &ppppppuStack_128;
      }
      if (plVar2 != (long *)0x0) {
        ppppppplVar14 = (long *******)pppppplStack_110;
        if (-1 < (long)plVar10) {
          ppppppplVar14 = &pppppplStack_110;
        }
        _memmove(pppppppuVar5,ppppppplVar14,plVar2);
      }
      *(undefined4 *)((long)pppppppuVar5 + (long)plVar2) = 0x73736150;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar5 + (long)plVar2) + 1) = 0;
      uVar6 = uStack_120;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_128;
      if (-1 < (char)bStack_111) {
        uVar6 = (ulong)bStack_111;
        pppppppuVar5 = &ppppppuStack_128;
      }
      if ((ulong)((long)param_1[2] - (long)param_1[1] >> 4) <= unaff_x20) goto LAB_10ab0dfac;
      pppppplVar17 = param_1[1] + unaff_x20 * 2;
      ppppplVar19 = pppppplVar17[1];
      if ((long *****)0x7ffffffffffffff7 < ppppplVar19) {
        func_0x000109ffde50();
        goto LAB_10ab0dfac;
      }
      ppppplVar20 = *pppppplVar17;
      if (ppppplVar19 < (long *****)0x17) {
        uStack_130 = CONCAT17((char)ppppplVar19,(undefined7)uStack_130);
        pppppppuVar13 = &ppppppuStack_140;
        if (ppppplVar19 != (long *****)0x0) goto LAB_10ab0ddf8;
      }
      else {
        pppppppuVar7 = (undefined8 *******)0x19;
        if (((ulong)ppppplVar19 | 7) != 0x17) {
          pppppppuVar7 = (undefined8 *******)(((ulong)ppppplVar19 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar7;
        __Znwm();
        uStack_130 = (ulong)pppppppuVar7 | 0x8000000000000000;
        ppppppuStack_140 = pppppppuVar13;
        pppplStack_138 = (long ****)ppppplVar19;
LAB_10ab0ddf8:
        _memmove(pppppppuVar13,ppppplVar20,ppppplVar19);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)ppppplVar19) = 0;
      ppppplVar19 = (long *****)pppplStack_138;
      pppppppuVar7 = (undefined8 *******)ppppppuStack_140;
      if (-1 < (long)uStack_130) {
        ppppplVar19 = (long *****)(uStack_130 >> 0x38);
        pppppppuVar7 = &ppppppuStack_140;
      }
      FUN_10ab451f4(aplStack_d0 + 2,0,ppuVar3,uVar4,pppppppuVar5,uVar6,pppppppuVar7,ppppplVar19,1);
      if ((long)uStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      if ((char)bStack_111 < '\0') {
        __ZdlPv(ppppppuStack_128);
      }
      if ((char)bStack_149 < '\0') {
        __ZdlPv(puStack_160);
      }
      func_0x00010a2f4be0(param_1 + 5,aplStack_d0 + 2);
      if (param_1[5] == param_1[6]) {
LAB_10ab0dfac:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab0dfb0);
        (*pcVar11)();
      }
      ppppplVar19 = param_1[6][-2];
      pppplVar16 = ppppplVar19[0x45];
      if (pppplVar16 == ppppplVar19[0x46]) {
        ppplVar18 = (long ***)0x0;
      }
      else {
        ppplVar18 = *pppplVar16;
      }
      FUN_10ab0e0d4(ppplVar18);
      func_0x000107c2b074(&puStack_160,&puStack_f0);
      if (unaff_x20 == 2) goto LAB_10ab0dfac;
      FUN_10a0da430(ppplVar18,&puStack_160,aplStack_d0 + unaff_x20);
      if ((char)bStack_149 < '\0') {
        __ZdlPv(puStack_160);
      }
      FUN_10a044790(auStack_b0);
      ppppppplVar14 = (long *******)appppplStack_a8;
      (*(code *)*appppplStack_a8[0])();
      ppppppplVar15 = (long *******)pppppplStack_b8;
      if ((long *******)pppppplStack_b8 != (long *******)0x0) {
        ppppppplVar1 = (long *******)(pppppplStack_b8 + 1);
        do {
          pppppplVar17 = *ppppppplVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar9) {
            *ppppppplVar1 = (long ******)((long)pppppplVar17 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar17 == (long ******)0x0) {
          (*(code *)(*pppppplStack_b8)[2])(pppppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar14 = ppppppplVar15;
        }
      }
      if ((long)plStack_100 < 0) {
        ppppppplVar14 = (long *******)pppppplStack_110;
        __ZdlPv();
      }
      unaff_x20 = unaff_x20 + 1;
    } while (unaff_x20 < (ulong)((long)param_1[2] - (long)param_1[1] >> 4));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppplVar14;
  }
  ___stack_chk_fail();
  if ((char)bStack_111 < '\0') {
    __ZdlPv(ppppppuStack_128);
  }
  if ((char)bStack_149 < '\0') {
    __ZdlPv(puStack_160);
  }
  if ((long)plStack_100 < 0) {
    __ZdlPv(pppppplStack_110);
  }
  ppppppplVar15 = ppppppplVar14;
  __Unwind_Resume();
  pcStack_168 = FUN_10ab0e080;
  *ppppppplVar15 = (long ******)&PTR_DAT_110c46938;
  pppppplStack_188 = (long ******)(ppppppplVar15 + 5);
  uStack_180 = unaff_x20;
  pppppplStack_178 = (long ******)ppppppplVar14;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_10a0d4a18(&pppppplStack_188);
  if (ppppppplVar15[1] != (long ******)0x0) {
    ppppppplVar15[2] = ppppppplVar15[1];
    __ZdlPv();
  }
  return ppppppplVar15;
}



/* Entry: 10ab0e080; end: 10ab0e0d3;  */

undefined8 * FUN_10ab0e080(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c46938;
  puStack_28 = param_1 + 5;
  FUN_10a0d4a18(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab0e0d4; end: 10ab0e20b;  */

void FUN_10ab0e0d4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e4 [16];
  undefined1 uStack_d4;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ushort *)(param_1 + 0x129);
  *(ushort *)(param_1 + 0x129) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(param_1 + 0x70) =
       *(ushort *)(param_1 + 0x70) & 0xff80 | *(ushort *)(param_1 + 0x70) + 1 & 0x7f;
  lVar11 = *(long *)(param_1 + 600);
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  lStack_68 = param_1 + 0x40;
  uStack_60 = 1;
  pcStack_78 = FUN_10a1d3648;
  ppuStack_70 = &PTR_FUN_110bad818;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 6;
  func_0x00010a3326b8(param_1 + 0x218,1);
  func_0x00010a332748(param_1 + 0x219,0);
  func_0x00010a332700(param_1 + 0x21a,0);
  plVar8 = (long *)0x0;
  func_0x00010a3325d0(param_1);
  *(undefined4 *)(param_1 + 0x21e) = 0x1010101;
  FUN_10a044790(&pcStack_78);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_10a044790(&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    __Unwind_Resume();
    uStack_f8 = 7;
    puStack_100 = &DAT_10f68f823;
    uStack_f0 = 0x1bdb9bb5eeb4e3e6;
    pppuVar6 = pppuVar5 + 4;
    FUN_10a5dfd94(pppuVar6,param_4);
    pppuVar7 = pppuVar5 + 4;
    FUN_10a01eacc(pppuVar7,pppuVar6);
    func_0x000107c2b074(&uStack_120,&puStack_100);
    if (*plVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*plVar8 + 0x268);
    }
    FUN_10a5e17a8(pppuVar7,&uStack_120,uVar10,&UNK_10e4ac8a8);
    if (uStack_110._7_1_ < '\0') {
      __ZdlPv(CONCAT44(uStack_11c,uStack_120));
    }
    uStack_120 = (undefined4)*(undefined8 *)(*param_3 + 0x268);
    puVar9 = (undefined8 *)0x1;
    FUN_10a088744();
    if (puVar9 == (undefined8 *)0x0) {
      plVar8 = (long *)0x0;
      uStack_118 = 0;
      uStack_110 = 0;
    }
    else {
      plVar8 = (long *)puVar9[1];
      uStack_110 = puVar9[1];
      uStack_118 = *puVar9;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
    auStack_e4[0] = 0;
    uStack_d4 = 0;
    FUN_10ab0fa64(pppuVar5,pppuVar6,&uStack_118,param_5,param_6,auStack_e4);
    (*(code *)(*pppuVar5)[0x12])(pppuVar5,0,3,3);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return;
  }
  return;
}



/* Entry: 10ab0e20c; end: 10ab0e3bf;  */

void FUN_10ab0e20c(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_64 [16];
  undefined1 uStack_54;
  
  uStack_78 = 7;
  puStack_80 = &DAT_10f68f823;
  uStack_70 = 0x1bdb9bb5eeb4e3e6;
  plVar4 = param_1 + 4;
  FUN_10a5dfd94(plVar4,param_4);
  plVar8 = param_1 + 4;
  FUN_10a01eacc(plVar8,plVar4);
  func_0x000107c2b074(&uStack_a0,&puStack_80);
  if (*param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*param_2 + 0x268);
  }
  FUN_10a5e17a8(plVar8,&uStack_a0,uVar6,&UNK_10e4ac8a8);
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(CONCAT44(uStack_9c,uStack_a0));
  }
  uStack_a0 = (undefined4)*(undefined8 *)(*param_3 + 0x268);
  puVar5 = (undefined8 *)0x1;
  FUN_10a088744();
  if (puVar5 == (undefined8 *)0x0) {
    plVar8 = (long *)0x0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    plVar8 = (long *)puVar5[1];
    uStack_90 = puVar5[1];
    uStack_98 = *puVar5;
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
  }
  auStack_64[0] = 0;
  uStack_54 = 0;
  FUN_10ab0fa64(param_1,plVar4,&uStack_98,param_5,param_6,auStack_64);
  (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10ab0e3c0; end: 10ab0e5a7;  */

undefined8 ** FUN_10ab0e3c0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 **ppuStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined1 auStack_128 [8];
  undefined8 **ppuStack_120;
  undefined1 auStack_118 [8];
  undefined8 *apuStack_110 [7];
  long lStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  char cStack_99;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined1 auStack_78 [8];
  undefined8 **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_99 = '\x11';
  uStack_a8 = 0x736c672e6267725f;
  uStack_b0 = 0x656c706d61736572;
  uStack_a0 = 0x6c;
  FUN_10ab451f4(auStack_78,0,&UNK_10f68f83d,0x25,&UNK_10f68f863,0x21,&uStack_b0,0x11,1);
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  func_0x00010a015c50(param_1 + 0x50,auStack_78);
  plVar5 = *(long **)(*(long *)(param_1 + 0x50) + 0x228);
  if (plVar5 == *(long **)(*(long *)(param_1 + 0x50) + 0x230)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar5;
  }
  func_0x000107c2b054(&uStack_90,&UNK_10f68f863);
  if (*(char *)(lVar8 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar8 + 0x1a0));
  }
  *(undefined8 *)(lVar8 + 0x1a8) = uStack_88;
  *(ulong *)(lVar8 + 0x1a0) = CONCAT71(uStack_8f,uStack_90);
  *(ulong *)(lVar8 + 0x1b0) = CONCAT17(uStack_79,uStack_80);
  uStack_79 = 0;
  uStack_90 = 0;
  func_0x000107c2b074(&uStack_b0,&PTR_DAT_110c46cc8);
  FUN_10a047898(lVar8 + 0x200,&uStack_b0,&uStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  FUN_10ab0e0d4(lVar8);
  FUN_10a044790(auStack_68);
  ppuVar3 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (ppuStack_70 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_70 + 1;
    do {
      puVar6 = *ppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar2) {
        *ppuVar4 = (undefined8 *)((long)puVar6 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar6 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_70)[2])(ppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar3 = ppuStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  func_0x00010a015cb4(auStack_78);
  __Unwind_Resume();
  pcStack_b8 = FUN_10ab0e5a8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x20;
  puStack_c0 = &stack0xfffffffffffffff0;
  __Znwm();
  puVar6[1] = 0x6172672f7265746c;
  *puVar6 = 0x6946646564697567;
  *(undefined8 *)((long)puVar6 + 0x13) = 0x6c736c672e726578;
  *(undefined8 *)((long)puVar6 + 0xb) = 0x694d796172672f72;
  *(undefined1 *)((long)puVar6 + 0x1b) = 0;
  FUN_10ab451f4(auStack_128,0,&UNK_10f68f8a1,0x22,&UNK_10f68f8c4,0x1e,puVar6,0x1b,1);
  __ZdlPv(puVar6);
  func_0x00010a015c50(ppuVar3 + 8,auStack_128);
  plVar5 = (long *)ppuVar3[8][0x45];
  if (plVar5 == (long *)ppuVar3[8][0x46]) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar5;
  }
  func_0x000107c2b054(&uStack_140,&UNK_10f68f8c4);
  if (*(char *)(lVar8 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar8 + 0x1a0));
  }
  *(undefined8 *)(lVar8 + 0x1a8) = uStack_138;
  *(ulong *)(lVar8 + 0x1a0) = CONCAT71(uStack_13f,uStack_140);
  *(ulong *)(lVar8 + 0x1b0) = CONCAT17(uStack_129,uStack_130);
  uStack_129 = 0;
  uStack_140 = 0;
  FUN_10ab0e0d4(lVar8);
  FUN_10a044790(auStack_118);
  ppuVar3 = apuStack_110;
  (*(code *)*apuStack_110[0])();
  if (ppuStack_120 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_120 + 1;
    do {
      puVar7 = *ppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar2) {
        *ppuVar4 = (undefined8 *)((long)puVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_120)[2])(ppuStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar3 = ppuStack_120;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __ZdlPv(puVar6);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10ab0e73c;
  *ppuVar4 = &PTR_FUN_110c469d0;
  puStack_160 = puVar6;
  ppuStack_158 = ppuVar3;
  ppuStack_150 = &puStack_c0;
  FUN_10a0617bc(ppuVar4 + 10);
  FUN_10a0617bc(ppuVar4 + 8);
  *ppuVar4 = &PTR_DAT_110c46938;
  ppuStack_168 = ppuVar4 + 5;
  FUN_10a0d4a18(&ppuStack_168);
  if (ppuVar4[1] != (undefined8 *)0x0) {
    ppuVar4[2] = ppuVar4[1];
    __ZdlPv();
  }
  return ppuVar4;
}



/* Entry: 10ab0e5a8; end: 10ab0e73b;  */

undefined8 ** FUN_10ab0e5a8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined1 auStack_78 [8];
  undefined8 **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0x6172672f7265746c;
  *puVar3 = 0x6946646564697567;
  *(undefined8 *)((long)puVar3 + 0x13) = 0x6c736c672e726578;
  *(undefined8 *)((long)puVar3 + 0xb) = 0x694d796172672f72;
  *(undefined1 *)((long)puVar3 + 0x1b) = 0;
  FUN_10ab451f4(auStack_78,0,&UNK_10f68f8a1,0x22,&UNK_10f68f8c4,0x1e,puVar3,0x1b,1);
  __ZdlPv(puVar3);
  func_0x00010a015c50(param_1 + 0x40,auStack_78);
  plVar6 = *(long **)(*(long *)(param_1 + 0x40) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x40) + 0x230)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar6;
  }
  func_0x000107c2b054(&uStack_90,&UNK_10f68f8c4);
  if (*(char *)(lVar8 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar8 + 0x1a0));
  }
  *(undefined8 *)(lVar8 + 0x1a8) = uStack_88;
  *(ulong *)(lVar8 + 0x1a0) = CONCAT71(uStack_8f,uStack_90);
  *(ulong *)(lVar8 + 0x1b0) = CONCAT17(uStack_79,uStack_80);
  uStack_79 = 0;
  uStack_90 = 0;
  FUN_10ab0e0d4(lVar8);
  FUN_10a044790(auStack_68);
  ppuVar4 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (ppuStack_70 != (undefined8 **)0x0) {
    ppuVar5 = ppuStack_70 + 1;
    do {
      puVar7 = *ppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar2) {
        *ppuVar5 = (undefined8 *)((long)puVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_70)[2])(ppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar4 = ppuStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  __ZdlPv(puVar3);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  pcStack_98 = FUN_10ab0e73c;
  *ppuVar5 = &PTR_FUN_110c469d0;
  puStack_b0 = puVar3;
  ppuStack_a8 = ppuVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10a0617bc(ppuVar5 + 10);
  FUN_10a0617bc(ppuVar5 + 8);
  *ppuVar5 = &PTR_DAT_110c46938;
  ppuStack_b8 = ppuVar5 + 5;
  FUN_10a0d4a18(&ppuStack_b8);
  if (ppuVar5[1] != (undefined8 *)0x0) {
    ppuVar5[2] = ppuVar5[1];
    __ZdlPv();
  }
  return ppuVar5;
}



/* Entry: 10ab0e73c; end: 10ab0e77b;  */

undefined8 * FUN_10ab0e73c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c469d0;
  FUN_10a0617bc(param_1 + 10);
  FUN_10a0617bc(param_1 + 8);
  *param_1 = &PTR_DAT_110c46938;
  puStack_28 = param_1 + 5;
  FUN_10a0d4a18(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab0e77c; end: 10ab0e77f;  */

undefined8 * FUN_10ab0e77c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c469d0;
  FUN_10a0617bc(param_1 + 10);
  FUN_10a0617bc(param_1 + 8);
  *param_1 = &PTR_DAT_110c46938;
  puStack_28 = param_1 + 5;
  FUN_10a0d4a18(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab0e780; end: 10ab0e793;  */

void FUN_10ab0e780(void)

{
  FUN_10ab0e73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab0e794; end: 10ab0e83b;  */

undefined8 * FUN_10ab0e794(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10ab0dac8();
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_110c469d0;
  puVar1[0xd] = 0;
  *(undefined4 *)((long)puVar1 + 100) = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xe] = 0x3e20c49c3f800000;
  *(undefined4 *)(puVar1 + 0xf) = 0x3f008312;
  *(undefined1 *)((long)puVar1 + 0x7c) = 0;
  FUN_10ab0e3c0();
  FUN_10ab0e5a8(param_1);
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return param_1;
}



/* Entry: 10ab0e83c; end: 10ab0f513;  */

/* WARNING: Removing unreachable block (ram,0x00010ab0f250) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f1f8) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f1a0) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f160) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f1cc) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f224) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f27c) */

void FUN_10ab0e83c(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar9 = 0;
  FUN_10a2421c8();
  plVar10 = (long *)*param_5;
  (**(code **)(*plVar10 + 0xb0))();
  uVar3 = *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x68) <= (uint)plVar10) {
    uVar3 = (uint)plVar10;
  }
  plVar10 = (long *)*param_5;
  (**(code **)(*plVar10 + 0xb8))();
  uVar4 = *(uint *)(param_1 + 0x6c);
  if (*(uint *)(param_1 + 0x6c) <= (uint)plVar10) {
    uVar4 = (uint)plVar10;
  }
  FUN_10ab0f514(&lStack_80,param_2,uVar3);
  plVar10 = param_3 + 4;
  FUN_10a5dfd94(plVar10,*(undefined8 *)(param_1 + 0x50));
  plVar13 = param_3 + 4;
  FUN_10a01eacc(plVar13,plVar10);
  fStack_1f8 = (float)*param_4;
  puVar11 = (undefined8 *)0x1;
  FUN_10a088744();
  if (puVar11 == (undefined8 *)0x0) {
    fStack_1f0 = 0.0;
    fStack_1ec = 0.0;
    fStack_1e8 = 0.0;
    fStack_1e4 = 0.0;
  }
  else {
    fStack_1e8 = (float)puVar11[1];
    fStack_1e4 = (float)((ulong)puVar11[1] >> 0x20);
    fStack_1f0 = (float)*puVar11;
    fStack_1ec = (float)((ulong)*puVar11 >> 0x20);
    if (puVar11[1] != 0) {
      plVar1 = (long *)(puVar11[1] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  FUN_10ab14930(&plStack_90,param_2,&fStack_1f0);
  plVar1 = (long *)CONCAT44(fStack_1e4,fStack_1e8);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar12 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar11 = (undefined8 *)0x1;
  fVar18 = (float)*param_5;
  FUN_10a088744();
  fStack_1f8 = fVar18;
  if (puVar11 == (undefined8 *)0x0) {
    fStack_1f0 = 0.0;
    fStack_1ec = 0.0;
    fStack_1e8 = 0.0;
    fStack_1e4 = 0.0;
  }
  else {
    fStack_1e8 = (float)puVar11[1];
    fStack_1e4 = (float)((ulong)puVar11[1] >> 0x20);
    fStack_1f0 = (float)*puVar11;
    fStack_1ec = (float)((ulong)*puVar11 >> 0x20);
    if (puVar11[1] != 0) {
      plVar1 = (long *)(puVar11[1] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  FUN_10ab14930(&plStack_a0,param_2,&fStack_1f0);
  plVar1 = (long *)CONCAT44(fStack_1e4,fStack_1e8);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar12 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_90;
  (**(code **)(*(long *)*param_4 + 0x90))(&uStack_d0);
  (**(code **)(*(long *)*param_5 + 0x90))(&uStack_100);
  fVar17 = -(fStack_e4 * uStack_f0._4_4_) + fStack_e0 * (float)uStack_f0;
  fVar18 = -(fStack_e4 * (float)uStack_f8) + fStack_e0 * uStack_100._4_4_;
  fVar21 = -((float)uStack_f0 * (float)uStack_f8) + uStack_f0._4_4_ * uStack_100._4_4_;
  fVar20 = 1.0 / (-(uStack_f8._4_4_ * fVar18) + fVar17 * (float)uStack_100 + fVar21 * fStack_e8);
  fVar17 = fVar17 * fVar20;
  fVar22 = -((-(fStack_e8 * uStack_f0._4_4_) + fStack_e0 * uStack_f8._4_4_) * fVar20);
  fVar23 = (-(fStack_e8 * (float)uStack_f0) + fStack_e4 * uStack_f8._4_4_) * fVar20;
  fVar19 = -(fVar18 * fVar20);
  fVar18 = (-(fStack_e8 * (float)uStack_f8) + fStack_e0 * (float)uStack_100) * fVar20;
  fVar16 = -((-(fStack_e8 * uStack_100._4_4_) + fStack_e4 * (float)uStack_100) * fVar20);
  fVar21 = fVar21 * fVar20;
  fVar15 = -((-(uStack_f8._4_4_ * (float)uStack_f8) + uStack_f0._4_4_ * (float)uStack_100) * fVar20)
  ;
  fVar20 = (-(uStack_f8._4_4_ * uStack_100._4_4_) + (float)uStack_f0 * (float)uStack_100) * fVar20;
  fStack_1f8 = uStack_c8._4_4_ * fVar19 + fVar17 * (float)uStack_d0 + fVar21 * fStack_b8;
  fStack_1f4 = (float)uStack_c0 * fVar19 + fVar17 * uStack_d0._4_4_ + fVar21 * fStack_b4;
  fStack_1f0 = fVar19 * uStack_c0._4_4_ + fVar17 * (float)uStack_c8 + fVar21 * fStack_b0;
  fStack_1ec = uStack_c8._4_4_ * fVar18 + fVar22 * (float)uStack_d0 + fVar15 * fStack_b8;
  fStack_1e8 = (float)uStack_c0 * fVar18 + fVar22 * uStack_d0._4_4_ + fVar15 * fStack_b4;
  fStack_1e4 = fVar18 * uStack_c0._4_4_ + fVar22 * (float)uStack_c8 + fVar15 * fStack_b0;
  fStack_1e0 = uStack_c8._4_4_ * fVar16 + fVar23 * (float)uStack_d0 + fVar20 * fStack_b8;
  uStack_1dc = CONCAT44(fVar16 * uStack_c0._4_4_ + fVar23 * (float)uStack_c8 + fVar20 * fStack_b0,
                        (float)uStack_c0 * fVar16 + fVar23 * uStack_d0._4_4_ + fVar20 * fStack_b4);
  (**(code **)(*plVar1 + 0x98))(plVar1,&fStack_1f8);
  (**(code **)(*plStack_a0 + 0x98))(plStack_a0,&UNK_10e482b24);
  plVar1 = plStack_90;
  plStack_150 = plStack_90;
  plStack_148 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_170 = plStack_a0;
  plStack_168 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar14 = *(undefined8 *)(lVar9 + 0x208);
  uStack_c8 = 0xb;
  uStack_d0 = &DAT_10f646e02;
  uStack_c0 = 0xa8d9be38f3072c89;
  uStack_f8 = 0x10;
  uStack_100 = &DAT_10f2c79d4;
  uStack_f0 = 0xcfc138de9c06458d;
  func_0x000107c2b074(&fStack_1f8,&uStack_d0);
  FUN_10a5e17a8(plVar13,&fStack_1f8,plVar1,&UNK_10e4ac8a8);
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
  func_0x000107c2b074(&fStack_1f8,&uStack_100);
  FUN_10a5e17a8(plVar13,&fStack_1f8,plStack_a0,&UNK_10e4ac8a8);
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
  puVar11 = (undefined8 *)0x1;
  fVar18 = (float)*(undefined8 *)(lStack_80 + 0x268);
  FUN_10a088744();
  fStack_1f8 = fVar18;
  if (puVar11 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
    fStack_1f0 = 0.0;
    fStack_1ec = 0.0;
    fStack_1e8 = 0.0;
    fStack_1e4 = 0.0;
  }
  else {
    plVar13 = (long *)puVar11[1];
    fStack_1e8 = (float)puVar11[1];
    fStack_1e4 = (float)((ulong)puVar11[1] >> 0x20);
    fStack_1f0 = (float)*puVar11;
    fStack_1ec = (float)((ulong)*puVar11 >> 0x20);
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  puStack_130 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff00);
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  FUN_10ab0fa64(param_3,plVar10,&fStack_1f0,uVar14,param_7,&puStack_130);
  (**(code **)(*param_3 + 0x90))(param_3,0,3,3);
  plVar10 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar12 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 1;
    do {
      lVar12 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar13 = plStack_168 + 1;
    do {
      lVar12 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar13 = plStack_148 + 1;
    do {
      lVar12 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plStack_108 = plStack_78;
  lStack_110 = lStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    FUN_10ab0f514(&fStack_1f8,param_2,uVar3,uVar4);
    if (*(undefined8 **)(param_1 + 0x30) == *(undefined8 **)(param_1 + 0x28)) {
LAB_10ab0f3c8:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab0f3cc);
      (*pcVar8)();
    }
    FUN_10ab0e20c(param_3,&lStack_80,&fStack_1f8,**(undefined8 **)(param_1 + 0x28),
                  *(undefined8 *)(lVar9 + 0x208),param_7);
    if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) < 0x11) goto LAB_10ab0f3c8;
    FUN_10ab0e20c(param_3,&fStack_1f8,&lStack_80,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                  *(undefined8 *)(lVar9 + 0x208),param_7);
    func_0x00010a04a704(&lStack_110,&lStack_80);
    plVar10 = (long *)CONCAT44(fStack_1ec,fStack_1f0);
    if (plVar10 != (long *)0x0) {
      plVar13 = plVar10 + 1;
      do {
        lVar12 = *plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  plVar10 = plStack_90;
  uStack_f8 = 7;
  uStack_100 = &DAT_10f68f823;
  uStack_f0 = 0x1bdb9bb5eeb4e3e6;
  uStack_128 = 5;
  puStack_130 = &DAT_10f68f8e3;
  uStack_120 = 0x18b39db4e3e4;
  plStack_148 = (long *)0x9;
  plStack_150 = (long *)&DAT_10f68f8e9;
  uStack_140 = 0x4c157a20e25ccd22;
  plStack_168 = (long *)0x13;
  plStack_170 = (long *)&DAT_10f68f8f3;
  uStack_160 = 0xd888a644513232b;
  uStack_188 = 0x11;
  puStack_190 = &DAT_10f68f907;
  uStack_180 = 0xcd44d47eb2e0f0ff;
  uStack_1a8 = 0x11;
  puStack_1b0 = &DAT_10f68f919;
  uStack_1a0 = 0x7fc4d47eb2e0a5aa;
  uStack_1c8 = 10;
  puStack_1d0 = &DAT_10f67922c;
  uStack_1c0 = 0xc8ffa31375970cbe;
  (**(code **)(*(long *)*param_4 + 0x90))(&fStack_1f8);
  (**(code **)(*plVar10 + 0x98))(plVar10,&fStack_1f8);
  plVar10 = *(long **)(lStack_110 + 0x268);
  (**(code **)(*(long *)*param_5 + 0x90))(&fStack_1f8);
  (**(code **)(*plVar10 + 0x98))(plVar10,&fStack_1f8);
  plVar10 = param_3 + 4;
  FUN_10a5dfd94(plVar10,*(undefined8 *)(param_1 + 0x40));
  plVar13 = param_3 + 4;
  FUN_10a01eacc(plVar13,plVar10);
  iVar5 = *(int *)(param_1 + 100);
  func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46ce0);
  FUN_10a048040(plVar13[0x2b],&fStack_1f8);
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
  func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46cf8);
  FUN_10a048040(plVar13[0x2b],&fStack_1f8);
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
  func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46d10);
  FUN_10a048040(plVar13[0x2b],&fStack_1f8);
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
  if (iVar5 == 1) {
    func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46ce0);
    FUN_10a047898(plVar13[0x2b],&fStack_1f8,&fStack_1f8);
  }
  else if (iVar5 == 2) {
    func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46cf8);
    FUN_10a047898(plVar13[0x2b],&fStack_1f8,&fStack_1f8);
  }
  else {
    if (iVar5 != 3) goto LAB_10ab0f114;
    func_0x000107c2b074(&fStack_1f8,&PTR_DAT_110c46d10);
    FUN_10a047898(plVar13[0x2b],&fStack_1f8,&fStack_1f8);
  }
  if ((int)fStack_1e4 < 0) {
    __ZdlPv(CONCAT44(fStack_1f4,fStack_1f8));
  }
LAB_10ab0f114:
  fStack_1f8 = (float)((uint)fStack_1f8 & 0xffffff00);
  fStack_1ec = 4.2039e-45;
  fStack_1e8 = 4.2039e-45;
  fStack_1f4 = 1.4013e-45;
  fStack_1f0 = 4.2039e-45;
  uStack_1dc = 0;
  fStack_1e4 = 0.0;
  fStack_1e0 = 0.0;
  uStack_1d4 = 0x3e80000;
  func_0x000107c2b074(&uStack_d0,&uStack_100);
  FUN_10a5e17a8(plVar13,&uStack_d0,plStack_90,&UNK_10e4ac8a8);
  func_0x000107c2b074(&uStack_d0,&puStack_130);
  if (lStack_110 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lStack_110 + 0x268);
  }
  FUN_10a5e17a8(plVar13,&uStack_d0,uVar14,&fStack_1f8);
  func_0x000107c2b074(&uStack_d0,&plStack_150);
  FUN_10a01671c(plVar13,&uStack_d0,param_1 + 0x20);
  func_0x000107c2b074(&uStack_d0,&plStack_170);
  FUN_10a01671c(plVar13,&uStack_d0,param_1 + 0x70);
  func_0x000107c2b074(&uStack_d0,&puStack_190);
  FUN_10a01671c(plVar13,&uStack_d0,param_1 + 0x74);
  func_0x000107c2b074(&uStack_d0,&puStack_1b0);
  FUN_10a01671c(plVar13,&uStack_d0,param_1 + 0x78);
  func_0x000107c2b074(&uStack_d0,&puStack_1d0);
  func_0x00010a01edd4(plVar13,&uStack_d0,param_1 + 0x7c);
  uStack_d0 = (undefined *)((ulong)uStack_d0 & 0xffffffffffffff00);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  FUN_10ab0fa64(param_3,plVar10,param_6,*(undefined8 *)(lVar9 + 0x208),param_7,&uStack_d0);
  (**(code **)(*param_3 + 0x90))(param_3,0,3,3);
  plVar10 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar13 = plStack_108 + 1;
    do {
      lVar9 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar9 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar10 = plStack_88 + 1;
    do {
      lVar9 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      lVar9 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10ab0f514; end: 10ab0fa63;  */

/* WARNING: Removing unreachable block (ram,0x00010ab10078) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f850) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f854) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f85c) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f864) */
/* WARNING: Removing unreachable block (ram,0x00010ab0f868) */
/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_10ab0f514(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined *****pppppuVar3;
  undefined ****ppppuVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  undefined ******ppppppuVar8;
  long *plVar9;
  undefined ******ppppppuVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined ****ppppuVar14;
  long lVar15;
  undefined ***pppuVar16;
  undefined *****pppppuVar17;
  undefined ****ppppuVar18;
  undefined *****pppppuVar19;
  undefined *****pppppuVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined ****ppppuStack_590;
  undefined ****ppppuStack_588;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  undefined *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined **ppuStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined8 *apuStack_4e8 [7];
  undefined ****ppppuStack_4b0;
  undefined ****ppppuStack_4a8;
  undefined1 auStack_4a0 [8];
  undefined8 *apuStack_498 [7];
  long lStack_460;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined *****pppppuStack_378;
  undefined *****pppppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 auStack_110 [8];
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ******ppppppuStack_e0;
  undefined *****pppppuStack_d8;
  code *pcStack_d0;
  undefined ****appppuStack_c8 [8];
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_2;
  FUN_10a2421c8();
  iVar11 = 1;
  puVar12 = (undefined8 *)0x4;
  FUN_10a048e7c(auStack_110,*(undefined8 *)(lVar15 + 0x1e0),0,param_3,param_4,1,4,1,0);
  if (param_2 == 0) {
    plVar9 = (long *)0x2c0;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110b9fda0;
    ppppppuVar10 = (undefined ******)(plVar9 + 3);
    FUN_10ab6aaa0(ppppppuVar10,0,auStack_110);
    ppppppuVar8 = (undefined ******)(plVar9 + 8);
    ppppppuStack_e0 = ppppppuVar10;
    pppppuStack_d8 = (undefined *****)plVar9;
    FUN_10a05b2a8(&ppppppuStack_e0,ppppppuVar8);
    FUN_10a05b04c(&pppppuStack_f0,&ppppppuStack_e0);
    pppppuVar17 = pppppuStack_d8;
    if (pppppuStack_d8 != (undefined *****)0x0) {
      plVar9 = (long *)(pppppuStack_d8 + 1);
      do {
        lVar15 = *plVar9;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)((long)*pppppuStack_d8 + 0x10))(pppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
    if (pppppuStack_e8 == (undefined *****)0x0) {
      pppppuStack_d8 = (undefined *****)0x0;
    }
    else {
      pppppuVar17 = pppppuStack_e8 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
        if (bVar7) {
          *pppppuVar17 = (undefined ****)((long)*pppppuVar17 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppppuStack_d8 = pppppuStack_e8;
      if (pppppuStack_e8 != (undefined *****)0x0) {
        pppppuVar17 = pppppuStack_e8 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
          if (bVar7) {
            *pppppuVar17 = (undefined ****)((long)*pppppuVar17 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppppuStack_88 = (undefined *****)&UNK_1053a6a3c;
    appppuStack_c8[0] = (undefined ****)&PTR_DAT_110c46ea8;
    pcStack_d0 = FUN_10ab149bc;
    ppppppuStack_e0 = (undefined ******)pppppuStack_f0;
    pppppuStack_80 = (undefined *****)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppppuStack_88);
    (*(code *)*pppppuStack_80)(&pppppuStack_80);
    pppppuVar17 = pppppuStack_e8;
    if (pppppuStack_e8 != (undefined *****)0x0) {
      pppppuVar20 = pppppuStack_e8 + 1;
      do {
        ppppuVar14 = *pppppuVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
        if (bVar7) {
          *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppuVar14 == (undefined ****)0x0) {
        (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
    param_1[1] = pppppuStack_d8;
    *param_1 = ppppppuStack_e0;
    if (pppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar17 = pppppuStack_d8 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
        if (bVar7) {
          *pppppuVar17 = (undefined ****)((long)*pppppuVar17 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppppuVar17 = appppuStack_c8;
    (*(code *)*appppuStack_c8[0])();
    if (pppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar20 = pppppuStack_d8 + 1;
      do {
        ppppuVar14 = *pppppuVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
        if (bVar7) {
          *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppppuVar19 = pppppuStack_d8;
      } while (cVar5 != '\0');
      goto LAB_10ab0f938;
    }
  }
  else {
    pppppuVar20 = *(undefined ******)(param_2 + 0x858);
    pppppuVar17 = *(undefined ******)(param_2 + 0x860);
    if (pppppuVar17 != (undefined *****)0x0) {
      pppppuVar19 = pppppuVar17 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
        if (bVar7) {
          *pppppuVar19 = (undefined ****)((long)*pppppuVar19 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppppuVar8 = (undefined ******)0x2a8;
    pppppuStack_100 = pppppuVar20;
    pppppuStack_f8 = pppppuVar17;
    __Znwm();
    FUN_10ab6aaa0();
    pppppuStack_f0 = pppppuVar20;
    pppppuStack_e8 = pppppuVar17;
    if (pppppuVar17 != (undefined *****)0x0) {
      pppppuVar19 = pppppuVar17 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
        if (bVar7) {
          *pppppuVar19 = (undefined ****)((long)*pppppuVar19 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppppuVar19 = pppppuVar17 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
        if (bVar7) {
          *pppppuVar19 = (undefined ****)((long)*pppppuVar19 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
        if (bVar7) {
          *pppppuVar19 = (undefined ****)((long)*pppppuVar19 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
    }
    ppppppuVar10 = &pppppuStack_88;
    pppppuStack_88 = pppppuVar20;
    pppppuStack_80 = pppppuVar17;
    FUN_10a05b208(&ppppppuStack_e0,ppppppuVar8);
    FUN_10a05b04c(param_1,&ppppppuStack_e0);
    pppppuVar17 = pppppuStack_d8;
    if (pppppuStack_d8 != (undefined *****)0x0) {
      pppppuVar20 = pppppuStack_d8 + 1;
      do {
        ppppuVar14 = *pppppuVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
        if (bVar7) {
          *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppuVar14 == (undefined ****)0x0) {
        (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
    if (pppppuStack_80 != (undefined *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppppuVar17 = pppppuStack_e8;
    if (pppppuStack_e8 != (undefined *****)0x0) {
      pppppuVar20 = pppppuStack_e8 + 1;
      do {
        ppppuVar14 = *pppppuVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
        if (bVar7) {
          *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppuVar14 == (undefined ****)0x0) {
        (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
    pppppuVar17 = pppppuStack_100;
    if ((pppppuStack_100 != (undefined *****)0x0) &&
       (pppppuVar20 = (undefined *****)*param_1, pppppuVar20 != (undefined *****)0x0)) {
      pppppuStack_d8 = (undefined *****)param_1[1];
      if (pppppuStack_d8 != (undefined *****)0x0) {
        pppppuVar19 = pppppuStack_d8 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
          if (bVar7) {
            *pppppuVar19 = (undefined ****)((long)*pppppuVar19 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuVar8 = (undefined ******)&ppppppuStack_e0;
      ppppppuStack_e0 = (undefined ******)pppppuVar20;
      FUN_10aa88c30(pppppuStack_100,ppppppuVar8);
      pppppuVar20 = pppppuStack_d8;
      if (pppppuStack_d8 != (undefined *****)0x0) {
        pppppuVar19 = pppppuStack_d8 + 1;
        do {
          ppppuVar14 = *pppppuVar19;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
          if (bVar7) {
            *pppppuVar19 = (undefined ****)((long)ppppuVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppuVar14 == (undefined ****)0x0) {
          (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppuVar17 = pppppuVar20;
        }
      }
    }
    if (pppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar20 = pppppuStack_f8 + 1;
      do {
        ppppuVar14 = *pppppuVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
        if (bVar7) {
          *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppppuVar19 = pppppuStack_f8;
      } while (cVar5 != '\0');
LAB_10ab0f938:
      if (ppppuVar14 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar19)[2])(pppppuVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppuVar17 = pppppuVar19;
      }
    }
  }
  if (pppppuStack_108 != (undefined *****)0x0) {
    pppppuVar20 = pppppuStack_108 + 1;
    do {
      ppppuVar14 = *pppppuVar20;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
      if (bVar7) {
        *pppppuVar20 = (undefined ****)((long)ppppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar14 == (undefined ****)0x0) {
      (*(code *)(*pppppuStack_108)[2])(pppppuStack_108);
      pppppuVar17 = pppppuStack_108;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar17;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&ppppppuStack_e0);
  func_0x00010a05248c(pppppuStack_108);
  FUN_10a054c5c(&pppppuStack_100);
  func_0x00010a0523dc(auStack_110);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_380 = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1c0 = 0xffffffffffffffff;
  uStack_1b8 = 0xffffffffffffffff;
  uStack_1b0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  uStack_198 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  uStack_188 = 0x3f800000;
  uStack_180 = 0;
  uStack_398 = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0xffffffffffffffff;
  uStack_3a8 = 0xffffffffffffffff;
  uStack_3a0 = 0;
  uStack_390 = 0;
  FUN_10a061728(&uStack_380,&uStack_3f0);
  plVar9 = (long *)CONCAT44(uStack_3bc,uStack_3c0);
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    do {
      lVar15 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)CONCAT44(uStack_3e4,uStack_3e8);
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    do {
      lVar15 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  pppppuVar20 = pppppuStack_370;
  pppppuVar19 = ppppppuVar10[1];
  pppppuStack_378 = *ppppppuVar10;
  if (ppppppuVar10[1] != (undefined *****)0x0) {
    pppppuVar3 = ppppppuVar10[1] + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
      if (bVar7) {
        *pppppuVar3 = (undefined ****)((long)*pppppuVar3 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (pppppuStack_370 != (undefined *****)0x0) {
    plVar9 = (long *)(pppppuStack_370 + 1);
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      lVar15 = (long)*pppppuStack_370;
      pppppuStack_370 = pppppuVar19;
      (**(code **)(lVar15 + 0x10))(pppppuVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar20);
      pppppuVar19 = pppppuStack_370;
    }
  }
  pppppuStack_370 = pppppuVar19;
  uStack_368 = 0;
  uStack_360 = 0xffffffffffffffff;
  uStack_358 = 0xffffffffffffffff;
  if (*(char *)(puVar12 + 2) == '\x01') {
    uStack_318 = 0;
    uStack_320 = puVar12[1];
    uStack_328 = *puVar12;
  }
  else if (iVar11 == 0) {
    uStack_318 = 1;
  }
  else {
    uStack_318 = 2;
  }
  (*(code *)(*pppppuVar17)[0x11])(pppppuVar17,&uStack_380);
  pppppuVar19 = *ppppppuVar10;
  pppppuVar20 = pppppuVar19;
  (*(code *)(*pppppuVar19)[5])();
  (*(code *)(*pppppuVar19)[6])();
  uStack_3e8 = (uint)pppppuVar20;
  if (uStack_3e8 < 2) {
    uStack_3e8 = 1;
  }
  uStack_3e4 = (uint)pppppuVar19;
  if (uStack_3e4 < 2) {
    uStack_3e4 = 1;
  }
  uStack_3f0 = 0;
  uStack_3ec = 0;
  (*(code *)(*pppppuVar17)[0x18])(pppppuVar17,&uStack_3f0);
  uStack_3f0 = 0x3f800000;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3dc = 0x3f800000;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0x3f800000;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3b4 = 0x3f800000;
  (*(code *)(*pppppuVar17)[0xb])(pppppuVar17,param_4,ppppppuVar8,&uStack_3f0,3);
  plVar9 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar2 = plStack_1a8 + 1;
    do {
      lVar15 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar2 = plStack_1d0 + 1;
    do {
      lVar15 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  pppppuVar17 = (undefined *****)&pppppuStack_378;
  func_0x00010a048e34(pppppuVar17,uStack_380);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return pppppuVar17;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&uStack_380);
  __Unwind_Resume();
  lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar17[10] = (undefined ****)0x0;
  pppppuVar17[7] = (undefined ****)0x0;
  pppppuVar17[6] = (undefined ****)0x0;
  pppppuVar17[9] = (undefined ****)0x0;
  pppppuVar17[8] = (undefined ****)0x0;
  pppppuVar17[3] = (undefined ****)0x0;
  pppppuVar17[2] = (undefined ****)0x0;
  pppppuVar17[5] = (undefined ****)0x0;
  pppppuVar17[4] = (undefined ****)0x0;
  pppppuVar17[1] = (undefined ****)0x0;
  *pppppuVar17 = (undefined ****)0x0;
  FUN_10a199aa4(&plStack_560,&ppppuStack_4b0);
  if (*(int *)((long)plStack_560 + 0x1fc) == 1) {
LAB_10ab0fe18:
    if ((int)plStack_560[0x3f] != 1) {
      if ((int)plStack_560[0x3f] < 1) {
        puVar13 = &UNK_10f660f58;
        goto LAB_10ab10510;
      }
      *(undefined4 *)(plStack_560 + 0x3f) = 1;
      *(undefined1 *)((long)plStack_560 + 0x1ec) = 1;
    }
    bVar7 = false;
    if ((*(float *)(plStack_560 + 0x41) == 2.0) &&
       (bVar7 = false, !NAN(*(float *)((long)plStack_560 + 0x20c)))) {
      bVar7 = *(float *)((long)plStack_560 + 0x20c) == 2.0;
    }
    if (bVar7) {
      if (*(char *)((long)plStack_560 + 0x1ec) == '\x01') goto LAB_10ab0fe70;
    }
    else {
      plStack_560[0x41] = 0x4000000040000000;
      *(undefined1 *)((long)plStack_560 + 0x1ec) = 1;
LAB_10ab0fe70:
      (**(code **)(*plStack_560 + 0x40))(plStack_560);
      *(undefined1 *)((long)plStack_560 + 0x1ec) = 0;
    }
    uStack_500 = 0;
    FUN_10ab149f4(&ppppuStack_4b0,auStack_550,&uStack_500,&plStack_560);
    ppppuVar4 = ppppuStack_4a8;
    ppppuVar14 = ppppuStack_4b0;
    ppppuStack_4b0 = (undefined ****)0x0;
    ppppuStack_4a8 = (undefined ****)0x0;
    ppppuVar18 = pppppuVar17[4];
    pppppuVar17[4] = ppppuVar4;
    pppppuVar17[3] = ppppuVar14;
    if (ppppuVar18 != (undefined ****)0x0) {
      ppppuVar14 = ppppuVar18 + 1;
      do {
        pppuVar16 = *ppppuVar14;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar14,0x10);
        if (bVar7) {
          *ppppuVar14 = (undefined ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined ***)0x0) {
        (*(code *)(*ppppuVar18)[2])(ppppuVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar18);
      }
    }
    ppppuVar14 = ppppuStack_4a8;
    if (ppppuStack_4a8 != (undefined ****)0x0) {
      ppppuVar4 = ppppuStack_4a8 + 1;
      do {
        pppuVar16 = *ppppuVar4;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
        if (bVar7) {
          *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_4a8)[2])(ppppuStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
      }
    }
    uStack_500 = 0;
    FUN_10a063b58(&ppppuStack_4b0,auStack_550,&uStack_500);
    FUN_10a02bf24(pppppuVar17 + 5,&ppppuStack_4b0);
    ppppuVar14 = ppppuStack_4a8;
    if (ppppuStack_4a8 != (undefined ****)0x0) {
      ppppuVar4 = ppppuStack_4a8 + 1;
      do {
        pppuVar16 = *ppppuVar4;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
        if (bVar7) {
          *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_4a8)[2])(ppppuStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
      }
    }
    uStack_500 = 0;
    FUN_10a063b58(&ppppuStack_4b0,auStack_550,&uStack_500);
    FUN_10a02bf24(pppppuVar17 + 7,&ppppuStack_4b0);
    ppppuVar14 = ppppuStack_4a8;
    if (ppppuStack_4a8 != (undefined ****)0x0) {
      ppppuVar4 = ppppuStack_4a8 + 1;
      do {
        pppuVar16 = *ppppuVar4;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
        if (bVar7) {
          *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_4a8)[2])(ppppuStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
      }
    }
    uStack_500 = 0;
    FUN_10a063b58(&ppppuStack_4b0,auStack_550,&uStack_500);
    FUN_10a02bf24(pppppuVar17 + 9,&ppppuStack_4b0);
    ppppuVar14 = ppppuStack_4a8;
    if (ppppuStack_4a8 != (undefined ****)0x0) {
      ppppuVar4 = ppppuStack_4a8 + 1;
      do {
        pppuVar16 = *ppppuVar4;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
        if (bVar7) {
          *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_4a8)[2])(ppppuStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
      }
    }
    uVar21 = 0;
    do {
      uStack_570 = 0;
      uStack_568 = 0;
      uVar23 = uVar21;
      puStack_578 = &uStack_570;
      FUN_10a0ee900(&ppppuStack_4b0,&UNK_10f68f986,0xf);
      func_0x00010a0e35d4(&puStack_578,&ppppuStack_4b0);
      FUN_10ab451f4(&ppppuStack_4b0,0,&UNK_10f68f942,0x1d,&UNK_10f68f960,0x19,&UNK_10f68f92b,0x16,1,
                    uVar23);
      if (ppppuStack_4b0[0x45] == ppppuStack_4b0[0x46]) {
        ppuVar22 = (undefined **)0x0;
      }
      else {
        ppuVar22 = *ppppuStack_4b0[0x45];
      }
      puVar13 = ppuVar22[0x4b];
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(undefined8 *)(puVar13 + 0x28) = 6;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x48) = 0;
      func_0x00010a3326b8(ppuVar22 + 0x43,1);
      func_0x00010a332748((long)ppuVar22 + 0x219,0);
      func_0x00010a332700((long)ppuVar22 + 0x21a,0);
      func_0x00010a3325d0(ppuVar22,0);
      *(undefined4 *)((long)ppuVar22 + 0x21e) = 0x1010101;
      FUN_10a0e3500(&ppuStack_518,&puStack_578);
      FUN_10a0da1b8(ppuVar22 + 0x40,ppuVar22[0x41]);
      ppuVar22[0x40] = (undefined *)ppuStack_518;
      ppuVar22[0x41] = puStack_510;
      ppuVar22[0x42] = puStack_508;
      if (puStack_508 == (undefined *)0x0) {
        ppuVar22[0x40] = (undefined *)(ppuVar22 + 0x41);
      }
      else {
        *(undefined ***)(puStack_510 + 0x10) = ppuVar22 + 0x41;
        puStack_510 = (undefined *)0x0;
        puStack_508 = (undefined *)0x0;
        ppuStack_518 = &puStack_510;
      }
      FUN_10a0da1b8(&ppuStack_518,puStack_510);
      if (pppppuVar17[5] != (undefined ****)0x0) {
        auStack_550[0] = 0;
        FUN_10a015a04(&uStack_500,auStack_550,pppppuVar17 + 5);
        uStack_528 = 0xc;
        puStack_530 = &DAT_10f64420f;
        uStack_520 = 0x9987691850227c7d;
        func_0x000107c2b074(auStack_550,&puStack_530);
        FUN_10a3368d0(ppuVar22,auStack_550,&uStack_500,&UNK_10e4ac8d0,0xd);
        if (cStack_539 < '\0') {
          __ZdlPv(auStack_550[0]);
        }
        FUN_10a044790(auStack_4f0);
        (*(code *)*apuStack_4e8[0])(apuStack_4e8);
        plVar9 = plStack_4f8;
        if (plStack_4f8 != (long *)0x0) {
          plVar2 = plStack_4f8 + 1;
          do {
            lVar15 = *plVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      if (pppppuVar17[7] != (undefined ****)0x0) {
        auStack_550[0] = 0;
        FUN_10a17647c(&uStack_500,auStack_550,pppppuVar17 + 7);
        uStack_528 = 0xb;
        puStack_530 = &DAT_10f651f9b;
        uStack_520 = 0xa8d9bd8931fecc89;
        func_0x000107c2b074(auStack_550,&puStack_530);
        FUN_10a3368d0(ppuVar22,auStack_550,&uStack_500,&UNK_10e4ac8a8,0xd);
        if (cStack_539 < '\0') {
          __ZdlPv(auStack_550[0]);
        }
        FUN_10a044790(auStack_4f0);
        (*(code *)*apuStack_4e8[0])(apuStack_4e8);
        plVar9 = plStack_4f8;
        if (plStack_4f8 != (long *)0x0) {
          plVar2 = plStack_4f8 + 1;
          do {
            lVar15 = *plVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      if (pppppuVar17[9] != (undefined ****)0x0) {
        auStack_550[0] = 0;
        FUN_10a17647c(&uStack_500,auStack_550,pppppuVar17 + 9);
        uStack_528 = 0xb;
        puStack_530 = &DAT_10f68f97a;
        uStack_520 = 0xa8d9bd8a37cce080;
        func_0x000107c2b074(auStack_550,&puStack_530);
        FUN_10a3368d0(ppuVar22,auStack_550,&uStack_500,&UNK_10e4ac8d0,0xd);
        if (cStack_539 < '\0') {
          __ZdlPv(auStack_550[0]);
        }
        FUN_10a044790(auStack_4f0);
        (*(code *)*apuStack_4e8[0])(apuStack_4e8);
        plVar9 = plStack_4f8;
        if (plStack_4f8 != (long *)0x0) {
          plVar2 = plStack_4f8 + 1;
          do {
            lVar15 = *plVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      ppppuStack_588 = ppppuStack_4a8;
      ppppuStack_590 = ppppuStack_4b0;
      if (ppppuStack_4a8 != (undefined ****)0x0) {
        ppppuVar14 = ppppuStack_4a8 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppuVar14,0x10);
          if (bVar7) {
            *ppppuVar14 = (undefined ***)((long)*ppppuVar14 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a044790(auStack_4a0);
      (*(code *)*apuStack_498[0])(apuStack_498);
      ppppuVar14 = ppppuStack_4a8;
      if (ppppuStack_4a8 != (undefined ****)0x0) {
        ppppuVar4 = ppppuStack_4a8 + 1;
        do {
          pppuVar16 = *ppppuVar4;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
          if (bVar7) {
            *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppuVar16 == (undefined ***)0x0) {
          (*(code *)(*ppppuStack_4a8)[2])(ppppuStack_4a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
        }
      }
      func_0x00010a2f4be0(pppppuVar17,&ppppuStack_590);
      ppppuVar14 = ppppuStack_588;
      if (ppppuStack_588 != (undefined ****)0x0) {
        ppppuVar4 = ppppuStack_588 + 1;
        do {
          pppuVar16 = *ppppuVar4;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
          if (bVar7) {
            *ppppuVar4 = (undefined ***)((long)pppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppuVar16 == (undefined ***)0x0) {
          (*(code *)(*ppppuStack_588)[2])(ppppuStack_588);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar14);
        }
      }
      FUN_10a0da1b8(&puStack_578,uStack_570);
      uVar1 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar1;
    } while (uVar1 != 3);
    if (plStack_558 != (long *)0x0) {
      plVar9 = plStack_558 + 1;
      do {
        lVar15 = *plVar9;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_558 + 0x10))(plStack_558);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_558);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_460) {
      return pppppuVar17;
    }
    ___stack_chk_fail();
  }
  else if (0 < *(int *)((long)plStack_560 + 0x1fc)) {
    *(undefined4 *)((long)plStack_560 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_560 + 0x1ec) = 1;
    goto LAB_10ab0fe18;
  }
  puVar13 = &UNK_10f660f7a;
LAB_10ab10510:
  FUN_10a00946c(puVar13);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab10518);
  (*pcVar6)();
}



/* Entry: 10ab0fa64; end: 10ab0fda3;  */

/* WARNING: Removing unreachable block (ram,0x00010ab10078) */

undefined8 *
FUN_10ab0fa64(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,int param_5,
             undefined8 *param_6)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_470;
  long *plStack_468;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 auStack_430 [2];
  char cStack_419;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined8 *apuStack_3c8 [7];
  long lStack_390;
  long *plStack_388;
  undefined1 auStack_380 [8];
  undefined8 *apuStack_378 [7];
  long lStack_340;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_260 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_278 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0xffffffffffffffff;
  uStack_288 = 0xffffffffffffffff;
  uStack_280 = 0;
  uStack_270 = 0;
  FUN_10a061728(&uStack_260,&uStack_2d0);
  plVar6 = (long *)CONCAT44(uStack_29c,uStack_2a0);
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = (long *)CONCAT44(uStack_2c4,uStack_2c8);
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_250;
  plVar11 = (long *)param_3[1];
  uStack_258 = *param_3;
  if (param_3[1] != 0) {
    plVar2 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plStack_250 != (long *)0x0) {
    plVar2 = plStack_250 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      lVar10 = *plStack_250;
      plStack_250 = plVar11;
      (**(code **)(lVar10 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      plVar11 = plStack_250;
    }
  }
  plStack_250 = plVar11;
  uStack_248 = 0;
  uStack_240 = 0xffffffffffffffff;
  uStack_238 = 0xffffffffffffffff;
  if (*(char *)(param_6 + 2) == '\x01') {
    uStack_1f8 = 0;
    uStack_200 = param_6[1];
    uStack_208 = *param_6;
  }
  else if (param_5 == 0) {
    uStack_1f8 = 1;
  }
  else {
    uStack_1f8 = 2;
  }
  (**(code **)(*param_1 + 0x88))(param_1,&uStack_260);
  plVar11 = (long *)*param_3;
  plVar6 = plVar11;
  (**(code **)(*plVar11 + 0x28))();
  (**(code **)(*plVar11 + 0x30))();
  uStack_2c8 = (uint)plVar6;
  if (uStack_2c8 < 2) {
    uStack_2c8 = 1;
  }
  uStack_2c4 = (uint)plVar11;
  if (uStack_2c4 < 2) {
    uStack_2c4 = 1;
  }
  uStack_2d0 = 0;
  uStack_2cc = 0;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_2d0);
  uStack_2d0 = 0x3f800000;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2bc = 0x3f800000;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0x3f800000;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_294 = 0x3f800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_4,param_2,&uStack_2d0,3);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar11 = plStack_b0 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar7 = &uStack_258;
  func_0x00010a048e34(puVar7,uStack_260);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&uStack_260);
  __Unwind_Resume();
  lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7[10] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  FUN_10a199aa4(&plStack_440,&lStack_390);
  if (*(int *)((long)plStack_440 + 0x1fc) == 1) {
LAB_10ab0fe18:
    if ((int)plStack_440[0x3f] != 1) {
      if ((int)plStack_440[0x3f] < 1) {
        puVar8 = &UNK_10f660f58;
        goto LAB_10ab10510;
      }
      *(undefined4 *)(plStack_440 + 0x3f) = 1;
      *(undefined1 *)((long)plStack_440 + 0x1ec) = 1;
    }
    bVar5 = false;
    if ((*(float *)(plStack_440 + 0x41) == 2.0) &&
       (bVar5 = false, !NAN(*(float *)((long)plStack_440 + 0x20c)))) {
      bVar5 = *(float *)((long)plStack_440 + 0x20c) == 2.0;
    }
    if (bVar5) {
      if (*(char *)((long)plStack_440 + 0x1ec) == '\x01') goto LAB_10ab0fe70;
    }
    else {
      plStack_440[0x41] = 0x4000000040000000;
      *(undefined1 *)((long)plStack_440 + 0x1ec) = 1;
LAB_10ab0fe70:
      (**(code **)(*plStack_440 + 0x40))(plStack_440);
      *(undefined1 *)((long)plStack_440 + 0x1ec) = 0;
    }
    uStack_3e0 = 0;
    FUN_10ab149f4(&lStack_390,auStack_430,&uStack_3e0,&plStack_440);
    plVar6 = plStack_388;
    lVar10 = lStack_390;
    lStack_390 = 0;
    plStack_388 = (long *)0x0;
    plVar11 = (long *)puVar7[4];
    puVar7[4] = plVar6;
    puVar7[3] = lVar10;
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 1;
      do {
        lVar10 = *plVar6;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar6 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar11 = plStack_388 + 1;
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    uStack_3e0 = 0;
    FUN_10a063b58(&lStack_390,auStack_430,&uStack_3e0);
    FUN_10a02bf24(puVar7 + 5,&lStack_390);
    plVar6 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar11 = plStack_388 + 1;
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    uStack_3e0 = 0;
    FUN_10a063b58(&lStack_390,auStack_430,&uStack_3e0);
    FUN_10a02bf24(puVar7 + 7,&lStack_390);
    plVar6 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar11 = plStack_388 + 1;
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    uStack_3e0 = 0;
    FUN_10a063b58(&lStack_390,auStack_430,&uStack_3e0);
    FUN_10a02bf24(puVar7 + 9,&lStack_390);
    plVar6 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar11 = plStack_388 + 1;
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    uVar12 = 0;
    do {
      uStack_450 = 0;
      uStack_448 = 0;
      uVar13 = uVar12;
      puStack_458 = &uStack_450;
      FUN_10a0ee900(&lStack_390,&UNK_10f68f986,0xf);
      func_0x00010a0e35d4(&puStack_458,&lStack_390);
      FUN_10ab451f4(&lStack_390,0,&UNK_10f68f942,0x1d,&UNK_10f68f960,0x19,&UNK_10f68f92b,0x16,1,
                    uVar13);
      if (*(long **)(lStack_390 + 0x228) == *(long **)(lStack_390 + 0x230)) {
        lVar10 = 0;
      }
      else {
        lVar10 = **(long **)(lStack_390 + 0x228);
      }
      lVar9 = *(long *)(lVar10 + 600);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 6;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      func_0x00010a3326b8(lVar10 + 0x218,1);
      func_0x00010a332748(lVar10 + 0x219,0);
      func_0x00010a332700(lVar10 + 0x21a,0);
      func_0x00010a3325d0(lVar10,0);
      *(undefined4 *)(lVar10 + 0x21e) = 0x1010101;
      FUN_10a0e3500(&plStack_3f8,&puStack_458);
      FUN_10a0da1b8((long *)(lVar10 + 0x200),*(undefined8 *)(lVar10 + 0x208));
      *(long **)(lVar10 + 0x200) = plStack_3f8;
      *(long *)(lVar10 + 0x208) = lStack_3f0;
      *(long *)(lVar10 + 0x210) = lStack_3e8;
      if (lStack_3e8 == 0) {
        *(long *)(lVar10 + 0x200) = lVar10 + 0x208;
      }
      else {
        *(long *)(lStack_3f0 + 0x10) = lVar10 + 0x208;
        lStack_3f0 = 0;
        lStack_3e8 = 0;
        plStack_3f8 = &lStack_3f0;
      }
      FUN_10a0da1b8(&plStack_3f8,lStack_3f0);
      if (puVar7[5] != 0) {
        auStack_430[0] = 0;
        FUN_10a015a04(&uStack_3e0,auStack_430,puVar7 + 5);
        uStack_408 = 0xc;
        puStack_410 = &DAT_10f64420f;
        uStack_400 = 0x9987691850227c7d;
        func_0x000107c2b074(auStack_430,&puStack_410);
        FUN_10a3368d0(lVar10,auStack_430,&uStack_3e0,&UNK_10e4ac8d0,0xd);
        if (cStack_419 < '\0') {
          __ZdlPv(auStack_430[0]);
        }
        FUN_10a044790(auStack_3d0);
        (*(code *)*apuStack_3c8[0])(apuStack_3c8);
        plVar6 = plStack_3d8;
        if (plStack_3d8 != (long *)0x0) {
          plVar11 = plStack_3d8 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      if (puVar7[7] != 0) {
        auStack_430[0] = 0;
        FUN_10a17647c(&uStack_3e0,auStack_430,puVar7 + 7);
        uStack_408 = 0xb;
        puStack_410 = &DAT_10f651f9b;
        uStack_400 = 0xa8d9bd8931fecc89;
        func_0x000107c2b074(auStack_430,&puStack_410);
        FUN_10a3368d0(lVar10,auStack_430,&uStack_3e0,&UNK_10e4ac8a8,0xd);
        if (cStack_419 < '\0') {
          __ZdlPv(auStack_430[0]);
        }
        FUN_10a044790(auStack_3d0);
        (*(code *)*apuStack_3c8[0])(apuStack_3c8);
        plVar6 = plStack_3d8;
        if (plStack_3d8 != (long *)0x0) {
          plVar11 = plStack_3d8 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      if (puVar7[9] != 0) {
        auStack_430[0] = 0;
        FUN_10a17647c(&uStack_3e0,auStack_430,puVar7 + 9);
        uStack_408 = 0xb;
        puStack_410 = &DAT_10f68f97a;
        uStack_400 = 0xa8d9bd8a37cce080;
        func_0x000107c2b074(auStack_430,&puStack_410);
        FUN_10a3368d0(lVar10,auStack_430,&uStack_3e0,&UNK_10e4ac8d0,0xd);
        if (cStack_419 < '\0') {
          __ZdlPv(auStack_430[0]);
        }
        FUN_10a044790(auStack_3d0);
        (*(code *)*apuStack_3c8[0])(apuStack_3c8);
        plVar6 = plStack_3d8;
        if (plStack_3d8 != (long *)0x0) {
          plVar11 = plStack_3d8 + 1;
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plStack_468 = plStack_388;
      lStack_470 = lStack_390;
      if (plStack_388 != (long *)0x0) {
        plVar6 = plStack_388 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a044790(auStack_380);
      (*(code *)*apuStack_378[0])(apuStack_378);
      plVar6 = plStack_388;
      if (plStack_388 != (long *)0x0) {
        plVar11 = plStack_388 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      func_0x00010a2f4be0(puVar7,&lStack_470);
      plVar6 = plStack_468;
      if (plStack_468 != (long *)0x0) {
        plVar11 = plStack_468 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_468 + 0x10))(plStack_468);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a0da1b8(&puStack_458,uStack_450);
      uVar1 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar1;
    } while (uVar1 != 3);
    if (plStack_438 != (long *)0x0) {
      plVar6 = plStack_438 + 1;
      do {
        lVar10 = *plVar6;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_438 + 0x10))(plStack_438);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_438);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_340) {
      return puVar7;
    }
    ___stack_chk_fail();
  }
  else if (0 < *(int *)((long)plStack_440 + 0x1fc)) {
    *(undefined4 *)((long)plStack_440 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_440 + 0x1ec) = 1;
    goto LAB_10ab0fe18;
  }
  puVar8 = &UNK_10f660f7a;
LAB_10ab10510:
  FUN_10a00946c(puVar8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab10518);
  (*pcVar4)();
}



/* Entry: 10ab0fda4; end: 10ab105ff;  */

/* WARNING: Removing unreachable block (ram,0x00010ab10078) */

undefined8 * FUN_10ab0fda4(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_1a0;
  long *plStack_198;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  undefined8 *apuStack_f8 [7];
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10a199aa4(&plStack_170,&lStack_c0);
  if (*(int *)((long)plStack_170 + 0x1fc) == 1) {
LAB_10ab0fe18:
    if ((int)plStack_170[0x3f] != 1) {
      if ((int)plStack_170[0x3f] < 1) {
        puVar6 = &UNK_10f660f58;
        goto LAB_10ab10510;
      }
      *(undefined4 *)(plStack_170 + 0x3f) = 1;
      *(undefined1 *)((long)plStack_170 + 0x1ec) = 1;
    }
    bVar5 = false;
    if ((*(float *)(plStack_170 + 0x41) == 2.0) &&
       (bVar5 = false, !NAN(*(float *)((long)plStack_170 + 0x20c)))) {
      bVar5 = *(float *)((long)plStack_170 + 0x20c) == 2.0;
    }
    if (bVar5) {
      if (*(char *)((long)plStack_170 + 0x1ec) == '\x01') goto LAB_10ab0fe70;
    }
    else {
      plStack_170[0x41] = 0x4000000040000000;
      *(undefined1 *)((long)plStack_170 + 0x1ec) = 1;
LAB_10ab0fe70:
      (**(code **)(*plStack_170 + 0x40))(plStack_170);
      *(undefined1 *)((long)plStack_170 + 0x1ec) = 0;
    }
    uStack_110 = 0;
    FUN_10ab149f4(&lStack_c0,auStack_160,&uStack_110,&plStack_170);
    plVar2 = plStack_b8;
    lVar8 = lStack_c0;
    lStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    plVar9 = (long *)param_1[4];
    param_1[4] = plVar2;
    param_1[3] = lVar8;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_110 = 0;
    FUN_10a063b58(&lStack_c0,auStack_160,&uStack_110);
    FUN_10a02bf24(param_1 + 5,&lStack_c0);
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_110 = 0;
    FUN_10a063b58(&lStack_c0,auStack_160,&uStack_110);
    FUN_10a02bf24(param_1 + 7,&lStack_c0);
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_110 = 0;
    FUN_10a063b58(&lStack_c0,auStack_160,&uStack_110);
    FUN_10a02bf24(param_1 + 9,&lStack_c0);
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uVar10 = 0;
    do {
      uStack_180 = 0;
      uStack_178 = 0;
      uVar11 = uVar10;
      puStack_188 = &uStack_180;
      FUN_10a0ee900(&lStack_c0,&UNK_10f68f986,0xf);
      func_0x00010a0e35d4(&puStack_188,&lStack_c0);
      FUN_10ab451f4(&lStack_c0,0,&UNK_10f68f942,0x1d,&UNK_10f68f960,0x19,&UNK_10f68f92b,0x16,1,
                    uVar11);
      if (*(long **)(lStack_c0 + 0x228) == *(long **)(lStack_c0 + 0x230)) {
        lVar8 = 0;
      }
      else {
        lVar8 = **(long **)(lStack_c0 + 0x228);
      }
      lVar7 = *(long *)(lVar8 + 600);
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 6;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      func_0x00010a3326b8(lVar8 + 0x218,1);
      func_0x00010a332748(lVar8 + 0x219,0);
      func_0x00010a332700(lVar8 + 0x21a,0);
      func_0x00010a3325d0(lVar8,0);
      *(undefined4 *)(lVar8 + 0x21e) = 0x1010101;
      FUN_10a0e3500(&plStack_128,&puStack_188);
      FUN_10a0da1b8((long *)(lVar8 + 0x200),*(undefined8 *)(lVar8 + 0x208));
      *(long **)(lVar8 + 0x200) = plStack_128;
      *(long *)(lVar8 + 0x208) = lStack_120;
      *(long *)(lVar8 + 0x210) = lStack_118;
      if (lStack_118 == 0) {
        *(long *)(lVar8 + 0x200) = lVar8 + 0x208;
      }
      else {
        *(long *)(lStack_120 + 0x10) = lVar8 + 0x208;
        lStack_120 = 0;
        lStack_118 = 0;
        plStack_128 = &lStack_120;
      }
      FUN_10a0da1b8(&plStack_128,lStack_120);
      if (param_1[5] != 0) {
        auStack_160[0] = 0;
        FUN_10a015a04(&uStack_110,auStack_160,param_1 + 5);
        uStack_138 = 0xc;
        puStack_140 = &DAT_10f64420f;
        uStack_130 = 0x9987691850227c7d;
        func_0x000107c2b074(auStack_160,&puStack_140);
        FUN_10a3368d0(lVar8,auStack_160,&uStack_110,&UNK_10e4ac8d0,0xd);
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
        FUN_10a044790(auStack_100);
        (*(code *)*apuStack_f8[0])(apuStack_f8);
        plVar2 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar9 = plStack_108 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      if (param_1[7] != 0) {
        auStack_160[0] = 0;
        FUN_10a17647c(&uStack_110,auStack_160,param_1 + 7);
        uStack_138 = 0xb;
        puStack_140 = &DAT_10f651f9b;
        uStack_130 = 0xa8d9bd8931fecc89;
        func_0x000107c2b074(auStack_160,&puStack_140);
        FUN_10a3368d0(lVar8,auStack_160,&uStack_110,&UNK_10e4ac8a8,0xd);
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
        FUN_10a044790(auStack_100);
        (*(code *)*apuStack_f8[0])(apuStack_f8);
        plVar2 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar9 = plStack_108 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      if (param_1[9] != 0) {
        auStack_160[0] = 0;
        FUN_10a17647c(&uStack_110,auStack_160,param_1 + 9);
        uStack_138 = 0xb;
        puStack_140 = &DAT_10f68f97a;
        uStack_130 = 0xa8d9bd8a37cce080;
        func_0x000107c2b074(auStack_160,&puStack_140);
        FUN_10a3368d0(lVar8,auStack_160,&uStack_110,&UNK_10e4ac8d0,0xd);
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
        FUN_10a044790(auStack_100);
        (*(code *)*apuStack_f8[0])(apuStack_f8);
        plVar2 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar9 = plStack_108 + 1;
          do {
            lVar8 = *plVar9;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      plStack_198 = plStack_b8;
      lStack_1a0 = lStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a044790(auStack_b0);
      (*(code *)*apuStack_a8[0])(apuStack_a8);
      plVar2 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar9 = plStack_b8 + 1;
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      func_0x00010a2f4be0(param_1,&lStack_1a0);
      plVar2 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar9 = plStack_198 + 1;
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      FUN_10a0da1b8(&puStack_188,uStack_180);
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar1;
    } while (uVar1 != 3);
    if (plStack_168 != (long *)0x0) {
      plVar2 = plStack_168 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else if (0 < *(int *)((long)plStack_170 + 0x1fc)) {
    *(undefined4 *)((long)plStack_170 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_170 + 0x1ec) = 1;
    goto LAB_10ab0fe18;
  }
  puVar6 = &UNK_10f660f7a;
LAB_10ab10510:
  FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab10518);
  (*pcVar4)();
}



/* Entry: 10ab10600; end: 10ab108b3;  */

void FUN_10ab10600(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,byte *param_11)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((ulong)*param_11 < (ulong)(param_1[1] - *param_1 >> 4)) {
    uVar5 = *(undefined8 *)(*param_1 + (ulong)*param_11 * 0x10);
    FUN_10a1db4cc(param_1[5],param_3);
    (**(code **)(*(long *)param_1[5] + 0x98))((long *)param_1[5],param_8);
    plVar2 = param_2 + 4;
    FUN_10a5dfd94(plVar2,uVar5);
    plVar3 = param_2 + 4;
    FUN_10a01eacc(plVar3,plVar2);
    if ((*param_4 != 0) && (*param_5 != 0)) {
      uStack_70 = 0x4150e421579c4609;
      uStack_78 = 0xd;
      puStack_80 = &DAT_10f68f996;
      uStack_90 = 0x149da1ae2aa3139a;
      uStack_98 = 0xd;
      puStack_a0 = &DAT_10f68f9a4;
      uStack_b8 = 0xd;
      puStack_c0 = &DAT_10f68f9b2;
      uStack_b0 = 0x4150e42051ae4319;
      FUN_10a1db4cc(param_1[7],param_4);
      func_0x000107c2b074(&uStack_100,&puStack_80);
      FUN_10a7ec36c(plVar3,&uStack_100,param_9);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_fc,uStack_100));
      }
      FUN_10a1db4cc(param_1[9],param_5);
      func_0x000107c2b074(&uStack_100,&puStack_a0);
      FUN_10a015dcc(plVar3,&uStack_100,param_6);
      if (uStack_ec < 0) {
        __ZdlPv(CONCAT44(uStack_fc,uStack_100));
      }
      func_0x000107c2b074(&uStack_100,&puStack_c0);
      FUN_10a7ec36c(plVar3,&uStack_100,param_10);
      if (uStack_ec._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_fc,uStack_100));
      }
    }
    uStack_100 = 0x3f800000;
    uStack_f4 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_ec = 0x3f800000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0x3f800000;
    uStack_cc = 0;
    uStack_d4 = 0;
    uStack_c4 = 0x3f800000;
    (**(code **)(*param_2 + 0x58))(param_2,param_1[3],plVar2,&uStack_100,3);
    lVar4 = param_1[5];
    FUN_10a18cbd8(lVar4 + 0x288);
    FUN_10a1da3a4(lVar4,0,0,0,4,0,0,0);
    lVar4 = param_1[7];
    FUN_10a18cbd8(lVar4 + 0x288);
    FUN_10a1da3a4(lVar4,0,0,0,4,0,0,0);
    lVar4 = param_1[9];
    FUN_10a18cbd8(lVar4 + 0x288);
    FUN_10a1da3a4(lVar4,0,0,0,4,0,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab10890);
  (*pcVar1)();
}



/* Entry: 10ab108b4; end: 10ab10957;  */

undefined8 * FUN_10ab108b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 10ab10958; end: 10ab10a0b;  */

void FUN_10ab10958(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  func_0x00010a015c50(param_1 + 1,&uStack_40);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar6 = 0x80;
  __Znwm();
  FUN_10ab14b48();
  lVar5 = *param_1;
  *param_1 = lVar6;
  if (lVar5 != 0) {
    FUN_10a27632c(param_1);
  }
  return;
}



/* Entry: 10ab10a0c; end: 10ab1143f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab11990) */
/* WARNING: Removing unreachable block (ram,0x00010ab119a8) */
/* WARNING: Removing unreachable block (ram,0x00010ab117a8) */
/* WARNING: Removing unreachable block (ram,0x00010ab116d4) */
/* WARNING: Removing unreachable block (ram,0x00010ab114d8) */
/* WARNING: Removing unreachable block (ram,0x00010ab10b34) */
/* WARNING: Removing unreachable block (ram,0x00010ab10bfc) */
/* WARNING: Removing unreachable block (ram,0x00010ab11518) */
/* WARNING: Removing unreachable block (ram,0x00010ab116e4) */
/* WARNING: Removing unreachable block (ram,0x00010ab117e8) */
/* WARNING: Removing unreachable block (ram,0x00010ab11920) */
/* WARNING: Removing unreachable block (ram,0x00010ab119e4) */

long ** FUN_10ab10a0c(long *param_1,long **param_2,long *param_3,long param_4,long *param_5,
                     long *param_6)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long **pplVar22;
  long **pplVar23;
  long **pplVar24;
  int iVar25;
  ulong uVar26;
  undefined **ppuVar27;
  long *unaff_x27;
  long unaff_x28;
  long **pplStack_3c8;
  undefined8 uStack_3c0;
  long **pplStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  long **pplStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long **pplStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined2 uStack_360;
  undefined1 uStack_35e;
  undefined1 uStack_359;
  long **applStack_350 [2];
  char cStack_339;
  long **pplStack_338;
  char cStack_321;
  long alStack_320 [3];
  long lStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [8];
  long *plStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 auStack_260 [3];
  long lStack_248;
  long lStack_240;
  long lStack_228;
  long lStack_210;
  long *plStack_208;
  long **pplStack_200;
  long **pplStack_1f8;
  long **pplStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long **pplStack_1d8;
  long **pplStack_1d0;
  long **pplStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long **pplStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long **pplStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 ***pppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 ***pppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_121;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1a0 = param_6;
  pplStack_198 = param_2;
  if (param_6 == (long *)0x0) {
    (*(code *)(*param_2)[0x19])();
    plStack_1a0 = param_2[0x41];
  }
  pplVar23 = (long **)&uStack_d0;
  pplVar24 = (long **)(param_1 + 1);
  plVar13 = *pplVar24;
  if (plVar13 == (long *)0x0) {
    func_0x000107c2b054(&plStack_120,&UNK_10f68f9c0);
    puVar17 = (undefined8 *)*param_1;
    uVar26 = puVar17[1];
    puVar12 = (undefined8 *)*puVar17;
    if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
      uVar26 = (ulong)*(byte *)((long)puVar17 + 0x17);
      puVar12 = puVar17;
    }
    pplVar23 = &plStack_120;
    lStack_1a8 = param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar23,puVar12,uVar26);
    uStack_c0 = SUB84(pplVar23[2],0);
    uStack_bc = (undefined4)((ulong)pplVar23[2] >> 0x20);
    uStack_c8 = SUB84(pplVar23[1],0);
    uStack_c4 = (undefined4)((ulong)pplVar23[1] >> 0x20);
    uStack_d0._0_4_ = SUB84(*pplVar23,0);
    uStack_d0._4_4_ = (undefined4)((ulong)*pplVar23 >> 0x20);
    pplVar23[1] = (long *)0x0;
    pplVar23[2] = (long *)0x0;
    *pplVar23 = (long *)0x0;
    func_0x000107c2b054(&pppuStack_160,&UNK_10f68f81a);
    ppppuVar5 = (undefined8 ****)pppuStack_160;
    if (-1 < (long)uStack_150) {
      uStack_158 = uStack_150 >> 0x38;
      ppppuVar5 = &pppuStack_160;
    }
    plVar13 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar13,ppppuVar5,uStack_158);
    uStack_138 = plVar13[1];
    pppuStack_140 = (undefined8 ***)*plVar13;
    uStack_130 = plVar13[2];
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = 0;
    if (uStack_150._7_1_ < '\0') {
      __ZdlPv(pppuStack_160);
    }
    if ((long)plStack_110 < 0) {
      __ZdlPv(plStack_120);
    }
    func_0x000107c2b054(&plStack_120,&UNK_10f68f9c0);
    puVar17 = (undefined8 *)*param_1;
    uVar26 = puVar17[1];
    puVar12 = (undefined8 *)*puVar17;
    if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
      uVar26 = (ulong)*(byte *)((long)puVar17 + 0x17);
      puVar12 = puVar17;
    }
    pplVar23 = &plStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar23,puVar12,uVar26);
    uStack_c0 = SUB84(pplVar23[2],0);
    uStack_bc = (undefined4)((ulong)pplVar23[2] >> 0x20);
    uStack_c8 = SUB84(pplVar23[1],0);
    uStack_c4 = (undefined4)((ulong)pplVar23[1] >> 0x20);
    uStack_d0._0_4_ = SUB84(*pplVar23,0);
    uStack_d0._4_4_ = (undefined4)((ulong)*pplVar23 >> 0x20);
    pplVar23[1] = (long *)0x0;
    pplVar23[2] = (long *)0x0;
    *pplVar23 = (long *)0x0;
    func_0x000107c2b054(&pppuStack_178,&UNK_10f5f9ef0);
    ppppuVar5 = (undefined8 ****)pppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      ppppuVar5 = &pppuStack_178;
    }
    plVar13 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar13,ppppuVar5,uStack_170);
    uStack_158 = plVar13[1];
    pppuStack_160 = (undefined8 ***)*plVar13;
    uStack_150 = plVar13[2];
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = 0;
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pppuStack_178);
    }
    if ((long)plStack_110 < 0) {
      __ZdlPv(plStack_120);
    }
    uVar26 = uStack_138;
    ppppuVar5 = (undefined8 ****)pppuStack_140;
    if (-1 < (long)uStack_130) {
      uVar26 = uStack_130 >> 0x38;
      ppppuVar5 = &pppuStack_140;
    }
    uVar1 = uStack_158;
    ppppuVar6 = (undefined8 ****)pppuStack_160;
    if (-1 < (long)uStack_150) {
      uVar1 = uStack_150 >> 0x38;
      ppppuVar6 = &pppuStack_160;
    }
    lVar18 = *param_1;
    lVar16 = (long)*(char *)(lVar18 + 0x2f);
    if (lVar16 < 0) {
      lVar20 = *(long *)(lVar18 + 0x18);
      lVar16 = *(long *)(lVar18 + 0x20);
    }
    else {
      lVar20 = lVar18 + 0x18;
    }
    FUN_10ab451f4(&uStack_d0,0,ppppuVar5,uVar26,ppppuVar6,uVar1,lVar20,lVar16,1);
    func_0x00010a015c50(pplVar24,&uStack_d0);
    plVar13 = (long *)(*pplVar24)[0x45];
    if (plVar13 == (long *)(*pplVar24)[0x46]) {
      lVar16 = 0;
    }
    else {
      lVar16 = *plVar13;
    }
    lVar18 = *(long *)(lVar16 + 600);
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 6;
    *(undefined8 *)(lVar18 + 0x40) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined8 *)(lVar18 + 0x50) = 0;
    *(undefined8 *)(lVar18 + 0x48) = 0;
    func_0x00010a3326b8(lVar16 + 0x218,1);
    func_0x00010a3325d0(lVar16,0);
    func_0x00010a332748(lVar16 + 0x219,*(undefined1 *)(*param_1 + 0x78));
    func_0x00010a332700(lVar16 + 0x21a,*(undefined1 *)(*param_1 + 0x78));
    *(uint *)(lVar16 + 0x21e) = (*(byte *)(*param_1 + 0x78) ^ 1) * 0x1010101;
    lVar18 = *param_1;
    puVar12 = *(undefined8 **)(lVar18 + 0x30);
    puVar17 = *(undefined8 **)(lVar18 + 0x38);
    pplStack_1b0 = pplVar24;
    if (puVar12 != puVar17) {
      do {
        puVar14 = puVar12;
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          puVar14 = (undefined8 *)*puVar12;
        }
        func_0x000107c2b07c(&plStack_120,puVar14);
        FUN_10a047898(lVar16 + 0x200,&plStack_120,&plStack_120);
        if ((long)plStack_110 < 0) {
          __ZdlPv(plStack_120);
        }
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar17);
      lVar18 = *param_1;
    }
    if (*(long *)(lVar18 + 0x50) != *(long *)(lVar18 + 0x48)) {
      uVar26 = 0;
      do {
        pppuStack_178 = (undefined8 ****)0x0;
        FUN_10a063b58(&plStack_120,&uStack_121,&pppuStack_178);
        puVar12 = (undefined8 *)param_1[7];
        if (puVar12 < (undefined8 *)param_1[8]) {
          puVar17 = puVar12 + 2;
          puVar12[1] = plStack_118;
          *puVar12 = plStack_120;
          iVar25 = (int)uVar26;
LAB_10ab10eb0:
          param_1[7] = (long)puVar17;
        }
        else {
          uStack_190 = CONCAT44(uStack_190._4_4_,(int)uVar26);
          lVar18 = param_1[6];
          unaff_x28 = (long)puVar12 - lVar18;
          uVar1 = (unaff_x28 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10ab1422c();
            goto LAB_10ab11308;
          }
          uVar19 = param_1[8] - lVar18;
          uVar21 = (long)uVar19 >> 3;
          if (uVar21 <= uVar1) {
            uVar21 = uVar1;
          }
          if (0x7fffffffffffffef < uVar19) {
            uVar21 = 0xfffffffffffffff;
          }
          if (uVar21 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10ab11308;
          }
          lVar20 = uVar21 << 4;
          __Znwm();
          puVar12 = (undefined8 *)(lVar20 + unaff_x28);
          puVar17 = puVar12 + 2;
          puVar12[1] = plStack_118;
          *puVar12 = plStack_120;
          plStack_120 = (long *)0x0;
          plStack_118 = (long *)0x0;
          _memcpy(puVar12 + (unaff_x28 >> 4) * -2,lVar18,unaff_x28);
          param_1[6] = (long)(puVar12 + (unaff_x28 >> 4) * -2);
          param_1[7] = (long)puVar17;
          param_1[8] = lVar20 + uVar21 * 0x10;
          if (lVar18 == 0) {
            iVar25 = (int)uStack_190;
            goto LAB_10ab10eb0;
          }
          __ZdlPv(lVar18);
          plVar13 = plStack_118;
          param_1[7] = (long)puVar17;
          iVar25 = (int)uStack_190;
          if (plStack_118 != (long *)0x0) {
            plVar2 = plStack_118 + 1;
            do {
              lVar18 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_118 + 0x10))(plStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
        }
        pplVar24 = &plStack_120;
        pppuStack_178 = (undefined8 ****)0x0;
        if ((ulong)(param_1[7] - param_1[6] >> 4) <= uVar26) goto LAB_10ab11308;
        FUN_10a17647c(&plStack_120,&pppuStack_178,param_1[6] + uVar26 * 0x10);
        func_0x00010a067b00(param_1 + 3,&plStack_120);
        lVar20 = *param_1;
        lVar18 = *(long *)(lVar20 + 0x60);
        if (lVar18 == *(long *)(lVar20 + 0x68)) {
          puVar15 = &UNK_10e4ac8d0;
        }
        else {
          if ((ulong)(*(long *)(lVar20 + 0x68) - lVar18 >> 3) <= uVar26) goto LAB_10ab11308;
          puVar15 = *(undefined **)(lVar18 + uVar26 * 8);
        }
        if (((ulong)(*(long *)(lVar20 + 0x50) - *(long *)(lVar20 + 0x48) >> 5) <= uVar26) ||
           ((ulong)(param_1[4] - param_1[3] >> 4) <= uVar26)) goto LAB_10ab11308;
        FUN_10a3368d0(lVar16,*(long *)(lVar20 + 0x48) + uVar26 * 0x20,param_1[3] + uVar26 * 0x10,
                      puVar15,0xd);
        FUN_10a044790(&plStack_110);
        (*(code *)*plStack_108)(&plStack_108);
        unaff_x27 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar13 = plStack_118 + 1;
          do {
            lVar18 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x27);
          }
        }
        uVar26 = (ulong)(iVar25 + 1);
      } while (uVar26 < (ulong)(*(long *)(*param_1 + 0x50) - *(long *)(*param_1 + 0x48) >> 5));
    }
    *param_1 = 0;
    FUN_10a27632c(param_1);
    FUN_10a044790(&uStack_c0);
    (*(code *)*puStack_b8)(&puStack_b8);
    param_4 = lStack_1a8;
    pplVar23 = pplStack_1b0;
    plVar13 = (long *)CONCAT44(uStack_c4,uStack_c8);
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 1;
      do {
        lVar16 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((long)uStack_150 < 0) {
      __ZdlPv(pppuStack_160);
    }
    if ((long)uStack_130 < 0) {
      __ZdlPv(pppuStack_140);
    }
    plVar13 = *pplVar23;
  }
  pplVar8 = pplStack_198 + 4;
  FUN_10a5dfd94(pplVar8,plVar13);
  pplVar9 = pplStack_198 + 4;
  FUN_10a01eacc(pplVar9,pplVar8);
  plStack_118 = pplVar9[5];
  plStack_120 = pplVar9[4];
  plStack_108 = pplVar9[7];
  plStack_110 = pplVar9[6];
  plStack_f8 = pplVar9[9];
  plStack_100 = pplVar9[8];
  plVar13 = *(long **)(param_4 + 0x18);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x30))(plVar13,pplVar9);
  }
  lVar16 = *param_3;
  if (param_3[1] == lVar16) {
    pplVar22 = (long **)0x0;
  }
  else {
    lVar18 = 0;
    pplVar23 = (long **)0x0;
    pplVar24 = (long **)0x0;
    puStack_188 = (undefined8 *)0x0;
    uStack_190 = 0x3f800000;
    unaff_x27 = (long *)0x3f800000;
    unaff_x28 = -0x71c71c71c71c71c7;
    do {
      if ((long **)(param_1[7] - param_1[6] >> 4) <= pplVar24) goto LAB_10ab11308;
      FUN_10a1db4cc(*(undefined8 *)(param_1[6] + (long)pplVar23),lVar16 + (long)pplVar23);
      lVar16 = *param_5;
      lVar20 = param_1[6];
      pplVar22 = (long **)(param_1[7] - lVar20 >> 4);
      if (lVar16 == param_5[1]) {
        if (pplVar22 <= pplVar24) goto LAB_10ab11308;
        uStack_c8 = SUB84(puStack_188,0);
        uStack_c4 = (undefined4)((ulong)puStack_188 >> 0x20);
        uStack_d0._0_4_ = (undefined4)uStack_190;
        uStack_d0._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
        puStack_b8 = puStack_188;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x3f800000);
        uStack_c0 = (undefined4)uStack_d0;
        uStack_bc = uStack_d0._4_4_;
        (**(code **)(**(long **)(lVar20 + (long)pplVar23) + 0x98))
                  (*(long **)(lVar20 + (long)pplVar23),&uStack_d0);
      }
      else {
        if ((pplVar22 <= pplVar24) ||
           (pplVar22 = (long **)((param_5[1] - lVar16 >> 2) * -0x71c71c71c71c71c7),
           pplVar22 < pplVar24 || (long)pplVar22 - (long)pplVar24 == 0)) goto LAB_10ab11308;
        (**(code **)(**(long **)(lVar20 + (long)pplVar23) + 0x98))
                  (*(long **)(lVar20 + (long)pplVar23),lVar16 + lVar18);
      }
      pplVar24 = (long **)((long)pplVar24 + 1);
      lVar16 = *param_3;
      pplVar23 = pplVar23 + 2;
      lVar18 = lVar18 + 0x24;
      pplVar22 = (long **)(param_3[1] - lVar16 >> 4);
    } while (pplVar24 < pplVar22);
  }
  while( true ) {
    if ((long **)(param_1[7] - param_1[6] >> 4) <= pplVar22) {
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_d0._4_4_ = 0;
      uStack_c8 = 0;
      uStack_d0._0_4_ = 0x3f800000;
      uStack_bc = 0x3f800000;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      uStack_9c = 0;
      uStack_a4 = 0;
      uStack_a8 = 0x3f800000;
      uStack_94 = 0x3f800000;
      pplVar10 = pplStack_198;
      (*(code *)(*pplStack_198)[0xb])(pplStack_198,plStack_1a0,pplVar8,&uStack_d0,3);
      pplVar9[5] = plStack_118;
      pplVar9[4] = plStack_120;
      pplVar9[7] = plStack_108;
      pplVar9[6] = plStack_110;
      pplVar9[9] = plStack_f8;
      pplVar9[8] = plStack_100;
      lVar16 = param_1[6];
      if (param_1[7] != lVar16) {
        pplVar23 = (long **)0x0;
        param_5 = (long *)0x0;
        do {
          pplVar22 = *(long ***)(lVar16 + (long)pplVar23);
          FUN_10a18cbd8(pplVar22 + 0x51);
          pplVar10 = pplVar22;
          FUN_10a1da3a4(pplVar22,0,0,0,4,0,0,0);
          param_5 = (long *)((long)param_5 + 1);
          lVar16 = param_1[6];
          pplVar23 = pplVar23 + 2;
        } while (param_5 < (long *)(param_1[7] - lVar16 >> 4));
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return pplVar10;
      }
      ___stack_chk_fail();
      if ((long)uStack_150 < 0) {
        __ZdlPv(pppuStack_160);
      }
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppuStack_140);
      }
      pplVar11 = pplVar10;
      __Unwind_Resume();
      pcStack_1b8 = FUN_10ab11440;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplStack_378 = pplVar11 + 0x2e;
      pplStack_398 = pplVar11;
      lStack_210 = unaff_x28;
      plStack_208 = unaff_x27;
      pplStack_200 = pplVar8;
      pplStack_1f8 = pplVar9;
      pplStack_1f0 = pplVar24;
      plStack_1e8 = param_3;
      plStack_1e0 = param_5;
      pplStack_1d8 = pplVar23;
      pplStack_1d0 = pplVar22;
      pplStack_1c8 = pplVar10;
      puStack_1c0 = &stack0xfffffffffffffff0;
      _bzero(pplVar11 + 1,0x288);
      func_0x000107c2b054(&plStack_2a8,&UNK_10f68f9ca);
      uStack_2c0 = CONCAT17(0x12,(undefined7)uStack_2c0);
      lStack_388 = 0x6c672e6572757478;
      uStack_390 = 0x65746e6565726373;
      uStack_2c8 = 0x6c672e6572757478;
      puStack_2d0 = (undefined8 *)0x65746e6565726373;
      uStack_2c0 = CONCAT53(uStack_2c0._3_5_,0x6c73);
      FUN_10ab108b4(applStack_350,&plStack_2a8,&puStack_2d0);
      func_0x000107c2b074(&plStack_2a8,&PTR_DAT_110c46d28);
      FUN_10ab14240(&lStack_308,&plStack_2a8,auStack_288,1);
      FUN_10ab10958(pplStack_398 + 1,applStack_350);
      plStack_2a8 = (long *)&UNK_10e4ac920;
      FUN_10ab143b0(&lStack_2f0,&plStack_2a8,&lStack_2a0,1);
      FUN_10ab10958(pplStack_398 + 0x13,applStack_350);
      func_0x000107c2b054(&puStack_2d0,&UNK_10f68f9ca);
      uStack_359 = 0x12;
      uStack_360 = 0x6c73;
      uStack_368 = lStack_388;
      uStack_370 = uStack_390;
      uStack_35e = 0;
      FUN_10ab108b4(&plStack_2a8,&puStack_2d0,&uStack_370);
      if (uStack_2c0 < 0) {
        __ZdlPv(puStack_2d0);
      }
      func_0x000107c2b07c(&puStack_2d0,&UNK_10f68f9dd);
      if (puStack_270 < puStack_268) {
        puStack_270[2] = uStack_2c0;
        puStack_270[1] = uStack_2c8;
        *puStack_270 = puStack_2d0;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        puStack_2d0 = (undefined8 *)0x0;
        puStack_270[3] = uStack_2b8;
        puStack_270 = puStack_270 + 4;
      }
      else {
        puVar12 = &uStack_278;
        FUN_10ab1411c(&uStack_278,&puStack_2d0);
        puStack_270 = puVar12;
        if (uStack_2c0 < 0) {
          __ZdlPv(puStack_2d0);
        }
      }
      func_0x000107c2b074(&puStack_2d0,&PTR_DAT_110c46d28);
      FUN_10ab14240(auStack_260,&puStack_2d0,auStack_2b0,1);
      if (uStack_2c0 < 0) {
        __ZdlPv(puStack_2d0);
      }
      FUN_10ab10958(pplStack_398 + 10,&plStack_2a8);
      puStack_2d0 = (undefined8 *)&UNK_10e4ac920;
      FUN_10ab143b0(&lStack_248,&puStack_2d0,&uStack_2c8,1);
      FUN_10ab10958(pplStack_398 + 0x1c,&plStack_2a8);
      if (lStack_248 != 0) {
        lStack_240 = lStack_248;
        __ZdlPv();
      }
      puStack_2d0 = auStack_260;
      FUN_10a044868(&puStack_2d0);
      puStack_2d0 = &uStack_278;
      FUN_10a044868(&puStack_2d0);
      if (lStack_2f0 != 0) {
        lStack_2e8 = lStack_2f0;
        __ZdlPv();
      }
      plStack_2a8 = &lStack_308;
      FUN_10a044868(&plStack_2a8);
      plStack_2a8 = alStack_320;
      FUN_10a044868(&plStack_2a8);
      if (cStack_321 < '\0') {
        __ZdlPv(pplStack_338);
      }
      if (cStack_339 < '\0') {
        __ZdlPv(applStack_350[0]);
      }
      func_0x000107c2b054(&plStack_2a8,&UNK_10f68f9ef);
      puVar12 = (undefined8 *)0x20;
      __Znwm();
      uStack_2c0 = -0x7fffffffffffffe0;
      uStack_2c8 = 0x19;
      puVar12[1] = 0x645f657275747865;
      *puVar12 = 0x745f6e6565726373;
      *(undefined8 *)((long)puVar12 + 0x11) = 0x6c736c672e687470;
      *(undefined8 *)((long)puVar12 + 9) = 0x65645f6572757478;
      *(undefined1 *)((long)puVar12 + 0x19) = 0;
      puStack_2d0 = puVar12;
      FUN_10ab108b4(applStack_350,&plStack_2a8,&puStack_2d0);
      __ZdlPv(puVar12);
      func_0x000107c2b074(&plStack_2a8,&PTR_DAT_110c46d28);
      FUN_10ab14240(&lStack_308,&plStack_2a8,auStack_288,1);
      uStack_2d8 = 1;
      FUN_10ab10958(pplStack_398 + 0x25,applStack_350);
      if (lStack_2f0 != 0) {
        lStack_2e8 = lStack_2f0;
        __ZdlPv();
      }
      plStack_2a8 = &lStack_308;
      FUN_10a044868(&plStack_2a8);
      plStack_2a8 = alStack_320;
      FUN_10a044868(&plStack_2a8);
      if (cStack_321 < '\0') {
        __ZdlPv(pplStack_338);
      }
      if (cStack_339 < '\0') {
        __ZdlPv(applStack_350[0]);
      }
      lVar16 = 0;
      lVar18 = 1;
      lStack_388 = -0x7fffffffffffffe7;
      uStack_390 = 0x17;
      do {
        func_0x000107c2b054(&plStack_2a8,&UNK_10f68f9ca);
        puVar12 = (undefined8 *)0x19;
        __Znwm();
        uStack_2c0 = lStack_388;
        uStack_2c8 = uStack_390;
        puVar12[1] = 0x6d5f657275747865;
        *puVar12 = 0x745f6e6565726373;
        *(undefined8 *)((long)puVar12 + 0xf) = 0x6c736c672e74726d;
        *(undefined1 *)((long)puVar12 + 0x17) = 0;
        puStack_2d0 = puVar12;
        FUN_10ab108b4(applStack_350,&plStack_2a8,&puStack_2d0);
        __ZdlPv(puVar12);
        if (lVar16 == 0) {
          func_0x000107c2b074(&plStack_2a8,&PTR_DAT_110c46d28);
          FUN_10ab14240(&lStack_308,&plStack_2a8,auStack_288,1);
        }
        else {
          func_0x000107c2b074(&plStack_2a8,&PTR_DAT_110c46d40 + lVar16 * 3);
          FUN_10ab14240(alStack_320,&plStack_2a8,auStack_288,1);
          ppuVar27 = &PTR_DAT_110c46da0;
          lVar20 = lVar18;
          do {
            func_0x000107c2b074(&plStack_2a8,ppuVar27);
            if (plStack_300 < plStack_2f8) {
              plStack_300[2] = lStack_298;
              plStack_300[1] = lStack_2a0;
              *plStack_300 = (long)plStack_2a8;
              lStack_2a0 = 0;
              lStack_298 = 0;
              plStack_2a8 = (long *)0x0;
              plStack_300[3] = lStack_290;
              plStack_300 = plStack_300 + 4;
            }
            else {
              plVar13 = &lStack_308;
              FUN_10ab1411c(&lStack_308,&plStack_2a8);
              plStack_300 = plVar13;
            }
            ppuVar27 = ppuVar27 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        FUN_10ab10958(pplStack_378 + lVar16 * 9,applStack_350);
        if (lStack_2f0 != 0) {
          lStack_2e8 = lStack_2f0;
          __ZdlPv();
        }
        plStack_2a8 = &lStack_308;
        FUN_10a044868(&plStack_2a8);
        pplVar24 = &plStack_2a8;
        plStack_2a8 = alStack_320;
        FUN_10a044868();
        if (cStack_321 < '\0') {
          pplVar24 = pplStack_338;
          __ZdlPv();
        }
        if (cStack_339 < '\0') {
          pplVar24 = applStack_350[0];
          __ZdlPv();
        }
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar16 != 4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
        return pplStack_398;
      }
      ___stack_chk_fail();
      if (uStack_2c0 < 0) {
        __ZdlPv(puStack_2d0);
      }
      FUN_10ab11bb0(&plStack_2a8);
      FUN_10ab11bb0(applStack_350);
      FUN_10ab11c28(pplStack_378);
      pplVar23 = pplStack_398;
      FUN_10ab11ca4(pplStack_398 + 0x25);
      FUN_10ab11d08(pplVar23 + 0x13);
      FUN_10ab11d08(pplVar23 + 1);
      __Unwind_Resume();
      uStack_3c0 = 0x48;
      pplStack_3b8 = pplVar23;
      pcStack_3a8 = FUN_10ab11bb0;
      ppuStack_3b0 = &puStack_1c0;
      if (pplVar24[0xc] != (long *)0x0) {
        pplVar24[0xd] = pplVar24[0xc];
        __ZdlPv();
      }
      pplStack_3c8 = pplVar24 + 9;
      FUN_10a044868(&pplStack_3c8);
      pplStack_3c8 = pplVar24 + 6;
      FUN_10a044868(&pplStack_3c8);
      if (*(char *)((long)pplVar24 + 0x2f) < '\0') {
        __ZdlPv(pplVar24[3]);
      }
      if (*(char *)((long)pplVar24 + 0x17) < '\0') {
        __ZdlPv(*pplVar24);
      }
      return pplVar24;
    }
    lVar18 = 0;
    FUN_10a2421c8();
    lVar16 = *(long *)(lVar18 + 0x110);
    uStack_d0._0_4_ = (undefined4)*(undefined8 *)(lVar18 + 0x108);
    uStack_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x108) >> 0x20);
    uStack_c8 = (undefined4)lVar16;
    uStack_c4 = (undefined4)((ulong)lVar16 >> 0x20);
    if (lVar16 != 0) {
      plVar13 = (long *)(lVar16 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((long **)(param_1[7] - param_1[6] >> 4) <= pplVar22) break;
    FUN_10a1db4cc(*(undefined8 *)(param_1[6] + (long)pplVar22 * 0x10),&uStack_d0);
    param_5 = (long *)CONCAT44(uStack_c4,uStack_c8);
    if (param_5 != (long *)0x0) {
      plVar13 = param_5 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*param_5 + 0x10))(param_5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_5);
      }
    }
    pplVar22 = (long **)((long)pplVar22 + 1);
  }
LAB_10ab11308:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab1130c);
  (*pcVar7)();
}



/* Entry: 10ab11440; end: 10ab11baf;  */

/* WARNING: Removing unreachable block (ram,0x00010ab11990) */
/* WARNING: Removing unreachable block (ram,0x00010ab119a8) */
/* WARNING: Removing unreachable block (ram,0x00010ab117a8) */
/* WARNING: Removing unreachable block (ram,0x00010ab116d4) */
/* WARNING: Removing unreachable block (ram,0x00010ab114d8) */
/* WARNING: Removing unreachable block (ram,0x00010ab11518) */
/* WARNING: Removing unreachable block (ram,0x00010ab116e4) */
/* WARNING: Removing unreachable block (ram,0x00010ab117e8) */
/* WARNING: Removing unreachable block (ram,0x00010ab11920) */
/* WARNING: Removing unreachable block (ram,0x00010ab119e4) */

long ** FUN_10ab11440(long **param_1)

{
  long **pplVar1;
  undefined8 *puVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long **pplStack_218;
  undefined8 uStack_210;
  long **pplStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long **pplStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long **pplStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined1 uStack_1a9;
  long **applStack_1a0 [2];
  char cStack_189;
  long **pplStack_188;
  char cStack_171;
  long alStack_170 [3];
  long lStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  long lStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_1c8 = param_1 + 0x2e;
  pplStack_1e8 = param_1;
  _bzero(param_1 + 1,0x288);
  func_0x000107c2b054(&plStack_f8,&UNK_10f68f9ca);
  uStack_110 = CONCAT17(0x12,(undefined7)uStack_110);
  lStack_1d8 = 0x6c672e6572757478;
  uStack_1e0 = 0x65746e6565726373;
  uStack_118 = 0x6c672e6572757478;
  puStack_120 = (undefined8 *)0x65746e6565726373;
  uStack_110 = CONCAT53(uStack_110._3_5_,0x6c73);
  FUN_10ab108b4(applStack_1a0,&plStack_f8,&puStack_120);
  func_0x000107c2b074(&plStack_f8,&PTR_DAT_110c46d28);
  FUN_10ab14240(&lStack_158,&plStack_f8,auStack_d8,1);
  FUN_10ab10958(pplStack_1e8 + 1,applStack_1a0);
  plStack_f8 = (long *)&UNK_10e4ac920;
  FUN_10ab143b0(&lStack_140,&plStack_f8,&lStack_f0,1);
  FUN_10ab10958(pplStack_1e8 + 0x13,applStack_1a0);
  func_0x000107c2b054(&puStack_120,&UNK_10f68f9ca);
  uStack_1a9 = 0x12;
  uStack_1b0 = 0x6c73;
  uStack_1b8 = lStack_1d8;
  uStack_1c0 = uStack_1e0;
  uStack_1ae = 0;
  FUN_10ab108b4(&plStack_f8,&puStack_120,&uStack_1c0);
  if (uStack_110 < 0) {
    __ZdlPv(puStack_120);
  }
  func_0x000107c2b07c(&puStack_120,&UNK_10f68f9dd);
  if (puStack_c0 < puStack_b8) {
    puStack_c0[2] = uStack_110;
    puStack_c0[1] = uStack_118;
    *puStack_c0 = puStack_120;
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_120 = (undefined8 *)0x0;
    puStack_c0[3] = uStack_108;
    puStack_c0 = puStack_c0 + 4;
  }
  else {
    puVar2 = &uStack_c8;
    FUN_10ab1411c(&uStack_c8,&puStack_120);
    puStack_c0 = puVar2;
    if (uStack_110 < 0) {
      __ZdlPv(puStack_120);
    }
  }
  func_0x000107c2b074(&puStack_120,&PTR_DAT_110c46d28);
  FUN_10ab14240(auStack_b0,&puStack_120,auStack_100,1);
  if (uStack_110 < 0) {
    __ZdlPv(puStack_120);
  }
  FUN_10ab10958(pplStack_1e8 + 10,&plStack_f8);
  puStack_120 = (undefined8 *)&UNK_10e4ac920;
  FUN_10ab143b0(&lStack_98,&puStack_120,&uStack_118,1);
  FUN_10ab10958(pplStack_1e8 + 0x1c,&plStack_f8);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  puStack_120 = auStack_b0;
  FUN_10a044868(&puStack_120);
  puStack_120 = &uStack_c8;
  FUN_10a044868(&puStack_120);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  plStack_f8 = &lStack_158;
  FUN_10a044868(&plStack_f8);
  plStack_f8 = alStack_170;
  FUN_10a044868(&plStack_f8);
  if (cStack_171 < '\0') {
    __ZdlPv(pplStack_188);
  }
  if (cStack_189 < '\0') {
    __ZdlPv(applStack_1a0[0]);
  }
  func_0x000107c2b054(&plStack_f8,&UNK_10f68f9ef);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  uStack_110 = -0x7fffffffffffffe0;
  uStack_118 = 0x19;
  puVar2[1] = 0x645f657275747865;
  *puVar2 = 0x745f6e6565726373;
  *(undefined8 *)((long)puVar2 + 0x11) = 0x6c736c672e687470;
  *(undefined8 *)((long)puVar2 + 9) = 0x65645f6572757478;
  *(undefined1 *)((long)puVar2 + 0x19) = 0;
  puStack_120 = puVar2;
  FUN_10ab108b4(applStack_1a0,&plStack_f8,&puStack_120);
  __ZdlPv(puVar2);
  func_0x000107c2b074(&plStack_f8,&PTR_DAT_110c46d28);
  FUN_10ab14240(&lStack_158,&plStack_f8,auStack_d8,1);
  uStack_128 = 1;
  FUN_10ab10958(pplStack_1e8 + 0x25,applStack_1a0);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  plStack_f8 = &lStack_158;
  FUN_10a044868(&plStack_f8);
  plStack_f8 = alStack_170;
  FUN_10a044868(&plStack_f8);
  if (cStack_171 < '\0') {
    __ZdlPv(pplStack_188);
  }
  if (cStack_189 < '\0') {
    __ZdlPv(applStack_1a0[0]);
  }
  lVar7 = 0;
  lVar8 = 1;
  lStack_1d8 = -0x7fffffffffffffe7;
  uStack_1e0 = 0x17;
  do {
    func_0x000107c2b054(&plStack_f8,&UNK_10f68f9ca);
    puVar2 = (undefined8 *)0x19;
    __Znwm();
    uStack_110 = lStack_1d8;
    uStack_118 = uStack_1e0;
    puVar2[1] = 0x6d5f657275747865;
    *puVar2 = 0x745f6e6565726373;
    *(undefined8 *)((long)puVar2 + 0xf) = 0x6c736c672e74726d;
    *(undefined1 *)((long)puVar2 + 0x17) = 0;
    puStack_120 = puVar2;
    FUN_10ab108b4(applStack_1a0,&plStack_f8,&puStack_120);
    __ZdlPv(puVar2);
    if (lVar7 == 0) {
      func_0x000107c2b074(&plStack_f8,&PTR_DAT_110c46d28);
      FUN_10ab14240(&lStack_158,&plStack_f8,auStack_d8,1);
    }
    else {
      func_0x000107c2b074(&plStack_f8,&PTR_DAT_110c46d40 + lVar7 * 3);
      FUN_10ab14240(alStack_170,&plStack_f8,auStack_d8,1);
      ppuVar6 = &PTR_DAT_110c46da0;
      lVar5 = lVar8;
      do {
        func_0x000107c2b074(&plStack_f8,ppuVar6);
        if (plStack_150 < plStack_148) {
          plStack_150[2] = lStack_e8;
          plStack_150[1] = lStack_f0;
          *plStack_150 = (long)plStack_f8;
          lStack_f0 = 0;
          lStack_e8 = 0;
          plStack_f8 = (long *)0x0;
          plStack_150[3] = lStack_e0;
          plStack_150 = plStack_150 + 4;
        }
        else {
          plVar3 = &lStack_158;
          FUN_10ab1411c(&lStack_158,&plStack_f8);
          plStack_150 = plVar3;
        }
        ppuVar6 = ppuVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    FUN_10ab10958(pplStack_1c8 + lVar7 * 9,applStack_1a0);
    if (lStack_140 != 0) {
      lStack_138 = lStack_140;
      __ZdlPv();
    }
    plStack_f8 = &lStack_158;
    FUN_10a044868(&plStack_f8);
    pplVar4 = &plStack_f8;
    plStack_f8 = alStack_170;
    FUN_10a044868();
    if (cStack_171 < '\0') {
      pplVar4 = pplStack_188;
      __ZdlPv();
    }
    if (cStack_189 < '\0') {
      pplVar4 = applStack_1a0[0];
      __ZdlPv();
    }
    lVar7 = lVar7 + 1;
    lVar8 = lVar8 + 1;
  } while (lVar7 != 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pplStack_1e8;
  }
  ___stack_chk_fail();
  if (uStack_110 < 0) {
    __ZdlPv(puStack_120);
  }
  FUN_10ab11bb0(&plStack_f8);
  FUN_10ab11bb0(applStack_1a0);
  FUN_10ab11c28(pplStack_1c8);
  pplVar1 = pplStack_1e8;
  FUN_10ab11ca4(pplStack_1e8 + 0x25);
  FUN_10ab11d08(pplVar1 + 0x13);
  FUN_10ab11d08(pplVar1 + 1);
  __Unwind_Resume();
  uStack_210 = 0x48;
  pplStack_208 = pplVar1;
  pcStack_1f8 = FUN_10ab11bb0;
  puStack_200 = &stack0xfffffffffffffff0;
  if (pplVar4[0xc] != (long *)0x0) {
    pplVar4[0xd] = pplVar4[0xc];
    __ZdlPv();
  }
  pplStack_218 = pplVar4 + 9;
  FUN_10a044868(&pplStack_218);
  pplStack_218 = pplVar4 + 6;
  FUN_10a044868(&pplStack_218);
  if (*(char *)((long)pplVar4 + 0x2f) < '\0') {
    __ZdlPv(pplVar4[3]);
  }
  if (*(char *)((long)pplVar4 + 0x17) < '\0') {
    __ZdlPv(*pplVar4);
  }
  return pplVar4;
}



/* Entry: 10ab11bb0; end: 10ab11c27;  */

undefined8 * FUN_10ab11bb0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  puStack_28 = param_1 + 9;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 6;
  FUN_10a044868(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ab11c28; end: 10ab11ca3;  */

long FUN_10ab11c28(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = 0x120;
  do {
    lVar1 = param_1 + lVar3;
    lStack_38 = lVar1 + -0x18;
    func_0x00010a2762bc(&lStack_38);
    lStack_38 = lVar1 + -0x30;
    FUN_10a04a568(&lStack_38);
    FUN_10a0617bc(lVar1 + -0x40);
    plVar2 = (long *)(lVar1 + -0x48);
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_10a27632c(plVar2);
    }
    lVar3 = lVar3 + -0x48;
  } while (lVar3 != 0);
  return param_1;
}



/* Entry: 10ab11ca4; end: 10ab11d07;  */

long * FUN_10ab11ca4(long *param_1)

{
  long lVar1;
  long *plStack_28;
  
  plStack_28 = param_1 + 6;
  func_0x00010a2762bc(&plStack_28);
  plStack_28 = param_1 + 3;
  FUN_10a04a568(&plStack_28);
  FUN_10a0617bc(param_1 + 1);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10a27632c(param_1);
  }
  return param_1;
}



/* Entry: 10ab11d08; end: 10ab11d87;  */

long FUN_10ab11d08(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    lStack_38 = lVar1 + 0x78;
    func_0x00010a2762bc(&lStack_38);
    lStack_38 = lVar1 + 0x60;
    FUN_10a04a568(&lStack_38);
    FUN_10a0617bc(lVar1 + 0x50);
    plVar2 = (long *)(lVar1 + 0x48);
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_10a27632c(plVar2);
    }
    lVar3 = lVar3 + -0x48;
  } while (lVar3 != -0x90);
  return param_1;
}



/* Entry: 10ab11d88; end: 10ab12227;  */

/* WARNING: Removing unreachable block (ram,0x00010ab128ec) */

long ** FUN_10ab11d88(undefined **param_1,long *param_2,undefined8 param_3,ulong *param_4,
                     undefined8 *param_5,ulong *param_6,uint param_7)

{
  long **pplVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong *puVar6;
  long **pplVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  ulong *puVar11;
  long **pplVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plStack_518;
  long *plStack_510;
  long *plStack_508;
  long *plStack_500;
  long **pplStack_4f8;
  long *plStack_4f0;
  undefined *puStack_4e8;
  long *plStack_4e0;
  long **pplStack_4d8;
  undefined1 ***pppuStack_4d0;
  code *pcStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  undefined8 ******ppppppuStack_480;
  ulong uStack_478;
  byte bStack_469;
  undefined8 auStack_468 [2];
  char cStack_451;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  char cStack_439;
  undefined8 *apuStack_438 [2];
  char cStack_421;
  long *plStack_420;
  long *plStack_418;
  undefined8 *puStack_410;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [24];
  long *plStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  ulong *puStack_3b8;
  ulong *puStack_3b0;
  ulong *puStack_3a8;
  long **pplStack_3a0;
  long **pplStack_398;
  long *plStack_390;
  undefined *puStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  long **pplStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined4 uStack_308;
  long *plStack_300;
  long alStack_2f8 [4];
  long **pplStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined4 uStack_290;
  long *plStack_288;
  long *plStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_25c [12];
  ulong auStack_250 [3];
  ulong *puStack_238;
  ulong uStack_230;
  long **pplStack_228;
  undefined1 auStack_220 [8];
  long lStack_218;
  ulong uStack_210;
  long **pplStack_208;
  ulong uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  undefined8 *puStack_1e8;
  long **pplStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long **pplStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  ulong uStack_188;
  long **pplStack_180;
  long alStack_178 [6];
  int iStack_148;
  ulong uStack_140;
  long **pplStack_138;
  long alStack_130 [3];
  int iStack_118;
  ulong uStack_110;
  long **pplStack_108;
  ulong auStack_100 [3];
  ulong *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_bc [12];
  ulong auStack_b0 [3];
  ulong *puStack_98;
  ulong uStack_90;
  long **pplStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar20 = (int)param_6;
  uVar25 = *param_4;
  pplVar9 = (long **)param_4[1];
  if (pplVar9 != (long **)0x0) {
    pplVar7 = pplVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
      if (bVar4) {
        *pplVar7 = (long *)((long)*pplVar7 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar26 = (ulong)param_7;
  plVar15 = param_2;
  iStack_118 = iVar20;
  uStack_110 = uVar25;
  pplStack_108 = pplVar9;
  if (iVar20 == 0) {
    pplStack_88 = (long **)param_4[1];
    uStack_90 = *param_4;
    if (param_4[1] != 0) {
      plVar22 = (long *)(param_4[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    alStack_178[0] = 0;
    alStack_178[1] = 0;
    alStack_178[2] = 0;
    FUN_10a756a10(alStack_178,&uStack_90,auStack_80,1);
    uStack_190 = 0;
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)*pplVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6 = (ulong *)0x20;
    uStack_188 = uVar25;
    pplStack_180 = pplVar9;
    __Znwm();
    *puVar6 = (ulong)&PTR_FUN_110c46ed0;
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[2] = uVar25;
    puVar6[3] = (ulong)pplVar9;
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)*pplVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_d8 = param_5[1];
    plStack_e0 = (long *)*param_5;
    uStack_c8 = param_5[3];
    uStack_d0 = param_5[2];
    uStack_c0 = *(undefined4 *)(param_5 + 4);
    lStack_1a0 = 0;
    uStack_198 = 0;
    lStack_1a8 = 0;
    puStack_e8 = puVar6;
    FUN_10ab14560(&lStack_1a8,&plStack_e0,auStack_bc);
    plVar22 = alStack_178;
    puVar18 = auStack_100;
    FUN_10ab10a0c(param_1 + uVar26 * 9 + 1,param_2,plVar22,puVar18,&lStack_1a8,param_3);
    if (lStack_1a8 != 0) {
      lStack_1a0 = lStack_1a8;
      __ZdlPv();
    }
    (**(code **)(*puVar6 + 0x28))(puVar6);
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        plVar21 = *pplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)plVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar21 == (long *)0x0) {
        (*(code *)(*pplVar9)[2])(pplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
      }
    }
    plStack_e0 = alStack_178;
    pplVar9 = &plStack_e0;
    FUN_10a18ba48();
    if (pplStack_88 != (long **)0x0) {
      pplVar7 = pplStack_88 + 1;
      do {
        plVar21 = *pplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)plVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10ab120e0;
    }
  }
  else {
    pplStack_88 = (long **)param_4[1];
    uStack_90 = *param_4;
    if (param_4[1] != 0) {
      plVar22 = (long *)(param_4[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    alStack_130[0] = 0;
    alStack_130[1] = 0;
    alStack_130[2] = 0;
    FUN_10a756a10(alStack_130,&uStack_90,auStack_80,1);
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)*pplVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6 = (ulong *)0x20;
    iStack_148 = iVar20;
    uStack_140 = uVar25;
    pplStack_138 = pplVar9;
    __Znwm();
    *puVar6 = (ulong)&PTR_FUN_110c46ed0;
    *(int *)(puVar6 + 1) = iVar20;
    puVar6[2] = uVar25;
    puVar6[3] = (ulong)pplVar9;
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)*pplVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_d8 = param_5[1];
    plStack_e0 = (long *)*param_5;
    uStack_c8 = param_5[3];
    uStack_d0 = param_5[2];
    uStack_c0 = *(undefined4 *)(param_5 + 4);
    alStack_178[4] = 0;
    alStack_178[5] = 0;
    alStack_178[3] = 0;
    puStack_98 = puVar6;
    FUN_10ab14560(alStack_178 + 3,&plStack_e0,auStack_bc);
    plVar22 = alStack_130;
    puVar18 = auStack_b0;
    FUN_10ab10a0c(param_1 + uVar26 * 9 + 0x13,param_2,plVar22,puVar18,alStack_178 + 3,param_3);
    if (alStack_178[3] != 0) {
      alStack_178[4] = alStack_178[3];
      __ZdlPv();
    }
    (**(code **)(*puVar6 + 0x28))(puVar6);
    if (pplVar9 != (long **)0x0) {
      pplVar7 = pplVar9 + 1;
      do {
        plVar21 = *pplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)plVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar21 == (long *)0x0) {
        (*(code *)(*pplVar9)[2])(pplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
      }
    }
    plStack_e0 = alStack_130;
    pplVar9 = &plStack_e0;
    FUN_10a18ba48();
    if (pplStack_88 != (long **)0x0) {
      pplVar7 = pplStack_88 + 1;
      do {
        plVar21 = *pplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
        if (bVar4) {
          *pplVar7 = (long *)((long)plVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10ab120e0:
      pplVar7 = pplStack_88;
      if (plVar21 == (long *)0x0) {
        (*(code *)(*pplStack_88)[2])(pplStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pplVar9 = pplVar7;
      }
    }
  }
  pplVar7 = pplStack_108;
  if (pplStack_108 != (long **)0x0) {
    pplVar12 = pplStack_108 + 1;
    do {
      plVar21 = *pplVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pplVar12,0x10);
      if (bVar4) {
        *pplVar12 = (long *)((long)plVar21 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (plVar21 == (long *)0x0) {
      (*(code *)(*pplStack_108)[2])(pplStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar9 = pplVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pplVar9;
  }
  ___stack_chk_fail();
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  (**(code **)(*puVar6 + 0x28))(puVar6);
  func_0x00010a0523dc(&uStack_188);
  plStack_e0 = alStack_178;
  FUN_10a18ba48(&plStack_e0);
  func_0x00010a0523dc(&uStack_90);
  func_0x00010a0523dc(&uStack_110);
  pplVar7 = pplVar9;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10ab12228;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0;
  plVar17 = plVar15;
  plVar21 = plVar22;
  puVar19 = puVar18;
  uStack_210 = uVar25;
  pplStack_208 = &plStack_e0;
  uStack_200 = uVar26;
  puStack_1f8 = param_6;
  puStack_1f0 = puVar6;
  puStack_1e8 = param_5;
  pplStack_1e0 = (long **)param_1;
  plStack_1d8 = param_2;
  uStack_1d0 = param_3;
  pplStack_1c8 = pplVar9;
  puStack_1c0 = &stack0xfffffffffffffff0;
  FUN_10a2421c8();
  pplVar9 = *(long ***)(lVar8 + 0x228);
  (*(code *)(*pplVar9)[0xd])();
  puVar11 = puVar18;
  if (*(char *)((long)pplVar9 + 0x81) == '\x01') {
    puVar6 = puVar18 + 2;
    plVar10 = (long *)*puVar18;
    (**(code **)(*plVar10 + 0x50))();
    param_1 = &PTR_DAT_110ae4700;
    ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar10 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar10) {
      ppuVar2 = param_1;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) & 1) == 0) {
LAB_10ab125b0:
      FUN_10a0ee06c(&UNK_10f68fa02);
      goto LAB_10ab125bc;
    }
    plVar10 = (long *)*puVar18;
    (**(code **)(*plVar10 + 0x50))();
    ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar10 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar10) {
      ppuVar2 = param_1;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) == 0) goto LAB_10ab125b0;
    lVar8 = 0;
    FUN_10a2421c8();
    plVar10 = *(long **)(lVar8 + 0x228);
    (**(code **)(*plVar10 + 0x68))();
    if (1 < *(int *)((long)plVar10 + 0x7c)) {
      uVar26 = *puVar18;
      param_1 = (undefined **)puVar18[1];
      alStack_2f8[3] = uVar26;
      pplStack_2d8 = (long **)param_1;
      if ((long **)param_1 == (long **)0x0) {
        uStack_2a8 = puVar18[7];
        uStack_2b0 = puVar18[6];
        uStack_298 = puVar18[9];
        uStack_2a0 = puVar18[8];
        uStack_290 = (int)puVar18[10];
        uStack_2c8 = puVar18[3];
        uStack_2d0 = *puVar6;
        uStack_2b8 = puVar18[5];
        uStack_2c0 = puVar18[4];
        pplStack_228 = (long **)0x0;
        uStack_230 = uVar26;
      }
      else {
        pplVar9 = (long **)(param_1 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
          if (bVar4) {
            *pplVar9 = (long *)((long)*pplVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_2a8 = puVar18[7];
        uStack_2b0 = puVar18[6];
        uStack_298 = puVar18[9];
        uStack_2a0 = puVar18[8];
        uStack_290 = (int)puVar18[10];
        uStack_2c8 = puVar18[3];
        uStack_2d0 = *puVar6;
        uStack_2b8 = puVar18[5];
        uStack_2c0 = puVar18[4];
        plStack_288 = plVar15;
        pplStack_228 = (long **)puVar18[1];
        uStack_230 = *puVar18;
        if (puVar18[1] != 0) {
          plVar21 = (long *)(puVar18[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *plVar21 = *plVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      param_6 = &uStack_2d0;
      alStack_2f8[0] = 0;
      alStack_2f8[1] = 0;
      alStack_2f8[2] = 0;
      plStack_288 = plVar15;
      FUN_10a756a10(alStack_2f8,&uStack_230,auStack_220,1);
      if ((long **)param_1 != (long **)0x0) {
        pplVar9 = (long **)(param_1 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
          if (bVar4) {
            *pplVar9 = (long *)((long)*pplVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_320 = uStack_2a8;
      uStack_328 = uStack_2b0;
      uStack_310 = uStack_298;
      uStack_318 = uStack_2a0;
      uStack_308 = uStack_290;
      uStack_330 = uStack_2b8;
      uStack_338 = uStack_2c0;
      uStack_340 = uStack_2c8;
      uStack_348 = uStack_2d0;
      puVar11 = (ulong *)0x68;
      uStack_358 = uVar26;
      pplStack_350 = (long **)param_1;
      plStack_300 = plVar15;
      __Znwm();
      *puVar11 = (ulong)&PTR_FUN_110c46f90;
      puVar11[1] = uVar26;
      puVar11[2] = (ulong)param_1;
      if ((long **)param_1 != (long **)0x0) {
        pplVar9 = (long **)(param_1 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
          if (bVar4) {
            *pplVar9 = (long *)((long)*pplVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar11[6] = uStack_2b8;
      puVar11[5] = uStack_2c0;
      puVar11[8] = uStack_2a8;
      puVar11[7] = uStack_2b0;
      puVar11[10] = uStack_298;
      puVar11[9] = uStack_2a0;
      *(undefined4 *)(puVar11 + 0xb) = uStack_290;
      puVar11[4] = uStack_2c8;
      puVar11[3] = uStack_2d0;
      puVar11[0xc] = (ulong)plVar15;
      puStack_238 = puVar11;
      uStack_278 = puVar18[3];
      plStack_280 = (long *)*puVar6;
      uStack_268 = puVar18[5];
      uStack_270 = puVar18[4];
      uStack_260 = (undefined4)puVar18[6];
      lStack_370 = 0;
      lStack_368 = 0;
      uStack_360 = 0;
      FUN_10ab14560(&lStack_370,&plStack_280,auStack_25c);
      plVar21 = alStack_2f8;
      puVar19 = auStack_250;
      plVar17 = plVar15;
      FUN_10ab10a0c(pplVar7 + 0x25,plVar15,plVar21,puVar19,&lStack_370,plVar22);
      if (lStack_370 != 0) {
        lStack_368 = lStack_370;
        __ZdlPv();
      }
      (**(code **)(*puVar11 + 0x28))(puVar11);
      if ((long **)param_1 != (long **)0x0) {
        pplVar9 = (long **)(param_1 + 1);
        do {
          plVar22 = *pplVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
          if (bVar4) {
            *pplVar9 = (long *)((long)plVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar22 == (long *)0x0) {
          (**(code **)((long)*param_1 + 0x10))(param_1);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
      plStack_280 = alStack_2f8;
      pplVar9 = &plStack_280;
      FUN_10a18ba48(pplVar9);
      pplVar12 = pplStack_228;
      if (pplStack_228 != (long **)0x0) {
        pplVar1 = pplStack_228 + 1;
        do {
          plVar22 = *pplVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
          if (bVar4) {
            *pplVar1 = (long *)((long)plVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar22 == (long *)0x0) {
          (*(code *)(*pplStack_228)[2])(pplStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar12);
          pplVar9 = pplVar12;
        }
      }
      pplVar12 = pplStack_2d8;
      if (pplStack_2d8 != (long **)0x0) {
        pplVar1 = pplStack_2d8 + 1;
        do {
          plVar22 = *pplVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
          if (bVar4) {
            *pplVar1 = (long *)((long)plVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar22 == (long *)0x0) {
          (*(code *)(*pplStack_2d8)[2])(pplStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar12);
          pplVar9 = pplVar12;
        }
      }
      goto LAB_10ab12578;
    }
  }
  else {
LAB_10ab12578:
    puVar18 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
      return pplVar9;
    }
LAB_10ab125bc:
    ___stack_chk_fail();
  }
  puVar13 = &UNK_10f68fa5b;
  FUN_10a0ee06c();
  if (lStack_370 != 0) {
    __ZdlPv();
  }
  (**(code **)(*puVar18 + 0x28))(puVar18);
  func_0x00010a0523dc(&uStack_358);
  plStack_280 = alStack_2f8;
  FUN_10a18ba48(&plStack_280);
  func_0x00010a0523dc(&uStack_230);
  func_0x00010a0523dc(alStack_2f8 + 3);
  puVar14 = puVar13;
  __Unwind_Resume();
  pcStack_378 = FUN_10ab12634;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0;
  plVar22 = plVar17;
  uStack_3c0 = uVar26;
  puStack_3b8 = param_6;
  puStack_3b0 = puVar6;
  puStack_3a8 = puVar18;
  pplStack_3a0 = (long **)param_1;
  pplStack_398 = pplVar7;
  plStack_390 = plVar15;
  puStack_388 = puVar13;
  ppuStack_380 = &puStack_1c0;
  FUN_10a2421c8();
  plVar15 = *(long **)(lVar8 + 0x228);
  plVar10 = (long *)puVar19[1];
  (**(code **)(*plVar15 + 0x68))();
  uVar24 = (uint)plVar10;
  if (uVar24 <= *(uint *)((long)plVar15 + 0x7c)) {
    if (uVar24 == 0) {
      pplVar9 = (long **)&UNK_10f68fb1d;
      FUN_10a0ee06c();
    }
    else {
      lStack_400 = 0;
      lStack_3f8 = 0;
      uStack_3f0 = 0;
      plStack_420 = (long *)0x0;
      plStack_418 = (long *)0x0;
      puStack_410 = (undefined8 *)0x0;
      if (puVar19[1] != 0) {
        uVar25 = 0;
        lVar8 = 0x20;
        do {
          FUN_10ab129f0(&lStack_400,*puVar19 + lVar8 + -0x20);
          if (puVar19[1] <= uVar25) goto LAB_10ab128cc;
          FUN_10a36a1e4(&plStack_420,*puVar19 + lVar8);
          uVar25 = uVar25 + 1;
          lVar8 = lVar8 + 0x50;
        } while (uVar25 < puVar19[1]);
      }
      uStack_450 = 0;
      uStack_488 = puVar19[1];
      uStack_490 = *puVar19;
      if (3 < uVar24 - 1) goto LAB_10ab128cc;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      FUN_10ab14658(&uStack_4a8,lStack_400,lStack_3f8,lStack_3f8 - lStack_400 >> 4);
      plVar10 = (long *)0x20;
      __Znwm();
      *plVar10 = (long)&PTR_DAT_110c47040;
      plVar10[2] = uStack_488;
      plVar10[1] = uStack_490;
      plVar10[3] = (long)&uStack_450;
      lStack_4b8 = 0;
      uStack_4b0 = 0;
      lStack_4c0 = 0;
      plStack_3d0 = plVar10;
      FUN_10ab146f4(&lStack_4c0,plStack_420,plStack_418,
                    ((long)plStack_418 - (long)plStack_420 >> 2) * -0x71c71c71c71c71c7);
      plVar22 = plVar17;
      FUN_10ab10a0c(puVar14 + (ulong)(uVar24 - 1) * 0x48 + 0x170,plVar17,&uStack_4a8,auStack_3e8,
                    &lStack_4c0,plVar21);
      if (lStack_4c0 != 0) {
        lStack_4b8 = lStack_4c0;
        __ZdlPv();
      }
      (**(code **)(*plVar10 + 0x28))(plVar10);
      apuStack_438[0] = &uStack_4a8;
      FUN_10a18ba48(apuStack_438);
      if (plStack_420 != (long *)0x0) {
        plStack_418 = plStack_420;
        __ZdlPv();
      }
      plStack_420 = &lStack_400;
      pplVar9 = &plStack_420;
      FUN_10a18ba48();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
        return pplVar9;
      }
    }
    ___stack_chk_fail();
    if ((long)puStack_410 < 0) {
      __ZdlPv(plStack_420);
    }
    if ((char)bStack_469 < '\0') {
      __ZdlPv(ppppppuStack_480);
    }
    if (cStack_421 < '\0') {
      __ZdlPv(apuStack_438[0]);
    }
    if (cStack_439 < '\0') {
      __ZdlPv(CONCAT71(uStack_44f,uStack_450));
    }
    if (cStack_451 < '\0') {
      __ZdlPv(auStack_468[0]);
    }
    pplVar7 = pplVar9;
    __Unwind_Resume();
    pcStack_4c8 = FUN_10ab129f0;
    plVar15 = pplVar7[1];
    if (plVar15 < pplVar7[2]) {
      lVar8 = plVar22[1];
      lVar27 = *plVar22;
      plVar15[1] = plVar22[1];
      *plVar15 = lVar27;
      if (lVar8 != 0) {
        plVar22 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = *plVar22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = plVar15 + 2;
      pplVar9 = pplVar7;
    }
    else {
      lVar8 = (long)plVar15 - (long)*pplVar7;
      uVar25 = (lVar8 >> 4) + 1;
      plStack_4f0 = plVar10;
      puStack_4e8 = puVar14;
      plStack_4e0 = plVar17;
      pplStack_4d8 = pplVar9;
      pppuStack_4d0 = &ppuStack_380;
      if (uVar25 >> 0x3c != 0) {
        FUN_10a756ae4();
        *pplVar7 = (long *)&PTR_FUN_110c46b38;
        pplVar7[2] = (long *)0x0;
        pplVar7[1] = (long *)0x0;
        pplVar7[4] = (long *)0x0;
        pplVar7[3] = (long *)0x0;
        pplVar7[6] = (long *)0x0;
        pplVar7[5] = (long *)0x0;
        pplVar7[8] = (long *)0x0;
        pplVar7[7] = (long *)0x0;
        *(undefined4 *)(pplVar7 + 9) = 0x3f800000;
        pplVar7[0xb] = (long *)0x0;
        pplVar7[10] = (long *)0x0;
        pplVar7[0xd] = (long *)0x0;
        pplVar7[0xc] = (long *)0x0;
        pplVar7[0xf] = (long *)0x0;
        pplVar7[0xe] = (long *)0x0;
        FUN_10ab12bac();
        return pplVar7;
      }
      uVar23 = (long)pplVar7[2] - (long)*pplVar7;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar25) {
        uVar26 = uVar25;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      pplVar9 = pplVar7;
      pplStack_4f8 = pplVar7;
      FUN_10a756af8();
      plVar21 = (long *)((long)pplVar9 + lVar8);
      lVar8 = plVar22[1];
      lVar27 = *plVar22;
      plVar21[1] = plVar22[1];
      *plVar21 = lVar27;
      if (lVar8 != 0) {
        plVar15 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = plVar21 + 2;
      plVar21 = (long *)((long)plVar21 - ((long)pplVar7[1] - (long)*pplVar7));
      _memcpy(plVar21);
      plStack_518 = *pplVar7;
      *pplVar7 = plVar21;
      pplVar7[1] = plVar15;
      plStack_500 = pplVar7[2];
      pplVar7[2] = (long *)(pplVar9 + uVar26 * 2);
      pplVar9 = &plStack_518;
      plStack_510 = plStack_518;
      plStack_508 = plStack_518;
      FUN_10ab1460c(pplVar9);
    }
    pplVar7[1] = plVar15;
    return pplVar9;
  }
  __ZNSt3__19to_stringEi(auStack_468);
  FUN_109feb280(&uStack_450,&UNK_10f68fab3,auStack_468);
  FUN_10a012db0(apuStack_438,&uStack_450,&UNK_10f68fb17);
  __ZNSt3__19to_stringEj(&ppppppuStack_480,plVar10);
  if (-1 < (char)bStack_469) {
    uStack_478 = (ulong)bStack_469;
    ppppppuStack_480 = &ppppppuStack_480;
  }
  ppuVar16 = apuStack_438;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar16,ppppppuStack_480,uStack_478);
  plStack_418 = ppuVar16[1];
  plStack_420 = *ppuVar16;
  puStack_410 = ppuVar16[2];
  ppuVar16[1] = (undefined8 *)0x0;
  ppuVar16[2] = (undefined8 *)0x0;
  *ppuVar16 = (undefined8 *)0x0;
  FUN_10a012db0(&lStack_400,&plStack_420,&UNK_10f648a16);
  FUN_10a0edf4c(&lStack_400);
LAB_10ab128cc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab128d0);
  (*pcVar5)();
}



/* Entry: 10ab12228; end: 10ab12633;  */

/* WARNING: Removing unreachable block (ram,0x00010ab128ec) */

long ** FUN_10ab12228(long param_1,long *param_2,long *param_3,ulong *param_4)

{
  long **pplVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long **pplVar7;
  long *plVar8;
  ulong *puVar9;
  long **pplVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 **ppuVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  undefined **unaff_x22;
  long *plVar21;
  ulong *unaff_x24;
  ulong uVar22;
  ulong *unaff_x25;
  ulong unaff_x26;
  long lVar23;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long **pplStack_348;
  long *plStack_340;
  undefined *puStack_338;
  long *plStack_330;
  long **pplStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  char cStack_289;
  undefined8 *apuStack_288 [2];
  char cStack_271;
  long *plStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [24];
  long *plStack_220;
  long lStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  long **pplStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long **pplStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined4 uStack_158;
  long *plStack_150;
  long alStack_148 [4];
  long **pplStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_ac [12];
  ulong auStack_a0 [3];
  ulong *puStack_88;
  ulong uStack_80;
  long **pplStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  plVar19 = param_2;
  plVar15 = param_3;
  puVar16 = param_4;
  FUN_10a2421c8();
  pplVar7 = *(long ***)(lVar6 + 0x228);
  (*(code *)(*pplVar7)[0xd])();
  puVar9 = param_4;
  if (*(char *)((long)pplVar7 + 0x81) == '\x01') {
    unaff_x24 = param_4 + 2;
    plVar8 = (long *)*param_4;
    (**(code **)(*plVar8 + 0x50))();
    unaff_x22 = &PTR_DAT_110ae4700;
    ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar8 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar8) {
      ppuVar2 = unaff_x22;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) & 1) == 0) {
LAB_10ab125b0:
      FUN_10a0ee06c(&UNK_10f68fa02);
      goto LAB_10ab125bc;
    }
    plVar8 = (long *)*param_4;
    (**(code **)(*plVar8 + 0x50))();
    ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar8 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar8) {
      ppuVar2 = unaff_x22;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) == 0) goto LAB_10ab125b0;
    lVar6 = 0;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar6 + 0x228);
    (**(code **)(*plVar8 + 0x68))();
    if (1 < *(int *)((long)plVar8 + 0x7c)) {
      unaff_x26 = *param_4;
      unaff_x22 = (undefined **)param_4[1];
      if ((long **)unaff_x22 == (long **)0x0) {
        uStack_f8 = param_4[7];
        uStack_100 = param_4[6];
        uStack_e8 = param_4[9];
        uStack_f0 = param_4[8];
        uStack_e0 = (undefined4)param_4[10];
        uStack_118 = param_4[3];
        uStack_120 = *unaff_x24;
        uStack_108 = param_4[5];
        uStack_110 = param_4[4];
        pplStack_78 = (long **)0x0;
        uStack_80 = unaff_x26;
      }
      else {
        pplVar7 = (long **)(unaff_x22 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
          if (bVar4) {
            *pplVar7 = (long *)((long)*pplVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_f8 = param_4[7];
        uStack_100 = param_4[6];
        uStack_e8 = param_4[9];
        uStack_f0 = param_4[8];
        uStack_e0 = (undefined4)param_4[10];
        uStack_118 = param_4[3];
        uStack_120 = *unaff_x24;
        uStack_108 = param_4[5];
        uStack_110 = param_4[4];
        pplStack_78 = (long **)param_4[1];
        uStack_80 = *param_4;
        if (param_4[1] != 0) {
          plVar15 = (long *)(param_4[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = *plVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      unaff_x25 = &uStack_120;
      alStack_148[0] = 0;
      alStack_148[1] = 0;
      alStack_148[2] = 0;
      alStack_148[3] = unaff_x26;
      pplStack_128 = (long **)unaff_x22;
      plStack_d8 = param_2;
      FUN_10a756a10(alStack_148,&uStack_80,auStack_70,1);
      if ((long **)unaff_x22 != (long **)0x0) {
        pplVar7 = (long **)(unaff_x22 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
          if (bVar4) {
            *pplVar7 = (long *)((long)*pplVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_170 = uStack_f8;
      uStack_178 = uStack_100;
      uStack_160 = uStack_e8;
      uStack_168 = uStack_f0;
      uStack_158 = uStack_e0;
      uStack_180 = uStack_108;
      uStack_188 = uStack_110;
      uStack_190 = uStack_118;
      uStack_198 = uStack_120;
      puVar9 = (ulong *)0x68;
      uStack_1a8 = unaff_x26;
      pplStack_1a0 = (long **)unaff_x22;
      plStack_150 = param_2;
      __Znwm();
      *puVar9 = (ulong)&PTR_FUN_110c46f90;
      puVar9[1] = unaff_x26;
      puVar9[2] = (ulong)unaff_x22;
      if ((long **)unaff_x22 != (long **)0x0) {
        pplVar7 = (long **)(unaff_x22 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
          if (bVar4) {
            *pplVar7 = (long *)((long)*pplVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar9[6] = uStack_108;
      puVar9[5] = uStack_110;
      puVar9[8] = uStack_f8;
      puVar9[7] = uStack_100;
      puVar9[10] = uStack_e8;
      puVar9[9] = uStack_f0;
      *(undefined4 *)(puVar9 + 0xb) = uStack_e0;
      puVar9[4] = uStack_118;
      puVar9[3] = uStack_120;
      puVar9[0xc] = (ulong)param_2;
      uStack_c8 = param_4[3];
      plStack_d0 = (long *)*unaff_x24;
      uStack_b8 = param_4[5];
      uStack_c0 = param_4[4];
      uStack_b0 = (undefined4)param_4[6];
      lStack_1c0 = 0;
      lStack_1b8 = 0;
      uStack_1b0 = 0;
      puStack_88 = puVar9;
      FUN_10ab14560(&lStack_1c0,&plStack_d0,auStack_ac);
      plVar15 = alStack_148;
      puVar16 = auStack_a0;
      plVar19 = param_2;
      FUN_10ab10a0c(param_1 + 0x128,param_2,plVar15,puVar16,&lStack_1c0,param_3);
      if (lStack_1c0 != 0) {
        lStack_1b8 = lStack_1c0;
        __ZdlPv();
      }
      (**(code **)(*puVar9 + 0x28))(puVar9);
      if ((long **)unaff_x22 != (long **)0x0) {
        pplVar7 = (long **)(unaff_x22 + 1);
        do {
          plVar8 = *pplVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
          if (bVar4) {
            *pplVar7 = (long *)((long)plVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar8 == (long *)0x0) {
          (**(code **)((long)*unaff_x22 + 0x10))(unaff_x22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
        }
      }
      plStack_d0 = alStack_148;
      pplVar7 = &plStack_d0;
      FUN_10a18ba48(pplVar7);
      pplVar10 = pplStack_78;
      if (pplStack_78 != (long **)0x0) {
        pplVar1 = pplStack_78 + 1;
        do {
          plVar8 = *pplVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
          if (bVar4) {
            *pplVar1 = (long *)((long)plVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar8 == (long *)0x0) {
          (*(code *)(*pplStack_78)[2])(pplStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar10);
          pplVar7 = pplVar10;
        }
      }
      pplVar10 = pplStack_128;
      if (pplStack_128 != (long **)0x0) {
        pplVar1 = pplStack_128 + 1;
        do {
          plVar8 = *pplVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
          if (bVar4) {
            *pplVar1 = (long *)((long)plVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar8 == (long *)0x0) {
          (*(code *)(*pplStack_128)[2])(pplStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar10);
          pplVar7 = pplVar10;
        }
      }
      goto LAB_10ab12578;
    }
  }
  else {
LAB_10ab12578:
    param_4 = puVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pplVar7;
    }
LAB_10ab125bc:
    ___stack_chk_fail();
  }
  puVar11 = &UNK_10f68fa5b;
  FUN_10a0ee06c();
  if (lStack_1c0 != 0) {
    __ZdlPv();
  }
  (**(code **)(*param_4 + 0x28))(param_4);
  func_0x00010a0523dc(&uStack_1a8);
  plStack_d0 = alStack_148;
  FUN_10a18ba48(&plStack_d0);
  func_0x00010a0523dc(&uStack_80);
  func_0x00010a0523dc(alStack_148 + 3);
  puVar12 = puVar11;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10ab12634;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  plVar8 = plVar19;
  uStack_210 = unaff_x26;
  puStack_208 = unaff_x25;
  puStack_200 = unaff_x24;
  puStack_1f8 = param_4;
  pplStack_1f0 = (long **)unaff_x22;
  lStack_1e8 = param_1;
  plStack_1e0 = param_2;
  puStack_1d8 = puVar11;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_10a2421c8();
  plVar13 = *(long **)(lVar6 + 0x228);
  plVar21 = (long *)puVar16[1];
  (**(code **)(*plVar13 + 0x68))();
  uVar20 = (uint)plVar21;
  if (uVar20 <= *(uint *)((long)plVar13 + 0x7c)) {
    if (uVar20 == 0) {
      pplVar7 = (long **)&UNK_10f68fb1d;
      FUN_10a0ee06c();
    }
    else {
      lStack_250 = 0;
      lStack_248 = 0;
      uStack_240 = 0;
      plStack_270 = (long *)0x0;
      plStack_268 = (long *)0x0;
      puStack_260 = (undefined8 *)0x0;
      if (puVar16[1] != 0) {
        uVar22 = 0;
        lVar6 = 0x20;
        do {
          FUN_10ab129f0(&lStack_250,*puVar16 + lVar6 + -0x20);
          if (puVar16[1] <= uVar22) goto LAB_10ab128cc;
          FUN_10a36a1e4(&plStack_270,*puVar16 + lVar6);
          uVar22 = uVar22 + 1;
          lVar6 = lVar6 + 0x50;
        } while (uVar22 < puVar16[1]);
      }
      uStack_2a0 = 0;
      uStack_2d8 = puVar16[1];
      uStack_2e0 = *puVar16;
      if (3 < uVar20 - 1) goto LAB_10ab128cc;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      FUN_10ab14658(&uStack_2f8,lStack_250,lStack_248,lStack_248 - lStack_250 >> 4);
      plVar21 = (long *)0x20;
      __Znwm();
      *plVar21 = (long)&PTR_DAT_110c47040;
      plVar21[2] = uStack_2d8;
      plVar21[1] = uStack_2e0;
      plVar21[3] = (long)&uStack_2a0;
      lStack_308 = 0;
      uStack_300 = 0;
      lStack_310 = 0;
      plStack_220 = plVar21;
      FUN_10ab146f4(&lStack_310,plStack_270,plStack_268,
                    ((long)plStack_268 - (long)plStack_270 >> 2) * -0x71c71c71c71c71c7);
      plVar8 = plVar19;
      FUN_10ab10a0c(puVar12 + (ulong)(uVar20 - 1) * 0x48 + 0x170,plVar19,&uStack_2f8,auStack_238,
                    &lStack_310,plVar15);
      if (lStack_310 != 0) {
        lStack_308 = lStack_310;
        __ZdlPv();
      }
      (**(code **)(*plVar21 + 0x28))(plVar21);
      apuStack_288[0] = &uStack_2f8;
      FUN_10a18ba48(apuStack_288);
      if (plStack_270 != (long *)0x0) {
        plStack_268 = plStack_270;
        __ZdlPv();
      }
      plStack_270 = &lStack_250;
      pplVar7 = &plStack_270;
      FUN_10a18ba48();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
        return pplVar7;
      }
    }
    ___stack_chk_fail();
    if ((long)puStack_260 < 0) {
      __ZdlPv(plStack_270);
    }
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(ppppppuStack_2d0);
    }
    if (cStack_271 < '\0') {
      __ZdlPv(apuStack_288[0]);
    }
    if (cStack_289 < '\0') {
      __ZdlPv(CONCAT71(uStack_29f,uStack_2a0));
    }
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    pplVar10 = pplVar7;
    __Unwind_Resume();
    pcStack_318 = FUN_10ab129f0;
    plVar15 = pplVar10[1];
    if (plVar15 < pplVar10[2]) {
      lVar6 = plVar8[1];
      lVar23 = *plVar8;
      plVar15[1] = plVar8[1];
      *plVar15 = lVar23;
      if (lVar6 != 0) {
        plVar19 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = plVar15 + 2;
      pplVar7 = pplVar10;
    }
    else {
      lVar6 = (long)plVar15 - (long)*pplVar10;
      uVar22 = (lVar6 >> 4) + 1;
      plStack_340 = plVar21;
      puStack_338 = puVar12;
      plStack_330 = plVar19;
      pplStack_328 = pplVar7;
      ppuStack_320 = &puStack_1d0;
      if (uVar22 >> 0x3c != 0) {
        FUN_10a756ae4();
        *pplVar10 = (long *)&PTR_FUN_110c46b38;
        pplVar10[2] = (long *)0x0;
        pplVar10[1] = (long *)0x0;
        pplVar10[4] = (long *)0x0;
        pplVar10[3] = (long *)0x0;
        pplVar10[6] = (long *)0x0;
        pplVar10[5] = (long *)0x0;
        pplVar10[8] = (long *)0x0;
        pplVar10[7] = (long *)0x0;
        *(undefined4 *)(pplVar10 + 9) = 0x3f800000;
        pplVar10[0xb] = (long *)0x0;
        pplVar10[10] = (long *)0x0;
        pplVar10[0xd] = (long *)0x0;
        pplVar10[0xc] = (long *)0x0;
        pplVar10[0xf] = (long *)0x0;
        pplVar10[0xe] = (long *)0x0;
        FUN_10ab12bac();
        return pplVar10;
      }
      uVar17 = (long)pplVar10[2] - (long)*pplVar10;
      uVar18 = (long)uVar17 >> 3;
      if (uVar18 <= uVar22) {
        uVar18 = uVar22;
      }
      if (0x7fffffffffffffef < uVar17) {
        uVar18 = 0xfffffffffffffff;
      }
      pplVar7 = pplVar10;
      pplStack_348 = pplVar10;
      FUN_10a756af8();
      plVar19 = (long *)((long)pplVar7 + lVar6);
      lVar6 = plVar8[1];
      lVar23 = *plVar8;
      plVar19[1] = plVar8[1];
      *plVar19 = lVar23;
      if (lVar6 != 0) {
        plVar15 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = plVar19 + 2;
      plVar19 = (long *)((long)plVar19 - ((long)pplVar10[1] - (long)*pplVar10));
      _memcpy(plVar19);
      plStack_368 = *pplVar10;
      *pplVar10 = plVar19;
      pplVar10[1] = plVar15;
      plStack_350 = pplVar10[2];
      pplVar10[2] = (long *)(pplVar7 + uVar18 * 2);
      pplVar7 = &plStack_368;
      plStack_360 = plStack_368;
      plStack_358 = plStack_368;
      FUN_10ab1460c(pplVar7);
    }
    pplVar10[1] = plVar15;
    return pplVar7;
  }
  __ZNSt3__19to_stringEi(auStack_2b8);
  FUN_109feb280(&uStack_2a0,&UNK_10f68fab3,auStack_2b8);
  FUN_10a012db0(apuStack_288,&uStack_2a0,&UNK_10f68fb17);
  __ZNSt3__19to_stringEj(&ppppppuStack_2d0,plVar21);
  if (-1 < (char)bStack_2b9) {
    uStack_2c8 = (ulong)bStack_2b9;
    ppppppuStack_2d0 = &ppppppuStack_2d0;
  }
  ppuVar14 = apuStack_288;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar14,ppppppuStack_2d0,uStack_2c8);
  plStack_268 = ppuVar14[1];
  plStack_270 = *ppuVar14;
  puStack_260 = ppuVar14[2];
  ppuVar14[1] = (undefined8 *)0x0;
  ppuVar14[2] = (undefined8 *)0x0;
  *ppuVar14 = (undefined8 *)0x0;
  FUN_10a012db0(&lStack_250,&plStack_270,&UNK_10f648a16);
  FUN_10a0edf4c(&lStack_250);
LAB_10ab128cc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab128d0);
  (*pcVar5)();
}



/* Entry: 10ab12634; end: 10ab129ef;  */

/* WARNING: Removing unreachable block (ram,0x00010ab128ec) */

long ** FUN_10ab12634(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 **ppuStack_188;
  long *plStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  char cStack_c9;
  undefined8 *apuStack_c8 [2];
  char cStack_b1;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  plVar9 = param_2;
  FUN_10a2421c8();
  plVar5 = *(long **)(lVar4 + 0x228);
  plVar13 = (long *)param_4[1];
  (**(code **)(*plVar5 + 0x68))();
  uVar12 = (uint)plVar13;
  if (*(uint *)((long)plVar5 + 0x7c) < uVar12) {
    __ZNSt3__19to_stringEi(auStack_f8);
    FUN_109feb280(&uStack_e0,&UNK_10f68fab3,auStack_f8);
    FUN_10a012db0(apuStack_c8,&uStack_e0,&UNK_10f68fb17);
    __ZNSt3__19to_stringEj(&ppuStack_110,plVar13);
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      ppuStack_110 = &ppuStack_110;
    }
    ppuVar6 = apuStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar6,ppuStack_110,uStack_108);
    puStack_a8 = ppuVar6[1];
    plStack_b0 = *ppuVar6;
    puStack_a0 = ppuVar6[2];
    ppuVar6[1] = (undefined8 *)0x0;
    ppuVar6[2] = (undefined8 *)0x0;
    *ppuVar6 = (undefined8 *)0x0;
    FUN_10a012db0(&lStack_90,&plStack_b0,&UNK_10f648a16);
    FUN_10a0edf4c(&lStack_90);
LAB_10ab128cc:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab128d0);
    (*pcVar3)();
  }
  if (uVar12 == 0) {
    pplVar7 = (long **)&UNK_10f68fb1d;
    FUN_10a0ee06c();
  }
  else {
    lStack_90 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    plStack_b0 = (long *)0x0;
    puStack_a8 = (long *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    if (param_4[1] != 0) {
      uVar14 = 0;
      lVar4 = 0x20;
      do {
        FUN_10ab129f0(&lStack_90,*param_4 + lVar4 + -0x20);
        if ((ulong)param_4[1] <= uVar14) goto LAB_10ab128cc;
        FUN_10a36a1e4(&plStack_b0,*param_4 + lVar4);
        uVar14 = uVar14 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar14 < (ulong)param_4[1]);
    }
    uStack_e0 = 0;
    lStack_118 = param_4[1];
    lStack_120 = *param_4;
    if (3 < uVar12 - 1) goto LAB_10ab128cc;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    FUN_10ab14658(&uStack_138,lStack_90,lStack_88,lStack_88 - lStack_90 >> 4);
    plVar13 = (long *)0x20;
    __Znwm();
    *plVar13 = (long)&PTR_DAT_110c47040;
    plVar13[2] = lStack_118;
    plVar13[1] = lStack_120;
    plVar13[3] = (long)&uStack_e0;
    lStack_148 = 0;
    uStack_140 = 0;
    lStack_150 = 0;
    plStack_60 = plVar13;
    FUN_10ab146f4(&lStack_150,plStack_b0,puStack_a8,
                  ((long)puStack_a8 - (long)plStack_b0 >> 2) * -0x71c71c71c71c71c7);
    plVar9 = param_2;
    FUN_10ab10a0c(param_1 + (ulong)(uVar12 - 1) * 0x48 + 0x170,param_2,&uStack_138,auStack_78,
                  &lStack_150,param_3);
    if (lStack_150 != 0) {
      lStack_148 = lStack_150;
      __ZdlPv();
    }
    (**(code **)(*plVar13 + 0x28))(plVar13);
    apuStack_c8[0] = &uStack_138;
    FUN_10a18ba48(apuStack_c8);
    if (plStack_b0 != (long *)0x0) {
      puStack_a8 = plStack_b0;
      __ZdlPv();
    }
    plStack_b0 = &lStack_90;
    pplVar7 = &plStack_b0;
    FUN_10a18ba48();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pplVar7;
    }
  }
  ___stack_chk_fail();
  if ((long)puStack_a0 < 0) {
    __ZdlPv(plStack_b0);
  }
  if ((char)bStack_f9 < '\0') {
    __ZdlPv(ppuStack_110);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apuStack_c8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(CONCAT71(uStack_df,uStack_e0));
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_158 = FUN_10ab129f0;
  plVar5 = pplVar8[1];
  if (plVar5 < pplVar8[2]) {
    lVar4 = plVar9[1];
    lVar15 = *plVar9;
    plVar5[1] = plVar9[1];
    *plVar5 = lVar15;
    if (lVar4 != 0) {
      plVar9 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = plVar5 + 2;
    pplVar7 = pplVar8;
  }
  else {
    lVar4 = (long)plVar5 - (long)*pplVar8;
    uVar14 = (lVar4 >> 4) + 1;
    plStack_180 = plVar13;
    lStack_178 = param_1;
    puStack_170 = param_2;
    ppuStack_168 = pplVar7;
    puStack_160 = &stack0xfffffffffffffff0;
    if (uVar14 >> 0x3c != 0) {
      FUN_10a756ae4();
      *pplVar8 = (long *)&PTR_FUN_110c46b38;
      pplVar8[2] = (long *)0x0;
      pplVar8[1] = (long *)0x0;
      pplVar8[4] = (long *)0x0;
      pplVar8[3] = (long *)0x0;
      pplVar8[6] = (long *)0x0;
      pplVar8[5] = (long *)0x0;
      pplVar8[8] = (long *)0x0;
      pplVar8[7] = (long *)0x0;
      *(undefined4 *)(pplVar8 + 9) = 0x3f800000;
      pplVar8[0xb] = (long *)0x0;
      pplVar8[10] = (long *)0x0;
      pplVar8[0xd] = (long *)0x0;
      pplVar8[0xc] = (long *)0x0;
      pplVar8[0xf] = (long *)0x0;
      pplVar8[0xe] = (long *)0x0;
      FUN_10ab12bac();
      return pplVar8;
    }
    uVar10 = (long)pplVar8[2] - (long)*pplVar8;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    pplVar7 = pplVar8;
    ppuStack_188 = pplVar8;
    FUN_10a756af8();
    plVar13 = (long *)((long)pplVar7 + lVar4);
    lVar4 = plVar9[1];
    lVar15 = *plVar9;
    plVar13[1] = plVar9[1];
    *plVar13 = lVar15;
    if (lVar4 != 0) {
      plVar9 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = plVar13 + 2;
    plVar13 = (long *)((long)plVar13 - ((long)pplVar8[1] - (long)*pplVar8));
    _memcpy(plVar13);
    puStack_1a8 = *pplVar8;
    *pplVar8 = plVar13;
    pplVar8[1] = plVar5;
    puStack_190 = pplVar8[2];
    pplVar8[2] = (long *)(pplVar7 + uVar11 * 2);
    pplVar7 = &puStack_1a8;
    puStack_1a0 = puStack_1a8;
    puStack_198 = puStack_1a8;
    FUN_10ab1460c(pplVar7);
  }
  pplVar8[1] = plVar5;
  return pplVar7;
}



/* Entry: 10ab129f0; end: 10ab12b07;  */

long * FUN_10ab129f0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar10 + 2;
    plVar6 = param_1;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a756ae4();
      *param_1 = (long)&PTR_FUN_110c46b38;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      *(undefined4 *)(param_1 + 9) = 0x3f800000;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      FUN_10ab12bac();
      return param_1;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a756af8();
    puVar3 = (undefined8 *)((long)plVar6 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar3 + 2;
    lVar7 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    plVar6 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10ab1460c(plVar6);
  }
  param_1[1] = (long)puVar10;
  return plVar6;
}



/* Entry: 10ab12b08; end: 10ab12bab;  */

undefined8 * FUN_10ab12b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c46b38;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_10ab12bac();
  return param_1;
}



/* Entry: 10ab12bac; end: 10ab12f0b;  */

void FUN_10ab12bac(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 auStack_c8 [2];
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  long **pplStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d0194(auStack_c8,&lStack_70);
  plVar7 = (long *)(param_1 + 0x18);
  func_0x00010a19b5ac(plVar7,auStack_c8);
  plVar6 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
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
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar6;
    }
  }
  FUN_10ab6e898();
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_70,*plVar7,plVar7[1]);
  }
  else {
    lStack_68 = plVar7[1];
    lStack_70 = *plVar7;
    lStack_60 = plVar7[2];
  }
  lStack_58 = plVar7[3];
  uStack_40 = (undefined4)plVar7[6];
  lStack_48 = plVar7[5];
  lStack_50 = plVar7[4];
  FUN_10ab6f520(auStack_c8,&lStack_70,1);
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar8 + 0xf0) = auStack_c8[0];
  if ((undefined4 *)(lVar8 + 0xf0) != auStack_c8) {
    FUN_10a1903c4(lVar8 + 0xf8,plStack_c0,lStack_b8,
                  (lStack_b8 - (long)plStack_c0 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar8 + 0x118) = uStack_a0;
  *(undefined8 *)(lVar8 + 0x110) = uStack_a8;
  *(undefined8 *)(lVar8 + 0x128) = uStack_90;
  *(undefined8 *)(lVar8 + 0x120) = uStack_98;
  *(undefined8 *)(lVar8 + 0x130) = uStack_88;
  pplStack_78 = &plStack_c0;
  func_0x00010a190844(&pplStack_78);
  if (lStack_60 < 0) {
    __ZdlPv(lStack_70);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar8 + 0xe8) = 0x100000000;
  lVar9 = *(long *)(lVar8 + 0x10);
  uVar12 = (long)*(int *)(lVar8 + 0xf0) * 4;
  uVar13 = *(long *)(lVar8 + 0x18) - lVar9;
  if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
    if (uVar12 < uVar13) {
      *(ulong *)(lVar8 + 0x18) = lVar9 + uVar12;
    }
  }
  else {
    func_0x000107c27d58((long *)(lVar8 + 0x10),uVar12 - uVar13);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  uVar2 = *(uint *)(lVar8 + 0x110);
  if (uVar2 == 0xffffffff) {
    lVar9 = 0;
  }
  else {
    uVar12 = (*(long *)(lVar8 + 0x100) - *(long *)(lVar8 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar12 < uVar2 || uVar12 - uVar2 == 0) goto LAB_10ab12ecc;
    lVar9 = *(long *)(lVar8 + 0xf8) + (ulong)uVar2 * 0x38;
  }
  uVar2 = *(int *)(lVar9 + 0x24) - 1;
  if (uVar2 < 7) {
    iVar11 = *(int *)(&UNK_10e4f5bd0 + (ulong)uVar2 * 4);
  }
  else {
    iVar11 = 0;
  }
  if (*(int *)(lVar9 + 0x28) * iVar11 == 8) {
    puVar10 = (undefined8 *)(*(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar9 + 0x30));
    uVar12 = (ulong)*(uint *)(lVar8 + 0xf0);
  }
  else {
    puVar10 = (undefined8 *)0x0;
    uVar12 = 0;
  }
  lVar8 = 0;
  do {
    *puVar10 = *(undefined8 *)(&UNK_10e4f55c0 + lVar8);
    lVar8 = lVar8 + 8;
    puVar10 = (undefined8 *)((long)puVar10 + uVar12);
  } while (lVar8 != 0x20);
  lStack_70 = 0;
  pplStack_78 = (long **)((ulong)pplStack_78 & 0xffffffff00000000);
  FUN_10a276954(auStack_c8,&uStack_79,&lStack_70,&pplStack_78,param_1 + 0x18);
  func_0x00010a19a938(param_1 + 8,auStack_c8);
  if (plStack_c0 != (long *)0x0) {
    plVar7 = plStack_c0 + 1;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  plVar7 = *(long **)(param_1 + 8);
  if (*(char *)((long)plVar7 + 0xb9) != '\x01') {
    *(undefined1 *)((long)plVar7 + 0xb9) = 1;
    (**(code **)(*plVar7 + 0xa0))();
    plVar7 = *(long **)(param_1 + 8);
  }
  if (*(char *)((long)plVar7 + 0xba) != '\x01') {
    *(undefined1 *)((long)plVar7 + 0xba) = 1;
    (**(code **)(*plVar7 + 0xa0))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_10ab12ecc:
  FUN_10ab725fc();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab12ed4);
  (*pcVar5)();
}



/* Entry: 10ab12f0c; end: 10ab12f6b;  */

undefined8 * FUN_10ab12f0c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c46b38;
  FUN_10a0617bc(param_1 + 0xe);
  lVar1 = 0x60;
  do {
    FUN_10a0617bc((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  FUN_10ab15470(param_1 + 5);
  FUN_10a0cfe2c(param_1 + 3);
  func_0x00010a1943a0(param_1 + 1);
  return param_1;
}



/* Entry: 10ab12f6c; end: 10ab12f6f;  */

undefined8 * FUN_10ab12f6c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c46b38;
  FUN_10a0617bc(param_1 + 0xe);
  lVar1 = 0x60;
  do {
    FUN_10a0617bc((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  FUN_10ab15470(param_1 + 5);
  FUN_10a0cfe2c(param_1 + 3);
  func_0x00010a1943a0(param_1 + 1);
  return param_1;
}



/* Entry: 10ab12f70; end: 10ab12f83;  */

void FUN_10ab12f70(void)

{
  FUN_10ab12f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab12f84; end: 10ab1306b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 **
FUN_10ab12f84(long param_1,undefined1 **param_2,byte *param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 ***pppuVar11;
  undefined1 ***pppuVar12;
  undefined1 ***pppuVar13;
  undefined1 ***pppuVar14;
  undefined1 **ppuVar15;
  undefined1 ***pppuVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  ulong uVar24;
  undefined1 **ppuVar25;
  ulong unaff_x19;
  long *plVar26;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 **ppuStack_1e0;
  undefined1 **ppuStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  ulong uStack_1a8;
  uint *puStack_1a0;
  undefined8 uStack_198;
  uint *puStack_190;
  undefined1 **ppuStack_188;
  undefined1 **ppuStack_180;
  undefined1 **ppuStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 **ppuStack_160;
  undefined1 **ppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_100;
  undefined1 ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [7];
  char cStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_ac;
  undefined1 **appuStack_a8 [3];
  long lStack_90;
  char in_stack_ffffffffffffffb0;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar26 = (long *)(param_1 + 0x18);
  lVar19 = *plVar26;
  uVar3 = *(uint *)(lVar19 + 0x110);
  if (uVar3 == 0xffffffff) {
    lVar21 = 0;
  }
  else {
    uVar24 = (*(long *)(lVar19 + 0x100) - *(long *)(lVar19 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar24 < uVar3 || uVar24 - uVar3 == 0) {
      FUN_10ab725fc();
      pcStack_28 = FUN_10ab1306c;
      lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
      bVar4 = *param_3;
      plVar26 = (long *)(param_1 + (ulong)bVar4 * 0x10 + 0x50);
      lVar19 = *plVar26;
      uStack_140 = param_7;
      plStack_138 = param_4;
      puStack_30 = &stack0xfffffffffffffff0;
      if (lVar19 == 0) {
        FUN_10ab451f4(&lStack_e0,0,&UNK_10f68fe2b,0x24,&UNK_10f68fe50,0x20,&UNK_10f68fe71,0x18);
        if (*(long **)(lStack_e0 + 0x228) == *(long **)(lStack_e0 + 0x230)) {
          lVar19 = 0;
        }
        else {
          lVar19 = **(long **)(lStack_e0 + 0x228);
        }
        ppuStack_f0 = (undefined1 **)0x0;
        uStack_e8 = 0;
        pppuStack_f8 = &ppuStack_f0;
        if (bVar4 != 0) {
          func_0x000107c2b074(&pppuStack_118,&PTR_DAT_110c46e00);
          FUN_10a20e230(&pppuStack_f8,&pppuStack_118,&pppuStack_118);
          if ((long)pcStack_108 < 0) {
            __ZdlPv(pppuStack_118);
          }
        }
        FUN_10a0e3500(&pppuStack_118,&pppuStack_f8);
        FUN_10a0da1b8((long *)(lVar19 + 0x200),*(undefined8 *)(lVar19 + 0x208));
        *(undefined1 ****)(lVar19 + 0x200) = pppuStack_118;
        *(undefined1 ***)(lVar19 + 0x208) = ppuStack_110;
        *(code **)(lVar19 + 0x210) = pcStack_108;
        if (pcStack_108 == (code *)0x0) {
          *(long *)(lVar19 + 0x200) = lVar19 + 0x208;
        }
        else {
          pppuStack_118 = &ppuStack_110;
          ppuStack_110[2] = (undefined1 *)(lVar19 + 0x208);
          ppuStack_110 = (undefined1 **)0x0;
          pcStack_108 = (code *)0x0;
        }
        FUN_10a0da1b8(&pppuStack_118,ppuStack_110);
        FUN_10ab0e0d4(lVar19);
        plStack_128 = plStack_d8;
        lStack_130 = lStack_e0;
        if (plStack_d8 != (long *)0x0) {
          plVar1 = plStack_d8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a0da1b8(&pppuStack_f8,ppuStack_f0);
        FUN_10a044790(auStack_d0);
        (**(code **)CONCAT44(uStack_c4,uStack_c8))(&uStack_c8);
        if (plStack_d8 != (long *)0x0) {
          plVar1 = plStack_d8 + 1;
          do {
            lVar19 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
          }
        }
        func_0x00010a015c50(plVar26,&lStack_130);
        plVar1 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar2 = plStack_128 + 1;
          do {
            lVar19 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        lVar19 = *plVar26;
        unaff_x22 = param_5;
      }
      ppuVar7 = param_2 + 4;
      FUN_10a5dfd94(ppuVar7,lVar19);
      ppuVar8 = param_2 + 4;
      FUN_10a01eacc(ppuVar8,ppuVar7);
      FUN_10aaebdec();
      puVar27 = (undefined1 *)param_8[1];
      puVar20 = (undefined1 *)*param_8;
      puVar28 = (undefined1 *)param_8[2];
      puVar30 = (undefined1 *)param_8[5];
      puVar29 = (undefined1 *)param_8[4];
      ppuVar8[7] = (undefined1 *)param_8[3];
      ppuVar8[6] = puVar28;
      ppuVar8[9] = puVar30;
      ppuVar8[8] = puVar29;
      ppuVar8[5] = puVar27;
      ppuVar8[4] = puVar20;
      func_0x000107c2b074(&lStack_e0,&PTR_DAT_110c46e18);
      if (*plStack_138 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(*plStack_138 + 0x268);
      }
      FUN_10a5e17a8(ppuVar8,&lStack_e0,uVar17,param_3);
      if (cStack_c9 < '\0') {
        __ZdlPv(lStack_e0);
      }
      func_0x000107c2b074(&lStack_e0,&PTR_DAT_110c46e30);
      FUN_10a7ec36c(ppuVar8,&lStack_e0,uStack_140);
      if (cStack_c9 < '\0') {
        __ZdlPv(lStack_e0);
      }
      if (*param_3 == 1) {
        func_0x000107c2b074(&lStack_e0,&PTR_DAT_110c46e48);
        pppuStack_118 =
             (undefined1 ***)CONCAT44(pppuStack_118._4_4_,(float)(int)(unaff_x19 >> 0x20));
        FUN_10a01671c(ppuVar8,&lStack_e0,&pppuStack_118);
        if (cStack_c9 < '\0') {
          __ZdlPv(lStack_e0);
        }
      }
      FUN_10ab12f84(param_1,param_6);
      ppuVar8 = param_2;
      FUN_10ab0fa64(param_2,ppuVar7,param_5,*(undefined8 *)(param_1 + 8),unaff_x19 & 0xff,unaff_x20)
      ;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
        ___stack_chk_fail();
        if ((long)pcStack_108 < 0) {
          __ZdlPv(pppuStack_118);
        }
        ppuVar15 = ppuStack_f0;
        FUN_10a0da1b8(&pppuStack_f8);
        func_0x00010a015cb4(&lStack_e0);
        ppuVar25 = ppuVar8;
        __Unwind_Resume();
        pcStack_148 = FUN_10ab13458;
        ppuVar7 = ppuVar25 + 5;
        ppuVar9 = ppuVar15;
        uStack_170 = unaff_x22;
        lStack_168 = param_1;
        ppuStack_160 = param_2;
        ppuStack_158 = ppuVar8;
        ppuStack_150 = &puStack_30;
        FUN_10ab15558();
        if (ppuVar7 == (undefined1 **)0x0) {
          uStack_1ac = (uint)*(byte *)((long)ppuVar15 + 0x11);
          if (2 < uStack_1ac) {
            FUN_10a00946c(&UNK_10f68fee3);
            pcStack_1c8 = FUN_10ab13518;
            ppuStack_1e0 = ppuVar25;
            ppuStack_1d8 = ppuVar15;
            pppuStack_1d0 = &ppuStack_150;
            FUN_10ab1306c();
                    /* WARNING: Could not recover jumptable at 0x00010ab1358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*ppuVar9 + 0x90))(ppuVar9,0,3,3);
            return ppuVar9;
          }
          uStack_1b0 = (uint)*(byte *)((long)ppuVar15 + 0x12);
          FUN_10ab13c3c();
          uStack_1b4 = (uint)*(byte *)((long)ppuVar15 + 0x13);
          FUN_10ab13c3c();
          uStack_1b8 = (uint)*(byte *)((long)ppuVar15 + 0x14);
          FUN_10ab13c3c();
          puStack_1a0 = &uStack_1ac;
          uStack_198 = &uStack_1b0;
          puStack_190 = &uStack_1b4;
          ppuStack_188 = (undefined1 **)&uStack_1b8;
          ppuVar7 = ppuVar25 + 5;
          uStack_1a8 = (long)ppuVar15 + 0x15;
          ppuStack_180 = ppuVar15;
          ppuStack_178 = ppuVar15;
          FUN_10ab156ec(ppuVar7,ppuVar15,&UNK_10dd5b8f9,&ppuStack_178,&uStack_1a8);
        }
        return (undefined1 **)((long)ppuVar7 + 0x2c);
      }
      return ppuVar8;
    }
    lVar21 = *(long *)(lVar19 + 0xf8) + (ulong)uVar3 * 0x38;
  }
  uVar3 = *(int *)(lVar21 + 0x24) - 1;
  if (uVar3 < 7) {
    iVar23 = *(int *)(&UNK_10e4f5bd0 + (ulong)uVar3 * 4);
  }
  else {
    iVar23 = 0;
  }
  if (*(int *)(lVar21 + 0x28) * iVar23 == 8) {
    puVar22 = (undefined8 *)(*(long *)(lVar19 + 0x10) + (ulong)*(uint *)(lVar21 + 0x30));
    uVar24 = (ulong)*(uint *)(lVar19 + 0xf0);
  }
  else {
    puVar22 = (undefined8 *)0x0;
    uVar24 = 0;
  }
  lVar19 = 0;
  do {
    *puVar22 = *(undefined8 *)((long)param_2 + lVar19);
    lVar19 = lVar19 + 8;
    puVar22 = (undefined8 *)((long)puVar22 + uVar24);
  } while (lVar19 != 0x20);
  FUN_10ab4e0a4(*(undefined8 *)(param_1 + 0x18));
  ppuVar7 = *(undefined1 ***)(param_1 + 8);
  if (*plVar26 != 0) {
    func_0x00010a19b530(ppuVar7 + 0x1b);
    if (ppuVar7[0x1b] != (undefined1 *)0x0) {
      ppuVar8 = ppuVar7;
      (**(code **)(*ppuVar7 + 0xa0))();
      uVar18 = 0;
      if (ppuVar7[0x1b] != (undefined1 *)0x0) {
        uVar18 = 2;
      }
      *(undefined4 *)((long)ppuVar7 + 0x74) = uVar18;
      return ppuVar8;
    }
    ppuVar7 = (undefined1 **)&UNK_10f69f238;
    FUN_10a00946c();
    pcStack_28 = (code *)0x10ac6ece4;
    ppuVar8 = ppuVar7 + 0x18;
    *(byte *)(ppuVar7 + 0x1a) = *(byte *)(ppuVar7 + 0x1a) | 1;
    if ((*ppuVar8 != (undefined1 *)0x0) &&
       ((*(char *)((long)ppuVar7 + 0xb9) == '\0' || (*(char *)((long)ppuVar7 + 0xba) == '\0')))) {
      puStack_30 = &stack0xfffffffffffffff0;
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
      }
      ppuVar25 = (undefined1 **)ppuVar7[0x19];
      *ppuVar8 = (undefined1 *)0x0;
      ppuVar7[0x19] = (undefined1 *)0x0;
      if (ppuVar25 != (undefined1 **)0x0) {
        ppuVar7 = ppuVar25 + 1;
        do {
          puVar20 = *ppuVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar6) {
            *ppuVar7 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined1 *)0x0) {
          (**(code **)(*ppuVar25 + 0x10))(ppuVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar25);
          return ppuVar25;
        }
      }
      return ppuVar8;
    }
    return ppuVar7;
  }
  puVar10 = &UNK_10f69f21e;
  FUN_10a00946c();
  pppuVar11 = &ppuStack_100;
  pcStack_28 = FUN_10ac64638;
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100._0_4_ = 0;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0xffffffff;
  uStack_b0 = 0;
  uStack_ac = 0;
  pppuVar14 = (undefined1 ***)(puVar10 + 0xe8);
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10ab17db4(appuStack_a8,&ppuStack_100,pppuVar14,(long)*(short *)(puVar10 + 0x10a));
  if (in_stack_ffffffffffffffb0 == '\x01') {
    pppuVar14 = appuStack_a8;
    FUN_10a4c3ba4(plVar26);
    FUN_10a22d0f8(appuStack_a8);
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return (undefined1 **)pppuVar11;
  }
  ___stack_chk_fail();
  if (in_stack_ffffffffffffffb0 == '\x01') {
    FUN_10a22d0f8(appuStack_a8);
  }
  FUN_10a22d0f8(&ppuStack_100);
  pppuVar12 = pppuVar11;
  __Unwind_Resume();
  pppuVar13 = &ppuStack_1e0;
  pcStack_108 = FUN_10ac6472c;
  plStack_128 = *(long **)PTR____stack_chk_guard_11034bdc0;
  pppuVar16 = pppuVar14;
  pppuStack_118 = pppuVar11;
  ppuStack_110 = &puStack_30;
  if ((uint)*(ushort *)(pppuVar12 + 0x21) != (int)*(short *)((long)pppuVar12 + 0x10a)) {
    ppuStack_1e0 = (undefined1 **)((ulong)ppuStack_1e0 & 0xffffffff00000000);
    uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
    puStack_1a0 = (uint *)CONCAT35(puStack_1a0._5_3_,1);
    uVar3 = (uint)uStack_198;
    uStack_198 = (uint *)CONCAT44(0xffffffff,uVar3 & 0xffffff00);
    uVar24 = (ulong)puStack_190 >> 0x28;
    uVar3 = (uint)puStack_190;
    puStack_190._0_5_ = (uint5)(uVar3 & 0xffffff00);
    puStack_190 = (uint *)CONCAT35((int3)uVar24,(uint5)puStack_190);
    pppuVar16 = pppuVar12 + 0x1d;
    FUN_10ab17db4(&ppuStack_188,&ppuStack_1e0);
    if ((char)lStack_130 == '\x01') {
      pppuVar16 = &ppuStack_188;
      FUN_10a4c3ba4(pppuVar14);
      if ((char)lStack_130 == '\x01') {
        FUN_10a22d0f8(&ppuStack_188);
      }
    }
    FUN_10a22d0f8();
    pppuVar12 = pppuVar13;
  }
  if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_128) {
    return (undefined1 **)pppuVar12;
  }
  ___stack_chk_fail();
  if ((char)lStack_130 == '\x01') {
    FUN_10a22d0f8(&ppuStack_188);
  }
  FUN_10a22d0f8(&ppuStack_1e0);
  __Unwind_Resume();
  pppuVar14 = pppuVar12 + 0x1d;
  func_0x00010ab17e00(pppuVar14,(long)*(short *)((long)pppuVar12 + 0x10a));
  if (pppuVar16 != (undefined1 ***)0x0) {
    ppuVar7 = pppuVar16[5];
    ppuVar8 = pppuVar16[6];
    if (ppuVar7 == ppuVar8) {
LAB_10ac64884:
      ppuVar25 = (undefined1 **)0x0;
      if (ppuVar7 != ppuVar8) {
        ppuVar25 = ppuVar7;
      }
      if (ppuVar25 != (undefined1 **)0x0) {
        return ppuVar25 + 1;
      }
    }
    else {
      do {
        if ((*(int *)ppuVar7 == (int)pppuVar14) &&
           (*(int *)((long)ppuVar7 + 4) == (int)((ulong)pppuVar14 >> 0x20))) goto LAB_10ac64884;
        ppuVar7 = ppuVar7 + 0x44;
      } while (ppuVar7 != ppuVar8);
    }
  }
  return (undefined1 **)0x0;
}



/* Entry: 10ab1306c; end: 10ab13457;  */

long * FUN_10ab1306c(long param_1,long *param_2,byte *param_3,long *param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,long *param_8,undefined8 param_9,
                    undefined1 param_10,int param_11)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  long lStack_188;
  uint *puStack_180;
  uint *puStack_178;
  uint *puStack_170;
  uint *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long **pplStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [7];
  char cStack_a9;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *param_3;
  plVar10 = (long *)(param_1 + (ulong)bVar1 * 0x10 + 0x50);
  lVar7 = *plVar10;
  uStack_120 = param_7;
  plStack_118 = param_4;
  if (lVar7 == 0) {
    FUN_10ab451f4(&lStack_c0,0,&UNK_10f68fe2b,0x24,&UNK_10f68fe50,0x20,&UNK_10f68fe71,0x18);
    if (*(long **)(lStack_c0 + 0x228) == *(long **)(lStack_c0 + 0x230)) {
      lVar7 = 0;
    }
    else {
      lVar7 = **(long **)(lStack_c0 + 0x228);
    }
    plStack_d0 = (long *)0x0;
    uStack_c8 = 0;
    pplStack_d8 = &plStack_d0;
    if (bVar1 != 0) {
      func_0x000107c2b074(&plStack_f8,&PTR_DAT_110c46e00);
      FUN_10a20e230(&pplStack_d8,&plStack_f8,&plStack_f8);
      if (lStack_e8 < 0) {
        __ZdlPv(plStack_f8);
      }
    }
    FUN_10a0e3500(&plStack_f8,&pplStack_d8);
    FUN_10a0da1b8((long *)(lVar7 + 0x200),*(undefined8 *)(lVar7 + 0x208));
    *(long **)(lVar7 + 0x200) = plStack_f8;
    *(long *)(lVar7 + 0x208) = lStack_f0;
    *(long *)(lVar7 + 0x210) = lStack_e8;
    if (lStack_e8 == 0) {
      *(long *)(lVar7 + 0x200) = lVar7 + 0x208;
    }
    else {
      plStack_f8 = &lStack_f0;
      *(long *)(lStack_f0 + 0x10) = lVar7 + 0x208;
      lStack_f0 = 0;
      lStack_e8 = 0;
    }
    FUN_10a0da1b8(&plStack_f8,lStack_f0);
    FUN_10ab0e0d4(lVar7);
    plStack_108 = plStack_b8;
    lStack_110 = lStack_c0;
    if (plStack_b8 != (long *)0x0) {
      plVar4 = plStack_b8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a0da1b8(&pplStack_d8,plStack_d0);
    FUN_10a044790(auStack_b0);
    (*(code *)*apuStack_a8[0])(apuStack_a8);
    if (plStack_b8 != (long *)0x0) {
      plVar4 = plStack_b8 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    func_0x00010a015c50(plVar10,&lStack_110);
    plVar4 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar5 = plStack_108 + 1;
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar7 = *plVar10;
    unaff_x22 = param_5;
  }
  plVar10 = param_2 + 4;
  FUN_10a5dfd94(plVar10,lVar7);
  plVar4 = param_2 + 4;
  FUN_10a01eacc(plVar4,plVar10);
  FUN_10aaebdec();
  lVar11 = param_8[1];
  lVar7 = *param_8;
  lVar12 = param_8[2];
  lVar14 = param_8[5];
  lVar13 = param_8[4];
  plVar4[7] = param_8[3];
  plVar4[6] = lVar12;
  plVar4[9] = lVar14;
  plVar4[8] = lVar13;
  plVar4[5] = lVar11;
  plVar4[4] = lVar7;
  func_0x000107c2b074(&lStack_c0,&PTR_DAT_110c46e18);
  if (*plStack_118 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*plStack_118 + 0x268);
  }
  FUN_10a5e17a8(plVar4,&lStack_c0,uVar9,param_3);
  if (cStack_a9 < '\0') {
    __ZdlPv(lStack_c0);
  }
  func_0x000107c2b074(&lStack_c0,&PTR_DAT_110c46e30);
  FUN_10a7ec36c(plVar4,&lStack_c0,uStack_120);
  if (cStack_a9 < '\0') {
    __ZdlPv(lStack_c0);
  }
  if (*param_3 == 1) {
    func_0x000107c2b074(&lStack_c0,&PTR_DAT_110c46e48);
    plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,(float)param_11);
    FUN_10a01671c(plVar4,&lStack_c0,&plStack_f8);
    if (cStack_a9 < '\0') {
      __ZdlPv(lStack_c0);
    }
  }
  FUN_10ab12f84(param_1,param_6);
  plVar4 = param_2;
  FUN_10ab0fa64(param_2,plVar10,param_5,*(undefined8 *)(param_1 + 8),param_10,param_9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (lStack_e8 < 0) {
    __ZdlPv(plStack_f8);
  }
  plVar8 = plStack_d0;
  FUN_10a0da1b8(&pplStack_d8);
  func_0x00010a015cb4(&lStack_c0);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_10ab13458;
  plVar10 = plVar5 + 5;
  plVar6 = plVar8;
  uStack_150 = unaff_x22;
  lStack_148 = param_1;
  plStack_140 = param_2;
  plStack_138 = plVar4;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_10ab15558();
  if (plVar10 == (long *)0x0) {
    uStack_18c = (uint)*(byte *)((long)plVar8 + 0x11);
    if (2 < uStack_18c) {
      FUN_10a00946c(&UNK_10f68fee3);
      FUN_10ab1306c();
                    /* WARNING: Could not recover jumptable at 0x00010ab1358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x90))(plVar6,0,3,3);
      return plVar6;
    }
    uStack_190 = (uint)*(byte *)((long)plVar8 + 0x12);
    FUN_10ab13c3c();
    uStack_194 = (uint)*(byte *)((long)plVar8 + 0x13);
    FUN_10ab13c3c();
    uStack_198 = (uint)*(byte *)((long)plVar8 + 0x14);
    FUN_10ab13c3c();
    puStack_180 = &uStack_18c;
    puStack_178 = &uStack_190;
    puStack_170 = &uStack_194;
    puStack_168 = &uStack_198;
    plVar10 = plVar5 + 5;
    lStack_188 = (long)plVar8 + 0x15;
    plStack_160 = plVar8;
    plStack_158 = plVar8;
    FUN_10ab156ec(plVar10,plVar8,&UNK_10dd5b8f9,&plStack_158,&lStack_188);
  }
  return (long *)((long)plVar10 + 0x2c);
}



/* Entry: 10ab13458; end: 10ab13517;  */

long * FUN_10ab13458(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  uint *puStack_60;
  uint *puStack_58;
  uint *puStack_50;
  uint *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar1 = param_1 + 0x28;
  plVar2 = param_2;
  FUN_10ab15558();
  if (lVar1 == 0) {
    uStack_6c = (uint)*(byte *)((long)param_2 + 0x11);
    if (2 < uStack_6c) {
      FUN_10a00946c(&UNK_10f68fee3);
      FUN_10ab1306c();
                    /* WARNING: Could not recover jumptable at 0x00010ab1358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x90))(plVar2,0,3,3);
      return plVar2;
    }
    uStack_70 = (uint)*(byte *)((long)param_2 + 0x12);
    FUN_10ab13c3c();
    uStack_74 = (uint)*(byte *)((long)param_2 + 0x13);
    FUN_10ab13c3c();
    uStack_78 = (uint)*(byte *)((long)param_2 + 0x14);
    FUN_10ab13c3c();
    puStack_60 = &uStack_6c;
    puStack_58 = &uStack_70;
    puStack_50 = &uStack_74;
    puStack_48 = &uStack_78;
    lVar1 = param_1 + 0x28;
    lStack_68 = (long)param_2 + 0x15;
    plStack_40 = param_2;
    plStack_38 = param_2;
    FUN_10ab156ec(lVar1,param_2,&UNK_10dd5b8f9,&plStack_38,&lStack_68);
  }
  return (long *)(lVar1 + 0x2c);
}



/* Entry: 10ab13518; end: 10ab1358f;  */

void FUN_10ab13518(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined1 auStack_34 [16];
  undefined1 uStack_24;
  
  auStack_34[0] = 0;
  uStack_24 = 0;
  FUN_10ab1306c(param_1,param_2,&UNK_10e4ac8a8,param_3,param_4,param_5,param_6,param_7,auStack_34,
                param_8,0);
                    /* WARNING: Could not recover jumptable at 0x00010ab1358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  return;
}



/* Entry: 10ab13590; end: 10ab13c3b;  */

void FUN_10ab13590(long param_1,long *param_2,long *param_3,long param_4,long *param_5,int param_6,
                  long *param_7,undefined8 param_8,undefined8 param_9,float *param_10,
                  undefined4 param_11)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  float fVar14;
  long lVar15;
  long lVar16;
  float fVar17;
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
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *puStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  float fStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(param_1 + 0x70);
  if (*plVar10 == 0) {
    lVar9 = *param_5;
    FUN_10ab451f4(&lStack_c0,0,&UNK_10f68fb8d,0x22,&UNK_10f68fbb0,0x1e,&UNK_10f68fbcf,0x18,1);
    if (*(long **)(lStack_c0 + 0x228) == *(long **)(lStack_c0 + 0x230)) {
      lVar11 = 0;
    }
    else {
      lVar11 = **(long **)(lStack_c0 + 0x228);
    }
    fStack_148 = 1.54143e-44;
    fStack_144 = 0.0;
    puStack_150 = &DAT_10f68fbe8;
    fStack_140 = -2.6273733e-22;
    fStack_13c = 8.8192724e+13;
    uStack_d8 = 0xe;
    puStack_e0 = &DAT_10f68fbf4;
    uStack_d0 = 0x46100effb5321320;
    puStack_f8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if ((lVar9 != 0) && (func_0x00010ab154b8(&puStack_f8,&puStack_150), param_6 != 0)) {
      func_0x00010ab154b8(&puStack_f8,&puStack_e0);
    }
    FUN_10a0e3500(&plStack_110,&puStack_f8);
    FUN_10a0da1b8((long *)(lVar11 + 0x200),*(undefined8 *)(lVar11 + 0x208));
    *(long **)(lVar11 + 0x200) = plStack_110;
    *(long *)(lVar11 + 0x208) = lStack_108;
    *(long *)(lVar11 + 0x210) = lStack_100;
    if (lStack_100 == 0) {
      *(long *)(lVar11 + 0x200) = lVar11 + 0x208;
    }
    else {
      plStack_110 = &lStack_108;
      *(long *)(lStack_108 + 0x10) = lVar11 + 0x208;
      lStack_108 = 0;
      lStack_100 = 0;
    }
    FUN_10a0da1b8(&plStack_110,lStack_108);
    FUN_10ab0e0d4(lVar11);
    plStack_118 = plStack_b8;
    lStack_120 = lStack_c0;
    if (plStack_b8 != (long *)0x0) {
      plVar6 = plStack_b8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a0da1b8(&puStack_f8,uStack_f0);
    FUN_10a044790(&uStack_b0);
    (*(code *)*puStack_a8)(&puStack_a8);
    if (plStack_b8 != (long *)0x0) {
      plVar6 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    func_0x00010a015c50(plVar10,&lStack_120);
    plVar6 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar7 = plStack_118 + 1;
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  (**(code **)(**(long **)(*param_7 + 0x268) + 0x90))(&puStack_150);
  fVar18 = fStack_13c * 0.0 + fStack_148 * 0.5 + fStack_130 * 0.0;
  fVar20 = fStack_13c * 0.5 + fStack_148 * 0.0 + fStack_130 * 0.0;
  fStack_130 = fStack_13c * 0.5 + fStack_148 * 0.5 + fStack_130;
  fVar21 = *param_10;
  fVar22 = param_10[1];
  fVar23 = param_10[2];
  fVar24 = param_10[3];
  fVar25 = param_10[4];
  fVar12 = param_10[5];
  fVar26 = param_10[6];
  fVar27 = param_10[7];
  fVar28 = param_10[8];
  fVar14 = fVar20 * fVar22 + fVar21 * fVar18 + fVar23 * fStack_130;
  fVar17 = fVar20 * fVar25 + fVar24 * fVar18;
  fVar19 = fVar17 + fVar12 * fStack_130;
  fStack_a0 = fVar20 * fVar27 + fVar26 * fVar18 + fVar28 * fStack_130;
  fVar18 = SUB84(puStack_150,0);
  fVar20 = (float)((ulong)puStack_150 >> 0x20);
  fVar29 = (float)uStack_138;
  fVar30 = (float)((ulong)uStack_138 >> 0x20);
  fVar31 = fStack_144 * 0.0 + fVar18 * 0.5 + fVar29 * 0.0;
  fVar32 = fStack_140 * 0.0 + fVar20 * 0.5 + fVar30 * 0.0;
  fVar33 = fStack_144 * 0.5 + fVar18 * 0.0 + fVar29 * 0.0;
  fVar34 = fStack_140 * 0.5 + fVar20 * 0.0 + fVar30 * 0.0;
  fVar29 = fStack_144 * 0.5 + fVar18 * 0.5 + fVar29;
  fVar30 = fStack_140 * 0.5 + fVar20 * 0.5 + fVar30;
  fVar18 = fVar33 * fVar22 + fVar31 * fVar21 + fVar29 * fVar23;
  fVar20 = fVar34 * fVar22 + fVar32 * fVar21 + fVar30 * fVar23;
  fVar21 = fVar33 * fVar25 + fVar31 * fVar24 + fVar29 * fVar12;
  fVar22 = fVar34 * fVar25 + fVar32 * fVar24 + fVar30 * fVar12;
  fVar23 = fVar33 * fVar27 + fVar31 * fVar26 + fVar29 * fVar28;
  fVar24 = fVar34 * fVar27 + fVar32 * fVar26 + fVar30 * fVar28;
  lStack_c0 = CONCAT44(fVar22 * 0.0 + fVar20 * 2.0 + fVar24 * 0.0,
                       fVar21 * 0.0 + fVar18 * 2.0 + fVar23 * 0.0);
  plStack_b8 = (long *)CONCAT44(fVar21 * 2.0 + fVar18 * 0.0 + fVar23 * 0.0,
                                fVar19 * 0.0 + fVar14 * 2.0 + fStack_a0 * 0.0);
  puStack_a8 = (undefined8 *)CONCAT44((-fVar22 - fVar20) + fVar24,(-fVar21 - fVar18) + fVar23);
  uStack_b0 = CONCAT44(fVar19 + fVar19 + fVar14 * 0.0 + fStack_a0 * 0.0,
                       fVar22 + fVar22 + fVar20 * 0.0 + fVar24 * 0.0);
  fStack_a0 = ((-(fStack_130 * fVar12) - fVar17) - fVar14) + fStack_a0;
  if ((bRam00000001137ec2f0 & 1) == 0) {
    iVar4 = 0x137ec2f0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uVar3 = *(undefined4 *)(param_4 + 4);
      uRam00000001137ec3d4 = CONCAT44(uVar3,uVar3);
      uRam00000001137ec3dc = CONCAT44(uVar3,uVar3);
      uRam00000001137ec3c0 = 0;
      uRam00000001137ec3cc = 0x300000003;
      uRam00000001137ec3c4 = 0x300000001;
      uRam00000001137ec3e4 = 0x3e80000;
      ___cxa_guard_release(0x1137ec2f0);
    }
  }
  plVar6 = param_2 + 4;
  FUN_10a5dfd94(plVar6,*plVar10);
  plVar10 = param_2 + 4;
  FUN_10a01eacc(plVar10,plVar6);
  plVar7 = (long *)(ulong)(byte)param_11;
  FUN_10aaebdec();
  lVar11 = plVar7[1];
  lVar9 = *plVar7;
  lVar13 = plVar7[2];
  lVar16 = plVar7[5];
  lVar15 = plVar7[4];
  plVar10[7] = plVar7[3];
  plVar10[6] = lVar13;
  plVar10[9] = lVar16;
  plVar10[8] = lVar15;
  plVar10[5] = lVar11;
  plVar10[4] = lVar9;
  func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46a98);
  if (*param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*param_3 + 0x268);
  }
  FUN_10a5e17a8(plVar10,&puStack_150,uVar8,0x1137ec3c0);
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  if (*param_5 != 0) {
    func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46e60);
    if (*param_5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*param_5 + 0x268);
    }
    FUN_10a5e17a8(plVar10,&puStack_150,uVar8,&UNK_10e4ac8a8);
    if ((int)fStack_13c < 0) {
      __ZdlPv(puStack_150);
    }
  }
  func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46e18);
  if (*param_7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*param_7 + 0x268);
  }
  FUN_10a5e17a8(plVar10,&puStack_150,uVar8,&UNK_10e4ac8a8);
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46e30);
  FUN_10a7ec36c(plVar10,&puStack_150,param_10);
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46e78);
  FUN_10a7ec36c(plVar10,&puStack_150,&lStack_c0);
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  func_0x000107c2b074(&puStack_150,&PTR_DAT_110c46e90);
  FUN_10a022468(plVar10,&puStack_150,param_4);
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  FUN_10ab12f84(param_1,param_9);
  puStack_150 = (undefined *)((ulong)puStack_150 & 0xffffffffffffff00);
  fStack_140 = (float)((uint)fStack_140 & 0xffffff00);
  FUN_10ab0fa64(param_2,plVar6,param_8,*(undefined8 *)(param_1 + 8),param_11._1_1_,&puStack_150);
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  uVar5 = (uint)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)fStack_13c < 0) {
    __ZdlPv(puStack_150);
  }
  __Unwind_Resume();
  if (uVar5 < 4) {
    return;
  }
  FUN_10a00946c(&UNK_10f68fef8);
  return;
}



/* Entry: 10ab13c3c; end: 10ab13c5b;  */

void FUN_10ab13c3c(uint param_1)

{
  if (param_1 < 4) {
    return;
  }
  FUN_10a00946c(&UNK_10f68fef8);
  return;
}



/* Entry: 10ab13c5c; end: 10ab13c5f;  */

void FUN_10ab13c5c(void)

{
  return;
}



/* Entry: 10ab13c60; end: 10ab14007;  */

/* WARNING: Removing unreachable block (ram,0x00010ab14374) */

undefined1  [16] FUN_10ab13c60(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long lStack_358;
  long **pplStack_350;
  long *plStack_348;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_1f8;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_260 = (long *)0x0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_278 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0xffffffffffffffff;
  uStack_288 = 0xffffffffffffffff;
  uStack_280 = 0;
  uStack_270 = 0;
  FUN_10a061728(&plStack_260,&uStack_2d0);
  plVar3 = (long *)CONCAT44(uStack_29c,uStack_2a0);
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar14 = *plVar5;
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar19) {
        *plVar5 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar3 = (long *)CONCAT44(uStack_2c4,uStack_2c8);
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar14 = *plVar5;
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar19) {
        *plVar5 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar5 = (long *)0x1;
  FUN_10a088744(*(undefined8 *)(*param_4 + 0x268));
  plVar3 = plStack_250;
  if (plVar5 == (long *)0x0) {
    lStack_258 = 0;
    plVar5 = (long *)0x0;
LAB_10ab13dcc:
    bVar19 = true;
  }
  else {
    lStack_258 = *plVar5;
    plVar5 = (long *)plVar5[1];
    if (plVar5 == (long *)0x0) goto LAB_10ab13dcc;
    plVar8 = plVar5 + 1;
    do {
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar19) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar19) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar19 = false;
  }
  plVar8 = plVar5;
  if (plStack_250 != (long *)0x0) {
    plVar10 = plStack_250 + 1;
    do {
      lVar14 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      lVar14 = *plStack_250;
      plStack_250 = plVar5;
      (**(code **)(lVar14 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      plVar8 = plStack_250;
    }
  }
  plStack_250 = plVar8;
  uStack_248 = 0;
  uStack_240 = 0xffffffffffffffff;
  uStack_238 = 0xffffffffffffffff;
  if (!bVar19) {
    plVar3 = plVar5 + 1;
    do {
      lVar14 = *plVar3;
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar19) {
        *plVar3 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uStack_1f8 = 2;
  (**(code **)(*param_1 + 0x88))(param_1,&plStack_260);
  lVar14 = *param_4;
  plVar3 = *(long **)(lVar14 + 0x268);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
LAB_10ab13ea4:
    uStack_2c4 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0xb0))();
    plVar5 = *(long **)(lVar14 + 0x268);
    if (plVar5 == (long *)0x0) goto LAB_10ab13ea4;
    (**(code **)(*plVar5 + 0xb8))();
    uStack_2c4 = SUB84(plVar5,0);
  }
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = SUB84(plVar3,0);
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_2d0);
  uStack_2d0 = 0x3f800000;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2bc = 0x3f800000;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0x3f800000;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_294 = 0x3f800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_3,param_2,&uStack_2d0,3);
  plVar8 = (long *)0x3;
  plVar10 = (long *)0x3;
  (**(code **)(*param_1 + 0x90))(param_1,0);
  plVar5 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar15 = *plVar6;
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar19) {
        *plVar6 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar6 = plStack_b0 + 1;
    do {
      lVar15 = *plVar6;
      cVar1 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar19) {
        *plVar6 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = &lStack_258;
  plVar6 = plStack_260;
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar20._8_8_ = plVar6;
    auVar20._0_8_ = plVar5;
    return auVar20;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&plStack_260);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_2d8 = FUN_10ab14008;
  lStack_358 = plVar4[1] - *plVar4;
  uVar13 = (lStack_358 >> 5) + 1;
  plStack_300 = plVar3;
  uStack_2f8 = param_2;
  pplStack_2f0 = &plStack_260;
  plStack_2e8 = plVar5;
  puStack_2e0 = &stack0xfffffffffffffff0;
  if (uVar13 >> 0x3b == 0) {
    uVar12 = plVar4[2] - *plVar4;
    uVar16 = (long)uVar12 >> 4;
    if (uVar16 <= uVar13) {
      uVar16 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar12) {
      uVar16 = 0x7ffffffffffffff;
    }
    plStack_308 = plVar4;
    if (uVar16 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar4;
      FUN_10a36f358();
    }
    plVar8 = (long *)((long)plVar3 + lStack_358);
    lVar15 = plVar6[1];
    lVar14 = *plVar6;
    plVar8[2] = plVar6[2];
    plVar8[1] = lVar15;
    *plVar8 = lVar14;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar8[3] = 0;
    plStack_328 = plVar3;
    plStack_320 = plVar8;
    plStack_310 = plVar3 + uVar16 * 4;
    func_0x000107c2b080(plVar8);
    plVar5 = plVar8 + 4;
    lVar15 = *plVar4;
    lVar14 = (long)plVar8 + (lVar15 - plVar4[1]);
    plStack_318 = plVar5;
    func_0x00010a36f38c(plVar4,lVar15,plVar4[1],lVar14);
    plStack_328 = (long *)*plVar4;
    *plVar4 = lVar14;
    plVar4[1] = (long)plVar5;
    plStack_310 = (long *)plVar4[2];
    plVar4[2] = (long)(plVar3 + uVar16 * 4);
    plStack_320 = plStack_328;
    plStack_318 = plStack_328;
    func_0x00010a36f4bc(&plStack_328);
    auVar21._8_8_ = lVar15;
    auVar21._0_8_ = plVar5;
    return auVar21;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_328);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_338 = FUN_10ab1411c;
  lVar15 = plVar5[1] - *plVar5;
  uVar13 = (lVar15 >> 5) + 1;
  plStack_360 = plVar3;
  pplStack_350 = &plStack_260;
  plStack_348 = plVar4;
  ppuStack_340 = &puStack_2e0;
  if (uVar13 >> 0x3b == 0) {
    uVar12 = plVar5[2] - *plVar5;
    uVar16 = (long)uVar12 >> 4;
    if (uVar16 <= uVar13) {
      uVar16 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar12) {
      uVar16 = 0x7ffffffffffffff;
    }
    plStack_368 = plVar5;
    if (uVar16 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar5;
      FUN_10a36f358();
    }
    plStack_380 = (long *)((long)plVar3 + lVar15);
    lVar15 = plVar6[1];
    lVar14 = *plVar6;
    plStack_380[2] = plVar6[2];
    plStack_380[1] = lVar15;
    *plStack_380 = lVar14;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    plStack_380[3] = plVar6[3];
    plVar8 = plStack_380 + 4;
    lVar15 = *plVar5;
    lVar14 = (long)plStack_380 + (lVar15 - plVar5[1]);
    plStack_388 = plVar3;
    plStack_378 = plVar8;
    plStack_370 = plVar3 + uVar16 * 4;
    func_0x00010a36f38c(plVar5,lVar15,plVar5[1],lVar14);
    plStack_388 = (long *)*plVar5;
    *plVar5 = lVar14;
    plVar5[1] = (long)plVar8;
    plStack_370 = (long *)plVar5[2];
    plVar5[2] = (long)(plVar3 + uVar16 * 4);
    plStack_380 = plStack_388;
    plStack_378 = plStack_388;
    func_0x00010a36f4bc(&plStack_388);
    auVar22._8_8_ = lVar15;
    auVar22._0_8_ = plVar8;
    return auVar22;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_388);
  __Unwind_Resume(plVar5);
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if ((long *)(plVar3[2] - (long)plVar5 >> 5) < plVar10) {
    plVar18 = plVar3;
    plVar7 = plVar6;
    plVar9 = plVar8;
    plVar11 = plVar10;
    FUN_10a7a6010();
    if ((ulong)plVar10 >> 0x3b != 0) {
      FUN_10a36f344();
      plVar3[1] = lVar14;
      __Unwind_Resume();
      plVar3[1] = (long)plVar5;
      __Unwind_Resume();
      uVar13 = plVar18[2];
      plVar5 = (long *)*plVar18;
      plVar3 = plVar18;
      if ((long *)((long)(uVar13 - (long)plVar5) >> 3) < plVar11) {
        plVar8 = plVar18;
        plVar10 = plVar7;
        plVar6 = plVar9;
        if (plVar5 != (long *)0x0) {
          plVar18[1] = (long)plVar5;
          __ZdlPv();
          uVar13 = 0;
          *plVar18 = 0;
          plVar18[1] = 0;
          plVar18[2] = 0;
          plVar8 = plVar5;
        }
        if ((ulong)plVar11 >> 0x3d != 0) {
          FUN_10ab14518();
          if ((ulong)plVar10 >> 0x3d == 0) {
            plVar3 = plVar8;
            FUN_10ab1452c();
            *plVar8 = (long)plVar3;
            plVar8[1] = (long)plVar3;
            plVar8[2] = (long)(plVar3 + (long)plVar10);
            auVar25._8_8_ = plVar10;
            auVar25._0_8_ = plVar3;
            return auVar25;
          }
          FUN_10ab14518();
          plVar3 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)plVar10 >> 0x3d == 0) {
            lVar14 = (long)plVar10 << 3;
            __Znwm(lVar14);
            auVar26._8_8_ = plVar10;
            auVar26._0_8_ = lVar14;
            return auVar26;
          }
          func_0x000109ffded8();
          lVar14 = 0x24;
          plVar5 = plVar10;
          __Znwm();
          *plVar3 = lVar14;
          plVar3[1] = lVar14;
          plVar3[2] = lVar14 + 0x24;
          lVar15 = lVar14;
          if (plVar10 != plVar6) {
            lVar17 = ((ulong)((long)plVar6 + (-0x24 - (long)plVar10)) / 0x24) * 0x24 + 0x24;
            _memcpy(lVar14,plVar10,lVar17);
            lVar14 = lVar14 + lVar17;
            plVar5 = plVar10;
          }
          plVar3[1] = lVar14;
          auVar27._8_8_ = plVar5;
          auVar27._0_8_ = lVar15;
          return auVar27;
        }
        plVar8 = (long *)((long)uVar13 >> 2);
        if ((long *)((long)uVar13 >> 2) <= plVar11) {
          plVar8 = plVar11;
        }
        if (0x7ffffffffffffff7 < uVar13) {
          plVar8 = (long *)0x1fffffffffffffff;
        }
        FUN_10ab144e0(plVar18,plVar8);
        plVar6 = (long *)plVar18[1];
        for (; plVar7 != plVar9; plVar7 = plVar7 + 1) {
          *plVar6 = *plVar7;
          plVar6 = plVar6 + 1;
        }
      }
      else {
        plVar10 = (long *)plVar18[1];
        plVar8 = plVar7;
        if ((long *)((long)plVar10 - (long)plVar5 >> 3) < plVar11) {
          plVar4 = (long *)((long)plVar7 + ((long)plVar10 - (long)plVar5));
          plVar6 = plVar10;
          if (plVar10 != plVar5) {
            _memmove(plVar5,plVar7);
            plVar10 = (long *)plVar18[1];
            plVar6 = plVar10;
            plVar8 = plVar7;
            plVar3 = plVar5;
          }
          for (; plVar4 != plVar9; plVar4 = plVar4 + 1) {
            *plVar10 = *plVar4;
            plVar10 = plVar10 + 1;
            plVar6 = plVar6 + 1;
          }
        }
        else {
          lVar14 = (long)plVar9 - (long)plVar7;
          if (lVar14 != 0) {
            plVar3 = plVar5;
            _memmove(plVar5,plVar7,lVar14);
            plVar8 = plVar7;
          }
          plVar6 = (long *)((long)plVar5 + lVar14);
        }
      }
      plVar18[1] = (long)plVar6;
      auVar24._8_8_ = plVar8;
      auVar24._0_8_ = plVar3;
      return auVar24;
    }
    plVar5 = (long *)(plVar3[2] - *plVar3 >> 4);
    if (plVar5 <= plVar10) {
      plVar5 = plVar10;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar3[2] - *plVar3)) {
      plVar5 = (long *)0x7ffffffffffffff;
    }
    FUN_10a66dbb0(plVar3,plVar5);
    FUN_10a66dbe8(plVar3,plVar6,plVar8,plVar3[1]);
    plVar10 = plVar6;
  }
  else {
    plVar18 = (long *)plVar3[1];
    if (plVar10 <= (long *)((long)plVar18 - (long)plVar5 >> 5)) {
      plVar10 = plVar6;
      if (plVar6 != plVar8) {
        do {
          plVar4 = plVar5;
          plVar6 = plVar10;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,plVar10);
          plVar5[3] = plVar10[3];
          plVar10 = plVar10 + 4;
          plVar5 = plVar5 + 4;
        } while (plVar10 != plVar8);
        plVar18 = (long *)plVar3[1];
      }
      for (; plVar18 != plVar5; plVar18 = plVar18 + -4) {
      }
      plVar3[1] = (long)plVar5;
      goto LAB_10ab14388;
    }
    plVar10 = (long *)((long)plVar6 + ((long)plVar18 - (long)plVar5));
    if (plVar18 != plVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,plVar6);
        plVar5[3] = plVar6[3];
        plVar6 = plVar6 + 4;
        plVar5 = plVar5 + 4;
      } while (plVar6 != plVar10);
      plVar18 = (long *)plVar3[1];
    }
    FUN_10a66dbe8(plVar3,plVar10,plVar8,plVar18);
  }
  plVar3[1] = (long)plVar4;
  plVar6 = plVar10;
LAB_10ab14388:
  auVar23._8_8_ = plVar6;
  auVar23._0_8_ = plVar4;
  return auVar23;
}



/* Entry: 10ab14008; end: 10ab1411b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab14374) */

undefined1  [16] FUN_10ab14008(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x23;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar11 = param_1[1] - *param_1;
  uVar8 = (lVar11 >> 5) + 1;
  if (uVar8 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar10 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a36f358();
    }
    plVar2 = (long *)((long)plVar1 + lVar11);
    lVar15 = param_2[1];
    lVar11 = *param_2;
    plVar2[2] = param_2[2];
    plVar2[1] = lVar15;
    *plVar2 = lVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plVar2[3] = 0;
    plStack_58 = plVar1;
    plStack_50 = plVar2;
    plStack_40 = plVar1 + uVar10 * 4;
    func_0x000107c2b080(plVar2);
    plVar12 = plVar2 + 4;
    lVar15 = *param_1;
    lVar11 = (long)plVar2 + (lVar15 - param_1[1]);
    plStack_48 = plVar12;
    func_0x00010a36f38c(param_1,lVar15,param_1[1],lVar11);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar12;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar10 * 4);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a36f4bc(&plStack_58);
    auVar16._8_8_ = lVar15;
    auVar16._0_8_ = plVar12;
    return auVar16;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_58);
  __Unwind_Resume();
  lVar11 = param_1[1] - *param_1;
  uVar8 = (lVar11 >> 5) + 1;
  if (uVar8 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar10 = 0x7ffffffffffffff;
    }
    plStack_98 = param_1;
    if (uVar10 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a36f358();
    }
    plStack_b0 = (long *)((long)plVar1 + lVar11);
    lVar15 = param_2[1];
    lVar11 = *param_2;
    plStack_b0[2] = param_2[2];
    plStack_b0[1] = lVar15;
    *plStack_b0 = lVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plStack_b0[3] = param_2[3];
    plVar12 = plStack_b0 + 4;
    lVar15 = *param_1;
    lVar11 = (long)plStack_b0 + (lVar15 - param_1[1]);
    plStack_b8 = plVar1;
    plStack_a8 = plVar12;
    plStack_a0 = plVar1 + uVar10 * 4;
    func_0x00010a36f38c(param_1,lVar15,param_1[1],lVar11);
    plStack_b8 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar12;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar10 * 4);
    plStack_b0 = plStack_b8;
    plStack_a8 = plStack_b8;
    func_0x00010a36f4bc(&plStack_b8);
    auVar17._8_8_ = lVar15;
    auVar17._0_8_ = plVar12;
    return auVar17;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_b8);
  __Unwind_Resume(param_1);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar12 = (long *)*plVar1;
  plVar2 = plVar1;
  if ((long *)(plVar1[2] - (long)plVar12 >> 5) < param_4) {
    plVar14 = plVar1;
    plVar3 = param_2;
    plVar4 = param_3;
    plVar6 = param_4;
    FUN_10a7a6010();
    if ((ulong)param_4 >> 0x3b != 0) {
      FUN_10a36f344();
      plVar1[1] = unaff_x23;
      __Unwind_Resume();
      plVar1[1] = (long)plVar12;
      __Unwind_Resume();
      uVar8 = plVar14[2];
      plVar12 = (long *)*plVar14;
      plVar1 = plVar14;
      if ((long *)((long)(uVar8 - (long)plVar12) >> 3) < plVar6) {
        plVar2 = plVar14;
        plVar9 = plVar3;
        plVar5 = plVar4;
        if (plVar12 != (long *)0x0) {
          plVar14[1] = (long)plVar12;
          __ZdlPv();
          uVar8 = 0;
          *plVar14 = 0;
          plVar14[1] = 0;
          plVar14[2] = 0;
          plVar2 = plVar12;
        }
        if ((ulong)plVar6 >> 0x3d != 0) {
          FUN_10ab14518();
          if ((ulong)plVar9 >> 0x3d == 0) {
            plVar1 = plVar2;
            FUN_10ab1452c();
            *plVar2 = (long)plVar1;
            plVar2[1] = (long)plVar1;
            plVar2[2] = (long)(plVar1 + (long)plVar9);
            auVar20._8_8_ = plVar9;
            auVar20._0_8_ = plVar1;
            return auVar20;
          }
          FUN_10ab14518();
          plVar1 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)plVar9 >> 0x3d == 0) {
            lVar11 = (long)plVar9 << 3;
            __Znwm(lVar11);
            auVar21._8_8_ = plVar9;
            auVar21._0_8_ = lVar11;
            return auVar21;
          }
          func_0x000109ffded8();
          lVar11 = 0x24;
          plVar12 = plVar9;
          __Znwm();
          *plVar1 = lVar11;
          plVar1[1] = lVar11;
          plVar1[2] = lVar11 + 0x24;
          lVar15 = lVar11;
          if (plVar9 != plVar5) {
            lVar13 = ((ulong)((long)plVar5 + (-0x24 - (long)plVar9)) / 0x24) * 0x24 + 0x24;
            _memcpy(lVar11,plVar9,lVar13);
            lVar11 = lVar11 + lVar13;
            plVar12 = plVar9;
          }
          plVar1[1] = lVar11;
          auVar22._8_8_ = plVar12;
          auVar22._0_8_ = lVar15;
          return auVar22;
        }
        plVar2 = (long *)((long)uVar8 >> 2);
        if ((long *)((long)uVar8 >> 2) <= plVar6) {
          plVar2 = plVar6;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          plVar2 = (long *)0x1fffffffffffffff;
        }
        FUN_10ab144e0(plVar14,plVar2);
        plVar6 = (long *)plVar14[1];
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
          *plVar6 = *plVar3;
          plVar6 = plVar6 + 1;
        }
      }
      else {
        plVar9 = (long *)plVar14[1];
        plVar2 = plVar3;
        if ((long *)((long)plVar9 - (long)plVar12 >> 3) < plVar6) {
          plVar5 = (long *)((long)plVar3 + ((long)plVar9 - (long)plVar12));
          plVar6 = plVar9;
          if (plVar9 != plVar12) {
            _memmove(plVar12,plVar3);
            plVar9 = (long *)plVar14[1];
            plVar6 = plVar9;
            plVar2 = plVar3;
            plVar1 = plVar12;
          }
          for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
            *plVar9 = *plVar5;
            plVar9 = plVar9 + 1;
            plVar6 = plVar6 + 1;
          }
        }
        else {
          lVar11 = (long)plVar4 - (long)plVar3;
          if (lVar11 != 0) {
            plVar1 = plVar12;
            _memmove(plVar12,plVar3,lVar11);
            plVar2 = plVar3;
          }
          plVar6 = (long *)((long)plVar12 + lVar11);
        }
      }
      plVar14[1] = (long)plVar6;
      auVar19._8_8_ = plVar2;
      auVar19._0_8_ = plVar1;
      return auVar19;
    }
    plVar12 = (long *)(plVar1[2] - *plVar1 >> 4);
    if (plVar12 <= param_4) {
      plVar12 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar1[2] - *plVar1)) {
      plVar12 = (long *)0x7ffffffffffffff;
    }
    FUN_10a66dbb0(plVar1,plVar12);
    FUN_10a66dbe8(plVar1,param_2,param_3,plVar1[1]);
    plVar3 = param_2;
  }
  else {
    plVar14 = (long *)plVar1[1];
    if (param_4 <= (long *)((long)plVar14 - (long)plVar12 >> 5)) {
      plVar3 = param_2;
      if (param_2 != param_3) {
        do {
          plVar2 = plVar12;
          param_2 = plVar3;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar12,plVar3);
          plVar12[3] = plVar3[3];
          plVar3 = plVar3 + 4;
          plVar12 = plVar12 + 4;
        } while (plVar3 != param_3);
        plVar14 = (long *)plVar1[1];
      }
      for (; plVar14 != plVar12; plVar14 = plVar14 + -4) {
      }
      plVar1[1] = (long)plVar12;
      goto LAB_10ab14388;
    }
    plVar3 = (long *)((long)param_2 + ((long)plVar14 - (long)plVar12));
    if (plVar14 != plVar12) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar12,param_2);
        plVar12[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar12 = plVar12 + 4;
      } while (param_2 != plVar3);
      plVar14 = (long *)plVar1[1];
    }
    FUN_10a66dbe8(plVar1,plVar3,param_3,plVar14);
  }
  plVar1[1] = (long)plVar2;
  param_2 = plVar3;
LAB_10ab14388:
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = plVar2;
  return auVar18;
}



/* Entry: 10ab1411c; end: 10ab1422b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab14374) */

undefined1  [16] FUN_10ab1411c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x23;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar11 = param_1[1] - *param_1;
  uVar8 = (lVar11 >> 5) + 1;
  if (uVar8 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar10 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a36f358();
    }
    plStack_50 = (long *)((long)plVar1 + lVar11);
    lVar15 = param_2[1];
    lVar11 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = lVar15;
    *plStack_50 = lVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plStack_50[3] = param_2[3];
    plVar12 = plStack_50 + 4;
    lVar15 = *param_1;
    lVar11 = (long)plStack_50 + (lVar15 - param_1[1]);
    plStack_58 = plVar1;
    plStack_48 = plVar12;
    plStack_40 = plVar1 + uVar10 * 4;
    func_0x00010a36f38c(param_1,lVar15,param_1[1],lVar11);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar12;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar10 * 4);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a36f4bc(&plStack_58);
    auVar16._8_8_ = lVar15;
    auVar16._0_8_ = plVar12;
    return auVar16;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_58);
  __Unwind_Resume(param_1);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar12 = (long *)*plVar1;
  plVar2 = plVar1;
  if ((long *)(plVar1[2] - (long)plVar12 >> 5) < param_4) {
    plVar14 = plVar1;
    plVar3 = param_2;
    plVar4 = param_3;
    plVar6 = param_4;
    FUN_10a7a6010();
    if ((ulong)param_4 >> 0x3b != 0) {
      FUN_10a36f344();
      plVar1[1] = unaff_x23;
      __Unwind_Resume();
      plVar1[1] = (long)plVar12;
      __Unwind_Resume();
      uVar8 = plVar14[2];
      plVar12 = (long *)*plVar14;
      plVar1 = plVar14;
      if ((long *)((long)(uVar8 - (long)plVar12) >> 3) < plVar6) {
        plVar2 = plVar14;
        plVar9 = plVar3;
        plVar5 = plVar4;
        if (plVar12 != (long *)0x0) {
          plVar14[1] = (long)plVar12;
          __ZdlPv();
          uVar8 = 0;
          *plVar14 = 0;
          plVar14[1] = 0;
          plVar14[2] = 0;
          plVar2 = plVar12;
        }
        if ((ulong)plVar6 >> 0x3d != 0) {
          FUN_10ab14518();
          if ((ulong)plVar9 >> 0x3d == 0) {
            plVar1 = plVar2;
            FUN_10ab1452c();
            *plVar2 = (long)plVar1;
            plVar2[1] = (long)plVar1;
            plVar2[2] = (long)(plVar1 + (long)plVar9);
            auVar19._8_8_ = plVar9;
            auVar19._0_8_ = plVar1;
            return auVar19;
          }
          FUN_10ab14518();
          plVar1 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)plVar9 >> 0x3d == 0) {
            lVar11 = (long)plVar9 << 3;
            __Znwm(lVar11);
            auVar20._8_8_ = plVar9;
            auVar20._0_8_ = lVar11;
            return auVar20;
          }
          func_0x000109ffded8();
          lVar11 = 0x24;
          plVar12 = plVar9;
          __Znwm();
          *plVar1 = lVar11;
          plVar1[1] = lVar11;
          plVar1[2] = lVar11 + 0x24;
          lVar15 = lVar11;
          if (plVar9 != plVar5) {
            lVar13 = ((ulong)((long)plVar5 + (-0x24 - (long)plVar9)) / 0x24) * 0x24 + 0x24;
            _memcpy(lVar11,plVar9,lVar13);
            lVar11 = lVar11 + lVar13;
            plVar12 = plVar9;
          }
          plVar1[1] = lVar11;
          auVar21._8_8_ = plVar12;
          auVar21._0_8_ = lVar15;
          return auVar21;
        }
        plVar2 = (long *)((long)uVar8 >> 2);
        if ((long *)((long)uVar8 >> 2) <= plVar6) {
          plVar2 = plVar6;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          plVar2 = (long *)0x1fffffffffffffff;
        }
        FUN_10ab144e0(plVar14,plVar2);
        plVar6 = (long *)plVar14[1];
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
          *plVar6 = *plVar3;
          plVar6 = plVar6 + 1;
        }
      }
      else {
        plVar9 = (long *)plVar14[1];
        plVar2 = plVar3;
        if ((long *)((long)plVar9 - (long)plVar12 >> 3) < plVar6) {
          plVar5 = (long *)((long)plVar3 + ((long)plVar9 - (long)plVar12));
          plVar6 = plVar9;
          if (plVar9 != plVar12) {
            _memmove(plVar12,plVar3);
            plVar9 = (long *)plVar14[1];
            plVar6 = plVar9;
            plVar2 = plVar3;
            plVar1 = plVar12;
          }
          for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
            *plVar9 = *plVar5;
            plVar9 = plVar9 + 1;
            plVar6 = plVar6 + 1;
          }
        }
        else {
          lVar11 = (long)plVar4 - (long)plVar3;
          if (lVar11 != 0) {
            plVar1 = plVar12;
            _memmove(plVar12,plVar3,lVar11);
            plVar2 = plVar3;
          }
          plVar6 = (long *)((long)plVar12 + lVar11);
        }
      }
      plVar14[1] = (long)plVar6;
      auVar18._8_8_ = plVar2;
      auVar18._0_8_ = plVar1;
      return auVar18;
    }
    plVar12 = (long *)(plVar1[2] - *plVar1 >> 4);
    if (plVar12 <= param_4) {
      plVar12 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar1[2] - *plVar1)) {
      plVar12 = (long *)0x7ffffffffffffff;
    }
    FUN_10a66dbb0(plVar1,plVar12);
    FUN_10a66dbe8(plVar1,param_2,param_3,plVar1[1]);
    plVar3 = param_2;
  }
  else {
    plVar14 = (long *)plVar1[1];
    if (param_4 <= (long *)((long)plVar14 - (long)plVar12 >> 5)) {
      plVar3 = param_2;
      if (param_2 != param_3) {
        do {
          plVar2 = plVar12;
          param_2 = plVar3;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar12,plVar3);
          plVar12[3] = plVar3[3];
          plVar3 = plVar3 + 4;
          plVar12 = plVar12 + 4;
        } while (plVar3 != param_3);
        plVar14 = (long *)plVar1[1];
      }
      for (; plVar14 != plVar12; plVar14 = plVar14 + -4) {
      }
      plVar1[1] = (long)plVar12;
      goto LAB_10ab14388;
    }
    plVar3 = (long *)((long)param_2 + ((long)plVar14 - (long)plVar12));
    if (plVar14 != plVar12) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar12,param_2);
        plVar12[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar12 = plVar12 + 4;
      } while (param_2 != plVar3);
      plVar14 = (long *)plVar1[1];
    }
    FUN_10a66dbe8(plVar1,plVar3,param_3,plVar14);
  }
  plVar1[1] = (long)plVar2;
  param_2 = plVar3;
LAB_10ab14388:
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar2;
  return auVar17;
}



/* Entry: 10ab1422c; end: 10ab1423f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab14374) */

void FUN_10ab1422c(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x23;
  long *plVar12;
  
  plVar12 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar10 = *plVar12;
  plVar8 = plVar12;
  if ((ulong)(plVar12[2] - lVar10 >> 5) < param_4) {
    plVar2 = plVar12;
    plVar3 = param_2;
    plVar5 = param_3;
    uVar9 = param_4;
    FUN_10a7a6010();
    if (param_4 >> 0x3b != 0) {
      FUN_10a36f344();
      plVar12[1] = unaff_x23;
      __Unwind_Resume();
      plVar12[1] = lVar10;
      __Unwind_Resume();
      uVar7 = plVar2[2];
      plVar12 = (long *)*plVar2;
      if ((ulong)((long)(uVar7 - (long)plVar12) >> 3) < uVar9) {
        plVar8 = plVar2;
        plVar4 = plVar3;
        plVar6 = plVar5;
        if (plVar12 != (long *)0x0) {
          plVar2[1] = (long)plVar12;
          __ZdlPv();
          uVar7 = 0;
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
          plVar8 = plVar12;
        }
        if (uVar9 >> 0x3d != 0) {
          FUN_10ab14518();
          if ((ulong)plVar4 >> 0x3d == 0) {
            plVar12 = plVar8;
            FUN_10ab1452c();
            *plVar8 = (long)plVar12;
            plVar8[1] = (long)plVar12;
            plVar8[2] = (long)(plVar12 + (long)plVar4);
            return;
          }
          FUN_10ab14518();
          plVar12 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)plVar4 >> 0x3d != 0) {
            func_0x000109ffded8();
            lVar10 = 0x24;
            __Znwm();
            *plVar12 = lVar10;
            plVar12[1] = lVar10;
            plVar12[2] = lVar10 + 0x24;
            if (plVar4 != plVar6) {
              lVar11 = ((ulong)((long)plVar6 + (-0x24 - (long)plVar4)) / 0x24) * 0x24 + 0x24;
              _memcpy(lVar10,plVar4,lVar11);
              lVar10 = lVar10 + lVar11;
            }
            plVar12[1] = lVar10;
            return;
          }
          __Znwm((long)plVar4 << 3);
          return;
        }
        uVar1 = (long)uVar7 >> 2;
        if ((ulong)((long)uVar7 >> 2) <= uVar9) {
          uVar1 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar1 = 0x1fffffffffffffff;
        }
        FUN_10ab144e0(plVar2,uVar1);
        plVar4 = (long *)plVar2[1];
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar4 = *plVar3;
          plVar4 = plVar4 + 1;
        }
      }
      else {
        plVar8 = (long *)plVar2[1];
        if ((ulong)((long)plVar8 - (long)plVar12 >> 3) < uVar9) {
          plVar6 = (long *)((long)plVar3 + ((long)plVar8 - (long)plVar12));
          plVar4 = plVar8;
          if (plVar8 != plVar12) {
            _memmove(plVar12,plVar3);
            plVar8 = (long *)plVar2[1];
            plVar4 = plVar8;
          }
          for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
            *plVar8 = *plVar6;
            plVar8 = plVar8 + 1;
            plVar4 = plVar4 + 1;
          }
        }
        else {
          lVar10 = (long)plVar5 - (long)plVar3;
          if (lVar10 != 0) {
            _memmove(plVar12,plVar3,lVar10);
          }
          plVar4 = (long *)((long)plVar12 + lVar10);
        }
      }
      plVar2[1] = (long)plVar4;
      return;
    }
    uVar9 = plVar12[2] - *plVar12 >> 4;
    if (uVar9 <= param_4) {
      uVar9 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar12[2] - *plVar12)) {
      uVar9 = 0x7ffffffffffffff;
    }
    FUN_10a66dbb0(plVar12,uVar9);
    FUN_10a66dbe8(plVar12,param_2,param_3,plVar12[1]);
  }
  else {
    lVar11 = plVar12[1];
    if (param_4 <= (ulong)(lVar11 - lVar10 >> 5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10,param_2);
          *(long *)(lVar10 + 0x18) = param_2[3];
          param_2 = param_2 + 4;
          lVar10 = lVar10 + 0x20;
        } while (param_2 != param_3);
        lVar11 = plVar12[1];
      }
      for (; lVar11 != lVar10; lVar11 = lVar11 + -0x20) {
      }
      plVar12[1] = lVar10;
      return;
    }
    plVar2 = (long *)((long)param_2 + (lVar11 - lVar10));
    if (lVar11 != lVar10) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10,param_2);
        *(long *)(lVar10 + 0x18) = param_2[3];
        param_2 = param_2 + 4;
        lVar10 = lVar10 + 0x20;
      } while (param_2 != plVar2);
      lVar11 = plVar12[1];
    }
    FUN_10a66dbe8(plVar12,plVar2,param_3,lVar11);
  }
  plVar12[1] = (long)plVar8;
  return;
}



/* Entry: 10ab14240; end: 10ab143af;  */

/* WARNING: Removing unreachable block (ram,0x00010ab14374) */

void FUN_10ab14240(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x23;
  long *plVar12;
  
  lVar10 = *param_1;
  plVar12 = param_1;
  if ((ulong)(param_1[2] - lVar10 >> 5) < param_4) {
    plVar2 = param_1;
    plVar3 = param_2;
    plVar5 = param_3;
    uVar9 = param_4;
    FUN_10a7a6010();
    if (param_4 >> 0x3b != 0) {
      FUN_10a36f344();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = lVar10;
      __Unwind_Resume();
      uVar7 = plVar2[2];
      plVar12 = (long *)*plVar2;
      if ((ulong)((long)(uVar7 - (long)plVar12) >> 3) < uVar9) {
        plVar8 = plVar2;
        plVar4 = plVar3;
        plVar6 = plVar5;
        if (plVar12 != (long *)0x0) {
          plVar2[1] = (long)plVar12;
          __ZdlPv();
          uVar7 = 0;
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
          plVar8 = plVar12;
        }
        if (uVar9 >> 0x3d != 0) {
          FUN_10ab14518();
          if ((ulong)plVar4 >> 0x3d == 0) {
            plVar12 = plVar8;
            FUN_10ab1452c();
            *plVar8 = (long)plVar12;
            plVar8[1] = (long)plVar12;
            plVar8[2] = (long)(plVar12 + (long)plVar4);
            return;
          }
          FUN_10ab14518();
          plVar12 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)plVar4 >> 0x3d != 0) {
            func_0x000109ffded8();
            lVar10 = 0x24;
            __Znwm();
            *plVar12 = lVar10;
            plVar12[1] = lVar10;
            plVar12[2] = lVar10 + 0x24;
            if (plVar4 != plVar6) {
              lVar11 = ((ulong)((long)plVar6 + (-0x24 - (long)plVar4)) / 0x24) * 0x24 + 0x24;
              _memcpy(lVar10,plVar4,lVar11);
              lVar10 = lVar10 + lVar11;
            }
            plVar12[1] = lVar10;
            return;
          }
          __Znwm((long)plVar4 << 3);
          return;
        }
        uVar1 = (long)uVar7 >> 2;
        if ((ulong)((long)uVar7 >> 2) <= uVar9) {
          uVar1 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar1 = 0x1fffffffffffffff;
        }
        FUN_10ab144e0(plVar2,uVar1);
        plVar4 = (long *)plVar2[1];
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar4 = *plVar3;
          plVar4 = plVar4 + 1;
        }
      }
      else {
        plVar8 = (long *)plVar2[1];
        if ((ulong)((long)plVar8 - (long)plVar12 >> 3) < uVar9) {
          plVar6 = (long *)((long)plVar3 + ((long)plVar8 - (long)plVar12));
          plVar4 = plVar8;
          if (plVar8 != plVar12) {
            _memmove(plVar12,plVar3);
            plVar8 = (long *)plVar2[1];
            plVar4 = plVar8;
          }
          for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
            *plVar8 = *plVar6;
            plVar8 = plVar8 + 1;
            plVar4 = plVar4 + 1;
          }
        }
        else {
          lVar10 = (long)plVar5 - (long)plVar3;
          if (lVar10 != 0) {
            _memmove(plVar12,plVar3,lVar10);
          }
          plVar4 = (long *)((long)plVar12 + lVar10);
        }
      }
      plVar2[1] = (long)plVar4;
      return;
    }
    uVar9 = param_1[2] - *param_1 >> 4;
    if (uVar9 <= param_4) {
      uVar9 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar9 = 0x7ffffffffffffff;
    }
    FUN_10a66dbb0(param_1,uVar9);
    FUN_10a66dbe8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar11 = param_1[1];
    if (param_4 <= (ulong)(lVar11 - lVar10 >> 5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10,param_2);
          *(long *)(lVar10 + 0x18) = param_2[3];
          param_2 = param_2 + 4;
          lVar10 = lVar10 + 0x20;
        } while (param_2 != param_3);
        lVar11 = param_1[1];
      }
      for (; lVar11 != lVar10; lVar11 = lVar11 + -0x20) {
      }
      param_1[1] = lVar10;
      return;
    }
    plVar2 = (long *)((long)param_2 + (lVar11 - lVar10));
    if (lVar11 != lVar10) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10,param_2);
        *(long *)(lVar10 + 0x18) = param_2[3];
        param_2 = param_2 + 4;
        lVar10 = lVar10 + 0x20;
      } while (param_2 != plVar2);
      lVar11 = param_1[1];
    }
    FUN_10a66dbe8(param_1,plVar2,param_3,lVar11);
  }
  param_1[1] = (long)plVar12;
  return;
}



/* Entry: 10ab143b0; end: 10ab144df;  */

void FUN_10ab143b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar6 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar6 - (long)puVar9) >> 3) < param_4) {
    puVar7 = param_1;
    puVar4 = param_2;
    puVar5 = param_3;
    if (puVar9 != (undefined8 *)0x0) {
      param_1[1] = puVar9;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar9;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10ab14518();
      if ((ulong)puVar4 >> 0x3d == 0) {
        puVar9 = puVar7;
        FUN_10ab1452c();
        *puVar7 = puVar9;
        puVar7[1] = puVar9;
        puVar7[2] = puVar9 + (long)puVar4;
        return;
      }
      FUN_10ab14518();
      plVar2 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)puVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
        lVar3 = 0x24;
        __Znwm();
        *plVar2 = lVar3;
        plVar2[1] = lVar3;
        plVar2[2] = lVar3 + 0x24;
        if (puVar4 != puVar5) {
          lVar8 = ((ulong)((long)puVar5 + (-0x24 - (long)puVar4)) / 0x24) * 0x24 + 0x24;
          _memcpy(lVar3,puVar4,lVar8);
          lVar3 = lVar3 + lVar8;
        }
        plVar2[1] = lVar3;
        return;
      }
      __Znwm((long)puVar4 << 3);
      return;
    }
    uVar1 = (long)uVar6 >> 2;
    if ((ulong)((long)uVar6 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_10ab144e0(param_1,uVar1);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar7 - (long)puVar9 >> 3) < param_4) {
      puVar5 = (undefined8 *)((long)param_2 + ((long)puVar7 - (long)puVar9));
      puVar4 = puVar7;
      if (puVar7 != puVar9) {
        _memmove(puVar9,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar4 = puVar7;
      }
      for (; puVar5 != param_3; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      if (lVar3 != 0) {
        _memmove(puVar9,param_2,lVar3);
      }
      puVar4 = (undefined8 *)((long)puVar9 + lVar3);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10ab144e0; end: 10ab14517;  */

void FUN_10ab144e0(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10ab1452c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_10ab14518();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar2 = 0x24;
  __Znwm();
  *plVar1 = lVar2;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2 + 0x24;
  if (param_2 != param_3) {
    lVar3 = (((param_3 - param_2) - 0x24) / 0x24) * 0x24 + 0x24;
    _memcpy(lVar2,param_2,lVar3);
    lVar2 = lVar2 + lVar3;
  }
  plVar1[1] = lVar2;
  return;
}



/* Entry: 10ab14518; end: 10ab1452b;  */

void FUN_10ab14518(undefined8 param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar2 = 0x24;
  __Znwm();
  *plVar1 = lVar2;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2 + 0x24;
  if (param_2 != param_3) {
    lVar3 = (((param_3 - param_2) - 0x24) / 0x24) * 0x24 + 0x24;
    _memcpy(lVar2,param_2,lVar3);
    lVar2 = lVar2 + lVar3;
  }
  plVar1[1] = lVar2;
  return;
}



/* Entry: 10ab1452c; end: 10ab1455f;  */

void FUN_10ab1452c(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar1 = 0x24;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x24;
  if (param_2 != param_3) {
    lVar2 = (((param_3 - param_2) - 0x24) / 0x24) * 0x24 + 0x24;
    _memcpy(lVar1,param_2,lVar2);
    lVar1 = lVar1 + lVar2;
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ab14560; end: 10ab1460b;  */

void FUN_10ab14560(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x24;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x24;
  if (param_2 != param_3) {
    lVar2 = (((param_3 - param_2) - 0x24U) / 0x24) * 0x24 + 0x24;
    _memcpy(lVar1,param_2,lVar2);
    lVar1 = lVar1 + lVar2;
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ab1460c; end: 10ab14657;  */

long * FUN_10ab1460c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a0523dc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab14658; end: 10ab146f3;  */

void FUN_10ab14658(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a756aac(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10ab146f4; end: 10ab1476b;  */

void FUN_10ab146f4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a49557c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10ab1476c; end: 10ab147eb;  */

void FUN_10ab1476c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a0617bc(lVar1 + 0x18);
    FUN_10a0617bc(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab147ec; end: 10ab1492f;  */

long * FUN_10ab147ec(long *param_1,long param_2,undefined8 param_3,ulong param_4,long *param_5,
                    undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  *param_1 = param_2;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    if ((long)uStack_68 < 0) {
      __ZdlPv(ppuStack_78);
    }
    __Unwind_Resume();
    puVar9 = (undefined8 *)0x2d0;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110b9fcf0;
    puVar2 = puVar9 + 3;
    FUN_10a1db5e8(puVar2,param_2,param_3);
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar9;
    plVar7 = param_1;
    if ((puVar9 + 0xb != (long *)0x0) &&
       ((plVar7 = (long *)puVar9[0xc], plVar7 == (long *)0x0 || (plVar7[1] == -1)))) {
      plVar11 = (long *)param_1[1];
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = *plVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar7 = plVar11 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = *plVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar7 = (long *)puVar9[0xc];
      }
      puVar9[0xb] = puVar2;
      puVar9[0xc] = plVar11;
      if (plVar7 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar11);
          return plVar11;
        }
      }
    }
    return plVar7;
  }
  if (param_4 < 0x17) {
    uStack_68 = CONCAT17((char)param_4,(undefined7)uStack_68);
    pppuVar8 = &ppuStack_78;
    if (param_4 == 0) goto LAB_10ab14888;
  }
  else {
    pppuVar4 = (undefined8 ***)0x19;
    if ((param_4 | 7) != 0x17) {
      pppuVar4 = (undefined8 ***)((param_4 | 7) + 1);
    }
    pppuVar8 = pppuVar4;
    __Znwm();
    uStack_68 = (ulong)pppuVar4 | 0x8000000000000000;
    ppuStack_78 = pppuVar8;
    uStack_70 = param_4;
  }
  _memmove(pppuVar8,param_3,param_4);
LAB_10ab14888:
  *(undefined1 *)((long)pppuVar8 + param_4) = 0;
  uVar3 = uStack_70;
  pppuVar4 = (undefined8 ***)ppuStack_78;
  if (-1 < (long)uStack_68) {
    uVar3 = uStack_68 >> 0x38;
    pppuVar4 = &ppuStack_78;
  }
  FUN_10ab0bd84(param_1 + 1,param_2,pppuVar4,uVar3,param_6);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  lVar10 = param_5[1];
  lVar12 = *param_5;
  param_1[4] = param_5[1];
  param_1[3] = lVar12;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return param_1;
}



/* Entry: 10ab14930; end: 10ab149bb;  */

void FUN_10ab14930(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)0x2d0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9fcf0;
  puVar2 = puVar6 + 3;
  FUN_10a1db5e8(puVar2,param_2,param_3);
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  if ((puVar6 + 0xb != (long *)0x0) &&
     ((lVar5 = puVar6[0xc], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = puVar6[0xc];
    }
    puVar6[0xb] = puVar2;
    puVar6[0xc] = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ab149bc; end: 10ab149f3;  */

void FUN_10ab149bc(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10ab149f4; end: 10ab14a5b;  */

void FUN_10ab149f4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x120;
  __Znwm();
  FUN_10ab14a5c();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10ab14a5c; end: 10ab14aa3;  */

undefined8 * FUN_10ab14a5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab268;
  FUN_10ab14aa4(param_1 + 3);
  return param_1;
}



/* Entry: 10ab14aa4; end: 10ab14b47;  */

undefined8 FUN_10ab14aa4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_3[1];
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
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
  }
  FUN_10ac75164(param_1,0,&uStack_30);
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



/* Entry: 10ab14b48; end: 10ab14ccf;  */

undefined8 * FUN_10ab14b48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[3] = uVar4;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10ab14cd0(param_1 + 6,param_2[6],param_2[7],(long)(param_2[7] - param_2[6]) >> 5);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_10ab14cd0(param_1 + 9,param_2[9],param_2[10],(long)(param_2[10] - param_2[9]) >> 5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar1 = param_2[0xc];
  lVar2 = param_2[0xd] - lVar1;
  if (lVar2 != 0) {
    FUN_10ab144e0(param_1 + 0xc,lVar2 >> 3);
    lVar3 = param_1[0xd];
    _memmove(lVar3,lVar1,lVar2);
    param_1[0xd] = lVar3 + lVar2;
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 10ab14cd0; end: 10ab14d53;  */

void FUN_10ab14cd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a66dbb0(param_1,param_4);
    lVar1 = param_1;
    FUN_10a7a6048(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10ab14d54; end: 10ab14e0f;  */

undefined8 * FUN_10ab14d54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c46ed0;
  func_0x00010a0523dc(param_1 + 2);
  return param_1;
}



/* Entry: 10ab14e10; end: 10ab14e53;  */

void FUN_10ab14e10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110c46ed0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar5;
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



/* Entry: 10ab14e54; end: 10ab14e7b;  */

void FUN_10ab14e54(long param_1)

{
  func_0x00010a0523dc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ab14e7c; end: 10ab14f5f;  */

void FUN_10ab14e7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uStack_64;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  plVar1 = *(long **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  (**(code **)(*plVar1 + 0x70))();
  uStack_40 = 0;
  uStack_3c = NEON_ucvtf(uVar2);
  fStack_38 = (float)((ulong)plVar1 & 0xffffffff);
  uStack_34 = 0;
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c46f40);
  FUN_10a015dcc(param_2,auStack_60,&uStack_40);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c46f58);
  uStack_64 = NEON_ucvtf(*(undefined4 *)(param_1 + 8));
  FUN_10a01671c(param_2,auStack_60,&uStack_64);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10ab14f60; end: 10ab14f9b;  */

long FUN_10ab14f60(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c46f70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab14f9c; end: 10ab14fa7;  */

undefined ** FUN_10ab14f9c(void)

{
  return &PTR_DAT_110c46f70;
}



/* Entry: 10ab14fa8; end: 10ab1508b;  */

undefined8 * FUN_10ab14fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c46f90;
  func_0x00010a0523dc(param_1 + 1);
  return param_1;
}



/* Entry: 10ab1508c; end: 10ab150f7;  */

void FUN_10ab1508c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_2 = &PTR_FUN_110c46f90;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  param_2[10] = uVar10;
  param_2[9] = uVar9;
  param_2[8] = uVar8;
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



/* Entry: 10ab150f8; end: 10ab1511f;  */

void FUN_10ab150f8(long param_1)

{
  func_0x00010a0523dc(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ab15120; end: 10ab151f3;  */

void FUN_10ab15120(long param_1,undefined8 param_2)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x44);
  uStack_30 = *(undefined8 *)(param_1 + 0x3c);
  uStack_38 = *(undefined8 *)(param_1 + 0x54);
  uStack_40 = *(undefined8 *)(param_1 + 0x4c);
  if (*(int *)(*(long *)(param_1 + 0x60) + 0x40) < 0x113) {
    uStack_38 = 0xbf800000;
    uStack_28 = 0xbf800000;
  }
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c46ff0);
  FUN_10a015dcc(param_2,auStack_60,&uStack_30);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c47008);
  FUN_10a015dcc(param_2,auStack_60,&uStack_40);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10ab151f4; end: 10ab1522f;  */

long FUN_10ab151f4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c47020);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab15230; end: 10ab15243;  */

undefined ** FUN_10ab15230(void)

{
  return &PTR_DAT_110c47020;
}


