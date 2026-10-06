/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3be99c; end: 10a3bea53;  */

void FUN_10a3be99c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3be734(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x9e];
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



/* Entry: 10a3bea54; end: 10a3beb23;  */

void FUN_10a3bea54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3be934(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x9e) = (char)param_2;
  (**(code **)(*plVar4 + 0x230))(plVar4);
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



/* Entry: 10a3beb24; end: 10a3bebdb;  */

void FUN_10a3beb24(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10a3be734(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x4f1);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10a3bebdc; end: 10a3becab;  */

void FUN_10a3bebdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3be934(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x4f1) = (char)param_2;
  (**(code **)(*plVar4 + 0x230))(plVar4);
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



/* Entry: 10a3becac; end: 10a3bed67;  */

void FUN_10a3becac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3be734(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x4f2));
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



/* Entry: 10a3bed68; end: 10a3bee4f;  */

void FUN_10a3bed68(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3be934(param_2,param_3);
  FUN_10a3bee50(param_5);
  func_0x00010a068bd8(param_2,param_4);
  if (5 < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652907);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3bee3c);
    (*pcVar1)();
  }
  *(char *)((long)plVar4 + 0x4f2) = (char)param_2;
  (**(code **)(*plVar4 + 0x230))(plVar4);
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



/* Entry: 10a3bee50; end: 10a3bee73;  */

undefined8 FUN_10a3bee50(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  FUN_10a052ee0(1,0,param_1);
  uVar1 = 0x558;
  __Znwm(0x558);
  func_0x00010a3a33a8();
  return uVar1;
}



/* Entry: 10a3bee74; end: 10a3beecf;  */

undefined8 FUN_10a3bee74(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x558;
  __Znwm(0x558);
  func_0x00010a3a33a8();
  return uVar1;
}



/* Entry: 10a3beed0; end: 10a3beed3;  */

void FUN_10a3beed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3beed4; end: 10a3beee7;  */

void FUN_10a3beed4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3beee8; end: 10a3bef03;  */

void FUN_10a3beee8(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3bef04; end: 10a3bef3f;  */

long FUN_10a3bef04(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3bef40; end: 10a3bef43;  */

void FUN_10a3bef40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3bef44; end: 10a3beff3;  */

long FUN_10a3bef44(long param_1)

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



/* Entry: 10a3beff4; end: 10a3bf11f;  */

undefined1  [16] FUN_10a3beff4(int param_1)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auVar4 [16];
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      puVar2 = &DAT_10f6534c8;
      uVar3 = 0x16;
      goto LAB_10a3bf0f4;
    }
    if (param_1 == 1) {
      puVar2 = &DAT_10f6534df;
      goto LAB_10a3bf0f0;
    }
    if (param_1 == 2) {
      puVar2 = &DAT_10f65350c;
      uVar3 = 0x18;
      goto LAB_10a3bf0f4;
    }
LAB_10a3bf074:
    __ZNSt3__19to_stringEi(appuStack_38);
    if ((bRam000000011330a9e8 & 1) != 0) {
      pppuVar1 = (undefined8 ***)appuStack_38[0];
      if (-1 < cStack_21) {
        pppuVar1 = appuStack_38;
      }
      func_0x00010ae06f08(0,1,&UNK_10f65341b,&UNK_10f653453,0x26,&UNK_10f653495,in_x6,in_x7,pppuVar1
                         );
    }
    if (cStack_21 < '\0') {
      __ZdlPv(appuStack_38[0]);
    }
  }
  else {
    if (param_1 == 6) {
      puVar2 = &DAT_10f6534fb;
LAB_10a3bf0f0:
      uVar3 = 0x10;
      goto LAB_10a3bf0f4;
    }
    if (param_1 != 4) {
      if (param_1 == 3) {
        puVar2 = &DAT_10f653525;
        uVar3 = 9;
        goto LAB_10a3bf0f4;
      }
      goto LAB_10a3bf074;
    }
  }
  puVar2 = &DAT_10f6534f0;
  uVar3 = 10;
LAB_10a3bf0f4:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 10a3bf120; end: 10a3bf1d3;  */

void FUN_10a3bf120(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x10a3bfa20;
  ppuStack_60 = &PTR_DAT_110bcfc80;
  pcStack_58 = FUN_10a3bf1d4;
  FUN_10a3bf1d8(param_1,0,0,&uStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 10a3bf1d4; end: 10a3bf1d7;  */

void FUN_10a3bf1d4(void)

{
  return;
}



/* Entry: 10a3bf1d8; end: 10a3bf32f;  */

/* WARNING: Possible PIC construction at 0x00010a3bf558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a3bf660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3bf55c) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf5a0) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf5b8) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf584) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf664) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf6a8) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf6c0) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf770) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf880) */
/* WARNING: Removing unreachable block (ram,0x000107c2b054) */
/* WARNING: Removing unreachable block (ram,0x00010005375c) */
/* WARNING: Removing unreachable block (ram,0x0001000537fc) */
/* WARNING: Removing unreachable block (ram,0x00010005381c) */
/* WARNING: Removing unreachable block (ram,0x0001000538a8) */
/* WARNING: Removing unreachable block (ram,0x00010005382c) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x00010005378c) */
/* WARNING: Removing unreachable block (ram,0x0001000537a8) */
/* WARNING: Removing unreachable block (ram,0x0001000537b4) */
/* WARNING: Removing unreachable block (ram,0x000100053798) */
/* WARNING: Removing unreachable block (ram,0x0001000537d0) */
/* WARNING: Removing unreachable block (ram,0x0001000537a4) */
/* WARNING: Removing unreachable block (ram,0x0001000537e0) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf7b0) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf7dc) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf7f4) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf7f8) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf7fc) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf80c) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf810) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf830) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf838) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf814) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf820) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf82c) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf868) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf75c) */
/* WARNING: Removing unreachable block (ram,0x00010a3bf68c) */

long * FUN_10a3bf1d8(long *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  long *plVar9;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  code *unaff_x26;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  long alStack_70 [7];
  long lStack_38;
  
  plVar5 = &lStack_80;
  plVar8 = &lStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = *param_4;
  lStack_80 = param_2;
  (**(code **)(param_4[1] + 0x10))(alStack_70,param_4 + 1);
  lVar1 = lStack_80;
  lStack_80 = 0;
  *param_1 = lVar1;
  param_1[1] = lStack_78;
  plVar9 = alStack_70;
  (**(code **)(alStack_70[0] + 0x10))(param_1 + 2);
  param_1[9] = (long)param_3;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  uVar10 = 0x10a3bf284;
  ___stack_chk_fail();
  plVar4 = &lStack_80;
  plVar7 = extraout_x8;
  while( true ) {
    plVar6 = (long *)((long)plVar4 + -0x80);
    *(long **)((long)plVar4 + -0x30) = unaff_x22;
    *(long **)((long)plVar4 + -0x28) = plVar8;
    *(long **)((long)plVar4 + -0x20) = param_3;
    *(long **)((long)plVar4 + -0x18) = param_1;
    *(undefined1 **)((long)plVar4 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)plVar4 + -8) = uVar10;
    *(undefined8 *)((long)plVar4 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = *plVar5;
    uVar2 = plVar5[1];
    *plVar5 = 0;
    *(undefined8 *)((long)plVar4 + -0x80) = uVar10;
    *(undefined8 *)((long)plVar4 + -0x78) = uVar2;
    (**(code **)(plVar5[2] + 0x10))((undefined1 *)((long)plVar4 + -0x70));
    lVar1 = *(long *)((long)plVar4 + -0x80);
    lVar3 = *(long *)((long)plVar4 + -0x78);
    *(undefined8 *)((long)plVar4 + -0x80) = 0;
    *plVar7 = lVar1;
    plVar7[1] = lVar3;
    plVar5 = (long *)((long)plVar4 + -0x70);
    (**(code **)(*(long *)((long)plVar4 + -0x70) + 0x10))(plVar7 + 2);
    plVar7[9] = (long)plVar9;
    FUN_10a042634();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar4 + -0x38)) {
      return plVar6;
    }
    ___stack_chk_fail();
    *(code **)((long)plVar4 + -0xd0) = unaff_x26;
    *(undefined ***)((long)plVar4 + -200) = unaff_x25;
    *(undefined8 *)((long)plVar4 + -0xc0) = unaff_x24;
    *(long **)((long)plVar4 + -0xb8) = unaff_x23;
    *(long **)((long)plVar4 + -0xb0) = unaff_x22;
    *(undefined1 **)((long)plVar4 + -0xa8) = (undefined1 *)((long)plVar4 + -0x80);
    *(long **)((long)plVar4 + -0xa0) = plVar7;
    *(long **)((long)plVar4 + -0x98) = plVar9;
    *(undefined1 **)((long)plVar4 + -0x90) = (undefined1 *)((long)plVar4 + -0x10);
    *(code **)((long)plVar4 + -0x88) = FUN_10a3bf330;
    *(undefined8 *)((long)plVar4 + -0xd8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = plVar5;
    plVar8 = plVar5;
    __Znam();
    *(undefined8 *)((long)plVar4 + -0x118) = 0x10a3bfa20;
    *(undefined ***)((long)plVar4 + -0x110) = &PTR_DAT_110bcfc80;
    *(code **)((long)plVar4 + -0x108) = FUN_10a3bfa14;
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar6;
      _memcpy(plVar9,plVar6,plVar5);
    }
    *(undefined8 *)((long)plVar4 + -0x120) = 0;
    *(undefined ***)((long)plVar4 + -0x158) = &PTR_DAT_110bcfc80;
    *(code **)((long)plVar4 + -0x150) = FUN_10a3bfa14;
    *(undefined8 *)((long)plVar4 + -0x168) = 0;
    *(undefined8 *)((long)plVar4 + -0x160) = 0x10a3bfa20;
    *extraout_x8_00 = plVar9;
    extraout_x8_00[1] = 0x10a3bfa20;
    extraout_x8_00[2] = &PTR_DAT_110bcfc80;
    extraout_x8_00[3] = FUN_10a3bfa14;
    extraout_x8_00[9] = plVar5;
    FUN_10a042634((undefined1 *)((long)plVar4 + -0x168));
    plVar7 = (long *)((long)plVar4 + -0x120);
    FUN_10a3bfa44(plVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar4 + -0xd8)) break;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)plVar4 + -0x1e0);
    *(undefined8 **)((long)plVar4 + -400) = extraout_x8_00;
    *(long **)((long)plVar4 + -0x188) = plVar5;
    *(undefined1 **)((long)plVar4 + -0x180) = (undefined1 *)((long)plVar4 + -0x90);
    *(code **)((long)plVar4 + -0x178) = FUN_10a3bf408;
    *(undefined8 *)((long)plVar4 + -0x198) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)plVar4 + -0x1d8) = 0x10a3bfa20;
    *(undefined ***)((long)plVar4 + -0x1d0) = &PTR_DAT_110bcfc80;
    *(code **)((long)plVar4 + -0x1c8) = FUN_10a3bf1d4;
    FUN_10a3bf1d8(extraout_x8_01,plVar7,plVar8,(undefined1 *)((long)plVar4 + -0x1d8));
    plVar5 = (long *)((long)plVar4 + -0x1d0);
    (*(code *)**(undefined8 **)((long)plVar4 + -0x1d0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar4 + -0x198)) {
      return plVar5;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)plVar4 + -0x1d0))((undefined1 *)((long)plVar4 + -0x1d0));
    unaff_x22 = plVar5;
    __Unwind_Resume();
    *(code **)((long)plVar4 + -0x230) = unaff_x26;
    *(code **)((long)plVar4 + -0x228) = FUN_10a3bfa14;
    *(undefined ***)((long)plVar4 + -0x220) = &PTR_DAT_110bcfc80;
    *(undefined8 *)((long)plVar4 + -0x218) = 0x10a3bfa20;
    *(long **)((long)plVar4 + -0x210) = plVar6;
    *(long **)((long)plVar4 + -0x208) = plVar9;
    *(undefined8 **)((long)plVar4 + -0x200) = extraout_x8_00;
    *(long **)((long)plVar4 + -0x1f8) = plVar5;
    *(undefined1 **)((long)plVar4 + -0x1f0) = (undefined1 *)((long)plVar4 + -0x180);
    *(code **)((long)plVar4 + -0x1e8) = FUN_10a3bf4bc;
    *(undefined8 *)((long)plVar4 + -0x238) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x23 = unaff_x22;
    (**(code **)(*unaff_x22 + 0x28))();
    plVar9 = (long *)(long)(int)unaff_x23;
    plVar8 = plVar9;
    __Znam();
    unaff_x24 = 0x10a3bfa20;
    *(long **)((long)plVar4 + -0x280) = plVar8;
    *(undefined8 *)((long)plVar4 + -0x278) = 0x10a3bfa20;
    unaff_x25 = &PTR_DAT_110bcfc80;
    unaff_x26 = FUN_10a3bfa14;
    *(undefined ***)((long)plVar4 + -0x270) = &PTR_DAT_110bcfc80;
    *(code **)((long)plVar4 + -0x268) = FUN_10a3bfa14;
    func_0x00010b4d1758(unaff_x22,plVar8,unaff_x23);
    *(undefined8 *)((long)plVar4 + -0x280) = 0;
    *(long **)((long)plVar4 + -0x2c8) = plVar8;
    *(undefined8 *)((long)plVar4 + -0x2c0) = 0x10a3bfa20;
    *(undefined ***)((long)plVar4 + -0x2b8) = &PTR_DAT_110bcfc80;
    *(code **)((long)plVar4 + -0x2b0) = FUN_10a3bfa14;
    plVar5 = (long *)((long)plVar4 + -0x2c8);
    uVar10 = 0x10a3bf55c;
    plVar4 = (long *)((long)plVar4 + -0x2d0);
    plVar7 = extraout_x8_02;
    param_1 = extraout_x8_02;
    param_3 = plVar9;
  }
  return plVar7;
}



/* Entry: 10a3bf330; end: 10a3bf407;  */

undefined *** FUN_10a3bf330(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined ***extraout_x8_03;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuStack_3b8;
  undefined **appuStack_3b0 [7];
  long lStack_378;
  undefined ***pppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined ***pppuStack_358;
  undefined1 ****ppppuStack_350;
  code *pcStack_348;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  code *pcStack_320;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  code *pcStack_2d8;
  long lStack_2a8;
  code *pcStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined ***pppuStack_288;
  undefined ***pppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined ***pppuStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  code *pcStack_230;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  code *pcStack_148;
  long lStack_118;
  long *plStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  lVar11 = param_3;
  __Znam();
  uStack_98 = 0x10a3bfa20;
  ppuStack_90 = &PTR_DAT_110bcfc80;
  pcStack_88 = FUN_10a3bfa14;
  if (param_3 != 0) {
    _memcpy(lVar4,param_2,param_3);
    lVar11 = param_2;
  }
  ppuStack_a0 = (undefined **)0x0;
  ppuStack_d8 = &PTR_DAT_110bcfc80;
  pcStack_d0 = FUN_10a3bfa14;
  uStack_e8 = 0;
  uStack_e0 = 0x10a3bfa20;
  *param_1 = lVar4;
  param_1[1] = 0x10a3bfa20;
  param_1[2] = (long)&PTR_DAT_110bcfc80;
  param_1[3] = (long)FUN_10a3bfa14;
  param_1[9] = param_3;
  FUN_10a042634(&uStack_e8);
  pppuVar5 = &ppuStack_a0;
  FUN_10a3bfa44(pppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_10a3bf408;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = 0x10a3bfa20;
  ppuStack_150 = &PTR_DAT_110bcfc80;
  pcStack_148 = FUN_10a3bf1d4;
  plStack_110 = param_1;
  lStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10a3bf1d8(extraout_x8,pppuVar5,lVar11,&uStack_158);
  pppuVar5 = &ppuStack_150;
  (*(code *)*ppuStack_150)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_150)(&ppuStack_150);
  __Unwind_Resume();
  pcStack_168 = FUN_10a3bf4bc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = pppuVar5;
  ppuStack_170 = &puStack_100;
  (*(code *)(*pppuVar5)[5])();
  ppuVar12 = (undefined **)(long)(int)pppuVar6;
  ppuVar7 = ppuVar12;
  __Znam();
  uStack_1f8 = 0x10a3bfa20;
  ppuStack_1f0 = &PTR_DAT_110bcfc80;
  pcStack_1e8 = FUN_10a3bfa14;
  ppuStack_200 = ppuVar7;
  func_0x00010b4d1758(pppuVar5,ppuVar7,pppuVar6);
  ppuStack_200 = (undefined **)0x0;
  uStack_240 = 0x10a3bfa20;
  ppuStack_238 = &PTR_DAT_110bcfc80;
  pcStack_230 = FUN_10a3bfa14;
  ppuStack_248 = ppuVar7;
  func_0x00010a3bf284(extraout_x8_00,&ppuStack_248,ppuVar12);
  FUN_10a042634(&ppuStack_248);
  pppuVar8 = &ppuStack_200;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  FUN_10a042634(&ppuStack_248);
  FUN_10a3bfa44(&ppuStack_200);
  pppuVar9 = pppuVar8;
  __Unwind_Resume();
  pcStack_2a0 = FUN_10a3bfa14;
  ppuStack_298 = &PTR_DAT_110bcfc80;
  uStack_290 = 0x10a3bfa20;
  pcStack_258 = FUN_10a3bf5c8;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = pppuVar9;
  pppuStack_288 = pppuVar6;
  pppuStack_280 = pppuVar5;
  ppuStack_278 = ppuVar7;
  ppuStack_270 = ppuVar12;
  pppuStack_268 = pppuVar8;
  pppuStack_260 = &ppuStack_170;
  (*(code *)(*pppuVar9)[5])();
  ppuVar13 = (undefined **)(long)((int)pppuVar10 + 5);
  ppuVar7 = ppuVar13;
  __Znam();
  uStack_2e8 = 0x10a3bfa20;
  ppuStack_2e0 = &PTR_DAT_110bcfc80;
  pcStack_2d8 = FUN_10a3bfa14;
  pppuVar8 = pppuVar9;
  ppuStack_2f0 = ppuVar7;
  FUN_10a0f102c();
  ppuStack_2f0 = (undefined **)0x0;
  uStack_330 = 0x10a3bfa20;
  ppuStack_328 = &PTR_DAT_110bcfc80;
  pcStack_320 = FUN_10a3bfa14;
  ppuVar12 = ppuVar13;
  ppuStack_338 = ppuVar7;
  func_0x00010a3bf284(extraout_x8_01,&ppuStack_338,ppuVar13);
  FUN_10a042634(&ppuStack_338);
  pppuVar5 = &ppuStack_2f0;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a042634(&ppuStack_338);
  FUN_10a3bfa44(&ppuStack_2f0);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_348 = FUN_10a3bf6d0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3b8 = *pppuVar8;
  pppuStack_370 = pppuVar9;
  ppuStack_368 = ppuVar7;
  ppuStack_360 = ppuVar13;
  pppuStack_358 = pppuVar5;
  ppppuStack_350 = &pppuStack_260;
  (*(code *)pppuVar8[1][2])(appuStack_3b0,pppuVar8 + 1);
  FUN_10a3bf1d8(extraout_x8_02,pppuVar6,ppuVar12,&ppuStack_3b8);
  pppuVar5 = appuStack_3b0;
  (*(code *)*appuStack_3b0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_3b0[0])(appuStack_3b0);
  __Unwind_Resume();
  if (pppuVar6 != (undefined ***)0x0) {
    *extraout_x8_03 = (undefined **)0x0;
    extraout_x8_03[1] = (undefined **)0x0;
    extraout_x8_03[2] = (undefined **)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(extraout_x8_03);
    do {
      bVar1 = *(byte *)pppuVar5;
      pppuVar8 = extraout_x8_03;
      if (((bVar1 - 0x30 < 10 || ((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar2 = bVar1 - 0x21,
          uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar1 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_03,(int)(char)bVar1);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_03,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_03,(long)(char)(&UNK_10f653530)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_03,(long)(char)(&UNK_10f653530)[(ulong)bVar1 & 0xf]);
      }
      pppuVar5 = (undefined ***)((long)pppuVar5 + 1);
      pppuVar6 = (undefined ***)((long)pppuVar6 + -1);
    } while (pppuVar6 != (undefined ***)0x0);
    return pppuVar8;
  }
  pppuVar5 = (undefined ***)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined ***)0x7ffffffffffffff7 < pppuVar5) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      pppuVar5 = (undefined ***)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)pppuVar5 != 0) {
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
        pppuVar5 = (undefined ***)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return pppuVar5;
      }
    }
    return pppuVar5;
  }
  if (pppuVar5 < (undefined ***)0x17) {
    *(char *)((long)extraout_x8_03 + 0x17) = (char)pppuVar5;
    pppuVar6 = extraout_x8_03;
    if (pppuVar5 == (undefined ***)0x0) goto code_r0x0001000537e0;
  }
  else {
    pppuVar8 = (undefined ***)0x19;
    if (((ulong)pppuVar5 | 7) != 0x17) {
      pppuVar8 = (undefined ***)(((ulong)pppuVar5 | 7) + 1);
    }
    pppuVar6 = pppuVar8;
    func_0x000107c60e20();
    extraout_x8_03[1] = (undefined **)pppuVar5;
    extraout_x8_03[2] = (undefined **)((ulong)pppuVar8 | 0x8000000000000000);
    *extraout_x8_03 = (undefined **)pppuVar6;
  }
  func_0x000107c610b8(pppuVar6,&UNK_10f65352f,pppuVar5);
code_r0x0001000537e0:
  *(undefined1 *)((long)pppuVar6 + (long)pppuVar5) = 0;
  return extraout_x8_03;
}



/* Entry: 10a3bf408; end: 10a3bf4bb;  */

undefined *** FUN_10a3bf408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined ***extraout_x8_02;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_2c8;
  undefined **appuStack_2c0 [7];
  long lStack_288;
  undefined ***pppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined ***pppuStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  code *pcStack_230;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined ***pppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  code *pcStack_f8;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x10a3bfa20;
  ppuStack_60 = &PTR_DAT_110bcfc80;
  pcStack_58 = FUN_10a3bf1d4;
  FUN_10a3bf1d8(param_1,param_2,param_3,&uStack_68);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pcStack_78 = FUN_10a3bf4bc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = pppuVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  (*(code *)(*pppuVar4)[5])();
  ppuVar10 = (undefined **)(long)(int)pppuVar5;
  ppuVar6 = ppuVar10;
  __Znam();
  uStack_108 = 0x10a3bfa20;
  ppuStack_100 = &PTR_DAT_110bcfc80;
  pcStack_f8 = FUN_10a3bfa14;
  ppuStack_110 = ppuVar6;
  func_0x00010b4d1758(pppuVar4,ppuVar6,pppuVar5);
  ppuStack_110 = (undefined **)0x0;
  uStack_150 = 0x10a3bfa20;
  ppuStack_148 = &PTR_DAT_110bcfc80;
  pcStack_140 = FUN_10a3bfa14;
  ppuStack_158 = ppuVar6;
  func_0x00010a3bf284(extraout_x8,&ppuStack_158,ppuVar10);
  FUN_10a042634(&ppuStack_158);
  pppuVar7 = &ppuStack_110;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  FUN_10a042634(&ppuStack_158);
  FUN_10a3bfa44(&ppuStack_110);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_1b0 = FUN_10a3bfa14;
  ppuStack_1a8 = &PTR_DAT_110bcfc80;
  uStack_1a0 = 0x10a3bfa20;
  pcStack_168 = FUN_10a3bf5c8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = pppuVar8;
  pppuStack_198 = pppuVar5;
  pppuStack_190 = pppuVar4;
  ppuStack_188 = ppuVar6;
  ppuStack_180 = ppuVar10;
  pppuStack_178 = pppuVar7;
  ppuStack_170 = &puStack_80;
  (*(code *)(*pppuVar8)[5])();
  ppuVar11 = (undefined **)(long)((int)pppuVar9 + 5);
  ppuVar6 = ppuVar11;
  __Znam();
  uStack_1f8 = 0x10a3bfa20;
  ppuStack_1f0 = &PTR_DAT_110bcfc80;
  pcStack_1e8 = FUN_10a3bfa14;
  pppuVar7 = pppuVar8;
  ppuStack_200 = ppuVar6;
  FUN_10a0f102c();
  ppuStack_200 = (undefined **)0x0;
  uStack_240 = 0x10a3bfa20;
  ppuStack_238 = &PTR_DAT_110bcfc80;
  pcStack_230 = FUN_10a3bfa14;
  ppuVar10 = ppuVar11;
  ppuStack_248 = ppuVar6;
  func_0x00010a3bf284(extraout_x8_00,&ppuStack_248,ppuVar11);
  FUN_10a042634(&ppuStack_248);
  pppuVar4 = &ppuStack_200;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  FUN_10a042634(&ppuStack_248);
  FUN_10a3bfa44(&ppuStack_200);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pcStack_258 = FUN_10a3bf6d0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c8 = *pppuVar7;
  pppuStack_280 = pppuVar8;
  ppuStack_278 = ppuVar6;
  ppuStack_270 = ppuVar11;
  pppuStack_268 = pppuVar4;
  pppuStack_260 = &ppuStack_170;
  (*(code *)pppuVar7[1][2])(appuStack_2c0,pppuVar7 + 1);
  FUN_10a3bf1d8(extraout_x8_01,pppuVar5,ppuVar10,&ppuStack_2c8);
  pppuVar4 = appuStack_2c0;
  (*(code *)*appuStack_2c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_2c0[0])(appuStack_2c0);
  __Unwind_Resume();
  if (pppuVar5 != (undefined ***)0x0) {
    *extraout_x8_02 = (undefined **)0x0;
    extraout_x8_02[1] = (undefined **)0x0;
    extraout_x8_02[2] = (undefined **)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(extraout_x8_02);
    do {
      bVar1 = *(byte *)pppuVar4;
      pppuVar7 = extraout_x8_02;
      if (((bVar1 - 0x30 < 10 || ((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar2 = bVar1 - 0x21,
          uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar1 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_02,(int)(char)bVar1);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_02,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_02,(long)(char)(&UNK_10f653530)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_02,(long)(char)(&UNK_10f653530)[(ulong)bVar1 & 0xf]);
      }
      pppuVar4 = (undefined ***)((long)pppuVar4 + 1);
      pppuVar5 = (undefined ***)((long)pppuVar5 + -1);
    } while (pppuVar5 != (undefined ***)0x0);
    return pppuVar7;
  }
  pppuVar4 = (undefined ***)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined ***)0x7ffffffffffffff7 < pppuVar4) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      pppuVar4 = (undefined ***)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)pppuVar4 != 0) {
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
        pppuVar4 = (undefined ***)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return pppuVar4;
      }
    }
    return pppuVar4;
  }
  if (pppuVar4 < (undefined ***)0x17) {
    *(char *)((long)extraout_x8_02 + 0x17) = (char)pppuVar4;
    pppuVar5 = extraout_x8_02;
    if (pppuVar4 == (undefined ***)0x0) goto code_r0x0001000537e0;
  }
  else {
    pppuVar7 = (undefined ***)0x19;
    if (((ulong)pppuVar4 | 7) != 0x17) {
      pppuVar7 = (undefined ***)(((ulong)pppuVar4 | 7) + 1);
    }
    pppuVar5 = pppuVar7;
    func_0x000107c60e20();
    extraout_x8_02[1] = (undefined **)pppuVar4;
    extraout_x8_02[2] = (undefined **)((ulong)pppuVar7 | 0x8000000000000000);
    *extraout_x8_02 = (undefined **)pppuVar5;
  }
  func_0x000107c610b8(pppuVar5,&UNK_10f65352f,pppuVar4);
code_r0x0001000537e0:
  *(undefined1 *)((long)pppuVar5 + (long)pppuVar4) = 0;
  return extraout_x8_02;
}



/* Entry: 10a3bf4bc; end: 10a3bf5c7;  */

undefined8 ** FUN_10a3bf4bc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 **extraout_x8_01;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puStack_258;
  undefined8 *apuStack_250 [7];
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 **ppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  code *pcStack_1c0;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  long lStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 **ppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))();
  puVar9 = (undefined8 *)(long)(int)plVar4;
  puVar3 = puVar9;
  __Znam();
  uStack_98 = 0x10a3bfa20;
  ppuStack_90 = &PTR_DAT_110bcfc80;
  pcStack_88 = FUN_10a3bfa14;
  puStack_a0 = puVar3;
  func_0x00010b4d1758(param_2,puVar3,plVar4);
  puStack_a0 = (undefined8 *)0x0;
  uStack_e0 = 0x10a3bfa20;
  ppuStack_d8 = &PTR_DAT_110bcfc80;
  pcStack_d0 = FUN_10a3bfa14;
  puStack_e8 = puVar3;
  func_0x00010a3bf284(param_1,&puStack_e8,puVar9);
  FUN_10a042634(&puStack_e8);
  ppuVar5 = &puStack_a0;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a042634(&puStack_e8);
  FUN_10a3bfa44(&puStack_a0);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_140 = FUN_10a3bfa14;
  ppuStack_138 = &PTR_DAT_110bcfc80;
  uStack_130 = 0x10a3bfa20;
  pcStack_f8 = FUN_10a3bf5c8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar6;
  plStack_128 = plVar4;
  plStack_120 = param_2;
  puStack_118 = puVar3;
  puStack_110 = puVar9;
  ppuStack_108 = ppuVar5;
  puStack_100 = &stack0xfffffffffffffff0;
  (*(code *)(*ppuVar6)[5])();
  puVar10 = (undefined8 *)(long)((int)ppuVar7 + 5);
  puVar3 = puVar10;
  __Znam();
  uStack_188 = 0x10a3bfa20;
  ppuStack_180 = &PTR_DAT_110bcfc80;
  pcStack_178 = FUN_10a3bfa14;
  ppuVar7 = ppuVar6;
  puStack_190 = puVar3;
  FUN_10a0f102c();
  puStack_190 = (undefined8 *)0x0;
  uStack_1d0 = 0x10a3bfa20;
  ppuStack_1c8 = &PTR_DAT_110bcfc80;
  pcStack_1c0 = FUN_10a3bfa14;
  puVar9 = puVar10;
  puStack_1d8 = puVar3;
  func_0x00010a3bf284(extraout_x8,&puStack_1d8,puVar10);
  FUN_10a042634(&puStack_1d8);
  ppuVar5 = &puStack_190;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a042634(&puStack_1d8);
  FUN_10a3bfa44(&puStack_190);
  ppuVar8 = ppuVar5;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10a3bf6d0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_258 = *ppuVar7;
  ppuStack_210 = ppuVar6;
  puStack_208 = puVar3;
  puStack_200 = puVar10;
  ppuStack_1f8 = ppuVar5;
  ppuStack_1f0 = &puStack_100;
  (*(code *)ppuVar7[1][2])(apuStack_250,ppuVar7 + 1);
  func_0x00010a3bf1d8(extraout_x8_00,ppuVar8,puVar9,&puStack_258);
  ppuVar5 = apuStack_250;
  (*(code *)*apuStack_250[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_250[0])(apuStack_250);
  __Unwind_Resume();
  if (ppuVar8 != (undefined8 **)0x0) {
    *extraout_x8_01 = (undefined8 *)0x0;
    extraout_x8_01[1] = (undefined8 *)0x0;
    extraout_x8_01[2] = (undefined8 *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(extraout_x8_01);
    do {
      bVar1 = *(byte *)ppuVar5;
      ppuVar6 = extraout_x8_01;
      if (((bVar1 - 0x30 < 10 || ((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar2 = bVar1 - 0x21,
          uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar1 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_01,(int)(char)bVar1);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_01,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_01,(long)(char)(&UNK_10f653530)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_01,(long)(char)(&UNK_10f653530)[(ulong)bVar1 & 0xf]);
      }
      ppuVar5 = (undefined8 **)((long)ppuVar5 + 1);
      ppuVar8 = (undefined8 **)((long)ppuVar8 + -1);
    } while (ppuVar8 != (undefined8 **)0x0);
    return ppuVar6;
  }
  ppuVar5 = (undefined8 **)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined8 **)0x7ffffffffffffff7 < ppuVar5) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      ppuVar5 = (undefined8 **)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)ppuVar5 != 0) {
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
        ppuVar5 = (undefined8 **)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return ppuVar5;
      }
    }
    return ppuVar5;
  }
  if (ppuVar5 < (undefined8 **)0x17) {
    *(char *)((long)extraout_x8_01 + 0x17) = (char)ppuVar5;
    ppuVar7 = extraout_x8_01;
    if (ppuVar5 == (undefined8 **)0x0) goto code_r0x0001000537e0;
  }
  else {
    ppuVar6 = (undefined8 **)0x19;
    if (((ulong)ppuVar5 | 7) != 0x17) {
      ppuVar6 = (undefined8 **)(((ulong)ppuVar5 | 7) + 1);
    }
    ppuVar7 = ppuVar6;
    func_0x000107c60e20();
    extraout_x8_01[1] = ppuVar5;
    extraout_x8_01[2] = (undefined8 *)((ulong)ppuVar6 | 0x8000000000000000);
    *extraout_x8_01 = ppuVar7;
  }
  func_0x000107c610b8(ppuVar7,&UNK_10f65352f,ppuVar5);
code_r0x0001000537e0:
  *(undefined1 *)((long)ppuVar7 + (long)ppuVar5) = 0;
  return extraout_x8_01;
}



/* Entry: 10a3bf5c8; end: 10a3bf6cf;  */

undefined8 ** FUN_10a3bf5c8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 **extraout_x8_00;
  undefined8 *puVar9;
  long lStack_168;
  undefined8 *apuStack_160 [7];
  long lStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 **ppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x28))();
  puVar9 = (undefined8 *)(long)((int)plVar5 + 5);
  puVar4 = puVar9;
  __Znam();
  uStack_98 = 0x10a3bfa20;
  ppuStack_90 = &PTR_DAT_110bcfc80;
  pcStack_88 = FUN_10a3bfa14;
  plVar5 = param_2;
  puStack_a0 = puVar4;
  FUN_10a0f102c();
  puStack_a0 = (undefined8 *)0x0;
  uStack_e0 = 0x10a3bfa20;
  ppuStack_d8 = &PTR_DAT_110bcfc80;
  pcStack_d0 = FUN_10a3bfa14;
  puVar8 = puVar9;
  puStack_e8 = puVar4;
  func_0x00010a3bf284(param_1,&puStack_e8,puVar9);
  FUN_10a042634(&puStack_e8);
  ppuVar6 = &puStack_a0;
  FUN_10a3bfa44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  FUN_10a042634(&puStack_e8);
  FUN_10a3bfa44(&puStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a3bf6d0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar5;
  plStack_120 = param_2;
  puStack_118 = puVar4;
  puStack_110 = puVar9;
  ppuStack_108 = ppuVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  (**(code **)(plVar5[1] + 0x10))(apuStack_160,plVar5 + 1);
  func_0x00010a3bf1d8(extraout_x8,ppuVar7,puVar8,&lStack_168);
  ppuVar6 = apuStack_160;
  (*(code *)*apuStack_160[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_160[0])(apuStack_160);
  __Unwind_Resume();
  if (ppuVar7 != (undefined8 **)0x0) {
    *extraout_x8_00 = (undefined8 *)0x0;
    extraout_x8_00[1] = (undefined8 *)0x0;
    extraout_x8_00[2] = (undefined8 *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(extraout_x8_00);
    do {
      bVar1 = *(byte *)ppuVar6;
      ppuVar3 = extraout_x8_00;
      if (((bVar1 - 0x30 < 10 || ((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar2 = bVar1 - 0x21,
          uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar1 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_00,(int)(char)bVar1);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_00,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_00,(long)(char)(&UNK_10f653530)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8_00,(long)(char)(&UNK_10f653530)[(ulong)bVar1 & 0xf]);
      }
      ppuVar6 = (undefined8 **)((long)ppuVar6 + 1);
      ppuVar7 = (undefined8 **)((long)ppuVar7 + -1);
    } while (ppuVar7 != (undefined8 **)0x0);
    return ppuVar3;
  }
  ppuVar6 = (undefined8 **)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined8 **)0x7ffffffffffffff7 < ppuVar6) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      ppuVar6 = (undefined8 **)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)ppuVar6 != 0) {
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
        ppuVar6 = (undefined8 **)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return ppuVar6;
      }
    }
    return ppuVar6;
  }
  if (ppuVar6 < (undefined8 **)0x17) {
    *(char *)((long)extraout_x8_00 + 0x17) = (char)ppuVar6;
    ppuVar3 = extraout_x8_00;
    if (ppuVar6 == (undefined8 **)0x0) goto code_r0x0001000537e0;
  }
  else {
    ppuVar7 = (undefined8 **)0x19;
    if (((ulong)ppuVar6 | 7) != 0x17) {
      ppuVar7 = (undefined8 **)(((ulong)ppuVar6 | 7) + 1);
    }
    ppuVar3 = ppuVar7;
    func_0x000107c60e20();
    extraout_x8_00[1] = ppuVar6;
    extraout_x8_00[2] = (undefined8 *)((ulong)ppuVar7 | 0x8000000000000000);
    *extraout_x8_00 = ppuVar3;
  }
  func_0x000107c610b8(ppuVar3,&UNK_10f65352f,ppuVar6);
