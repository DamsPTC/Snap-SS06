/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aaff6a4; end: 10aaff75f;  */

void FUN_10aaff6a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x3e));
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



/* Entry: 10aaff760; end: 10aaff82f;  */

void FUN_10aaff760(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10aaff680(param_5);
  func_0x00010a068bd8(param_2,param_4);
  uVar2 = (uint)*(byte *)(plVar5 + 5);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    *(char *)((long)plVar5 + 0x3e) = (char)param_2;
  }
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



/* Entry: 10aaff830; end: 10aaff8eb;  */

void FUN_10aaff830(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x3f));
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



/* Entry: 10aaff8ec; end: 10aaff9bb;  */

void FUN_10aaff8ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10aaff680(param_5);
  func_0x00010a068bd8(param_2,param_4);
  uVar2 = (uint)*(byte *)(plVar5 + 5);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    *(char *)((long)plVar5 + 0x3f) = (char)param_2;
  }
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



/* Entry: 10aaff9bc; end: 10aaffa77;  */

void FUN_10aaff9bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 8));
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



/* Entry: 10aaffa78; end: 10aaffb47;  */

void FUN_10aaffa78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10aaff680(param_5);
  func_0x00010a068bd8(param_2,param_4);
  uVar2 = (uint)*(byte *)(plVar5 + 5);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    *(char *)(plVar5 + 8) = (char)param_2;
  }
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



/* Entry: 10aaffb48; end: 10aaffc03;  */

void FUN_10aaffb48(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x41));
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



/* Entry: 10aaffc04; end: 10aaffcd3;  */

void FUN_10aaffc04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10aaffcd4(param_5);
  func_0x00010a068bd8(param_2,param_4);
  uVar2 = (uint)*(byte *)(plVar5 + 5);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    *(char *)((long)plVar5 + 0x41) = (char)param_2;
  }
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



/* Entry: 10aaffcd4; end: 10aaffcf7;  */

void FUN_10aaffcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aafe164(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar5 = NEON_ucvtf((ulong)*(byte *)((long)plVar3 + 0x42));
  *(undefined8 *)(extraout_x8 + 2) = uVar5;
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



/* Entry: 10aaffcf8; end: 10aaffdb3;  */

void FUN_10aaffcf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x42));
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



/* Entry: 10aaffdb4; end: 10aaffe83;  */

void FUN_10aaffdb4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10aaffcd4(param_5);
  func_0x00010a068bd8(param_2,param_4);
  uVar2 = (uint)*(byte *)(plVar5 + 5);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    *(char *)((long)plVar5 + 0x42) = (char)param_2;
  }
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



/* Entry: 10aaffe84; end: 10aafff4f;  */

void FUN_10aaffe84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = 0;
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x68))();
  uVar1 = *(undefined1 *)((long)plVar6 + 0x82);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  plVar6 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar7 = lVar5 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar5 + 2];
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
  lVar5 = *plVar6;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar6 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar5 = lVar5 + uVar7 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10aafff50; end: 10ab00007;  */

void FUN_10aafff50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x29);
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



/* Entry: 10ab00008; end: 10ab000cf;  */

void FUN_10ab00008(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe2a8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10aaede5c(plVar4,param_2);
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



/* Entry: 10ab000d0; end: 10ab00183;  */

void FUN_10ab000d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aafe164(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x4010000000000000;
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



/* Entry: 10ab00184; end: 10ab0025b;  */

void FUN_10ab00184(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ab00184(*param_1);
    FUN_10ab00184(param_1[1]);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(param_1[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ab0025c; end: 10ab00357;  */

undefined1  [16] FUN_10ab0025c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c458e8;
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
    ppuStack_40 = &PTR_DAT_110c458e8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab00358; end: 10ab00413;  */

void FUN_10ab00358(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f3a3,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab00414);
  (*pcVar4)();
}



/* Entry: 10ab00414; end: 10ab0050f;  */

undefined1  [16] FUN_10ab00414(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c45900;
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
    ppuStack_40 = &PTR_DAT_110c45900;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab00510; end: 10ab00573;  */

ulong FUN_10ab00510(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab00574);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab00574,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10ab00574; end: 10ab009c7;  */

void FUN_10ab00574(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  ulong uVar12;
  long **pplVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plVar19;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar10 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar10 == (long *)0x0) {
LAB_10ab00924:
    puVar11 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar10);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10ab009c8(param_5);
      if (*param_4 == 1) {
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
      }
      else {
        plVar10 = param_2;
        func_0x000109898688(param_2,param_4);
        if (plVar10 == (long *)0x0) goto LAB_10ab00924;
        func_0x00010989879c(&plStack_80);
        if ((plStack_80 == (long *)0x0) ||
           (plVar10 = plStack_80,
           ___dynamic_cast(plStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c171e8,0),
           plVar10 == (long *)0x0)) {
          pplVar13 = &plStack_90;
        }
        else {
          plStack_88 = plStack_78;
          pplVar13 = &plStack_80;
          plStack_90 = plVar10;
        }
        *pplVar13 = (long *)0x0;
        pplVar13[1] = (long *)0x0;
        plVar10 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar8 = plStack_78 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plStack_90 == (long *)0x0) {
          func_0x00010988bd28(&UNK_10f58251f);
          goto LAB_10ab00950;
        }
      }
      if (param_4[4] == 7) {
        plVar10 = param_2;
        (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 6));
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffb8);
        plVar19 = plVar10;
        if ((int)plVar8 != 0) {
          plVar19 = param_2;
          (**(code **)(*param_2 + 0x58))();
          lVar9 = plVar19[0x48];
          if ((lVar9 == 0) ||
             (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar9 == 0)) {
            func_0x00010988bd28(&UNK_10f685540);
            goto LAB_10ab00950;
          }
          plVar19 = (long *)0x0;
          FUN_10a688ac0(&plStack_80,&stack0xffffffffffffffa0,*(undefined8 *)(lVar9 + 8));
          if (plVar10 != (long *)0x0) {
            (**(code **)*plVar10)();
          }
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)*plVar19)();
        }
        if (((ulong)plVar8 & 1) != 0) {
          plVar10 = (long *)0x60;
          __Znwm();
          plVar10[1] = 0;
          plVar10[2] = 0;
          *plVar10 = (long)&PTR_DAT_110c14ce0;
          plStack_a0 = plVar10 + 3;
          plVar10[4] = (long)plStack_78;
          *plStack_a0 = (long)plStack_80;
          if (plStack_78 != (long *)0x0) {
            plVar8 = plStack_78 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar10[6] = (long)plStack_68;
          plVar10[5] = lStack_70;
          if (plStack_68 != (long *)0x0) {
            plVar8 = plStack_68 + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(plVar10 + 0xb) = 2;
          plStack_98 = plVar10;
          FUN_10a688c1c(&plStack_80);
          FUN_10a768f5c(&plStack_80,param_2,param_4 + 8);
          FUN_10aaeeae0(plVar7,&plStack_90,&plStack_a0,&plStack_80);
          if (plStack_78 != (long *)0x0) {
            plVar10 = plStack_78 + 1;
            do {
              lVar9 = *plVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
            }
          }
          plVar10 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar7 = plStack_98 + 1;
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          plVar10 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar7 = plStack_88 + 1;
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          *param_1 = 0;
          plVar10 = plVar6 + 0x4b;
          lVar9 = plVar6[0x59];
          uVar12 = lVar9 - 1;
          plVar6[0x59] = uVar12;
          if (uVar12 < 8) {
            uVar12 = plVar10[lVar9 + 2];
            if (plVar6[0x5a] == uVar12) {
              return;
            }
          }
          else {
            uVar12 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar12) {
              return;
            }
          }
          plVar7 = (long *)*plVar10;
          plVar8 = (long *)plVar6[0x4c];
          lVar9 = (long)plVar8 - (long)plVar7;
          uVar17 = lVar9 >> 4;
          if (uVar17 < uVar12) {
            uVar18 = uVar12 - uVar17;
            lVar16 = plVar6[0x4d];
            if ((ulong)(lVar16 - (long)plVar8 >> 4) < uVar18) {
              if (uVar12 >> 0x3c == 0) {
                uVar14 = lVar16 - (long)plVar7 >> 3;
                if (uVar14 <= uVar12) {
                  uVar14 = uVar12;
                }
                if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar7)) {
                  uVar14 = 0xfffffffffffffff;
                }
                plStack_68 = plVar10;
                if (uVar14 >> 0x3c == 0) {
                  lVar5 = uVar14 << 4;
                  __Znwm();
                  lVar1 = lVar5 + lVar9;
                  _bzero(lVar1,uVar18 * 0x10);
                  lVar15 = lVar1 + uVar17 * -0x10;
                  _memcpy(lVar15,plVar7,lVar9);
                  *plVar10 = lVar15;
                  plVar6[0x4c] = lVar1 + uVar18 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar14 * 0x10;
                  plStack_88 = plVar7;
                  plStack_80 = plVar7;
                  plStack_78 = plVar7;
                  lStack_70 = lVar16;
                  func_0x00010988c1b8(&plStack_88);
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
            _bzero(plVar8,uVar18 * 0x10);
            plVar6[0x4c] = (long)(plVar8 + uVar18 * 2);
          }
          else if (uVar12 < uVar17) {
            while (plVar8 != plVar7 + uVar12 * 2) {
              plVar8 = plVar8 + -2;
              func_0x00010988c204(plVar8);
            }
            plVar6[0x4c] = (long)(plVar7 + uVar12 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar12;
          return;
        }
      }
      func_0x00010988bd28(&UNK_10f6347ad);
      goto LAB_10ab00950;
    }
    puVar11 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar11);
LAB_10ab00950:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab00954);
  (*pcVar4)();
}



/* Entry: 10ab009c8; end: 10ab009eb;  */

void FUN_10ab009c8(undefined8 param_1)

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
  
  if ((int)param_1 == 3) {
    return;
  }
  uVar3 = 3;
  FUN_10a052ee0(3,0,param_1);
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
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f68f3bc,0x18);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab00aa8);
  (*pcVar2)();
}



/* Entry: 10ab009ec; end: 10ab00aa7;  */

void FUN_10ab009ec(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f3bc,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab00aa8);
  (*pcVar4)();
}



/* Entry: 10ab00aa8; end: 10ab00cab;  */

void FUN_10ab00aa8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c17218;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab00cac; end: 10ab00cbb;  */

void FUN_10ab00cac(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c17218;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab00cbc; end: 10ab00ce3;  */

long FUN_10ab00cbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a725e70(param_1 + 0x18);
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



/* Entry: 10ab00ce4; end: 10ab00d23;  */

void FUN_10ab00ce4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c45cc8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10ab00d24; end: 10ab00ecb;  */

void FUN_10ab00d24(long *param_1,long param_2,long *param_3,undefined1 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar5 = (long *)0x58;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c45cf0;
  plVar1 = plVar5 + 3;
  if (param_3 == (long *)0x0) {
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[3] = (long)&PTR_FUN_110c15ac8;
    plVar5[8] = param_2;
    plVar5[9] = 0;
    *(undefined1 *)(plVar5 + 10) = param_4;
  }
  else {
    plVar2 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[3] = (long)&PTR_FUN_110c15ac8;
    plVar5[8] = param_2;
    plVar5[9] = (long)param_3;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(plVar5 + 10) = param_4;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar5;
  if (plVar5[7] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[6] = (long)plVar1;
    plVar5[7] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[7] + 8) != -1) {
      return;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[6] = (long)plVar1;
    plVar5[7] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10ab00ecc; end: 10ab00edb;  */

void FUN_10ab00ecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45cf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab00edc; end: 10ab00efb;  */

void FUN_10ab00edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45cf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab00efc; end: 10ab00f0b;  */

void FUN_10ab00efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab00f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab00f0c; end: 10ab01067;  */

void FUN_10ab00f0c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plStack_48 = (long *)param_1[1];
  uStack_50 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  func_0x00010a6fb6ec(lVar6 + 0xe8,&uStack_50);
  FUN_10ab00d24(&uStack_40,uStack_50,plStack_48,1);
  FUN_10aaef350(lVar6 + 0xf8,&uStack_40);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  uStack_40 = *(undefined8 *)(param_2 + 0x18);
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_38 = plVar2;
  FUN_10aaef10c(uStack_40,lVar6 + 0xf8);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_48;
  *(undefined1 *)(lVar6 + 0x108) = 0;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10ab01068; end: 10ab010df;  */

long FUN_10ab01068(long param_1)

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



/* Entry: 10ab010e0; end: 10ab01187;  */

void FUN_10ab010e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  plVar6 = *(long **)(param_3 + 0x20);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar5 != 0) {
    FUN_10a7576b4(lVar5,param_1,param_2);
  }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined1 *)(lVar2 + 0x108) = 0;
  return;
}



/* Entry: 10ab01188; end: 10ab011ff;  */

long FUN_10ab01188(long param_1)

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



/* Entry: 10ab01200; end: 10ab012fb;  */

undefined1  [16] FUN_10ab01200(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c45970;
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
    ppuStack_40 = &PTR_DAT_110c45970;
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



/* Entry: 10ab012fc; end: 10ab0134f;  */

ulong FUN_10ab012fc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ab01350,0);
  }
  return param_1;
}



/* Entry: 10ab01350; end: 10ab01457;  */

void FUN_10ab01350(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[3];
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(int)(char)lVar6;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
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
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
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
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
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
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab01444);
  (*pcVar1)();
}



/* Entry: 10ab01458; end: 10ab01513;  */

void FUN_10ab01458(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f3d5,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab01514);
  (*pcVar4)();
}



/* Entry: 10ab01514; end: 10ab0160f;  */

undefined1  [16] FUN_10ab01514(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c459e0;
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
    ppuStack_40 = &PTR_DAT_110c459e0;
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



/* Entry: 10ab01610; end: 10ab01663;  */

ulong FUN_10ab01610(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ab01664,0);
  }
  return param_1;
}



/* Entry: 10ab01664; end: 10ab0171f;  */

void FUN_10ab01664(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab01720(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)(char)lVar5;
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



/* Entry: 10ab01720; end: 10ab017db;  */

undefined ** FUN_10ab01720(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10ab017dc,0);
  }
  return ppuVar1;
}



/* Entry: 10ab017dc; end: 10ab01893;  */

void FUN_10ab017dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab01720(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x19);
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



/* Entry: 10ab01894; end: 10ab0194f;  */

void FUN_10ab01894(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f3e1,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab01950);
  (*pcVar4)();
}



/* Entry: 10ab01950; end: 10ab022c3;  */

