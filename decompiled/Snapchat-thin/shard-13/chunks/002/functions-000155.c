/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a270d94; end: 10a270e43;  */

void FUN_10a270d94(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a270ba0(param_1,param_2,FUN_10a23fc7c,0,param_3,param_5);
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



/* Entry: 10a270e44; end: 10a270efb;  */

void FUN_10a270e44(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a270c5c(param_1,param_2,0x10a23fca8,0,param_3,param_4,param_5);
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



/* Entry: 10a270efc; end: 10a270f53;  */

ulong FUN_10a270efc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a270f54,FUN_10a271004);
  }
  return param_1;
}



/* Entry: 10a270f54; end: 10a271003;  */

void FUN_10a270f54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a270ba0(param_1,param_2,0x10a23fcb0,0,param_3,param_5);
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



/* Entry: 10a271004; end: 10a2710bb;  */

void FUN_10a271004(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a270c5c(param_1,param_2,FUN_10a23fd04,0,param_3,param_4,param_5);
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



/* Entry: 10a2710bc; end: 10a27117f;  */

void FUN_10a2710bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  FUN_10a26fecc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = *(long *)(param_2[8] + 0x100);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(lVar6 + 0x290));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a271180; end: 10a27124f;  */

void FUN_10a271180(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  long *plVar1;
  char cVar2;
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
  FUN_10a26fecc(param_2,param_3);
  FUN_10a052e3c();
  cVar2 = *(char *)(*(long *)(param_2[8] + 0x100) + 0x290);
  func_0x00010a0172c0();
  *param_1 = 2;
  *(byte *)(param_1 + 2) = cVar2 == '\x03' & param_5;
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



/* Entry: 10a271250; end: 10a271417;  */

void FUN_10a271250(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
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
  plVar7 = param_2;
  FUN_10a26fecc(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar7[10] == 0) {
    puVar8 = (undefined8 *)0x98;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_110bb6e38;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[3] = &PTR_DAT_110c71b08;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x10] = 0;
    puVar8[0xc] = 0;
    puVar8[0xb] = 0;
    *(undefined1 *)(puVar8 + 0xd) = 0;
    puVar8[10] = 0;
    puVar8[9] = 0;
    plVar15 = (long *)plVar7[0xb];
    plVar7[10] = (long)(puVar8 + 3);
    plVar7[0xb] = (long)puVar8;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
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
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  plVar15 = (long *)plVar7[0xb];
  if (plVar7[0xb] != 0) {
    plVar7 = (long *)(plVar7[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 1;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar11 + 2];
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
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar14 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar16 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar18 * 0x10);
          lVar13 = lVar14 + uVar17 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar18 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar14,uVar18 * 0x10);
    plVar6[0x4c] = lVar14 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a271418; end: 10a2714d3;  */

void FUN_10a271418(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a26fecc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2715a0(param_1,param_2,plVar4[8] + 0xc08);
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



/* Entry: 10a2714d4; end: 10a27159f;  */

void FUN_10a2714d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a26f498(param_2,param_3);
  FUN_10a271768(param_5);
  func_0x00010a27178c(param_2,param_4);
  lVar6 = plVar4[8];
  lVar10 = *param_2;
  *(long *)(lVar6 + 0xc10) = param_2[1];
  *(long *)(lVar6 + 0xc08) = lVar10;
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



/* Entry: 10a2715a0; end: 10a271657;  */

void FUN_10a2715a0(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bbac28;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a271658(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a271654);
  (*pcVar1)();
}



/* Entry: 10a271658; end: 10a27173b;  */

void FUN_10a271658(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a27173c);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a27173c; end: 10a271767;  */

undefined8 FUN_10a27173c(void)

{
  return 0;
}



/* Entry: 10a271768; end: 10a2717cf;  */

long * FUN_10a271768(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar5 = (undefined8 *)0x1;
  uVar9 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898688();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar5 == &PTR_FUN_110bbac28) {
    return puVar5 + 1;
  }
  plVar6 = (long *)&UNK_10f685496;
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
  FUN_10a26fecc(plVar6,uVar9);
  FUN_10a052e3c(param_4);
  FUN_10a2715a0(extraout_x8,plVar6,plVar8[8] + 0xc18);
  plVar6 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar11 = lVar10 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar10 + 2];
    if (plVar7[0x5a] == uVar11) {
      return plVar6;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar11) {
      return plVar6;
    }
  }
  lVar10 = *plVar6;
  plVar8 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar8 - lVar10;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar8 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar15 - lVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar4 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar13;
          _bzero(lVar1,uVar17 * 0x10);
          lVar14 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar12 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar15;
          func_0x00010988c1b8(plVar6);
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
    plVar6 = plVar8;
    _bzero(plVar8,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar8 + uVar17 * 2);
  }
  else if (uVar11 < uVar16) {
    plVar2 = (long *)(lVar10 + uVar11 * 0x10);
    while (plVar8 != plVar2) {
      plVar8 = plVar8 + -2;
      plVar6 = plVar8;
      func_0x00010988c204(plVar8);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return plVar6;
}



/* Entry: 10a2717d0; end: 10a27188b;  */

void FUN_10a2717d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a26fecc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2715a0(param_1,param_2,plVar4[8] + 0xc18);
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



/* Entry: 10a27188c; end: 10a271957;  */

void FUN_10a27188c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a26f498(param_2,param_3);
  FUN_10a271768(param_5);
  func_0x00010a27178c(param_2,param_4);
  lVar6 = plVar4[8];
  lVar10 = *param_2;
  *(long *)(lVar6 + 0xc20) = param_2[1];
  *(long *)(lVar6 + 0xc18) = lVar10;
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



/* Entry: 10a271958; end: 10a2719af;  */

long FUN_10a271958(long param_1)

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



/* Entry: 10a2719b0; end: 10a271aaf;  */

void FUN_10a2719b0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a10bd84(auStack_150,auStack_258);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110ba5670;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5608,FUN_10a10be20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a271a80);
  (*pcVar1)();
}



/* Entry: 10a271ab0; end: 10a271abf;  */

void FUN_10a271ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbae38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a271ac0; end: 10a271adf;  */

void FUN_10a271ac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbae38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a271ae0; end: 10a271aef;  */

void FUN_10a271ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a271ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a271af0; end: 10a271b9f;  */

void FUN_10a271af0(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a271ba0; end: 10a271be7;  */

void FUN_10a271ba0(long param_1)

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



/* Entry: 10a271be8; end: 10a271c07;  */

void FUN_10a271be8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbae88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a271c08; end: 10a271c17;  */

void FUN_10a271c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a271c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a271c18; end: 10a271d1f;  */

void FUN_10a271c18(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a271d20; end: 10a271d67;  */

void FUN_10a271d20(long param_1)

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



/* Entry: 10a271d68; end: 10a271d87;  */

void FUN_10a271d68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb6dd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a271d88; end: 10a271d97;  */

void FUN_10a271d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a271d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a271d98; end: 10a271def;  */

long FUN_10a271d98(long param_1)

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



/* Entry: 10a271df0; end: 10a271e37;  */

void FUN_10a271df0(long param_1)

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



/* Entry: 10a271e38; end: 10a271e57;  */

void FUN_10a271e38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb6e38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a271e58; end: 10a271e63;  */

undefined8 * FUN_10a271e58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  lStack_28 = param_1 + 0x80;
  func_0x00010a271ef0(&lStack_28);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_10a271f78(param_1 + 0x68);
  }
  lVar2 = 0x40;
  do {
    func_0x00010a271fd0((long)puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x20);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010a272028(param_1 + 0x30);
  }
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return puVar1;
}



/* Entry: 10a271e64; end: 10a271f2f;  */

