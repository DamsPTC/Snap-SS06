/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa66690; end: 10aa66763;  */

void FUN_10aa66690(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
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
  FUN_10aa66498(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x34);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x2c);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10aa66764; end: 10aa66823;  */

void FUN_10aa66764(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x1c);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = (bVar2 ^ 0xff) & 1;
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



/* Entry: 10aa66824; end: 10aa668f3;  */

void FUN_10aa66824(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)(plVar4 + 0x1c) = *(byte *)(plVar4 + 0x1c) & 0xfe | (byte)param_2 ^ 1;
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



/* Entry: 10aa668f4; end: 10aa669c3;  */

void FUN_10aa668f4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
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
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
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
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
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
  FUN_10aa668f4(plVar6,param_2);
  FUN_10a052e3c(param_4);
  bVar1 = *(byte *)(plVar6 + 0x1c);
  *extraout_x8 = 2;
  *(byte *)(extraout_x8 + 2) = (bVar1 >> 1 ^ 0xff) & 1;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
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
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_c8 = lVar8;
          lStack_c0 = lVar8;
          lStack_b8 = lVar8;
          lStack_b0 = lVar14;
          func_0x00010988c1b8(&lStack_c8);
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
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10aa669c4; end: 10aa66a83;  */

void FUN_10aa669c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x1c);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = (bVar2 >> 1 ^ 0xff) & 1;
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



/* Entry: 10aa66a84; end: 10aa66b5b;  */

void FUN_10aa66a84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar1 = 0;
  if ((int)param_2 == 0) {
    bVar1 = 2;
  }
  *(byte *)(plVar5 + 0x1c) = *(byte *)(plVar5 + 0x1c) & 0xfd | bVar1;
  *param_1 = 0;
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



/* Entry: 10aa66b5c; end: 10aa66c17;  */

void FUN_10aa66b5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x1c);
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



/* Entry: 10aa66c18; end: 10aa66cef;  */

void FUN_10aa66c18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 4;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 0x1c) = *(byte *)(plVar4 + 0x1c) & 0xfb | bVar7;
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



/* Entry: 10aa66cf0; end: 10aa66dab;  */

void FUN_10aa66cf0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x1c);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 7;
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



/* Entry: 10aa66dac; end: 10aa66e7f;  */

void FUN_10aa66dac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 0x80;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 0x1c) = bVar7 | *(byte *)(plVar4 + 0x1c) & 0x7f;
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



/* Entry: 10aa66e80; end: 10aa66f37;  */