code_r0x0001000537e0:
  *(undefined1 *)((long)ppuVar3 + (long)ppuVar6) = 0;
  return extraout_x8_00;
}



/* Entry: 10a3bf6d0; end: 10a3bf78f;  */

undefined8 ** FUN_10a3bf6d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **extraout_x8;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_70,param_4 + 1);
  FUN_10a3bf1d8(param_1,param_2,param_3,&uStack_78);
  ppuVar5 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  if (param_2 != 0) {
    *extraout_x8 = (undefined8 *)0x0;
    extraout_x8[1] = (undefined8 *)0x0;
    extraout_x8[2] = (undefined8 *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(extraout_x8);
    do {
      bVar1 = *(byte *)ppuVar5;
      ppuVar6 = extraout_x8;
      if (((bVar1 - 0x30 < 10 || ((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar2 = bVar1 - 0x21,
          uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar1 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8,(int)(char)bVar1);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8,(long)(char)(&UNK_10f653530)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (extraout_x8,(long)(char)(&UNK_10f653530)[(ulong)bVar1 & 0xf]);
      }
      ppuVar5 = (undefined8 **)((long)ppuVar5 + 1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return ppuVar6;
  }
  ppuVar5 = (undefined8 **)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined8 **)0x7ffffffffffffff7 < ppuVar5) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      ppuVar5 = (undefined8 **)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)ppuVar5 != 0) {
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
        ppuVar5 = (undefined8 **)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return ppuVar5;
      }
    }
    return ppuVar5;
  }
  if (ppuVar5 < (undefined8 **)0x17) {
    *(char *)((long)extraout_x8 + 0x17) = (char)ppuVar5;
    ppuVar3 = extraout_x8;
    if (ppuVar5 == (undefined8 **)0x0) goto code_r0x0001000537e0;
  }
  else {
    ppuVar6 = (undefined8 **)0x19;
    if (((ulong)ppuVar5 | 7) != 0x17) {
      ppuVar6 = (undefined8 **)(((ulong)ppuVar5 | 7) + 1);
    }
    ppuVar3 = ppuVar6;
    func_0x000107c60e20();
    extraout_x8[1] = ppuVar5;
    extraout_x8[2] = (undefined8 *)((ulong)ppuVar6 | 0x8000000000000000);
    *extraout_x8 = ppuVar3;
  }
  func_0x000107c610b8(ppuVar3,&UNK_10f65352f,ppuVar5);
code_r0x0001000537e0:
  *(undefined1 *)((long)ppuVar3 + (long)ppuVar5) = 0;
  return extraout_x8;
}



/* Entry: 10a3bf790; end: 10a3bf8c7;  */