undefined8 * FUN_10a271e64(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 0xd;
  func_0x00010a271ef0(&puStack_28);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_10a271f78(param_1 + 10);
  }
  lVar1 = 0x40;
  do {
    func_0x00010a271fd0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00010a272028(param_1 + 3);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a271f30; end: 10a271f77;  */

void FUN_10a271f30(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a271f78; end: 10a27218b;  */

long FUN_10a271f78(long param_1)

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



/* Entry: 10a27218c; end: 10a2721d3;  */

void FUN_10a27218c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_10a2721d4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a2721d4; end: 10a27223f;  */

undefined8 * FUN_10a2721d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110bb6e88;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110c6fe80;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  param_1[4] = puVar1;
  return param_1;
}



/* Entry: 10a272240; end: 10a27224f;  */

void FUN_10a272240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a272250; end: 10a27226f;  */

void FUN_10a272250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6e88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a272270; end: 10a27227f;  */

void FUN_10a272270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a272278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a272280; end: 10a2722d7;  */

long FUN_10a272280(long param_1)

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



/* Entry: 10a2722d8; end: 10a272523;  */

undefined1  [16]
FUN_10a2722d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a2724e0;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_10a272524(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10a2725c4(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_10a2724e0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a272524; end: 10a2725c3;  */

void FUN_10a272524(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a2725c4; end: 10a272693;  */

void FUN_10a2725c4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a27260c:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a27214c(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a27260c;
  }
  return;
}



/* Entry: 10a272694; end: 10a272817;  */

void FUN_10a272694(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a27214c(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a272818; end: 10a27281b;  */

undefined8 * FUN_10a272818(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb6ed8;
  func_0x00010a272a44(param_1 + 5);
  func_0x00010a272b24(param_1 + 2);
  func_0x00010a272a98(param_1 + 5,param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a272b24(param_1 + 2);
  return param_1;
}



/* Entry: 10a27281c; end: 10a27282f;  */

void FUN_10a27281c(void)

{
  FUN_10a2729e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a272830; end: 10a2729df;  */

undefined ** FUN_10a272830(undefined **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_2;
  ppuVar3 = param_1 + 5;
  FUN_10a2732ec(ppuVar3,lVar8);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3 + 3;
    plVar4 = (long *)0x18;
    __Znwm();
    ppuVar5 = param_1 + 2;
    puVar6 = *ppuVar5;
    plVar4[1] = (long)ppuVar5;
    plVar4[2] = lVar8;
    *plVar4 = (long)puVar6;
    *(long **)(puVar6 + 8) = plVar4;
    *ppuVar5 = (undefined *)plVar4;
    param_1[4] = param_1[4] + 1;
    lStack_78 = 0x10a273388;
    ppuStack_70 = &PTR_DAT_110bb6f10;
    ppuStack_68 = param_1;
    plStack_60 = plVar4;
    func_0x00010a108320(ppuVar3 + 5,&lStack_78);
    FUN_10a044790(&lStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a2729a0:
      ppuVar3 = param_1;
      ___cxa_guard_acquire();
      if ((int)ppuVar3 != 0) {
        param_1[4] = (undefined *)0x0;
        ppuVar7 = param_1 + 3;
        *ppuVar7 = (undefined *)0x0;
        ___cxa_guard_release(param_1);
      }
LAB_10a272960:
      param_1 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar3 = ppuStack_70 + 1;
        do {
          puVar6 = *ppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar2) {
            *ppuVar3 = puVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar6 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
    }
    return ppuVar7;
  }
  (**(code **)(*param_1 + 0x18))(&lStack_78,param_1,param_2);
  if (lStack_78 != 0) {
    FUN_10a272b80(param_1,param_2,&lStack_78);
    ppuVar7 = param_1 + 3;
    goto LAB_10a272960;
  }
  param_1 = (undefined **)0x1137eadf0;
  ppuVar7 = (undefined **)0x1137eae08;
  if ((bRam00000001137eadf0 & 1) == 0) goto LAB_10a2729a0;
  goto LAB_10a272960;
}



/* Entry: 10a2729e0; end: 10a2729e7;  */

void FUN_10a2729e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a2729e8; end: 10a272b7f;  */

undefined8 * FUN_10a2729e8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb6ed8;
  func_0x00010a272a44(param_1 + 5);
  func_0x00010a272b24(param_1 + 2);
  func_0x00010a272a98(param_1 + 5,param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a272b24(param_1 + 2);
  return param_1;
}



/* Entry: 10a272b80; end: 10a2732eb;  */

long * FUN_10a272b80(undefined *param_1,ulong *param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *param_3;
  if (lVar24 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
LAB_10a2732a4:
    ___stack_chk_fail();
  }
  else {
    plVar21 = (long *)*param_2;
    plVar20 = (long *)(param_1 + 0x28);
    FUN_10a2732ec(plVar20,plVar21);
    if (plVar20 == (long *)0x0) {
      ppuStack_b0 = (undefined **)param_3[1];
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar5 = ppuStack_b0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar3) {
            *ppuVar5 = *ppuVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar21 = (long *)*param_2;
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      plVar23 = *(long **)(param_1 + 0x30);
      lStack_b8 = lVar24;
      if (plVar23 != (long *)0x0) {
        uVar7 = (long)plVar23 - 1;
        if (((ulong)plVar23 & uVar7) == 0) {
          param_3 = (long *)(uVar7 & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar23 <= plVar21) {
            uVar22 = 0;
            if (plVar23 != (long *)0x0) {
              uVar22 = (ulong)plVar21 / (ulong)plVar23;
            }
            param_3 = (long *)((long)plVar21 - uVar22 * (long)plVar23);
          }
        }
        puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)param_3 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar9; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            plVar10 = (long *)plVar20[1];
            if (plVar10 == plVar21) {
              if ((long *)plVar20[2] == plVar21) goto LAB_10a273010;
            }
            else {
              if (((ulong)plVar23 & uVar7) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar7);
              }
              else if (plVar23 <= plVar10) {
                uVar22 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar22 = (ulong)plVar10 / (ulong)plVar23;
                }
                plVar10 = (long *)((long)plVar10 - uVar22 * (long)plVar23);
              }
              if (plVar10 != param_3) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      ppuVar5 = ppuStack_b0;
      *plVar20 = 0;
      plVar20[1] = (long)plVar21;
      plVar20[2] = (long)plVar21;
      plVar20[3] = lVar24;
      lStack_b8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      plVar20[4] = (long)ppuVar5;
      plVar20[5] = (long)&UNK_1053a6a3c;
      plVar20[6] = (long)&PTR_DAT_110ae9180;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((plVar23 == (long *)0x0) ||
         (*(float *)(param_1 + 0x48) * (float)plVar23 < (float)(*(long *)(param_1 + 0x40) + 1))) {
        uVar7 = 1;
        if ((long *)0x2 < plVar23) {
          uVar7 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
        }
        plVar10 = (long *)(uVar7 | (long)plVar23 << 1);
        plVar11 = (long *)(long)((float)(*(long *)(param_1 + 0x40) + 1) / *(float *)(param_1 + 0x48)
                                );
        if (plVar10 <= plVar11) {
          plVar10 = plVar11;
        }
        if ((long)plVar10 - 1U == 0) {
          plVar10 = (long *)0x2;
        }
        else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar23 = *(long **)(param_1 + 0x30);
        }
        if (plVar23 < plVar10) {
LAB_10a272e24:
          if ((ulong)plVar10 >> 0x3d != 0) goto LAB_10a2732b4;
          lVar24 = (long)plVar10 << 3;
          __Znwm();
          lVar6 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar24;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar23 = (long *)0x0;
          *(long **)(param_1 + 0x30) = plVar10;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)plVar23 * 8) = 0;
            plVar23 = (long *)((long)plVar23 + 1);
          } while (plVar10 != plVar23);
          plVar11 = *(long **)(param_1 + 0x38);
          plVar23 = plVar10;
          if (plVar11 != (long *)0x0) {
            plVar13 = (long *)plVar11[1];
            uVar7 = (long)plVar10 - 1;
            if (((ulong)plVar10 & uVar7) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar7);
            }
            else if (plVar10 <= plVar13) {
              uVar22 = 0;
              if (plVar10 != (long *)0x0) {
                uVar22 = (ulong)plVar13 / (ulong)plVar10;
              }
              plVar13 = (long *)((long)plVar13 - uVar22 * (long)plVar10);
            }
            *(undefined **)(*(long *)(param_1 + 0x28) + (long)plVar13 * 8) = param_1 + 0x38;
            plVar14 = (long *)*plVar11;
            while (plVar14 != (long *)0x0) {
              plVar16 = (long *)plVar14[1];
              if (((ulong)plVar10 & uVar7) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar7);
              }
              else if (plVar10 <= plVar16) {
                uVar22 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar22 = (ulong)plVar16 / (ulong)plVar10;
                }
                plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar10);
              }
              plVar15 = plVar14;
              if (plVar16 != plVar13) {
                lVar24 = *(long *)(param_1 + 0x28);
                if (*(long *)(lVar24 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar24 + (long)plVar16 * 8) = plVar11;
                  plVar13 = plVar16;
                }
                else {
                  *plVar11 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar24 + (long)plVar16 * 8);
                  **(long **)(lVar24 + (long)plVar16 * 8) = (long)plVar14;
                  plVar15 = plVar11;
                }
              }
              plVar11 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (plVar10 < plVar23) {
          plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
          if ((plVar23 < (long *)0x3) || (((ulong)plVar23 & (long)plVar23 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 - 1) & 0x3fU));
          }
          if (plVar10 <= plVar11) {
            plVar10 = plVar11;
          }
          if (plVar10 < plVar23) {
            if (plVar10 != (long *)0x0) goto LAB_10a272e24;
            lVar24 = *(long *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0;
            if (lVar24 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = *(long **)(param_1 + 0x30);
          }
        }
        if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
          param_3 = (long *)((long)plVar23 - 1U & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar23 <= plVar21) {
            uVar7 = 0;
            if (plVar23 != (long *)0x0) {
              uVar7 = (ulong)plVar21 / (ulong)plVar23;
            }
            param_3 = (long *)((long)plVar21 - uVar7 * (long)plVar23);
          }
        }
      }
      lVar24 = *(long *)(param_1 + 0x28);
      plVar21 = *(long **)(lVar24 + (long)param_3 * 8);
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)(param_1 + 0x38);
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
        *(long **)(lVar24 + (long)param_3 * 8) = plVar21;
        if (*plVar20 != 0) {
          plVar21 = *(long **)(*plVar20 + 8);
          if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
            plVar21 = (long *)((ulong)plVar21 & (long)plVar23 - 1U);
          }
          else if (plVar23 <= plVar21) {
            uVar7 = 0;
            if (plVar23 != (long *)0x0) {
              uVar7 = (ulong)plVar21 / (ulong)plVar23;
            }
            plVar21 = (long *)((long)plVar21 - uVar7 * (long)plVar23);
          }
          *(long **)(*(long *)(param_1 + 0x28) + (long)plVar21 * 8) = plVar20;
        }
      }
      else {
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a273010:
      FUN_10a044790(&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar5 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar8 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar8 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        }
      }
      ppuVar5 = (undefined **)0x18;
      __Znwm();
      plVar21 = (long *)(param_1 + 0x10);
      puVar8 = (undefined *)*param_2;
      ppuVar5[1] = (undefined *)plVar21;
      ppuVar5[2] = puVar8;
      puVar8 = (undefined *)*plVar21;
      *ppuVar5 = puVar8;
      *(undefined ***)(puVar8 + 8) = ppuVar5;
      *plVar21 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a273388;
      ppuStack_b0 = &PTR_DAT_110bb6f10;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 5,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      uVar7 = *(ulong *)(param_1 + 0x20);
      uVar22 = (ulong)*(uint *)(param_1 + 8);
      if (uVar22 < uVar7) {
        do {
          plVar21 = (long *)(param_1 + 0x28);
          FUN_10a2732ec(plVar21,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
          if (plVar21 != (long *)0x0) {
            uVar22 = *(ulong *)(param_1 + 0x30);
            uVar7 = plVar21[1];
            uVar17 = uVar22 - 1;
            if ((uVar22 & uVar17) == 0) {
              uVar7 = uVar17 & uVar7;
            }
            else if (uVar22 <= uVar7) {
              uVar18 = 0;
              if (uVar22 != 0) {
                uVar18 = uVar7 / uVar22;
              }
              uVar7 = uVar7 - uVar18 * uVar22;
            }
            lVar24 = *plVar21;
            plVar23 = *(long **)(*(long *)(param_1 + 0x28) + uVar7 * 8);
            do {
              plVar10 = plVar23;
              plVar23 = (long *)*plVar10;
            } while ((long *)*plVar10 != plVar21);
            if (plVar10 == (long *)(param_1 + 0x38)) {
LAB_10a27317c:
              if (lVar24 == 0) {
LAB_10a2731b0:
                *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar7 * 8) = 0;
                lVar24 = *plVar21;
                goto LAB_10a2731b8;
              }
              uVar18 = *(ulong *)(lVar24 + 8);
              if ((uVar22 & uVar17) == 0) {
                uVar19 = uVar18 & uVar17;
              }
              else {
                uVar19 = uVar18;
                if (uVar22 <= uVar18) {
                  uVar19 = 0;
                  if (uVar22 != 0) {
                    uVar19 = uVar18 / uVar22;
                  }
                  uVar19 = uVar18 - uVar19 * uVar22;
                }
              }
              if (uVar19 != uVar7) goto LAB_10a2731b0;
LAB_10a2731c0:
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar17 = 0;
                if (uVar22 != 0) {
                  uVar17 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar17 * uVar22;
              }
              if (uVar18 != uVar7) {
                *(long **)(*(long *)(param_1 + 0x28) + uVar18 * 8) = plVar10;
                lVar24 = *plVar21;
              }
            }
            else {
              uVar18 = plVar10[1];
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar19 = 0;
                if (uVar22 != 0) {
                  uVar19 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar19 * uVar22;
              }
              if (uVar18 != uVar7) goto LAB_10a27317c;
LAB_10a2731b8:
              if (lVar24 != 0) {
                uVar18 = *(ulong *)(lVar24 + 8);
                goto LAB_10a2731c0;
              }
            }
            *plVar10 = lVar24;
            *plVar21 = 0;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            FUN_10a2733d4(1);
            uVar7 = *(ulong *)(param_1 + 0x20);
            uVar22 = (ulong)*(uint *)(param_1 + 8);
          }
        } while (uVar22 < uVar7);
      }