void FUN_10aa66e80(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2715a0(param_1,param_2,plVar4 + 0x1d);
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



/* Entry: 10aa66f38; end: 10aa66ffb;  */

void FUN_10aa66f38(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a271768(param_5);
  func_0x00010a27178c(param_2,param_4);
  lVar5 = *param_2;
  plVar4[0x1e] = param_2[1];
  plVar4[0x1d] = lVar5;
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



/* Entry: 10aa66ffc; end: 10aa670b3;  */

void FUN_10aa66ffc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2715a0(param_1,param_2,plVar4 + 0x1f);
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



/* Entry: 10aa670b4; end: 10aa67177;  */

void FUN_10aa670b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aa6695c(param_2,param_3);
  FUN_10a271768(param_5);
  func_0x00010a27178c(param_2,param_4);
  lVar5 = *param_2;
  plVar4[0x20] = param_2[1];
  plVar4[0x1f] = lVar5;
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



/* Entry: 10aa67178; end: 10aa67237;  */

void FUN_10aa67178(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a4b3d1c(param_1,param_2,plVar4[0x21],plVar4[0x22] - plVar4[0x21] >> 4);
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



/* Entry: 10aa67238; end: 10aa672ef;  */

void FUN_10aa67238(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa672f0(param_1,param_2,FUN_10aa27288,0,param_3,param_4,param_5);
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



/* Entry: 10aa672f0; end: 10aa673ab;  */

void FUN_10aa672f0(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  lVar2 = param_2;
  func_0x00010aa6695c(param_2,param_5);
  FUN_10aa673ac(param_7);
  FUN_10a4b3e50(auStack_70,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_70);
  puStack_58 = auStack_70;
  func_0x00010a4aec24(&puStack_58);
  *param_1 = 0;
  return;
}



/* Entry: 10aa673ac; end: 10aa673cf;  */

void FUN_10aa673ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10aa668f4(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  FUN_10a4b3d1c(extraout_x8,plVar3,plVar5[0x24],plVar5[0x25] - plVar5[0x24] >> 4);
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



/* Entry: 10aa673d0; end: 10aa6748f;  */

void FUN_10aa673d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa668f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a4b3d1c(param_1,param_2,plVar4[0x24],plVar4[0x25] - plVar4[0x24] >> 4);
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



/* Entry: 10aa67490; end: 10aa67547;  */

void FUN_10aa67490(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa672f0(param_1,param_2,0x10aa272ac,0,param_3,param_4,param_5);
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



/* Entry: 10aa67548; end: 10aa6764f;  */

void FUN_10aa67548(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  code *extraout_x9;
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
  undefined8 in_stack_ffffffffffffffb0;
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
  FUN_10a052e3c(param_5);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffb0,*ppuVar7);
  FUN_10aa508a4(param_1,param_2,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
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



/* Entry: 10aa67650; end: 10aa6766b;  */

void FUN_10aa67650(void)

{
  return;
}



/* Entry: 10aa6766c; end: 10aa676df;  */

void FUN_10aa6766c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ceb0;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10aa676e0; end: 10aa6771f;  */

void FUN_10aa676e0(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa67720; end: 10aa6775b;  */

long FUN_10aa67720(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c3cef0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa6775c; end: 10aa6775f;  */

void FUN_10aa6775c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa67760; end: 10aa677af;  */

long FUN_10aa67760(long param_1)

{
  func_0x00010981b858(param_1 + 0x40);
  return param_1;
}



/* Entry: 10aa677b0; end: 10aa6787f;  */

void FUN_10aa677b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_2 + 0x40);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  uVar1 = 0x50;
  func_0x0001098256f4(0x50,0x10);
  func_0x0001098150b8();
  *param_1 = uVar1;
  return;
}



/* Entry: 10aa67880; end: 10aa67a3f;  */

void FUN_10aa67880(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  undefined1 auStack_180 [64];
  undefined8 uStack_140;
  undefined4 uStack_138;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  fVar6 = (float)(**(code **)(*plVar5 + 0x60))(plVar5);
  fVar7 = (float)(**(code **)(*plVar5 + 0x60))(plVar5);
  fVar8 = (float)(**(code **)(*plVar5 + 0x60))(plVar5);
  fVar8 = ((float)uVar2 + fVar8) * 100.0;
  fVar6 = ((float)uVar1 + fVar6) * 100.0;
  fVar7 = ((float)((ulong)uVar1 >> 0x20) + fVar7) * 100.0;
  fStack_b8 = fVar8;
  fStack_c0 = fVar6;
  fStack_bc = fVar7;
  FUN_10aa67a40(param_2,param_3,&fStack_c0,&UNK_10e4eba30);
  FUN_10aa67a40(param_2,param_3 + 0x1c,&fStack_c0,&UNK_10e4eba30);
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    do {
      FUN_10aa43fa8(&fStack_b0,param_3,param_3 + 0x1c);
      FUN_10aa67a40(param_2,&fStack_b0,&fStack_c0,&UNK_10e4eba50);
      param_5 = param_5 + -4;
    } while (param_5 != 0);
  }
  auVar10 = NEON_fmov(0xbf800000,4);
  fVar9 = SUB84(-auVar10._0_8_,0) * fVar6;
  fVar11 = (float)((ulong)-auVar10._0_8_ >> 0x20) * fVar6;
  fVar12 = SUB84(-auVar10._8_8_,0) * fVar6;
  fVar6 = (float)((ulong)-auVar10._8_8_ >> 0x20) * fVar6;
  fVar13 = -fVar8;
  _fStack_b0 = CONCAT44(fVar7 * -1.0,fVar9);
  _fStack_a8 = CONCAT44(fVar11,fVar13);
  _fStack_a0 = CONCAT44(fVar13,fVar7 * -1.0);
  _fStack_98 = CONCAT44(fVar7 * 1.0,fVar12);
  _fStack_90 = CONCAT44(fVar6,fVar13);
  _fStack_88 = CONCAT44(fVar13,fVar7 * 1.0);
  _fStack_80 = CONCAT44(fVar7 * -1.0,fVar9);
  uStack_78 = CONCAT44(fVar11,fVar8);
  _fStack_70 = CONCAT44(fVar8,fVar7 * -1.0);
  _fStack_68 = CONCAT44(fVar7 * 1.0,fVar12);
  uStack_60 = CONCAT44(fVar6,fVar8);
  _fStack_58 = CONCAT44(fVar8,fVar7 * 1.0);
  pfVar3 = &fStack_b0;
  pfVar4 = (float *)0x8;
  FUN_10aa67ae8(param_2,pfVar3,8,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uStack_140 = 0;
  uStack_138 = 0;
  fVar6 = *pfVar4 + *pfVar4;
  fVar7 = pfVar4[1] + pfVar4[1];
  fVar8 = pfVar4[2] + pfVar4[2];
  FUN_10a008410(auStack_180,pfVar3);
  FUN_10aafa040(fVar6,fVar7,fVar8,param_2,auStack_180,&uStack_140,param_3,6);
  FUN_10aafaff8(fVar6,fVar7,fVar8,param_2,auStack_180,&uStack_140,param_3 + 0x10,3);
  return;
}



/* Entry: 10aa67a40; end: 10aa67ae7;  */

void FUN_10aa67a40(undefined8 param_1,undefined8 param_2,float *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_90 [64];
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  fVar1 = *param_3 + *param_3;
  fVar2 = param_3[1] + param_3[1];
  fVar3 = param_3[2] + param_3[2];
  FUN_10a008410(auStack_90,param_2);
  FUN_10aafa040(fVar1,fVar2,fVar3,param_1,auStack_90,&uStack_50,param_4,6);
  FUN_10aafaff8(fVar1,fVar2,fVar3,param_1,auStack_90,&uStack_50,param_4 + 0x10,3);
  return;
}



/* Entry: 10aa67ae8; end: 10aa67cdf;  */

void FUN_10aa67ae8(undefined8 param_1,long param_2,long param_3,float *param_4)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_9c [28];
  
  fVar10 = param_4[1];
  fVar8 = *param_4 * param_4[7] + param_4[3] * param_4[10] + fVar10 * param_4[8] +
          param_4[2] * param_4[9];
  _acosf();
  uVar3 = (ulong)(ABS(fVar8 + fVar8) * 5.729578);
  uVar5 = uVar3;
  if (99 < uVar3) {
    uVar5 = 100;
  }
  uVar2 = 2;
  if (uVar3 != 0) {
    uVar2 = uVar5 << 1;
  }
  FUN_10a1322a0(&lStack_b8,uVar2 * param_3);
  if (param_3 != 0) {
    lVar4 = param_2 + param_3 * 0xc;
    fVar9 = (float)(uVar2 >> 1);
    fVar8 = 1.0;
    fVar14 = 1.0 / fVar9;
    lVar6 = lStack_b8;
    do {
      if (uVar2 != 0) {
        FUN_10aa67ce0(param_4,param_2);
        lVar7 = 0;
        uVar5 = 1;
        fVar13 = fVar9;
        fVar12 = fVar8;
        fVar11 = fVar10;
        do {
          pfVar1 = (float *)(lVar6 + lVar7);
          fVar9 = fVar14 * (float)uVar5;
          fVar8 = fVar12;
          fVar10 = fVar11;
          FUN_10aa43fa8(auStack_9c,param_4,param_4 + 7);
          FUN_10aa67ce0(auStack_9c,param_2);
          *pfVar1 = fVar13;
          pfVar1[1] = fVar12;
          pfVar1[2] = fVar11;
          pfVar1[3] = fVar9;
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 0x18;
          pfVar1[4] = fVar8;
          pfVar1[5] = fVar10;
          fVar13 = fVar9;
          fVar12 = fVar8;
          fVar11 = fVar10;
        } while (((uVar2 >> 1) * 2 + (uVar2 >> 1)) * 8 - lVar7 != 0);
      }
      param_2 = param_2 + 0xc;
      lVar6 = lVar6 + uVar2 * 0xc;
    } while (param_2 != lVar4);
  }
  FUN_10aaf9e50(param_1,&UNK_10e482b48,lStack_b8,(lStack_b0 - lStack_b8 >> 2) * -0x5555555555555555,
                &UNK_10e4eba70,6);
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa67ce0; end: 10aa67d77;  */

float FUN_10aa67ce0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_1[2];
  fVar1 = (-(param_2[1] * fVar3) + param_2[2] * fVar1) * param_1[3] +
          -((-(param_2[2] * *param_1) + fVar2 * fVar3) * fVar3) +
          (-(fVar2 * fVar1) + param_2[1] * *param_1) * fVar1;
  return param_1[4] + fVar2 + fVar1 + fVar1;
}



/* Entry: 10aa67d78; end: 10aa67e0b;  */

void FUN_10aa67d78(undefined8 *param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_3 + 0x70);
  fVar4 = *(float *)(param_3 + 0x60);
  puVar1 = (undefined8 *)0x50;
  func_0x0001098256f4(0x50,0x10);
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b13f68;
  *(undefined4 *)(puVar1 + 1) = 8;
  param_2 = param_2 * fVar3 * fVar4;
  uVar2 = NEON_fmov(0x3f800000,4);
  puVar1[3] = 0xffffffffffffffff;
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  *(float *)(puVar1 + 6) = param_2;
  *(float *)(puVar1 + 8) = param_2;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa67e0c; end: 10aa6809b;  */

void FUN_10aa67e0c(long param_1,undefined8 param_2,float *param_3,float *param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  
  fVar5 = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x60) * 100.0;
  uVar7 = *(undefined8 *)(param_3 + 0xb);
  uVar11 = *(undefined8 *)(param_3 + 4);
  fVar6 = (float)uVar7;
  fVar10 = (float)uVar11;
  fVar13 = fVar6 - fVar10;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  fVar14 = fVar8 - fVar12;
  uStack_a0 = CONCAT44(fVar14,fVar13);
  fVar15 = param_3[0xd];
  fVar16 = param_3[6];
  fVar9 = fVar15 - fVar16;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar17 = fVar1 * fVar2 + fVar3 * fVar4;
  uStack_108 = CONCAT44(fVar17 + fVar17,(fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0);
  fStack_100 = fVar1 * fVar3 - fVar2 * fVar4;
  fStack_100 = fStack_100 + fStack_100;
  fStack_fc = fVar1 * fVar2 - fVar3 * fVar4;
  fStack_fc = fStack_fc + fStack_fc;
  fVar17 = fVar2 * fVar3 + fVar1 * fVar4;
  uStack_f8 = CONCAT44(fVar17 + fVar17,(fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0);
  fStack_f0 = fVar1 * fVar3 + fVar2 * fVar4;
  fStack_f0 = fStack_f0 + fStack_f0;
  fStack_ec = fVar2 * fVar3 - fVar1 * fVar4;
  fStack_ec = fStack_ec + fStack_ec;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,(fVar1 * fVar1 + fVar2 * fVar2) * -2.0 + 1.0);
  fStack_98 = fVar9;
  func_0x00010a008de8(&uStack_c8,&uStack_a0,&uStack_108);
  FUN_10aa6809c(fVar5,param_2,&uStack_c8,param_3 + 4,&UNK_10e4eba30);
  FUN_10aa6809c(fVar5,param_2,&uStack_c8,param_3 + 0xb,&UNK_10e4eba30);
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    do {
      fVar1 = *param_4;
      fVar2 = 1.0 - fVar1;
      fStack_100 = fVar2 * param_3[6] + fVar1 * param_3[0xd];
      uStack_108 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar2 +
                            (float)((ulong)*(undefined8 *)(param_3 + 0xb) >> 0x20) * fVar1,
                            (float)*(undefined8 *)(param_3 + 4) * fVar2 +
                            (float)*(undefined8 *)(param_3 + 0xb) * fVar1);
      FUN_10aa6809c(fVar5,param_2,&uStack_c8,&uStack_108,&UNK_10e4eba50);
      param_5 = param_5 + -4;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  fStack_d0 = (fVar15 + fVar16) * 0.5;
  uStack_108 = uStack_c8;
  fStack_100 = (float)uStack_c0;
  fStack_fc = 0.0;
  uStack_f8 = uStack_bc;
  fStack_f0 = (float)uStack_b4;
  fStack_ec = 0.0;
  uStack_e8 = uStack_b0;
  uStack_e0 = uStack_a8;
  uStack_dc = 0;
  uStack_d8 = CONCAT44((fVar8 + fVar12) * 0.5,(fVar6 + fVar10) * 0.5);
  uStack_cc = 0x3f800000;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_10aafb160(fVar5,SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar9 * fVar9) * 0.5,param_2,1,
                &uStack_108,&uStack_118,&UNK_10e4eba70,6);
  return;
}



/* Entry: 10aa6809c; end: 10aa6816f;  */

void FUN_10aa6809c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_68 = *(undefined4 *)(param_3 + 1);
  uStack_58 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_48 = *(undefined4 *)(param_3 + 4);
  uStack_38 = *(undefined4 *)(param_4 + 1);
  uStack_70 = *param_3;
  uStack_64 = 0;
  uStack_60 = *(undefined8 *)((long)param_3 + 0xc);
  uStack_54 = 0;
  uStack_50 = param_3[3];
  uStack_44 = 0;
  uStack_40 = *param_4;
  uStack_34 = 0x3f800000;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10aaf9fb4(param_1,param_2,&uStack_70,&uStack_80,param_5,6);
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10aafa34c(param_1,param_2,&uStack_70,&uStack_80,param_5 + 0x10,6,0x12,0xc);
  return;
}



/* Entry: 10aa68170; end: 10aa681e7;  */

long FUN_10aa68170(long param_1)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b13d48;
  func_0x00010981b80c(param_1 + 0xd8);
  func_0x00010980eb0c(param_1 + 0xb8);
  return param_1;
}



/* Entry: 10aa681e8; end: 10aa681ef;  */

void FUN_10aa681e8(void)

{
  return;
}



/* Entry: 10aa681f0; end: 10aa68377;  */

void FUN_10aa681f0(undefined8 *param_1,float param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_3 + 0x88);
  fVar4 = param_2 * *(float *)(param_3 + 0x70 + (long)((iVar1 + 2) % 3) * 4);
  fVar3 = *(float *)(param_3 + 0x70 + (long)iVar1 * 4);
  param_2 = param_2 * (fVar3 + fVar3);
  if (iVar1 == 2) {
    puVar2 = (undefined8 *)0x50;
    func_0x0001098256f4(0x50,0x10);
    puVar2[2] = 0;
    puVar2[3] = 0xffffffffffffffff;
    puVar2[5] = 0x3f800000;
    puVar2[4] = 0x3f8000003f800000;
    *(undefined4 *)(puVar2 + 1) = 10;
    *puVar2 = &PTR_DAT_110b13310;
    *(float *)(puVar2 + 8) = fVar4;
    *(undefined4 *)(puVar2 + 9) = 2;
    *(float *)(puVar2 + 6) = fVar4;
    fVar3 = param_2 * 0.5;
  }
  else {
    fVar3 = fVar4;
    if (iVar1 == 1) {
      puVar2 = (undefined8 *)0x50;
      func_0x0001098256f4(0x50,0x10);
      puVar2[2] = 0;
      puVar2[3] = 0xffffffffffffffff;
      puVar2[5] = 0x3f800000;
      puVar2[4] = 0x3f8000003f800000;
      *puVar2 = &PTR_DAT_110b13180;
      *(float *)(puVar2 + 8) = fVar4;
      *(undefined4 *)(puVar2 + 1) = 10;
      *(undefined4 *)(puVar2 + 9) = 1;
      *(float *)(puVar2 + 6) = fVar4;
      fVar4 = param_2 * 0.5;
    }
    else {
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x0;
        goto LAB_10aa68364;
      }
      puVar2 = (undefined8 *)0x50;
      func_0x0001098256f4(0x50,0x10);
      puVar2[2] = 0;
      puVar2[3] = 0xffffffffffffffff;
      puVar2[5] = 0x3f800000;
      puVar2[4] = 0x3f8000003f800000;
      *(undefined4 *)(puVar2 + 1) = 10;
      *puVar2 = &PTR_DAT_110b13248;
      *(float *)(puVar2 + 8) = fVar4;
      *(undefined4 *)(puVar2 + 9) = 0;
      *(float *)(puVar2 + 6) = param_2 * 0.5;
    }
  }
  *(float *)((long)puVar2 + 0x34) = fVar4;
  *(float *)(puVar2 + 7) = fVar3;
  *(undefined4 *)((long)puVar2 + 0x3c) = 0;
LAB_10aa68364:
  *param_1 = puVar2;
  return;
}



/* Entry: 10aa68378; end: 10aa6865b;  */

void FUN_10aa68378(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar11;
  float fVar13;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 auStack_17c [28];
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float afStack_e0 [6];
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  long lStack_68;
  ulong uVar10;
  ulong uVar12;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_1 + 0x88);
  lVar4 = ((long)iVar1 & 0xffU) * 0x24;
  fStack_118 = *(float *)(&UNK_10e49612c + lVar4);
  fStack_108 = *(float *)(&UNK_10e496138 + lVar4);
  fStack_f8 = *(float *)(&UNK_10e496144 + lVar4);
  uStack_120 = *(undefined8 *)(&UNK_10e496124 + lVar4);
  uStack_114 = 0;
  uStack_110 = *(undefined8 *)(&UNK_10e496130 + lVar4);
  uStack_104 = 0;
  uStack_100 = *(undefined8 *)(&UNK_10e49613c + lVar4);
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  uStack_f4 = 0;
  fStack_f0 = 0.0;
  uStack_e4 = 0x3f800000;
  fVar9 = *(float *)(param_1 + 0x70 + (long)((iVar1 + 2) % 3) * 4) * 100.0;
  uVar10 = (ulong)(uint)fVar9;
  fVar11 = *(float *)(param_1 + 0x70 + (long)iVar1 * 4) * 100.0;
  uVar12 = (ulong)(uint)fVar11;
  FUN_10a008410(auStack_160,param_3);
  func_0x000109519fd0(afStack_e0,auStack_160,&uStack_120);
  FUN_10aa6865c(uVar10,uVar12,param_2,afStack_e0,&UNK_10e4eba30);
  FUN_10a008410(auStack_160,param_3 + 0x1c);
  func_0x000109519fd0(afStack_e0,auStack_160,&uStack_120);
  FUN_10aa6865c(uVar10,uVar12,param_2,afStack_e0,&UNK_10e4eba30);
  puVar6 = (undefined *)0x0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar6 = &UNK_10e4eba50;
    puVar5 = param_4;
    do {
      param_4 = puVar5 + 1;
      FUN_10aa43fa8(*puVar5,auStack_17c,param_3,param_3 + 0x1c);
      FUN_10a008410(auStack_160,auStack_17c);
      func_0x000109519fd0(afStack_e0,auStack_160,&uStack_120);
      FUN_10aa6865c(uVar10,uVar12,param_2,afStack_e0,&UNK_10e4eba50);
      param_5 = param_5 + -4;
      puVar5 = param_4;
    } while (param_5 != 0);
  }
  lVar4 = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  uVar7 = CONCAT44(fStack_ec,fStack_f0);
  afStack_e0[0] = -fVar9;
  afStack_e0[2] = -fVar11;
  afStack_e0[1] = 0.0;
  afStack_e0[3] = afStack_e0[0];
  afStack_e0[4] = 0.0;
  afStack_e0[5] = fVar11;
  fStack_c8 = fVar9;
  uStack_c4 = 0;
  fStack_c0 = afStack_e0[2];
  fStack_bc = fVar9;
  uStack_b8 = 0;
  fStack_b4 = fVar11;
  uStack_b0 = 0;
  fStack_ac = afStack_e0[0];
  fStack_a8 = afStack_e0[2];
  uStack_a4 = 0;
  fStack_a0 = afStack_e0[0];
  fStack_9c = fVar11;
  uStack_98 = 0;
  fStack_94 = fVar9;
  fStack_90 = afStack_e0[2];
  uStack_8c = 0;
  fStack_88 = fVar9;
  fStack_84 = fVar11;
  fStack_78 = afStack_e0[0] - fVar11;
  fStack_6c = fVar9 + fVar11;
  uVar8 = (ulong)(uint)fStack_118;
  do {
    fVar9 = *(float *)((long)afStack_e0 + lVar4);
    fVar11 = *(float *)((long)afStack_e0 + lVar4 + 4);
    fVar13 = *(float *)((long)afStack_e0 + lVar4 + 8);
    *(ulong *)((long)afStack_e0 + lVar4) =
         CONCAT44((float)((ulong)uStack_120 >> 0x20) * fVar9 +
                  (float)((ulong)uStack_110 >> 0x20) * fVar11 +
                  fStack_ec + (float)((ulong)uStack_100 >> 0x20) * fVar13,
                  (float)uStack_120 * fVar9 + (float)uStack_110 * fVar11 +
                  fStack_f0 + (float)uStack_100 * fVar13);
    *(float *)((long)afStack_e0 + lVar4 + 8) =
         fStack_118 * fVar9 + fStack_108 * fVar11 + fStack_e8 + fStack_f8 * fVar13;
    lVar4 = lVar4 + 0xc;
  } while (lVar4 != 0x78);
  pfVar3 = afStack_e0;
  lVar4 = 10;
  uVar2 = param_2;
  FUN_10aa67ae8(param_2,pfVar3,10,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10aa6865c;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = uVar12;
  uStack_1b8 = uVar10;
  puStack_1b0 = puVar6;
  puStack_1a8 = param_4;
  uStack_1a0 = param_2;
  lStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  FUN_10aafb160();
  FUN_10aafba78(uVar7,uVar8,uVar2,1,pfVar3,&uStack_1d0,lVar4 + 0x10,3,0x12,0xc);
  return;
}



