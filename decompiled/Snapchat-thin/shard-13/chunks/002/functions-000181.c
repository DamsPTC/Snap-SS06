/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2ff768; end: 10a2ff823;  */

void FUN_10a2ff768(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x3f];
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



/* Entry: 10a2ff824; end: 10a2ff8f7;  */

void FUN_10a2ff824(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  uVar2 = (uint)param_2;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(plVar5 + 0x3f) = uVar2;
  *(undefined8 *)((long)plVar5 + 0x234) = 0xffffffff;
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



/* Entry: 10a2ff8f8; end: 10a2ff9b3;  */

void FUN_10a2ff8f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1fc);
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



/* Entry: 10a2ff9b4; end: 10a2ffa73;  */

void FUN_10a2ff9b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a2ffa74(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x1fc) = (int)param_2;
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



/* Entry: 10a2ffa74; end: 10a2ffa97;  */

void FUN_10a2ffa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
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
  FUN_10a2ff698(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[0x40];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
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



/* Entry: 10a2ffa98; end: 10a2ffb4f;  */

void FUN_10a2ffa98(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x40];
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



/* Entry: 10a2ffb50; end: 10a2ffc0f;  */

void FUN_10a2ffb50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x40) = (char)param_2;
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



/* Entry: 10a2ffc10; end: 10a2ffce7;  */

void FUN_10a2ffc10(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x20c);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x204);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a2ffce8; end: 10a2ffdb7;  */

void FUN_10a2ffce8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *(long *)((long)plVar4 + 0x204) = *param_2;
  *(int *)((long)plVar4 + 0x20c) = (int)lVar5;
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



/* Entry: 10a2ffdb8; end: 10a2ffe8b;  */

void FUN_10a2ffdb8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[0x43];
  lStack_50 = plVar2[0x42];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a2ffe8c; end: 10a2fff57;  */

void FUN_10a2ffe8c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[0x42] = *param_2;
  *(int *)(plVar4 + 0x43) = (int)lVar5;
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



/* Entry: 10a2fff58; end: 10a3000bf;  */

void FUN_10a2fff58(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar12;
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
  plVar12 = param_2;
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar12 = (long *)plVar12[0x45];
  if (plVar12 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = plVar12 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = plVar12;
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a05348c(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
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
  if (plVar12 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
  plVar12 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar12[lVar10 + 2];
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
  lVar10 = *plVar12;
  lVar14 = plVar6[0x4c];
  lVar11 = lVar14 - lVar10;
  uVar16 = lVar11 >> 4;
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
        plStack_68 = plVar12;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar11;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar10,lVar11);
          *plVar12 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
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



/* Entry: 10a3000c0; end: 10a3001ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a300168) */

void FUN_10a3000c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffb0;
  long in_stack_ffffffffffffffb8;
  
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a3001ac(param_5);
  FUN_10a3001d0(&stack0xffffffffffffffb0,param_2,param_4);
  lVar5 = plVar4[0x45];
  plVar4[0x45] = in_stack_ffffffffffffffb8;
  plVar4[0x44] = in_stack_ffffffffffffffb0;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a3001ac; end: 10a3001cf;  */

void FUN_10a3001ac(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  int *piVar6;
  long *extraout_x8;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar5 = 1;
  piVar6 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar6 == 1) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return;
  }
  func_0x000109898688();
  if (lVar5 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a3002a0(&lStack_40);
    if (lStack_40 != 0) {
      *extraout_x8 = lStack_40;
      extraout_x8[1] = (long)plStack_38;
      if (plStack_38 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
      if (lVar5 != 0) {
        return;
      }
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a30028c);
  (*pcVar4)();
}



/* Entry: 10a3001d0; end: 10a30029f;  */

void FUN_10a3001d0(long *param_1,long param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a3002a0(&lStack_30);
    if (lStack_30 != 0) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      if (plStack_28 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_28 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
      if (lVar5 != 0) {
        return;
      }
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a30028c);
  (*pcVar4)();
}



/* Entry: 10a3002a0; end: 10a30038f;  */

void FUN_10a3002a0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110bd9df0,0x10), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a300390; end: 10a30044b;  */

void FUN_10a300390(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2ff698(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x46];
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



/* Entry: 10a30044c; end: 10a300513;  */

void FUN_10a30044c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
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
  func_0x00010a2ff700(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  uVar2 = (uint)param_2;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(plVar5 + 0x46) = uVar2;
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



/* Entry: 10a300514; end: 10a300603;  */

void FUN_10a300514(undefined8 *param_1,long param_2)

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
  FUN_10a300690(auStack_30,&uStack_40,lVar5,lVar6);
  FUN_10a300604(lVar7,auStack_30);
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



/* Entry: 10a300604; end: 10a30068f;  */

void FUN_10a300604(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a300690; end: 10a300767;  */

void FUN_10a300690(long *param_1,long *param_2,undefined *param_3,long param_4)

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
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110bd9df0,0);
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
    FUN_10a2f0180(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f64b3ce;
      if (param_4 != 0) {
        puVar2 = param_3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f64ce40,0x34,&UNK_10f63498b,in_x6,in_x7,param_4,
                          puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a300768; end: 10a3007b7;  */

void FUN_10a300768(long param_1)

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



/* Entry: 10a3007b8; end: 10a300823;  */

void FUN_10a3007b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a300824; end: 10a30087b;  */

undefined8 FUN_10a300824(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x278;
  __Znwm(0x278);
  FUN_10a2dc7e0();
  return uVar1;
}



/* Entry: 10a30087c; end: 10a30087f;  */

void FUN_10a30087c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a300880; end: 10a300893;  */

void FUN_10a300880(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a300894; end: 10a3008af;  */

void FUN_10a300894(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3008b0; end: 10a3008eb;  */

long FUN_10a3008b0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3008ec; end: 10a3008ef;  */

void FUN_10a3008ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3008f0; end: 10a300947;  */

long FUN_10a3008f0(long param_1)

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



/* Entry: 10a300948; end: 10a300a43;  */

undefined1  [16] FUN_10a300948(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc3338;
  puVar1 = &UNK_10f64b3ce;
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
    ppuStack_40 = &PTR_DAT_110bc3338;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bc3458;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a300a44; end: 10a300aff;  */

void FUN_10a300a44(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f64c9d9,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a300b00);
  (*pcVar4)();
}



/* Entry: 10a300b00; end: 10a300bbb;  */

undefined8 * FUN_10a300b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x510;
  __Znwm();
  puVar1[0x9e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xa1) = 0x100;
  puVar1[0xa0] = 0;
  puVar1[0x9f] = 0;
  FUN_10a4213cc();
  *puVar1 = &PTR_FUN_110bbf170;
  puVar1[2] = &PTR_DAT_110bbf3a0;
  puVar1[7] = &PTR_FUN_110bbf3f8;
  puVar1[0xd] = &PTR_FUN_110bbf418;
  puVar1[0x9e] = &PTR_FUN_110bbf518;
  puVar1[0x16] = &PTR_FUN_110bbf488;
  puVar1[0x17] = &PTR_FUN_110bbf4b8;
  return puVar1;
}



/* Entry: 10a300bbc; end: 10a300bbf;  */

void FUN_10a300bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a300bc0; end: 10a300bd3;  */

void FUN_10a300bc0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a300bd4; end: 10a300bef;  */

void FUN_10a300bd4(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a300bf0; end: 10a300c2b;  */

long FUN_10a300bf0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a300c2c; end: 10a300c2f;  */

void FUN_10a300c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a300c30; end: 10a300c87;  */

long FUN_10a300c30(long param_1)

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



/* Entry: 10a300c88; end: 10a30103b;  */

undefined8 * FUN_10a300c88(undefined8 *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x66) = 0;
  param_1[0xe] = param_1 + 0xf;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *param_1 = &PTR_FUN_110bc35e0;
  param_1[0x1e] = param_1;
  param_1[0x20] = &UNK_10f641f26;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  uVar1 = param_1[0x1f];
  func_0x000107c2b054(auStack_58);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x10c));
  FUN_10a1aca34(param_1,uVar1,auStack_58,param_1 + 0x21,param_1 + 0x23,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  param_1[0x24] = param_1;
  param_1[0x26] = &UNK_10f64cef6;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  uVar1 = param_1[0x25];
  func_0x000107c2b054(auStack_58);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x13c));
  FUN_10a1ad7fc(param_1,uVar1,auStack_58,param_1 + 0x27,param_1 + 0x29,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  param_1[0x2a] = param_1;
  param_1[0x2c] = &UNK_10f64ceff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  func_0x000107c2b054(auStack_70);
  __ZNSt3__19to_stringEi(auStack_88,*(undefined4 *)((long)param_1 + 0x16c));
  func_0x000107c2b054(auStack_58,&DAT_10f491408);
  FUN_10a1acad8(param_1,auStack_58,auStack_70,param_1 + 0x2d,param_1 + 0x2f,auStack_88,0);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  FUN_10a321d54(param_1 + 0x30,param_1,&UNK_10f64cf0a);
  FUN_10a321d54(param_1 + 0x34,param_1,&UNK_10f64cf1a);
  if (param_2 != 0) {
    func_0x000107c2b054(auStack_58,&UNK_10f64cf23);
    FUN_10a0b4ec0(param_1 + 0x14,auStack_58);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] != 0) {
      param_3 = (long *)*param_3;
      goto LAB_10a300f28;
    }
  }
  else if (*(char *)((long)param_3 + 0x17) != '\0') {
LAB_10a300f28:
    func_0x000107c2b054(auStack_58,param_3);
    FUN_10a30103c(param_1,auStack_58,1);
    goto LAB_10a300f68;
  }
  func_0x000107c2b054(auStack_58,&UNK_10f64cf3d);
  FUN_10a30103c(param_1,auStack_58,1);
LAB_10a300f68:
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10a30103c; end: 10a301167;  */

long FUN_10a30103c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x20,param_2);
  if ((int)param_3 == 0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
    }
    else {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      lStack_40 = param_2[2];
    }
  }
  else {
    func_0x00010ad03330();
    FUN_10a0b4df8(&uStack_50);
  }
  FUN_10a31b404(&uStack_68,param_1,&uStack_50,param_3);
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  if (uStack_60 == 0) {
    param_1 = 0;
    if (((uint)(int)(char)bStack_51 >> 7 & 1) == 0) goto LAB_10a301100;
  }
  else {
    FUN_10a31a4c0(param_1,&uStack_68,&uStack_68);
    if (-1 < (char)bStack_51) goto LAB_10a301100;
  }
  __ZdlPv(uStack_68);
LAB_10a301100:
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return param_1;
}



/* Entry: 10a301168; end: 10a301273;  */

undefined8 * FUN_10a301168(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a301274; end: 10a3012a7;  */

undefined8 * FUN_10a301274(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc35e0;
  FUN_10a3012a8();
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a3012a8; end: 10a301383;  */

void FUN_10a3012a8(long param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    **(undefined1 **)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    **(undefined1 **)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  FUN_10a042718(param_1 + 0xa0);
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  func_0x000107c27bf0(param_1 + 0xb8,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 **)(param_1 + 0xb8) = puVar1;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x68) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}



/* Entry: 10a301384; end: 10a301387;  */

undefined8 * FUN_10a301384(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc35e0;
  FUN_10a3012a8();
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a301388; end: 10a30139b;  */

void FUN_10a301388(void)

{
  FUN_10a301274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a30139c; end: 10a30149f;  */

/* WARNING: Possible PIC construction at 0x00010a30147c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a30172c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a301480) */
/* WARNING: Removing unreachable block (ram,0x00010a301730) */
/* WARNING: Removing unreachable block (ram,0x00010a301738) */
/* WARNING: Removing unreachable block (ram,0x00010a301740) */

void FUN_10a30139c(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float *pfStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_80;
  ppuVar5 = &puStack_80;
  FUN_10a3014a0();
  (**(code **)((long)*param_2 + 0x10))(param_2);
  FUN_10a31a3c8(param_2[0x1e],param_2 + 0x23,(int)param_2[0x21],param_3);
  puVar6 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x33);
  puVar7 = param_4;
  FUN_10a31a478(param_2[0x30]);
  uStack_78 = 0;
  puStack_80 = (undefined *)0x3f800000;
  uStack_68 = 0;
  uStack_70 = 0x3f80000000000000;
  uVar16 = 0;
  uStack_58 = 0x3f800000;
  uStack_60 = 0;
  uStack_48 = 0x3f80000000000000;
  uStack_50 = 0;
  if ((int)param_2[0x2d] != -1) {
    puVar6 = (undefined8 *)0x1;
    puVar7 = (undefined8 *)0x0;
    _glUniformMatrix4fv();
  }
  if ((int)param_2[0x27] != -1) {
    _glUniform1f(param_1);
    uVar16 = param_1;
  }
  func_0x00010ad4b894((int)param_2[0x37]);
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_80 = &UNK_10f635282;
  uStack_78 = 0x2b;
  if (*(long *)(*ppuVar4 + 0x10) == 0) {
    FUN_10a0edfc4();
    ppuVar2 = &puStack_b0;
    pcStack_88 = FUN_10a3014a0;
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    puStack_a0 = param_4;
    plStack_98 = (long *)param_2;
    pppuStack_90 = (undefined8 ***)&stack0xfffffffffffffff0;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar13 = *(long *)(*ppuVar4 + 0x10);
    puStack_b0 = &UNK_10f635282;
    uStack_a8 = 0x2b;
    if (lVar13 != 0) {
      if (*(long **)(lVar13 + 0xb8) != (long *)0x0 &&
          (undefined **)*(long **)(lVar13 + 0xb8) != ppuVar5) {
        FUN_10a31a328();
      }
      if ((char)ppuVar5[0x1d] == '\x01') {
        func_0x00010a31a390(ppuVar5);
      }
      if ((undefined **)*(long **)(lVar13 + 0xb8) != ppuVar5) {
        _glUseProgram((int)ppuVar5[0xd]);
      }
      *(undefined2 *)((long)ppuVar5 + 0x6c) = 0;
      *(undefined ***)(lVar13 + 0xb8) = ppuVar5;
      plVar10 = (long *)ppuVar5[0xe];
      while ((undefined **)plVar10 != ppuVar5 + 0xf) {
        *(undefined4 *)plVar10[0xe] = 0xffffffff;
        plVar11 = plVar10;
        plVar1 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar11[2];
            bVar3 = (long *)*plVar10 != plVar11;
            plVar11 = plVar10;
          } while (bVar3);
        }
        else {
          do {
            plVar10 = plVar1;
            plVar1 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
      return;
    }
    FUN_10a0edfc4(&puStack_b0);
    param_2 = &puStack_d0;
    pcStack_b8 = FUN_10a301590;
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    pppuStack_c0 = &pppuStack_90;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puStack_d0 = &UNK_10f635282;
    uStack_c8 = 0x2b;
    if (*(long *)(*ppuVar4 + 0x10) == 0) {
      FUN_10a0edfc4();
      ppuVar2 = &puStack_170;
      pcStack_d8 = FUN_10a3015e0;
      ppppuVar14 = &pppuStack_e0;
      pppuStack_e0 = &pppuStack_c0;
      FUN_10a3014a0();
      (**(code **)((long)*param_2 + 0x10))(param_2);
      pfStack_128 = (float *)0x0;
      lStack_120 = 0;
      uStack_118 = 0;
      FUN_10a31bbf8(&pfStack_128,&UNK_10e4aa708,&UNK_10e4aa728,8);
      if (lStack_120 - (long)pfStack_128 != 0) {
        uVar9 = 0;
        uVar12 = lStack_120 - (long)pfStack_128 >> 2;
        pfVar8 = pfStack_128;
        do {
          if (uVar12 <= uVar9 + 1) goto LAB_10a301760;
          *(ulong *)pfVar8 =
               CONCAT44((float)((ulong)puVar7[3] >> 0x20) +
                        (float)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20) * pfVar8[1] +
                        (float)((ulong)*puVar7 >> 0x20) * *pfVar8,
                        (float)puVar7[3] +
                        (float)*(undefined8 *)((long)puVar7 + 0xc) * pfVar8[1] +
                        (float)*puVar7 * *pfVar8);
          uVar9 = uVar9 + 2;
          pfVar8 = pfVar8 + 2;
        } while (uVar9 < uVar12);
      }
      FUN_10a31a3c8(param_2[0x1e],param_2 + 0x23,(int)param_2[0x21],puVar6);
      FUN_10a31a478(param_2[0x30],(int)param_2[0x33],pfStack_128);
      uStack_168 = 0;
      puStack_170 = (undefined *)0x3f800000;
      uStack_158 = 0;
      uStack_160 = 0x3f80000000000000;
      uStack_148 = 0x3f800000;
      uStack_150 = 0;
      uStack_138 = 0x3f80000000000000;
      uStack_140 = 0;
      if ((int)param_2[0x2d] != -1) {
        _glUniformMatrix4fv((int)param_2[0x2d],1,0,&puStack_170);
      }
      if ((int)param_2[0x27] != -1) {
        _glUniform1f(uVar16);
      }
      func_0x00010ad4b894((int)param_2[0x37]);
      ppuVar5 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puStack_170 = &UNK_10f635282;
      uStack_168 = 0x2b;
      if (*(long *)(*ppuVar5 + 0x10) == 0) {
        FUN_10a0edfc4(&puStack_170);
LAB_10a301760:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10a301764);
        (*pcVar15)();
      }
      plVar10 = (long *)(*(long *)(*ppuVar5 + 0x10) + 0xb8);
      pcVar15 = (code *)0x10a301730;
    }
    else {
      plVar10 = (long *)(*(long *)(*ppuVar4 + 0x10) + 0xb8);
      puVar6 = (undefined8 *)0x0;
      param_2 = ppuVar5;
      ppppuVar14 = (undefined8 ****)pppuStack_c0;
      pcVar15 = pcStack_b8;
    }
  }
  else {
    plVar10 = (long *)(*(long *)(*ppuVar4 + 0x10) + 0xb8);
    puVar6 = param_4;
    ppppuVar14 = (undefined8 ****)&stack0xfffffffffffffff0;
    pcVar15 = (code *)0x10a301480;
  }
  *(undefined8 **)((long)ppuVar2 + -0x20) = puVar6;
  *(undefined ***)((long)ppuVar2 + -0x18) = param_2;
  *(undefined8 *****)((long)ppuVar2 + -0x10) = ppppuVar14;
  *(code **)((long)ppuVar2 + -8) = pcVar15;
  if (*plVar10 != 0) {
    FUN_10a31a328();
  }
  _glUseProgram(0);
  *plVar10 = 0;
  return;
}



/* Entry: 10a3014a0; end: 10a30158f;  */

/* WARNING: Possible PIC construction at 0x00010a30172c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a301730) */
/* WARNING: Removing unreachable block (ram,0x00010a301738) */
/* WARNING: Removing unreachable block (ram,0x00010a301740) */

void FUN_10a3014a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  float *pfVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float *pfStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_30;
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar11 = *(long *)(*ppuVar4 + 0x10);
  puStack_30 = &UNK_10f635282;
  uStack_28 = 0x2b;
  if (lVar11 != 0) {
    if (*(long **)(lVar11 + 0xb8) != (long *)0x0 && *(long **)(lVar11 + 0xb8) != param_2) {
      FUN_10a31a328();
    }
    if ((char)param_2[0x1d] == '\x01') {
      func_0x00010a31a390(param_2);
    }
    if (*(long **)(lVar11 + 0xb8) != param_2) {
      _glUseProgram((int)param_2[0xd]);
    }
    *(undefined2 *)((long)param_2 + 0x6c) = 0;
    *(long **)(lVar11 + 0xb8) = param_2;
    plVar8 = (long *)param_2[0xe];
    while (plVar8 != param_2 + 0xf) {
      *(undefined4 *)plVar8[0xe] = 0xffffffff;
      plVar9 = plVar8;
      plVar1 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar3 = (long *)*plVar8 != plVar9;
          plVar9 = plVar8;
        } while (bVar3);
      }
      else {
        do {
          plVar8 = plVar1;
          plVar1 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
    return;
  }
  FUN_10a0edfc4(&puStack_30);
  ppuVar5 = &puStack_50;
  pcStack_38 = FUN_10a301590;
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar11 = *(long *)(*ppuVar4 + 0x10);
  puStack_50 = &UNK_10f635282;
  uStack_48 = 0x2b;
  if (lVar11 == 0) {
    FUN_10a0edfc4();
    ppuVar2 = &puStack_f0;
    pcStack_58 = FUN_10a3015e0;
    ppppuVar12 = &pppuStack_60;
    pppuStack_60 = &pppuStack_40;
    FUN_10a3014a0();
    (**(code **)((long)*ppuVar5 + 0x10))(ppuVar5);
    pfStack_a8 = (float *)0x0;
    lStack_a0 = 0;
    uStack_98 = 0;
    FUN_10a31bbf8(&pfStack_a8,&UNK_10e4aa708,&UNK_10e4aa728,8);
    if (lStack_a0 - (long)pfStack_a8 != 0) {
      uVar7 = 0;
      uVar10 = lStack_a0 - (long)pfStack_a8 >> 2;
      pfVar6 = pfStack_a8;
      do {
        if (uVar10 <= uVar7 + 1) goto LAB_10a301760;
        *(ulong *)pfVar6 =
             CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20) * pfVar6[1] +
                      (float)((ulong)*param_4 >> 0x20) * *pfVar6,
                      (float)param_4[3] +
                      (float)*(undefined8 *)((long)param_4 + 0xc) * pfVar6[1] +
                      (float)*param_4 * *pfVar6);
        uVar7 = uVar7 + 2;
        pfVar6 = pfVar6 + 2;
      } while (uVar7 < uVar10);
    }
    FUN_10a31a3c8(ppuVar5[0x1e],ppuVar5 + 0x23,(int)ppuVar5[0x21],param_3);
    FUN_10a31a478(ppuVar5[0x30],(int)ppuVar5[0x33],pfStack_a8);
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x3f800000;
    uStack_d8 = 0;
    uStack_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    uStack_d0 = 0;
    uStack_b8 = 0x3f80000000000000;
    uStack_c0 = 0;
    if ((int)ppuVar5[0x2d] != -1) {
      _glUniformMatrix4fv((int)ppuVar5[0x2d],1,0,&puStack_f0);
    }
    if ((int)ppuVar5[0x27] != -1) {
      _glUniform1f(param_1);
    }
    func_0x00010ad4b894((int)ppuVar5[0x37]);
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar11 = *(long *)(*ppuVar4 + 0x10);
    puStack_f0 = &UNK_10f635282;
    uStack_e8 = 0x2b;
    if (lVar11 == 0) {
      FUN_10a0edfc4(&puStack_f0);
LAB_10a301760:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10a301764);
      (*pcVar13)();
    }
    pcVar13 = (code *)0x10a301730;
  }
  else {
    param_3 = 0;
    ppuVar5 = (undefined **)param_2;
    ppppuVar12 = (undefined8 ****)pppuStack_40;
    pcVar13 = pcStack_38;
  }
  *(undefined8 *)((long)ppuVar2 + -0x20) = param_3;
  *(undefined ***)((long)ppuVar2 + -0x18) = ppuVar5;
  *(undefined8 *****)((long)ppuVar2 + -0x10) = ppppuVar12;
  *(code **)((long)ppuVar2 + -8) = pcVar13;
  if (*(long *)(lVar11 + 0xb8) != 0) {
    FUN_10a31a328();
  }
  _glUseProgram(0);
  *(long *)(lVar11 + 0xb8) = 0;
  return;
}