void FUN_10ab01950(undefined4 *param_1,code *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  code **ppcVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  code *pcStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar6 + 0x2c8) < 8) {
    *(long *)(pcVar6 + (*(ulong *)(pcVar6 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar6 + 0x2d0);
    *(long *)(pcVar6 + 0x2c8) = *(long *)(pcVar6 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar6 + 600);
  }
  pcVar8 = param_2;
  FUN_10ab022c4(param_2,param_3);
  FUN_10ab0232c(param_5);
  iVar3 = *param_4;
  if (iVar3 == 1) {
    pcStack_1b0 = (code *)0x0;
    ppuStack_1a8 = (undefined **)0x0;
LAB_10ab01a84:
    lVar10 = *(long *)(pcVar8 + 0x50);
    FUN_10a3df7b0(lVar10,3);
    if ((int)lVar10 == 0) {
      puVar18 = &UNK_10f68ed61;
LAB_10ab021cc:
      FUN_10a00946c(puVar18);
      goto LAB_10ab021e0;
    }
    if ((*(long *)(pcVar8 + 0xf0) == 0) || (iVar3 == 1)) {
      ppuVar14 = &PTR_PTR_113306848;
      FUN_10ae079a0(0,&PTR_PTR_113306848);
      FUN_10ae07cd4(ppuVar14,&PTR_PTR_113306848);
    }
    else {
      if (((byte)pcVar8[0x140] & 1) != 0) {
        puVar18 = &UNK_10f68ed8f;
        goto LAB_10ab021cc;
      }
      FUN_10a0533bc(&pcStack_a0,pcVar8);
      ppuStack_150 = ppuStack_98;
      pcStack_158 = pcStack_a0;
      if (ppuStack_98 != (undefined **)0x0) {
        ppuVar14 = ppuStack_98 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar5) {
            *ppuVar14 = *ppuVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a3f24a8(&pcStack_e0,pcVar8 + 0x28);
      ppuVar14 = ppuStack_98;
      ppuStack_140 = ppuStack_d8;
      pcStack_148 = pcStack_e0;
      pcStack_e0 = (code *)0x0;
      ppuStack_d8 = (undefined **)0x0;
      pcStack_160 = pcVar8;
      if (ppuStack_98 != (undefined **)0x0) {
        ppuVar13 = ppuStack_98 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      ppuVar13 = ppuStack_150;
      pcVar9 = pcStack_158;
      ppuVar14 = ppuStack_1a8;
      pcStack_198 = pcStack_158;
      pcStack_1a0 = pcStack_160;
      ppuStack_190 = ppuStack_150;
      if (ppuStack_150 != (undefined **)0x0) {
        ppuVar1 = ppuStack_150 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_180 = ppuStack_140;
      pcStack_188 = pcStack_148;
      if (ppuStack_140 != (undefined **)0x0) {
        ppuVar1 = ppuStack_140 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_170 = ppuStack_1a8;
      pcStack_178 = pcStack_1b0;
      if (ppuStack_1a8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_1a8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcVar11 = pcVar8 + 0x1a8;
      func_0x00010a505604();
      if ((int)pcVar11 != 0) {
        pcVar12 = pcVar11;
        __ZNSt3__16chrono12steady_clock3nowEv();
        *(code **)(pcVar8 + 0x1a8) = pcVar12;
        uVar19 = (*(long *)(pcVar8 + 0x1b8) - *(long *)(pcVar8 + 0x1b0) >> 3) * -0x5555555555555555;
        if (uVar19 < (ulong)(long)*(int *)(pcVar8 + 0x1c8) ||
            uVar19 - (long)*(int *)(pcVar8 + 0x1c8) == 0) goto LAB_10ab021e0;
        if ((ppuVar13 == (undefined **)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_98 = ppuVar13,
           ppuVar13 == (undefined **)0x0)) {
LAB_10ab01d68:
          if ((ppuStack_180 != (undefined **)0x0) &&
             (ppuVar14 = ppuStack_180, __ZNSt3__119__shared_weak_count4lockEv(),
             pcVar8 = pcStack_188, ppuStack_98 = ppuVar14, ppuVar14 != (undefined **)0x0)) {
            pcStack_a0 = pcStack_188;
            if (pcStack_188 != (code *)0x0) {
              pcStack_a0 = (code *)0x0;
              ppuStack_98 = (undefined **)0x0;
              pcStack_e0 = pcStack_188;
              ppuStack_d8 = ppuVar14;
              FUN_10aa89664(&pcStack_f0,pcStack_1a0,&pcStack_e0);
              ppuVar14 = ppuStack_d8;
              ppuStack_128 = ppuStack_e8;
              pcStack_130 = pcStack_f0;
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar13 = ppuStack_d8 + 1;
                do {
                  puVar18 = *ppuVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = puVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar18 == (undefined *)0x0) {
                  (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
                }
              }
              if (ppuStack_98 != (undefined **)0x0) {
                ppuVar14 = ppuStack_98 + 1;
                do {
                  puVar18 = *ppuVar14;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                  if (bVar5) {
                    *ppuVar14 = puVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar18 == (undefined *)0x0) goto LAB_10ab01e20;
              }
              goto LAB_10ab01e3c;
            }
            ppuVar14 = ppuVar14 + 1;
            do {
              puVar18 = *ppuVar14;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
              if (bVar5) {
                *ppuVar14 = puVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar18 == (undefined *)0x0) {
LAB_10ab01e20:
              ppuVar14 = ppuStack_98;
              (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
              if (pcVar8 != (code *)0x0) goto LAB_10ab01e3c;
            }
          }
          pcStack_130 = (code *)0x0;
          ppuStack_128 = (undefined **)0x0;
        }
        else {
          pcStack_a0 = pcVar9;
          if (pcVar9 == (code *)0x0) {
            ppuVar14 = ppuVar13 + 1;
            do {
              puVar18 = *ppuVar14;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
              if (bVar5) {
                *ppuVar14 = puVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar18 != (undefined *)0x0) goto LAB_10ab01d68;
LAB_10ab01d4c:
            (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
            if (pcVar9 == (code *)0x0) goto LAB_10ab01d68;
          }
          else {
            FUN_10a053e40(&pcStack_e0,pcVar9);
            ppuVar14 = ppuStack_d8;
            if (pcStack_e0 == (code *)0x0) {
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar13 = ppuStack_d8 + 1;
                do {
                  puVar18 = *ppuVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = puVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar18 == (undefined *)0x0) {
                  (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
                }
              }
              pcStack_130 = pcStack_1a0;
              ppuStack_128 = ppuStack_98;
              if (ppuStack_98 == (undefined **)0x0) {
                ppuStack_d8 = (undefined **)0x0;
              }
              else {
                ppuVar14 = ppuStack_98 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                  if (bVar5) {
                    *ppuVar14 = *ppuVar14 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                ppuStack_d8 = ppuStack_98;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                  if (bVar5) {
                    *ppuVar14 = *ppuVar14 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              pcStack_e0 = pcStack_1a0;
              func_0x00010a053e8c(pcStack_a0,&pcStack_e0);
              ppuVar14 = ppuStack_d8;
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar13 = ppuStack_d8 + 1;
                do {
                  puVar18 = *ppuVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = puVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar18 == (undefined *)0x0) {
                  (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
                }
              }
              ppuVar13 = ppuStack_98;
              if (ppuStack_98 != (undefined **)0x0) goto LAB_10ab01d34;
            }
            else {
              pcStack_130 = pcStack_e0;
              ppuStack_128 = ppuStack_d8;
LAB_10ab01d34:
              ppuVar14 = ppuVar13 + 1;
              do {
                puVar18 = *ppuVar14;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                if (bVar5) {
                  *ppuVar14 = puVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (puVar18 == (undefined *)0x0) goto LAB_10ab01d4c;
            }
          }
LAB_10ab01e3c:
          pcVar8 = pcStack_130;
          if (pcStack_130 != (code *)0x0) {
            if (ppuStack_170 != (undefined **)0x0) {
              ppuVar14 = ppuStack_170 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
                if (bVar5) {
                  *ppuVar14 = *ppuVar14 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar22 = *(long **)(pcStack_130 + 0x128);
            *(undefined ***)(pcStack_130 + 0x128) = ppuStack_170;
            *(code **)(pcStack_130 + 0x120) = pcStack_178;
            if (plVar22 != (long *)0x0) {
              plVar2 = plVar22 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
              }
            }
            puVar23 = *(undefined8 **)(pcVar8 + 0x208);
            if (*(undefined8 **)(pcVar8 + 0x208) == (undefined8 *)0x0) {
              puVar23 = (undefined8 *)0x0;
              if (*(long *)(*(long *)(pcVar8 + 0xf0) + 0x980) != 0) {
                puVar23 = (undefined8 *)(*(long *)(*(long *)(pcVar8 + 0xf0) + 0x980) + 0x40);
              }
            }
            ppuStack_e8 = *(undefined ***)(pcVar8 + 0x128);
            pcStack_f0 = *(code **)(pcVar8 + 0x120);
            if (*(long *)(pcVar8 + 0x128) != 0) {
              plVar22 = (long *)(*(long *)(pcVar8 + 0x128) + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar5) {
                  *plVar22 = *plVar22 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            FUN_10a03d13c(&uStack_110,pcVar8);
            plStack_f8 = plStack_108;
            uStack_100 = uStack_110;
            uStack_110 = 0;
            plStack_108 = (long *)0x0;
            lStack_78 = 0;
            lStack_80 = 0;
            pcStack_68 = (code *)0x0;
            lStack_70 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
            pcStack_a0 = FUN_10a5ca4c0;
            ppuStack_98 = &PTR_DAT_110950c70;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            pcStack_e0 = (code *)0x10a5ca4d0;
            ppuStack_d8 = &PTR_DAT_110950c70;
            uStack_120 = 0;
            plStack_118 = (long *)0x0;
            (**(code **)*puVar23)
                      (puVar23,&pcStack_f0,&uStack_100,
                       (long)*(char *)(*(long *)(pcVar8 + 0x120) + 1000),
                       *(long *)(pcVar8 + 0x120) + 0x3d8,&pcStack_a0,&pcStack_e0,&uStack_120);
            plVar22 = plStack_118;
            if (plStack_118 != (long *)0x0) {
              plVar2 = plStack_118 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_118 + 0x10))(plStack_118);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
              }
            }
            (*(code *)*ppuStack_d8)(&ppuStack_d8);
            (*(code *)*ppuStack_98)(&ppuStack_98);
            plVar22 = plStack_f8;
            if (plStack_f8 != (long *)0x0) {
              plVar2 = plStack_f8 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
              }
            }
            plVar22 = plStack_108;
            if (plStack_108 != (long *)0x0) {
              plVar2 = plStack_108 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_108 + 0x10))(plStack_108);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
              }
            }
            ppuVar14 = ppuStack_e8;
            if (ppuStack_e8 != (undefined **)0x0) {
              ppuVar13 = ppuStack_e8 + 1;
              do {
                puVar18 = *ppuVar13;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                if (bVar5) {
                  *ppuVar13 = puVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (puVar18 == (undefined *)0x0) {
                (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
              }
            }
          }
        }
        ppuVar13 = ppuStack_128;
        ppuVar14 = ppuStack_170;
        if (ppuStack_128 != (undefined **)0x0) {
          ppuVar1 = ppuStack_128 + 1;
          do {
            puVar18 = *ppuVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar5) {
              *ppuVar1 = puVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar18 == (undefined *)0x0) {
            (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
            ppuVar14 = ppuStack_170;
          }
        }
      }
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar13 = ppuVar14 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      if (ppuStack_180 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppuStack_190 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (((ulong)pcVar11 & 1) == 0) {
        FUN_10a00946c(&UNK_10f68edff);
        goto LAB_10ab021e0;
      }
      if (ppuStack_140 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppuStack_150 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    ppuVar14 = ppuStack_1a8;
    if (ppuStack_1a8 != (undefined **)0x0) {
      ppuVar13 = ppuStack_1a8 + 1;
      do {
        puVar18 = *ppuVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar5) {
          *ppuVar13 = puVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar18 == (undefined *)0x0) {
        (**(code **)(*ppuStack_1a8 + 0x10))(ppuStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      pcVar8 = pcVar6 + 600;
      lVar15 = *(long *)(pcVar6 + 0x2c8);
      uVar19 = lVar15 - 1;
      *(ulong *)(pcVar6 + 0x2c8) = uVar19;
      if (uVar19 < 8) {
        uVar19 = *(ulong *)(pcVar8 + (lVar15 + 2) * 8);
        if (*(ulong *)(pcVar6 + 0x2d0) == uVar19) {
          return;
        }
      }
      else {
        uVar19 = *(ulong *)(*(long *)(pcVar6 + 0x2b8) + -8);
        *(ulong **)(pcVar6 + 0x2b8) = (ulong *)(*(long *)(pcVar6 + 0x2b8) + -8);
        if (*(ulong *)(pcVar6 + 0x2d0) == uVar19) {
          return;
        }
      }
      lVar15 = *(long *)pcVar8;
      lVar10 = *(long *)(pcVar6 + 0x260);
      lVar20 = lVar10 - lVar15;
      uVar25 = lVar20 >> 4;
      if (uVar25 < uVar19) {
        uVar26 = uVar19 - uVar25;
        lVar24 = *(long *)(pcVar6 + 0x268);
        if ((ulong)(lVar24 - lVar10 >> 4) < uVar26) {
          if (uVar19 >> 0x3c == 0) {
            uVar17 = lVar24 - lVar15 >> 3;
            if (uVar17 <= uVar19) {
              uVar17 = uVar19;
            }
            if (0x7fffffffffffffef < (ulong)(lVar24 - lVar15)) {
              uVar17 = 0xfffffffffffffff;
            }
            pcStack_68 = pcVar8;
            if (uVar17 >> 0x3c == 0) {
              lVar7 = uVar17 << 4;
              __Znwm();
              lVar10 = lVar7 + lVar20;
              _bzero(lVar10,uVar26 * 0x10);
              lVar21 = lVar10 + uVar25 * -0x10;
              _memcpy(lVar21,lVar15,lVar20);
              *(long *)pcVar8 = lVar21;
              *(ulong *)(pcVar6 + 0x260) = lVar10 + uVar26 * 0x10;
              *(ulong *)(pcVar6 + 0x268) = lVar7 + uVar17 * 0x10;
              lStack_88 = lVar15;
              lStack_80 = lVar15;
              lStack_78 = lVar15;
              lStack_70 = lVar24;
              func_0x00010988c1b8(&lStack_88);
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
        _bzero(lVar10,uVar26 * 0x10);
        *(ulong *)(pcVar6 + 0x260) = lVar10 + uVar26 * 0x10;
      }
      else if (uVar19 < uVar25) {
        lVar15 = lVar15 + uVar19 * 0x10;
        while (lVar10 != lVar15) {
          lVar10 = lVar10 + -0x10;
          func_0x00010988c204(lVar10);
        }
        *(long *)(pcVar6 + 0x260) = lVar15;
      }
code_r0x00010988c138:
      *(ulong *)(pcVar6 + 0x2d0) = uVar19;
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 != (code *)0x0) {
      func_0x00010989879c(&pcStack_a0);
      if ((pcStack_a0 == (code *)0x0) ||
         (pcVar9 = pcStack_a0, ___dynamic_cast(pcStack_a0,&PTR_DAT_110b178e0,&PTR_DAT_110c25720,0),
         pcVar9 == (code *)0x0)) {
        ppcVar16 = &pcStack_1b0;
      }
      else {
        ppuStack_1a8 = ppuStack_98;
        ppcVar16 = &pcStack_a0;
        pcStack_1b0 = pcVar9;
      }
      *ppcVar16 = (code *)0x0;
      ppcVar16[1] = (code *)0x0;
      ppuVar14 = ppuStack_98;
      if (ppuStack_98 != (undefined **)0x0) {
        ppuVar13 = ppuStack_98 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      if (pcStack_1b0 == (code *)0x0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10ab021e0;
      }
      goto LAB_10ab01a84;
    }
  }
  func_0x00010988bd28(&UNK_10f68f52e);
LAB_10ab021e0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab021e4);
  (*pcVar6)();
}



/* Entry: 10ab022c4; end: 10ab0232b;  */

void FUN_10ab022c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 in_x7;
  undefined4 *extraout_x8;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  code *pcStack_180;
  long *plStack_178;
  code *apcStack_170 [7];
  undefined8 uStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  code *pcStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  
  lVar12 = param_1;
  func_0x000109898688();
  if (lVar12 != 0) {
    FUN_10a053854(param_1,lVar12);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar7 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar7 == 1) {
    return;
  }
  pcVar8 = (code *)0x1;
  uVar17 = 0;
  FUN_10a052ee0(1,0);
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar8;
  (**(code **)(*(long *)pcVar8 + 0x58))();
  if (*(ulong *)(pcVar5 + 0x2c8) < 8) {
    *(long *)(pcVar5 + (*(ulong *)(pcVar5 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar5 + 0x2d0);
    *(long *)(pcVar5 + 0x2c8) = *(long *)(pcVar5 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar5 + 600);
  }
  pcVar9 = pcVar8;
  FUN_10ab022c4(pcVar8,uVar17);
  FUN_10ab02bfc(param_4);
  if (*piVar7 == 7) {
    pcVar10 = pcVar8;
    (**(code **)(*(long *)pcVar8 + 0x98))(pcVar8,*(undefined8 *)(piVar7 + 2));
    pcVar11 = pcVar8;
    pcStack_130 = pcVar10;
    (**(code **)(*(long *)pcVar8 + 0x228))(pcVar8,&pcStack_130);
    if ((int)pcVar11 != 0) {
      pcVar10 = pcVar8;
      (**(code **)(*(long *)pcVar8 + 0x58))();
      lVar12 = *(long *)(pcVar10 + 0x240);
      if ((lVar12 == 0) ||
         (___dynamic_cast(lVar12,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar10 = pcStack_130,
         lVar12 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab02ae0;
      }
      pcStack_130 = (code *)0x0;
      plStack_178 = (long *)CONCAT44(plStack_178._4_4_,7);
      apcStack_170[0] = pcVar10;
      pcStack_180 = pcVar8;
      FUN_10a688ac0(&pcStack_f0,&pcStack_180,*(undefined8 *)(lVar12 + 8));
      if ((3 < (int)plStack_178) && (apcStack_170[0] != (code *)0x0)) {
        (*(code *)**(undefined8 **)apcStack_170[0])();
      }
    }
    if (pcStack_130 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_130)();
    }
    if (((ulong)pcVar11 & 1) != 0) {
      plVar13 = (long *)0x60;
      __Znwm();
      plVar28 = plVar13 + 1;
      *plVar28 = 0;
      plVar13[2] = 0;
      *plVar13 = (long)&PTR_FUN_110c45d80;
      pcVar8 = (code *)(plVar13 + 3);
      plVar13[4] = (long)plStack_e8;
      *(code **)pcVar8 = pcStack_f0;
      if (plStack_e8 != (long *)0x0) {
        plVar15 = plStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar13[6] = lStack_d8;
      plVar13[5] = lStack_e0;
      if (lStack_d8 != 0) {
        plVar15 = (long *)(lStack_d8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar13 + 0xb) = 2;
      FUN_10a688c1c(&pcStack_f0);
      if (*(long *)(pcVar9 + 0xf0) == 0) {
LAB_10ab02550:
        if (*(long *)(pcVar9 + 0x178) == 0) {
          puVar25 = *(undefined8 **)(pcVar9 + 400);
          if (puVar25 < *(undefined8 **)(pcVar9 + 0x198)) {
            *puVar25 = pcVar8;
            puVar25[1] = plVar13;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar3) {
                *plVar28 = *plVar28 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar25 = puVar25 + 2;
          }
          else {
            lVar12 = (long)puVar25 - *(long *)(pcVar9 + 0x188);
            uVar14 = (lVar12 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              FUN_10aafd014();
              goto LAB_10ab02ae0;
            }
            uVar26 = (long)*(undefined8 **)(pcVar9 + 0x198) - *(long *)(pcVar9 + 0x188);
            uVar24 = (long)uVar26 >> 3;
            if (uVar24 <= uVar14) {
              uVar24 = uVar14;
            }
            if (0x7fffffffffffffef < uVar26) {
              uVar24 = 0xfffffffffffffff;
            }
            if (uVar24 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10ab02ae0;
            }
            lVar22 = uVar24 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar22 + lVar12);
            *puVar1 = pcVar8;
            puVar1[1] = plVar13;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar3) {
                *plVar28 = *plVar28 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar12 = *(long *)(pcVar9 + 0x188);
            puVar25 = puVar1 + 2;
            lVar20 = (long)puVar1 - (*(long *)(pcVar9 + 400) - lVar12);
            _memcpy(lVar20,lVar12);
            *(long *)(pcVar9 + 0x188) = lVar20;
            *(undefined8 **)(pcVar9 + 400) = puVar25;
            *(ulong *)(pcVar9 + 0x198) = lVar22 + uVar24 * 0x10;
            if (lVar12 != 0) {
              __ZdlPv(lVar12);
            }
          }
          *(undefined8 **)(pcVar9 + 400) = puVar25;
          if ((ulong)((long)puVar25 - *(long *)(pcVar9 + 0x188)) < 0x11) {
            func_0x000109382360(&pcStack_f0,0,0,0,1);
            FUN_10a0c32e4(&pppuStack_198);
            func_0x000109380ffc(&plStack_e8,(ulong)pcStack_f0 & 0xff);
            ppppuVar4 = (undefined8 ****)pppuStack_198;
            if (-1 < (char)bStack_181) {
              uStack_190 = (ulong)bStack_181;
              ppppuVar4 = &pppuStack_198;
            }
            FUN_10a3bf330(&pcStack_180,ppppuVar4,uStack_190);
            pcVar8 = pcVar9 + 0x1e0;
            if ((char)pcVar9[0x1f7] < '\0') {
              if (*(long *)(pcVar9 + 0x1e8) == 0) goto LAB_10ab02810;
            }
            else if (pcVar9[0x1f7] == (code)0x0) {
LAB_10ab02810:
              pcVar8 = (code *)(*(long *)(*(long *)(pcVar9 + 0xf0) + 0x100) + 0x208);
            }
            FUN_10aaf1010(&uStack_1c0,*(long *)(pcVar9 + 0x130),pcVar9);
            plVar15 = (long *)0x138;
            __Znwm();
            pcStack_f0 = pcStack_180;
            plVar29 = plVar15 + 1;
            *plVar29 = 0;
            plVar15[2] = 0;
            *plVar15 = (long)&PTR_FUN_110b9f3b0;
            pcVar10 = (code *)(plVar15 + 3);
            pcStack_180 = (code *)0x0;
            plStack_e8 = plStack_178;
            (**(code **)(apcStack_170[0] + 0x10))(&lStack_e0,apcStack_170);
            lStack_a8 = uStack_138;
            uVar14 = *(ulong *)(pcVar8 + 8);
            pcVar11 = *(code **)pcVar8;
            if (-1 < (char)pcVar8[0x17]) {
              uVar14 = (ulong)(byte)pcVar8[0x17];
              pcVar11 = pcVar8;
            }
            pcStack_130 = FUN_10ab04530;
            ppuStack_128 = &PTR_FUN_110c45e40;
            uStack_120 = uStack_1c0;
            uStack_110 = uStack_1b0;
            uStack_118 = uStack_1b8;
            uStack_1b8 = 0;
            uStack_1b0 = 0;
            FUN_10a23708c(pcVar10,&UNK_10e4f49c8,0x2e,&UNK_10f647b49,4,&pcStack_f0,1,in_x7,pcVar11,
                          uVar14,&pcStack_130);
            (*(code *)*ppuStack_128)(&ppuStack_128);
            FUN_10a042634(&pcStack_f0);
            pcStack_1a8 = pcVar10;
            plStack_1a0 = plVar15;
            FUN_10aaf10b8(&uStack_1c0);
            FUN_10a042634(&pcStack_180);
            pcVar8 = *(code **)(pcVar9 + 0x1f8);
            if (pcVar8 == (code *)0x0) {
              plVar16 = *(long **)(*(long *)(*(long *)(pcVar9 + 0xf0) + 0x100) + 0x1c8);
              (**(code **)(*plVar16 + 0x60))();
              plVar27 = (long *)plVar16[1];
              if (plVar27 != (long *)0x0) {
                pcVar8 = (code *)*plVar16;
                goto LAB_10ab02844;
              }
LAB_10ab028fc:
              pcStack_f0 = (code *)0x0;
              plStack_e8 = (long *)0x0;
LAB_10ab0290c:
              ppuVar18 = &PTR_PTR_113306b88;
              FUN_10ae079a0(0,&PTR_PTR_113306b88);
              FUN_10ae07cd4(ppuVar18,&PTR_PTR_113306b88);
              plVar15 = (long *)0x38;
              __Znwm();
              plVar29 = plVar15 + 1;
              *plVar29 = 0;
              plVar15[2] = 0;
              *plVar15 = (long)&PTR_DAT_110c45bb0;
              plVar15[4] = 0;
              plVar15[5] = 0;
              pcStack_180 = (code *)(plVar15 + 3);
              *(undefined ***)pcStack_180 = &PTR_DAT_110c45998;
              *(undefined2 *)(plVar15 + 6) = 2;
              plStack_178 = plVar15;
              FUN_10aaf1138(pcVar9,pcStack_180,plVar15);
              do {
                lVar12 = *plVar29;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar3) {
                  *plVar29 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
LAB_10ab029a4:
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            else {
              plVar27 = *(long **)(pcVar9 + 0x200);
              if (plVar27 == (long *)0x0) goto LAB_10ab028fc;
LAB_10ab02844:
              plVar16 = plVar27 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar3) {
                  *plVar16 = *plVar16 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_f0 = (code *)0x0;
              plVar16 = plVar27;
              __ZNSt3__119__shared_weak_count4lockEv();
              plStack_e8 = plVar16;
              if (plVar16 == (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                goto LAB_10ab0290c;
              }
              pcStack_f0 = pcVar8;
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
              if (pcVar8 == (code *)0x0) goto LAB_10ab0290c;
              ppuVar18 = &PTR_PTR_113306978;
              FUN_10ae079a0(0,&PTR_PTR_113306978);
              FUN_10ae07cd4(ppuVar18,&PTR_PTR_113306978);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar3) {
                  *plVar29 = *plVar29 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_180 = pcVar10;
              plStack_178 = plVar15;
              (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_180);
              plVar15 = plStack_178;
              if (plStack_178 != (long *)0x0) {
                plVar29 = plStack_178 + 1;
                do {
                  lVar12 = *plVar29;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar3) {
                    *plVar29 = lVar12 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar12 != 0) goto LAB_10ab029a8;
                (**(code **)(*plStack_178 + 0x10))(plStack_178);
                goto LAB_10ab029a4;
              }
            }
LAB_10ab029a8:
            plVar15 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar29 = plStack_e8 + 1;
              do {
                lVar12 = *plVar29;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar3) {
                  *plVar29 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            plVar15 = plStack_1a0;
            if (plStack_1a0 != (long *)0x0) {
              plVar29 = plStack_1a0 + 1;
              do {
                lVar12 = *plVar29;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar3) {
                  *plVar29 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            if ((char)bStack_181 < '\0') {
              __ZdlPv(pppuStack_198);
            }
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar3) {
              *plVar28 = *plVar28 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pcStack_f0 = pcVar8;
          plStack_e8 = plVar13;
          FUN_10aaf0dcc(pcVar8,pcVar9 + 0x178);
          do {
            lVar12 = *plVar28;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar3) {
              *plVar28 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        do {
          lVar12 = *plVar28;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar3) {
            *plVar28 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
        *extraout_x8 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
          pcVar8 = pcVar5 + 600;
          lVar12 = *(long *)(pcVar5 + 0x2c8);
          uVar14 = lVar12 - 1;
          *(ulong *)(pcVar5 + 0x2c8) = uVar14;
          if (uVar14 < 8) {
            uVar14 = *(ulong *)(pcVar8 + (lVar12 + 2) * 8);
            if (*(ulong *)(pcVar5 + 0x2d0) == uVar14) {
              return;
            }
          }
          else {
            uVar14 = *(ulong *)(*(long *)(pcVar5 + 0x2b8) + -8);
            *(ulong **)(pcVar5 + 0x2b8) = (ulong *)(*(long *)(pcVar5 + 0x2b8) + -8);
            if (*(ulong *)(pcVar5 + 0x2d0) == uVar14) {
              return;
            }
          }
          lVar12 = *(long *)pcVar8;
          lVar22 = *(long *)(pcVar5 + 0x260);
          lVar20 = lVar22 - lVar12;
          uVar24 = lVar20 >> 4;
          if (uVar24 < uVar14) {
            uVar26 = uVar14 - uVar24;
            lVar23 = *(long *)(pcVar5 + 0x268);
            if ((ulong)(lVar23 - lVar22 >> 4) < uVar26) {
              if (uVar14 >> 0x3c == 0) {
                uVar19 = lVar23 - lVar12 >> 3;
                if (uVar19 <= uVar14) {
                  uVar19 = uVar14;
                }
                if (0x7fffffffffffffef < (ulong)(lVar23 - lVar12)) {
                  uVar19 = 0xfffffffffffffff;
                }
                pcStack_98 = pcVar8;
                if (uVar19 >> 0x3c == 0) {
                  lVar6 = uVar19 << 4;
                  __Znwm();
                  lVar22 = lVar6 + lVar20;
                  _bzero(lVar22,uVar26 * 0x10);
                  lVar21 = lVar22 + uVar24 * -0x10;
                  _memcpy(lVar21,lVar12,lVar20);
                  *(long *)pcVar8 = lVar21;
                  *(ulong *)(pcVar5 + 0x260) = lVar22 + uVar26 * 0x10;
                  *(ulong *)(pcVar5 + 0x268) = lVar6 + uVar19 * 0x10;
                  lStack_b8 = lVar12;
                  lStack_b0 = lVar12;
                  lStack_a8 = lVar12;
                  lStack_a0 = lVar23;
                  func_0x00010988c1b8(&lStack_b8);
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
            _bzero(lVar22,uVar26 * 0x10);
            *(ulong *)(pcVar5 + 0x260) = lVar22 + uVar26 * 0x10;
          }
          else if (uVar14 < uVar24) {
            lVar12 = lVar12 + uVar14 * 0x10;
            while (lVar22 != lVar12) {
              lVar22 = lVar22 + -0x10;
              func_0x00010988c204(lVar22);
            }
            *(long *)(pcVar5 + 0x260) = lVar12;
          }
code_r0x00010988c138:
          *(ulong *)(pcVar5 + 0x2d0) = uVar14;
          return;
        }
        ___stack_chk_fail();
      }
      else {
        uVar14 = *(ulong *)(pcVar9 + 0x50);
        FUN_10a3df7b0(uVar14,3);
        if ((uVar14 & 1) != 0) goto LAB_10ab02550;
      }
      FUN_10a00946c(&UNK_10f68ed61);
      goto LAB_10ab02ae0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab02ae0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab02ae4);
  (*pcVar5)();
}



/* Entry: 10ab0232c; end: 10ab0234f;  */

void FUN_10ab0232c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 in_x7;
  undefined4 *extraout_x8;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  long *plStack_180;
  undefined8 ***pppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  code *pcStack_160;
  long *plStack_158;
  code *apcStack_150 [7];
  undefined8 uStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  pcVar7 = (code *)0x1;
  uVar16 = 0;
  FUN_10a052ee0(1,0);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar7;
  (**(code **)(*(long *)pcVar7 + 0x58))();
  if (*(ulong *)(pcVar5 + 0x2c8) < 8) {
    *(long *)(pcVar5 + (*(ulong *)(pcVar5 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar5 + 0x2d0);
    *(long *)(pcVar5 + 0x2c8) = *(long *)(pcVar5 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar5 + 600);
  }
  pcVar8 = pcVar7;
  FUN_10ab022c4(pcVar7,uVar16);
  FUN_10ab02bfc(param_4);
  if (*param_1 == 7) {
    pcVar9 = pcVar7;
    (**(code **)(*(long *)pcVar7 + 0x98))(pcVar7,*(undefined8 *)(param_1 + 2));
    pcVar10 = pcVar7;
    pcStack_110 = pcVar9;
    (**(code **)(*(long *)pcVar7 + 0x228))(pcVar7,&pcStack_110);
    if ((int)pcVar10 != 0) {
      pcVar9 = pcVar7;
      (**(code **)(*(long *)pcVar7 + 0x58))();
      lVar11 = *(long *)(pcVar9 + 0x240);
      if ((lVar11 == 0) ||
         (___dynamic_cast(lVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar9 = pcStack_110,
         lVar11 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab02ae0;
      }
      pcStack_110 = (code *)0x0;
      plStack_158 = (long *)CONCAT44(plStack_158._4_4_,7);
      apcStack_150[0] = pcVar9;
      pcStack_160 = pcVar7;
      FUN_10a688ac0(&pcStack_d0,&pcStack_160,*(undefined8 *)(lVar11 + 8));
      if ((3 < (int)plStack_158) && (apcStack_150[0] != (code *)0x0)) {
        (*(code *)**(undefined8 **)apcStack_150[0])();
      }
    }
    if (pcStack_110 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_110)();
    }
    if (((ulong)pcVar10 & 1) != 0) {
      plVar12 = (long *)0x60;
      __Znwm();
      plVar27 = plVar12 + 1;
      *plVar27 = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_FUN_110c45d80;
      pcVar7 = (code *)(plVar12 + 3);
      plVar12[4] = (long)plStack_c8;
      *(code **)pcVar7 = pcStack_d0;
      if (plStack_c8 != (long *)0x0) {
        plVar14 = plStack_c8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar12[6] = lStack_b8;
      plVar12[5] = lStack_c0;
      if (lStack_b8 != 0) {
        plVar14 = (long *)(lStack_b8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar12 + 0xb) = 2;
      FUN_10a688c1c(&pcStack_d0);
      if (*(long *)(pcVar8 + 0xf0) == 0) {
LAB_10ab02550:
        if (*(long *)(pcVar8 + 0x178) == 0) {
          puVar24 = *(undefined8 **)(pcVar8 + 400);
          if (puVar24 < *(undefined8 **)(pcVar8 + 0x198)) {
            *puVar24 = pcVar7;
            puVar24[1] = plVar12;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar3) {
                *plVar27 = *plVar27 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar24 = puVar24 + 2;
          }
          else {
            lVar11 = (long)puVar24 - *(long *)(pcVar8 + 0x188);
            uVar13 = (lVar11 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) {
              FUN_10aafd014();
              goto LAB_10ab02ae0;
            }
            uVar25 = (long)*(undefined8 **)(pcVar8 + 0x198) - *(long *)(pcVar8 + 0x188);
            uVar23 = (long)uVar25 >> 3;
            if (uVar23 <= uVar13) {
              uVar23 = uVar13;
            }
            if (0x7fffffffffffffef < uVar25) {
              uVar23 = 0xfffffffffffffff;
            }
            if (uVar23 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10ab02ae0;
            }
            lVar21 = uVar23 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar21 + lVar11);
            *puVar1 = pcVar7;
            puVar1[1] = plVar12;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar3) {
                *plVar27 = *plVar27 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar11 = *(long *)(pcVar8 + 0x188);
            puVar24 = puVar1 + 2;
            lVar19 = (long)puVar1 - (*(long *)(pcVar8 + 400) - lVar11);
            _memcpy(lVar19,lVar11);
            *(long *)(pcVar8 + 0x188) = lVar19;
            *(undefined8 **)(pcVar8 + 400) = puVar24;
            *(ulong *)(pcVar8 + 0x198) = lVar21 + uVar23 * 0x10;
            if (lVar11 != 0) {
              __ZdlPv(lVar11);
            }
          }
          *(undefined8 **)(pcVar8 + 400) = puVar24;
          if ((ulong)((long)puVar24 - *(long *)(pcVar8 + 0x188)) < 0x11) {
            func_0x000109382360(&pcStack_d0,0,0,0,1);
            FUN_10a0c32e4(&pppuStack_178);
            func_0x000109380ffc(&plStack_c8,(ulong)pcStack_d0 & 0xff);
            ppppuVar4 = (undefined8 ****)pppuStack_178;
            if (-1 < (char)bStack_161) {
              uStack_170 = (ulong)bStack_161;
              ppppuVar4 = &pppuStack_178;
            }
            FUN_10a3bf330(&pcStack_160,ppppuVar4,uStack_170);
            pcVar7 = pcVar8 + 0x1e0;
            if ((char)pcVar8[0x1f7] < '\0') {
              if (*(long *)(pcVar8 + 0x1e8) == 0) goto LAB_10ab02810;
            }
            else if (pcVar8[0x1f7] == (code)0x0) {
LAB_10ab02810:
              pcVar7 = (code *)(*(long *)(*(long *)(pcVar8 + 0xf0) + 0x100) + 0x208);
            }
            FUN_10aaf1010(&uStack_1a0,*(long *)(pcVar8 + 0x130),pcVar8);
            plVar14 = (long *)0x138;
            __Znwm();
            pcStack_d0 = pcStack_160;
            plVar28 = plVar14 + 1;
            *plVar28 = 0;
            plVar14[2] = 0;
            *plVar14 = (long)&PTR_FUN_110b9f3b0;
            pcVar9 = (code *)(plVar14 + 3);
            pcStack_160 = (code *)0x0;
            plStack_c8 = plStack_158;
            (**(code **)(apcStack_150[0] + 0x10))(&lStack_c0,apcStack_150);
            lStack_88 = uStack_118;
            uVar13 = *(ulong *)(pcVar7 + 8);
            pcVar10 = *(code **)pcVar7;
            if (-1 < (char)pcVar7[0x17]) {
              uVar13 = (ulong)(byte)pcVar7[0x17];
              pcVar10 = pcVar7;
            }
            pcStack_110 = FUN_10ab04530;
            ppuStack_108 = &PTR_FUN_110c45e40;
            uStack_100 = uStack_1a0;
            uStack_f0 = uStack_190;
            uStack_f8 = uStack_198;
            uStack_198 = 0;
            uStack_190 = 0;
            FUN_10a23708c(pcVar9,&UNK_10e4f49c8,0x2e,&UNK_10f647b49,4,&pcStack_d0,1,in_x7,pcVar10,
                          uVar13,&pcStack_110);
            (*(code *)*ppuStack_108)(&ppuStack_108);
            FUN_10a042634(&pcStack_d0);
            pcStack_188 = pcVar9;
            plStack_180 = plVar14;
            FUN_10aaf10b8(&uStack_1a0);
            FUN_10a042634(&pcStack_160);
            pcVar7 = *(code **)(pcVar8 + 0x1f8);
            if (pcVar7 == (code *)0x0) {
              plVar15 = *(long **)(*(long *)(*(long *)(pcVar8 + 0xf0) + 0x100) + 0x1c8);
              (**(code **)(*plVar15 + 0x60))();
              plVar26 = (long *)plVar15[1];
              if (plVar26 != (long *)0x0) {
                pcVar7 = (code *)*plVar15;
                goto LAB_10ab02844;
              }
LAB_10ab028fc:
              pcStack_d0 = (code *)0x0;
              plStack_c8 = (long *)0x0;
LAB_10ab0290c:
              ppuVar17 = &PTR_PTR_113306b88;
              FUN_10ae079a0(0,&PTR_PTR_113306b88);
              FUN_10ae07cd4(ppuVar17,&PTR_PTR_113306b88);
              plVar14 = (long *)0x38;
              __Znwm();
              plVar28 = plVar14 + 1;
              *plVar28 = 0;
              plVar14[2] = 0;
              *plVar14 = (long)&PTR_DAT_110c45bb0;
              plVar14[4] = 0;
              plVar14[5] = 0;
              pcStack_160 = (code *)(plVar14 + 3);
              *(undefined ***)pcStack_160 = &PTR_DAT_110c45998;
              *(undefined2 *)(plVar14 + 6) = 2;
              plStack_158 = plVar14;
              FUN_10aaf1138(pcVar8,pcStack_160,plVar14);
              do {
                lVar11 = *plVar28;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar3) {
                  *plVar28 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
LAB_10ab029a4:
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
              }
            }
            else {
              plVar26 = *(long **)(pcVar8 + 0x200);
              if (plVar26 == (long *)0x0) goto LAB_10ab028fc;
LAB_10ab02844:
              plVar15 = plVar26 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar3) {
                  *plVar15 = *plVar15 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_d0 = (code *)0x0;
              plVar15 = plVar26;
              __ZNSt3__119__shared_weak_count4lockEv();
              plStack_c8 = plVar15;
              if (plVar15 == (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
                goto LAB_10ab0290c;
              }
              pcStack_d0 = pcVar7;
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
              if (pcVar7 == (code *)0x0) goto LAB_10ab0290c;
              ppuVar17 = &PTR_PTR_113306978;
              FUN_10ae079a0(0,&PTR_PTR_113306978);
              FUN_10ae07cd4(ppuVar17,&PTR_PTR_113306978);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar3) {
                  *plVar28 = *plVar28 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_160 = pcVar9;
              plStack_158 = plVar14;
              (*(code *)**(undefined8 **)pcVar7)(pcVar7,&pcStack_160);
              plVar14 = plStack_158;
              if (plStack_158 != (long *)0x0) {
                plVar28 = plStack_158 + 1;
                do {
                  lVar11 = *plVar28;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar3) {
                    *plVar28 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 != 0) goto LAB_10ab029a8;
                (**(code **)(*plStack_158 + 0x10))(plStack_158);
                goto LAB_10ab029a4;
              }
            }
LAB_10ab029a8:
            plVar14 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar28 = plStack_c8 + 1;
              do {
                lVar11 = *plVar28;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar3) {
                  *plVar28 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
              }
            }
            plVar14 = plStack_180;
            if (plStack_180 != (long *)0x0) {
              plVar28 = plStack_180 + 1;
              do {
                lVar11 = *plVar28;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar3) {
                  *plVar28 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_180 + 0x10))(plStack_180);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
              }
            }
            if ((char)bStack_161 < '\0') {
              __ZdlPv(pppuStack_178);
            }
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar3) {
              *plVar27 = *plVar27 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pcStack_d0 = pcVar7;
          plStack_c8 = plVar12;
          FUN_10aaf0dcc(pcVar7,pcVar8 + 0x178);
          do {
            lVar11 = *plVar27;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar3) {
              *plVar27 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        do {
          lVar11 = *plVar27;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar3) {
            *plVar27 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
        *extraout_x8 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          pcVar7 = pcVar5 + 600;
          lVar11 = *(long *)(pcVar5 + 0x2c8);
          uVar13 = lVar11 - 1;
          *(ulong *)(pcVar5 + 0x2c8) = uVar13;
          if (uVar13 < 8) {
            uVar13 = *(ulong *)(pcVar7 + (lVar11 + 2) * 8);
            if (*(ulong *)(pcVar5 + 0x2d0) == uVar13) {
              return;
            }
          }
          else {
            uVar13 = *(ulong *)(*(long *)(pcVar5 + 0x2b8) + -8);
            *(ulong **)(pcVar5 + 0x2b8) = (ulong *)(*(long *)(pcVar5 + 0x2b8) + -8);
            if (*(ulong *)(pcVar5 + 0x2d0) == uVar13) {
              return;
            }
          }
          lVar11 = *(long *)pcVar7;
          lVar21 = *(long *)(pcVar5 + 0x260);
          lVar19 = lVar21 - lVar11;
          uVar23 = lVar19 >> 4;
          if (uVar23 < uVar13) {
            uVar25 = uVar13 - uVar23;
            lVar22 = *(long *)(pcVar5 + 0x268);
            if ((ulong)(lVar22 - lVar21 >> 4) < uVar25) {
              if (uVar13 >> 0x3c == 0) {
                uVar18 = lVar22 - lVar11 >> 3;
                if (uVar18 <= uVar13) {
                  uVar18 = uVar13;
                }
                if (0x7fffffffffffffef < (ulong)(lVar22 - lVar11)) {
                  uVar18 = 0xfffffffffffffff;
                }
                pcStack_78 = pcVar7;
                if (uVar18 >> 0x3c == 0) {
                  lVar6 = uVar18 << 4;
                  __Znwm();
                  lVar21 = lVar6 + lVar19;
                  _bzero(lVar21,uVar25 * 0x10);
                  lVar20 = lVar21 + uVar23 * -0x10;
                  _memcpy(lVar20,lVar11,lVar19);
                  *(long *)pcVar7 = lVar20;
                  *(ulong *)(pcVar5 + 0x260) = lVar21 + uVar25 * 0x10;
                  *(ulong *)(pcVar5 + 0x268) = lVar6 + uVar18 * 0x10;
                  lStack_98 = lVar11;
                  lStack_90 = lVar11;
                  lStack_88 = lVar11;
                  lStack_80 = lVar22;
                  func_0x00010988c1b8(&lStack_98);
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
            _bzero(lVar21,uVar25 * 0x10);
            *(ulong *)(pcVar5 + 0x260) = lVar21 + uVar25 * 0x10;
          }
          else if (uVar13 < uVar23) {
            lVar11 = lVar11 + uVar13 * 0x10;
            while (lVar21 != lVar11) {
              lVar21 = lVar21 + -0x10;
              func_0x00010988c204(lVar21);
            }
            *(long *)(pcVar5 + 0x260) = lVar11;
          }
code_r0x00010988c138:
          *(ulong *)(pcVar5 + 0x2d0) = uVar13;
          return;
        }
        ___stack_chk_fail();
      }
      else {
        uVar13 = *(ulong *)(pcVar8 + 0x50);
        FUN_10a3df7b0(uVar13,3);
        if ((uVar13 & 1) != 0) goto LAB_10ab02550;
      }
      FUN_10a00946c(&UNK_10f68ed61);
      goto LAB_10ab02ae0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab02ae0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab02ae4);
  (*pcVar5)();
}



/* Entry: 10ab02350; end: 10ab02bfb;  */

void FUN_10ab02350(undefined4 *param_1,code *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined8 in_x7;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined8 ***pppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  code *pcStack_150;
  long *plStack_148;
  code *apcStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code *pcStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar6 + 0x2c8) < 8) {
    *(long *)(pcVar6 + (*(ulong *)(pcVar6 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar6 + 0x2d0);
    *(long *)(pcVar6 + 0x2c8) = *(long *)(pcVar6 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar6 + 600);
  }
  pcVar8 = param_2;
  FUN_10ab022c4(param_2,param_3);
  FUN_10ab02bfc(param_5);
  if (*param_4 == 7) {
    pcVar23 = param_2;
    (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    pcVar9 = param_2;
    pcStack_100 = pcVar23;
    (**(code **)(*(long *)param_2 + 0x228))(param_2,&pcStack_100);
    if ((int)pcVar9 != 0) {
      pcVar23 = param_2;
      (**(code **)(*(long *)param_2 + 0x58))();
      lVar10 = *(long *)(pcVar23 + 0x240);
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar23 = pcStack_100,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab02ae0;
      }
      pcStack_100 = (code *)0x0;
      plStack_148 = (long *)CONCAT44(plStack_148._4_4_,7);
      apcStack_140[0] = pcVar23;
      pcStack_150 = param_2;
      FUN_10a688ac0(&pcStack_c0,&pcStack_150,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)plStack_148) && (apcStack_140[0] != (code *)0x0)) {
        (*(code *)**(undefined8 **)apcStack_140[0])();
      }
    }
    if (pcStack_100 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_100)();
    }
    if (((ulong)pcVar9 & 1) != 0) {
      plVar11 = (long *)0x60;
      __Znwm();
      plVar26 = plVar11 + 1;
      *plVar26 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c45d80;
      pcVar23 = (code *)(plVar11 + 3);
      plVar11[4] = (long)plStack_b8;
      *(code **)pcVar23 = pcStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11[6] = lStack_a8;
      plVar11[5] = lStack_b0;
      if (lStack_a8 != 0) {
        plVar13 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar11 + 0xb) = 2;
      FUN_10a688c1c(&pcStack_c0);
      if (*(long *)(pcVar8 + 0xf0) == 0) {
LAB_10ab02550:
        if (*(long *)(pcVar8 + 0x178) == 0) {
          puVar22 = *(undefined8 **)(pcVar8 + 400);
          if (puVar22 < *(undefined8 **)(pcVar8 + 0x198)) {
            *puVar22 = pcVar23;
            puVar22[1] = plVar11;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar3) {
                *plVar26 = *plVar26 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar22 = puVar22 + 2;
          }
          else {
            lVar10 = (long)puVar22 - *(long *)(pcVar8 + 0x188);
            uVar12 = (lVar10 >> 4) + 1;
            if (uVar12 >> 0x3c != 0) {
              FUN_10aafd014();
              goto LAB_10ab02ae0;
            }
            uVar24 = (long)*(undefined8 **)(pcVar8 + 0x198) - *(long *)(pcVar8 + 0x188);
            uVar21 = (long)uVar24 >> 3;
            if (uVar21 <= uVar12) {
              uVar21 = uVar12;
            }
            if (0x7fffffffffffffef < uVar24) {
              uVar21 = 0xfffffffffffffff;
            }
            if (uVar21 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10ab02ae0;
            }
            lVar19 = uVar21 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar19 + lVar10);
            *puVar1 = pcVar23;
            puVar1[1] = plVar11;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar3) {
                *plVar26 = *plVar26 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar10 = *(long *)(pcVar8 + 0x188);
            puVar22 = puVar1 + 2;
            lVar17 = (long)puVar1 - (*(long *)(pcVar8 + 400) - lVar10);
            _memcpy(lVar17,lVar10);
            *(long *)(pcVar8 + 0x188) = lVar17;
            *(undefined8 **)(pcVar8 + 400) = puVar22;
            *(ulong *)(pcVar8 + 0x198) = lVar19 + uVar21 * 0x10;
            if (lVar10 != 0) {
              __ZdlPv(lVar10);
            }
          }
          *(undefined8 **)(pcVar8 + 400) = puVar22;
          if ((ulong)((long)puVar22 - *(long *)(pcVar8 + 0x188)) < 0x11) {
            func_0x000109382360(&pcStack_c0,0,0,0,1);
            FUN_10a0c32e4(&pppuStack_168);
            func_0x000109380ffc(&plStack_b8,(ulong)pcStack_c0 & 0xff);
            ppppuVar4 = (undefined8 ****)pppuStack_168;
            if (-1 < (char)bStack_151) {
              uStack_160 = (ulong)bStack_151;
              ppppuVar4 = &pppuStack_168;
            }
            FUN_10a3bf330(&pcStack_150,ppppuVar4,uStack_160);
            pcVar23 = pcVar8 + 0x1e0;
            if ((char)pcVar8[0x1f7] < '\0') {
              if (*(long *)(pcVar8 + 0x1e8) == 0) goto LAB_10ab02810;
            }
            else if (pcVar8[0x1f7] == (code)0x0) {
LAB_10ab02810:
              pcVar23 = (code *)(*(long *)(*(long *)(pcVar8 + 0xf0) + 0x100) + 0x208);
            }
            FUN_10aaf1010(&uStack_190,*(long *)(pcVar8 + 0x130),pcVar8);
            plVar13 = (long *)0x138;
            __Znwm();
            pcStack_c0 = pcStack_150;
            plVar27 = plVar13 + 1;
            *plVar27 = 0;
            plVar13[2] = 0;
            *plVar13 = (long)&PTR_FUN_110b9f3b0;
            pcVar9 = (code *)(plVar13 + 3);
            pcStack_150 = (code *)0x0;
            plStack_b8 = plStack_148;
            (**(code **)(apcStack_140[0] + 0x10))(&lStack_b0,apcStack_140);
            lStack_78 = uStack_108;
            uVar12 = *(ulong *)(pcVar23 + 8);
            pcVar5 = *(code **)pcVar23;
            if (-1 < (char)pcVar23[0x17]) {
              uVar12 = (ulong)(byte)pcVar23[0x17];
              pcVar5 = pcVar23;
            }
            pcStack_100 = FUN_10ab04530;
            ppuStack_f8 = &PTR_FUN_110c45e40;
            uStack_f0 = uStack_190;
            uStack_e0 = uStack_180;
            uStack_e8 = uStack_188;
            uStack_188 = 0;
            uStack_180 = 0;
            FUN_10a23708c(pcVar9,&UNK_10e4f49c8,0x2e,&UNK_10f647b49,4,&pcStack_c0,1,in_x7,pcVar5,
                          uVar12,&pcStack_100);
            (*(code *)*ppuStack_f8)(&ppuStack_f8);
            FUN_10a042634(&pcStack_c0);
            pcStack_178 = pcVar9;
            plStack_170 = plVar13;
            FUN_10aaf10b8(&uStack_190);
            FUN_10a042634(&pcStack_150);
            pcVar23 = *(code **)(pcVar8 + 0x1f8);
            if (pcVar23 == (code *)0x0) {
              plVar14 = *(long **)(*(long *)(*(long *)(pcVar8 + 0xf0) + 0x100) + 0x1c8);
              (**(code **)(*plVar14 + 0x60))();
              plVar25 = (long *)plVar14[1];
              if (plVar25 != (long *)0x0) {
                pcVar23 = (code *)*plVar14;
                goto LAB_10ab02844;
              }
LAB_10ab028fc:
              pcStack_c0 = (code *)0x0;
              plStack_b8 = (long *)0x0;
LAB_10ab0290c:
              ppuVar15 = &PTR_PTR_113306b88;
              FUN_10ae079a0(0,&PTR_PTR_113306b88);
              FUN_10ae07cd4(ppuVar15,&PTR_PTR_113306b88);
              plVar13 = (long *)0x38;
              __Znwm();
              plVar27 = plVar13 + 1;
              *plVar27 = 0;
              plVar13[2] = 0;
              *plVar13 = (long)&PTR_DAT_110c45bb0;
              plVar13[4] = 0;
              plVar13[5] = 0;
              pcStack_150 = (code *)(plVar13 + 3);
              *(undefined ***)pcStack_150 = &PTR_DAT_110c45998;
              *(undefined2 *)(plVar13 + 6) = 2;
              plStack_148 = plVar13;
              FUN_10aaf1138(pcVar8,pcStack_150,plVar13);
              do {
                lVar10 = *plVar27;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar3) {
                  *plVar27 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
LAB_10ab029a4:
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            else {
              plVar25 = *(long **)(pcVar8 + 0x200);
              if (plVar25 == (long *)0x0) goto LAB_10ab028fc;
LAB_10ab02844:
              plVar14 = plVar25 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar3) {
                  *plVar14 = *plVar14 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_c0 = (code *)0x0;
              plVar14 = plVar25;
              __ZNSt3__119__shared_weak_count4lockEv();
              plStack_b8 = plVar14;
              if (plVar14 == (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                goto LAB_10ab0290c;
              }
              pcStack_c0 = pcVar23;
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
              if (pcVar23 == (code *)0x0) goto LAB_10ab0290c;
              ppuVar15 = &PTR_PTR_113306978;
              FUN_10ae079a0(0,&PTR_PTR_113306978);
              FUN_10ae07cd4(ppuVar15,&PTR_PTR_113306978);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar3) {
                  *plVar27 = *plVar27 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              pcStack_150 = pcVar9;
              plStack_148 = plVar13;
              (*(code *)**(undefined8 **)pcVar23)(pcVar23,&pcStack_150);
              plVar13 = plStack_148;
              if (plStack_148 != (long *)0x0) {
                plVar27 = plStack_148 + 1;
                do {
                  lVar10 = *plVar27;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar3) {
                    *plVar27 = lVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar10 != 0) goto LAB_10ab029a8;
                (**(code **)(*plStack_148 + 0x10))(plStack_148);
                goto LAB_10ab029a4;
              }
            }
LAB_10ab029a8:
            plVar13 = plStack_b8;
            if (plStack_b8 != (long *)0x0) {
              plVar27 = plStack_b8 + 1;
              do {
                lVar10 = *plVar27;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar3) {
                  *plVar27 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            plVar13 = plStack_170;
            if (plStack_170 != (long *)0x0) {
              plVar27 = plStack_170 + 1;
              do {
                lVar10 = *plVar27;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar3) {
                  *plVar27 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_170 + 0x10))(plStack_170);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            if ((char)bStack_151 < '\0') {
              __ZdlPv(pppuStack_168);
            }
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar3) {
              *plVar26 = *plVar26 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pcStack_c0 = pcVar23;
          plStack_b8 = plVar11;
          FUN_10aaf0dcc(pcVar23,pcVar8 + 0x178);
          do {
            lVar10 = *plVar26;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar3) {
              *plVar26 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        do {
          lVar10 = *plVar26;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *plVar26 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          pcVar8 = pcVar6 + 600;
          lVar10 = *(long *)(pcVar6 + 0x2c8);
          uVar12 = lVar10 - 1;
          *(ulong *)(pcVar6 + 0x2c8) = uVar12;
          if (uVar12 < 8) {
            uVar12 = *(ulong *)(pcVar8 + (lVar10 + 2) * 8);
            if (*(ulong *)(pcVar6 + 0x2d0) == uVar12) {
              return;
            }
          }
          else {
            uVar12 = *(ulong *)(*(long *)(pcVar6 + 0x2b8) + -8);
            *(ulong **)(pcVar6 + 0x2b8) = (ulong *)(*(long *)(pcVar6 + 0x2b8) + -8);
            if (*(ulong *)(pcVar6 + 0x2d0) == uVar12) {
              return;
            }
          }
          lVar10 = *(long *)pcVar8;
          lVar19 = *(long *)(pcVar6 + 0x260);
          lVar17 = lVar19 - lVar10;
          uVar21 = lVar17 >> 4;
          if (uVar21 < uVar12) {
            uVar24 = uVar12 - uVar21;
            lVar20 = *(long *)(pcVar6 + 0x268);
            if ((ulong)(lVar20 - lVar19 >> 4) < uVar24) {
              if (uVar12 >> 0x3c == 0) {
                uVar16 = lVar20 - lVar10 >> 3;
                if (uVar16 <= uVar12) {
                  uVar16 = uVar12;
                }
                if (0x7fffffffffffffef < (ulong)(lVar20 - lVar10)) {
                  uVar16 = 0xfffffffffffffff;
                }
                pcStack_68 = pcVar8;
                if (uVar16 >> 0x3c == 0) {
                  lVar7 = uVar16 << 4;
                  __Znwm();
                  lVar19 = lVar7 + lVar17;
                  _bzero(lVar19,uVar24 * 0x10);
                  lVar18 = lVar19 + uVar21 * -0x10;
                  _memcpy(lVar18,lVar10,lVar17);
                  *(long *)pcVar8 = lVar18;
                  *(ulong *)(pcVar6 + 0x260) = lVar19 + uVar24 * 0x10;
                  *(ulong *)(pcVar6 + 0x268) = lVar7 + uVar16 * 0x10;
                  lStack_88 = lVar10;
                  lStack_80 = lVar10;
                  lStack_78 = lVar10;
                  lStack_70 = lVar20;
                  func_0x00010988c1b8(&lStack_88);
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
            _bzero(lVar19,uVar24 * 0x10);
            *(ulong *)(pcVar6 + 0x260) = lVar19 + uVar24 * 0x10;
          }
          else if (uVar12 < uVar21) {
            lVar10 = lVar10 + uVar12 * 0x10;
            while (lVar19 != lVar10) {
              lVar19 = lVar19 + -0x10;
              func_0x00010988c204(lVar19);
            }
            *(long *)(pcVar6 + 0x260) = lVar10;
          }
code_r0x00010988c138:
          *(ulong *)(pcVar6 + 0x2d0) = uVar12;
          return;
        }
        ___stack_chk_fail();
      }
      else {
        uVar12 = *(ulong *)(pcVar8 + 0x50);
        FUN_10a3df7b0(uVar12,3);
        if ((uVar12 & 1) != 0) goto LAB_10ab02550;
      }
      FUN_10a00946c(&UNK_10f68ed61);
      goto LAB_10ab02ae0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab02ae0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab02ae4);
  (*pcVar6)();
}



/* Entry: 10ab02bfc; end: 10ab02c1f;  */

void FUN_10ab02bfc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c45d80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab02c20; end: 10ab02c2f;  */

void FUN_10ab02c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45d80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab02c30; end: 10ab02c4f;  */

void FUN_10ab02c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45d80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab02c50; end: 10ab02c77;  */

undefined1  [16] FUN_10ab02c50(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab02c74);
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



/* Entry: 10ab02c78; end: 10ab02efb;  */

void FUN_10ab02c78(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *plVar17;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ab022c4(param_2,param_3);
  FUN_10ab02efc(param_5);
  func_0x00010a5ce8a0(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffb8);
    plVar17 = plVar8;
    if ((int)plVar6 != 0) {
      (**(code **)(*param_2 + 0x58))();
      lVar7 = param_2[0x48];
      if ((lVar7 == 0) ||
         (___dynamic_cast(lVar7,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar7 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab02eb8;
      }
      plVar17 = (long *)0x0;
      FUN_10a688ac0(&lStack_80,&stack0xffffffffffffffa0,*(undefined8 *)(lVar7 + 8));
      if (plVar8 != (long *)0x0) {
        (**(code **)*plVar8)();
      }
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)*plVar17)();
    }
    if (((ulong)plVar6 & 1) != 0) {
      plVar8 = (long *)0x60;
      __Znwm();
      plVar6 = plVar8 + 1;
      *plVar6 = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110c45dd0;
      plVar8[4] = lStack_78;
      plVar8[3] = lStack_80;
      if (lStack_78 != 0) {
        plVar17 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8[6] = (long)plStack_68;
      plVar8[5] = lStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar17 = plStack_68 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = *plVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar8 + 0xb) = 2;
      FUN_10a688c1c(&lStack_80);
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      *param_1 = 0;
      plVar8 = plVar5 + 0x4b;
      lVar7 = plVar5[0x59];
      uVar9 = lVar7 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar8[lVar7 + 2];
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
      lVar7 = *plVar8;
      lVar13 = plVar5[0x4c];
      lVar11 = lVar13 - lVar7;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        lVar14 = plVar5[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar7 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar7)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar8;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar7,lVar11);
              *plVar8 = lVar12;
              plVar5[0x4c] = lVar13 + uVar16 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
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
      else if (uVar9 < uVar15) {
        lVar7 = lVar7 + uVar9 * 0x10;
        while (lVar13 != lVar7) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar5[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab02eb8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab02ebc);
  (*pcVar3)();
}



/* Entry: 10ab02efc; end: 10ab02f1f;  */

void FUN_10ab02efc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 2) {
    return;
  }
  puVar1 = (undefined8 *)0x2;
  FUN_10a052ee0(2,0,param_1);
  *puVar1 = &PTR_FUN_110c45dd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab02f20; end: 10ab02f2f;  */

void FUN_10ab02f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45dd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab02f30; end: 10ab02f4f;  */

void FUN_10ab02f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c45dd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab02f50; end: 10ab02f77;  */

undefined1  [16] FUN_10ab02f50(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab02f74);
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



/* Entry: 10ab02f78; end: 10ab03093;  */

void FUN_10ab02f78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab022c4(param_2,param_3);
  FUN_10a7248bc(param_5);
  FUN_10a7248e0(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010aaf139c(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10ab03094; end: 10ab03583;  */

/* WARNING: Possible PIC construction at 0x00010ab03578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab0357c) */
/* WARNING: Removing unreachable block (ram,0x00010ab0362c) */
/* WARNING: Removing unreachable block (ram,0x00010ab035c8) */
/* WARNING: Removing unreachable block (ram,0x00010ab035e0) */
/* WARNING: Removing unreachable block (ram,0x00010ab031ec) */

void FUN_10ab03094(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code **ppcVar3;
  long *plVar4;
  code **ppcVar5;
  long *plVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined8 ****ppppuVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long *unaff_x19;
  long *unaff_x20;
  long **unaff_x21;
  long lVar22;
  long *unaff_x22;
  long lVar23;
  long lVar24;
  long *unaff_x23;
  long lVar25;
  undefined1 *unaff_x24;
  ulong uVar26;
  code **unaff_x25;
  ulong uVar27;
  long *unaff_x26;
  long *plVar28;
  code **unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_1e0;
  ulong uStack_1d8;
  code **ppcStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined1 uStack_180;
  long lStack_178;
  undefined1 auStack_170 [8];
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 auStack_148 [2];
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined1 auStack_a8 [7];
  undefined1 uStack_a1;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar13[0x59] < 8) {
    plVar13[plVar13[0x59] + 0x4e] = plVar13[0x5a];
    plVar13[0x59] = plVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar13 + 0x4b);
  }
  FUN_10ab022c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar20 = param_2[0x24];
  uVar19 = *(ulong *)(lVar20 + 0x3f8);
  if (-1 < (char)*(byte *)(lVar20 + 0x407)) {
    uVar19 = (ulong)*(byte *)(lVar20 + 0x407);
  }
  if (uVar19 == 0) {
    FUN_10a00946c(&UNK_10f68ee41);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab034a8);
    (*pcVar11)();
  }
  uStack_158 = *(undefined8 *)(lVar20 + 0x408);
  plStack_150 = *(long **)(lVar20 + 0x410);
  if (plStack_150 != (long *)0x0) {
    plVar17 = plStack_150 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *plVar17 = *plVar17 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar20 = param_2[0x24];
  }
  auStack_170[0] = 0;
  puVar2 = auStack_170;
  lStack_168 = 0;
  lStack_178 = 0;
  uStack_180 = 3;
  lVar20 = lVar20 + 0x3f0;
  plStack_160 = param_2;
  func_0x00010938229c();
  ppcVar3 = &pcStack_f8;
  uStack_a1 = 0xd;
  uStack_b8 = 0x656461656c;
  uStack_b3 = 0x6f6272;
  uStack_b0 = 0x6449647261;
  uStack_ab = 0;
  puVar14 = auStack_170;
  lStack_178 = lVar20;
  func_0x0001095b7584(puVar14,&uStack_b8);
  uVar7 = *puVar14;
  *puVar14 = uStack_180;
  lVar20 = *(long *)(puVar14 + 8);
  uStack_180 = uVar7;
  *(long *)(puVar14 + 8) = lStack_178;
  lStack_178 = lVar20;
  func_0x000109380ffc(&lStack_178,uVar7);
  FUN_10a0c32e4(&pppuStack_198,auStack_170,0xffffffff,0x20,0,0);
  ppppuVar10 = (undefined8 ****)pppuStack_198;
  if (-1 < (char)bStack_181) {
    uStack_190 = (ulong)bStack_181;
    ppppuVar10 = &pppuStack_198;
  }
  FUN_10a3bf330(auStack_148,ppppuVar10,uStack_190);
  plVar17 = param_2 + 0x3c;
  if (*(char *)((long)param_2 + 0x1f7) < '\0') {
    if (param_2[0x3d] == 0) goto LAB_10ab0347c;
  }
  else if (*(char *)((long)param_2 + 0x1f7) == '\0') {
LAB_10ab0347c:
    plVar17 = (long *)(*(long *)(param_2[0x1e] + 0x100) + 0x208);
  }
  FUN_10aaf13fc(&uStack_1c0,param_2[0x26],&plStack_160);
  plVar15 = (long *)0x138;
  __Znwm();
  uVar16 = auStack_148[0];
  plVar28 = plVar15 + 1;
  *plVar28 = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&PTR_FUN_110b9f3b0;
  plVar4 = plVar15 + 3;
  auStack_148[0] = 0;
  uStack_b8 = (undefined5)uVar16;
  uStack_b3 = (undefined3)((ulong)uVar16 >> 0x28);
  uStack_b0 = (undefined5)auStack_148[1];
  uStack_ab = (undefined1)((ulong)auStack_148[1] >> 0x28);
  uStack_aa = (undefined2)((ulong)auStack_148[1] >> 0x30);
  (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
  uStack_70 = uStack_100;
  uStack_1d8 = plVar17[1];
  plStack_1e0 = (long *)*plVar17;
  if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
    uStack_1d8 = (ulong)*(byte *)((long)plVar17 + 0x17);
    plStack_1e0 = plVar17;
  }
  ppcVar5 = &pcStack_f8;
  pcStack_f8 = FUN_10ab04cc8;
  ppuStack_f0 = &PTR_FUN_110c45e58;
  uStack_e8 = uStack_1c0;
  uStack_d8 = uStack_1b0;
  uStack_e0 = uStack_1b8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  ppcStack_1d0 = ppcVar5;
  FUN_10a23708c(plVar4,&UNK_10e4f49f7,0x22,&UNK_10f647b49,4,&uStack_b8,1);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10a042634(&uStack_b8);
  plStack_1a8 = plVar4;
  plStack_1a0 = plVar15;
  FUN_10aaf15cc(&uStack_1c0);
  FUN_10a042634(auStack_148);
  uVar16 = *(undefined8 *)(param_2[0x1e] + 0x940);
  uStack_b8 = SUB85(plVar4,0);
  uStack_b3 = (undefined3)((ulong)plVar4 >> 0x28);
  uStack_b0 = SUB85(plVar15,0);
  uStack_ab = (undefined1)((ulong)plVar15 >> 0x28);
  uStack_aa = (undefined2)((ulong)plVar15 >> 0x30);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar9) {
      *plVar28 = *plVar28 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_10a25f3f4(uVar16,&uStack_b8);
  do {
    lVar20 = *plVar28;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar9) {
      *plVar28 = lVar20 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar20 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
  }
  plVar17 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    plVar18 = plStack_1a0 + 1;
    do {
      lVar20 = *plVar18;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *plVar18 = lVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if ((char)bStack_181 < '\0') {
    __ZdlPv(pppuStack_198);
  }
  plVar17 = &lStack_168;
  func_0x000109380ffc(plVar17,auStack_170[0]);
  plVar18 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar6 = plStack_150 + 1;
    do {
      lVar20 = *plVar6;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar17 = plVar18;
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&uStack_b8);
    FUN_10a05bd88(&plStack_1a8);
    if ((char)bStack_181 < '\0') {
      __ZdlPv(pppuStack_198);
    }
    unaff_x21 = &plStack_160;
    func_0x000109380ffc(&lStack_168,auStack_170[0]);
    func_0x00010a042b54(&uStack_158);
    unaff_x30 = 0x10ab0357c;
    register0x00000008 = (BADSPACEBASE *)&plStack_1e0;
    unaff_x19 = plVar13;
    unaff_x20 = plVar17;
    unaff_x22 = plVar15;
    unaff_x23 = plVar4;
    unaff_x24 = puVar2;
    unaff_x25 = ppcVar3;
    unaff_x26 = plVar28;
    unaff_x27 = ppcVar5;
    unaff_x29 = puVar1;
  }
  plVar17 = plVar13 + 0x4b;
  lVar20 = plVar13[0x59];
  uVar19 = lVar20 - 1;
  plVar13[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar17[lVar20 + 2];
    if (plVar13[0x5a] == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(plVar13[0x57] + -8);
    plVar13[0x57] = plVar13[0x57] + -8;
    if (plVar13[0x5a] == uVar19) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(code ***)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long ***)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar20 = *plVar17;
  lVar24 = plVar13[0x4c];
  lVar22 = lVar24 - lVar20;
  uVar26 = lVar22 >> 4;
  if (uVar26 < uVar19) {
    uVar27 = uVar19 - uVar26;
    lVar25 = plVar13[0x4d];
    if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
      if (uVar19 >> 0x3c == 0) {
        uVar21 = lVar25 - lVar20 >> 3;
        if (uVar21 <= uVar19) {
          uVar21 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar25 - lVar20)) {
          uVar21 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar17;
        if (uVar21 >> 0x3c == 0) {
          lVar12 = uVar21 << 4;
          __Znwm();
          lVar24 = lVar12 + lVar22;
          _bzero(lVar24,uVar27 * 0x10);
          lVar23 = lVar24 + uVar26 * -0x10;
          _memcpy(lVar23,lVar20,lVar22);
          *plVar17 = lVar23;
          plVar13[0x4c] = lVar24 + uVar27 * 0x10;
          plVar13[0x4d] = lVar12 + uVar21 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar20;
          *(long *)((long)register0x00000008 + -0x70) = lVar25;
          *(long *)((long)register0x00000008 + -0x88) = lVar20;
          *(long *)((long)register0x00000008 + -0x80) = lVar20;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar11)();
    }
    _bzero(lVar24,uVar27 * 0x10);
    plVar13[0x4c] = lVar24 + uVar27 * 0x10;
  }
  else if (uVar19 < uVar26) {
    lVar20 = lVar20 + uVar19 * 0x10;
    while (lVar24 != lVar20) {
      lVar24 = lVar24 + -0x10;
      func_0x00010988c204(lVar24);
    }
    plVar13[0x4c] = lVar20;
  }
code_r0x00010988c138:
  plVar13[0x5a] = uVar19;
  return;
}



/* Entry: 10ab03584; end: 10ab0364b;  */

void FUN_10ab03584(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab022c4(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  FUN_10aaf164c(plVar4,param_2);
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



/* Entry: 10ab0364c; end: 10ab0366f;  */

void FUN_10ab0364c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  long *plVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar9 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar19 = plVar5;
  func_0x000109898688(plVar5,uVar9);
  if (plVar19 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = plVar5;
    FUN_10a052c2c(plVar5,plVar19);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      plVar19 = (long *)plVar7[0x1d];
      if (plVar7[0x1d] != 0) {
        plVar7 = (long *)(plVar7[0x1d] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
      if (plVar19 != (long *)0x0) {
        plVar5 = plVar19 + 1;
        do {
          lVar12 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      plVar5 = plVar6 + 0x4b;
      lVar12 = plVar6[0x59];
      uVar10 = lVar12 - 1;
      plVar6[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar5[lVar12 + 2];
        if (plVar6[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar10) {
          return;
        }
      }
      lVar12 = *plVar5;
      lVar15 = plVar6[0x4c];
      lVar13 = lVar15 - lVar12;
      uVar17 = lVar13 >> 4;
      if (uVar17 < uVar10) {
        uVar18 = uVar10 - uVar17;
        lVar16 = plVar6[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar16 - lVar12 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_78 = plVar5;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar13;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar12,lVar13);
              *plVar5 = lVar14;
              plVar6[0x4c] = lVar15 + uVar18 * 0x10;
              plVar6[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_98 = lVar12;
              lStack_90 = lVar12;
              lStack_88 = lVar12;
              lStack_80 = lVar16;
              func_0x00010988c1b8(&lStack_98);
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
        plVar6[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar10 < uVar17) {
        lVar12 = lVar12 + uVar10 * 0x10;
        while (lVar15 != lVar12) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar6[0x4c] = lVar12;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar10;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab037dc);
  (*pcVar3)();
}



/* Entry: 10ab03670; end: 10ab037ef;  */

void FUN_10ab03670(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
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
  plVar17 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar17 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar17);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      plVar17 = (long *)plVar6[0x1d];
      if (plVar6[0x1d] != 0) {
        plVar6 = (long *)(plVar6[0x1d] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
      if (plVar17 != (long *)0x0) {
        plVar6 = plVar17 + 1;
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
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = plVar5 + 0x4b;
      lVar10 = plVar5[0x59];
      uVar8 = lVar10 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar17[lVar10 + 2];
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
      lVar10 = *plVar17;
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
            plStack_68 = plVar17;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar10,lVar11);
              *plVar17 = lVar12;
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
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab037dc);
  (*pcVar3)();
}



/* Entry: 10ab037f0; end: 10ab038d7;  */

void FUN_10ab037f0(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab03864);
  (*pcVar1)();
}



/* Entry: 10ab038d8; end: 10ab03b3f;  */

long FUN_10ab038d8(long param_1)

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



/* Entry: 10ab03b40; end: 10ab03c23;  */

long FUN_10ab03b40(long *param_1,undefined8 param_2)

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
        if (plVar4 == plVar2) {
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



/* Entry: 10ab03c24; end: 10ab03e83;  */

void FUN_10ab03c24(long *param_1,code **param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined1 auStack_140 [16];
  int aiStack_130 [2];
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  undefined1 **ppuStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  puVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    pppuVar6 = (undefined ***)0x0;
    if (ppcVar8 != (code **)0x0) {
      lStack_60 = param_1[1];
      lStack_68 = *param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_98 = *param_2;
      pppuStack_90 = (undefined ***)param_2[1];
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_88 = *param_3;
      pppuVar7 = (undefined ***)param_3[1];
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar6 = pppuVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_78 = FUN_10ab0408c;
      ppuStack_70 = &PTR_FUN_110c45e10;
      uStack_a8 = 0;
      pppuStack_a0 = (undefined ***)0x0;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar6 = pppuVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_2 = &pcStack_78;
      ppcVar9 = &pcStack_78;
      pppuStack_80 = pppuVar7;
      pcStack_58 = pcStack_98;
      pppuStack_50 = pppuStack_90;
      uStack_48 = uStack_88;
      pppuStack_40 = pppuVar7;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      pppuVar7 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_90 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      pppuVar7 = pppuStack_a0;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_a0 + 1;
        do {
          ppuVar12 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_a0)[2])(pppuStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    ppcVar9 = param_2;
    FUN_10ab03e84(pppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    puVar10 = param_3;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_2 + 1);
  FUN_10ab0405c(&uStack_a8);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_120,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_158,&ppuStack_120,*pppuVar6);
  if (ppuStack_120 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_120)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_160);
  ppuVar12 = *pppuVar6;
  FUN_10a724820(auStack_140,ppuVar12,ppcVar9);
  FUN_10a05b924(aiStack_130,ppuVar12,puVar10);
  uStack_f8 = 2;
  puStack_100 = auStack_140;
  (**(code **)(*ppuVar12 + 0x58))(ppuVar12);
  ppuStack_120 = &puStack_158;
  ppuStack_108 = &puStack_100;
  ppuStack_118 = ppuVar12;
  puStack_110 = (undefined1 *)&puStack_160;
  func_0x0001098960c0(aiStack_150);
  if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
    (**(code **)*puStack_148)();
  }
  lVar11 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_130 + lVar11)) &&
       (*(undefined8 **)((long)&lStack_128 + lVar11) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_128 + lVar11))();
    }
    lVar11 = lVar11 + -0x10;
  } while (lVar11 != -0x20);
  if (puStack_160 != (undefined8 *)0x0) {
    (**(code **)*puStack_160)();
  }
  if (puStack_158 != (undefined8 *)0x0) {
    (**(code **)*puStack_158)();
  }
  return;
}



/* Entry: 10ab03e84; end: 10ab0405b;  */

void FUN_10ab03e84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  FUN_10a724820(auStack_90,plVar2,param_2);
  FUN_10a05b924(aiStack_80,plVar2,param_3);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10ab0405c; end: 10ab0408b;  */

long FUN_10ab0405c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a05248c(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10ab0408c; end: 10ab0409f;  */

void FUN_10ab0408c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar3 = (long *)*puVar1;
  FUN_10a724820(auStack_90,plVar3,param_1 + 0x20);
  FUN_10a05b924(aiStack_80,plVar3,param_1 + 0x30);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar3;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar2)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10ab040a0; end: 10ab040cf;  */

long FUN_10ab040a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a05248c(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10ab040d0; end: 10ab04133;  */

void FUN_10ab040d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c45e10;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10ab04134; end: 10ab04193;  */

undefined8 FUN_10ab04134(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10ab04194(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        func_0x00010ab03a54(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab04194);
  (*pcVar2)();
}



/* Entry: 10ab04194; end: 10ab042b3;  */

void FUN_10ab04194(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ab04248;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ab04248;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10ab04248:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10ab042b4; end: 10ab044b7;  */

void FUN_10ab042b4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c459e0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab044b8; end: 10ab044c7;  */

void FUN_10ab044b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c459e0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab044c8; end: 10ab044ef;  */

long FUN_10ab044c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ab038d8(param_1 + 0x18);
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



/* Entry: 10ab044f0; end: 10ab0452f;  */

void FUN_10ab044f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c45e28;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10ab04530; end: 10ab04c47;  */

long * FUN_10ab04530(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  char **ppcVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  long lStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  undefined6 uStack_1b8;
  undefined2 uStack_1b2;
  undefined6 uStack_1b0;
  undefined1 uStack_1aa;
  char cStack_1a9;
  undefined8 uStack_1a8;
  char *pcStack_1a0;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined1 uStack_18a;
  char cStack_189;
  undefined8 uStack_188;
  char *pcStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  char acStack_158 [8];
  long lStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  byte bStack_131;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  int iStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [56];
  long lStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [40];
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 == (long *)0x0) goto LAB_10ab049d0;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_1d8 = plVar6;
  if ((plVar6 == (long *)0x0) || (lStack_1e0 = *(long *)(param_2 + 0x18), lStack_1e0 == 0))
  goto LAB_10ab049d0;
  lVar11 = *(long *)(param_2 + 0x10);
  lStack_128 = param_1[1];
  plStack_130 = (long *)*param_1;
  lStack_120 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_110 = param_1[4];
  plStack_118 = (long *)param_1[3];
  lStack_108 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_100 = (int)param_1[6];
  lStack_f8 = param_1[7];
  lStack_f0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_e8,param_1 + 9);
  lStack_b0 = param_1[0x10];
  uStack_a8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_a0,param_1 + 0x12);
  uVar10 = *(undefined8 *)(lVar11 + 0x18);
  if (iStack_100 - 200U < 100) {
    FUN_109ffe064(&uStack_148,lStack_f8,lStack_b0);
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
    }
    if (uStack_140 == 0) {
      ppuVar8 = &PTR_PTR_113306a40;
      FUN_10ae079a0(0,&PTR_PTR_113306a40);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306a40);
      plVar6 = (long *)0x38;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_DAT_110c45bb0;
      plVar5 = plVar6 + 3;
      *plVar5 = (long)&PTR_DAT_110c45998;
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(undefined2 *)(plVar6 + 6) = 2;
      plStack_1d0 = plVar5;
      plStack_1c8 = plVar6;
    }
    else {
      plStack_60 = (long *)0x0;
      FUN_109fc89b4(acStack_158,&uStack_148,alStack_78,0,0);
      if (plStack_60 == alStack_78) {
        lVar11 = 0x20;
LAB_10ab0474c:
        (**(code **)(*plStack_60 + lVar11))();
      }
      else if (plStack_60 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_10ab0474c;
      }
      if (acStack_158[0] == '\t') {
        ppuVar8 = &PTR_PTR_113306a88;
        FUN_10ae079a0(0,&PTR_PTR_113306a88);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306a88);
        plVar6 = (long *)0x38;
        __Znwm();
LAB_10ab0490c:
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_DAT_110c45bb0;
        plVar5 = plVar6 + 3;
        *plVar5 = (long)&PTR_DAT_110c45998;
        plVar6[4] = 0;
        plVar6[5] = 0;
        *(undefined2 *)(plVar6 + 6) = 2;
      }
      else {
        uStack_198 = 0x53676e696b61;
        pcStack_1a0 = (char *)0x6d686374614d7369;
        uStack_192 = 0x7075;
        uStack_190 = 0x646574726f70;
        uStack_18a = 0;
        cStack_189 = '\x16';
        pcStack_178 = acStack_158;
        lStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0x8000000000000000;
        if (acStack_158[0] == '\x01') {
          lVar11 = lStack_150;
          func_0x0001093793a4(lStack_150,&pcStack_1a0);
          lStack_170 = lVar11;
          if (cStack_189 < '\0') {
            __ZdlPv(pcStack_1a0);
          }
        }
        else if (acStack_158[0] == '\x02') {
          uStack_168 = *(undefined8 *)(lStack_150 + 8);
        }
        else {
          uStack_160 = 1;
        }
        pcStack_1a0 = acStack_158;
        uStack_198 = 0;
        uStack_192 = 0;
        uStack_190 = 0;
        uStack_18a = 0;
        cStack_189 = 0;
        uStack_188 = 0x8000000000000000;
        if (acStack_158[0] == '\x02') {
          uVar9 = *(undefined8 *)(lStack_150 + 8);
          uStack_190 = (undefined6)uVar9;
          uStack_18a = (undefined1)((ulong)uVar9 >> 0x30);
          cStack_189 = (char)((ulong)uVar9 >> 0x38);
        }
        else if (acStack_158[0] == '\x01') {
          uStack_198 = (undefined6)(lStack_150 + 8);
          uStack_192 = (undefined2)((ulong)(lStack_150 + 8) >> 0x30);
        }
        else {
          uStack_188 = 1;
        }
        ppcVar7 = &pcStack_178;
        func_0x000109379420(ppcVar7,&pcStack_1a0);
        if (((ulong)ppcVar7 & 1) != 0) {
LAB_10ab048e4:
          ppuVar8 = &PTR_PTR_113306b28;
          FUN_10ae079a0(0,&PTR_PTR_113306b28);
          FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306b28);
          plVar6 = (long *)0x38;
          __Znwm();
          goto LAB_10ab0490c;
        }
        ppcVar7 = &pcStack_178;
        func_0x000109386768();
        if (*(char *)ppcVar7 != '\x04') goto LAB_10ab048e4;
        func_0x000109386768(&pcStack_178);
        func_0x00010938d198();
        bVar4 = (byte)pcStack_1a0;
        uVar12 = (ulong)pcStack_1a0 & 0xff;
        uStack_1b8 = 0x533256646573;
        pcStack_1c0 = (char *)0x61426e7275547369;
        uStack_1b2 = 0x7075;
        uStack_1b0 = 0x646574726f70;
        uStack_1aa = 0;
        cStack_1a9 = '\x16';
        pcStack_1a0 = acStack_158;
        uStack_198 = 0;
        uStack_192 = 0;
        uStack_190 = 0;
        uStack_18a = 0;
        cStack_189 = 0;
        uStack_188 = 0x8000000000000000;
        if (acStack_158[0] == '\x01') {
          lVar11 = lStack_150;
          func_0x0001093793a4(lStack_150,&pcStack_1c0);
          uStack_198 = (undefined6)lVar11;
          uStack_192 = (undefined2)((ulong)lVar11 >> 0x30);
          if (cStack_1a9 < '\0') {
            __ZdlPv(pcStack_1c0);
          }
        }
        else if (acStack_158[0] == '\x02') {
          uVar9 = *(undefined8 *)(lStack_150 + 8);
          uStack_190 = (undefined6)uVar9;
          uStack_18a = (undefined1)((ulong)uVar9 >> 0x30);
          cStack_189 = (char)((ulong)uVar9 >> 0x38);
        }
        else {
          uStack_188 = 1;
        }
        pcStack_1c0 = acStack_158;
        uStack_1b8 = 0;
        uStack_1b2 = 0;
        uStack_1b0 = 0;
        uStack_1aa = 0;
        cStack_1a9 = '\0';
        uStack_1a8 = 0x8000000000000000;
        if (acStack_158[0] == '\x02') {
          uVar9 = *(undefined8 *)(lStack_150 + 8);
          uStack_1b0 = (undefined6)uVar9;
          uStack_1aa = (undefined1)((ulong)uVar9 >> 0x30);
          cStack_1a9 = (char)((ulong)uVar9 >> 0x38);
        }
        else if (acStack_158[0] == '\x01') {
          uStack_1b8 = (undefined6)(lStack_150 + 8);
          uStack_1b2 = (undefined2)((ulong)(lStack_150 + 8) >> 0x30);
        }
        else {
          uStack_1a8 = 1;
        }
        ppcVar7 = &pcStack_1a0;
        func_0x000109379420(ppcVar7,&pcStack_1c0);
        if (((ulong)ppcVar7 & 1) == 0) {
          ppcVar7 = &pcStack_1a0;
          func_0x000109386768();
          if (*(char *)ppcVar7 != '\x04') goto LAB_10ab04af0;
          func_0x000109386768(&pcStack_1a0);
          func_0x00010938d198();
          uVar13 = SUB81(pcStack_1c0,0);
        }
        else {
LAB_10ab04af0:
          uVar13 = 0;
        }
        func_0x00010ae02ecc(0,uVar12);
        func_0x00010ae02ecc();
        ppuVar8 = &PTR_PTR_113306ad0;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        func_0x00010ae02edc();
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306ad0);
        plVar6 = (long *)0x38;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_DAT_110c45bb0;
        plVar5 = plVar6 + 3;
        *plVar5 = (long)&PTR_DAT_110c45998;
        plVar6[4] = 0;
        plVar6[5] = 0;
        *(byte *)(plVar6 + 6) = bVar4 ^ 1;
        *(undefined1 *)((long)plVar6 + 0x31) = uVar13;
      }
      plStack_1d0 = plVar5;
      plStack_1c8 = plVar6;
      func_0x000109380ffc(&lStack_150,acStack_158[0]);
    }
    if ((char)bStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
  }
  else {
    func_0x00010ae02ecc(0,iStack_100);
    ppuVar8 = &PTR_PTR_1133069f8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133069f8);
    plVar6 = (long *)0x38;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c45bb0;
    plVar5 = plVar6 + 3;
    *plVar5 = (long)&PTR_DAT_110c45998;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *(undefined2 *)(plVar6 + 6) = 2;
    plStack_1d0 = plVar5;
    plStack_1c8 = plVar6;
  }
  FUN_10aaf1138(uVar10,plVar5,plVar6);
  plVar5 = plVar6 + 1;
  do {
    lVar11 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  func_0x000104c4f944(auStack_a0);
  plVar6 = &lStack_f8;
  FUN_10a042634();
  if (lStack_108 < 0) {
    plVar6 = plStack_118;
    __ZdlPv();
  }
  if (lStack_120 < 0) {
    plVar6 = plStack_130;
    __ZdlPv();
  }
LAB_10ab049d0:
  plVar5 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar1 = plStack_1d8 + 1;
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
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (cStack_1a9 < '\0') {
    __ZdlPv(pcStack_1c0);
  }
  func_0x000109380ffc(&lStack_150,acStack_158[0]);
  if ((char)bStack_131 < '\0') {
    __ZdlPv(uStack_148);
  }
  FUN_10a05bd10(&plStack_130);
  func_0x00010a05a86c(&lStack_1e0);
  __Unwind_Resume();
  plVar5 = (long *)plVar6[3];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plVar6[2] != 0) {
        FUN_10a05c0fc(plVar6[2],plVar6[1]);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar6[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6 + 1;
}



/* Entry: 10ab04c48; end: 10ab04c73;  */

undefined8 * FUN_10ab04c48(long param_1)

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



/* Entry: 10ab04c74; end: 10ab04cc7;  */

void FUN_10ab04c74(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010ab03a18(param_1,param_1[2]);
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



/* Entry: 10ab04cc8; end: 10ab0501b;  */

long * FUN_10ab04cc8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_140;
  long *plStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined8 *puStack_118;
  long *plStack_110;
  char cStack_101;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  long lStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_140 = 0;
  plStack_138 = (long *)0x0;
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_138 = plVar6;
    if ((plVar6 != (long *)0x0) && (lStack_140 = *(long *)(param_2 + 0x18), lStack_140 != 0)) {
      lVar10 = *(long *)(param_2 + 0x10);
      lStack_f8 = param_1[1];
      plStack_100 = (long *)*param_1;
      lStack_f0 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      lStack_e0 = param_1[4];
      plStack_e8 = (long *)param_1[3];
      lStack_d8 = param_1[5];
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      iStack_d0 = (int)param_1[6];
      lStack_c8 = param_1[7];
      lStack_c0 = param_1[8];
      param_1[7] = 0;
      (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
      lStack_80 = param_1[0x10];
      uStack_78 = (undefined4)param_1[0x11];
      FUN_10a0424c4(auStack_70,param_1 + 0x12);
      lVar8 = *(long *)(lVar10 + 0x18);
      uVar4 = iStack_d0 - 200;
      func_0x00010ae02ecc(0,iStack_d0);
      if (uVar4 < 100) {
        ppuVar7 = &PTR_PTR_1133069b8;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133069b8);
        puStack_118 = *(undefined8 **)(lVar10 + 0x20);
        plVar6 = *(long **)(lVar10 + 0x28);
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_110 = plVar6;
        if (puStack_118 != (undefined8 *)0x0) {
          if (*(char *)(puStack_118 + 8) == '\x01') {
            (*(code *)*puStack_118)();
          }
          else if (*(char *)(puStack_118 + 8) == '\x02') {
            FUN_10a05e614();
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            lVar8 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      else {
        ppuVar7 = &PTR_PTR_113306948;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        FUN_10ae07cd4(ppuVar7,&PTR_PTR_113306948);
        func_0x000107c2b054(&puStack_118,&UNK_10f68f58a);
        FUN_10aaf1c08(lVar8,2,&puStack_118);
        if (cStack_101 < '\0') {
          __ZdlPv(puStack_118);
        }
        lVar8 = *(long *)(lVar8 + 0xf0);
        func_0x000107c2b054(auStack_130,&UNK_10f68f5a3);
        if (lVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar8 + 0x8d8);
          func_0x000107c2b054(&puStack_118,&UNK_10f68f580);
          FUN_10a76bdb0(uVar9,auStack_130,&puStack_118);
          if (cStack_101 < '\0') {
            __ZdlPv(puStack_118);
          }
        }
        if (cStack_119 < '\0') {
          __ZdlPv(auStack_130[0]);
        }
      }
      func_0x000104c4f944(auStack_70);
      plVar6 = &lStack_c8;
      FUN_10a042634();
      if (lStack_d8 < 0) {
        plVar6 = plStack_e8;
        __ZdlPv();
      }
      if (lStack_f0 < 0) {
        plVar6 = plStack_100;
        __ZdlPv();
      }
    }
  }
  plVar5 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
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
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010a042b54(&puStack_118);
  FUN_10a05bd10(&plStack_100);
  func_0x00010a05a86c(&lStack_140);
  __Unwind_Resume();
  plVar5 = (long *)plVar6[3];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plVar6[2] != 0) {
        FUN_10a05c0fc(plVar6[2],plVar6[1]);
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
    if (plVar6[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6 + 1;
}



/* Entry: 10ab0501c; end: 10ab05047;  */

undefined8 * FUN_10ab0501c(long param_1)

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



/* Entry: 10ab05048; end: 10ab05387;  */

long * FUN_10ab05048(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_168;
  long *plStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  long lStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_2 + 0x20);
  plVar6 = plVar4;
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar6 = plVar4;
    plStack_160 = plVar4;
    if (plVar4 != (long *)0x0) {
      lStack_168 = *(long *)(param_2 + 0x18);
      if (lStack_168 != 0) {
        lVar9 = *(long *)(param_2 + 0x10);
        lStack_f8 = param_1[1];
        plStack_100 = (long *)*param_1;
        lStack_f0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        lStack_e0 = param_1[4];
        plStack_e8 = (long *)param_1[3];
        lStack_d8 = param_1[5];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        iStack_d0 = (int)param_1[6];
        lStack_c8 = param_1[7];
        lStack_c0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
        lStack_80 = param_1[0x10];
        uStack_78 = (undefined4)param_1[0x11];
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        if (iStack_d0 - 200U < 100) {
          func_0x00010ae02ecc(0,iStack_d0);
          ppuVar7 = &PTR_PTR_1133068f8;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133068f8);
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x18);
          __ZNSt3__19to_stringEi(auStack_158,iStack_d0);
          puVar5 = auStack_158;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar5,0,&UNK_10f68f5c6,0x22);
          uStack_138 = puVar5[1];
          uStack_140 = *puVar5;
          lStack_130 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5 = &uStack_140;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,&DAT_10f68f57e,1);
          uStack_118 = puVar5[1];
          uStack_120 = *puVar5;
          lStack_110 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_10aaf1c08(lVar9,2,&uStack_120);
          if (lStack_110 < 0) {
            __ZdlPv(uStack_120);
          }
          if (lStack_130 < 0) {
            __ZdlPv(uStack_140);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(auStack_158[0]);
          }
          lVar9 = *(long *)(lVar9 + 0xf0);
          func_0x000107c2b054(&uStack_140,&UNK_10f68f5e9);
          if (lVar9 != 0) {
            uVar8 = *(undefined8 *)(lVar9 + 0x8d8);
            func_0x000107c2b054(&uStack_120,&UNK_10f68f580);
            FUN_10a76bdb0(uVar8,&uStack_140,&uStack_120);
            if (lStack_110 < 0) {
              __ZdlPv(uStack_120);
            }
          }
          if (lStack_130 < 0) {
            __ZdlPv(uStack_140);
          }
        }
        func_0x000104c4f944(auStack_70);
        plVar6 = &lStack_c8;
        FUN_10a042634();
        if (lStack_d8 < 0) {
          plVar6 = plStack_e8;
          __ZdlPv();
        }
        if (lStack_f0 < 0) {
          plVar6 = plStack_100;
          __ZdlPv();
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar6 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  FUN_10a05bd10(&plStack_100);
  func_0x00010a05a86c(&lStack_168);
  __Unwind_Resume();
  plVar4 = (long *)plVar6[3];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (plVar6[2] != 0) {
        FUN_10a05c0fc(plVar6[2],plVar6[1]);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6 + 1;
}



/* Entry: 10ab05388; end: 10ab053c3;  */

undefined8 * FUN_10ab05388(long param_1)

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



/* Entry: 10ab053c4; end: 10ab053e3;  */

void FUN_10ab053c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c45e98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab053e4; end: 10ab053f3;  */

void FUN_10ab053e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab053ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab053f4; end: 10ab05487;  */

void FUN_10ab053f4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 0x13;
  *param_1 = &PTR_FUN_110c45ee8;
  func_0x00010a050870(&puStack_28);
  FUN_10a554160(param_1);
  return;
}



/* Entry: 10ab05488; end: 10ab05533;  */

void FUN_10ab05488(undefined8 param_1,long param_2)

{
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  
  FUN_10a550c20(&lStack_98,param_2 + 0x98,param_2 + 0x48);
  func_0x00010a552600(param_1,param_2,&lStack_98);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    _free();
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    _free();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    _free();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    _free();
  }
  return;
}



/* Entry: 10ab05534; end: 10ab05553;  */

void FUN_10ab05534(undefined8 *param_1)

{
  FUN_10a002a94();
  *param_1 = &PTR_FUN_110b99e70;
  return;
}



/* Entry: 10ab05554; end: 10ab0564f;  */

undefined1  [16] FUN_10ab05554(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c45a28;
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
    ppuStack_40 = &PTR_DAT_110c45a28;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab05650; end: 10ab0570b;  */

void FUN_10ab05650(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68f43b,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab0570c);
  (*pcVar4)();
}



/* Entry: 10ab0570c; end: 10ab05ce3;  */

void FUN_10ab0570c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
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
  FUN_10a0584c8(param_5);
  func_0x000109898570(&pppuStack_d8,param_2,param_4);
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppppuVar10 = (undefined8 ****)pppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    ppppuVar10 = &pppuStack_d8;
  }
  FUN_10a464e5c(&lStack_80,*(undefined8 *)(*ppuVar6 + 0x870),ppppuVar10,uStack_d0);
  if (lStack_80 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&plStack_b0,&UNK_10f68ef10,&pppuStack_d8);
    FUN_10a012db0(&plStack_98,&plStack_b0,&DAT_10f638984);
    FUN_10ab068d0(&plStack_98);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab05bd0);
    (*pcVar4)();
  }
  lStack_c0 = lStack_80;
  plStack_b8 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  puVar12 = *ppuVar6;
  plVar7 = (long *)0x160;
  __Znwm();
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c45fa8;
  plVar1 = plVar7 + 3;
  plVar9 = plVar7;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,puVar12,plVar9,ppppuVar10);
  plVar7[0x20] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[3] = (long)&PTR_FUN_110c44f90;
  plVar7[5] = (long)&PTR_DAT_110c45030;
  plVar7[10] = (long)&PTR_DAT_110c45088;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  plVar7[0x23] = 0;
  *(undefined4 *)(plVar7 + 0x24) = 0x3f800000;
  plVar7[0x28] = 0;
  plVar7[0x27] = 0;
  *(undefined4 *)(plVar7 + 0x29) = 0x3f800000;
  plVar7[0x2a] = 0;
  plVar7[0x2b] = 0;
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  *(undefined1 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR_FUN_110bdbc08;
  puVar8[2] = 0;
  puVar8[3] = 0;
  plVar7[0x1f] = (long)puVar8;
  puVar8[4] = 0;
  puVar8[5] = puVar12;
  plStack_70 = plVar1;
  plStack_68 = plVar7;
  if (plVar7[9] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[8] = (long)plVar1;
    plVar7[9] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar7[9] + 8) != -1) goto LAB_10ab05934;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[8] = (long)plVar1;
    plVar7[9] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10ab05934:
  plVar9 = (long *)0x90;
  __Znwm();
  plVar1 = plStack_70;
  plVar7 = plVar9 + 1;
  *plVar7 = 0;
  plVar9[2] = 0;
  plStack_98 = plVar9 + 3;
  plVar9[4] = (long)plStack_68;
  *plStack_98 = (long)plStack_70;
  *plVar9 = (long)&PTR_FUN_110b9fe30;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0x32aaaba7;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xd] = 0;
  plVar9[0xc] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0;
  plVar9[0x11] = 0;
  plVar9[0x10] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_b0 = plVar1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_a8 = plVar9;
  plStack_90 = plVar9;
  func_0x00010a053e8c(plStack_98,&plStack_b0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar13 = plStack_a8 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*plStack_98 != 0) {
    func_0x00010a053ee8(*plStack_98,&plStack_98);
  }
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar13 = plStack_90 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar13 = plStack_68 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a3975b4(plVar1 + 0x27,&lStack_c0);
  (**(code **)(*plVar1 + 0x78))(plVar1);
  plVar7 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar13 = plStack_78 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(pppuStack_d8);
  }
  FUN_10ab05ce4(param_1,param_2,plVar1,plVar9);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  func_0x00010988c170(plVar5 + 0x4b);
  return;
}



/* Entry: 10ab05ce4; end: 10ab05e93;  */

void FUN_10ab05ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_3;
  plStack_28 = param_4;
  FUN_10a052f68(param_1,param_2,&uStack_30);
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



/* Entry: 10ab05e94; end: 10ab05eaf;  */

void FUN_10ab05e94(void)

{
  return;
}



/* Entry: 10ab05eb0; end: 10ab062b7;  */

long * FUN_10ab05eb0(long *param_1,undefined8 param_2,long *param_3)

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
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c2b05c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000107c2b068(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
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
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x40;
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
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10ab061c8;
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
LAB_10ab06050:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab062a0);
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
      if (plVar6 != (long *)0x0) goto LAB_10ab06050;
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
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_10ab061c8:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
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
  return plVar5;
}



/* Entry: 10ab062b8; end: 10ab062ff;  */

void FUN_10ab062b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010ab05de0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab06300; end: 10ab063c3;  */

void FUN_10ab06300(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_30;
  
  lVar5 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = 0;
  lVar5 = lVar5 + 0x110;
  FUN_10ab05eb0(lVar5,param_2 + 0x18,param_2 + 0x18);
  func_0x00010a328268(lVar5 + 0x28,&uStack_40);
  plVar1 = plStack_38;
  *(undefined1 *)(lVar5 + 0x38) = uStack_30;
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



/* Entry: 10ab063c4; end: 10ab06403;  */

void FUN_10ab063c4(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10ab06404; end: 10ab066df;  */

void FUN_10ab06404(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  char cStack_51;
  undefined1 uStack_49;
  long *plStack_48;
  
  plVar7 = *(long **)(param_2 + 0x10);
  lVar6 = (long)*(char *)((long)plVar7 + 0x37);
  if (lVar6 < 0) {
    plVar4 = (long *)plVar7[4];
    lVar6 = plVar7[5];
  }
  else {
    plVar4 = plVar7 + 4;
  }
  lVar8 = *plVar7;
  FUN_10ab066e0(&uStack_68,plVar4,lVar6);
  if (*param_1 == 0) {
LAB_10ab06478:
    if (cStack_51 < '\0') {
      func_0x000107c3192c(&uStack_a0,uStack_68,uStack_60);
    }
    else {
      uStack_98 = uStack_60;
      uStack_a0 = uStack_68;
      uStack_90 = CONCAT17(cStack_51,uStack_58);
    }
    lStack_88 = *param_1;
    lStack_80 = param_1[1];
    if (lStack_80 == 0) {
      plStack_70 = (long *)0x0;
      lStack_78 = lStack_88;
    }
    else {
      plVar4 = (long *)(lStack_80 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = (long *)param_1[1];
      lStack_78 = *param_1;
      if (param_1[1] != 0) {
        plVar4 = (long *)(param_1[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    plStack_48 = plVar7 + 1;
    lVar8 = lVar8 + 0xe8;
    FUN_10a3b830c(lVar8,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    if (*(char *)(lVar8 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar8 + 0x28));
    }
    lVar3 = lStack_80;
    lVar6 = lStack_88;
    *(undefined8 *)(lVar8 + 0x30) = uStack_98;
    *(ulong *)(lVar8 + 0x28) = uStack_a0;
    *(ulong *)(lVar8 + 0x38) = uStack_90;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    lStack_88 = 0;
    lStack_80 = 0;
    lVar5 = *(long *)(lVar8 + 0x48);
    *(long *)(lVar8 + 0x48) = lVar3;
    *(long *)(lVar8 + 0x40) = lVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010a328268(lVar8 + 0x50,&lStack_78);
    if (plStack_70 == (long *)0x0) goto LAB_10ab0666c;
    plVar7 = plStack_70 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar4 = (long *)(*param_1 + 0x10);
    (**(code **)(*plVar4 + 0x18))();
    if ((int)plVar4 == 0) goto LAB_10ab06478;
    if (cStack_51 < '\0') {
      func_0x000107c3192c(&uStack_a0,uStack_68,uStack_60);
    }
    else {
      uStack_98 = uStack_60;
      uStack_a0 = uStack_68;
      uStack_90 = CONCAT17(cStack_51,uStack_58);
    }
    lStack_80 = param_1[1];
    lStack_88 = *param_1;
    if (param_1[1] != 0) {
      plVar4 = (long *)(param_1[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    plStack_48 = plVar7 + 1;
    lVar8 = lVar8 + 0xe8;
    FUN_10a3b830c(lVar8,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    if (*(char *)(lVar8 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar8 + 0x28));
    }
    lVar3 = lStack_80;
    lVar6 = lStack_88;
    *(undefined8 *)(lVar8 + 0x30) = uStack_98;
    *(ulong *)(lVar8 + 0x28) = uStack_a0;
    *(ulong *)(lVar8 + 0x38) = uStack_90;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    lStack_88 = 0;
    lStack_80 = 0;
    lVar5 = *(long *)(lVar8 + 0x48);
    *(long *)(lVar8 + 0x48) = lVar3;
    *(long *)(lVar8 + 0x40) = lVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010a328268(lVar8 + 0x50,&lStack_78);
    if (plStack_70 == (long *)0x0) goto LAB_10ab0666c;
    plVar7 = plStack_70 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = plStack_70;
  if (lVar6 == 0) {
    (**(code **)(*plStack_70 + 0x10))(plStack_70);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10ab0666c:
  if (lStack_80 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(uStack_68);
  }
  return;
}