/* Entry: 10aa6865c; end: 10aa686eb;  */

void FUN_10aa6865c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aafb160(param_3,1,param_4,&uStack_50,param_5,6);
  FUN_10aafba78(param_1,param_2,param_3,1,param_4,&uStack_50,param_5 + 0x10,3,0x12,0xc);
  return;
}



/* Entry: 10aa686ec; end: 10aa68763;  */

long FUN_10aa686ec(long param_1)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b13d48;
  func_0x00010981b80c(param_1 + 0xd8);
  func_0x00010980eb0c(param_1 + 0xb8);
  return param_1;
}



/* Entry: 10aa68764; end: 10aa68907;  */

void FUN_10aa68764(float param_1,float param_2,undefined8 *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  param_1 = param_1 * 0.01;
  fVar1 = param_2 * 0.01 * 0.5;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  fVar1 = (float)NEON_fminnm(fVar1 * 0.1,0x3d23d70a);
  param_1 = param_1 - fVar1;
  fVar2 = param_2 * 0.01 + fVar1 * -2.0;
  if (param_4 == 2) {
    param_3[2] = 0;
    param_3[3] = 0xffffffffffffffff;
    param_3[5] = 0x3f800000;
    param_3[4] = 0x3f8000003f800000;
    *(undefined4 *)(param_3 + 8) = 0x3d23d70a;
    *(float *)((long)param_3 + 0x4c) = param_1;
    *(float *)(param_3 + 10) = fVar2;
    *(undefined4 *)(param_3 + 1) = 0xb;
    *(float *)(param_3 + 9) = param_1 / SQRT(fVar2 * fVar2 + param_1 * param_1);
    *param_3 = &PTR_DAT_110b13658;
    *(undefined8 *)((long)param_3 + 0x54) = 0x200000000;
    *(undefined4 *)((long)param_3 + 0x5c) = 1;
    *(float *)((long)param_3 + 0x34) = param_1;
    *(float *)(param_3 + 7) = fVar2;
    *(float *)(param_3 + 6) = param_1;
  }
  else if (param_4 == 1) {
    param_3[2] = 0;
    param_3[3] = 0xffffffffffffffff;
    param_3[5] = 0x3f800000;
    param_3[4] = 0x3f8000003f800000;
    *(undefined4 *)(param_3 + 8) = 0x3d23d70a;
    *param_3 = &PTR_DAT_110b13590;
    *(float *)((long)param_3 + 0x4c) = param_1;
    *(float *)(param_3 + 10) = fVar2;
    *(undefined4 *)(param_3 + 1) = 0xb;
    *(undefined8 *)((long)param_3 + 0x54) = 0x100000000;
    *(undefined4 *)((long)param_3 + 0x5c) = 2;
    *(float *)(param_3 + 6) = param_1;
    *(float *)((long)param_3 + 0x34) = fVar2;
    *(float *)(param_3 + 7) = param_1;
    *(float *)(param_3 + 9) = param_1 / SQRT(fVar2 * fVar2 + param_1 * param_1);
  }
  else if (param_4 == 0) {
    param_3[2] = 0;
    param_3[3] = 0xffffffffffffffff;
    param_3[5] = 0x3f800000;
    param_3[4] = 0x3f8000003f800000;
    *(float *)((long)param_3 + 0x4c) = param_1;
    *(float *)(param_3 + 10) = fVar2;
    *(undefined4 *)(param_3 + 1) = 0xb;
    *(float *)(param_3 + 9) = param_1 / SQRT(fVar2 * fVar2 + param_1 * param_1);
    *param_3 = &PTR_DAT_110b13720;
    *(undefined8 *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)((long)param_3 + 0x5c) = 2;
    *(float *)(param_3 + 6) = fVar2;
    *(float *)((long)param_3 + 0x34) = param_1;
    *(float *)(param_3 + 7) = param_1;
  }
  *(undefined4 *)(param_3 + 3) = 0;
  *(float *)(param_3 + 8) = fVar1;
  return;
}