undefined8 * FUN_10a3bf790(undefined8 *param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1);
    do {
      bVar2 = *param_2;
      puVar5 = param_1;
      if (((bVar2 - 0x30 < 10 || ((bVar2 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) ||
          (uVar3 = bVar2 - 0x21,
          uVar3 < 0x3f && (1L << ((ulong)uVar3 & 0x3f) & 0x40000000000033c1U) != 0)) ||
         (bVar2 == 0x7e)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(int)(char)bVar2);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x25);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10f653530)[bVar2 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10f653530)[(ulong)bVar2 & 0xf]);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return puVar5;
  }
  puVar5 = (undefined8 *)&UNK_10f65352f;
  func_0x000107c613d0();
  if ((undefined8 *)0x7ffffffffffffff7 < puVar5) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar5 = (undefined8 *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar5 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (undefined8 *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar5;
  }
  if (puVar5 < (undefined8 *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar4 = param_1;
    if (puVar5 == (undefined8 *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar1 = (undefined8 *)(((ulong)puVar5 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    param_1[1] = puVar5;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = puVar4;
  }
  func_0x000107c610b8(puVar4,&UNK_10f65352f,puVar5);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 10a3bf8c8; end: 10a3bf957;  */

undefined8 * FUN_10a3bf8c8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  FUN_10a3bf958(puVar3,puVar3 + 0x12,6,0,param_2);
  lVar5 = *param_1;
  if ((undefined8 *)(lVar5 + 0x90) != puVar3) {
    uVar4 = *puVar3;
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    FUN_10a003d5c(uVar4,puVar3[1],puVar2,uVar1);
    if ((char)uVar4 < '\x01') {
      return puVar3;
    }
    lVar5 = *param_1;
  }
  return (undefined8 *)(lVar5 + 0x90);
}



/* Entry: 10a3bf958; end: 10a3bfa13;  */

undefined1  [16]
FUN_10a3bf958(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  if (param_3 != 0) {
    puVar4 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar3 = *param_2;
        uVar1 = param_5[1];
        puVar2 = (undefined8 *)*param_5;
        if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
          puVar2 = param_5;
        }
        FUN_10a003d5c(uVar3,param_2[1],puVar2,uVar1);
        if (((uint)uVar3 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_10a3bf9f0;
        param_4 = param_4 << 1 | 1;
        puVar4 = param_2;
      }
      param_2 = puVar4;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_10a3bf9f0:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10a3bfa14; end: 10a3bfa43;  */

void FUN_10a3bfa14(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10a3bfa44; end: 10a3bfa8f;  */

long * FUN_10a3bfa44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a3bfa90; end: 10a3bfba3;  */

undefined8 FUN_10a3bfa90(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_58 [16];
  long *plStack_48;
  
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_1[1];
    plStack_48 = param_2;
    if (lVar2 != 0) {
      bVar6 = false;
      uVar5 = 0;
      plVar3 = (long *)*param_1;
      plVar4 = plVar3;
      do {
        plVar1 = (long *)*plVar4;
        if (plVar1 == param_2) {
          do {
            plVar4 = plVar4 + 1;
            if (plVar4 == plVar3 + lVar2) {
              return uVar5;
            }
            plVar1 = (long *)*plVar4;
          } while (plVar1 == param_2);
          bVar6 = true;
          if (plVar1 != (long *)0x0) goto LAB_10a3bfae0;
LAB_10a3bfb54:
          plVar4 = plVar4 + 1;
        }
        else {
          if (plVar1 == (long *)0x0) goto LAB_10a3bfb54;
LAB_10a3bfae0:
          (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
          lVar2 = param_1[1];
          if ((int)plVar1 == 0) goto LAB_10a3bfb54;
          plVar1 = (long *)(*param_1 + lVar2 * 8);
          plVar3 = plVar4 + 1;
          if (plVar3 != plVar1) {
            _memmove(plVar4,plVar3,(long)plVar1 - (long)plVar3);
            lVar2 = param_1[1];
          }
          lVar2 = lVar2 + -1;
          param_1[1] = lVar2;
          uVar5 = 1;
        }
        plVar3 = (long *)*param_1;
      } while (plVar4 != plVar3 + lVar2);
      if (bVar6) {
        return uVar5;
      }
    }
    FUN_10a3f1ef4(auStack_58,param_1,&plStack_48);
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10a3bfba4; end: 10a3bfc37;  */

long FUN_10a3bfba4(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0x137eb048;
    if (((bRam00000001137eb048 & 1) == 0) && (___cxa_guard_acquire(), iVar1 != 0)) {
      uRam00000001137eb118 = 0x1137eb130;
      uRam00000001137eb128 = 4;
      uRam00000001137eb120 = 0;
      ___cxa_atexit(0x10a3bfdcc,0x1137eb118,0x100000000);
      ___cxa_guard_release(0x1137eb048);
    }
    return 0x1137eb118;
  }
  return param_1 + 0x10;
}



/* Entry: 10a3bfc38; end: 10a3bfd73;  */

void FUN_10a3bfc38(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 4;
  param_1[1] = 0;
  param_1[7] = (long)(param_1 + 10);
  param_1[9] = 4;
  param_1[8] = 0;
  FUN_10a3bfba4();
  FUN_10a3bfba4();
  if (param_2[1] != 0) {
    plVar4 = (long *)*param_2;
    plVar1 = plVar4 + param_2[1];
    do {
      lStack_48 = *plVar4;
      if (param_3[1] != 0) {
        lVar3 = param_3[1] << 3;
        plVar2 = (long *)*param_3;
        do {
          if (*plVar2 == lStack_48) goto LAB_10a3bfce0;
          lVar3 = lVar3 + -8;
          plVar2 = plVar2 + 1;
        } while (lVar3 != 0);
      }
      FUN_10a3f1ef4(auStack_58,param_1,&lStack_48);
LAB_10a3bfce0:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if (param_3[1] != 0) {
    plVar4 = (long *)*param_3;
    plVar1 = plVar4 + param_3[1];
    do {
      lStack_48 = *plVar4;
      if (param_2[1] != 0) {
        lVar3 = param_2[1] << 3;
        plVar2 = (long *)*param_2;
        do {
          if (*plVar2 == lStack_48) goto LAB_10a3bfd38;
          lVar3 = lVar3 + -8;
          plVar2 = plVar2 + 1;
        } while (lVar3 != 0);
      }
      FUN_10a3f1ef4(auStack_58,param_1 + 7,&lStack_48);
LAB_10a3bfd38:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



/* Entry: 10a3bfd74; end: 10a3bfe67;  */

long * FUN_10a3bfd74(long *param_1)

{
  if (param_1[9] != 0) {
    if (param_1 + 10 != (long *)param_1[7]) {
      __ZdlPv();
    }
  }
  if (param_1[2] != 0) {
    if (param_1 + 3 != (long *)*param_1) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10a3bfe68; end: 10a3c012f;  */

int ** FUN_10a3bfe68(int **param_1,int **param_2,long *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  undefined1 auStack_98 [8];
  int *piStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int aiStack_78 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_3[1];
  ppiVar4 = param_1;
  ppiVar6 = param_2;
  if (lVar8 != 0) {
    lVar7 = lVar8 * 8 + -8;
    ppiVar3 = (int **)*param_3;
    do {
      ppiVar4 = ppiVar3 + 1;
      if (*ppiVar3 == (int *)0x0) {
        if (lVar7 != 0) {
          ppiVar6 = ppiVar3 + 1;
          _memmove();
          lVar8 = param_3[1];
        }
        lVar8 = lVar8 + -1;
        param_3[1] = lVar8;
        ppiVar4 = ppiVar3;
        break;
      }
      lVar7 = lVar7 + -8;
      ppiVar3 = ppiVar4;
    } while (lVar7 != -8);
    if (lVar8 != 0) {
      ppiVar4 = param_2 + 1;
      piVar5 = *ppiVar4;
      if (param_2[2] != (int *)0x0) {
        piVar13 = piVar5 + (long)param_2[2] * 2;
        do {
          piVar9 = *(int **)piVar5;
          if (*(long *)(piVar9 + 6) == lVar8) {
            plVar11 = *(long **)(piVar9 + 4);
            plVar12 = (long *)*param_3;
            lVar7 = lVar8 << 3;
            while( true ) {
              if (*plVar11 != *plVar12) break;
              lVar7 = lVar7 + -8;
              plVar11 = plVar11 + 1;
              plVar12 = plVar12 + 1;
              if (lVar7 == 0) {
                if (piVar9 != (int *)0x0) {
                  *piVar9 = *piVar9 + 1;
                }
                *param_1 = piVar9;
                piStack_a0 = (int *)0x0;
                ppiVar4 = &piStack_a0;
                goto LAB_10a3c00b0;
              }
            }
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 != piVar13);
      }
      piVar5 = (int *)0x48;
      __Znwm();
      piVar13 = *param_2;
      lStack_80 = 4;
      uStack_88 = 0;
      piStack_90 = aiStack_78;
      FUN_10a3e98e4(&piStack_90,param_3);
      *piVar5 = 0;
      *(int **)(piVar5 + 2) = piVar13;
      *(int **)(piVar5 + 4) = piVar5 + 10;
      piVar5[8] = 4;
      piVar5[9] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      ppiVar6 = &piStack_90;
      FUN_10a3e98e4();
      *piVar5 = *piVar5 + 1;
      piStack_a8 = piVar5;
      if ((lStack_80 != 0) && (aiStack_78 != piStack_90)) {
        __ZdlPv();
      }
      piVar13 = param_2[2];
      ppiVar3 = (int **)((long)param_2[1] + piVar13 * 8);
      ppiVar2 = (int **)param_2[1];
      piVar9 = piVar13;
      while (ppiVar1 = ppiVar2, piVar9 != (int *)0x0) {
        piVar10 = (int *)((ulong)piVar9 >> 1);
        ppiVar2 = ppiVar1 + (long)piVar10 + 1;
        piVar9 = (int *)((long)piVar9 + ((ulong)piVar9 >> 1 ^ 0xffffffffffffffff));
        if (piVar5 <= ppiVar1[(long)piVar10]) {
          ppiVar2 = ppiVar1;
          piVar9 = piVar10;
        }
      }
      piStack_b0 = piVar5;
      if (ppiVar1 == ppiVar3) {
        if (param_2[3] == piVar13) {
LAB_10a3c00e8:
          FUN_10a3f2288(auStack_98,ppiVar4,ppiVar1,&piStack_b0);
          ppiVar6 = ppiVar4;
        }
        else {
          *ppiVar3 = piVar5;
          param_2[2] = (int *)((long)piVar13 + 1);
        }
      }
      else if (piVar5 < *ppiVar1) {
        if (param_2[3] == piVar13) goto LAB_10a3c00e8;
        *ppiVar3 = ppiVar3[-1];
        param_2[2] = (int *)((long)piVar13 + 1);
        lVar8 = (long)(ppiVar3 + -1) - (long)ppiVar1;
        if (lVar8 != 0) {
          ppiVar6 = ppiVar1;
          _memmove((long)ppiVar3 - lVar8);
        }
        *ppiVar1 = piVar5;
      }
      piStack_a8 = (int *)0x0;
      *param_1 = piVar5;
      uStack_b8 = 0;
      FUN_10a3f2154(&uStack_b8);
      ppiVar4 = &piStack_a8;
LAB_10a3c00b0:
      FUN_10a3f2154();
      goto LAB_10a3c00b4;
    }
  }
  *param_1 = (int *)0x0;
LAB_10a3c00b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a3f2154(&piStack_a8);
    __Unwind_Resume(ppiVar4);
    func_0x000104bd46a0();
    if (ppiVar4 != ppiVar6) {
      if (ppiVar4[1] != (int *)0x0) {
        piVar5 = *ppiVar4;
        *ppiVar4 = (int *)0x0;
        ppiVar4[1] = (int *)0x0;
        FUN_10a3c017c(piVar5);
      }
      piVar5 = ppiVar6[1];
      *ppiVar4 = *ppiVar6;
      ppiVar4[1] = piVar5;
      *ppiVar6 = (int *)0x0;
      ppiVar6[1] = (int *)0x0;
    }
    return ppiVar4;
  }
  return ppiVar4;
}



/* Entry: 10a3c0130; end: 10a3c017b;  */

undefined8 * FUN_10a3c0130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      FUN_10a3c017c(uVar1);
    }
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



/* Entry: 10a3c017c; end: 10a3c0447;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c0268) */

void FUN_10a3c017c(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_68;
  
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x188);
  plVar3 = (long *)(param_1 + 0x1d0);
  func_0x00010a3f25e4(plVar3,param_2);
  if (plVar3 == (long *)0x0) {
    __ZNSt3__15mutex6unlockEv(param_1 + 0x188);
    goto LAB_10a3c0410;
  }
  puVar1 = (undefined8 *)plVar3[7];
  for (puVar14 = (undefined8 *)plVar3[6]; puVar14 != puVar1; puVar14 = puVar14 + 2) {
    lVar4 = param_1 + 0x1f8;
    func_0x00010a3f2544(lVar4,*puVar14,puVar14[1]);
    if (lVar4 != 0) {
      plVar10 = *(long **)(lVar4 + 0x20);
      plVar5 = *(long **)(lVar4 + 0x28);
      plVar13 = plVar10;
      if (plVar10 == plVar5) {
LAB_10a3c024c:
        if (plVar5 < plVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3c0444);
          (*pcVar2)();
        }
        if (plVar13 != plVar5) {
          *(long **)(lVar4 + 0x28) = plVar13;
          plVar5 = plVar13;
        }
      }
      else {
        do {
          if (*plVar13 == param_2) {
            plVar7 = plVar13;
            if (plVar13 != plVar5) {
              while (plVar7 = plVar7 + 1, plVar7 != plVar5) {
                if (*plVar7 != param_2) {
                  *plVar13 = *plVar7;
                  plVar13 = plVar13 + 1;
                }
              }
            }
            goto LAB_10a3c024c;
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar5);
      }
      if (plVar10 == plVar5) {
        func_0x00010a3f2680(param_1 + 0x1f8,lVar4);
      }
    }
  }
  lStack_90 = plVar3[5];
  lStack_98 = plVar3[4];
  lStack_a0 = plVar3[3];
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[3] = 0;
  lVar4 = *plVar3;
  uVar6 = plVar3[1];
  lStack_78 = plVar3[8];
  lStack_80 = plVar3[7];
  lVar15 = plVar3[6];
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[6] = 0;
  uVar8 = *(ulong *)(param_1 + 0x1d8);
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar6 = uVar9 & uVar6;
  }
  else if (uVar8 <= uVar6) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar6 / uVar8;
    }
    uVar6 = uVar6 - uVar11 * uVar8;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x1d0) + uVar6 * 8);
  do {
    plVar10 = plVar13;
    plVar13 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar3);
  if (plVar10 == (long *)(param_1 + 0x1e0)) {
LAB_10a3c0358:
    if (lVar4 == 0) {
LAB_10a3c038c:
      *(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar6 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a3c0394;
    }
    uVar11 = *(ulong *)(lVar4 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar6) goto LAB_10a3c038c;
LAB_10a3c039c:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar6) {
      *(long **)(*(long *)(param_1 + 0x1d0) + uVar11 * 8) = plVar10;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar6) goto LAB_10a3c0358;
LAB_10a3c0394:
    if (lVar4 != 0) {
      uVar11 = *(ulong *)(lVar4 + 8);
      goto LAB_10a3c039c;
    }
  }
  *plVar10 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + -1;
  lStack_88 = lVar15;
  func_0x00010a3f2464(plVar3 + 2);
  __ZdlPv(plVar3);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x188);
  if (lVar15 != 0) {
    lStack_80 = lVar15;
    __ZdlPv();
  }
LAB_10a3c0410:
  plStack_68 = &lStack_a0;
  FUN_10a34cfd0(&plStack_68);
  return;
}



/* Entry: 10a3c0448; end: 10a3c0583;  */

long FUN_10a3c0448(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x208);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[4] != 0) {
      plVar1[5] = plVar1[4];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x1e0);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a3f2464(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x188);
  FUN_10a3e99ec(param_1 + 0x170);
  func_0x00010a3e9a60(param_1 + 0x158);
  func_0x00010a3f2428(*(undefined8 *)(param_1 + 0x140));
  lVar2 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xf0);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  plVar1 = (long *)*(long *)(param_1 + 0x58);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a34c8fc(plVar1 + 4);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3c0584; end: 10a3c0587;  */

long FUN_10a3c0584(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x208);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[4] != 0) {
      plVar1[5] = plVar1[4];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x1e0);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a3f2464(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x188);
  FUN_10a3e99ec(param_1 + 0x170);
  func_0x00010a3e9a60(param_1 + 0x158);
  func_0x00010a3f2428(*(undefined8 *)(param_1 + 0x140));
  lVar2 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xf0);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  plVar1 = (long *)*(long *)(param_1 + 0x58);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a34c8fc(plVar1 + 4);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3c0588; end: 10a3c059b;  */

void FUN_10a3c0588(void)

{
  FUN_10a3c0448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3c059c; end: 10a3c0653;  */

void FUN_10a3c059c(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x170) != *(long *)(param_1 + 0x178)) {
    uVar2 = param_1;
    FUN_10a1c5b90();
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1 + 0xf0;
      __ZNSt3__15mutex4lockEv(lVar4);
    }
    else {
      lVar4 = 0;
    }
    plVar1 = *(long **)(param_1 + 0x170);
    plVar5 = *(long **)(param_1 + 0x178);
    uStack_48 = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    plStack_58 = plVar1;
    if ((uVar2 & 1) == 0) {
      __ZNSt3__15mutex6unlockEv(lVar4);
    }
    while (plVar5 != plVar1) {
      plVar5 = plVar5 + -1;
      plVar3 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    plStack_50 = plVar1;
    FUN_10a3e99ec(&plStack_58);
  }
  return;
}



/* Entry: 10a3c0654; end: 10a3c0d5b;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c0bd0) */

void FUN_10a3c0654(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong unaff_x24;
  long lVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uVar29;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar23 = *param_2;
  if (lVar23 == 0) {
    return;
  }
  FUN_10a0533bc(&lStack_c0,lVar23);
  plVar8 = plStack_b8;
  lVar12 = lStack_c0;
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar11 = (long *)(lVar23 + 0x28);
  FUN_10a3f24a8(&plStack_80);
  plVar9 = plStack_78;
  plVar2 = plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  if (plStack_b8 != (long *)0x0) {
    plVar24 = plStack_b8 + 1;
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = plStack_b8;
    }
  }
  FUN_10a1c5b90();
  if (((ulong)plVar11 & 1) == 0) {
    plVar24 = (long *)(param_1 + 0x70);
    __ZNSt3__15mutex4lockEv(plVar24);
  }
  else {
    plVar24 = (long *)0x0;
  }
  lVar17 = *(long *)(*param_2 + 0x40);
  uVar15 = *(ulong *)(*param_2 + 0x48);
  lStack_a8 = lStack_c0;
  plStack_a0 = plVar8;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar1 = (long *)(param_1 + 0x130);
  plStack_98 = plVar2;
  lStack_90 = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    plVar20 = (long *)((long)plVar9 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar27 = *(ulong *)(param_1 + 0x138);
  lStack_c0 = lVar17;
  plStack_b8 = (long *)uVar15;
  lStack_b0 = lVar23;
  if (uVar27 != 0) {
    uVar18 = uVar27 - 1;
    if ((uVar27 & uVar18) == 0) {
      unaff_x24 = uVar18 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar27 <= uVar15) {
        uVar21 = 0;
        if (uVar27 != 0) {
          uVar21 = uVar15 / uVar27;
        }
        unaff_x24 = uVar15 - uVar21 * uVar27;
      }
    }
    plVar20 = *(long **)(*plVar1 + unaff_x24 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
LAB_10a3c07d8:
      uVar21 = plVar20[1];
      if (uVar21 == uVar15) {
        if (plVar20[2] != lVar17 || plVar20[3] != uVar15) goto LAB_10a3c0820;
        if (plVar9 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        if (plVar8 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
        plVar13 = (long *)plVar20[6];
        if (((plVar13 == (long *)0x0) || (plVar13[1] == -1)) &&
           ((plVar20[8] == 0 || (*(long *)(plVar20[8] + 8) == -1)))) {
          plVar20[4] = lVar23;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar13 = (long *)plVar20[6];
          }
          plVar20[5] = lVar12;
          plVar20[6] = (long)plVar8;
          if (plVar13 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plVar9 != (long *)0x0) {
            plVar1 = (long *)((long)plVar9 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar13 = (long *)plVar20[8];
          plVar20[7] = (long)plVar2;
          plVar20[8] = (long)plVar9;
          if (plVar13 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          goto LAB_10a3c096c;
        }
        bVar6 = false;
        goto joined_r0x00010a3c0c7c;
      }
      if ((uVar27 & uVar18) == 0) {
        uVar21 = uVar21 & uVar18;
      }
      else if (uVar27 <= uVar21) {
        uVar7 = 0;
        if (uVar27 != 0) {
          uVar7 = uVar21 / uVar27;
        }
        uVar21 = uVar21 - uVar7 * uVar27;
      }
      if (uVar21 == unaff_x24) goto LAB_10a3c0820;
    }
  }
LAB_10a3c0828:
  plVar20 = (long *)0x48;
  __Znwm();
  uStack_70 = 1;
  *plVar20 = 0;
  plVar20[1] = uVar15;
  plVar20[3] = (long)plStack_b8;
  plVar20[2] = lStack_c0;
  plVar20[4] = lVar23;
  plVar20[5] = lVar12;
  lStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  plVar20[6] = (long)plVar8;
  plVar20[7] = (long)plVar2;
  plVar20[8] = (long)plVar9;
  plStack_98 = (long *)0x0;
  lStack_90 = 0;
  fVar28 = (float)(*(long *)(param_1 + 0x148) + 1);
  plStack_80 = plVar20;
  plStack_78 = plVar1;
  if ((uVar27 == 0) || (plVar13 = plVar20, *(float *)(param_1 + 0x150) * (float)uVar27 < fVar28)) {
    uVar18 = 1;
    if (2 < uVar27) {
      uVar18 = (ulong)((uVar27 & uVar27 - 1) != 0);
    }
    uVar18 = uVar18 | uVar27 << 1;
    uVar27 = (ulong)(fVar28 / *(float *)(param_1 + 0x150));
    if (uVar18 <= uVar27) {
      uVar18 = uVar27;
    }
    plVar13 = plVar1;
    FUN_10a3e9b3c(plVar1,uVar18);
    uVar27 = *(ulong *)(param_1 + 0x138);
    if ((uVar27 & uVar27 - 1) == 0) {
      unaff_x24 = uVar27 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar27 <= uVar15) {
        uVar18 = 0;
        if (uVar27 != 0) {
          uVar18 = uVar15 / uVar27;
        }
        unaff_x24 = uVar15 - uVar18 * uVar27;
      }
    }
  }
  lVar17 = *plVar1;
  plVar14 = *(long **)(lVar17 + unaff_x24 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar20 = *(long *)(param_1 + 0x140);
    *(long **)(param_1 + 0x140) = plVar20;
    *(long *)(lVar17 + unaff_x24 * 8) = param_1 + 0x140;
    if (*plVar20 != 0) {
      uVar15 = *(ulong *)(*plVar20 + 8);
      if ((uVar27 & uVar27 - 1) == 0) {
        uVar15 = uVar15 & uVar27 - 1;
      }
      else if (uVar27 <= uVar15) {
        uVar18 = 0;
        if (uVar27 != 0) {
          uVar18 = uVar15 / uVar27;
        }
        uVar15 = uVar15 - uVar18 * uVar27;
      }
      plVar14 = (long *)(*plVar1 + uVar15 * 8);
      goto LAB_10a3c095c;
    }
  }
  else {
    *plVar20 = *plVar14;
LAB_10a3c095c:
    *plVar14 = (long)plVar20;
  }
  *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
LAB_10a3c096c:
  bVar6 = true;
joined_r0x00010a3c0c7c:
  if (((ulong)plVar11 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv();
    plVar13 = plVar24;
  }
  if (bVar6) {
    FUN_10a1c5b90();
    if (((ulong)plVar13 & 1) == 0) {
      lVar17 = param_1 + 0xb0;
      __ZNSt3__15mutex4lockEv(lVar17);
    }
    else {
      lVar17 = 0;
    }
    plVar11 = *(long **)(param_1 + 0x160);
    if (plVar11 < *(long **)(param_1 + 0x168)) {
      *plVar11 = lVar23;
      plVar11[1] = lVar12;
      plVar11[2] = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        plVar24 = plVar8 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = *plVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar11[3] = (long)plVar2;
      plVar11[4] = (long)plVar9;
      if (plVar9 != (long *)0x0) {
        plVar2 = (long *)((long)plVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar11 = plVar11 + 5;
    }
    else {
      lVar26 = (long)plVar11 - *(long *)(param_1 + 0x158);
      uVar15 = (lVar26 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar15) {
        FUN_10a3e9d90();
LAB_10a3c0cf4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10a3c0cf8);
        (*pcVar10)();
      }
      lVar22 = (long)*(long **)(param_1 + 0x168) - *(long *)(param_1 + 0x158) >> 3;
      uVar27 = lVar22 * -0x6666666666666666;
      if (uVar27 < uVar15 || uVar27 - uVar15 == 0) {
        uVar27 = uVar15;
      }
      if (0x333333333333332 < (ulong)(lVar22 * -0x3333333333333333)) {
        uVar27 = 0x666666666666666;
      }
      if (uVar27 == 0) {
        lVar22 = 0;
      }
      else {
        if (0x666666666666666 < uVar27) {
          func_0x000109ffded8();
          goto LAB_10a3c0cf4;
        }
        lVar22 = uVar27 * 0x28;
        __Znwm();
      }
      plVar24 = (long *)(lVar22 + lVar26);
      *plVar24 = lVar23;
      plVar24[1] = lVar12;
      plVar24[2] = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        plVar11 = plVar8 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar24[3] = (long)plVar2;
      plVar24[4] = (long)plVar9;
      if (plVar9 != (long *)0x0) {
        plVar11 = (long *)((long)plVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar11 = plVar24 + 5;
      puVar25 = *(undefined8 **)(param_1 + 0x158);
      puVar4 = *(undefined8 **)(param_1 + 0x160);
      puVar3 = (undefined8 *)((long)plVar24 + ((long)puVar25 - (long)puVar4));
      puVar16 = puVar25;
      puVar19 = puVar3;
      if (puVar4 != puVar25) {
        do {
          uVar29 = *puVar16;
          puVar19[1] = puVar16[1];
          *puVar19 = uVar29;
          puVar19[2] = puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          uVar29 = puVar16[3];
          puVar19[4] = puVar16[4];
          puVar19[3] = uVar29;
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16 = puVar16 + 5;
          puVar19 = puVar19 + 5;
        } while (puVar16 != puVar4);
        do {
          FUN_10a3e9ac8(puVar25);
          puVar25 = puVar25 + 5;
        } while (puVar25 != puVar4);
        puVar25 = *(undefined8 **)(param_1 + 0x158);
      }
      *(undefined8 **)(param_1 + 0x158) = puVar3;
      *(long **)(param_1 + 0x160) = plVar11;
      *(ulong *)(param_1 + 0x168) = lVar22 + uVar27 * 0x28;
      if (puVar25 != (undefined8 *)0x0) {
        __ZdlPv(puVar25);
      }
    }
    *(long **)(param_1 + 0x160) = plVar11;
    if (((ulong)plVar13 & 1) == 0) {
      __ZNSt3__15mutex6unlockEv(lVar17);
    }
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x188);
  lVar12 = *(long *)(*param_2 + 0x40);
  uVar15 = *(ulong *)(*param_2 + 0x48);
  lVar23 = param_1 + 0x1f8;
  FUN_10a3f2544(lVar23,lVar12,uVar15);
  if (lVar23 != 0) {
    puVar25 = *(undefined8 **)(lVar23 + 0x28);
    lStack_c0 = lVar12;
    plStack_b8 = (long *)uVar15;
    for (puVar16 = *(undefined8 **)(lVar23 + 0x20); puVar16 != puVar25; puVar16 = puVar16 + 1) {
      lVar12 = param_1 + 0x1d0;
      func_0x00010a3f25e4(lVar12,*puVar16);
      if (lVar12 != 0) {
        FUN_10a3c0d5c(lVar12 + 0x18,param_2);
        uVar15 = *(ulong *)(lVar12 + 0x30);
        FUN_10a3c0e74(uVar15,*(undefined8 *)(lVar12 + 0x38),&lStack_c0);
        if (*(ulong *)(lVar12 + 0x38) < uVar15) goto LAB_10a3c0cf4;
        if (uVar15 != *(ulong *)(lVar12 + 0x38)) {
          *(ulong *)(lVar12 + 0x38) = uVar15;
        }
      }
    }
    func_0x00010a3f2680(param_1 + 0x1f8,lVar23);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x188);
  if (plVar9 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
LAB_10a3c0820:
  plVar20 = (long *)*plVar20;
  if (plVar20 == (long *)0x0) goto LAB_10a3c0828;
  goto LAB_10a3c07d8;
}



/* Entry: 10a3c0d5c; end: 10a3c0e73;  */

long * FUN_10a3c0d5c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    lVar7 = param_2[1];
    lVar10 = *param_2;
    plVar6[1] = param_2[1];
    *plVar6 = lVar10;
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = plVar6 + 2;
    plVar5 = param_1;
  }
  else {
    lVar7 = (long)plVar6 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      func_0x00010a3e9da4();
      plVar6 = param_2;
      if (param_1 != param_2) {
        do {
          if ((*param_1 == *param_3) && (plVar6 = param_1, param_1[1] == param_3[1])) break;
          param_1 = param_1 + 2;
          plVar6 = param_2;
        } while (param_1 != param_2);
        plVar5 = plVar6;
        if (param_2 != plVar6) {
          while (plVar4 = plVar5, plVar5 = plVar4 + 2, plVar5 != param_2) {
            if ((*plVar5 != *param_3) || (plVar4[3] != param_3[1])) {
              lVar7 = *plVar5;
              plVar6[1] = plVar4[3];
              *plVar6 = lVar7;
              plVar6 = plVar6 + 2;
            }
          }
        }
      }
      return plVar6;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a3e9db8();
    plVar5 = (long *)((long)plVar4 + lVar7);
    lVar7 = param_2[1];
    lVar10 = *param_2;
    plVar5[1] = param_2[1];
    *plVar5 = lVar10;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = plVar5 + 2;
    lVar7 = (long)plVar5 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar6;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar9 * 2);
    plVar5 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a3e9dec(plVar5);
  }
  param_1[1] = (long)plVar6;
  return plVar5;
}



/* Entry: 10a3c0e74; end: 10a3c0efb;  */

long * FUN_10a3c0e74(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_2;
  if (param_1 != param_2) {
    do {
      if ((*param_1 == *param_3) && (plVar2 = param_1, param_1[1] == param_3[1])) break;
      param_1 = param_1 + 2;
      plVar2 = param_2;
    } while (param_1 != param_2);
    plVar3 = plVar2;
    if (param_2 != plVar2) {
      while (plVar1 = plVar3, plVar3 = plVar1 + 2, plVar3 != param_2) {
        if ((*plVar3 != *param_3) || (plVar1[3] != param_3[1])) {
          lVar4 = *plVar3;
          plVar2[1] = plVar1[3];
          *plVar2 = lVar4;
          plVar2 = plVar2 + 2;
        }
      }
    }
  }
  return plVar2;
}



/* Entry: 10a3c0efc; end: 10a3c0f33;  */

long FUN_10a3c0efc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a3c0f34; end: 10a3c10cb;  */

void FUN_10a3c0f34(ulong param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  if (*param_2 != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340df18;
    (*(code *)PTR___tlv_bootstrap_11340df18)();
    if (*(char *)ppuVar5 != '\x01') {
      if (*(long *)(param_1 + 0x170) != *(long *)(param_1 + 0x178)) {
        uVar3 = param_1;
        FUN_10a1c5b90();
        if ((uVar3 & 1) == 0) {
          lVar11 = param_1 + 0xf0;
          __ZNSt3__15mutex4lockEv(lVar11);
        }
        else {
          lVar11 = 0;
        }
        plVar1 = *(long **)(param_1 + 0x170);
        plVar12 = *(long **)(param_1 + 0x178);
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
        if ((uVar3 & 1) == 0) {
          __ZNSt3__15mutex6unlockEv(lVar11);
        }
        while (plVar12 != plVar1) {
          plVar12 = plVar12 + -1;
          plVar4 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        FUN_10a3e99ec(&stack0xffffffffffffffa8);
      }
      return;
    }
    FUN_10a1c5b90();
    if (((ulong)ppuVar5 & 1) == 0) {
      lVar11 = param_1 + 0xf0;
      __ZNSt3__15mutex4lockEv(lVar11);
    }
    else {
      lVar11 = 0;
    }
    plVar1 = *(long **)(param_1 + 0x178);
    if (plVar1 < *(long **)(param_1 + 0x180)) {
      lVar7 = *param_2;
      *param_2 = 0;
      plVar12 = plVar1 + 1;
      *plVar1 = lVar7;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x170);
      lVar13 = (long)plVar1 - lVar7;
      uVar3 = (lVar13 >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
        FUN_10a3e9e38();
LAB_10a3c10ac:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3c10b0);
        (*pcVar2)();
      }
      uVar8 = (long)*(long **)(param_1 + 0x180) - lVar7;
      uVar10 = (long)uVar8 >> 2;
      if (uVar10 <= uVar3) {
        uVar10 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a3c10ac;
      }
      lVar6 = uVar10 << 3;
      __Znwm();
      plVar1 = (long *)(lVar6 + lVar13);
      lVar9 = *param_2;
      *param_2 = 0;
      plVar12 = plVar1 + 1;
      *plVar1 = lVar9;
      _memcpy(plVar1 + -(lVar13 >> 3),lVar7,lVar13);
      *(long **)(param_1 + 0x170) = plVar1 + -(lVar13 >> 3);
      *(long **)(param_1 + 0x178) = plVar12;
      *(ulong *)(param_1 + 0x180) = lVar6 + uVar10 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
    *(long **)(param_1 + 0x178) = plVar12;
    if (((ulong)ppuVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10a3c10cc; end: 10a3c113b;  */

void FUN_10a3c10cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&uStack_40;
  param_1 = param_1 + 0x48;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10a3f27c0(param_1,&uStack_40,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  if (param_1 + 0x20 != param_4) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x20);
    FUN_10a35ad6c(param_1 + 0x20,*(undefined8 *)(param_4 + 0x10),0);
  }
  return;
}



/* Entry: 10a3c113c; end: 10a3c1f1f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a3c113c(long param_1,long *param_2)

{
  long *plVar1;
  long *******ppppppplVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int extraout_w8;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long *plVar23;
  bool bVar24;
  undefined **ppuVar25;
  undefined **unaff_x28;
  float fVar26;
  long *******ppppppplStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined1 uStack_188;
  long *******ppppppplStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 uStack_168;
  long *******ppppppplStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long *******ppppppplStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long *******ppppppplStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [8];
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x100);
  FUN_10a296138(auStack_b0,lVar8,&UNK_10f653541,0x11);
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x208))();
  FUN_10a3e9b3c(param_1 + 0x130,
                (long)((float)((ulong)plVar13 & 0xffffffff) / *(float *)(param_1 + 0x150)));
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_c0 = 0x3f800000;
  if ((int)plVar13 != 0) {
    plVar1 = (long *)(param_1 + 0x30);
    ppuVar9 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar10 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    iVar7 = 0;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar7);
      plStack_f0 = (long *)0xffffffffffffffff;
      ppuStack_e8 = (undefined **)0xffffffffffffffff;
      plVar19 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd3000);
      if ((int)plVar19 != 0) {
        plVar19 = param_2;
        ppuVar15 = &PTR_DAT_110bd3000;
        (**(code **)(*param_2 + 0x10))();
        ppuVar25 = *(undefined ***)(param_1 + 0x28);
        plStack_f0 = plVar19;
        ppuStack_e8 = ppuVar15;
        if (ppuVar25 != (undefined **)0x0) {
          uVar14 = (long)ppuVar25 - 1;
          if (((ulong)ppuVar25 & uVar14) == 0) {
            unaff_x28 = (undefined **)(uVar14 & (ulong)ppuVar15);
          }
          else {
            unaff_x28 = ppuVar15;
            if (ppuVar25 <= ppuVar15) {
              uVar4 = 0;
              if (ppuVar25 != (undefined **)0x0) {
                uVar4 = (ulong)ppuVar15 / (ulong)ppuVar25;
              }
              unaff_x28 = (undefined **)((long)ppuVar15 - uVar4 * (long)ppuVar25);
            }
          }
          puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)unaff_x28 * 8);
          if (puVar16 != (undefined8 *)0x0) {
            for (plVar23 = (long *)*puVar16; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
              ppuVar17 = (undefined **)plVar23[1];
              if (ppuVar17 == ppuVar15) {
                if ((long *)plVar23[2] == plVar19 && (undefined **)plVar23[3] == ppuVar15)
                goto LAB_10a3c1584;
              }
              else {
                if (((ulong)ppuVar25 & uVar14) == 0) {
                  ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar14);
                }
                else if (ppuVar25 <= ppuVar17) {
                  uVar4 = 0;
                  if (ppuVar25 != (undefined **)0x0) {
                    uVar4 = (ulong)ppuVar17 / (ulong)ppuVar25;
                  }
                  ppuVar17 = (undefined **)((long)ppuVar17 - uVar4 * (long)ppuVar25);
                }
                if (ppuVar17 != unaff_x28) break;
              }
            }
          }
        }
        plVar23 = (long *)0x28;
        __Znwm();
        *plVar23 = 0;
        plVar23[1] = (long)ppuVar15;
        plVar23[3] = (long)ppuStack_e8;
        plVar23[2] = (long)plStack_f0;
        *(undefined4 *)(plVar23 + 4) = 0;
        fVar26 = (float)(*(long *)(param_1 + 0x38) + 1);
        if ((ppuVar25 == (undefined **)0x0) ||
           (*(float *)(param_1 + 0x40) * (float)ppuVar25 < fVar26)) {
          uVar14 = 1;
          if ((undefined **)0x2 < ppuVar25) {
            uVar14 = (ulong)(((ulong)ppuVar25 & (long)ppuVar25 - 1U) != 0);
          }
          ppuVar17 = (undefined **)(uVar14 | (long)ppuVar25 << 1);
          ppuVar18 = (undefined **)(long)(fVar26 / *(float *)(param_1 + 0x40));
          if (ppuVar17 <= ppuVar18) {
            ppuVar17 = ppuVar18;
          }
          if ((long)ppuVar17 - 1U == 0) {
            ppuVar17 = (undefined **)0x2;
          }
          else if (((ulong)ppuVar17 & (long)ppuVar17 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            ppuVar25 = *(undefined ***)(param_1 + 0x28);
          }
          if (ppuVar25 < ppuVar17) {
LAB_10a3c1394:
            ppuVar25 = ppuVar17;
            if ((ulong)ppuVar25 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a3c1d2c;
            }
            lVar11 = (long)ppuVar25 << 3;
            __Znwm();
            lVar12 = *(long *)(param_1 + 0x20);
            *(long *)(param_1 + 0x20) = lVar11;
            if (lVar12 != 0) {
              __ZdlPv();
            }
            ppuVar17 = (undefined **)0x0;
            *(undefined ***)(param_1 + 0x28) = ppuVar25;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)ppuVar17 * 8) = 0;
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar25 != ppuVar17);
            plVar19 = (long *)*plVar1;
            if (plVar19 != (long *)0x0) {
              ppuVar17 = (undefined **)plVar19[1];
              uVar14 = (long)ppuVar25 - 1;
              if (((ulong)ppuVar25 & uVar14) == 0) {
                ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar14);
              }
              else if (ppuVar25 <= ppuVar17) {
                uVar4 = 0;
                if (ppuVar25 != (undefined **)0x0) {
                  uVar4 = (ulong)ppuVar17 / (ulong)ppuVar25;
                }
                ppuVar17 = (undefined **)((long)ppuVar17 - uVar4 * (long)ppuVar25);
              }
              *(long **)(*(long *)(param_1 + 0x20) + (long)ppuVar17 * 8) = plVar1;
              plVar20 = (long *)*plVar19;
              while (plVar20 != (long *)0x0) {
                ppuVar18 = (undefined **)plVar20[1];
                if (((ulong)ppuVar25 & uVar14) == 0) {
                  ppuVar18 = (undefined **)((ulong)ppuVar18 & uVar14);
                }
                else if (ppuVar25 <= ppuVar18) {
                  uVar4 = 0;
                  if (ppuVar25 != (undefined **)0x0) {
                    uVar4 = (ulong)ppuVar18 / (ulong)ppuVar25;
                  }
                  ppuVar18 = (undefined **)((long)ppuVar18 - uVar4 * (long)ppuVar25);
                }
                plVar21 = plVar20;
                if (ppuVar18 != ppuVar17) {
                  lVar11 = *(long *)(param_1 + 0x20);
                  if (*(long *)(lVar11 + (long)ppuVar18 * 8) == 0) {
                    *(long **)(lVar11 + (long)ppuVar18 * 8) = plVar19;
                    ppuVar17 = ppuVar18;
                  }
                  else {
                    *plVar19 = *plVar20;
                    *plVar20 = **(undefined8 **)(lVar11 + (long)ppuVar18 * 8);
                    **(long **)(lVar11 + (long)ppuVar18 * 8) = (long)plVar20;
                    plVar21 = plVar19;
                  }
                }
                plVar19 = plVar21;
                plVar20 = (long *)*plVar21;
              }
            }
          }
          else if (ppuVar17 < ppuVar25) {
            ppuVar18 = (undefined **)
                       (long)((float)*(ulong *)(param_1 + 0x38) / *(float *)(param_1 + 0x40));
            if ((ppuVar25 < (undefined **)0x3) || (((ulong)ppuVar25 & (long)ppuVar25 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined **)0x1 < ppuVar18) {
              ppuVar18 = (undefined **)(1L << (-LZCOUNT((long)ppuVar18 + -1) & 0x3fU));
            }
            if (ppuVar17 <= ppuVar18) {
              ppuVar17 = ppuVar18;
            }
            if (ppuVar17 < ppuVar25) {
              if (ppuVar17 != (undefined **)0x0) goto LAB_10a3c1394;
              lVar11 = *(long *)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 0x20) = 0;
              if (lVar11 != 0) {
                __ZdlPv();
              }
              ppuVar25 = (undefined **)0x0;
              *(undefined8 *)(param_1 + 0x28) = 0;
            }
            else {
              ppuVar25 = *(undefined ***)(param_1 + 0x28);
            }
          }
          if (((ulong)ppuVar25 & (long)ppuVar25 - 1U) == 0) {
            unaff_x28 = (undefined **)((long)ppuVar25 - 1U & (ulong)ppuVar15);
          }
          else {
            unaff_x28 = ppuVar15;
            if (ppuVar25 <= ppuVar15) {
              uVar14 = 0;
              if (ppuVar25 != (undefined **)0x0) {
                uVar14 = (ulong)ppuVar15 / (ulong)ppuVar25;
              }
              unaff_x28 = (undefined **)((long)ppuVar15 - uVar14 * (long)ppuVar25);
            }
          }
        }
        lVar11 = *(long *)(param_1 + 0x20);
        plVar19 = *(long **)(lVar11 + (long)unaff_x28 * 8);
        if (plVar19 == (long *)0x0) {
          *plVar23 = *plVar1;
          *plVar1 = (long)plVar23;
          *(long **)(lVar11 + (long)unaff_x28 * 8) = plVar1;
          if (*plVar23 != 0) {
            ppuVar15 = *(undefined ***)(*plVar23 + 8);
            if (((ulong)ppuVar25 & (long)ppuVar25 - 1U) == 0) {
              ppuVar15 = (undefined **)((ulong)ppuVar15 & (long)ppuVar25 - 1U);
            }
            else if (ppuVar25 <= ppuVar15) {
              uVar14 = 0;
              if (ppuVar25 != (undefined **)0x0) {
                uVar14 = (ulong)ppuVar15 / (ulong)ppuVar25;
              }
              ppuVar15 = (undefined **)((long)ppuVar15 - uVar14 * (long)ppuVar25);
            }
            plVar19 = (long *)(*(long *)(param_1 + 0x20) + (long)ppuVar15 * 8);
            goto LAB_10a3c1574;
          }
        }
        else {
          *plVar23 = *plVar19;
LAB_10a3c1574:
          *plVar19 = (long)plVar23;
        }
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
LAB_10a3c1584:
        *(int *)(plVar23 + 4) = iVar7;
      }
      ppppppplStack_110 = (long *******)0x0;
      uStack_108 = 0;
      uStack_100 = 0;
      if ((plStack_f0 == (long *)0xffffffffffffffff &&
           ppuStack_e8 == (undefined **)0xffffffffffffffff) ||
         (plVar19 = param_2, (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd11d8),
         (int)plVar19 == 0)) {
        uVar22 = 0;
LAB_10a3c166c:
        bVar24 = false;
      }
      else {
        (**(code **)(*param_2 + 0xa0))(&ppppppplStack_180,param_2,&PTR_DAT_110bd11d8);
        uStack_100 = uStack_170;
        uStack_108 = uStack_178;
        ppppppplStack_110 = ppppppplStack_180;
        uVar22 = (uint)(char)(uStack_170 >> 0x38);
        uVar14 = uStack_178;
        if (-1 < (int)uVar22) {
          uVar14 = uStack_170 >> 0x38;
        }
        if (uVar14 == 0x12) {
          ppppppplVar2 = ppppppplStack_180;
          if (-1 < (int)uVar22) {
            ppppppplVar2 = (long *******)&ppppppplStack_110;
          }
          if ((*ppppppplVar2 == (long ******)0x624f2e7465737341 &&
              ppppppplVar2[1] == (long ******)0x666572507463656a) &&
              *(short *)(ppppppplVar2 + 2) == 0x6261) {
            FUN_10a357b94(&uStack_e0,&plStack_f0,&plStack_f0);
          }
          goto LAB_10a3c166c;
        }
        bVar24 = false;
        if ((uVar14 == 0xd) &&
           (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa20) + 0x18) < 0xf2)) {
          ppppppplVar2 = ppppppplStack_180;
          if (-1 < (int)uVar22) {
            ppppppplVar2 = (long *******)&ppppppplStack_110;
          }
          if ((*ppppppplVar2 != (long ******)0x65542e7465737341 ||
               *(long *)((long)ppppppplVar2 + 5) != 0x657275747865542e) ||
             (plVar19 = param_2, (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_provider_110bcfd00),
             (int)plVar19 == 0)) goto LAB_10a3c166c;
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110bcfd00);
          plVar19 = param_2;
          (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd11d8);
          if ((int)plVar19 == 0) {
            bVar24 = false;
          }
          else {
            (**(code **)(*param_2 + 0xa0))(&ppppppplStack_180,param_2,&PTR_DAT_110bd11d8);
            uVar14 = uStack_178;
            if (-1 < (long)uStack_170) {
              uVar14 = uStack_170 >> 0x38;
            }
            if (uVar14 == 0x1d) {
              ppppppplVar2 = ppppppplStack_180;
              if (-1 < (long)uStack_170) {
                ppppppplVar2 = (long *******)&ppppppplStack_180;
              }
              bVar24 = ((*ppppppplVar2 == (long ******)0x72656469766f7250 &&
                        ppppppplVar2[1] == (long ******)0x547265646e65522e) &&
                       ppppppplVar2[2] == (long ******)0x6f72507465677261) &&
                       *(long *)((long)ppppppplVar2 + 0x15) == 0x72656469766f7250;
            }
            else {
              bVar24 = false;
            }
            if ((long)uStack_170 < 0) {
              __ZdlPv(ppppppplStack_180);
            }
          }
          (**(code **)(*param_2 + 0x220))(param_2);
        }
      }
      iVar6 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_10a3c1f20();
      if ((iVar6 == 0) || (bVar24)) {
LAB_10a3c16ac:
        plVar19 = param_2;
        FUN_10a34acb0(auStack_120,param_2,0);
        iVar6 = (int)plVar19;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar9 == (undefined *)0x0) {
            plVar19 = (long *)*ppuVar10;
            if ((plVar19 == (long *)0x0) ||
               ((**(code **)(*plVar19 + 0x18))(), plVar19 == (long *)0x0)) goto LAB_10a3c16e4;
            plVar19 = plVar19 + 7;
          }
          else {
            plVar19 = (long *)(*ppuVar9 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppppplStack_140,&UNK_10f653553);
            if (*(char *)(lVar8 + 0x21f) < '\0') {
              func_0x000107c3192c(&ppppppplStack_160,*(undefined8 *)(lVar8 + 0x208),
                                  *(undefined8 *)(lVar8 + 0x210));
            }
            else {
              uStack_158 = *(ulong *)(lVar8 + 0x210);
              ppppppplStack_160 = *(long ********)(lVar8 + 0x208);
              uStack_150 = *(ulong *)(lVar8 + 0x218);
            }
            if ((long)uStack_130 < 0) {
              ppppppplStack_180 = (long *******)"null";
              if (uStack_138 != 0) {
                ppppppplStack_180 = ppppppplStack_140;
              }
            }
            else {
              ppppppplStack_180 = (long *******)"null";
              if (uStack_130._7_1_ != '\0') {
                ppppppplStack_180 = (long *******)&ppppppplStack_140;
              }
            }
            if ((long)uStack_150 < 0) {
              ppppppplStack_1a0 = (long *******)"null";
              if (uStack_158 != 0) {
                ppppppplStack_1a0 = ppppppplStack_160;
              }
            }
            else {
              ppppppplStack_1a0 = (long *******)"null";
              if (uStack_150._7_1_ != '\0') {
                ppppppplStack_1a0 = (long *******)&ppppppplStack_160;
              }
            }
            FUN_10a224324(&ppppppplStack_180,&ppppppplStack_1a0);
            if ((long)uStack_130 < 0) {
              if (uStack_138 != 0) {
                func_0x000107c3192c(&ppppppplStack_180,ppppppplStack_140);
                goto LAB_10a3c1c60;
              }
LAB_10a3c1bb4:
              uStack_168 = 0;
              ppppppplStack_180 = (long *******)((ulong)ppppppplStack_180 & 0xffffffffffffff00);
            }
            else {
              if (uStack_130._7_1_ == '\0') goto LAB_10a3c1bb4;
              uStack_178 = uStack_138;
              ppppppplStack_180 = ppppppplStack_140;
              uStack_170 = uStack_130;
LAB_10a3c1c60:
              uStack_168 = 1;
            }
            if ((long)uStack_150 < 0) {
              if (uStack_158 != 0) {
                func_0x000107c3192c(&ppppppplStack_1a0,ppppppplStack_160);
                goto LAB_10a3c1ca8;
              }
LAB_10a3c1c8c:
              uStack_188 = 0;
              ppppppplStack_1a0 = (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
            }
            else {
              if (uStack_150._7_1_ == '\0') goto LAB_10a3c1c8c;
              uStack_198 = uStack_158;
              ppppppplStack_1a0 = ppppppplStack_160;
              uStack_190 = uStack_150;
LAB_10a3c1ca8:
              uStack_188 = 1;
            }
            FUN_10a234a0c(&ppppppplStack_180,&ppppppplStack_1a0);
            goto LAB_10a3c1d2c;
          }
        }
LAB_10a3c16e4:
        plVar19 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar23 = plStack_118 + 1;
          do {
            lVar11 = *plVar23;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar24) {
              *plVar23 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        uVar22 = (uint)uStack_100._7_1_;
      }
      else {
        plVar19 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bcfd20,0);
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | (byte)plVar19;
        if (((ulong)plVar19 & 1) == 0) goto LAB_10a3c16ac;
      }
      if ((uVar22 >> 7 & 1) != 0) {
        __ZdlPv(ppppppplStack_110);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar7 = iVar7 + 1;
      plVar19 = plStack_d0;
    } while (iVar7 != (int)plVar13);
    for (; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      ppppppplVar2 = (long *******)(plVar19 + 2);
      lVar11 = param_1 + 0x20;
      FUN_10a3f2bf0(lVar11,ppppppplVar2);
      (**(code **)(*param_2 + 0x218))(param_2,*(undefined4 *)(lVar11 + 0x20));
      lVar11 = param_1 + 0x48;
      ppppppplStack_180 = ppppppplVar2;
      FUN_10a3f27c0(lVar11,ppppppplVar2,&UNK_10dd5b8f9,&ppppppplStack_180,&ppppppplStack_1a0);
      plVar13 = param_2;
      FUN_10a3283ec(param_2,lVar11 + 0x20,0,0);
      iVar7 = (int)plVar13;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        if (*ppuVar9 == (undefined *)0x0) {
          plVar13 = (long *)*ppuVar10;
          if ((plVar13 == (long *)0x0) || ((**(code **)(*plVar13 + 0x18))(), plVar13 == (long *)0x0)
             ) goto LAB_10a3c19b8;
          plVar13 = plVar13 + 7;
        }
        else {
          plVar13 = (long *)(*ppuVar9 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar13 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppppplStack_110,&UNK_10f65356b);
          if (*(char *)(lVar8 + 0x21f) < '\0') {
            func_0x000107c3192c(&ppppppplStack_140,*(undefined8 *)(lVar8 + 0x208),
                                *(undefined8 *)(lVar8 + 0x210));
          }
          else {
            uStack_138 = *(ulong *)(lVar8 + 0x210);
            ppppppplStack_140 = *(long ********)(lVar8 + 0x208);
            uStack_130 = *(ulong *)(lVar8 + 0x218);
          }
          iVar7 = (int)(char)uStack_100._7_1_;
          if (-1 < (long)uStack_100) goto LAB_10a3c1bc4;
          ppppppplStack_180 = (long *******)"null";
          if (uStack_108 != 0) {
            ppppppplStack_180 = ppppppplStack_110;
          }
          goto LAB_10a3c1bd8;
        }
      }
LAB_10a3c19b8:
      (**(code **)(*param_2 + 0x220))(param_2);
    }
  }
  func_0x00010a34c8fc(&uStack_e0);
  FUN_10a044790(auStack_b0);
  (*(code *)*apuStack_a8[0])(apuStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  iVar7 = extraout_w8;
LAB_10a3c1bc4:
  ppppppplStack_180 = (long *******)"null";
  if (iVar7 != 0) {
    ppppppplStack_180 = (long *******)&ppppppplStack_110;
  }
LAB_10a3c1bd8:
  if ((long)uStack_130 < 0) {
    ppppppplStack_1a0 = (long *******)"null";
    if (uStack_138 != 0) {
      ppppppplStack_1a0 = ppppppplStack_140;
    }
  }
  else {
    ppppppplStack_1a0 = (long *******)"null";
    if (uStack_130._7_1_ != '\0') {
      ppppppplStack_1a0 = (long *******)&ppppppplStack_140;
    }
  }
  FUN_10a224324(&ppppppplStack_180,&ppppppplStack_1a0);
  if ((long)uStack_100 < 0) {
    if (uStack_108 != 0) {
      func_0x000107c3192c(&ppppppplStack_180,ppppppplStack_110);
      goto LAB_10a3c1cd0;
    }
LAB_10a3c1c44:
    uStack_168 = 0;
    ppppppplStack_180 = (long *******)((ulong)ppppppplStack_180 & 0xffffffffffffff00);
  }
  else {
    if (uStack_100._7_1_ == '\0') goto LAB_10a3c1c44;
    uStack_178 = uStack_108;
    ppppppplStack_180 = ppppppplStack_110;
    uStack_170 = uStack_100;
LAB_10a3c1cd0:
    uStack_168 = 1;
  }
  if ((long)uStack_130 < 0) {
    if (uStack_138 == 0) {
LAB_10a3c1cfc:
      uStack_188 = 0;
      ppppppplStack_1a0 = (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
      goto LAB_10a3c1d1c;
    }
    func_0x000107c3192c(&ppppppplStack_1a0,ppppppplStack_140);
  }
  else {
    if (uStack_130._7_1_ == '\0') goto LAB_10a3c1cfc;
    uStack_198 = uStack_138;
    ppppppplStack_1a0 = ppppppplStack_140;
    uStack_190 = uStack_130;
  }
  uStack_188 = 1;
LAB_10a3c1d1c:
  FUN_10a234a0c(&ppppppplStack_180,&ppppppplStack_1a0);
LAB_10a3c1d2c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3c1d30);
  (*pcVar5)();
}



/* Entry: 10a3c1f20; end: 10a3c1f6b;  */

bool FUN_10a3c1f20(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x100) + 0x1c8);
  (**(code **)(*plVar2 + 0x160))();
  if (((ulong)plVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x270) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a3c1f6c; end: 10a3c20d3;  */

long * FUN_10a3c1f6c(long param_1,long *param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [47];
  undefined1 uStack_39;
  long *plStack_38;
  
  if (param_2 == (long *)0x0) {
    return (long *)0x0;
  }
  uStack_39 = param_5;
  plStack_38 = param_2;
  FUN_10a3c20d4(auStack_68);
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  plVar4 = *(long **)(param_3 + 0x10);
  if (plVar4 != (long *)0x0) {
    do {
      lVar1 = param_1 + 0x20;
      FUN_10a3f2bf0(lVar1,plVar4 + 2);
      if (lVar1 != 0) {
        puVar2 = auStack_68;
        FUN_10a3f2d0c(puVar2,plVar4 + 2);
        if (puVar2 == (undefined1 *)0x0) {
          FUN_10a357b94(&uStack_90,plVar4 + 2,plVar4 + 2);
        }
      }
      plVar3 = plStack_38;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    if (lStack_78 != 0) {
      (**(code **)(*plStack_38 + 0x210))(plStack_38,&PTR_DAT_110bcfce0);
      FUN_10a3c2648(plVar3,param_1 + 0x20,&uStack_90,param_4);
      (**(code **)(*plStack_38 + 0x220))();
      FUN_10a3f2db4(plStack_38,auStack_68,uStack_39);
      goto LAB_10a3c2068;
    }
  }
  plVar3 = (long *)0x0;
LAB_10a3c2068:
  func_0x00010a34c8fc(&uStack_90);
  FUN_10a3f2c98(auStack_68);
  return plVar3;
}



/* Entry: 10a3c20d4; end: 10a3c2647;  */

void FUN_10a3c20d4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong unaff_x28;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_10a3c3158(&plStack_b0);
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  if (plStack_b0 != plStack_a8) {
    plVar1 = param_1 + 2;
    plVar17 = plStack_b0;
    do {
      FUN_10a3c39a4(&lStack_d8,plVar17 + 2);
      if (lStack_d8 == 0) {
        FUN_10a3c4ee8(&lStack_c8,plVar17);
      }
      else {
        lVar11 = *plVar17;
        uVar8 = plVar17[1];
        FUN_10a2ea178(&lStack_e8);
        plVar10 = plStack_e0;
        lVar6 = lStack_e8;
        lStack_88 = lStack_e8;
        plStack_80 = plStack_e0;
        lStack_e8 = 0;
        plStack_e0 = (long *)0x0;
        uVar16 = param_1[1];
        lStack_98 = lVar11;
        uStack_90 = uVar8;
        if (uVar16 != 0) {
          uVar7 = uVar16 - 1;
          if ((uVar16 & uVar7) == 0) {
            unaff_x28 = uVar7 & uVar8;
          }
          else {
            unaff_x28 = uVar8;
            if (uVar16 <= uVar8) {
              uVar12 = 0;
              if (uVar16 != 0) {
                uVar12 = uVar8 / uVar16;
              }
              unaff_x28 = uVar8 - uVar12 * uVar16;
            }
          }
          plVar9 = *(long **)(*param_1 + unaff_x28 * 8);
          if (plVar9 != (long *)0x0) {
            do {
              while( true ) {
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) goto LAB_10a3c21fc;
                uVar12 = plVar9[1];
                if (uVar12 != uVar8) break;
                if (plVar9[2] == lVar11 && plVar9[3] == uVar8) {
                  if (plVar10 != (long *)0x0) {
                    plVar9 = plVar10 + 1;
                    do {
                      lVar11 = *plVar9;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                      if (bVar3) {
                        *plVar9 = lVar11 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar11 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                    }
                  }
                  goto LAB_10a3c2494;
                }
              }
              if ((uVar16 & uVar7) == 0) {
                uVar12 = uVar12 & uVar7;
              }
              else if (uVar16 <= uVar12) {
                uVar15 = 0;
                if (uVar16 != 0) {
                  uVar15 = uVar12 / uVar16;
                }
                uVar12 = uVar12 - uVar15 * uVar16;
              }
            } while (uVar12 == unaff_x28);
          }
        }
LAB_10a3c21fc:
        plVar9 = (long *)0x30;
        __Znwm();
        uStack_68 = 1;
        *plVar9 = 0;
        plVar9[1] = uVar8;
        plVar9[3] = uStack_90;
        plVar9[2] = lStack_98;
        plVar9[4] = lVar6;
        plVar9[5] = (long)plVar10;
        lStack_88 = 0;
        plStack_80 = (long *)0x0;
        plStack_78 = plVar9;
        plStack_70 = param_1;
        if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
          uVar7 = 1;
          if (2 < uVar16) {
            uVar7 = (ulong)((uVar16 & uVar16 - 1) != 0);
          }
          uVar7 = uVar7 | uVar16 << 1;
          uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar7 <= uVar12) {
            uVar7 = uVar12;
          }
          if (uVar7 - 1 == 0) {
            uVar7 = 2;
          }
          else if ((uVar7 & uVar7 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar16 = param_1[1];
          }
          if (uVar16 < uVar7) {
LAB_10a3c22b0:
            uVar16 = uVar7;
            if (uVar16 >> 0x3d != 0) {
              func_0x000109ffded8();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3c25d4);
              (*pcVar5)();
            }
            lVar11 = uVar16 << 3;
            __Znwm();
            lVar6 = *param_1;
            *param_1 = lVar11;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            uVar7 = 0;
            param_1[1] = uVar16;
            do {
              *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar16 != uVar7);
            plVar10 = (long *)*plVar1;
            if (plVar10 != (long *)0x0) {
              uVar7 = plVar10[1];
              uVar12 = uVar16 - 1;
              if ((uVar16 & uVar12) == 0) {
                uVar7 = uVar7 & uVar12;
              }
              else if (uVar16 <= uVar7) {
                uVar15 = 0;
                if (uVar16 != 0) {
                  uVar15 = uVar7 / uVar16;
                }
                uVar7 = uVar7 - uVar15 * uVar16;
              }
              *(long **)(*param_1 + uVar7 * 8) = plVar1;
              plVar13 = (long *)*plVar10;
              while (plVar13 != (long *)0x0) {
                uVar15 = plVar13[1];
                if ((uVar16 & uVar12) == 0) {
                  uVar15 = uVar15 & uVar12;
                }
                else if (uVar16 <= uVar15) {
                  uVar4 = 0;
                  if (uVar16 != 0) {
                    uVar4 = uVar15 / uVar16;
                  }
                  uVar15 = uVar15 - uVar4 * uVar16;
                }
                plVar14 = plVar13;
                if (uVar15 != uVar7) {
                  lVar11 = *param_1;
                  if (*(long *)(lVar11 + uVar15 * 8) == 0) {
                    *(long **)(lVar11 + uVar15 * 8) = plVar10;
                    uVar7 = uVar15;
                  }
                  else {
                    *plVar10 = *plVar13;
                    *plVar13 = **(undefined8 **)(lVar11 + uVar15 * 8);
                    **(long **)(lVar11 + uVar15 * 8) = (long)plVar13;
                    plVar14 = plVar10;
                  }
                }
                plVar10 = plVar14;
                plVar13 = (long *)*plVar14;
              }
            }
          }
          else if (uVar7 < uVar16) {
            uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar12) {
              uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
            }
            if (uVar7 <= uVar12) {
              uVar7 = uVar12;
            }
            if (uVar7 < uVar16) {
              if (uVar7 != 0) goto LAB_10a3c22b0;
              lVar11 = *param_1;
              *param_1 = 0;
              if (lVar11 != 0) {
                __ZdlPv();
              }
              uVar16 = 0;
              param_1[1] = 0;
            }
            else {
              uVar16 = param_1[1];
            }
          }
          if ((uVar16 & uVar16 - 1) == 0) {
            unaff_x28 = uVar16 - 1 & uVar8;
          }
          else {
            unaff_x28 = uVar8;
            if (uVar16 <= uVar8) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar8 / uVar16;
              }
              unaff_x28 = uVar8 - uVar7 * uVar16;
            }
          }
        }
        lVar11 = *param_1;
        plVar10 = *(long **)(lVar11 + unaff_x28 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar1;
          *plVar1 = (long)plVar9;
          *(long **)(lVar11 + unaff_x28 * 8) = plVar1;
          if (*plVar9 != 0) {
            uVar8 = *(ulong *)(*plVar9 + 8);
            if ((uVar16 & uVar16 - 1) == 0) {
              uVar8 = uVar8 & uVar16 - 1;
            }
            else if (uVar16 <= uVar8) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar8 / uVar16;
              }
              uVar8 = uVar8 - uVar7 * uVar16;
            }
            plVar10 = (long *)(*param_1 + uVar8 * 8);
            goto LAB_10a3c2484;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_10a3c2484:
          *plVar10 = (long)plVar9;
        }
        param_1[3] = param_1[3] + 1;
LAB_10a3c2494:
        plVar10 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar9 = plStack_e0 + 1;
          do {
            lVar11 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      plVar10 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar9 = plStack_d0 + 1;
        do {
          lVar11 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar17 = plVar17 + 7;
    } while (plVar17 != plStack_a8);
  }
  FUN_10a3c3494(param_2,&lStack_c8);
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  FUN_10a3ea4a4(&plStack_b0);
  return;
}



/* Entry: 10a3c2648; end: 10a3c278f;  */

byte FUN_10a3c2648(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  ulong uVar10;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = *(long **)(param_3 + 0x10);
  if (plVar8 == (long *)0x0) {
    bVar9 = 0;
  }
  else {
    uVar10 = 0;
    bVar9 = 0;
    uVar6 = *(ulong *)(param_3 + 0x18);
    do {
      lVar7 = param_2;
      FUN_10a3e9e4c(param_2,plVar8[2],plVar8[3]);
      (**(code **)(*param_1 + 0x218))(param_1,*(undefined4 *)(lVar7 + 0x20));
      FUN_10a34acb0(&lStack_70,param_1,0);
      plVar4 = plStack_68;
      bVar5 = lStack_70 != 0;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (param_4 != (long *)0x0) {
        uVar10 = uVar10 + 1;
        (**(code **)(*param_4 + 0x10))((float)uVar10 / (float)uVar6,param_4);
      }
      bVar9 = bVar5 | bVar9;
      (**(code **)(*param_1 + 0x220))(param_1);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return bVar9;
}



/* Entry: 10a3c2790; end: 10a3c27d7;  */

undefined8 * FUN_10a3c2790(undefined8 *param_1)

{
  (**(code **)(**(long **)*param_1 + 0x220))();
  FUN_10a3f2db4(*(undefined8 *)*param_1,param_1[1],*(undefined1 *)param_1[2]);
  return param_1;
}



/* Entry: 10a3c27d8; end: 10a3c2fa7;  */

void FUN_10a3c27d8(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined ****ppppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_138 [16];
  long *plStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined ***pppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  FUN_10a3c20d4(auStack_138);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x10);
  FUN_10a3c1f20();
  if (iVar6 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f800000;
    ppuStack_98 = (undefined **)0x0;
    ppuStack_a0 = (undefined **)0x0;
    plStack_88 = (long *)0x0;
    lStack_90 = 0;
    lStack_80 = CONCAT44(lStack_80._4_4_,0x3f800000);
    plVar14 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      do {
        lStack_c8 = plVar14[3];
        pppuStack_d0 = (undefined ***)plVar14[2];
        plStack_b8 = (long *)plVar14[5];
        lVar12 = plVar14[4];
        if (plVar14[5] != 0) {
          plVar15 = (long *)(plVar14[5] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = *plVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_c0 = lVar12;
        if ((lVar12 != 0) &&
           (___dynamic_cast(lVar12,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0), lVar12 != 0)) {
          FUN_10a357b94(&ppuStack_a0,&pppuStack_d0,&pppuStack_d0);
        }
        plVar15 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar1 = plStack_b8 + 1;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      while (plStack_88 != (long *)0x0) {
        lStack_c8 = 0;
        pppuStack_d0 = (undefined ***)0x0;
        plStack_b8 = (long *)0x0;
        lStack_c0 = 0;
        uStack_b0 = 0x3f800000;
        for (plVar14 = (long *)lStack_90; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          lVar12 = param_1 + 0x48;
          func_0x00010a3e9eec(lVar12,plVar14[2],plVar14[3]);
          if (lVar12 != 0) {
            for (plVar15 = *(long **)(lVar12 + 0x30); plVar15 != (long *)0x0;
                plVar15 = (long *)*plVar15) {
              uVar17 = plVar15[3];
              uVar16 = plVar15[2];
              lVar12 = param_1 + 0x48;
              uStack_160 = uVar16;
              uStack_158 = uVar17;
              func_0x00010a3e9eec(lVar12,uVar16,uVar17);
              if (lVar12 != 0) {
                FUN_10a357b94(&pppuStack_d0,&uStack_160,&uStack_160);
                uVar16 = uStack_160;
                uVar17 = uStack_158;
              }
              lVar12 = param_1 + 0x20;
              func_0x00010a3e9e4c(lVar12,uVar16,uVar17);
              if (lVar12 != 0) {
                puVar7 = auStack_138;
                func_0x00010a3e9f8c(puVar7,&uStack_160);
                if (puVar7 == (undefined1 *)0x0) {
                  FUN_10a357b94(&uStack_100,&uStack_160,&uStack_160);
                }
              }
            }
          }
        }
        FUN_10a3ea034(&ppuStack_a0,&pppuStack_d0);
        func_0x00010a34c8fc(&pppuStack_d0);
      }
    }
    func_0x00010a34c8fc(&ppuStack_a0);
    if (lStack_e8 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      FUN_10a3c2fa8(&ppuStack_a0,*(undefined8 *)(param_1 + 0x10));
      ppuVar2 = ppuStack_a0;
      (**(code **)(*ppuStack_a0 + 0x210))(ppuStack_a0,&PTR_DAT_110bcfce0);
      FUN_10a3c2648(ppuVar2,param_1 + 0x20,&uStack_100,0);
      puVar13 = ppuVar2[1];
      (**(code **)(*ppuVar2 + 0x220))(ppuVar2);
      FUN_10a3f2db4(ppuVar2,auStack_138,1);
      if ((char)lStack_90 == '\x01') {
        __ZNSt3__15mutex6unlockEv(ppuStack_98);
      }
    }
    func_0x00010a34c8fc(&uStack_100);
  }
  plVar14 = plStack_128;
  if (plStack_128 == (long *)0x0) {
    lStack_c8 = 0;
    pppuStack_d0 = (undefined ***)0x0;
    plStack_b8 = (long *)0x0;
    lStack_c0 = 0;
    uStack_b0 = 0x3f800000;
  }
  else {
    do {
      ppuStack_98 = (undefined **)plVar14[3];
      ppuStack_a0 = (undefined **)plVar14[2];
      lVar12 = plVar14[4];
      plVar15 = (long *)plVar14[5];
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_90 = lVar12;
      plStack_88 = plVar15;
      if ((lVar12 != 0) &&
         (___dynamic_cast(lVar12,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0), lVar12 != 0)) {
        FUN_10a328cb4();
      }
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
    lVar12 = *(long *)(param_1 + 0x10);
    lStack_c8 = 0;
    pppuStack_d0 = (undefined ***)0x0;
    plStack_b8 = (long *)0x0;
    lStack_c0 = 0;
    uStack_b0 = 0x3f800000;
    if (plStack_128 != (long *)0x0) {
      plVar14 = plStack_128;
      do {
        lVar8 = plVar14[4];
        if ((((lVar8 != 0) &&
             (___dynamic_cast(lVar8,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0), lVar8 != 0)) &&
            ((*(byte *)(lVar8 + 8) & 1) == 0)) &&
           ((*(char *)(lVar8 + 0x1c8) == '\x01' && (*(char *)(lVar8 + 0x1b8) == '\x01')))) {
          FUN_10a357b94(&pppuStack_d0,plVar14 + 2,plVar14 + 2);
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      if (plStack_b8 != (long *)0x0) {
        ppuStack_a0 = &PTR_DAT_110bd1208;
        ppuStack_98 = (undefined **)0x0;
        plStack_88 = (long *)0x0;
        lStack_90 = 0;
        uStack_78 = 0;
        lStack_80 = 0;
        uStack_70 = 0x3f800000;
        for (lVar8 = *(long *)(lVar12 + 0x4d0); lVar8 != lVar12 + 0x4c8;
            lVar8 = *(long *)(lVar8 + 8)) {
          lVar11 = *(long *)(lVar8 + 0x10);
          if ((lVar11 != 0) && ((*(byte *)(lVar11 + 8) & 1) == 0)) {
            FUN_10a0fff24(&ppuStack_a0,lVar11,0);
          }
        }
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        uStack_e0 = uStack_70;
        FUN_10a34cdc4(&uStack_100,plStack_88);
        for (plVar14 = (long *)lStack_80; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          FUN_10a357b94(&uStack_100,plVar14 + 2,plVar14 + 2);
        }
        ppuStack_a0 = &PTR_DAT_110bd1208;
        func_0x00010a34c8fc(&lStack_90);
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_140 = 0x3f800000;
        while (plStack_b8 != (long *)0x0) {
          ppuStack_98 = (undefined **)0x0;
          ppuStack_a0 = (undefined **)0x0;
          plStack_88 = (long *)0x0;
          lStack_90 = 0;
          lStack_80 = CONCAT44(lStack_80._4_4_,0x3f800000);
          for (plVar14 = (long *)lStack_c0; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            lVar12 = param_1 + 0x48;
            func_0x00010a3e9eec(lVar12,plVar14[2],plVar14[3]);
            if (lVar12 != 0) {
              for (plVar15 = *(long **)(lVar12 + 0x30); plVar15 != (long *)0x0;
                  plVar15 = (long *)*plVar15) {
                uStack_108 = plVar15[3];
                uStack_110 = plVar15[2];
                ppppuVar9 = &pppuStack_d0;
                FUN_10a35a030(ppppuVar9,&uStack_110);
                if (ppppuVar9 == (undefined ****)0x0) {
                  lVar12 = param_1 + 0x48;
                  func_0x00010a3e9eec(lVar12,uStack_110,uStack_108);
                  if (lVar12 != 0) {
                    FUN_10a357b94(&ppuStack_a0,&uStack_110,&uStack_110);
                  }
                }
                puVar10 = &uStack_100;
                FUN_10a35a030(puVar10,&uStack_110);
                if (puVar10 == (undefined8 *)0x0) {
                  FUN_10a357b94(&uStack_160,&uStack_110,&uStack_110);
                }
              }
            }
          }
          FUN_10a3ea034(&pppuStack_d0,&ppuStack_a0);
          func_0x00010a34c8fc(&ppuStack_a0);
        }
        func_0x00010a34c8fc(&uStack_100);
        goto LAB_10a3c2d10;
      }
    }
  }
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0x3f800000;
LAB_10a3c2d10:
  func_0x00010a34c8fc(&pppuStack_d0);
  for (plVar14 = *(long **)(param_3 + 0x20); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    ppuStack_98 = (undefined **)plVar14[3];
    ppuStack_a0 = (undefined **)plVar14[2];
    FUN_10a3f2eac(&uStack_160,&ppuStack_a0);
  }
  FUN_10a3c3568(&ppuStack_a0,param_1);
  lVar12 = 0;
  if (ppuStack_98 != ppuStack_a0) {
    lVar12 = LZCOUNT((long)ppuStack_98 - (long)ppuStack_a0 >> 4) * -2 + 0x7e;
  }
  FUN_10a3ea50c(ppuStack_a0,ppuStack_98,lVar12,1);
  ppuVar5 = ppuStack_98;
  for (ppuVar2 = ppuStack_a0; ppuVar2 != ppuVar5; ppuVar2 = ppuVar2 + 2) {
    if ((*ppuVar2 != (undefined *)0x0) && (((*ppuVar2)[8] & 1) == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2);
      lStack_c8 = *(long *)(*ppuVar2 + 0x48);
      pppuStack_d0 = *(undefined ****)(*ppuVar2 + 0x40);
      puVar10 = &uStack_160;
      FUN_10a35a030(&uStack_160,&pppuStack_d0);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bcfd20,puVar10 != (undefined8 *)0x0);
      (**(code **)(*param_2 + 0x120))(param_2,*ppuVar2,0);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  pppuStack_d0 = &ppuStack_a0;
  FUN_10a34cfd0(&pppuStack_d0);
  func_0x00010a34c8fc(&uStack_160);
  FUN_10a3f2c98(auStack_138);
  if (puVar13 != (undefined *)0x0) {
    FUN_10a57120c(puVar13);
  }
  return;
}



/* Entry: 10a3c2fa8; end: 10a3c3003;  */

void FUN_10a3c2fa8(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x270);
  uVar2 = param_2;
  FUN_10a1c5b90();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    lVar3 = param_2 + 0x290;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10a3c3004; end: 10a3c3077;  */

void FUN_10a3c3004(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_50 = 1;
  ppuStack_58 = &PTR_FUN_110bd13e8;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0x3f800000;
  FUN_10a3c27d8(param_1,param_2,&ppuStack_58);
  func_0x00010a34c8fc(&uStack_48);
  return;
}



/* Entry: 10a3c3078; end: 10a3c309f;  */

long FUN_10a3c3078(long param_1)

{
  func_0x00010a34c8fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a3c30a0; end: 10a3c3157;  */

void FUN_10a3c30a0(undefined8 param_1,undefined8 param_2,undefined ***param_3)

{
  undefined ***pppuVar1;
  undefined **ppuStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_60 = 1;
  ppuStack_68 = &PTR_FUN_110bd13e8;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  if (param_3 == (undefined ***)0x0) {
    param_3 = (undefined ***)0x0;
  }
  else {
    ___dynamic_cast(param_3,&PTR_DAT_110bc7b60,&PTR_DAT_110bcfd40,0);
  }
  pppuVar1 = &ppuStack_68;
  if (param_3 != (undefined ***)0x0) {
    pppuVar1 = param_3;
  }
  FUN_10a3c27d8(param_1,param_2,pppuVar1);
  func_0x00010a34c8fc(&uStack_58);
  return;
}



/* Entry: 10a3c3158; end: 10a3c33cb;  */

void FUN_10a3c3158(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5 = param_1;
  FUN_10a1c5b90();
  if (((ulong)plVar5 & 1) == 0) {
    lVar11 = param_2 + 0x70;
    __ZNSt3__15mutex4lockEv(lVar11);
  }
  else {
    lVar11 = 0;
  }
  lVar6 = *(long *)(param_2 + 0x148);
  FUN_10a3c33cc(param_1);
  plVar13 = *(long **)(param_2 + 0x140);
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)param_1[1];
    do {
      if (plVar12 < (long *)param_1[2]) {
        lVar7 = plVar13[2];
        plVar12[1] = plVar13[3];
        *plVar12 = lVar7;
        lVar7 = plVar13[4];
        plVar12[3] = plVar13[5];
        plVar12[2] = lVar7;
        lVar7 = plVar13[6];
        plVar12[4] = lVar7;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar7 = plVar13[8];
        lVar8 = plVar13[7];
        plVar12[6] = plVar13[8];
        plVar12[5] = lVar8;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar12 = plVar12 + 7;
      }
      else {
        lVar7 = (long)plVar12 - *param_1;
        uVar9 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar9) {
          FUN_10a3ea348();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3c339c);
          (*pcVar4)();
        }
        lVar8 = param_1[2] - *param_1 >> 3;
        uVar10 = lVar8 * -0x2492492492492492;
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
          uVar10 = 0x492492492492492;
        }
        plStack_68 = param_1;
        FUN_10a3ea35c();
        plVar1 = (long *)(uVar10 + lVar7);
        lVar7 = plVar13[2];
        plVar1[1] = plVar13[3];
        *plVar1 = lVar7;
        lVar7 = plVar13[4];
        plVar1[3] = plVar13[5];
        plVar1[2] = lVar7;
        lVar7 = plVar13[6];
        plVar1[4] = lVar7;
        if (lVar7 != 0) {
          plVar12 = (long *)(lVar7 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar7 = plVar13[8];
        lVar8 = plVar13[7];
        plVar1[6] = plVar13[8];
        plVar1[5] = lVar8;
        if (lVar7 != 0) {
          plVar12 = (long *)(lVar7 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar8 = lVar6 * 0x38;
        plVar12 = plVar1 + 7;
        lVar6 = param_1[1];
        lVar7 = (long)plVar1 + (*param_1 - lVar6);
        func_0x00010a3ea3a4(*param_1,lVar6,lVar7);
        lStack_88 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)plVar12;
        lStack_70 = param_1[2];
        param_1[2] = uVar10 + lVar8;
        lStack_80 = lStack_88;
        lStack_78 = lStack_88;
        func_0x00010a3ea458(&lStack_88);
      }
      param_1[1] = (long)plVar12;
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (((ulong)plVar5 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar11);
  return;
}



/* Entry: 10a3c33cc; end: 10a3c3493;  */

void FUN_10a3c33cc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((long *)((param_1[2] - lVar4 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if ((long *)0x492492492492492 < param_2) {
      FUN_10a3ea348();
      if (*param_2 != param_2[1]) {
        plVar2 = param_1;
        FUN_10a1c5b90();
        if (((ulong)plVar2 & 1) == 0) {
          plVar6 = param_1 + 0xe;
          __ZNSt3__15mutex4lockEv(plVar6);
        }
        else {
          plVar6 = (long *)0x0;
        }
        puVar1 = (undefined8 *)param_2[1];
        for (puVar7 = (undefined8 *)*param_2; puVar7 != puVar1; puVar7 = puVar7 + 2) {
          plVar3 = param_1 + 0x26;
          func_0x00010a3f30f0(plVar3,*puVar7,puVar7[1]);
          if (((plVar3 != (long *)0x0) && ((plVar3[6] == 0 || (*(long *)(plVar3[6] + 8) == -1)))) &&
             ((plVar3[8] == 0 || (*(long *)(plVar3[8] + 8) == -1)))) {
            FUN_10a3f3190(param_1 + 0x26);
          }
        }
        if (((ulong)plVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar6);
          return;
        }
      }
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_2;
    plStack_38 = param_1;
    FUN_10a3ea35c();
    lVar4 = (long)param_2 + (lVar5 - lVar4);
    lVar5 = lVar4 + (*param_1 - param_1[1]);
    func_0x00010a3ea3a4(*param_1,param_1[1],lVar5);
    lStack_58 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar4;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar2 * 7);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a3ea458(&lStack_58);
  }
  return;
}



/* Entry: 10a3c3494; end: 10a3c3567;  */

void FUN_10a3c3494(ulong param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*param_2 != param_2[1]) {
    uVar2 = param_1;
    FUN_10a1c5b90();
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1 + 0x70;
      __ZNSt3__15mutex4lockEv(lVar4);
    }
    else {
      lVar4 = 0;
    }
    puVar1 = (undefined8 *)param_2[1];
    for (puVar5 = (undefined8 *)*param_2; puVar5 != puVar1; puVar5 = puVar5 + 2) {
      lVar3 = param_1 + 0x130;
      func_0x00010a3f30f0(lVar3,*puVar5,puVar5[1]);
      if (((lVar3 != 0) &&
          ((*(long *)(lVar3 + 0x30) == 0 || (*(long *)(*(long *)(lVar3 + 0x30) + 8) == -1)))) &&
         ((*(long *)(lVar3 + 0x40) == 0 || (*(long *)(*(long *)(lVar3 + 0x40) + 8) == -1)))) {
        FUN_10a3f3190(param_1 + 0x130);
      }
    }
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a3c3568; end: 10a3c37bb;  */

void FUN_10a3c3568(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a3c3158(&lStack_a0,param_2);
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lVar3 = lStack_a0;
  do {
    if (lVar3 == lStack_98) {
      FUN_10a3c3494(param_2,&lStack_b8);
      if (lStack_b8 != 0) {
        lStack_b0 = lStack_b8;
        __ZdlPv();
      }
      FUN_10a3ea4a4(&lStack_a0);
      return;
    }
    FUN_10a3c39a4(&lStack_c8,lVar3 + 0x10);
    if (lStack_c8 == 0) {
      FUN_10a3c4ee8(&lStack_b8,lVar3);
    }
    else {
      FUN_10a2ea178(&uStack_e0);
      puVar4 = (undefined8 *)param_1[1];
      if (puVar4 < (undefined8 *)param_1[2]) {
        puVar4[1] = plStack_d8;
        *puVar4 = uStack_e0;
        uStack_e0 = 0;
        plStack_d8 = (long *)0x0;
        param_1[1] = (long)(puVar4 + 2);
      }
      else {
        lVar11 = (long)puVar4 - *param_1;
        uVar1 = (lVar11 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          func_0x00010a3e9da4();
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a3c3760);
          (*pcVar8)();
        }
        uVar10 = param_1[2] - *param_1;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        plVar9 = param_1;
        plStack_68 = param_1;
        FUN_10a3e9db8();
        lVar5 = *param_1;
        puVar4 = (undefined8 *)((long)plVar9 + lVar11);
        lVar11 = (long)puVar4 - (param_1[1] - lVar5);
        puVar4[1] = plStack_d8;
        *puVar4 = uStack_e0;
        uStack_e0 = 0;
        plStack_d8 = (long *)0x0;
        _memcpy(lVar11,lVar5);
        lStack_88 = *param_1;
        *param_1 = lVar11;
        param_1[1] = (long)(puVar4 + 2);
        lStack_70 = param_1[2];
        param_1[2] = (long)(plVar9 + uVar12 * 2);
        lStack_80 = lStack_88;
        lStack_78 = lStack_88;
        func_0x00010a3e9dec(&lStack_88);
        plVar9 = plStack_d8;
        param_1[1] = (long)(puVar4 + 2);
        if (plStack_d8 != (long *)0x0) {
          plVar2 = plStack_d8 + 1;
          do {
            lVar11 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
    }
    plVar9 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar2 = plStack_c0 + 1;
      do {
        lVar11 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lVar3 = lVar3 + 0x38;
  } while( true );
}



/* Entry: 10a3c37bc; end: 10a3c39a3;  */

void FUN_10a3c37bc(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar5 = param_2;
  FUN_10a1c5b90();
  if ((uVar5 & 1) == 0) {
    lVar8 = param_2 + 0x70;
    __ZNSt3__15mutex4lockEv(lVar8);
  }
  else {
    lVar8 = 0;
  }
  lVar6 = param_2 + 0x130;
  func_0x00010a3f30f0(lVar6,param_3,param_4);
  if (lVar6 == 0) {
    lStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    lStack_60 = 0;
  }
  else {
    uStack_68 = *(undefined8 *)(lVar6 + 0x28);
    uStack_70 = *(undefined8 *)(lVar6 + 0x20);
    lStack_60 = *(long *)(lVar6 + 0x30);
    if (lStack_60 != 0) {
      plVar1 = (long *)(lStack_60 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_50 = *(long *)(lVar6 + 0x40);
    uStack_58 = *(undefined8 *)(lVar6 + 0x38);
    if (*(long *)(lVar6 + 0x40) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x40) + 0x10);
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
  if ((uVar5 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv(lVar8);
  }
  FUN_10a3c39a4(&puStack_88,&uStack_70);
  if (puStack_88 == (undefined8 *)0x0) {
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
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
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    puVar7 = (undefined8 *)0x10;
    __Znwm();
    plStack_80 = puVar7 + 2;
    *puVar7 = param_3;
    puVar7[1] = param_4;
    puStack_88 = puVar7;
    plStack_78 = plStack_80;
    FUN_10a3c3494(param_2,&puStack_88);
    __ZdlPv(puVar7);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a2ea178(param_1);
    plVar1 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar2 = plStack_80 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (lStack_50 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_60 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a3c39a4; end: 10a3c3be7;  */

void FUN_10a3c39a4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_2[2];
  if ((plVar4 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) {
    lVar6 = param_2[1];
    lStack_40 = lVar6;
    if (lVar6 == 0) {
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
      if (lVar5 != 0) goto LAB_10a3c3ac0;
    }
    else {
      FUN_10a053e40(&lStack_50,lVar6);
      plVar1 = plStack_48;
      if (lStack_50 == 0) {
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar4 = plStack_38;
        *param_1 = *param_2;
        param_1[1] = (long)plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010a053e8c(lStack_40,param_1);
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      else {
        *param_1 = lStack_50;
        param_1[1] = (long)plStack_48;
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
      if (lVar5 != 0) {
        return;
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (lVar6 != 0) {
      return;
    }
  }
LAB_10a3c3ac0:
  plVar4 = (long *)param_2[4];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = param_2[3];
    if (lVar6 == 0) {
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
      lStack_40 = 0;
      plStack_38 = plVar4;
      if (lVar5 != 0) goto LAB_10a3c3b94;
    }
    else {
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
      lStack_50 = lVar6;
      plStack_48 = plVar4;
      FUN_10aa89664(&lStack_60,*param_2,&lStack_50);
      plVar4 = plStack_48;
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (plStack_38 == (long *)0x0) {
        return;
      }
      plVar4 = plStack_38 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 != 0) {
        return;
      }
    }
    plVar4 = plStack_38;
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (lVar6 != 0) {
      return;
    }
  }
LAB_10a3c3b94:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a3c3be8; end: 10a3c3f7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c4c78) */
/* WARNING: Removing unreachable block (ram,0x00010a3c4d20) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a3c3be8(undefined **param_1,code **param_2,code ******param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  code ***pppcVar7;
  code ***pppcVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  code ******ppppppcVar11;
  ulong uVar12;
  undefined *puVar13;
  code ******ppppppcVar14;
  code **ppcVar15;
  long lVar16;
  code *******pppppppcVar17;
  code *****pppppcVar18;
  long lVar19;
  code *******pppppppcVar20;
  code ******ppppppcVar21;
  code *****pppppcVar22;
  code *****pppppcVar23;
  code *******pppppppcVar24;
  code ******ppppppcVar25;
  code **ppcVar26;
  code **ppcVar27;
  code ******ppppppcVar28;
  code *******pppppppcVar29;
  code ******ppppppcVar30;
  code **unaff_x23;
  undefined **unaff_x24;
  code *****pppppcVar31;
  code *******unaff_x25;
  undefined **unaff_x26;
  code *******pppppppcVar32;
  ulong uVar33;
  undefined8 unaff_x27;
  code *******pppppppcVar34;
  code *unaff_x28;
  code *pcVar35;
  code ****ppppcVar36;
  code ***pppcStack_280;
  code ******ppppppcStack_270;
  code ******ppppppcStack_268;
  long lStack_260;
  long *plStack_258;
  code *******pppppppcStack_250;
  code *******pppppppcStack_248;
  code *******pppppppcStack_240;
  code *******pppppppcStack_238;
  code *******pppppppcStack_230;
  code ******ppppppcStack_228;
  code ******ppppppcStack_220;
  code *******pppppppcStack_218;
  code *******pppppppcStack_210;
  code *******pppppppcStack_208;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  code *******pppppppcStack_1b8;
  undefined **ppuStack_1b0;
  code **ppcStack_1a8;
  code ******ppppppcStack_1a0;
  code **ppcStack_198;
  undefined **ppuStack_190;
  code ***pppcStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  code **ppcStack_170;
  undefined *puStack_168;
  long *plStack_158;
  undefined **ppuStack_150;
  code **ppcStack_148;
  code **ppcStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined **appuStack_128 [2];
  undefined1 uStack_118;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *****pppppcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR___tlv_bootstrap_11340df18;
  (*(code *)PTR___tlv_bootstrap_11340df18)();
  if (((ulong)*ppuVar4 & 1) == 0) {
    ppuVar4 = param_1;
    FUN_10a3c059c();
  }
  FUN_10a1c5b90();
  if (((ulong)ppuVar4 & 1) == 0) {
    ppppppcVar30 = (code ******)(param_1 + 0x16);
    __ZNSt3__15mutex4lockEv(ppppppcVar30);
  }
  else {
    ppppppcVar30 = (code ******)0x0;
  }
  ppcVar26 = (code **)param_1[0x2b];
  puStack_138 = param_1[0x2d];
  ppcStack_140 = (code **)param_1[0x2c];
  param_1[0x2c] = (undefined *)0x0;
  param_1[0x2d] = (undefined *)0x0;
  param_1[0x2b] = (undefined *)0x0;
  ppcVar15 = ppcStack_140;
  ppcStack_148 = ppcVar26;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppcStack_170 = ppcStack_140;
    puStack_168 = puStack_138;
    __ZNSt3__15mutex6unlockEv(ppppppcVar30);
    ppcVar15 = ppcStack_170;
  }
  ppcVar9 = ppcVar26;
  ppcVar27 = ppcVar15;
  if (ppcVar26 != ppcVar15) {
    ppppppcVar30 = &pppppcStack_b0;
    unaff_x23 = &pcStack_f0;
    unaff_x25 = (code *******)&UNK_1053a6a3c;
    unaff_x26 = &PTR_DAT_110ae9180;
    unaff_x27 = 1;
    unaff_x28 = FUN_10a1d0710;
    unaff_x24 = &PTR_FUN_110bad6c8;
    do {
      param_2 = ppcVar26;
      FUN_10a3c39a4(&plStack_158);
      plVar6 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        pppppcStack_b0 = (code *****)&UNK_1053a6a3c;
        ppuStack_a8 = &PTR_DAT_110ae9180;
        plVar5 = plStack_158;
        (**(code **)(*plStack_158 + 0x28))();
        if (plVar5 != (long *)0x0) {
          *(ushort *)((long)plVar5 + 0x59) =
               *(ushort *)((long)plVar5 + 0x59) & 0xff80 |
               *(ushort *)((long)plVar5 + 0x59) + 1 & 0x7f;
          ppuStack_e8 = &PTR_FUN_110bad6c8;
          uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
          pcStack_f0 = FUN_10a1d0710;
          param_2 = &pcStack_f0;
          func_0x00010a108320(&pppppcStack_b0);
          FUN_10a044790(&pcStack_f0);
          (*(code *)*ppuStack_e8)(&ppuStack_e8);
        }
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        pcStack_f0 = (code *)&UNK_1053a6a3c;
        ppuStack_e8 = &PTR_DAT_110ae9180;
        plVar5 = plVar6;
        (**(code **)(*plVar6 + 0x30))();
        if (plVar5 != (long *)0x0) {
          *(ushort *)(plVar5 + 6) =
               *(ushort *)(plVar5 + 6) & 0xff80 | *(ushort *)(plVar5 + 6) + 1 & 0x7f;
          uStack_118 = 1;
          pcStack_130 = FUN_10a1d355c;
          appuStack_128[0] = &PTR_FUN_110bad800;
          param_2 = &pcStack_130;
          func_0x00010a108320(&pcStack_f0);
          FUN_10a044790(&pcStack_130);
          (*(code *)*appuStack_128[0])(appuStack_128);
        }
        (**(code **)(*plVar6 + 0x70))(plVar6);
        (**(code **)(*plVar6 + 0x28))();
        if (plVar6 != (long *)0x0) {
          FUN_10a1c08dc();
        }
        FUN_10a044790(&pcStack_f0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        FUN_10a044790(&pppppcStack_b0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
      }
      param_1 = ppuStack_150;
      if (ppuStack_150 != (undefined **)0x0) {
        ppuVar4 = ppuStack_150 + 1;
        do {
          puVar13 = *ppuVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar2) {
            *ppuVar4 = puVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_150 + 0x10))(ppuStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
      ppcVar26 = ppcVar26 + 5;
      ppcVar9 = ppcStack_148;
      ppcVar27 = ppcStack_140;
    } while (ppcVar26 != ppcVar15);
  }
  for (; ppcVar9 != ppcVar27; ppcVar9 = ppcVar9 + 5) {
    param_2 = ppcVar9;
    FUN_10a3c39a4(&pppppcStack_b0);
    if (pppppcStack_b0 != (code *****)0x0) {
      (*(code *)(*pppppcStack_b0)[0xf])();
    }
    param_1 = ppuStack_a8;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar4 = ppuStack_a8 + 1;
      do {
        puVar13 = *ppuVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar2) {
          *ppuVar4 = puVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
  }
  pppcVar7 = &ppcStack_148;
  func_0x00010a3e9a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_10a044790(&pcStack_f0);
    (*(code *)*ppuStack_e8)(unaff_x23 + 1);
    FUN_10a044790(&pppppcStack_b0);
    (*(code *)*ppuStack_a8)(ppppppcVar30 + 1);
    func_0x00010a0536d4(&plStack_158);
    func_0x00010a3e9a60(&ppcStack_148);
  }
  pppcVar8 = pppcVar7;
  __Unwind_Resume();
  pcStack_178 = FUN_10a3c3f80;
  pppppppcStack_218 = (code *******)0x0;
  pppppppcStack_210 = (code *******)0x0;
  pppppppcStack_208 = (code *******)0x0;
  uVar33 = 0;
  ppppppcVar14 = param_3;
  pcStack_1d0 = unaff_x28;
  uStack_1c8 = unaff_x27;
  ppuStack_1c0 = unaff_x26;
  pppppppcStack_1b8 = unaff_x25;
  ppuStack_1b0 = unaff_x24;
  ppcStack_1a8 = unaff_x23;
  ppppppcStack_1a0 = ppppppcVar30;
  ppcStack_198 = ppcVar27;
  ppuStack_190 = param_1;
  pppcStack_188 = pppcVar7;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_10a3c33cc();
  ppppppcStack_220 = (code ******)0x0;
  FUN_10a1c5b90();
  if ((uVar33 & 1) == 0) {
    pppcStack_280 = pppcVar8 + 0xe;
    __ZNSt3__15mutex4lockEv();
  }
  else {
    pppcStack_280 = (code ***)0x0;
  }
  __ZNSt3__15mutex4lockEv(pppcVar8 + 0x31);
  ppppppcStack_220 = (code ******)pppcVar8[0x39];
  pppcVar8[0x39] = (code **)((long)ppppppcStack_220 + 1);
  pppppppcStack_238 = (code *******)0x0;
  pppppppcStack_240 = (code *******)0x0;
  ppppppcStack_228 = (code ******)0x0;
  pppppppcStack_230 = (code *******)0x0;
  pppppppcStack_248 = (code *******)0x0;
  pppppppcStack_250 = (code *******)0x0;
  if (param_3 != (code ******)0x0) {
    ppppppcVar30 = (code ******)(pppcVar8 + 0x41);
    ppcVar26 = param_2 + (long)param_3 * 2;
    do {
      pcVar3 = *param_2;
      pppcVar7 = pppcVar8 + 0x26;
      func_0x00010a3f30f0(pppcVar7,pcVar3,param_2[1]);
      if (pppcVar7 != (code ***)0x0) {
        if (((pppcVar7[6] == (code **)0x0) || (pppcVar7[6][1] == (code *)0xffffffffffffffff)) &&
           ((pppcVar7[8] == (code **)0x0 || (pppcVar7[8][1] == (code *)0xffffffffffffffff)))) {
          FUN_10a3f3190(pppcVar8 + 0x26,pppcVar7);
        }
        else if (pppppppcStack_210 < pppppppcStack_208) {
          ppppppcVar14 = (code ******)*param_2;
          pppppppcStack_210[1] = (code ******)param_2[1];
          *pppppppcStack_210 = ppppppcVar14;
          ppppppcVar14 = (code ******)pppcVar7[4];
          pppppppcStack_210[3] = (code ******)pppcVar7[5];
          pppppppcStack_210[2] = ppppppcVar14;
          ppppppcVar14 = (code ******)pppcVar7[6];
          pppppppcStack_210[4] = ppppppcVar14;
          if (ppppppcVar14 != (code ******)0x0) {
            ppppppcVar14 = ppppppcVar14 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
              if (bVar2) {
                *ppppppcVar14 = (code *****)((long)*ppppppcVar14 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppcVar15 = pppcVar7[8];
          ppppppcVar14 = (code ******)pppcVar7[7];
          pppppppcStack_210[6] = (code ******)pppcVar7[8];
          pppppppcStack_210[5] = ppppppcVar14;
          if (ppcVar15 != (code **)0x0) {
            ppcVar15 = ppcVar15 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppcVar15,0x10);
              if (bVar2) {
                *ppcVar15 = *ppcVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          unaff_x25 = pppppppcStack_210 + 7;
          pppppppcStack_210 = unaff_x25;
        }
        else {
          lVar19 = (long)pppppppcStack_210 - (long)pppppppcStack_218;
          uVar10 = (lVar19 >> 3) * 0x6db6db6db6db6db7 + 1;
          if (0x492492492492492 < uVar10) {
            FUN_10a3ea348();
            goto LAB_10a3c4e0c;
          }
          lVar16 = (long)pppppppcStack_208 - (long)pppppppcStack_218 >> 3;
          uVar12 = lVar16 * -0x2492492492492492;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
            uVar12 = uVar10;
          }
          if (0x249249249249248 < (ulong)(lVar16 * 0x6db6db6db6db6db7)) {
            uVar12 = 0x492492492492492;
          }
          pppppppcStack_1e0 = (code *******)&pppppppcStack_218;
          FUN_10a3ea35c();
          plVar6 = (long *)(uVar12 + lVar19);
          pcVar35 = *param_2;
          plVar6[1] = (long)param_2[1];
          *plVar6 = (long)pcVar35;
          ppcVar15 = pppcVar7[4];
          plVar6[3] = (long)pppcVar7[5];
          plVar6[2] = (long)ppcVar15;
          ppcVar15 = pppcVar7[6];
          plVar6[4] = (long)ppcVar15;
          if (ppcVar15 != (code **)0x0) {
            ppcVar15 = ppcVar15 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppcVar15,0x10);
              if (bVar2) {
                *ppcVar15 = *ppcVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppcVar15 = pppcVar7[8];
          ppcVar9 = pppcVar7[7];
          plVar6[6] = (long)pppcVar7[8];
          plVar6[5] = (long)ppcVar9;
          if (ppcVar15 != (code **)0x0) {
            ppcVar15 = ppcVar15 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppcVar15,0x10);
              if (bVar2) {
                *ppcVar15 = *ppcVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          unaff_x25 = (code *******)(plVar6 + 7);
          pppppppcVar34 =
               (code *******)((long)plVar6 + ((long)pppppppcStack_218 - (long)pppppppcStack_210));
          func_0x00010a3ea3a4(pppppppcStack_218,pppppppcStack_210,pppppppcVar34);
          pppppppcStack_1f0 = pppppppcStack_218;
          pppppppcStack_1e8 = pppppppcStack_208;
          pppppppcStack_200 = pppppppcStack_218;
          pppppppcStack_1f8 = pppppppcStack_218;
          pppppppcStack_218 = pppppppcVar34;
          pppppppcStack_210 = unaff_x25;
          pppppppcStack_208 = (code *******)(uVar12 + (long)pcVar3 * 0x38);
          func_0x00010a3ea458(&pppppppcStack_200);
          pppppppcStack_210 = unaff_x25;
        }
      }
      FUN_10a3c4ee8(&pppppppcStack_238,param_2);
      pppppppcVar32 = (code *******)param_2[1];
      pppppppcVar34 = (code *******)pppcVar8[0x40];
      if (pppppppcVar34 != (code *******)0x0) {
        uVar10 = (long)pppppppcVar34 - 1;
        if (((ulong)pppppppcVar34 & uVar10) == 0) {
          unaff_x25 = (code *******)(uVar10 & (ulong)pppppppcVar32);
        }
        else {
          unaff_x25 = pppppppcVar32;
          if (pppppppcVar34 <= pppppppcVar32) {
            uVar12 = 0;
            if (pppppppcVar34 != (code *******)0x0) {
              uVar12 = (ulong)pppppppcVar32 / (ulong)pppppppcVar34;
            }
            unaff_x25 = (code *******)((long)pppppppcVar32 - uVar12 * (long)pppppppcVar34);
          }
        }
        if ((pppcVar8[0x3f][(long)unaff_x25] != (code *)0x0) &&
           (pppppcVar31 = *(code ******)pppcVar8[0x3f][(long)unaff_x25],
           pppppcVar31 != (code *****)0x0)) {
          do {
            pppppppcVar20 = (code *******)pppppcVar31[1];
            if (pppppppcVar20 == pppppppcVar32) {
              if (pppppcVar31[2] == (code ****)*param_2 &&
                  (code *******)pppppcVar31[3] == pppppppcVar32) goto LAB_10a3c4524;
            }
            else {
              if (((ulong)pppppppcVar34 & uVar10) == 0) {
                pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & uVar10);
              }
              else if (pppppppcVar34 <= pppppppcVar20) {
                uVar12 = 0;
                if (pppppppcVar34 != (code *******)0x0) {
                  uVar12 = (ulong)pppppppcVar20 / (ulong)pppppppcVar34;
                }
                pppppppcVar20 = (code *******)((long)pppppppcVar20 - uVar12 * (long)pppppppcVar34);
              }
              if (pppppppcVar20 != unaff_x25) break;
            }
            pppppcVar31 = (code *****)*pppppcVar31;
          } while (pppppcVar31 != (code *****)0x0);
        }
      }
      pppppcVar31 = (code *****)0x38;
      __Znwm();
      *pppppcVar31 = (code ****)0x0;
      pppppcVar31[1] = (code ****)pppppppcVar32;
      ppppcVar36 = (code ****)*param_2;
      pppppcVar31[3] = (code ****)param_2[1];
      pppppcVar31[2] = ppppcVar36;
      pppppcVar31[5] = (code ****)0x0;
      pppppcVar31[6] = (code ****)0x0;
      pppppcVar31[4] = (code ****)0x0;
      if ((pppppppcVar34 == (code *******)0x0) ||
         (*(float *)(pppcVar8 + 0x43) * (float)pppppppcVar34 < (float)((long)pppcVar8[0x42] + 1))) {
        uVar10 = 1;
        if ((code *******)0x2 < pppppppcVar34) {
          uVar10 = (ulong)(((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) != 0);
        }
        pppppppcVar20 = (code *******)(uVar10 | (long)pppppppcVar34 << 1);
        pppppppcVar17 =
             (code *******)(long)((float)((long)pppcVar8[0x42] + 1) / *(float *)(pppcVar8 + 0x43));
        if (pppppppcVar20 <= pppppppcVar17) {
          pppppppcVar20 = pppppppcVar17;
        }
        if ((long)pppppppcVar20 - 1U == 0) {
          pppppppcVar20 = (code *******)0x2;
        }
        else if (((ulong)pppppppcVar20 & (long)pppppppcVar20 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppppppcVar34 = (code *******)pppcVar8[0x40];
        }
        if (pppppppcVar34 < pppppppcVar20) {
LAB_10a3c4344:
          if ((ulong)pppppppcVar20 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a3c4e0c;
          }
          ppcVar15 = (code **)((long)pppppppcVar20 << 3);
          __Znwm();
          ppcVar9 = pppcVar8[0x3f];
          pppcVar8[0x3f] = ppcVar15;
          if (ppcVar9 != (code **)0x0) {
            __ZdlPv();
          }
          pppppppcVar34 = (code *******)0x0;
          pppcVar8[0x40] = (code **)pppppppcVar20;
          do {
            pppcVar8[0x3f][(long)pppppppcVar34] = (code *)0x0;
            pppppppcVar34 = (code *******)((long)pppppppcVar34 + 1);
          } while (pppppppcVar20 != pppppppcVar34);
          pppppcVar18 = *ppppppcVar30;
          pppppppcVar34 = pppppppcVar20;
          if (pppppcVar18 != (code *****)0x0) {
            pppppppcVar17 = (code *******)pppppcVar18[1];
            uVar10 = (long)pppppppcVar20 - 1;
            if (((ulong)pppppppcVar20 & uVar10) == 0) {
              pppppppcVar17 = (code *******)((ulong)pppppppcVar17 & uVar10);
            }
            else if (pppppppcVar20 <= pppppppcVar17) {
              uVar12 = 0;
              if (pppppppcVar20 != (code *******)0x0) {
                uVar12 = (ulong)pppppppcVar17 / (ulong)pppppppcVar20;
              }
              pppppppcVar17 = (code *******)((long)pppppppcVar17 - uVar12 * (long)pppppppcVar20);
            }
            pppcVar8[0x3f][(long)pppppppcVar17] = (code *)ppppppcVar30;
            pppppcVar22 = (code *****)*pppppcVar18;
            while (pppppcVar22 != (code *****)0x0) {
              pppppppcVar24 = (code *******)pppppcVar22[1];
              if (((ulong)pppppppcVar20 & uVar10) == 0) {
                pppppppcVar24 = (code *******)((ulong)pppppppcVar24 & uVar10);
              }
              else if (pppppppcVar20 <= pppppppcVar24) {
                uVar12 = 0;
                if (pppppppcVar20 != (code *******)0x0) {
                  uVar12 = (ulong)pppppppcVar24 / (ulong)pppppppcVar20;
                }
                pppppppcVar24 = (code *******)((long)pppppppcVar24 - uVar12 * (long)pppppppcVar20);
              }
              pppppcVar23 = pppppcVar22;
              if (pppppppcVar24 != pppppppcVar17) {
                ppcVar15 = pppcVar8[0x3f];
                if (ppcVar15[(long)pppppppcVar24] == (code *)0x0) {
                  ppcVar15[(long)pppppppcVar24] = (code *)pppppcVar18;
                  pppppppcVar17 = pppppppcVar24;
                }
                else {
                  *pppppcVar18 = *pppppcVar22;
                  *pppppcVar22 = *(code *****)ppcVar15[(long)pppppppcVar24];
                  *(code ******)ppcVar15[(long)pppppppcVar24] = pppppcVar22;
                  pppppcVar23 = pppppcVar18;
                }
              }
              pppppcVar18 = pppppcVar23;
              pppppcVar22 = (code *****)*pppppcVar23;
            }
          }
        }
        else if (pppppppcVar20 < pppppppcVar34) {
          pppppppcVar17 = (code *******)(long)((float)pppcVar8[0x42] / *(float *)(pppcVar8 + 0x43));
          if ((pppppppcVar34 < (code *******)0x3) ||
             (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((code *******)0x1 < pppppppcVar17) {
            pppppppcVar17 = (code *******)(1L << (-LZCOUNT((long)pppppppcVar17 + -1) & 0x3fU));
          }
          if (pppppppcVar20 <= pppppppcVar17) {
            pppppppcVar20 = pppppppcVar17;
          }
          if (pppppppcVar20 < pppppppcVar34) {
            if (pppppppcVar20 != (code *******)0x0) goto LAB_10a3c4344;
            ppcVar15 = pppcVar8[0x3f];
            pppcVar8[0x3f] = (code **)0x0;
            if (ppcVar15 != (code **)0x0) {
              __ZdlPv();
            }
            pppcVar8[0x40] = (code **)0x0;
            pppppppcVar34 = (code *******)0x0;
          }
          else {
            pppppppcVar34 = (code *******)pppcVar8[0x40];
          }
        }
        if (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) == 0) {
          unaff_x25 = (code *******)((long)pppppppcVar34 - 1U & (ulong)pppppppcVar32);
        }
        else {
          unaff_x25 = pppppppcVar32;
          if (pppppppcVar34 <= pppppppcVar32) {
            uVar10 = 0;
            if (pppppppcVar34 != (code *******)0x0) {
              uVar10 = (ulong)pppppppcVar32 / (ulong)pppppppcVar34;
            }
            unaff_x25 = (code *******)((long)pppppppcVar32 - uVar10 * (long)pppppppcVar34);
          }
        }
      }
      ppcVar9 = pppcVar8[0x3f];
      ppcVar15 = (code **)ppcVar9[(long)unaff_x25];
      if (ppcVar15 == (code **)0x0) {
        *pppppcVar31 = (code ****)*ppppppcVar30;
        *ppppppcVar30 = pppppcVar31;
        ppcVar9[(long)unaff_x25] = (code *)ppppppcVar30;
        if (*pppppcVar31 != (code ****)0x0) {
          pppppppcVar32 = (code *******)(*pppppcVar31)[1];
          if (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) == 0) {
            pppppppcVar32 = (code *******)((ulong)pppppppcVar32 & (long)pppppppcVar34 - 1U);
          }
          else if (pppppppcVar34 <= pppppppcVar32) {
            uVar10 = 0;
            if (pppppppcVar34 != (code *******)0x0) {
              uVar10 = (ulong)pppppppcVar32 / (ulong)pppppppcVar34;
            }
            pppppppcVar32 = (code *******)((long)pppppppcVar32 - uVar10 * (long)pppppppcVar34);
          }
          ppcVar15 = pppcVar8[0x3f] + (long)pppppppcVar32;
          goto LAB_10a3c4514;
        }
      }
      else {
        *pppppcVar31 = (code ****)*ppcVar15;
LAB_10a3c4514:
        *ppcVar15 = (code *)pppppcVar31;
      }
      pppcVar8[0x42] = (code **)((long)pppcVar8[0x42] + 1);
LAB_10a3c4524:
      ppppppcVar14 = (code ******)&ppppppcStack_220;
      func_0x00010a3c4fb0(pppppcVar31 + 4);
      param_2 = param_2 + 2;
    } while (param_2 != ppcVar26);
    uVar33 = uVar33 & 0xffffffff;
  }
  ppppppcVar11 = ppppppcStack_220;
  pppppppcVar34 = (code *******)(pppcVar8 + 0x3a);
  ppppppcVar28 = (code ******)pppcVar8[0x3b];
  if (ppppppcVar28 != (code ******)0x0) {
    uVar10 = (long)ppppppcVar28 - 1;
    if (((ulong)ppppppcVar28 & uVar10) == 0) {
      ppppppcVar30 = (code ******)(uVar10 & (ulong)ppppppcStack_220);
    }
    else {
      ppppppcVar30 = ppppppcStack_220;
      if (ppppppcVar28 <= ppppppcStack_220) {
        uVar12 = 0;
        if (ppppppcVar28 != (code ******)0x0) {
          uVar12 = (ulong)ppppppcStack_220 / (ulong)ppppppcVar28;
        }
        ppppppcVar30 = (code ******)((long)ppppppcStack_220 - uVar12 * (long)ppppppcVar28);
      }
    }
    pppppcVar31 = (*pppppppcVar34)[(long)ppppppcVar30];
    if (pppppcVar31 != (code *****)0x0) {
      do {
        while( true ) {
          pppppcVar31 = (code *****)*pppppcVar31;
          if (pppppcVar31 == (code *****)0x0) goto LAB_10a3c4624;
          ppppppcVar21 = (code ******)pppppcVar31[1];
          if (ppppppcVar21 != ppppppcStack_220) break;
          if ((code ******)pppppcVar31[2] == ppppppcStack_220) goto LAB_10a3c48e0;
        }
        if (((ulong)ppppppcVar28 & uVar10) == 0) {
          ppppppcVar21 = (code ******)((ulong)ppppppcVar21 & uVar10);
        }
        else if (ppppppcVar28 <= ppppppcVar21) {
          uVar12 = 0;
          if (ppppppcVar28 != (code ******)0x0) {
            uVar12 = (ulong)ppppppcVar21 / (ulong)ppppppcVar28;
          }
          ppppppcVar21 = (code ******)((long)ppppppcVar21 - uVar12 * (long)ppppppcVar28);
        }
      } while (ppppppcVar21 == ppppppcVar30);
    }
  }
LAB_10a3c4624:
  pppppppcVar32 = (code *******)0x48;
  __Znwm();
  pppppppcStack_1f0 = (code *******)0x1;
  *pppppppcVar32 = (code ******)0x0;
  pppppppcVar32[1] = ppppppcVar11;
  pppppppcVar32[2] = ppppppcVar11;
  pppppppcVar32[4] = (code ******)pppppppcStack_248;
  pppppppcVar32[3] = (code ******)pppppppcStack_250;
  pppppppcVar32[5] = (code ******)pppppppcStack_240;
  pppppppcStack_250 = (code *******)0x0;
  pppppppcStack_248 = (code *******)0x0;
  pppppppcVar32[7] = (code ******)pppppppcStack_230;
  pppppppcVar32[6] = (code ******)pppppppcStack_238;
  pppppppcVar32[8] = ppppppcStack_228;
  pppppppcStack_240 = (code *******)0x0;
  pppppppcStack_238 = (code *******)0x0;
  pppppppcStack_230 = (code *******)0x0;
  ppppppcStack_228 = (code ******)0x0;
  pppppppcStack_200 = pppppppcVar32;
  pppppppcStack_1f8 = pppppppcVar34;
  if ((ppppppcVar28 == (code ******)0x0) ||
     (*(float *)(pppcVar8 + 0x3e) * (float)ppppppcVar28 < (float)((long)pppcVar8[0x3d] + 1))) {
    uVar10 = 1;
    if ((code ******)0x2 < ppppppcVar28) {
      uVar10 = (ulong)(((ulong)ppppppcVar28 & (long)ppppppcVar28 - 1U) != 0);
    }
    ppppppcVar30 = (code ******)(uVar10 | (long)ppppppcVar28 << 1);
    ppppppcVar21 = (code ******)
                   (long)((float)((long)pppcVar8[0x3d] + 1) / *(float *)(pppcVar8 + 0x3e));
    if (ppppppcVar30 <= ppppppcVar21) {
      ppppppcVar30 = ppppppcVar21;
    }
    if ((long)ppppppcVar30 - 1U == 0) {
      ppppppcVar30 = (code ******)0x2;
    }
    else if (((ulong)ppppppcVar30 & (long)ppppppcVar30 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      ppppppcVar28 = (code ******)pppcVar8[0x3b];
    }
    if (ppppppcVar28 < ppppppcVar30) {
LAB_10a3c46f4:
      ppppppcVar28 = ppppppcVar30;
      if ((ulong)ppppppcVar28 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a3c4e0c;
      }
      ppppppcVar30 = (code ******)((long)ppppppcVar28 << 3);
      __Znwm();
      ppppppcVar21 = *pppppppcVar34;
      *pppppppcVar34 = ppppppcVar30;
      if (ppppppcVar21 != (code ******)0x0) {
        __ZdlPv();
      }
      ppppppcVar30 = (code ******)0x0;
      pppcVar8[0x3b] = (code **)ppppppcVar28;
      do {
        (*pppppppcVar34)[(long)ppppppcVar30] = (code *****)0x0;
        ppppppcVar30 = (code ******)((long)ppppppcVar30 + 1);
      } while (ppppppcVar28 != ppppppcVar30);
      pppppcVar31 = (code *****)pppcVar8[0x3c];
      if (pppppcVar31 != (code *****)0x0) {
        ppppppcVar30 = (code ******)pppppcVar31[1];
        uVar10 = (long)ppppppcVar28 - 1;
        if (((ulong)ppppppcVar28 & uVar10) == 0) {
          ppppppcVar30 = (code ******)((ulong)ppppppcVar30 & uVar10);
        }
        else if (ppppppcVar28 <= ppppppcVar30) {
          uVar12 = 0;
          if (ppppppcVar28 != (code ******)0x0) {
            uVar12 = (ulong)ppppppcVar30 / (ulong)ppppppcVar28;
          }
          ppppppcVar30 = (code ******)((long)ppppppcVar30 - uVar12 * (long)ppppppcVar28);
        }
        (*pppppppcVar34)[(long)ppppppcVar30] = (code *****)(pppcVar8 + 0x3c);
        pppppcVar18 = (code *****)*pppppcVar31;
        while (pppppcVar18 != (code *****)0x0) {
          ppppppcVar21 = (code ******)pppppcVar18[1];
          if (((ulong)ppppppcVar28 & uVar10) == 0) {
            ppppppcVar21 = (code ******)((ulong)ppppppcVar21 & uVar10);
          }
          else if (ppppppcVar28 <= ppppppcVar21) {
            uVar12 = 0;
            if (ppppppcVar28 != (code ******)0x0) {
              uVar12 = (ulong)ppppppcVar21 / (ulong)ppppppcVar28;
            }
            ppppppcVar21 = (code ******)((long)ppppppcVar21 - uVar12 * (long)ppppppcVar28);
          }
          pppppcVar22 = pppppcVar18;
          if (ppppppcVar21 != ppppppcVar30) {
            ppppppcVar25 = *pppppppcVar34;
            if (ppppppcVar25[(long)ppppppcVar21] == (code *****)0x0) {
              ppppppcVar25[(long)ppppppcVar21] = pppppcVar31;
              ppppppcVar30 = ppppppcVar21;
            }
            else {
              *pppppcVar31 = *pppppcVar18;
              *pppppcVar18 = *ppppppcVar25[(long)ppppppcVar21];
              *ppppppcVar25[(long)ppppppcVar21] = (code ****)pppppcVar18;
              pppppcVar22 = pppppcVar31;
            }
          }
          pppppcVar31 = pppppcVar22;
          pppppcVar18 = (code *****)*pppppcVar22;
        }
      }
    }
    else if (ppppppcVar30 < ppppppcVar28) {
      ppppppcVar21 = (code ******)(long)((float)pppcVar8[0x3d] / *(float *)(pppcVar8 + 0x3e));
      if ((ppppppcVar28 < (code ******)0x3) ||
         (((ulong)ppppppcVar28 & (long)ppppppcVar28 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((code ******)0x1 < ppppppcVar21) {
        ppppppcVar21 = (code ******)(1L << (-LZCOUNT((long)ppppppcVar21 + -1) & 0x3fU));
      }
      if (ppppppcVar30 <= ppppppcVar21) {
        ppppppcVar30 = ppppppcVar21;
      }
      if (ppppppcVar30 < ppppppcVar28) {
        if (ppppppcVar30 != (code ******)0x0) goto LAB_10a3c46f4;
        ppppppcVar30 = *pppppppcVar34;
        *pppppppcVar34 = (code ******)0x0;
        if (ppppppcVar30 != (code ******)0x0) {
          __ZdlPv();
        }
        ppppppcVar28 = (code ******)0x0;
        pppcVar8[0x3b] = (code **)0x0;
      }
      else {
        ppppppcVar28 = (code ******)pppcVar8[0x3b];
      }
    }
    if (((ulong)ppppppcVar28 & (long)ppppppcVar28 - 1U) == 0) {
      ppppppcVar30 = (code ******)((long)ppppppcVar28 - 1U & (ulong)ppppppcVar11);
    }
    else {
      ppppppcVar30 = ppppppcVar11;
      if (ppppppcVar28 <= ppppppcVar11) {
        uVar10 = 0;
        if (ppppppcVar28 != (code ******)0x0) {
          uVar10 = (ulong)ppppppcVar11 / (ulong)ppppppcVar28;
        }
        ppppppcVar30 = (code ******)((long)ppppppcVar11 - uVar10 * (long)ppppppcVar28);
      }
    }
  }
  ppppppcVar21 = *pppppppcVar34;
  ppppppcVar11 = (code ******)ppppppcVar21[(long)ppppppcVar30];
  if (ppppppcVar11 == (code ******)0x0) {
    *pppppppcVar32 = (code ******)pppcVar8[0x3c];
    pppcVar8[0x3c] = (code **)pppppppcVar32;
    ppppppcVar21[(long)ppppppcVar30] = (code *****)(pppcVar8 + 0x3c);
    if (*pppppppcVar32 != (code ******)0x0) {
      ppppppcVar11 = (code ******)(*pppppppcVar32)[1];
      if (((ulong)ppppppcVar28 & (long)ppppppcVar28 - 1U) == 0) {
        ppppppcVar11 = (code ******)((ulong)ppppppcVar11 & (long)ppppppcVar28 - 1U);
      }
      else if (ppppppcVar28 <= ppppppcVar11) {
        uVar10 = 0;
        if (ppppppcVar28 != (code ******)0x0) {
          uVar10 = (ulong)ppppppcVar11 / (ulong)ppppppcVar28;
        }
        ppppppcVar11 = (code ******)((long)ppppppcVar11 - uVar10 * (long)ppppppcVar28);
      }
      ppppppcVar11 = *pppppppcVar34 + (long)ppppppcVar11;
      goto LAB_10a3c48d0;
    }
  }
  else {
    *pppppppcVar32 = (code ******)*ppppppcVar11;
LAB_10a3c48d0:
    *ppppppcVar11 = (code *****)pppppppcVar32;
  }
  pppcVar8[0x3d] = (code **)((long)pppcVar8[0x3d] + 1);
LAB_10a3c48e0:
  if (pppppppcStack_238 != (code *******)0x0) {
    pppppppcStack_230 = pppppppcStack_238;
    __ZdlPv();
  }
  pppppppcStack_200 = (code *******)&pppppppcStack_250;
  FUN_10a34cfd0(&pppppppcStack_200);
  __ZNSt3__15mutex6unlockEv(pppcVar8 + 0x31);
  if ((uVar33 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv(pppcStack_280);
  }
  pppppppcStack_200 = (code *******)0x0;
  pppppppcStack_1f8 = (code *******)0x0;
  pppppppcStack_1f0 = (code *******)0x0;
  if ((long)pppppppcStack_210 - (long)pppppppcStack_218 != 0) {
    pppppppcVar32 =
         (code *******)
         (((long)pppppppcStack_210 - (long)pppppppcStack_218 >> 3) * 0x6db6db6db6db6db7);
    if ((ulong)pppppppcVar32 >> 0x3b != 0) {
      FUN_10a3ebd80();
      goto LAB_10a3c4e0c;
    }
    pppppppcStack_230 = (code *******)&pppppppcStack_200;
    FUN_10a3ebd94();
    pppppppcVar20 =
         (code *******)((long)pppppppcVar32 - ((long)pppppppcStack_1f8 - (long)pppppppcStack_200));
    _memcpy(pppppppcVar20);
    pppppppcStack_240 = pppppppcStack_200;
    pppppppcStack_238 = pppppppcStack_1f0;
    pppppppcStack_250 = pppppppcStack_200;
    pppppppcStack_248 = pppppppcStack_200;
    pppppppcStack_200 = pppppppcVar20;
    pppppppcStack_1f8 = pppppppcVar32;
    pppppppcStack_1f0 = pppppppcVar32 + (long)ppppppcVar14 * 4;
    func_0x00010a3ebdc8(&pppppppcStack_250);
  }
  pppppppcVar32 = pppppppcStack_210;
  if (pppppppcStack_218 != pppppppcStack_210) {
    pppppppcVar20 = pppppppcStack_218;
    do {
      pppppppcVar17 = pppppppcVar20 + 2;
      FUN_10a3c39a4(&lStack_260);
      if (lStack_260 != 0) {
        FUN_10a2ea178(&ppppppcStack_270);
        if (pppppppcStack_1f8 < pppppppcStack_1f0) {
          ppppppcVar30 = *pppppppcVar20;
          pppppppcStack_1f8[1] = pppppppcVar20[1];
          *pppppppcStack_1f8 = ppppppcVar30;
          pppppppcStack_1f8[3] = ppppppcStack_268;
          pppppppcStack_1f8[2] = ppppppcStack_270;
          pppppppcStack_1f8 = pppppppcStack_1f8 + 4;
        }
        else {
          lVar19 = (long)pppppppcStack_1f8 - (long)pppppppcStack_200;
          uVar33 = (lVar19 >> 5) + 1;
          if (uVar33 >> 0x3b != 0) {
            FUN_10a3ebd80();
            goto LAB_10a3c4e0c;
          }
          uVar10 = (long)pppppppcStack_1f0 - (long)pppppppcStack_200 >> 4;
          if (uVar10 <= uVar33) {
            uVar10 = uVar33;
          }
          if (0x7fffffffffffffdf < (ulong)((long)pppppppcStack_1f0 - (long)pppppppcStack_200)) {
            uVar10 = 0x7ffffffffffffff;
          }
          pppppppcStack_230 = (code *******)&pppppppcStack_200;
          FUN_10a3ebd94();
          plVar6 = (long *)(uVar10 + lVar19);
          ppppppcVar30 = *pppppppcVar20;
          plVar6[1] = (long)pppppppcVar20[1];
          *plVar6 = (long)ppppppcVar30;
          plVar6[3] = (long)ppppppcStack_268;
          plVar6[2] = (long)ppppppcStack_270;
          ppppppcStack_270 = (code ******)0x0;
          ppppppcStack_268 = (code ******)0x0;
          pppppppcVar24 = (code *******)(plVar6 + 4);
          pppppppcVar29 =
               (code *******)((long)plVar6 - ((long)pppppppcStack_1f8 - (long)pppppppcStack_200));
          _memcpy(pppppppcVar29);
          pppppppcStack_240 = pppppppcStack_200;
          pppppppcStack_238 = pppppppcStack_1f0;
          pppppppcStack_250 = pppppppcStack_200;
          pppppppcStack_248 = pppppppcStack_200;
          pppppppcStack_200 = pppppppcVar29;
          pppppppcStack_1f8 = pppppppcVar24;
          pppppppcStack_1f0 = (code *******)(uVar10 + (long)pppppppcVar17 * 0x20);
          func_0x00010a3ebdc8(&pppppppcStack_250);
          ppppppcVar30 = ppppppcStack_268;
          pppppppcStack_1f8 = pppppppcVar24;
          if (ppppppcStack_268 != (code ******)0x0) {
            ppppppcVar14 = ppppppcStack_268 + 1;
            do {
              pppppcVar31 = *ppppppcVar14;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
              if (bVar2) {
                *ppppppcVar14 = (code *****)((long)pppppcVar31 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pppppcVar31 == (code *****)0x0) {
              (*(code *)(*ppppppcStack_268)[2])(ppppppcStack_268);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar30);
            }
          }
        }
      }
      plVar6 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar5 = plStack_258 + 1;
        do {
          lVar19 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      pppppppcVar20 = pppppppcVar20 + 7;
    } while (pppppppcVar20 != pppppppcVar32);
  }
  if (pppppppcStack_200 != pppppppcStack_1f8) {
    __ZNSt3__15mutex4lockEv(pppcVar8 + 0x31);
    func_0x00010a3f25e4(pppppppcVar34,ppppppcStack_220);
    if (pppppppcVar34 != (code *******)0x0) {
      pppppppcVar17 = pppppppcVar34 + 3;
      lVar19 = (long)pppppppcVar34[4] - (long)*pppppppcVar17;
      uVar33 = ((long)pppppppcStack_1f8 - (long)pppppppcStack_200 >> 5) + (lVar19 >> 4);
      pppppppcVar32 = pppppppcStack_200;
      pppppppcVar20 = pppppppcStack_1f8;
      if ((ulong)((long)pppppppcVar34[5] - (long)*pppppppcVar17 >> 4) < uVar33) {
        if (uVar33 >> 0x3c != 0) {
          func_0x00010a3e9da4();
LAB_10a3c4e0c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3c4e10);
          (*pcVar3)();
        }
        pppppppcVar32 = pppppppcVar17;
        pppppppcStack_230 = pppppppcVar17;
        FUN_10a3e9db8();
        ppppppcVar30 = (code ******)((long)pppppppcVar32 + lVar19);
        ppppppcVar14 = (code ******)
                       ((long)ppppppcVar30 - ((long)pppppppcVar34[4] - (long)pppppppcVar34[3]));
        _memcpy(ppppppcVar14);
        pppppppcStack_250 = (code *******)pppppppcVar34[3];
        pppppppcVar34[3] = ppppppcVar14;
        pppppppcVar34[4] = ppppppcVar30;
        pppppppcStack_238 = (code *******)pppppppcVar34[5];
        pppppppcVar34[5] = (code ******)(pppppppcVar32 + uVar33 * 2);
        pppppppcStack_248 = pppppppcStack_250;
        pppppppcStack_240 = pppppppcStack_250;
        func_0x00010a3e9dec(&pppppppcStack_250);
        pppppppcVar32 = pppppppcStack_200;
        pppppppcVar20 = pppppppcStack_1f8;
      }
      for (; pppppppcVar24 = pppppppcStack_1f8, bVar2 = pppppppcVar32 != pppppppcStack_1f8,
          pppppppcStack_1f8 = pppppppcVar20, bVar2; pppppppcVar32 = pppppppcVar32 + 4) {
        ppppppcVar30 = pppppppcVar34[4];
        if (ppppppcVar30 < pppppppcVar34[5]) {
          ppppppcVar11 = pppppppcVar32[2];
          ppppppcVar14 = ppppppcVar30 + 2;
          ppppppcVar30[1] = (code *****)pppppppcVar32[3];
          *ppppppcVar30 = (code *****)ppppppcVar11;
          pppppppcVar32[2] = (code ******)0x0;
          pppppppcVar32[3] = (code ******)0x0;
        }
        else {
          lVar19 = (long)ppppppcVar30 - (long)*pppppppcVar17;
          uVar33 = (lVar19 >> 4) + 1;
          if (uVar33 >> 0x3c != 0) {
            func_0x00010a3e9da4();
            goto LAB_10a3c4e0c;
          }
          uVar12 = (long)pppppppcVar34[5] - (long)*pppppppcVar17;
          uVar10 = (long)uVar12 >> 3;
          if (uVar10 <= uVar33) {
            uVar10 = uVar33;
          }
          if (0x7fffffffffffffef < uVar12) {
            uVar10 = 0xfffffffffffffff;
          }
          pppppppcVar20 = pppppppcVar17;
          pppppppcStack_230 = pppppppcVar17;
          FUN_10a3e9db8();
          plVar6 = (long *)((long)pppppppcVar20 + lVar19);
          ppppppcVar30 = pppppppcVar32[2];
          ppppppcVar14 = (code ******)(plVar6 + 2);
          plVar6[1] = (long)pppppppcVar32[3];
          *plVar6 = (long)ppppppcVar30;
          pppppppcVar32[2] = (code ******)0x0;
          pppppppcVar32[3] = (code ******)0x0;
          ppppppcVar30 = (code ******)
                         ((long)plVar6 - ((long)pppppppcVar34[4] - (long)pppppppcVar34[3]));
          _memcpy(ppppppcVar30);
          pppppppcStack_250 = (code *******)pppppppcVar34[3];
          pppppppcVar34[3] = ppppppcVar30;
          pppppppcVar34[4] = ppppppcVar14;
          pppppppcStack_238 = (code *******)pppppppcVar34[5];
          pppppppcVar34[5] = (code ******)(pppppppcVar20 + uVar10 * 2);
          pppppppcStack_248 = pppppppcStack_250;
          pppppppcStack_240 = pppppppcStack_250;
          func_0x00010a3e9dec(&pppppppcStack_250);
        }
        pppppppcVar34[4] = ppppppcVar14;
        ppppppcVar30 = pppppppcVar34[6];
        FUN_10a3c0e74(ppppppcVar30,pppppppcVar34[7],pppppppcVar32);
        if (pppppppcVar34[7] < ppppppcVar30) goto LAB_10a3c4e0c;
        if (ppppppcVar30 != pppppppcVar34[7]) {
          pppppppcVar34[7] = ppppppcVar30;
        }
        pppcVar7 = pppcVar8 + 0x3f;
        func_0x00010a3f2544(pppcVar7,*pppppppcVar32,pppppppcVar32[1]);
        if (pppcVar7 != (code ***)0x0) {
          ppcVar15 = pppcVar7[4];
          ppcVar9 = pppcVar7[5];
          ppcVar26 = ppcVar15;
          if (ppcVar15 == ppcVar9) {
LAB_10a3c4d04:
            if (ppcVar9 < ppcVar26) goto LAB_10a3c4e0c;
            if (ppcVar26 != ppcVar9) {
              pppcVar7[5] = ppcVar26;
              ppcVar9 = ppcVar26;
            }
          }
          else {
            do {
              if ((code ******)*ppcVar26 == ppppppcStack_220) {
                ppcVar27 = ppcVar26;
                if (ppcVar26 != ppcVar9) {
                  while (ppcVar27 = ppcVar27 + 1, ppcVar27 != ppcVar9) {
                    if ((code ******)*ppcVar27 != ppppppcStack_220) {
                      *ppcVar26 = *ppcVar27;
                      ppcVar26 = ppcVar26 + 1;
                    }
                  }
                }
                goto LAB_10a3c4d04;
              }
              ppcVar26 = ppcVar26 + 1;
            } while (ppcVar26 != ppcVar9);
          }
          if (ppcVar15 == ppcVar9) {
            func_0x00010a3f2680(pppcVar8 + 0x3f,pppcVar7);
          }
        }
        pppppppcVar20 = pppppppcStack_1f8;
        pppppppcStack_1f8 = pppppppcVar24;
      }
    }
    __ZNSt3__15mutex6unlockEv(pppcVar8 + 0x31);
  }
  *extraout_x8 = pppcVar8;
  extraout_x8[1] = ppppppcStack_220;
  FUN_10a3ebe18(&pppppppcStack_200);
  FUN_10a3ea4a4(&pppppppcStack_218);
  return;
}



/* Entry: 10a3c3f80; end: 10a3c4ee7;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c4c78) */
/* WARNING: Removing unreachable block (ram,0x00010a3c4d20) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a3c3f80(long *param_1,long param_2,long *param_3,long ******param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long ******pppppplVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *******ppppppplVar15;
  long *****ppppplVar16;
  long ******pppppplVar17;
  undefined8 *puVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  undefined8 *puVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  long ******unaff_x22;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long *******unaff_x25;
  long lVar30;
  long *******ppppppplVar31;
  ulong uVar32;
  long *******ppppppplVar33;
  float fVar34;
  long ****pppplVar35;
  long lStack_110;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  
  ppppppplStack_a8 = (long *******)0x0;
  ppppppplStack_a0 = (long *******)0x0;
  ppppppplStack_98 = (long *******)0x0;
  uVar32 = 0;
  pppppplVar11 = param_4;
  FUN_10a3c33cc();
  pppppplStack_b0 = (long ******)0x0;
  FUN_10a1c5b90();
  if ((uVar32 & 1) == 0) {
    lStack_110 = param_2 + 0x70;
    __ZNSt3__15mutex4lockEv();
  }
  else {
    lStack_110 = 0;
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x188);
  pppppplStack_b0 = *(long *******)(param_2 + 0x1c8);
  *(long *)(param_2 + 0x1c8) = (long)pppppplStack_b0 + 1;
  ppppppplStack_c8 = (long *******)0x0;
  ppppppplStack_d0 = (long *******)0x0;
  pppppplStack_b8 = (long ******)0x0;
  ppppppplStack_c0 = (long *******)0x0;
  ppppppplStack_d8 = (long *******)0x0;
  ppppppplStack_e0 = (long *******)0x0;
  if (param_4 != (long ******)0x0) {
    unaff_x22 = (long ******)(param_2 + 0x208);
    plVar3 = param_3 + (long)param_4 * 2;
    do {
      lVar12 = *param_3;
      lVar8 = param_2 + 0x130;
      func_0x00010a3f30f0(lVar8,lVar12,param_3[1]);
      if (lVar8 != 0) {
        if (((*(long *)(lVar8 + 0x30) == 0) || (*(long *)(*(long *)(lVar8 + 0x30) + 8) == -1)) &&
           ((*(long *)(lVar8 + 0x40) == 0 || (*(long *)(*(long *)(lVar8 + 0x40) + 8) == -1)))) {
          FUN_10a3f3190(param_2 + 0x130,lVar8);
        }
        else if (ppppppplStack_a0 < ppppppplStack_98) {
          pppppplVar11 = (long ******)*param_3;
          ppppppplStack_a0[1] = (long ******)param_3[1];
          *ppppppplStack_a0 = pppppplVar11;
          pppppplVar11 = *(long *******)(lVar8 + 0x20);
          ppppppplStack_a0[3] = *(long *******)(lVar8 + 0x28);
          ppppppplStack_a0[2] = pppppplVar11;
          pppppplVar11 = *(long *******)(lVar8 + 0x30);
          ppppppplStack_a0[4] = pppppplVar11;
          if (pppppplVar11 != (long ******)0x0) {
            pppppplVar11 = pppppplVar11 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
              if (bVar6) {
                *pppppplVar11 = (long *****)((long)*pppppplVar11 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar12 = *(long *)(lVar8 + 0x40);
          pppppplVar11 = *(long *******)(lVar8 + 0x38);
          ppppppplStack_a0[6] = *(long *******)(lVar8 + 0x40);
          ppppppplStack_a0[5] = pppppplVar11;
          if (lVar12 != 0) {
            plVar1 = (long *)(lVar12 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          unaff_x25 = ppppppplStack_a0 + 7;
          ppppppplStack_a0 = unaff_x25;
        }
        else {
          lVar30 = (long)ppppppplStack_a0 - (long)ppppppplStack_a8;
          uVar9 = (lVar30 >> 3) * 0x6db6db6db6db6db7 + 1;
          if (0x492492492492492 < uVar9) {
            FUN_10a3ea348();
            goto LAB_10a3c4e0c;
          }
          lVar13 = (long)ppppppplStack_98 - (long)ppppppplStack_a8 >> 3;
          uVar10 = lVar13 * -0x2492492492492492;
          if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
            uVar10 = uVar9;
          }
          if (0x249249249249248 < (ulong)(lVar13 * 0x6db6db6db6db6db7)) {
            uVar10 = 0x492492492492492;
          }
          ppppppplStack_70 = (long *******)&ppppppplStack_a8;
          FUN_10a3ea35c();
          plVar1 = (long *)(uVar10 + lVar30);
          lVar30 = *param_3;
          plVar1[1] = param_3[1];
          *plVar1 = lVar30;
          lVar30 = *(long *)(lVar8 + 0x20);
          plVar1[3] = *(long *)(lVar8 + 0x28);
          plVar1[2] = lVar30;
          lVar30 = *(long *)(lVar8 + 0x30);
          plVar1[4] = lVar30;
          if (lVar30 != 0) {
            plVar2 = (long *)(lVar30 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar30 = *(long *)(lVar8 + 0x40);
          lVar13 = *(long *)(lVar8 + 0x38);
          plVar1[6] = *(long *)(lVar8 + 0x40);
          plVar1[5] = lVar13;
          if (lVar30 != 0) {
            plVar2 = (long *)(lVar30 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          unaff_x25 = (long *******)(plVar1 + 7);
          ppppppplVar33 =
               (long *******)((long)plVar1 + ((long)ppppppplStack_a8 - (long)ppppppplStack_a0));
          func_0x00010a3ea3a4(ppppppplStack_a8,ppppppplStack_a0,ppppppplVar33);
          ppppppplStack_80 = ppppppplStack_a8;
          ppppppplStack_78 = ppppppplStack_98;
          ppppppplStack_90 = ppppppplStack_a8;
          ppppppplStack_88 = ppppppplStack_a8;
          ppppppplStack_a8 = ppppppplVar33;
          ppppppplStack_a0 = unaff_x25;
          ppppppplStack_98 = (long *******)(uVar10 + lVar12 * 0x38);
          func_0x00010a3ea458(&ppppppplStack_90);
          ppppppplStack_a0 = unaff_x25;
        }
      }
      FUN_10a3c4ee8(&ppppppplStack_c8,param_3);
      ppppppplVar31 = (long *******)param_3[1];
      ppppppplVar33 = *(long ********)(param_2 + 0x200);
      if (ppppppplVar33 != (long *******)0x0) {
        uVar9 = (long)ppppppplVar33 - 1;
        if (((ulong)ppppppplVar33 & uVar9) == 0) {
          unaff_x25 = (long *******)(uVar9 & (ulong)ppppppplVar31);
        }
        else {
          unaff_x25 = ppppppplVar31;
          if (ppppppplVar33 <= ppppppplVar31) {
            uVar10 = 0;
            if (ppppppplVar33 != (long *******)0x0) {
              uVar10 = (ulong)ppppppplVar31 / (ulong)ppppppplVar33;
            }
            unaff_x25 = (long *******)((long)ppppppplVar31 - uVar10 * (long)ppppppplVar33);
          }
        }
        puVar14 = *(undefined8 **)(*(long *)(param_2 + 0x1f8) + (long)unaff_x25 * 8);
        if ((puVar14 != (undefined8 *)0x0) &&
           (ppppplVar29 = (long *****)*puVar14, ppppplVar29 != (long *****)0x0)) {
          do {
            ppppppplVar19 = (long *******)ppppplVar29[1];
            if (ppppppplVar19 == ppppppplVar31) {
              if (ppppplVar29[2] == (long ****)*param_3 &&
                  (long *******)ppppplVar29[3] == ppppppplVar31) goto LAB_10a3c4524;
            }
            else {
              if (((ulong)ppppppplVar33 & uVar9) == 0) {
                ppppppplVar19 = (long *******)((ulong)ppppppplVar19 & uVar9);
              }
              else if (ppppppplVar33 <= ppppppplVar19) {
                uVar10 = 0;
                if (ppppppplVar33 != (long *******)0x0) {
                  uVar10 = (ulong)ppppppplVar19 / (ulong)ppppppplVar33;
                }
                ppppppplVar19 = (long *******)((long)ppppppplVar19 - uVar10 * (long)ppppppplVar33);
              }
              if (ppppppplVar19 != unaff_x25) break;
            }
            ppppplVar29 = (long *****)*ppppplVar29;
          } while (ppppplVar29 != (long *****)0x0);
        }
      }
      ppppplVar29 = (long *****)0x38;
      __Znwm();
      *ppppplVar29 = (long ****)0x0;
      ppppplVar29[1] = (long ****)ppppppplVar31;
      pppplVar35 = (long ****)*param_3;
      ppppplVar29[3] = (long ****)param_3[1];
      ppppplVar29[2] = pppplVar35;
      ppppplVar29[5] = (long ****)0x0;
      ppppplVar29[6] = (long ****)0x0;
      ppppplVar29[4] = (long ****)0x0;
      fVar34 = (float)(*(long *)(param_2 + 0x210) + 1);
      if ((ppppppplVar33 == (long *******)0x0) ||
         (*(float *)(param_2 + 0x218) * (float)ppppppplVar33 < fVar34)) {
        uVar9 = 1;
        if ((long *******)0x2 < ppppppplVar33) {
          uVar9 = (ulong)(((ulong)ppppppplVar33 & (long)ppppppplVar33 - 1U) != 0);
        }
        ppppppplVar19 = (long *******)(uVar9 | (long)ppppppplVar33 << 1);
        ppppppplVar15 = (long *******)(long)(fVar34 / *(float *)(param_2 + 0x218));
        if (ppppppplVar19 <= ppppppplVar15) {
          ppppppplVar19 = ppppppplVar15;
        }
        if ((long)ppppppplVar19 - 1U == 0) {
          ppppppplVar19 = (long *******)0x2;
        }
        else if (((ulong)ppppppplVar19 & (long)ppppppplVar19 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          ppppppplVar33 = *(long ********)(param_2 + 0x200);
        }
        if (ppppppplVar33 < ppppppplVar19) {
LAB_10a3c4344:
          if ((ulong)ppppppplVar19 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a3c4e0c;
          }
          lVar8 = (long)ppppppplVar19 << 3;
          __Znwm();
          lVar12 = *(long *)(param_2 + 0x1f8);
          *(long *)(param_2 + 0x1f8) = lVar8;
          if (lVar12 != 0) {
            __ZdlPv();
          }
          ppppppplVar33 = (long *******)0x0;
          *(long ********)(param_2 + 0x200) = ppppppplVar19;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x1f8) + (long)ppppppplVar33 * 8) = 0;
            ppppppplVar33 = (long *******)((long)ppppppplVar33 + 1);
          } while (ppppppplVar19 != ppppppplVar33);
          ppppplVar16 = *unaff_x22;
          ppppppplVar33 = ppppppplVar19;
          if (ppppplVar16 != (long *****)0x0) {
            ppppppplVar15 = (long *******)ppppplVar16[1];
            uVar9 = (long)ppppppplVar19 - 1;
            if (((ulong)ppppppplVar19 & uVar9) == 0) {
              ppppppplVar15 = (long *******)((ulong)ppppppplVar15 & uVar9);
            }
            else if (ppppppplVar19 <= ppppppplVar15) {
              uVar10 = 0;
              if (ppppppplVar19 != (long *******)0x0) {
                uVar10 = (ulong)ppppppplVar15 / (ulong)ppppppplVar19;
              }
              ppppppplVar15 = (long *******)((long)ppppppplVar15 - uVar10 * (long)ppppppplVar19);
            }
            *(long *******)(*(long *)(param_2 + 0x1f8) + (long)ppppppplVar15 * 8) = unaff_x22;
            ppppplVar22 = (long *****)*ppppplVar16;
            while (ppppplVar22 != (long *****)0x0) {
              ppppppplVar24 = (long *******)ppppplVar22[1];
              if (((ulong)ppppppplVar19 & uVar9) == 0) {
                ppppppplVar24 = (long *******)((ulong)ppppppplVar24 & uVar9);
              }
              else if (ppppppplVar19 <= ppppppplVar24) {
                uVar10 = 0;
                if (ppppppplVar19 != (long *******)0x0) {
                  uVar10 = (ulong)ppppppplVar24 / (ulong)ppppppplVar19;
                }
                ppppppplVar24 = (long *******)((long)ppppppplVar24 - uVar10 * (long)ppppppplVar19);
              }
              ppppplVar23 = ppppplVar22;
              if (ppppppplVar24 != ppppppplVar15) {
                lVar8 = *(long *)(param_2 + 0x1f8);
                if (*(long *)(lVar8 + (long)ppppppplVar24 * 8) == 0) {
                  *(long ******)(lVar8 + (long)ppppppplVar24 * 8) = ppppplVar16;
                  ppppppplVar15 = ppppppplVar24;
                }
                else {
                  *ppppplVar16 = *ppppplVar22;
                  *ppppplVar22 = (long ****)**(undefined8 **)(lVar8 + (long)ppppppplVar24 * 8);
                  **(long **)(lVar8 + (long)ppppppplVar24 * 8) = (long)ppppplVar22;
                  ppppplVar23 = ppppplVar16;
                }
              }
              ppppplVar16 = ppppplVar23;
              ppppplVar22 = (long *****)*ppppplVar23;
            }
          }
        }
        else if (ppppppplVar19 < ppppppplVar33) {
          ppppppplVar15 =
               (long *******)
               (long)((float)*(ulong *)(param_2 + 0x210) / *(float *)(param_2 + 0x218));
          if ((ppppppplVar33 < (long *******)0x3) ||
             (((ulong)ppppppplVar33 & (long)ppppppplVar33 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *******)0x1 < ppppppplVar15) {
            ppppppplVar15 = (long *******)(1L << (-LZCOUNT((long)ppppppplVar15 + -1) & 0x3fU));
          }
          if (ppppppplVar19 <= ppppppplVar15) {
            ppppppplVar19 = ppppppplVar15;
          }
          if (ppppppplVar19 < ppppppplVar33) {
            if (ppppppplVar19 != (long *******)0x0) goto LAB_10a3c4344;
            lVar8 = *(long *)(param_2 + 0x1f8);
            *(undefined8 *)(param_2 + 0x1f8) = 0;
            if (lVar8 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_2 + 0x200) = 0;
            ppppppplVar33 = (long *******)0x0;
          }
          else {
            ppppppplVar33 = *(long ********)(param_2 + 0x200);
          }
        }
        if (((ulong)ppppppplVar33 & (long)ppppppplVar33 - 1U) == 0) {
          unaff_x25 = (long *******)((long)ppppppplVar33 - 1U & (ulong)ppppppplVar31);
        }
        else {
          unaff_x25 = ppppppplVar31;
          if (ppppppplVar33 <= ppppppplVar31) {
            uVar9 = 0;
            if (ppppppplVar33 != (long *******)0x0) {
              uVar9 = (ulong)ppppppplVar31 / (ulong)ppppppplVar33;
            }
            unaff_x25 = (long *******)((long)ppppppplVar31 - uVar9 * (long)ppppppplVar33);
          }
        }
      }
      lVar8 = *(long *)(param_2 + 0x1f8);
      puVar14 = *(undefined8 **)(lVar8 + (long)unaff_x25 * 8);
      if (puVar14 == (undefined8 *)0x0) {
        *ppppplVar29 = (long ****)*unaff_x22;
        *unaff_x22 = ppppplVar29;
        *(long *******)(lVar8 + (long)unaff_x25 * 8) = unaff_x22;
        if (*ppppplVar29 != (long ****)0x0) {
          ppppppplVar31 = (long *******)(*ppppplVar29)[1];
          if (((ulong)ppppppplVar33 & (long)ppppppplVar33 - 1U) == 0) {
            ppppppplVar31 = (long *******)((ulong)ppppppplVar31 & (long)ppppppplVar33 - 1U);
          }
          else if (ppppppplVar33 <= ppppppplVar31) {
            uVar9 = 0;
            if (ppppppplVar33 != (long *******)0x0) {
              uVar9 = (ulong)ppppppplVar31 / (ulong)ppppppplVar33;
            }
            ppppppplVar31 = (long *******)((long)ppppppplVar31 - uVar9 * (long)ppppppplVar33);
          }
          puVar14 = (undefined8 *)(*(long *)(param_2 + 0x1f8) + (long)ppppppplVar31 * 8);
          goto LAB_10a3c4514;
        }
      }
      else {
        *ppppplVar29 = (long ****)*puVar14;
LAB_10a3c4514:
        *puVar14 = ppppplVar29;
      }
      *(long *)(param_2 + 0x210) = *(long *)(param_2 + 0x210) + 1;
LAB_10a3c4524:
      pppppplVar11 = (long ******)&pppppplStack_b0;
      func_0x00010a3c4fb0(ppppplVar29 + 4);
      param_3 = param_3 + 2;
    } while (param_3 != plVar3);
    uVar32 = uVar32 & 0xffffffff;
  }
  pppppplVar28 = pppppplStack_b0;
  ppppppplVar33 = (long *******)(param_2 + 0x1d0);
  pppppplVar26 = *(long *******)(param_2 + 0x1d8);
  if (pppppplVar26 != (long ******)0x0) {
    uVar9 = (long)pppppplVar26 - 1;
    if (((ulong)pppppplVar26 & uVar9) == 0) {
      unaff_x22 = (long ******)(uVar9 & (ulong)pppppplStack_b0);
    }
    else {
      unaff_x22 = pppppplStack_b0;
      if (pppppplVar26 <= pppppplStack_b0) {
        uVar10 = 0;
        if (pppppplVar26 != (long ******)0x0) {
          uVar10 = (ulong)pppppplStack_b0 / (ulong)pppppplVar26;
        }
        unaff_x22 = (long ******)((long)pppppplStack_b0 - uVar10 * (long)pppppplVar26);
      }
    }
    ppppplVar29 = (*ppppppplVar33)[(long)unaff_x22];
    if (ppppplVar29 != (long *****)0x0) {
      do {
        while( true ) {
          ppppplVar29 = (long *****)*ppppplVar29;
          if (ppppplVar29 == (long *****)0x0) goto LAB_10a3c4624;
          pppppplVar20 = (long ******)ppppplVar29[1];
          if (pppppplVar20 != pppppplStack_b0) break;
          if ((long ******)ppppplVar29[2] == pppppplStack_b0) goto LAB_10a3c48e0;
        }
        if (((ulong)pppppplVar26 & uVar9) == 0) {
          pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar9);
        }
        else if (pppppplVar26 <= pppppplVar20) {
          uVar10 = 0;
          if (pppppplVar26 != (long ******)0x0) {
            uVar10 = (ulong)pppppplVar20 / (ulong)pppppplVar26;
          }
          pppppplVar20 = (long ******)((long)pppppplVar20 - uVar10 * (long)pppppplVar26);
        }
      } while (pppppplVar20 == unaff_x22);
    }
  }
LAB_10a3c4624:
  ppppppplVar31 = (long *******)0x48;
  __Znwm();
  ppppppplStack_80 = (long *******)0x1;
  *ppppppplVar31 = (long ******)0x0;
  ppppppplVar31[1] = pppppplVar28;
  ppppppplVar31[2] = pppppplVar28;
  ppppppplVar31[4] = (long ******)ppppppplStack_d8;
  ppppppplVar31[3] = (long ******)ppppppplStack_e0;
  ppppppplVar31[5] = (long ******)ppppppplStack_d0;
  ppppppplStack_e0 = (long *******)0x0;
  ppppppplStack_d8 = (long *******)0x0;
  ppppppplVar31[7] = (long ******)ppppppplStack_c0;
  ppppppplVar31[6] = (long ******)ppppppplStack_c8;
  ppppppplVar31[8] = pppppplStack_b8;
  ppppppplStack_d0 = (long *******)0x0;
  ppppppplStack_c8 = (long *******)0x0;
  ppppppplStack_c0 = (long *******)0x0;
  pppppplStack_b8 = (long ******)0x0;
  fVar34 = (float)(*(long *)(param_2 + 0x1e8) + 1);
  ppppppplStack_90 = ppppppplVar31;
  ppppppplStack_88 = ppppppplVar33;
  if ((pppppplVar26 == (long ******)0x0) ||
     (*(float *)(param_2 + 0x1f0) * (float)pppppplVar26 < fVar34)) {
    uVar9 = 1;
    if ((long ******)0x2 < pppppplVar26) {
      uVar9 = (ulong)(((ulong)pppppplVar26 & (long)pppppplVar26 - 1U) != 0);
    }
    pppppplVar20 = (long ******)(uVar9 | (long)pppppplVar26 << 1);
    pppppplVar17 = (long ******)(long)(fVar34 / *(float *)(param_2 + 0x1f0));
    if (pppppplVar20 <= pppppplVar17) {
      pppppplVar20 = pppppplVar17;
    }
    if ((long)pppppplVar20 - 1U == 0) {
      pppppplVar20 = (long ******)0x2;
    }
    else if (((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pppppplVar26 = *(long *******)(param_2 + 0x1d8);
    }
    if (pppppplVar26 < pppppplVar20) {
LAB_10a3c46f4:
      pppppplVar26 = pppppplVar20;
      if ((ulong)pppppplVar26 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a3c4e0c;
      }
      pppppplVar20 = (long ******)((long)pppppplVar26 << 3);
      __Znwm();
      pppppplVar17 = *ppppppplVar33;
      *ppppppplVar33 = pppppplVar20;
      if (pppppplVar17 != (long ******)0x0) {
        __ZdlPv();
      }
      pppppplVar20 = (long ******)0x0;
      *(long *******)(param_2 + 0x1d8) = pppppplVar26;
      do {
        (*ppppppplVar33)[(long)pppppplVar20] = (long *****)0x0;
        pppppplVar20 = (long ******)((long)pppppplVar20 + 1);
      } while (pppppplVar26 != pppppplVar20);
      ppppplVar29 = *(long ******)(param_2 + 0x1e0);
      if (ppppplVar29 != (long *****)0x0) {
        pppppplVar20 = (long ******)ppppplVar29[1];
        uVar9 = (long)pppppplVar26 - 1;
        if (((ulong)pppppplVar26 & uVar9) == 0) {
          pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar9);
        }
        else if (pppppplVar26 <= pppppplVar20) {
          uVar10 = 0;
          if (pppppplVar26 != (long ******)0x0) {
            uVar10 = (ulong)pppppplVar20 / (ulong)pppppplVar26;
          }
          pppppplVar20 = (long ******)((long)pppppplVar20 - uVar10 * (long)pppppplVar26);
        }
        (*ppppppplVar33)[(long)pppppplVar20] = (long *****)(param_2 + 0x1e0);
        ppppplVar16 = (long *****)*ppppplVar29;
        while (ppppplVar16 != (long *****)0x0) {
          pppppplVar17 = (long ******)ppppplVar16[1];
          if (((ulong)pppppplVar26 & uVar9) == 0) {
            pppppplVar17 = (long ******)((ulong)pppppplVar17 & uVar9);
          }
          else if (pppppplVar26 <= pppppplVar17) {
            uVar10 = 0;
            if (pppppplVar26 != (long ******)0x0) {
              uVar10 = (ulong)pppppplVar17 / (ulong)pppppplVar26;
            }
            pppppplVar17 = (long ******)((long)pppppplVar17 - uVar10 * (long)pppppplVar26);
          }
          ppppplVar22 = ppppplVar16;
          if (pppppplVar17 != pppppplVar20) {
            pppppplVar25 = *ppppppplVar33;
            if (pppppplVar25[(long)pppppplVar17] == (long *****)0x0) {
              pppppplVar25[(long)pppppplVar17] = ppppplVar29;
              pppppplVar20 = pppppplVar17;
            }
            else {
              *ppppplVar29 = *ppppplVar16;
              *ppppplVar16 = *pppppplVar25[(long)pppppplVar17];
              *pppppplVar25[(long)pppppplVar17] = (long ****)ppppplVar16;
              ppppplVar22 = ppppplVar29;
            }
          }
          ppppplVar29 = ppppplVar22;
          ppppplVar16 = (long *****)*ppppplVar22;
        }
      }
    }
    else if (pppppplVar20 < pppppplVar26) {
      pppppplVar17 = (long ******)
                     (long)((float)*(ulong *)(param_2 + 0x1e8) / *(float *)(param_2 + 0x1f0));
      if ((pppppplVar26 < (long ******)0x3) ||
         (((ulong)pppppplVar26 & (long)pppppplVar26 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long ******)0x1 < pppppplVar17) {
        pppppplVar17 = (long ******)(1L << (-LZCOUNT((long)pppppplVar17 + -1) & 0x3fU));
      }
      if (pppppplVar20 <= pppppplVar17) {
        pppppplVar20 = pppppplVar17;
      }
      if (pppppplVar20 < pppppplVar26) {
        if (pppppplVar20 != (long ******)0x0) goto LAB_10a3c46f4;
        pppppplVar26 = *ppppppplVar33;
        *ppppppplVar33 = (long ******)0x0;
        if (pppppplVar26 != (long ******)0x0) {
          __ZdlPv();
        }
        pppppplVar26 = (long ******)0x0;
        *(undefined8 *)(param_2 + 0x1d8) = 0;
      }
      else {
        pppppplVar26 = *(long *******)(param_2 + 0x1d8);
      }
    }
    if (((ulong)pppppplVar26 & (long)pppppplVar26 - 1U) == 0) {
      unaff_x22 = (long ******)((long)pppppplVar26 - 1U & (ulong)pppppplVar28);
    }
    else {
      unaff_x22 = pppppplVar28;
      if (pppppplVar26 <= pppppplVar28) {
        uVar9 = 0;
        if (pppppplVar26 != (long ******)0x0) {
          uVar9 = (ulong)pppppplVar28 / (ulong)pppppplVar26;
        }
        unaff_x22 = (long ******)((long)pppppplVar28 - uVar9 * (long)pppppplVar26);
      }
    }
  }
  pppppplVar20 = *ppppppplVar33;
  pppppplVar28 = (long ******)pppppplVar20[(long)unaff_x22];
  if (pppppplVar28 == (long ******)0x0) {
    *ppppppplVar31 = *(long *******)(param_2 + 0x1e0);
    *(long ********)(param_2 + 0x1e0) = ppppppplVar31;
    pppppplVar20[(long)unaff_x22] = (long *****)(param_2 + 0x1e0);
    if (*ppppppplVar31 != (long ******)0x0) {
      pppppplVar28 = (long ******)(*ppppppplVar31)[1];
      if (((ulong)pppppplVar26 & (long)pppppplVar26 - 1U) == 0) {
        pppppplVar28 = (long ******)((ulong)pppppplVar28 & (long)pppppplVar26 - 1U);
      }
      else if (pppppplVar26 <= pppppplVar28) {
        uVar9 = 0;
        if (pppppplVar26 != (long ******)0x0) {
          uVar9 = (ulong)pppppplVar28 / (ulong)pppppplVar26;
        }
        pppppplVar28 = (long ******)((long)pppppplVar28 - uVar9 * (long)pppppplVar26);
      }
      pppppplVar28 = *ppppppplVar33 + (long)pppppplVar28;
      goto LAB_10a3c48d0;
    }
  }
  else {
    *ppppppplVar31 = (long ******)*pppppplVar28;
LAB_10a3c48d0:
    *pppppplVar28 = (long *****)ppppppplVar31;
  }
  *(long *)(param_2 + 0x1e8) = *(long *)(param_2 + 0x1e8) + 1;
LAB_10a3c48e0:
  if (ppppppplStack_c8 != (long *******)0x0) {
    ppppppplStack_c0 = ppppppplStack_c8;
    __ZdlPv();
  }
  ppppppplStack_90 = (long *******)&ppppppplStack_e0;
  FUN_10a34cfd0(&ppppppplStack_90);
  __ZNSt3__15mutex6unlockEv(param_2 + 0x188);
  if ((uVar32 & 1) == 0) {
    __ZNSt3__15mutex6unlockEv(lStack_110);
  }
  ppppppplStack_90 = (long *******)0x0;
  ppppppplStack_88 = (long *******)0x0;
  ppppppplStack_80 = (long *******)0x0;
  if ((long)ppppppplStack_a0 - (long)ppppppplStack_a8 != 0) {
    ppppppplVar31 =
         (long *******)(((long)ppppppplStack_a0 - (long)ppppppplStack_a8 >> 3) * 0x6db6db6db6db6db7)
    ;
    if ((ulong)ppppppplVar31 >> 0x3b != 0) {
      FUN_10a3ebd80();
      goto LAB_10a3c4e0c;
    }
    ppppppplStack_c0 = (long *******)&ppppppplStack_90;
    FUN_10a3ebd94();
    ppppppplVar19 =
         (long *******)((long)ppppppplVar31 - ((long)ppppppplStack_88 - (long)ppppppplStack_90));
    _memcpy(ppppppplVar19);
    ppppppplStack_d0 = ppppppplStack_90;
    ppppppplStack_c8 = ppppppplStack_80;
    ppppppplStack_e0 = ppppppplStack_90;
    ppppppplStack_d8 = ppppppplStack_90;
    ppppppplStack_90 = ppppppplVar19;
    ppppppplStack_88 = ppppppplVar31;
    ppppppplStack_80 = ppppppplVar31 + (long)pppppplVar11 * 4;
    func_0x00010a3ebdc8(&ppppppplStack_e0);
  }
  ppppppplVar31 = ppppppplStack_a0;
  if (ppppppplStack_a8 != ppppppplStack_a0) {
    ppppppplVar19 = ppppppplStack_a8;
    do {
      ppppppplVar15 = ppppppplVar19 + 2;
      FUN_10a3c39a4(&lStack_f0);
      if (lStack_f0 != 0) {
        FUN_10a2ea178(&pppppplStack_100);
        if (ppppppplStack_88 < ppppppplStack_80) {
          pppppplVar11 = *ppppppplVar19;
          ppppppplStack_88[1] = ppppppplVar19[1];
          *ppppppplStack_88 = pppppplVar11;
          ppppppplStack_88[3] = pppppplStack_f8;
          ppppppplStack_88[2] = pppppplStack_100;
          ppppppplStack_88 = ppppppplStack_88 + 4;
        }
        else {
          lVar8 = (long)ppppppplStack_88 - (long)ppppppplStack_90;
          uVar32 = (lVar8 >> 5) + 1;
          if (uVar32 >> 0x3b != 0) {
            FUN_10a3ebd80();
            goto LAB_10a3c4e0c;
          }
          uVar9 = (long)ppppppplStack_80 - (long)ppppppplStack_90 >> 4;
          if (uVar9 <= uVar32) {
            uVar9 = uVar32;
          }
          if (0x7fffffffffffffdf < (ulong)((long)ppppppplStack_80 - (long)ppppppplStack_90)) {
            uVar9 = 0x7ffffffffffffff;
          }
          ppppppplStack_c0 = (long *******)&ppppppplStack_90;
          FUN_10a3ebd94();
          plVar3 = (long *)(uVar9 + lVar8);
          pppppplVar11 = *ppppppplVar19;
          plVar3[1] = (long)ppppppplVar19[1];
          *plVar3 = (long)pppppplVar11;
          plVar3[3] = (long)pppppplStack_f8;
          plVar3[2] = (long)pppppplStack_100;
          pppppplStack_100 = (long ******)0x0;
          pppppplStack_f8 = (long ******)0x0;
          ppppppplVar24 = (long *******)(plVar3 + 4);
          ppppppplVar27 =
               (long *******)((long)plVar3 - ((long)ppppppplStack_88 - (long)ppppppplStack_90));
          _memcpy(ppppppplVar27);
          ppppppplStack_d0 = ppppppplStack_90;
          ppppppplStack_c8 = ppppppplStack_80;
          ppppppplStack_e0 = ppppppplStack_90;
          ppppppplStack_d8 = ppppppplStack_90;
          ppppppplStack_90 = ppppppplVar27;
          ppppppplStack_88 = ppppppplVar24;
          ppppppplStack_80 = (long *******)(uVar9 + (long)ppppppplVar15 * 0x20);
          func_0x00010a3ebdc8(&ppppppplStack_e0);
          pppppplVar11 = pppppplStack_f8;
          ppppppplStack_88 = ppppppplVar24;
          if (pppppplStack_f8 != (long ******)0x0) {
            pppppplVar28 = pppppplStack_f8 + 1;
            do {
              ppppplVar29 = *pppppplVar28;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
              if (bVar6) {
                *pppppplVar28 = (long *****)((long)ppppplVar29 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppppplVar29 == (long *****)0x0) {
              (*(code *)(*pppppplStack_f8)[2])(pppppplStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar11);
            }
          }
        }
      }
      plVar3 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar8 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      ppppppplVar19 = ppppppplVar19 + 7;
    } while (ppppppplVar19 != ppppppplVar31);
  }
  if (ppppppplStack_90 != ppppppplStack_88) {
    __ZNSt3__15mutex4lockEv(param_2 + 0x188);
    func_0x00010a3f25e4(ppppppplVar33,pppppplStack_b0);
    if (ppppppplVar33 != (long *******)0x0) {
      ppppppplVar15 = ppppppplVar33 + 3;
      lVar8 = (long)ppppppplVar33[4] - (long)*ppppppplVar15;
      uVar32 = ((long)ppppppplStack_88 - (long)ppppppplStack_90 >> 5) + (lVar8 >> 4);
      ppppppplVar31 = ppppppplStack_90;
      ppppppplVar19 = ppppppplStack_88;
      if ((ulong)((long)ppppppplVar33[5] - (long)*ppppppplVar15 >> 4) < uVar32) {
        if (uVar32 >> 0x3c != 0) {
          func_0x00010a3e9da4();
LAB_10a3c4e0c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3c4e10);
          (*pcVar7)();
        }
        ppppppplVar31 = ppppppplVar15;
        ppppppplStack_c0 = ppppppplVar15;
        FUN_10a3e9db8();
        pppppplVar11 = (long ******)((long)ppppppplVar31 + lVar8);
        pppppplVar28 = (long ******)
                       ((long)pppppplVar11 - ((long)ppppppplVar33[4] - (long)ppppppplVar33[3]));
        _memcpy(pppppplVar28);
        ppppppplStack_e0 = (long *******)ppppppplVar33[3];
        ppppppplVar33[3] = pppppplVar28;
        ppppppplVar33[4] = pppppplVar11;
        ppppppplStack_c8 = (long *******)ppppppplVar33[5];
        ppppppplVar33[5] = (long ******)(ppppppplVar31 + uVar32 * 2);
        ppppppplStack_d8 = ppppppplStack_e0;
        ppppppplStack_d0 = ppppppplStack_e0;
        func_0x00010a3e9dec(&ppppppplStack_e0);
        ppppppplVar31 = ppppppplStack_90;
        ppppppplVar19 = ppppppplStack_88;
      }
      for (; ppppppplVar24 = ppppppplStack_88, bVar6 = ppppppplVar31 != ppppppplStack_88,
          ppppppplStack_88 = ppppppplVar19, bVar6; ppppppplVar31 = ppppppplVar31 + 4) {
        pppppplVar11 = ppppppplVar33[4];
        if (pppppplVar11 < ppppppplVar33[5]) {
          pppppplVar26 = ppppppplVar31[2];
          pppppplVar28 = pppppplVar11 + 2;
          pppppplVar11[1] = (long *****)ppppppplVar31[3];
          *pppppplVar11 = (long *****)pppppplVar26;
          ppppppplVar31[2] = (long ******)0x0;
          ppppppplVar31[3] = (long ******)0x0;
        }
        else {
          lVar8 = (long)pppppplVar11 - (long)*ppppppplVar15;
          uVar32 = (lVar8 >> 4) + 1;
          if (uVar32 >> 0x3c != 0) {
            func_0x00010a3e9da4();
            goto LAB_10a3c4e0c;
          }
          uVar10 = (long)ppppppplVar33[5] - (long)*ppppppplVar15;
          uVar9 = (long)uVar10 >> 3;
          if (uVar9 <= uVar32) {
            uVar9 = uVar32;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar9 = 0xfffffffffffffff;
          }
          ppppppplVar19 = ppppppplVar15;
          ppppppplStack_c0 = ppppppplVar15;
          FUN_10a3e9db8();
          plVar3 = (long *)((long)ppppppplVar19 + lVar8);
          pppppplVar11 = ppppppplVar31[2];
          pppppplVar28 = (long ******)(plVar3 + 2);
          plVar3[1] = (long)ppppppplVar31[3];
          *plVar3 = (long)pppppplVar11;
          ppppppplVar31[2] = (long ******)0x0;
          ppppppplVar31[3] = (long ******)0x0;
          pppppplVar11 = (long ******)
                         ((long)plVar3 - ((long)ppppppplVar33[4] - (long)ppppppplVar33[3]));
          _memcpy(pppppplVar11);
          ppppppplStack_e0 = (long *******)ppppppplVar33[3];
          ppppppplVar33[3] = pppppplVar11;
          ppppppplVar33[4] = pppppplVar28;
          ppppppplStack_c8 = (long *******)ppppppplVar33[5];
          ppppppplVar33[5] = (long ******)(ppppppplVar19 + uVar9 * 2);
          ppppppplStack_d8 = ppppppplStack_e0;
          ppppppplStack_d0 = ppppppplStack_e0;
          func_0x00010a3e9dec(&ppppppplStack_e0);
        }
        ppppppplVar33[4] = pppppplVar28;
        pppppplVar11 = ppppppplVar33[6];
        FUN_10a3c0e74(pppppplVar11,ppppppplVar33[7],ppppppplVar31);
        if (ppppppplVar33[7] < pppppplVar11) goto LAB_10a3c4e0c;
        if (pppppplVar11 != ppppppplVar33[7]) {
          ppppppplVar33[7] = pppppplVar11;
        }
        lVar8 = param_2 + 0x1f8;
        func_0x00010a3f2544(lVar8,*ppppppplVar31,ppppppplVar31[1]);
        if (lVar8 != 0) {
          puVar4 = *(undefined8 **)(lVar8 + 0x20);
          puVar18 = *(undefined8 **)(lVar8 + 0x28);
          puVar14 = puVar4;
          if (puVar4 == puVar18) {
LAB_10a3c4d04:
            if (puVar18 < puVar14) goto LAB_10a3c4e0c;
            if (puVar14 != puVar18) {
              *(undefined8 **)(lVar8 + 0x28) = puVar14;
              puVar18 = puVar14;
            }
          }
          else {
            do {
              if ((long ******)*puVar14 == pppppplStack_b0) {
                puVar21 = puVar14;
                if (puVar14 != puVar18) {
                  while (puVar21 = puVar21 + 1, puVar21 != puVar18) {
                    if ((long ******)*puVar21 != pppppplStack_b0) {
                      *puVar14 = (long ******)*puVar21;
                      puVar14 = puVar14 + 1;
                    }
                  }
                }
                goto LAB_10a3c4d04;
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar18);
          }
          if (puVar4 == puVar18) {
            func_0x00010a3f2680(param_2 + 0x1f8,lVar8);
          }
        }
        ppppppplVar19 = ppppppplStack_88;
        ppppppplStack_88 = ppppppplVar24;
      }
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 0x188);
  }
  *param_1 = param_2;
  param_1[1] = (long)pppppplStack_b0;
  FUN_10a3ebe18(&ppppppplStack_90);
  FUN_10a3ea4a4(&ppppppplStack_a8);
  return;
}



/* Entry: 10a3c4ee8; end: 10a3c5073;  */

long * FUN_10a3c4ee8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar10;
    puVar8 = puVar8 + 2;
    plVar3 = param_1;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      func_0x00010a044abc();
      uStack_38 = 0x10a3c4fb0;
      ppuStack_70 = &puStack_40;
      puVar8 = (undefined8 *)param_1[1];
      if (puVar8 < (undefined8 *)param_1[2]) {
        puVar9 = puVar8 + 1;
        *puVar8 = *param_2;
        plVar3 = param_1;
      }
      else {
        lVar7 = (long)puVar8 - *param_1;
        uVar1 = (lVar7 >> 3) + 1;
        puStack_40 = &stack0xfffffffffffffff0;
        if (uVar1 >> 0x3d != 0) {
          plVar4 = param_1;
          FUN_10a3ebd38();
          pcStack_68 = FUN_10a3c5074;
          puStack_80 = param_2;
          plStack_78 = param_1;
          if (plVar4[3] != 0) {
            plVar4[4] = plVar4[3];
            __ZdlPv();
          }
          plStack_88 = plVar4;
          FUN_10a34cfd0(&plStack_88);
          return plVar4;
        }
        uVar5 = param_1[2] - *param_1;
        uVar6 = (long)uVar5 >> 2;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar6 = 0x1fffffffffffffff;
        }
        plVar4 = param_1;
        FUN_10a3ebd4c();
        lVar2 = *param_1;
        puVar8 = (undefined8 *)((long)plVar4 + lVar7);
        lVar7 = (long)puVar8 - (param_1[1] - lVar2);
        puVar9 = puVar8 + 1;
        *puVar8 = *param_2;
        _memcpy(lVar7,lVar2);
        plVar3 = (long *)*param_1;
        *param_1 = lVar7;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)(plVar4 + uVar6);
        if (plVar3 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return plVar3;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10a044ad0();
    puVar9 = (undefined8 *)((long)plVar4 + lVar7);
    uVar10 = *param_2;
    puVar9[1] = param_2[1];
    *puVar9 = uVar10;
    puVar8 = puVar9 + 2;
    lVar7 = (long)puVar9 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar4 + uVar6 * 2);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar3;
}



/* Entry: 10a3c5074; end: 10a3c50b7;  */

long FUN_10a3c5074(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_10a34cfd0(&lStack_28);
  return param_1;
}



/* Entry: 10a3c50b8; end: 10a3c513b;  */

undefined1  [16] FUN_10a3c50b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f655b47;
  return auVar1;
}



/* Entry: 10a3c513c; end: 10a3c52bb;  */

undefined8 * FUN_10a3c513c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
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
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bcfd68;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0x24) = uVar5;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  FUN_10a3ebe84((long)param_1 + 0x34,param_2);
  fVar4 = *(float *)(param_2 + 2);
  fVar6 = *(float *)((long)param_2 + 0x14);
  *(float *)((long)param_1 + 100) = fVar4;
  *(float *)(param_1 + 0xd) = fVar6;
  fVar1 = *(float *)(param_2 + 3);
  *(float *)((long)param_1 + 0x6c) = fVar1;
  fVar7 = *(float *)((long)param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 7);
  fVar9 = *(float *)((long)param_1 + 0x3c);
  fVar10 = *(float *)((long)param_1 + 0x44);
  fVar11 = *(float *)(param_1 + 9);
  fVar12 = *(float *)((long)param_1 + 0x4c);
  fVar13 = *(float *)((long)param_1 + 0x54);
  fVar14 = *(float *)(param_1 + 0xb);
  fVar15 = *(float *)((long)param_1 + 0x5c);
  fVar16 = -(fVar14 * fVar12) + fVar15 * fVar11;
  fVar17 = -(fVar14 * fVar9) + fVar15 * fVar8;
  fVar19 = -(fVar11 * fVar9) + fVar12 * fVar8;
  fVar18 = 1.0 / (-(fVar10 * fVar17) + fVar16 * fVar7 + fVar19 * fVar13);
  fVar16 = fVar16 * fVar18;
  fVar20 = -((-(fVar13 * fVar12) + fVar15 * fVar10) * fVar18);
  fVar21 = (-(fVar13 * fVar11) + fVar14 * fVar10) * fVar18;
  fVar17 = -(fVar17 * fVar18);
  fVar15 = (-(fVar13 * fVar9) + fVar15 * fVar7) * fVar18;
  fVar13 = -((-(fVar13 * fVar8) + fVar14 * fVar7) * fVar18);
  fVar19 = fVar19 * fVar18;
  fVar9 = -((-(fVar10 * fVar9) + fVar12 * fVar7) * fVar18);
  fVar18 = (-(fVar10 * fVar8) + fVar11 * fVar7) * fVar18;
  *(float *)((long)param_1 + 0x74) = fVar16;
  *(float *)(param_1 + 0xf) = fVar17;
  *(float *)((long)param_1 + 0x7c) = fVar19;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)((long)param_1 + 0x84) = fVar20;
  *(float *)(param_1 + 0x11) = fVar15;
  *(float *)((long)param_1 + 0x8c) = fVar9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(float *)((long)param_1 + 0x94) = fVar21;
  *(float *)(param_1 + 0x13) = fVar13;
  *(float *)((long)param_1 + 0x9c) = fVar18;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(float *)((long)param_1 + 0xa4) = (-(fVar20 * fVar6) - fVar4 * fVar16) - fVar1 * fVar21;
  *(float *)(param_1 + 0x15) = (-(fVar15 * fVar6) - fVar4 * fVar17) - fVar1 * fVar13;
  *(float *)((long)param_1 + 0xac) = (-(fVar9 * fVar6) - fVar4 * fVar19) - fVar1 * fVar18;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  return param_1;
}



/* Entry: 10a3c52bc; end: 10a3c531f;  */

undefined1  [16] FUN_10a3c52bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f655b56;
  return auVar1;
}



/* Entry: 10a3c5320; end: 10a3c575b;  */

void FUN_10a3c5320(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f655b56,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd31d8;
  pppuVar2 = (undefined8 ***)&UNK_10f653596;
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
    ppuStack_b0 = &PTR_DAT_110bd31d8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf32c0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3c573c;
    FUN_10a054dac(param_1,&DAT_10f6535d4,FUN_10a3f37a8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3c573c;
    FUN_10a054dac(param_1,&UNK_10f6535dc,FUN_10a3f38c4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3c573c;
    FUN_10a054dac(param_1,&UNK_10f6535eb,FUN_10a3f3a04,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6535f8,FUN_10a3f3b98,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65360d,FUN_10a3f3c5c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65361e,FUN_10a3f3d18,FUN_10a3f3df8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f653623,FUN_10a3f3fd0,FUN_10a3f408c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a3f4154,FUN_10a3f4220);
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar8 == (undefined *)0x0) {
LAB_10a3c5654:
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      FUN_10a0605c4(param_1,&DAT_10f64c8a8,FUN_10a3f38c4,0);
    }
  }
  else {
    FUN_10a3c8488();
    if (0x10c < *(int *)(ppuVar8 + 3)) goto LAB_10a3c5654;
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar9 & 0xffffffff,uVar5)
    ;
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f655b56,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a3c573c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3c5740);
  (*pcVar6)();
}



/* Entry: 10a3c575c; end: 10a3c59cf;  */

long * FUN_10a3c575c(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)&PTR_DAT_110bf2dc0;
  param_1[2] = (long)&PTR_DAT_110bf2e30;
  param_1[7] = (long)&PTR_DAT_110bf2e88;
  param_1[8] = param_3;
  param_1[10] = 0;
  param_1[9] = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)&PTR_DAT_110bd1428;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = (long)&PTR_DAT_110bd1498;
  param_1[0x18] = 0;
  param_1[0x19] = (long)&UNK_10e52b660;
  param_1[0x17] = (long)&PTR_DAT_110bd14c8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfe00;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[2] = (long)&PTR_DAT_110bcfec8;
  param_1[7] = (long)&PTR_DAT_110bcff20;
  param_1[0xd] = (long)&PTR_DAT_110bcff40;
  param_1[0x16] = (long)&PTR_DAT_110bcffb0;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  param_1[0x17] = (long)&PTR_DAT_110bcffe0;
  param_1[0x29] = 0;
  func_0x000107c2b054(param_1 + 0x2a,&UNK_10f653596);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x189) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x33] = (long)(puVar1 + 3);
  param_1[0x34] = (long)puVar1;
  FUN_10a5cf1fc(param_1 + 0x33);
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = (long)&UNK_1053a6a3c;
  param_1[0x36] = (long)&PTR_DAT_110ae9180;
  param_1[0x3d] = 0;
  return param_1;
}



/* Entry: 10a3c59d0; end: 10a3c59d7;  */

void FUN_10a3c59d0(void)

{
  return;
}



/* Entry: 10a3c59d8; end: 10a3c5b0b;  */

void FUN_10a3c59d8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plStack_28;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bcfec8;
  param_1[7] = (long)&PTR_DAT_110bcff20;
  param_1[0xd] = (long)&PTR_DAT_110bcff40;
  param_1[0x16] = (long)&PTR_DAT_110bcffb0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  param_1[0x17] = (long)&PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = (long)&PTR_DAT_110bd14c8;
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
  plStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&plStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a3c5b0c; end: 10a3c5b7f;  */

void FUN_10a3c5b0c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bcfdc8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x3e] = &PTR_DAT_110bd0040;
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



/* Entry: 10a3c5b80; end: 10a3c5c3b;  */

void FUN_10a3c5b80(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bd0078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3c5c3c; end: 10a3c5c73;  */

void FUN_10a3c5c3c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bd0078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a3c5c74; end: 10a3c5cc7;  */

void FUN_10a3c5c74(long *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 10a3c5cc8; end: 10a3c5e6f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a3c5cc8(undefined **param_1,undefined **param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined **unaff_x25;
  long *plStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 *******pppppppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = PTR___tlv_bootstrap_11340d750;
  ppuVar5 = &PTR___tlv_bootstrap_11340d750;
  ppuVar19 = ppuVar5;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar9 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar19 & 1) == 0) {
    param_2 = ppuVar9;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    __tlv_atexit(0x10a132a8c,param_2,0x100000000);
    (*(code *)puVar6)();
    *(undefined1 *)ppuVar5 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  if ((ppuVar9[2] == (undefined *)0x0) || (*(char *)(*(long *)(ppuVar9[2] + 8) + 0x35) != '\x01')) {
    return (long *)&UNK_10e4b1840;
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    return (long *)param_1[0x29];
  }
  plVar15 = *(long **)(param_1[0x2e] + 0x878);
  puStack_50 = &UNK_10f653f99;
  uStack_48 = 0x35;
  if (plVar15 == (long *)0x0) {
    ppuVar5 = &puStack_50;
    FUN_10a0edfc4();
  }
  else {
    ppuVar5 = param_1;
    (**(code **)(*param_1 + 0x70))();
    if (param_2 < (undefined **)0x7ffffffffffffff8) {
      if (param_2 < (undefined **)0x17) {
        uStack_58 = CONCAT17((char)param_2,(undefined7)uStack_58);
        pppppppuVar4 = &pppppppuStack_68;
        if (param_2 == (undefined **)0x0) goto LAB_10a3c5de4;
      }
      else {
        pppppppuVar1 = (undefined8 *******)0x19;
        if (((ulong)param_2 | 7) != 0x17) {
          pppppppuVar1 = (undefined8 *******)(((ulong)param_2 | 7) + 1);
        }
        pppppppuVar4 = pppppppuVar1;
        __Znwm();
        uStack_58 = (ulong)pppppppuVar1 | 0x8000000000000000;
        pppppppuStack_68 = pppppppuVar4;
        ppuStack_60 = param_2;
      }
      _memmove(pppppppuVar4,ppuVar5,param_2);
LAB_10a3c5de4:
      *(undefined1 *)((long)pppppppuVar4 + (long)param_2) = 0;
      FUN_10a3c5e70(plVar15,&pppppppuStack_68);
      param_1[0x29] = (undefined *)plVar15;
      if ((long)uStack_58 < 0) {
        __ZdlPv(pppppppuStack_68);
        plVar15 = (long *)param_1[0x29];
      }
      return plVar15;
    }
  }
  func_0x000109ffde50();
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(pppppppuStack_68);
  }
  __Unwind_Resume();
  ppuVar9 = ppuVar5;
  func_0x000107c2b05c();
  ppuVar19 = (undefined **)ppuVar5[1];
  if (ppuVar19 != (undefined **)0x0) {
    uVar17 = (long)ppuVar19 - 1;
    if (((ulong)ppuVar19 & uVar17) == 0) {
      unaff_x25 = (undefined **)(uVar17 & (ulong)ppuVar9);
    }
    else {
      unaff_x25 = ppuVar9;
      if (ppuVar19 <= ppuVar9) {
        uVar2 = 0;
        if (ppuVar19 != (undefined **)0x0) {
          uVar2 = (ulong)ppuVar9 / (ulong)ppuVar19;
        }
        unaff_x25 = (undefined **)((long)ppuVar9 - uVar2 * (long)ppuVar19);
      }
    }
    if (*(undefined8 **)(*ppuVar5 + (long)unaff_x25 * 8) != (undefined8 *)0x0) {
      for (plVar15 = (long *)**(undefined8 **)(*ppuVar5 + (long)unaff_x25 * 8);
          plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        ppuVar8 = (undefined **)plVar15[1];
        if (ppuVar8 == ppuVar9) {
          ppuVar8 = ppuVar5;
          func_0x000107c2b068(ppuVar5,plVar15 + 2,param_2);
          if (((ulong)ppuVar8 & 1) != 0) goto LAB_10a3c64d0;
        }
        else {
          if (((ulong)ppuVar19 & uVar17) == 0) {
            ppuVar8 = (undefined **)((ulong)ppuVar8 & uVar17);
          }
          else if (ppuVar19 <= ppuVar8) {
            uVar2 = 0;
            if (ppuVar19 != (undefined **)0x0) {
              uVar2 = (ulong)ppuVar8 / (ulong)ppuVar19;
            }
            ppuVar8 = (undefined **)((long)ppuVar8 - uVar2 * (long)ppuVar19);
          }
          if (ppuVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x130;
  __Znwm();
  lStack_c8 = 1;
  *plVar15 = 0;
  plVar15[1] = (long)ppuVar9;
  puVar6 = *param_2;
  plVar15[3] = (long)param_2[1];
  plVar15[2] = (long)puVar6;
  plVar15[4] = (long)param_2[2];
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  param_2[2] = (undefined *)0x0;
  plVar18 = plVar15 + 5;
  plVar15[6] = 0;
  *plVar18 = 0;
  plVar15[8] = 0;
  plVar15[7] = 0;
  plVar15[10] = 0;
  plVar15[9] = 0;
  plVar15[0xc] = 0;
  plVar15[0xb] = 0;
  plVar15[0xe] = 0;
  plVar15[0xd] = 0;
  plVar15[0x10] = 0;
  plVar15[0xf] = 0;
  plVar15[0x12] = 0;
  plVar15[0x11] = 0;
  plVar15[0x14] = 0;
  plVar15[0x13] = 0;
  plVar15[0x16] = 0;
  plVar15[0x15] = 0;
  plVar15[0x18] = 0;
  plVar15[0x17] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x20] = 0;
  plVar15[0x1f] = 0;
  plVar15[0x25] = 0;
  plVar15[0x22] = 0;
  plVar15[0x21] = 0;
  plVar15[0x24] = 0;
  plVar15[0x23] = 0;
  plStack_d8 = plVar15;
  ppuStack_d0 = ppuVar5;
  if ((ppuVar19 == (undefined **)0x0) ||
     (*(float *)(ppuVar5 + 4) * (float)ppuVar19 < (float)(ppuVar5[3] + 1))) {
    uVar17 = 1;
    if ((undefined **)0x2 < ppuVar19) {
      uVar17 = (ulong)(((ulong)ppuVar19 & (long)ppuVar19 - 1U) != 0);
    }
    ppuVar8 = (undefined **)(uVar17 | (long)ppuVar19 << 1);
    ppuVar19 = (undefined **)(long)((float)(ppuVar5[3] + 1) / *(float *)(ppuVar5 + 4));
    if (ppuVar8 <= ppuVar19) {
      ppuVar8 = ppuVar19;
    }
    if ((long)ppuVar8 - 1U == 0) {
      ppuVar8 = (undefined **)0x2;
    }
    else if (((ulong)ppuVar8 & (long)ppuVar8 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppuVar19 = (undefined **)ppuVar5[1];
    if (ppuVar19 < ppuVar8) {
LAB_10a3c6038:
      if ((ulong)ppuVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3c6534);
        (*pcVar3)();
      }
      puVar6 = (undefined *)((long)ppuVar8 << 3);
      __Znwm();
      puVar7 = *ppuVar5;
      *ppuVar5 = puVar6;
      if (puVar7 != (undefined *)0x0) {
        __ZdlPv();
      }
      ppuVar19 = (undefined **)0x0;
      ppuVar5[1] = (undefined *)ppuVar8;
      do {
        *(undefined8 *)(*ppuVar5 + (long)ppuVar19 * 8) = 0;
        ppuVar19 = (undefined **)((long)ppuVar19 + 1);
      } while (ppuVar8 != ppuVar19);
      plVar10 = (long *)ppuVar5[2];
      ppuVar19 = ppuVar8;
      if (plVar10 != (long *)0x0) {
        ppuVar11 = (undefined **)plVar10[1];
        uVar17 = (long)ppuVar8 - 1;
        if (((ulong)ppuVar8 & uVar17) == 0) {
          ppuVar11 = (undefined **)((ulong)ppuVar11 & uVar17);
        }
        else if (ppuVar8 <= ppuVar11) {
          uVar2 = 0;
          if (ppuVar8 != (undefined **)0x0) {
            uVar2 = (ulong)ppuVar11 / (ulong)ppuVar8;
          }
          ppuVar11 = (undefined **)((long)ppuVar11 - uVar2 * (long)ppuVar8);
        }
        *(undefined ***)(*ppuVar5 + (long)ppuVar11 * 8) = ppuVar5 + 2;
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          ppuVar14 = (undefined **)plVar12[1];
          if (((ulong)ppuVar8 & uVar17) == 0) {
            ppuVar14 = (undefined **)((ulong)ppuVar14 & uVar17);
          }
          else if (ppuVar8 <= ppuVar14) {
            uVar2 = 0;
            if (ppuVar8 != (undefined **)0x0) {
              uVar2 = (ulong)ppuVar14 / (ulong)ppuVar8;
            }
            ppuVar14 = (undefined **)((long)ppuVar14 - uVar2 * (long)ppuVar8);
          }
          plVar13 = plVar12;
          if (ppuVar14 != ppuVar11) {
            puVar6 = *ppuVar5;
            if (*(long *)(puVar6 + (long)ppuVar14 * 8) == 0) {
              *(long **)(puVar6 + (long)ppuVar14 * 8) = plVar10;
              ppuVar11 = ppuVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(puVar6 + (long)ppuVar14 * 8);
              **(long **)(puVar6 + (long)ppuVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (ppuVar8 < ppuVar19) {
      ppuVar11 = (undefined **)(long)((float)ppuVar5[3] / *(float *)(ppuVar5 + 4));
      if ((ppuVar19 < (undefined **)0x3) || (((ulong)ppuVar19 & (long)ppuVar19 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined **)0x1 < ppuVar11) {
        ppuVar11 = (undefined **)(1L << (-LZCOUNT((long)ppuVar11 + -1) & 0x3fU));
      }
      if (ppuVar8 <= ppuVar11) {
        ppuVar8 = ppuVar11;
      }
      if (ppuVar8 < ppuVar19) {
        if (ppuVar8 != (undefined **)0x0) goto LAB_10a3c6038;
        puVar6 = *ppuVar5;
        *ppuVar5 = (undefined *)0x0;
        if (puVar6 != (undefined *)0x0) {
          __ZdlPv();
        }
        ppuVar5[1] = (undefined *)0x0;
        ppuVar19 = (undefined **)0x0;
      }
      else {
        ppuVar19 = (undefined **)ppuVar5[1];
      }
    }
    if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) == 0) {
      unaff_x25 = (undefined **)((long)ppuVar19 - 1U & (ulong)ppuVar9);
    }
    else {
      unaff_x25 = ppuVar9;
      if (ppuVar19 <= ppuVar9) {
        uVar17 = 0;
        if (ppuVar19 != (undefined **)0x0) {
          uVar17 = (ulong)ppuVar9 / (ulong)ppuVar19;
        }
        unaff_x25 = (undefined **)((long)ppuVar9 - uVar17 * (long)ppuVar19);
      }
    }
  }
  puVar6 = *ppuVar5;
  plVar10 = *(long **)(puVar6 + (long)unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    ppuVar9 = ppuVar5 + 2;
    *plVar15 = (long)*ppuVar9;
    *ppuVar9 = (undefined *)plVar15;
    *(undefined ***)(puVar6 + (long)unaff_x25 * 8) = ppuVar9;
    if (*plVar15 == 0) goto LAB_10a3c6218;
    ppuVar9 = *(undefined ***)(*plVar15 + 8);
    if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) == 0) {
      ppuVar9 = (undefined **)((ulong)ppuVar9 & (long)ppuVar19 - 1U);
    }
    else if (ppuVar19 <= ppuVar9) {
      uVar17 = 0;
      if (ppuVar19 != (undefined **)0x0) {
        uVar17 = (ulong)ppuVar9 / (ulong)ppuVar19;
      }
      ppuVar9 = (undefined **)((long)ppuVar9 - uVar17 * (long)ppuVar19);
    }
    plVar10 = (long *)(*ppuVar5 + (long)ppuVar9 * 8);
  }
  else {
    *plVar15 = *plVar10;
  }
  *plVar10 = (long)plVar15;
LAB_10a3c6218:
  ppuVar5[3] = ppuVar5[3] + 1;
  lVar16 = (long)*(char *)((long)plVar15 + 0x27);
  if (lVar16 < 0) {
    plVar10 = (long *)plVar15[2];
    lVar16 = plVar15[3];
  }
  else {
    plVar10 = plVar15 + 2;
  }
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f653736,5);
  if (*(char *)((long)plVar15 + 0x3f) < '\0') {
    __ZdlPv(*plVar18);
  }
  plVar15[6] = (long)ppuStack_d0;
  *plVar18 = (long)plStack_d8;
  plVar15[7] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f65378b,5);
  if (*(char *)((long)plVar15 + 0x57) < '\0') {
    __ZdlPv(plVar15[8]);
  }
  plVar15[9] = (long)ppuStack_d0;
  plVar15[8] = (long)plStack_d8;
  plVar15[10] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,"update",6);
  if (*(char *)((long)plVar15 + 0x6f) < '\0') {
    __ZdlPv(plVar15[0xb]);
  }
  plVar15[0xc] = (long)ppuStack_d0;
  plVar15[0xb] = (long)plStack_d8;
  plVar15[0xd] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f6559d3,10);
  if (*(char *)((long)plVar15 + 0x87) < '\0') {
    __ZdlPv(plVar15[0xe]);
  }
  plVar15[0xf] = (long)ppuStack_d0;
  plVar15[0xe] = (long)plStack_d8;
  plVar15[0x10] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f6537b2,6);
  if (*(char *)((long)plVar15 + 0x9f) < '\0') {
    __ZdlPv(plVar15[0x11]);
  }
  plVar15[0x12] = (long)ppuStack_d0;
  plVar15[0x11] = (long)plStack_d8;
  plVar15[0x13] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f6559de,7);
  if (*(char *)((long)plVar15 + 0xb7) < '\0') {
    __ZdlPv(plVar15[0x14]);
  }
  plVar15[0x15] = (long)ppuStack_d0;
  plVar15[0x14] = (long)plStack_d8;
  plVar15[0x16] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&DAT_10f6535d4,7);
  if (*(char *)((long)plVar15 + 0xcf) < '\0') {
    __ZdlPv(plVar15[0x17]);
  }
  plVar15[0x18] = (long)ppuStack_d0;
  plVar15[0x17] = (long)plStack_d8;
  plVar15[0x19] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&DAT_10f40a83d,6);
  if (*(char *)((long)plVar15 + 0xe7) < '\0') {
    __ZdlPv(plVar15[0x1a]);
  }
  plVar15[0x1b] = (long)ppuStack_d0;
  plVar15[0x1a] = (long)plStack_d8;
  plVar15[0x1c] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&DAT_10f3edc9f,7);
  if (*(char *)((long)plVar15 + 0xff) < '\0') {
    __ZdlPv(plVar15[0x1d]);
  }
  plVar15[0x1e] = (long)ppuStack_d0;
  plVar15[0x1d] = (long)plStack_d8;
  plVar15[0x1f] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f6559e6,7);
  if (*(char *)((long)plVar15 + 0x117) < '\0') {
    __ZdlPv(plVar15[0x20]);
  }
  plVar15[0x21] = (long)ppuStack_d0;
  plVar15[0x20] = (long)plStack_d8;
  plVar15[0x22] = lStack_c8;
  FUN_10a3e7df0(&plStack_d8,plVar10,lVar16,&UNK_10f6559ee,9);
  if (*(char *)((long)plVar15 + 0x12f) < '\0') {
    __ZdlPv(plVar15[0x23]);
  }
  plVar15[0x24] = (long)ppuStack_d0;
  plVar15[0x23] = (long)plStack_d8;
  plVar15[0x25] = lStack_c8;
LAB_10a3c64d0:
  return plVar15 + 5;
}



/* Entry: 10a3c5e70; end: 10a3c6547;  */

long * FUN_10a3c5e70(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  plVar8 = param_1;
  func_0x000107c2b05c();
  plVar16 = (long *)param_1[1];
  if (plVar16 != (long *)0x0) {
    uVar15 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar15) == 0) {
      unaff_x25 = (long *)(uVar15 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar16 <= plVar8) {
        uVar1 = 0;
        if (plVar16 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar16);
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar5; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar6 = (long *)plVar14[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000107c2b068(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) goto LAB_10a3c64d0;
        }
        else {
          if (((ulong)plVar16 & uVar15) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar15);
          }
          else if (plVar16 <= plVar6) {
            uVar1 = 0;
            if (plVar16 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar16;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar16);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x130;
  __Znwm();
  lStack_58 = 1;
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  lVar3 = *param_2;
  plVar14[3] = param_2[1];
  plVar14[2] = lVar3;
  plVar14[4] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar6 = plVar14 + 5;
  plVar14[6] = 0;
  *plVar6 = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = 0;
  plVar14[0xb] = 0;
  plVar14[0xe] = 0;
  plVar14[0xd] = 0;
  plVar14[0x10] = 0;
  plVar14[0xf] = 0;
  plVar14[0x12] = 0;
  plVar14[0x11] = 0;
  plVar14[0x14] = 0;
  plVar14[0x13] = 0;
  plVar14[0x16] = 0;
  plVar14[0x15] = 0;
  plVar14[0x18] = 0;
  plVar14[0x17] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x20] = 0;
  plVar14[0x1f] = 0;
  plVar14[0x25] = 0;
  plVar14[0x22] = 0;
  plVar14[0x21] = 0;
  plVar14[0x24] = 0;
  plVar14[0x23] = 0;
  plStack_68 = plVar14;
  plStack_60 = param_1;
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
    uVar15 = 1;
    if ((long *)0x2 < plVar16) {
      uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar7 = (long *)(uVar15 | (long)plVar16 << 1);
    plVar16 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar7 <= plVar16) {
      plVar7 = plVar16;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar16 = (long *)param_1[1];
    if (plVar16 < plVar7) {
LAB_10a3c6038:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3c6534);
        (*pcVar2)();
      }
      lVar3 = (long)plVar7 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar16 = (long *)0x0;
      param_1[1] = (long)plVar7;
      do {
        *(undefined8 *)(*param_1 + (long)plVar16 * 8) = 0;
        plVar16 = (long *)((long)plVar16 + 1);
      } while (plVar7 != plVar16);
      plVar9 = (long *)param_1[2];
      plVar16 = plVar7;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar15 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar15) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar15);
        }
        else if (plVar7 <= plVar10) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar7 & uVar15) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar15);
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
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar7 < plVar16) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar9) {
        plVar7 = plVar9;
      }
      if (plVar7 < plVar16) {
        if (plVar7 != (long *)0x0) goto LAB_10a3c6038;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar16 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar16 <= plVar8) {
        uVar15 = 0;
        if (plVar16 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar15 * (long)plVar16);
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10a3c6218;
    plVar8 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar8) {
      uVar15 = 0;
      if (plVar16 != (long *)0x0) {
        uVar15 = (ulong)plVar8 / (ulong)plVar16;
      }
      plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar16);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10a3c6218:
  param_1[3] = param_1[3] + 1;
  lVar3 = (long)*(char *)((long)plVar14 + 0x27);
  if (lVar3 < 0) {
    plVar8 = (long *)plVar14[2];
    lVar3 = plVar14[3];
  }
  else {
    plVar8 = plVar14 + 2;
  }
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f653736,5);
  if (*(char *)((long)plVar14 + 0x3f) < '\0') {
    __ZdlPv(*plVar6);
  }
  plVar14[6] = (long)plStack_60;
  *plVar6 = (long)plStack_68;
  plVar14[7] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f65378b,5);
  if (*(char *)((long)plVar14 + 0x57) < '\0') {
    __ZdlPv(plVar14[8]);
  }
  plVar14[9] = (long)plStack_60;
  plVar14[8] = (long)plStack_68;
  plVar14[10] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,"update",6);
  if (*(char *)((long)plVar14 + 0x6f) < '\0') {
    __ZdlPv(plVar14[0xb]);
  }
  plVar14[0xc] = (long)plStack_60;
  plVar14[0xb] = (long)plStack_68;
  plVar14[0xd] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f6559d3,10);
  if (*(char *)((long)plVar14 + 0x87) < '\0') {
    __ZdlPv(plVar14[0xe]);
  }
  plVar14[0xf] = (long)plStack_60;
  plVar14[0xe] = (long)plStack_68;
  plVar14[0x10] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f6537b2,6);
  if (*(char *)((long)plVar14 + 0x9f) < '\0') {
    __ZdlPv(plVar14[0x11]);
  }
  plVar14[0x12] = (long)plStack_60;
  plVar14[0x11] = (long)plStack_68;
  plVar14[0x13] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f6559de,7);
  if (*(char *)((long)plVar14 + 0xb7) < '\0') {
    __ZdlPv(plVar14[0x14]);
  }
  plVar14[0x15] = (long)plStack_60;
  plVar14[0x14] = (long)plStack_68;
  plVar14[0x16] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&DAT_10f6535d4,7);
  if (*(char *)((long)plVar14 + 0xcf) < '\0') {
    __ZdlPv(plVar14[0x17]);
  }
  plVar14[0x18] = (long)plStack_60;
  plVar14[0x17] = (long)plStack_68;
  plVar14[0x19] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&DAT_10f40a83d,6);
  if (*(char *)((long)plVar14 + 0xe7) < '\0') {
    __ZdlPv(plVar14[0x1a]);
  }
  plVar14[0x1b] = (long)plStack_60;
  plVar14[0x1a] = (long)plStack_68;
  plVar14[0x1c] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&DAT_10f3edc9f,7);
  if (*(char *)((long)plVar14 + 0xff) < '\0') {
    __ZdlPv(plVar14[0x1d]);
  }
  plVar14[0x1e] = (long)plStack_60;
  plVar14[0x1d] = (long)plStack_68;
  plVar14[0x1f] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f6559e6,7);
  if (*(char *)((long)plVar14 + 0x117) < '\0') {
    __ZdlPv(plVar14[0x20]);
  }
  plVar14[0x21] = (long)plStack_60;
  plVar14[0x20] = (long)plStack_68;
  plVar14[0x22] = lStack_58;
  FUN_10a3e7df0(&plStack_68,plVar8,lVar3,&UNK_10f6559ee,9);
  if (*(char *)((long)plVar14 + 0x12f) < '\0') {
    __ZdlPv(plVar14[0x23]);
  }
  plVar14[0x24] = (long)plStack_60;
  plVar14[0x23] = (long)plStack_68;
  plVar14[0x25] = lStack_58;