LAB_10a273220:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar20;
      }
      goto LAB_10a2732a4;
    }
    if (param_1[0x50] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f648cae,0x91,&UNK_10f64071c);
      }
      FUN_10a1e6914(plVar20 + 3,param_3);
      ppuVar5 = (undefined **)0x18;
      __Znwm();
      puVar12 = (undefined *)*param_2;
      plVar21 = (long *)(param_1 + 0x10);
      puVar8 = (undefined *)*plVar21;
      ppuVar5[1] = (undefined *)plVar21;
      ppuVar5[2] = puVar12;
      *ppuVar5 = puVar8;
      *(undefined ***)(puVar8 + 8) = ppuVar5;
      *plVar21 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a273388;
      ppuStack_b0 = &PTR_DAT_110bb6f10;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 5,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a273220;
    }
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a2732b4:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2732bc);
  (*pcVar4)();
}



/* Entry: 10a2732ec; end: 10a2733d3;  */

long * FUN_10a2732ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a2733d4; end: 10a27341b;  */

void FUN_10a2733d4(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_10a044790(param_2 + 0x28);
    (*(code *)**(undefined8 **)(param_2 + 0x30))();
    FUN_10a203d94(param_2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a27341c; end: 10a27347b;  */

void FUN_10a27341c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_10a27347c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a27347c; end: 10a2734c3;  */

undefined8 * FUN_10a27347c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb6f38;
  FUN_10aba36dc(param_1 + 3);
  return param_1;
}



/* Entry: 10a2734c4; end: 10a2734d3;  */

void FUN_10a2734c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6f38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2734d4; end: 10a2734f3;  */

void FUN_10a2734d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6f38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2734f4; end: 10a273507;  */

void FUN_10a2734f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2734fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a273508; end: 10a27351b;  */

void FUN_10a273508(void)

{
  FUN_10a2736c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a27351c; end: 10a2736bf;  */

undefined ** FUN_10a27351c(undefined **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_1 + 5;
  FUN_10a27405c();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar6 = ppuVar3 + 5;
    FUN_10a274140();
    ppuVar4 = param_1 + 2;
    puVar5 = *ppuVar4;
    *param_2 = (long)puVar5;
    param_2[1] = (long)ppuVar4;
    *(long **)(puVar5 + 8) = param_2;
    *ppuVar4 = (undefined *)param_2;
    param_1[4] = param_1[4] + 1;
    pcStack_78 = FUN_10a2741ac;
    ppuStack_70 = &PTR_DAT_110bb6fc0;
    ppuStack_68 = param_1;
    plStack_60 = param_2;
    func_0x00010a108320(ppuVar3 + 7,&pcStack_78);
    FUN_10a044790(&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a273680:
      ppuVar3 = param_1;
      ___cxa_guard_acquire();
      if ((int)ppuVar3 != 0) {
        param_1[5] = (undefined *)0x0;
        ppuVar6 = param_1 + 4;
        *ppuVar6 = (undefined *)0x0;
        ___cxa_guard_release(param_1);
      }
LAB_10a273640:
      param_1 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar3 = ppuStack_70 + 1;
        do {
          puVar5 = *ppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar2) {
            *ppuVar3 = puVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar5 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
    }
    return ppuVar6;
  }
  (**(code **)(*param_1 + 0x18))(&pcStack_78,param_1,param_2);
  if (pcStack_78 != (code *)0x0) {
    FUN_10a273860(param_1,param_2,&pcStack_78);
    ppuVar6 = param_1 + 5;
    goto LAB_10a273640;
  }
  param_1 = (undefined **)0x1137eadf8;
  ppuVar6 = (undefined **)0x1137eae18;
  if ((bRam00000001137eadf8 & 1) == 0) goto LAB_10a273680;
  goto LAB_10a273640;
}



/* Entry: 10a2736c0; end: 10a2736c7;  */

void FUN_10a2736c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a2736c8; end: 10a27378f;  */

undefined8 * FUN_10a2736c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110bb6f88;
  if (param_1[8] != 0) {
    func_0x00010a273754(param_1[7]);
    param_1[7] = 0;
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[8] = 0;
  }
  func_0x000107c31960(param_1 + 2);
  func_0x00010a273754(param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(param_1 + 2);
  return param_1;
}



/* Entry: 10a273790; end: 10a2737f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a2737e4) */

void FUN_10a273790(long param_1)

{
  FUN_10a044790(param_1 + 0x28);
  (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30));
  func_0x00010a183e14(param_1 + 0x18);
  return;
}



/* Entry: 10a2737f8; end: 10a27385f;  */

long FUN_10a2737f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a273860; end: 10a27405b;  */

long * FUN_10a273860(undefined *param_1,undefined **param_2,long *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x24;
  long *plVar23;
  ulong uVar24;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
LAB_10a274014:
    ___stack_chk_fail();
  }
  else {
    plVar1 = (long *)(param_1 + 0x28);
    plVar22 = plVar1;
    FUN_10a27405c();
    if (plVar22 == (long *)0x0) {
      pcVar5 = (code *)*param_3;
      ppuStack_b0 = (undefined **)param_3[1];
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar11 = ppuStack_b0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar4) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      plVar13 = plVar1;
      pcStack_b8 = pcVar5;
      func_0x000107c2b05c(plVar1,param_2);
      plVar23 = *(long **)(param_1 + 0x30);
      if (plVar23 != (long *)0x0) {
        uVar24 = (long)plVar23 - 1;
        if (((ulong)plVar23 & uVar24) == 0) {
          unaff_x24 = (long *)(uVar24 & (ulong)plVar13);
        }
        else {
          unaff_x24 = plVar13;
          if (plVar23 <= plVar13) {
            uVar14 = 0;
            if (plVar23 != (long *)0x0) {
              uVar14 = (ulong)plVar13 / (ulong)plVar23;
            }
            unaff_x24 = (long *)((long)plVar13 - uVar14 * (long)plVar23);
          }
        }
        puVar8 = *(undefined8 **)(*plVar1 + (long)unaff_x24 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar22 = (long *)*puVar8; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
            plVar9 = (long *)plVar22[1];
            if (plVar9 == plVar13) {
              plVar9 = plVar1;
              func_0x000107c2b068(plVar1,plVar22 + 2,param_2);
              if (((ulong)plVar9 & 1) != 0) goto LAB_10a273d78;
            }
            else {
              if (((ulong)plVar23 & uVar24) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar24);
              }
              else if (plVar23 <= plVar9) {
                uVar14 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar14 = (ulong)plVar9 / (ulong)plVar23;
                }
                plVar9 = (long *)((long)plVar9 - uVar14 * (long)plVar23);
              }
              if (plVar9 != unaff_x24) break;
            }
          }
        }
      }
      plVar22 = (long *)0x78;
      __Znwm();
      *plVar22 = 0;
      plVar22[1] = (long)plVar13;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar22 + 2,*param_2,param_2[1]);
        puVar10 = puStack_a8;
        ppuVar11 = ppuStack_a0;
      }
      else {
        puVar10 = *param_2;
        plVar22[3] = (long)param_2[1];
        plVar22[2] = (long)puVar10;
        plVar22[4] = (long)param_2[2];
        puVar10 = &UNK_1053a6a3c;
        ppuVar11 = &PTR_DAT_110ae9180;
        pcStack_b8 = pcVar5;
      }
      plVar22[5] = (long)pcStack_b8;
      plVar22[6] = (long)ppuStack_b0;
      pcStack_b8 = (code *)0x0;
      ppuStack_b0 = (undefined **)0x0;
      plVar22[7] = (long)puVar10;
      (*(code *)ppuVar11[2])(plVar22 + 8,&ppuStack_a0);
      puStack_a8 = &UNK_1053a6a3c;
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((plVar23 == (long *)0x0) ||
         (*(float *)(param_1 + 0x48) * (float)plVar23 < (float)(*(long *)(param_1 + 0x40) + 1))) {
        uVar24 = 1;
        if ((long *)0x2 < plVar23) {
          uVar24 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
        }
        plVar9 = (long *)(uVar24 | (long)plVar23 << 1);
        plVar23 = (long *)(long)((float)(*(long *)(param_1 + 0x40) + 1) / *(float *)(param_1 + 0x48)
                                );
        if (plVar9 <= plVar23) {
          plVar9 = plVar23;
        }
        if ((long)plVar9 - 1U == 0) {
          plVar9 = (long *)0x2;
        }
        else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar23 = *(long **)(param_1 + 0x30);
        if (plVar23 < plVar9) {
LAB_10a273b8c:
          if ((ulong)plVar9 >> 0x3d != 0) goto LAB_10a274024;
          lVar6 = (long)plVar9 << 3;
          __Znwm();
          lVar7 = *plVar1;
          *plVar1 = lVar6;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          plVar23 = (long *)0x0;
          *(long **)(param_1 + 0x30) = plVar9;
          do {
            *(undefined8 *)(*plVar1 + (long)plVar23 * 8) = 0;
            plVar23 = (long *)((long)plVar23 + 1);
          } while (plVar9 != plVar23);
          plVar12 = *(long **)(param_1 + 0x38);
          plVar23 = plVar9;
          if (plVar12 != (long *)0x0) {
            plVar15 = (long *)plVar12[1];
            uVar24 = (long)plVar9 - 1;
            if (((ulong)plVar9 & uVar24) == 0) {
              plVar15 = (long *)((ulong)plVar15 & uVar24);
            }
            else if (plVar9 <= plVar15) {
              uVar14 = 0;
              if (plVar9 != (long *)0x0) {
                uVar14 = (ulong)plVar15 / (ulong)plVar9;
              }
              plVar15 = (long *)((long)plVar15 - uVar14 * (long)plVar9);
            }
            *(undefined **)(*plVar1 + (long)plVar15 * 8) = param_1 + 0x38;
            plVar16 = (long *)*plVar12;
            while (plVar16 != (long *)0x0) {
              plVar18 = (long *)plVar16[1];
              if (((ulong)plVar9 & uVar24) == 0) {
                plVar18 = (long *)((ulong)plVar18 & uVar24);
              }
              else if (plVar9 <= plVar18) {
                uVar14 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar14 = (ulong)plVar18 / (ulong)plVar9;
                }
                plVar18 = (long *)((long)plVar18 - uVar14 * (long)plVar9);
              }
              plVar17 = plVar16;
              if (plVar18 != plVar15) {
                lVar6 = *plVar1;
                if (*(long *)(lVar6 + (long)plVar18 * 8) == 0) {
                  *(long **)(lVar6 + (long)plVar18 * 8) = plVar12;
                  plVar15 = plVar18;
                }
                else {
                  *plVar12 = *plVar16;
                  *plVar16 = **(undefined8 **)(lVar6 + (long)plVar18 * 8);
                  **(long **)(lVar6 + (long)plVar18 * 8) = (long)plVar16;
                  plVar17 = plVar12;
                }
              }
              plVar12 = plVar17;
              plVar16 = (long *)*plVar17;
            }
          }
        }
        else if (plVar9 < plVar23) {
          plVar12 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
          if ((plVar23 < (long *)0x3) || (((ulong)plVar23 & (long)plVar23 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar12) {
            plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
          }
          if (plVar9 <= plVar12) {
            plVar9 = plVar12;
          }
          if (plVar9 < plVar23) {
            if (plVar9 != (long *)0x0) goto LAB_10a273b8c;
            lVar6 = *plVar1;
            *plVar1 = 0;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = *(long **)(param_1 + 0x30);
          }
        }
        if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar23 - 1U & (ulong)plVar13);
        }
        else {
          unaff_x24 = plVar13;
          if (plVar23 <= plVar13) {
            uVar24 = 0;
            if (plVar23 != (long *)0x0) {
              uVar24 = (ulong)plVar13 / (ulong)plVar23;
            }
            unaff_x24 = (long *)((long)plVar13 - uVar24 * (long)plVar23);
          }
        }
      }
      lVar6 = *plVar1;
      plVar13 = *(long **)(lVar6 + (long)unaff_x24 * 8);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(param_1 + 0x38);
        *plVar22 = *plVar13;
        *plVar13 = (long)plVar22;
        *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar13;
        if (*plVar22 != 0) {
          plVar13 = *(long **)(*plVar22 + 8);
          if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar23 - 1U);
          }
          else if (plVar23 <= plVar13) {
            uVar24 = 0;
            if (plVar23 != (long *)0x0) {
              uVar24 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar24 * (long)plVar23);
          }
          *(long **)(*plVar1 + (long)plVar13 * 8) = plVar22;
        }
      }
      else {
        *plVar22 = *plVar13;
        *plVar13 = (long)plVar22;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a273d78:
      FUN_10a044790(&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar11 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar2 = ppuStack_b0 + 1;
        do {
          puVar10 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar10 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      FUN_10a274140();
      puVar8 = (undefined8 *)(param_1 + 0x10);
      param_2[1] = (undefined *)puVar8;
      puVar10 = (undefined *)*puVar8;
      *param_2 = puVar10;
      *(undefined ***)(puVar10 + 8) = param_2;
      *puVar8 = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      pcStack_b8 = FUN_10a2741ac;
      ppuStack_b0 = &PTR_DAT_110bb6fc0;
      puStack_a8 = param_1;
      ppuStack_a0 = param_2;
      func_0x00010a108320(plVar22 + 7,&pcStack_b8);
      FUN_10a044790(&pcStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      if ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20)) {
        do {
          plVar13 = plVar1;
          FUN_10a27405c(plVar1,*(long *)(param_1 + 0x18) + 0x10);
          if (plVar13 != (long *)0x0) {
            uVar14 = *(ulong *)(param_1 + 0x30);
            uVar24 = plVar13[1];
            uVar19 = uVar14 - 1;
            if ((uVar14 & uVar19) == 0) {
              uVar24 = uVar19 & uVar24;
            }
            else if (uVar14 <= uVar24) {
              uVar20 = 0;
              if (uVar14 != 0) {
                uVar20 = uVar24 / uVar14;
              }
              uVar24 = uVar24 - uVar20 * uVar14;
            }
            lVar6 = *plVar13;
            plVar23 = *(long **)(*plVar1 + uVar24 * 8);
            do {
              plVar9 = plVar23;
              plVar23 = (long *)*plVar9;
            } while ((long *)*plVar9 != plVar13);
            if (plVar9 == (long *)(param_1 + 0x38)) {
LAB_10a273edc:
              if (lVar6 == 0) {
LAB_10a273f10:
                *(undefined8 *)(*plVar1 + uVar24 * 8) = 0;
                lVar6 = *plVar13;
                goto LAB_10a273f18;
              }
              uVar20 = *(ulong *)(lVar6 + 8);
              if ((uVar14 & uVar19) == 0) {
                uVar21 = uVar20 & uVar19;
              }
              else {
                uVar21 = uVar20;
                if (uVar14 <= uVar20) {
                  uVar21 = 0;
                  if (uVar14 != 0) {
                    uVar21 = uVar20 / uVar14;
                  }
                  uVar21 = uVar20 - uVar21 * uVar14;
                }
              }
              if (uVar21 != uVar24) goto LAB_10a273f10;
LAB_10a273f20:
              if ((uVar14 & uVar19) == 0) {
                uVar20 = uVar20 & uVar19;
              }
              else if (uVar14 <= uVar20) {
                uVar19 = 0;
                if (uVar14 != 0) {
                  uVar19 = uVar20 / uVar14;
                }
                uVar20 = uVar20 - uVar19 * uVar14;
              }
              if (uVar20 != uVar24) {
                *(long **)(*plVar1 + uVar20 * 8) = plVar9;
                lVar6 = *plVar13;
              }
            }
            else {
              uVar20 = plVar9[1];
              if ((uVar14 & uVar19) == 0) {
                uVar20 = uVar20 & uVar19;
              }
              else if (uVar14 <= uVar20) {
                uVar21 = 0;
                if (uVar14 != 0) {
                  uVar21 = uVar20 / uVar14;
                }
                uVar20 = uVar20 - uVar21 * uVar14;
              }
              if (uVar20 != uVar24) goto LAB_10a273edc;
LAB_10a273f18:
              if (lVar6 != 0) {
                uVar20 = *(ulong *)(lVar6 + 8);
                goto LAB_10a273f20;
              }
            }
            *plVar9 = lVar6;
            *plVar13 = 0;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            FUN_10a273790(plVar13 + 2);
            __ZdlPv(plVar13);
          }
        } while ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20));
      }
