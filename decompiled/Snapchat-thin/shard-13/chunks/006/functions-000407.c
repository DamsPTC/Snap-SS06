/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a93d004; end: 10a93d06b;  */

void FUN_10a93d004(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
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
  FUN_10a93d11c(extraout_x8,plVar4,FUN_10a91da4c,0,param_2,param_4);
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



/* Entry: 10a93d06c; end: 10a93d11b;  */

void FUN_10a93d06c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d11c(param_1,param_2,FUN_10a91da4c,0,param_3,param_5);
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



/* Entry: 10a93d11c; end: 10a93d1d3;  */

void FUN_10a93d11c(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  lVar1 = param_2;
  FUN_10a93d004(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_58);
  FUN_10a2e43f8(param_1,param_2,lStack_58,lStack_50 - lStack_58 >> 2);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a93d1d4; end: 10a93d283;  */

void FUN_10a93d1d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d11c(param_1,param_2,0x10a91da5c,0,param_3,param_5);
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



/* Entry: 10a93d284; end: 10a93d333;  */

void FUN_10a93d284(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d11c(param_1,param_2,0x10a91da6c,0,param_3,param_5);
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



/* Entry: 10a93d334; end: 10a93d3fb;  */

void FUN_10a93d334(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d004(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[6];
  (**(code **)(*plVar4 + 0x50))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)plVar4 & 0xffffffff);
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



/* Entry: 10a93d3fc; end: 10a93d4c3;  */

void FUN_10a93d3fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
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
  FUN_10a93d004(param_2,param_3);
  FUN_10a052e3c(param_5);
  puVar5 = (undefined8 *)param_2[6];
  (**(code **)*puVar5)();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)puVar5;
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



/* Entry: 10a93d4c4; end: 10a93d58b;  */

void FUN_10a93d4c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d004(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[6];
  (**(code **)(*plVar4 + 8))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)plVar4;
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



/* Entry: 10a93d58c; end: 10a93d67b;  */

void FUN_10a93d58c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93d004(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(uint *)(param_2 + 5) == 0xffffffff) {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a93d668);
    (*pcVar2)();
  }
  (*(code *)(&PTR_FUN_110c2f718)[*(uint *)(param_2 + 5)])
            (param_1,&stack0xffffffffffffffb8,param_2 + 3);
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



/* Entry: 10a93d67c; end: 10a93d6cb;  */

int * FUN_10a93d67c(int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  
  if (*param_3 == 0) {
    *param_1 = 1;
    return param_2;
  }
  plVar2 = (long *)**(undefined8 **)param_2;
  piVar3 = *(int **)(*param_3 + 0x10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      *(char *)(param_1 + 2) = (char)piVar3[2];
      return param_1;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar3 + 2);
      return param_1;
    }
  }
  else {
    if (iVar1 == 4) {
      (**(code **)(*plVar2 + 0x80))(plVar2,*(undefined8 *)(piVar3 + 2));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 5) {
      (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(piVar3 + 2));
      goto code_r0x000109884a78;
    }
    if (iVar1 == 6) {
      (**(code **)(*plVar2 + 0x90))(plVar2,*(undefined8 *)(piVar3 + 2));
      goto code_r0x000109884a78;
    }
  }
  if (iVar1 < 7) {
    return param_1;
  }
  (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(piVar3 + 2));
code_r0x000109884a78:
  *(long **)(param_1 + 2) = plVar2;
  return param_1;
}



/* Entry: 10a93d6cc; end: 10a93d833;  */

void FUN_10a93d6cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  long *in_stack_ffffffffffffffa8;
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
  FUN_10a13941c(param_5);
  FUN_10a139440(&stack0xffffffffffffffb0,param_2,param_4);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&stack0xffffffffffffffa0,*ppuVar7,&stack0xffffffffffffffb0);
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
  FUN_10a93d834(param_1,param_2,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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



/* Entry: 10a93d834; end: 10a93d8c3;  */

void FUN_10a93d834(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  ppuStack_38 = &PTR_DAT_110c2f880;
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



/* Entry: 10a93d8c4; end: 10a93d8df;  */

void FUN_10a93d8c4(void)

{
  return;
}



/* Entry: 10a93d8e0; end: 10a93db03;  */

void FUN_10a93d8e0(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
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
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
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
  FUN_10a93db04(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    plVar6 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar6 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a93dad8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a93dadc);
      (*pcVar3)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar9 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c2f880,0),
       puVar9 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
      puVar9 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar6 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar11 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a93dad8;
    }
  }
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&stack0xffffffffffffffb0,*ppuVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  FUN_10a93d834(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar8 = lVar11 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar11 + 2];
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
  lVar11 = *plVar6;
  lVar14 = plVar5[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar11 = lVar11 + uVar8 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a93db04; end: 10a93db27;  */

void FUN_10a93db04(undefined8 param_1)

{
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  return;
}



/* Entry: 10a93db28; end: 10a93db43;  */

void FUN_10a93db28(void)

{
  return;
}



/* Entry: 10a93db44; end: 10a93dc4b;  */

long FUN_10a93db44(long param_1)

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



/* Entry: 10a93dc4c; end: 10a93dca3;  */

void FUN_10a93dc4c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10a93dca4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a93dca4; end: 10a93dceb;  */

undefined8 * FUN_10a93dca4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c2f0f0;
  FUN_10a91bf90(param_1 + 3);
  return param_1;
}



/* Entry: 10a93dcec; end: 10a93dd4f;  */

undefined8 * FUN_10a93dcec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c2f768;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a93dd50; end: 10a93dd53;  */

void FUN_10a93dd50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a93dd54; end: 10a93dd67;  */

void FUN_10a93dd54(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93dd68; end: 10a93dd7f;  */

void FUN_10a93dd68(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a93dd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a93dd80; end: 10a93ddb7;  */

undefined8 FUN_10a93dd80(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c2f7b8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a93ddb8; end: 10a93ddbf;  */

void FUN_10a93ddb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93ddc0; end: 10a93ddd3;  */

void FUN_10a93ddc0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93ddd4; end: 10a93ddeb;  */

void FUN_10a93ddd4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a93dde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
    return;
  }
  return;
}



/* Entry: 10a93ddec; end: 10a93de23;  */

undefined8 FUN_10a93ddec(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c2f820);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a93de24; end: 10a93de27;  */

void FUN_10a93de24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93de28; end: 10a93df0f;  */

void FUN_10a93de28(undefined8 *param_1,undefined8 param_2,uint param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a93de9c);
  (*pcVar1)();
}



/* Entry: 10a93df10; end: 10a93e00b;  */

undefined1  [16] FUN_10a93df10(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2efe8;
  puVar1 = &UNK_10f682e30;
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
    ppuStack_40 = &PTR_DAT_110c2efe8;
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



/* Entry: 10a93e00c; end: 10a93e05b;  */

ulong FUN_10a93e00c(ulong param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a93e05c,0,0);
  }
  return param_1;
}



/* Entry: 10a93e05c; end: 10a93e1ab;  */

void FUN_10a93e05c(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a93e198);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c2f840;
  puVar4[3] = &PTR_FUN_110c2efa0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[8] = 0;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
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
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a93e1ac; end: 10a93e1bb;  */

void FUN_10a93e1ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a93e1bc; end: 10a93e1db;  */

void FUN_10a93e1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f840;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93e1dc; end: 10a93e1eb;  */

void FUN_10a93e1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a93e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a93e1ec; end: 10a93e243;  */

ulong FUN_10a93e1ec(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a93e244,FUN_10a93e350);
  }
  return param_1;
}



/* Entry: 10a93e244; end: 10a93e34f;  */

/* WARNING: Removing unreachable block (ram,0x00010a93e2f4) */

void FUN_10a93e244(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93e44c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0e9a40(&stack0xffffffffffffffa8,plVar4[3],plVar4[4],plVar4[4] - plVar4[3] >> 2);
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



/* Entry: 10a93e350; end: 10a93e44b;  */

void FUN_10a93e350(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa8;
  
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
  func_0x00010a93e4b4(param_2,param_3);
  FUN_10a3f5698(param_5);
  FUN_10a36c9b0(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a91e3e8(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
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



/* Entry: 10a93e44c; end: 10a93e573;  */

undefined ** FUN_10a93e44c(undefined **param_1,undefined **param_2)

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
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (ppuVar1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar1 != (undefined **)0x0) {
        return ppuVar1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10a93e574,FUN_10a93e630);
  }
  return ppuVar1;
}



/* Entry: 10a93e574; end: 10a93e62f;  */

void FUN_10a93e574(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a93e44c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 6));
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



/* Entry: 10a93e630; end: 10a93e6ef;  */

void FUN_10a93e630(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a93e4b4(param_2,param_3);
  FUN_10a93e6f0(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)(plVar4 + 6) = (char)param_2;
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



/* Entry: 10a93e6f0; end: 10a93e713;  */

void FUN_10a93e6f0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
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
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f683afe,10);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a93e7d0);
  (*pcVar2)();
}



/* Entry: 10a93e714; end: 10a93e7cf;  */

void FUN_10a93e714(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f683afe,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93e7d0);
  (*pcVar4)();
}



/* Entry: 10a93e7d0; end: 10a93ea8f;  */

void FUN_10a93e7d0(long param_1,int param_2,uint param_3,ulong param_4,uint *param_5,long param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint *puStack_80;
  uint *puStack_78;
  long lStack_68;
  long lStack_60;
  
  lVar14 = (long)(int)param_3;
  FUN_109ffe100(&lStack_68,lVar14);
  FUN_109ffe100(&puStack_80,lVar14);
  iVar13 = (int)param_4;
  if ((int)param_3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = (long)puStack_78 - (long)puStack_80 >> 2;
    puVar9 = (uint *)(param_6 + (lVar14 + -1) * (long)iVar13 * 4);
    puVar7 = puStack_80;
    do {
      if (uVar6 == 0) {
LAB_10a93e87c:
        if (uVar8 <= uVar6) goto LAB_10a93ea70;
        uVar10 = *puVar9;
      }
      else {
        if (uVar8 <= uVar6 - 1) goto LAB_10a93ea70;
        uVar10 = puVar7[-1];
        if (*(float *)(param_1 + (ulong)*puVar9 * 4) < *(float *)(param_1 + (ulong)uVar10 * 4))
        goto LAB_10a93e87c;
        if (uVar8 <= uVar6) goto LAB_10a93ea70;
      }
      *puVar7 = uVar10;
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + -(long)iVar13;
      puVar7 = puVar7 + 1;
      uVar10 = param_3;
    } while (param_3 != uVar6);
  }
  uVar6 = (long)puStack_78 - (long)puStack_80 >> 2;
  if (uVar6 <= (ulong)(long)(int)(uVar10 - 1)) {
LAB_10a93ea70:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a93ea74);
    (*pcVar1)();
  }
  *param_5 = puStack_80[(int)(uVar10 - 1)];
  if ((int)param_3 < param_2) {
    iVar11 = 0;
    uVar8 = lStack_60 - lStack_68 >> 2;
    puVar9 = (uint *)(param_6 + (lVar14 + -1) * (long)iVar13 * 4);
    do {
      if (uVar10 == 0) {
        if ((int)param_3 < 1) {
          uVar10 = 0;
        }
        else {
          uVar4 = 0;
          puVar3 = puStack_80;
          puVar7 = puVar9;
          do {
            if (uVar4 == 0) {
LAB_10a93e990:
              if (uVar6 <= uVar4) goto LAB_10a93ea70;
              uVar10 = *puVar7;
            }
            else {
              if (uVar6 <= uVar4 - 1) goto LAB_10a93ea70;
              uVar10 = puVar3[-1];
              if (*(float *)(param_1 + (ulong)*puVar7 * 4) < *(float *)(param_1 + (ulong)uVar10 * 4)
                 ) goto LAB_10a93e990;
              if (uVar6 <= uVar4) goto LAB_10a93ea70;
            }
            *puVar3 = uVar10;
            uVar4 = uVar4 + 1;
            puVar7 = puVar7 + -(long)iVar13;
            puVar3 = puVar3 + 1;
            uVar10 = param_3;
          } while (param_3 != uVar4);
        }
        iVar11 = 0;
        uVar2 = uVar10 - 1;
LAB_10a93e9d0:
        iVar5 = 1;
LAB_10a93e9d4:
        if (uVar8 <= (ulong)(long)iVar11) goto LAB_10a93ea70;
        uVar4 = (ulong)*(uint *)(param_6 + (long)(iVar13 * (int)lVar14) * 4);
        iVar12 = iVar11;
      }
      else {
        uVar2 = uVar10 - 1;
        if (iVar11 == 0) goto LAB_10a93e9d0;
        if (uVar8 <= (ulong)(long)(iVar11 + -1)) goto LAB_10a93ea70;
        uVar4 = (ulong)*(uint *)(lStack_68 + (long)(iVar11 + -1) * 4);
        iVar5 = iVar11 + 1;
        if (*(float *)(param_1 + (ulong)*(uint *)(param_6 + lVar14 * iVar13 * 4) * 4) <
            *(float *)(param_1 + uVar4 * 4)) goto LAB_10a93e9d4;
        iVar12 = iVar11;
        if (uVar8 <= (ulong)(long)iVar11) goto LAB_10a93ea70;
      }
      iVar11 = iVar5;
      *(int *)(lStack_68 + (long)iVar12 * 4) = (int)uVar4;
      if (1 < (int)uVar10) {
        if (uVar6 <= uVar10 - 2) goto LAB_10a93ea70;
        if (*(float *)(param_1 + (ulong)puStack_80[uVar10 - 2] * 4) <
            *(float *)(param_1 + uVar4 * 4)) {
          uVar4 = (ulong)puStack_80[uVar10 - 2];
        }
      }
      param_5[(int)(iVar13 + iVar13 * ((int)lVar14 - param_3))] = (uint)uVar4;
      lVar14 = lVar14 + 1;
      puVar9 = (uint *)((long)puVar9 +
                       (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2));
      uVar10 = uVar2;
    } while (param_2 != (int)lVar14);
    if (puStack_80 == (uint *)0x0) goto LAB_10a93ea44;
  }
  puStack_78 = puStack_80;
  __ZdlPv();