/* Entry: 10a301590; end: 10a3015df;  */

/* WARNING: Possible PIC construction at 0x00010a30172c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a301730) */
/* WARNING: Removing unreachable block (ram,0x00010a301738) */
/* WARNING: Removing unreachable block (ram,0x00010a301740) */

void FUN_10a301590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float *pfStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar3 = &puStack_20;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar4 = *(long *)(*ppuVar2 + 0x10);
  puStack_20 = &UNK_10f635282;
  uStack_18 = 0x2b;
  if (lVar4 == 0) {
    FUN_10a0edfc4();
    pcStack_28 = FUN_10a3015e0;
    unaff_x29 = &puStack_30;
    puStack_30 = &stack0xfffffffffffffff0;
    FUN_10a3014a0();
    (**(code **)((long)*ppuVar3 + 0x10))(ppuVar3);
    pfStack_78 = (float *)0x0;
    lStack_70 = 0;
    uStack_68 = 0;
    FUN_10a31bbf8(&pfStack_78,&UNK_10e4aa708,&UNK_10e4aa728,8);
    if (lStack_70 - (long)pfStack_78 != 0) {
      uVar6 = 0;
      uVar7 = lStack_70 - (long)pfStack_78 >> 2;
      pfVar5 = pfStack_78;
      do {
        if (uVar7 <= uVar6 + 1) goto LAB_10a301760;
        *(ulong *)pfVar5 =
             CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20) * pfVar5[1] +
                      (float)((ulong)*param_4 >> 0x20) * *pfVar5,
                      (float)param_4[3] +
                      (float)*(undefined8 *)((long)param_4 + 0xc) * pfVar5[1] +
                      (float)*param_4 * *pfVar5);
        uVar6 = uVar6 + 2;
        pfVar5 = pfVar5 + 2;
      } while (uVar6 < uVar7);
    }
    FUN_10a31a3c8(ppuVar3[0x1e],ppuVar3 + 0x23,(int)ppuVar3[0x21],param_3);
    FUN_10a31a478(ppuVar3[0x30],(int)ppuVar3[0x33],pfStack_78);
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    uStack_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    if ((int)ppuVar3[0x2d] != -1) {
      _glUniformMatrix4fv((int)ppuVar3[0x2d],1,0,&puStack_c0);
    }
    if ((int)ppuVar3[0x27] != -1) {
      _glUniform1f(param_1);
    }
    func_0x00010ad4b894((int)ppuVar3[0x37]);
    ppuVar2 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar4 = *(long *)(*ppuVar2 + 0x10);
    puStack_c0 = &UNK_10f635282;
    uStack_b8 = 0x2b;
    if (lVar4 == 0) {
      FUN_10a0edfc4(&puStack_c0);
LAB_10a301760:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301764);
      (*pcVar1)();
    }
    unaff_x30 = 0x10a301730;
    register0x00000008 = (BADSPACEBASE *)&puStack_c0;
    unaff_x19 = (long *)ppuVar3;
    unaff_x20 = param_3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(lVar4 + 0xb8) != 0) {
    FUN_10a31a328();
  }
  _glUseProgram(0);
  *(long *)(lVar4 + 0xb8) = 0;
  return;
}



/* Entry: 10a3015e0; end: 10a301787;  */

void FUN_10a3015e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float *pfStack_58;
  float *pfStack_50;
  undefined8 uStack_48;
  
  FUN_10a3014a0();
  (**(code **)(*param_2 + 0x10))(param_2);
  pfStack_58 = (float *)0x0;
  pfStack_50 = (float *)0x0;
  uStack_48 = 0;
  FUN_10a31bbf8(&pfStack_58,&UNK_10e4aa708,&UNK_10e4aa728,8);
  if ((long)pfStack_50 - (long)pfStack_58 != 0) {
    uVar4 = 0;
    uVar5 = (long)pfStack_50 - (long)pfStack_58 >> 2;
    pfVar3 = pfStack_58;
    do {
      if (uVar5 <= uVar4 + 1) goto LAB_10a301760;
      *(ulong *)pfVar3 =
           CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                    (float)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20) * pfVar3[1] +
                    (float)((ulong)*param_4 >> 0x20) * *pfVar3,
                    (float)param_4[3] +
                    (float)*(undefined8 *)((long)param_4 + 0xc) * pfVar3[1] +
                    (float)*param_4 * *pfVar3);
      uVar4 = uVar4 + 2;
      pfVar3 = pfVar3 + 2;
    } while (uVar4 < uVar5);
  }
  FUN_10a31a3c8(param_2[0x1e],param_2 + 0x23,(int)param_2[0x21],param_3);
  FUN_10a31a478(param_2[0x30],(int)param_2[0x33],pfStack_58);
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f80000000000000;
  uStack_78 = 0x3f800000;
  uStack_80 = 0;
  uStack_68 = 0x3f80000000000000;
  uStack_70 = 0;
  if ((int)param_2[0x2d] != -1) {
    _glUniformMatrix4fv((int)param_2[0x2d],1,0,&puStack_a0);
  }
  if ((int)param_2[0x27] != -1) {
    _glUniform1f(param_1);
  }
  func_0x00010ad4b894((int)param_2[0x37]);
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_a0 = &UNK_10f635282;
  uStack_98 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    func_0x00010a31a2dc(*(long *)(*ppuVar2 + 0x10) + 0xb8);
    if (pfStack_58 != (float *)0x0) {
      pfStack_50 = pfStack_58;
      __ZdlPv();
    }
    return;
  }
  FUN_10a0edfc4(&puStack_a0);
LAB_10a301760:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301764);
  (*pcVar1)();
}



/* Entry: 10a301788; end: 10a3018c7;  */