LAB_10a273f88:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar22;
      }
      goto LAB_10a274014;
    }
    if (param_1[0x50] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f648de1,0x91,&UNK_10f64071c);
      }
      FUN_10a2741f8(plVar22 + 5,param_3);
      FUN_10a274140();
      puVar8 = (undefined8 *)(param_1 + 0x10);
      puVar10 = (undefined *)*puVar8;
      *param_2 = puVar10;
      param_2[1] = (undefined *)puVar8;
      *(undefined ***)(puVar10 + 8) = param_2;
      *puVar8 = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      pcStack_b8 = FUN_10a2741ac;
      ppuStack_b0 = &PTR_DAT_110bb6fc0;
      puStack_a8 = param_1;
      ppuStack_a0 = param_2;
      func_0x00010a108320(plVar22 + 7,&pcStack_b8);
      FUN_10a044790(&pcStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a273f88;
    }
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a274024:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a27402c);
  (*pcVar5)();
}



/* Entry: 10a27405c; end: 10a27413f;  */

long FUN_10a27405c(long *param_1,undefined8 param_2)

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



/* Entry: 10a274140; end: 10a2741ab;  */

undefined8 * FUN_10a274140(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_1,param_1[1]);
  }
  else {
    uVar2 = *param_1;
    puVar1[3] = param_1[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_1[2];
  }
  return puVar1;
}