/* Entry: 10aa68908; end: 10aa68957;  */

long FUN_10aa68908(long param_1)

{
  func_0x0001098162ac(param_1 + 0x40);
  return param_1;
}



/* Entry: 10aa68958; end: 10aa6895f;  */

void FUN_10aa68958(void)

{
  return;
}



/* Entry: 10aa68960; end: 10aa68b1b;  */

void FUN_10aa68960(undefined8 *param_1,float param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  
  fVar7 = *(float *)(param_3 + 0x80);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x8c) * param_2;
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x8c) >> 0x20) * param_2;
  uVar5 = CONCAT44(fVar6,fVar4);
  iVar1 = *(int *)(param_3 + 0x98);
  puVar2 = (undefined8 *)0x60;
  func_0x0001098256f4(0x60,0x10);
  puVar2[2] = 0;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[5] = 0x3f800000;
  puVar2[4] = 0x3f8000003f800000;
  *(undefined4 *)(puVar2 + 8) = 0x3d23d70a;
  if (iVar1 == 2) {
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar5;
    *(undefined4 *)(puVar2 + 1) = 0xb;
    *(float *)(puVar2 + 9) = fVar4 / SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    ppuVar3 = &PTR_DAT_110b13658;
    *puVar2 = &PTR_DAT_110b13658;
    *(undefined8 *)((long)puVar2 + 0x54) = 0x200000000;
    *(undefined4 *)((long)puVar2 + 0x5c) = 1;
    *(float *)(puVar2 + 6) = fVar4;
    *(undefined8 *)((long)puVar2 + 0x34) = uVar5;
  }
  else if (iVar1 == 1) {
    ppuVar3 = &PTR_DAT_110b13590;
    *puVar2 = &PTR_DAT_110b13590;
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar5;
    *(undefined4 *)(puVar2 + 1) = 0xb;
    *(undefined8 *)((long)puVar2 + 0x54) = 0x100000000;
    *(undefined4 *)((long)puVar2 + 0x5c) = 2;
    puVar2[6] = uVar5;
    *(float *)(puVar2 + 7) = fVar4;
    *(float *)(puVar2 + 9) = fVar4 / SQRT(fVar6 * fVar6 + fVar4 * fVar4);
  }
  else {
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar5;
    *(undefined4 *)(puVar2 + 1) = 0xb;
    *(float *)(puVar2 + 9) = fVar4 / SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    ppuVar3 = &PTR_DAT_110b13720;
    *puVar2 = &PTR_DAT_110b13720;
    *(undefined8 *)((long)puVar2 + 0x54) = 1;
    *(undefined4 *)((long)puVar2 + 0x5c) = 2;
    uVar5 = NEON_rev64(uVar5,4);
    puVar2[6] = uVar5;
    *(float *)(puVar2 + 7) = fVar4;
  }
  (*(code *)ppuVar3[0xb])(param_2 * fVar7,puVar2);
  *param_1 = puVar2;
  return;
}



/* Entry: 10aa68b1c; end: 10aa68da7;  */

void FUN_10aa68b1c(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar11;
  float fVar12;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_144 [28];
  undefined1 auStack_128 [64];
  undefined8 uStack_e8;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float afStack_a8 [6];
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  long lStack_68;
  ulong uVar10;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (ulong)*(byte *)(param_1 + 0x98) * 0x24;
  fStack_e0 = *(float *)(&UNK_10e49612c + lVar3);
  fStack_d0 = *(float *)(&UNK_10e496138 + lVar3);
  fStack_c0 = *(float *)(&UNK_10e496144 + lVar3);
  uStack_e8 = *(undefined8 *)(&UNK_10e496124 + lVar3);
  uStack_dc = 0;
  uStack_d8 = *(undefined8 *)(&UNK_10e496130 + lVar3);
  uStack_cc = 0;
  uStack_c8 = *(undefined8 *)(&UNK_10e49613c + lVar3);
  fStack_b4 = 0.0;
  fStack_b0 = 0.0;
  uStack_bc = 0;
  fStack_b8 = 0.0;
  uStack_ac = 0x3f800000;
  fVar6 = *(float *)(param_1 + 0x80) * 100.0;
  fVar9 = fVar6 + *(float *)(param_1 + 0x8c) * 100.0;
  uVar10 = (ulong)(uint)fVar9;
  fVar6 = fVar6 + *(float *)(param_1 + 0x90) * 0.5 * 100.0;
  uVar11 = (ulong)(uint)fVar6;
  FUN_10a008410(auStack_128,param_3);
  func_0x000109519fd0(afStack_a8,auStack_128,&uStack_e8);
  FUN_10aa68da8(uVar10,uVar11,param_2,afStack_a8,&UNK_10e4eba30);
  FUN_10a008410(auStack_128,param_3 + 0x1c);
  func_0x000109519fd0(afStack_a8,auStack_128,&uStack_e8);
  FUN_10aa68da8(uVar10,uVar11,param_2,afStack_a8,&UNK_10e4eba30);
  puVar5 = (undefined *)0x0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar5 = &UNK_10e4eba50;
    puVar4 = param_4;
    do {
      param_4 = puVar4 + 1;
      FUN_10aa43fa8(*puVar4,auStack_144,param_3,param_3 + 0x1c);
      FUN_10a008410(auStack_128,auStack_144);
      func_0x000109519fd0(afStack_a8,auStack_128,&uStack_e8);
      FUN_10aa68da8(uVar10,uVar11,param_2,afStack_a8,&UNK_10e4eba50);
      param_5 = param_5 + -4;
      puVar4 = param_4;
    } while (param_5 != 0);
  }
  lVar3 = 0;
  uVar7 = CONCAT44(fStack_b4,fStack_b8);
  afStack_a8[0] = 0.0;
  afStack_a8[1] = 0.0;
  afStack_a8[5] = -fVar6;
  afStack_a8[2] = fVar6;
  afStack_a8[3] = -fVar9;
  afStack_a8[4] = 0.0;
  fStack_90 = fVar9;
  uStack_8c = 0;
  fStack_88 = afStack_a8[5];
  uStack_84 = 0;
  fStack_80 = -fVar9;
  fStack_7c = afStack_a8[5];
  uStack_78 = 0;
  fStack_74 = fVar9;
  fStack_70 = afStack_a8[5];
  uVar8 = (ulong)(uint)fStack_e0;
  do {
    fVar6 = *(float *)((long)afStack_a8 + lVar3);
    fVar9 = *(float *)((long)afStack_a8 + lVar3 + 4);
    fVar12 = *(float *)((long)afStack_a8 + lVar3 + 8);
    *(ulong *)((long)afStack_a8 + lVar3) =
         CONCAT44((float)((ulong)uStack_e8 >> 0x20) * fVar6 +
                  (float)((ulong)uStack_d8 >> 0x20) * fVar9 +
                  fStack_b4 + (float)((ulong)uStack_c8 >> 0x20) * fVar12,
                  (float)uStack_e8 * fVar6 + (float)uStack_d8 * fVar9 +
                  fStack_b8 + (float)uStack_c8 * fVar12);
    *(float *)((long)afStack_a8 + lVar3 + 8) =
         fStack_e0 * fVar6 + fStack_d0 * fVar9 + fStack_b0 + fStack_c0 * fVar12;
    lVar3 = lVar3 + 0xc;
  } while (lVar3 != 0x3c);
  pfVar2 = afStack_a8;
  lVar3 = 5;
  uVar1 = param_2;
  FUN_10aa67ae8(param_2,pfVar2,5,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10aa68da8;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = uVar11;
  uStack_188 = uVar10;
  puStack_180 = puVar5;
  puStack_178 = param_4;
  uStack_170 = param_2;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_10aafbfc0();
  FUN_10aafc0fc(uVar7,uVar8,uVar1,pfVar2,&uStack_1a0,lVar3 + 0x10,3,0x12);
  return;
}