LAB_10a3c64d0:
  return plVar14 + 5;
}



/* Entry: 10a3c6548; end: 10a3c6797;  */

void FUN_10a3c6548(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  
  FUN_109fed7e0(auStack_148);
  FUN_10a002568(auStack_148,&DAT_10f62a9e8,1);
  lVar6 = *(long *)(param_1 + 0x168);
  if (lVar6 == 0) {
    FUN_10a002568(auStack_148,&UNK_10f653949,9);
  }
  else {
    func_0x000107c2b054(auStack_178,&UNK_10f5fa02a);
    FUN_10a3c8548(&ppuStack_160,lVar6,auStack_178);
    pppuVar2 = (undefined8 ***)ppuStack_160;
    if (-1 < (char)bStack_149) {
      uStack_158 = (ulong)bStack_149;
      pppuVar2 = &ppuStack_160;
    }
    FUN_10a002568(auStack_148,pppuVar2,uStack_158);
    FUN_10a002568();
    if ((char)bStack_149 < '\0') {
      __ZdlPv(ppuStack_160);
    }
    if (cStack_161 < '\0') {
      __ZdlPv(auStack_178[0]);
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x158);
  lVar6 = *(long *)(param_1 + 0x150);
  if (-1 < (char)*(byte *)(param_1 + 0x167)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x167);
    lVar6 = param_1 + 0x150;
  }
  FUN_10a002568(auStack_148,lVar6,uVar1);
  if (param_3 != 0) {
    puVar5 = auStack_148;
    FUN_10a002568(puVar5,&DAT_10f39abd5,2);
    lVar6 = param_3;
    _strlen(param_3);
    FUN_10a002568(puVar5,param_3,lVar6);
    FUN_10a002568();
  }
  FUN_10a002568(auStack_148,&UNK_10f4edf8b,2);
  uVar4 = param_2;
  _strlen(param_2);
  FUN_10a002568(auStack_148,param_2,uVar4);
  func_0x00010a002480(&ppuStack_160,auStack_140,auStack_178);
  FUN_10a0029c0(&ppuStack_160);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3c6618);
  (*pcVar3)();
}