/* Entry: 10a2741ac; end: 10a2741f7;  */

void FUN_10a2741ac(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x18);
  if ((long *)(lVar1 + 0x10) != plVar3) {
    lVar2 = *plVar3;
    plVar4 = (long *)plVar3[1];
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + -1;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2741dc);
  (*pcVar5)();
}



/* Entry: 10a2741f8; end: 10a2742a3;  */

undefined8 * FUN_10a2741f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a2742a4; end: 10a2742a7;  */

undefined8 * FUN_10a2742a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bb6fe8;
  if (param_1[8] != 0) {
    func_0x00010a2744f4(param_1[7]);
    param_1[7] = 0;
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[8] = 0;
  }
  func_0x000107c31960(param_1 + 2);
  func_0x00010a2744f4(param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(param_1 + 2);
  return param_1;
}



/* Entry: 10a2742a8; end: 10a2742bb;  */

void FUN_10a2742a8(void)

{
  FUN_10a274468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2742bc; end: 10a27445f;  */

undefined ** FUN_10a2742bc(undefined **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_1 + 5;
  FUN_10a274e04();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar6 = ppuVar3 + 5;
    FUN_10a274140();
    ppuVar4 = param_1 + 2;
    puVar5 = *ppuVar4;
    *param_2 = (long)puVar5;
    param_2[1] = (long)ppuVar4;
    *(long **)(puVar5 + 8) = param_2;
    *ppuVar4 = (undefined *)param_2;
    param_1[4] = param_1[4] + 1;
    pcStack_78 = FUN_10a274ee8;
    ppuStack_70 = &PTR_DAT_110bb7020;
    ppuStack_68 = param_1;
    plStack_60 = param_2;
    func_0x00010a108320(ppuVar3 + 7,&pcStack_78);
    FUN_10a044790(&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a274420:
      ppuVar3 = param_1;
      ___cxa_guard_acquire();
      if ((int)ppuVar3 != 0) {
        param_1[6] = (undefined *)0x0;
        ppuVar6 = param_1 + 5;
        *ppuVar6 = (undefined *)0x0;
        ___cxa_guard_release(param_1);
      }
LAB_10a2743e0:
      param_1 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar3 = ppuStack_70 + 1;
        do {
          puVar5 = *ppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar2) {
            *ppuVar3 = puVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar5 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
    }
    return ppuVar6;
  }
  (**(code **)(*param_1 + 0x18))(&pcStack_78,param_1,param_2);
  if (pcStack_78 != (code *)0x0) {
    FUN_10a2745d0(param_1,param_2,&pcStack_78);
    ppuVar6 = param_1 + 5;
    goto LAB_10a2743e0;
  }
  param_1 = (undefined **)0x1137eae00;
  ppuVar6 = (undefined **)0x1137eae28;
  if ((bRam00000001137eae00 & 1) == 0) goto LAB_10a274420;
  goto LAB_10a2743e0;
}



/* Entry: 10a274460; end: 10a274467;  */

void FUN_10a274460(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a274468; end: 10a27452f;  */

undefined8 * FUN_10a274468(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bb6fe8;
  if (param_1[8] != 0) {
    func_0x00010a2744f4(param_1[7]);
    param_1[7] = 0;
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[8] = 0;
  }
  func_0x000107c31960(param_1 + 2);
  func_0x00010a2744f4(param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(param_1 + 2);
  return param_1;
}



/* Entry: 10a274530; end: 10a274597;  */

/* WARNING: Removing unreachable block (ram,0x00010a274584) */

void FUN_10a274530(long param_1)

{
  FUN_10a044790(param_1 + 0x28);
  (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30));
  func_0x00010a274f7c(param_1 + 0x18);
  return;
}



/* Entry: 10a274598; end: 10a2745cf;  */

long FUN_10a274598(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a2745d0; end: 10a274e03;  */

long * FUN_10a2745d0(undefined *param_1,undefined **param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *unaff_x24;
  long *plVar23;
  ulong uVar24;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
LAB_10a274dbc:
    ___stack_chk_fail();
  }
  else {
    plVar22 = (long *)(param_1 + 0x28);
    plVar21 = plVar22;
    FUN_10a274e04();
    if (plVar21 == (long *)0x0) {
      pcVar4 = (code *)*param_3;
      ppuStack_b0 = (undefined **)param_3[1];
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar10 = ppuStack_b0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar3) {
            *ppuVar10 = *ppuVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      plVar12 = plVar22;
      pcStack_b8 = pcVar4;
      func_0x000107c2b05c(plVar22,param_2);
      plVar23 = *(long **)(param_1 + 0x30);
      if (plVar23 != (long *)0x0) {
        uVar24 = (long)plVar23 - 1;
        if (((ulong)plVar23 & uVar24) == 0) {
          unaff_x24 = (long *)(uVar24 & (ulong)plVar12);
        }
        else {
          unaff_x24 = plVar12;
          if (plVar23 <= plVar12) {
            uVar13 = 0;
            if (plVar23 != (long *)0x0) {
              uVar13 = (ulong)plVar12 / (ulong)plVar23;
            }
            unaff_x24 = (long *)((long)plVar12 - uVar13 * (long)plVar23);
          }
        }
        puVar6 = *(undefined8 **)(*plVar22 + (long)unaff_x24 * 8);
        if (puVar6 != (undefined8 *)0x0) {
          for (plVar21 = (long *)*puVar6; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
            plVar7 = (long *)plVar21[1];
            if (plVar7 == plVar12) {
              plVar7 = plVar22;
              func_0x000107c2b068(plVar22,plVar21 + 2,param_2);
              if (((ulong)plVar7 & 1) != 0) goto LAB_10a274b20;
            }
            else {
              if (((ulong)plVar23 & uVar24) == 0) {
                plVar7 = (long *)((ulong)plVar7 & uVar24);
              }
              else if (plVar23 <= plVar7) {
                uVar13 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar13 = (ulong)plVar7 / (ulong)plVar23;
                }
                plVar7 = (long *)((long)plVar7 - uVar13 * (long)plVar23);
              }
              if (plVar7 != unaff_x24) break;
            }
          }
        }
      }
      plVar21 = (long *)0x78;
      __Znwm();
      *plVar21 = 0;
      plVar21[1] = (long)plVar12;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar21 + 2,*param_2,param_2[1]);
        puVar9 = puStack_a8;
        ppuVar10 = ppuStack_a0;
      }
      else {
        puVar9 = *param_2;
        plVar21[3] = (long)param_2[1];
        plVar21[2] = (long)puVar9;
        plVar21[4] = (long)param_2[2];
        puVar9 = &UNK_1053a6a3c;
        ppuVar10 = &PTR_DAT_110ae9180;
        pcStack_b8 = pcVar4;
      }
      plVar21[5] = (long)pcStack_b8;
      plVar21[6] = (long)ppuStack_b0;
      pcStack_b8 = (code *)0x0;
      ppuStack_b0 = (undefined **)0x0;
      plVar21[7] = (long)puVar9;
      (*(code *)ppuVar10[2])(plVar21 + 8,&ppuStack_a0);
      puStack_a8 = &UNK_1053a6a3c;
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((plVar23 == (long *)0x0) ||
         (*(float *)(param_1 + 0x48) * (float)plVar23 < (float)(*(long *)(param_1 + 0x40) + 1))) {
        uVar24 = 1;
        if ((long *)0x2 < plVar23) {
          uVar24 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
        }
        plVar7 = (long *)(uVar24 | (long)plVar23 << 1);
        plVar23 = (long *)(long)((float)(*(long *)(param_1 + 0x40) + 1) / *(float *)(param_1 + 0x48)
                                );
        if (plVar7 <= plVar23) {
          plVar7 = plVar23;
        }
        if ((long)plVar7 - 1U == 0) {
          plVar7 = (long *)0x2;
        }
        else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar23 = *(long **)(param_1 + 0x30);
        if (plVar23 < plVar7) {
LAB_10a274934:
          if ((ulong)plVar7 >> 0x3d != 0) goto LAB_10a274dcc;
          lVar8 = (long)plVar7 << 3;
          __Znwm();
          lVar5 = *plVar22;
          *plVar22 = lVar8;
          if (lVar5 != 0) {
            __ZdlPv();
          }
          plVar23 = (long *)0x0;
          *(long **)(param_1 + 0x30) = plVar7;
          do {
            *(undefined8 *)(*plVar22 + (long)plVar23 * 8) = 0;
            plVar23 = (long *)((long)plVar23 + 1);
          } while (plVar7 != plVar23);
          plVar11 = *(long **)(param_1 + 0x38);
          plVar23 = plVar7;
          if (plVar11 != (long *)0x0) {
            plVar14 = (long *)plVar11[1];
            uVar24 = (long)plVar7 - 1;
            if (((ulong)plVar7 & uVar24) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar24);
            }
            else if (plVar7 <= plVar14) {
              uVar13 = 0;
              if (plVar7 != (long *)0x0) {
                uVar13 = (ulong)plVar14 / (ulong)plVar7;
              }
              plVar14 = (long *)((long)plVar14 - uVar13 * (long)plVar7);
            }
            *(undefined **)(*plVar22 + (long)plVar14 * 8) = param_1 + 0x38;
            plVar15 = (long *)*plVar11;
            while (plVar15 != (long *)0x0) {
              plVar17 = (long *)plVar15[1];
              if (((ulong)plVar7 & uVar24) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar24);
              }
              else if (plVar7 <= plVar17) {
                uVar13 = 0;
                if (plVar7 != (long *)0x0) {
                  uVar13 = (ulong)plVar17 / (ulong)plVar7;
                }
                plVar17 = (long *)((long)plVar17 - uVar13 * (long)plVar7);
              }
              plVar16 = plVar15;
              if (plVar17 != plVar14) {
                lVar8 = *plVar22;
                if (*(long *)(lVar8 + (long)plVar17 * 8) == 0) {
                  *(long **)(lVar8 + (long)plVar17 * 8) = plVar11;
                  plVar14 = plVar17;
                }
                else {
                  *plVar11 = *plVar15;
                  *plVar15 = **(undefined8 **)(lVar8 + (long)plVar17 * 8);
                  **(long **)(lVar8 + (long)plVar17 * 8) = (long)plVar15;
                  plVar16 = plVar11;
                }
              }
              plVar11 = plVar16;
              plVar15 = (long *)*plVar16;
            }
          }
        }
        else if (plVar7 < plVar23) {
          plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
          if ((plVar23 < (long *)0x3) || (((ulong)plVar23 & (long)plVar23 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
          }
          if (plVar7 <= plVar11) {
            plVar7 = plVar11;
          }
          if (plVar7 < plVar23) {
            if (plVar7 != (long *)0x0) goto LAB_10a274934;
            lVar8 = *plVar22;
            *plVar22 = 0;
            if (lVar8 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = *(long **)(param_1 + 0x30);
          }
        }
        if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar23 - 1U & (ulong)plVar12);
        }
        else {
          unaff_x24 = plVar12;
          if (plVar23 <= plVar12) {
            uVar24 = 0;
            if (plVar23 != (long *)0x0) {
              uVar24 = (ulong)plVar12 / (ulong)plVar23;
            }
            unaff_x24 = (long *)((long)plVar12 - uVar24 * (long)plVar23);
          }
        }
      }
      lVar8 = *plVar22;
      plVar12 = *(long **)(lVar8 + (long)unaff_x24 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(param_1 + 0x38);
        *plVar21 = *plVar12;
        *plVar12 = (long)plVar21;
        *(long **)(lVar8 + (long)unaff_x24 * 8) = plVar12;
        if (*plVar21 != 0) {
          plVar12 = *(long **)(*plVar21 + 8);
          if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar23 - 1U);
          }
          else if (plVar23 <= plVar12) {
            uVar24 = 0;
            if (plVar23 != (long *)0x0) {
              uVar24 = (ulong)plVar12 / (ulong)plVar23;
            }
            plVar12 = (long *)((long)plVar12 - uVar24 * (long)plVar23);
          }
          *(long **)(*plVar22 + (long)plVar12 * 8) = plVar21;
        }
      }
      else {
        *plVar21 = *plVar12;
        *plVar12 = (long)plVar21;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a274b20:
      FUN_10a044790(&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar10 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      FUN_10a274140();
      puVar6 = (undefined8 *)(param_1 + 0x10);
      param_2[1] = (undefined *)puVar6;
      puVar9 = (undefined *)*puVar6;
      *param_2 = puVar9;
      *(undefined ***)(puVar9 + 8) = param_2;
      *puVar6 = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      pcStack_b8 = FUN_10a274ee8;
      ppuStack_b0 = &PTR_DAT_110bb7020;
      puStack_a8 = param_1;
      ppuStack_a0 = param_2;
      func_0x00010a108320(plVar21 + 7,&pcStack_b8);
      FUN_10a044790(&pcStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      if ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20)) {
        do {
          plVar12 = plVar22;
          FUN_10a274e04(plVar22,*(long *)(param_1 + 0x18) + 0x10);
          if (plVar12 != (long *)0x0) {
            uVar13 = *(ulong *)(param_1 + 0x30);
            uVar24 = plVar12[1];
            uVar18 = uVar13 - 1;
            if ((uVar13 & uVar18) == 0) {
              uVar24 = uVar18 & uVar24;
            }
            else if (uVar13 <= uVar24) {
              uVar19 = 0;
              if (uVar13 != 0) {
                uVar19 = uVar24 / uVar13;
              }
              uVar24 = uVar24 - uVar19 * uVar13;
            }
            lVar8 = *plVar12;
            plVar23 = *(long **)(*plVar22 + uVar24 * 8);
            do {
              plVar7 = plVar23;
              plVar23 = (long *)*plVar7;
            } while ((long *)*plVar7 != plVar12);
            if (plVar7 == (long *)(param_1 + 0x38)) {
LAB_10a274c84:
              if (lVar8 == 0) {
LAB_10a274cb8:
                *(undefined8 *)(*plVar22 + uVar24 * 8) = 0;
                lVar8 = *plVar12;
                goto LAB_10a274cc0;
              }
              uVar19 = *(ulong *)(lVar8 + 8);
              if ((uVar13 & uVar18) == 0) {
                uVar20 = uVar19 & uVar18;
              }
              else {
                uVar20 = uVar19;
                if (uVar13 <= uVar19) {
                  uVar20 = 0;
                  if (uVar13 != 0) {
                    uVar20 = uVar19 / uVar13;
                  }
                  uVar20 = uVar19 - uVar20 * uVar13;
                }
              }
              if (uVar20 != uVar24) goto LAB_10a274cb8;
LAB_10a274cc8:
              if ((uVar13 & uVar18) == 0) {
                uVar19 = uVar19 & uVar18;
              }
              else if (uVar13 <= uVar19) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uVar19 / uVar13;
                }
                uVar19 = uVar19 - uVar18 * uVar13;
              }
              if (uVar19 != uVar24) {
                *(long **)(*plVar22 + uVar19 * 8) = plVar7;
                lVar8 = *plVar12;
              }
            }
            else {
              uVar19 = plVar7[1];
              if ((uVar13 & uVar18) == 0) {
                uVar19 = uVar19 & uVar18;
              }
              else if (uVar13 <= uVar19) {
                uVar20 = 0;
                if (uVar13 != 0) {
                  uVar20 = uVar19 / uVar13;
                }
                uVar19 = uVar19 - uVar20 * uVar13;
              }
              if (uVar19 != uVar24) goto LAB_10a274c84;
LAB_10a274cc0:
              if (lVar8 != 0) {
                uVar19 = *(ulong *)(lVar8 + 8);
                goto LAB_10a274cc8;
              }
            }
            *plVar7 = lVar8;
            *plVar12 = 0;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            FUN_10a274530(plVar12 + 2);
            __ZdlPv(plVar12);
          }
        } while ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20));
      }