undefined8 *
FUN_10a301788(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,int param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10a3014a0();
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((int)param_1[0x27] != -1) {
    uVar7 = 0;
    if (param_8 == 0) {
      uVar7 = 0x3f800000;
    }
    _glUniform1f(uVar7);
  }
  FUN_10a31a3c8(param_1[0x1e],param_1 + 0x23,(int)param_1[0x21],param_2);
  FUN_10a31a478(param_1[0x30],(int)param_1[0x33],param_3);
  FUN_10a31a478(param_1[0x34],(int)param_1[0x37],param_5);
  uStack_88 = 0;
  puStack_90 = (undefined *)0x3f800000;
  uStack_78 = 0;
  uStack_80 = 0x3f80000000000000;
  uStack_68 = 0x3f800000;
  uStack_70 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  if ((int)param_1[0x2d] != -1) {
    _glUniformMatrix4fv((int)param_1[0x2d],1,0,&puStack_90);
  }
  iVar4 = (int)param_6 / 2;
  uVar7 = 0;
  _glDrawArrays(param_7);
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_90 = &UNK_10f635282;
  uStack_88 = 0x2b;
  if (*(long *)(*ppuVar3 + 0x10) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*ppuVar3 + 0x10) + 0xb8);
    func_0x00010a31a2dc(puVar2);
    return puVar2;
  }
  FUN_10a0edfc4(&puStack_90);
  uVar1 = SUB84(&puStack_b0,0);
  pcStack_98 = FUN_10a3018c8;
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  puStack_a0 = &stack0xfffffffffffffff0;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_b0 = &UNK_10f635282;
  uStack_a8 = 0x2b;
  if (*(long *)(*ppuVar3 + 0x10) != 0) {
    plVar5 = (long *)(*(long *)(*ppuVar3 + 0x10) + 0xa0);
    puVar2 = (undefined8 *)*plVar5;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x18;
      puStack_b0 = param_6;
      uStack_a8 = param_7;
      __Znwm();
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = puVar2 + 1;
      func_0x00010a0909fc(plVar5,puVar2);
      puVar2 = (undefined8 *)*plVar5;
    }
    return puVar2;
  }
  FUN_10a0edfc4();
  if (iVar4 != 0) {
    ppuVar3 = &PTR_PTR_1133011b0;
    FUN_10ae079a0(0,&PTR_PTR_1133011b0);
    FUN_10ae07cd4(ppuVar3,&PTR_PTR_1133011b0);
  }
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = &PTR_FUN_110bc3608;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar6 = puVar2 + 2;
  *puVar6 = 0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar7;
  _glGenFramebuffers(1,puVar6);
  _glBindFramebuffer(0x8d40,*(undefined4 *)puVar6);
  _glBindFramebuffer(0x8d40,0);
  return puVar2;
}



/* Entry: 10a3018c8; end: 10a301917;  */

undefined8 * FUN_10a3018c8(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  uVar1 = SUB84(&stack0xffffffffffffffe0,0);
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*(long *)(*ppuVar3 + 0x10) != 0) {
    plVar4 = (long *)(*(long *)(*ppuVar3 + 0x10) + 0xa0);
    puVar2 = (undefined8 *)*plVar4;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x18;
      __Znwm();
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = puVar2 + 1;
      func_0x00010a0909fc(plVar4,puVar2);
      puVar2 = (undefined8 *)*plVar4;
    }
    return puVar2;
  }
  FUN_10a0edfc4();
  if (param_3 != 0) {
    ppuVar3 = &PTR_PTR_1133011b0;
    FUN_10ae079a0(0,&PTR_PTR_1133011b0);
    FUN_10ae07cd4(ppuVar3,&PTR_PTR_1133011b0);
  }
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = &PTR_FUN_110bc3608;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar5 = puVar2 + 2;
  *puVar5 = 0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = param_2;
  _glGenFramebuffers(1,puVar5);
  _glBindFramebuffer(0x8d40,*(undefined4 *)puVar5);
  _glBindFramebuffer(0x8d40,0);
  return puVar2;
}



/* Entry: 10a301918; end: 10a3019bf;  */

undefined8 * FUN_10a301918(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    ppuVar2 = &PTR_PTR_1133011b0;
    FUN_10ae079a0(0,&PTR_PTR_1133011b0);
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133011b0);
  }
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc3608;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar3 = puVar1 + 2;
  *puVar3 = 0;
  *(undefined4 *)(puVar1 + 1) = param_1;
  *(undefined4 *)((long)puVar1 + 0xc) = param_2;
  _glGenFramebuffers(1,puVar3);
  _glBindFramebuffer(0x8d40,*(undefined4 *)puVar3);
  _glBindFramebuffer(0x8d40,0);
  return puVar1;
}



/* Entry: 10a3019c0; end: 10a301a0b;  */

undefined8 * FUN_10a3019c0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_110bc3608;
  piVar1 = (int *)(param_1 + 2);
  if (*piVar1 != 0) {
    _glDeleteFramebuffers(1,piVar1);
    *piVar1 = 0;
  }
  return param_1;
}



/* Entry: 10a301a0c; end: 10a301a0f;  */

undefined8 * FUN_10a301a0c(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_110bc3608;
  piVar1 = (int *)(param_1 + 2);
  if (*piVar1 != 0) {
    _glDeleteFramebuffers(1,piVar1);
    *piVar1 = 0;
  }
  return param_1;
}



/* Entry: 10a301a10; end: 10a301a23;  */

void FUN_10a301a10(void)

{
  FUN_10a3019c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a301a24; end: 10a301b2b;  */

void FUN_10a301a24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010a301a5c();
  func_0x00010a301ac4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindFramebuffer_11034b378)(param_2,0);
  return;
}



/* Entry: 10a301b2c; end: 10a301b87;  */

undefined1 FUN_10a301b2c(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113835378 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113835378,&ppuStack_20,FUN_10a321e44);
  }
  return uRam0000000113835380;
}



/* Entry: 10a301b88; end: 10a301c13;  */

void FUN_10a301b88(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    plVar2 = param_1;
    if ((char)param_1[1] == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      _glFlush();
    }
    iVar1 = (int)plVar2;
    FUN_10ad4bd78();
    if (iVar1 < 3000) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glClientWaitSyncAPPLE_11034b430)(*param_1,0,1000000000);
      return;
    }
    while( true ) {
      lVar3 = *param_1;
      _glClientWaitSync(lVar3,0,1000000000);
      if ((int)lVar3 != 0x911b) break;
      _sched_yield();
    }
  }
  return;
}



/* Entry: 10a301c14; end: 10a301d17;  */

void FUN_10a301c14(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (*param_1 != 0) {
    plVar2 = param_1;
    FUN_10ad4bd78();
    iVar1 = (int)plVar2;
    if (iVar1 < 3000) {
      if (lRam00000001137eaeb8 != -1) {
        puStack_28 = &uStack_31;
        ppuStack_30 = &puStack_28;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137eaeb8,&ppuStack_30,FUN_10a321e78);
      }
      FUN_10a301b88(param_1);
    }
    else {
      FUN_10a301b2c();
      if ((iVar1 == 0) || (*param_1 != 0)) {
        if ((char)param_1[1] == '\x01') {
          *(undefined1 *)(param_1 + 1) = 0;
          _glFlush();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glWaitSync_11034b918)(*param_1,0,0xffffffffffffffff);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a301d18; end: 10a301d93;  */

undefined1  [16] FUN_10a301d18(uint *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar2 = (ulong)*param_1;
  uVar3 = param_1[1];
  uVar7 = (ulong)uVar3;
  uVar4 = param_1[2];
  uVar8 = (ulong)uVar4;
  uVar6 = uVar2;
  FUN_10a301d94();
  iVar5 = (int)uVar6;
  iVar1 = 0;
  if (uVar3 == 0x1908) {
    iVar1 = iVar5;
  }
  if (uVar3 == 0 || iVar1 != 0) {
    uVar7 = uVar2;
    func_0x0001092556e0(uVar2);
  }
  if (uVar4 == 0) {
    iVar5 = 1;
  }
  if (iVar5 == 1) {
    uVar8 = uVar2;
    func_0x0001092553b8(uVar2);
  }
  auVar9._0_8_ = uVar2 | uVar7 << 0x20;
  auVar9._8_8_ = uVar8 & 0xffffffff;
  return auVar9;
}



/* Entry: 10a301d94; end: 10a301f67;  */

undefined8 FUN_10a301d94(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (param_1 < 0x9270) {
    if (0x8e8b < param_1) {
      if (1 < param_1 - 0x8e8cU) {
        return 0;
      }
      return uVar1;
    }
    if (param_1 == 0x83f3) {
      return uVar1;
    }
    if (param_1 == 0x8c4f) {
      return uVar1;
    }
    iVar2 = 0x8d64;
  }
  else {
    if (param_1 - 0x9270U < 10) {
      return uVar1;
    }
    if (param_1 == 0x93b0) {
      return uVar1;
    }
    iVar2 = 0x93d0;
  }
  if (param_1 != iVar2) {
    return 0;
  }
  return uVar1;
}



/* Entry: 10a301f68; end: 10a30206b;  */

undefined8 * FUN_10a301f68(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  _bzero((long)param_1 + 0x14,0x354);
  lVar3 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar3 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x28) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x4c) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x44) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x3c) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x50) = 1;
    lVar1 = lVar3 + 0x34;
    *(undefined4 *)((long)param_1 + lVar3 + 0x58) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x340);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0x100000000;
  *(undefined1 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0x100000000;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  param_1[0x89] = *ppuVar2;
  _glGenFramebuffers(1,param_1 + 1);
  return param_1;
}



/* Entry: 10a30206c; end: 10a3020af;  */

long FUN_10a30206c(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10a3020b0(param_1);
    _glDeleteFramebuffers(1,(int *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a3020b0; end: 10a302387;  */

bool FUN_10a3020b0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar1 != 0) {
    lVar2 = *param_1;
    _glBindFramebuffer(iVar1,0);
    if (iVar1 == 0x8d40 || iVar1 == 0x8ca9) {
      *(undefined4 *)(lVar2 + 0xa0) = 0;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return iVar1 != 0;
}



/* Entry: 10a302388; end: 10a302467;  */

void FUN_10a302388(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 != 0) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      *(undefined4 *)((long)param_2 + 4) = 0;
      FUN_10a3024c0(param_1,param_2);
    }
    else if (iVar1 == 0x8d00 || iVar1 == 0x821a) {
      _glFramebufferTexture2D(*(undefined4 *)(param_1 + 0xc),0x8d00,0xde1,0,0);
    }
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[1] = 0;
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0x24) = 0;
    *(undefined8 *)((long)param_2 + 0x1c) = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    param_2[5] = 1;
    *(undefined4 *)(param_2 + 6) = 0;
  }
  return;
}



/* Entry: 10a302468; end: 10a3024bf;  */

void FUN_10a302468(long *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  
  uVar10 = *(uint *)((long)param_1 + 0x24);
  if (uVar10 <= param_3 + 1) {
    uVar10 = param_3 + 1;
  }
  *(uint *)((long)param_1 + 0x24) = uVar10;
  if (0xf < param_3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3024c0);
    (*pcVar6)();
  }
  *(uint *)((long)param_1 + (ulong)param_3 * 4 + 0x404) = param_3 | 0x8ce0;
  *(uint *)((long)param_1 + (ulong)param_3 * 0x34 + 0x58) = param_3 | 0x8ce0;
  uVar21 = param_2[1];
  uVar20 = *param_2;
  uVar25 = param_2[3];
  uVar23 = param_2[2];
  uVar26 = param_2[4];
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x50) = param_2[5];
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x48) = uVar26;
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x40) = uVar25;
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x38) = uVar23;
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x30) = uVar21;
  *(undefined8 *)((long)param_1 + (ulong)param_3 * 0x34 + 0x28) = uVar20;
  puVar7 = (undefined1 *)register0x00000008;
  plVar12 = (long *)((long)param_1 + (ulong)param_3 * 0x34 + 0x28);