/* Entry: 10a3c6798; end: 10a3c6bf7;  */

/* WARNING: Possible PIC construction at 0x00010a3c78a4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a3c6798(long *param_1)

{
  undefined8 *******pppppppuVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  long *aplStack_58 [3];
  undefined1 auStack_40 [48];
  undefined8 *******pppppppuStack_10;
  undefined8 uStack_8;
  
  while (pppppppuStack_10 = unaff_x29, uStack_8 = unaff_x30,
        (*(ushort *)(param_1 + 0x30) >> 10 & 1) != 0) {
    pppppppuVar1 = &pppppppuStack_10;
    plVar12 = param_1 + 0xe;
    if ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12) {
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        FUN_10a3de8b4(lVar15 + 0x780,param_1);
      }
    }
    plVar17 = param_1 + 0x10;
    if ((long *)*plVar17 != (long *)0x0 && (long *)*plVar17 != plVar17) {
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        func_0x00010a3de904(lVar15 + 0x7b8,param_1);
      }
    }
    plVar18 = param_1 + 0x12;
    if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar18 != plVar18) {
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        uStack_8 = 0x10a3c78a8;
        register0x00000008 = (BADSPACEBASE *)auStack_40;
        pppppppuStack_10 = pppppppuVar1;
        goto SUB_10a3de954;
      }
    }
    if (((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12) ||
       (((long *)*plVar17 != (long *)0x0 && ((long *)*plVar17 != plVar17)))) {
      *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x400;
      return;
    }
    plVar12 = (long *)param_1[0x12];
    uVar2 = 0;
    if (plVar12 != (long *)0x0 && plVar12 != plVar18) {
      uVar2 = 0x400;
    }
    *(ushort *)(param_1 + 0x30) = uVar2 | *(ushort *)(param_1 + 0x30) & 0xfbff;
    unaff_x29 = pppppppuStack_10;
    unaff_x30 = uStack_8;
    if (plVar12 != (long *)0x0 && plVar12 != plVar18) {
      return;
    }
  }
  if ((*(ushort *)(param_1 + 0x30) >> 5 & 1) == 0) {
    plVar12 = param_1;
    (**(code **)(*param_1 + 0xd8))();
    uVar7 = (uint)plVar12;
  }
  else {
    uVar7 = 0;
  }
  plVar12 = param_1;
  (**(code **)(*param_1 + 0xe0))();
  uVar8 = (uint)plVar12;
  plVar12 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  uVar14 = (uint)plVar12;
  if (((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) &&
     (((plVar12 = param_1, (**(code **)(*param_1 + 0x60))(), (int)plVar12 != 0 &&
       ((*(ushort *)(param_1[0x2d] + 0x118) & 0x12) == 0)) ||
      (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15f)))) {
    plVar12 = (long *)param_1[0xe];
    if (uVar7 != (plVar12 != (long *)0x0 && plVar12 != param_1 + 0xe)) {
      if (uVar7 == 0) goto LAB_10a3c6888;
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        FUN_10a3de76c(lVar15 + 0x780,param_1);
      }
    }
LAB_10a3c6900:
    plVar12 = param_1 + 0x10;
    if (uVar8 != ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12)) {
      if (uVar8 == 0) goto LAB_10a3c6950;
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        if (*(int *)(lVar15 + 0x7b8) < 1) {
          iVar3 = *(int *)((long)param_1 + 0x184);
          iVar4 = *(int *)((long)param_1 + 0x18c);
          puVar11 = *(undefined8 **)(lVar15 + 0x7e0);
          if (*(undefined8 **)(lVar15 + 0x7e0) == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)(lVar15 + 0x7e0);
            puVar9 = (undefined8 *)(lVar15 + 0x7e0);
          }
          else {
            do {
              while( true ) {
                puVar10 = puVar11;
                iVar5 = *(int *)(puVar10 + 4);
                bVar6 = iVar4 < *(int *)((long)puVar10 + 0x24);
                if (iVar3 != iVar5) {
                  bVar6 = iVar5 < iVar3;
                }
                puVar16 = puVar10;
                if (!bVar6) break;
                puVar11 = (undefined8 *)*puVar10;
                puVar9 = puVar10;
                if ((undefined8 *)*puVar10 == (undefined8 *)0x0) goto LAB_10a3c6b88;
              }
              bVar6 = *(int *)((long)puVar10 + 0x24) < iVar4;
              if (iVar3 != iVar5) {
                bVar6 = iVar3 < iVar5;
              }
              if (!bVar6) goto LAB_10a3c6be0;
              puVar11 = (undefined8 *)puVar10[1];
            } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
            puVar9 = puVar10 + 1;
          }
LAB_10a3c6b88:
          puVar10 = (undefined8 *)0x38;
          __Znwm();
          puVar10[4] = CONCAT44(iVar4,iVar3);
          puVar10[5] = puVar10 + 5;
          puVar10[6] = puVar10 + 5;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = puVar16;
          *puVar9 = puVar10;
          puVar11 = puVar10;
          if (**(long **)(lVar15 + 0x7d8) != 0) {
            *(long *)(lVar15 + 0x7d8) = **(long **)(lVar15 + 0x7d8);
            puVar11 = (undefined8 *)*puVar9;
          }
          func_0x000107c2b058(*(undefined8 *)(lVar15 + 0x7e0),puVar11);
          *(long *)(lVar15 + 0x7e8) = *(long *)(lVar15 + 0x7e8) + 1;
LAB_10a3c6be0:
          puVar11 = (undefined8 *)puVar10[6];
          param_1[0x10] = (long)(puVar10 + 5);
          param_1[0x11] = (long)puVar11;
          puVar10[6] = plVar12;
          *puVar11 = plVar12;
        }
        else {
          aplStack_58[0] = param_1;
          FUN_10a3f9ca4(lVar15 + 0x7c0,aplStack_58);
        }
      }
    }
  }
  else {
    plVar12 = (long *)param_1[0xe];
    if ((plVar12 != (long *)0x0) && (plVar12 != param_1 + 0xe)) {
      uVar8 = 0;
      uVar14 = 0;
LAB_10a3c6888:
      lVar15 = param_1[0x2e];
      lVar13 = lVar15;
      FUN_10a3cfa0c();
      if (lVar13 == 0) {
        FUN_10a3de8b4(lVar15 + 0x780,param_1);
      }
      goto LAB_10a3c6900;
    }
    plVar12 = (long *)param_1[0x10];
    if ((plVar12 == (long *)0x0) || (plVar12 == param_1 + 0x10)) {
      plVar12 = (long *)param_1[0x12];
      if (plVar12 == (long *)0x0) {
        return;
      }
      if (plVar12 == param_1 + 0x12) {
        return;
      }
      goto LAB_10a3c69d0;
    }
    uVar14 = 0;
LAB_10a3c6950:
    lVar15 = param_1[0x2e];
    lVar13 = lVar15;
    FUN_10a3cfa0c();
    if (lVar13 == 0) {
      func_0x00010a3de904(lVar15 + 0x7b8,param_1);
    }
  }
  plVar12 = param_1 + 0x12;
  if (uVar14 == ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12)) {
    return;
  }
  if (uVar14 != 0) {
    lVar15 = param_1[0x2e];
    lVar13 = lVar15;
    FUN_10a3cfa0c();
    if (lVar13 != 0) {
      return;
    }
    if (0 < *(int *)(lVar15 + 0x7f0)) {
      aplStack_58[0] = param_1;
      FUN_10a3f9ca4(lVar15 + 0x7f8,aplStack_58);
      return;
    }
    iVar3 = *(int *)((long)param_1 + 0x184);
    iVar4 = *(int *)((long)param_1 + 0x18c);
    puVar11 = *(undefined8 **)(lVar15 + 0x818);
    if (*(undefined8 **)(lVar15 + 0x818) == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)(lVar15 + 0x818);
      puVar16 = (undefined8 *)(lVar15 + 0x818);
    }
    else {
      do {
        while( true ) {
          puVar9 = puVar11;
          iVar5 = *(int *)(puVar9 + 4);
          bVar6 = iVar4 < *(int *)((long)puVar9 + 0x24);
          if (iVar3 != iVar5) {
            bVar6 = iVar5 < iVar3;
          }
          puVar10 = puVar9;
          if (!bVar6) break;
          puVar11 = (undefined8 *)*puVar9;
          puVar16 = puVar9;
          if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_10a3c6b10;
        }
        bVar6 = *(int *)((long)puVar9 + 0x24) < iVar4;
        if (iVar3 != iVar5) {
          bVar6 = iVar3 < iVar5;
        }
        if (!bVar6) goto LAB_10a3c6b68;
        puVar11 = (undefined8 *)puVar9[1];
      } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
      puVar16 = puVar9 + 1;
    }
LAB_10a3c6b10:
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    puVar9[4] = CONCAT44(iVar4,iVar3);
    puVar9[5] = puVar9 + 5;
    puVar9[6] = puVar9 + 5;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar10;
    *puVar16 = puVar9;
    puVar11 = puVar9;
    if (**(long **)(lVar15 + 0x810) != 0) {
      *(long *)(lVar15 + 0x810) = **(long **)(lVar15 + 0x810);
      puVar11 = (undefined8 *)*puVar16;
    }
    func_0x000107c2b058(*(undefined8 *)(lVar15 + 0x818),puVar11);
    *(long *)(lVar15 + 0x820) = *(long *)(lVar15 + 0x820) + 1;
LAB_10a3c6b68:
    puVar11 = (undefined8 *)puVar9[6];
    param_1[0x12] = (long)(puVar9 + 5);
    param_1[0x13] = (long)puVar11;
    puVar9[6] = plVar12;
    *puVar11 = plVar12;
    return;
  }
LAB_10a3c69d0:
  lVar15 = param_1[0x2e];
  lVar13 = lVar15;
  FUN_10a3cfa0c();
  if (lVar13 != 0) {
    return;
  }
SUB_10a3de954:
  if (0 < *(int *)(lVar15 + 0x7f0)) {
    *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuStack_10;
    *(undefined8 *)((long)register0x00000008 + -8) = uStack_8;
    *(long **)((long)register0x00000008 + -0x18) = param_1;
    FUN_10a3f9ca4(lVar15 + 0x7f8,(undefined1 *)((long)register0x00000008 + -0x18));
    return;
  }
  lVar13 = param_1[0x12];
  if (lVar13 != 0) {
    plVar12 = (long *)param_1[0x13];
    *plVar12 = lVar13;
    *(long **)(lVar13 + 8) = plVar12;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  return;
}



/* Entry: 10a3c6bf8; end: 10a3c6f83;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c6ccc) */