LAB_10a274d30:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar21;
      }
      goto LAB_10a274dbc;
    }
    if (param_1[0x50] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f648f13,0x91,&UNK_10f64071c);
      }
      lVar5 = param_3[1];
      lVar8 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      plVar22 = (long *)plVar21[6];
      plVar21[6] = lVar5;
      plVar21[5] = lVar8;
      if (plVar22 != (long *)0x0) {
        plVar12 = plVar22 + 1;
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      FUN_10a274140();
      puVar6 = (undefined8 *)(param_1 + 0x10);
      puVar9 = (undefined *)*puVar6;
      *param_2 = puVar9;
      param_2[1] = (undefined *)puVar6;
      *(undefined ***)(puVar9 + 8) = param_2;
      *puVar6 = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      pcStack_b8 = FUN_10a274ee8;
      ppuStack_b0 = &PTR_DAT_110bb7020;
      puStack_a8 = param_1;
      ppuStack_a0 = param_2;
      func_0x00010a108320(plVar21 + 7,&pcStack_b8);
      FUN_10a044790(&pcStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a274d30;
    }
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a274dcc:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a274dd4);
  (*pcVar4)();
}



/* Entry: 10a274e04; end: 10a274ee7;  */

long FUN_10a274e04(long *param_1,undefined8 param_2)

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