FUN_10a3024c0:
  plVar8 = (long *)(puVar7 + -0x20);
  *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar7 + -8) = unaff_x30;
  bVar4 = *(byte *)(plVar12 + 2);
  if (bVar4 - 1 < 0x40 && (1L << ((ulong)(bVar4 - 1) & 0x3f) & 0x800000008000808bU) != 0) {
    uVar10 = *(uint *)(plVar12 + 1);
    *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf85;
    *(undefined8 *)(puVar7 + -0x18) = 0x18;
    if (uVar10 != 0) {
      uVar11 = *(uint *)((long)plVar12 + 0xc);
      *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf85;
      *(undefined8 *)(puVar7 + -0x18) = 0x18;
      if (uVar11 != 0) {
        iVar14 = (int)plVar12[5];
        *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf85;
        *(undefined8 *)(puVar7 + -0x18) = 0x18;
        if (iVar14 != 0) {
          bVar5 = *(byte *)(param_1 + 2);
          if (*(byte *)(param_1 + 2) == 0) {
            *(byte *)(param_1 + 2) = bVar4;
            bVar5 = bVar4;
          }
          uVar17 = *(uint *)((long)param_1 + 0x14);
          if (*(uint *)((long)param_1 + 0x14) == 0) {
            *(uint *)((long)param_1 + 0x14) = uVar10;
            uVar17 = uVar10;
          }
          uVar18 = *(uint *)(param_1 + 3);
          if (*(uint *)(param_1 + 3) == 0) {
            *(uint *)(param_1 + 3) = uVar11;
            uVar18 = uVar11;
          }
          iVar19 = *(int *)((long)param_1 + 0x1c);
          if (*(int *)((long)param_1 + 0x1c) == 0) {
            *(int *)((long)param_1 + 0x1c) = iVar14;
            iVar19 = iVar14;
          }
          lVar15 = param_1[4];
          iVar1 = *(int *)((long)plVar12 + 0x2c);
          if ((int)lVar15 == 0) {
            *(int *)(param_1 + 4) = iVar1;
          }
          else {
            *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf9e;
            *(undefined8 *)(puVar7 + -0x18) = 0x1a;
            if ((int)lVar15 != iVar1) goto LAB_10a302810;
          }
          *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf9e;
          *(undefined8 *)(puVar7 + -0x18) = 0x1a;
          if ((uint)bVar5 == (uint)bVar4) {
            *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf9e;
            *(undefined8 *)(puVar7 + -0x18) = 0x1a;
            if (iVar19 == iVar14) {
              *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf9e;
              *(undefined8 *)(puVar7 + -0x18) = 0x1a;
              if (uVar17 == uVar10) {
                *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf9e;
                *(undefined8 *)(puVar7 + -0x18) = 0x1a;
                if (uVar18 == uVar11) {
                  uVar17 = *(uint *)(plVar12 + 1);
                  if (uVar10 <= *(uint *)(plVar12 + 1)) {
                    uVar17 = uVar10;
                  }
                  *(uint *)((long)param_1 + 0x14) = uVar17;
                  uVar10 = *(uint *)((long)plVar12 + 0xc);
                  if (uVar11 <= *(uint *)((long)plVar12 + 0xc)) {
                    uVar10 = uVar11;
                  }
                  *(uint *)(param_1 + 3) = uVar10;
                  lVar15 = *param_1;
                  iVar19 = (int)*plVar12;
                  if (iVar19 < 0x8513) {
                    if ((iVar19 == 0xde1) || (iVar19 == 0x84f5)) {
                      iVar14 = *(int *)((long)plVar12 + 0x24);
                      *(undefined **)(puVar7 + -0x20) = &UNK_10f64cfb9;
                      *(undefined8 *)(puVar7 + -0x18) = 0x3a;
                      if (iVar14 == 0) {
                        *(undefined **)(puVar7 + -0x20) = &UNK_10f64cff4;
                        *(undefined8 *)(puVar7 + -0x18) = 0x3b;
                        if (iVar1 == 0) {
                          uVar2 = *(undefined4 *)((long)param_1 + 0xc);
                          iVar1 = (int)plVar12[6];
                          iVar3 = *(int *)((long)plVar12 + 4);
                          iVar14 = (int)plVar12[4];
                          goto LAB_10a302790;
                        }
                      }
                    }
                    else {
LAB_10a3026c4:
                      *(undefined **)(puVar7 + -0x20) = &UNK_10f64d0c8;
                      *(undefined8 *)(puVar7 + -0x18) = 0x24;
                      if (iVar19 == 0x8c1a) {
                        if (iVar1 == 0) {
                          bVar4 = *(byte *)(lVar15 + 0x21a);
                          *(undefined **)(puVar7 + -0x20) = &UNK_10f64d0ed;
                          *(undefined8 *)(puVar7 + -0x18) = 0x2c;
                          if ((bVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)PTR__glFramebufferTextureLayer_11034b5b0)
                                      (*(undefined4 *)((long)param_1 + 0xc),(int)plVar12[6],
                                       *(int *)((long)plVar12 + 4),(int)plVar12[4],
                                       *(int *)((long)plVar12 + 0x24));
                            return;
                          }
                        }
                        else {
                          bVar5 = *(byte *)(lVar15 + 0x21b);
                          *(undefined **)(puVar7 + -0x20) = &UNK_10f64d11a;
                          *(undefined8 *)(puVar7 + -0x18) = 0x19;
                          if ((bVar5 & 1) != 0) {
                            iVar19 = *(int *)((long)param_1 + 0xc);
                            *(undefined **)(puVar7 + -0x20) = &UNK_10f64d134;
                            *(undefined8 *)(puVar7 + -0x18) = 0x24;
                            if (iVar19 == 0x8ca9) {
                              uVar10 = bVar4 - 2;
                              if ((uVar10 < 0x3f) &&
                                 ((1L << ((ulong)uVar10 & 0x3f) & 0x4000000040004045U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a302760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(lVar15 + 0x20))
                                          (0x8ca9,(int)plVar12[6],*(int *)((long)plVar12 + 4),
                                           (int)plVar12[4],bVar4,*(int *)((long)plVar12 + 0x24));
                                return;
                              }
                    /* WARNING: Could not recover jumptable at 0x00010a3027fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (**(code **)(lVar15 + 0x28))
                                        (0x8ca9,(int)plVar12[6],*(int *)((long)plVar12 + 4),
                                         (int)plVar12[4],*(int *)((long)plVar12 + 0x24),iVar14);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (iVar19 == 0x8513) {
                    *(undefined **)(puVar7 + -0x20) = &UNK_10f64d09b;
                    *(undefined8 *)(puVar7 + -0x18) = 0x2c;
                    if (iVar1 == 0) {
                      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
                      iVar1 = (int)plVar12[6];
                      iVar3 = *(int *)((long)plVar12 + 4);
                      iVar14 = (int)plVar12[4];
                      iVar19 = *(int *)((long)plVar12 + 0x24) + 0x8515;
LAB_10a302790:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR__glFramebufferTexture2D_11034b5a8)
                                (uVar2,iVar1,iVar19,iVar3,iVar14);
                      return;
                    }
                  }
                  else {
                    if (iVar19 != 0x8d41) goto LAB_10a3026c4;
                    iVar14 = *(int *)((long)plVar12 + 0x24);
                    *(undefined **)(puVar7 + -0x20) = &UNK_10f64d030;
                    *(undefined8 *)(puVar7 + -0x18) = 0x38;
                    if (iVar14 == 0) {
                      *(undefined **)(puVar7 + -0x20) = &UNK_10f64d069;
                      *(undefined8 *)(puVar7 + -0x18) = 0x31;
                      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)PTR__glFramebufferRenderbuffer_11034b5a0)
                                  (*(undefined4 *)((long)param_1 + 0xc),(int)plVar12[6],0x8d41,
                                   *(int *)((long)plVar12 + 4));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    *(undefined **)(puVar7 + -0x20) = &UNK_10f64cf6d;
    *(undefined8 *)(puVar7 + -0x18) = 0x17;
  }
LAB_10a302810:
  FUN_10a0edfc4();
  plVar9 = (long *)(puVar7 + -0x40);
  *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
  *(undefined8 *)(puVar7 + -0x28) = 0x10a302818;
  if (*(int *)((long)plVar8 + 0x3cc) == 0) {
    lVar15 = plVar8[0x80];
    *(undefined **)(puVar7 + -0x40) = &UNK_10f64cf5e;
    *(undefined8 *)(puVar7 + -0x38) = 0xe;
    if ((int)lVar15 != 0) goto LAB_10a302880;
    *(undefined4 *)(plVar8 + 0x73) = 0x821a;
    lVar22 = plVar12[1];
    lVar15 = *plVar12;
    lVar24 = plVar12[2];
    lVar28 = plVar12[5];
    lVar27 = plVar12[4];
    plVar8[0x70] = plVar12[3];
    plVar8[0x6f] = lVar24;
    plVar8[0x72] = lVar28;
    plVar8[0x71] = lVar27;
    plVar8[0x6e] = lVar22;
    plVar8[0x6d] = lVar15;
    unaff_x29 = *(undefined8 *)(puVar7 + -0x30);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x28);
    puVar7 = puVar7 + -0x20;
    param_1 = plVar8;
    plVar12 = plVar8 + 0x6d;
    goto FUN_10a3024c0;
  }
  *(undefined **)(puVar7 + -0x40) = &UNK_10f64cf5e;
  *(undefined8 *)(puVar7 + -0x38) = 0xe;
LAB_10a302880:
  FUN_10a0edfc4();
  param_1 = (long *)(puVar7 + -0x60);
  *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x30;
  *(undefined8 *)(puVar7 + -0x48) = 0x10a302888;
  lVar15 = plVar9[0x73];
  *(undefined **)(puVar7 + -0x60) = &UNK_10f64cf5e;
  *(undefined8 *)(puVar7 + -0x58) = 0xe;
  if ((int)lVar15 == 0) {
    *(undefined4 *)((long)plVar9 + 0x3cc) = 0x8d00;
    lVar22 = plVar12[1];
    lVar15 = *plVar12;
    lVar24 = plVar12[2];
    lVar28 = plVar12[5];
    lVar27 = plVar12[4];
    *(long *)((long)plVar9 + 0x3b4) = plVar12[3];
    *(long *)((long)plVar9 + 0x3ac) = lVar24;
    *(long *)((long)plVar9 + 0x3c4) = lVar28;
    *(long *)((long)plVar9 + 0x3bc) = lVar27;
    *(long *)((long)plVar9 + 0x3a4) = lVar22;
    *(long *)((long)plVar9 + 0x39c) = lVar15;
    unaff_x29 = *(undefined8 *)(puVar7 + -0x50);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x48);
    puVar7 = puVar7 + -0x40;
    param_1 = plVar9;
    plVar12 = (long *)((long)plVar9 + 0x39c);
    goto FUN_10a3024c0;
  }
  FUN_10a0edfc4();
  plVar8 = (long *)(puVar7 + -0x80);
  *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x50;
  *(undefined8 *)(puVar7 + -0x68) = 0x10a3028e0;
  lVar15 = param_1[0x73];
  *(undefined **)(puVar7 + -0x80) = &UNK_10f64cf5e;
  *(undefined8 *)(puVar7 + -0x78) = 0xe;
  if ((int)lVar15 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0x8d20;
    lVar22 = plVar12[1];
    lVar15 = *plVar12;
    lVar24 = plVar12[2];
    lVar28 = plVar12[5];
    lVar27 = plVar12[4];
    param_1[0x7d] = plVar12[3];
    param_1[0x7c] = lVar24;
    param_1[0x7f] = lVar28;
    param_1[0x7e] = lVar27;
    param_1[0x7b] = lVar22;
    param_1[0x7a] = lVar15;
    plVar12 = param_1 + 0x7a;
    unaff_x29 = *(undefined8 *)(puVar7 + -0x70);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x68);
    puVar7 = puVar7 + -0x60;
    goto FUN_10a3024c0;
  }
  FUN_10a0edfc4();
  *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x70;
  *(undefined8 *)(puVar7 + -0x88) = 0x10a302934;
  uVar10 = (uint)plVar12;
  if (uVar10 == 0) {
    return;
  }
  *(undefined8 *)(puVar7 + -0xa0) = 0;
  *(undefined8 *)(puVar7 + -0xb8) = 0;
  *(undefined8 *)(puVar7 + -0xc0) = 0;
  *(undefined8 *)(puVar7 + -0xa8) = 0;
  *(undefined8 *)(puVar7 + -0xb0) = 0;
  *(undefined8 *)(puVar7 + -0xd8) = 0;
  *(undefined8 *)(puVar7 + -0xe0) = 0;
  *(undefined8 *)(puVar7 + -200) = 0;
  *(undefined8 *)(puVar7 + -0xd0) = 0;
  uVar11 = *(uint *)((long)plVar8 + 0x24);
  if (uVar11 == 0) {
    uVar13 = 0;
  }
  else {
    uVar16 = 0;
    uVar13 = 0;
    plVar12 = plVar8 + 0xb;
    do {
      if ((uVar10 >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) {
        if ((0xf < uVar16) || (0x11 < (uint)uVar13)) goto LAB_10a302a74;
        *(int *)(puVar7 + uVar13 * 4 + -0xe0) = (int)*plVar12;
        uVar13 = (ulong)((uint)uVar13 + 1);
      }
      uVar16 = uVar16 + 1;
      plVar12 = (long *)((long)plVar12 + 0x34);
    } while (uVar11 != uVar16);
  }
  uVar11 = (uint)uVar13;
  if ((int)plVar8[0x73] == 0) {
    if (((uVar10 >> 0x10 & 1) != 0) && (*(int *)((long)plVar8 + 0x3cc) != 0)) {
      if (0x11 < uVar11) goto LAB_10a302a74;
      *(int *)(puVar7 + uVar13 * 4 + -0xe0) = *(int *)((long)plVar8 + 0x3cc);
      uVar13 = (ulong)(uVar11 + 1);
    }
    if (((uVar10 >> 0x11 & 1) != 0) && (iVar14 = (int)plVar8[0x80], iVar14 != 0)) {
      if (0x11 < (uint)uVar13) goto LAB_10a302a74;
      goto LAB_10a302a18;
    }
  }
  else {
    if ((uVar10 >> 0x10 & 1) != 0) {
      if (0x11 < uVar11) goto LAB_10a302a74;
      *(undefined4 *)(puVar7 + uVar13 * 4 + -0xe0) = 0x8d00;
      uVar13 = (ulong)(uVar11 + 1);
    }
    if ((uVar10 >> 0x11 & 1) != 0) {
      if (0x11 < (uint)uVar13) {
LAB_10a302a74:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a302a78);
        (*pcVar6)();
      }
      iVar14 = 0x8d20;
LAB_10a302a18:
      *(int *)(puVar7 + uVar13 * 4 + -0xe0) = iVar14;
      uVar13 = (ulong)((int)uVar13 + 1);
      goto LAB_10a302a2c;
    }
  }
  if ((int)uVar13 == 0) {
    return;
  }
LAB_10a302a2c:
  lVar15 = *plVar8;
  if ((*(byte *)(lVar15 + 0x204) & 1) == 0) {
    if (*(int *)(lVar15 + 0x1f0) < 3000) {
      if (*(char *)(lVar15 + 0x203) == '\x01') {
        _glDiscardFramebufferEXT(*(undefined4 *)((long)plVar8 + 0xc),uVar13,puVar7 + -0xe0);
      }
    }
    else {
      _glInvalidateFramebuffer(*(undefined4 *)((long)plVar8 + 0xc),uVar13,puVar7 + -0xe0);
    }
  }
  return;
}



/* Entry: 10a3024c0; end: 10a302aab;  */

void FUN_10a3024c0(long *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
code_r0x00010a3024c0:
  plVar7 = (long *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  bVar4 = *(byte *)(param_2 + 2);
  if (bVar4 - 1 < 0x40 && (1L << ((ulong)(bVar4 - 1) & 0x3f) & 0x800000008000808bU) != 0) {
    uVar9 = *(uint *)(param_2 + 1);
    *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf85;
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x18;
    if (uVar9 != 0) {
      uVar10 = *(uint *)((long)param_2 + 0xc);
      *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf85;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x18;
      if (uVar10 != 0) {
        iVar12 = (int)param_2[5];
        *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf85;
        *(undefined8 *)((long)register0x00000008 + -0x18) = 0x18;
        if (iVar12 != 0) {
          bVar5 = *(byte *)(param_1 + 2);
          if (*(byte *)(param_1 + 2) == 0) {
            *(byte *)(param_1 + 2) = bVar4;
            bVar5 = bVar4;
          }
          uVar15 = *(uint *)((long)param_1 + 0x14);
          if (*(uint *)((long)param_1 + 0x14) == 0) {
            *(uint *)((long)param_1 + 0x14) = uVar9;
            uVar15 = uVar9;
          }
          uVar16 = *(uint *)(param_1 + 3);
          if (*(uint *)(param_1 + 3) == 0) {
            *(uint *)(param_1 + 3) = uVar10;
            uVar16 = uVar10;
          }
          iVar17 = *(int *)((long)param_1 + 0x1c);
          if (*(int *)((long)param_1 + 0x1c) == 0) {
            *(int *)((long)param_1 + 0x1c) = iVar12;
            iVar17 = iVar12;
          }
          lVar13 = param_1[4];
          iVar1 = *(int *)((long)param_2 + 0x2c);
          if ((int)lVar13 == 0) {
            *(int *)(param_1 + 4) = iVar1;
          }
          else {
            *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf9e;
            *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1a;
            if ((int)lVar13 != iVar1) goto LAB_10a302810;
          }
          *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf9e;
          *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1a;
          if ((uint)bVar5 == (uint)bVar4) {
            *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf9e;
            *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1a;
            if (iVar17 == iVar12) {
              *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf9e;
              *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1a;
              if (uVar15 == uVar9) {
                *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf9e;
                *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1a;
                if (uVar16 == uVar10) {
                  uVar15 = *(uint *)(param_2 + 1);
                  if (uVar9 <= *(uint *)(param_2 + 1)) {
                    uVar15 = uVar9;
                  }
                  *(uint *)((long)param_1 + 0x14) = uVar15;
                  uVar9 = *(uint *)((long)param_2 + 0xc);
                  if (uVar10 <= *(uint *)((long)param_2 + 0xc)) {
                    uVar9 = uVar10;
                  }
                  *(uint *)(param_1 + 3) = uVar9;
                  lVar13 = *param_1;
                  iVar17 = (int)*param_2;
                  if (iVar17 < 0x8513) {
                    if ((iVar17 == 0xde1) || (iVar17 == 0x84f5)) {
                      iVar12 = *(int *)((long)param_2 + 0x24);
                      *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cfb9;
                      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x3a;
                      if (iVar12 == 0) {
                        *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cff4;
                        *(undefined8 *)((long)register0x00000008 + -0x18) = 0x3b;
                        if (iVar1 == 0) {
                          uVar2 = *(undefined4 *)((long)param_1 + 0xc);
                          iVar1 = (int)param_2[6];
                          iVar3 = *(int *)((long)param_2 + 4);
                          iVar12 = (int)param_2[4];
                          goto LAB_10a302790;
                        }
                      }
                    }
                    else {
LAB_10a3026c4:
                      *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d0c8;
                      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x24;
                      if (iVar17 == 0x8c1a) {
                        if (iVar1 == 0) {
                          bVar4 = *(byte *)(lVar13 + 0x21a);
                          *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d0ed;
                          *(undefined8 *)((long)register0x00000008 + -0x18) = 0x2c;
                          if ((bVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)PTR__glFramebufferTextureLayer_11034b5b0)
                                      (*(undefined4 *)((long)param_1 + 0xc),(int)param_2[6],
                                       *(int *)((long)param_2 + 4),(int)param_2[4],
                                       *(int *)((long)param_2 + 0x24));
                            return;
                          }
                        }
                        else {
                          bVar5 = *(byte *)(lVar13 + 0x21b);
                          *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d11a;
                          *(undefined8 *)((long)register0x00000008 + -0x18) = 0x19;
                          if ((bVar5 & 1) != 0) {
                            iVar17 = *(int *)((long)param_1 + 0xc);
                            *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d134;
                            *(undefined8 *)((long)register0x00000008 + -0x18) = 0x24;
                            if (iVar17 == 0x8ca9) {
                              uVar9 = bVar4 - 2;
                              if ((uVar9 < 0x3f) &&
                                 ((1L << ((ulong)uVar9 & 0x3f) & 0x4000000040004045U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a302760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(lVar13 + 0x20))
                                          (0x8ca9,(int)param_2[6],*(int *)((long)param_2 + 4),
                                           (int)param_2[4],bVar4,*(int *)((long)param_2 + 0x24));
                                return;
                              }
                    /* WARNING: Could not recover jumptable at 0x00010a3027fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (**(code **)(lVar13 + 0x28))
                                        (0x8ca9,(int)param_2[6],*(int *)((long)param_2 + 4),
                                         (int)param_2[4],*(int *)((long)param_2 + 0x24),iVar12);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (iVar17 == 0x8513) {
                    *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d09b;
                    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x2c;
                    if (iVar1 == 0) {
                      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
                      iVar1 = (int)param_2[6];
                      iVar3 = *(int *)((long)param_2 + 4);
                      iVar12 = (int)param_2[4];
                      iVar17 = *(int *)((long)param_2 + 0x24) + 0x8515;
LAB_10a302790:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR__glFramebufferTexture2D_11034b5a8)
                                (uVar2,iVar1,iVar17,iVar3,iVar12);
                      return;
                    }
                  }
                  else {
                    if (iVar17 != 0x8d41) goto LAB_10a3026c4;
                    iVar12 = *(int *)((long)param_2 + 0x24);
                    *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d030;
                    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x38;
                    if (iVar12 == 0) {
                      *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64d069;
                      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x31;
                      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)PTR__glFramebufferRenderbuffer_11034b5a0)
                                  (*(undefined4 *)((long)param_1 + 0xc),(int)param_2[6],0x8d41,
                                   *(int *)((long)param_2 + 4));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    *(undefined **)((long)register0x00000008 + -0x20) = &UNK_10f64cf6d;
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x17;
  }
LAB_10a302810:
  FUN_10a0edfc4();
  plVar8 = (long *)((long)register0x00000008 + -0x40);
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0x10a302818;
  if (*(int *)((long)plVar7 + 0x3cc) == 0) {
    lVar13 = plVar7[0x80];
    *(undefined **)((long)register0x00000008 + -0x40) = &UNK_10f64cf5e;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0xe;
    if ((int)lVar13 != 0) goto LAB_10a302880;
    *(undefined4 *)(plVar7 + 0x73) = 0x821a;
    lVar18 = param_2[1];
    lVar13 = *param_2;
    lVar19 = param_2[2];
    lVar21 = param_2[5];
    lVar20 = param_2[4];
    plVar7[0x70] = param_2[3];
    plVar7[0x6f] = lVar19;
    plVar7[0x72] = lVar21;
    plVar7[0x71] = lVar20;
    plVar7[0x6e] = lVar18;
    plVar7[0x6d] = lVar13;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = plVar7;
    param_2 = plVar7 + 0x6d;
    goto code_r0x00010a3024c0;
  }
  *(undefined **)((long)register0x00000008 + -0x40) = &UNK_10f64cf5e;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0xe;
LAB_10a302880:
  FUN_10a0edfc4();
  param_1 = (long *)((long)register0x00000008 + -0x60);
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0x10a302888;
  lVar13 = plVar8[0x73];
  *(undefined **)((long)register0x00000008 + -0x60) = &UNK_10f64cf5e;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0xe;
  if ((int)lVar13 == 0) {
    *(undefined4 *)((long)plVar8 + 0x3cc) = 0x8d00;
    lVar18 = param_2[1];
    lVar13 = *param_2;
    lVar19 = param_2[2];
    lVar21 = param_2[5];
    lVar20 = param_2[4];
    *(long *)((long)plVar8 + 0x3b4) = param_2[3];
    *(long *)((long)plVar8 + 0x3ac) = lVar19;
    *(long *)((long)plVar8 + 0x3c4) = lVar21;
    *(long *)((long)plVar8 + 0x3bc) = lVar20;
    *(long *)((long)plVar8 + 0x3a4) = lVar18;
    *(long *)((long)plVar8 + 0x39c) = lVar13;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = plVar8;
    param_2 = (long *)((long)plVar8 + 0x39c);
    goto code_r0x00010a3024c0;
  }
  FUN_10a0edfc4();
  plVar7 = (long *)((long)register0x00000008 + -0x80);
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10a3028e0;
  lVar13 = param_1[0x73];
  *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f64cf5e;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0xe;
  if ((int)lVar13 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0x8d20;
    lVar18 = param_2[1];
    lVar13 = *param_2;
    lVar19 = param_2[2];
    lVar21 = param_2[5];
    lVar20 = param_2[4];
    param_1[0x7d] = param_2[3];
    param_1[0x7c] = lVar19;
    param_1[0x7f] = lVar21;
    param_1[0x7e] = lVar20;
    param_1[0x7b] = lVar18;
    param_1[0x7a] = lVar13;
    param_2 = param_1 + 0x7a;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    goto code_r0x00010a3024c0;
  }
  FUN_10a0edfc4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10a302934;
  uVar9 = (uint)param_2;
  if (uVar9 == 0) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  uVar10 = *(uint *)((long)plVar7 + 0x24);
  if (uVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar14 = 0;
    uVar11 = 0;
    plVar8 = plVar7 + 0xb;
    do {
      if ((uVar9 >> (ulong)((uint)uVar14 & 0x1f) & 1) != 0) {
        if ((0xf < uVar14) || (0x11 < (uint)uVar11)) goto LAB_10a302a74;
        *(int *)((long)register0x00000008 + uVar11 * 4 + -0xe0) = (int)*plVar8;
        uVar11 = (ulong)((uint)uVar11 + 1);
      }
      uVar14 = uVar14 + 1;
      plVar8 = (long *)((long)plVar8 + 0x34);
    } while (uVar10 != uVar14);
  }
  uVar10 = (uint)uVar11;
  if ((int)plVar7[0x73] == 0) {
    if (((uVar9 >> 0x10 & 1) != 0) && (*(int *)((long)plVar7 + 0x3cc) != 0)) {
      if (0x11 < uVar10) goto LAB_10a302a74;
      *(int *)((long)register0x00000008 + uVar11 * 4 + -0xe0) = *(int *)((long)plVar7 + 0x3cc);
      uVar11 = (ulong)(uVar10 + 1);
    }
    if (((uVar9 >> 0x11 & 1) != 0) && (iVar12 = (int)plVar7[0x80], iVar12 != 0)) {
      if (0x11 < (uint)uVar11) goto LAB_10a302a74;
      goto LAB_10a302a18;
    }
  }
  else {
    if ((uVar9 >> 0x10 & 1) != 0) {
      if (0x11 < uVar10) goto LAB_10a302a74;
      *(undefined4 *)((long)register0x00000008 + uVar11 * 4 + -0xe0) = 0x8d00;
      uVar11 = (ulong)(uVar10 + 1);
    }
    if ((uVar9 >> 0x11 & 1) != 0) {
      if (0x11 < (uint)uVar11) {
LAB_10a302a74:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a302a78);
        (*pcVar6)();
      }
      iVar12 = 0x8d20;
LAB_10a302a18:
      *(int *)((long)register0x00000008 + uVar11 * 4 + -0xe0) = iVar12;
      uVar11 = (ulong)((int)uVar11 + 1);
      goto LAB_10a302a2c;
    }
  }
  if ((int)uVar11 == 0) {
    return;
  }
LAB_10a302a2c:
  lVar13 = *plVar7;
  if ((*(byte *)(lVar13 + 0x204) & 1) == 0) {
    if (*(int *)(lVar13 + 0x1f0) < 3000) {
      if (*(char *)(lVar13 + 0x203) == '\x01') {
        _glDiscardFramebufferEXT
                  (*(undefined4 *)((long)plVar7 + 0xc),uVar11,
                   (undefined1 *)((long)register0x00000008 + -0xe0));
      }
    }
    else {
      _glInvalidateFramebuffer
                (*(undefined4 *)((long)plVar7 + 0xc),uVar11,
                 (undefined1 *)((long)register0x00000008 + -0xe0));
    }
  }
  return;
}



/* Entry: 10a302aac; end: 10a303633;  */

undefined8 * FUN_10a302aac(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined *puVar16;
  ulong uVar17;
  char *pcVar18;
  undefined1 uVar19;
  long lVar20;
  undefined4 uVar21;
  long lVar22;
  long *plVar23;
  char *pcVar24;
  long *plVar25;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  long *plStack_518;
  undefined8 uStack_510;
  uint uStack_4f4;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_114;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x19] = 0xffffffffffffffff;
  param_1[0x18] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xf4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0x2020202;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 0x104) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x7f7fffff;
  param_1[0x32] = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x33) = 0x2020202;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x1db) = 0x2020202;
  FUN_10a31c044();
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x21f) = 0;
  *(undefined2 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((long)param_1 + 0x1ed) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  ppuVar10 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar16 = *ppuVar10;
  *param_1 = puVar16;
  plStack_518 = (long *)&UNK_10f64d159;
  uStack_510 = 0x1a;
  if (puVar16 == (undefined *)0x0) {
    FUN_10a0edfc4(&plStack_518);
  }
  else {
    plVar11 = (long *)0x1f03;
    _glGetString();
    plVar12 = plVar11;
    _strlen();
    plStack_518 = (long *)&UNK_10f64d174;
    uStack_510 = 0x16;
    if (plVar12 != (long *)0x0) {
      lStack_530 = 0;
      lStack_528 = 0;
      plVar1 = (long *)((long)plVar11 + (long)plVar12);
      uStack_520 = 0;
      plVar23 = plVar11;
LAB_10a302c1c:
      do {
        plVar25 = plVar11;
        if ((char)*plVar11 != ' ') {
          plVar11 = (long *)((long)plVar11 + 1);
          plVar25 = plVar1;
          if (plVar11 != plVar1) goto LAB_10a302c1c;
        }
        if (plVar23 != plVar25) {
          uVar7 = (long)plVar25 - (long)plVar23;
          plStack_518 = plVar23;
          uStack_510 = uVar7;
          if ((long)uVar7 < 0) goto LAB_10a30359c;
          lVar20 = 0;
          plVar11 = plVar23;
          do {
            puVar16 = &UNK_10f63cb7f;
            _memchr(&UNK_10f63cb7f,(long)(char)*plVar11,4);
            if (puVar16 == (undefined *)0x0) {
              uVar17 = -lVar20;
              goto LAB_10a302c84;
            }
            plVar11 = (long *)((long)plVar11 + 1);
            lVar20 = lVar20 + -1;
          } while (plVar11 != plVar25);
          uVar17 = 0xffffffffffffffff;
LAB_10a302c84:
          uVar2 = uVar7;
          if (uVar17 <= uVar7) {
            uVar2 = uVar17;
          }
          pcVar24 = (char *)((long)plVar23 + ((uVar2 - 1) - (long)plVar25));
          pcVar18 = (char *)((long)plVar23 + (uVar7 - 1));
          do {
            if (pcVar24 == (char *)0xffffffffffffffff) {
              pcVar24 = (char *)0x0;
              break;
            }
            puVar16 = &UNK_10f63cb7f;
            _memchr(&UNK_10f63cb7f,(long)*pcVar18,4);
            pcVar24 = pcVar24 + 1;
            pcVar18 = pcVar18 + -1;
          } while (puVar16 != (undefined *)0x0);
          pcVar18 = (char *)(uVar7 - uVar2);
          uStack_510 = 0;
          if (pcVar24 + (long)pcVar18 <= pcVar18) {
            uStack_510 = (long)pcVar18 - (long)(pcVar24 + (long)pcVar18);
          }
          plVar12 = &lStack_530;
          plStack_518 = (long *)((long)plVar23 + uVar2);
          FUN_10a043080(plVar12,&plStack_518);
        }
        lVar20 = lStack_528;
        lVar22 = lStack_530;
        if ((plVar25 == plVar1) ||
           (plVar11 = (long *)((long)plVar25 + 1), plVar23 = plVar11, plVar11 == plVar1))
        goto LAB_10a302d00;
      } while( true );
    }
    FUN_10a0edfc4(&plStack_518);
  }
LAB_10a30359c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a3035a0);
  (*pcVar8)();
LAB_10a302d00:
  for (; uVar21 = SUB84(plVar12,0), lVar22 != lVar20; lVar22 = lVar22 + 0x10) {
    plVar12 = param_1 + 0x48;
    func_0x000107c2b038(plVar12,lVar22,lVar22);
  }
  FUN_10ad4bd78();
  *(undefined4 *)(param_1 + 0x3e) = uVar21;
  puVar13 = (undefined8 *)0x8;
  __Znwm();
  *puVar13 = &PTR_FUN_110c54db8;
  plVar11 = (long *)param_1[0x4d];
  param_1[0x4d] = puVar13;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
    uVar21 = *(undefined4 *)(param_1 + 0x3e);
  }
  *(undefined1 *)((long)param_1 + 500) = 1;
  *(undefined4 *)(param_1 + 0x3f) = uVar21;
  *(undefined1 *)((long)param_1 + 0x1fc) = 1;
  plStack_518 = (long *)&UNK_10f560239;
  uStack_510 = 0x13;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x202) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f560348;
  uStack_510 = 0x1f;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x204) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f560328;
  uStack_510 = 0x1f;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x205) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&UNK_10f560368;
  uStack_510 = 0x1a;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x203) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f613fb9;
  uStack_510 = 0x14;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x209) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f613f4e;
  uStack_510 = 0x19;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x207) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f613b69;
  uStack_510 = 0x1b;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x206) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f613786;
  uStack_510 = 0x19;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)(param_1 + 0x41) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&UNK_10f56029d;
  uStack_510 = 0x1b;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  if (puVar13 == (undefined8 *)0x0) {
    uStack_98 = &UNK_10f560281;
    uStack_90 = 0x1b;
    puVar13 = param_1 + 0x48;
    func_0x0001086eb2c8(puVar13,&uStack_98);
    if (puVar13 != (undefined8 *)0x0) goto LAB_10a302ef4;
    uStack_c8 = &UNK_10f560266;
    uStack_c0 = 0x1a;
    puVar13 = param_1 + 0x48;
    func_0x0001086eb2c8(puVar13,&uStack_c8);
    bVar9 = puVar13 != (undefined8 *)0x0;
  }
  else {
LAB_10a302ef4:
    bVar9 = true;
  }
  *(bool *)((long)param_1 + 0x20a) = bVar9;
  plStack_518 = (long *)&DAT_10f433091;
  uStack_510 = 0x15;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x20b) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f613dee;
  uStack_510 = 0x12;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  puVar14 = puVar13;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_10a0ee368();
  }
  *(bool *)((long)param_1 + 0x20f) = puVar13 != (undefined8 *)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar16 = PTR__glDrawArraysInstanced_11034b538;
  if (2999 < *(int *)(param_1 + 0x3e)) {
    param_1[6] = PTR__glDrawElementsInstanced_11034b550;
    param_1[7] = puVar16;
  }
  bVar3 = *(byte *)((long)param_1 + 0x1fc);
  bVar4 = *(byte *)((long)param_1 + 0x205);
  *(byte *)((long)param_1 + 0x205) = bVar4 & bVar3;
  bVar5 = *(byte *)((long)param_1 + 0x204);
  *(byte *)((long)param_1 + 0x204) = bVar5 & bVar3;
  *(byte *)(param_1 + 0x44) = bVar3 & (bVar5 | bVar4);
  FUN_10ad4ae18();
  *(undefined1 *)((long)param_1 + 0x222) = *(undefined1 *)((long)puVar14 + 0x23);
  FUN_10ad4ae18();
  *(undefined1 *)((long)param_1 + 0x221) = *(undefined1 *)((long)puVar14 + 0x21);
  FUN_10ad4ae18();
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(puVar14 + 7);
  iVar15 = iRam00000001132ffd70;
  FUN_10ad4ae18();
  if (*(char *)((long)puVar14 + 0x25) == '\x01') {
    bVar9 = 2999 < *(int *)(param_1 + 0x3e) || 1 < iVar15;
  }
  else {
    bVar9 = false;
  }
  *(bool *)(param_1 + 0x40) = bVar9;
  FUN_10ad4ae18();
  *(undefined1 *)((long)param_1 + 0x201) = *(undefined1 *)((long)puVar14 + 0x24);
  FUN_10ad4ae18();
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)((long)puVar14 + 0x3c);
  FUN_10ad4ae18();
  *(undefined4 *)((long)param_1 + 0x234) = *(undefined4 *)(puVar14 + 8);
  FUN_10ad4ae18();
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)((long)puVar14 + 0x44);
  _glGetIntegerv(0xd33,param_1 + 0x45);
  iVar15 = 0x800;
  if (*(int *)(param_1 + 0x3e) != 2000) {
    iVar15 = 0x2000;
  }
  if (*(int *)(param_1 + 0x45) <= iVar15) {
    iVar15 = *(int *)(param_1 + 0x45);
  }
  *(int *)(param_1 + 0x45) = iVar15;
  plStack_518 = (long *)&DAT_10f560ff8;
  uStack_510 = 0x19;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x20e) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f5603f0;
  uStack_510 = 0x16;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x20d) = puVar13 != (undefined8 *)0x0;
  *(bool *)((long)param_1 + 0x21f) =
       *(char *)((long)param_1 + 0x20e) != '\0' || puVar13 != (undefined8 *)0x0;
  bVar9 = false;
  if (param_1[6] != 0) {
    bVar9 = param_1[7] != 0;
  }
  *(bool *)((long)param_1 + 0x21e) = bVar9;
  if (*(int *)(param_1 + 0x3e) < 3000) {
    FUN_10ad4ae18();
    uVar6 = *(undefined1 *)((long)puVar13 + 0x1b);
    *(undefined1 *)((long)param_1 + 0x23c) = uVar6;
    uVar19 = 0;
    if (2999 < *(int *)(param_1 + 0x3e)) {
      uVar19 = uVar6;
    }
    bVar9 = *(int *)(param_1 + 0x3e) == 2000;
  }
  else {
    bVar9 = false;
    uVar19 = 1;
    *(undefined1 *)((long)param_1 + 0x23c) = 1;
  }
  *(undefined1 *)((long)param_1 + 0x23d) = uVar19;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x217) = 0;
  if (!bVar9) {
    _glGetIntegerv(0x88ff,(long)param_1 + 0x22c);
  }
  plStack_518 = (long *)&DAT_10f614189;
  uStack_510 = 0x10;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)(param_1 + 0x42) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&DAT_10f61419a;
  uStack_510 = 0x11;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x211) = puVar13 != (undefined8 *)0x0;
  plStack_518 = (long *)&UNK_10f635ea0;
  uStack_510 = 0x2f;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  *(bool *)((long)param_1 + 0x212) = puVar13 != (undefined8 *)0x0;
  if ((((*(char *)(param_1 + 0x42) == '\x01') && (*(char *)((long)param_1 + 0x211) == '\x01')) &&
      (puVar13 != (undefined8 *)0x0)) &&
     ((*(char *)(param_1 + 0x43) == '\x01' && (*(char *)((long)param_1 + 0x21a) == '\x01')))) {
    *(bool *)((long)param_1 + 0x21b) = 1 < *(int *)((long)param_1 + 0x22c);
    if (1 < *(int *)((long)param_1 + 0x22c)) {
      if (*(int *)(param_1 + 0x3e) < 3000) {
        bVar9 = false;
      }
      else {
        uStack_88 = uStack_88 & 0xffffff00;
        uStack_90 = 0;
        uStack_98 = (undefined *)0x0;
        uStack_74 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_70 = 1;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_c8 = (undefined *)0x0;
        uStack_ac = 0;
        uStack_b4 = 0;
        uStack_a4 = 0;
        uStack_a0 = 1;
        _glGenTextures(1,(ulong)&uStack_98 | 4);
        FUN_10a303840(param_1,0x8c1a,uStack_98._4_4_,0);
        _glTexParameteri(0x8c1a,0x2801,0x2601);
        _glTexParameteri(0x8c1a,0x2800,0x2601);
        FUN_10a3041e0(param_1,0x8c1a,1,0x8058,0x10,0x10,2);
        _glGenTextures(1,(ulong)&uStack_c8 | 4);
        FUN_10a303840(param_1,0x8c1a,uStack_c8._4_4_,0);
        FUN_10a3041e0(param_1,0x8c1a,1,0x88f0,0x10,0x10,2);
        FUN_10a301f68(&plStack_518,param_1);
        uVar7 = uStack_510;
        plVar11 = plStack_518;
        uStack_98 = (undefined *)CONCAT44(uStack_98._4_4_,0x8c1a);
        uStack_90 = 0x1000000010;
        uStack_88 = CONCAT31(uStack_88._1_3_,1);
        uStack_84 = 0x8058;
        uStack_80 = 0x1908;
        uStack_7c = 0x1401;
        uStack_70 = CONCAT44(uStack_70._4_4_,2);
        uStack_c8 = (undefined *)CONCAT44(uStack_c8._4_4_,0x8c1a);
        uStack_c0 = 0x1000000010;
        uStack_b8 = 1;
        uStack_b4 = 0x84f9000088f0;
        uStack_ac = CONCAT44(uStack_ac._4_4_,0x84fa);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,2);
        uVar21 = (undefined4)uStack_510;
        uStack_510._4_4_ = 0x8ca9;
        _glBindFramebuffer(0x8ca9,uVar7 & 0xffffffff);
        uStack_4d8 = CONCAT44(uStack_7c,uStack_80);
        uStack_4e0 = CONCAT44(uStack_84,uStack_88);
        uStack_4e8 = uStack_90;
        puStack_4f0 = uStack_98;
        *(undefined4 *)(plVar11 + 0x14) = uVar21;
        if (uStack_4f4 < 2) {
          uStack_4f4 = 1;
        }
        uStack_114 = 0x8ce0;
        uStack_4c0 = 0x8ce0;
        uStack_4d0 = CONCAT44(uStack_74,uStack_78);
        uStack_4c8 = uStack_70;
        FUN_10a3024c0(&plStack_518,&puStack_4f0);
        func_0x00010a302818(&plStack_518,&uStack_c8);
        iVar15 = uStack_510._4_4_;
        _glCheckFramebufferStatus();
        bVar9 = iVar15 == 0x8cd5;
        func_0x00010a3022f0(&plStack_518);
        func_0x00010a302418(&plStack_518);
        FUN_10a303764(param_1,(ulong)&uStack_98 | 4);
        FUN_10a303764(param_1,(ulong)&uStack_c8 | 4);
        FUN_10a30206c(&plStack_518);
      }
      *(bool *)((long)param_1 + 0x21c) = bVar9;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x21b) = 0;
  }
  plStack_518 = (long *)&UNK_10f43327f;
  uStack_510 = 0x1b;
  puVar13 = param_1 + 0x48;
  func_0x0001086eb2c8(puVar13,&plStack_518);
  if (puVar13 == (undefined8 *)0x0) {
    bVar9 = false;
    if (((((param_1[9] != 0) && (bVar9 = false, param_1[10] != 0)) &&
         ((bVar9 = false, param_1[0xb] != 0 &&
          ((((bVar9 = false, param_1[0xc] != 0 && (bVar9 = false, param_1[0xd] != 0)) &&
            (bVar9 = false, param_1[0xe] != 0)) &&
           ((bVar9 = false, param_1[0xf] != 0 && (bVar9 = false, param_1[0x10] != 0)))))))) &&
        (bVar9 = false, param_1[0x11] != 0)) && (bVar9 = false, param_1[0x12] != 0)) {
      bVar9 = param_1[0x13] != 0;
    }
  }
  else {
    bVar9 = false;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    *(undefined1 *)((long)param_1 + 0x214) = 1;
    *(undefined1 *)((long)param_1 + 0x216) = 1;
  }
  *(bool *)((long)param_1 + 0x215) = bVar9;
  *(byte *)((long)param_1 + 0x216) = bVar9 & *(byte *)((long)param_1 + 0x216);
  if (*(int *)(param_1 + 0x3e) < 0xc80) {
    plStack_518 = (long *)&UNK_10f64d18b;
    uStack_510 = 0x11;
    puVar13 = param_1 + 0x48;
    func_0x0001086eb2c8(puVar13,&plStack_518);
    if (puVar13 == (undefined8 *)0x0) {
      bVar9 = param_1[8] != 0;
      goto LAB_10a3032b0;
    }
  }
  bVar9 = false;
  param_1[8] = 0;
LAB_10a3032b0:
  *(bool *)((long)param_1 + 0x21d) = bVar9;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xf;
  if (lStack_530 != 0) {
    lStack_528 = lStack_530;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a303634; end: 10a303693;  */

long FUN_10a303634(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001086af8b0(param_1 + 0x240);
  func_0x00010a321ed4(param_1 + 0x1e8,0);
  func_0x00010a321eac(param_1 + 0x1e0,0);
  FUN_10a31c0ec(param_1 + 0x1b0);
  return param_1;
}



/* Entry: 10a303694; end: 10a303763;  */

undefined * FUN_10a303694(undefined8 param_1,int *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int extraout_w8;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340df00;
  (*(code *)PTR___tlv_bootstrap_11340df00)(param_1);
  puVar2 = *ppuVar1;
  if (puVar2 == (undefined *)0x0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (*ppuVar1 == (undefined *)0x0) {
      if (extraout_w8 != 0) goto LAB_10a303744;
      puVar2 = (undefined *)0x0;
    }
    else {
      lVar6 = *(long *)(*ppuVar1 + 0x10);
      puStack_30 = &UNK_10f635282;
      uStack_28 = 0x2b;
      if (lVar6 == 0) {
        FUN_10a0edfc4(&puStack_30);
LAB_10a303744:
        puVar2 = &UNK_10f64d19d;
        FUN_10a00946c();
        __ZdlPv();
        __Unwind_Resume();
        puVar4 = (undefined *)0x1;
        _glDeleteTextures(1);
        if (puVar2[0x270] == '\x01') {
          piVar5 = (int *)(puVar2 + 0x10c);
          lVar6 = 0x10;
          do {
            if (*param_2 == *piVar5) {
              *piVar5 = -1;
              piVar5[0x10] = 0;
            }
            piVar5 = piVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        return puVar4;
      }
      puVar7 = (undefined8 *)(lVar6 + 0x28);
      puVar2 = (undefined *)*puVar7;
      if ((extraout_w8 != 0) && (puVar2 == (undefined *)0x0)) {
        uVar3 = 0x290;
        __Znwm(0x290);
        FUN_10a302aac();
        FUN_10a0a02b4(puVar7,uVar3);
        puVar2 = (undefined *)*puVar7;
      }
    }
  }
  return puVar2;
}



/* Entry: 10a303764; end: 10a30383f;  */

void FUN_10a303764(long param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  
  _glDeleteTextures(1);
  if (*(char *)(param_1 + 0x270) == '\x01') {
    piVar1 = (int *)(param_1 + 0x10c);
    lVar2 = 0x10;
    do {
      if (*param_2 == *piVar1) {
        *piVar1 = -1;
        piVar1[0x10] = 0;
      }
      piVar1 = piVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10a303840; end: 10a30390f;  */

void FUN_10a303840(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  
  if ((*(char *)(param_1 + 0x270) != '\x01') || (*(uint *)(param_1 + 0xb0) != param_4)) {
    _glActiveTexture(param_4 + 0x84c0);
    *(uint *)(param_1 + 0xb0) = param_4;
    if (*(char *)(param_1 + 0x270) != '\x01') {
      _glBindTexture(param_2,param_3);
      if (0xf < param_4) goto LAB_10a30390c;
      goto LAB_10a3038e4;
    }
  }
  if (0xf < param_4) {
LAB_10a30390c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a303910);
    (*pcVar2)();
  }
  lVar1 = param_1 + (ulong)param_4 * 4;
  if ((*(int *)(lVar1 + 0x10c) == (int)param_3) && (*(int *)(lVar1 + 0x14c) == (int)param_2)) {
    return;
  }
  _glBindTexture(param_2,param_3);
LAB_10a3038e4:
  lVar1 = param_1 + (ulong)param_4 * 4;
  *(int *)(lVar1 + 0x10c) = (int)param_3;
  *(int *)(lVar1 + 0x14c) = (int)param_2;
  *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
  return;
}



/* Entry: 10a303910; end: 10a303a57;  */

void FUN_10a303910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_61;
  
  puStack_88 = &UNK_10f64d278;
  uStack_80 = 10;
  FUN_10a303a58(param_1,param_5,param_6,1,&puStack_88);
  if ((uint)((int)param_6 * (int)param_5) < *(uint *)(param_1 + 0x288)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glTexImage2D_11034b7d8)
              (param_2,param_3,param_4,param_5,param_6,0,param_7,param_8);
    return;
  }
  puStack_88 = (undefined *)CONCAT44((int)param_5,(int)param_7);
  uStack_80 = CONCAT44((int)param_4,(int)param_6);
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10a321efc(1,&uStack_61,0,0);
  _glTexImage2D(param_2,param_3,param_4,param_5,param_6,0,param_7,param_8,param_9);
  FUN_10a303ad8(&puStack_88);
  return;
}



/* Entry: 10a303a58; end: 10a303ad7;  */

void FUN_10a303a58(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = *(uint *)(param_1 + 0x228);
  if ((param_4 <= uVar1 && param_2 <= uVar1) && param_3 <= uVar1) {
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f64d283,0x5e);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a303abc);
  (*pcVar2)();
}



/* Entry: 10a303ad8; end: 10a303c5f;  */

undefined8 FUN_10a303ad8(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar6;
  
  uVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar3 = (uint)uVar5;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f64ee3c,0x39);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar6 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar6;
    if (((uint)uVar5 == 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a303c2c);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 10a303c60; end: 10a303d6b;  */

void FUN_10a303c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_41;
  
  puStack_68 = &UNK_10f64d278;
  uStack_60 = 10;
  FUN_10a303a58(param_1,param_5,param_6,1,&puStack_68);
  if ((uint)((int)param_6 * (int)param_5) < *(uint *)(param_1 + 0x288)) {
                    /* WARNING: Could not recover jumptable at 0x00010a303cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  puStack_68 = (undefined *)CONCAT44((int)param_5,(int)param_3);
  uStack_60 = CONCAT44((int)param_4,(int)param_6);
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10a321efc(1,&uStack_41,0,0);
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5,param_6);
  FUN_10a303d6c(&puStack_68);
  return;
}



/* Entry: 10a303d6c; end: 10a303ef3;  */

undefined8 FUN_10a303d6c(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar6;
  
  uVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar3 = (uint)uVar5;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f64ee76,0x40);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar6 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar6;
    if (((uint)uVar5 == 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a303ec0);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 10a303ef4; end: 10a30404f;  */

void FUN_10a303ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_61;
  
  puStack_90 = &UNK_10f64d278;
  uStack_88 = 10;
  FUN_10a303a58(param_1,param_5,param_6,param_7,&puStack_90);
  if ((uint)((int)param_6 * (int)param_5 * (int)param_7) < *(uint *)(param_1 + 0x288)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glTexImage3D_11034b7e0)
              (param_2,param_3,param_4,param_5,param_6,param_7,0,param_8);
    return;
  }
  puStack_90 = (undefined *)CONCAT44((int)param_5,(int)param_8);
  uStack_88 = CONCAT44((int)param_7,(int)param_6);
  uStack_80 = (undefined4)param_4;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10a321efc(1,&uStack_61,0,0);
  _glTexImage3D(param_2,param_3,param_4,param_5,param_6,param_7,0,param_8,param_9);
  FUN_10a304050(&puStack_90);
  return;
}



/* Entry: 10a304050; end: 10a3041df;  */

/* WARNING: Removing unreachable block (ram,0x00010a30416c) */

undefined8 FUN_10a304050(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar2 = (uint)uVar4;
  FUN_10ad4bc5c();
  if (uVar2 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f64eeb7,0x40);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppuStack_58 = &pppuStack_58;
    }
    FUN_10ae03140(0,pppuStack_58,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((uint)uVar4 == 0) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if ((uVar2 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3041ac);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Entry: 10a3041e0; end: 10a30430b;  */

void FUN_10a3041e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_51;
  
  puStack_80 = &UNK_10f64d278;
  uStack_78 = 10;
  FUN_10a303a58(param_1,param_5,param_6,param_7,&puStack_80);
  if ((uint)((int)param_6 * (int)param_5 * (int)param_7) < *(uint *)(param_1 + 0x288)) {
                    /* WARNING: Could not recover jumptable at 0x00010a304284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  puStack_80 = (undefined *)CONCAT44((int)param_5,(int)param_3);
  uStack_78 = CONCAT44((int)param_7,(int)param_6);
  uStack_70 = (undefined4)param_4;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10a321efc(1,&uStack_51,0,0);
  (**(code **)(param_1 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_10a30430c(&puStack_80);
  return;
}



/* Entry: 10a30430c; end: 10a30449b;  */

/* WARNING: Removing unreachable block (ram,0x00010a304428) */

undefined8 FUN_10a30430c(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar2 = (uint)uVar4;
  FUN_10ad4bc5c();
  if (uVar2 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f64eef8,0x47);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppuStack_58 = &pppuStack_58;
    }
    FUN_10ae03140(0,pppuStack_58,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((uint)uVar4 == 0) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if ((uVar2 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a304468);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Entry: 10a30449c; end: 10a30456f;  */

void FUN_10a30449c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((1 < (int)param_2) || (1 < (int)param_3)) {
    puStack_50 = &UNK_10f64d2e2;
    uStack_48 = 6;
    FUN_10a303a58(param_1,param_2,param_3,1,&puStack_50);
    if ((param_5 & 1) == 0) {
      FUN_10a173bf0(param_4,0);
    }
  }
  return;
}



/* Entry: 10a304570; end: 10a304627;  */

void FUN_10a304570(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_21;
  
  _glHint(0x8192,0x1102);
  if ((*(byte *)(param_1 + 0x278) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glGenerateMipmap_11034b600)(param_2);
    return;
  }
  puStack_48 = &UNK_10f64d2e9;
  uStack_40 = 0x10;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_10a31bca4(1,&uStack_21,0,0);
  _glGenerateMipmap(param_2);
  iVar1 = (int)param_2;
  __ZSt19uncaught_exceptionsv();
  FUN_10a31bf24(iVar1 == 0,&puStack_48,uStack_38,uStack_30);
  return;
}



/* Entry: 10a304628; end: 10a3046a3;  */

void FUN_10a304628(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_91;
  undefined4 *puStack_50;
  undefined8 *puStack_48;
  undefined4 *puStack_40;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  uStack_18 = param_3;
  uStack_14 = param_2;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    FUN_10a3046a4(&UNK_10f64d1c4,0x3ae,UNRECOVERED_JUMPTABLE,&UNK_10f64d2fa,0x1a,
                  *(uint *)(param_1 + 0x278) & 1,&uStack_14,&uStack_18);
    return;
  }
  FUN_10a00946c(&UNK_10f64d315);
  if (param_6 != 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = param_4;
    uStack_b0 = param_5;
    FUN_10a31bca4(1,&uStack_91,0,0);
    iVar1 = *param_7;
    (*UNRECOVERED_JUMPTABLE)(iVar1,*param_8,*puStack_50,*puStack_48,*puStack_40);
    __ZSt19uncaught_exceptionsv();
    FUN_10a31bf24(iVar1 == 0,&uStack_b8,uStack_a8,uStack_a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a304770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_7,*param_8,*puStack_50,*puStack_48,*puStack_40);
  return;
}



/* Entry: 10a3046a4; end: 10a30478b;  */

void FUN_10a3046a4(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,
                  undefined8 param_4,undefined8 param_5,int param_6,int *param_7,undefined4 *param_8
                  ,undefined4 *param_9,undefined8 *param_10,undefined4 *param_11)

{
  int iVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_41;
  
  if (param_6 != 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = param_4;
    uStack_60 = param_5;
    FUN_10a31bca4(1,&uStack_41,0,0);
    iVar1 = *param_7;
    (*UNRECOVERED_JUMPTABLE)(iVar1,*param_8,*param_9,*param_10,*param_11);
    __ZSt19uncaught_exceptionsv();
    FUN_10a31bf24(iVar1 == 0,&uStack_68,uStack_58,uStack_50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a304770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_7,*param_8,*param_9,*param_10,*param_11);
  return;
}



/* Entry: 10a30478c; end: 10a3047fb;  */

void FUN_10a30478c(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_61;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  uStack_18 = param_3;
  uStack_14 = param_2;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    FUN_10a3047fc(&UNK_10f64d1c4,0x3bf,UNRECOVERED_JUMPTABLE,&UNK_10f64d368,0x18,
                  *(uint *)(param_1 + 0x278) & 1,&uStack_14,&uStack_18);
    return;
  }
  FUN_10a00946c(&UNK_10f64d381);
  if (param_6 != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = param_4;
    uStack_80 = param_5;
    FUN_10a31bca4(1,&uStack_61,0,0);
    iVar1 = *param_7;
    (*UNRECOVERED_JUMPTABLE)(iVar1,*param_8,*puStack_30,*puStack_28);
    __ZSt19uncaught_exceptionsv();
    FUN_10a31bf24(iVar1 == 0,&uStack_88,uStack_78,uStack_70);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a3048b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_7,*param_8,*puStack_30,*puStack_28);
  return;
}



/* Entry: 10a3047fc; end: 10a3048cb;  */

void FUN_10a3047fc(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,
                  undefined8 param_4,undefined8 param_5,int param_6,int *param_7,undefined4 *param_8
                  ,undefined4 *param_9,undefined4 *param_10)

{
  int iVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_31;
  
  if (param_6 != 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = param_4;
    uStack_50 = param_5;
    FUN_10a31bca4(1,&uStack_31,0,0);
    iVar1 = *param_7;
    (*UNRECOVERED_JUMPTABLE)(iVar1,*param_8,*param_9,*param_10);
    __ZSt19uncaught_exceptionsv();
    FUN_10a31bf24(iVar1 == 0,&uStack_58,uStack_48,uStack_40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a3048b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_7,*param_8,*param_9,*param_10);
  return;
}



/* Entry: 10a3048cc; end: 10a304923;  */

long FUN_10a3048cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    uVar2 = 0x80;
    __Znwm(0x80);
    FUN_10a304dec();
    FUN_10a321eac(param_1 + 0x1e0,uVar2);
    lVar1 = *(long *)(param_1 + 0x1e0);
  }
  return lVar1;
}



/* Entry: 10a304924; end: 10a3049fb;  */

void FUN_10a304924(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_10a174850(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc4000;
  puVar1[1] = &PTR_FUN_110bc3f70;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((long)puVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0x400;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x00010a322104(param_1 + 8,puVar1);
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc4048;
  puVar1[1] = &PTR_FUN_110bc3fb8;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((long)puVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0x400;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = (long)puVar1;
  if (lVar2 != 0) {
    FUN_10a32237c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3049fc; end: 10a304b27;  */

void FUN_10a3049fc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_48;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar1 = 0;
  if ((char)*(long *)((long)*ppuVar4 + 0x160) == '\0') {
    lVar1 = 8;
  }
  FUN_10a09401c(&puStack_60,*(undefined8 *)(*(long *)*ppuVar4 + lVar1));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f64d3fa,0x17);
  puVar5 = puStack_60;
  if (puStack_60 == puStack_58) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f64d412,0x13);
  }
  else {
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&UNK_10f64d426,10);
      uVar2 = puVar5[1];
      puVar3 = (undefined8 *)*puVar5;
      if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)puVar5 + 0x17);
        puVar3 = puVar5;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,puVar3,uVar2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&UNK_10f64d431,3);
      puVar5 = puVar5 + 3;
    } while (puVar5 != puStack_58);
  }
  puStack_48 = (undefined1 *)&puStack_60;
  func_0x00010a09b2b8(&puStack_48);
  return;
}



/* Entry: 10a304b28; end: 10a304c8f;  */

void FUN_10a304b28(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  byte bStack_31;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f64d435,0x24);
  FUN_10a304c90(&uStack_48,param_5);
  puVar1 = (undefined4 *)CONCAT44(uStack_44,uStack_48);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    puVar1 = &uStack_48;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(CONCAT44(uStack_44,uStack_48));
  }
  if (((uint)param_5 >> 6 & 1) != 0) {
    uStack_48 = 0x8d40;
    _glCheckFramebufferStatus();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f64d45a,0x20);
    uVar2 = param_1;
    FUN_10a190268(param_1,&uStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    uStack_4c = 0x506;
    FUN_10a190268(uVar2,&uStack_4c);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f64d48b,1);
  FUN_10a3049fc(param_1);
  if (param_2[1] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f64d48d,10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,*param_2,param_2[1]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f64d431,3);
  }
  return;
}



/* Entry: 10a304c90; end: 10a304deb;  */

void FUN_10a304c90(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  uint uVar4;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined1 uStack_61;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_109fed7e0(&ppuStack_170);
    uVar4 = 0;
    do {
      uVar1 = 1 << (ulong)(uVar4 & 0x1f);
      uVar3 = (ulong)uVar1;
      if ((uVar1 & param_2) != 0) {
        pppuVar2 = &ppuStack_170;
        FUN_10a002568(&ppuStack_170,&UNK_10f64e7a9,0x17);
        FUN_10a31c134(uVar3);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(pppuVar2,uVar3);
        FUN_10a002568();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 7);
    func_0x00010a002480(param_1,&ppuStack_168,&uStack_61);
    appuStack_100[0] = &PTR_DAT_11088d708;
    ppuStack_170 = &PTR_DAT_11088d6e0;
    ppuStack_168 = &PTR_DAT_11088d7b0;
    if (cStack_111 < '\0') {
      __ZdlPv(uStack_128);
    }
    ppuStack_168 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_160);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  }
  return;
}



/* Entry: 10a304dec; end: 10a304f47;  */

undefined4 * FUN_10a304dec(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_10a303694(1);
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc4000;
  puVar1[1] = &PTR_FUN_110bc3f70;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((long)puVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0x400;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x00010a322104(param_1 + 2);
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc4048;
  puVar1[1] = &PTR_FUN_110bc3fb8;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((long)puVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0x400;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  FUN_10a322350(param_1 + 4);
  *param_1 = 0;
  return param_1;
}



/* Entry: 10a304f48; end: 10a3057ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a30566c) */
/* WARNING: Removing unreachable block (ram,0x00010a3054d0) */
/* WARNING: Removing unreachable block (ram,0x00010a30509c) */
/* WARNING: Removing unreachable block (ram,0x00010a30565c) */
/* WARNING: Removing unreachable block (ram,0x00010a30567c) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10a304f48(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
             long *param_6,uint param_7)

{
  byte bVar1;
  undefined8 *******pppppppuVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  if (param_7 == 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&pppppppuStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    pppppppuStack_90 = (undefined8 *******)*param_2;
    uStack_80 = param_2[2];
  }
  uVar6 = uStack_88;
  pppppppuVar2 = pppppppuStack_90;
  if (-1 < (long)uStack_80) {
    uVar6 = uStack_80 >> 0x38;
    pppppppuVar2 = &pppppppuStack_90;
  }
  FUN_10a189258(&lStack_170,pppppppuVar2,uVar6,&UNK_10f64e7cd,5);
  FUN_10a166d50(auStack_a8,&lStack_170);
  if (lStack_160 < 0) {
    __ZdlPv(lStack_170);
  }
  uVar6 = 0;
  FUN_10ad01a04();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar6 = uStack_88;
  pppppppuVar2 = pppppppuStack_90;
  if (-1 < (long)uStack_80) {
    uVar6 = uStack_80 >> 0x38;
    pppppppuVar2 = &pppppppuStack_90;
  }
  FUN_10a189258(&lStack_170,pppppppuVar2,uVar6,&UNK_10f64e7d3,5);
  FUN_10a166d50(&plStack_f8,&lStack_170);
  if (lStack_160 < 0) {
    __ZdlPv(lStack_170);
  }
  uStack_d8 = uStack_f0;
  plStack_e0 = plStack_f8;
  lStack_d0 = lStack_e8;
  plStack_f8 = (long *)0x0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  puVar4 = &uStack_c0;
  FUN_10a17496c(puVar4,&plStack_e0);
  if (lStack_e8 < 0) {
    __ZdlPv(plStack_f8);
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64d498,&UNK_10f64d4bf,0x1ff,&UNK_10f64d5b4);
  }
  if ((int)puVar4 == 0) {
LAB_10a305328:
    uVar7 = 0;
  }
  else {
    FUN_109f49410(&lStack_170,&uStack_c0);
    FUN_109f6011c(param_6);
    param_6[1] = lStack_168;
    *param_6 = lStack_170;
    param_6[2] = lStack_160;
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_170 = 0;
    func_0x000109f604e0(param_6 + 3);
    param_6[4] = lStack_150;
    param_6[3] = lStack_158;
    param_6[5] = lStack_148;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_158 = 0;
    func_0x000109f6085c(param_6 + 6);
    param_6[7] = lStack_138;
    param_6[6] = lStack_140;
    lVar5 = param_6[9];
    param_6[8] = lStack_130;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_140 = 0;
    if (lVar5 != 0) {
      param_6[10] = lVar5;
      __ZdlPv();
      param_6[9] = 0;
      param_6[10] = 0;
      param_6[0xb] = 0;
    }
    param_6[10] = lStack_120;
    param_6[9] = lStack_128;
    param_6[0xb] = lStack_118;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_128 = 0;
    FUN_109f60dc0(param_6 + 0xc);
    param_6[0xd] = lStack_108;
    param_6[0xc] = lStack_110;
    param_6[0xe] = lStack_100;
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_110 = 0;
    plStack_e0 = &lStack_110;
    FUN_10a188534(&plStack_e0);
    if (lStack_128 != 0) {
      lStack_120 = lStack_128;
      __ZdlPv();
    }
    plStack_e0 = &lStack_140;
    FUN_10a1885a4(&plStack_e0);
    plStack_e0 = &lStack_158;
    func_0x00010a1885e4(&plStack_e0);
    plStack_e0 = &lStack_170;
    FUN_10a188624(&plStack_e0);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64d498,&UNK_10f64d4bf,0x202,&UNK_10f64d603);
    }
    if (((*param_6 == param_6[1]) && (param_6[3] == param_6[4])) && (param_6[6] == param_6[7])) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f64d498,&UNK_10f64d4bf,0x206,&UNK_10f64d635);
      }
      goto LAB_10a305328;
    }
    uVar7 = 1;
  }
  if ((param_7 & 0xa0) == 0) {
    uVar6 = uStack_88;
    pppppppuVar2 = pppppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar6 = (ulong)uStack_80._7_1_;
      pppppppuVar2 = &pppppppuStack_90;
    }
    FUN_10a189258(&lStack_170,pppppppuVar2,uVar6,&UNK_10f64e7de,3);
    FUN_10a166d50(&plStack_f8,&lStack_170);
    if (lStack_160 < 0) {
      __ZdlPv(lStack_170);
    }
    uStack_d8 = uStack_f0;
    plStack_e0 = plStack_f8;
    lStack_d0 = lStack_e8;
    plStack_f8 = (long *)0x0;
    uStack_f0 = 0;
    lStack_e8 = 0;
    lVar5 = param_3;
    FUN_10a17496c(param_3,&plStack_e0);
    if ((int)lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar6 = uStack_88;
      pppppppuVar2 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar6 = uStack_80 >> 0x38;
        pppppppuVar2 = &pppppppuStack_90;
      }
      FUN_10a189258(&lStack_170,pppppppuVar2,uVar6,&UNK_10f64e7e2,3);
      FUN_10a166d50(&uStack_1a8,&lStack_170);
      if (lStack_160 < 0) {
        __ZdlPv(lStack_170);
      }
      uStack_188 = uStack_1a0;
      uStack_190 = uStack_1a8;
      lStack_180 = lStack_198;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      lVar5 = param_4;
      FUN_10a17496c(param_4,&uStack_190);
      uVar3 = (uint)lVar5;
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      if (lStack_198 < 0) {
        __ZdlPv(uStack_1a8);
      }
    }
  }
  else {
    uVar6 = uStack_88;
    pppppppuVar2 = pppppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar6 = (ulong)uStack_80._7_1_;
      pppppppuVar2 = &pppppppuStack_90;
    }
    FUN_10a189258(&lStack_170,pppppppuVar2,uVar6,&UNK_10f64e7d9,4);
    FUN_10a166d50(&plStack_f8,&lStack_170);
    if (lStack_160 < 0) {
      __ZdlPv(lStack_170);
    }
    uStack_d8 = uStack_f0;
    plStack_e0 = plStack_f8;
    lStack_d0 = lStack_e8;
    plStack_f8 = (long *)0x0;
    uStack_f0 = 0;
    lStack_e8 = 0;
    lVar5 = param_5;
    FUN_10a17496c(param_5,&plStack_e0);
    uVar3 = (uint)lVar5;
  }
  if (lStack_e8 < 0) {
    __ZdlPv(plStack_f8);
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64d498,&UNK_10f64d4bf,0x216,&UNK_10f64d679);
  }
  if ((uVar7 & uVar3) == 0) {
    return 0;
  }
  if ((param_7 & 0xa0) == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar6 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar6 == 0) goto LAB_10a3055c0;
    bVar1 = *(byte *)(param_4 + 0x17);
    uVar6 = *(ulong *)(param_4 + 8);
  }
  else {
    bVar1 = *(byte *)(param_5 + 0x17);
    uVar6 = *(ulong *)(param_5 + 8);
  }
  if (-1 < (char)bVar1) {
    uVar6 = (ulong)bVar1;
  }
  if (uVar6 != 0) {
    return 1;
  }
LAB_10a3055c0:
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f64d498,&UNK_10f64d4bf,0x224,&UNK_10f64d6cc);
  }
  return 0;
}



/* Entry: 10a3057ac; end: 10a305817;  */

void FUN_10a3057ac(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_28 = param_5;
  uStack_22 = param_3;
  FUN_10a322568(&uStack_40,&uStack_21,&uStack_22,param_4,&uStack_28);
  FUN_10a305818(uStack_40,param_2);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10a305818; end: 10a305aeb;  */

/* WARNING: Removing unreachable block (ram,0x00010a305a34) */
/* WARNING: Removing unreachable block (ram,0x00010a305a24) */
/* WARNING: Removing unreachable block (ram,0x00010a305a44) */

undefined8 FUN_10a305818(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  pppuStack_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  FUN_10a309df0(&puStack_110,param_1 + 8);
  FUN_10a304f48(param_2,&puStack_110,&uStack_48,&uStack_60,&pppuStack_78,&uStack_f0,
                *(undefined4 *)(param_1 + 0x148));
  if (lStack_100 < 0) {
    __ZdlPv(puStack_110);
  }
  if ((param_2 & 1) != 0) {
    if ((*(uint *)(param_1 + 0x148) >> 5 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x148) >> 7 & 1) == 0) {
        func_0x00010ab95938(param_1 + 0x40,&uStack_48,&uStack_60,&uStack_f0);
      }
      else {
        uVar1 = uStack_70;
        if (-1 < (long)uStack_68) {
          uVar1 = uStack_68 >> 0x38;
        }
        FUN_10a188694(&puStack_110,uVar1);
        uVar1 = uStack_70;
        ppppuVar2 = (undefined8 ****)pppuStack_78;
        if (-1 < (long)uStack_68) {
          uVar1 = uStack_68 >> 0x38;
          ppppuVar2 = &pppuStack_78;
        }
        _memcpy(puStack_110,ppppuVar2,uVar1);
        puStack_128 = puStack_108;
        puStack_130 = puStack_110;
        lStack_120 = lStack_100;
        puStack_110 = (undefined8 *)0x0;
        puStack_108 = (undefined8 *)0x0;
        lStack_100 = 0;
        FUN_10ab95c44(param_1 + 0x40,&puStack_130,&uStack_f0);
        if (puStack_130 != (undefined8 *)0x0) {
          puStack_128 = puStack_130;
          __ZdlPv();
        }
        if (puStack_110 != (undefined8 *)0x0) {
          puStack_108 = puStack_110;
          __ZdlPv();
        }
      }
    }
    else {
      func_0x00010ab95ad4(param_1 + 0x40,&pppuStack_78,&uStack_f0);
    }
    if ((*(byte *)(param_1 + 0x141) & 1) != 0) {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x39) = 1;
      FUN_10a31c19c(param_1);
      goto LAB_10a3059c8;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64d498,&UNK_10f64e7e6,0x15b,&UNK_10f64e844);
    }
  }
  uVar3 = 0;
LAB_10a3059c8:
  puStack_110 = &uStack_90;
  FUN_10a188534(&puStack_110);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  puStack_110 = &uStack_c0;
  FUN_10a1885a4(&puStack_110);
  puStack_110 = &uStack_d8;
  func_0x00010a1885e4(&puStack_110);
  puStack_110 = &uStack_f0;
  FUN_10a188624(&puStack_110);
  return uVar3;
}



/* Entry: 10a305aec; end: 10a305d7b;  */

void FUN_10a305aec(long **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long **pplVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long **pplStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = param_1 + 6;
  plVar12 = *pplVar9;
  pplVar7 = param_1;
  if (plVar12 == (long *)0x0) {
    ppuVar6 = (undefined **)0x30;
    __Znwm();
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)&PTR_FUN_110ba9fb0;
    ppuVar6[4] = (undefined *)0x0;
    ppuVar6[5] = (undefined *)0x0;
    ppuStack_88 = ppuVar6 + 3;
    *(undefined4 *)ppuStack_88 = 0;
    ppuStack_80 = ppuVar6;
    func_0x00010a1748ac(pplVar9,&ppuStack_88);
    ppuVar6 = ppuStack_80;
    if (ppuStack_80 != (undefined **)0x0) {
      ppuVar1 = ppuStack_80 + 1;
      do {
        puVar10 = *ppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = puVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
      }
    }
    pplVar7 = (long **)*pplVar9;
    FUN_10ab9cf44();
    plVar12 = *pplVar9;
  }
  pplStack_90 = (long **)param_1[7];
  if (pplStack_90 != (long **)0x0) {
    pplVar9 = pplStack_90 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
      if (bVar5) {
        *pplVar9 = (long *)((long)*pplVar9 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_98 = plVar12;
  if (plVar12 != (long *)0x0) {
    plVar8 = (long *)0x90;
    __Znwm();
    plVar8[2] = 0;
    plVar8[3] = 0x32aaaba7;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0x3cb0b1bb;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    *(undefined8 *)((long)plVar8 + 0x84) = 0;
    *(undefined8 *)((long)plVar8 + 0x7c) = 0;
    *plVar8 = (long)&PTR_DAT_110a75108;
    plVar8[1] = 0;
    plStack_a8 = plVar8;
    plStack_a0 = plVar8;
    FUN_10a085024();
    ppuStack_88 = (undefined **)FUN_10a3226bc;
    ppuStack_80 = &PTR_FUN_110bc40d0;
    pplStack_60 = &plStack_a0;
    pplStack_78 = param_1;
    uStack_70 = param_2;
    uStack_68 = param_3;
    FUN_10ab9d2b8(plVar12,&ppuStack_88,0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000108820c58(&plStack_a8);
    if (plStack_a8 != (long *)0x0) {
      plVar12 = plStack_a8 + 1;
      do {
        lVar11 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))();
      }
    }
    pplVar7 = &plStack_a0;
    func_0x000107c29c1c();
  }
  pplVar9 = pplStack_90;
  if (pplStack_90 != (long **)0x0) {
    pplVar2 = pplStack_90 + 1;
    do {
      plVar12 = *pplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar5) {
        *pplVar2 = (long *)((long)plVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar12 == (long *)0x0) {
      (*(code *)(*pplStack_90)[2])(pplStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar7 = pplVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pplVar9 = pplVar7 + 0xc;
    do {
      bVar3 = *(byte *)pplVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
      if (bVar5) {
        *(byte *)pplVar9 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    while ((bVar3 & 1) != 0) {
      do {
      } while (((ulong)*pplVar9 & 1) != 0);
      do {
        bVar3 = *(byte *)pplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar5) {
          *(byte *)pplVar9 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a31cf58(pplVar7 + 1);
    *(byte *)pplVar9 = 0;
    return;
  }
  return;
}



/* Entry: 10a305d7c; end: 10a305ddb;  */

void FUN_10a305d7c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a31cf58(param_1 + 8);
  *pbVar1 = 0;
  return;
}



/* Entry: 10a305ddc; end: 10a305eb3;  */

void FUN_10a305ddc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar4 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar2 = (long *)(param_3[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a31c62c(param_1 + 8,param_2,&uStack_30);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar3 = plStack_28 + 1;
    do {
      lVar7 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *pbVar1 = 0;
  return;
}