LAB_10a93ea44:
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a93ea90; end: 10a93edb3;  */

void FUN_10a93ea90(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4,long param_5,
                  ulong param_6,long *param_7)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar9 = *param_4;
  lVar10 = param_4[1];
  lVar11 = param_4[2];
  lVar3 = lVar10 * lVar9 * lVar11;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      uVar4 = param_7[1] - *param_7 >> 2;
      if (param_6 <= uVar4) {
        uVar4 = param_6;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_5,*param_7,uVar4 << 2);
      return;
    }
    uVar4 = *param_3;
    uVar1 = param_3[1];
    uVar13 = param_3[2];
    iVar5 = (int)uVar4;
    iVar8 = (int)uVar1;
    uVar2 = iVar8 * iVar5;
    uVar6 = (ulong)uVar2;
    if (lVar3 - (int)lVar10 == 0) {
      if (0 < (int)uVar13) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar4 & 0x7fffffff;
          lVar3 = lVar9;
          if (0 < iVar5) {
            do {
              FUN_10a93e7d0(param_1,uVar1,lVar10,1,param_5 + lVar3,*param_7 + lVar3);
              lVar3 = lVar3 + (long)iVar8 * 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
        } while (uVar12 != (uVar13 & 0x7fffffff));
      }
    }
    else if (lVar3 - (int)lVar9 == 0) {
      if (0 < (int)uVar13) {
        lVar10 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar1 & 0x7fffffff;
          lVar3 = lVar10;
          if (0 < iVar8) {
            do {
              FUN_10a93e7d0(param_1,uVar4,lVar9,uVar1,param_5 + lVar3,*param_7 + lVar3);
              lVar3 = lVar3 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
        } while (uVar12 != (uVar13 & 0x7fffffff));
      }
    }
    else if (lVar3 - (int)lVar11 == 0) {
      if (0 < iVar8) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar4 & 0x7fffffff;
          lVar10 = lVar9;
          if (0 < iVar5) {
            do {
              FUN_10a93e7d0(param_1,uVar13,lVar11,uVar6,param_5 + lVar10,*param_7 + lVar10);
              lVar10 = lVar10 + (uVar1 & 0x7fffffff) * 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar12 != (uVar1 & 0x7fffffff));
      }
    }
    else {
      if (1 < (int)lVar10) {
        lStack_80 = 1;
        lStack_70 = 1;
        lStack_78 = lVar10;
        FUN_10a93ea90(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
        _memcpy(*param_7,param_5,param_7[1] - *param_7);
      }
      if (1 < (int)lVar9) {
        lStack_80 = *param_4;
        lStack_70 = 1;
        lStack_78 = 1;
        FUN_10a93ea90(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
        _memcpy(*param_7,param_5,param_7[1] - *param_7);
      }
      lStack_70 = param_4[2];
      lStack_78 = 1;
      lStack_80 = 1;
      FUN_10a93ea90(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
    }
  }
  return;
}



/* Entry: 10a93edb4; end: 10a93f073;  */

void FUN_10a93edb4(long param_1,int param_2,uint param_3,ulong param_4,uint *param_5,long param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint *puStack_80;
  uint *puStack_78;
  long lStack_68;
  long lStack_60;
  
  lVar14 = (long)(int)param_3;
  FUN_109ffe100(&lStack_68,lVar14);
  FUN_109ffe100(&puStack_80,lVar14);
  iVar13 = (int)param_4;
  if ((int)param_3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = (long)puStack_78 - (long)puStack_80 >> 2;
    puVar9 = (uint *)(param_6 + (lVar14 + -1) * (long)iVar13 * 4);
    puVar7 = puStack_80;
    do {
      if (uVar6 == 0) {
LAB_10a93ee60:
        if (uVar8 <= uVar6) goto LAB_10a93f054;
        uVar10 = *puVar9;
      }
      else {
        if (uVar8 <= uVar6 - 1) goto LAB_10a93f054;
        uVar10 = puVar7[-1];
        if (*(float *)(param_1 + (ulong)uVar10 * 4) < *(float *)(param_1 + (ulong)*puVar9 * 4))
        goto LAB_10a93ee60;
        if (uVar8 <= uVar6) goto LAB_10a93f054;
      }
      *puVar7 = uVar10;
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + -(long)iVar13;
      puVar7 = puVar7 + 1;
      uVar10 = param_3;
    } while (param_3 != uVar6);
  }
  uVar6 = (long)puStack_78 - (long)puStack_80 >> 2;
  if (uVar6 <= (ulong)(long)(int)(uVar10 - 1)) {
LAB_10a93f054:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a93f058);
    (*pcVar1)();
  }
  *param_5 = puStack_80[(int)(uVar10 - 1)];
  if ((int)param_3 < param_2) {
    iVar11 = 0;
    uVar8 = lStack_60 - lStack_68 >> 2;
    puVar9 = (uint *)(param_6 + (lVar14 + -1) * (long)iVar13 * 4);
    do {
      if (uVar10 == 0) {
        if ((int)param_3 < 1) {
          uVar10 = 0;
        }
        else {
          uVar4 = 0;
          puVar3 = puStack_80;
          puVar7 = puVar9;
          do {
            if (uVar4 == 0) {
LAB_10a93ef74:
              if (uVar6 <= uVar4) goto LAB_10a93f054;
              uVar10 = *puVar7;
            }
            else {
              if (uVar6 <= uVar4 - 1) goto LAB_10a93f054;
              uVar10 = puVar3[-1];
              if (*(float *)(param_1 + (ulong)uVar10 * 4) < *(float *)(param_1 + (ulong)*puVar7 * 4)
                 ) goto LAB_10a93ef74;
              if (uVar6 <= uVar4) goto LAB_10a93f054;
            }
            *puVar3 = uVar10;
            uVar4 = uVar4 + 1;
            puVar7 = puVar7 + -(long)iVar13;
            puVar3 = puVar3 + 1;
            uVar10 = param_3;
          } while (param_3 != uVar4);
        }
        iVar11 = 0;
        uVar2 = uVar10 - 1;
LAB_10a93efb4:
        iVar5 = 1;
LAB_10a93efb8:
        if (uVar8 <= (ulong)(long)iVar11) goto LAB_10a93f054;
        uVar4 = (ulong)*(uint *)(param_6 + (long)(iVar13 * (int)lVar14) * 4);
        iVar12 = iVar11;
      }
      else {
        uVar2 = uVar10 - 1;
        if (iVar11 == 0) goto LAB_10a93efb4;
        if (uVar8 <= (ulong)(long)(iVar11 + -1)) goto LAB_10a93f054;
        uVar4 = (ulong)*(uint *)(lStack_68 + (long)(iVar11 + -1) * 4);
        iVar5 = iVar11 + 1;
        if (*(float *)(param_1 + uVar4 * 4) <
            *(float *)(param_1 + (ulong)*(uint *)(param_6 + lVar14 * iVar13 * 4) * 4))
        goto LAB_10a93efb8;
        iVar12 = iVar11;
        if (uVar8 <= (ulong)(long)iVar11) goto LAB_10a93f054;
      }
      iVar11 = iVar5;
      *(int *)(lStack_68 + (long)iVar12 * 4) = (int)uVar4;
      if (1 < (int)uVar10) {
        if (uVar6 <= uVar10 - 2) goto LAB_10a93f054;
        if (*(float *)(param_1 + uVar4 * 4) <
            *(float *)(param_1 + (ulong)puStack_80[uVar10 - 2] * 4)) {
          uVar4 = (ulong)puStack_80[uVar10 - 2];
        }
      }
      param_5[(int)(iVar13 + iVar13 * ((int)lVar14 - param_3))] = (uint)uVar4;
      lVar14 = lVar14 + 1;
      puVar9 = (uint *)((long)puVar9 +
                       (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2));
      uVar10 = uVar2;
    } while (param_2 != (int)lVar14);
    if (puStack_80 == (uint *)0x0) goto LAB_10a93f028;
  }
  puStack_78 = puStack_80;
  __ZdlPv();
LAB_10a93f028:
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a93f074; end: 10a93f397;  */

void FUN_10a93f074(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4,long param_5,
                  ulong param_6,long *param_7)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar9 = *param_4;
  lVar10 = param_4[1];
  lVar11 = param_4[2];
  lVar3 = lVar10 * lVar9 * lVar11;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      uVar4 = param_7[1] - *param_7 >> 2;
      if (param_6 <= uVar4) {
        uVar4 = param_6;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_5,*param_7,uVar4 << 2);
      return;
    }
    uVar4 = *param_3;
    uVar1 = param_3[1];
    uVar13 = param_3[2];
    iVar5 = (int)uVar4;
    iVar8 = (int)uVar1;
    uVar2 = iVar8 * iVar5;
    uVar6 = (ulong)uVar2;
    if (lVar3 - (int)lVar10 == 0) {
      if (0 < (int)uVar13) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar4 & 0x7fffffff;
          lVar3 = lVar9;
          if (0 < iVar5) {
            do {
              FUN_10a93edb4(param_1,uVar1,lVar10,1,param_5 + lVar3,*param_7 + lVar3);
              lVar3 = lVar3 + (long)iVar8 * 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
        } while (uVar12 != (uVar13 & 0x7fffffff));
      }
    }
    else if (lVar3 - (int)lVar9 == 0) {
      if (0 < (int)uVar13) {
        lVar10 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar1 & 0x7fffffff;
          lVar3 = lVar10;
          if (0 < iVar8) {
            do {
              FUN_10a93edb4(param_1,uVar4,lVar9,uVar1,param_5 + lVar3,*param_7 + lVar3);
              lVar3 = lVar3 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
        } while (uVar12 != (uVar13 & 0x7fffffff));
      }
    }
    else if (lVar3 - (int)lVar11 == 0) {
      if (0 < iVar8) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          uVar7 = uVar4 & 0x7fffffff;
          lVar10 = lVar9;
          if (0 < iVar5) {
            do {
              FUN_10a93edb4(param_1,uVar13,lVar11,uVar6,param_5 + lVar10,*param_7 + lVar10);
              lVar10 = lVar10 + (uVar1 & 0x7fffffff) * 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar12 != (uVar1 & 0x7fffffff));
      }
    }
    else {
      if (1 < (int)lVar10) {
        lStack_80 = 1;
        lStack_70 = 1;
        lStack_78 = lVar10;
        FUN_10a93f074(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
        _memcpy(*param_7,param_5,param_7[1] - *param_7);
      }
      if (1 < (int)lVar9) {
        lStack_80 = *param_4;
        lStack_70 = 1;
        lStack_78 = 1;
        FUN_10a93f074(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
        _memcpy(*param_7,param_5,param_7[1] - *param_7);
      }
      lStack_70 = param_4[2];
      lStack_78 = 1;
      lStack_80 = 1;
      FUN_10a93f074(param_1,param_2,param_3,&lStack_80,param_5,param_6,param_7);
    }
  }
  return;
}



/* Entry: 10a93f398; end: 10a93f3a7;  */

void FUN_10a93f398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a93f3a8; end: 10a93f3c7;  */

void FUN_10a93f3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f8f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93f3c8; end: 10a93f3d7;  */

void FUN_10a93f3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a93f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a93f3d8; end: 10a93f44b;  */

void FUN_10a93f3d8(undefined8 *param_1,undefined8 param_2,uint param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a93f44c);
  (*pcVar1)();
}



/* Entry: 10a93f44c; end: 10a93f6f3;  */

undefined8 * FUN_10a93f44c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [8];
  long *plStack_88;
  
  puVar7 = auStack_90;
  puVar11 = param_1 + 6;
  param_1[7] = 0;
  *puVar11 = 0;
  puVar10 = param_1 + 0xe;
  param_1[0xf] = 0;
  *puVar10 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar13 = NEON_fmov(0x3f800000,4);
  param_1[0x16] = uVar13;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x24] = 0x200000000;
  *(undefined2 *)(param_1 + 0x25) = 0;
  if ((param_2 != 0) && (*param_3 != 0)) {
    lVar12 = 0;
    puVar6 = param_1 + 0x1c;
    do {
      FUN_10a8fe6ac(auStack_90,param_2);
      FUN_10a015bec(puVar11 + lVar12 * 2,auStack_90);
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      FUN_10a8fe6ac(auStack_90,param_2);
      FUN_10a015bec(puVar10 + lVar12 * 2,auStack_90);
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 4);
    FUN_10a8ff994(auStack_90,param_3,puVar11);
    FUN_10a8fe7a8(param_1,auStack_90);
    FUN_10a8ff960(auStack_90);
    lVar12 = *param_3;
    FUN_10a8ffa20(lVar12);
    uVar2 = param_1[0x1d];
    plVar8 = param_3;
    if (uVar2 < (ulong)param_1[0x1e]) {
      FUN_10a94e73c(puVar6,param_3,lVar12,puVar7,puVar11);
      puVar5 = (undefined8 *)(uVar2 + 0x30);
    }
    else {
      puVar5 = puVar6;
      FUN_10a94e788(puVar6,param_3,lVar12,puVar7,puVar11);
    }
    param_1[0x1d] = puVar5;
    lVar12 = *param_3;
    FUN_10a8ffa20(lVar12);
    uVar2 = param_1[0x1d];
    if (uVar2 < (ulong)param_1[0x1e]) {
      FUN_10a94e73c(puVar6,param_3,lVar12,plVar8,puVar10);
      puVar6 = (undefined8 *)(uVar2 + 0x30);
    }
    else {
      FUN_10a94e788(puVar6,param_3,lVar12,plVar8,puVar10);
    }
    param_1[0x1d] = puVar6;
  }
  return param_1;
}