/* Entry: 10aa68da8; end: 10aa68e27;  */

void FUN_10aa68da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aafbfc0(param_3,param_4,&uStack_50,param_5,6);
  FUN_10aafc0fc(param_1,param_2,param_3,param_4,&uStack_50,param_5 + 0x10,3,0x12);
  return;
}



/* Entry: 10aa68e28; end: 10aa68e2f;  */

void FUN_10aa68e28(void)

{
  return;
}



/* Entry: 10aa68e30; end: 10aa690e3;  */

void FUN_10aa68e30(undefined8 *param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  undefined8 *puVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  plVar4 = (long *)(param_3 + 0x40);
  uVar10 = *(undefined8 *)(param_3 + 0x78);
  uVar7 = *(undefined8 *)(param_3 + 0x70);
  uVar8 = uVar7;
  (**(code **)(*plVar4 + 0x60))(plVar4);
  fVar9 = fVar2;
  (**(code **)(*plVar4 + 0x60))(plVar4);
  fVar5 = fVar9;
  (**(code **)(*plVar4 + 0x60))(plVar4);
  fVar2 = (float)uVar8;
  fVar6 = ((float)uVar7 + fVar2) * param_2;
  fVar9 = ((float)((ulong)uVar7 >> 0x20) + fVar9) * param_2;
  param_2 = ((float)uVar10 + fVar5) * param_2;
  iVar1 = *(int *)(param_3 + 0x88);
  if (iVar1 == 2) {
    puVar3 = (undefined8 *)0x50;
    func_0x0001098256f4(0x50,0x10);
    *(undefined4 *)(puVar3 + 1) = 0x23;
    puVar3[3] = 0xffffffffffffffff;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3d23d70a;
    *puVar3 = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 9) = 1;
    puVar3[5] = 0x3f800000;
    puVar3[4] = 0x3f8000003f800000;
    puVar3[7] = (ulong)(uint)(param_2 * 1.0 + -0.04);
    puVar3[6] = CONCAT44(fVar9 * 1.0 + -0.04,fVar6 * 1.0 + -0.04);
    func_0x000109815150(0x3dcccccd);
    *(undefined4 *)(puVar3 + 1) = 0xd;
    *puVar3 = &PTR_DAT_110b13b70;
    *(undefined4 *)(puVar3 + 9) = 2;
  }
  else if (iVar1 == 1) {
    puVar3 = (undefined8 *)0x50;
    func_0x0001098256f4(0x50,0x10);
    *(undefined4 *)(puVar3 + 1) = 0x23;
    puVar3[3] = 0xffffffffffffffff;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3d23d70a;
    *puVar3 = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 9) = 1;
    puVar3[5] = 0x3f800000;
    puVar3[4] = 0x3f8000003f800000;
    puVar3[7] = (ulong)(uint)(param_2 * 1.0 + -0.04);
    puVar3[6] = CONCAT44(fVar9 * 1.0 + -0.04,fVar6 * 1.0 + -0.04);
    func_0x000109815150(0x3dcccccd);
    *(undefined4 *)(puVar3 + 1) = 0xd;
  }
  else if (iVar1 == 0) {
    puVar3 = (undefined8 *)0x50;
    func_0x0001098256f4(0x50,0x10);
    *(undefined4 *)(puVar3 + 1) = 0x23;
    puVar3[3] = 0xffffffffffffffff;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3d23d70a;
    *puVar3 = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar3 + 9) = 1;
    puVar3[5] = 0x3f800000;
    puVar3[4] = 0x3f8000003f800000;
    puVar3[7] = (ulong)(uint)(param_2 * 1.0 + -0.04);
    puVar3[6] = CONCAT44(fVar9 * 1.0 + -0.04,fVar6 * 1.0 + -0.04);
    func_0x000109815150(0x3dcccccd);
    *(undefined4 *)(puVar3 + 1) = 0xd;
    *puVar3 = &PTR_DAT_110b13aa0;
    *(undefined4 *)(puVar3 + 9) = 0;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10aa690e4; end: 10aa6944f;  */