/* Entry: 10a274ee8; end: 10a274f33;  */

void FUN_10a274ee8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x18);
  if ((long *)(lVar1 + 0x10) != plVar3) {
    lVar2 = *plVar3;
    plVar4 = (long *)plVar3[1];
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + -1;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a274f18);
  (*pcVar5)();
}



/* Entry: 10a274f34; end: 10a274fd3;  */

void FUN_10a274f34(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a274530(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a274fd4; end: 10a275047;  */

undefined8 * FUN_10a274fd4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a275048(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a275254(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a275048; end: 10a275117;  */

undefined1  [16] FUN_10a275048(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (param_2 >= plVar14 && param_2 != plVar14) {
LAB_10a275090:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar2 = param_1;
        plVar6 = param_2;
        func_0x000109ffded8();
        uVar7 = plVar6[3];
        uVar15 = plVar2[1];
        if (uVar15 != 0) {
          uVar8 = uVar15 - 1;
          if ((uVar15 & uVar8) == 0) {
            unaff_x22 = uVar8 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar10 * uVar15;
            }
          }
          puVar9 = *(undefined8 **)(*plVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (plVar6 = (long *)*puVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
              uVar10 = plVar6[1];
              if (uVar10 == uVar7) {
                if (plVar6[5] == uVar7) {
                  uVar5 = 0;
                  goto LAB_10a275428;
                }
              }
              else {
                if ((uVar15 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar15 <= uVar10) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar1 * uVar15;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        plStack_40 = param_2;
        plStack_38 = param_1;
        FUN_10a27545c(aplStack_68,plVar2,uVar7);
        if ((uVar15 == 0) || (*(float *)(plVar2 + 4) * (float)uVar15 < (float)(plVar2[3] + 1))) {
          uVar8 = 1;
          if (2 < uVar15) {
            uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar8 = uVar8 | uVar15 << 1;
          uVar15 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
          if (uVar8 <= uVar15) {
            uVar8 = uVar15;
          }
          FUN_10a275048(plVar2,uVar8);
          uVar15 = plVar2[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar8 * uVar15;
            }
          }
        }
        lVar4 = *plVar2;
        plVar6 = *(long **)(lVar4 + unaff_x22 * 8);
        if (plVar6 == (long *)0x0) {
          plVar6 = plVar2 + 2;
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
          *(long **)(lVar4 + unaff_x22 * 8) = plVar6;
          if (*aplStack_68[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_68[0] + 8);
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
            *(long **)(*plVar2 + uVar7 * 8) = aplStack_68[0];
          }
        }
        else {
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
        }
        plVar2[3] = plVar2[3] + 1;
        uVar5 = 1;
        plVar6 = aplStack_68[0];
LAB_10a275428:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar6;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar7);
        }
        else if (param_2 <= plVar14) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)param_2;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar6;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (param_2 <= plVar13) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)param_2;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar14) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar6;
              plVar14 = plVar13;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar6;
            }
          }
          plVar6 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar17._8_8_ = plVar2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar14) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar14) goto LAB_10a275090;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a275118; end: 10a275253;  */

undefined1  [16] FUN_10a275118(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *aplStack_68 [3];
  
  uVar12 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar12 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar12 = *(ulong *)(param_2 + 0x18);
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          unaff_x22 = uVar6 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar11 * uVar5;
          }
        }
        puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar7 = (long *)*puVar8; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            uVar11 = plVar7[1];
            if (uVar11 == uVar12) {
              if (plVar7[5] == uVar12) {
                uVar4 = 0;
                goto LAB_10a275428;
              }
            }
            else {
              if ((uVar5 & uVar6) == 0) {
                uVar11 = uVar11 & uVar6;
              }
              else if (uVar5 <= uVar11) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar1 * uVar5;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a27545c(aplStack_68,param_1,uVar12);
      if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar5) {
          uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar6 = uVar6 | uVar5 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        FUN_10a275048(param_1,uVar6);
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x22 = uVar5 - 1 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar6 * uVar5;
          }
        }
      }
      lVar3 = *param_1;
      plVar7 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 2;
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar7;
        if (*aplStack_68[0] != 0) {
          uVar12 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar6 * uVar5;
          }
          *(long **)(*param_1 + uVar12 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar7 = aplStack_68[0];
LAB_10a275428:
      auVar14._8_8_ = uVar4;
      auVar14._0_8_ = plVar7;
      return auVar14;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar7;
            uVar5 = uVar11;
          }
          else {
            *plVar7 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar7;
          }
        }
        plVar7 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = lVar3;
  return auVar13;
}