/* Entry: 10a93f6f4; end: 10a93f777;  */

void FUN_10a93f6f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_10a8ff194(param_1,param_2,param_1 + 0x30,4);
  plVar1 = *(long **)(param_1 + 0xd0);
  for (plVar4 = *(long **)(param_1 + 200); plVar4 != plVar1; plVar4 = plVar4 + 2) {
    FUN_10a9091e4(*plVar4,param_1 + 0x70,0);
    lVar2 = *(long *)(*plVar4 + 0x28);
    for (lVar3 = *(long *)(*plVar4 + 0x20); lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      FUN_10a9091e4(lVar3,param_1 + 0x30,0);
    }
  }
  return;
}



/* Entry: 10a93f778; end: 10a93fc57;  */

void FUN_10a93f778(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  long lStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_79;
  undefined1 uStack_69;
  undefined8 *puStack_68;
  
  if (*(int *)(param_1 + 0xb8) == 2) {
    FUN_10a9092a4(param_1 + 0x30,param_1 + 0xb0);
    FUN_10a93f6f4(param_1,param_2);
    plVar13 = *(long **)(param_1 + 200);
    plVar1 = *(long **)(param_1 + 0xd0);
    if (plVar13 != plVar1) {
      do {
        lVar11 = *(long *)(*plVar13 + 0x10);
        plVar8 = *(long **)(*plVar13 + 0x18);
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lStack_a0 = lVar11;
        plStack_98 = plVar8;
        if (lVar11 != 0) {
          func_0x000107c2b074(&uStack_90,&PTR_DAT_110c2e680);
          func_0x000107c2b074(auStack_c0,&PTR_DAT_110c2e650);
          lVar12 = *(long *)(lVar11 + 0x1b8);
          puStack_68 = auStack_c0;
          FUN_10a0da6b4(lVar12,auStack_c0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
          if (*(short *)(*(long *)(lVar12 + 0x40) + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
LAB_10a93fbd4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a93fbd8);
            (*pcVar6)();
          }
          uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)(*(long *)(lVar12 + 0x40) + 0x24));
          FUN_10a6bfbe8(lVar11,&uStack_90,&uStack_c8);
          if (cStack_a9 < '\0') {
            __ZdlPv(auStack_c0[0]);
          }
          if (cStack_79 < '\0') {
            __ZdlPv(CONCAT71(uStack_8f,uStack_90));
          }
          func_0x000107c2b074(&uStack_90,&PTR_DAT_110c2e698);
          func_0x000107c2b074(auStack_c0,&PTR_DAT_110c2e6b0);
          lVar12 = *(long *)(lVar11 + 0x1b8);
          puStack_68 = auStack_c0;
          FUN_10a0da6b4(lVar12,auStack_c0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
          if (*(short *)(*(long *)(lVar12 + 0x40) + 0x20) != 7) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10a93fbd4;
          }
          uStack_c8 = *(undefined8 *)(*(long *)(lVar12 + 0x40) + 0x24);
          FUN_10a0da430(lVar11,&uStack_90,&uStack_c8);
          if (cStack_a9 < '\0') {
            __ZdlPv(auStack_c0[0]);
          }
          if (cStack_79 < '\0') {
            __ZdlPv(CONCAT71(uStack_8f,uStack_90));
          }
        }
        lVar12 = *plVar13;
        lVar11 = param_1 + 0xf8;
        FUN_10a9500c0(lVar11,lVar12);
        if ((lVar11 != 0) && (*(int *)(lVar12 + 0x1408) != 2)) {
          FUN_10a8fe3ec(param_2,*(undefined4 *)(lVar12 + 0x58),1);
          lVar12 = *plVar13;
        }
        puVar10 = *(uint **)(lVar12 + 0x328);
        puVar9 = *(uint **)(lVar12 + 0x330);
        if (puVar10 != puVar9) {
          do {
            uVar3 = *puVar10;
            lVar11 = *plVar13;
            func_0x00010a8fdae4(lVar11,(ulong)uVar3);
            if (lVar11 != 0) {
              if (0x1f < uVar3) goto LAB_10a93fbd4;
              uStack_90 = 1;
              if (*(long *)(*plVar13 + 0x10) != 0) {
                FUN_10a917fc0(*(long *)(*plVar13 + 0x10),param_3 + 0x2800 + (ulong)uVar3 * 0x20,
                              &uStack_90);
              }
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != puVar9);
          lVar12 = *plVar13;
          puVar10 = *(uint **)(lVar12 + 0x328);
        }
        *(uint **)(lVar12 + 0x330) = puVar10;
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            lVar11 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar1);
    }
    func_0x00010a91ace0(param_1 + 0xf8);
    uVar7 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb8) != 1) {
      return;
    }
    FUN_10a9092a4(param_1 + 0x30,param_1 + 0xb0);
    FUN_10a93f6f4(param_1,param_2);
    plVar13 = *(long **)(param_1 + 200);
    plVar1 = *(long **)(param_1 + 0xd0);
    if (plVar13 != plVar1) {
      do {
        FUN_10a8fef14(*plVar13);
        lVar11 = *plVar13;
        func_0x000107c2b074(&uStack_90,&PTR_DAT_110c2e650);
        FUN_10a90a334(lVar11,&uStack_90,*plVar13 + 0x1524);
        if (cStack_79 < '\0') {
          __ZdlPv(CONCAT71(uStack_8f,uStack_90));
        }
        lVar11 = *plVar13;
        func_0x000107c2b074(&uStack_90,&PTR_DAT_110c2e668);
        FUN_10a90a334(lVar11,&uStack_90,*plVar13 + 0x1528);
        if (cStack_79 < '\0') {
          __ZdlPv(CONCAT71(uStack_8f,uStack_90));
        }
        lVar11 = *plVar13;
        func_0x000107c2b074(&uStack_90,&PTR_DAT_110c2e680);
        plVar8 = *(long **)(lVar11 + 0x38);
        plVar2 = *(long **)(lVar11 + 0x40);
        if (plVar8 != plVar2) {
          lVar11 = *plVar13;
          do {
            if (*plVar8 != 0) {
              FUN_10a6bfbe8(*plVar8,&uStack_90,lVar11 + 0x1524);
            }
            plVar8 = plVar8 + 2;
          } while (plVar8 != plVar2);
        }
        if (cStack_79 < '\0') {
          __ZdlPv(CONCAT71(uStack_8f,uStack_90));
        }
        lVar12 = *plVar13;
        lVar11 = param_1 + 0xf8;
        FUN_10a9500c0(lVar11,lVar12);
        if (lVar11 != 0) {
          FUN_10a8fe3ec(param_2,*(undefined4 *)(lVar12 + 0x58),0);
          lVar12 = *plVar13;
        }
        puVar9 = *(uint **)(lVar12 + 0x330);
        for (puVar10 = *(uint **)(lVar12 + 0x328); puVar10 != puVar9; puVar10 = puVar10 + 1) {
          uVar3 = *puVar10;
          lVar11 = *plVar13;
          func_0x00010a8fdae4(lVar11,(ulong)uVar3);
          if (lVar11 != 0) {
            if (0x1f < uVar3) goto LAB_10a93fbd4;
            uStack_90 = 0;
            func_0x00010a90a404(*plVar13,param_3 + 0x2800 + (ulong)uVar3 * 0x20,&uStack_90);
          }
        }
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar1);
    }
    uVar7 = 2;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  return;
}



/* Entry: 10a93fc58; end: 10a93fdb3;  */

void FUN_10a93fc58(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  lVar2 = *(long *)(param_1 + 200);
  lVar1 = *(long *)(param_1 + 0xd0);
  fVar3 = 1.0;
  if (lVar2 != lVar1) {
    do {
      func_0x00010a93fcdc(param_1,lVar2);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar1);
    fVar3 = *(float *)(param_1 + 0xc0) + 1.0;
  }
  fVar4 = 1.0;
  if (1.0 <= fVar3) {
    fVar4 = fVar3;
  }
  uVar5 = NEON_fminnm(fVar4,0x45000000);
  *(undefined4 *)(param_1 + 0xb0) = 0x45000000;
  *(undefined4 *)(param_1 + 0xb4) = uVar5;
  return;
}



/* Entry: 10a93fdb4; end: 10a93fe37;  */

undefined1  [16] FUN_10a93fdb4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f684f76;
  return auVar1;
}



/* Entry: 10a93fe38; end: 10a9402c3;  */

void FUN_10a93fe38(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f684f76,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c304a0;
  pppuVar2 = (undefined8 ***)&UNK_10f683c80;
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
  uStack_58 = 0x94;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c304a0;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f148,FUN_10a950194,FUN_10a950278);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c86,FUN_10a950444,FUN_10a950500);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f27c,FUN_10a9505cc,FUN_10a950688);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68f286,FUN_10a950754,FUN_10a950810);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c94,FUN_10a9508dc,FUN_10a9509b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c9e,FUN_10a950aa0,FUN_10a950b60);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f683ca8,FUN_10a950c54,FUN_10a950d14);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f653,FUN_10a950ddc,FUN_10a950eac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10a950f74,FUN_10a951038);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64f661,FUN_10a951150,FUN_10a951210);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f414faa,FUN_10a9512d8,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f684f76,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9402a8);
  (*pcVar6)();
}



/* Entry: 10a9402c4; end: 10a940333;  */

void FUN_10a9402c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  if (*(char *)(lVar1 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar1 + 0x1a0));
  }
  *(undefined8 *)(lVar1 + 0x1a8) = uStack_38;
  *(undefined8 *)(lVar1 + 0x1a0) = uStack_40;
  *(undefined8 *)(lVar1 + 0x1b0) = uStack_30;
  return;
}



/* Entry: 10a940334; end: 10a9403af;  */

undefined1  [16] FUN_10a940334(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f684f82;
  return auVar1;
}



/* Entry: 10a9403b0; end: 10a940467;  */

void FUN_10a9403b0(undefined8 param_1)

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
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a940468(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f683cb8;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9514d8();
  func_0x00010a9517d0(param_1);
  return;
}



/* Entry: 10a940468; end: 10a94053f;  */

/* WARNING: Removing unreachable block (ram,0x00010a940500) */

undefined1  [16] FUN_10a940468(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f684f82,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9513dc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a940540; end: 10a940623;  */

undefined8 *
FUN_10a940540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c2f9a0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110c2fa18;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar5;
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
  param_1[6] = param_2[2];
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 7,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[9] = param_3[2];
    param_1[8] = uVar6;
    param_1[7] = uVar5;
  }
  param_1[10] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 0xb,param_4 + 1);
  return param_1;
}



/* Entry: 10a940624; end: 10a9406e3;  */