void FUN_10a3c6bf8(long *param_1)

{
  code ***pppcVar1;
  ushort uVar2;
  char cVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long alStack_158 [7];
  code *pcStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  undefined1 uStack_108;
  code **ppcStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ushort *)(param_1 + 0x30);
  if ((uVar2 >> 7 & 1) == 0) {
    puVar7 = &UNK_10f653718;
  }
  else if ((uVar2 >> 6 & 1) == 0) {
    if ((uVar2 >> 4 & 1) == 0) {
      plVar4 = param_1;
      FUN_10a3c5cc8();
      cVar3 = *(char *)((long)plVar4 + 0x17);
      plVar6 = (long *)*plVar4;
      if (-1 < (long)cVar3) {
        plVar6 = plVar4;
      }
      lVar8 = plVar4[1];
      if (-1 < cVar3) {
        lVar8 = (long)cVar3;
      }
      FUN_10a3a7ab8(alStack_158,plVar6,lVar8);
      *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x40;
      if (*(char *)((long)param_1 + 0x167) < '\0') {
        if (param_1[0x2b] == 0) goto LAB_10a3c6c84;
      }
      else if (*(char *)((long)param_1 + 0x167) == '\0') {
LAB_10a3c6c84:
        lVar8 = param_1[0x2e];
        __ZNSt3__19to_stringEj(&puStack_98,*(undefined4 *)(lVar8 + 0xd0c));
        ppuVar5 = &puStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppuVar5,0,&UNK_10f654023,10);
        ppuStack_d8 = (undefined **)ppuVar5[1];
        ppcStack_e0 = (code **)*ppuVar5;
        plStack_d0 = (long *)ppuVar5[2];
        ppuVar5[1] = (undefined *)0x0;
        ppuVar5[2] = (undefined *)0x0;
        *ppuVar5 = (undefined *)0x0;
        *(int *)(lVar8 + 0xd0c) = *(int *)(lVar8 + 0xd0c) + 1;
        pppcVar1 = (code ***)ppcStack_e0;
        ppuVar5 = ppuStack_d8;
        if (-1 < (long)plStack_d0) {
          pppcVar1 = &ppcStack_e0;
          ppuVar5 = (undefined **)((ulong)plStack_d0 >> 0x38);
        }
        func_0x000107c2c4d8(param_1 + 0x2a,pppcVar1,ppuVar5);
        if ((long)plStack_d0 < 0) {
          __ZdlPv(ppcStack_e0);
        }
      }
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      puStack_98 = &UNK_1053a6a3c;
      ppuStack_90 = &PTR_DAT_110ae9180;
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (plVar6 != (long *)0x0) {
        *(ushort *)((long)plVar6 + 0x59) =
             *(ushort *)((long)plVar6 + 0x59) & 0xff80 | *(ushort *)((long)plVar6 + 0x59) + 1 & 0x7f
        ;
        uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
        ppcStack_e0 = (code **)FUN_10a1d0710;
        ppuStack_d8 = &PTR_FUN_110bad6c8;
        plStack_d0 = plVar6;
        func_0x00010a108320(&puStack_98,&ppcStack_e0);
        FUN_10a044790(&ppcStack_e0);
        (*(code *)*ppuStack_d8)(&ppuStack_d8);
      }
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      ppcStack_e0 = (code **)&UNK_1053a6a3c;
      ppuStack_d8 = &PTR_DAT_110ae9180;
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x30))();
      if (plVar6 != (long *)0x0) {
        *(ushort *)(plVar6 + 6) =
             *(ushort *)(plVar6 + 6) & 0xff80 | *(ushort *)(plVar6 + 6) + 1 & 0x7f;
        uStack_108 = 1;
        pcStack_120 = FUN_10a1d355c;
        ppuStack_118 = &PTR_FUN_110bad800;
        plStack_110 = plVar6;
        func_0x00010a108320(&ppcStack_e0,&pcStack_120);
        FUN_10a044790(&pcStack_120);
        (*(code *)*ppuStack_118)(&ppuStack_118);
      }
      (**(code **)(param_1[0xd] + 0x20))();
      (**(code **)(*param_1 + 0x28))();
      if (param_1 != (long *)0x0) {
        FUN_10a1c08dc();
      }
      FUN_10a044790(&ppcStack_e0);
      (*(code *)*ppuStack_d8)(&ppuStack_d8);
      FUN_10a044790(&puStack_98);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      param_1 = alStack_158;
      FUN_10a3b78c4(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_10a3c6ef0;
    }
    puVar7 = &UNK_10f653754;
  }
  else {
    puVar7 = &UNK_10f65373c;
  }
  FUN_10a3c6548(param_1,puVar7,&UNK_10f653736);