/* Entry: 10a275254; end: 10a27545b;  */

undefined1  [16] FUN_10a275254(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if (plVar2[5] == uVar8) {
            uVar3 = 0;
            goto LAB_10a275428;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a27545c(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a275048(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a275428:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a27545c; end: 10a2754c7;  */

void FUN_10a27545c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a2754c8(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a2754c8; end: 10a275543;  */

undefined8 * FUN_10a2754c8(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  FUN_10a275544(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10a275544; end: 10a2755b7;  */

undefined8 * FUN_10a275544(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a2755b8(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a2757c4(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a2755b8; end: 10a275687;  */

undefined1  [16] FUN_10a2755b8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (param_2 >= plVar14 && param_2 != plVar14) {
LAB_10a275600:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar2 = param_1;
        plVar6 = param_2;
        func_0x000109ffded8();
        uVar7 = plVar6[3];
        uVar15 = plVar2[1];
        if (uVar15 != 0) {
          uVar8 = uVar15 - 1;
          if ((uVar15 & uVar8) == 0) {
            unaff_x22 = uVar8 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar10 * uVar15;
            }
          }
          puVar9 = *(undefined8 **)(*plVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (plVar6 = (long *)*puVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
              uVar10 = plVar6[1];
              if (uVar10 == uVar7) {
                if (plVar6[5] == uVar7) {
                  uVar5 = 0;
                  goto LAB_10a275998;
                }
              }
              else {
                if ((uVar15 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar15 <= uVar10) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar1 * uVar15;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        plStack_40 = param_2;
        plStack_38 = param_1;
        FUN_10a2759d8(aplStack_68,plVar2,uVar7);
        if ((uVar15 == 0) || (*(float *)(plVar2 + 4) * (float)uVar15 < (float)(plVar2[3] + 1))) {
          uVar8 = 1;
          if (2 < uVar15) {
            uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar8 = uVar8 | uVar15 << 1;
          uVar15 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
          if (uVar8 <= uVar15) {
            uVar8 = uVar15;
          }
          FUN_10a2755b8(plVar2,uVar8);
          uVar15 = plVar2[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar8 * uVar15;
            }
          }
        }
        lVar4 = *plVar2;
        plVar6 = *(long **)(lVar4 + unaff_x22 * 8);
        if (plVar6 == (long *)0x0) {
          plVar6 = plVar2 + 2;
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
          *(long **)(lVar4 + unaff_x22 * 8) = plVar6;
          if (*aplStack_68[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_68[0] + 8);
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
            *(long **)(*plVar2 + uVar7 * 8) = aplStack_68[0];
          }
        }
        else {
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
        }
        plVar2[3] = plVar2[3] + 1;
        uVar5 = 1;
        plVar6 = aplStack_68[0];
LAB_10a275998:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar6;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar7);
        }
        else if (param_2 <= plVar14) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)param_2;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar6;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (param_2 <= plVar13) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)param_2;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar14) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar6;
              plVar14 = plVar13;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar6;
            }
          }
          plVar6 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar17._8_8_ = plVar2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar14) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar14) goto LAB_10a275600;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a275688; end: 10a2757c3;  */

undefined1  [16] FUN_10a275688(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *aplStack_68 [3];
  
  uVar12 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar12 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar12 = *(ulong *)(param_2 + 0x18);
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          unaff_x22 = uVar6 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar11 * uVar5;
          }
        }
        puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar7 = (long *)*puVar8; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            uVar11 = plVar7[1];
            if (uVar11 == uVar12) {
              if (plVar7[5] == uVar12) {
                uVar4 = 0;
                goto LAB_10a275998;
              }
            }
            else {
              if ((uVar5 & uVar6) == 0) {
                uVar11 = uVar11 & uVar6;
              }
              else if (uVar5 <= uVar11) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar1 * uVar5;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a2759d8(aplStack_68,param_1,uVar12);
      if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar5) {
          uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar6 = uVar6 | uVar5 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        FUN_10a2755b8(param_1,uVar6);
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x22 = uVar5 - 1 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar6 * uVar5;
          }
        }
      }
      lVar3 = *param_1;
      plVar7 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 2;
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar7;
        if (*aplStack_68[0] != 0) {
          uVar12 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar6 * uVar5;
          }
          *(long **)(*param_1 + uVar12 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar7 = aplStack_68[0];
LAB_10a275998:
      auVar14._8_8_ = uVar4;
      auVar14._0_8_ = plVar7;
      return auVar14;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar7;
            uVar5 = uVar11;
          }
          else {
            *plVar7 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar7;
          }
        }
        plVar7 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = lVar3;
  return auVar13;
}



/* Entry: 10a2757c4; end: 10a2759d7;  */

undefined1  [16] FUN_10a2757c4(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if (plVar2[5] == uVar8) {
            uVar3 = 0;
            goto LAB_10a275998;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a2759d8(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a2755b8(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a275998:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a2759d8; end: 10a275a83;  */

void FUN_10a2759d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  puVar1[5] = param_4[3];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a275a84; end: 10a275b73;  */

void FUN_10a275a84(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a275b74; end: 10a275bcb;  */

void FUN_10a275b74(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x90;
  __Znwm();
  FUN_10a275bcc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a275bcc; end: 10a275c57;  */

undefined8 * FUN_10a275bcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb7048;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[5] = param_2[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[8] = param_2[5];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 7);
  FUN_10a275cdc(param_1 + 0xb,param_2 + 8);
  uVar1 = param_2[0xd];
  param_1[0x11] = param_2[0xe];
  param_1[0x10] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return param_1;
}



/* Entry: 10a275c58; end: 10a275c67;  */

void FUN_10a275c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7048;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a275c68; end: 10a275c87;  */

void FUN_10a275c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7048;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a275c88; end: 10a275cdb;  */

void FUN_10a275c88(long param_1)

{
  func_0x00010a275b1c(param_1 + 0x80);
  FUN_10a1f7334(param_1 + 0x58);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a275cdc; end: 10a275d5b;  */

void FUN_10a275cdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a275d5c; end: 10a275d7b;  */

void FUN_10a275d5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7098;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