void FUN_10a940624(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  uVar4 = param_1;
  FUN_10a9406e4();
  if ((int)uVar4 != 0) {
    FUN_10a9407d4(&uStack_50,param_1,param_2);
    FUN_10a951730(aiStack_40,*param_3,uStack_50,plStack_48);
    func_0x0001098968d0(param_3 + 1,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a9406e4; end: 10a9407d3;  */

bool FUN_10a9406e4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar9 = param_2[1];
  if (-1 < (char)bVar3) {
    uVar9 = (ulong)bVar3;
  }
  uVar10 = (ulong)*(char *)(param_1 + 0x4f);
  uVar11 = uVar10;
  if ((long)uVar10 < 0) {
    uVar11 = *(ulong *)(param_1 + 0x40);
  }
  if (uVar9 <= uVar11) {
    return false;
  }
  plVar2 = (long *)*param_2;
  if (-1 < (char)bVar3) {
    plVar2 = param_2;
  }
  uVar11 = *(ulong *)(param_1 + 0x40);
  pcVar5 = *(char **)(param_1 + 0x38);
  if (-1 < *(char *)(param_1 + 0x4f)) {
    uVar11 = uVar10;
    pcVar5 = (char *)(param_1 + 0x38);
  }
  if (uVar11 == 0) {
    bVar6 = true;
  }
  else {
    lVar1 = (long)plVar2 + uVar9;
    lVar12 = lVar1;
    if ((long)uVar11 <= (long)uVar9) {
      cVar4 = *pcVar5;
      plVar7 = plVar2;
      do {
        lVar12 = lVar1;
        if (((0xfffffffffffffffe < uVar9 - uVar11) ||
            (_memchr(plVar7,(long)cVar4,(uVar9 - uVar11) + 1), plVar7 == (long *)0x0)) ||
           (lVar8 = (long)plVar7, _memcmp(), lVar12 = (long)plVar7, (int)lVar8 == 0)) break;
        plVar7 = (long *)((long)plVar7 + 1);
        uVar9 = lVar1 - (long)plVar7;
        lVar12 = lVar1;
      } while ((long)uVar11 <= (long)uVar9);
    }
    bVar6 = lVar12 != lVar1 && (long *)lVar12 == plVar2;
  }
  return bVar6;
}



/* Entry: 10a9407d4; end: 10a940a93;  */

/* WARNING: Removing unreachable block (ram,0x00010a9408d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9408d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9408e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9408e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9408ec) */

void FUN_10a9407d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_68;
  long *plStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar9 = (long)*(char *)(param_2 + 0x4f);
  if (lVar9 < 0) {
    lVar9 = *(long *)(param_2 + 0x40);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (auStack_58,param_3,lVar9,0xffffffffffffffff,&uStack_40);
  lVar9 = param_2;
  FUN_10a940bf0();
  if (lVar9 == 0) {
    uVar8 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
  }
  else {
    lVar6 = lVar9 + 0xf8;
    FUN_10a9176b0(lVar6,auStack_58);
    if (lVar9 + 0x100 == lVar6) {
      uVar8 = 0x120;
      ___cxa_allocate_exception(0x120);
      FUN_10a009538();
    }
    else {
      lVar6 = lVar9 + 0xf8;
      FUN_10a9176b0(lVar6,auStack_58);
      if (lVar9 + 0x100 == lVar6) {
        plStack_38 = (long *)0x0;
        uStack_40 = 0;
      }
      else {
        uStack_40 = *(undefined8 *)(lVar6 + 0x38);
        plStack_38 = *(long **)(lVar6 + 0x40);
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
      (**(code **)(param_2 + 0x50))(&lStack_68,&uStack_40,(undefined8 *)(param_2 + 0x50));
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (lStack_68 != 0) {
        puVar7 = (undefined8 *)0x40;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar10 = puVar7 + 3;
        *puVar10 = &PTR_FUN_110c2f948;
        *puVar7 = &PTR_FUN_110c30b98;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = lStack_68;
        puVar7[7] = plStack_60;
        if (plStack_60 == (long *)0x0) {
          *param_1 = puVar10;
          param_1[1] = puVar7;
        }
        else {
          plVar1 = plStack_60 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *param_1 = puVar10;
          param_1[1] = puVar7;
          if (plStack_60 != (long *)0x0) {
            plVar1 = plStack_60 + 1;
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
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
            }
          }
        }
        if (cStack_41 < '\0') {
          __ZdlPv(auStack_58[0]);
        }
        return;
      }
      func_0x00010a190e10(&lStack_68);
      uVar8 = 0x120;
      ___cxa_allocate_exception(0x120);
      FUN_10a009538();
    }
  }
  ___cxa_throw(uVar8,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a940a34);
  (*pcVar5)();
}



/* Entry: 10a940a94; end: 10a940a9b;  */

void FUN_10a940a94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long *plStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  lVar4 = param_1 + -0x18;
  FUN_10a9406e4();
  if ((int)lVar4 != 0) {
    FUN_10a9407d4(&uStack_50,param_1 + -0x18,param_2);
    FUN_10a951730(aiStack_40,*param_3,uStack_50,plStack_48);
    func_0x0001098968d0(param_3 + 1,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
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
  return;
}



/* Entry: 10a940a9c; end: 10a940aeb;  */

ulong FUN_10a940a9c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 uStack_61;
  
  lVar4 = 0x120;
  ___cxa_allocate_exception();
  FUN_10a2e1840();
  ppuVar6 = &PTR_DAT_110b99e48;
  lVar8 = lVar4;
  ___cxa_throw(lVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
  ___cxa_free_exception(lVar4);
  __Unwind_Resume();
  FUN_10a940a9c();
  lVar4 = lVar8;
  FUN_10a9406e4();
  if ((int)lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    lVar4 = lVar8;
    FUN_10a940bf0();
    if (lVar4 == 0) {
      lVar4 = 0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
      lVar8 = lVar4;
      ___cxa_throw(lVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
      ___cxa_free_exception(lVar4);
      __Unwind_Resume();
      plVar5 = *(long **)(lVar8 + 0x28);
      if ((plVar5 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if (*(long *)(lVar8 + 0x20) != 0) {
          uVar9 = *(ulong *)(lVar8 + 0x30);
        }
        plVar1 = plVar5 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return uVar9;
    }
    lVar7 = (long)*(char *)(lVar8 + 0x4f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(lVar8 + 0x40);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_80,ppuVar6,lVar7,0xffffffffffffffff,&uStack_61);
    lVar8 = lVar4 + 0xf8;
    FUN_10a9176b0(lVar8,auStack_80);
    uVar9 = (ulong)(lVar4 + 0x100 != lVar8);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
  }
  return uVar9;
}



/* Entry: 10a940aec; end: 10a940af7;  */

ulong FUN_10a940aec(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_41;
  
  FUN_10a940a9c();
  lVar6 = param_1;
  FUN_10a9406e4();
  if ((int)lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = param_1;
    FUN_10a940bf0();
    if (lVar6 == 0) {
      lVar5 = 0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
      lVar6 = lVar5;
      ___cxa_throw(lVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
      ___cxa_free_exception(lVar5);
      __Unwind_Resume();
      plVar4 = *(long **)(lVar6 + 0x28);
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if (*(long *)(lVar6 + 0x20) != 0) {
          uVar7 = *(ulong *)(lVar6 + 0x30);
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
      return uVar7;
    }
    lVar5 = (long)*(char *)(param_1 + 0x4f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_1 + 0x40);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_60,param_2,lVar5,0xffffffffffffffff,&uStack_41);
    lVar5 = lVar6 + 0xf8;
    FUN_10a9176b0(lVar5,auStack_60);
    uVar7 = (ulong)(lVar6 + 0x100 != lVar5);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  return uVar7;
}



/* Entry: 10a940af8; end: 10a940bef;  */

ulong FUN_10a940af8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  lVar6 = param_1;
  FUN_10a9406e4();
  if ((int)lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = param_1;
    FUN_10a940bf0();
    if (lVar6 == 0) {
      lVar5 = 0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
      lVar6 = lVar5;
      ___cxa_throw(lVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
      ___cxa_free_exception(lVar5);
      __Unwind_Resume();
      plVar4 = *(long **)(lVar6 + 0x28);
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if (*(long *)(lVar6 + 0x20) != 0) {
          uVar7 = *(ulong *)(lVar6 + 0x30);
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
      return uVar7;
    }
    lVar5 = (long)*(char *)(param_1 + 0x4f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_1 + 0x40);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_50,param_2,lVar5,0xffffffffffffffff,&uStack_31);
    lVar5 = lVar6 + 0xf8;
    FUN_10a9176b0(lVar5,auStack_50);
    uVar7 = (ulong)(lVar6 + 0x100 != lVar5);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  return uVar7;
}



/* Entry: 10a940bf0; end: 10a940c6b;  */

undefined8 FUN_10a940bf0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
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
  return uVar6;
}



/* Entry: 10a940c6c; end: 10a940c73;  */

ulong FUN_10a940c6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  lVar5 = param_1 + -0x18;
  lVar6 = lVar5;
  FUN_10a9406e4();
  if ((int)lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_10a940bf0();
    if (lVar5 == 0) {
      lVar5 = 0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
      lVar6 = lVar5;
      ___cxa_throw(lVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
      ___cxa_free_exception(lVar5);
      __Unwind_Resume();
      plVar4 = *(long **)(lVar6 + 0x28);
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if (*(long *)(lVar6 + 0x20) != 0) {
          uVar7 = *(ulong *)(lVar6 + 0x30);
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
      return uVar7;
    }
    lVar6 = (long)*(char *)(param_1 + 0x37);
    if (lVar6 < 0) {
      lVar6 = *(long *)(param_1 + 0x28);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_50,param_2,lVar6,0xffffffffffffffff,&uStack_31);
    lVar6 = lVar5 + 0xf8;
    FUN_10a9176b0(lVar6,auStack_50);
    uVar7 = (ulong)(lVar5 + 0x100 != lVar6);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  return uVar7;
}



/* Entry: 10a940c74; end: 10a940ec7;  */

void FUN_10a940c74(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = param_2;
  FUN_10a940bf0();
  if (lVar10 == 0) {
    uVar5 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a940e68:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a940e6c);
    (*pcVar2)();
  }
  FUN_10a8fc8e8(&puStack_c0);
  if (puStack_c0 != auStack_b8) {
    puVar7 = puStack_c0;
    do {
      FUN_10a0b4df8(&uStack_a8,param_2 + 0x38,puVar7 + 4);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        puVar1[2] = lStack_98;
        puVar1[1] = uStack_a0;
        *puVar1 = uStack_a8;
        param_1[1] = (long)(puVar1 + 3);
      }
      else {
        lVar10 = (long)puVar1 - *param_1;
        uVar6 = (lVar10 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar6) {
          FUN_10a05a0c0();
          goto LAB_10a940e68;
        }
        lVar8 = param_1[2] - *param_1 >> 3;
        uVar9 = lVar8 * 0x5555555555555556;
        if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
          uVar9 = uVar6;
        }
        if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar9 = 0xaaaaaaaaaaaaaaa;
        }
        plVar4 = param_1;
        plStack_70 = param_1;
        FUN_10a05a0d4();
        puVar1 = (undefined8 *)((long)plVar4 + lVar10);
        puVar1[2] = lStack_98;
        puVar1[1] = uStack_a0;
        *puVar1 = uStack_a8;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lVar10 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lStack_90 = *param_1;
        *param_1 = lVar10;
        param_1[1] = (long)(puVar1 + 3);
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar4 + uVar9 * 3);
        lStack_88 = lStack_90;
        lStack_80 = lStack_90;
        func_0x000107c31938(&lStack_90);
        param_1[1] = (long)(puVar1 + 3);
        if (lStack_98 < 0) {
          __ZdlPv(uStack_a8);
        }
      }
      puVar1 = (undefined8 *)puVar7[1];
      puVar11 = puVar7;
      if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
        do {
          puVar7 = (undefined8 *)puVar11[2];
          bVar3 = (undefined8 *)*puVar7 != puVar11;
          puVar11 = puVar7;
        } while (bVar3);
      }
      else {
        do {
          puVar7 = puVar1;
          puVar1 = (undefined8 *)*puVar7;
        } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
      }
    } while (puVar7 != auStack_b8);
  }
  func_0x000107c27bf0(&puStack_c0,auStack_b8[0]);
  return;
}



/* Entry: 10a940ec8; end: 10a940ecf;  */

void FUN_10a940ec8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  
  lVar6 = param_2 + -0x18;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a940bf0();
  if (lVar6 == 0) {
    uVar5 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a940e68:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a940e6c);
    (*pcVar2)();
  }
  FUN_10a8fc8e8(&puStack_c0);
  if (puStack_c0 != auStack_b8) {
    puVar8 = puStack_c0;
    do {
      FUN_10a0b4df8(&uStack_a8,param_2 + 0x20,puVar8 + 4);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        puVar1[2] = lStack_98;
        puVar1[1] = uStack_a0;
        *puVar1 = uStack_a8;
        param_1[1] = (long)(puVar1 + 3);
      }
      else {
        lVar6 = (long)puVar1 - *param_1;
        uVar7 = (lVar6 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar7) {
          FUN_10a05a0c0();
          goto LAB_10a940e68;
        }
        lVar9 = param_1[2] - *param_1 >> 3;
        uVar10 = lVar9 * 0x5555555555555556;
        if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
          uVar10 = uVar7;
        }
        if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar10 = 0xaaaaaaaaaaaaaaa;
        }
        plVar4 = param_1;
        plStack_70 = param_1;
        FUN_10a05a0d4();
        puVar1 = (undefined8 *)((long)plVar4 + lVar6);
        puVar1[2] = lStack_98;
        puVar1[1] = uStack_a0;
        *puVar1 = uStack_a8;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lVar6 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lStack_90 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)(puVar1 + 3);
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar4 + uVar10 * 3);
        lStack_88 = lStack_90;
        lStack_80 = lStack_90;
        func_0x000107c31938(&lStack_90);
        param_1[1] = (long)(puVar1 + 3);
        if (lStack_98 < 0) {
          __ZdlPv(uStack_a8);
        }
      }
      puVar1 = (undefined8 *)puVar8[1];
      puVar11 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar11[2];
          bVar3 = (undefined8 *)*puVar8 != puVar11;
          puVar11 = puVar8;
        } while (bVar3);
      }
      else {
        do {
          puVar8 = puVar1;
          puVar1 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
    } while (puVar8 != auStack_b8);
  }
  func_0x000107c27bf0(&puStack_c0,auStack_b8[0]);
  return;
}



/* Entry: 10a940ed0; end: 10a9410fb;  */