void FUN_10aa690e4(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_164 [28];
  undefined1 auStack_148 [64];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float afStack_c8 [15];
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  long lStack_68;
  ulong uVar13;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 0x88);
  lVar5 = (ulong)(uVar2 & 0xff) * 0x24;
  fStack_100 = *(float *)(&UNK_10e49612c + lVar5);
  fStack_f0 = *(float *)(&UNK_10e496138 + lVar5);
  fStack_e0 = *(float *)(&UNK_10e496144 + lVar5);
  fStack_108 = (float)*(undefined8 *)(&UNK_10e496124 + lVar5);
  fStack_104 = (float)((ulong)*(undefined8 *)(&UNK_10e496124 + lVar5) >> 0x20);
  uStack_fc = 0;
  fStack_f8 = (float)*(undefined8 *)(&UNK_10e496130 + lVar5);
  fStack_f4 = (float)((ulong)*(undefined8 *)(&UNK_10e496130 + lVar5) >> 0x20);
  uStack_ec = 0;
  fStack_e8 = (float)*(undefined8 *)(&UNK_10e49613c + lVar5);
  fStack_e4 = (float)((ulong)*(undefined8 *)(&UNK_10e49613c + lVar5) >> 0x20);
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  uStack_dc = 0;
  fStack_d8 = 0.0;
  uStack_cc = 0x3f800000;
  plVar8 = (long *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  uStack_180 = uVar10;
  uStack_178 = uVar11;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  uStack_190 = uVar10;
  uStack_188 = uVar11;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  uStack_1a0 = uVar10;
  uStack_198 = uVar11;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  fVar9 = ((float)uStack_180 + (float)uStack_190) * 100.0;
  fVar14 = ((float)((ulong)uStack_180 >> 0x20) + (float)uStack_1a0) * 100.0;
  fVar12 = ((float)uStack_178 + (float)uVar10) * 100.0;
  uVar13 = (ulong)(uint)fVar12;
  uVar1 = (uVar2 & 0xff) + 1;
  uVar1 = uVar1 - ((uVar1 / 3) * 2 + uVar1 / 3) & 0xffff;
  if ((uVar1 != 2) && (uVar13 = (ulong)(uint)fVar9, uVar1 == 1)) {
    uVar13 = (ulong)(uint)fVar14;
  }
  if ((uVar2 & 0xff) == 1) {
    fVar9 = fVar14;
  }
  if ((uVar2 & 0xff) != 2) {
    fVar12 = fVar9;
  }
  uVar15 = (ulong)(uint)fVar12;
  FUN_10a008410(auStack_148,param_3);
  func_0x000109519fd0(afStack_c8,auStack_148,&fStack_108);
  FUN_10aa69450(uVar13,uVar15,param_2,afStack_c8,&UNK_10e4eba30);
  FUN_10a008410(auStack_148,param_3 + 0x1c);
  func_0x000109519fd0(afStack_c8,auStack_148,&fStack_108);
  FUN_10aa69450(uVar13,uVar15,param_2,afStack_c8,&UNK_10e4eba30);
  puVar7 = (undefined *)0x0;
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    puVar7 = &UNK_10e4eba50;
    puVar6 = param_4;
    do {
      param_4 = puVar6 + 1;
      FUN_10aa43fa8(*puVar6,auStack_164,param_3,param_3 + 0x1c);
      FUN_10a008410(auStack_148,auStack_164);
      func_0x000109519fd0(afStack_c8,auStack_148,&fStack_108);
      FUN_10aa69450(uVar13,uVar15,param_2,afStack_c8,&UNK_10e4eba50);
      param_5 = param_5 + -4;
      puVar6 = param_4;
    } while (param_5 != 0);
  }
  lVar5 = 0;
  uVar11 = CONCAT44(uStack_dc,fStack_e0);
  uVar10 = CONCAT44(fStack_e0,fStack_e4);
  afStack_c8[6] = (float)uVar13;
  afStack_c8[0] = -afStack_c8[6];
  afStack_c8[2] = -fVar12;
  afStack_c8[1] = 0.0;
  afStack_c8[3] = afStack_c8[0];
  afStack_c8[4] = 0.0;
  afStack_c8[5] = fVar12;
  afStack_c8[7] = 0.0;
  afStack_c8[8] = afStack_c8[2];
  afStack_c8[9] = afStack_c8[6];
  afStack_c8[10] = 0.0;
  afStack_c8[0xb] = fVar12;
  afStack_c8[0xc] = 0.0;
  afStack_c8[0xd] = afStack_c8[0];
  afStack_c8[0xe] = afStack_c8[2];
  uStack_8c = 0;
  fStack_88 = afStack_c8[0];
  fStack_84 = fVar12;
  uStack_80 = 0;
  fStack_7c = afStack_c8[6];
  fStack_78 = afStack_c8[2];
  uStack_74 = 0;
  fStack_70 = afStack_c8[6];
  fStack_6c = fVar12;
  do {
    fVar9 = *(float *)((long)afStack_c8 + lVar5);
    fVar17 = *(float *)((long)afStack_c8 + lVar5 + 4);
    fVar21 = *(float *)((long)afStack_c8 + lVar5 + 8);
    fVar12 = *(float *)((long)afStack_c8 + lVar5 + 0xc);
    fVar18 = *(float *)((long)afStack_c8 + lVar5 + 0x10);
    fVar22 = *(float *)((long)afStack_c8 + lVar5 + 0x14);
    fVar14 = *(float *)((long)afStack_c8 + lVar5 + 0x18);
    fVar19 = *(float *)((long)afStack_c8 + lVar5 + 0x1c);
    fVar23 = *(float *)((long)afStack_c8 + lVar5 + 0x20);
    fVar16 = *(float *)((long)afStack_c8 + lVar5 + 0x24);
    fVar20 = *(float *)((long)afStack_c8 + lVar5 + 0x28);
    fVar24 = *(float *)((long)afStack_c8 + lVar5 + 0x2c);
    *(float *)((long)afStack_c8 + lVar5) =
         fVar9 * fStack_108 + fVar17 * fStack_f8 + fStack_d8 + fVar21 * fStack_e8;
    *(float *)((long)afStack_c8 + lVar5 + 4) =
         fVar9 * fStack_104 + fVar17 * fStack_f4 + fStack_d4 + fVar21 * fStack_e4;
    *(float *)((long)afStack_c8 + lVar5 + 8) =
         fVar9 * fStack_100 + fVar17 * fStack_f0 + fStack_d0 + fVar21 * fStack_e0;
    *(float *)((long)afStack_c8 + lVar5 + 0xc) =
         fVar12 * fStack_108 + fVar18 * fStack_f8 + fStack_d8 + fVar22 * fStack_e8;
    *(float *)((long)afStack_c8 + lVar5 + 0x10) =
         fVar12 * fStack_104 + fVar18 * fStack_f4 + fStack_d4 + fVar22 * fStack_e4;
    *(float *)((long)afStack_c8 + lVar5 + 0x14) =
         fVar12 * fStack_100 + fVar18 * fStack_f0 + fStack_d0 + fVar22 * fStack_e0;
    *(float *)((long)afStack_c8 + lVar5 + 0x18) =
         fVar14 * fStack_108 + fVar19 * fStack_f8 + fStack_d8 + fVar23 * fStack_e8;
    *(float *)((long)afStack_c8 + lVar5 + 0x1c) =
         fVar14 * fStack_104 + fVar19 * fStack_f4 + fStack_d4 + fVar23 * fStack_e4;
    *(float *)((long)afStack_c8 + lVar5 + 0x20) =
         fVar14 * fStack_100 + fVar19 * fStack_f0 + fStack_d0 + fVar23 * fStack_e0;
    *(float *)((long)afStack_c8 + lVar5 + 0x24) =
         fVar16 * fStack_108 + fVar20 * fStack_f8 + fStack_d8 + fVar24 * fStack_e8;
    *(float *)((long)afStack_c8 + lVar5 + 0x28) =
         fVar16 * fStack_104 + fVar20 * fStack_f4 + fStack_d4 + fVar24 * fStack_e4;
    *(float *)((long)afStack_c8 + lVar5 + 0x2c) =
         fVar16 * fStack_100 + fVar20 * fStack_f0 + fStack_d0 + fVar24 * fStack_e0;
    lVar5 = lVar5 + 0x30;
  } while (lVar5 != 0x60);
  pfVar4 = afStack_c8;
  lVar5 = 8;
  uVar3 = param_2;
  FUN_10aa67ae8(param_2,pfVar4,8,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_1a8 = FUN_10aa69450;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = uVar15;
    uStack_1d8 = uVar13;
    puStack_1d0 = puVar7;
    puStack_1c8 = param_4;
    uStack_1c0 = param_2;
    lStack_1b8 = param_3;
    puStack_1b0 = &stack0xfffffffffffffff0;
    FUN_10aafb160();
    FUN_10aafba78(uVar11,uVar10,uVar3,0,pfVar4,&uStack_1f0,lVar5 + 0x10,3,0x12,2);
    return;
  }
  return;
}



/* Entry: 10aa69450; end: 10aa694df;  */

void FUN_10aa69450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aafb160(param_3,0,param_4,&uStack_50,param_5,6);
  FUN_10aafba78(param_1,param_2,param_3,0,param_4,&uStack_50,param_5 + 0x10,3,0x12,2);
  return;
}



/* Entry: 10aa694e0; end: 10aa69537;  */

long FUN_10aa694e0(long param_1)

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



/* Entry: 10aa69538; end: 10aa695eb;  */

long * FUN_10aa69538(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    param_2 = param_2 & 0xffff;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    uVar5 = (uint)param_2;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar3 - 1 & param_2;
    }
    else {
      uVar7 = param_2;
      if (uVar4 <= param_2) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        uVar7 = (ulong)(uVar5 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (*(ushort *)(plVar8 + 2) == uVar5) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa695ec; end: 10aa6960b;  */

void FUN_10aa695ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c3d1d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa6960c; end: 10aa69617;  */

undefined8 * FUN_10aa6960c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aa69618; end: 10aa69677;  */

long FUN_10aa69618(long param_1)

{
  FUN_10aa4ab0c(param_1 + 0xc0);
  func_0x0001098162ac(param_1 + 0x40);
  return param_1;
}



/* Entry: 10aa69678; end: 10aa6968f;  */

void FUN_10aa69678(void)

{
  return;
}



/* Entry: 10aa69690; end: 10aa697d7;  */

void FUN_10aa69690(undefined ***param_1,code **param_2,long param_3)

{
  long lVar1;
  code **unaff_x20;
  long lVar2;
  code **ppcStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  code **ppcStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = **(long **)(param_3 + 0x10);
  ppcStack_90 = param_2;
  if (param_2 != (code **)0x0) {
    lVar1 = lVar2 + 0x1d8;
    FUN_10aa4ccc0(lVar1,param_1);
    if (lVar1 != 0) {
      lStack_70 = lVar1 + 0x18;
      ppcStack_68 = &pcStack_88;
      pcStack_88 = FUN_10aa4cd64;
      ppuStack_80 = &PTR_FUN_110c3bb70;
      puStack_78 = (undefined1 *)&ppcStack_90;
      FUN_10aa4cd64(param_2[0x1a],0,&pcStack_88);
      (*(code *)*ppuStack_80)(&ppuStack_80);
    }
    lVar2 = lVar2 + 0x270;
    FUN_10aa4ccc0(lVar2,param_1);
    param_1 = (undefined ***)0x0;
    unaff_x20 = param_2;
    if (lVar2 != 0) {
      lStack_70 = lVar2 + 0x18;
      unaff_x20 = &pcStack_88;
      pcStack_88 = FUN_10aa4cd64;
      ppuStack_80 = &PTR_FUN_110c3bb70;
      puStack_78 = (undefined1 *)&ppcStack_90;
      ppcStack_68 = unaff_x20;
      FUN_10aa4cd64(ppcStack_90[0x1a],0,&pcStack_88);
      param_1 = &ppuStack_80;
      (*(code *)*ppuStack_80)(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x20 + 1);
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 10aa697d8; end: 10aa697f3;  */

void FUN_10aa697d8(void)

{
  return;
}



/* Entry: 10aa697f4; end: 10aa6981b;  */

undefined8 * FUN_10aa697f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)0x5910;
  __Znwm();
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0xffffffff;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[10] = 0x3f80000000000000;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0x3f80000000000000;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0x3f800000;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0x3f80000000000000;
  puVar1[0x15] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0x3f80000000000000;
  puVar1[0x16] = 0;
  uVar2 = NEON_fmov(0x3f800000,4);
  puVar1[0x18] = uVar2;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0xc475000000000000;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((long)puVar1 + 0xec) = 2;
  puVar1[0x1f] = 0x3f00000000000000;
  puVar1[0x1e] = 0x3f8000003f800000;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x2e) = 0;
  puVar1[0x30] = 0x3f8000003ca3d70a;
  puVar1[0x2f] = 0x3ca3d70a3f000000;
  *(undefined4 *)(puVar1 + 0x31) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x36] = 0;
  puVar1[0x35] = 0;
  puVar1[0x38] = 0;
  puVar1[0x37] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  puVar1[0x3d] = puVar1 + 0x3d;
  puVar1[0x3e] = puVar1 + 0x3d;
  puVar1[0x3f] = 0;
  puVar1[0x40] = puVar1 + 0x40;
  puVar1[0x41] = puVar1 + 0x40;
  puVar1[0x42] = 0;
  puVar1[0x43] = puVar1 + 0x43;
  puVar1[0x44] = puVar1 + 0x43;
  puVar1[0x45] = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0x100000000;
  uStack_70 = 0x100000001000;
  func_0x0001098122b0(puVar1 + 0x46,&uStack_80);
  func_0x0001098071d0(puVar1 + 0x5c,puVar1 + 0x46);
  puVar1[0x5c] = &PTR_FUN_110c39d18;
  *(undefined1 *)(puVar1 + 0xa86) = 0;
  func_0x000109802504(puVar1 + 0xa87,0);
  func_0x00010982fef0(puVar1 + 0xaa8);
  func_0x00010983402c(puVar1 + 0xadc,puVar1 + 0x5c,puVar1 + 0xa87,puVar1 + 0xaa8,puVar1 + 0x46);
  puVar1[0xb21] = 0;
  puVar1[0xb20] = 0;
  puVar1[0xb1f] = 0;
  puVar1[0xb1e] = 0;
  puVar1[0xb1d] = 0;
  puVar1[0xb1c] = 0;
  return puVar1;
}



/* Entry: 10aa6981c; end: 10aa69a5f;  */

undefined8 * FUN_10aa6981c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x5910;
  __Znwm();
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0xffffffff;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[10] = 0x3f80000000000000;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0x3f80000000000000;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0x3f800000;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0x3f80000000000000;
  puVar1[0x15] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0x3f80000000000000;
  puVar1[0x16] = 0;
  uVar2 = NEON_fmov(0x3f800000,4);
  puVar1[0x18] = uVar2;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0xc475000000000000;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((long)puVar1 + 0xec) = 2;
  puVar1[0x1f] = 0x3f00000000000000;
  puVar1[0x1e] = 0x3f8000003f800000;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x2e) = 0;
  puVar1[0x30] = 0x3f8000003ca3d70a;
  puVar1[0x2f] = 0x3ca3d70a3f000000;
  *(undefined4 *)(puVar1 + 0x31) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x36] = 0;
  puVar1[0x35] = 0;
  puVar1[0x38] = 0;
  puVar1[0x37] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  puVar1[0x3d] = puVar1 + 0x3d;
  puVar1[0x3e] = puVar1 + 0x3d;
  puVar1[0x3f] = 0;
  puVar1[0x40] = puVar1 + 0x40;
  puVar1[0x41] = puVar1 + 0x40;
  puVar1[0x42] = 0;
  puVar1[0x43] = puVar1 + 0x43;
  puVar1[0x44] = puVar1 + 0x43;
  puVar1[0x45] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0x100000000;
  uStack_50 = 0x100000001000;
  func_0x0001098122b0(puVar1 + 0x46,&uStack_60);
  func_0x0001098071d0(puVar1 + 0x5c,puVar1 + 0x46);
  puVar1[0x5c] = &PTR_FUN_110c39d18;
  *(undefined1 *)(puVar1 + 0xa86) = 0;
  func_0x000109802504(puVar1 + 0xa87,0);
  func_0x00010982fef0(puVar1 + 0xaa8);
  func_0x00010983402c(puVar1 + 0xadc,puVar1 + 0x5c,puVar1 + 0xa87,puVar1 + 0xaa8,puVar1 + 0x46);
  puVar1[0xb21] = 0;
  puVar1[0xb20] = 0;
  puVar1[0xb1f] = 0;
  puVar1[0xb1e] = 0;
  puVar1[0xb1d] = 0;
  puVar1[0xb1c] = 0;
  return puVar1;
}