LAB_10a3c6ef0:
  ___stack_chk_fail();
  if ((long)plStack_d0 < 0) {
    __ZdlPv(ppcStack_e0);
  }
  FUN_10a3b78c4(alStack_158);
  do {
    __Unwind_Resume(param_1);
  } while( true );
}



/* Entry: 10a3c6f84; end: 10a3c7073;  */

undefined1 * FUN_10a3c6f84(undefined1 *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_c8 [56];
  undefined1 auStack_68 [56];
  
  uVar2 = *(ushort *)(param_1 + 0x180);
  if ((uVar2 >> 6 & 1) == 0) {
    puVar6 = &UNK_10f653770;
  }
  else {
    if ((uVar2 >> 7 & 1) != 0) {
      if ((uVar2 & 0x37) == 0) {
        *(ushort *)(param_1 + 0x180) = uVar2 | 0x20;
        lVar7 = *(long *)(param_1 + 0x170);
        lVar4 = lVar7;
        FUN_10a3cfa0c();
        if (lVar4 == 0) {
          FUN_10a3de8b4(lVar7 + 0x780,param_1);
        }
        puVar5 = param_1;
        FUN_10a3c5cc8();
        cVar3 = puVar5[0x2f];
        puVar1 = *(undefined8 **)(puVar5 + 0x18);
        if (-1 < (long)cVar3) {
          puVar1 = (undefined8 *)(puVar5 + 0x18);
        }
        lVar4 = *(long *)(puVar5 + 0x20);
        if (-1 < cVar3) {
          lVar4 = (long)cVar3;
        }
        FUN_10a3a7ab8(auStack_68,puVar1,lVar4);
        (**(code **)(*(long *)(param_1 + 0x68) + 0x28))(param_1 + 0x68);
        FUN_10a3b78c4(auStack_68);
      }
      return (undefined1 *)(ulong)((uVar2 & 0x37) == 0);
    }
    puVar6 = &UNK_10f653791;
  }
  FUN_10a3c6548(param_1,puVar6,&UNK_10f65378b);
  FUN_10a3b78c4(auStack_68);
  __Unwind_Resume();
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    puVar5 = param_1;
    FUN_10a3c5cc8();
    cVar3 = puVar5[0x47];
    puVar1 = *(undefined8 **)(puVar5 + 0x30);
    if (-1 < (long)cVar3) {
      puVar1 = (undefined8 *)(puVar5 + 0x30);
    }
    lVar4 = *(long *)(puVar5 + 0x38);
    if (-1 < cVar3) {
      lVar4 = (long)cVar3;
    }
    FUN_10a3a7ab8(auStack_c8,puVar1,lVar4);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1 + 0x68);
    param_1 = auStack_c8;
    FUN_10a3b78c4(param_1);
  }
  return param_1;
}