undefined8 ** FUN_10a940ed0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  
  lVar15 = param_2;
  FUN_10a940bf0();
  if (lVar15 == 0) {
    ppuVar7 = (undefined8 **)0x120;
    ___cxa_allocate_exception();
    FUN_10a2e1840();
    ppuVar10 = &PTR_DAT_110b99e48;
    pcVar4 = FUN_10a002a90;
    ppuVar8 = ppuVar7;
    ___cxa_throw();
    ___cxa_free_exception(ppuVar7);
    __Unwind_Resume();
    *(uint *)ppuVar8 = 0;
    puVar12 = *(undefined8 **)pcVar4;
    ppuVar8[2] = *(undefined8 **)(pcVar4 + 8);
    ppuVar8[1] = puVar12;
    *(undefined8 *)pcVar4 = 0;
    *(undefined8 *)(pcVar4 + 8) = 0;
    puVar12 = (undefined8 *)*ppuVar10;
    puVar2 = (undefined8 *)ppuVar10[1];
    ppuVar8[3] = puVar12;
    ppuVar8[4] = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = puVar2 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar12 = (undefined8 *)*ppuVar10;
    }
    if (puVar12 != (undefined8 *)0x0) {
      puVar12 = puVar12 + 8;
      FUN_10a977970(puVar12,ppuVar8 + 1);
      *(uint *)ppuVar8 = (uint)puVar12;
      ppuVar9 = ppuVar10;
      FUN_10a8fe098(ppuVar10,puVar12);
      if ((int)ppuVar9 != 0) {
        uVar13 = (ulong)((uint)puVar12 & 0x3fff);
        lVar15 = *(long *)(*ppuVar10 + 0x40);
        uVar14 = (*(long *)(*ppuVar10 + 0x48) - lVar15 >> 4) * 0x4ec4ec4ec4ec4ec5;
        if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9411ec);
          (*pcVar4)();
        }
        lVar15 = lVar15 + uVar13 * 0xd0;
        *(undefined4 *)(lVar15 + 0x68) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x74) = 0;
        *(undefined8 *)(lVar15 + 0x6c) = 0;
        *(undefined4 *)(lVar15 + 0x7c) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x80) = 0;
        *(undefined8 *)(lVar15 + 0x88) = 0;
        *(undefined4 *)(lVar15 + 0x90) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x9c) = 0;
        *(undefined8 *)(lVar15 + 0x94) = 0;
        *(undefined4 *)(lVar15 + 0xa4) = 0x3f800000;
      }
    }
    return ppuVar8;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a8fc8e8(&puStack_78);
  puVar12 = puStack_78;
  do {
    if (puVar12 == auStack_70) {
      ppuVar8 = &puStack_78;
      func_0x000107c27bf0(ppuVar8,auStack_70[0]);
      return ppuVar8;
    }
    FUN_10a0b4df8(auStack_a8,param_2 + 0x38,puVar12 + 4);
    FUN_10a9407d4(&uStack_90,param_2,auStack_a8);
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      puVar17 = puVar2 + 2;
      puVar2[1] = uStack_88;
      *puVar2 = uStack_90;
    }
    else {
      lVar15 = *param_1;
      lVar16 = (long)puVar2 - lVar15;
      uVar13 = (lVar16 >> 4) + 1;
      if (uVar13 >> 0x3c != 0) {
        FUN_10a94e8e0();
LAB_10a941060:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a941064);
        (*pcVar4)();
      }
      uVar11 = param_1[2] - lVar15;
      uVar14 = (long)uVar11 >> 3;
      if (uVar14 <= uVar13) {
        uVar14 = uVar13;
      }
      if (0x7fffffffffffffef < uVar11) {
        uVar14 = 0xfffffffffffffff;
      }
      if (uVar14 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a941060;
      }
      lVar6 = uVar14 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar6 + lVar16);
      puVar17 = puVar2 + 2;
      puVar2[1] = uStack_88;
      *puVar2 = uStack_90;
      _memcpy(puVar2 + (lVar16 >> 4) * -2,lVar15,lVar16);
      *param_1 = (long)(puVar2 + (lVar16 >> 4) * -2);
      param_1[2] = lVar6 + uVar14 * 0x10;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
    }
    param_1[1] = (long)puVar17;
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    puVar2 = (undefined8 *)puVar12[1];
    puVar17 = puVar12;
    if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
      do {
        puVar12 = (undefined8 *)puVar17[2];
        bVar5 = (undefined8 *)*puVar12 != puVar17;
        puVar17 = puVar12;
      } while (bVar5);
    }
    else {
      do {
        puVar12 = puVar2;
        puVar2 = (undefined8 *)*puVar12;
      } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
    }
  } while( true );
}



/* Entry: 10a9410fc; end: 10a94120b;  */

uint * FUN_10a9410fc(uint *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  uVar9 = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 2) = uVar9;
  *param_3 = 0;
  param_3[1] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  *(long *)(param_1 + 6) = lVar6;
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *param_2;
  }
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x40;
    FUN_10a977970(lVar6,param_1 + 2);
    *param_1 = (uint)lVar6;
    plVar5 = param_2;
    FUN_10a8fe098(param_2,lVar6);
    if ((int)plVar5 != 0) {
      uVar7 = (ulong)((uint)lVar6 & 0x3fff);
      lVar6 = *(long *)(*param_2 + 0x40);
      uVar8 = (*(long *)(*param_2 + 0x48) - lVar6 >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9411ec);
        (*pcVar4)();
      }
      lVar6 = lVar6 + uVar7 * 0xd0;
      *(undefined4 *)(lVar6 + 0x68) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0x74) = 0;
      *(undefined8 *)(lVar6 + 0x6c) = 0;
      *(undefined4 *)(lVar6 + 0x7c) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined4 *)(lVar6 + 0x90) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0x9c) = 0;
      *(undefined8 *)(lVar6 + 0x94) = 0;
      *(undefined4 *)(lVar6 + 0xa4) = 0x3f800000;
    }
  }
  return param_1;
}



/* Entry: 10a94120c; end: 10a9412cf;  */

void FUN_10a94120c(undefined4 *param_1)

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
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_28 = plVar4, plVar4 != (long *)0x0)) {
    uStack_30 = *(undefined8 *)(param_1 + 6);
  }
  plVar4 = plStack_28;
  FUN_10a8fd980(&uStack_30,param_1);
  *param_1 = 0;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar4 != (long *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9412d0; end: 10a94130b;  */

long FUN_10a9412d0(long param_1)

{
  FUN_10a94120c();
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0617bc(param_1 + 8);
  return param_1;
}



/* Entry: 10a94130c; end: 10a94143b;  */

long FUN_10a94130c(long param_1)

{
  long lStack_28;
  
  func_0x00010a941380();
  lStack_28 = param_1 + 0xb8;
  FUN_10a04a568(&lStack_28);
  lStack_28 = param_1 + 0xa0;
  FUN_10a04a568(&lStack_28);
  lStack_28 = param_1 + 0x88;
  FUN_10a94e950(&lStack_28);
  lStack_28 = param_1 + 0x70;
  FUN_10a91aa34(&lStack_28);
  FUN_10a8ff960(param_1 + 0x40);
  return param_1;
}



/* Entry: 10a94143c; end: 10a9414bb;  */

void FUN_10a94143c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  FUN_10a8ff5f8(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x78);
  for (lVar3 = *(long *)(param_1 + 0x70); lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    FUN_10a8ff5f8(lVar3,param_2,param_3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x90);
  for (puVar4 = *(undefined4 **)(param_1 + 0x88); puVar4 != puVar2; puVar4 = puVar4 + 10) {
    FUN_10a8fe3ec(param_2,*puVar4,param_3);
  }
  return;
}



/* Entry: 10a9414bc; end: 10a941523;  */

void FUN_10a9414bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar7 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8) >> 4;
  if ((1 < uVar7) && (0 < (int)*(uint *)(param_2 + 0xd4))) {
    uVar8 = (ulong)~*(uint *)(param_2 + 0xd4) & 1;
    if (uVar8 < uVar7) {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0xb8) + uVar8 * 0x10);
      lVar6 = puVar2[1];
      uVar9 = *puVar2;
      param_1[1] = puVar2[1];
      *param_1 = uVar9;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a941524);
    (*pcVar5)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a941524; end: 10a941557;  */

