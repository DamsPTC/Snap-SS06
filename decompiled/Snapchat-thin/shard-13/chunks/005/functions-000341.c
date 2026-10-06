/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a71da78; end: 10a71db27;  */

void FUN_10a71da78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,FUN_10a6f0854,0,param_3,param_5);
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



/* Entry: 10a71db28; end: 10a71dbd7;  */

void FUN_10a71db28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,0x10a6ef7e0,0,param_3,param_5);
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



/* Entry: 10a71dbd8; end: 10a71dcb7;  */

void FUN_10a71dbd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
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
  FUN_10a71d800(param_2,param_3);
  iVar3 = (int)param_2;
  FUN_10a052e3c(param_5);
  iVar4 = iVar3;
  FUN_10a6eefd8();
  if (iVar4 < 0) {
    dVar17 = 0.0;
  }
  else {
    FUN_10a6eefd8();
    uVar7 = 1;
    if (1000 < iVar3) {
      uVar7 = 2;
    }
    dVar17 = (double)uVar7;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar17;
  plVar1 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar1[lVar8 + 2];
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
  lVar8 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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



/* Entry: 10a71dcb8; end: 10a71dd77;  */

void FUN_10a71dcb8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
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
  FUN_10a71d800(param_2,param_3);
  iVar3 = (int)param_2;
  FUN_10a052e3c(param_5);
  FUN_10a6eefd8();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar3;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a71dd78; end: 10a71de33;  */

void FUN_10a71dd78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d800(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x3d4);
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



/* Entry: 10a71de34; end: 10a71df07;  */

void FUN_10a71de34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d800(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[0x50];
  lStack_50 = plVar2[0x4f];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a71df08; end: 10a71dfd3;  */

void FUN_10a71df08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10a71dfd4(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar6 = *param_2;
  *(int *)(plVar4 + 0x50) = (int)param_2[1];
  plVar4[0x4f] = lVar6;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar5 = lVar6 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a71dfd4; end: 10a71e03b;  */

void FUN_10a71dfd4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long *plVar10;
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
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
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
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar10 = plVar7;
  FUN_10a71d800(plVar7,param_2);
  FUN_10a052e3c(param_4);
  plVar10 = (long *)plVar10[0x52];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a080b34(extraout_x8,plVar7,&stack0xffffffffffffff90);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar7 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar9 = lVar12 - 1;
  plVar8[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar12 + 2];
    if (plVar8[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar9) {
      return;
    }
  }
  lVar12 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar12 = lVar12 + uVar9 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar9;
  return;
}



/* Entry: 10a71e03c; end: 10a71e157;  */

void FUN_10a71e03c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d800(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar8 = (long *)plVar8[0x52];
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



/* Entry: 10a71e158; end: 10a71e273;  */

void FUN_10a71e158(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71dfd4(param_2,param_3);
  FUN_10a080bb8(param_5);
  FUN_10a079938(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a6eecc4(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a71e274; end: 10a71e32f;  */

void FUN_10a71e274(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d800(param_2,param_3);
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



/* Entry: 10a71e330; end: 10a71e3ef;  */

void FUN_10a71e330(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71dfd4(param_2,param_3);
  FUN_10a71e3f0(param_5);
  func_0x00010a137904(param_2,param_4);
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



/* Entry: 10a71e3f0; end: 10a71e413;  */

void FUN_10a71e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  code *extraout_x9;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar6 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&lStack_80,*ppuVar8);
  plVar1 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  func_0x000109899de4(extraout_x8,plVar6,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
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
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&lStack_98);
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
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a71e414; end: 10a71e577;  */

void FUN_10a71e414(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x9;
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
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&lStack_70,*ppuVar8);
  plVar2 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar2[lVar11 + 2];
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
  lVar11 = *plVar2;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar6 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar2 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a71e578; end: 10a71e5cf;  */

long FUN_10a71e578(long param_1)

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



/* Entry: 10a71e5d0; end: 10a71e5eb;  */

void FUN_10a71e5d0(void)

{
  return;
}



/* Entry: 10a71e5ec; end: 10a71e86b;  */

void FUN_10a71e5ec(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
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
  FUN_10a71e86c(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    plVar7 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar7 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a71e840:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a71e844);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    if ((in_stack_ffffffffffffffb0 == 0) ||
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c23300,0),
       in_stack_ffffffffffffffb0 == 0)) {
      puVar10 = (undefined8 *)&stack0xffffffffffffffa0;
    }
    else {
      puVar10 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar7 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a71e840;
    }
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&lStack_70,*ppuVar8,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa0,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar9 = lVar12 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar12 + 2];
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
  lVar12 = *plVar7;
  lVar15 = plVar6[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar7 = lVar14;
          plVar6[0x4c] = lVar15 + uVar18 * 0x10;
          plVar6[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar16;
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar6[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar12 = lVar12 + uVar9 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar6[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a71e86c; end: 10a71e88f;  */

void FUN_10a71e86c(undefined8 param_1)

{
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  return;
}



/* Entry: 10a71e890; end: 10a71e8db;  */

void FUN_10a71e890(void)

{
  return;
}



/* Entry: 10a71e8dc; end: 10a71e8ef;  */

void FUN_10a71e8dc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71e8f0; end: 10a71e90b;  */

void FUN_10a71e8f0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a71e90c; end: 10a71e947;  */

long FUN_10a71e90c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a71e948; end: 10a71e94b;  */

void FUN_10a71e948(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71e94c; end: 10a71e9a3;  */

long FUN_10a71e94c(long param_1)

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



/* Entry: 10a71e9a4; end: 10a71ec9f;  */

void FUN_10a71e9a4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar5 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_2 + 0x18), lStack_40 != 0)) {
    if (lVar5 == 0) {
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = *(long **)(lVar5 + 0xe8);
      lStack_50 = *(long *)(lVar5 + 0xe0);
      if (*(long *)(lVar5 + 0xe8) != 0) {
        plVar4 = (long *)(*(long *)(lVar5 + 0xe8) + 8);
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
    func_0x00010a23175c((long *)(lVar6 + 0x378),&lStack_50);
    plVar4 = plStack_48;
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
    if (*(long *)(lVar6 + 0x378) != 0) {
      *(undefined1 *)(lVar6 + 0x2e2) = 1;
      FUN_10a6e9fe4(*(undefined8 *)(lVar6 + 0x388),param_2 + 0x28);
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66f567,&UNK_10f671c5f,0x69,&UNK_10f671d06,in_x6,in_x7,
                          *(undefined1 *)(lVar6 + 0x2e2));
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x170) + 0x960);
    plVar4 = *(long **)(lVar6 + 0x240);
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar6 = *(long *)(lVar6 + 0x238);
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
      if (lVar6 != 0) goto LAB_10a71ebe4;
    }
    lStack_50 = *(long *)(lStack_40 + 600);
    plVar4 = *(long **)(lStack_40 + 0x260);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_48 = plVar4;
    if (lStack_50 != 0) {
      FUN_10a07e58c();
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = *(long *)(lStack_40 + 0x218);
    plVar4 = *(long **)(lStack_40 + 0x220);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar6 != 0) {
      FUN_10a07e58c();
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
LAB_10a71ebe4:
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
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a71eca0; end: 10a71ecdf;  */

void FUN_10a71eca0(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a71ece0; end: 10a71ed1b;  */

void FUN_10a71ece0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c142c0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a71ed1c; end: 10a71edaf;  */

void FUN_10a71ed1c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c142c0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  if (*(char *)(param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  return;
}



/* Entry: 10a71edb0; end: 10a71efe3;  */

void FUN_10a71edb0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_38;
  
  lVar7 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if ((plVar4 != (long *)0x0) && (lVar5 = *(long *)(param_2 + 0x18), lVar5 != 0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar4 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar4 = param_1;
        }
        func_0x00010ae06f08(0,1,&UNK_10f66f567,&UNK_10f671d3d,0x75,&UNK_10f671dc9,in_x6,in_x7,plVar4
                           );
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x170) + 0x960);
      plVar4 = *(long **)(lVar7 + 0x240);
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        lVar7 = *(long *)(lVar7 + 0x238);
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
        if (lVar7 != 0) goto LAB_10a71ef58;
      }
      lVar7 = *(long *)(lVar5 + 0x228);
      plVar4 = *(long **)(lVar5 + 0x230);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (lVar7 != 0) {
        FUN_10a07e58c();
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      lVar7 = *(long *)(lVar5 + 0x268);
      plVar4 = *(long **)(lVar5 + 0x270);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (lVar7 != 0) {
        FUN_10a07e58c();
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
LAB_10a71ef58:
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a71efe4; end: 10a71f05f;  */

void FUN_10a71efe4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a71f060; end: 10a71f07f;  */

void FUN_10a71f060(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c14310;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71f080; end: 10a71f09f;  */

void FUN_10a71f080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71f0a0; end: 10a71f0bf;  */

void FUN_10a71f0a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c14360;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71f0c0; end: 10a71f0cf;  */

void FUN_10a71f0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71f0d0; end: 10a71f147;  */

undefined1 * FUN_10a71f0d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x40] == '\x01') {
    *param_1 = *param_2;
    FUN_10a2319d4(param_1 + 8);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    func_0x00010a20a7e0(param_1 + 0x20,param_2 + 0x20);
  }
  else {
    FUN_10a231968(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10a71f148; end: 10a71f243;  */

undefined1  [16] FUN_10a71f148(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c13200;
  puVar1 = &UNK_10f66de00;
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
    ppuStack_40 = &PTR_DAT_110c13200;
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



/* Entry: 10a71f244; end: 10a71f297;  */

ulong FUN_10a71f244(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a71f298,0);
  }
  return param_1;
}



/* Entry: 10a71f298; end: 10a71f3b3;  */

void FUN_10a71f298(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar16;
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
  FUN_10a71f3b4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[5];
  if (plVar6[5] != 0) {
    plVar6 = (long *)(plVar6[5] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
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



/* Entry: 10a71f3b4; end: 10a71f46f;  */

undefined ** FUN_10a71f3b4(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a71f470,0);
  }
  return ppuVar1;
}



/* Entry: 10a71f470; end: 10a71f56b;  */

void FUN_10a71f470(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71f3b4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_50 = 0x7f7fffff7f7fffff;
  if (((char)plVar2[3] == '\0') && (*(char *)((long)plVar2 + 0x3c) == '\x01')) {
    lStack_50 = plVar2[6];
    uStack_48 = (undefined4)plVar2[7];
  }
  else {
    uStack_48 = 0x7f7fffff;
  }
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a71f56c; end: 10a71f627;  */

void FUN_10a71f56c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f671303,6);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a71f628);
  (*pcVar4)();
}



/* Entry: 10a71f628; end: 10a71f74b;  */

void FUN_10a71f628(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
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
  FUN_10a71f74c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a6f2978(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
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



/* Entry: 10a71f74c; end: 10a71f7b3;  */

void FUN_10a71f74c(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

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
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c14c08;
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
  FUN_10a08001c(plVar6,param_2);
  FUN_10a61e1ec(param_4);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_3);
  plVar10 = plVar6;
  func_0x000109898518(plVar6,param_3 + 2);
  plVar11 = plVar6;
  func_0x000109898518(plVar6,param_3 + 4);
  FUN_10a6f3254(&stack0xffffffffffffff80,plVar8,plVar9,plVar10,plVar11);
  FUN_10a080b34(extraout_x8,plVar6,&stack0xffffffffffffff80);
  if (in_stack_ffffffffffffff88 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff88 + 1;
    do {
      lVar14 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*in_stack_ffffffffffffff88 + 0x10))(in_stack_ffffffffffffff88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff88);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar14 = plVar7[0x59];
  uVar12 = lVar14 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar14 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  lVar14 = *plVar6;
  lVar17 = plVar7[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar20 = uVar12 - uVar19;
    lVar18 = plVar7[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar14 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar4 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar4 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar6 = lVar16;
          plVar7[0x4c] = lVar17 + uVar20 * 0x10;
          plVar7[0x4d] = lVar4 + uVar13 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar18;
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
    _bzero(lVar17,uVar20 * 0x10);
    plVar7[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar14 = lVar14 + uVar12 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar7[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a71f7b4; end: 10a71f8fb;  */

void FUN_10a71f7b4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a08001c(param_2,param_3);
  FUN_10a61e1ec(param_5);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4);
  plVar8 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a6f3254(&stack0xffffffffffffffa0,plVar6,plVar7,plVar8,plVar9);
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar10 = lVar12 - 1;
  plVar5[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar15 = plVar5[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar5[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar16;
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar5[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar10;
  return;
}



/* Entry: 10a71f8fc; end: 10a71fa5b;  */

void FUN_10a71f8fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long ***ppplVar8;
  long lVar9;
  ulong uVar10;
  long ***ppplVar11;
  long lVar12;
  long ***ppplVar13;
  long **pplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long lStack_70;
  long ***ppplStack_68;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a71f74c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar7[0x1c] == '\x05') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&ppplStack_68,plVar7 + 0x1d,6,0xffffffffffffffff,&stack0xffffffffffffffbf);
    pppplVar3 = (long ****)ppplStack_68;
    if (-1 < (long)in_stack_ffffffffffffffa8) {
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
      pppplVar3 = &ppplStack_68;
    }
    (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,pppplVar3,in_stack_ffffffffffffffa0);
    *param_1 = 6;
    if ((long)in_stack_ffffffffffffffa8 < 0) {
      __ZdlPv(ppplStack_68);
    }
  }
  else {
    *param_1 = 1;
  }
  pppplVar3 = (long ****)(plVar6 + 0x4b);
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    ppplVar8 = pppplVar3[lVar9 + 2];
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  else {
    ppplVar8 = *(long ****)(plVar6[0x57] + -8);
    plVar6[0x57] = (long)(plVar6[0x57] + -8);
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  ppplVar2 = *pppplVar3;
  ppplVar11 = (long ***)plVar6[0x4c];
  lVar9 = (long)ppplVar11 - (long)ppplVar2;
  ppplVar13 = (long ***)(lVar9 >> 4);
  if (ppplVar13 < ppplVar8) {
    uVar10 = (long)ppplVar8 - (long)ppplVar13;
    lVar12 = plVar6[0x4d];
    if ((ulong)(lVar12 - (long)ppplVar11 >> 4) < uVar10) {
      if ((ulong)ppplVar8 >> 0x3c == 0) {
        ppplVar11 = (long ***)(lVar12 - (long)ppplVar2 >> 3);
        if (ppplVar11 <= ppplVar8) {
          ppplVar11 = ppplVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - (long)ppplVar2)) {
          ppplVar11 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar3;
        if ((ulong)ppplVar11 >> 0x3c == 0) {
          lVar5 = (long)ppplVar11 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar10 * 0x10);
          ppplVar13 = (long ***)(lVar1 + (long)ppplVar13 * -0x10);
          _memcpy(ppplVar13,ppplVar2,lVar9);
          *pppplVar3 = ppplVar13;
          plVar6[0x4c] = lVar1 + uVar10 * 0x10;
          plVar6[0x4d] = lVar5 + (long)ppplVar11 * 0x10;
          pplStack_88 = (long **)ppplVar2;
          pplStack_80 = (long **)ppplVar2;
          pplStack_78 = (long **)ppplVar2;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&pplStack_88);
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
    _bzero(ppplVar11,uVar10 * 0x10);
    plVar6[0x4c] = (long)(ppplVar11 + uVar10 * 2);
  }
  else if (ppplVar8 < ppplVar13) {
    while (ppplVar11 != ppplVar2 + (long)ppplVar8 * 2) {
      ppplVar11 = ppplVar11 + -2;
      func_0x00010988c204(ppplVar11);
    }
    plVar6[0x4c] = (long)(ppplVar2 + (long)ppplVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = (long)ppplVar8;
  return;
}



/* Entry: 10a71fa5c; end: 10a71fb17;  */

void FUN_10a71fa5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71f74c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 0x1c));
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



/* Entry: 10a71fb18; end: 10a71fbd7;  */

void FUN_10a71fb18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a08001c(param_2,param_3);
  FUN_10a71fbd8(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)(plVar4 + 0x1c) = (char)param_2;
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



/* Entry: 10a71fbd8; end: 10a71fbfb;  */

void FUN_10a71fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10a71f74c(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  uVar9 = plVar6[0x1e];
  plVar1 = (long *)plVar6[0x1d];
  if (-1 < (char)*(byte *)((long)plVar6 + 0xff)) {
    uVar9 = (ulong)*(byte *)((long)plVar6 + 0xff);
    plVar1 = plVar6 + 0x1d;
  }
  (**(code **)(*plVar4 + 0x128))(extraout_x8 + 2,plVar4,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
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
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a71fbfc; end: 10a71fcdb;  */

void FUN_10a71fbfc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71f74c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x1e];
  plVar1 = (long *)plVar5[0x1d];
  if (-1 < (char)*(byte *)((long)plVar5 + 0xff)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0xff);
    plVar1 = plVar5 + 0x1d;
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



/* Entry: 10a71fcdc; end: 10a71fdd7;  */

void FUN_10a71fcdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
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
  FUN_10a08001c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 0x1d,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
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



/* Entry: 10a71fdd8; end: 10a71ff1f;  */

void FUN_10a71fdd8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&plStack_68,*ppuVar7,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a080b34(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10a71ff20; end: 10a71ff3b;  */

void FUN_10a71ff20(void)

{
  return;
}



/* Entry: 10a71ff3c; end: 10a7200fb;  */

void FUN_10a71ff3c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  code *extraout_x9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a7200fc(param_5);
  if ((*param_4 != 3) || (param_4[4] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7200e8);
    (*pcVar5)();
  }
  uVar16 = *(ulong *)(param_4 + 2);
  if (0x7fefffffffffffff < (uVar16 & 0x7fffffffffffffff)) {
    uVar16 = 0;
  }
  uVar17 = *(ulong *)(param_4 + 6);
  if (0x7fefffffffffffff < (uVar17 & 0x7fffffffffffffff)) {
    uVar17 = 0;
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(uVar16,uVar17);
  (*extraout_x9)(&lStack_70,*ppuVar8);
  plVar2 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar16 = lVar10 - 1;
  plVar7[0x59] = uVar16;
  if (uVar16 < 8) {
    uVar16 = plVar2[lVar10 + 2];
    if (plVar7[0x5a] == uVar16) {
      return;
    }
  }
  else {
    uVar16 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar16) {
      return;
    }
  }
  lVar10 = *plVar2;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar17 = lVar11 >> 4;
  if (uVar17 < uVar16) {
    uVar15 = uVar16 - uVar17;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar16 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar16) {
          uVar9 = uVar16;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar9 >> 0x3c == 0) {
          lVar6 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar6 + lVar11;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar17 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar2 = lVar12;
          plVar7[0x4c] = lVar13 + uVar15 * 0x10;
          plVar7[0x4d] = lVar6 + uVar9 * 0x10;
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar13,uVar15 * 0x10);
    plVar7[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar16 < uVar17) {
    lVar10 = lVar10 + uVar16 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar16;
  return;
}



/* Entry: 10a7200fc; end: 10a72011f;  */

void FUN_10a7200fc(undefined8 param_1)

{
  if ((int)param_1 == 2) {
    return;
  }
  FUN_10a052ee0(2,0,param_1);
  return;
}



/* Entry: 10a720120; end: 10a72013b;  */

void FUN_10a720120(void)

{
  return;
}



/* Entry: 10a72013c; end: 10a720287;  */

void FUN_10a72013c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x9;
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
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a720288(param_5);
  plVar6 = param_2;
  func_0x000109898518(param_2,param_4);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  func_0x000109898518(param_2,param_4 + 0x20);
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffa0,*ppuVar8,plVar6,plVar7);
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffa0);
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
  plVar6 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar9 = lVar11 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar5[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
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
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a720288; end: 10a7202ab;  */

void FUN_10a720288(undefined8 param_1)

{
  if ((int)param_1 == 3) {
    return;
  }
  FUN_10a052ee0(3,0,param_1);
  return;
}



/* Entry: 10a7202ac; end: 10a7202c7;  */

void FUN_10a7202ac(void)

{
  return;
}



/* Entry: 10a7202c8; end: 10a7203cf;  */

void FUN_10a7202c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a7203d0; end: 10a7203eb;  */

void FUN_10a7203d0(void)

{
  return;
}



/* Entry: 10a7203ec; end: 10a72044f;  */

long * FUN_10a7203ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a720450; end: 10a7204e7;  */

long * FUN_10a720450(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = &PTR_FUN_110c14410;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_1[1] = (long)puVar1;
  FUN_10a6ff650(param_1,param_2 + 0x28,param_2);
  return param_1;
}



/* Entry: 10a7204e8; end: 10a72055b;  */

void FUN_10a7204e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14410;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a72055c; end: 10a72059b;  */

void FUN_10a72055c(long param_1)

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



/* Entry: 10a72059c; end: 10a7205d7;  */

long FUN_10a72059c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c14450);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7205d8; end: 10a7205eb;  */

void FUN_10a7205d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7205ec; end: 10a72060b;  */

void FUN_10a7205ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c14470;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a72060c; end: 10a72061b;  */

void FUN_10a72060c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a720614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a72061c; end: 10a720863;  */

void FUN_10a72061c(long *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined1 auStack_68 [8];
  long *plStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar8 = *param_3;
  uVar3 = *param_4;
  uVar6 = 0x100;
  __Znwm(0x100);
  func_0x000107c2b054(auStack_58,param_5);
  FUN_10a6f27ec(uVar6,uVar8,uVar3,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  lVar7 = *param_2;
  plVar2 = (long *)param_2[1];
  lStack_88 = lVar7;
  plStack_80 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar2 + 2;
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
    } while (cVar4 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  lStack_78 = lVar7;
  plStack_70 = plVar2;
  FUN_10a720450(auStack_68,uVar6,&lStack_78);
  FUN_10a6ff4ac(param_1,auStack_68);
  if (plStack_60 != (long *)0x0) {
    plVar2 = plStack_60 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar2 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar7 = *param_2;
  if ((lVar7 != 0) && (lStack_98 = *param_1, lStack_98 != 0)) {
    plStack_90 = (long *)param_1[1];
    if (plStack_90 != (long *)0x0) {
      plVar2 = plStack_90 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10aa88c30(lVar7,&lStack_98);
    plVar2 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar1 = plStack_90 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10a720864; end: 10a7208fb;  */

void FUN_10a720864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a7208fc(auStack_38,&uStack_21,&uStack_39,param_2,param_3,param_4);
  FUN_10a6ff4ac(param_1,auStack_38);
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
  return;
}



/* Entry: 10a7208fc; end: 10a72097b;  */

void FUN_10a7208fc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x118;
  __Znwm();
  FUN_10a72097c();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
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



/* Entry: 10a72097c; end: 10a7209c3;  */

undefined8 * FUN_10a72097c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c14bc8;
  FUN_10a7209c4(param_1 + 3);
  return param_1;
}



/* Entry: 10a7209c4; end: 10a720a3b;  */

undefined8
FUN_10a7209c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *param_4;
  func_0x000107c2b054(auStack_38,param_5);
  FUN_10a6f27ec(param_1,0,uVar1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 10a720a3c; end: 10a720c83;  */

void FUN_10a720a3c(long *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined1 auStack_68 [8];
  long *plStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar8 = *param_3;
  uVar3 = *param_4;
  uVar6 = 0x100;
  __Znwm(0x100);
  func_0x000107c2b054(auStack_58,param_5);
  FUN_10a6f27ec(uVar6,uVar8,uVar3,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  lVar7 = *param_2;
  plVar2 = (long *)param_2[1];
  lStack_88 = lVar7;
  plStack_80 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar2 + 2;
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
    } while (cVar4 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  lStack_78 = lVar7;
  plStack_70 = plVar2;
  FUN_10a720450(auStack_68,uVar6,&lStack_78);
  FUN_10a6ff4ac(param_1,auStack_68);
  if (plStack_60 != (long *)0x0) {
    plVar2 = plStack_60 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar2 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar7 = *param_2;
  if ((lVar7 != 0) && (lStack_98 = *param_1, lStack_98 != 0)) {
    plStack_90 = (long *)param_1[1];
    if (plStack_90 != (long *)0x0) {
      plVar2 = plStack_90 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10aa88c30(lVar7,&lStack_98);
    plVar2 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar1 = plStack_90 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10a720c84; end: 10a720d1b;  */

void FUN_10a720c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a720d1c(auStack_38,&uStack_21,&uStack_39,param_2,param_3,param_4);
  FUN_10a6ff4ac(param_1,auStack_38);
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
  return;
}



/* Entry: 10a720d1c; end: 10a720d9b;  */

void FUN_10a720d1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x118;
  __Znwm();
  FUN_10a720d9c();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
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



/* Entry: 10a720d9c; end: 10a720de3;  */

undefined8 * FUN_10a720d9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c14bc8;
  FUN_10a720de4(param_1 + 3);
  return param_1;
}



/* Entry: 10a720de4; end: 10a720e5b;  */

undefined8
FUN_10a720de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *param_4;
  func_0x000107c2b054(auStack_38,param_5);
  FUN_10a6f27ec(param_1,0,uVar1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 10a720e5c; end: 10a7212df;  */

void FUN_10a720e5c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
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
  plVar6 = param_2;
  FUN_10a7212e0(param_2,param_3);
  FUN_10a721348(param_5);
  if (*param_4 == 1) {
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a721280:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a721284);
      (*pcVar3)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    if ((in_stack_ffffffffffffffb0 == 0) ||
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c23318,0),
       in_stack_ffffffffffffffb0 == 0)) {
      plVar14 = &lStack_80;
    }
    else {
      plVar14 = (long *)&stack0xffffffffffffffb0;
      lStack_80 = in_stack_ffffffffffffffb0;
      plStack_78 = in_stack_ffffffffffffffb8;
    }
    *plVar14 = 0;
    plVar14[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar14 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar12 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (lStack_80 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a721280;
    }
    if (plStack_78 != (long *)0x0) {
      plVar14 = plStack_78 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = *plVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  plVar14 = (long *)plVar6[0x3b];
  plVar6[0x3a] = lStack_80;
  plVar6[0x3b] = (long)plStack_78;
  if (plVar14 != (long *)0x0) {
    plVar7 = plVar14 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = (long *)0x60;
  __Znwm();
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&PTR_DAT_110c14ce0;
  plVar14[3] = (long)FUN_10a726314;
  plVar14[4] = (long)&PTR_FUN_110c146f0;
  plVar14[5] = (long)plVar6;
  *(undefined1 *)(plVar14 + 0xb) = 1;
  plVar7 = (long *)0x60;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c14d30;
  plVar7[3] = (long)FUN_10a72651c;
  plVar7[4] = (long)&PTR_FUN_110c14728;
  plVar7[5] = (long)plVar6;
  *(undefined1 *)(plVar7 + 0xb) = 1;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66ff88,0x235,&UNK_10f670022);
  }
  plVar8 = (long *)0x70;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_DAT_110c14818;
  plStack_70 = plVar8 + 3;
  *plStack_70 = (long)&PTR_DAT_110c16198;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[6] = 0;
  *(undefined1 *)(plVar8 + 8) = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xd] = 0;
  plStack_68 = plVar8;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    lVar12 = plVar6[0x44];
    if (lVar12 == 0) {
      pcVar10 = "null";
    }
    else {
      pcVar10 = *(char **)(lVar12 + 0x250);
      if (-1 < *(char *)(lVar12 + 0x267)) {
        pcVar10 = (char *)(lVar12 + 0x250);
      }
    }
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66ff88,0x239,&UNK_10f670060,param_8,param_9,
                        pcVar10);
  }
  func_0x00010a6fb6ec(plStack_70 + 3,plVar6 + 0x44);
  FUN_10aaeeae0(plVar6[0x3e],&plStack_70,&stack0xffffffffffffffb0,&stack0xffffffffffffffa0);
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar12 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar6 = plVar14 + 1;
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
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar14 = plStack_78 + 1;
    do {
      lVar12 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar9 = lVar12 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar12 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar16 = plVar5[0x4c];
  lVar13 = lVar16 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    plVar14 = (long *)plVar5[0x4d];
    if ((ulong)((long)plVar14 - lVar16 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = (long)plVar14 - lVar12 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar13;
          _bzero(lVar16,uVar18 * 0x10);
          lVar15 = lVar16 + uVar17 * -0x10;
          _memcpy(lVar15,lVar12,lVar13);
          *plVar6 = lVar15;
          plVar5[0x4c] = lVar16 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          plStack_78 = (long *)lVar12;
          plStack_70 = plVar14;
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
    _bzero(lVar16,uVar18 * 0x10);
    plVar5[0x4c] = lVar16 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar12 = lVar12 + uVar9 * 0x10;
    while (lVar16 != lVar12) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a7212e0; end: 10a721347;  */

/* WARNING: Removing unreachable block (ram,0x00010a721a80) */
/* WARNING: Removing unreachable block (ram,0x00010a72167c) */
/* WARNING: Removing unreachable block (ram,0x00010a721dac) */

void FUN_10a7212e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *extraout_x8;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  long *plVar23;
  long ***ppplVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  long ***ppplStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar20 = param_1;
  func_0x000109898688();
  if (lVar20 != 0) {
    FUN_10a053854(param_1,lVar20);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar7 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar7 == 1) {
    return;
  }
  plVar8 = (long *)0x1;
  uVar14 = 0;
  FUN_10a052ee0(1,0,puVar7);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar12 = plVar8;
  FUN_10a72274c(plVar8,uVar14);
  FUN_10a7227b4(param_4);
  FUN_10a079938(&lStack_140,plVar8,puVar7);
  FUN_10a059354(&uStack_150,plVar8,puVar7 + 0x10);
  FUN_10a059354(&uStack_160,plVar8,puVar7 + 0x20);
  plVar8 = plStack_138;
  lVar20 = lStack_140;
  lVar19 = plVar12[10];
  lStack_d8 = lStack_140;
  plStack_d0 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar17 = plStack_138 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar27 = plVar12[0x44];
  lVar28 = plVar12[0x45];
  if (lVar28 != 0) {
    plVar17 = (long *)(lVar28 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar10 = (undefined8 *)0xf8;
  lStack_e8 = lVar27;
  plStack_e0 = (long *)lVar28;
  __Znwm();
  *puVar10 = FUN_10a735bb8;
  puVar10[1] = FUN_10a735f44;
  plVar23 = puVar10 + 0xf;
  *plVar23 = lVar20;
  plVar15 = puVar10 + 0x11;
  *plVar15 = lVar27;
  plVar17 = puVar10 + 0x1b;
  *plVar17 = lVar19;
  puVar10[0x10] = plVar8;
  lStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puVar10[0x12] = lVar28;
  lStack_e8 = 0;
  plStack_e0 = (long *)0x0;
  FUN_10a724b04(puVar10 + 2);
  lVar20 = puVar10[7];
  if (lVar20 != 0) {
    plVar8 = (long *)(lVar20 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar10[9] = plVar17;
  puVar10[10] = plVar15;
  puVar10[0xb] = plVar23;
  lVar19 = puVar10[0x11];
  if (lVar19 == 0) {
    FUN_10a6f2978(&ppplStack_130,*plVar23);
LAB_10a7216e4:
    FUN_10a6f4ea0(puVar10 + 2,&ppplStack_130);
    if ((long)plStack_120 < 0) {
      __ZdlPv(ppplStack_130);
    }
  }
  else {
    cVar4 = *(char *)(*plVar23 + 0xe0);
    if (cVar4 == '\a') {
      FUN_10a6f2978(&ppplStack_130);
      goto LAB_10a7216e4;
    }
    if (cVar4 != '\x01') {
      puVar10 = (undefined8 *)0x38;
      __Znwm();
      lStack_a0 = 0x8000000000000038;
      puStack_a8 = (undefined8 *)0x37;
      puVar10[1] = 0x6c20726f206d6f74;
      *puVar10 = 0x73756320796c6e4f;
      puVar10[3] = 0x6f697461636f6c20;
      puVar10[2] = 0x646c726f77736e65;
      puVar10[5] = 0x646574726f707075;
      puVar10[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar10 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar10 + 0x37) = 0;
      puStack_b0 = puVar10;
      FUN_10a6e9574(&pppuStack_c8,cVar4);
      plVar9 = plStack_c0;
      ppppuVar22 = (undefined8 ****)pppuStack_c8;
      if (-1 < (char)uStack_b8._7_1_) {
        plVar9 = (long *)(ulong)uStack_b8._7_1_;
        ppppuVar22 = &pppuStack_c8;
      }
      ppuVar13 = &puStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar13,ppppuVar22,plVar9);
      puStack_128 = ppuVar13[1];
      ppplStack_130 = (long ***)*ppuVar13;
      plStack_120 = ppuVar13[2];
      ppuVar13[1] = (undefined8 *)0x0;
      ppuVar13[2] = (undefined8 *)0x0;
      *ppuVar13 = (undefined8 *)0x0;
      FUN_10a0029c0(&ppplStack_130);
      goto LAB_10a7222fc;
    }
    uVar14 = puVar10[0x1b];
    lVar27 = puVar10[0x10];
    puVar10[0x13] = *plVar23;
    puVar10[0x14] = lVar27;
    if (lVar27 != 0) {
      plVar8 = (long *)(lVar27 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar27 = puVar10[0x12];
    puVar10[0x15] = lVar19;
    puVar10[0x16] = lVar27;
    if (lVar27 != 0) {
      plVar8 = (long *)(lVar27 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4358(puVar10 + 0x1c,uVar14,puVar10 + 0x13,puVar10 + 0x15);
    plVar8 = (long *)puVar10[0x16];
    if (plVar8 != (long *)0x0) {
      plVar17 = plVar8 + 1;
      do {
        lVar19 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)puVar10[0x14];
    if (plVar8 != (long *)0x0) {
      plVar17 = plVar8 + 1;
      do {
        lVar19 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    uVar14 = puVar10[0x1b];
    puVar10[0x1a] = puVar10[0x12];
    puVar10[0x19] = puVar10[0x11];
    if (puVar10[0x12] != 0) {
      plVar8 = (long *)(puVar10[0x12] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4ee0(puVar10 + 0x17,uVar14,puVar10 + 0x19);
    plVar8 = (long *)puVar10[0x1a];
    if (plVar8 != (long *)0x0) {
      plVar17 = plVar8 + 1;
      do {
        lVar19 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    puVar10[0x1d] = puVar10[0x1c];
    plVar8 = (long *)(puVar10[0x1c] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar10[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x1e) = 0;
      lVar19 = puVar10[0x1d];
      plVar8 = (long *)(lVar19 + 0x10);
      plVar17 = (long *)puVar10[3];
      do {
        lVar27 = *plVar8;
        if (lVar27 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_130 = (long ***)0x0;
            puStack_128 = puVar10;
            plStack_120 = plVar17;
            func_0x000109d1b588(lVar19 + 0x18,&ppplStack_130);
            *(undefined8 *)(lVar19 + 0x10) = 0;
            goto LAB_10a72194c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar27 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar10[0x1d];
    if (((uint)*(undefined8 *)(puVar10[0x1d] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar8 + 0x12);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(plVar8 + 0x16) & 1) == 0) goto LAB_10a7222fc;
    if (*(char *)((long)plVar8 + 0xaf) < '\0') {
      func_0x000107c3192c(puVar10 + 0xc,plVar8[0x13],plVar8[0x14]);
      plVar8 = (long *)puVar10[0x1d];
      if (plVar8 != (long *)0x0) goto LAB_10a72171c;
    }
    else {
      lVar27 = plVar8[0x14];
      lVar19 = plVar8[0x13];
      puVar10[0xe] = plVar8[0x15];
      puVar10[0xd] = lVar27;
      puVar10[0xc] = lVar19;
LAB_10a72171c:
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    lVar19 = puVar10[0x17];
    if (lVar19 != 0) {
      lVar27 = *plVar23;
      if (*(char *)(lVar27 + 0xff) < '\0') {
        func_0x000107c3192c(&ppplStack_130,*(undefined8 *)(lVar27 + 0xe8),
                            *(undefined8 *)(lVar27 + 0xf0));
        lVar19 = puVar10[0x17];
      }
      else {
        puStack_128 = *(undefined8 **)(lVar27 + 0xf0);
        ppplStack_130 = *(long ****)(lVar27 + 0xe8);
        plStack_120 = *(long **)(lVar27 + 0xf8);
      }
      FUN_10a82d928(lVar19,&ppplStack_130);
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppplVar3 = (long ****)ppplStack_130;
        if (-1 < (long)plStack_120) {
          pppplVar3 = &ppplStack_130;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fc6b,0xad,&UNK_10f66fd08,param_7,param_8,
                            pppplVar3);
      }
      if ((long)plStack_120 < 0) {
        __ZdlPv(ppplStack_130);
      }
    }
    FUN_10a6f4ea0(puVar10 + 2,puVar10 + 0xc);
    if (*(char *)((long)puVar10 + 0x77) < '\0') {
      __ZdlPv(puVar10[0xc]);
    }
    plVar8 = (long *)puVar10[0x18];
    if (plVar8 != (long *)0x0) {
      plVar17 = plVar8 + 1;
      do {
        lVar19 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)puVar10[0x1c];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar17 = (long *)puVar10[9];
    plVar15 = (long *)puVar10[10];
  }
  FUN_10a724a78(*plVar17,plVar15);
  FUN_10a725a64(*plVar17,puVar10[0xb]);
  func_0x000109d1a1d0(puVar10 + 2);
  plVar8 = (long *)puVar10[0x12];
  if (plVar8 != (long *)0x0) {
    plVar17 = plVar8 + 1;
    do {
      lVar19 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = (long *)puVar10[0x10];
  if (plVar8 != (long *)0x0) {
    plVar17 = plVar8 + 1;
    do {
      lVar19 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  __ZdlPv(puVar10);
LAB_10a72194c:
  plVar8 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar17 = plStack_e0 + 1;
    do {
      lVar19 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar17 = plStack_d0 + 1;
    do {
      lVar19 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar19 = plVar12[0x40];
  puVar10 = (undefined8 *)0x70;
  __Znwm();
  *puVar10 = FUN_10a736574;
  puVar10[1] = FUN_10a736860;
  FUN_10a724b04(puVar10 + 2);
  ppplVar24 = (long ***)puVar10[7];
  if (ppplVar24 != (long ***)0x0) {
    ppplVar2 = ppplVar24 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
      if (bVar5) {
        *ppplVar2 = (long **)((long)*ppplVar2 + 4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar10[0xb] = lVar20;
  puVar10[9] = lVar19;
  *(undefined1 *)(puVar10 + 10) = 0;
  *(undefined1 *)(puVar10 + 0xd) = 0;
  puVar11 = puVar10 + 9;
  FUN_10a70649c(puVar11,puVar10);
  if (((ulong)puVar11 & 1) == 0) {
    FUN_10a706538(puVar10 + 0xc,puVar10 + 0xb);
    puVar10[9] = puVar10[0xc];
    plVar8 = (long *)(puVar10[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0xd) = 1;
      lVar20 = puVar10[9];
      plVar8 = (long *)(lVar20 + 0x10);
      uVar14 = puVar10[3];
      do {
        lVar19 = *plVar8;
        if (lVar19 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_130 = (long ***)0x0;
            puStack_128 = puVar10;
            plStack_120 = (long *)uVar14;
            func_0x000109d1b588(lVar20 + 0x18,&ppplStack_130);
            *(undefined8 *)(lVar20 + 0x10) = 0;
            goto LAB_10a721bc8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
    lVar20 = puVar10[9];
    if (((uint)*(undefined8 *)(puVar10[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar20 + 0x90);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(lVar20 + 0xb0) & 1) == 0) goto LAB_10a7222fc;
    FUN_10a6f4ea0(puVar10 + 2,lVar20 + 0x98);
    plVar8 = (long *)puVar10[9];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar10[0xc];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar10[0xb];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar10 + 2);
    __ZdlPv(puVar10);
  }
LAB_10a721bc8:
  lVar20 = *(long *)(plVar12[10] + 0x870);
  ppppuVar22 = *(undefined8 *****)(lVar20 + 0x38);
  if (ppppuVar22 == (undefined8 ****)0x0) {
    ppppuVar22 = *(undefined8 *****)(lVar20 + 0x28);
    plStack_c0 = *(long **)(lVar20 + 0x30);
  }
  else {
    plStack_c0 = *(long **)(lVar20 + 0x40);
  }
  if (plStack_c0 != (long *)0x0) {
    plVar8 = plStack_c0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_168 = plStack_138;
  lStack_170 = lStack_140;
  plStack_120 = plStack_138;
  puStack_128 = (undefined8 *)lStack_140;
  if (plStack_138 != (long *)0x0) {
    plVar8 = plStack_138 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_178 = plVar12[0x45];
  lStack_180 = plVar12[0x44];
  if (lStack_178 != 0) {
    plVar8 = (long *)(lStack_178 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_188 = plStack_148;
  uStack_190 = uStack_150;
  plStack_100 = plStack_148;
  uStack_108 = uStack_150;
  if (plStack_148 != (long *)0x0) {
    plVar8 = plStack_148 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_198 = plStack_158;
  uStack_1a0 = uStack_160;
  plStack_f0 = plStack_158;
  uStack_f8 = uStack_160;
  if (plStack_158 != (long *)0x0) {
    plVar8 = plStack_158 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar10 = (undefined8 *)0xb0;
  ppplStack_130 = ppplVar24;
  lStack_118 = lStack_180;
  plStack_110 = (long *)lStack_178;
  pppuStack_c8 = ppppuVar22;
  __Znwm();
  *puVar10 = FUN_10a736b84;
  puVar10[1] = FUN_10a736f00;
  func_0x0001092ba17c(puVar10 + 2);
  plVar8 = (long *)puVar10[7];
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lStack_178 = (long)plStack_110;
    lStack_180 = lStack_118;
    plStack_168 = plStack_120;
    lStack_170 = (long)puStack_128;
    plStack_198 = plStack_f0;
    uStack_1a0 = uStack_f8;
    plStack_188 = plStack_100;
    uStack_190 = uStack_108;
    ppplVar24 = ppplStack_130;
  }
  puVar10[9] = ppplVar24;
  ppplStack_130 = (long ***)0x0;
  puStack_128 = (undefined8 *)0x0;
  plStack_120 = (long *)0x0;
  puVar10[0xb] = plStack_168;
  puVar10[10] = lStack_170;
  puVar10[0xd] = lStack_178;
  puVar10[0xc] = lStack_180;
  lStack_118 = 0;
  plStack_110 = (long *)0x0;
  uStack_108 = 0;
  plStack_100 = (long *)0x0;
  puVar10[0xf] = plStack_188;
  puVar10[0xe] = uStack_190;
  puVar10[0x11] = plStack_198;
  puVar10[0x10] = uStack_1a0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  puVar10[0x12] = ppppuVar22;
  *(undefined1 *)(puVar10 + 0x13) = 0;
  *(undefined1 *)(puVar10 + 0x15) = 0;
  puVar11 = puVar10 + 0x12;
  func_0x0001092ba064(puVar11,puVar10);
  if (((ulong)puVar11 & 1) == 0) {
    FUN_10a706918(puVar10 + 0x14,puVar10 + 9);
    puVar10[0x12] = puVar10[0x14];
    plVar12 = (long *)(puVar10[0x14] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar10[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x15) = 1;
      lVar20 = puVar10[0x12];
      plVar12 = (long *)(lVar20 + 0x10);
      uVar14 = puVar10[3];
      do {
        lVar19 = *plVar12;
        if (lVar19 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_b0 = (undefined8 *)0x0;
            puStack_a8 = puVar10;
            lStack_a0 = uVar14;
            func_0x000109d1b588(lVar20 + 0x18,&puStack_b0);
            *(undefined8 *)(lVar20 + 0x10) = 0;
            goto joined_r0x00010a72200c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
    plVar12 = (long *)puVar10[0x12];
    if (((uint)*(undefined8 *)(puVar10[0x12] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar12 + 0x12);
LAB_10a7222fc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a722300);
      (*pcVar6)();
    }
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = (long *)puVar10[0x14];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar10 + 2);
    plVar12 = (long *)puVar10[0x11];
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 1;
      do {
        lVar20 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = (long *)puVar10[0xf];
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 1;
      do {
        lVar20 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = (long *)puVar10[0xd];
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 1;
      do {
        lVar20 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = (long *)puVar10[0xb];
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 1;
      do {
        lVar20 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = (long *)puVar10[9];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar10 + 2);
    __ZdlPv(puVar10);
  }
joined_r0x00010a72200c:
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar16 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar16 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar16 & 0x1fffffffc) == 4) {
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar8 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar12 = plStack_f0 + 1;
    do {
      lVar20 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar12 = plStack_100 + 1;
    do {
      lVar20 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar12 = plStack_110 + 1;
    do {
      lVar20 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar12 = plStack_120 + 1;
    do {
      lVar20 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if ((long ****)ppplStack_130 != (long ****)0x0) {
    pppplVar3 = (long ****)(ppplStack_130 + 1);
    do {
      ppplVar24 = *pppplVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
      if (bVar5) {
        *pppplVar3 = (long ***)((long)ppplVar24 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)ppplVar24 & 0x1fffffffc) == 4) {
      do {
        ppplVar24 = *pppplVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
        if (bVar5) {
          *pppplVar3 = (long ***)((long)ppplVar24 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((long ***)((long)ppplVar24 + -1) == (long ***)0x0) {
        (*(code *)(*ppplStack_130)[1])();
      }
    }
  }
  plVar8 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar12 = plStack_c0 + 1;
    do {
      lVar20 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plStack_158 != (long *)0x0) {
    plVar8 = plStack_158 + 1;
    do {
      lVar20 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
    }
  }
  if (plStack_148 != (long *)0x0) {
    plVar8 = plStack_148 + 1;
    do {
      lVar20 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar8 = plStack_138 + 1;
    do {
      lVar20 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
    }
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar20 = plVar9[0x59];
  uVar16 = lVar20 - 1;
  plVar9[0x59] = uVar16;
  if (uVar16 < 8) {
    uVar16 = plVar8[lVar20 + 2];
    if (plVar9[0x5a] == uVar16) {
      return;
    }
  }
  else {
    uVar16 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar16) {
      return;
    }
  }
  puVar10 = (undefined8 *)*plVar8;
  puVar11 = (undefined8 *)plVar9[0x4c];
  lVar20 = (long)puVar11 - (long)puVar10;
  uVar25 = lVar20 >> 4;
  if (uVar25 < uVar16) {
    uVar26 = uVar16 - uVar25;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)puVar11 >> 4) < uVar26) {
      if (uVar16 >> 0x3c == 0) {
        uVar18 = lVar19 - (long)puVar10 >> 3;
        if (uVar18 <= uVar16) {
          uVar18 = uVar16;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)puVar10)) {
          uVar18 = 0xfffffffffffffff;
        }
        plStack_98 = plVar8;
        if (uVar18 >> 0x3c == 0) {
          lVar28 = uVar18 << 4;
          __Znwm();
          lVar27 = lVar28 + lVar20;
          _bzero(lVar27,uVar26 * 0x10);
          lVar21 = lVar27 + uVar25 * -0x10;
          _memcpy(lVar21,puVar10,lVar20);
          *plVar8 = lVar21;
          plVar9[0x4c] = lVar27 + uVar26 * 0x10;
          plVar9[0x4d] = lVar28 + uVar18 * 0x10;
          uStack_b8 = puVar10;
          puStack_b0 = puVar10;
          puStack_a8 = puVar10;
          lStack_a0 = lVar19;
          func_0x00010988c1b8(&uStack_b8);
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
    _bzero(puVar11,uVar26 * 0x10);
    plVar9[0x4c] = (long)(puVar11 + uVar26 * 2);
  }
  else if (uVar16 < uVar25) {
    while (puVar11 != puVar10 + uVar16 * 2) {
      puVar11 = puVar11 + -2;
      func_0x00010988c204(puVar11);
    }
    plVar9[0x4c] = (long)(puVar10 + uVar16 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar16;
  return;
}



/* Entry: 10a721348; end: 10a72136b;  */

/* WARNING: Removing unreachable block (ram,0x00010a721a80) */
/* WARNING: Removing unreachable block (ram,0x00010a72167c) */
/* WARNING: Removing unreachable block (ram,0x00010a721dac) */

void FUN_10a721348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 ****ppppuVar21;
  long *plVar22;
  long ***ppplVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long ***ppplStack_110;
  undefined8 *puStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 ***pppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar7 = (long *)0x1;
  uVar13 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar11 = plVar7;
  FUN_10a72274c(plVar7,uVar13);
  FUN_10a7227b4(param_4);
  FUN_10a079938(&lStack_120,plVar7,param_1);
  FUN_10a059354(&uStack_130,plVar7,param_1 + 0x10);
  FUN_10a059354(&uStack_140,plVar7,param_1 + 0x20);
  plVar7 = plStack_118;
  lVar19 = lStack_120;
  lVar18 = plVar11[10];
  lStack_b8 = lStack_120;
  plStack_b0 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar16 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar26 = plVar11[0x44];
  lVar27 = plVar11[0x45];
  if (lVar27 != 0) {
    plVar16 = (long *)(lVar27 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = (undefined8 *)0xf8;
  lStack_c8 = lVar26;
  plStack_c0 = (long *)lVar27;
  __Znwm();
  *puVar9 = FUN_10a735bb8;
  puVar9[1] = FUN_10a735f44;
  plVar22 = puVar9 + 0xf;
  *plVar22 = lVar19;
  plVar14 = puVar9 + 0x11;
  *plVar14 = lVar26;
  plVar16 = puVar9 + 0x1b;
  *plVar16 = lVar18;
  puVar9[0x10] = plVar7;
  lStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  puVar9[0x12] = lVar27;
  lStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  FUN_10a724b04(puVar9 + 2);
  lVar19 = puVar9[7];
  if (lVar19 != 0) {
    plVar7 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9[9] = plVar16;
  puVar9[10] = plVar14;
  puVar9[0xb] = plVar22;
  lVar18 = puVar9[0x11];
  if (lVar18 == 0) {
    FUN_10a6f2978(&ppplStack_110,*plVar22);
LAB_10a7216e4:
    FUN_10a6f4ea0(puVar9 + 2,&ppplStack_110);
    if ((long)plStack_100 < 0) {
      __ZdlPv(ppplStack_110);
    }
  }
  else {
    cVar4 = *(char *)(*plVar22 + 0xe0);
    if (cVar4 == '\a') {
      FUN_10a6f2978(&ppplStack_110);
      goto LAB_10a7216e4;
    }
    if (cVar4 != '\x01') {
      puVar9 = (undefined8 *)0x38;
      __Znwm();
      lStack_80 = 0x8000000000000038;
      puStack_88 = (undefined8 *)0x37;
      puVar9[1] = 0x6c20726f206d6f74;
      *puVar9 = 0x73756320796c6e4f;
      puVar9[3] = 0x6f697461636f6c20;
      puVar9[2] = 0x646c726f77736e65;
      puVar9[5] = 0x646574726f707075;
      puVar9[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar9 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar9 + 0x37) = 0;
      puStack_90 = puVar9;
      FUN_10a6e9574(&pppuStack_a8,cVar4);
      plVar8 = plStack_a0;
      ppppuVar21 = (undefined8 ****)pppuStack_a8;
      if (-1 < (char)uStack_98._7_1_) {
        plVar8 = (long *)(ulong)uStack_98._7_1_;
        ppppuVar21 = &pppuStack_a8;
      }
      ppuVar12 = &puStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar12,ppppuVar21,plVar8);
      puStack_108 = ppuVar12[1];
      ppplStack_110 = (long ***)*ppuVar12;
      plStack_100 = ppuVar12[2];
      ppuVar12[1] = (undefined8 *)0x0;
      ppuVar12[2] = (undefined8 *)0x0;
      *ppuVar12 = (undefined8 *)0x0;
      FUN_10a0029c0(&ppplStack_110);
      goto LAB_10a7222fc;
    }
    uVar13 = puVar9[0x1b];
    lVar26 = puVar9[0x10];
    puVar9[0x13] = *plVar22;
    puVar9[0x14] = lVar26;
    if (lVar26 != 0) {
      plVar7 = (long *)(lVar26 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar26 = puVar9[0x12];
    puVar9[0x15] = lVar18;
    puVar9[0x16] = lVar26;
    if (lVar26 != 0) {
      plVar7 = (long *)(lVar26 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4358(puVar9 + 0x1c,uVar13,puVar9 + 0x13,puVar9 + 0x15);
    plVar7 = (long *)puVar9[0x16];
    if (plVar7 != (long *)0x0) {
      plVar16 = plVar7 + 1;
      do {
        lVar18 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = (long *)puVar9[0x14];
    if (plVar7 != (long *)0x0) {
      plVar16 = plVar7 + 1;
      do {
        lVar18 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    uVar13 = puVar9[0x1b];
    puVar9[0x1a] = puVar9[0x12];
    puVar9[0x19] = puVar9[0x11];
    if (puVar9[0x12] != 0) {
      plVar7 = (long *)(puVar9[0x12] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4ee0(puVar9 + 0x17,uVar13,puVar9 + 0x19);
    plVar7 = (long *)puVar9[0x1a];
    if (plVar7 != (long *)0x0) {
      plVar16 = plVar7 + 1;
      do {
        lVar18 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    puVar9[0x1d] = puVar9[0x1c];
    plVar7 = (long *)(puVar9[0x1c] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar9[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x1e) = 0;
      lVar18 = puVar9[0x1d];
      plVar7 = (long *)(lVar18 + 0x10);
      plVar16 = (long *)puVar9[3];
      do {
        lVar26 = *plVar7;
        if (lVar26 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_110 = (long ***)0x0;
            puStack_108 = puVar9;
            plStack_100 = plVar16;
            func_0x000109d1b588(lVar18 + 0x18,&ppplStack_110);
            *(undefined8 *)(lVar18 + 0x10) = 0;
            goto LAB_10a72194c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar26 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar9[0x1d];
    if (((uint)*(undefined8 *)(puVar9[0x1d] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(plVar7 + 0x16) & 1) == 0) goto LAB_10a7222fc;
    if (*(char *)((long)plVar7 + 0xaf) < '\0') {
      func_0x000107c3192c(puVar9 + 0xc,plVar7[0x13],plVar7[0x14]);
      plVar7 = (long *)puVar9[0x1d];
      if (plVar7 != (long *)0x0) goto LAB_10a72171c;
    }
    else {
      lVar26 = plVar7[0x14];
      lVar18 = plVar7[0x13];
      puVar9[0xe] = plVar7[0x15];
      puVar9[0xd] = lVar26;
      puVar9[0xc] = lVar18;
LAB_10a72171c:
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    lVar18 = puVar9[0x17];
    if (lVar18 != 0) {
      lVar26 = *plVar22;
      if (*(char *)(lVar26 + 0xff) < '\0') {
        func_0x000107c3192c(&ppplStack_110,*(undefined8 *)(lVar26 + 0xe8),
                            *(undefined8 *)(lVar26 + 0xf0));
        lVar18 = puVar9[0x17];
      }
      else {
        puStack_108 = *(undefined8 **)(lVar26 + 0xf0);
        ppplStack_110 = *(long ****)(lVar26 + 0xe8);
        plStack_100 = *(long **)(lVar26 + 0xf8);
      }
      FUN_10a82d928(lVar18,&ppplStack_110);
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppplVar3 = (long ****)ppplStack_110;
        if (-1 < (long)plStack_100) {
          pppplVar3 = &ppplStack_110;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fc6b,0xad,&UNK_10f66fd08,param_7,param_8,
                            pppplVar3);
      }
      if ((long)plStack_100 < 0) {
        __ZdlPv(ppplStack_110);
      }
    }
    FUN_10a6f4ea0(puVar9 + 2,puVar9 + 0xc);
    if (*(char *)((long)puVar9 + 0x77) < '\0') {
      __ZdlPv(puVar9[0xc]);
    }
    plVar7 = (long *)puVar9[0x18];
    if (plVar7 != (long *)0x0) {
      plVar16 = plVar7 + 1;
      do {
        lVar18 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = (long *)puVar9[0x1c];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar16 = (long *)puVar9[9];
    plVar14 = (long *)puVar9[10];
  }
  FUN_10a724a78(*plVar16,plVar14);
  FUN_10a725a64(*plVar16,puVar9[0xb]);
  func_0x000109d1a1d0(puVar9 + 2);
  plVar7 = (long *)puVar9[0x12];
  if (plVar7 != (long *)0x0) {
    plVar16 = plVar7 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)puVar9[0x10];
  if (plVar7 != (long *)0x0) {
    plVar16 = plVar7 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  __ZdlPv(puVar9);
LAB_10a72194c:
  plVar7 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar16 = plStack_c0 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar16 = plStack_b0 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar18 = plVar11[0x40];
  puVar9 = (undefined8 *)0x70;
  __Znwm();
  *puVar9 = FUN_10a736574;
  puVar9[1] = FUN_10a736860;
  FUN_10a724b04(puVar9 + 2);
  ppplVar23 = (long ***)puVar9[7];
  if (ppplVar23 != (long ***)0x0) {
    ppplVar2 = ppplVar23 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
      if (bVar5) {
        *ppplVar2 = (long **)((long)*ppplVar2 + 4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9[0xb] = lVar19;
  puVar9[9] = lVar18;
  *(undefined1 *)(puVar9 + 10) = 0;
  *(undefined1 *)(puVar9 + 0xd) = 0;
  puVar10 = puVar9 + 9;
  FUN_10a70649c(puVar10,puVar9);
  if (((ulong)puVar10 & 1) == 0) {
    FUN_10a706538(puVar9 + 0xc,puVar9 + 0xb);
    puVar9[9] = puVar9[0xc];
    plVar7 = (long *)(puVar9[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar9[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0xd) = 1;
      lVar19 = puVar9[9];
      plVar7 = (long *)(lVar19 + 0x10);
      uVar13 = puVar9[3];
      do {
        lVar18 = *plVar7;
        if (lVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_110 = (long ***)0x0;
            puStack_108 = puVar9;
            plStack_100 = (long *)uVar13;
            func_0x000109d1b588(lVar19 + 0x18,&ppplStack_110);
            *(undefined8 *)(lVar19 + 0x10) = 0;
            goto LAB_10a721bc8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar18 >> 1 & 1) == 0);
    }
    lVar19 = puVar9[9];
    if (((uint)*(undefined8 *)(puVar9[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar19 + 0x90);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(lVar19 + 0xb0) & 1) == 0) goto LAB_10a7222fc;
    FUN_10a6f4ea0(puVar9 + 2,lVar19 + 0x98);
    plVar7 = (long *)puVar9[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar9[0xc];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar9[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar9 + 2);
    __ZdlPv(puVar9);
  }
LAB_10a721bc8:
  lVar19 = *(long *)(plVar11[10] + 0x870);
  ppppuVar21 = *(undefined8 *****)(lVar19 + 0x38);
  if (ppppuVar21 == (undefined8 ****)0x0) {
    ppppuVar21 = *(undefined8 *****)(lVar19 + 0x28);
    plStack_a0 = *(long **)(lVar19 + 0x30);
  }
  else {
    plStack_a0 = *(long **)(lVar19 + 0x40);
  }
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_148 = plStack_118;
  lStack_150 = lStack_120;
  plStack_100 = plStack_118;
  puStack_108 = (undefined8 *)lStack_120;
  if (plStack_118 != (long *)0x0) {
    plVar7 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_158 = plVar11[0x45];
  lStack_160 = plVar11[0x44];
  if (lStack_158 != 0) {
    plVar7 = (long *)(lStack_158 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_168 = plStack_128;
  uStack_170 = uStack_130;
  plStack_e0 = plStack_128;
  uStack_e8 = uStack_130;
  if (plStack_128 != (long *)0x0) {
    plVar7 = plStack_128 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_178 = plStack_138;
  uStack_180 = uStack_140;
  plStack_d0 = plStack_138;
  uStack_d8 = uStack_140;
  if (plStack_138 != (long *)0x0) {
    plVar7 = plStack_138 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = (undefined8 *)0xb0;
  ppplStack_110 = ppplVar23;
  lStack_f8 = lStack_160;
  plStack_f0 = (long *)lStack_158;
  pppuStack_a8 = ppppuVar21;
  __Znwm();
  *puVar9 = FUN_10a736b84;
  puVar9[1] = FUN_10a736f00;
  func_0x0001092ba17c(puVar9 + 2);
  plVar7 = (long *)puVar9[7];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lStack_158 = (long)plStack_f0;
    lStack_160 = lStack_f8;
    plStack_148 = plStack_100;
    lStack_150 = (long)puStack_108;
    plStack_178 = plStack_d0;
    uStack_180 = uStack_d8;
    plStack_168 = plStack_e0;
    uStack_170 = uStack_e8;
    ppplVar23 = ppplStack_110;
  }
  puVar9[9] = ppplVar23;
  ppplStack_110 = (long ***)0x0;
  puStack_108 = (undefined8 *)0x0;
  plStack_100 = (long *)0x0;
  puVar9[0xb] = plStack_148;
  puVar9[10] = lStack_150;
  puVar9[0xd] = lStack_158;
  puVar9[0xc] = lStack_160;
  lStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_e8 = 0;
  plStack_e0 = (long *)0x0;
  puVar9[0xf] = plStack_168;
  puVar9[0xe] = uStack_170;
  puVar9[0x11] = plStack_178;
  puVar9[0x10] = uStack_180;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puVar9[0x12] = ppppuVar21;
  *(undefined1 *)(puVar9 + 0x13) = 0;
  *(undefined1 *)(puVar9 + 0x15) = 0;
  puVar10 = puVar9 + 0x12;
  func_0x0001092ba064(puVar10,puVar9);
  if (((ulong)puVar10 & 1) == 0) {
    FUN_10a706918(puVar9 + 0x14,puVar9 + 9);
    puVar9[0x12] = puVar9[0x14];
    plVar11 = (long *)(puVar9[0x14] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar9[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x15) = 1;
      lVar19 = puVar9[0x12];
      plVar11 = (long *)(lVar19 + 0x10);
      uVar13 = puVar9[3];
      do {
        lVar18 = *plVar11;
        if (lVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_90 = (undefined8 *)0x0;
            puStack_88 = puVar9;
            lStack_80 = uVar13;
            func_0x000109d1b588(lVar19 + 0x18,&puStack_90);
            *(undefined8 *)(lVar19 + 0x10) = 0;
            goto joined_r0x00010a72200c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar18 >> 1 & 1) == 0);
    }
    plVar11 = (long *)puVar9[0x12];
    if (((uint)*(undefined8 *)(puVar9[0x12] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar11 + 0x12);
LAB_10a7222fc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a722300);
      (*pcVar6)();
    }
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)puVar9[0x14];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar9 + 2);
    plVar11 = (long *)puVar9[0x11];
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 1;
      do {
        lVar19 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar9[0xf];
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 1;
      do {
        lVar19 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar9[0xd];
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 1;
      do {
        lVar19 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar9[0xb];
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 1;
      do {
        lVar19 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar9[9];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar9 + 2);
    __ZdlPv(puVar9);
  }
joined_r0x00010a72200c:
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar15 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar15 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar15 & 0x1fffffffc) == 4) {
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar15 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar7 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar11 = plStack_d0 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar11 = plStack_e0 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar11 = plStack_f0 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar11 = plStack_100 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((long ****)ppplStack_110 != (long ****)0x0) {
    pppplVar3 = (long ****)(ppplStack_110 + 1);
    do {
      ppplVar23 = *pppplVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
      if (bVar5) {
        *pppplVar3 = (long ***)((long)ppplVar23 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)ppplVar23 & 0x1fffffffc) == 4) {
      do {
        ppplVar23 = *pppplVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
        if (bVar5) {
          *pppplVar3 = (long ***)((long)ppplVar23 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((long ***)((long)ppplVar23 + -1) == (long ***)0x0) {
        (*(code *)(*ppplStack_110)[1])();
      }
    }
  }
  plVar7 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar11 = plStack_a0 + 1;
    do {
      lVar19 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar7 = plStack_138 + 1;
    do {
      lVar19 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
    }
  }
  if (plStack_128 != (long *)0x0) {
    plVar7 = plStack_128 + 1;
    do {
      lVar19 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
    }
  }
  if (plStack_118 != (long *)0x0) {
    plVar7 = plStack_118 + 1;
    do {
      lVar19 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar19 = plVar8[0x59];
  uVar15 = lVar19 - 1;
  plVar8[0x59] = uVar15;
  if (uVar15 < 8) {
    uVar15 = plVar7[lVar19 + 2];
    if (plVar8[0x5a] == uVar15) {
      return;
    }
  }
  else {
    uVar15 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar15) {
      return;
    }
  }
  puVar9 = (undefined8 *)*plVar7;
  puVar10 = (undefined8 *)plVar8[0x4c];
  lVar19 = (long)puVar10 - (long)puVar9;
  uVar24 = lVar19 >> 4;
  if (uVar24 < uVar15) {
    uVar25 = uVar15 - uVar24;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - (long)puVar10 >> 4) < uVar25) {
      if (uVar15 >> 0x3c == 0) {
        uVar17 = lVar18 - (long)puVar9 >> 3;
        if (uVar17 <= uVar15) {
          uVar17 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)puVar9)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_78 = plVar7;
        if (uVar17 >> 0x3c == 0) {
          lVar27 = uVar17 << 4;
          __Znwm();
          lVar26 = lVar27 + lVar19;
          _bzero(lVar26,uVar25 * 0x10);
          lVar20 = lVar26 + uVar24 * -0x10;
          _memcpy(lVar20,puVar9,lVar19);
          *plVar7 = lVar20;
          plVar8[0x4c] = lVar26 + uVar25 * 0x10;
          plVar8[0x4d] = lVar27 + uVar17 * 0x10;
          uStack_98 = puVar9;
          puStack_90 = puVar9;
          puStack_88 = puVar9;
          lStack_80 = lVar18;
          func_0x00010988c1b8(&uStack_98);
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
    _bzero(puVar10,uVar25 * 0x10);
    plVar8[0x4c] = (long)(puVar10 + uVar25 * 2);
  }
  else if (uVar15 < uVar24) {
    while (puVar10 != puVar9 + uVar15 * 2) {
      puVar10 = puVar10 + -2;
      func_0x00010988c204(puVar10);
    }
    plVar8[0x4c] = (long)(puVar9 + uVar15 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar15;
  return;
}



/* Entry: 10a72136c; end: 10a72274b;  */

/* WARNING: Removing unreachable block (ram,0x00010a721a80) */
/* WARNING: Removing unreachable block (ram,0x00010a72167c) */
/* WARNING: Removing unreachable block (ram,0x00010a721dac) */

void FUN_10a72136c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong *puVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  long *plVar21;
  long ***ppplVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long ***ppplStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 ***pppuStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a72274c(param_2,param_3);
  FUN_10a7227b4(param_5);
  FUN_10a079938(&lStack_110,param_2,param_4);
  FUN_10a059354(&uStack_120,param_2,param_4 + 0x10);
  FUN_10a059354(&uStack_130,param_2,param_4 + 0x20);
  plVar25 = plStack_108;
  lVar18 = lStack_110;
  lVar17 = plVar10[10];
  lStack_a8 = lStack_110;
  plStack_a0 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar15 = plStack_108 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar26 = plVar10[0x44];
  lVar27 = plVar10[0x45];
  if (lVar27 != 0) {
    plVar15 = (long *)(lVar27 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8 = (undefined8 *)0xf8;
  lStack_b8 = lVar26;
  plStack_b0 = (long *)lVar27;
  __Znwm();
  *puVar8 = FUN_10a735bb8;
  puVar8[1] = FUN_10a735f44;
  plVar21 = puVar8 + 0xf;
  *plVar21 = lVar18;
  plVar13 = puVar8 + 0x11;
  *plVar13 = lVar26;
  plVar15 = puVar8 + 0x1b;
  *plVar15 = lVar17;
  puVar8[0x10] = plVar25;
  lStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  puVar8[0x12] = lVar27;
  lStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  FUN_10a724b04(puVar8 + 2);
  lVar18 = puVar8[7];
  if (lVar18 != 0) {
    plVar25 = (long *)(lVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8[9] = plVar15;
  puVar8[10] = plVar13;
  puVar8[0xb] = plVar21;
  lVar17 = puVar8[0x11];
  if (lVar17 == 0) {
    FUN_10a6f2978(&ppplStack_100,*plVar21);
LAB_10a7216e4:
    FUN_10a6f4ea0(puVar8 + 2,&ppplStack_100);
    if ((long)plStack_f0 < 0) {
      __ZdlPv(ppplStack_100);
    }
  }
  else {
    cVar4 = *(char *)(*plVar21 + 0xe0);
    if (cVar4 == '\a') {
      FUN_10a6f2978(&ppplStack_100);
      goto LAB_10a7216e4;
    }
    if (cVar4 != '\x01') {
      puVar8 = (undefined8 *)0x38;
      __Znwm();
      lStack_70 = 0x8000000000000038;
      puStack_78 = (undefined8 *)0x37;
      puVar8[1] = 0x6c20726f206d6f74;
      *puVar8 = 0x73756320796c6e4f;
      puVar8[3] = 0x6f697461636f6c20;
      puVar8[2] = 0x646c726f77736e65;
      puVar8[5] = 0x646574726f707075;
      puVar8[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar8 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar8 + 0x37) = 0;
      puStack_80 = puVar8;
      FUN_10a6e9574(&pppuStack_98,cVar4);
      plVar7 = plStack_90;
      ppppuVar20 = (undefined8 ****)pppuStack_98;
      if (-1 < (char)uStack_88._7_1_) {
        plVar7 = (long *)(ulong)uStack_88._7_1_;
        ppppuVar20 = &pppuStack_98;
      }
      ppuVar11 = &puStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar11,ppppuVar20,plVar7);
      puStack_f8 = ppuVar11[1];
      ppplStack_100 = (long ***)*ppuVar11;
      plStack_f0 = ppuVar11[2];
      ppuVar11[1] = (undefined8 *)0x0;
      ppuVar11[2] = (undefined8 *)0x0;
      *ppuVar11 = (undefined8 *)0x0;
      FUN_10a0029c0(&ppplStack_100);
      goto LAB_10a7222fc;
    }
    uVar12 = puVar8[0x1b];
    lVar26 = puVar8[0x10];
    puVar8[0x13] = *plVar21;
    puVar8[0x14] = lVar26;
    if (lVar26 != 0) {
      plVar25 = (long *)(lVar26 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar26 = puVar8[0x12];
    puVar8[0x15] = lVar17;
    puVar8[0x16] = lVar26;
    if (lVar26 != 0) {
      plVar25 = (long *)(lVar26 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4358(puVar8 + 0x1c,uVar12,puVar8 + 0x13,puVar8 + 0x15);
    plVar25 = (long *)puVar8[0x16];
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 1;
      do {
        lVar17 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    plVar25 = (long *)puVar8[0x14];
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 1;
      do {
        lVar17 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    uVar12 = puVar8[0x1b];
    puVar8[0x1a] = puVar8[0x12];
    puVar8[0x19] = puVar8[0x11];
    if (puVar8[0x12] != 0) {
      plVar25 = (long *)(puVar8[0x12] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f4ee0(puVar8 + 0x17,uVar12,puVar8 + 0x19);
    plVar25 = (long *)puVar8[0x1a];
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 1;
      do {
        lVar17 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    puVar8[0x1d] = puVar8[0x1c];
    plVar25 = (long *)(puVar8[0x1c] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x1e) = 0;
      lVar17 = puVar8[0x1d];
      plVar25 = (long *)(lVar17 + 0x10);
      plVar15 = (long *)puVar8[3];
      do {
        lVar26 = *plVar25;
        if (lVar26 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar5) {
            *plVar25 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_100 = (long ***)0x0;
            puStack_f8 = puVar8;
            plStack_f0 = plVar15;
            func_0x000109d1b588(lVar17 + 0x18,&ppplStack_100);
            *(undefined8 *)(lVar17 + 0x10) = 0;
            goto LAB_10a72194c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar26 >> 1 & 1) == 0);
    }
    plVar25 = (long *)puVar8[0x1d];
    if (((uint)*(undefined8 *)(puVar8[0x1d] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar25 + 0x12);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(plVar25 + 0x16) & 1) == 0) goto LAB_10a7222fc;
    if (*(char *)((long)plVar25 + 0xaf) < '\0') {
      func_0x000107c3192c(puVar8 + 0xc,plVar25[0x13],plVar25[0x14]);
      plVar25 = (long *)puVar8[0x1d];
      if (plVar25 != (long *)0x0) goto LAB_10a72171c;
    }
    else {
      lVar26 = plVar25[0x14];
      lVar17 = plVar25[0x13];
      puVar8[0xe] = plVar25[0x15];
      puVar8[0xd] = lVar26;
      puVar8[0xc] = lVar17;
LAB_10a72171c:
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    lVar17 = puVar8[0x17];
    if (lVar17 != 0) {
      lVar26 = *plVar21;
      if (*(char *)(lVar26 + 0xff) < '\0') {
        func_0x000107c3192c(&ppplStack_100,*(undefined8 *)(lVar26 + 0xe8),
                            *(undefined8 *)(lVar26 + 0xf0));
        lVar17 = puVar8[0x17];
      }
      else {
        puStack_f8 = *(undefined8 **)(lVar26 + 0xf0);
        ppplStack_100 = *(long ****)(lVar26 + 0xe8);
        plStack_f0 = *(long **)(lVar26 + 0xf8);
      }
      FUN_10a82d928(lVar17,&ppplStack_100);
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppplVar3 = (long ****)ppplStack_100;
        if (-1 < (long)plStack_f0) {
          pppplVar3 = &ppplStack_100;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fc6b,0xad,&UNK_10f66fd08,param_8,param_9,
                            pppplVar3);
      }
      if ((long)plStack_f0 < 0) {
        __ZdlPv(ppplStack_100);
      }
    }
    FUN_10a6f4ea0(puVar8 + 2,puVar8 + 0xc);
    if (*(char *)((long)puVar8 + 0x77) < '\0') {
      __ZdlPv(puVar8[0xc]);
    }
    plVar25 = (long *)puVar8[0x18];
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 1;
      do {
        lVar17 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    plVar25 = (long *)puVar8[0x1c];
    if (plVar25 != (long *)0x0) {
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    plVar15 = (long *)puVar8[9];
    plVar13 = (long *)puVar8[10];
  }
  FUN_10a724a78(*plVar15,plVar13);
  FUN_10a725a64(*plVar15,puVar8[0xb]);
  func_0x000109d1a1d0(puVar8 + 2);
  plVar25 = (long *)puVar8[0x12];
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = (long *)puVar8[0x10];
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  __ZdlPv(puVar8);
LAB_10a72194c:
  plVar25 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar15 = plStack_b0 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar15 = plStack_a0 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  lVar17 = plVar10[0x40];
  puVar8 = (undefined8 *)0x70;
  __Znwm();
  *puVar8 = FUN_10a736574;
  puVar8[1] = FUN_10a736860;
  FUN_10a724b04(puVar8 + 2);
  ppplVar22 = (long ***)puVar8[7];
  if (ppplVar22 != (long ***)0x0) {
    ppplVar2 = ppplVar22 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
      if (bVar5) {
        *ppplVar2 = (long **)((long)*ppplVar2 + 4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8[0xb] = lVar18;
  puVar8[9] = lVar17;
  *(undefined1 *)(puVar8 + 10) = 0;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar9 = puVar8 + 9;
  FUN_10a70649c(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a706538(puVar8 + 0xc,puVar8 + 0xb);
    puVar8[9] = puVar8[0xc];
    plVar25 = (long *)(puVar8[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar8[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0xd) = 1;
      lVar18 = puVar8[9];
      plVar25 = (long *)(lVar18 + 0x10);
      uVar12 = puVar8[3];
      do {
        lVar17 = *plVar25;
        if (lVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar5) {
            *plVar25 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppplStack_100 = (long ***)0x0;
            puStack_f8 = puVar8;
            plStack_f0 = (long *)uVar12;
            func_0x000109d1b588(lVar18 + 0x18,&ppplStack_100);
            *(undefined8 *)(lVar18 + 0x10) = 0;
            goto LAB_10a721bc8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar17 >> 1 & 1) == 0);
    }
    lVar18 = puVar8[9];
    if (((uint)*(undefined8 *)(puVar8[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar18 + 0x90);
      goto LAB_10a7222fc;
    }
    if ((*(byte *)(lVar18 + 0xb0) & 1) == 0) goto LAB_10a7222fc;
    FUN_10a6f4ea0(puVar8 + 2,lVar18 + 0x98);
    plVar25 = (long *)puVar8[9];
    if (plVar25 != (long *)0x0) {
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    plVar25 = (long *)puVar8[0xc];
    if (plVar25 != (long *)0x0) {
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    plVar25 = (long *)puVar8[0xb];
    if (plVar25 != (long *)0x0) {
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar8 + 2);
    __ZdlPv(puVar8);
  }
LAB_10a721bc8:
  lVar18 = *(long *)(plVar10[10] + 0x870);
  ppppuVar20 = *(undefined8 *****)(lVar18 + 0x38);
  if (ppppuVar20 == (undefined8 ****)0x0) {
    ppppuVar20 = *(undefined8 *****)(lVar18 + 0x28);
    plStack_90 = *(long **)(lVar18 + 0x30);
  }
  else {
    plStack_90 = *(long **)(lVar18 + 0x40);
  }
  if (plStack_90 != (long *)0x0) {
    plVar25 = plStack_90 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_138 = plStack_108;
  lStack_140 = lStack_110;
  plStack_f0 = plStack_108;
  puStack_f8 = (undefined8 *)lStack_110;
  if (plStack_108 != (long *)0x0) {
    plVar25 = plStack_108 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_148 = plVar10[0x45];
  lStack_150 = plVar10[0x44];
  if (lStack_148 != 0) {
    plVar25 = (long *)(lStack_148 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_158 = plStack_118;
  uStack_160 = uStack_120;
  plStack_d0 = plStack_118;
  uStack_d8 = uStack_120;
  if (plStack_118 != (long *)0x0) {
    plVar25 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_168 = plStack_128;
  uStack_170 = uStack_130;
  plStack_c0 = plStack_128;
  uStack_c8 = uStack_130;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = *plVar25 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar8 = (undefined8 *)0xb0;
  ppplStack_100 = ppplVar22;
  lStack_e8 = lStack_150;
  plStack_e0 = (long *)lStack_148;
  pppuStack_98 = ppppuVar20;
  __Znwm();
  *puVar8 = FUN_10a736b84;
  puVar8[1] = FUN_10a736f00;
  func_0x0001092ba17c(puVar8 + 2);
  plVar25 = (long *)puVar8[7];
  if (plVar25 != (long *)0x0) {
    plVar10 = plVar25 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lStack_148 = (long)plStack_e0;
    lStack_150 = lStack_e8;
    plStack_138 = plStack_f0;
    lStack_140 = (long)puStack_f8;
    plStack_168 = plStack_c0;
    uStack_170 = uStack_c8;
    plStack_158 = plStack_d0;
    uStack_160 = uStack_d8;
    ppplVar22 = ppplStack_100;
  }
  puVar8[9] = ppplVar22;
  ppplStack_100 = (long ***)0x0;
  puStack_f8 = (undefined8 *)0x0;
  plStack_f0 = (long *)0x0;
  puVar8[0xb] = plStack_138;
  puVar8[10] = lStack_140;
  puVar8[0xd] = lStack_148;
  puVar8[0xc] = lStack_150;
  lStack_e8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puVar8[0xf] = plStack_158;
  puVar8[0xe] = uStack_160;
  puVar8[0x11] = plStack_168;
  puVar8[0x10] = uStack_170;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  puVar8[0x12] = ppppuVar20;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x15) = 0;
  puVar9 = puVar8 + 0x12;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a706918(puVar8 + 0x14,puVar8 + 9);
    puVar8[0x12] = puVar8[0x14];
    plVar10 = (long *)(puVar8[0x14] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x15) = 1;
      lVar18 = puVar8[0x12];
      plVar10 = (long *)(lVar18 + 0x10);
      uVar12 = puVar8[3];
      do {
        lVar17 = *plVar10;
        if (lVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_80 = (undefined8 *)0x0;
            puStack_78 = puVar8;
            lStack_70 = uVar12;
            func_0x000109d1b588(lVar18 + 0x18,&puStack_80);
            *(undefined8 *)(lVar18 + 0x10) = 0;
            goto joined_r0x00010a72200c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar17 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0x12];
    if (((uint)*(undefined8 *)(puVar8[0x12] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar10 + 0x12);
LAB_10a7222fc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a722300);
      (*pcVar6)();
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)puVar8[0x14];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar8 + 2);
    plVar10 = (long *)puVar8[0x11];
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 1;
      do {
        lVar18 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar8[0xf];
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 1;
      do {
        lVar18 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar8[0xd];
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 1;
      do {
        lVar18 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar8[0xb];
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 1;
      do {
        lVar18 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar8[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar8 + 2);
    __ZdlPv(puVar8);
  }
joined_r0x00010a72200c:
  if (plVar25 != (long *)0x0) {
    puVar1 = (ulong *)(plVar25 + 1);
    do {
      uVar14 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar14 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
  }
  plVar25 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar10 = plStack_c0 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar10 = plStack_e0 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar10 = plStack_f0 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  if ((long ****)ppplStack_100 != (long ****)0x0) {
    pppplVar3 = (long ****)(ppplStack_100 + 1);
    do {
      ppplVar22 = *pppplVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
      if (bVar5) {
        *pppplVar3 = (long ***)((long)ppplVar22 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)ppplVar22 & 0x1fffffffc) == 4) {
      do {
        ppplVar22 = *pppplVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
        if (bVar5) {
          *pppplVar3 = (long ***)((long)ppplVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((long ***)((long)ppplVar22 + -1) == (long ***)0x0) {
        (*(code *)(*ppplStack_100)[1])();
      }
    }
  }
  plVar25 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar10 = plStack_90 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar18 = *plVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
    }
  }
  if (plStack_118 != (long *)0x0) {
    plVar25 = plStack_118 + 1;
    do {
      lVar18 = *plVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar25 = plStack_108 + 1;
    do {
      lVar18 = *plVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
    }
  }
  *param_1 = 0;
  plVar25 = plVar7 + 0x4b;
  lVar18 = plVar7[0x59];
  uVar14 = lVar18 - 1;
  plVar7[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar25[lVar18 + 2];
    if (plVar7[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar14) {
      return;
    }
  }
  puVar8 = (undefined8 *)*plVar25;
  puVar9 = (undefined8 *)plVar7[0x4c];
  lVar18 = (long)puVar9 - (long)puVar8;
  uVar23 = lVar18 >> 4;
  if (uVar23 < uVar14) {
    uVar24 = uVar14 - uVar23;
    lVar17 = plVar7[0x4d];
    if ((ulong)(lVar17 - (long)puVar9 >> 4) < uVar24) {
      if (uVar14 >> 0x3c == 0) {
        uVar16 = lVar17 - (long)puVar8 >> 3;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)puVar8)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_68 = plVar25;
        if (uVar16 >> 0x3c == 0) {
          lVar27 = uVar16 << 4;
          __Znwm();
          lVar26 = lVar27 + lVar18;
          _bzero(lVar26,uVar24 * 0x10);
          lVar19 = lVar26 + uVar23 * -0x10;
          _memcpy(lVar19,puVar8,lVar18);
          *plVar25 = lVar19;
          plVar7[0x4c] = lVar26 + uVar24 * 0x10;
          plVar7[0x4d] = lVar27 + uVar16 * 0x10;
          uStack_88 = puVar8;
          puStack_80 = puVar8;
          puStack_78 = puVar8;
          lStack_70 = lVar17;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(puVar9,uVar24 * 0x10);
    plVar7[0x4c] = (long)(puVar9 + uVar24 * 2);
  }
  else if (uVar14 < uVar23) {
    while (puVar9 != puVar8 + uVar14 * 2) {
      puVar9 = puVar9 + -2;
      func_0x00010988c204(puVar9);
    }
    plVar7[0x4c] = (long)(puVar8 + uVar14 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar14;
  return;
}



/* Entry: 10a72274c; end: 10a7227b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a723248) */
/* WARNING: Removing unreachable block (ram,0x00010a722e54) */
/* WARNING: Removing unreachable block (ram,0x00010a723578) */

void FUN_10a72274c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined4 *extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long lStack_170;
  long *plStack_168;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  undefined7 uStack_138;
  char cStack_131;
  long *plStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar18 = param_1;
  func_0x000109898688();
  if (lVar18 != 0) {
    FUN_10a052c2c(param_1,lVar18);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar8 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar8 == 3) {
    return;
  }
  plVar9 = (long *)0x3;
  uVar15 = 0;
  FUN_10a052ee0(3,0,puVar8);
  plVar10 = plVar9;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar13 = plVar9;
  FUN_10a72274c(plVar9,uVar15);
  FUN_10a724128(param_4);
  func_0x000109898570(&lStack_148,plVar9,puVar8);
  FUN_10a72414c(&plStack_130,plVar9,puVar8 + 0x10);
  plVar11 = (long *)0x60;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110c144c0;
  plStack_158 = plVar11 + 3;
  plVar11[4] = (long)plStack_128;
  *plStack_158 = (long)plStack_130;
  if (plStack_128 != (long *)0x0) {
    plVar27 = plStack_128 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *plVar27 = *plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11[6] = (long)plStack_118;
  plVar11[5] = (long)puStack_120;
  if (plStack_118 != (long *)0x0) {
    plVar27 = plStack_118 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *plVar27 = *plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(plVar11 + 0xb) = 2;
  plStack_150 = plVar11;
  FUN_10a688c1c(&plStack_130);
  FUN_10a059354(&lStack_170,plVar9,puVar8 + 0x20);
  lVar18 = plVar13[0x44];
  if (lVar18 == 0) {
    plVar9 = (long *)0xb0;
    __Znwm();
    plVar9[2] = 0;
    plVar9[1] = 0x200000006;
    *(undefined2 *)(plVar9 + 3) = 4;
    plVar9[5] = 0;
    plVar9[4] = 0;
    plVar9[7] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[0xf] = 0;
    plVar9[0xe] = 0;
    plVar9[0x10] = 0;
    plVar9[0x11] = (long)(plVar9 + 3);
    plVar9[0x12] = 0;
    *plVar9 = (long)&PTR_FUN_110c14b20;
    *(undefined1 *)(plVar9 + 0x13) = 0;
    *(undefined1 *)(plVar9 + 0x15) = 0;
    plStack_130 = plVar9;
    plStack_128 = plVar9;
    FUN_10a6f143c(&puStack_b0,plVar13[10],&lStack_148);
    FUN_10a712610(plVar9,&puStack_b0);
    plVar9 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        lVar18 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_130;
    plStack_130 = (long *)0x0;
    if ((plStack_128 != (long *)0x0) &&
       (func_0x0001092b4274(&plStack_128,plStack_128), plStack_130 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_130 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plStack_130 + 8))();
        }
      }
    }
  }
  else {
    lVar23 = plVar13[10];
    lVar25 = plVar13[0x45];
    if (lVar25 != 0) {
      plVar9 = (long *)(lVar25 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (cStack_131 < '\0') {
      lStack_d8 = lVar18;
      plStack_d0 = (long *)lVar25;
      func_0x000107c3192c(&lStack_f0,lStack_148,lStack_140);
    }
    else {
      lStack_e8 = lStack_140;
      lStack_f0 = lStack_148;
      uStack_e0 = CONCAT17(cStack_131,uStack_138);
      lStack_d8 = lVar18;
      plStack_d0 = (long *)lVar25;
    }
    lVar7 = plVar13[0x31];
    plVar11 = (long *)0x108;
    __Znwm();
    *plVar11 = (long)FUN_10a73a3c8;
    plVar11[1] = (long)FUN_10a73aaa4;
    plVar11[0xf] = lVar18;
    *(char *)((long)plVar11 + 0x101) = (char)lVar7;
    plVar11[0x1f] = lVar23;
    plVar11[0x10] = lVar25;
    lStack_d8 = 0;
    plStack_d0 = (long *)0x0;
    if (uStack_e0 < 0) {
      func_0x000107c3192c(plVar11 + 9,lStack_f0,lStack_e8);
    }
    else {
      plVar11[10] = lStack_e8;
      plVar11[9] = lStack_f0;
      plVar11[0xb] = uStack_e0;
    }
    FUN_10a711e58(plVar11 + 2);
    plVar9 = (long *)plVar11[7];
    if (plVar9 != (long *)0x0) {
      plVar27 = plVar9 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar6) {
          *plVar27 = *plVar27 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f143c(plVar11 + 0x11,lVar23,plVar11 + 9);
    uVar26 = plVar11[0x11];
    cVar4 = *(char *)(uVar26 + 0xe0);
    *(undefined1 *)(plVar11 + 0x19) = 7;
    FUN_10a6f3b28(&plStack_130,lVar23,plVar11 + 0x19,&UNK_10f66f9cb);
    FUN_10a6ebaf8(uVar26,plStack_130);
    plVar27 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar12 = plStack_128 + 1;
      do {
        lVar18 = *plVar12;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    bVar6 = cVar4 != '\x01';
    if (bVar6 && (uVar26 & 1) == 0) {
      puVar17 = (undefined8 *)0x38;
      __Znwm();
      lStack_a0 = -0x7fffffffffffffc8;
      plStack_a8 = (long *)0x37;
      puVar17[1] = 0x6c20726f206d6f74;
      *puVar17 = 0x73756320796c6e4f;
      puVar17[3] = 0x6f697461636f6c20;
      puVar17[2] = 0x646c726f77736e65;
      puVar17[5] = 0x646574726f707075;
      puVar17[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar17 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar17 + 0x37) = 0;
      puStack_b0 = puVar17;
      FUN_10a6e9574(&pppuStack_c8,*(undefined1 *)(plVar11[0x11] + 0xe0));
      plVar10 = plStack_c0;
      ppppuVar21 = (undefined8 ****)pppuStack_c8;
      if (-1 < (char)uStack_b8._7_1_) {
        plVar10 = (long *)(ulong)uStack_b8._7_1_;
        ppppuVar21 = &pppuStack_c8;
      }
      ppuVar14 = &puStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar14,ppppuVar21,plVar10);
      plStack_128 = ppuVar14[1];
      plStack_130 = *ppuVar14;
      puStack_120 = ppuVar14[2];
      ppuVar14[1] = (undefined8 *)0x0;
      ppuVar14[2] = (undefined8 *)0x0;
      *ppuVar14 = (undefined8 *)0x0;
      FUN_10a0029c0(&plStack_130);
      goto LAB_10a723b2c;
    }
    if (bVar6) {
LAB_10a723010:
      plVar27 = (long *)plVar11[0x10];
      plVar11[0x18] = plVar11[0x10];
      plVar11[0x17] = plVar11[0xf];
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f6038(plVar11[0x1f],plVar11 + 0x17,plVar11 + 0x11,
                    *(undefined1 *)((long)plVar11 + 0x101));
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          lVar18 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      FUN_10a6dee28(plVar11 + 2,plVar11 + 0x11);
      plVar27 = (long *)plVar11[0x12];
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          lVar18 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      FUN_10a724a78(plVar11[0x1f],plVar11 + 0xf);
      func_0x000109d1a1d0(plVar11 + 2);
      if (*(char *)((long)plVar11 + 0x5f) < '\0') {
        __ZdlPv(plVar11[9]);
      }
      plVar27 = (long *)plVar11[0x10];
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          lVar18 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      __ZdlPv(plVar11);
    }
    else {
      plVar11[0x14] = plVar11[0x10];
      plVar11[0x13] = plVar11[0xf];
      if (plVar11[0x10] != 0) {
        plVar27 = (long *)(plVar11[0x10] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *plVar27 = *plVar27 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(char *)((long)plVar11 + 0x5f) < '\0') {
        func_0x000107c3192c(plVar11 + 0xc,plVar11[9],plVar11[10]);
      }
      else {
        plVar11[0xd] = plVar11[10];
        plVar11[0xc] = plVar11[9];
        plVar11[0xe] = plVar11[0xb];
      }
      plVar27 = (long *)plVar11[0x12];
      plVar11[0x16] = plVar11[0x12];
      plVar11[0x15] = plVar11[0x11];
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f509c(plVar11 + 0x19,lVar23,plVar11 + 0x13,plVar11 + 0xc,plVar11 + 0x15);
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          lVar18 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      if (*(char *)((long)plVar11 + 0x77) < '\0') {
        __ZdlPv(plVar11[0xc]);
      }
      plVar27 = (long *)plVar11[0x14];
      if (plVar27 != (long *)0x0) {
        plVar12 = plVar27 + 1;
        do {
          lVar18 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      plVar11[0x1c] = 0;
      *(undefined1 *)(plVar11 + 0x20) = 0;
      plVar27 = plVar11 + 0x1c;
      FUN_10a6de354(plVar27,plVar11);
      if (((ulong)plVar27 & 1) == 0) {
        lVar18 = plVar11[0x1c];
        plVar11[0x1b] = lVar18;
        plVar11[0x1c] = 0;
        if (lVar18 == 0) {
          if ((plVar11[0x1f] == 0) || (lVar18 = *(long *)(plVar11[0x1f] + 0x100), lVar18 == 0)) {
            plVar11[0x1a] = 0;
            plVar11[0x1b] = 0;
          }
          else {
            lVar18 = *(long *)(lVar18 + 0x1a8);
            plVar11[0x1a] = lVar18;
            if (lVar18 != 0) {
              plVar27 = (long *)(lVar18 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar6) {
                  *plVar27 = *plVar27 + 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar27 = (long *)plVar11[0x1b];
              if (plVar27 != (long *)0x0) {
                puVar1 = (ulong *)(plVar27 + 1);
                do {
                  uVar26 = *puVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar26 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar26 & 0x1fffffffc) == 4) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  do {
                    uVar26 = *puVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar26 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar26 - 1 == 0) {
                    (**(code **)(*plVar27 + 8))(plVar27);
                  }
                }
              }
            }
          }
        }
        else {
          plVar11[0x1a] = lVar18;
          plVar11[0x1b] = 0;
        }
        plVar27 = (long *)plVar11[0x1c];
        if (plVar27 != (long *)0x0) {
          puVar1 = (ulong *)(plVar27 + 1);
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            do {
              uVar26 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar26 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar27 + 8))(plVar27);
            }
          }
        }
        lVar18 = plVar11[0x1a];
        plVar11[0x1e] = lVar18;
        if (lVar18 == 0) {
LAB_10a722de0:
          lVar18 = plVar11[0x19];
          plVar11[0x1d] = lVar18;
          if (lVar18 != 0) {
            plVar27 = (long *)(lVar18 + 8);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *plVar27 = *plVar27 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          plVar27 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *plVar27 = *plVar27 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (plVar11[0x1e] == 0) goto LAB_10a722de0;
          FUN_10a7040d4(plVar11 + 0x1d,plVar11 + 0x1e,plVar11 + 0x19);
        }
        plVar11[0x1c] = plVar11[0x1d];
        plVar27 = (long *)(plVar11[0x1d] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *plVar27 = *plVar27 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(plVar11[0x1c] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(plVar11 + 0x20) = 1;
          lVar18 = plVar11[0x1c];
          plVar27 = (long *)(lVar18 + 0x10);
          puVar17 = (undefined8 *)plVar11[3];
          do {
            lVar23 = *plVar27;
            if (lVar23 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *plVar27 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plStack_130 = (long *)0x0;
                plStack_128 = plVar11;
                puStack_120 = puVar17;
                func_0x000109d1b588(lVar18 + 0x18,&plStack_130);
                *(undefined8 *)(lVar18 + 0x10) = 0;
                goto LAB_10a723124;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar23 >> 1 & 1) == 0);
        }
        plVar27 = (long *)plVar11[0x1c];
        if (((uint)*(undefined8 *)(plVar11[0x1c] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar27 + 0x12);
          goto LAB_10a723b2c;
        }
        if ((*(byte *)(plVar27 + 0x15) & 1) == 0) goto LAB_10a723b2c;
        puVar1 = (ulong *)(plVar27 + 1);
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar27 + 8))();
          }
        }
        plVar27 = (long *)plVar11[0x1d];
        if (plVar27 != (long *)0x0) {
          puVar1 = (ulong *)(plVar27 + 1);
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar26 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar27 + 8))();
            }
          }
        }
        plVar27 = (long *)plVar11[0x1e];
        if (plVar27 != (long *)0x0) {
          puVar1 = (ulong *)(plVar27 + 1);
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            do {
              uVar26 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar26 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar27 + 8))(plVar27);
            }
          }
        }
        plVar27 = (long *)plVar11[0x1a];
        if (plVar27 != (long *)0x0) {
          puVar1 = (ulong *)(plVar27 + 1);
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            do {
              uVar26 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar26 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar27 + 8))(plVar27);
            }
          }
        }
        plVar27 = (long *)plVar11[0x19];
        if (plVar27 != (long *)0x0) {
          puVar1 = (ulong *)(plVar27 + 1);
          do {
            uVar26 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar26 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar26 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar27 + 8))();
            }
          }
        }
        goto LAB_10a723010;
      }
    }
LAB_10a723124:
    if (uStack_e0._7_1_ < '\0') {
      __ZdlPv(lStack_f0);
    }
    plVar11 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      plVar27 = plStack_d0 + 1;
      do {
        lVar18 = *plVar27;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar6) {
          *plVar27 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  lVar18 = plVar13[0x40];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)0x70;
  __Znwm();
  *plVar11 = (long)FUN_10a73b1fc;
  plVar11[1] = (long)FUN_10a73b4e8;
  FUN_10a711e58(plVar11 + 2);
  plVar27 = (long *)plVar11[7];
  if (plVar27 != (long *)0x0) {
    plVar12 = plVar27 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11[0xb] = (long)plVar9;
  plVar11[9] = lVar18;
  *(undefined1 *)(plVar11 + 10) = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  plVar12 = plVar11 + 9;
  FUN_10a6fd0e0(plVar12,plVar11);
  if (((ulong)plVar12 & 1) == 0) {
    FUN_10a706bbc(plVar11 + 0xc,plVar11 + 0xb);
    plVar11[9] = plVar11[0xc];
    plVar12 = (long *)(plVar11[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar11[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar11 + 0xd) = 1;
      lVar23 = plVar11[9];
      plVar12 = (long *)(lVar23 + 0x10);
      lVar18 = plVar11[3];
      do {
        lVar25 = *plVar12;
        if (lVar25 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            plStack_130 = (long *)0x0;
            plStack_128 = plVar11;
            puStack_120 = (undefined8 *)lVar18;
            func_0x000109d1b588(lVar23 + 0x18,&plStack_130);
            *(undefined8 *)(lVar23 + 0x10) = 0;
            goto LAB_10a723390;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar25 >> 1 & 1) == 0);
    }
    lVar18 = plVar11[9];
    if (((uint)*(undefined8 *)(plVar11[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar18 + 0x90);
      goto LAB_10a723b2c;
    }
    if ((*(byte *)(lVar18 + 0xa8) & 1) == 0) goto LAB_10a723b2c;
    FUN_10a6dee28(plVar11 + 2,lVar18 + 0x98);
    plVar12 = (long *)plVar11[9];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = (long *)plVar11[0xc];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = (long *)plVar11[0xb];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar11 + 2);
    __ZdlPv(plVar11);
  }
LAB_10a723390:
  plVar11 = plStack_150;
  plVar12 = plStack_158;
  lVar18 = *(long *)(plVar13[10] + 0x870);
  ppppuVar21 = *(undefined8 *****)(lVar18 + 0x38);
  if (ppppuVar21 == (undefined8 ****)0x0) {
    ppppuVar21 = *(undefined8 *****)(lVar18 + 0x28);
    plStack_c0 = *(long **)(lVar18 + 0x30);
  }
  else {
    plStack_c0 = *(long **)(lVar18 + 0x40);
  }
  if (plStack_c0 != (long *)0x0) {
    plVar28 = plStack_c0 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar6) {
        *plVar28 = *plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar9 != (long *)0x0) {
    plVar28 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar6) {
        *plVar28 = *plVar28 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar28 = (long *)plVar13[0x45];
  puVar17 = (undefined8 *)plVar13[0x44];
  if (plVar28 != (long *)0x0) {
    plVar13 = (long *)((long)plVar28 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_110 = plStack_158;
  plStack_108 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar13 = plStack_150 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_f8 = plStack_168;
  lStack_100 = lStack_170;
  if (plStack_168 != (long *)0x0) {
    plVar13 = plStack_168 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = (long *)0xa8;
  plStack_130 = plVar27;
  plStack_128 = plVar9;
  puStack_120 = puVar17;
  plStack_118 = plVar28;
  pppuStack_c8 = ppppuVar21;
  __Znwm();
  *plVar13 = (long)FUN_10a73b80c;
  plVar13[1] = (long)FUN_10a73bb98;
  func_0x0001092ba17c(plVar13 + 2);
  plVar27 = (long *)plVar13[7];
  if (plVar27 != (long *)0x0) {
    plVar2 = plVar27 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar11 = plStack_108;
      plVar12 = plStack_110;
      puVar17 = puStack_120;
      plVar28 = plStack_118;
    } while (cVar4 != '\0');
  }
  plVar13[10] = (long)plStack_128;
  plVar13[9] = (long)plStack_130;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  plVar13[0xc] = (long)plVar28;
  plVar13[0xb] = (long)puVar17;
  plStack_118 = (long *)0x0;
  puStack_120 = (undefined8 *)0x0;
  plVar13[0xd] = (long)plVar12;
  plVar13[0xe] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    plVar11 = plVar11 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13[0x10] = (long)plStack_f8;
  plVar13[0xf] = lStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar11 = plStack_f8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13[0x11] = (long)ppppuVar21;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  *(undefined1 *)(plVar13 + 0x14) = 0;
  plVar11 = plVar13 + 0x11;
  func_0x0001092ba064(plVar11,plVar13);
  if (((ulong)plVar11 & 1) == 0) {
    FUN_10a706f5c(plVar13 + 0x13,plVar13 + 9);
    plVar13[0x11] = plVar13[0x13];
    plVar11 = (long *)(plVar13[0x13] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar13[0x11] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar13 + 0x14) = 1;
      lVar23 = plVar13[0x11];
      plVar11 = (long *)(lVar23 + 0x10);
      lVar18 = plVar13[3];
      do {
        lVar25 = *plVar11;
        if (lVar25 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_b0 = (undefined8 *)0x0;
            plStack_a8 = plVar13;
            lStack_a0 = lVar18;
            func_0x000109d1b588(lVar23 + 0x18,&puStack_b0);
            *(undefined8 *)(lVar23 + 0x10) = 0;
            goto joined_r0x00010a7237e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar25 >> 1 & 1) == 0);
    }
    plVar11 = (long *)plVar13[0x11];
    if (((uint)*(undefined8 *)(plVar13[0x11] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar11 + 0x12);
LAB_10a723b2c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a723b30);
      (*pcVar5)();
    }
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar13[0x13];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x0001092ba100(plVar13 + 2);
    plVar11 = (long *)plVar13[0x10];
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar18 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)plVar13[0xe];
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar18 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)plVar13[0xc];
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar18 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)plVar13[10];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar13[9];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar26 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar13 + 2);
    __ZdlPv(plVar13);
  }
joined_r0x00010a7237e8:
  if (plVar27 != (long *)0x0) {
    puVar1 = (ulong *)(plVar27 + 1);
    do {
      uVar26 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar26 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar26 & 0x1fffffffc) == 4) {
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar26 - 1 == 0) {
        (**(code **)(*plVar27 + 8))(plVar27);
      }
    }
  }
  plVar13 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar11 = plStack_f8 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar11 = plStack_118 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (plStack_128 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_128 + 1);
    do {
      uVar26 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar26 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar26 & 0x1fffffffc) == 4) {
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar26 - 1 == 0) {
        (**(code **)(*plStack_128 + 8))();
      }
    }
  }
  if (plStack_130 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_130 + 1);
    do {
      uVar26 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar26 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar26 & 0x1fffffffc) == 4) {
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar26 - 1 == 0) {
        (**(code **)(*plStack_130 + 8))();
      }
    }
  }
  plVar13 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar11 = plStack_c0 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar26 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar26 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar26 & 0x1fffffffc) == 4) {
      do {
        uVar26 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar26 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar26 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  if (plStack_168 != (long *)0x0) {
    plVar9 = plStack_168 + 1;
    do {
      lVar18 = *plVar9;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
    }
  }
  plVar9 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar13 = plStack_150 + 1;
    do {
      lVar18 = *plVar13;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (cStack_131 < '\0') {
    __ZdlPv(lStack_148);
  }
  *extraout_x8 = 0;
  plVar9 = plVar10 + 0x4b;
  lVar18 = plVar10[0x59];
  uVar26 = lVar18 - 1;
  plVar10[0x59] = uVar26;
  if (uVar26 < 8) {
    uVar26 = plVar9[lVar18 + 2];
    if (plVar10[0x5a] == uVar26) {
      return;
    }
  }
  else {
    uVar26 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar26) {
      return;
    }
  }
  puVar17 = (undefined8 *)*plVar9;
  puVar20 = (undefined8 *)plVar10[0x4c];
  lVar18 = (long)puVar20 - (long)puVar17;
  uVar22 = lVar18 >> 4;
  if (uVar22 < uVar26) {
    uVar24 = uVar26 - uVar22;
    lVar23 = plVar10[0x4d];
    if ((ulong)(lVar23 - (long)puVar20 >> 4) < uVar24) {
      if (uVar26 >> 0x3c == 0) {
        uVar16 = lVar23 - (long)puVar17 >> 3;
        if (uVar16 <= uVar26) {
          uVar16 = uVar26;
        }
        if (0x7fffffffffffffef < (ulong)(lVar23 - (long)puVar17)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_98 = plVar9;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar25 = lVar7 + lVar18;
          _bzero(lVar25,uVar24 * 0x10);
          lVar19 = lVar25 + uVar22 * -0x10;
          _memcpy(lVar19,puVar17,lVar18);
          *plVar9 = lVar19;
          plVar10[0x4c] = lVar25 + uVar24 * 0x10;
          plVar10[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_b8 = puVar17;
          puStack_b0 = puVar17;
          plStack_a8 = puVar17;
          lStack_a0 = lVar23;
          func_0x00010988c1b8(&uStack_b8);
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
    _bzero(puVar20,uVar24 * 0x10);
    plVar10[0x4c] = (long)(puVar20 + uVar24 * 2);
  }
  else if (uVar26 < uVar22) {
    while (puVar20 != puVar17 + uVar26 * 2) {
      puVar20 = puVar20 + -2;
      func_0x00010988c204(puVar20);
    }
    plVar10[0x4c] = (long)(puVar17 + uVar26 * 2);
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar26;
  return;
}



/* Entry: 10a7227b4; end: 10a7227d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a723248) */
/* WARNING: Removing unreachable block (ram,0x00010a722e54) */
/* WARNING: Removing unreachable block (ram,0x00010a723578) */

void FUN_10a7227b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long lStack_150;
  long *plStack_148;
  long *plStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  undefined7 uStack_118;
  char cStack_111;
  long *plStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 ***pppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar8 = (long *)0x3;
  uVar14 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar12 = plVar8;
  FUN_10a72274c(plVar8,uVar14);
  FUN_10a724128(param_4);
  func_0x000109898570(&lStack_128,plVar8,param_1);
  FUN_10a72414c(&plStack_110,plVar8,param_1 + 0x10);
  plVar10 = (long *)0x60;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c144c0;
  plStack_138 = plVar10 + 3;
  plVar10[4] = (long)plStack_108;
  *plStack_138 = (long)plStack_110;
  if (plStack_108 != (long *)0x0) {
    plVar26 = plStack_108 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10[6] = (long)plStack_f8;
  plVar10[5] = (long)puStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar26 = plStack_f8 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(plVar10 + 0xb) = 2;
  plStack_130 = plVar10;
  FUN_10a688c1c(&plStack_110);
  FUN_10a059354(&lStack_150,plVar8,param_1 + 0x20);
  lVar17 = plVar12[0x44];
  if (lVar17 == 0) {
    plVar8 = (long *)0xb0;
    __Znwm();
    plVar8[2] = 0;
    plVar8[1] = 0x200000006;
    *(undefined2 *)(plVar8 + 3) = 4;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = (long)(plVar8 + 3);
    plVar8[0x12] = 0;
    *plVar8 = (long)&PTR_FUN_110c14b20;
    *(undefined1 *)(plVar8 + 0x13) = 0;
    *(undefined1 *)(plVar8 + 0x15) = 0;
    plStack_110 = plVar8;
    plStack_108 = plVar8;
    FUN_10a6f143c(&puStack_90,plVar12[10],&lStack_128);
    FUN_10a712610(plVar8,&puStack_90);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar17 = *plVar10;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_110;
    plStack_110 = (long *)0x0;
    if ((plStack_108 != (long *)0x0) &&
       (func_0x0001092b4274(&plStack_108,plStack_108), plStack_110 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_110 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plStack_110 + 8))();
        }
      }
    }
  }
  else {
    lVar22 = plVar12[10];
    lVar24 = plVar12[0x45];
    if (lVar24 != 0) {
      plVar8 = (long *)(lVar24 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (cStack_111 < '\0') {
      lStack_b8 = lVar17;
      plStack_b0 = (long *)lVar24;
      func_0x000107c3192c(&lStack_d0,lStack_128,lStack_120);
    }
    else {
      lStack_c8 = lStack_120;
      lStack_d0 = lStack_128;
      uStack_c0 = CONCAT17(cStack_111,uStack_118);
      lStack_b8 = lVar17;
      plStack_b0 = (long *)lVar24;
    }
    lVar7 = plVar12[0x31];
    plVar10 = (long *)0x108;
    __Znwm();
    *plVar10 = (long)FUN_10a73a3c8;
    plVar10[1] = (long)FUN_10a73aaa4;
    plVar10[0xf] = lVar17;
    *(char *)((long)plVar10 + 0x101) = (char)lVar7;
    plVar10[0x1f] = lVar22;
    plVar10[0x10] = lVar24;
    lStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    if (uStack_c0 < 0) {
      func_0x000107c3192c(plVar10 + 9,lStack_d0,lStack_c8);
    }
    else {
      plVar10[10] = lStack_c8;
      plVar10[9] = lStack_d0;
      plVar10[0xb] = uStack_c0;
    }
    FUN_10a711e58(plVar10 + 2);
    plVar8 = (long *)plVar10[7];
    if (plVar8 != (long *)0x0) {
      plVar26 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *plVar26 = *plVar26 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f143c(plVar10 + 0x11,lVar22,plVar10 + 9);
    uVar25 = plVar10[0x11];
    cVar4 = *(char *)(uVar25 + 0xe0);
    *(undefined1 *)(plVar10 + 0x19) = 7;
    FUN_10a6f3b28(&plStack_110,lVar22,plVar10 + 0x19,&UNK_10f66f9cb);
    FUN_10a6ebaf8(uVar25,plStack_110);
    plVar26 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar11 = plStack_108 + 1;
      do {
        lVar17 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    bVar6 = cVar4 != '\x01';
    if (bVar6 && (uVar25 & 1) == 0) {
      puVar16 = (undefined8 *)0x38;
      __Znwm();
      lStack_80 = -0x7fffffffffffffc8;
      plStack_88 = (long *)0x37;
      puVar16[1] = 0x6c20726f206d6f74;
      *puVar16 = 0x73756320796c6e4f;
      puVar16[3] = 0x6f697461636f6c20;
      puVar16[2] = 0x646c726f77736e65;
      puVar16[5] = 0x646574726f707075;
      puVar16[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar16 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar16 + 0x37) = 0;
      puStack_90 = puVar16;
      FUN_10a6e9574(&pppuStack_a8,*(undefined1 *)(plVar10[0x11] + 0xe0));
      plVar9 = plStack_a0;
      ppppuVar20 = (undefined8 ****)pppuStack_a8;
      if (-1 < (char)uStack_98._7_1_) {
        plVar9 = (long *)(ulong)uStack_98._7_1_;
        ppppuVar20 = &pppuStack_a8;
      }
      ppuVar13 = &puStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar13,ppppuVar20,plVar9);
      plStack_108 = ppuVar13[1];
      plStack_110 = *ppuVar13;
      puStack_100 = ppuVar13[2];
      ppuVar13[1] = (undefined8 *)0x0;
      ppuVar13[2] = (undefined8 *)0x0;
      *ppuVar13 = (undefined8 *)0x0;
      FUN_10a0029c0(&plStack_110);
      goto LAB_10a723b2c;
    }
    if (bVar6) {
LAB_10a723010:
      plVar26 = (long *)plVar10[0x10];
      plVar10[0x18] = plVar10[0x10];
      plVar10[0x17] = plVar10[0xf];
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f6038(plVar10[0x1f],plVar10 + 0x17,plVar10 + 0x11,
                    *(undefined1 *)((long)plVar10 + 0x101));
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          lVar17 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      FUN_10a6dee28(plVar10 + 2,plVar10 + 0x11);
      plVar26 = (long *)plVar10[0x12];
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          lVar17 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      FUN_10a724a78(plVar10[0x1f],plVar10 + 0xf);
      func_0x000109d1a1d0(plVar10 + 2);
      if (*(char *)((long)plVar10 + 0x5f) < '\0') {
        __ZdlPv(plVar10[9]);
      }
      plVar26 = (long *)plVar10[0x10];
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          lVar17 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      __ZdlPv(plVar10);
    }
    else {
      plVar10[0x14] = plVar10[0x10];
      plVar10[0x13] = plVar10[0xf];
      if (plVar10[0x10] != 0) {
        plVar26 = (long *)(plVar10[0x10] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar6) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(char *)((long)plVar10 + 0x5f) < '\0') {
        func_0x000107c3192c(plVar10 + 0xc,plVar10[9],plVar10[10]);
      }
      else {
        plVar10[0xd] = plVar10[10];
        plVar10[0xc] = plVar10[9];
        plVar10[0xe] = plVar10[0xb];
      }
      plVar26 = (long *)plVar10[0x12];
      plVar10[0x16] = plVar10[0x12];
      plVar10[0x15] = plVar10[0x11];
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f509c(plVar10 + 0x19,lVar22,plVar10 + 0x13,plVar10 + 0xc,plVar10 + 0x15);
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          lVar17 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      if (*(char *)((long)plVar10 + 0x77) < '\0') {
        __ZdlPv(plVar10[0xc]);
      }
      plVar26 = (long *)plVar10[0x14];
      if (plVar26 != (long *)0x0) {
        plVar11 = plVar26 + 1;
        do {
          lVar17 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      plVar10[0x1c] = 0;
      *(undefined1 *)(plVar10 + 0x20) = 0;
      plVar26 = plVar10 + 0x1c;
      FUN_10a6de354(plVar26,plVar10);
      if (((ulong)plVar26 & 1) == 0) {
        lVar17 = plVar10[0x1c];
        plVar10[0x1b] = lVar17;
        plVar10[0x1c] = 0;
        if (lVar17 == 0) {
          if ((plVar10[0x1f] == 0) || (lVar17 = *(long *)(plVar10[0x1f] + 0x100), lVar17 == 0)) {
            plVar10[0x1a] = 0;
            plVar10[0x1b] = 0;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x1a8);
            plVar10[0x1a] = lVar17;
            if (lVar17 != 0) {
              plVar26 = (long *)(lVar17 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar6) {
                  *plVar26 = *plVar26 + 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar26 = (long *)plVar10[0x1b];
              if (plVar26 != (long *)0x0) {
                puVar1 = (ulong *)(plVar26 + 1);
                do {
                  uVar25 = *puVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar25 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar25 & 0x1fffffffc) == 4) {
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                  do {
                    uVar25 = *puVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar25 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar25 - 1 == 0) {
                    (**(code **)(*plVar26 + 8))(plVar26);
                  }
                }
              }
            }
          }
        }
        else {
          plVar10[0x1a] = lVar17;
          plVar10[0x1b] = 0;
        }
        plVar26 = (long *)plVar10[0x1c];
        if (plVar26 != (long *)0x0) {
          puVar1 = (ulong *)(plVar26 + 1);
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            do {
              uVar25 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar25 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar26 + 8))(plVar26);
            }
          }
        }
        lVar17 = plVar10[0x1a];
        plVar10[0x1e] = lVar17;
        if (lVar17 == 0) {
LAB_10a722de0:
          lVar17 = plVar10[0x19];
          plVar10[0x1d] = lVar17;
          if (lVar17 != 0) {
            plVar26 = (long *)(lVar17 + 8);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *plVar26 = *plVar26 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          plVar26 = (long *)(lVar17 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar6) {
              *plVar26 = *plVar26 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (plVar10[0x1e] == 0) goto LAB_10a722de0;
          FUN_10a7040d4(plVar10 + 0x1d,plVar10 + 0x1e,plVar10 + 0x19);
        }
        plVar10[0x1c] = plVar10[0x1d];
        plVar26 = (long *)(plVar10[0x1d] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar6) {
            *plVar26 = *plVar26 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(plVar10[0x1c] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(plVar10 + 0x20) = 1;
          lVar17 = plVar10[0x1c];
          plVar26 = (long *)(lVar17 + 0x10);
          puVar16 = (undefined8 *)plVar10[3];
          do {
            lVar22 = *plVar26;
            if (lVar22 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *plVar26 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plStack_110 = (long *)0x0;
                plStack_108 = plVar10;
                puStack_100 = puVar16;
                func_0x000109d1b588(lVar17 + 0x18,&plStack_110);
                *(undefined8 *)(lVar17 + 0x10) = 0;
                goto LAB_10a723124;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar22 >> 1 & 1) == 0);
        }
        plVar26 = (long *)plVar10[0x1c];
        if (((uint)*(undefined8 *)(plVar10[0x1c] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar26 + 0x12);
          goto LAB_10a723b2c;
        }
        if ((*(byte *)(plVar26 + 0x15) & 1) == 0) goto LAB_10a723b2c;
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar26 + 8))();
          }
        }
        plVar26 = (long *)plVar10[0x1d];
        if (plVar26 != (long *)0x0) {
          puVar1 = (ulong *)(plVar26 + 1);
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            do {
              uVar25 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar25 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar26 + 8))();
            }
          }
        }
        plVar26 = (long *)plVar10[0x1e];
        if (plVar26 != (long *)0x0) {
          puVar1 = (ulong *)(plVar26 + 1);
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            do {
              uVar25 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar25 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar26 + 8))(plVar26);
            }
          }
        }
        plVar26 = (long *)plVar10[0x1a];
        if (plVar26 != (long *)0x0) {
          puVar1 = (ulong *)(plVar26 + 1);
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            do {
              uVar25 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar25 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar26 + 8))(plVar26);
            }
          }
        }
        plVar26 = (long *)plVar10[0x19];
        if (plVar26 != (long *)0x0) {
          puVar1 = (ulong *)(plVar26 + 1);
          do {
            uVar25 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar25 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            do {
              uVar25 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar25 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar26 + 8))();
            }
          }
        }
        goto LAB_10a723010;
      }
    }
LAB_10a723124:
    if (uStack_c0._7_1_ < '\0') {
      __ZdlPv(lStack_d0);
    }
    plVar10 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar26 = plStack_b0 + 1;
      do {
        lVar17 = *plVar26;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *plVar26 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  lVar17 = plVar12[0x40];
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)0x70;
  __Znwm();
  *plVar10 = (long)FUN_10a73b1fc;
  plVar10[1] = (long)FUN_10a73b4e8;
  FUN_10a711e58(plVar10 + 2);
  plVar26 = (long *)plVar10[7];
  if (plVar26 != (long *)0x0) {
    plVar11 = plVar26 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10[0xb] = (long)plVar8;
  plVar10[9] = lVar17;
  *(undefined1 *)(plVar10 + 10) = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  plVar11 = plVar10 + 9;
  FUN_10a6fd0e0(plVar11,plVar10);
  if (((ulong)plVar11 & 1) == 0) {
    FUN_10a706bbc(plVar10 + 0xc,plVar10 + 0xb);
    plVar10[9] = plVar10[0xc];
    plVar11 = (long *)(plVar10[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar10[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar10 + 0xd) = 1;
      lVar22 = plVar10[9];
      plVar11 = (long *)(lVar22 + 0x10);
      lVar17 = plVar10[3];
      do {
        lVar24 = *plVar11;
        if (lVar24 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            plStack_110 = (long *)0x0;
            plStack_108 = plVar10;
            puStack_100 = (undefined8 *)lVar17;
            func_0x000109d1b588(lVar22 + 0x18,&plStack_110);
            *(undefined8 *)(lVar22 + 0x10) = 0;
            goto LAB_10a723390;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar24 >> 1 & 1) == 0);
    }
    lVar17 = plVar10[9];
    if (((uint)*(undefined8 *)(plVar10[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar17 + 0x90);
      goto LAB_10a723b2c;
    }
    if ((*(byte *)(lVar17 + 0xa8) & 1) == 0) goto LAB_10a723b2c;
    FUN_10a6dee28(plVar10 + 2,lVar17 + 0x98);
    plVar11 = (long *)plVar10[9];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar10[0xc];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar10[0xb];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar10 + 2);
    __ZdlPv(plVar10);
  }
LAB_10a723390:
  plVar10 = plStack_130;
  plVar11 = plStack_138;
  lVar17 = *(long *)(plVar12[10] + 0x870);
  ppppuVar20 = *(undefined8 *****)(lVar17 + 0x38);
  if (ppppuVar20 == (undefined8 ****)0x0) {
    ppppuVar20 = *(undefined8 *****)(lVar17 + 0x28);
    plStack_a0 = *(long **)(lVar17 + 0x30);
  }
  else {
    plStack_a0 = *(long **)(lVar17 + 0x40);
  }
  if (plStack_a0 != (long *)0x0) {
    plVar27 = plStack_a0 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *plVar27 = *plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar8 != (long *)0x0) {
    plVar27 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *plVar27 = *plVar27 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar27 = (long *)plVar12[0x45];
  puVar16 = (undefined8 *)plVar12[0x44];
  if (plVar27 != (long *)0x0) {
    plVar12 = (long *)((long)plVar27 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_f0 = plStack_138;
  plStack_e8 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar12 = plStack_130 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_d8 = plStack_148;
  lStack_e0 = lStack_150;
  if (plStack_148 != (long *)0x0) {
    plVar12 = plStack_148 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)0xa8;
  plStack_110 = plVar26;
  plStack_108 = plVar8;
  puStack_100 = puVar16;
  plStack_f8 = plVar27;
  pppuStack_a8 = ppppuVar20;
  __Znwm();
  *plVar12 = (long)FUN_10a73b80c;
  plVar12[1] = (long)FUN_10a73bb98;
  func_0x0001092ba17c(plVar12 + 2);
  plVar26 = (long *)plVar12[7];
  if (plVar26 != (long *)0x0) {
    plVar2 = plVar26 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_e8;
      plVar11 = plStack_f0;
      puVar16 = puStack_100;
      plVar27 = plStack_f8;
    } while (cVar4 != '\0');
  }
  plVar12[10] = (long)plStack_108;
  plVar12[9] = (long)plStack_110;
  plStack_108 = (long *)0x0;
  plStack_110 = (long *)0x0;
  plVar12[0xc] = (long)plVar27;
  plVar12[0xb] = (long)puVar16;
  plStack_f8 = (long *)0x0;
  puStack_100 = (undefined8 *)0x0;
  plVar12[0xd] = (long)plVar11;
  plVar12[0xe] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12[0x10] = (long)plStack_d8;
  plVar12[0xf] = lStack_e0;
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12[0x11] = (long)ppppuVar20;
  *(undefined1 *)(plVar12 + 0x12) = 0;
  *(undefined1 *)(plVar12 + 0x14) = 0;
  plVar10 = plVar12 + 0x11;
  func_0x0001092ba064(plVar10,plVar12);
  if (((ulong)plVar10 & 1) == 0) {
    FUN_10a706f5c(plVar12 + 0x13,plVar12 + 9);
    plVar12[0x11] = plVar12[0x13];
    plVar10 = (long *)(plVar12[0x13] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar12[0x11] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar12 + 0x14) = 1;
      lVar22 = plVar12[0x11];
      plVar10 = (long *)(lVar22 + 0x10);
      lVar17 = plVar12[3];
      do {
        lVar24 = *plVar10;
        if (lVar24 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_90 = (undefined8 *)0x0;
            plStack_88 = plVar12;
            lStack_80 = lVar17;
            func_0x000109d1b588(lVar22 + 0x18,&puStack_90);
            *(undefined8 *)(lVar22 + 0x10) = 0;
            goto joined_r0x00010a7237e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar24 >> 1 & 1) == 0);
    }
    plVar10 = (long *)plVar12[0x11];
    if (((uint)*(undefined8 *)(plVar12[0x11] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar10 + 0x12);
LAB_10a723b2c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a723b30);
      (*pcVar5)();
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar12[0x13];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x0001092ba100(plVar12 + 2);
    plVar10 = (long *)plVar12[0x10];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar17 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[0xe];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar17 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[0xc];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar17 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[10];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar12[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar25 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar12 + 2);
    __ZdlPv(plVar12);
  }
joined_r0x00010a7237e8:
  if (plVar26 != (long *)0x0) {
    puVar1 = (ulong *)(plVar26 + 1);
    do {
      uVar25 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar25 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar25 & 0x1fffffffc) == 4) {
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar25 - 1 == 0) {
        (**(code **)(*plVar26 + 8))(plVar26);
      }
    }
  }
  plVar12 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar10 = plStack_e8 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar10 = plStack_f8 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_108 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_108 + 1);
    do {
      uVar25 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar25 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar25 & 0x1fffffffc) == 4) {
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar25 - 1 == 0) {
        (**(code **)(*plStack_108 + 8))();
      }
    }
  }
  if (plStack_110 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_110 + 1);
    do {
      uVar25 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar25 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar25 & 0x1fffffffc) == 4) {
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar25 - 1 == 0) {
        (**(code **)(*plStack_110 + 8))();
      }
    }
  }
  plVar12 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar10 = plStack_a0 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar25 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar25 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar25 & 0x1fffffffc) == 4) {
      do {
        uVar25 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar25 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar25 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  if (plStack_148 != (long *)0x0) {
    plVar8 = plStack_148 + 1;
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  plVar8 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar12 = plStack_130 + 1;
    do {
      lVar17 = *plVar12;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (cStack_111 < '\0') {
    __ZdlPv(lStack_128);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar17 = plVar9[0x59];
  uVar25 = lVar17 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar17 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  puVar16 = (undefined8 *)*plVar8;
  puVar19 = (undefined8 *)plVar9[0x4c];
  lVar17 = (long)puVar19 - (long)puVar16;
  uVar21 = lVar17 >> 4;
  if (uVar21 < uVar25) {
    uVar23 = uVar25 - uVar21;
    lVar22 = plVar9[0x4d];
    if ((ulong)(lVar22 - (long)puVar19 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar15 = lVar22 - (long)puVar16 >> 3;
        if (uVar15 <= uVar25) {
          uVar15 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar22 - (long)puVar16)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar15 >> 0x3c == 0) {
          lVar7 = uVar15 << 4;
          __Znwm();
          lVar24 = lVar7 + lVar17;
          _bzero(lVar24,uVar23 * 0x10);
          lVar18 = lVar24 + uVar21 * -0x10;
          _memcpy(lVar18,puVar16,lVar17);
          *plVar8 = lVar18;
          plVar9[0x4c] = lVar24 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar15 * 0x10;
          uStack_98 = puVar16;
          puStack_90 = puVar16;
          plStack_88 = puVar16;
          lStack_80 = lVar22;
          func_0x00010988c1b8(&uStack_98);
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
    _bzero(puVar19,uVar23 * 0x10);
    plVar9[0x4c] = (long)(puVar19 + uVar23 * 2);
  }
  else if (uVar25 < uVar21) {
    while (puVar19 != puVar16 + uVar25 * 2) {
      puVar19 = puVar19 + -2;
      func_0x00010988c204(puVar19);
    }
    plVar9[0x4c] = (long)(puVar16 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10a7227d8; end: 10a724127;  */

/* WARNING: Removing unreachable block (ram,0x00010a723248) */
/* WARNING: Removing unreachable block (ram,0x00010a722e54) */
/* WARNING: Removing unreachable block (ram,0x00010a723578) */

void FUN_10a7227d8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long lStack_140;
  long *plStack_138;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  undefined7 uStack_108;
  char cStack_101;
  long *plStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 ***pppuStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar12 = param_2;
  FUN_10a72274c(param_2,param_3);
  FUN_10a724128(param_5);
  func_0x000109898570(&lStack_118,param_2,param_4);
  FUN_10a72414c(&plStack_100,param_2,param_4 + 0x10);
  plVar9 = (long *)0x60;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110c144c0;
  plStack_128 = plVar9 + 3;
  plVar9[4] = (long)plStack_f8;
  *plStack_128 = (long)plStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar10 = plStack_f8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9[6] = (long)plStack_e8;
  plVar9[5] = (long)puStack_f0;
  if (plStack_e8 != (long *)0x0) {
    plVar10 = plStack_e8 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(plVar9 + 0xb) = 2;
  plStack_120 = plVar9;
  FUN_10a688c1c(&plStack_100);
  FUN_10a059354(&lStack_140,param_2,param_4 + 0x20);
  lVar16 = plVar12[0x44];
  if (lVar16 == 0) {
    plVar9 = (long *)0xb0;
    __Znwm();
    plVar9[2] = 0;
    plVar9[1] = 0x200000006;
    *(undefined2 *)(plVar9 + 3) = 4;
    plVar9[5] = 0;
    plVar9[4] = 0;
    plVar9[7] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[0xf] = 0;
    plVar9[0xe] = 0;
    plVar9[0x10] = 0;
    plVar9[0x11] = (long)(plVar9 + 3);
    plVar9[0x12] = 0;
    *plVar9 = (long)&PTR_FUN_110c14b20;
    *(undefined1 *)(plVar9 + 0x13) = 0;
    *(undefined1 *)(plVar9 + 0x15) = 0;
    plStack_100 = plVar9;
    plStack_f8 = plVar9;
    FUN_10a6f143c(&puStack_80,plVar12[10],&lStack_118);
    FUN_10a712610(plVar9,&puStack_80);
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar10 = plStack_78 + 1;
      do {
        lVar16 = *plVar10;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_100;
    plStack_100 = (long *)0x0;
    if ((plStack_f8 != (long *)0x0) &&
       (func_0x0001092b4274(&plStack_f8,plStack_f8), plStack_100 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_100 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plStack_100 + 8))();
        }
      }
    }
  }
  else {
    lVar21 = plVar12[10];
    lVar23 = plVar12[0x45];
    if (lVar23 != 0) {
      plVar9 = (long *)(lVar23 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (cStack_101 < '\0') {
      lStack_a8 = lVar16;
      plStack_a0 = (long *)lVar23;
      func_0x000107c3192c(&lStack_c0,lStack_118,lStack_110);
    }
    else {
      lStack_b8 = lStack_110;
      lStack_c0 = lStack_118;
      uStack_b0 = CONCAT17(cStack_101,uStack_108);
      lStack_a8 = lVar16;
      plStack_a0 = (long *)lVar23;
    }
    lVar7 = plVar12[0x31];
    plVar10 = (long *)0x108;
    __Znwm();
    *plVar10 = (long)FUN_10a73a3c8;
    plVar10[1] = (long)FUN_10a73aaa4;
    plVar10[0xf] = lVar16;
    *(char *)((long)plVar10 + 0x101) = (char)lVar7;
    plVar10[0x1f] = lVar21;
    plVar10[0x10] = lVar23;
    lStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    if (uStack_b0 < 0) {
      func_0x000107c3192c(plVar10 + 9,lStack_c0,lStack_b8);
    }
    else {
      plVar10[10] = lStack_b8;
      plVar10[9] = lStack_c0;
      plVar10[0xb] = uStack_b0;
    }
    FUN_10a711e58(plVar10 + 2);
    plVar9 = (long *)plVar10[7];
    if (plVar9 != (long *)0x0) {
      plVar25 = plVar9 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *plVar25 = *plVar25 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6f143c(plVar10 + 0x11,lVar21,plVar10 + 9);
    uVar24 = plVar10[0x11];
    cVar4 = *(char *)(uVar24 + 0xe0);
    *(undefined1 *)(plVar10 + 0x19) = 7;
    FUN_10a6f3b28(&plStack_100,lVar21,plVar10 + 0x19,&UNK_10f66f9cb);
    FUN_10a6ebaf8(uVar24,plStack_100);
    plVar25 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar11 = plStack_f8 + 1;
      do {
        lVar16 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    bVar6 = cVar4 != '\x01';
    if (bVar6 && (uVar24 & 1) == 0) {
      puVar15 = (undefined8 *)0x38;
      __Znwm();
      lStack_70 = -0x7fffffffffffffc8;
      plStack_78 = (long *)0x37;
      puVar15[1] = 0x6c20726f206d6f74;
      *puVar15 = 0x73756320796c6e4f;
      puVar15[3] = 0x6f697461636f6c20;
      puVar15[2] = 0x646c726f77736e65;
      puVar15[5] = 0x646574726f707075;
      puVar15[4] = 0x732065726120736e;
      *(undefined8 *)((long)puVar15 + 0x2f) = 0x20746f67202d2064;
      *(undefined1 *)((long)puVar15 + 0x37) = 0;
      puStack_80 = puVar15;
      FUN_10a6e9574(&pppuStack_98,*(undefined1 *)(plVar10[0x11] + 0xe0));
      plVar8 = plStack_90;
      ppppuVar19 = (undefined8 ****)pppuStack_98;
      if (-1 < (char)uStack_88._7_1_) {
        plVar8 = (long *)(ulong)uStack_88._7_1_;
        ppppuVar19 = &pppuStack_98;
      }
      ppuVar13 = &puStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar13,ppppuVar19,plVar8);
      plStack_f8 = ppuVar13[1];
      plStack_100 = *ppuVar13;
      puStack_f0 = ppuVar13[2];
      ppuVar13[1] = (undefined8 *)0x0;
      ppuVar13[2] = (undefined8 *)0x0;
      *ppuVar13 = (undefined8 *)0x0;
      FUN_10a0029c0(&plStack_100);
      goto LAB_10a723b2c;
    }
    if (bVar6) {
LAB_10a723010:
      plVar25 = (long *)plVar10[0x10];
      plVar10[0x18] = plVar10[0x10];
      plVar10[0x17] = plVar10[0xf];
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f6038(plVar10[0x1f],plVar10 + 0x17,plVar10 + 0x11,
                    *(undefined1 *)((long)plVar10 + 0x101));
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      FUN_10a6dee28(plVar10 + 2,plVar10 + 0x11);
      plVar25 = (long *)plVar10[0x12];
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      FUN_10a724a78(plVar10[0x1f],plVar10 + 0xf);
      func_0x000109d1a1d0(plVar10 + 2);
      if (*(char *)((long)plVar10 + 0x5f) < '\0') {
        __ZdlPv(plVar10[9]);
      }
      plVar25 = (long *)plVar10[0x10];
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      __ZdlPv(plVar10);
    }
    else {
      plVar10[0x14] = plVar10[0x10];
      plVar10[0x13] = plVar10[0xf];
      if (plVar10[0x10] != 0) {
        plVar25 = (long *)(plVar10[0x10] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = *plVar25 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(char *)((long)plVar10 + 0x5f) < '\0') {
        func_0x000107c3192c(plVar10 + 0xc,plVar10[9],plVar10[10]);
      }
      else {
        plVar10[0xd] = plVar10[10];
        plVar10[0xc] = plVar10[9];
        plVar10[0xe] = plVar10[0xb];
      }
      plVar25 = (long *)plVar10[0x12];
      plVar10[0x16] = plVar10[0x12];
      plVar10[0x15] = plVar10[0x11];
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6f509c(plVar10 + 0x19,lVar21,plVar10 + 0x13,plVar10 + 0xc,plVar10 + 0x15);
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      if (*(char *)((long)plVar10 + 0x77) < '\0') {
        __ZdlPv(plVar10[0xc]);
      }
      plVar25 = (long *)plVar10[0x14];
      if (plVar25 != (long *)0x0) {
        plVar11 = plVar25 + 1;
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      plVar10[0x1c] = 0;
      *(undefined1 *)(plVar10 + 0x20) = 0;
      plVar25 = plVar10 + 0x1c;
      FUN_10a6de354(plVar25,plVar10);
      if (((ulong)plVar25 & 1) == 0) {
        lVar16 = plVar10[0x1c];
        plVar10[0x1b] = lVar16;
        plVar10[0x1c] = 0;
        if (lVar16 == 0) {
          if ((plVar10[0x1f] == 0) || (lVar16 = *(long *)(plVar10[0x1f] + 0x100), lVar16 == 0)) {
            plVar10[0x1a] = 0;
            plVar10[0x1b] = 0;
          }
          else {
            lVar16 = *(long *)(lVar16 + 0x1a8);
            plVar10[0x1a] = lVar16;
            if (lVar16 != 0) {
              plVar25 = (long *)(lVar16 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar6) {
                  *plVar25 = *plVar25 + 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar25 = (long *)plVar10[0x1b];
              if (plVar25 != (long *)0x0) {
                puVar1 = (ulong *)(plVar25 + 1);
                do {
                  uVar24 = *puVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar24 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar24 & 0x1fffffffc) == 4) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  do {
                    uVar24 = *puVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar24 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar24 - 1 == 0) {
                    (**(code **)(*plVar25 + 8))(plVar25);
                  }
                }
              }
            }
          }
        }
        else {
          plVar10[0x1a] = lVar16;
          plVar10[0x1b] = 0;
        }
        plVar25 = (long *)plVar10[0x1c];
        if (plVar25 != (long *)0x0) {
          puVar1 = (ulong *)(plVar25 + 1);
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            do {
              uVar24 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar25 + 8))(plVar25);
            }
          }
        }
        lVar16 = plVar10[0x1a];
        plVar10[0x1e] = lVar16;
        if (lVar16 == 0) {
LAB_10a722de0:
          lVar16 = plVar10[0x19];
          plVar10[0x1d] = lVar16;
          if (lVar16 != 0) {
            plVar25 = (long *)(lVar16 + 8);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = *plVar25 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          plVar25 = (long *)(lVar16 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = *plVar25 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (plVar10[0x1e] == 0) goto LAB_10a722de0;
          FUN_10a7040d4(plVar10 + 0x1d,plVar10 + 0x1e,plVar10 + 0x19);
        }
        plVar10[0x1c] = plVar10[0x1d];
        plVar25 = (long *)(plVar10[0x1d] + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = *plVar25 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(plVar10[0x1c] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(plVar10 + 0x20) = 1;
          lVar16 = plVar10[0x1c];
          plVar25 = (long *)(lVar16 + 0x10);
          puVar15 = (undefined8 *)plVar10[3];
          do {
            lVar21 = *plVar25;
            if (lVar21 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plStack_100 = (long *)0x0;
                plStack_f8 = plVar10;
                puStack_f0 = puVar15;
                func_0x000109d1b588(lVar16 + 0x18,&plStack_100);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                goto LAB_10a723124;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar21 >> 1 & 1) == 0);
        }
        plVar25 = (long *)plVar10[0x1c];
        if (((uint)*(undefined8 *)(plVar10[0x1c] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar25 + 0x12);
          goto LAB_10a723b2c;
        }
        if ((*(byte *)(plVar25 + 0x15) & 1) == 0) goto LAB_10a723b2c;
        puVar1 = (ulong *)(plVar25 + 1);
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*plVar25 + 8))();
          }
        }
        plVar25 = (long *)plVar10[0x1d];
        if (plVar25 != (long *)0x0) {
          puVar1 = (ulong *)(plVar25 + 1);
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            do {
              uVar24 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar25 + 8))();
            }
          }
        }
        plVar25 = (long *)plVar10[0x1e];
        if (plVar25 != (long *)0x0) {
          puVar1 = (ulong *)(plVar25 + 1);
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            do {
              uVar24 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar25 + 8))(plVar25);
            }
          }
        }
        plVar25 = (long *)plVar10[0x1a];
        if (plVar25 != (long *)0x0) {
          puVar1 = (ulong *)(plVar25 + 1);
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            do {
              uVar24 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar25 + 8))(plVar25);
            }
          }
        }
        plVar25 = (long *)plVar10[0x19];
        if (plVar25 != (long *)0x0) {
          puVar1 = (ulong *)(plVar25 + 1);
          do {
            uVar24 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar24 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar24 & 0x1fffffffc) == 4) {
            do {
              uVar24 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar24 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar24 - 1 == 0) {
              (**(code **)(*plVar25 + 8))();
            }
          }
        }
        goto LAB_10a723010;
      }
    }
LAB_10a723124:
    if (uStack_b0._7_1_ < '\0') {
      __ZdlPv(lStack_c0);
    }
    plVar10 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar25 = plStack_a0 + 1;
      do {
        lVar16 = *plVar25;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *plVar25 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  lVar16 = plVar12[0x40];
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)0x70;
  __Znwm();
  *plVar10 = (long)FUN_10a73b1fc;
  plVar10[1] = (long)FUN_10a73b4e8;
  FUN_10a711e58(plVar10 + 2);
  plVar25 = (long *)plVar10[7];
  if (plVar25 != (long *)0x0) {
    plVar11 = plVar25 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10[0xb] = (long)plVar9;
  plVar10[9] = lVar16;
  *(undefined1 *)(plVar10 + 10) = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  plVar11 = plVar10 + 9;
  FUN_10a6fd0e0(plVar11,plVar10);
  if (((ulong)plVar11 & 1) == 0) {
    FUN_10a706bbc(plVar10 + 0xc,plVar10 + 0xb);
    plVar10[9] = plVar10[0xc];
    plVar11 = (long *)(plVar10[0xc] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar10[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar10 + 0xd) = 1;
      lVar21 = plVar10[9];
      plVar11 = (long *)(lVar21 + 0x10);
      lVar16 = plVar10[3];
      do {
        lVar23 = *plVar11;
        if (lVar23 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            plStack_100 = (long *)0x0;
            plStack_f8 = plVar10;
            puStack_f0 = (undefined8 *)lVar16;
            func_0x000109d1b588(lVar21 + 0x18,&plStack_100);
            *(undefined8 *)(lVar21 + 0x10) = 0;
            goto LAB_10a723390;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar23 >> 1 & 1) == 0);
    }
    lVar16 = plVar10[9];
    if (((uint)*(undefined8 *)(plVar10[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar16 + 0x90);
      goto LAB_10a723b2c;
    }
    if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) goto LAB_10a723b2c;
    FUN_10a6dee28(plVar10 + 2,lVar16 + 0x98);
    plVar11 = (long *)plVar10[9];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar10[0xc];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)plVar10[0xb];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar10 + 2);
    __ZdlPv(plVar10);
  }
LAB_10a723390:
  plVar10 = plStack_120;
  plVar11 = plStack_128;
  lVar16 = *(long *)(plVar12[10] + 0x870);
  ppppuVar19 = *(undefined8 *****)(lVar16 + 0x38);
  if (ppppuVar19 == (undefined8 ****)0x0) {
    ppppuVar19 = *(undefined8 *****)(lVar16 + 0x28);
    plStack_90 = *(long **)(lVar16 + 0x30);
  }
  else {
    plStack_90 = *(long **)(lVar16 + 0x40);
  }
  if (plStack_90 != (long *)0x0) {
    plVar26 = plStack_90 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar9 != (long *)0x0) {
    plVar26 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = *plVar26 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar26 = (long *)plVar12[0x45];
  puVar15 = (undefined8 *)plVar12[0x44];
  if (plVar26 != (long *)0x0) {
    plVar12 = (long *)((long)plVar26 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_e0 = plStack_128;
  plStack_d8 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar12 = plStack_120 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_c8 = plStack_138;
  lStack_d0 = lStack_140;
  if (plStack_138 != (long *)0x0) {
    plVar12 = plStack_138 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)0xa8;
  plStack_100 = plVar25;
  plStack_f8 = plVar9;
  puStack_f0 = puVar15;
  plStack_e8 = plVar26;
  pppuStack_98 = ppppuVar19;
  __Znwm();
  *plVar12 = (long)FUN_10a73b80c;
  plVar12[1] = (long)FUN_10a73bb98;
  func_0x0001092ba17c(plVar12 + 2);
  plVar25 = (long *)plVar12[7];
  if (plVar25 != (long *)0x0) {
    plVar2 = plVar25 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_d8;
      plVar11 = plStack_e0;
      puVar15 = puStack_f0;
      plVar26 = plStack_e8;
    } while (cVar4 != '\0');
  }
  plVar12[10] = (long)plStack_f8;
  plVar12[9] = (long)plStack_100;
  plStack_f8 = (long *)0x0;
  plStack_100 = (long *)0x0;
  plVar12[0xc] = (long)plVar26;
  plVar12[0xb] = (long)puVar15;
  plStack_e8 = (long *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  plVar12[0xd] = (long)plVar11;
  plVar12[0xe] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12[0x10] = (long)plStack_c8;
  plVar12[0xf] = lStack_d0;
  if (plStack_c8 != (long *)0x0) {
    plVar10 = plStack_c8 + 1;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12[0x11] = (long)ppppuVar19;
  *(undefined1 *)(plVar12 + 0x12) = 0;
  *(undefined1 *)(plVar12 + 0x14) = 0;
  plVar10 = plVar12 + 0x11;
  func_0x0001092ba064(plVar10,plVar12);
  if (((ulong)plVar10 & 1) == 0) {
    FUN_10a706f5c(plVar12 + 0x13,plVar12 + 9);
    plVar12[0x11] = plVar12[0x13];
    plVar10 = (long *)(plVar12[0x13] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(plVar12[0x11] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar12 + 0x14) = 1;
      lVar21 = plVar12[0x11];
      plVar10 = (long *)(lVar21 + 0x10);
      lVar16 = plVar12[3];
      do {
        lVar23 = *plVar10;
        if (lVar23 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puStack_80 = (undefined8 *)0x0;
            plStack_78 = plVar12;
            lStack_70 = lVar16;
            func_0x000109d1b588(lVar21 + 0x18,&puStack_80);
            *(undefined8 *)(lVar21 + 0x10) = 0;
            goto joined_r0x00010a7237e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar23 >> 1 & 1) == 0);
    }
    plVar10 = (long *)plVar12[0x11];
    if (((uint)*(undefined8 *)(plVar12[0x11] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar10 + 0x12);
LAB_10a723b2c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a723b30);
      (*pcVar5)();
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar12[0x13];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x0001092ba100(plVar12 + 2);
    plVar10 = (long *)plVar12[0x10];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar16 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[0xe];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar16 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[0xc];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar16 = *plVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar12[10];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar12[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar24 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(plVar12 + 2);
    __ZdlPv(plVar12);
  }
joined_r0x00010a7237e8:
  if (plVar25 != (long *)0x0) {
    puVar1 = (ulong *)(plVar25 + 1);
    do {
      uVar24 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar24 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar24 & 0x1fffffffc) == 4) {
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar24 - 1 == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
  }
  plVar12 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar10 = plStack_c8 + 1;
    do {
      lVar16 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      lVar16 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar10 = plStack_e8 + 1;
    do {
      lVar16 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_f8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_f8 + 1);
    do {
      uVar24 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar24 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar24 & 0x1fffffffc) == 4) {
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar24 - 1 == 0) {
        (**(code **)(*plStack_f8 + 8))();
      }
    }
  }
  if (plStack_100 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_100 + 1);
    do {
      uVar24 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar24 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar24 & 0x1fffffffc) == 4) {
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar24 - 1 == 0) {
        (**(code **)(*plStack_100 + 8))();
      }
    }
  }
  plVar12 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar10 = plStack_90 + 1;
    do {
      lVar16 = *plVar10;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar24 = *puVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar24 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar24 & 0x1fffffffc) == 4) {
      do {
        uVar24 = *puVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar24 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar24 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar12 = plStack_138 + 1;
    do {
      lVar16 = *plVar12;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
    }
  }
  plVar12 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar9 = plStack_120 + 1;
    do {
      lVar16 = *plVar9;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (cStack_101 < '\0') {
    __ZdlPv(lStack_118);
  }
  *param_1 = 0;
  plVar12 = plVar8 + 0x4b;
  lVar16 = plVar8[0x59];
  uVar24 = lVar16 - 1;
  plVar8[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar12[lVar16 + 2];
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  puVar15 = (undefined8 *)*plVar12;
  puVar18 = (undefined8 *)plVar8[0x4c];
  lVar16 = (long)puVar18 - (long)puVar15;
  uVar20 = lVar16 >> 4;
  if (uVar20 < uVar24) {
    uVar22 = uVar24 - uVar20;
    lVar21 = plVar8[0x4d];
    if ((ulong)(lVar21 - (long)puVar18 >> 4) < uVar22) {
      if (uVar24 >> 0x3c == 0) {
        uVar14 = lVar21 - (long)puVar15 >> 3;
        if (uVar14 <= uVar24) {
          uVar14 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)puVar15)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar12;
        if (uVar14 >> 0x3c == 0) {
          lVar7 = uVar14 << 4;
          __Znwm();
          lVar23 = lVar7 + lVar16;
          _bzero(lVar23,uVar22 * 0x10);
          lVar17 = lVar23 + uVar20 * -0x10;
          _memcpy(lVar17,puVar15,lVar16);
          *plVar12 = lVar17;
          plVar8[0x4c] = lVar23 + uVar22 * 0x10;
          plVar8[0x4d] = lVar7 + uVar14 * 0x10;
          uStack_88 = puVar15;
          puStack_80 = puVar15;
          plStack_78 = puVar15;
          lStack_70 = lVar21;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(puVar18,uVar22 * 0x10);
    plVar8[0x4c] = (long)(puVar18 + uVar22 * 2);
  }
  else if (uVar24 < uVar20) {
    while (puVar18 != puVar15 + uVar24 * 2) {
      puVar18 = puVar18 + -2;
      func_0x00010988c204(puVar18);
    }
    plVar8[0x4c] = (long)(puVar15 + uVar24 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar24;
  return;
}



/* Entry: 10a724128; end: 10a72414b;  */

void FUN_10a724128(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 extraout_x8;
  long *plStack_60;
  int iStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar2 = (long *)0x3;
  piVar6 = (int *)0x0;
  FUN_10a052ee0(3,0,param_1);
  if (*piVar6 == 7) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x98))();
    plVar4 = plVar2;
    plStack_48 = plVar3;
    (**(code **)(*plVar2 + 0x228))(plVar2,&plStack_48);
    if ((int)plVar4 != 0) {
      plVar3 = plVar2;
      (**(code **)(*plVar2 + 0x58))();
      lVar5 = plVar3[0x48];
      if ((lVar5 == 0) ||
         (___dynamic_cast(lVar5,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar5 == 0))
      goto LAB_10a724254;
      plStack_50 = plStack_48;
      plStack_48 = (long *)0x0;
      iStack_58 = 7;
      plStack_60 = plVar2;
      FUN_10a688ac0(extraout_x8,&plStack_60,*(undefined8 *)(lVar5 + 8));
      if ((3 < iStack_58) && (plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
    }
    if (plStack_48 != (long *)0x0) {
      (**(code **)*plStack_48)();
    }
    if (((ulong)plVar4 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a724254:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a724264);
  (*pcVar1)();
}



/* Entry: 10a72414c; end: 10a724283;  */

void FUN_10a72414c(undefined8 param_1,long *param_2,int *param_3)

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
      goto LAB_10a724254;
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
LAB_10a724254:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a724264);
  (*pcVar1)();
}



/* Entry: 10a724284; end: 10a724293;  */

void FUN_10a724284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c144c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a724294; end: 10a7242b3;  */

void FUN_10a724294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c144c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7242b4; end: 10a7242db;  */

undefined1  [16] FUN_10a7242b4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a7242d8);
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



/* Entry: 10a7242dc; end: 10a72438b;  */

void FUN_10a7242dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a72438c(param_1,param_2,FUN_10a6fb1c8,0,param_3,param_5);
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



/* Entry: 10a72438c; end: 10a724423;  */

void FUN_10a72438c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_84 [64];
  byte bStack_44;
  
  lVar1 = param_2;
  FUN_10a72274c(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_84);
  if ((bStack_44 & 1) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a368650(param_1,param_2,auStack_84);
  }
  return;
}



/* Entry: 10a724424; end: 10a7244d3;  */

void FUN_10a724424(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a72438c(param_1,param_2,FUN_10a6fb490,0,param_3,param_5);
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



/* Entry: 10a7244d4; end: 10a72458b;  */

void FUN_10a7244d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a72274c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x31];
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



/* Entry: 10a72458c; end: 10a72464b;  */

void FUN_10a72458c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7212e0(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x31) = (char)param_2;
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



/* Entry: 10a72464c; end: 10a724703;  */

void FUN_10a72464c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a72274c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a724820(param_1,param_2,plVar4 + 0x44);
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



/* Entry: 10a724704; end: 10a72481f;  */

void FUN_10a724704(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7212e0(param_2,param_3);
  FUN_10a7248bc(param_5);
  FUN_10a7248e0(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a6fb62c(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a724820; end: 10a7248bb;  */

void FUN_10a724820(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  ppuStack_38 = &PTR_DAT_110c25738;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7248bc; end: 10a7248df;  */

void FUN_10a7248bc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a724958(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a724944);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a7248e0; end: 10a724957;  */

void FUN_10a7248e0(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
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
    FUN_10a724958(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a724944);
  (*pcVar1)();
}