/* Entry: 10a3c7074; end: 10a3c70ff;  */

void FUN_10a3c7074(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0x47);
    plVar1 = (long *)*(long *)(lVar3 + 0x30);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0x30);
    }
    lVar3 = *(long *)(lVar3 + 0x38);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))((long *)(param_1 + 0x68));
    FUN_10a3b78c4(auStack_58);
  }
  return;
}



/* Entry: 10a3c7100; end: 10a3c718b;  */

void FUN_10a3c7100(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0x5f);
    plVar1 = (long *)*(long *)(lVar3 + 0x48);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0x48);
    }
    lVar3 = *(long *)(lVar3 + 0x50);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x18))((long *)(param_1 + 0x68));
    FUN_10a3b78c4(auStack_58);
  }
  return;
}



/* Entry: 10a3c718c; end: 10a3c7237;  */

void FUN_10a3c718c(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_b8 [56];
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) >> 6 & 1) != 0) {
    if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
      lVar3 = param_1;
      FUN_10a3c5cc8();
      cVar2 = *(char *)(lVar3 + 0x77);
      plVar1 = (long *)*(long *)(lVar3 + 0x60);
      if (-1 < (long)cVar2) {
        plVar1 = (long *)(lVar3 + 0x60);
      }
      lVar3 = *(long *)(lVar3 + 0x68);
      if (-1 < cVar2) {
        lVar3 = (long)cVar2;
      }
      FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
      (**(code **)(*(long *)(param_1 + 0x68) + 0x50))((long *)(param_1 + 0x68));
      FUN_10a3b78c4(auStack_58);
    }
    return;
  }
  FUN_10a3c6548(param_1,&UNK_10f653770,&UNK_10f6537b2);
  FUN_10a3b78c4(auStack_58);
  __Unwind_Resume();
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0x8f);
    plVar1 = (long *)*(long *)(lVar3 + 0x78);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0x78);
    }
    lVar3 = *(long *)(lVar3 + 0x80);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_b8,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x58))((long *)(param_1 + 0x68));
    FUN_10a3b78c4(auStack_b8);
  }
  return;
}



/* Entry: 10a3c7238; end: 10a3c72c3;  */

void FUN_10a3c7238(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0x8f);
    plVar1 = (long *)*(long *)(lVar3 + 0x78);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0x78);
    }
    lVar3 = *(long *)(lVar3 + 0x80);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x58))((long *)(param_1 + 0x68));
    FUN_10a3b78c4(auStack_58);
  }
  return;
}



/* Entry: 10a3c72c4; end: 10a3c73cb;  */

void FUN_10a3c72c4(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) >> 3 & 1) == 0) {
    *(ushort *)(param_1 + 0x180) = *(ushort *)(param_1 + 0x180) | 8;
    FUN_10a3c73cc(param_1,1);
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0xa7);
    plVar1 = (long *)*(long *)(lVar3 + 0x90);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0x90);
    }
    lVar3 = *(long *)(lVar3 + 0x98);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x48))((long *)(param_1 + 0x68));
    FUN_10a3b78c4(auStack_58);
  }
  return;
}



/* Entry: 10a3c73cc; end: 10a3c741f;  */

void FUN_10a3c73cc(long *param_1,uint param_2)

{
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if ((param_2 & (*(uint *)(param_1 + 0x3d) ^ 0xffffffff)) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & param_2) != param_2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | param_2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | param_2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a3c7420; end: 10a3c759b;  */

void FUN_10a3c7420(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) {
    lVar3 = param_1[0xb];
    lVar5 = param_1[10];
    while (lVar3 != lVar5) {
      lVar3 = lVar3 + -0x18;
      FUN_10a3ebfbc();
    }
    param_1[0xb] = lVar5;
    FUN_10a3c759c(auStack_30,param_1);
    FUN_10a044790(param_1 + 0x35);
    FUN_10a5ae930(param_1[0x33]);
    (**(code **)(*param_1 + 0xa0))(param_1);
    plVar4 = *(long **)(param_1[0x2e] + 0xd20);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    }
    *(byte *)(param_1[0x2f] + 0x2a) = *(byte *)(param_1[0x2f] + 0x2a) | 1;
    *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x10;
    FUN_10a3c6798(param_1);
    param_1[0x2d] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a3c759c; end: 10a3c762b;  */

void FUN_10a3c759c(undefined8 *param_1,long *param_2)

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



/* Entry: 10a3c762c; end: 10a3c76c7;  */

void FUN_10a3c762c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((*(ushort *)(param_1 + 0x180) >> 9 & 1) == 0) {
    FUN_10a3c759c(auStack_30);
    *(ushort *)(param_1 + 0x180) = *(ushort *)(param_1 + 0x180) | 0x200;
    FUN_10a3c72c4(param_1);
    FUN_10a3c7420(param_1);
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



/* Entry: 10a3c76c8; end: 10a3c7717;  */

void FUN_10a3c76c8(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auStack_58 [56];
  
  uVar2 = *(ushort *)(param_1 + 0x180);
  if (param_2 != ((uVar2 & 2) == 0)) {
    uVar5 = 0;
    if (param_2 == 0) {
      uVar5 = 2;
    }
    *(ushort *)(param_1 + 0x180) = uVar2 & 0xfffd | uVar5;
    if (((uVar2 & 0x17) == 0) != ((uVar2 & 0x15) == 0 && uVar5 == 0)) {
      if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
        lVar4 = param_1;
        FUN_10a3c5cc8();
        cVar3 = *(char *)(lVar4 + 0xbf);
        plVar1 = (long *)*(long *)(lVar4 + 0xa8);
        if (-1 < (long)cVar3) {
          plVar1 = (long *)(lVar4 + 0xa8);
        }
        lVar4 = *(long *)(lVar4 + 0xb0);
        if (-1 < cVar3) {
          lVar4 = (long)cVar3;
        }
        FUN_10a3a7ab8(auStack_58,plVar1,lVar4);
        (**(code **)(*(long *)(param_1 + 0x68) + 0x38))(param_1 + 0x68);
      }
      else {
        lVar4 = param_1;
        FUN_10a3c5cc8();
        cVar3 = *(char *)(lVar4 + 0xd7);
        plVar1 = (long *)*(long *)(lVar4 + 0xc0);
        if (-1 < (long)cVar3) {
          plVar1 = (long *)(lVar4 + 0xc0);
        }
        lVar4 = *(long *)(lVar4 + 200);
        if (-1 < cVar3) {
          lVar4 = (long)cVar3;
        }
        FUN_10a3a7ab8(auStack_58,plVar1,lVar4);
        (**(code **)(*(long *)(param_1 + 0x68) + 0x40))(param_1 + 0x68);
      }
      FUN_10a3b78c4(auStack_58);
      FUN_10a3c6798(param_1);
      *(byte *)(*(long *)(param_1 + 0x178) + 0x2a) =
           *(byte *)(*(long *)(param_1 + 0x178) + 0x2a) | 1;
      return;
    }
  }
  return;
}



/* Entry: 10a3c7718; end: 10a3c77ff;  */

void FUN_10a3c7718(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  if ((*(ushort *)(param_1 + 0x180) & 0x17) == 0) {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0xbf);
    plVar1 = (long *)*(long *)(lVar3 + 0xa8);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0xa8);
    }
    lVar3 = *(long *)(lVar3 + 0xb0);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x38))(param_1 + 0x68);
  }
  else {
    lVar3 = param_1;
    FUN_10a3c5cc8();
    cVar2 = *(char *)(lVar3 + 0xd7);
    plVar1 = (long *)*(long *)(lVar3 + 0xc0);
    if (-1 < (long)cVar2) {
      plVar1 = (long *)(lVar3 + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 200);
    if (-1 < cVar2) {
      lVar3 = (long)cVar2;
    }
    FUN_10a3a7ab8(auStack_58,plVar1,lVar3);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x40))(param_1 + 0x68);
  }
  FUN_10a3b78c4(auStack_58);
  FUN_10a3c6798(param_1);
  *(byte *)(*(long *)(param_1 + 0x178) + 0x2a) = *(byte *)(*(long *)(param_1 + 0x178) + 0x2a) | 1;
  return;
}



/* Entry: 10a3c7800; end: 10a3c7927;  */

/* WARNING: Possible PIC construction at 0x00010a3c78a4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a3c7800(long *param_1)

{
  undefined8 *******pppppppuVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  long *aplStack_58 [3];
  undefined1 auStack_40 [48];
  undefined8 *******pppppppuStack_10;
  undefined8 uStack_8;
  
  do {
    pppppppuVar1 = &pppppppuStack_10;
    plVar11 = param_1 + 0xe;
    pppppppuStack_10 = unaff_x29;
    uStack_8 = unaff_x30;
    if ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11) {
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        FUN_10a3de8b4(lVar14 + 0x780,param_1);
      }
    }
    plVar16 = param_1 + 0x10;
    if ((long *)*plVar16 != (long *)0x0 && (long *)*plVar16 != plVar16) {
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        func_0x00010a3de904(lVar14 + 0x7b8,param_1);
      }
    }
    plVar18 = param_1 + 0x12;
    if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar18 != plVar18) {
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        uStack_8 = 0x10a3c78a8;
        register0x00000008 = (BADSPACEBASE *)auStack_40;
        pppppppuStack_10 = pppppppuVar1;
        goto SUB_10a3de954;
      }
    }
    if (((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11) ||
       (((long *)*plVar16 != (long *)0x0 && ((long *)*plVar16 != plVar16)))) {
      *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x400;
      return;
    }
    plVar11 = (long *)param_1[0x12];
    uVar2 = 0;
    if (plVar11 != (long *)0x0 && plVar11 != plVar18) {
      uVar2 = 0x400;
    }
    *(ushort *)(param_1 + 0x30) = uVar2 | *(ushort *)(param_1 + 0x30) & 0xfbff;
    if (plVar11 != (long *)0x0 && plVar11 != plVar18) {
      return;
    }
    unaff_x29 = pppppppuStack_10;
    unaff_x30 = uStack_8;
  } while ((*(ushort *)(param_1 + 0x30) >> 10 & 1) != 0);
  if ((*(ushort *)(param_1 + 0x30) >> 5 & 1) == 0) {
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xd8))();
    uVar7 = (uint)plVar11;
  }
  else {
    uVar7 = 0;
  }
  plVar11 = param_1;
  (**(code **)(*param_1 + 0xe0))();
  uVar8 = (uint)plVar11;
  plVar11 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  uVar13 = (uint)plVar11;
  if (((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) &&
     (((plVar11 = param_1, (**(code **)(*param_1 + 0x60))(), (int)plVar11 != 0 &&
       ((*(ushort *)(param_1[0x2d] + 0x118) & 0x12) == 0)) ||
      (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15f)))) {
    plVar11 = (long *)param_1[0xe];
    if (uVar7 != (plVar11 != (long *)0x0 && plVar11 != param_1 + 0xe)) {
      if (uVar7 == 0) goto LAB_10a3c6888;
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        FUN_10a3de76c(lVar14 + 0x780,param_1);
      }
    }
LAB_10a3c6900:
    plVar11 = param_1 + 0x10;
    if (uVar8 != ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11)) {
      if (uVar8 == 0) goto LAB_10a3c6950;
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        if (*(int *)(lVar14 + 0x7b8) < 1) {
          iVar3 = *(int *)((long)param_1 + 0x184);
          iVar4 = *(int *)((long)param_1 + 0x18c);
          puVar10 = *(undefined8 **)(lVar14 + 0x7e0);
          if (*(undefined8 **)(lVar14 + 0x7e0) == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)(lVar14 + 0x7e0);
            puVar17 = (undefined8 *)(lVar14 + 0x7e0);
          }
          else {
            do {
              while( true ) {
                puVar9 = puVar10;
                iVar5 = *(int *)(puVar9 + 4);
                bVar6 = iVar4 < *(int *)((long)puVar9 + 0x24);
                if (iVar3 != iVar5) {
                  bVar6 = iVar5 < iVar3;
                }
                puVar15 = puVar9;
                if (!bVar6) break;
                puVar10 = (undefined8 *)*puVar9;
                puVar17 = puVar9;
                if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_10a3c6b88;
              }
              bVar6 = *(int *)((long)puVar9 + 0x24) < iVar4;
              if (iVar3 != iVar5) {
                bVar6 = iVar3 < iVar5;
              }
              if (!bVar6) goto LAB_10a3c6be0;
              puVar10 = (undefined8 *)puVar9[1];
            } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
            puVar17 = puVar9 + 1;
          }
LAB_10a3c6b88:
          puVar9 = (undefined8 *)0x38;
          __Znwm();
          puVar9[4] = CONCAT44(iVar4,iVar3);
          puVar9[5] = puVar9 + 5;
          puVar9[6] = puVar9 + 5;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = puVar15;
          *puVar17 = puVar9;
          puVar10 = puVar9;
          if (**(long **)(lVar14 + 0x7d8) != 0) {
            *(long *)(lVar14 + 0x7d8) = **(long **)(lVar14 + 0x7d8);
            puVar10 = (undefined8 *)*puVar17;
          }
          func_0x000107c2b058(*(undefined8 *)(lVar14 + 0x7e0),puVar10);
          *(long *)(lVar14 + 0x7e8) = *(long *)(lVar14 + 0x7e8) + 1;
LAB_10a3c6be0:
          puVar10 = (undefined8 *)puVar9[6];
          param_1[0x10] = (long)(puVar9 + 5);
          param_1[0x11] = (long)puVar10;
          puVar9[6] = plVar11;
          *puVar10 = plVar11;
        }
        else {
          aplStack_58[0] = param_1;
          FUN_10a3f9ca4(lVar14 + 0x7c0,aplStack_58);
        }
      }
    }
  }
  else {
    plVar11 = (long *)param_1[0xe];
    if ((plVar11 != (long *)0x0) && (plVar11 != param_1 + 0xe)) {
      uVar8 = 0;
      uVar13 = 0;
LAB_10a3c6888:
      lVar14 = param_1[0x2e];
      lVar12 = lVar14;
      FUN_10a3cfa0c();
      if (lVar12 == 0) {
        FUN_10a3de8b4(lVar14 + 0x780,param_1);
      }
      goto LAB_10a3c6900;
    }
    plVar11 = (long *)param_1[0x10];
    if ((plVar11 == (long *)0x0) || (plVar11 == param_1 + 0x10)) {
      plVar11 = (long *)param_1[0x12];
      if (plVar11 == (long *)0x0) {
        return;
      }
      if (plVar11 == param_1 + 0x12) {
        return;
      }
      goto LAB_10a3c69d0;
    }
    uVar13 = 0;
LAB_10a3c6950:
    lVar14 = param_1[0x2e];
    lVar12 = lVar14;
    FUN_10a3cfa0c();
    if (lVar12 == 0) {
      func_0x00010a3de904(lVar14 + 0x7b8,param_1);
    }
  }
  plVar11 = param_1 + 0x12;
  if (uVar13 == ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11)) {
    return;
  }
  if (uVar13 != 0) {
    lVar14 = param_1[0x2e];
    lVar12 = lVar14;
    FUN_10a3cfa0c();
    if (lVar12 != 0) {
      return;
    }
    if (0 < *(int *)(lVar14 + 0x7f0)) {
      aplStack_58[0] = param_1;
      FUN_10a3f9ca4(lVar14 + 0x7f8,aplStack_58);
      return;
    }
    iVar3 = *(int *)((long)param_1 + 0x184);
    iVar4 = *(int *)((long)param_1 + 0x18c);
    puVar10 = *(undefined8 **)(lVar14 + 0x818);
    if (*(undefined8 **)(lVar14 + 0x818) == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)(lVar14 + 0x818);
      puVar17 = (undefined8 *)(lVar14 + 0x818);
    }
    else {
      do {
        while( true ) {
          puVar9 = puVar10;
          iVar5 = *(int *)(puVar9 + 4);
          bVar6 = iVar4 < *(int *)((long)puVar9 + 0x24);
          if (iVar3 != iVar5) {
            bVar6 = iVar5 < iVar3;
          }
          puVar15 = puVar9;
          if (!bVar6) break;
          puVar10 = (undefined8 *)*puVar9;
          puVar17 = puVar9;
          if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_10a3c6b10;
        }
        bVar6 = *(int *)((long)puVar9 + 0x24) < iVar4;
        if (iVar3 != iVar5) {
          bVar6 = iVar3 < iVar5;
        }
        if (!bVar6) goto LAB_10a3c6b68;
        puVar10 = (undefined8 *)puVar9[1];
      } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
      puVar17 = puVar9 + 1;
    }
LAB_10a3c6b10:
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    puVar9[4] = CONCAT44(iVar4,iVar3);
    puVar9[5] = puVar9 + 5;
    puVar9[6] = puVar9 + 5;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar15;
    *puVar17 = puVar9;
    puVar10 = puVar9;
    if (**(long **)(lVar14 + 0x810) != 0) {
      *(long *)(lVar14 + 0x810) = **(long **)(lVar14 + 0x810);
      puVar10 = (undefined8 *)*puVar17;
    }
    func_0x000107c2b058(*(undefined8 *)(lVar14 + 0x818),puVar10);
    *(long *)(lVar14 + 0x820) = *(long *)(lVar14 + 0x820) + 1;
LAB_10a3c6b68:
    puVar10 = (undefined8 *)puVar9[6];
    param_1[0x12] = (long)(puVar9 + 5);
    param_1[0x13] = (long)puVar10;
    puVar9[6] = plVar11;
    *puVar10 = plVar11;
    return;
  }
LAB_10a3c69d0:
  lVar14 = param_1[0x2e];
  lVar12 = lVar14;
  FUN_10a3cfa0c();
  if (lVar12 != 0) {
    return;
  }
SUB_10a3de954:
  if (*(int *)(lVar14 + 0x7f0) < 1) {
    lVar12 = param_1[0x12];
    if (lVar12 != 0) {
      plVar11 = (long *)param_1[0x13];
      *plVar11 = lVar12;
      *(long **)(lVar12 + 8) = plVar11;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    return;
  }
  *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuStack_10;
  *(undefined8 *)((long)register0x00000008 + -8) = uStack_8;
  *(long **)((long)register0x00000008 + -0x18) = param_1;
  FUN_10a3f9ca4(lVar14 + 0x7f8,(undefined1 *)((long)register0x00000008 + -0x18));
  return;
}



/* Entry: 10a3c7928; end: 10a3c7c47;  */

void FUN_10a3c7928(long *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plStack_30;
  undefined **ppuStack_28;
  
  ppuVar2 = &PTR_DAT_110bd3000;
  (**(code **)(*param_2 + 0x140))(param_2,&PTR_DAT_110bd3000,param_1[8],param_1[9]);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  ppuStack_28 = ppuVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd11d8,&plStack_30);
  FUN_10a00d760(param_2,&PTR_DAT_110bd14e8,param_1 + 0x2a);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd0088,plVar1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd00a8,*(ushort *)(param_1 + 0x30) >> 8 & 1);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd00c8,*(undefined4 *)((long)param_1 + 0x184));
  return;
}



/* Entry: 10a3c7c48; end: 10a3c7c93;  */

void FUN_10a3c7c48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((*(ushort *)(param_1 + 0x180) >> 7 & 1) == 0) {
    puVar4 = &UNK_10f653894;
  }
  else if ((*(ushort *)(param_1 + 0x180) >> 4 & 1) == 0) {
    if (*(long *)(param_1 + 0x168) != 0) {
      return;
    }
    puVar4 = &UNK_10f653906;
  }
  else {
    puVar4 = &UNK_10f6538ce;
  }
  FUN_10a3c6548(param_1,puVar4,0);
  FUN_10a3c7c48();
  lVar6 = *(long *)(param_1 + 0x168);
  FUN_10a3e6834(lVar6);
  lVar5 = *(long *)(lVar6 + 0x148);
  uVar7 = *(undefined8 *)(lVar6 + 0x140);
  extraout_x8[1] = *(undefined8 *)(lVar6 + 0x148);
  *extraout_x8 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
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



/* Entry: 10a3c7c94; end: 10a3c7ce7;  */

void FUN_10a3c7c94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  FUN_10a3c7c48();
  lVar5 = *(long *)(param_2 + 0x168);
  FUN_10a3e6834(lVar5);
  lVar4 = *(long *)(lVar5 + 0x148);
  uVar6 = *(undefined8 *)(lVar5 + 0x140);
  param_1[1] = *(undefined8 *)(lVar5 + 0x148);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a3c7ce8; end: 10a3c829b;  */

void FUN_10a3c7ce8(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_1f0;
  undefined8 *apuStack_1e8 [7];
  undefined *puStack_1b0;
  undefined8 *apuStack_1a8 [7];
  undefined *puStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined *puStack_130;
  undefined **appuStack_128 [7];
  undefined *puStack_f0;
  undefined **appuStack_e8 [7];
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *param_2;
  uVar8 = 0;
  func_0x00010a1bd170();
  lVar11 = lVar14;
  if ((uVar8 & 1) == 0) {
    if (lVar14 == 0) {
      lVar11 = 0;
    }
    else {
      lVar4 = -0x150;
      if (cRam00000001137eb032 == '\0') {
        lVar4 = -0xffff;
      }
      FUN_10a1bf2a0(param_1 + 0x150 + lVar4 + 0x60,lVar14 + 0xb8);
    }
  }
  plVar9 = (long *)0x18;
  __Znwm();
  plStack_90 = (long *)0x0;
  plVar9[1] = param_1 + 0x150;
  plVar9[2] = lVar11;
  lVar11 = *(long *)(param_1 + 0x150);
  *plVar9 = lVar11;
  *(long **)(lVar11 + 8) = plVar9;
  *(long **)(param_1 + 0x150) = plVar9;
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  if ((*(long *)(param_1 + 0x248) == 0) && (lVar14 != 0)) {
    plStack_90 = (long *)(lVar14 + 0xb0);
    (**(code **)(*plStack_90 + 0x18))(plStack_90,0x3e8928a6e6ec92dd);
    if (plStack_90 != (long *)0x0) {
      *(long **)(param_1 + 0x248) = plStack_90;
    }
  }
  uStack_98 = *(undefined8 *)(param_1 + 0x150);
  puStack_b0 = (undefined *)0x10a3fe14c;
  ppuStack_a8 = &PTR_FUN_110bd2c48;
  lVar14 = *(long *)(param_1 + 0x120);
  lVar11 = lVar14;
  lStack_a0 = param_1;
  FUN_10a3cfa0c();
  if (lVar11 == 0) {
    FUN_10a3dd028(&puStack_f0,lVar14,param_2);
LAB_10a3c7f10:
    puStack_170 = (undefined *)0x10a3fe14c;
    ppuStack_168 = &PTR_FUN_110bd2c48;
    uStack_158 = uStack_98;
    lStack_160 = lStack_a0;
    plStack_150 = plStack_90;
    puStack_b0 = &UNK_1053a6a3c;
    ppuStack_a8 = &PTR_DAT_110ae9180;
    puStack_1b0 = puStack_f0;
    (*(code *)appuStack_e8[0][2])(apuStack_1a8,appuStack_e8);
    puStack_f0 = &UNK_1053a6a3c;
    (*(code *)*appuStack_e8[0])(appuStack_e8);
    appuStack_e8[0] = &PTR_DAT_110ae9180;
    FUN_10a3efc6c(&puStack_170,&puStack_1b0);
    puStack_130 = puStack_170;
    (*(code *)ppuStack_168[2])(appuStack_128,&ppuStack_168);
    puStack_170 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_168)(&ppuStack_168);
    ppuStack_168 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_1b0);
    (*(code *)*apuStack_1a8[0])(apuStack_1a8);
    FUN_10a044790(&puStack_170);
    (*(code *)*ppuStack_168)(&ppuStack_168);
    param_2 = (long *)*param_2;
    puStack_1f0 = puStack_130;
    (*(code *)appuStack_128[0][2])(apuStack_1e8,appuStack_128);
    puStack_130 = &UNK_1053a6a3c;
    (*(code *)*appuStack_128[0])(appuStack_128);
    appuStack_128[0] = &PTR_DAT_110ae9180;
    if ((*(ushort *)(param_2 + 0x30) >> 7 & 1) != 0) {
      FUN_10a3c6548(param_2,&UNK_10f653632,&UNK_10f653653);
      goto LAB_10a3c8198;
    }
    *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 0x80;
    param_2[0x2d] = param_1;
    param_2[0x2e] = *(long *)(param_1 + 0x120);
    param_2[0x2f] = *(long *)(param_1 + 0x140);
    func_0x00010a108320(param_2 + 0x35,&puStack_1f0);
    uVar3 = 0;
    if ((*(ushort *)(param_1 + 0x118) & 0x13) != 0) {
      uVar3 = 4;
    }
    *(ushort *)(param_2 + 0x30) = uVar3 | *(ushort *)(param_2 + 0x30) & 0xfffb;
    iVar1 = *(int *)(*(long *)(param_1 + 0x120) + 0xd10) + 1;
    *(int *)(*(long *)(param_1 + 0x120) + 0xd10) = iVar1;
    *(int *)(param_2 + 0x31) = iVar1;
    plVar9 = *(long **)(param_2[0x2e] + 0xd20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,param_2);
    }
    plVar9 = param_2;
    (**(code **)(*param_2 + 200))();
    *(char *)(param_2 + 0x32) = (char)plVar9;
    *(byte *)(param_2[0x2f] + 0x2a) = *(byte *)(param_2[0x2f] + 0x2a) | 1;
    FUN_10a3c6798(param_2);
    FUN_10a044790(&puStack_1f0);
    (*(code *)*apuStack_1e8[0])(apuStack_1e8);
    FUN_10a044790(&puStack_130);
    (*(code *)*appuStack_128[0])(appuStack_128);
    FUN_10a044790(&puStack_f0);
    (*(code *)*appuStack_e8[0])(appuStack_e8);
    FUN_10a044790(&puStack_b0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar14 = *param_2;
    lVar4 = param_2[1];
    plVar9 = *(long **)(lVar11 + 0x128);
    if (plVar9 < *(long **)(lVar11 + 0x130)) {
      *plVar9 = lVar14;
      plVar9[1] = lVar4;
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar9 = plVar9 + 2;
LAB_10a3c7ef8:
      *(long **)(lVar11 + 0x128) = plVar9;
      puStack_f0 = (undefined *)0x10a3f9b04;
      appuStack_e8[0] = &PTR_DAT_110bd29b8;
      goto LAB_10a3c7f10;
    }
    lVar15 = *(long *)(lVar11 + 0x120);
    lVar16 = (long)plVar9 - lVar15;
    lVar17 = lVar16 >> 4;
    uVar8 = lVar17 + 1;
    if (uVar8 >> 0x3c == 0) {
      uVar12 = (long)*(long **)(lVar11 + 0x130) - lVar15;
      uVar13 = (long)uVar12 >> 3;
      if (uVar13 <= uVar8) {
        uVar13 = uVar8;
      }
      if (0x7fffffffffffffef < uVar12) {
        uVar13 = 0xfffffffffffffff;
      }
      if (uVar13 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a3c8198;
      }
      lVar10 = uVar13 << 4;
      __Znwm();
      plVar2 = (long *)(lVar10 + lVar16);
      *plVar2 = lVar14;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        plVar9 = (long *)(lVar4 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar15 = *(long *)(lVar11 + 0x120);
        lVar16 = *(long *)(lVar11 + 0x128) - lVar15;
        lVar17 = lVar16 >> 4;
      }
      plVar9 = plVar2 + 2;
      _memcpy(plVar2 + lVar17 * -2,lVar15,lVar16);
      *(long **)(lVar11 + 0x120) = plVar2 + lVar17 * -2;
      *(long **)(lVar11 + 0x128) = plVar9;
      *(ulong *)(lVar11 + 0x130) = lVar10 + uVar13 * 0x10;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_10a3c7ef8;
    }
  }
  FUN_10a3ef894();
LAB_10a3c8198:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3c819c);
  (*pcVar7)();
}



/* Entry: 10a3c829c; end: 10a3c83bb;  */

void FUN_10a3c829c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  
  while( true ) {
    plVar4 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = plVar4;
    (**(code **)(*plVar4 + 0x38))();
    if (param_3 < 0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if (*(char *)((long)register0x00000008 + -0x41) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x58));
    }
    unaff_x30 = FUN_10a3c83bc;
    plVar7 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = plVar7 + -2;
    param_1 = extraout_x8;
    unaff_x20 = plVar4;
  }
  if (param_3 < 0x17) {
    *(char *)((long)register0x00000008 + -0x41) = (char)param_3;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x58);
    if (param_3 == 0) goto LAB_10a3c832c;
  }
  else {
    puVar2 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (undefined1 *)((param_3 | 7) + 1);
    }
    puVar5 = puVar2;
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x50) = param_3;
    *(ulong *)((long)register0x00000008 + -0x48) = (ulong)puVar2 | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x58) = puVar5;
  }
  _memmove(puVar5,unaff_x19,param_3);
LAB_10a3c832c:
  puVar5[param_3] = 0;
  bVar3 = (*(ushort *)(plVar4 + 0x30) & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar3) {
    puVar1 = &UNK_10f653888;
  }
  uVar8 = 10;
  if (bVar3) {
    uVar8 = 0xb;
  }
  puVar6 = (undefined8 *)((long)register0x00000008 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,uVar8);
  uVar8 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar8;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (*(char *)((long)register0x00000008 + -0x41) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x58));
  }
  return;
}