undefined8 FUN_10a941524(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(long *)(param_2 + 0xb8) != *(long *)(param_2 + 0xc0)) {
    FUN_10a8fe904();
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 10a941558; end: 10a941683;  */

undefined8 * FUN_10a941558(undefined8 *param_1,long param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c2fa58;
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f80000000000000;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  FUN_10a941684();
  return param_1;
}



/* Entry: 10a941684; end: 10a941dcf;  */

void FUN_10a941684(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,code **param_6)

{
  code *pcVar1;
  int iVar2;
  code **ppcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code **ppcVar6;
  code **ppcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uStack_270;
  ulong uStack_268;
  byte bStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  code **ppcStack_210;
  code **ppcStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  code **ppcStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  code *pcStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = 0x10a951924;
  ppuStack_a8 = &PTR_DAT_110c30bd8;
  lStack_a0 = param_5;
  FUN_10a3982fc(param_6,&PTR_DAT_110c2fa90,&uStack_b0,0);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  uStack_f0 = 0x10a951954;
  ppuStack_e8 = &PTR_DAT_110c30bf0;
  lStack_e0 = param_5;
  FUN_10a02daf4(param_6,&PTR_DAT_110c2fab0,&uStack_f0,0);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  uStack_130 = 0x10a951984;
  ppuStack_128 = &PTR_DAT_110c30c08;
  lStack_120 = param_5;
  FUN_10a02daf4(param_6,&PTR_DAT_110c2fad0,&uStack_130,0);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  ppcVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c2faf0);
  if (((int)ppcVar7 == 0) ||
     (ppcVar7 = param_6, (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c2fb10),
     (int)ppcVar7 == 0)) {
    ppcVar7 = &pcStack_1b0;
    pcStack_1b0 = FUN_10a951a58;
    ppuStack_1a8 = &PTR_FUN_110c30c38;
    ppuVar5 = &pcStack_1b0;
    lStack_1a0 = param_5;
    FUN_10a02daf4(param_6,&PTR_DAT_110c2fb70,ppuVar5,0);
    (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
    func_0x000107c2b054(&pcStack_1d0,&UNK_10f683d5c);
    FUN_10a059fa0(param_5 + 0x60,&pcStack_1d0);
    if (lStack_1c0 < 0) {
      __ZdlPv(pcStack_1d0);
    }
  }
  else {
    ppuVar5 = (code **)0x0;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2fb10);
    iVar2 = (int)ppcVar7;
    FUN_10a2f4b48(param_5 + 0x48,(long)iVar2);
    func_0x000107c31930(param_5 + 0x60,(long)iVar2);
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c2faf0);
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar8);
        pcStack_170 = FUN_10a9519b4;
        ppuStack_168 = &PTR_FUN_110c30c20;
        lStack_160 = param_5;
        FUN_10a02daf4(param_6,&PTR_DAT_110c2fb30,&pcStack_170,0);
        (*(code *)*ppuStack_168)(&ppuStack_168);
        ppuVar5 = (undefined **)&UNK_10f683c80;
        (**(code **)(*param_6 + 0xa8))(&pcStack_1d0,param_6,&PTR_DAT_110c2fb50,&UNK_10f683c80,0);
        FUN_10a0b4ec0(param_5 + 0x60,&pcStack_1d0);
        (**(code **)(*param_6 + 0x220))(param_6);
        if (lStack_1c0 < 0) {
          __ZdlPv(pcStack_1d0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  ppuVar4 = &PTR_DAT_110c2fb90;
  ppcVar3 = param_6;
  (**(code **)(*param_6 + 0x200))();
  *(char *)(param_5 + 0x78) = (char)ppcVar3;
  ppcVar6 = param_6;
  if ((int)ppcVar3 != 0) {
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110c2fb90,0);
    *(int *)(param_5 + 0x80) = (int)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2fbb0,0);
    *(int *)(param_5 + 0x7c) = (int)ppcVar7;
    uVar9 = 0;
    (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110c2fbd0);
    *(undefined4 *)(param_5 + 0x84) = uVar9;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c2fbf0,0);
    *(char *)(param_5 + 0x88) = (char)ppcVar7;
    uVar9 = 0;
    (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110c30a40);
    *(undefined4 *)(param_5 + 0x8c) = uVar9;
    uVar9 = 0x3f800000;
    (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110c2fc10);
    *(undefined4 *)(param_5 + 0x90) = uVar9;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c30a60,0);
    *(char *)(param_5 + 0x94) = (char)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c2fc30,0);
    *(char *)(param_5 + 0x95) = (char)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c30a80,0);
    *(char *)(param_5 + 0x96) = (char)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c30aa0,0);
    *(char *)(param_5 + 0x97) = (char)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c2fc50,0);
    *(char *)(param_5 + 0x98) = (char)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110c30ac0,0);
    *(int *)(param_5 + 0x9c) = (int)ppcVar7;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2fc70,0);
    *(int *)(param_5 + 0xa0) = (int)ppcVar7;
    pcStack_1d0 = (code *)0x0;
    uStack_1c8._0_4_ = 0;
    (**(code **)(*param_6 + 0xf0))(param_6,&PTR_DAT_110c2fc90,&pcStack_1d0);
    *(undefined4 *)(param_5 + 0xa4) = uVar9;
    *(undefined4 *)(param_5 + 0xa8) = param_2;
    *(undefined4 *)(param_5 + 0xac) = param_3;
    pcStack_1d0 = (code *)0x0;
    uStack_1c8 = (ulong)uStack_1c8._4_4_ << 0x20;
    (**(code **)(*param_6 + 0xf0))(param_6,&PTR_DAT_110c2fcb0,&pcStack_1d0);
    *(undefined4 *)(param_5 + 0xb0) = uVar9;
    *(undefined4 *)(param_5 + 0xb4) = param_2;
    *(undefined4 *)(param_5 + 0xb8) = param_3;
    ppcVar7 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2fcd0,0);
    *(int *)(param_5 + 0xbc) = (int)ppcVar7;
    pcStack_1d0 = (code *)0x0;
    uStack_1c8 = 0;
    (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110c2fcf0,&pcStack_1d0);
    *(undefined4 *)(param_5 + 0xc0) = uVar9;
    *(undefined4 *)(param_5 + 0xc4) = param_2;
    *(undefined4 *)(param_5 + 200) = param_3;
    *(undefined4 *)(param_5 + 0xcc) = param_4;
    uVar9 = 0;
    (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110c2fd10);
    *(undefined4 *)(param_5 + 0xd0) = uVar9;
    pcStack_1e8 = (code *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    ppcVar7 = &pcStack_1e8;
    ppuVar5 = &pcStack_1e8;
    (**(code **)(*param_6 + 0x68))(&pcStack_1d0,param_6,&PTR_DAT_110c2fd30);
    func_0x000107c3193c(param_5 + 0xd8);
    *(long *)(param_5 + 0xe0) = uStack_1c8;
    *(code **)(param_5 + 0xd8) = pcStack_1d0;
    *(long *)(param_5 + 0xe8) = lStack_1c0;
    uStack_1c8 = 0;
    lStack_1c0 = 0;
    pcStack_1d0 = (code *)0x0;
    ppcStack_1b8 = &pcStack_1d0;
    FUN_10a0426d8(&ppcStack_1b8);
    ppcStack_1b8 = ppcVar7;
    FUN_10a0426d8(&ppcStack_1b8);
    ppcVar3 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c2fd50);
    if ((int)ppcVar3 != 0) {
      ppuVar5 = &PTR_DAT_110c2fd50;
      FUN_10a941dd0(&pcStack_1d0,param_6);
      ppcVar7 = (code **)(param_5 + 0xf0);
      if (*ppcVar7 != (code *)0x0) {
        *(code **)(param_5 + 0xf8) = *ppcVar7;
        __ZdlPv();
        *ppcVar7 = (code *)0x0;
        *(undefined8 *)(param_5 + 0xf8) = 0;
        *(undefined8 *)(param_5 + 0x100) = 0;
      }
      *(long *)(param_5 + 0xf8) = uStack_1c8;
      *(code **)(param_5 + 0xf0) = pcStack_1d0;
      *(long *)(param_5 + 0x100) = lStack_1c0;
    }
    ppuVar4 = &PTR_DAT_110c2fd70;
    ppcVar3 = param_6;
    (**(code **)(*param_6 + 0x200))();
    if ((int)ppcVar3 != 0) {
      ppuVar5 = &PTR_DAT_110c2fd70;
      FUN_10a941dd0(&pcStack_1d0);
      ppcVar6 = (code **)(param_5 + 0x108);
      ppcVar3 = *(code ***)(param_5 + 0x108);
      if (ppcVar3 != (code **)0x0) {
        *(code ***)(param_5 + 0x110) = ppcVar3;
        __ZdlPv();
        *ppcVar6 = (code *)0x0;
        *(undefined8 *)(param_5 + 0x110) = 0;
        *(undefined8 *)(param_5 + 0x118) = 0;
      }
      *(long *)(param_5 + 0x110) = uStack_1c8;
      *ppcVar6 = pcStack_1d0;
      *(long *)(param_5 + 0x118) = lStack_1c0;
      ppuVar4 = param_6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppcStack_1b8 = ppcVar7;
    FUN_10a0426d8(&ppcStack_1b8);
    ppcVar7 = ppcVar3;
    __Unwind_Resume();
    pcStack_1f8 = FUN_10a941dd0;
    ppcStack_210 = ppcVar6;
    ppcStack_208 = ppcVar3;
    puStack_200 = &stack0xfffffffffffffff0;
    (**(code **)(*ppuVar4 + 0x1d8))(&uStack_270,ppuVar4,ppuVar5);
    if (bStack_260 == 1) {
      if (uStack_268 == 0) {
        *ppcVar7 = (code *)0x0;
        ppcVar7[1] = (code *)0x0;
        ppcVar7[2] = (code *)0x0;
        return;
      }
      if (uStack_268 < 4 || (uStack_268 & 3) != 0) {
        FUN_109ffe064(auStack_258,*ppuVar5,ppuVar5[1]);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_240,&UNK_10f6854a8,auStack_258);
        FUN_10a012db0(auStack_228,auStack_240,&UNK_10f6854b4);
        FUN_10a0029c0(auStack_228);
      }
      else {
        FUN_109ffe1f4(ppcVar7,uStack_268 >> 2);
        if ((bStack_260 & 1) != 0) {
          _memcpy(*ppcVar7,uStack_270,uStack_268);
          return;
        }
      }
    }
    else {
      FUN_109ffe064(auStack_258,*ppuVar5,ppuVar5[1]);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_240,&UNK_10f6854a8,auStack_258);
      FUN_10a012db0(auStack_228,auStack_240,&UNK_10f63cc0e);
      FUN_10a0029c0(auStack_228);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a941ee0);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10a941dd0; end: 10a941f37;  */

void FUN_10a941dd0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,param_3);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if (uStack_78 < 4 || (uStack_78 & 3) != 0) {
      FUN_109ffe064(auStack_68,*param_3,param_3[1]);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,auStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_109ffe1f4(param_1,uStack_78 >> 2);
      if ((bStack_70 & 1) != 0) {
        _memcpy(*param_1,uStack_80,uStack_78);
        return;
      }
    }
  }
  else {
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a941ee0);
  (*pcVar1)();
}



/* Entry: 10a941f38; end: 10a942377;  */

void FUN_10a941f38(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_10a398908(param_2,&PTR_DAT_110c2fa90,param_1 + 0x18,&UNK_10f68f46c,0x11);
  FUN_10a02e230(param_2,&PTR_DAT_110c2fab0,param_1 + 0x28,&UNK_10f633eab,0xe);
  FUN_10a02e230(param_2,&PTR_DAT_110c2fad0,param_1 + 0x38,&UNK_10f633eab,0xe);
  (**(code **)(*param_2 + 0x40))
            (param_2,&PTR_DAT_110c2fb10,
             (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) >> 4);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c2faf0);
  if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
    lVar3 = 0;
    lVar4 = 0;
    uVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4) <= uVar5) {
LAB_10a942374:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a942378);
        (*pcVar1)();
      }
      FUN_10a02e230(param_2,&PTR_DAT_110c2fb30,*(long *)(param_1 + 0x48) + lVar3,&UNK_10f633eab,0xe)
      ;
      uVar2 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) * -0x5555555555555555;
      if (uVar2 < uVar5 || uVar2 - uVar5 == 0) goto LAB_10a942374;
      FUN_10a00d760(param_2,&PTR_DAT_110c2fb50,*(long *)(param_1 + 0x60) + lVar4);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + 0x10;
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4));
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  if ((((*(byte *)(param_1 + 0x78) & 1) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (0x177 < *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa20) + 0x18))) {
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c2fb90,*(undefined4 *)(param_1 + 0x80));
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2fbb0,*(undefined4 *)(param_1 + 0x7c));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x84),param_2,&PTR_DAT_110c2fbd0);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2fbf0,*(undefined1 *)(param_1 + 0x88));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x8c),param_2,&PTR_DAT_110c30a40);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x90),param_2,&PTR_DAT_110c2fc10);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c30a60,*(undefined1 *)(param_1 + 0x94));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2fc30,*(undefined1 *)(param_1 + 0x95));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c30a80,*(undefined1 *)(param_1 + 0x96));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c30aa0,*(undefined1 *)(param_1 + 0x97));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2fc50,*(undefined1 *)(param_1 + 0x98));
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c30ac0,*(undefined4 *)(param_1 + 0x9c));
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2fc70,*(undefined4 *)(param_1 + 0xa0));
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c2fc90,param_1 + 0xa4);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c2fcb0,param_1 + 0xb0);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2fcd0,*(undefined4 *)(param_1 + 0xbc));
    (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c2fcf0,param_1 + 0xc0);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xd0),param_2,&PTR_DAT_110c2fd10);
    (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c2fd30,param_1 + 0xd8);
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c2fd50,*(long *)(param_1 + 0xf0),
               *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010a942354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c2fd70,*(long *)(param_1 + 0x108),
               *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
    return;
  }
  return;
}



/* Entry: 10a942378; end: 10a9423d7;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a942378(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar6 = (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) * -0x5555555555555555;
  puVar2 = param_1;
  if (uVar6 < param_3 || uVar6 - param_3 == 0) {
    puVar3 = &UNK_10f683c80;
    puVar1 = puVar3;
    puVar4 = puVar3;
    func_0x000107c613d0();
    if ((undefined *)0x7ffffffffffffff7 < puVar1) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        puVar1 = (undefined *)0x1132ffc88;
        func_0x000107c60e48();
        if ((int)puVar1 != 0) {
          puVar2 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uVar7 = 0x1132ffc28;
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar2;
          puVar2[1] = 0x434948504152475f;
          *puVar2 = 0x45524f43534e454c;
          puVar2[3] = 0x525f595a414c5f54;
          puVar2[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar2 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar2 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar2 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          uVar8 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          auVar13._8_8_ = uVar7;
          auVar13._0_8_ = uVar8;
          return auVar13;
        }
      }
      auVar11._8_8_ = puVar4;
      auVar11._0_8_ = puVar1;
      return auVar11;
    }
    if (puVar1 < (undefined *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)puVar1;
      if (puVar1 == (undefined *)0x0) {
        *(undefined1 *)param_1 = 0;
        auVar10._8_8_ = puVar4;
        auVar10._0_8_ = param_1;
        return auVar10;
      }
    }
    else {
      puVar5 = (undefined8 *)0x19;
      if (((ulong)puVar1 | 7) != 0x17) {
        puVar5 = (undefined8 *)(((ulong)puVar1 | 7) + 1);
      }
      puVar2 = puVar5;
      func_0x000107c60e20();
      param_1[1] = puVar1;
      param_1[2] = (ulong)puVar5 | 0x8000000000000000;
      *param_1 = puVar2;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_2 + 0x60) + param_3 * 0x18);
    if (-1 < *(char *)((long)puVar5 + 0x17)) {
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      param_1[2] = puVar5[2];
      param_1[1] = uVar8;
      *param_1 = uVar7;
      auVar12._8_8_ = param_3;
      auVar12._0_8_ = param_2;
      return auVar12;
    }
    puVar3 = (undefined *)*puVar5;
    uVar6 = puVar5[1];
    if (0x16 < uVar6) {
      if (uVar6 < 0x7ffffffffffffff7) {
        puVar3 = (undefined *)0x19;
        if ((uVar6 | 7) != 0x17) {
          puVar3 = (undefined *)((uVar6 | 7) + 1);
        }
      }
      else {
        func_0x000104bd47d4();
      }
      puVar1 = puVar3;
      func_0x000107c60e20(puVar3);
      auVar9._8_8_ = puVar3;
      auVar9._0_8_ = puVar1;
      return auVar9;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar6;
    puVar1 = (undefined *)(uVar6 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar2,puVar3,puVar1);
  auVar14._8_8_ = puVar3;
  auVar14._0_8_ = puVar2;
  return auVar14;
}



/* Entry: 10a9423d8; end: 10a94258f;  */

void FUN_10a9423d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    lStack_50 = param_2[2];
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x230);
    lVar3 = *(long *)(lVar3 + 0x228);
    if (lVar4 != lVar3) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        if ((ulong)(lVar4 - lVar3 >> 4) <= uVar7) {
          FUN_10a00946c(&UNK_10f6921f0);
LAB_10a942564:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a942568);
          (*pcVar2)();
        }
        lVar3 = *(long *)(lVar3 + lVar6);
        if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10a33d730(lVar3,&uStack_60), (int)lVar4 != 0)) {
          FUN_10a33a6d4(lVar3,&uStack_60,param_3);
        }
        uVar7 = uVar7 + 1;
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x230);
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x228);
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < (ulong)(lVar4 - lVar3 >> 4));
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  plVar1 = *(long **)(param_1 + 0x50);
  do {
    if (plVar5 == plVar1) {
      if (lStack_50 < 0) {
        __ZdlPv(uStack_60);
      }
      return;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x230);
      lVar3 = *(long *)(lVar3 + 0x228);
      if (lVar4 != lVar3) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          if ((ulong)(lVar4 - lVar3 >> 4) <= uVar7) {
            FUN_10a00946c(&UNK_10f6921f0);
            goto LAB_10a942564;
          }
          lVar3 = *(long *)(lVar3 + lVar6);
          if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10a33d730(lVar3,&uStack_60), (int)lVar4 != 0)) {
            FUN_10a33a6d4(lVar3,&uStack_60,param_3);
          }
          uVar7 = uVar7 + 1;
          lVar4 = *(long *)(*plVar5 + 0x230);
          lVar3 = *(long *)(*plVar5 + 0x228);
          lVar6 = lVar6 + 0x10;
        } while (uVar7 < (ulong)(lVar4 - lVar3 >> 4));
      }
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