/* Entry: 10aa69a60; end: 10aa69b1b;  */

void FUN_10aa69a60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10aa69c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10aa69b1c; end: 10aa69c0b;  */

void FUN_10aa69b1c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aa69c74(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa69bf8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x1c) = fVar2;
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



/* Entry: 10aa69c0c; end: 10aa69cdb;  */

void FUN_10aa69c0c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
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
  float fVar16;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
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
  ppuVar3 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar4 = ppuVar3;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(ppuVar3,ppuVar4);
    param_2 = ppuVar4;
    if (ppuVar3 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
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
  FUN_10aa69c0c(plVar5,param_2);
  FUN_10a052e3c(param_4);
  fVar16 = *(float *)((long)plVar5 + 0xe4);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar16;
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
        plStack_a8 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_c8 = lVar7;
          lStack_c0 = lVar7;
          lStack_b8 = lVar7;
          lStack_b0 = lVar13;
          func_0x00010988c1b8(&lStack_c8);
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



/* Entry: 10aa69cdc; end: 10aa69d97;  */

void FUN_10aa69cdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10aa69c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0xe4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10aa69d98; end: 10aa69e87;  */

void FUN_10aa69d98(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aa69c74(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa69e74);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0xe4) = fVar2;
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



/* Entry: 10aa69e88; end: 10aa69f43;  */

void FUN_10aa69e88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10aa69c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x1d);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10aa69f44; end: 10aa6a033;  */

void FUN_10aa69f44(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aa69c74(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa6a020);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x1d) = fVar2;
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



/* Entry: 10aa6a034; end: 10aa6a0ef;  */

void FUN_10aa6a034(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10aa69c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0xec);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10aa6a0f0; end: 10aa6a1df;  */

void FUN_10aa6a0f0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aa69c74(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa6a1cc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0xec) = fVar2;
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



/* Entry: 10aa6a1e0; end: 10aa6a29b;  */

void FUN_10aa6a1e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10aa69c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x1e);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10aa6a29c; end: 10aa6a38b;  */

void FUN_10aa6a29c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aa69c74(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa6a378);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x1e) = fVar2;
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



/* Entry: 10aa6a38c; end: 10aa6a4ef;  */

void FUN_10aa6a38c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa6a4f0; end: 10aa6a60f;  */

void FUN_10aa6a4f0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10aa6a610; end: 10aa6a64f;  */

void FUN_10aa6a610(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa6a650; end: 10aa6a68b;  */

long FUN_10aa6a650(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c3d2e8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa6a68c; end: 10aa6a69f;  */

void FUN_10aa6a68c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa6a6a0; end: 10aa6a6bf;  */

void FUN_10aa6a6a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c3d308;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa6a6c0; end: 10aa6a6cb;  */

undefined8 * FUN_10aa6a6c0(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aa6a6cc; end: 10aa6a7c7;  */

undefined1  [16] FUN_10aa6a6cc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3ab00;
  puVar1 = &UNK_10f68a4a1;
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
    ppuStack_40 = &PTR_DAT_110c3ab00;
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



/* Entry: 10aa6a7c8; end: 10aa6a81b;  */

ulong FUN_10aa6a7c8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10aa6a81c,0);
  }
  return param_1;
}



/* Entry: 10aa6a81c; end: 10aa6a90b;  */

void FUN_10aa6a81c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
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
  FUN_10aa6a90c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = plVar6[4];
  if (plVar6[4] != 0) {
    plVar6 = (long *)(plVar6[4] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a4b272c(param_1,param_2,&stack0xffffffffffffffb0);
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10aa6a90c; end: 10aa6a9c7;  */

undefined ** FUN_10aa6a90c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10aa6a9c8,0);
  }
  return ppuVar1;
}



/* Entry: 10aa6a9c8; end: 10aa6aa83;  */

void FUN_10aa6a9c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa6a90c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[5];
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



/* Entry: 10aa6aa84; end: 10aa6ab3f;  */

void FUN_10aa6aa84(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68bcab,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa6ab40);
  (*pcVar4)();
}



/* Entry: 10aa6ab40; end: 10aa6ac47;  */