/* Entry: 10a942590; end: 10a942777;  */

void FUN_10a942590(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  int aiStack_50 [2];
  undefined8 *puStack_48;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
  }
  else {
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    lStack_60 = param_2[2];
  }
  uStack_58 = *param_3;
  func_0x0001098849a4(aiStack_50,uStack_58,param_3 + 1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x230);
    lVar3 = *(long *)(lVar3 + 0x228);
    if (lVar4 != lVar3) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        if ((ulong)(lVar4 - lVar3 >> 4) <= uVar7) {
          FUN_10a00946c(&UNK_10f6921f0);
LAB_10a942754:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a942758);
          (*pcVar2)();
        }
        lVar3 = *(long *)(lVar3 + lVar6);
        if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10a33d730(lVar3,&uStack_70), (int)lVar4 != 0)) {
          FUN_10a33b6d0(lVar3,&uStack_70,&uStack_58);
        }
        uVar7 = uVar7 + 1;
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x230);
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x228);
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < (ulong)(lVar4 - lVar3 >> 4));
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  plVar1 = *(long **)(param_1 + 0x50);
  do {
    if (plVar5 == plVar1) {
      if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
        (**(code **)*puStack_48)();
      }
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      return;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x230);
      lVar3 = *(long *)(lVar3 + 0x228);
      if (lVar4 != lVar3) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          if ((ulong)(lVar4 - lVar3 >> 4) <= uVar7) {
            FUN_10a00946c(&UNK_10f6921f0);
            goto LAB_10a942754;
          }
          lVar3 = *(long *)(lVar3 + lVar6);
          if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10a33d730(lVar3,&uStack_70), (int)lVar4 != 0)) {
            FUN_10a33b6d0(lVar3,&uStack_70,&uStack_58);
          }
          uVar7 = uVar7 + 1;
          lVar4 = *(long *)(*plVar5 + 0x230);
          lVar3 = *(long *)(*plVar5 + 0x228);
          lVar6 = lVar6 + 0x10;
        } while (uVar7 < (ulong)(lVar4 - lVar3 >> 4));
      }
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



/* Entry: 10a942778; end: 10a9427c7;  */

undefined8 * FUN_10a942778(undefined8 *param_1)

{
  if ((3 < *(int *)(param_1 + 4)) && ((undefined8 *)param_1[5] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a9427c8; end: 10a94296b;  */

undefined8 FUN_10a9427c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + 0x230);
    lVar5 = *(long *)(lVar5 + 0x228);
    if (lVar4 != lVar5) {
      lVar8 = 0;
      uVar10 = 0;
      do {
        uVar6 = lVar4 - lVar5 >> 4;
        if (uVar6 <= uVar10) {
          FUN_10a00946c(&UNK_10f6921f0);
LAB_10a942940:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a942944);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(lVar5 + lVar8);
        if (uVar3 != 0) {
          FUN_10a33d730(uVar3,&uStack_50);
          if ((uVar3 & 1) != 0) goto LAB_10a9428f0;
          lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x230);
          lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x228);
          uVar6 = lVar4 - lVar5 >> 4;
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar10 < uVar6);
    }
  }
  plVar1 = *(long **)(param_1 + 0x50);
  for (plVar9 = *(long **)(param_1 + 0x48); plVar9 != plVar1; plVar9 = plVar9 + 2) {
    lVar5 = *plVar9;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar5 + 0x230);
      lVar5 = *(long *)(lVar5 + 0x228);
      if (lVar4 != lVar5) {
        lVar8 = 0;
        uVar10 = 0;
        do {
          uVar6 = lVar4 - lVar5 >> 4;
          if (uVar6 <= uVar10) {
            FUN_10a00946c(&UNK_10f6921f0);
            goto LAB_10a942940;
          }
          uVar3 = *(ulong *)(lVar5 + lVar8);
          if (uVar3 != 0) {
            FUN_10a33d730(uVar3,&uStack_50);
            if ((uVar3 & 1) != 0) goto LAB_10a9428f0;
            lVar4 = *(long *)(*plVar9 + 0x230);
            lVar5 = *(long *)(*plVar9 + 0x228);
            uVar6 = lVar4 - lVar5 >> 4;
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar10 < uVar6);
      }
    }
  }
  uVar7 = 0;
LAB_10a9428fc:
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return uVar7;
LAB_10a9428f0:
  uVar7 = 1;
  goto LAB_10a9428fc;
}



/* Entry: 10a94296c; end: 10a942b5b;  */

void FUN_10a94296c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *(long *)(param_2 + 0x28);
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + 0x230);
    lVar5 = *(long *)(lVar5 + 0x228);
    if (lVar4 != lVar5) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        uVar6 = lVar4 - lVar5 >> 4;
        if (uVar6 <= uVar8) {
          FUN_10a00946c(&UNK_10f6921f0);
LAB_10a942b18:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a942b1c);
          (*pcVar3)();
        }
        if (*(long *)(lVar5 + lVar7) != 0) {
          FUN_10a33d868(&lStack_70);
          FUN_10a1869ec(param_1,param_1[1],lStack_70,lStack_68,
                        (lStack_68 - lStack_70 >> 3) * -0x5555555555555555);
          puStack_58 = (undefined1 *)&lStack_70;
          FUN_10a0426d8(&puStack_58);
          lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x230);
          lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x228);
          uVar6 = lVar4 - lVar5 >> 4;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar8 < uVar6);
    }
  }
  plVar1 = *(long **)(param_2 + 0x48);
  plVar2 = *(long **)(param_2 + 0x50);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar5 + 0x230);
      lVar5 = *(long *)(lVar5 + 0x228);
      if (lVar4 != lVar5) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          uVar6 = lVar4 - lVar5 >> 4;
          if (uVar6 <= uVar8) {
            FUN_10a00946c(&UNK_10f6921f0);
            goto LAB_10a942b18;
          }
          if (*(long *)(lVar5 + lVar7) != 0) {
            FUN_10a33d868(&lStack_70);
            FUN_10a1869ec(param_1,param_1[1],lStack_70,lStack_68,
                          (lStack_68 - lStack_70 >> 3) * -0x5555555555555555);
            puStack_58 = (undefined1 *)&lStack_70;
            FUN_10a0426d8(&puStack_58);
            lVar4 = *(long *)(*plVar1 + 0x230);
            lVar5 = *(long *)(*plVar1 + 0x228);
            uVar6 = lVar4 - lVar5 >> 4;
          }
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar8 < uVar6);
      }
    }
    plVar1 = plVar1 + 2;
  } while( true );
}



/* Entry: 10a942b5c; end: 10a942f1f;  */

undefined1  [16] FUN_10a942b5c(long *param_1,long param_2)