void FUN_10aa6ab40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  code *extraout_x9;
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
  undefined8 in_stack_ffffffffffffffb0;
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
  FUN_10a052e3c(param_5);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffb0,*ppuVar7);
  FUN_10aa518d8(param_1,param_2,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
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



/* Entry: 10aa6ac48; end: 10aa6ac63;  */

void FUN_10aa6ac48(void)

{
  return;
}



/* Entry: 10aa6ac64; end: 10aa6ad6b;  */

void FUN_10aa6ac64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  code *extraout_x9;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffb0,*ppuVar7);
  FUN_10aa6ad6c(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
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



/* Entry: 10aa6ad6c; end: 10aa6adfb;  */

void FUN_10aa6ad6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  ppuStack_38 = &PTR_DAT_110c3b268;
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



/* Entry: 10aa6adfc; end: 10aa6ae17;  */

void FUN_10aa6adfc(void)

{
  return;
}



/* Entry: 10aa6ae18; end: 10aa6aea3;  */

void FUN_10aa6ae18(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    plVar1 = *(long **)(lVar4 + 0x10);
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    while (plVar1 != (long *)(lVar4 + 8)) {
      plVar2 = (long *)plVar1[1];
      FUN_10aa2ec2c(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar4);
  return;
}



/* Entry: 10aa6aea4; end: 10aa6aeaf;  */

/* WARNING: Removing unreachable block (ram,0x00010aa4fa40) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa44) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa54) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa58) */

undefined8 * FUN_10aa6aea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  puVar4 = (undefined8 *)0x3e8;
  __Znwm();
  puVar4[0x79] = &PTR_FUN_110c383b8;
  puVar4[0x7b] = 0;
  puVar4[0x7a] = 0;
  *(undefined2 *)(puVar4 + 0x7c) = 0x100;
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3ed8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x203;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd32e8;
  plVar5[6] = (long)&PTR_FUN_110bd3390;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0x4170000041700000;
  *(undefined4 *)(plVar5 + 0xd) = 0x41700000;
  plStack_38 = plVar5;
  FUN_10a3c575c(puVar4,&PTR_PTR_110c38740,param_2,param_3);
  *puVar4 = &PTR_FUN_110c3a788;
  puVar4[2] = &PTR_DAT_110c38898;
  puVar4[7] = &PTR_DAT_110c388f0;
  puVar4[0xd] = &PTR_DAT_110c38910;
  puVar4[0x79] = &PTR_DAT_110c3a8d8;
  puVar4[0x16] = &PTR_DAT_110c38980;
  puVar4[0x17] = &PTR_DAT_110c389b0;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3bd68;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3bdb8;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59218;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x3e] = puVar6 + 3;
  puVar4[0x3f] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3be10;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[3] = &PTR_FUN_110c3be60;
  puVar6[0x12] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa5957c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x40] = puVar6 + 3;
  puVar4[0x41] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3beb8;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3bf08;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa598e0;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x42] = puVar6 + 3;
  puVar4[0x43] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3bf60;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[3] = &PTR_FUN_110c3bfb0;
  puVar6[0x12] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59c44;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x44] = puVar6 + 3;
  puVar4[0x45] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3c008;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3c058;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59fa8;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x46] = puVar6 + 3;
  puVar4[0x47] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110c3c0b0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3c100;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa5a30c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x48] = puVar6 + 3;
  puVar4[0x49] = puVar6;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4c] = 0;
  puVar4[0x4f] = 0;
  puVar4[0x4e] = 0;
  puVar4[0x51] = 0;
  puVar4[0x50] = 0;
  puVar4[0x53] = 0;
  puVar4[0x52] = 0;
  *(undefined1 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x2a4) = 0x41f0000041f00000;
  puVar4[0x56] = 0;
  *(undefined4 *)(puVar4 + 0x57) = 1;
  puVar4[0x59] = 0;
  puVar4[0x58] = 0;
  puVar4[0x5b] = 0;
  puVar4[0x5a] = 0;
  puVar4[0x5d] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x5f] = 0;
  puVar4[0x5e] = 0;
  puVar4[0x60] = 0;
  *(undefined4 *)(puVar4 + 0x61) = 1;
  *(undefined8 *)((long)puVar4 + 900) = 0;
  *(undefined8 *)((long)puVar4 + 0x37c) = 0;
  *(undefined8 *)((long)puVar4 + 0x374) = 0;
  puVar4[99] = 0;
  puVar4[0x62] = 0;
  puVar4[0x65] = 0;
  puVar4[100] = 0;
  puVar4[0x67] = 0;
  puVar4[0x66] = 0;
  puVar4[0x69] = 0;
  puVar4[0x68] = 0;
  puVar4[0x6b] = 0;
  puVar4[0x6a] = 0;
  puVar4[0x6d] = 0;
  puVar4[0x6c] = 0;
  *(undefined1 *)(puVar4 + 0x6e) = 0;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110bf7fc8;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((long)puVar6 + 0x4d) = 0;
  *(undefined8 *)((long)puVar6 + 0x45) = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar4[0x72] = puVar6 + 3;
  puVar4[0x73] = puVar6;
  FUN_10a5cf1fc(puVar4 + 0x72);
  puVar4[0x74] = 0xffffffffffffffff;
  puVar4[0x75] = 0;
  puVar4[0x76] = 0xffffffff;
  if (puVar4[0x4a] != 0) {
    *(undefined8 *)(puVar4[0x4a] + 0x40) = 0;
  }
  FUN_10a91135c(puVar4 + 0x4a,&plStack_40);
  plVar5 = plStack_38;
  *(undefined8 **)(puVar4[0x4a] + 0x40) = puVar4;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *puVar4 = &PTR_FUN_110c38460;
  puVar4[2] = &PTR_DAT_110c38580;
  puVar4[7] = &PTR_DAT_110c385d8;
  puVar4[0xd] = &PTR_DAT_110c385f8;
  puVar4[0x79] = &PTR_DAT_110c386f8;
  puVar4[0x16] = &PTR_DAT_110c38668;
  puVar4[0x17] = &PTR_DAT_110c38698;
  *(undefined1 *)(puVar4 + 0x77) = 0;
  *(undefined4 *)((long)puVar4 + 0x3bc) = 0x3f800000;
  puVar4[0x78] = 0;
  return puVar4;
}



/* Entry: 10aa6aeb0; end: 10aa6af47;  */

undefined8 * FUN_10aa6aeb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x138;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c39ac0;
  puVar1[2] = &PTR_DAT_110c39b60;
  puVar1[7] = &PTR_DAT_110c39bb8;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  return puVar1;
}



/* Entry: 10aa6af48; end: 10aa6afd3;  */

undefined8 * FUN_10aa6af48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c39e50;
  puVar1[2] = &PTR_DAT_110c39ef0;
  puVar1[7] = &PTR_DAT_110c39f48;
  puVar1[0x1d] = 0x3f8000003ca3d70a;
  puVar1[0x1c] = 0x3ca3d70a3f000000;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  return puVar1;
}



/* Entry: 10aa6afd4; end: 10aa6afdf;  */

undefined8 * FUN_10aa6afd4(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x248;
  __Znwm();
  puVar4[0x45] = &PTR_FUN_110c383b8;
  puVar4[0x47] = 0;
  puVar4[0x46] = 0;
  *(undefined2 *)(puVar4 + 0x48) = 0x100;
  FUN_10a3c575c();
  *puVar4 = &PTR_FUN_110c3a208;
  puVar4[2] = &PTR_FUN_110c3a318;
  puVar4[7] = &PTR_DAT_110c3a370;
  puVar4[0xd] = &PTR_DAT_110c3a390;
  puVar4[0x45] = &PTR_DAT_110c3a490;
  puVar4[0x16] = &PTR_DAT_110c3a400;
  puVar4[0x17] = &PTR_DAT_110c3a430;
  *(undefined4 *)(puVar4 + 0x3e) = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110bf7fc8;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined8 *)((long)puVar5 + 0x4d) = 0;
  *(undefined8 *)((long)puVar5 + 0x45) = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar4[0x41] = puVar5 + 3;
  puVar4[0x42] = puVar5;
  FUN_10a5cf1fc(puVar4 + 0x41);
  puVar4[0x43] = 0xffffffffffffffff;
  puVar4[0x44] = 0;
  do {
    uVar3 = uRam0000000113305fb8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113305fb8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113305fb8 = uRam0000000113305fb8 + 1;
    }
  } while (cVar1 != '\0');
  puVar4[0x43] = (ulong)uVar3 << 0x20;
  return puVar4;
}



/* Entry: 10aa6afe0; end: 10aa6b12b;  */

undefined8 * FUN_10aa6afe0(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x248;
  __Znwm();
  puVar4[0x45] = &PTR_FUN_110c383b8;
  puVar4[0x47] = 0;
  puVar4[0x46] = 0;
  *(undefined2 *)(puVar4 + 0x48) = 0x100;
  FUN_10a3c575c();
  *puVar4 = &PTR_FUN_110c3a208;
  puVar4[2] = &PTR_FUN_110c3a318;
  puVar4[7] = &PTR_DAT_110c3a370;
  puVar4[0xd] = &PTR_DAT_110c3a390;
  puVar4[0x45] = &PTR_DAT_110c3a490;
  puVar4[0x16] = &PTR_DAT_110c3a400;
  puVar4[0x17] = &PTR_DAT_110c3a430;
  *(undefined4 *)(puVar4 + 0x3e) = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110bf7fc8;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined8 *)((long)puVar5 + 0x4d) = 0;
  *(undefined8 *)((long)puVar5 + 0x45) = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar4[0x41] = puVar5 + 3;
  puVar4[0x42] = puVar5;
  FUN_10a5cf1fc(puVar4 + 0x41);
  puVar4[0x43] = 0xffffffffffffffff;
  puVar4[0x44] = 0;
  do {
    uVar3 = uRam0000000113305fb8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113305fb8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113305fb8 = uRam0000000113305fb8 + 1;
    }
  } while (cVar1 != '\0');
  puVar4[0x43] = (ulong)uVar3 << 0x20;
  return puVar4;
}



/* Entry: 10aa6b12c; end: 10aa6b1f3;  */

undefined8 * FUN_10aa6b12c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x198;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c3a618;
  puVar1[2] = &PTR_DAT_110c3a6b8;
  puVar1[7] = &PTR_DAT_110c3a710;
  puVar1[0x1c] = 0xc475000000000000;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((long)puVar1 + 0xec) = 2;
  puVar1[0x1f] = 0x3f00000000000000;
  puVar1[0x1e] = 0x3f8000003f800000;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x2e) = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  return puVar1;
}



/* Entry: 10aa6b1f4; end: 10aa6b29b;  */

void FUN_10aa6b1f4(long *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3d388;
  uStack_50 = 0;
  lStack_48 = 0;
  FUN_10aa38890(puVar1 + 3,param_2,param_3,&uStack_50);
  if (lStack_48 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10aa6b29c; end: 10aa6b2ab;  */

void FUN_10aa6b29c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3d388;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa6b2ac; end: 10aa6b2cb;  */

void FUN_10aa6b2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3d388;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