{
  undefined8 **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 *apuStack_d0 [7];
  undefined1 auStack_98 [8];
  undefined8 **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0x138;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110c2e6d8;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(puVar7 + 4) = 0;
  puVar7[5] = uVar10;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  *(undefined8 *)((long)puVar7 + 0x94) = 0;
  *(undefined8 *)((long)puVar7 + 0x99) = 0;
  *(undefined8 *)((long)puVar7 + 0xa4) = 0x3f80000000000000;
  *(undefined1 *)(puVar7 + 0x16) = 0;
  *(undefined4 *)((long)puVar7 + 0xac) = 0;
  *(undefined8 *)((long)puVar7 + 0xbc) = 0;
  *(undefined8 *)((long)puVar7 + 0xb4) = 0;
  *(undefined8 *)((long)puVar7 + 0xcc) = 0;
  *(undefined8 *)((long)puVar7 + 0xc4) = 0;
  *(undefined8 *)((long)puVar7 + 0xdc) = 0;
  *(undefined8 *)((long)puVar7 + 0xd4) = 0;
  *(undefined8 *)((long)puVar7 + 0xe4) = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x21] = 0;
  puVar7[0x20] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x25] = 0;
  puVar7[0x24] = 0;
  puVar7[0x26] = 0;
  puVar11 = puVar7 + 3;
  *puVar11 = &PTR_FUN_110c2fa58;
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar7;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  FUN_10a3975b4(puVar7 + 6,param_2 + 0x18);
  FUN_10a2f4b48(puVar7 + 0xc,*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4);
  puVar7 = *(undefined8 **)(param_2 + 0x48);
  puVar3 = *(undefined8 **)(param_2 + 0x50);
  if (puVar7 != puVar3) {
    do {
      FUN_10ab45900(auStack_98,*puVar7,1);
      func_0x00010a2f4be0(*param_1 + 0x48,auStack_98);
      FUN_10a044790(auStack_88);
      (*(code *)*apuStack_80[0])(apuStack_80);
      ppuVar8 = ppuStack_90;
      if (ppuStack_90 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_90 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_90)[2])(ppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar3);
    puVar11 = (undefined8 *)*param_1;
  }
  func_0x000107c31930(puVar11 + 0xc,
                      (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) *
                      -0x5555555555555555);
  lVar4 = *(long *)(param_2 + 0x68);
  lVar13 = *param_1;
  for (lVar12 = *(long *)(param_2 + 0x60); lVar12 != lVar4; lVar12 = lVar12 + 0x18) {
    FUN_10a0b4ec0(lVar13 + 0x60,lVar12);
  }
  *(undefined1 *)(lVar13 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  *(undefined8 *)(lVar13 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(lVar13 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined1 *)(lVar13 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(lVar13 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined4 *)(lVar13 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined1 *)(lVar13 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(lVar13 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  uVar10 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined4 *)(lVar13 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined8 *)(lVar13 + 0xa4) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(lVar13 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined8 *)(lVar13 + 0xb0) = uVar10;
  *(undefined4 *)(lVar13 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  uVar10 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar13 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(lVar13 + 0xc0) = uVar10;
  *(undefined4 *)(lVar13 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  if (lVar13 != param_2) {
    FUN_10a105cdc(lVar13 + 0xd8,*(long *)(param_2 + 0xd8),*(long *)(param_2 + 0xe0),
                  (*(long *)(param_2 + 0xe0) - *(long *)(param_2 + 0xd8) >> 3) * -0x5555555555555555
                 );
    FUN_10a0ea4a0(lVar13 + 0xf0,*(long *)(param_2 + 0xf0),*(long *)(param_2 + 0xf8),
                  *(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2);
    FUN_10a0ea4a0(lVar13 + 0x108,*(long *)(param_2 + 0x108),*(long *)(param_2 + 0x110),
                  *(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 2);
  }
  FUN_10ab45900(auStack_98,*(undefined8 *)(param_2 + 0x28),1);
  func_0x00010a015c50(lVar13 + 0x28,auStack_98);
  FUN_10ab45900(auStack_e8,*(undefined8 *)(param_2 + 0x38),1);
  puVar9 = auStack_e8;
  func_0x00010a015c50(lVar13 + 0x38,puVar9);
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  if (plStack_e0 != (long *)0x0) {
    plVar2 = plStack_e0 + 1;
    do {
      lVar12 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  FUN_10a044790(auStack_88);
  ppuVar8 = apuStack_80;
  (*(code *)*apuStack_80[0])(ppuVar8);
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar6) {
        *ppuVar1 = (undefined8 *)((long)puVar7 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      ppuVar8 = ppuStack_90;
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_90);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a015cb4(auStack_98);
    FUN_10a917538(ppuStack_90);
    __Unwind_Resume(ppuVar8);
    auVar15._8_8_ = 0xd;
    auVar15._0_8_ = &UNK_10f655470;
    return auVar15;
  }
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = ppuVar8;
  return auVar14;
}



/* Entry: 10a942f20; end: 10a942fa3;  */

undefined1  [16] FUN_10a942f20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f655470;
  return auVar1;
}



/* Entry: 10a942fa4; end: 10a943257;  */

void FUN_10a942fa4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
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
  
  FUN_10a003e74(param_1,&UNK_10f655470,0xd);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c30c50;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 7;
    puVar6 = *(undefined4 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 7;
    puVar6 = (undefined4 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 3) = 0x736e6f69;
  *puVar6 = 0x6974704f;
  *(undefined1 *)((long)puVar6 + 7) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f6850fc;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x140;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c30c50;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6850fc,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a951afc,1,1);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f683d7b,FUN_10a951d40,FUN_10a951df8);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f56e9c3,FUN_10a951f40,FUN_10a951ffc);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f683d6d,FUN_10a9520ec,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined4 *)(param_1 + 0x1b8),&UNK_10f6850fc,7);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a943258);
  (*pcVar4)();
}



/* Entry: 10a943258; end: 10a94358f;  */

void FUN_10a943258(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f655470,0xd);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c30548;
  pppuVar2 = (undefined8 ***)&UNK_10f683c80;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c30548;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a943570;
    FUN_10a054dac(param_1,&DAT_10f683d8e,FUN_10a9521a4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a943570;
    FUN_10a054dac(param_1,&DAT_10f5497cc,FUN_10a952488,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a943570;
    FUN_10a054dac(param_1,&UNK_10f683d9d,FUN_10a9525ac,1,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f655470,0xd);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f655470;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f683c80;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f683c80;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a943570;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a95495c,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a943570:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a943574);
  (*pcVar6)();
}



/* Entry: 10a943590; end: 10a9439cf;  */

void FUN_10a943590(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plStack_a8;
  long *aplStack_a0 [4];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (*(uint *)(param_1 + 0x68) < *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x850) + 0x30))) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x268);
    puVar6 = (undefined8 *)0x1;
    plVar4 = plVar9;
    FUN_10a088744();
    iStack_58 = (int)plVar4;
    if (puVar6 == (undefined8 *)0x0) {
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = (long *)puVar6[1];
      uStack_50 = *puVar6;
      if (puVar6[1] != 0) {
        plVar4 = (long *)(puVar6[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (iStack_58 == 2) {
      if (((*(byte *)(param_1 + 0x60) & 1) == 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
        plVar4 = (long *)0xb0;
        __Znwm();
        plVar5 = plVar4 + 1;
        plVar4[2] = 0;
        *plVar5 = 0x200000006;
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
        *plVar4 = (long)&PTR_FUN_110c30af0;
        *(undefined1 *)(plVar4 + 0x13) = 0;
        *(undefined1 *)(plVar4 + 0x15) = 0;
        *(long **)(param_1 + 0x58) = plVar4;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined1 *)(param_1 + 0x60) = 1;
        if (plVar4 != (long *)0x0) {
          plVar5 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 0x200000000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar5 = (long *)0x60;
        plStack_a8 = plVar4;
        aplStack_a0[0] = plVar4;
        plStack_78 = plVar4;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        plStack_68 = plVar5 + 3;
        *plStack_68 = (long)FUN_10a954bdc;
        *plVar5 = (long)&PTR_DAT_110b9f5b8;
        plVar5[4] = (long)&PTR_FUN_110c30d28;
        plVar5[5] = (long)plStack_78;
        *(undefined1 *)(plVar5 + 0xb) = 1;
        plStack_80 = aplStack_a0[0];
        if (aplStack_a0[0] != (long *)0x0) {
          plVar4 = aplStack_a0[0] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 0x200000000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar4 = (long *)0x60;
        plStack_60 = plVar5;
        __Znwm();
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_DAT_110b9fc20;
        plStack_78 = plVar4 + 3;
        *plStack_78 = (long)FUN_10a954cc0;
        plVar4[4] = (long)&PTR_FUN_110c30d48;
        plVar4[5] = (long)plStack_80;
        *(undefined1 *)(plVar4 + 0xb) = 1;
        plStack_70 = plVar4;
        FUN_10ab6c598(*(undefined8 *)(param_1 + 0x40),&plStack_68,&plStack_78,2,1);
        plVar4 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar5 = plStack_70 + 1;
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
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar5 = plStack_60 + 1;
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
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        if (aplStack_a0[0] != (long *)0x0) {
          func_0x0001092b4274(aplStack_a0);
        }
        if (plStack_a8 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_a8 + 1);
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
              (**(code **)(*plStack_a8 + 8))();
            }
          }
        }
      }
      plVar4 = *(long **)(param_1 + 0x50);
      (**(code **)(*plVar9 + 0x90))(&plStack_a8,plVar9);
      (**(code **)(*plVar4 + 0x10))(plVar4,&uStack_50,&plStack_a8);
      if (((ulong)plVar4 & 1) == 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f683e3c,&UNK_10f683e82,0x4c,&UNK_10f683ef1);
        }
        plVar4 = *(long **)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f683e3c,&UNK_10f683e82,0x34,&UNK_10f683eba);
    }
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar9 = plStack_48 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a9439d0; end: 10a943a43;  */

long * FUN_10a9439d0(long *param_1)

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



/* Entry: 10a943a44; end: 10a943a4b;  */

void FUN_10a943a44(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plStack_a8;
  long *aplStack_a0 [4];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (*(uint *)(param_1 + 0x50) < *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x850) + 0x30))) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x268);
    puVar6 = (undefined8 *)0x1;
    plVar4 = plVar9;
    FUN_10a088744();
    iStack_58 = (int)plVar4;
    if (puVar6 == (undefined8 *)0x0) {
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = (long *)puVar6[1];
      uStack_50 = *puVar6;
      if (puVar6[1] != 0) {
        plVar4 = (long *)(puVar6[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (iStack_58 == 2) {
      if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
        plVar4 = (long *)0xb0;
        __Znwm();
        plVar5 = plVar4 + 1;
        plVar4[2] = 0;
        *plVar5 = 0x200000006;
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
        *plVar4 = (long)&PTR_FUN_110c30af0;
        *(undefined1 *)(plVar4 + 0x13) = 0;
        *(undefined1 *)(plVar4 + 0x15) = 0;
        *(long **)(param_1 + 0x40) = plVar4;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined1 *)(param_1 + 0x48) = 1;
        if (plVar4 != (long *)0x0) {
          plVar5 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 0x200000000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar5 = (long *)0x60;
        plStack_a8 = plVar4;
        aplStack_a0[0] = plVar4;
        plStack_78 = plVar4;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        plStack_68 = plVar5 + 3;
        *plStack_68 = (long)FUN_10a954bdc;
        *plVar5 = (long)&PTR_DAT_110b9f5b8;
        plVar5[4] = (long)&PTR_FUN_110c30d28;
        plVar5[5] = (long)plStack_78;
        *(undefined1 *)(plVar5 + 0xb) = 1;
        plStack_80 = aplStack_a0[0];
        if (aplStack_a0[0] != (long *)0x0) {
          plVar4 = aplStack_a0[0] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 0x200000000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar4 = (long *)0x60;
        plStack_60 = plVar5;
        __Znwm();
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_DAT_110b9fc20;
        plStack_78 = plVar4 + 3;
        *plStack_78 = (long)FUN_10a954cc0;
        plVar4[4] = (long)&PTR_FUN_110c30d48;
        plVar4[5] = (long)plStack_80;
        *(undefined1 *)(plVar4 + 0xb) = 1;
        plStack_70 = plVar4;
        FUN_10ab6c598(*(undefined8 *)(param_1 + 0x28),&plStack_68,&plStack_78,2,1);
        plVar4 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar5 = plStack_70 + 1;
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
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar5 = plStack_60 + 1;
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
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        if (aplStack_a0[0] != (long *)0x0) {
          func_0x0001092b4274(aplStack_a0);
        }
        if (plStack_a8 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_a8 + 1);
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
              (**(code **)(*plStack_a8 + 8))();
            }
          }
        }
      }
      plVar4 = *(long **)(param_1 + 0x38);
      (**(code **)(*plVar9 + 0x90))(&plStack_a8,plVar9);
      (**(code **)(*plVar4 + 0x10))(plVar4,&uStack_50,&plStack_a8);
      if (((ulong)plVar4 & 1) == 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f683e3c,&UNK_10f683e82,0x4c,&UNK_10f683ef1);
        }
        plVar4 = *(long **)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f683e3c,&UNK_10f683e82,0x34,&UNK_10f683eba);
    }
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar9 = plStack_48 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a943a4c; end: 10a944103;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a943a4c(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  byte bStack_98;
  long *plStack_90;
  long lStack_80;
  long *plStack_78;
  long alStack_70 [2];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  FUN_10a5ae930(*(undefined8 *)(param_2 + 0x28));
  if (*(long **)(param_2 + 0x50) == (long *)0x0) {
    FUN_10a00946c(&UNK_10f683f2f);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x50) + 0x30))(&uStack_b0);
    lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0x870);
    lVar14 = *(long *)(lVar9 + 0x38);
    if (lVar14 == 0) {
      lVar14 = *(long *)(lVar9 + 0x28);
      plStack_78 = *(long **)(lVar9 + 0x30);
    }
    else {
      plStack_78 = *(long **)(lVar9 + 0x40);
    }
    if (plStack_78 != (long *)0x0) {
      plVar12 = plStack_78 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bVar3 = *(byte *)(param_2 + 0x60);
    if (bVar3 == 1) {
      plVar12 = *(long **)(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined1 *)(param_2 + 0x60) = 0;
    }
    else {
      plVar12 = (long *)0x0;
    }
    uVar15 = *(undefined8 *)(param_2 + 0x20);
    uVar16 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = 0;
    plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
    bStack_98 = bVar3 != 0;
    plVar13 = plVar12;
    if ((bool)bStack_98) {
      plVar13 = (long *)0x0;
      plStack_a0 = plVar12;
    }
    plStack_90 = (long *)uStack_b0;
    puVar8 = (undefined8 *)0x90;
    uStack_b0 = uVar15;
    plStack_a8 = (long *)uVar16;
    lStack_80 = lVar14;
    __Znwm();
    *puVar8 = FUN_10a962f74;
    puVar8[1] = FUN_10a96328c;
    FUN_10a94ef58(puVar8 + 2);
    plVar12 = plStack_90;
    lVar9 = puVar8[7];
    if (lVar9 == 0) {
      *param_1 = 0;
      puVar8[10] = uVar16;
      puVar8[9] = uVar15;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      *(undefined1 *)(puVar8 + 0xc) = 0;
      bVar6 = bVar3;
    }
    else {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *param_1 = lVar9;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      puVar8[10] = plStack_a8;
      puVar8[9] = uStack_b0;
      *(undefined1 *)(puVar8 + 0xc) = 0;
      bVar6 = bStack_98 & 1;
    }
    if (bVar6 != 0) {
      puVar8[0xb] = plStack_a0;
      plStack_a0 = (long *)0x0;
      *(undefined1 *)(puVar8 + 0xc) = 1;
    }
    plStack_a8 = (long *)0x0;
    plStack_90 = (long *)0x0;
    puVar8[0xd] = plVar12;
    puVar8[0xe] = lVar14;
    *(undefined1 *)(puVar8 + 0xf) = 0;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    alStack_70[0] = 0;
    FUN_109d18960(puVar8 + 2,lVar14,alStack_70);
    if (alStack_70[0] == 0) {
      if ((*(byte *)(puVar8 + 0xf) & 1) == 0) {
        puStack_58 = (undefined8 *)puVar8[0xe];
        alStack_70[1] = 0;
        puStack_60 = puVar8;
        (**(code **)*puStack_58)(puStack_58,alStack_70 + 1);
        __ZNSt13exception_ptrD1Ev(alStack_70);
LAB_10a943e44:
        if (plStack_90 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_90 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plStack_90 + 8))();
            }
          }
        }
        if ((bStack_98 == 1) && (plStack_a0 != (long *)0x0)) {
          puVar2 = (ulong *)(plStack_a0 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plStack_a0 + 8))();
            }
          }
        }
        if (plStack_a8 != (long *)0x0) {
          (**(code **)(*plStack_a8 + 8))();
        }
        if ((bVar3 != 0) && (plVar13 != (long *)0x0)) {
          puVar2 = (ulong *)(plVar13 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
        plVar12 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar13 = plStack_78 + 1;
          do {
            lVar14 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        return;
      }
      __ZNSt13exception_ptrD1Ev(alStack_70);
      FUN_10a94ea80(puVar8 + 0x10,puVar8 + 9);
      puVar8[0xe] = puVar8[0x10];
      plVar12 = (long *)(puVar8[0x10] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x11) = 1;
        lVar14 = puVar8[0xe];
        plVar12 = (long *)(lVar14 + 0x10);
        puVar10 = (undefined8 *)puVar8[3];
        do {
          lVar9 = *plVar12;
          if (lVar9 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              alStack_70[1] = 0;
              puStack_60 = puVar8;
              puStack_58 = puVar10;
              func_0x000109d1b588(lVar14 + 0x18,alStack_70 + 1);
              *(undefined8 *)(lVar14 + 0x10) = 0;
              goto LAB_10a943e44;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar9 >> 1 & 1) == 0);
      }
      lVar14 = puVar8[0xe];
      if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
        if ((*(byte *)(lVar14 + 0xa8) & 1) != 0) {
          func_0x00010a94e9c0(puVar8 + 2,lVar14 + 0x98);
          plVar12 = (long *)puVar8[0xe];
          if (plVar12 != (long *)0x0) {
            puVar2 = (ulong *)(plVar12 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          plVar12 = (long *)puVar8[0x10];
          if (plVar12 != (long *)0x0) {
            puVar2 = (ulong *)(plVar12 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          plVar12 = (long *)puVar8[0xd];
          if (plVar12 != (long *)0x0) {
            puVar2 = (ulong *)(plVar12 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((*(char *)(puVar8 + 0xc) == '\x01') &&
             (plVar12 = (long *)puVar8[0xb], plVar12 != (long *)0x0)) {
            puVar2 = (ulong *)(plVar12 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          plVar12 = (long *)puVar8[10];
          puVar8[10] = 0;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 8))();
          }
          func_0x000109d1a1d0(puVar8 + 2);
          __ZdlPv(puVar8);
          goto LAB_10a943e44;
        }
      }
      else {
        func_0x0001092af97c(lVar14 + 0x90);
      }
      goto LAB_10a943fb4;
    }
  }
  func_0x0001092af97c(alStack_70);
LAB_10a943fb4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a943fb8);
  (*pcVar7)();
}


