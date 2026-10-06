/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a546a10; end: 10a546b0b;  */

void FUN_10a546a10(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar4 = param_2;
  FUN_10a545d4c(param_2,param_5);
  FUN_10a3aaeb0(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  if (*(int *)(param_6 + 0x10) == 3) {
    fVar2 = (float)*(double *)(param_6 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 0x18))) {
      fVar2 = 0.0;
    }
    plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
    }
    (*param_3)(fVar2,plVar1,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    *param_1 = 0;
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a546af0);
  (*pcVar3)();
}



/* Entry: 10a546b0c; end: 10a546bc3;  */

void FUN_10a546b0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54611c(param_1,param_2,FUN_10a53c91c,0,param_3,param_4,param_5);
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



/* Entry: 10a546bc4; end: 10a546c7b;  */

void FUN_10a546bc4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54611c(param_1,param_2,FUN_10a53c9cc,0,param_3,param_4,param_5);
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



/* Entry: 10a546c7c; end: 10a546d33;  */

void FUN_10a546c7c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54635c(param_1,param_2,FUN_10a53ca7c,0,param_3,param_4,param_5);
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



/* Entry: 10a546d34; end: 10a546deb;  */

void FUN_10a546d34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a546a10(param_1,param_2,FUN_10a53cb2c,0,param_3,param_4,param_5);
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



/* Entry: 10a546dec; end: 10a546ea3;  */

void FUN_10a546dec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545f24(param_1,param_2,FUN_10a53cbe4,0,param_3,param_4,param_5);
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



/* Entry: 10a546ea4; end: 10a546f5b;  */

void FUN_10a546ea4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545f24(param_1,param_2,FUN_10a53cc70,0,param_3,param_4,param_5);
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



/* Entry: 10a546f5c; end: 10a547013;  */

void FUN_10a546f5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
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



/* Entry: 10a547014; end: 10a5470e7;  */

void FUN_10a547014(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a1ff918(param_5);
  if ((*param_4 != 3) || (param_4[4] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5470d4);
    (*pcVar2)();
  }
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



/* Entry: 10a5470e8; end: 10a54719f;  */

void FUN_10a5470e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545f24(param_1,param_2,FUN_10a53ccfc,0,param_3,param_4,param_5);
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



/* Entry: 10a5471a0; end: 10a547267;  */

void FUN_10a5471a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a53cd88(plVar4,param_2);
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



/* Entry: 10a547268; end: 10a54731f;  */

void FUN_10a547268(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545f24(param_1,param_2,FUN_10a53ce14,0,param_3,param_4,param_5);
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



/* Entry: 10a547320; end: 10a547473;  */

void FUN_10a547320(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  double dVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a545d4c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a547448);
    (*pcVar2)();
  }
  dVar15 = *(double *)(param_4 + 2);
  lVar8 = param_2[3];
  func_0x000107c2b054(&plStack_68,&UNK_10f65f9f9);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&plStack_68);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  fVar14 = (float)dVar15;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    fVar14 = 0.0;
  }
  *(float *)(*(long *)param_2[9] + 0xa8) = fVar14;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
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
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a547474; end: 10a54752b;  */

void FUN_10a547474(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545f24(param_1,param_2,FUN_10a53cea0,0,param_3,param_4,param_5);
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



/* Entry: 10a54752c; end: 10a5475e3;  */

void FUN_10a54752c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54611c(param_1,param_2,FUN_10a53cf2c,0,param_3,param_4,param_5);
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



/* Entry: 10a5475e4; end: 10a54769b;  */

void FUN_10a5475e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54611c(param_1,param_2,FUN_10a53cfdc,0,param_3,param_4,param_5);
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



/* Entry: 10a54769c; end: 10a5477a3;  */

void FUN_10a54769c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a53d08c(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a5477a4; end: 10a54785b;  */

void FUN_10a5477a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a54611c(param_1,param_2,FUN_10a53d13c,0,param_3,param_4,param_5);
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



/* Entry: 10a54785c; end: 10a54796f;  */

void FUN_10a54785c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10a545d4c(param_3,param_4);
  FUN_10a0584c8(param_6);
  func_0x000109898570(&plStack_68,param_3,param_5);
  FUN_10a53d1ec(plVar4,&plStack_68);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10a547970; end: 10a547b1b;  */

void FUN_10a547970(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a547b1c(param_5);
  func_0x000109898570(&lStack_88,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a547ad8);
    (*pcVar1)();
  }
  uVar13 = *(ulong *)(param_4 + 0x18);
  if (0x7fefffffffffffff < (uVar13 & 0x7fffffffffffffff)) {
    uVar13 = 0;
  }
  lVar7 = plVar4[3];
  func_0x000107c2b054(&plStack_70,&UNK_10f65fb36);
  if (lVar7 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar7 + 0x8d8),&plStack_70);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(plStack_70);
  }
  plStack_70 = &lStack_88;
  lVar7 = *(long *)plVar4[9] + 0xd8;
  FUN_10a4f5f30(lVar7,&lStack_88,&UNK_10dd5b8f9,&plStack_70,&stack0xffffffffffffffaf);
  *(ulong *)(lVar7 + 0x80) = uVar13;
  if (uStack_78._7_1_ < '\0') {
    __ZdlPv(lStack_88);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar13 = lVar7 - 1;
  plVar3[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar4[lVar7 + 2];
    if (plVar3[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar13) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar9 = plVar3[0x4c];
  lVar6 = lVar9 - lVar7;
  uVar11 = lVar6 >> 4;
  if (uVar11 < uVar13) {
    uVar12 = uVar13 - uVar11;
    plVar10 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar10 - lVar9 >> 4) < uVar12) {
      if (uVar13 >> 0x3c == 0) {
        uVar5 = (long)plVar10 - lVar7 >> 3;
        if (uVar5 <= uVar13) {
          uVar5 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar10 - lVar7)) {
          uVar5 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar5 >> 0x3c == 0) {
          lVar2 = uVar5 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar6;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar7,lVar6);
          *plVar4 = lVar8;
          plVar3[0x4c] = lVar9 + uVar12 * 0x10;
          plVar3[0x4d] = lVar2 + uVar5 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          uStack_78 = lVar7;
          plStack_70 = plVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar3[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar13 < uVar11) {
    lVar7 = lVar7 + uVar13 * 0x10;
    while (lVar9 != lVar7) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar13;
  return;
}



/* Entry: 10a547b1c; end: 10a547b3f;  */

void FUN_10a547b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *extraout_x8;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  float *pfStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  pfVar8 = (float *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  pfVar9 = pfVar8;
  (**(code **)(*(long *)pfVar8 + 0x58))();
  if (*(ulong *)(pfVar9 + 0xb2) < 8) {
    *(long *)(pfVar9 + *(ulong *)(pfVar9 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar9 + 0xb4);
    *(long *)(pfVar9 + 0xb2) = *(long *)(pfVar9 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar9 + 0x96);
  }
  pfVar10 = pfVar8;
  FUN_10a545b6c(pfVar8,uVar13);
  FUN_10a547ee4(param_4);
  func_0x000109898570(&uStack_a0,pfVar8,param_1);
  func_0x00010a0655d8(pfVar8,param_1 + 0x10);
  fVar28 = *pfVar8;
  fVar27 = pfVar8[1];
  fVar26 = pfVar8[2];
  lVar19 = *(long *)(pfVar10 + 6);
  func_0x000107c2b054(&puStack_88,&UNK_10f65fb16);
  if (lVar19 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar19 + 0x8d8),&puStack_88);
  }
  if ((long)pfStack_78 < 0) {
    __ZdlPv(puStack_88);
  }
  lVar19 = *(long *)(pfVar10 + 6) + 0xd48;
  FUN_10a5aeb74(lVar19,&PTR_DAT_110bd9f10);
  lVar20 = *(long *)(pfVar10 + 6);
  lVar11 = *(long *)(*(long *)(lVar20 + 0xbd8) + 0x268);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    ___dynamic_cast(lVar11,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
  }
  if (*(char *)(*(long *)(lVar20 + 0x910) + 0x23) == '\x01') {
    lVar15 = *(long *)(lVar19 + 8);
    if (lVar15 == lVar19) goto LAB_10a547e44;
    iVar16 = -0x80000000;
    lVar21 = 0;
    do {
      lVar18 = *(long *)(lVar15 + 0x28);
      puStack_88 = &UNK_10f63946e;
      lStack_80 = 0x4f;
      if (*(long **)(lVar18 + 0x230) == *(long **)(lVar18 + 0x238)) {
        FUN_10a0edfc4(&puStack_88);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a547ea0);
        (*pcVar6)();
      }
      lVar20 = lVar21;
      iVar5 = iVar16;
      if ((*(long *)(*(long *)(**(long **)(lVar18 + 0x230) + 0x28) + 0x268) == lVar11) &&
         (lVar20 = lVar18, iVar5 = *(int *)(lVar18 + 500), *(int *)(lVar18 + 500) <= iVar16)) {
        lVar20 = lVar21;
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
      lVar15 = *(long *)(lVar15 + 8);
      lVar21 = lVar20;
    } while (lVar15 != lVar19);
LAB_10a547d10:
    if (lVar20 == 0) goto LAB_10a547e44;
LAB_10a547d14:
    if (*(char *)(lVar20 + 0x2f0) == '\x01') {
      FUN_10a42b498(lVar20);
      *(undefined1 *)(lVar20 + 0x2f0) = 0;
    }
    lVar19 = 200;
    if (*(ulong *)(lVar20 + 0x4d0) < 2) {
      lVar19 = 0x1e0;
    }
    lVar20 = lVar20 + lVar19;
    fVar25 = fVar28 * *(float *)(lVar20 + 0x394) + fVar27 * *(float *)(lVar20 + 0x3a4) +
             fVar26 * *(float *)(lVar20 + 0x3b4) + *(float *)(lVar20 + 0x3c4);
    lVar19 = *(long *)(pfVar10 + 0x12);
    FUN_10ad3c7a0(((fVar28 * *(float *)(lVar20 + 0x388) + fVar27 * *(float *)(lVar20 + 0x398) +
                   fVar26 * *(float *)(lVar20 + 0x3a8) + *(float *)(lVar20 + 0x3b8)) / fVar25 + 1.0)
                  * 0.5,1.0 - ((fVar28 * *(float *)(lVar20 + 0x38c) +
                                fVar27 * *(float *)(lVar20 + 0x39c) +
                               fVar26 * *(float *)(lVar20 + 0x3ac) + *(float *)(lVar20 + 0x3bc)) /
                               fVar25 + 1.0) * 0.5,
                  ((fVar28 * *(float *)(lVar20 + 0x390) + fVar27 * *(float *)(lVar20 + 0x3a0) +
                   fVar26 * *(float *)(lVar20 + 0x3b0) + *(float *)(lVar20 + 0x3c0)) / fVar25 + 1.0)
                  * 0.5,lVar19,&uStack_a0);
    uVar7 = (undefined1)lVar19;
  }
  else {
    plVar12 = *(long **)(lVar11 + 0x398);
    if ((plVar12 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 != (long *)0x0)) {
      lVar20 = *(long *)(lVar11 + 0x390);
      plVar1 = plVar12 + 1;
      do {
        lVar19 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 != 0) goto LAB_10a547d10;
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      if (lVar20 != 0) goto LAB_10a547d14;
    }
LAB_10a547e44:
    uVar7 = 0;
  }
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(uStack_a0);
  }
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar7;
  pfVar8 = pfVar9 + 0x96;
  uVar14 = *(long *)(pfVar9 + 0xb2) - 1;
  *(ulong *)(pfVar9 + 0xb2) = uVar14;
  if (uVar14 < 8) {
    uVar14 = *(ulong *)(pfVar8 + uVar14 * 2 + 6);
    if (*(ulong *)(pfVar9 + 0xb4) == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(*(long *)(pfVar9 + 0xae) + -8);
    *(ulong **)(pfVar9 + 0xae) = (ulong *)(*(long *)(pfVar9 + 0xae) + -8);
    if (*(ulong *)(pfVar9 + 0xb4) == uVar14) {
      return;
    }
  }
  puVar2 = *(undefined **)pfVar8;
  puVar22 = *(undefined **)(pfVar9 + 0x98);
  lVar19 = (long)puVar22 - (long)puVar2;
  uVar23 = lVar19 >> 4;
  if (uVar23 < uVar14) {
    uVar24 = uVar14 - uVar23;
    lVar11 = *(long *)(pfVar9 + 0x9a);
    if ((ulong)(lVar11 - (long)puVar22 >> 4) < uVar24) {
      if (uVar14 >> 0x3c == 0) {
        uVar17 = lVar11 - (long)puVar2 >> 3;
        if (uVar17 <= uVar14) {
          uVar17 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - (long)puVar2)) {
          uVar17 = 0xfffffffffffffff;
        }
        pfStack_78 = pfVar8;
        if (uVar17 >> 0x3c == 0) {
          lVar15 = uVar17 << 4;
          __Znwm();
          lVar20 = lVar15 + lVar19;
          _bzero(lVar20,uVar24 * 0x10);
          lVar21 = lVar20 + uVar23 * -0x10;
          _memcpy(lVar21,puVar2,lVar19);
          *(long *)pfVar8 = lVar21;
          *(ulong *)(pfVar9 + 0x98) = lVar20 + uVar24 * 0x10;
          *(ulong *)(pfVar9 + 0x9a) = lVar15 + uVar17 * 0x10;
          puStack_98 = puVar2;
          uStack_90 = puVar2;
          puStack_88 = puVar2;
          lStack_80 = lVar11;
          func_0x00010988c1b8(&puStack_98);
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
    _bzero(puVar22,uVar24 * 0x10);
    *(undefined **)(pfVar9 + 0x98) = puVar22 + uVar24 * 0x10;
  }
  else if (uVar14 < uVar23) {
    while (puVar22 != puVar2 + uVar14 * 0x10) {
      puVar22 = puVar22 + -0x10;
      func_0x00010988c204(puVar22);
    }
    *(undefined **)(pfVar9 + 0x98) = puVar2 + uVar14 * 0x10;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar9 + 0xb4) = uVar14;
  return;
}



/* Entry: 10a547b40; end: 10a547ee3;  */

void FUN_10a547b40(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar8 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar8 + 0xb2) < 8) {
    *(long *)(pfVar8 + *(ulong *)(pfVar8 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar8 + 0xb4);
    *(long *)(pfVar8 + 0xb2) = *(long *)(pfVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar8 + 0x96);
  }
  pfVar9 = param_2;
  FUN_10a545b6c(param_2,param_3);
  FUN_10a547ee4(param_5);
  func_0x000109898570(&uStack_90,param_2,param_4);
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  fVar26 = *param_2;
  fVar25 = param_2[1];
  fVar24 = param_2[2];
  lVar17 = *(long *)(pfVar9 + 6);
  func_0x000107c2b054(&puStack_78,&UNK_10f65fb16);
  if (lVar17 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar17 + 0x8d8),&puStack_78);
  }
  if ((long)pfStack_68 < 0) {
    __ZdlPv(puStack_78);
  }
  lVar17 = *(long *)(pfVar9 + 6) + 0xd48;
  FUN_10a5aeb74(lVar17,&PTR_DAT_110bd9f10);
  lVar18 = *(long *)(pfVar9 + 6);
  lVar10 = *(long *)(*(long *)(lVar18 + 0xbd8) + 0x268);
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    ___dynamic_cast(lVar10,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
  }
  if (*(char *)(*(long *)(lVar18 + 0x910) + 0x23) == '\x01') {
    lVar13 = *(long *)(lVar17 + 8);
    if (lVar13 == lVar17) goto LAB_10a547e44;
    iVar14 = -0x80000000;
    lVar19 = 0;
    do {
      lVar16 = *(long *)(lVar13 + 0x28);
      puStack_78 = &UNK_10f63946e;
      lStack_70 = 0x4f;
      if (*(long **)(lVar16 + 0x230) == *(long **)(lVar16 + 0x238)) {
        FUN_10a0edfc4(&puStack_78);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a547ea0);
        (*pcVar6)();
      }
      lVar18 = lVar19;
      iVar5 = iVar14;
      if ((*(long *)(*(long *)(**(long **)(lVar16 + 0x230) + 0x28) + 0x268) == lVar10) &&
         (lVar18 = lVar16, iVar5 = *(int *)(lVar16 + 500), *(int *)(lVar16 + 500) <= iVar14)) {
        lVar18 = lVar19;
        iVar5 = iVar14;
      }
      iVar14 = iVar5;
      lVar13 = *(long *)(lVar13 + 8);
      lVar19 = lVar18;
    } while (lVar13 != lVar17);
LAB_10a547d10:
    if (lVar18 == 0) goto LAB_10a547e44;
LAB_10a547d14:
    if (*(char *)(lVar18 + 0x2f0) == '\x01') {
      FUN_10a42b498(lVar18);
      *(undefined1 *)(lVar18 + 0x2f0) = 0;
    }
    lVar17 = 200;
    if (*(ulong *)(lVar18 + 0x4d0) < 2) {
      lVar17 = 0x1e0;
    }
    lVar18 = lVar18 + lVar17;
    fVar23 = fVar26 * *(float *)(lVar18 + 0x394) + fVar25 * *(float *)(lVar18 + 0x3a4) +
             fVar24 * *(float *)(lVar18 + 0x3b4) + *(float *)(lVar18 + 0x3c4);
    lVar17 = *(long *)(pfVar9 + 0x12);
    FUN_10ad3c7a0(((fVar26 * *(float *)(lVar18 + 0x388) + fVar25 * *(float *)(lVar18 + 0x398) +
                   fVar24 * *(float *)(lVar18 + 0x3a8) + *(float *)(lVar18 + 0x3b8)) / fVar23 + 1.0)
                  * 0.5,1.0 - ((fVar26 * *(float *)(lVar18 + 0x38c) +
                                fVar25 * *(float *)(lVar18 + 0x39c) +
                               fVar24 * *(float *)(lVar18 + 0x3ac) + *(float *)(lVar18 + 0x3bc)) /
                               fVar23 + 1.0) * 0.5,
                  ((fVar26 * *(float *)(lVar18 + 0x390) + fVar25 * *(float *)(lVar18 + 0x3a0) +
                   fVar24 * *(float *)(lVar18 + 0x3b0) + *(float *)(lVar18 + 0x3c0)) / fVar23 + 1.0)
                  * 0.5,lVar17,&uStack_90);
    uVar7 = (undefined1)lVar17;
  }
  else {
    plVar11 = *(long **)(lVar10 + 0x398);
    if ((plVar11 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar11 != (long *)0x0)) {
      lVar18 = *(long *)(lVar10 + 0x390);
      plVar1 = plVar11 + 1;
      do {
        lVar17 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 != 0) goto LAB_10a547d10;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      if (lVar18 != 0) goto LAB_10a547d14;
    }
LAB_10a547e44:
    uVar7 = 0;
  }
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(uStack_90);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar7;
  pfVar9 = pfVar8 + 0x96;
  uVar12 = *(long *)(pfVar8 + 0xb2) - 1;
  *(ulong *)(pfVar8 + 0xb2) = uVar12;
  if (uVar12 < 8) {
    uVar12 = *(ulong *)(pfVar9 + uVar12 * 2 + 6);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    *(ulong **)(pfVar8 + 0xae) = (ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  puVar2 = *(undefined **)pfVar9;
  puVar20 = *(undefined **)(pfVar8 + 0x98);
  lVar17 = (long)puVar20 - (long)puVar2;
  uVar21 = lVar17 >> 4;
  if (uVar21 < uVar12) {
    uVar22 = uVar12 - uVar21;
    lVar10 = *(long *)(pfVar8 + 0x9a);
    if ((ulong)(lVar10 - (long)puVar20 >> 4) < uVar22) {
      if (uVar12 >> 0x3c == 0) {
        uVar15 = lVar10 - (long)puVar2 >> 3;
        if (uVar15 <= uVar12) {
          uVar15 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - (long)puVar2)) {
          uVar15 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar9;
        if (uVar15 >> 0x3c == 0) {
          lVar13 = uVar15 << 4;
          __Znwm();
          lVar18 = lVar13 + lVar17;
          _bzero(lVar18,uVar22 * 0x10);
          lVar19 = lVar18 + uVar21 * -0x10;
          _memcpy(lVar19,puVar2,lVar17);
          *(long *)pfVar9 = lVar19;
          *(ulong *)(pfVar8 + 0x98) = lVar18 + uVar22 * 0x10;
          *(ulong *)(pfVar8 + 0x9a) = lVar13 + uVar15 * 0x10;
          puStack_88 = puVar2;
          uStack_80 = puVar2;
          puStack_78 = puVar2;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar20,uVar22 * 0x10);
    *(undefined **)(pfVar8 + 0x98) = puVar20 + uVar22 * 0x10;
  }
  else if (uVar12 < uVar21) {
    while (puVar20 != puVar2 + uVar12 * 0x10) {
      puVar20 = puVar20 + -0x10;
      func_0x00010988c204(puVar20);
    }
    *(undefined **)(pfVar8 + 0x98) = puVar2 + uVar12 * 0x10;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar8 + 0xb4) = uVar12;
  return;
}



/* Entry: 10a547ee4; end: 10a547f07;  */

void FUN_10a547ee4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined8 uStack_78;
  long in_stack_ffffffffffffff98;
  
  if ((int)param_3 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_3);
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
  FUN_10a545b6c(plVar3,uVar6);
  FUN_10a0584c8(param_6);
  func_0x000109898570(&uStack_78,plVar3,param_3);
  FUN_10a53d294(plVar5,&uStack_78);
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(uStack_78);
  }
  uStack_78 = (long *)CONCAT44(param_2,param_1);
  FUN_10a07ff64(extraout_x8,plVar3,&uStack_78);
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
        uStack_78 = plVar3;
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



/* Entry: 10a547f08; end: 10a548023;  */

void FUN_10a547f08(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined8 uStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_4;
  FUN_10a545b6c(param_4,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(&uStack_68,param_4,param_6);
  FUN_10a53d294(plVar4,&uStack_68);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(uStack_68);
  }
  uStack_68 = (long *)CONCAT44(param_3,param_2);
  FUN_10a07ff64(param_1,param_4,&uStack_68);
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
        uStack_68 = plVar4;
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



/* Entry: 10a548024; end: 10a54812b;  */

void FUN_10a548024(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a545b6c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a53d320(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a54812c; end: 10a54826f;  */

void FUN_10a54812c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a545d4c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a53d3a8(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a05b924(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10a548270; end: 10a5483d7;  */

void FUN_10a548270(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar5);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar9 = param_2[3];
      func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f65f629);
      if (lVar9 != 0) {
        FUN_10a76c080(*(undefined8 *)(lVar9 + 0x8d8),&stack0xffffffffffffffa8);
      }
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      bVar1 = 0 < iRam00000001132ffd98;
      *param_1 = 2;
      *(bool *)(param_1 + 2) = bVar1;
      plVar5 = plVar4 + 0x4b;
      lVar9 = plVar4[0x59];
      uVar7 = lVar9 - 1;
      plVar4[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar5[lVar9 + 2];
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
      lVar9 = *plVar5;
      lVar12 = plVar4[0x4c];
      lVar10 = lVar12 - lVar9;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar7) {
        uVar15 = uVar7 - uVar14;
        lVar13 = plVar4[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar13 - lVar9 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar8 >> 0x3c == 0) {
              lVar3 = uVar8 << 4;
              __Znwm();
              lVar12 = lVar3 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar9,lVar10);
              *plVar5 = lVar11;
              plVar4[0x4c] = lVar12 + uVar15 * 0x10;
              plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar4[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar7 < uVar14) {
        lVar9 = lVar9 + uVar7 * 0x10;
        while (lVar12 != lVar9) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar4[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar7;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5483ac);
  (*pcVar2)();
}



/* Entry: 10a5483d8; end: 10a54848f;  */

void FUN_10a5483d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a548490(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ad3d7a0(*(undefined8 *)(param_2[9] + 8));
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



/* Entry: 10a548490; end: 10a5484f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a54865c) */
/* WARNING: Removing unreachable block (ram,0x00010a548704) */

void FUN_10a548490(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110befed0;
      param_4 = 0;
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
  plVar9 = plVar7;
  FUN_10a548490(plVar7,param_2);
  FUN_10a548d4c(param_4);
  func_0x000109898570(&lStack_d8,plVar7,param_3);
  FUN_10a053980(&lStack_f0,plVar7,param_3 + 2);
  plVar23 = plStack_e8;
  plStack_b8 = plStack_e8;
  lStack_c0 = lStack_f0;
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar24 = plVar9 + 4;
  plVar30 = plVar24;
  FUN_10a549710(plVar24,&lStack_d8);
  if (plVar30 == (long *)0x0) {
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
LAB_10a54861c:
    if ((lStack_c0 == 0) || (lVar14 = lStack_c0, func_0x00010aae9fd8(), lVar14 == 0)) {
      FUN_10a00946c(&UNK_10f65fbac);
      goto LAB_10a548c5c;
    }
    lVar26 = plVar9[9];
    FUN_10a08d2e0(&plStack_a0,lVar14 + 0x10);
    FUN_10ad3cd64(&lStack_b0,lVar26,&lStack_d8,&plStack_a0);
    lVar14 = plVar9[3];
    plVar10 = (long *)0x70;
    __Znwm();
    plVar27 = plVar10 + 1;
    *plVar27 = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_110bf0248;
    plVar15 = plVar10 + 3;
    *plVar15 = (long)&PTR_DAT_110befe70;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = lVar14;
    plVar10[8] = 0;
    plVar10[7] = 0;
    plVar10[10] = 0;
    plVar10[9] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0x3f800000;
    plVar30 = plVar10 + 0xc;
    plVar10[0xd] = (long)plStack_a8;
    *plVar30 = lStack_b0;
    lStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    func_0x000107c2b054(&plStack_a0,&UNK_10f660490);
    if (lVar14 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar14 + 0x8d8),&plStack_a0);
    }
    plVar16 = plVar24;
    plStack_100 = plVar15;
    plStack_f8 = plVar10;
    func_0x000107c2b05c(plVar24,&lStack_d8);
    plVar21 = (long *)plVar9[5];
    if (plVar21 != (long *)0x0) {
      uVar20 = (long)plVar21 - 1;
      if (((ulong)plVar21 & uVar20) == 0) {
        plVar30 = (long *)(uVar20 & (ulong)plVar16);
      }
      else {
        plVar30 = plVar16;
        if (plVar21 <= plVar16) {
          uVar25 = 0;
          if (plVar21 != (long *)0x0) {
            uVar25 = (ulong)plVar16 / (ulong)plVar21;
          }
          plVar30 = (long *)((long)plVar16 - uVar25 * (long)plVar21);
        }
      }
      puVar11 = *(undefined8 **)(*plVar24 + (long)plVar30 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        for (plVar29 = (long *)*puVar11; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
          plVar12 = (long *)plVar29[1];
          if (plVar12 == plVar16) {
            plVar12 = plVar24;
            func_0x000107c2b068(plVar24,plVar29 + 2,&lStack_d8);
            if (((ulong)plVar12 & 1) != 0) goto LAB_10a548a88;
          }
          else {
            if (((ulong)plVar21 & uVar20) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar20);
            }
            else if (plVar21 <= plVar12) {
              uVar25 = 0;
              if (plVar21 != (long *)0x0) {
                uVar25 = (ulong)plVar12 / (ulong)plVar21;
              }
              plVar12 = (long *)((long)plVar12 - uVar25 * (long)plVar21);
            }
            if (plVar12 != plVar30) break;
          }
        }
      }
    }
    plVar29 = (long *)0x38;
    __Znwm();
    lStack_90 = 0;
    *plVar29 = 0;
    plVar29[1] = (long)plVar16;
    plStack_a0 = plVar29;
    plStack_98 = plVar24;
    if (cStack_c1 < '\0') {
      func_0x000107c3192c(plVar29 + 2,lStack_d8,lStack_d0);
    }
    else {
      plVar29[3] = lStack_d0;
      plVar29[2] = lStack_d8;
      plVar29[4] = CONCAT17(cStack_c1,uStack_c8);
    }
    plVar29[5] = 0;
    plVar29[6] = 0;
    lStack_90 = CONCAT71(lStack_90._1_7_,1);
    if ((plVar21 == (long *)0x0) ||
       (*(float *)(plVar9 + 8) * (float)plVar21 < (float)(plVar9[7] + 1))) {
      uVar20 = 1;
      if ((long *)0x2 < plVar21) {
        uVar20 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
      }
      plVar30 = (long *)(uVar20 | (long)plVar21 << 1);
      plVar21 = (long *)(long)((float)(plVar9[7] + 1) / *(float *)(plVar9 + 8));
      if (plVar30 <= plVar21) {
        plVar30 = plVar21;
      }
      if ((long)plVar30 - 1U == 0) {
        plVar30 = (long *)0x2;
      }
      else if (((ulong)plVar30 & (long)plVar30 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar21 = (long *)plVar9[5];
      if (plVar21 < plVar30) {
LAB_10a548890:
        plVar21 = plVar30;
        if ((ulong)plVar21 >> 0x3d != 0) {
          func_0x000109ffded8();
LAB_10a548c5c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a548c60);
          (*pcVar4)();
        }
        lVar14 = (long)plVar21 << 3;
        __Znwm();
        lVar26 = *plVar24;
        *plVar24 = lVar14;
        if (lVar26 != 0) {
          __ZdlPv();
        }
        plVar30 = (long *)0x0;
        plVar9[5] = (long)plVar21;
        do {
          *(undefined8 *)(*plVar24 + (long)plVar30 * 8) = 0;
          plVar30 = (long *)((long)plVar30 + 1);
        } while (plVar21 != plVar30);
        plVar30 = (long *)plVar9[6];
        if (plVar30 != (long *)0x0) {
          plVar12 = (long *)plVar30[1];
          uVar20 = (long)plVar21 - 1;
          if (((ulong)plVar21 & uVar20) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar20);
          }
          else if (plVar21 <= plVar12) {
            uVar25 = 0;
            if (plVar21 != (long *)0x0) {
              uVar25 = (ulong)plVar12 / (ulong)plVar21;
            }
            plVar12 = (long *)((long)plVar12 - uVar25 * (long)plVar21);
          }
          *(long **)(*plVar24 + (long)plVar12 * 8) = plVar9 + 6;
          plVar17 = (long *)*plVar30;
          while (plVar17 != (long *)0x0) {
            plVar19 = (long *)plVar17[1];
            if (((ulong)plVar21 & uVar20) == 0) {
              plVar19 = (long *)((ulong)plVar19 & uVar20);
            }
            else if (plVar21 <= plVar19) {
              uVar25 = 0;
              if (plVar21 != (long *)0x0) {
                uVar25 = (ulong)plVar19 / (ulong)plVar21;
              }
              plVar19 = (long *)((long)plVar19 - uVar25 * (long)plVar21);
            }
            plVar18 = plVar17;
            if (plVar19 != plVar12) {
              lVar14 = *plVar24;
              if (*(long *)(lVar14 + (long)plVar19 * 8) == 0) {
                *(long **)(lVar14 + (long)plVar19 * 8) = plVar30;
                plVar12 = plVar19;
              }
              else {
                *plVar30 = *plVar17;
                *plVar17 = **(undefined8 **)(lVar14 + (long)plVar19 * 8);
                **(long **)(lVar14 + (long)plVar19 * 8) = (long)plVar17;
                plVar18 = plVar30;
              }
            }
            plVar30 = plVar18;
            plVar17 = (long *)*plVar18;
          }
        }
      }
      else if (plVar30 < plVar21) {
        plVar12 = (long *)(long)((float)(ulong)plVar9[7] / *(float *)(plVar9 + 8));
        if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar12) {
          plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
        }
        if (plVar30 <= plVar12) {
          plVar30 = plVar12;
        }
        if (plVar30 < plVar21) {
          if (plVar30 != (long *)0x0) goto LAB_10a548890;
          lVar14 = *plVar24;
          *plVar24 = 0;
          if (lVar14 != 0) {
            __ZdlPv();
          }
          plVar21 = (long *)0x0;
          plVar9[5] = 0;
        }
        else {
          plVar21 = (long *)plVar9[5];
        }
      }
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar30 = (long *)((long)plVar21 - 1U & (ulong)plVar16);
      }
      else {
        plVar30 = plVar16;
        if (plVar21 <= plVar16) {
          uVar20 = 0;
          if (plVar21 != (long *)0x0) {
            uVar20 = (ulong)plVar16 / (ulong)plVar21;
          }
          plVar30 = (long *)((long)plVar16 - uVar20 * (long)plVar21);
        }
      }
    }
    lVar14 = *plVar24;
    plVar16 = *(long **)(lVar14 + (long)plVar30 * 8);
    if (plVar16 == (long *)0x0) {
      plVar16 = plVar9 + 6;
      *plVar29 = *plVar16;
      *plVar16 = (long)plVar29;
      *(long **)(lVar14 + (long)plVar30 * 8) = plVar16;
      if (*plVar29 != 0) {
        plVar30 = *(long **)(*plVar29 + 8);
        if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
          plVar30 = (long *)((ulong)plVar30 & (long)plVar21 - 1U);
        }
        else if (plVar21 <= plVar30) {
          uVar20 = 0;
          if (plVar21 != (long *)0x0) {
            uVar20 = (ulong)plVar30 / (ulong)plVar21;
          }
          plVar30 = (long *)((long)plVar30 - uVar20 * (long)plVar21);
        }
        *(long **)(*plVar24 + (long)plVar30 * 8) = plVar29;
      }
    }
    else {
      *plVar29 = *plVar16;
      *plVar16 = (long)plVar29;
    }
    plVar9[7] = plVar9[7] + 1;
LAB_10a548a88:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar3) {
        *plVar27 = *plVar27 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar24 = (long *)plVar29[6];
    plVar29[5] = (long)plVar15;
    plVar29[6] = (long)plVar10;
    if (plVar24 != (long *)0x0) {
      plVar9 = plVar24 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
    plVar24 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar9 = plStack_a8 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
  }
  else {
    plStack_100 = (long *)plVar30[5];
    plVar30 = (long *)plVar30[6];
    if (plVar30 != (long *)0x0) {
      plVar10 = plVar30 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_f8 = plVar30;
    if (plStack_100 == (long *)0x0) {
      if (plVar30 != (long *)0x0) {
        plVar10 = plVar30 + 1;
        do {
          lVar14 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
        }
      }
      goto LAB_10a54861c;
    }
  }
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 1;
    do {
      lVar14 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plVar24 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar23 = plStack_e8 + 1;
    do {
      lVar14 = *plVar23;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(lStack_d8);
  }
  FUN_10a548d70(extraout_x8,plVar7,&plStack_100);
  plVar7 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar24 = plStack_f8 + 1;
    do {
      lVar14 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar8 + 0x4b;
  lVar14 = plVar8[0x59];
  uVar20 = lVar14 - 1;
  plVar8[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar7[lVar14 + 2];
    if (plVar8[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar20) {
      return;
    }
  }
  plVar24 = (long *)*plVar7;
  plVar23 = (long *)plVar8[0x4c];
  lVar14 = (long)plVar23 - (long)plVar24;
  uVar25 = lVar14 >> 4;
  if (uVar25 < uVar20) {
    uVar28 = uVar20 - uVar25;
    lVar26 = plVar8[0x4d];
    if ((ulong)(lVar26 - (long)plVar23 >> 4) < uVar28) {
      if (uVar20 >> 0x3c == 0) {
        uVar13 = lVar26 - (long)plVar24 >> 3;
        if (uVar13 <= uVar20) {
          uVar13 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar26 - (long)plVar24)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar14;
          _bzero(lVar1,uVar28 * 0x10);
          lVar22 = lVar1 + uVar25 * -0x10;
          _memcpy(lVar22,plVar24,lVar14);
          *plVar7 = lVar22;
          plVar8[0x4c] = lVar1 + uVar28 * 0x10;
          plVar8[0x4d] = lVar5 + uVar13 * 0x10;
          plStack_a8 = plVar24;
          plStack_a0 = plVar24;
          plStack_98 = plVar24;
          lStack_90 = lVar26;
          func_0x00010988c1b8(&plStack_a8);
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
    _bzero(plVar23,uVar28 * 0x10);
    plVar8[0x4c] = (long)(plVar23 + uVar28 * 2);
  }
  else if (uVar20 < uVar25) {
    while (plVar23 != plVar24 + uVar20 * 2) {
      plVar23 = plVar23 + -2;
      func_0x00010988c204(plVar23);
    }
    plVar8[0x4c] = (long)(plVar24 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar20;
  return;
}



/* Entry: 10a5484f8; end: 10a548d4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a54865c) */
/* WARNING: Removing unreachable block (ram,0x00010a548704) */

void FUN_10a5484f8(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
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
  plVar8 = param_2;
  FUN_10a548490(param_2,param_3);
  FUN_10a548d4c(param_5);
  func_0x000109898570(&lStack_b8,param_2,param_4);
  FUN_10a053980(&lStack_d0,param_2,param_4 + 0x10);
  plVar2 = plStack_c8;
  plStack_98 = plStack_c8;
  lStack_a0 = lStack_d0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  plVar22 = plVar8 + 4;
  plVar28 = plVar22;
  FUN_10a549710(plVar22,&lStack_b8);
  if (plVar28 == (long *)0x0) {
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
LAB_10a54861c:
    if ((lStack_a0 == 0) || (lVar13 = lStack_a0, func_0x00010aae9fd8(), lVar13 == 0)) {
      FUN_10a00946c(&UNK_10f65fbac);
      goto LAB_10a548c5c;
    }
    lVar24 = plVar8[9];
    FUN_10a08d2e0(&plStack_80,lVar13 + 0x10);
    FUN_10ad3cd64(&lStack_90,lVar24,&lStack_b8,&plStack_80);
    lVar13 = plVar8[3];
    plVar9 = (long *)0x70;
    __Znwm();
    plVar25 = plVar9 + 1;
    *plVar25 = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110bf0248;
    plVar14 = plVar9 + 3;
    *plVar14 = (long)&PTR_DAT_110befe70;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[6] = lVar13;
    plVar9[8] = 0;
    plVar9[7] = 0;
    plVar9[10] = 0;
    plVar9[9] = 0;
    *(undefined4 *)(plVar9 + 0xb) = 0x3f800000;
    plVar28 = plVar9 + 0xc;
    plVar9[0xd] = (long)plStack_88;
    *plVar28 = lStack_90;
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x000107c2b054(&plStack_80,&UNK_10f660490);
    if (lVar13 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar13 + 0x8d8),&plStack_80);
    }
    plVar15 = plVar22;
    plStack_e0 = plVar14;
    plStack_d8 = plVar9;
    func_0x000107c2b05c(plVar22,&lStack_b8);
    plVar20 = (long *)plVar8[5];
    if (plVar20 != (long *)0x0) {
      uVar19 = (long)plVar20 - 1;
      if (((ulong)plVar20 & uVar19) == 0) {
        plVar28 = (long *)(uVar19 & (ulong)plVar15);
      }
      else {
        plVar28 = plVar15;
        if (plVar20 <= plVar15) {
          uVar23 = 0;
          if (plVar20 != (long *)0x0) {
            uVar23 = (ulong)plVar15 / (ulong)plVar20;
          }
          plVar28 = (long *)((long)plVar15 - uVar23 * (long)plVar20);
        }
      }
      puVar10 = *(undefined8 **)(*plVar22 + (long)plVar28 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar27 = (long *)*puVar10; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
          plVar11 = (long *)plVar27[1];
          if (plVar11 == plVar15) {
            plVar11 = plVar22;
            func_0x000107c2b068(plVar22,plVar27 + 2,&lStack_b8);
            if (((ulong)plVar11 & 1) != 0) goto LAB_10a548a88;
          }
          else {
            if (((ulong)plVar20 & uVar19) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar19);
            }
            else if (plVar20 <= plVar11) {
              uVar23 = 0;
              if (plVar20 != (long *)0x0) {
                uVar23 = (ulong)plVar11 / (ulong)plVar20;
              }
              plVar11 = (long *)((long)plVar11 - uVar23 * (long)plVar20);
            }
            if (plVar11 != plVar28) break;
          }
        }
      }
    }
    plVar27 = (long *)0x38;
    __Znwm();
    lStack_70 = 0;
    *plVar27 = 0;
    plVar27[1] = (long)plVar15;
    plStack_80 = plVar27;
    plStack_78 = plVar22;
    if (cStack_a1 < '\0') {
      func_0x000107c3192c(plVar27 + 2,lStack_b8,lStack_b0);
    }
    else {
      plVar27[3] = lStack_b0;
      plVar27[2] = lStack_b8;
      plVar27[4] = CONCAT17(cStack_a1,uStack_a8);
    }
    plVar27[5] = 0;
    plVar27[6] = 0;
    lStack_70 = CONCAT71(lStack_70._1_7_,1);
    if ((plVar20 == (long *)0x0) ||
       (*(float *)(plVar8 + 8) * (float)plVar20 < (float)(plVar8[7] + 1))) {
      uVar19 = 1;
      if ((long *)0x2 < plVar20) {
        uVar19 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
      }
      plVar28 = (long *)(uVar19 | (long)plVar20 << 1);
      plVar20 = (long *)(long)((float)(plVar8[7] + 1) / *(float *)(plVar8 + 8));
      if (plVar28 <= plVar20) {
        plVar28 = plVar20;
      }
      if ((long)plVar28 - 1U == 0) {
        plVar28 = (long *)0x2;
      }
      else if (((ulong)plVar28 & (long)plVar28 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar20 = (long *)plVar8[5];
      if (plVar20 < plVar28) {
LAB_10a548890:
        plVar20 = plVar28;
        if ((ulong)plVar20 >> 0x3d != 0) {
          func_0x000109ffded8();
LAB_10a548c5c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a548c60);
          (*pcVar5)();
        }
        lVar13 = (long)plVar20 << 3;
        __Znwm();
        lVar24 = *plVar22;
        *plVar22 = lVar13;
        if (lVar24 != 0) {
          __ZdlPv();
        }
        plVar28 = (long *)0x0;
        plVar8[5] = (long)plVar20;
        do {
          *(undefined8 *)(*plVar22 + (long)plVar28 * 8) = 0;
          plVar28 = (long *)((long)plVar28 + 1);
        } while (plVar20 != plVar28);
        plVar28 = (long *)plVar8[6];
        if (plVar28 != (long *)0x0) {
          plVar11 = (long *)plVar28[1];
          uVar19 = (long)plVar20 - 1;
          if (((ulong)plVar20 & uVar19) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar19);
          }
          else if (plVar20 <= plVar11) {
            uVar23 = 0;
            if (plVar20 != (long *)0x0) {
              uVar23 = (ulong)plVar11 / (ulong)plVar20;
            }
            plVar11 = (long *)((long)plVar11 - uVar23 * (long)plVar20);
          }
          *(long **)(*plVar22 + (long)plVar11 * 8) = plVar8 + 6;
          plVar16 = (long *)*plVar28;
          while (plVar16 != (long *)0x0) {
            plVar18 = (long *)plVar16[1];
            if (((ulong)plVar20 & uVar19) == 0) {
              plVar18 = (long *)((ulong)plVar18 & uVar19);
            }
            else if (plVar20 <= plVar18) {
              uVar23 = 0;
              if (plVar20 != (long *)0x0) {
                uVar23 = (ulong)plVar18 / (ulong)plVar20;
              }
              plVar18 = (long *)((long)plVar18 - uVar23 * (long)plVar20);
            }
            plVar17 = plVar16;
            if (plVar18 != plVar11) {
              lVar13 = *plVar22;
              if (*(long *)(lVar13 + (long)plVar18 * 8) == 0) {
                *(long **)(lVar13 + (long)plVar18 * 8) = plVar28;
                plVar11 = plVar18;
              }
              else {
                *plVar28 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar13 + (long)plVar18 * 8);
                **(long **)(lVar13 + (long)plVar18 * 8) = (long)plVar16;
                plVar17 = plVar28;
              }
            }
            plVar28 = plVar17;
            plVar16 = (long *)*plVar17;
          }
        }
      }
      else if (plVar28 < plVar20) {
        plVar11 = (long *)(long)((float)(ulong)plVar8[7] / *(float *)(plVar8 + 8));
        if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar11) {
          plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
        }
        if (plVar28 <= plVar11) {
          plVar28 = plVar11;
        }
        if (plVar28 < plVar20) {
          if (plVar28 != (long *)0x0) goto LAB_10a548890;
          lVar13 = *plVar22;
          *plVar22 = 0;
          if (lVar13 != 0) {
            __ZdlPv();
          }
          plVar20 = (long *)0x0;
          plVar8[5] = 0;
        }
        else {
          plVar20 = (long *)plVar8[5];
        }
      }
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar28 = (long *)((long)plVar20 - 1U & (ulong)plVar15);
      }
      else {
        plVar28 = plVar15;
        if (plVar20 <= plVar15) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)plVar15 / (ulong)plVar20;
          }
          plVar28 = (long *)((long)plVar15 - uVar19 * (long)plVar20);
        }
      }
    }
    lVar13 = *plVar22;
    plVar15 = *(long **)(lVar13 + (long)plVar28 * 8);
    if (plVar15 == (long *)0x0) {
      plVar15 = plVar8 + 6;
      *plVar27 = *plVar15;
      *plVar15 = (long)plVar27;
      *(long **)(lVar13 + (long)plVar28 * 8) = plVar15;
      if (*plVar27 != 0) {
        plVar28 = *(long **)(*plVar27 + 8);
        if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
          plVar28 = (long *)((ulong)plVar28 & (long)plVar20 - 1U);
        }
        else if (plVar20 <= plVar28) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)plVar28 / (ulong)plVar20;
          }
          plVar28 = (long *)((long)plVar28 - uVar19 * (long)plVar20);
        }
        *(long **)(*plVar22 + (long)plVar28 * 8) = plVar27;
      }
    }
    else {
      *plVar27 = *plVar15;
      *plVar15 = (long)plVar27;
    }
    plVar8[7] = plVar8[7] + 1;
LAB_10a548a88:
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = *plVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar22 = (long *)plVar27[6];
    plVar27[5] = (long)plVar14;
    plVar27[6] = (long)plVar9;
    if (plVar22 != (long *)0x0) {
      plVar8 = plVar22 + 1;
      do {
        lVar13 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar8 = plStack_88 + 1;
      do {
        lVar13 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
  }
  else {
    plStack_e0 = (long *)plVar28[5];
    plVar28 = (long *)plVar28[6];
    if (plVar28 != (long *)0x0) {
      plVar9 = plVar28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_d8 = plVar28;
    if (plStack_e0 == (long *)0x0) {
      if (plVar28 != (long *)0x0) {
        plVar9 = plVar28 + 1;
        do {
          lVar13 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      goto LAB_10a54861c;
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar22 = plVar2 + 1;
    do {
      lVar13 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *plVar22 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar22 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(lStack_b8);
  }
  FUN_10a548d70(param_1,param_2,&plStack_e0);
  plVar22 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  plVar22 = plVar7 + 0x4b;
  lVar13 = plVar7[0x59];
  uVar19 = lVar13 - 1;
  plVar7[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar22[lVar13 + 2];
    if (plVar7[0x5a] == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar19) {
      return;
    }
  }
  plVar2 = (long *)*plVar22;
  plVar8 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar8 - (long)plVar2;
  uVar23 = lVar13 >> 4;
  if (uVar23 < uVar19) {
    uVar26 = uVar19 - uVar23;
    lVar24 = plVar7[0x4d];
    if ((ulong)(lVar24 - (long)plVar8 >> 4) < uVar26) {
      if (uVar19 >> 0x3c == 0) {
        uVar12 = lVar24 - (long)plVar2 >> 3;
        if (uVar12 <= uVar19) {
          uVar12 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar24 - (long)plVar2)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar22;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar13;
          _bzero(lVar1,uVar26 * 0x10);
          lVar21 = lVar1 + uVar23 * -0x10;
          _memcpy(lVar21,plVar2,lVar13);
          *plVar22 = lVar21;
          plVar7[0x4c] = lVar1 + uVar26 * 0x10;
          plVar7[0x4d] = lVar6 + uVar12 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          lStack_70 = lVar24;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar8,uVar26 * 0x10);
    plVar7[0x4c] = (long)(plVar8 + uVar26 * 2);
  }
  else if (uVar19 < uVar23) {
    while (plVar8 != plVar2 + uVar19 * 2) {
      plVar8 = plVar8 + -2;
      func_0x00010988c204(plVar8);
    }
    plVar7[0x4c] = (long)(plVar2 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar19;
  return;
}



/* Entry: 10a548d4c; end: 10a548d6f;  */

void FUN_10a548d4c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  uVar5 = 2;
  uVar6 = 0;
  FUN_10a052ee0(2,0);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppuStack_48 = &PTR_DAT_110befeb8;
  func_0x000109899de4(uVar5,uVar6,&uStack_40,&ppuStack_48,0,0);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a548d70; end: 10a548dff;  */

void FUN_10a548d70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  ppuStack_38 = &PTR_DAT_110befeb8;
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



/* Entry: 10a548e00; end: 10a548f43;  */

void FUN_10a548e00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a548490(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a53dc00(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a548d70(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10a548f44; end: 10a549027;  */

void FUN_10a548f44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a548490(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a53dc74(plVar4,&stack0xffffffffffffffa8);
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



/* Entry: 10a549028; end: 10a549083;  */

long * FUN_10a549028(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a549084(plVar1 + 2);
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



/* Entry: 10a549084; end: 10a549107;  */

void FUN_10a549084(undefined8 *param_1)

{
  FUN_10a549630(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a549108; end: 10a5492ef;  */

void FUN_10a549108(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a5494d8(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a5492f0; end: 10a5494d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a549404) */
/* WARNING: Removing unreachable block (ram,0x00010a549408) */
/* WARNING: Removing unreachable block (ram,0x00010a549410) */
/* WARNING: Removing unreachable block (ram,0x00010a549418) */
/* WARNING: Removing unreachable block (ram,0x00010a54941c) */

undefined *** FUN_10a5492f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a549530(&puStack_68,&uStack_69,&uStack_81,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar6 = ppuStack_60 + 1;
    do {
      puVar5 = *ppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = puVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar4 = &ppuStack_60;
  param_1[2] = FUN_10a5495f8;
  param_1[3] = &PTR_DAT_110bf0310;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_78 + 1;
    do {
      ppuVar6 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  pppuVar4 = (undefined ***)0x2a8;
  __Znwm(0x2a8);
  FUN_10ab6aaa0();
  return pppuVar4;
}



/* Entry: 10a5494d8; end: 10a54952f;  */

undefined8 FUN_10a5494d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2a8;
  __Znwm(0x2a8);
  FUN_10ab6aaa0();
  return uVar1;
}



/* Entry: 10a549530; end: 10a5495a7;  */

void FUN_10a549530(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a5495a8();
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



/* Entry: 10a5495a8; end: 10a5495f7;  */

undefined8 *
FUN_10a5495a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10ab6aaa0(param_1 + 3,0,param_4);
  return param_1;
}



/* Entry: 10a5495f8; end: 10a54962f;  */

void FUN_10a5495f8(long param_1)

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



/* Entry: 10a549630; end: 10a549687;  */

long FUN_10a549630(long param_1)

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



/* Entry: 10a549688; end: 10a549697;  */

void FUN_10a549688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a549698; end: 10a5496b7;  */

void FUN_10a549698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0248;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5496b8; end: 10a5496c7;  */

void FUN_10a5496b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a5496c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a5496c8; end: 10a54970f;  */

void FUN_10a5496c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a549084(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a549710; end: 10a5497f3;  */

long FUN_10a549710(long *param_1,undefined8 param_2)

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



/* Entry: 10a5497f4; end: 10a54984b;  */

long FUN_10a5497f4(long param_1)

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



/* Entry: 10a54984c; end: 10a5498a3;  */

void FUN_10a54984c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  FUN_10a5498a4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a5498a4; end: 10a5498ef;  */

undefined8 * FUN_10a5498a4(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bf0298;
  FUN_10a53bed8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a5498f0; end: 10a5498ff;  */

void FUN_10a5498f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0298;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a549900; end: 10a54991f;  */

void FUN_10a549900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf0298;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a549920; end: 10a54992f;  */

void FUN_10a549920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a549928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a549930; end: 10a549a73;  */

void FUN_10a549930(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)0x158;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110be7500;
  uVar2 = *param_3;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar6[9] = 0;
  puVar8 = puVar6 + 3;
  *puVar8 = &PTR_FUN_110c6c330;
  puVar6[6] = &PTR_DAT_110c6c3a0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0x3f800000;
  *(undefined1 *)(puVar6 + 0xf) = uVar2;
  *(undefined4 *)((long)puVar6 + 0x7c) = 0;
  *(undefined2 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)((long)puVar6 + 0x8c) = 0;
  *(undefined8 *)((long)puVar6 + 0x84) = 0;
  *(undefined4 *)((long)puVar6 + 0x94) = 0;
  puVar6[0x13] = FUN_10a4ba630;
  puVar6[0x14] = &PTR_DAT_110950c70;
  puVar6[0x1b] = 0x10a4ba640;
  puVar6[0x1c] = &PTR_DAT_110950c70;
  puVar6[0x23] = FUN_10a4ba630;
  puVar6[0x24] = &PTR_DAT_110950c70;
  *param_1 = puVar8;
  param_1[1] = puVar6;
  puVar7 = puVar6 + 8;
  *puVar7 = 0;
  if ((puVar7 != (undefined8 *)0x0) &&
     ((lVar5 = puVar6[9], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar9 = (long *)param_1[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = puVar6[9];
    }
    *puVar7 = puVar8;
    puVar6[9] = plVar9;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a549a74; end: 10a549b03;  */

void FUN_10a549a74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  (*pcVar5)(&uStack_30,param_3,param_1);
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



/* Entry: 10a549b04; end: 10a549d47;  */

undefined1  [16]
FUN_10a549b04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a549d04;
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
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_10a549d48(aplStack_78,param_1,plVar6,param_3,param_4);
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
    FUN_10a4ba824(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
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
LAB_10a549d04:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a549d48; end: 10a549dc3;  */

void FUN_10a549d48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a549dc4(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a549dc4; end: 10a549e3b;  */

undefined8 * FUN_10a549dc4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_10a549e3c(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10a549e3c; end: 10a549efb;  */

undefined8 * FUN_10a549e3c(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)param_1 + 10) = 4;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_10a0ec420(&uStack_50);
  func_0x000107c3193c(param_1 + 3);
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  param_1[5] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = (undefined1 *)&uStack_50;
  FUN_10a0426d8(&puStack_38);
  return param_1;
}



/* Entry: 10a549efc; end: 10a54a02f;  */

int FUN_10a549efc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  long *plStack_28;
  
  FUN_10a0f984c(&ppuStack_70);
  uStack_78 = param_2[1];
  puStack_80 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_78 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_80 = param_2;
  }
  func_0x00010a0faca8(&ppuStack_70,&PTR_DAT_110bf0340,&puStack_80);
  (**(code **)(*param_1 + 0x18))(param_1,&ppuStack_70);
  plVar1 = plStack_28;
  uVar7 = *(undefined8 *)(lStack_58 + 0x10);
  uVar6 = *(undefined8 *)(lStack_58 + 8);
  uVar4 = *(undefined8 *)(lStack_48 + 0x10);
  uVar2 = *(undefined8 *)(lStack_48 + 8);
  uVar5 = *(undefined8 *)(lStack_38 + 0x10);
  uVar3 = *(undefined8 *)(lStack_38 + 8);
  ppuStack_70 = &PTR_FUN_110ba53b0;
  ppuStack_68 = &PTR_FUN_110ba5578;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_40 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  ppuStack_50 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  ppuStack_60 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  return (((int)uVar7 + (int)uVar4 + (int)uVar5) - ((int)uVar6 + (int)uVar2 + (int)uVar3)) + 0xc;
}



/* Entry: 10a54a030; end: 10a54a06f;  */

undefined8 * FUN_10a54a030(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  lVar3 = param_2[1];
  *param_1 = *param_2;
  if (lVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      return param_1;
    }
  }
  lVar3 = 0;
  FUN_10a043ecc();
  if (*(long *)(lVar3 + 0x18) == *(long *)(lVar3 + 0x20)) {
    uVar1 = *(ushort *)(lVar3 + 10);
    if (uVar1 < 5) {
      if (uVar1 == 1) {
        __ZNSt3__19to_stringEi(auStack_88,*(undefined1 *)(lVar3 + 0x10));
        FUN_10a0ec420(&uStack_70,auStack_88);
      }
      else if (uVar1 == 2) {
        __ZNSt3__19to_stringEi(auStack_88,*(undefined4 *)(lVar3 + 0x10));
        FUN_10a0ec420(&uStack_70,auStack_88);
      }
      else {
        if (uVar1 != 3) goto LAB_10a54a228;
        __ZNSt3__19to_stringEf(auStack_88,*(undefined4 *)(lVar3 + 0x10));
        FUN_10a0ec420(&uStack_70,auStack_88);
      }
    }
    else if (uVar1 < 0x10) {
      if (uVar1 == 5) {
        __ZNSt3__19to_stringEd(auStack_88,*(undefined8 *)(lVar3 + 0x10));
        FUN_10a0ec420(&uStack_70,auStack_88);
      }
      else {
        if (uVar1 != 6) goto LAB_10a54a228;
        __ZNSt3__19to_stringEj(auStack_88,*(undefined4 *)(lVar3 + 0x10));
        FUN_10a0ec420(&uStack_70,auStack_88);
      }
    }
    else if (uVar1 == 0x10) {
      __ZNSt3__19to_stringEx(auStack_88,*(undefined8 *)(lVar3 + 0x10));
      FUN_10a0ec420(&uStack_70,auStack_88);
    }
    else {
      if (uVar1 != 0x11) goto LAB_10a54a228;
      __ZNSt3__19to_stringEy(auStack_88,*(undefined8 *)(lVar3 + 0x10));
      FUN_10a0ec420(&uStack_70,auStack_88);
    }
    func_0x000107c3193c((long *)(lVar3 + 0x18));
    puStack_58 = &uStack_70;
    *(undefined8 *)(lVar3 + 0x20) = uStack_68;
    *(undefined8 *)(lVar3 + 0x18) = uStack_70;
    *(undefined8 *)(lVar3 + 0x28) = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    FUN_10a0426d8(&puStack_58);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
  }
  if (*(undefined8 **)(lVar3 + 0x18) != *(undefined8 **)(lVar3 + 0x20)) {
    return *(undefined8 **)(lVar3 + 0x18);
  }
  FUN_10a108c2c(&UNK_10f63b259);
LAB_10a54a228:
  puVar4 = &UNK_10f6604b3;
  FUN_10a00946c(&UNK_10f6604b3);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  __Unwind_Resume(puVar4);
  if ((bRam0000000113302760 & 1) == 0) {
    iVar2 = 0x13302760;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113302748 = 0;
      uRam0000000113302750 = 0;
      uRam0000000113302758 = 0;
      ___cxa_guard_release(0x113302760);
    }
  }
  return (undefined8 *)0x113302748;
}



/* Entry: 10a54a070; end: 10a54a267;  */

long FUN_10a54a070(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(param_1 + 10);
    if (uVar1 < 5) {
      if (uVar1 == 1) {
        __ZNSt3__19to_stringEi(auStack_68,*(undefined1 *)(param_1 + 0x10));
        FUN_10a0ec420(&uStack_50,auStack_68);
      }
      else if (uVar1 == 2) {
        __ZNSt3__19to_stringEi(auStack_68,*(undefined4 *)(param_1 + 0x10));
        FUN_10a0ec420(&uStack_50,auStack_68);
      }
      else {
        if (uVar1 != 3) goto LAB_10a54a228;
        __ZNSt3__19to_stringEf(auStack_68,*(undefined4 *)(param_1 + 0x10));
        FUN_10a0ec420(&uStack_50,auStack_68);
      }
    }
    else if (uVar1 < 0x10) {
      if (uVar1 == 5) {
        __ZNSt3__19to_stringEd(auStack_68,*(undefined8 *)(param_1 + 0x10));
        FUN_10a0ec420(&uStack_50,auStack_68);
      }
      else {
        if (uVar1 != 6) goto LAB_10a54a228;
        __ZNSt3__19to_stringEj(auStack_68,*(undefined4 *)(param_1 + 0x10));
        FUN_10a0ec420(&uStack_50,auStack_68);
      }
    }
    else if (uVar1 == 0x10) {
      __ZNSt3__19to_stringEx(auStack_68,*(undefined8 *)(param_1 + 0x10));
      FUN_10a0ec420(&uStack_50,auStack_68);
    }
    else {
      if (uVar1 != 0x11) goto LAB_10a54a228;
      __ZNSt3__19to_stringEy(auStack_68,*(undefined8 *)(param_1 + 0x10));
      FUN_10a0ec420(&uStack_50,auStack_68);
    }
    func_0x000107c3193c((long *)(param_1 + 0x18));
    puStack_38 = &uStack_50;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    *(undefined8 *)(param_1 + 0x28) = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_10a0426d8(&puStack_38);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    return *(long *)(param_1 + 0x18);
  }
  FUN_10a108c2c(&UNK_10f63b259);
LAB_10a54a228:
  puVar3 = &UNK_10f6604b3;
  FUN_10a00946c(&UNK_10f6604b3);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  __Unwind_Resume(puVar3);
  if ((bRam0000000113302760 & 1) == 0) {
    iVar2 = 0x13302760;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113302748 = 0;
      uRam0000000113302750 = 0;
      uRam0000000113302758 = 0;
      ___cxa_guard_release(0x113302760);
    }
  }
  return 0x113302748;
}



/* Entry: 10a54a268; end: 10a54a2bf;  */

undefined8 FUN_10a54a268(void)

{
  int iVar1;
  
  if ((bRam0000000113302760 & 1) == 0) {
    iVar1 = 0x13302760;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113302748 = 0;
      uRam0000000113302750 = 0;
      uRam0000000113302758 = 0;
      ___cxa_guard_release(0x113302760);
    }
  }
  return 0x113302748;
}



/* Entry: 10a54a2c0; end: 10a54a3a3;  */

long FUN_10a54a2c0(long *param_1,undefined8 param_2)

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
        if (plVar2 == plVar4) {
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



/* Entry: 10a54a3a4; end: 10a54a733;  */

void FUN_10a54a3a4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf0808;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x10;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  puVar6[1] = 0x7265646c69754268;
  *puVar6 = 0x73654d6874706544;
  *(undefined1 *)(puVar6 + 2) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f63f2e6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf0808;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f63f2e6,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a55bfe0,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a54a730;
    FUN_10a054dac(param_1,&UNK_10f6604f5,FUN_10a55c134,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6604fb,FUN_10a55c330,FUN_10a55c3ec);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660504,FUN_10a55c514,FUN_10a55c5d0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660511,FUN_10a55c6c0,FUN_10a55c778);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660527,FUN_10a55c838,FUN_10a55c8f4);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f660538,FUN_10a55c9e4,FUN_10a55caa0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66054b,FUN_10a55cb90,FUN_10a55cc4c);
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
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f63f2e6,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a54a730:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a54a734);
  (*pcVar4)();
}



/* Entry: 10a54a734; end: 10a54a833;  */

void FUN_10a54a734(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f660563;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a54a834(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66056c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10a54a88c(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f660571;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10a54a88c(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a54a834; end: 10a54a88b;  */

ulong FUN_10a54a834(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a54a88c; end: 10a54a8e3;  */

ulong FUN_10a54a88c(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a55cd0c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a54a8e4; end: 10a54ac83;  */

void FUN_10a54a8e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  if (*param_5 == param_5[1]) {
    FUN_10a54ac84(&plStack_40,param_2);
    plVar6 = plStack_38;
    plStack_50 = plStack_40;
    plVar1 = plStack_48;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    plStack_48 = plVar6;
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
    if (plStack_38 == (long *)0x0) goto LAB_10a54ab3c;
    plVar1 = plStack_38 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_10a54ac84(&plStack_40,param_2);
    if (*param_2 == param_2[1]) {
      *(undefined4 *)(plStack_40 + 0x1d) = 0;
    }
    else {
      uVar7 = (param_2[1] - *param_2 >> 2) * -0x5555555555555555 - 1;
      if (uVar7 >> 0x10 == 0) {
        *(undefined4 *)(plStack_40 + 0x1d) = 1;
        puVar9 = (undefined2 *)plStack_40[5];
        puVar10 = (undefined4 *)*param_5;
        puVar12 = (undefined4 *)param_5[1];
        lVar11 = (long)puVar12 - (long)puVar10;
        uVar7 = lVar11 >> 1;
        uVar13 = plStack_40[6] - (long)puVar9;
        if (uVar7 < uVar13 || uVar7 - uVar13 == 0) {
          if (uVar7 < uVar13) {
            plStack_40[6] = (long)puVar9 + uVar7;
          }
        }
        else {
          func_0x000107c27d58(plStack_40 + 5,uVar7 - uVar13);
          puVar9 = (undefined2 *)plStack_40[5];
          puVar10 = (undefined4 *)*param_5;
          puVar12 = (undefined4 *)param_5[1];
          lVar11 = (long)puVar12 - (long)puVar10;
        }
        if (puVar12 != puVar10) {
          uVar7 = lVar11 >> 2;
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          do {
            *puVar9 = (short)*puVar10;
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar7 != 0);
        }
      }
      else {
        if (uVar7 >> 0x20 != 0) {
          FUN_10a00946c(&UNK_10f660fb4);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a54ac34);
          (*pcVar4)();
        }
        *(undefined4 *)(plStack_40 + 0x1d) = 2;
        puVar8 = (undefined4 *)plStack_40[5];
        puVar10 = (undefined4 *)*param_5;
        puVar12 = (undefined4 *)param_5[1];
        uVar7 = (long)puVar12 - (long)puVar10;
        uVar13 = plStack_40[6] - (long)puVar8;
        if (uVar7 < uVar13 || uVar7 - uVar13 == 0) {
          if (uVar7 < uVar13) {
            plStack_40[6] = (long)puVar8 + uVar7;
          }
        }
        else {
          func_0x000107c27d58(plStack_40 + 5,uVar7 - uVar13);
          puVar8 = (undefined4 *)plStack_40[5];
          puVar10 = (undefined4 *)*param_5;
          puVar12 = (undefined4 *)param_5[1];
          uVar7 = (long)puVar12 - (long)puVar10;
        }
        if (puVar12 != puVar10) {
          uVar7 = (long)uVar7 >> 2;
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          do {
            *puVar8 = *puVar10;
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    plVar6 = plStack_38;
    plStack_50 = plStack_40;
    plVar1 = plStack_48;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    plStack_48 = plVar6;
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
    if (plStack_38 == (long *)0x0) goto LAB_10a54ab3c;
    plVar1 = plStack_38 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plStack_38;
  if (lVar11 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
LAB_10a54ab3c:
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar14 = *ppuVar5;
  plVar6 = (long *)0x108;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110ba2088;
  plVar1 = plVar6 + 3;
  FUN_10a347c5c(plVar1,puVar14,&plStack_50);
  plStack_40 = plVar1;
  plStack_38 = plVar6;
  FUN_10a0cfb64(&plStack_40,plVar6 + 8,plVar1);
  FUN_10a0cf858(param_1,&plStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a54ac84; end: 10a54af8b;  */

void FUN_10a54ac84(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long lStack_470;
  int iStack_464;
  int iStack_460;
  uint uStack_450;
  int iStack_44c;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long lStack_410;
  long *plStack_408;
  long alStack_400 [2];
  uint uStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long lStack_3b8;
  int *piStack_3b0;
  long *plStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  uint *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  ulong uStack_330;
  long *plStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_308;
  uint *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 auStack_2b8 [216];
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  int iStack_1c4;
  float *pfStack_1c0;
  float *pfStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long **pplStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  plVar12 = &lStack_d0;
  plVar24 = &lStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d0194(param_1);
  FUN_10ab6e728();
  if (*(char *)((long)plVar12 + 0x17) < '\0') {
    func_0x000107c3192c(&pplStack_80,*plVar12,plVar12[1]);
  }
  else {
    lStack_78 = plVar12[1];
    pplStack_80 = (long **)*plVar12;
    lStack_70 = plVar12[2];
  }
  lStack_68 = plVar12[3];
  uStack_50 = (undefined4)plVar12[6];
  lStack_58 = plVar12[5];
  lStack_60 = plVar12[4];
  plVar12 = (long *)0x1;
  FUN_10ab6f520(&lStack_d0,&pplStack_80);
  lVar23 = *param_1;
  *(undefined4 *)(lVar23 + 0xf0) = (undefined4)lStack_d0;
  if ((long *)(lVar23 + 0xf0) != &lStack_d0) {
    plVar24 = &lStack_c8;
    FUN_10a1903c4(lVar23 + 0xf8,lStack_c8,plStack_c0,
                  ((long)plStack_c0 - lStack_c8 >> 3) * 0x6db6db6db6db6db7);
    plVar12 = plStack_c0;
  }
  *(undefined8 *)(lVar23 + 0x118) = uStack_a8;
  *(undefined8 *)(lVar23 + 0x110) = uStack_b0;
  *(undefined8 *)(lVar23 + 0x128) = uStack_98;
  *(undefined8 *)(lVar23 + 0x120) = uStack_a0;
  *(undefined8 *)(lVar23 + 0x130) = uStack_90;
  plStack_88 = &lStack_c8;
  pplVar10 = &plStack_88;
  func_0x00010a190844(pplVar10);
  fVar32 = (float)uStack_b0;
  fVar30 = (float)uStack_a0;
  if (lStack_70 < 0) {
    pplVar10 = pplStack_80;
    __ZdlPv(pplStack_80);
  }
  if (*param_3 == param_3[1]) {
    lVar23 = 0xc;
  }
  else {
    lVar23 = *param_1;
    FUN_10ab6e9d8();
    FUN_10ab6f958(lVar23 + 0xf8,pplVar10);
    pplVar10 = (long **)(lVar23 + 0xf0);
    FUN_10ab6f86c(pplVar10);
    lVar23 = 0x18;
  }
  if (*param_4 != param_4[1]) {
    plVar24 = (long *)*param_1;
    FUN_10ab6f020();
    FUN_10ab6f958(plVar24 + 0x1f,pplVar10);
    FUN_10ab6f86c(plVar24 + 0x1e);
    lVar23 = lVar23 + 8;
  }
  lVar16 = *param_1;
  *(undefined8 *)(lVar16 + 0xe8) = 0;
  plVar11 = (long *)(lVar16 + 0x10);
  puVar14 = (undefined8 *)*plVar11;
  lVar18 = *param_2;
  lVar15 = param_2[1];
  uVar17 = (lVar15 - lVar18 >> 2) * lVar23 * -0x5555555555555555;
  uVar19 = *(long *)(lVar16 + 0x18) - (long)puVar14;
  lVar23 = uVar17 - uVar19;
  if (uVar17 < uVar19 || lVar23 == 0) {
    if (uVar17 < uVar19) {
      *(ulong *)(lVar16 + 0x18) = (long)puVar14 + uVar17;
    }
  }
  else {
    func_0x000107c27d58();
    puVar14 = *(undefined8 **)(*param_1 + 0x10);
    lVar18 = *param_2;
    lVar15 = param_2[1];
  }
  if (lVar15 != lVar18) {
    lVar15 = 0;
    uVar17 = 0;
    do {
      uVar20 = *(undefined8 *)(lVar18 + lVar15);
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((undefined8 *)(lVar18 + lVar15) + 1);
      *puVar14 = uVar20;
      puVar21 = (undefined8 *)((long)puVar14 + 0xc);
      lVar18 = *param_3;
      if (lVar18 != param_3[1]) {
        uVar19 = (param_3[1] - lVar18 >> 2) * -0x5555555555555555;
        if (uVar19 < uVar17 || uVar19 - uVar17 == 0) goto LAB_10a54af38;
        uVar20 = *(undefined8 *)(lVar18 + lVar15);
        *(undefined4 *)((long)puVar14 + 0x14) = *(undefined4 *)((undefined8 *)(lVar18 + lVar15) + 1)
        ;
        *puVar21 = uVar20;
        puVar21 = puVar14 + 3;
      }
      lVar18 = *param_4;
      puVar14 = puVar21;
      if (lVar18 != param_4[1]) {
        if ((ulong)(param_4[1] - lVar18 >> 3) <= uVar17) {
LAB_10a54af38:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54af3c);
          (*pcVar8)();
        }
        puVar14 = puVar21 + 1;
        *puVar21 = *(undefined8 *)(lVar18 + uVar17 * 8);
      }
      uVar17 = uVar17 + 1;
      lVar18 = *param_2;
      lVar15 = lVar15 + 0xc;
    } while (uVar17 < (ulong)((param_2[1] - lVar18 >> 2) * -0x5555555555555555));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  plStack_88 = plVar24;
  func_0x00010a190844(&plStack_88);
  if (lStack_70 < 0) {
    __ZdlPv(pplStack_80);
  }
  FUN_10a0cfe2c(param_1);
  __Unwind_Resume();
  plVar24 = *(long **)(lVar23 + 0x268);
  if (plVar24 == (long *)0x0) {
    iVar9 = 0;
LAB_10a54b00c:
    uVar13 = 0;
  }
  else {
    (**(code **)(*plVar24 + 0xb0))();
    iVar9 = (int)plVar24;
    plVar24 = *(long **)(lVar23 + 0x268);
    if (plVar24 == (long *)0x0) goto LAB_10a54b00c;
    (**(code **)(*plVar24 + 0xb8))();
    uVar13 = SUB84(plVar24,0);
  }
  uVar17 = (ulong)*(byte *)(*(long *)(lVar23 + 0x50) + 0x29);
  if (5 < uVar17) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54ba38);
    (*pcVar8)();
  }
  FUN_10aba1500(&lStack_1e0,*(undefined8 *)(*(long *)(lVar23 + 0x50) + uVar17 * 8 + 0x30),lVar23,0);
  iVar4 = *(int *)(lStack_1e0 + 0x24);
  FUN_10a0f3910(&uStack_308,lStack_1e0 + 0x10,0);
  uStack_3f0 = 0;
  iStack_3ec = 0;
  iStack_3e8 = iVar9;
  uStack_3e4 = uVar13;
  func_0x000109a852c8(&uStack_370,&uStack_308,&uStack_3f0);
  lStack_3b8 = 0;
  uStack_3bc = 0;
  piStack_3b0 = &iStack_3e8;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  iStack_3ec = 0;
  iStack_3e8 = 0;
  lStack_3a0 = 0;
  lStack_398 = 0;
  uStack_3f0 = 0x42ff0018;
  plStack_3a8 = &lStack_3a0;
  FUN_10a003490(&uStack_3f0,&uStack_370);
  FUN_10a0ee0b0(&uStack_450,&uStack_3f0,iVar4 == 5);
  if (lStack_3b8 != 0) {
    piVar2 = (int *)(lStack_3b8 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_3f0);
    }
  }
  lStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  if (0 < iStack_3ec) {
    lVar23 = 0;
    do {
      piStack_3b0[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_3ec);
  }
  if (plStack_3a8 != &lStack_3a0 && plStack_3a8 != (long *)0x0) {
    _free(plStack_3a8[-1]);
  }
  if (lStack_338 != 0) {
    piVar2 = (int *)(lStack_338 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_370);
    }
  }
  lStack_338 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  if (0 < uStack_370._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_330 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_370._4_4_);
  }
  if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
    _free(plStack_328[-1]);
  }
  if (lStack_2d0 != 0) {
    piVar2 = (int *)(lStack_2d0 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_308);
    }
  }
  lStack_2d0 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  if (0 < uStack_308._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_2c8 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_308._4_4_);
  }
  if (puStack_2c0 != auStack_2b8 && puStack_2c0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2c0 + -8));
  }
  if (uStack_1d8 != (long *)0x0) {
    plVar24 = uStack_1d8 + 1;
    do {
      lVar23 = *plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_1d8);
    }
  }
  piStack_3b0 = (int *)((ulong)&uStack_3f0 | 8);
  iStack_3e8 = (int)uStack_448;
  uStack_3e4 = (uint)((ulong)uStack_448 >> 0x20);
  uStack_3f0 = uStack_450;
  iStack_3ec = iStack_44c;
  uStack_3d8 = (undefined4)uStack_438;
  uStack_3d4 = (undefined4)((ulong)uStack_438 >> 0x20);
  uStack_3e0 = (undefined4)uStack_440;
  uStack_3dc = (undefined4)((ulong)uStack_440 >> 0x20);
  uStack_3c8 = (undefined4)uStack_428;
  uStack_3c4 = (undefined4)((ulong)uStack_428 >> 0x20);
  uStack_3d0 = (undefined4)uStack_430;
  uStack_3cc = (undefined4)((ulong)uStack_430 >> 0x20);
  lStack_3b8 = lStack_418;
  uStack_3c0 = (undefined4)uStack_420;
  uStack_3bc = (undefined4)((ulong)uStack_420 >> 0x20);
  lStack_3a0 = 0;
  lStack_398 = 0;
  if (lStack_418 != 0) {
    piVar2 = (int *)(lStack_418 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_3a8 = &lStack_3a0;
  if (iStack_44c < 3) {
    lStack_3a0 = *plStack_408;
    lStack_398 = plStack_408[1];
  }
  else {
    iStack_3ec = 0;
    func_0x000109a84868(&uStack_3f0,&uStack_450);
  }
  fVar27 = *(float *)((long)plVar11 + 0xc);
  if (fVar27 != 1.0) {
    uStack_2f8 = 0;
    uStack_308 = (uint *)CONCAT44(uStack_308._4_4_,0x81010005);
    puStack_300 = &uStack_450;
    uVar13 = 3;
    if (0.5 <= fVar27) {
      uVar13 = 1;
    }
    uStack_370 = (undefined8 *)CONCAT44(uStack_370._4_4_,0x82010005);
    puStack_368 = &uStack_3f0;
    uStack_360 = 0;
    lStack_1e0 = 0;
    func_0x000109b0f718((double)fVar27,(double)fVar27,&uStack_308,&uStack_370,&lStack_1e0,uVar13);
  }
  if ((int)*plVar11 == 0) {
    uStack_308 = (uint *)0x0;
    puStack_300 = (uint *)0x0;
    uStack_2f8 = 0;
    uStack_370 = (undefined8 *)0x0;
    puStack_368 = (uint *)0x0;
    uStack_360 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    uStack_180 = 0;
    func_0x00010983ca2c(&uStack_308,(long)(int)uStack_3e4 * (long)iStack_3e8);
    func_0x00010983ca2c(&uStack_370,(long)(int)uStack_3e4 * (long)iStack_3e8);
    func_0x000107458bb4(&lStack_1e0,(long)(int)uStack_3e4 * (long)iStack_3e8);
    func_0x000107c27e9c(&lStack_190,(long)(int)(iStack_3e8 * uStack_3e4 * 6));
    puVar14 = uStack_370;
    if (0 < iStack_3e8) {
      uVar17 = 0;
      fVar32 = fVar32 / (fVar32 - fVar30);
      bVar7 = true;
      lStack_470 = -1;
      iStack_464 = -1;
      iStack_460 = 0;
      uVar19 = (ulong)uStack_3e4;
      bVar6 = true;
      bVar1 = true;
      bVar26 = true;
      iVar9 = iStack_3e8;
      do {
        if (0 < (int)uVar19) {
          uVar22 = 0;
          lVar23 = -4;
          do {
            fVar27 = ((float)(uVar22 & 0xffffffff) + 0.5) / (float)(int)uVar19;
            fVar28 = ((float)(uVar17 & 0xffffffff) + 0.5) / (float)iStack_3e8;
            fVar33 = *(float *)(CONCAT44(uStack_3dc,uStack_3e0) + uVar17 * *plStack_3a8 + uVar22 * 4
                               );
            fVar29 = -(fVar30 * fVar32) / (fVar33 - fVar32);
            lStack_1a8 = CONCAT44((-(fVar28 + -0.5) / (float)((ulong)*plVar12 >> 0x20)) * fVar29,
                                  ((fVar27 + -0.5) / (float)*plVar12) * fVar29);
            lStack_1a0 = CONCAT44(lStack_1a0._4_4_,-fVar29);
            uStack_388 = CONCAT44(1.0 - fVar28 * *(float *)((long)plVar11 + 0x1c),
                                  fVar27 * *(float *)(plVar11 + 3));
            FUN_10a0efe48(&uStack_308,&lStack_1a8);
            FUN_10a1f2004(&lStack_1e0,&uStack_388);
            pfStack_1c0 = (float *)0x0;
            pfStack_1b8 = (float *)((ulong)pfStack_1b8 & 0xffffffff00000000);
            FUN_10a123714(&uStack_370,&pfStack_1c0);
            if ((uVar17 != 0) && (uVar22 != 0)) {
              fVar27 = *(float *)((long)plVar11 + 4);
              if (fVar27 < 1.0) {
                pfVar3 = (float *)(CONCAT44(uStack_3dc,uStack_3e0) + lStack_470 * *plStack_3a8 +
                                  lVar23);
                fVar28 = *pfVar3;
                fVar29 = pfVar3[1];
                fVar31 = *(float *)(CONCAT44(uStack_3dc,uStack_3e0) + uVar17 * *plStack_3a8 +
                                    uVar22 * 4 + -4);
                bVar7 = ABS(fVar28 - fVar29) <= fVar27;
                bVar6 = ABS(fVar28 - fVar31) <= fVar27;
                bVar1 = ABS(fVar29 - fVar33) <= fVar27;
                bVar26 = ABS(fVar31 - fVar33) <= fVar27;
              }
              lVar18 = uVar22 + iStack_464 * uStack_3e4;
              lVar16 = lVar18 + -1;
              lVar15 = uVar22 + iStack_460 * uStack_3e4;
              lVar25 = lVar15 + -1;
              if ((bVar7) && (bVar6)) {
                FUN_10a54bb6c(lVar16,lVar25,lVar18,&uStack_308,&lStack_190,&uStack_370);
                if ((bool)(bVar1 & bVar26)) {
                  FUN_10a54bb6c(lVar15,lVar18,lVar25,&uStack_308,&lStack_190,&uStack_370);
                  bVar26 = true;
                  bVar1 = true;
                }
                bVar6 = true;
LAB_10a54b6e0:
                bVar7 = true;
              }
              else if ((bool)(bVar6 & bVar26)) {
                FUN_10a54bb6c(lVar25,lVar15,lVar16,&uStack_308,&lStack_190,&uStack_370);
                bVar26 = true;
                bVar6 = true;
              }
              else if ((bool)(bVar7 & bVar1)) {
                FUN_10a54bb6c(lVar18,lVar16,lVar15,&uStack_308,&lStack_190,&uStack_370);
                bVar1 = true;
                goto LAB_10a54b6e0;
              }
            }
            uVar22 = uVar22 + 1;
            uVar19 = (ulong)(int)uStack_3e4;
            lVar23 = lVar23 + 4;
            iVar9 = iStack_3e8;
          } while ((long)uVar22 < (long)uVar19);
        }
        uVar17 = uVar17 + 1;
        lStack_470 = lStack_470 + 1;
        iStack_460 = iStack_460 + 1;
        iStack_464 = iStack_464 + 1;
        puVar14 = uStack_370;
      } while ((long)uVar17 < (long)iVar9);
    }
    for (; (uint *)puVar14 != puStack_368; puVar14 = (undefined8 *)((long)puVar14 + 0xc)) {
      fVar32 = *(float *)(puVar14 + 1);
      fVar27 = (float)*puVar14;
      fVar28 = (float)((ulong)*puVar14 >> 0x20);
      fVar30 = 1.0 / SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar32 * fVar32);
      *puVar14 = CONCAT44(fVar28 * fVar30,fVar27 * fVar30);
      *(float *)(puVar14 + 1) = fVar32 * fVar30;
    }
    FUN_10a54a8e4(extraout_x8,&uStack_308,&uStack_370,&lStack_1e0,&lStack_190);
    if (lStack_190 != 0) {
      lStack_188 = lStack_190;
      __ZdlPv();
    }
    if (lStack_1e0 != 0) {
      uStack_1d8 = (long *)lStack_1e0;
      __ZdlPv();
    }
    if (uStack_370 != (undefined8 *)0x0) {
      puStack_368 = (uint *)uStack_370;
      __ZdlPv();
    }
    if (uStack_308 == (uint *)0x0) goto LAB_10a54b910;
    puStack_300 = uStack_308;
  }
  else {
    lStack_1e0 = *plVar12;
    lStack_190 = 0;
    lStack_188 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    pfStack_1c0 = (float *)0x0;
    pfStack_1b8 = (float *)0x0;
    uStack_1b0 = 0;
    uStack_1d8 = (long *)CONCAT44(fVar30,fVar32);
    lStack_1d0 = plVar11[2];
    uStack_1c8 = (undefined1)plVar11[1];
    iStack_1c4 = *(int *)((long)plVar11 + 4);
    uStack_330 = (ulong)&uStack_370 | 8;
    puStack_368 = (uint *)CONCAT44(uStack_3e4,iStack_3e8);
    uStack_370 = (undefined8 *)CONCAT44(iStack_3ec,uStack_3f0);
    uStack_358 = CONCAT44(uStack_3d4,uStack_3d8);
    uStack_360 = CONCAT44(uStack_3dc,uStack_3e0);
    uStack_348 = CONCAT44(uStack_3c4,uStack_3c8);
    uStack_350 = CONCAT44(uStack_3cc,uStack_3d0);
    uStack_340 = CONCAT44(uStack_3bc,uStack_3c0);
    lStack_338 = lStack_3b8;
    lStack_320 = 0;
    lStack_318 = 0;
    if (lStack_3b8 != 0) {
      piVar2 = (int *)(lStack_3b8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_328 = &lStack_320;
    if (iStack_3ec < 3) {
      lStack_320 = *plStack_3a8;
      lStack_318 = plStack_3a8[1];
    }
    else {
      uStack_370 = (undefined8 *)(ulong)uStack_3f0;
      func_0x000109a84868(&uStack_370,&uStack_3f0);
    }
    FUN_10a2dea90(&uStack_308,&uStack_370,&lStack_1e0);
    if (lStack_338 != 0) {
      piVar2 = (int *)(lStack_338 + 0x14);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_370);
      }
    }
    lStack_338 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    if (0 < uStack_370._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_330 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_370._4_4_);
    }
    if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
      _free(plStack_328[-1]);
    }
    FUN_10a2df608(&uStack_308,&lStack_190,&lStack_1a8,&pfStack_1c0);
    for (pfVar3 = pfStack_1c0; pfVar3 != pfStack_1b8; pfVar3 = pfVar3 + 2) {
      *pfVar3 = *pfVar3 * *(float *)(plVar11 + 3);
      pfVar3[1] = 1.0 - *(float *)((long)plVar11 + 0x1c) * (1.0 - pfVar3[1]);
    }
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    FUN_10a54a8e4(extraout_x8,&lStack_190,&lStack_1a8,&pfStack_1c0,&uStack_388);
    FUN_10a2dfa28(&uStack_308);
    if (pfStack_1c0 != (float *)0x0) {
      pfStack_1b8 = pfStack_1c0;
      __ZdlPv();
    }
    if (lStack_1a8 != 0) {
      lStack_1a0 = lStack_1a8;
      __ZdlPv();
    }
    if (lStack_190 == 0) goto LAB_10a54b910;
    lStack_188 = lStack_190;
  }
  __ZdlPv();
LAB_10a54b910:
  if (lStack_3b8 != 0) {
    piVar2 = (int *)(lStack_3b8 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_3f0);
    }
  }
  lStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  if (0 < iStack_3ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)((long)piStack_3b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_3ec);
  }
  if (plStack_3a8 != &lStack_3a0 && plStack_3a8 != (long *)0x0) {
    _free(plStack_3a8[-1]);
  }
  if (lStack_418 != 0) {
    piVar2 = (int *)(lStack_418 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  if (0 < iStack_44c) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_410 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_44c);
  }
  if (plStack_408 != alStack_400 && plStack_408 != (long *)0x0) {
    _free(plStack_408[-1]);
  }
  return;
}



/* Entry: 10a54af8c; end: 10a54bb6b;  */

void FUN_10a54af8c(undefined8 param_1,float param_2,float param_3,int *param_4,long param_5,
                  long *param_6)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  code *pcVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long lStack_3a0;
  int iStack_394;
  int iStack_390;
  uint uStack_380;
  int iStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long *plStack_338;
  long alStack_330 [2];
  uint uStack_320;
  int iStack_31c;
  int iStack_318;
  uint uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  int *piStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  ulong uStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_238;
  uint *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 auStack_1e8 [216];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  int iStack_f4;
  float *pfStack_f0;
  float *pfStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  
  plVar13 = *(long **)(param_5 + 0x268);
  if (plVar13 == (long *)0x0) {
    iVar12 = 0;
LAB_10a54b00c:
    uVar15 = 0;
  }
  else {
    (**(code **)(*plVar13 + 0xb0))();
    iVar12 = (int)plVar13;
    plVar13 = *(long **)(param_5 + 0x268);
    if (plVar13 == (long *)0x0) goto LAB_10a54b00c;
    (**(code **)(*plVar13 + 0xb8))();
    uVar15 = SUB84(plVar13,0);
  }
  uVar18 = (ulong)*(byte *)(*(long *)(param_5 + 0x50) + 0x29);
  if (5 < uVar18) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10a54ba38);
    (*pcVar11)();
  }
  FUN_10aba1500(&lStack_110,*(undefined8 *)(*(long *)(param_5 + 0x50) + uVar18 * 8 + 0x30),param_5,0
               );
  iVar6 = *(int *)(lStack_110 + 0x24);
  FUN_10a0f3910(&uStack_238,lStack_110 + 0x10,0);
  uStack_320 = 0;
  iStack_31c = 0;
  iStack_318 = iVar12;
  uStack_314 = uVar15;
  func_0x000109a852c8(&uStack_2a0,&uStack_238,&uStack_320);
  lStack_2e8 = 0;
  uStack_2ec = 0;
  piStack_2e0 = &iStack_318;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  iStack_31c = 0;
  iStack_318 = 0;
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  uStack_320 = 0x42ff0018;
  plStack_2d8 = &lStack_2d0;
  FUN_10a003490(&uStack_320,&uStack_2a0);
  FUN_10a0ee0b0(&uStack_380,&uStack_320,iVar6 == 5);
  if (lStack_2e8 != 0) {
    piVar2 = (int *)(lStack_2e8 + 0x14);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_320);
    }
  }
  lStack_2e8 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  if (0 < iStack_31c) {
    lVar16 = 0;
    do {
      piStack_2e0[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_31c);
  }
  if (plStack_2d8 != &lStack_2d0 && plStack_2d8 != (long *)0x0) {
    _free(plStack_2d8[-1]);
  }
  if (lStack_268 != 0) {
    piVar2 = (int *)(lStack_268 + 0x14);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a0);
    }
  }
  lStack_268 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  if (0 < uStack_2a0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_260 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_2a0._4_4_);
  }
  if (plStack_258 != &lStack_250 && plStack_258 != (long *)0x0) {
    _free(plStack_258[-1]);
  }
  if (lStack_200 != 0) {
    piVar2 = (int *)(lStack_200 + 0x14);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_238);
    }
  }
  lStack_200 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  if (0 < uStack_238._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_1f8 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_238._4_4_);
  }
  if (puStack_1f0 != auStack_1e8 && puStack_1f0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1f0 + -8));
  }
  if (uStack_108 != (long *)0x0) {
    plVar13 = uStack_108 + 1;
    do {
      lVar16 = *plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*uStack_108 + 0x10))(uStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_108);
    }
  }
  piStack_2e0 = (int *)((ulong)&uStack_320 | 8);
  iStack_318 = (int)uStack_378;
  uStack_314 = (uint)((ulong)uStack_378 >> 0x20);
  uStack_320 = uStack_380;
  iStack_31c = iStack_37c;
  uStack_308 = (undefined4)uStack_368;
  uStack_304 = (undefined4)((ulong)uStack_368 >> 0x20);
  uStack_310 = (undefined4)uStack_370;
  uStack_30c = (undefined4)((ulong)uStack_370 >> 0x20);
  uStack_2f8 = (undefined4)uStack_358;
  uStack_2f4 = (undefined4)((ulong)uStack_358 >> 0x20);
  uStack_300 = (undefined4)uStack_360;
  uStack_2fc = (undefined4)((ulong)uStack_360 >> 0x20);
  lStack_2e8 = lStack_348;
  uStack_2f0 = (undefined4)uStack_350;
  uStack_2ec = (undefined4)((ulong)uStack_350 >> 0x20);
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  if (lStack_348 != 0) {
    piVar2 = (int *)(lStack_348 + 0x14);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plStack_2d8 = &lStack_2d0;
  if (iStack_37c < 3) {
    lStack_2d0 = *plStack_338;
    lStack_2c8 = plStack_338[1];
  }
  else {
    iStack_31c = 0;
    func_0x000109a84868(&uStack_320,&uStack_380);
  }
  fVar22 = (float)param_4[3];
  if (fVar22 != 1.0) {
    uStack_228 = 0;
    uStack_238 = (uint *)CONCAT44(uStack_238._4_4_,0x81010005);
    puStack_230 = &uStack_380;
    uVar15 = 3;
    if (0.5 <= fVar22) {
      uVar15 = 1;
    }
    uStack_2a0 = (undefined8 *)CONCAT44(uStack_2a0._4_4_,0x82010005);
    puStack_298 = &uStack_320;
    uStack_290 = 0;
    lStack_110 = 0;
    func_0x000109b0f718((double)fVar22,(double)fVar22,&uStack_238,&uStack_2a0,&lStack_110,uVar15);
  }
  if (*param_4 == 0) {
    uStack_238 = (uint *)0x0;
    puStack_230 = (uint *)0x0;
    uStack_228 = 0;
    uStack_2a0 = (undefined8 *)0x0;
    puStack_298 = (uint *)0x0;
    uStack_290 = 0;
    lStack_110 = 0;
    uStack_108 = (long *)0x0;
    uStack_100 = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010983ca2c(&uStack_238,(long)(int)uStack_314 * (long)iStack_318);
    func_0x00010983ca2c(&uStack_2a0,(long)(int)uStack_314 * (long)iStack_318);
    func_0x000107458bb4(&lStack_110,(long)(int)uStack_314 * (long)iStack_318);
    func_0x000107c27e9c(&lStack_c0,(long)(int)(iStack_318 * uStack_314 * 6));
    puVar10 = uStack_2a0;
    if (0 < iStack_318) {
      uVar18 = 0;
      param_2 = param_2 / (param_2 - param_3);
      bVar9 = true;
      lStack_3a0 = -1;
      iStack_394 = -1;
      iStack_390 = 0;
      uVar17 = (ulong)uStack_314;
      bVar8 = true;
      bVar1 = true;
      bVar21 = true;
      iVar12 = iStack_318;
      do {
        if (0 < (int)uVar17) {
          uVar19 = 0;
          lVar16 = -4;
          do {
            fVar22 = ((float)(uVar19 & 0xffffffff) + 0.5) / (float)(int)uVar17;
            fVar23 = ((float)(uVar18 & 0xffffffff) + 0.5) / (float)iStack_318;
            fVar26 = *(float *)(CONCAT44(uStack_30c,uStack_310) + uVar18 * *plStack_2d8 + uVar19 * 4
                               );
            fVar24 = -(param_3 * param_2) / (fVar26 - param_2);
            lStack_d8 = CONCAT44((-(fVar23 + -0.5) / (float)((ulong)*param_6 >> 0x20)) * fVar24,
                                 ((fVar22 + -0.5) / (float)*param_6) * fVar24);
            lStack_d0 = CONCAT44(lStack_d0._4_4_,-fVar24);
            uStack_2b8 = CONCAT44(1.0 - fVar23 * (float)param_4[7],fVar22 * (float)param_4[6]);
            FUN_10a0efe48(&uStack_238,&lStack_d8);
            FUN_10a1f2004(&lStack_110,&uStack_2b8);
            pfStack_f0 = (float *)0x0;
            pfStack_e8 = (float *)((ulong)pfStack_e8 & 0xffffffff00000000);
            FUN_10a123714(&uStack_2a0,&pfStack_f0);
            if ((uVar18 != 0) && (uVar19 != 0)) {
              fVar22 = (float)param_4[1];
              if (fVar22 < 1.0) {
                pfVar3 = (float *)(CONCAT44(uStack_30c,uStack_310) + lStack_3a0 * *plStack_2d8 +
                                  lVar16);
                fVar23 = *pfVar3;
                fVar24 = pfVar3[1];
                fVar25 = *(float *)(CONCAT44(uStack_30c,uStack_310) + uVar18 * *plStack_2d8 +
                                    uVar19 * 4 + -4);
                bVar9 = ABS(fVar23 - fVar24) <= fVar22;
                bVar8 = ABS(fVar23 - fVar25) <= fVar22;
                bVar1 = ABS(fVar24 - fVar26) <= fVar22;
                bVar21 = ABS(fVar25 - fVar26) <= fVar22;
              }
              lVar4 = uVar19 + iStack_394 * uStack_314;
              lVar14 = lVar4 + -1;
              lVar5 = uVar19 + iStack_390 * uStack_314;
              lVar20 = lVar5 + -1;
              if ((bVar9) && (bVar8)) {
                FUN_10a54bb6c(lVar14,lVar20,lVar4,&uStack_238,&lStack_c0,&uStack_2a0);
                if ((bool)(bVar1 & bVar21)) {
                  FUN_10a54bb6c(lVar5,lVar4,lVar20,&uStack_238,&lStack_c0,&uStack_2a0);
                  bVar21 = true;
                  bVar1 = true;
                }
                bVar8 = true;
LAB_10a54b6e0:
                bVar9 = true;
              }
              else if ((bool)(bVar8 & bVar21)) {
                FUN_10a54bb6c(lVar20,lVar5,lVar14,&uStack_238,&lStack_c0,&uStack_2a0);
                bVar21 = true;
                bVar8 = true;
              }
              else if ((bool)(bVar9 & bVar1)) {
                FUN_10a54bb6c(lVar4,lVar14,lVar5,&uStack_238,&lStack_c0,&uStack_2a0);
                bVar1 = true;
                goto LAB_10a54b6e0;
              }
            }
            uVar19 = uVar19 + 1;
            uVar17 = (ulong)(int)uStack_314;
            lVar16 = lVar16 + 4;
            iVar12 = iStack_318;
          } while ((long)uVar19 < (long)uVar17);
        }
        uVar18 = uVar18 + 1;
        lStack_3a0 = lStack_3a0 + 1;
        iStack_390 = iStack_390 + 1;
        iStack_394 = iStack_394 + 1;
        puVar10 = uStack_2a0;
      } while ((long)uVar18 < (long)iVar12);
    }
    for (; (uint *)puVar10 != puStack_298; puVar10 = (undefined8 *)((long)puVar10 + 0xc)) {
      fVar22 = *(float *)(puVar10 + 1);
      fVar24 = (float)*puVar10;
      fVar26 = (float)((ulong)*puVar10 >> 0x20);
      fVar23 = 1.0 / SQRT(fVar24 * fVar24 + fVar26 * fVar26 + fVar22 * fVar22);
      *puVar10 = CONCAT44(fVar26 * fVar23,fVar24 * fVar23);
      *(float *)(puVar10 + 1) = fVar22 * fVar23;
    }
    FUN_10a54a8e4(param_1,&uStack_238,&uStack_2a0,&lStack_110,&lStack_c0);
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (lStack_110 != 0) {
      uStack_108 = (long *)lStack_110;
      __ZdlPv();
    }
    if (uStack_2a0 != (undefined8 *)0x0) {
      puStack_298 = (uint *)uStack_2a0;
      __ZdlPv();
    }
    if (uStack_238 == (uint *)0x0) goto LAB_10a54b910;
    puStack_230 = uStack_238;
  }
  else {
    lStack_110 = *param_6;
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    pfStack_f0 = (float *)0x0;
    pfStack_e8 = (float *)0x0;
    uStack_e0 = 0;
    uStack_108 = (long *)CONCAT44(param_3,param_2);
    uStack_100 = *(undefined8 *)(param_4 + 4);
    uStack_f8 = (undefined1)param_4[2];
    iStack_f4 = param_4[1];
    uStack_260 = (ulong)&uStack_2a0 | 8;
    puStack_298 = (uint *)CONCAT44(uStack_314,iStack_318);
    uStack_2a0 = (undefined8 *)CONCAT44(iStack_31c,uStack_320);
    uStack_288 = CONCAT44(uStack_304,uStack_308);
    uStack_290 = CONCAT44(uStack_30c,uStack_310);
    uStack_278 = CONCAT44(uStack_2f4,uStack_2f8);
    uStack_280 = CONCAT44(uStack_2fc,uStack_300);
    uStack_270 = CONCAT44(uStack_2ec,uStack_2f0);
    lStack_268 = lStack_2e8;
    lStack_250 = 0;
    lStack_248 = 0;
    if (lStack_2e8 != 0) {
      piVar2 = (int *)(lStack_2e8 + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plStack_258 = &lStack_250;
    if (iStack_31c < 3) {
      lStack_250 = *plStack_2d8;
      lStack_248 = plStack_2d8[1];
    }
    else {
      uStack_2a0 = (undefined8 *)(ulong)uStack_320;
      func_0x000109a84868(&uStack_2a0,&uStack_320);
    }
    FUN_10a2dea90(&uStack_238,&uStack_2a0,&lStack_110);
    if (lStack_268 != 0) {
      piVar2 = (int *)(lStack_268 + 0x14);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    lStack_268 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    if (0 < uStack_2a0._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(uStack_260 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < uStack_2a0._4_4_);
    }
    if (plStack_258 != &lStack_250 && plStack_258 != (long *)0x0) {
      _free(plStack_258[-1]);
    }
    FUN_10a2df608(&uStack_238,&lStack_c0,&lStack_d8,&pfStack_f0);
    for (pfVar3 = pfStack_f0; pfVar3 != pfStack_e8; pfVar3 = pfVar3 + 2) {
      *pfVar3 = *pfVar3 * (float)param_4[6];
      pfVar3[1] = 1.0 - (float)param_4[7] * (1.0 - pfVar3[1]);
    }
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    FUN_10a54a8e4(param_1,&lStack_c0,&lStack_d8,&pfStack_f0,&uStack_2b8);
    FUN_10a2dfa28(&uStack_238);
    if (pfStack_f0 != (float *)0x0) {
      pfStack_e8 = pfStack_f0;
      __ZdlPv();
    }
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
    if (lStack_c0 == 0) goto LAB_10a54b910;
    lStack_b8 = lStack_c0;
  }
  __ZdlPv();
LAB_10a54b910:
  if (lStack_2e8 != 0) {
    piVar2 = (int *)(lStack_2e8 + 0x14);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_320);
    }
  }
  lStack_2e8 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  if (0 < iStack_31c) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)piStack_2e0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_31c);
  }
  if (plStack_2d8 != &lStack_2d0 && plStack_2d8 != (long *)0x0) {
    _free(plStack_2d8[-1]);
  }
  if (lStack_348 != 0) {
    piVar2 = (int *)(lStack_348 + 0x14);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_380);
    }
  }
  lStack_348 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  if (0 < iStack_37c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_340 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_37c);
  }
  if (plStack_338 != alStack_330 && plStack_338 != (long *)0x0) {
    _free(plStack_338[-1]);
  }
  return;
}



/* Entry: 10a54bb6c; end: 10a54bdf3;  */

undefined8 *
FUN_10a54bb6c(undefined8 *param_1,int param_2,int param_3,long *param_4,long *param_5,long *param_6)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  
  piVar2 = (int *)param_5[1];
  iVar13 = (int)param_1;
  if (param_5[2] - (long)piVar2 < 9) {
    lVar15 = (long)piVar2 - *param_5;
    uVar7 = (lVar15 >> 2) + 3;
    if (uVar7 >> 0x3e != 0) {
      func_0x000109ffdfac();
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = &PTR_FUN_110c49f98;
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      param_1[0x22] = 0;
      param_1[0x21] = 0;
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      param_1[0x26] = 0;
      param_1[0x25] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      FUN_10a19079c();
      *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
      param_1[0x23] = 0xffffffffffffffff;
      param_1[0x22] = 0xffffffffffffffff;
      param_1[0x25] = 0xffffffffffffffff;
      param_1[0x24] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(undefined8 *)((long)param_1 + 0x13c) = 0;
      *(undefined8 *)((long)param_1 + 0x134) = 0;
      *(undefined8 *)((long)param_1 + 0x14c) = 0;
      *(undefined8 *)((long)param_1 + 0x144) = 0;
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x2c] = &PTR_DAT_110c4a7c8;
      *(undefined4 *)((long)param_1 + 0x16c) = 0;
      *(undefined1 *)(param_1 + 0x2e) = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x32] = 0;
      param_1[0x31] = 0;
      param_1[0x33] = 0xffffffffffffffff;
      param_1[0x34] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x35) = 2;
      *(undefined4 *)(param_1 + 0x3a) = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      *(undefined8 *)((long)param_1 + 0x1dc) = 0;
      *(undefined8 *)((long)param_1 + 0x1d4) = 0x3f800000;
      *(undefined8 *)((long)param_1 + 0x1e4) = 0x3f800000;
      *(undefined1 *)((long)param_1 + 0x1ec) = 1;
      *param_1 = &PTR_FUN_110bf0370;
      param_1[0x36] = &PTR_DAT_110bf03c8;
      param_1[0x37] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x3e] = 0;
      param_1[0x1d] = 0;
      return param_1;
    }
    uVar5 = param_5[2] - *param_5;
    uVar8 = (long)uVar5 >> 1;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar4 = (long *)0x0;
      piVar6 = piVar2;
    }
    else {
      plVar4 = param_5;
      FUN_109ffdfc0();
      piVar6 = (int *)param_5[1];
    }
    piVar1 = (int *)((long)plVar4 + lVar15);
    *piVar1 = iVar13;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    _memcpy(piVar1 + 3,piVar2,(long)piVar6 - (long)piVar2);
    lVar15 = param_5[1];
    param_5[1] = (long)piVar2;
    lVar14 = (long)piVar1 - ((long)piVar2 - *param_5);
    _memcpy(lVar14);
    param_1 = (undefined8 *)*param_5;
    *param_5 = lVar14;
    param_5[1] = (long)(piVar1 + 3) + (lVar15 - (long)piVar2);
    param_5[2] = (long)plVar4 + uVar8 * 4;
    if (param_1 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  else {
    *piVar2 = iVar13;
    piVar2[1] = param_2;
    piVar2[2] = param_3;
    param_5[1] = (long)(piVar2 + 3);
  }
  lVar15 = *param_4;
  uVar7 = (param_4[1] - lVar15 >> 2) * -0x5555555555555555;
  if (((((ulong)(long)iVar13 <= uVar7 && uVar7 - (long)iVar13 != 0) &&
       ((ulong)(long)param_2 <= uVar7 && uVar7 - (long)param_2 != 0)) &&
      ((ulong)(long)param_3 <= uVar7 && uVar7 - (long)param_3 != 0)) &&
     (uVar7 = (param_6[1] - *param_6 >> 2) * -0x5555555555555555,
     (ulong)(long)iVar13 <= uVar7 && uVar7 - (long)iVar13 != 0)) {
    pfVar11 = (float *)(lVar15 + (long)iVar13 * 0xc);
    pfVar12 = (float *)(lVar15 + (long)param_2 * 0xc);
    pfVar10 = (float *)(lVar15 + (long)param_3 * 0xc);
    fVar16 = *pfVar12;
    fVar19 = *pfVar11;
    fVar20 = *pfVar10;
    uVar22 = *(undefined8 *)(pfVar12 + 1);
    uVar24 = *(undefined8 *)(pfVar11 + 1);
    fVar21 = (float)uVar24;
    fVar26 = (float)uVar22 - fVar21;
    fVar18 = (float)((ulong)uVar22 >> 0x20);
    fVar25 = (float)((ulong)uVar24 >> 0x20);
    uVar22 = *(undefined8 *)(pfVar10 + 1);
    fVar23 = (float)((ulong)uVar22 >> 0x20);
    fVar21 = (float)uVar22 - fVar21;
    fVar17 = (fVar18 - fVar25) * -fVar21 + (fVar23 - fVar25) * fVar26;
    fVar18 = (fVar16 - fVar19) * -(fVar23 - fVar25) + (fVar20 - fVar19) * (fVar18 - fVar25);
    fVar16 = -(fVar20 - fVar19) * fVar26 + fVar21 * (fVar16 - fVar19);
    puVar9 = (undefined8 *)(*param_6 + (long)iVar13 * 0xc);
    *puVar9 = CONCAT44(fVar18 + (float)((ulong)*puVar9 >> 0x20),fVar17 + (float)*puVar9);
    *(float *)(puVar9 + 1) = fVar16 + *(float *)(puVar9 + 1);
    uVar7 = (param_6[1] - *param_6 >> 2) * -0x5555555555555555;
    if ((ulong)(long)param_2 <= uVar7 && uVar7 - (long)param_2 != 0) {
      puVar9 = (undefined8 *)(*param_6 + (long)param_2 * 0xc);
      *puVar9 = CONCAT44(fVar18 + (float)((ulong)*puVar9 >> 0x20),fVar17 + (float)*puVar9);
      *(float *)(puVar9 + 1) = fVar16 + *(float *)(puVar9 + 1);
      uVar7 = (param_6[1] - *param_6 >> 2) * -0x5555555555555555;
      if ((ulong)(long)param_3 <= uVar7 && uVar7 - (long)param_3 != 0) {
        puVar9 = (undefined8 *)(*param_6 + (long)param_3 * 0xc);
        *puVar9 = CONCAT44(fVar18 + (float)((ulong)*puVar9 >> 0x20),fVar17 + (float)*puVar9);
        *(float *)(puVar9 + 1) = fVar16 + *(float *)(puVar9 + 1);
        return param_1;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a54bdf0);
  (*pcVar3)();
}



/* Entry: 10a54bdf4; end: 10a54bf4f;  */

undefined8 * FUN_10a54bdf4(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c49f98;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_10a19079c();
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x35) = 2;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1ec) = 1;
  *param_1 = &PTR_FUN_110bf0370;
  param_1[0x36] = &PTR_DAT_110bf03c8;
  param_1[0x37] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 10a54bf50; end: 10a54bf5b;  */

undefined8 * FUN_10a54bf50(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bf0370;
  param_1[0x36] = &PTR_DAT_110bf03c8;
  if (param_1[0x3e] != 0) {
    param_1[0x3f] = param_1[0x3e];
    __ZdlPv();
  }
  param_1[0x36] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x37);
  *param_1 = &PTR_FUN_110c49f98;
  plVar1 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1f;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x14;
  FUN_10ab550c4(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010ab55134(&puStack_28);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xb;
  FUN_10a0d89d4(&puStack_28);
  puStack_28 = param_1 + 8;
  func_0x00010ab551a4(&puStack_28);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a54bf5c; end: 10a54bf87;  */

void FUN_10a54bf5c(void)

{
  func_0x00010a54bef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a54bf88; end: 10a54c107;  */

void FUN_10a54bf88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a54c108; end: 10a54c167;  */

void FUN_10a54c108(undefined8 *param_1)

{
  func_0x000109898570(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a54c168; end: 10a54c2eb;  */

void FUN_10a54c168(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a54c2ec; end: 10a54c39f;  */

void FUN_10a54c2ec(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  
  func_0x000108a5942c(param_1 + 0x1f0,
                      (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7
                     );
  lVar2 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    lVar2 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
    lVar4 = *(long *)(param_1 + 0x1f8) - (long)*(undefined4 **)(param_1 + 0x1f0) >> 2;
    puVar3 = *(undefined4 **)(param_1 + 0x1f0);
    puVar5 = (undefined4 *)(*(long *)(param_2 + 8) + 0x28);
    do {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a54c3a0);
        (*pcVar1)();
      }
      *puVar3 = *puVar5;
      lVar4 = lVar4 + -1;
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 0xe;
    } while (lVar2 != 0);
  }
  FUN_10a177570(param_1 + 0xf0,param_2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  return;
}



/* Entry: 10a54c3a0; end: 10a54c4ab;  */

undefined1  [16] FUN_10a54c3a0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar9 = (ulong)*(uint *)(param_1 + 0xf0);
  if (*(uint *)(param_1 + 0xf0) == 0) {
    FUN_10a0ee900(auStack_48,&UNK_10f660641,0x18);
    FUN_10a0029c0(auStack_48);
  }
  else {
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = param_2 / uVar9;
    }
    if (param_2 == uVar7 * uVar9) {
      plVar10 = (long *)(param_1 + 0x10);
      lVar6 = *plVar10;
      uVar7 = param_2;
      if (*(long *)(param_1 + 0x20) == lVar6) {
        uVar7 = uVar9 * 0x400;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        func_0x000107c31950(plVar10);
        lVar6 = *plVar10;
      }
      uVar9 = *(long *)(param_1 + 0x18) - lVar6;
      if (CARRY8(uVar9,param_2)) {
        puVar4 = &UNK_10f660699;
        FUN_10a00946c();
        if (cStack_31 < '\0') {
          __ZdlPv(auStack_48[0]);
        }
        __Unwind_Resume();
        lVar6 = *(long *)(puVar4 + 0x10);
        uVar9 = (uVar7 - lVar6) + param_3;
        uVar7 = *(long *)(puVar4 + 0x18) - lVar6;
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
          if (uVar9 < uVar7) {
            *(ulong *)(puVar4 + 0x18) = lVar6 + uVar9;
          }
        }
        else {
          func_0x000107c27d58(puVar4 + 0x10,uVar9 - uVar7);
        }
        uVar9 = (ulong)*(uint *)(puVar4 + 0xf0);
        if (*(uint *)(puVar4 + 0xf0) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          if (uVar9 != 0) {
            iVar8 = (int)((ulong)(*(long *)(puVar4 + 0x18) - *(long *)(puVar4 + 0x10)) / uVar9);
          }
        }
        iVar2 = 0;
        if (uVar9 != 0) {
          iVar2 = (int)(param_3 / uVar9);
        }
        uVar9 = (ulong)(uint)(iVar8 - iVar2);
        puVar5 = puVar4;
        FUN_10ab4dde8(puVar4,uVar9);
        puVar4[0x1ec] = 1;
        auVar12._8_8_ = uVar9;
        auVar12._0_8_ = puVar5;
        return auVar12;
      }
      lVar1 = (uVar9 + param_2) - uVar9;
      if (uVar9 <= uVar9 + param_2 && lVar1 != 0) {
        func_0x000107c27d58(plVar10,lVar1);
        lVar6 = *plVar10;
      }
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = lVar6 + uVar9;
      return auVar11;
    }
    FUN_10a0ee900(auStack_48,&UNK_10f66065a,0x3e);
    FUN_10a0029c0(auStack_48);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a54c480);
  (*pcVar3)();
}



/* Entry: 10a54c4ac; end: 10a54c52b;  */

void FUN_10a54c4ac(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = (param_2 - lVar1) + param_3;
  uVar5 = *(long *)(param_1 + 0x18) - lVar1;
  if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
    if (uVar3 < uVar5) {
      *(ulong *)(param_1 + 0x18) = lVar1 + uVar3;
    }
  }
  else {
    func_0x000107c27d58((long *)(param_1 + 0x10),uVar3 - uVar5);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0xf0);
  if (*(uint *)(param_1 + 0xf0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (uVar3 != 0) {
      iVar4 = (int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / uVar3);
    }
  }
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = (int)(param_3 / uVar3);
  }
  FUN_10ab4dde8(param_1,iVar4 - iVar2);
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  return;
}



/* Entry: 10a54c52c; end: 10a54c59b;  */

ulong FUN_10a54c52c(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 >> 0x3e == 0) {
    param_3 = param_3 << 2;
    uVar6 = param_1;
    FUN_10a54c3a0();
    _memcpy();
    lVar1 = *(long *)(param_1 + 0x10);
    uVar6 = (uVar6 - lVar1) + param_3;
    uVar9 = *(long *)(param_1 + 0x18) - lVar1;
    if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
      if (uVar6 < uVar9) {
        *(ulong *)(param_1 + 0x18) = lVar1 + uVar6;
      }
    }
    else {
      func_0x000107c27d58((long *)(param_1 + 0x10),uVar6 - uVar9);
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0xf0);
    if (*(uint *)(param_1 + 0xf0) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      if (uVar6 != 0) {
        iVar8 = (int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / uVar6);
      }
    }
    iVar3 = 0;
    if (uVar6 != 0) {
      iVar3 = (int)(param_3 / uVar6);
    }
    uVar6 = param_1;
    FUN_10ab4dde8(param_1,iVar8 - iVar3);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
    return uVar6;
  }
  puVar4 = &UNK_10f660626;
  FUN_10a00946c();
  if (*(int *)(puVar4 + 0xe8) == 1) {
    uVar6 = *(long *)(puVar4 + 0x30) - (long)*(ushort **)(puVar4 + 0x28);
    uVar2 = *(uint *)(puVar4 + 0xf0);
    if (uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((ulong)uVar2 != 0) {
        uVar9 = (ulong)(*(long *)(puVar4 + 0x18) - *(long *)(puVar4 + 0x10)) / (ulong)uVar2;
      }
    }
    if (1 < uVar6) {
      uVar6 = uVar6 >> 1;
      puVar7 = *(ushort **)(puVar4 + 0x28);
      do {
        uVar6 = uVar6 - 1;
        uVar10 = (ulong)*puVar7;
        uVar5 = (ulong)(uVar10 <= uVar9 && uVar9 != uVar10);
        if (uVar10 > uVar9 || uVar9 == uVar10) {
          return uVar5;
        }
        puVar7 = puVar7 + 1;
      } while (uVar6 != 0);
      return uVar5;
    }
  }
  else if ((*(int *)(puVar4 + 0xe8) == 0) &&
          (uVar6 = *(long *)(puVar4 + 0x18) - *(long *)(puVar4 + 0x10), uVar6 != 0)) {
    if (*(int *)(puVar4 + 0xec) == 4) {
      uVar2 = *(uint *)(puVar4 + 0xf0);
      if (uVar2 != 0) {
        uVar9 = 0;
        if ((ulong)uVar2 != 0) {
          uVar9 = uVar6 / uVar2;
        }
        return (ulong)((uVar9 & 1) == 0);
      }
    }
    else if ((*(int *)(puVar4 + 0xec) == 0) && (uVar2 = *(uint *)(puVar4 + 0xf0), uVar2 != 0)) {
      iVar8 = 0;
      if ((ulong)uVar2 != 0) {
        iVar8 = (int)(uVar6 / uVar2);
      }
      return (ulong)((uint)(iVar8 * -0x55555555) < 0x55555556);
    }
  }
  return 1;
}



/* Entry: 10a54c59c; end: 10a54c66f;  */

bool FUN_10a54c59c(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0xe8) == 1) {
    uVar6 = *(long *)(param_1 + 0x30) - (long)*(ushort **)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0xf0);
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((ulong)uVar1 != 0) {
        uVar5 = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / (ulong)uVar1;
      }
    }
    if (1 < uVar6) {
      uVar6 = uVar6 >> 1;
      puVar4 = *(ushort **)(param_1 + 0x28);
      do {
        uVar6 = uVar6 - 1;
        uVar7 = (ulong)*puVar4;
        bVar3 = uVar7 <= uVar5 && uVar5 != uVar7;
        if (uVar7 > uVar5 || uVar5 == uVar7) {
          return bVar3;
        }
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
      return bVar3;
    }
  }
  else if ((*(int *)(param_1 + 0xe8) == 0) &&
          (uVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10), uVar6 != 0)) {
    if (*(int *)(param_1 + 0xec) == 4) {
      uVar1 = *(uint *)(param_1 + 0xf0);
      if (uVar1 != 0) {
        uVar5 = 0;
        if ((ulong)uVar1 != 0) {
          uVar5 = uVar6 / uVar1;
        }
        return (uVar5 & 1) == 0;
      }
    }
    else if ((*(int *)(param_1 + 0xec) == 0) && (uVar1 = *(uint *)(param_1 + 0xf0), uVar1 != 0)) {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar6 / uVar1);
      }
      return (uint)(iVar2 * -0x55555555) < 0x55555556;
    }
  }
  return true;
}



/* Entry: 10a54c670; end: 10a54c73b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a54c670(long param_1,undefined *param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (param_3 < 0) {
    FUN_10a00946c(&UNK_10f660759);
  }
  else {
    lVar8 = param_1;
    if (param_3 == 0) {
LAB_10a54c70c:
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = lVar8;
      return auVar17;
    }
    puVar12 = (undefined *)(param_3 * 2);
    plVar13 = (long *)(param_1 + 0x28);
    lVar8 = *plVar13;
    puVar4 = param_2;
    if (*(long *)(param_1 + 0x38) == lVar8) {
      puVar4 = puVar12;
      if (puVar12 < (undefined *)0x801) {
        puVar4 = (undefined *)0x800;
      }
      func_0x000107c31950(plVar13);
      lVar8 = *plVar13;
    }
    uVar14 = *(long *)(param_1 + 0x30) - lVar8;
    if (CARRY8(uVar14,(ulong)puVar12)) {
      puVar12 = &UNK_10f660773;
      FUN_10a00946c();
      puVar2 = puVar12 + 0xf0;
      puVar5 = puVar4 + 0xf0;
      FUN_10a177570(puVar2,puVar5);
      *(undefined8 *)(puVar12 + 0xe8) = *(undefined8 *)(puVar4 + 0xe8);
      if (puVar12 != puVar4) {
        FUN_10a0cf2cc(puVar12 + 0x28,*(long *)(puVar4 + 0x28),*(long *)(puVar4 + 0x30),
                      *(long *)(puVar4 + 0x30) - *(long *)(puVar4 + 0x28));
        puVar5 = *(undefined **)(puVar4 + 0x10);
        puVar2 = puVar12 + 0x10;
        FUN_10a0cf2cc(puVar2,puVar5,*(long *)(puVar4 + 0x18),*(long *)(puVar4 + 0x18) - (long)puVar5
                     );
      }
      uVar9 = *(undefined8 *)(puVar4 + 0x144);
      *(undefined4 *)(puVar12 + 0x14c) = *(undefined4 *)(puVar4 + 0x14c);
      *(undefined8 *)(puVar12 + 0x144) = uVar9;
      uVar9 = *(undefined8 *)(puVar4 + 0x138);
      *(undefined4 *)(puVar12 + 0x140) = *(undefined4 *)(puVar4 + 0x140);
      *(undefined8 *)(puVar12 + 0x138) = uVar9;
      FUN_10ab6eee0();
      lVar8 = *(long *)(puVar12 + 0xf8);
      lVar10 = *(long *)(puVar12 + 0x100);
      if (lVar8 == lVar10) {
LAB_10a54c7ec:
        if (((puVar12 != puVar4) && (lVar8 != lVar10)) && (lVar8 != 0)) {
          FUN_10a3aa41c(puVar12 + 0x40,*(long *)(puVar4 + 0x40),*(long *)(puVar4 + 0x48),
                        (*(long *)(puVar4 + 0x48) - *(long *)(puVar4 + 0x40) >> 3) *
                        -0x71c71c71c71c71c7);
          FUN_10a0d8644(puVar12 + 0x58,*(long *)(puVar4 + 0x58),*(long *)(puVar4 + 0x60),
                        (*(long *)(puVar4 + 0x60) - *(long *)(puVar4 + 0x58) >> 5) *
                        -0x5555555555555555);
          FUN_10a55900c(puVar12 + 0xa0,*(long *)(puVar4 + 0xa0),*(long *)(puVar4 + 0xa8),
                        (*(long *)(puVar4 + 0xa8) - *(long *)(puVar4 + 0xa0) >> 3) *
                        0x2e8ba2e8ba2e8ba3);
          FUN_10a4af00c(puVar12 + 0x88,*(long *)(puVar4 + 0x88),*(long *)(puVar4 + 0x90),
                        (*(long *)(puVar4 + 0x90) - *(long *)(puVar4 + 0x88) >> 4) *
                        -0x5555555555555555);
          uVar6 = *(ulong *)(puVar4 + 0x70);
          lVar8 = *(long *)(puVar4 + 0x78);
          lVar10 = (long)(lVar8 - uVar6) >> 3;
          uVar7 = lVar10 * -0x5555555555555555;
          puVar3 = (undefined8 *)(puVar12 + 0x70);
          lVar11 = *(long *)(puVar12 + 0x80);
          puVar15 = (undefined8 *)*puVar3;
          uVar14 = uVar6;
          if (uVar7 <= (ulong)((lVar11 - (long)puVar15 >> 3) * -0x5555555555555555)) {
            puVar16 = *(undefined8 **)(puVar12 + 0x78);
            if ((ulong)(((long)puVar16 - (long)puVar15 >> 3) * -0x5555555555555555) < uVar7) {
              uVar7 = uVar6 + ((long)puVar16 - (long)puVar15);
              if (puVar16 != puVar15) {
                _memmove(puVar15,uVar6);
                puVar16 = *(undefined8 **)(puVar12 + 0x78);
                puVar3 = puVar15;
              }
              lVar8 = lVar8 - uVar7;
              uVar14 = uVar6;
              if (lVar8 != 0) {
                puVar3 = puVar16;
                _memmove(puVar16,uVar7,lVar8);
                uVar14 = uVar7;
              }
              lVar8 = (long)puVar16 + lVar8;
            }
            else {
              lVar8 = lVar8 - uVar6;
              if (lVar8 != 0) {
                puVar3 = puVar15;
                _memmove(puVar15,uVar6,lVar8);
                uVar14 = uVar6;
              }
              lVar8 = (long)puVar15 + lVar8;
            }
LAB_10a559b94:
            *(long *)(puVar12 + 0x78) = lVar8;
            auVar19._8_8_ = uVar14;
            auVar19._0_8_ = puVar3;
            return auVar19;
          }
          if (puVar15 != (undefined8 *)0x0) {
            *(undefined8 **)(puVar12 + 0x78) = puVar15;
            __ZdlPv(puVar15);
            lVar11 = 0;
            *puVar3 = 0;
            *(undefined8 *)(puVar12 + 0x78) = 0;
            *(undefined8 *)(puVar12 + 0x80) = 0;
          }
          if (uVar7 < 0xaaaaaaaaaaaaaab) {
            uVar14 = (lVar11 >> 3) * 0x5555555555555556;
            if (uVar14 < uVar7 || uVar14 + lVar10 * 0x5555555555555555 == 0) {
              uVar14 = uVar7;
            }
            if (0x555555555555554 < (ulong)((lVar11 >> 3) * -0x5555555555555555)) {
              uVar14 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar14 < 0xaaaaaaaaaaaaaab) {
              puVar15 = puVar3;
              FUN_10a559bc4();
              *puVar3 = puVar15;
              *(undefined8 **)(puVar12 + 0x78) = puVar15;
              *(undefined8 **)(puVar12 + 0x80) = puVar15 + uVar14 * 3;
              lVar8 = lVar8 - uVar6;
              puVar3 = puVar15;
              if (lVar8 != 0) {
                _memmove(puVar15,uVar6,lVar8);
                uVar14 = uVar6;
              }
              lVar8 = (long)puVar15 + lVar8;
              goto LAB_10a559b94;
            }
          }
          FUN_10a559bb0();
          plVar13 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if (0xaaaaaaaaaaaaaaa < uVar14) {
            func_0x000109ffded8();
            FUN_10a559ce8(plVar13 + 0x29);
            FUN_10a559ce8(plVar13 + 0x26);
            FUN_10a559ce8(plVar13 + 0x23);
            if (plVar13[0x20] != 0) {
              plVar13[0x21] = plVar13[0x20];
              _free();
            }
            FUN_10a559ce8(plVar13 + 0x1d);
            if (plVar13[0x1a] != 0) {
              plVar13[0x1b] = plVar13[0x1a];
              _free();
            }
            if (plVar13[0x17] != 0) {
              plVar13[0x18] = plVar13[0x17];
              _free();
            }
            if (plVar13[0x14] != 0) {
              plVar13[0x15] = plVar13[0x14];
              __ZdlPv();
            }
            if (plVar13[0x11] != 0) {
              plVar13[0x12] = plVar13[0x11];
              _free();
            }
            if (plVar13[0xc] != 0) {
              plVar13[0xd] = plVar13[0xc];
              __ZdlPv();
            }
            if (plVar13[9] != 0) {
              plVar13[10] = plVar13[9];
              _free();
            }
            if (plVar13[6] != 0) {
              plVar13[7] = plVar13[6];
              _free();
            }
            if (plVar13[3] != 0) {
              plVar13[4] = plVar13[3];
              _free();
            }
            if (*plVar13 != 0) {
              plVar13[1] = *plVar13;
              _free();
            }
            auVar21._8_8_ = uVar14;
            auVar21._0_8_ = plVar13;
            return auVar21;
          }
          lVar8 = uVar14 * 0x18;
          __Znwm(lVar8);
          auVar20._8_8_ = uVar14;
          auVar20._0_8_ = lVar8;
          return auVar20;
        }
      }
      else {
        do {
          if (*(long *)(lVar8 + 0x18) == lRam0000000113835858) goto LAB_10a54c7ec;
          lVar8 = lVar8 + 0x38;
        } while (lVar8 != lVar10);
      }
      auVar18._8_8_ = puVar5;
      auVar18._0_8_ = puVar2;
      return auVar18;
    }
    lVar8 = (uVar14 + (long)puVar12) - uVar14;
    if (uVar14 <= uVar14 + (long)puVar12 && lVar8 != 0) {
      func_0x000107c27d58(plVar13,lVar8);
      if (uVar14 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28))) {
        lVar8 = uVar14 + *(long *)(param_1 + 0x28);
        _memcpy(lVar8,param_2,puVar12);
        *(undefined1 *)(param_1 + 0x1ec) = 1;
        goto LAB_10a54c70c;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a54c730);
  (*pcVar1)();
}



/* Entry: 10a54c73c; end: 10a54c8bb;  */

undefined1  [16] FUN_10a54c73c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar4 = param_1 + 0xf0;
  lVar8 = param_2 + 0xf0;
  FUN_10a177570(lVar4,lVar8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  if (param_1 != param_2) {
    FUN_10a0cf2cc(param_1 + 0x28,*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x30),
                  *(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28));
    lVar8 = *(long *)(param_2 + 0x10);
    lVar4 = param_1 + 0x10;
    FUN_10a0cf2cc(lVar4,lVar8,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x18) - lVar8);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x144) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  FUN_10ab6eee0();
  lVar9 = *(long *)(param_1 + 0xf8);
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar9 == lVar1) {
LAB_10a54c7ec:
    if (((param_1 != param_2) && (lVar9 != lVar1)) && (lVar9 != 0)) {
      FUN_10a3aa41c(param_1 + 0x40,*(long *)(param_2 + 0x40),*(long *)(param_2 + 0x48),
                    (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) *
                    -0x71c71c71c71c71c7);
      FUN_10a0d8644(param_1 + 0x58,*(long *)(param_2 + 0x58),*(long *)(param_2 + 0x60),
                    (*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 5) *
                    -0x5555555555555555);
      FUN_10a55900c(param_1 + 0xa0,*(long *)(param_2 + 0xa0),*(long *)(param_2 + 0xa8),
                    (*(long *)(param_2 + 0xa8) - *(long *)(param_2 + 0xa0) >> 3) *
                    0x2e8ba2e8ba2e8ba3);
      FUN_10a4af00c(param_1 + 0x88,*(long *)(param_2 + 0x88),*(long *)(param_2 + 0x90),
                    (*(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 4) *
                    -0x5555555555555555);
      uVar5 = *(ulong *)(param_2 + 0x70);
      lVar4 = *(long *)(param_2 + 0x78);
      lVar8 = (long)(lVar4 - uVar5) >> 3;
      uVar6 = lVar8 * -0x5555555555555555;
      puVar2 = (undefined8 *)(param_1 + 0x70);
      lVar9 = *(long *)(param_1 + 0x80);
      puVar11 = (undefined8 *)*puVar2;
      uVar10 = uVar5;
      if (uVar6 <= (ulong)((lVar9 - (long)puVar11 >> 3) * -0x5555555555555555)) {
        puVar12 = *(undefined8 **)(param_1 + 0x78);
        if ((ulong)(((long)puVar12 - (long)puVar11 >> 3) * -0x5555555555555555) < uVar6) {
          uVar6 = uVar5 + ((long)puVar12 - (long)puVar11);
          if (puVar12 != puVar11) {
            _memmove(puVar11,uVar5);
            puVar12 = *(undefined8 **)(param_1 + 0x78);
            puVar2 = puVar11;
          }
          lVar4 = lVar4 - uVar6;
          uVar10 = uVar5;
          if (lVar4 != 0) {
            puVar2 = puVar12;
            _memmove(puVar12,uVar6,lVar4);
            uVar10 = uVar6;
          }
          lVar4 = (long)puVar12 + lVar4;
        }
        else {
          lVar4 = lVar4 - uVar5;
          if (lVar4 != 0) {
            puVar2 = puVar11;
            _memmove(puVar11,uVar5,lVar4);
            uVar10 = uVar5;
          }
          lVar4 = (long)puVar11 + lVar4;
        }
LAB_10a559b94:
        *(long *)(param_1 + 0x78) = lVar4;
        auVar14._8_8_ = uVar10;
        auVar14._0_8_ = puVar2;
        return auVar14;
      }
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x78) = puVar11;
        __ZdlPv(puVar11);
        lVar9 = 0;
        *puVar2 = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      if (uVar6 < 0xaaaaaaaaaaaaaab) {
        uVar10 = (lVar9 >> 3) * 0x5555555555555556;
        if (uVar10 < uVar6 || uVar10 + lVar8 * 0x5555555555555555 == 0) {
          uVar10 = uVar6;
        }
        if (0x555555555555554 < (ulong)((lVar9 >> 3) * -0x5555555555555555)) {
          uVar10 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar10 < 0xaaaaaaaaaaaaaab) {
          puVar11 = puVar2;
          FUN_10a559bc4();
          *puVar2 = puVar11;
          *(undefined8 **)(param_1 + 0x78) = puVar11;
          *(undefined8 **)(param_1 + 0x80) = puVar11 + uVar10 * 3;
          lVar4 = lVar4 - uVar5;
          puVar2 = puVar11;
          if (lVar4 != 0) {
            _memmove(puVar11,uVar5,lVar4);
            uVar10 = uVar5;
          }
          lVar4 = (long)puVar11 + lVar4;
          goto LAB_10a559b94;
        }
      }
      FUN_10a559bb0();
      plVar3 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if (0xaaaaaaaaaaaaaaa < uVar10) {
        func_0x000109ffded8();
        FUN_10a559ce8(plVar3 + 0x29);
        FUN_10a559ce8(plVar3 + 0x26);
        FUN_10a559ce8(plVar3 + 0x23);
        if (plVar3[0x20] != 0) {
          plVar3[0x21] = plVar3[0x20];
          _free();
        }
        FUN_10a559ce8(plVar3 + 0x1d);
        if (plVar3[0x1a] != 0) {
          plVar3[0x1b] = plVar3[0x1a];
          _free();
        }
        if (plVar3[0x17] != 0) {
          plVar3[0x18] = plVar3[0x17];
          _free();
        }
        if (plVar3[0x14] != 0) {
          plVar3[0x15] = plVar3[0x14];
          __ZdlPv();
        }
        if (plVar3[0x11] != 0) {
          plVar3[0x12] = plVar3[0x11];
          _free();
        }
        if (plVar3[0xc] != 0) {
          plVar3[0xd] = plVar3[0xc];
          __ZdlPv();
        }
        if (plVar3[9] != 0) {
          plVar3[10] = plVar3[9];
          _free();
        }
        if (plVar3[6] != 0) {
          plVar3[7] = plVar3[6];
          _free();
        }
        if (plVar3[3] != 0) {
          plVar3[4] = plVar3[3];
          _free();
        }
        if (*plVar3 != 0) {
          plVar3[1] = *plVar3;
          _free();
        }
        auVar16._8_8_ = uVar10;
        auVar16._0_8_ = plVar3;
        return auVar16;
      }
      lVar4 = uVar10 * 0x18;
      __Znwm(lVar4);
      auVar15._8_8_ = uVar10;
      auVar15._0_8_ = lVar4;
      return auVar15;
    }
  }
  else {
    do {
      if (*(long *)(lVar9 + 0x18) == lRam0000000113835858) goto LAB_10a54c7ec;
      lVar9 = lVar9 + 0x38;
    } while (lVar9 != lVar1);
  }
  auVar13._8_8_ = lVar8;
  auVar13._0_8_ = lVar4;
  return auVar13;
}



/* Entry: 10a54c8bc; end: 10a54cbab;  */

void FUN_10a54c8bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  double *pdVar2;
  long *******ppppppplVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *extraout_x8;
  long *******ppppppplVar15;
  long ******pppppplVar16;
  int *piVar17;
  long *plVar18;
  long *******ppppppplVar19;
  undefined4 uVar20;
  long *****ppppplVar21;
  ulong uVar22;
  double *pdVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long *******ppppppplVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  long ******pppppplVar32;
  long ******pppppplVar33;
  long ******pppppplVar34;
  long ******pppppplVar35;
  double dVar36;
  long ******pppppplStack_228;
  long ******pppppplStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long ******pppppplStack_200;
  undefined8 uStack_1f8;
  long *****ppppplStack_1f0;
  undefined4 uStack_1e8;
  long *****ppppplStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long ****pppplStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  int *piStack_190;
  int *piStack_188;
  undefined8 uStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_168;
  long ******apppppplStack_160 [2];
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pcStack_f0 = FUN_10a55a980;
  pcStack_e8 = FUN_10a55ab14;
  pcStack_e0 = FUN_10a55ae30;
  pcStack_d8 = FUN_10a55b4d0;
  uStack_b0 = 0x3fefae147ae147ae;
  uStack_98 = 0xc202a05f20000000;
  uStack_a0 = 0xc202a05f20000000;
  uStack_88 = 0xc202a05f20000000;
  uStack_90 = 0xc202a05f20000000;
  lStack_78 = -0x3dfd5fa0e0000000;
  uStack_80 = 0xc202a05f20000000;
  uStack_70 = 0;
  uStack_58 = 0xc202a05f20000000;
  uStack_60 = 0xc202a05f20000000;
  uStack_48 = 0xc202a05f20000000;
  uStack_50 = 0xc202a05f20000000;
  plStack_c0 = param_1;
  uStack_b8 = param_2;
  func_0x00010975687c(param_3,&pcStack_f0,&plStack_c0);
  if ((int)param_3 != 0) {
    FUN_10a56364c();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54cb90);
    (*pcVar8)();
  }
  plVar9 = (long *)*param_1;
  plVar29 = (long *)param_1[1];
  plVar28 = plVar9;
  if (plVar9 != plVar29) {
    plVar29[-2] = lStack_78;
    do {
      if ((ulong)(plVar9[1] - *plVar9) < 0x41) {
        plVar28 = plVar9;
        if ((plVar9 != plVar29) && (plVar12 = plVar9 + 8, plVar12 != plVar29)) {
          do {
            if (0x40 < (ulong)(plVar12[1] - *plVar12)) {
              FUN_10a55a8b4(plVar9,plVar12);
              FUN_10a55a32c(plVar9 + 3,plVar12 + 3);
              lVar14 = plVar12[6];
              *(int *)(plVar9 + 7) = (int)plVar12[7];
              plVar9[6] = lVar14;
              plVar9 = plVar9 + 8;
            }
            plVar12 = plVar12 + 8;
          } while (plVar12 != plVar29);
          plVar29 = (long *)param_1[1];
          plVar28 = plVar9;
        }
        break;
      }
      plVar9 = plVar9 + 8;
      plVar28 = plVar29;
    } while (plVar9 != plVar29);
  }
  FUN_10a5505bc(param_1,plVar28,plVar29);
  plVar29 = (long *)*param_1;
  plVar28 = (long *)param_1[1];
  plVar9 = plVar29;
  plVar12 = plVar28;
  if (plVar29 != plVar28) {
    do {
      lVar14 = *plVar9;
      lVar13 = plVar9[1];
      if (lVar14 != lVar13) {
        dVar36 = (double)plVar9[6];
        do {
          *(double *)(lVar14 + 0x10) = *(double *)(lVar14 + 0x10) / dVar36;
          lVar14 = lVar14 + 0x20;
        } while (lVar14 != lVar13);
      }
      plVar9 = plVar9 + 8;
      plVar18 = plVar29;
    } while (plVar9 != plVar28);
    do {
      lVar14 = *plVar18;
      if (plVar18[1] - lVar14 == 0) {
LAB_10a54cac0:
        uVar20 = 0;
      }
      else {
        uVar22 = plVar18[1] - lVar14 >> 5;
        pdVar23 = (double *)(lVar14 + 8);
        dVar36 = 0.0;
        uVar31 = 1;
        do {
          uVar6 = 0;
          if (uVar22 != 0) {
            uVar6 = uVar31 / uVar22;
          }
          pdVar2 = (double *)(lVar14 + (uVar31 - uVar6 * uVar22) * 0x20);
          dVar36 = dVar36 + (*pdVar23 + pdVar2[1]) * (*pdVar2 - pdVar23[-1]);
          pdVar23 = pdVar23 + 4;
          bVar1 = uVar31 < uVar22;
          uVar31 = (ulong)((int)uVar31 + 1);
        } while (bVar1);
        if (dVar36 <= 0.0) {
          if (0.0 <= dVar36) goto LAB_10a54cac0;
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = 1;
        }
      }
      *(undefined4 *)(plVar18 + 7) = uVar20;
      plVar18 = plVar18 + 8;
    } while (plVar18 != plVar28);
    do {
      plVar9 = plVar29 + 8;
      if ((int)plVar29[7] == 0) {
        plVar12 = plVar29;
        if ((plVar29 != plVar28) && (plVar9 != plVar28)) {
          do {
            if ((int)plVar9[7] != 0) {
              FUN_10a55a8b4(plVar29,plVar9);
              FUN_10a55a32c(plVar29 + 3,plVar9 + 3);
              lVar14 = plVar9[6];
              *(int *)(plVar29 + 7) = (int)plVar9[7];
              plVar29[6] = lVar14;
              plVar29 = plVar29 + 8;
            }
            plVar9 = plVar9 + 8;
          } while (plVar9 != plVar28);
          plVar28 = (long *)param_1[1];
          plVar12 = plVar29;
        }
        break;
      }
      plVar29 = plVar9;
    } while (plVar9 != plVar28);
  }
  plVar9 = param_1;
  FUN_10a5505bc(param_1,plVar12,plVar28);
  iVar11 = (int)plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  plStack_c0 = param_1;
  FUN_10a34ef08(&plStack_c0);
  __Unwind_Resume();
  pppppplStack_178 = (long ******)0x0;
  pppppplStack_170 = (long ******)0x0;
  pppppplStack_168 = (long ******)0x0;
  lVar14 = *plVar9;
  lVar13 = plVar9[1];
  uVar31 = lVar13 - lVar14 >> 6;
  func_0x00010737fadc(&piStack_190,uVar31);
  if (lVar13 != lVar14) {
    if (0xaaaaaaaaaaaaaaa < uVar31) {
      FUN_10a55a904();
LAB_10a54d3a8:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54d3ac);
      (*pcVar8)();
    }
    pppppplStack_200 = (long ******)&pppppplStack_178;
    pppppplVar32 = (long ******)(uVar31 * 0x18);
    pppppplVar33 = pppppplVar32;
    __Znwm();
    ppppppplVar27 = (long *******)(pppppplVar33 + uVar31 * 3);
    pppppplStack_220 = pppppplVar33;
    pppppplStack_218 = pppppplVar33;
    pppppplStack_210 = pppppplVar33;
    pppppplStack_208 = (long ******)ppppppplVar27;
    do {
      func_0x000105007b50(pppppplVar33,&piStack_190);
      pppppplVar34 = pppppplStack_170;
      pppppplVar33 = pppppplVar33 + 3;
      pppppplVar32 = pppppplVar32 + -3;
    } while (pppppplVar32 != (long ******)0x0);
    ppppppplVar3 = (long *******)
                   ((long)pppppplStack_218 + ((long)pppppplStack_178 - (long)pppppplStack_170));
    ppppppplVar15 = ppppppplVar3;
    ppppppplVar19 = (long *******)pppppplStack_178;
    pppppplStack_210 = (long ******)ppppppplVar27;
    if ((long)pppppplStack_178 - (long)pppppplStack_170 != 0) {
      do {
        *ppppppplVar15 = *ppppppplVar19;
        pppppplVar33 = ppppppplVar19[1];
        ppppppplVar15[2] = ppppppplVar19[2];
        ppppppplVar15[1] = pppppplVar33;
        *ppppppplVar19 = (long ******)0x0;
        ppppppplVar19[1] = (long ******)0x0;
        ppppppplVar19[2] = (long ******)0x0;
        ppppppplVar19 = ppppppplVar19 + 3;
        ppppppplVar15 = ppppppplVar15 + 3;
        ppppppplVar27 = (long *******)pppppplStack_178;
      } while (ppppppplVar19 != (long *******)pppppplStack_170);
      do {
        if (*ppppppplVar27 != (long ******)0x0) {
          __ZdlPv();
        }
        ppppppplVar27 = ppppppplVar27 + 3;
      } while (ppppppplVar27 != (long *******)pppppplVar34);
    }
    pppppplVar33 = pppppplStack_168;
    pppppplStack_168 = pppppplStack_208;
    pppppplStack_208 = pppppplVar33;
    pppppplStack_220 = pppppplStack_178;
    pppppplStack_218 = pppppplStack_178;
    pppppplStack_170 = pppppplStack_210;
    pppppplStack_210 = pppppplStack_178;
    pppppplStack_178 = (long ******)ppppppplVar3;
    func_0x0001078dbb0c(&pppppplStack_220);
  }
  if (piStack_190 != (int *)0x0) {
    __ZdlPv();
  }
  lVar14 = *plVar9;
  pppppplVar33 = (long ******)(plVar9[1] - lVar14 >> 6);
  if (plVar9[1] - lVar14 == 0) {
    pppppplStack_228 = pppppplStack_170;
  }
  else {
    pppppplVar32 = (long ******)0x0;
    do {
      pppppplVar34 = (long ******)0x0;
      plVar29 = (long *)(lVar14 + (long)pppppplVar32 * 0x40);
      pppppplStack_228 = pppppplStack_170;
      pppppplVar35 = (long ******)
                     (((long)pppppplStack_170 - (long)pppppplStack_178 >> 3) * -0x5555555555555555);
      ppppppplVar27 = (long *******)(pppppplStack_178 + (long)pppppplVar32 * 3);
      do {
        if ((int)pppppplVar32 != (int)pppppplVar34) {
          if (plVar29[1] == *plVar29) goto LAB_10a54d3a8;
          puVar4 = (undefined8 *)(lVar14 + (long)pppppplVar34 * 0x40);
          uVar10 = *puVar4;
          FUN_10a550904(uVar10,puVar4[1]);
          if ((pppppplVar35 < pppppplVar32 || (long)pppppplVar35 - (long)pppppplVar32 == 0) ||
             (ppppppplVar27[1] <= pppppplVar34)) goto LAB_10a54d3a8;
          pppppplVar16 = *ppppppplVar27;
          uVar31 = (ulong)pppppplVar34 >> 6;
          uVar22 = 1L << ((ulong)pppppplVar34 & 0x3f);
          if ((int)uVar10 == 0) {
            ppppplVar21 = (long *****)((ulong)pppppplVar16[uVar31] & (uVar22 ^ 0xffffffffffffffff));
          }
          else {
            ppppplVar21 = (long *****)((ulong)pppppplVar16[uVar31] | uVar22);
          }
          pppppplVar16[uVar31] = ppppplVar21;
        }
        pppppplVar34 = (long ******)(ulong)((int)pppppplVar34 + 1);
      } while (pppppplVar34 < pppppplVar33);
      pppppplVar32 = (long ******)(ulong)((int)pppppplVar32 + 1);
    } while (pppppplVar32 < pppppplVar33);
  }
  piStack_190 = (int *)0x0;
  piStack_188 = (int *)0x0;
  uStack_180 = 0;
  ppppppplVar27 = (long *******)pppppplStack_178;
  if (pppppplStack_178 != pppppplStack_228) {
    do {
      pppppplVar33 = *ppppppplVar27;
      pppppplVar32 = ppppppplVar27[1];
      if (pppppplVar32 < (long ******)0x40) {
        iVar24 = 0;
      }
      else {
        iVar24 = 0;
        pppppplVar34 = pppppplVar33;
        do {
          pppppplVar33 = pppppplVar34 + 1;
          ppppplVar21 = *pppppplVar34;
          iVar24 = (uint)(byte)(POPCOUNT((char)ppppplVar21) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 8)) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 0x10)) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 0x18)) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 0x20)) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 0x28)) +
                                POPCOUNT((char)((ulong)ppppplVar21 >> 0x30)) +
                               POPCOUNT((char)((ulong)ppppplVar21 >> 0x38))) + iVar24;
          pppppplVar32 = pppppplVar32 + -8;
          pppppplVar34 = pppppplVar33;
        } while ((long ******)0x3f < pppppplVar32);
      }
      if (pppppplVar32 != (long ******)0x0) {
        uVar31 = (ulong)*pppppplVar33 & 0xffffffffffffffffU >> (-(long)pppppplVar32 & 0x3fU);
        iVar24 = (uint)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                              POPCOUNT((char)(uVar31 >> 0x10)) + POPCOUNT((char)(uVar31 >> 0x18)) +
                              POPCOUNT((char)(uVar31 >> 0x20)) + POPCOUNT((char)(uVar31 >> 0x28)) +
                              POPCOUNT((char)(uVar31 >> 0x30)) + POPCOUNT((char)(uVar31 >> 0x38))) +
                 iVar24;
      }
      pppppplStack_220 = (long ******)CONCAT44(pppppplStack_220._4_4_,iVar24);
      FUN_109febd04(&piStack_190,&pppppplStack_220);
      ppppppplVar27 = ppppppplVar27 + 3;
    } while (ppppppplVar27 != (long *******)pppppplStack_228);
    pppppplVar33 = (long ******)(plVar9[1] - *plVar9 >> 6);
  }
  pppplStack_1b0 = (long ****)0x0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  pppppplStack_220 = (long ******)CONCAT44(pppppplStack_220._4_4_,0x80000000);
  FUN_10a4094c0(&lStack_1c8,pppppplVar33,&pppppplStack_220);
  piVar17 = piStack_190;
  if (iVar11 == 1) {
    for (; piVar17 != piStack_188; piVar17 = piVar17 + 1) {
      *piVar17 = *piVar17 + -1;
    }
  }
  else if (iVar11 == 2) {
    lVar14 = *plVar9;
    lVar13 = plVar9[1];
    if (lVar13 != lVar14) {
      lVar30 = 0;
      uVar31 = 0;
      do {
        if ((ulong)((long)piStack_188 - (long)piStack_190 >> 2) <= uVar31) goto LAB_10a54d3a8;
        if (piStack_190[uVar31] == 0) {
          pppppplStack_208 = (long ******)0x0;
          pppppplStack_210 = (long ******)0x0;
          uStack_1f8 = 0;
          pppppplStack_200 = (long ******)0x0;
          pppppplStack_218 = (long ******)0x0;
          pppppplStack_220 = (long ******)0x0;
          ppppplStack_1f0 = (long *****)0xbff0000000000000;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          ppppppplVar27 = (long *******)(lVar14 + lVar30);
          ppppplStack_1e0 = (long *****)0x0;
          if (ppppppplVar27 != &pppppplStack_220) {
            FUN_10a55a37c(&pppppplStack_220,*ppppppplVar27,ppppppplVar27[1],
                          (long)ppppppplVar27[1] - (long)*ppppppplVar27 >> 5);
            lVar13 = *(long *)(lVar14 + lVar30 + 0x18);
            lVar14 = *(long *)(lVar14 + lVar30 + 0x20);
            func_0x00010a55a4e0(&pppppplStack_208,lVar13,lVar14,lVar14 - lVar13 >> 4);
          }
          ppppplStack_1f0 = (long *****)ppppppplVar27[6];
          uStack_1e8 = *(undefined4 *)(ppppppplVar27 + 7);
          FUN_10a55069c(&pppplStack_1b0,&pppppplStack_220);
          if ((ulong)(lStack_1c0 - lStack_1c8 >> 2) <= uVar31) goto LAB_10a54d3a8;
          *(int *)(lStack_1c8 + uVar31 * 4) =
               (int)((ulong)(lStack_1a8 - (long)pppplStack_1b0) >> 3) * -0x45d1745d + -1;
          apppppplStack_160[0] = &ppppplStack_1e0;
          FUN_10a34ef08(apppppplStack_160);
          if ((long *******)pppppplStack_208 != (long *******)0x0) {
            pppppplStack_200 = pppppplStack_208;
            _free();
          }
          if ((long *******)pppppplStack_220 != (long *******)0x0) {
            pppppplStack_218 = pppppplStack_220;
            _free();
          }
          lVar14 = *plVar9;
          lVar13 = plVar9[1];
        }
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 0x40;
      } while (uVar31 < (ulong)(lVar13 - lVar14 >> 6));
    }
    goto LAB_10a54d260;
  }
  lVar14 = *plVar9;
  lVar13 = plVar9[1];
  if (lVar13 != lVar14) {
    lVar30 = 0;
    uVar31 = 0;
    do {
      if ((ulong)((long)piStack_188 - (long)piStack_190 >> 2) <= uVar31) goto LAB_10a54d3a8;
      if ((piStack_190[uVar31] & 1U) == 0) {
        pppppplStack_208 = (long ******)0x0;
        pppppplStack_210 = (long ******)0x0;
        uStack_1f8 = 0;
        pppppplStack_200 = (long ******)0x0;
        pppppplStack_218 = (long ******)0x0;
        pppppplStack_220 = (long ******)0x0;
        ppppplStack_1f0 = (long *****)0xbff0000000000000;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        ppppppplVar27 = (long *******)(lVar14 + lVar30);
        ppppplStack_1e0 = (long *****)0x0;
        if (ppppppplVar27 != &pppppplStack_220) {
          FUN_10a55a37c(&pppppplStack_220,*ppppppplVar27,ppppppplVar27[1],
                        (long)ppppppplVar27[1] - (long)*ppppppplVar27 >> 5);
          lVar13 = *(long *)(lVar14 + lVar30 + 0x18);
          lVar14 = *(long *)(lVar14 + lVar30 + 0x20);
          func_0x00010a55a4e0(&pppppplStack_208,lVar13,lVar14,lVar14 - lVar13 >> 4);
        }
        ppppplStack_1f0 = (long *****)ppppppplVar27[6];
        uStack_1e8 = *(undefined4 *)(ppppppplVar27 + 7);
        FUN_10a55069c(&pppplStack_1b0,&pppppplStack_220);
        if ((ulong)(lStack_1c0 - lStack_1c8 >> 2) <= uVar31) goto LAB_10a54d3a8;
        *(int *)(lStack_1c8 + uVar31 * 4) =
             (int)((ulong)(lStack_1a8 - (long)pppplStack_1b0) >> 3) * -0x45d1745d + -1;
        apppppplStack_160[0] = &ppppplStack_1e0;
        FUN_10a34ef08(apppppplStack_160);
        if ((long *******)pppppplStack_208 != (long *******)0x0) {
          pppppplStack_200 = pppppplStack_208;
          _free();
        }
        if ((long *******)pppppplStack_220 != (long *******)0x0) {
          pppppplStack_218 = pppppplStack_220;
          _free();
        }
        lVar14 = *plVar9;
        lVar13 = plVar9[1];
      }
      uVar31 = uVar31 + 1;
      lVar30 = lVar30 + 0x40;
    } while (uVar31 < (ulong)(lVar13 - lVar14 >> 6));
  }
  lVar30 = lVar13 - lVar14;
  if (lVar30 != 0) {
    pppppplVar33 = (long ******)0x0;
    do {
      pppppplVar32 = (long ******)(lVar30 >> 6);
      pppppplVar34 = (long ******)((long)piStack_188 - (long)piStack_190 >> 2);
      if (pppppplVar34 <= pppppplVar33) goto LAB_10a54d3a8;
      if ((piStack_190[(long)pppppplVar33] & 0x80000001U) == 1) {
        pppppplVar35 = (long ******)
                       (((long)pppppplStack_170 - (long)pppppplStack_178 >> 3) * -0x5555555555555555
                       );
        if (pppppplVar35 < pppppplVar33 || (long)pppppplVar35 - (long)pppppplVar33 == 0)
        goto LAB_10a54d3a8;
        pppppplVar35 = (long ******)0x0;
        pppppplVar16 = pppppplVar32;
        if (pppppplVar32 < (long ******)0x2) {
          pppppplVar16 = (long ******)0x1;
        }
        iVar26 = -0x80000000;
        iVar24 = -0x80000000;
        do {
          if ((long ******)(pppppplStack_178 + (long)pppppplVar33 * 3)[1] == pppppplVar35)
          goto LAB_10a54d3a8;
          iVar7 = iVar26;
          iVar25 = iVar24;
          if (((ulong)pppppplStack_178[(long)pppppplVar33 * 3][(ulong)pppppplVar35 >> 6] >>
               ((ulong)pppppplVar35 & 0x3f) & 1) != 0) {
            if (pppppplVar34 <= pppppplVar35) goto LAB_10a54d3a8;
            iVar7 = piStack_190[(long)pppppplVar35];
            iVar25 = (int)pppppplVar35;
            if (piStack_190[(long)pppppplVar35] <= iVar26) {
              iVar7 = iVar26;
              iVar25 = iVar24;
            }
          }
          iVar26 = iVar7;
          pppppplVar35 = (long ******)((long)pppppplVar35 + 1);
          iVar24 = iVar25;
        } while (pppppplVar16 != pppppplVar35);
        pppppplVar34 = (long ******)(long)iVar25;
        if ((long ******)(lStack_1c0 - lStack_1c8 >> 2) <= pppppplVar34) goto LAB_10a54d3a8;
        iVar24 = *(int *)(lStack_1c8 + (long)pppppplVar34 * 4);
        if (iVar24 == -0x80000000) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f660fea,&UNK_10f66102f,0x83,&UNK_10f6610bd);
          }
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          goto LAB_10a54d27c;
        }
        if (pppppplVar32 <= pppppplVar34) goto LAB_10a54d3a8;
        if ((*(int *)(lVar14 + (long)pppppplVar33 * 0x40 + 0x38) == 1) ==
            (*(int *)(lVar14 + (long)pppppplVar34 * 0x40 + 0x38) == 1)) {
          pppppplStack_220 = (long ******)0x0;
          pppppplStack_218 = (long ******)0x0;
          pppppplStack_210 = (long ******)0x0;
          FUN_10a35e518(&pppppplStack_220,lVar14);
          FUN_10a550088(extraout_x8,&pppppplStack_220,iVar11);
          apppppplStack_160[0] = (long ******)&pppppplStack_220;
          FUN_10a34ef08(apppppplStack_160);
          goto LAB_10a54d27c;
        }
        uVar31 = (lStack_1a8 - (long)pppplStack_1b0 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar31 < (ulong)(long)iVar24 || uVar31 - (long)iVar24 == 0) goto LAB_10a54d3a8;
        FUN_10a5509b8(pppplStack_1b0 + (long)iVar24 * 0xb + 8);
        lVar14 = *plVar9;
        lVar13 = plVar9[1];
      }
      pppppplVar33 = (long ******)((long)pppppplVar33 + 1);
      lVar30 = lVar13 - lVar14;
    } while (pppppplVar33 < (long ******)(lVar30 >> 6));
  }
LAB_10a54d260:
  extraout_x8[1] = lStack_1a8;
  *extraout_x8 = (long)pppplStack_1b0;
  extraout_x8[2] = lStack_1a0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  pppplStack_1b0 = (long ****)0x0;
LAB_10a54d27c:
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  pppppplStack_220 = (long ******)&pppplStack_1b0;
  FUN_10a34ee04(&pppppplStack_220);
  if (piStack_190 != (int *)0x0) {
    piStack_188 = piStack_190;
    __ZdlPv();
  }
  FUN_10a55a918(&pppppplStack_178);
  lVar13 = extraout_x8[1];
  for (lVar14 = *extraout_x8; lVar14 != lVar13; lVar14 = lVar14 + 0x58) {
    if (*(int *)(lVar14 + 0x38) != 1) {
      FUN_10a550adc(lVar14);
    }
    lVar5 = *(long *)(lVar14 + 0x48);
    for (lVar30 = *(long *)(lVar14 + 0x40); lVar30 != lVar5; lVar30 = lVar30 + 0x40) {
      if (*(int *)(lVar30 + 0x38) == 1) {
        FUN_10a550adc(lVar30);
      }
    }
  }
  return;
}



/* Entry: 10a54cbac; end: 10a54d45b;  */

void FUN_10a54cbac(long *param_1,long *param_2,int param_3)

{
  long *****ppppplVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  int *piVar11;
  long *****ppppplVar12;
  ulong uVar13;
  long ***ppplVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *****ppppplVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long ****pppplVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  undefined8 uStack_108;
  long ***ppplStack_100;
  undefined4 uStack_f8;
  long ***ppplStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long **pplStack_c0;
  long lStack_b8;
  long lStack_b0;
  int *piStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ****apppplStack_70 [2];
  
  pppplStack_88 = (long ****)0x0;
  pppplStack_80 = (long ****)0x0;
  pppplStack_78 = (long ****)0x0;
  lVar19 = *param_2;
  lVar8 = param_2[1];
  uVar21 = lVar8 - lVar19 >> 6;
  func_0x00010737fadc(&piStack_a0,uVar21);
  if (lVar8 != lVar19) {
    if (0xaaaaaaaaaaaaaaa < uVar21) {
      FUN_10a55a904();
LAB_10a54d3a8:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a54d3ac);
      (*pcVar6)();
    }
    pppplStack_110 = (long ****)&pppplStack_88;
    pppplVar22 = (long ****)(uVar21 * 0x18);
    pppplVar23 = pppplVar22;
    __Znwm();
    ppppplVar18 = (long *****)(pppplVar23 + uVar21 * 3);
    pppplStack_130 = pppplVar23;
    pppplStack_128 = pppplVar23;
    pppplStack_120 = pppplVar23;
    pppplStack_118 = (long ****)ppppplVar18;
    do {
      func_0x000105007b50(pppplVar23,&piStack_a0);
      pppplVar24 = pppplStack_80;
      pppplVar23 = pppplVar23 + 3;
      pppplVar22 = pppplVar22 + -3;
    } while (pppplVar22 != (long ****)0x0);
    ppppplVar1 = (long *****)((long)pppplStack_128 + ((long)pppplStack_88 - (long)pppplStack_80));
    ppppplVar9 = ppppplVar1;
    ppppplVar12 = (long *****)pppplStack_88;
    pppplStack_120 = (long ****)ppppplVar18;
    if ((long)pppplStack_88 - (long)pppplStack_80 != 0) {
      do {
        *ppppplVar9 = *ppppplVar12;
        pppplVar23 = ppppplVar12[1];
        ppppplVar9[2] = ppppplVar12[2];
        ppppplVar9[1] = pppplVar23;
        *ppppplVar12 = (long ****)0x0;
        ppppplVar12[1] = (long ****)0x0;
        ppppplVar12[2] = (long ****)0x0;
        ppppplVar12 = ppppplVar12 + 3;
        ppppplVar9 = ppppplVar9 + 3;
        ppppplVar18 = (long *****)pppplStack_88;
      } while (ppppplVar12 != (long *****)pppplStack_80);
      do {
        if (*ppppplVar18 != (long ****)0x0) {
          __ZdlPv();
        }
        ppppplVar18 = ppppplVar18 + 3;
      } while (ppppplVar18 != (long *****)pppplVar24);
    }
    pppplVar23 = pppplStack_78;
    pppplStack_78 = pppplStack_118;
    pppplStack_118 = pppplVar23;
    pppplStack_130 = pppplStack_88;
    pppplStack_128 = pppplStack_88;
    pppplStack_80 = pppplStack_120;
    pppplStack_120 = pppplStack_88;
    pppplStack_88 = (long ****)ppppplVar1;
    func_0x0001078dbb0c(&pppplStack_130);
  }
  if (piStack_a0 != (int *)0x0) {
    __ZdlPv();
  }
  lVar19 = *param_2;
  pppplVar23 = (long ****)(param_2[1] - lVar19 >> 6);
  if (param_2[1] - lVar19 == 0) {
    pppplStack_138 = pppplStack_80;
  }
  else {
    pppplVar22 = (long ****)0x0;
    do {
      pppplVar24 = (long ****)0x0;
      plVar2 = (long *)(lVar19 + (long)pppplVar22 * 0x40);
      pppplStack_138 = pppplStack_80;
      pppplVar25 = (long ****)
                   (((long)pppplStack_80 - (long)pppplStack_88 >> 3) * -0x5555555555555555);
      ppppplVar18 = (long *****)(pppplStack_88 + (long)pppplVar22 * 3);
      do {
        if ((int)pppplVar22 != (int)pppplVar24) {
          if (plVar2[1] == *plVar2) goto LAB_10a54d3a8;
          puVar3 = (undefined8 *)(lVar19 + (long)pppplVar24 * 0x40);
          uVar7 = *puVar3;
          FUN_10a550904(uVar7,puVar3[1]);
          if ((pppplVar25 < pppplVar22 || (long)pppplVar25 - (long)pppplVar22 == 0) ||
             (ppppplVar18[1] <= pppplVar24)) goto LAB_10a54d3a8;
          pppplVar10 = *ppppplVar18;
          uVar21 = (ulong)pppplVar24 >> 6;
          uVar13 = 1L << ((ulong)pppplVar24 & 0x3f);
          if ((int)uVar7 == 0) {
            ppplVar14 = (long ***)((ulong)pppplVar10[uVar21] & (uVar13 ^ 0xffffffffffffffff));
          }
          else {
            ppplVar14 = (long ***)((ulong)pppplVar10[uVar21] | uVar13);
          }
          pppplVar10[uVar21] = ppplVar14;
        }
        pppplVar24 = (long ****)(ulong)((int)pppplVar24 + 1);
      } while (pppplVar24 < pppplVar23);
      pppplVar22 = (long ****)(ulong)((int)pppplVar22 + 1);
    } while (pppplVar22 < pppplVar23);
  }
  piStack_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  uStack_90 = 0;
  ppppplVar18 = (long *****)pppplStack_88;
  if (pppplStack_88 != pppplStack_138) {
    do {
      pppplVar23 = *ppppplVar18;
      pppplVar22 = ppppplVar18[1];
      if (pppplVar22 < (long ****)0x40) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0;
        pppplVar24 = pppplVar23;
        do {
          pppplVar23 = pppplVar24 + 1;
          ppplVar14 = *pppplVar24;
          iVar15 = (uint)(byte)(POPCOUNT((char)ppplVar14) + POPCOUNT((char)((ulong)ppplVar14 >> 8))
                                + POPCOUNT((char)((ulong)ppplVar14 >> 0x10)) +
                                POPCOUNT((char)((ulong)ppplVar14 >> 0x18)) +
                                POPCOUNT((char)((ulong)ppplVar14 >> 0x20)) +
                                POPCOUNT((char)((ulong)ppplVar14 >> 0x28)) +
                                POPCOUNT((char)((ulong)ppplVar14 >> 0x30)) +
                               POPCOUNT((char)((ulong)ppplVar14 >> 0x38))) + iVar15;
          pppplVar22 = pppplVar22 + -8;
          pppplVar24 = pppplVar23;
        } while ((long ****)0x3f < pppplVar22);
      }
      if (pppplVar22 != (long ****)0x0) {
        uVar21 = (ulong)*pppplVar23 & 0xffffffffffffffffU >> (-(long)pppplVar22 & 0x3fU);
        iVar15 = (uint)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)) +
                              POPCOUNT((char)(uVar21 >> 0x10)) + POPCOUNT((char)(uVar21 >> 0x18)) +
                              POPCOUNT((char)(uVar21 >> 0x20)) + POPCOUNT((char)(uVar21 >> 0x28)) +
                              POPCOUNT((char)(uVar21 >> 0x30)) + POPCOUNT((char)(uVar21 >> 0x38))) +
                 iVar15;
      }
      pppplStack_130 = (long ****)CONCAT44(pppplStack_130._4_4_,iVar15);
      FUN_109febd04(&piStack_a0,&pppplStack_130);
      ppppplVar18 = ppppplVar18 + 3;
    } while (ppppplVar18 != (long *****)pppplStack_138);
    pppplVar23 = (long ****)(param_2[1] - *param_2 >> 6);
  }
  pplStack_c0 = (long **)0x0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  pppplStack_130 = (long ****)CONCAT44(pppplStack_130._4_4_,0x80000000);
  FUN_10a4094c0(&lStack_d8,pppplVar23,&pppplStack_130);
  piVar11 = piStack_a0;
  if (param_3 == 1) {
    for (; piVar11 != piStack_98; piVar11 = piVar11 + 1) {
      *piVar11 = *piVar11 + -1;
    }
  }
  else if (param_3 == 2) {
    lVar19 = *param_2;
    lVar8 = param_2[1];
    if (lVar8 != lVar19) {
      lVar20 = 0;
      uVar21 = 0;
      do {
        if ((ulong)((long)piStack_98 - (long)piStack_a0 >> 2) <= uVar21) goto LAB_10a54d3a8;
        if (piStack_a0[uVar21] == 0) {
          pppplStack_118 = (long ****)0x0;
          pppplStack_120 = (long ****)0x0;
          uStack_108 = 0;
          pppplStack_110 = (long ****)0x0;
          pppplStack_128 = (long ****)0x0;
          pppplStack_130 = (long ****)0x0;
          ppplStack_100 = (long ***)0xbff0000000000000;
          uStack_e8 = 0;
          uStack_e0 = 0;
          ppppplVar18 = (long *****)(lVar19 + lVar20);
          ppplStack_f0 = (long ***)0x0;
          if (ppppplVar18 != &pppplStack_130) {
            FUN_10a55a37c(&pppplStack_130,*ppppplVar18,ppppplVar18[1],
                          (long)ppppplVar18[1] - (long)*ppppplVar18 >> 5);
            lVar8 = *(long *)(lVar19 + lVar20 + 0x18);
            lVar19 = *(long *)(lVar19 + lVar20 + 0x20);
            func_0x00010a55a4e0(&pppplStack_118,lVar8,lVar19,lVar19 - lVar8 >> 4);
          }
          ppplStack_100 = (long ***)ppppplVar18[6];
          uStack_f8 = *(undefined4 *)(ppppplVar18 + 7);
          FUN_10a55069c(&pplStack_c0,&pppplStack_130);
          if ((ulong)(lStack_d0 - lStack_d8 >> 2) <= uVar21) goto LAB_10a54d3a8;
          *(int *)(lStack_d8 + uVar21 * 4) =
               (int)((ulong)(lStack_b8 - (long)pplStack_c0) >> 3) * -0x45d1745d + -1;
          apppplStack_70[0] = &ppplStack_f0;
          FUN_10a34ef08(apppplStack_70);
          if ((long *****)pppplStack_118 != (long *****)0x0) {
            pppplStack_110 = pppplStack_118;
            _free();
          }
          if ((long *****)pppplStack_130 != (long *****)0x0) {
            pppplStack_128 = pppplStack_130;
            _free();
          }
          lVar19 = *param_2;
          lVar8 = param_2[1];
        }
        uVar21 = uVar21 + 1;
        lVar20 = lVar20 + 0x40;
      } while (uVar21 < (ulong)(lVar8 - lVar19 >> 6));
    }
    goto LAB_10a54d260;
  }
  lVar19 = *param_2;
  lVar8 = param_2[1];
  if (lVar8 != lVar19) {
    lVar20 = 0;
    uVar21 = 0;
    do {
      if ((ulong)((long)piStack_98 - (long)piStack_a0 >> 2) <= uVar21) goto LAB_10a54d3a8;
      if ((piStack_a0[uVar21] & 1U) == 0) {
        pppplStack_118 = (long ****)0x0;
        pppplStack_120 = (long ****)0x0;
        uStack_108 = 0;
        pppplStack_110 = (long ****)0x0;
        pppplStack_128 = (long ****)0x0;
        pppplStack_130 = (long ****)0x0;
        ppplStack_100 = (long ***)0xbff0000000000000;
        uStack_e8 = 0;
        uStack_e0 = 0;
        ppppplVar18 = (long *****)(lVar19 + lVar20);
        ppplStack_f0 = (long ***)0x0;
        if (ppppplVar18 != &pppplStack_130) {
          FUN_10a55a37c(&pppplStack_130,*ppppplVar18,ppppplVar18[1],
                        (long)ppppplVar18[1] - (long)*ppppplVar18 >> 5);
          lVar8 = *(long *)(lVar19 + lVar20 + 0x18);
          lVar19 = *(long *)(lVar19 + lVar20 + 0x20);
          func_0x00010a55a4e0(&pppplStack_118,lVar8,lVar19,lVar19 - lVar8 >> 4);
        }
        ppplStack_100 = (long ***)ppppplVar18[6];
        uStack_f8 = *(undefined4 *)(ppppplVar18 + 7);
        FUN_10a55069c(&pplStack_c0,&pppplStack_130);
        if ((ulong)(lStack_d0 - lStack_d8 >> 2) <= uVar21) goto LAB_10a54d3a8;
        *(int *)(lStack_d8 + uVar21 * 4) =
             (int)((ulong)(lStack_b8 - (long)pplStack_c0) >> 3) * -0x45d1745d + -1;
        apppplStack_70[0] = &ppplStack_f0;
        FUN_10a34ef08(apppplStack_70);
        if ((long *****)pppplStack_118 != (long *****)0x0) {
          pppplStack_110 = pppplStack_118;
          _free();
        }
        if ((long *****)pppplStack_130 != (long *****)0x0) {
          pppplStack_128 = pppplStack_130;
          _free();
        }
        lVar19 = *param_2;
        lVar8 = param_2[1];
      }
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x40;
    } while (uVar21 < (ulong)(lVar8 - lVar19 >> 6));
  }
  lVar20 = lVar8 - lVar19;
  if (lVar20 != 0) {
    pppplVar23 = (long ****)0x0;
    do {
      pppplVar22 = (long ****)(lVar20 >> 6);
      pppplVar24 = (long ****)((long)piStack_98 - (long)piStack_a0 >> 2);
      if (pppplVar24 <= pppplVar23) goto LAB_10a54d3a8;
      if ((piStack_a0[(long)pppplVar23] & 0x80000001U) == 1) {
        pppplVar25 = (long ****)
                     (((long)pppplStack_80 - (long)pppplStack_88 >> 3) * -0x5555555555555555);
        if (pppplVar25 < pppplVar23 || (long)pppplVar25 - (long)pppplVar23 == 0) goto LAB_10a54d3a8;
        pppplVar25 = (long ****)0x0;
        pppplVar10 = pppplVar22;
        if (pppplVar22 < (long ****)0x2) {
          pppplVar10 = (long ****)0x1;
        }
        iVar17 = -0x80000000;
        iVar15 = -0x80000000;
        do {
          if ((long ****)(pppplStack_88 + (long)pppplVar23 * 3)[1] == pppplVar25)
          goto LAB_10a54d3a8;
          iVar5 = iVar17;
          iVar16 = iVar15;
          if (((ulong)pppplStack_88[(long)pppplVar23 * 3][(ulong)pppplVar25 >> 6] >>
               ((ulong)pppplVar25 & 0x3f) & 1) != 0) {
            if (pppplVar24 <= pppplVar25) goto LAB_10a54d3a8;
            iVar5 = piStack_a0[(long)pppplVar25];
            iVar16 = (int)pppplVar25;
            if (piStack_a0[(long)pppplVar25] <= iVar17) {
              iVar5 = iVar17;
              iVar16 = iVar15;
            }
          }
          iVar17 = iVar5;
          pppplVar25 = (long ****)((long)pppplVar25 + 1);
          iVar15 = iVar16;
        } while (pppplVar10 != pppplVar25);
        pppplVar24 = (long ****)(long)iVar16;
        if ((long ****)(lStack_d0 - lStack_d8 >> 2) <= pppplVar24) goto LAB_10a54d3a8;
        iVar15 = *(int *)(lStack_d8 + (long)pppplVar24 * 4);
        if (iVar15 == -0x80000000) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f660fea,&UNK_10f66102f,0x83,&UNK_10f6610bd);
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          goto LAB_10a54d27c;
        }
        if (pppplVar22 <= pppplVar24) goto LAB_10a54d3a8;
        if ((*(int *)(lVar19 + (long)pppplVar23 * 0x40 + 0x38) == 1) ==
            (*(int *)(lVar19 + (long)pppplVar24 * 0x40 + 0x38) == 1)) {
          pppplStack_130 = (long ****)0x0;
          pppplStack_128 = (long ****)0x0;
          pppplStack_120 = (long ****)0x0;
          FUN_10a35e518(&pppplStack_130,lVar19);
          FUN_10a550088(param_1,&pppplStack_130,param_3);
          apppplStack_70[0] = (long ****)&pppplStack_130;
          FUN_10a34ef08(apppplStack_70);
          goto LAB_10a54d27c;
        }
        uVar21 = (lStack_b8 - (long)pplStack_c0 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar21 < (ulong)(long)iVar15 || uVar21 - (long)iVar15 == 0) goto LAB_10a54d3a8;
        FUN_10a5509b8(pplStack_c0 + (long)iVar15 * 0xb + 8);
        lVar19 = *param_2;
        lVar8 = param_2[1];
      }
      pppplVar23 = (long ****)((long)pppplVar23 + 1);
      lVar20 = lVar8 - lVar19;
    } while (pppplVar23 < (long ****)(lVar20 >> 6));
  }
LAB_10a54d260:
  param_1[1] = lStack_b8;
  *param_1 = (long)pplStack_c0;
  param_1[2] = lStack_b0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  pplStack_c0 = (long **)0x0;
LAB_10a54d27c:
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  pppplStack_130 = (long ****)&pplStack_c0;
  FUN_10a34ee04(&pppplStack_130);
  if (piStack_a0 != (int *)0x0) {
    piStack_98 = piStack_a0;
    __ZdlPv();
  }
  FUN_10a55a918(&pppplStack_88);
  lVar8 = param_1[1];
  for (lVar19 = *param_1; lVar19 != lVar8; lVar19 = lVar19 + 0x58) {
    if (*(int *)(lVar19 + 0x38) != 1) {
      FUN_10a550adc(lVar19);
    }
    lVar4 = *(long *)(lVar19 + 0x48);
    for (lVar20 = *(long *)(lVar19 + 0x40); lVar20 != lVar4; lVar20 = lVar20 + 0x40) {
      if (*(int *)(lVar20 + 0x38) == 1) {
        FUN_10a550adc(lVar20);
      }
    }
  }
  return;
}



/* Entry: 10a54d45c; end: 10a54dd1f;  */

void FUN_10a54d45c(undefined8 param_1,double param_2,long *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  double *pdVar3;
  undefined8 *puVar4;
  uint uVar5;
  double ***pppdVar6;
  undefined8 uVar7;
  double **ppdVar8;
  code *pcVar9;
  double ****ppppdVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double ****ppppdVar14;
  double ****ppppdVar15;
  uint uVar16;
  double *pdVar17;
  ulong uVar19;
  ulong uVar20;
  double *pdVar21;
  ulong uVar22;
  undefined8 *puVar23;
  double ****ppppdVar24;
  double ****ppppdVar25;
  long *plVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  int iVar33;
  double ***pppdVar34;
  int iVar35;
  double ***pppdVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double **ppdStack_f0;
  double ***pppdStack_b8;
  double ***pppdStack_b0;
  double ***pppdStack_a8;
  double dStack_a0;
  double dStack_98;
  double **ppdStack_90;
  double **ppdStack_88;
  long lStack_78;
  double *pdVar18;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = (double *)*param_3;
  pdVar21 = (double *)param_3[1];
  auVar46 = ___sincos_stret();
  dVar38 = auVar46._8_8_;
  dVar37 = auVar46._0_8_;
  uVar31 = (long)pdVar21 - (long)pdVar3;
  if (uVar31 == 0) goto LAB_10a54dcec;
  uVar29 = (long)uVar31 >> 5;
  pdVar17 = pdVar3;
  dVar41 = -INFINITY;
  dVar39 = INFINITY;
  do {
    pdVar18 = pdVar17 + 4;
    dVar40 = dVar38 * *pdVar17 + dVar37 * pdVar17[1];
    dVar42 = dVar40;
    if (dVar39 <= dVar40) {
      dVar42 = dVar39;
    }
    if (dVar40 <= dVar41) {
      dVar40 = dVar41;
    }
    pdVar17 = pdVar18;
    dVar41 = dVar40;
    dVar39 = dVar42;
  } while (pdVar18 != pdVar21);
  uVar19 = 0;
  dVar40 = (dVar40 + dVar42) * 0.5;
  pdVar21 = pdVar3 + 1;
  uVar28 = 0xffffffff;
  dVar41 = -INFINITY;
  dVar39 = -INFINITY;
  do {
    uVar22 = (ulong)((int)uVar19 + 1);
    uVar20 = 0;
    if (uVar29 != 0) {
      uVar20 = uVar22 / uVar29;
    }
    dVar42 = dVar38 * pdVar21[-1] + dVar37 * *pdVar21;
    dVar43 = pdVar3[(uVar22 - uVar20 * uVar29) * 4];
    dVar45 = (pdVar3 + (uVar22 - uVar20 * uVar29) * 4)[1];
    dVar44 = dVar38 * dVar43 + dVar37 * dVar45;
    dVar43 = -dVar37 * dVar43 + dVar38 * dVar45;
    if (dVar42 <= dVar40 == dVar40 < dVar44) {
      dVar42 = (dVar40 - dVar44) / (dVar42 - dVar44);
      dVar43 = dVar43 + dVar42 * ((-dVar37 * pdVar21[-1] + dVar38 * *pdVar21) - dVar43);
      if (dVar41 < dVar43) {
        dVar39 = 1.0 - dVar42;
        uVar28 = uVar19;
        dVar41 = dVar43;
      }
    }
    pdVar21 = pdVar21 + 4;
    uVar19 = uVar19 + 1;
  } while (uVar22 < uVar29);
  pppdStack_b8 = (double ***)0x0;
  pppdStack_b0 = (double ***)0x0;
  pppdStack_a8 = (double ***)0x0;
  if (uVar29 <= uVar28) goto LAB_10a54dcec;
  pdVar21 = pdVar3 + uVar28 * 4;
  lVar30 = uVar28 + 1;
  uVar5 = 0;
  uVar16 = (uint)(uVar31 >> 5);
  if (uVar16 != 0) {
    uVar5 = (uint)lVar30 / uVar16;
  }
  pdVar17 = pdVar3 + (ulong)((uint)lVar30 - uVar5 * uVar16) * 4;
  dVar37 = *pdVar17 - *pdVar21;
  dVar38 = pdVar17[1] - pdVar21[1];
  dVar41 = SQRT(dVar37 * dVar37 + dVar38 * dVar38);
  if (dVar39 * dVar41 < param_2) {
LAB_10a54d60c:
    uVar31 = 0;
    dVar37 = pdVar3[uVar28 * 4 + 2];
    do {
      uVar19 = 0;
      if (uVar29 != 0) {
        uVar19 = (uVar31 + uVar28) / uVar29;
      }
      uVar19 = (uVar31 + uVar28) - uVar19 * uVar29;
      if ((ulong)(param_3[1] - *param_3 >> 5) <= uVar19) goto LAB_10a54dcec;
      pdVar3 = (double *)(*param_3 + uVar19 * 0x20);
      ppdStack_90 = (double **)*pdVar3;
      ppdStack_88 = (double **)pdVar3[1];
      pppdVar34 = (double ***)pdVar3[3];
      dVar38 = (pdVar3[2] - dVar37) + 1.0;
      pppdVar36 = (double ***)
                  ((ulong)(dVar38 - (double)(long)dVar38) ^
                  ((ulong)(dVar38 - (double)(long)dVar38) ^ (ulong)dVar38) & 0x8007ffffffffffff);
      if (pppdStack_b0 < pppdStack_a8) {
        pppdVar6 = (double ***)*pdVar3;
        pppdStack_b0[1] = (double **)pdVar3[1];
        *pppdStack_b0 = (double **)pppdVar6;
        pppdStack_b0[2] = (double **)pppdVar36;
        pppdStack_b0[3] = (double **)pppdVar34;
        ppppdVar10 = (double ****)(pppdStack_b0 + 4);
        ppppdVar15 = (double ****)pppdStack_b8;
      }
      else {
        lVar30 = (long)pppdStack_b0 - (long)pppdStack_b8;
        uVar19 = (lVar30 >> 5) + 1;
        if (uVar19 >> 0x3b != 0) {
          FUN_10a35e3ec();
          goto LAB_10a54dcec;
        }
        uVar20 = (long)pppdStack_a8 - (long)pppdStack_b8 >> 4;
        if (uVar20 <= uVar19) {
          uVar20 = uVar19;
        }
        if (0x7fffffffffffffdf < (ulong)((long)pppdStack_a8 - (long)pppdStack_b8)) {
          uVar20 = 0x7ffffffffffffff;
        }
        if (uVar20 == 0) {
          ppppdVar10 = (double ****)0x0;
        }
        else {
          ppppdVar10 = &pppdStack_b8;
          FUN_10a35e400(ppppdVar10,uVar20,0);
        }
        ppdVar8 = ppdStack_90;
        pdVar3 = (double *)((long)ppppdVar10 + lVar30);
        pdVar3[1] = (double)ppdStack_88;
        *pdVar3 = (double)ppdVar8;
        pdVar3[2] = (double)pppdVar36;
        pdVar3[3] = (double)pppdVar34;
        ppppdVar15 = (double ****)((long)pdVar3 + ((long)pppdStack_b8 - (long)pppdStack_b0));
        ppppdVar14 = (double ****)pppdStack_b8;
        ppppdVar25 = ppppdVar15;
        if ((long)pppdStack_b8 - (long)pppdStack_b0 != 0) {
          do {
            pppdVar34 = *ppppdVar14;
            ppppdVar25[1] = ppppdVar14[1];
            *ppppdVar25 = pppdVar34;
            pppdVar34 = ppppdVar14[2];
            ppppdVar25[3] = ppppdVar14[3];
            ppppdVar25[2] = pppdVar34;
            ppppdVar14 = ppppdVar14 + 4;
            ppppdVar25 = ppppdVar25 + 4;
          } while (ppppdVar14 != (double ****)pppdStack_b0);
        }
        pppdStack_a8 = (double ***)(ppppdVar10 + uVar20 * 4);
        ppppdVar10 = (double ****)(pdVar3 + 4);
        if ((double ****)pppdStack_b8 != (double ****)0x0) {
          ppppdVar14 = (double ****)pppdStack_b8;
          pppdStack_b8 = (double ***)ppppdVar15;
          pppdStack_b0 = (double ***)ppppdVar10;
          _free(ppppdVar14);
          ppppdVar15 = (double ****)pppdStack_b8;
        }
      }
      pppdStack_b8 = (double ***)ppppdVar15;
      uVar31 = (ulong)((int)uVar31 + 1);
      pppdStack_b0 = (double ***)ppppdVar10;
    } while (uVar31 < uVar29);
  }
  else {
    if ((1.0 - dVar39) * dVar41 < param_2) {
      uVar31 = 0;
      if (uVar29 != 0) {
        uVar31 = (lVar30 + uVar29) / uVar29;
      }
      uVar28 = (lVar30 + uVar29) - uVar31 * uVar29;
      goto LAB_10a54d60c;
    }
    if (dVar39 == 0.0) goto LAB_10a54d60c;
    dVar40 = pdVar21[2];
    dVar41 = 1.0;
    if (uVar28 != uVar29 - 1) {
      dVar41 = pdVar17[2];
    }
    pppdVar34 = (double ***)(*pdVar21 + dVar37 * dVar39);
    pppdVar36 = (double ***)(pdVar21[1] + dVar38 * dVar39);
    dVar37 = dVar40 + (dVar41 - dVar40) * dVar39;
    iVar33 = *(int *)(pdVar21 + 3);
    iVar35 = *(int *)((long)pdVar21 + 0x1c);
    if (iVar33 == iVar35) {
      dVar38 = (dVar40 - dVar37) + 1.0;
      ppdStack_f0 = (double **)
                    ((ulong)dVar38 ^
                    ((ulong)dVar38 ^ (ulong)(dVar38 - (double)(long)dVar38)) & 0x7ff8000000000000);
      ppdStack_90 = (double **)*pdVar21;
      ppdStack_88 = (double **)pdVar21[1];
      iVar35 = iVar33;
      iVar27 = iVar33;
LAB_10a54d9ac:
      lVar32 = (long)pppdStack_b0 - (long)pppdStack_b8;
      uVar31 = (lVar32 >> 5) + 1;
      if (uVar31 >> 0x3b == 0) {
        uVar19 = (long)pppdStack_a8 - (long)pppdStack_b8 >> 4;
        if (uVar19 <= uVar31) {
          uVar19 = uVar31;
        }
        if (0x7fffffffffffffdf < (ulong)((long)pppdStack_a8 - (long)pppdStack_b8)) {
          uVar19 = 0x7ffffffffffffff;
        }
        if (uVar19 == 0) {
          ppppdVar14 = (double ****)0x0;
        }
        else {
          ppppdVar14 = &pppdStack_b8;
          FUN_10a35e400(ppppdVar14,uVar19,0);
        }
        puVar1 = (undefined8 *)((long)ppppdVar14 + lVar32);
        puVar1[1] = pppdVar36;
        *puVar1 = pppdVar34;
        puVar1[2] = 0;
        *(int *)(puVar1 + 3) = iVar27;
        *(int *)((long)puVar1 + 0x1c) = iVar33;
        ppppdVar10 = (double ****)(puVar1 + 4);
        ppppdVar24 = (double ****)((long)puVar1 + ((long)pppdStack_b8 - (long)pppdStack_b0));
        ppppdVar25 = ppppdVar24;
        for (ppppdVar15 = (double ****)pppdStack_b8; (double ****)pppdStack_b0 != ppppdVar15;
            ppppdVar15 = ppppdVar15 + 4) {
          pppdVar34 = *ppppdVar15;
          ppppdVar25[1] = ppppdVar15[1];
          *ppppdVar25 = pppdVar34;
          pppdVar34 = ppppdVar15[2];
          ppppdVar25[3] = ppppdVar15[3];
          ppppdVar25[2] = pppdVar34;
          ppppdVar25 = ppppdVar25 + 4;
        }
        bVar2 = (double ****)pppdStack_b8 != (double ****)0x0;
        pppdStack_b8 = (double ***)ppppdVar24;
        pppdStack_a8 = (double ***)(ppppdVar14 + uVar19 * 4);
        if (bVar2) {
          pppdStack_b0 = (double ***)ppppdVar10;
          _free();
        }
        goto LAB_10a54da64;
      }
LAB_10a54dce0:
      FUN_10a35e3ec();
      goto LAB_10a54dcec;
    }
    plVar26 = param_3 + 3;
    lVar32 = *plVar26;
    pdVar3 = (double *)param_3[4];
    uVar19 = (long)pdVar3 - lVar32;
    uVar31 = (long)uVar19 >> 4;
    if ((uVar31 <= (ulong)(long)iVar33) || (uVar31 <= (ulong)(long)iVar35)) goto LAB_10a54dcec;
    pdVar17 = (double *)(lVar32 + (long)iVar33 * 0x10);
    dVar38 = *pdVar17;
    dVar41 = pdVar17[1];
    pdVar17 = (double *)(lVar32 + (long)iVar35 * 0x10);
    dVar38 = dVar38 + (*pdVar17 - dVar38) * dVar39;
    dVar41 = dVar41 + (pdVar17[1] - dVar41) * dVar39;
    dVar39 = SQRT(dVar38 * dVar38 + dVar41 * dVar41);
    dVar38 = dVar38 / dVar39;
    dVar41 = dVar41 / dVar39;
    if (pdVar3 < (double *)param_3[5]) {
      pdVar17 = pdVar3 + 2;
      pdVar3[1] = dVar41;
      *pdVar3 = dVar38;
    }
    else {
      uVar31 = uVar31 + 1;
      if (uVar31 >> 0x3c != 0) {
        FUN_10a35e504();
        goto LAB_10a54dcec;
      }
      uVar20 = param_3[5] - lVar32;
      uVar28 = (long)uVar20 >> 3;
      if (uVar28 <= uVar31) {
        uVar28 = uVar31;
      }
      if (0x7fffffffffffffef < uVar20) {
        uVar28 = 0xfffffffffffffff;
      }
      plVar11 = plVar26;
      func_0x000109435ef8(plVar26,uVar28,0);
      pdVar3 = (double *)((long)plVar11 + uVar19);
      pdVar17 = pdVar3 + 2;
      pdVar3[1] = dVar41;
      *pdVar3 = dVar38;
      puVar13 = (undefined8 *)param_3[3];
      puVar4 = (undefined8 *)param_3[4];
      puVar1 = (undefined8 *)((long)pdVar3 + ((long)puVar13 - (long)puVar4));
      puVar23 = puVar1;
      if (puVar4 != puVar13) {
        do {
          puVar12 = puVar13 + 2;
          uVar7 = *puVar13;
          puVar23[1] = puVar13[1];
          *puVar23 = uVar7;
          puVar13 = puVar12;
          puVar23 = puVar23 + 2;
        } while (puVar12 != puVar4);
        puVar13 = (undefined8 *)*plVar26;
      }
      param_3[3] = (long)puVar1;
      param_3[4] = (long)pdVar17;
      param_3[5] = (long)(plVar11 + uVar28 * 2);
      if (puVar13 != (undefined8 *)0x0) {
        _free();
      }
    }
    iVar27 = (int)(uVar19 >> 4);
    param_3[4] = (long)pdVar17;
    iVar35 = *(int *)(pdVar21 + 3);
    iVar33 = *(int *)((long)pdVar21 + 0x1c);
    dVar38 = (pdVar21[2] - dVar37) + 1.0;
    ppdStack_f0 = (double **)
                  ((ulong)dVar38 ^
                  ((ulong)dVar38 ^ (ulong)(dVar38 - (double)(long)dVar38)) & 0x7ff8000000000000);
    ppdStack_90 = (double **)*pdVar21;
    ppdStack_88 = (double **)pdVar21[1];
    if (pppdStack_a8 <= pppdStack_b0) goto LAB_10a54d9ac;
    pppdStack_b0[1] = (double **)pppdVar36;
    *pppdStack_b0 = (double **)pppdVar34;
    pppdStack_b0[2] = (double **)0x0;
    ppppdVar10 = (double ****)(pppdStack_b0 + 4);
    *(int *)(pppdStack_b0 + 3) = iVar27;
    *(int *)((long)pppdStack_b0 + 0x1c) = iVar33;
LAB_10a54da64:
    if (uVar29 != 1) {
      uVar31 = 0;
      do {
        uVar19 = 0;
        if (uVar29 != 0) {
          uVar19 = (uVar31 + lVar30) / uVar29;
        }
        uVar19 = (uVar31 + lVar30) - uVar19 * uVar29;
        pppdStack_b0 = (double ***)ppppdVar10;
        if ((ulong)(param_3[1] - *param_3 >> 5) <= uVar19) goto LAB_10a54dcec;
        pdVar3 = (double *)(*param_3 + uVar19 * 0x20);
        dStack_a0 = *pdVar3;
        dStack_98 = pdVar3[1];
        pppdVar34 = (double ***)pdVar3[3];
        dVar38 = (pdVar3[2] - dVar37) + 1.0;
        pppdVar36 = (double ***)
                    ((ulong)(dVar38 - (double)(long)dVar38) ^
                    ((ulong)(dVar38 - (double)(long)dVar38) ^ (ulong)dVar38) & 0x8007ffffffffffff);
        if (ppppdVar10 < pppdStack_a8) {
          pppdVar6 = (double ***)*pdVar3;
          ppppdVar10[1] = (double ***)pdVar3[1];
          *ppppdVar10 = pppdVar6;
          ppppdVar10[2] = pppdVar36;
          ppppdVar10[3] = pppdVar34;
          ppppdVar10 = ppppdVar10 + 4;
          ppppdVar15 = (double ****)pppdStack_b8;
        }
        else {
          lVar32 = (long)ppppdVar10 - (long)pppdStack_b8;
          uVar19 = (lVar32 >> 5) + 1;
          if (uVar19 >> 0x3b != 0) goto LAB_10a54dcd8;
          uVar28 = (long)pppdStack_a8 - (long)pppdStack_b8 >> 4;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (0x7fffffffffffffdf < (ulong)((long)pppdStack_a8 - (long)pppdStack_b8)) {
            uVar28 = 0x7ffffffffffffff;
          }
          if (uVar28 == 0) {
            ppppdVar10 = (double ****)0x0;
          }
          else {
            ppppdVar10 = &pppdStack_b8;
            FUN_10a35e400(ppppdVar10,uVar28,0);
          }
          dVar38 = dStack_a0;
          pdVar3 = (double *)((long)ppppdVar10 + lVar32);
          pdVar3[1] = dStack_98;
          *pdVar3 = dVar38;
          pdVar3[2] = (double)pppdVar36;
          pdVar3[3] = (double)pppdVar34;
          ppppdVar15 = (double ****)((long)pdVar3 + ((long)pppdStack_b8 - (long)pppdStack_b0));
          ppppdVar14 = (double ****)pppdStack_b8;
          ppppdVar25 = ppppdVar15;
          if ((long)pppdStack_b8 - (long)pppdStack_b0 != 0) {
            do {
              pppdVar34 = *ppppdVar14;
              ppppdVar25[1] = ppppdVar14[1];
              *ppppdVar25 = pppdVar34;
              pppdVar34 = ppppdVar14[2];
              ppppdVar25[3] = ppppdVar14[3];
              ppppdVar25[2] = pppdVar34;
              ppppdVar14 = ppppdVar14 + 4;
              ppppdVar25 = ppppdVar25 + 4;
            } while (ppppdVar14 != (double ****)pppdStack_b0);
          }
          pppdStack_a8 = (double ***)(ppppdVar10 + uVar28 * 4);
          ppppdVar10 = (double ****)(pdVar3 + 4);
          if ((double ****)pppdStack_b8 != (double ****)0x0) {
            ppppdVar14 = (double ****)pppdStack_b8;
            pppdStack_b8 = (double ***)ppppdVar15;
            pppdStack_b0 = (double ***)ppppdVar10;
            _free(ppppdVar14);
            ppppdVar15 = (double ****)pppdStack_b8;
          }
        }
        pppdStack_b8 = (double ***)ppppdVar15;
        uVar31 = (ulong)((int)uVar31 + 1);
      } while (uVar31 < uVar29 - 1);
    }
    ppdVar8 = ppdStack_90;
    if (ppppdVar10 < pppdStack_a8) {
      ppppdVar10[1] = (double ***)ppdStack_88;
      *ppppdVar10 = (double ***)ppdVar8;
      ppppdVar10[2] = (double ***)ppdStack_f0;
      *(int *)(ppppdVar10 + 3) = iVar35;
      *(int *)((long)ppppdVar10 + 0x1c) = iVar27;
      ppppdVar10 = ppppdVar10 + 4;
    }
    else {
      lVar30 = (long)ppppdVar10 - (long)pppdStack_b8;
      uVar31 = (lVar30 >> 5) + 1;
      pppdStack_b0 = (double ***)ppppdVar10;
      if (uVar31 >> 0x3b != 0) goto LAB_10a54dce0;
      uVar29 = (long)pppdStack_a8 - (long)pppdStack_b8 >> 4;
      if (uVar29 <= uVar31) {
        uVar29 = uVar31;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppdStack_a8 - (long)pppdStack_b8)) {
        uVar29 = 0x7ffffffffffffff;
      }
      if (uVar29 == 0) {
        ppppdVar14 = (double ****)0x0;
      }
      else {
        ppppdVar14 = &pppdStack_b8;
        FUN_10a35e400(ppppdVar14,uVar29,0);
      }
      ppdVar8 = ppdStack_90;
      pdVar3 = (double *)((long)ppppdVar14 + lVar30);
      pdVar3[1] = (double)ppdStack_88;
      *pdVar3 = (double)ppdVar8;
      pdVar3[2] = (double)ppdStack_f0;
      *(int *)(pdVar3 + 3) = iVar35;
      *(int *)((long)pdVar3 + 0x1c) = iVar27;
      ppppdVar10 = (double ****)(pdVar3 + 4);
      ppppdVar25 = (double ****)((long)pdVar3 + ((long)pppdStack_b8 - (long)pppdStack_b0));
      ppppdVar15 = (double ****)pppdStack_b8;
      ppppdVar24 = ppppdVar25;
      if ((long)pppdStack_b8 - (long)pppdStack_b0 != 0) {
        do {
          pppdVar34 = *ppppdVar15;
          ppppdVar24[1] = ppppdVar15[1];
          *ppppdVar24 = pppdVar34;
          pppdVar34 = ppppdVar15[2];
          ppppdVar24[3] = ppppdVar15[3];
          ppppdVar24[2] = pppdVar34;
          ppppdVar15 = ppppdVar15 + 4;
          ppppdVar24 = ppppdVar24 + 4;
        } while (ppppdVar15 != (double ****)pppdStack_b0);
      }
      bVar2 = (double ****)pppdStack_b8 != (double ****)0x0;
      pppdStack_b8 = (double ***)ppppdVar25;
      pppdStack_a8 = (double ***)(ppppdVar14 + uVar29 * 4);
      if (bVar2) {
        pppdStack_b0 = (double ***)ppppdVar10;
        _free();
      }
    }
  }
  pppdStack_b0 = (double ***)ppppdVar10;
  if (*param_3 != 0) {
    param_3[1] = *param_3;
    _free();
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  *param_3 = (long)pppdStack_b8;
  param_3[1] = (long)pppdStack_b0;
  param_3[2] = (long)pppdStack_a8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a54dcd8:
  FUN_10a35e3ec();
LAB_10a54dcec:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a54dcf0);
  (*pcVar9)();
}



/* Entry: 10a54dd20; end: 10a54ed43;  */

void FUN_10a54dd20(undefined8 param_1,long *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  double *pdVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  double *pdVar29;
  double *pdVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  int iVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  double dVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  int iStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int aiStack_8c [3];
  
  lVar12 = *(long *)param_2[0xf];
  lVar40 = ((long *)param_2[0xf])[1];
  if (lVar12 != lVar40) {
    iVar37 = 0;
    do {
      uStack_d0._0_4_ = (int)((ulong)(param_2[0x12] - param_2[0x11]) >> 4);
      FUN_109febd04(param_2 + 0x14,&uStack_d0);
      FUN_10a55dcc8(param_2 + 0x26,(param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555 + 1);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if (param_2[0x26] == param_2[0x27]) goto LAB_10a54ecf0;
      func_0x000109634dec(param_2[0x27] + -0x18,
                          *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 6);
      FUN_10a55dcc8(param_2 + 0x29,(param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555 + 1);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if (param_2[0x29] == param_2[0x2a]) goto LAB_10a54ecf0;
      func_0x000109634dec(param_2[0x2a] + -0x18,
                          *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 6);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if ((param_2[0x29] == param_2[0x2a]) ||
         (uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
         uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
         param_2[0x26] == param_2[0x27])) goto LAB_10a54ecf0;
      func_0x00010a55de64(param_2,param_2[0x2a] + -0x30,param_2[0x27] + -0x30,lVar12,iVar37);
      iVar37 = iVar37 + 1;
      lVar11 = *(long *)(lVar12 + 0x40);
      if (*(long *)(lVar12 + 0x48) != lVar11) {
        uVar18 = 0;
        uVar31 = 1;
        do {
          lVar19 = param_2[0x2a];
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((((param_2[0x29] == lVar19) ||
               (uVar23 = (*(long *)(lVar19 + -0x10) - *(long *)(lVar19 + -0x18) >> 3) *
                         -0x5555555555555555,
               uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
               uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
               uVar23 < uVar18 || uVar23 - uVar18 == 0)) ||
              (lVar34 = param_2[0x27], uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0), param_2[0x26] == lVar34)
              ) || (uVar23 = (*(long *)(lVar34 + -0x10) - *(long *)(lVar34 + -0x18) >> 3) *
                             -0x5555555555555555,
                   uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
                   uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                   uVar23 < uVar18 || uVar23 - uVar18 == 0)) goto LAB_10a54ecf0;
          func_0x00010a55de64(param_2,*(long *)(lVar19 + -0x18) + uVar18 * 0x18,
                              *(long *)(lVar34 + -0x18) + uVar18 * 0x18,lVar11 + uVar18 * 0x40,
                              iVar37);
          iVar37 = iVar37 + 1;
          lVar11 = *(long *)(lVar12 + 0x40);
          bVar9 = uVar31 < (ulong)(*(long *)(lVar12 + 0x48) - lVar11 >> 6);
          uVar18 = uVar31;
          uVar31 = (ulong)((int)uVar31 + 1);
        } while (bVar9);
      }
      lVar12 = lVar12 + 0x58;
    } while (lVar12 != lVar40);
  }
  FUN_10a55cd80(param_2,param_2[0x12] - param_2[0x11] >> 3);
  func_0x00010a55ce50(param_2 + 3,
                      (param_2[1] - *param_2 >> 3) * -0x5555555555555555 +
                      (param_2[0x18] - param_2[0x17] >> 4));
  plVar13 = param_2 + 0x1a;
  FUN_10a55cd80(param_2 + 6,(param_2[0x1b] - *plVar13 >> 4) + 2);
  func_0x00010a55cef8(param_2 + 9,(param_2[0x21] - param_2[0x20] >> 4) + 2);
  aiStack_8c[0] = (int)((ulong)(param_2[1] - *param_2) >> 3) * -0x55555555;
  puVar27 = (undefined8 *)param_2[0x11];
  puVar28 = (undefined8 *)param_2[0x12];
  iStack_90 = aiStack_8c[0];
  if (puVar27 != puVar28) {
    do {
      uStack_c0 = (int *)(double)(*(float *)(param_3 + 0x18) * 0.5);
      puVar35 = puVar27 + 2;
      uStack_c8._0_4_ = (int)puVar27[1];
      uStack_c8._4_4_ = (int)((ulong)puVar27[1] >> 0x20);
      uStack_d0._0_4_ = (int)*puVar27;
      uStack_d0._4_4_ = (int)((ulong)*puVar27 >> 0x20);
      func_0x00010a55cf9c(param_2,&uStack_d0);
      puVar27 = puVar35;
    } while (puVar35 != puVar28);
    puVar27 = (undefined8 *)param_2[0x11];
    puVar28 = (undefined8 *)param_2[0x12];
    iStack_90 = (int)((ulong)(param_2[1] - *param_2) >> 3) * -0x55555555;
  }
  for (; puVar27 != puVar28; puVar27 = puVar27 + 2) {
    uStack_c0 = (int *)(double)(*(float *)(param_3 + 0x18) * -0.5);
    uStack_c8._0_4_ = (int)puVar27[1];
    uStack_c8._4_4_ = (int)((ulong)puVar27[1] >> 0x20);
    uStack_d0._0_4_ = (int)*puVar27;
    uStack_d0._4_4_ = (int)((ulong)*puVar27 >> 0x20);
    func_0x00010a55cf9c(param_2,&uStack_d0);
  }
  iStack_94 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  lVar12 = param_2[0x17];
  lVar40 = param_2[0x18];
  iStack_98 = iStack_94;
  if (lVar12 != lVar40) {
    do {
      lVar11 = *(long *)param_2[0x10];
      if ((*(char *)(lVar11 + 0x48) != '\x01') ||
         (*(float *)(lVar11 + 0x40) <= *(float *)(lVar11 + 0x44))) {
        dVar41 = *(double *)(lVar12 + 0x18) / (double)*(float *)(lVar11 + 0x14);
      }
      else {
        dVar41 = 1.0 - ((double)*(float *)(lVar11 + 0x10) - *(double *)(lVar12 + 0x18)) /
                       (double)*(float *)(lVar11 + 0x14);
      }
      uStack_d0 = (long *)(*(double *)(lVar12 + 0x10) / (double)*(float *)(lVar11 + 0x10));
      uStack_c8._0_4_ = SUB84(dVar41,0);
      uStack_c8._4_4_ = (int)((ulong)dVar41 >> 0x20);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != lVar40);
    lVar12 = param_2[0x17];
    lVar40 = param_2[0x18];
    iStack_98 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  }
  iVar37 = iStack_98;
  if (lVar12 != lVar40) {
    do {
      lVar11 = *(long *)param_2[0x10];
      if ((*(char *)(lVar11 + 0x48) != '\x01') ||
         (*(float *)(lVar11 + 0x40) <= *(float *)(lVar11 + 0x44))) {
        dVar41 = *(double *)(lVar12 + 0x18) / (double)*(float *)(lVar11 + 0x14);
      }
      else {
        dVar41 = 1.0 - ((double)*(float *)(lVar11 + 0x10) - *(double *)(lVar12 + 0x18)) /
                       (double)*(float *)(lVar11 + 0x14);
      }
      uStack_d0 = (long *)(*(double *)(lVar12 + 0x10) / (double)*(float *)(lVar11 + 0x10));
      uStack_c8._0_4_ = SUB84(dVar41,0);
      uStack_c8._4_4_ = (int)((ulong)dVar41 >> 0x20);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != lVar40);
    iVar37 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  }
  pdVar30 = (double *)param_2[0x11];
  pdVar26 = (double *)param_2[0x12];
  if (pdVar30 != pdVar26) {
    do {
      lVar12 = *(long *)param_2[0x10];
      if ((*(char *)(lVar12 + 0x48) != '\x01') ||
         (*(float *)(lVar12 + 0x40) <= *(float *)(lVar12 + 0x44))) {
        dVar41 = pdVar30[1] / (double)*(float *)(lVar12 + 0x14);
      }
      else {
        dVar41 = 1.0 - ((double)*(float *)(lVar12 + 0x10) - pdVar30[1]) /
                       (double)*(float *)(lVar12 + 0x14);
      }
      pdVar29 = pdVar30 + 2;
      uStack_d0 = (long *)(*pdVar30 / (double)*(float *)(lVar12 + 0x10));
      uStack_c8._0_4_ = SUB84(dVar41,0);
      uStack_c8._4_4_ = (int)((ulong)dVar41 >> 0x20);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      pdVar30 = pdVar29;
    } while (pdVar29 != pdVar26);
    pdVar30 = (double *)param_2[0x11];
    pdVar26 = (double *)param_2[0x12];
  }
  uVar18 = (long)pdVar26 - (long)pdVar30;
  if (uVar18 != 0) {
    do {
      lVar12 = *(long *)param_2[0x10];
      if ((*(char *)(lVar12 + 0x48) != '\x01') ||
         (*(float *)(lVar12 + 0x40) <= *(float *)(lVar12 + 0x44))) {
        dVar41 = pdVar30[1] / (double)*(float *)(lVar12 + 0x14);
      }
      else {
        dVar41 = 1.0 - ((double)*(float *)(lVar12 + 0x10) - pdVar30[1]) /
                       (double)*(float *)(lVar12 + 0x14);
      }
      pdVar29 = pdVar30 + 2;
      uStack_d0 = (long *)(*pdVar30 / (double)*(float *)(lVar12 + 0x10));
      uStack_c8._0_4_ = SUB84(dVar41,0);
      uStack_c8._4_4_ = (int)((ulong)dVar41 >> 0x20);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      pdVar30 = pdVar29;
    } while (pdVar29 != pdVar26);
  }
  lVar12 = *(long *)param_2[0xf];
  lVar40 = ((long *)param_2[0xf])[1];
  if (lVar12 != lVar40) {
    do {
      FUN_10a55dcc8(param_2 + 0x1d,(param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555 + 1);
      FUN_10a55dcc8(param_2 + 0x23,(param_2[0x24] - param_2[0x23] >> 4) * -0x5555555555555555 + 1);
      lVar11 = *(long *)(lVar12 + 0x18);
      lVar19 = *(long *)(lVar12 + 0x20);
      if (lVar19 != lVar11) {
        uVar31 = 1;
        uVar23 = 0;
        do {
          uVar21 = uVar31;
          lVar34 = param_2[0x1e];
          if ((param_2[0x1d] == lVar34) || ((ulong)(lVar19 - lVar11 >> 4) <= uVar23))
          goto LAB_10a54ecf0;
          uVar42 = 0x3ff0000000000000;
          if (*(int *)(lVar12 + 0x38) != 1) {
            uVar42 = 0xbff0000000000000;
          }
          plVar32 = plVar13;
          FUN_10a55e2d8(uVar42,plVar13,lVar11 + uVar23 * 0x10);
          uStack_d0._0_4_ = (int)plVar32;
          FUN_109febd04(lVar34 + -0x30,&uStack_d0);
          lVar11 = param_2[0x24];
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((param_2[0x23] == lVar11) ||
             (uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
             (ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 4) <= uVar23))
          goto LAB_10a54ecf0;
          pdVar30 = (double *)(*(long *)(lVar12 + 0x18) + uVar23 * 0x10);
          lStack_e8 = -0x4080000000000000;
          uStack_f0 = CONCAT44(-(float)*pdVar30,(float)pdVar30[1]);
          uStack_d0._0_4_ = 0x3f800000;
          if (*(int *)(lVar12 + 0x38) != 1) {
            uStack_d0._0_4_ = 0xbf800000;
          }
          iVar6 = (int)param_2 + 0x100;
          uStack_c8 = (int *)&uStack_f0;
          FUN_10a55e3d8(CONCAT44(uStack_d0._4_4_,(int)uStack_d0));
          iStack_108 = iVar6;
          FUN_109febd04(lVar11 + -0x30,&iStack_108);
          lVar11 = *(long *)(lVar12 + 0x18);
          lVar19 = *(long *)(lVar12 + 0x20);
          uVar31 = (ulong)((int)uVar21 + 1);
          uVar23 = uVar21;
        } while (uVar21 < (ulong)(lVar19 - lVar11 >> 4));
      }
      if (param_2[0x1d] == param_2[0x1e]) goto LAB_10a54ecf0;
      func_0x000109634dec(param_2[0x1e] + -0x18,
                          *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 6);
      if (param_2[0x23] == param_2[0x24]) goto LAB_10a54ecf0;
      func_0x000109634dec(param_2[0x24] + -0x18,
                          *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 6);
      lVar11 = *(long *)(lVar12 + 0x40);
      lVar19 = *(long *)(lVar12 + 0x48);
      if (lVar19 != lVar11) {
        uVar31 = 0;
        do {
          uVar23 = lVar19 - lVar11 >> 6;
          if (uVar23 <= uVar31) goto LAB_10a54ecf0;
          lVar34 = lVar11 + uVar31 * 0x40;
          lVar14 = *(long *)(lVar34 + 0x18);
          if (*(long *)(lVar34 + 0x20) != lVar14) {
            uVar21 = 1;
            uVar16 = 0;
            do {
              uVar39 = uVar21;
              lVar19 = param_2[0x1e];
              if ((param_2[0x1d] == lVar19) ||
                 (lVar34 = *(long *)(lVar19 + -0x18),
                 uVar23 = (*(long *)(lVar19 + -0x10) - lVar34 >> 3) * -0x5555555555555555,
                 uVar23 < uVar31 || uVar23 - uVar31 == 0)) goto LAB_10a54ecf0;
              uVar42 = 0xbff0000000000000;
              if (*(int *)(lVar11 + uVar31 * 0x40 + 0x38) != 1) {
                uVar42 = 0x3ff0000000000000;
              }
              plVar32 = plVar13;
              FUN_10a55e2d8(uVar42,plVar13,lVar14 + uVar16 * 0x10);
              uStack_d0._0_4_ = (int)plVar32;
              FUN_109febd04(lVar34 + uVar31 * 0x18,&uStack_d0);
              lVar11 = param_2[0x24];
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
              if (((param_2[0x23] == lVar11) ||
                  (lVar19 = *(long *)(lVar11 + -0x18),
                  uVar23 = (*(long *)(lVar11 + -0x10) - lVar19 >> 3) * -0x5555555555555555,
                  uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                  uVar23 < uVar31 || uVar23 - uVar31 == 0)) ||
                 (uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                 (ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 6) <= uVar31))
              goto LAB_10a54ecf0;
              lVar11 = *(long *)(lVar12 + 0x40) + uVar31 * 0x40;
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
              if ((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 4) <= uVar16)
              goto LAB_10a54ecf0;
              pdVar30 = (double *)(*(long *)(lVar11 + 0x18) + uVar16 * 0x10);
              lStack_e8 = 0x3f80000000000000;
              uStack_f0 = CONCAT44(-(float)*pdVar30,(float)pdVar30[1]);
              uStack_d0._0_4_ = 0xbf800000;
              if (*(int *)(lVar11 + 0x38) != 1) {
                uStack_d0._0_4_ = 0x3f800000;
              }
              iVar6 = (int)param_2 + 0x100;
              uStack_c8 = (int *)&uStack_f0;
              FUN_10a55e3d8(CONCAT44(uStack_d0._4_4_,(int)uStack_d0));
              iStack_108 = iVar6;
              FUN_109febd04(lVar19 + uVar31 * 0x18,&iStack_108);
              lVar11 = *(long *)(lVar12 + 0x40);
              lVar19 = *(long *)(lVar12 + 0x48);
              uVar23 = lVar19 - lVar11 >> 6;
              if (uVar23 <= uVar31) goto LAB_10a54ecf0;
              lVar34 = lVar11 + uVar31 * 0x40;
              lVar14 = *(long *)(lVar34 + 0x18);
              uVar21 = (ulong)((int)uVar39 + 1);
              uVar16 = uVar39;
            } while (uVar39 < (ulong)(*(long *)(lVar34 + 0x20) - lVar14 >> 4));
          }
          uVar31 = (ulong)((int)uVar31 + 1);
        } while (uVar31 < uVar23);
      }
      lVar12 = lVar12 + 0x58;
    } while (lVar12 != lVar40);
  }
  iStack_9c = (int)((ulong)(param_2[7] - param_2[6]) >> 3) * -0x55555555;
  puVar28 = (undefined8 *)param_2[0x1b];
  for (puVar27 = (undefined8 *)param_2[0x1a]; puVar27 != puVar28; puVar27 = puVar27 + 2) {
    uStack_c8._0_4_ = (int)puVar27[1];
    uStack_c8._4_4_ = (int)((ulong)puVar27[1] >> 0x20);
    uStack_d0._0_4_ = (int)*puVar27;
    uStack_d0._4_4_ = (int)((ulong)*puVar27 >> 0x20);
    uStack_c0 = (int *)0x0;
    func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  }
  FUN_10a55e4cc(param_2 + 9,param_2 + 0x20);
  lVar12 = param_2[6];
  lVar11 = param_2[7];
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  uStack_c0 = (int *)0x3ff0000000000000;
  func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  lVar40 = param_2[6];
  lVar19 = param_2[7];
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  uStack_c0 = (int *)0xbff0000000000000;
  func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  bVar5 = *param_3;
  uVar43 = 0x3f800000;
  uVar44 = 0xbf800000;
  uStack_d0._0_4_ = uVar44;
  if ((bVar5 & 1) == 0) {
    uStack_d0._0_4_ = 0x3f800000;
  }
  uStack_c8._4_4_ = uVar44;
  if ((((uint)bVar5 ^ (bVar5 & 2) >> 1) & 1) == 0) {
    uStack_c8._4_4_ = uVar43;
  }
  func_0x00010a55d0b0(param_2 + 9,&uStack_d0);
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  bVar5 = *param_3;
  uStack_d0._0_4_ = uVar43;
  if ((bVar5 & 4) == 0) {
    uStack_d0._0_4_ = 0xbf800000;
  }
  uStack_c8._4_4_ = uVar44;
  if ((bVar5 & 4) >> 2 == (bVar5 & 8) >> 3) {
    uStack_c8._4_4_ = uVar43;
  }
  func_0x00010a55d0b0(param_2 + 9,&uStack_d0);
  plVar13 = (long *)param_2[0xf];
  lVar34 = *plVar13;
  lVar14 = plVar13[1];
  if (lVar14 != lVar34) {
    uVar31 = 0;
    do {
      uStack_c8 = aiStack_8c;
      uStack_c0 = &iStack_94;
      uStack_b8 = &iStack_9c;
      piStack_b0 = &iStack_90;
      piStack_a8 = &iStack_98;
      uVar23 = (plVar13[1] - *plVar13 >> 3) * 0x2e8ba2e8ba2e8ba3;
      uStack_d0 = param_2;
      if (((uVar23 < uVar31 || uVar23 - uVar31 == 0) ||
          (uVar23 = (param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar31 || uVar23 - uVar31 == 0)) ||
         ((uVar23 = (param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar31 || uVar23 - uVar31 == 0 ||
          (uVar23 = (param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar31 || uVar23 - uVar31 == 0)))) goto LAB_10a54ecf0;
      uStack_d0 = param_2;
      FUN_10a55d188(&uStack_d0,*plVar13 + uVar31 * 0x58,param_2[0x26] + uVar31 * 0x30,
                    param_2[0x1d] + uVar31 * 0x30,param_2[0x29] + uVar31 * 0x30,0);
      plVar13 = (long *)param_2[0xf];
      lVar34 = *plVar13;
      lVar14 = plVar13[1];
      uVar23 = (lVar14 - lVar34 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar23 < uVar31 || uVar23 - uVar31 == 0) goto LAB_10a54ecf0;
      lVar20 = lVar34 + uVar31 * 0x58;
      lVar22 = *(long *)(lVar20 + 0x40);
      if (*(long *)(lVar20 + 0x48) != lVar22) {
        uVar21 = 0;
        uVar16 = 1;
        do {
          uVar23 = (param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555;
          if (((uVar23 < uVar31 || uVar23 - uVar31 == 0) ||
              (lVar14 = param_2[0x26] + uVar31 * 0x30, lVar34 = *(long *)(lVar14 + 0x18),
              uVar23 = (*(long *)(lVar14 + 0x20) - lVar34 >> 3) * -0x5555555555555555,
              uVar23 < uVar21 || uVar23 - uVar21 == 0)) ||
             ((uVar23 = (param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555,
              uVar23 < uVar31 || uVar23 - uVar31 == 0 ||
              (((lVar20 = param_2[0x1d] + uVar31 * 0x30, lVar14 = *(long *)(lVar20 + 0x18),
                uVar23 = (*(long *)(lVar20 + 0x20) - lVar14 >> 3) * -0x5555555555555555,
                uVar23 < uVar21 || uVar23 - uVar21 == 0 ||
                (uVar23 = (param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555,
                uVar23 < uVar31 || uVar23 - uVar31 == 0)) ||
               (lVar24 = param_2[0x29] + uVar31 * 0x30, lVar20 = *(long *)(lVar24 + 0x18),
               uVar23 = (*(long *)(lVar24 + 0x20) - lVar20 >> 3) * -0x5555555555555555,
               uVar23 < uVar21 || uVar23 - uVar21 == 0)))))) goto LAB_10a54ecf0;
          FUN_10a55d188(&uStack_d0,lVar22 + uVar21 * 0x40,lVar34 + uVar21 * 0x18,
                        lVar14 + uVar21 * 0x18,lVar20 + uVar21 * 0x18,1);
          plVar13 = (long *)param_2[0xf];
          lVar34 = *plVar13;
          lVar14 = plVar13[1];
          uVar23 = (lVar14 - lVar34 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar23 < uVar31 || uVar23 - uVar31 == 0) goto LAB_10a54ecf0;
          lVar20 = lVar34 + uVar31 * 0x58;
          lVar22 = *(long *)(lVar20 + 0x40);
          bVar9 = uVar16 < (ulong)(*(long *)(lVar20 + 0x48) - lVar22 >> 6);
          uVar21 = uVar16;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (bVar9);
      }
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < uVar23);
  }
  if (lVar14 != lVar34) {
    uVar31 = 0;
    iVar6 = (int)((ulong)(lVar11 - lVar12) >> 3) * -0x55555555;
    iVar7 = (int)((ulong)(lVar19 - lVar40) >> 3) * -0x55555555;
    do {
      uStack_f0 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d0._0_4_ = 0;
      uStack_d0._4_4_ = 0;
      uStack_c8._0_4_ = 0;
      uStack_c8._4_4_ = 0;
      uStack_c0 = (int *)0x0;
      FUN_10a55d480(&uStack_f0,&uStack_d0);
      if (CONCAT44(uStack_d0._4_4_,(int)uStack_d0) != 0) {
        _free();
      }
      lVar12 = lStack_e8;
      plVar13 = (long *)(lVar34 + uVar31 * 0x58);
      puVar27 = (undefined8 *)*plVar13;
      puVar28 = (undefined8 *)plVar13[1];
      if (puVar27 != puVar28) {
        uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
        uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
        if (uStack_f0 == lStack_e8) {
LAB_10a54ecf0:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54ecf4);
          (*pcVar8)();
        }
        plVar32 = (long *)(lStack_e8 + -0x18);
        puVar35 = *(undefined8 **)(lStack_e8 + -0x10);
        do {
          if (puVar35 < *(undefined8 **)(lVar12 + -8)) {
            uVar42 = *puVar27;
            puVar36 = puVar35 + 2;
            puVar35[1] = puVar27[1];
            *puVar35 = uVar42;
          }
          else {
            lVar40 = (long)puVar35 - *plVar32;
            uVar23 = (lVar40 >> 4) + 1;
            if (uVar23 >> 0x3c != 0) {
              FUN_10a35e504();
              goto LAB_10a54ecf0;
            }
            uVar16 = (long)*(undefined8 **)(lVar12 + -8) - *plVar32;
            uVar21 = (long)uVar16 >> 3;
            if (uVar21 <= uVar23) {
              uVar21 = uVar23;
            }
            if (0x7fffffffffffffef < uVar16) {
              uVar21 = 0xfffffffffffffff;
            }
            plVar33 = plVar32;
            func_0x000109435ef8(plVar32,uVar21,0);
            puVar36 = (undefined8 *)((long)plVar33 + lVar40);
            uVar42 = *puVar27;
            puVar36[1] = puVar27[1];
            *puVar36 = uVar42;
            puVar17 = *(undefined8 **)(lVar12 + -0x18);
            puVar2 = *(undefined8 **)(lVar12 + -0x10);
            lVar40 = (long)puVar17 - (long)puVar2;
            puVar35 = (undefined8 *)((long)puVar36 + lVar40);
            puVar25 = puVar35;
            if (lVar40 != 0) {
              do {
                puVar15 = puVar17 + 2;
                uVar42 = *puVar17;
                puVar25[1] = puVar17[1];
                *puVar25 = uVar42;
                puVar17 = puVar15;
                puVar25 = puVar25 + 2;
              } while (puVar15 != puVar2);
              puVar17 = (undefined8 *)*plVar32;
            }
            puVar36 = puVar36 + 2;
            *(undefined8 **)(lVar12 + -0x18) = puVar35;
            *(undefined8 **)(lVar12 + -0x10) = puVar36;
            *(long **)(lVar12 + -8) = plVar33 + uVar21 * 2;
            if (puVar17 != (undefined8 *)0x0) {
              _free(puVar17);
            }
          }
          *(undefined8 **)(lVar12 + -0x10) = puVar36;
          puVar27 = puVar27 + 4;
          puVar35 = puVar36;
        } while (puVar27 != puVar28);
      }
      plVar32 = (long *)plVar13[9];
      for (plVar13 = (long *)plVar13[8]; plVar13 != plVar32; plVar13 = plVar13 + 8) {
        uStack_d0._0_4_ = 0;
        uStack_d0._4_4_ = 0;
        uStack_c8._0_4_ = 0;
        uStack_c8._4_4_ = 0;
        uStack_c0 = (int *)0x0;
        FUN_10a55d480(&uStack_f0,&uStack_d0);
        if (CONCAT44(uStack_d0._4_4_,(int)uStack_d0) != 0) {
          _free();
        }
        lVar12 = lStack_e8;
        puVar27 = (undefined8 *)*plVar13;
        puVar28 = (undefined8 *)plVar13[1];
        if (puVar27 != puVar28) {
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uStack_f0 == lStack_e8) goto LAB_10a54ecf0;
          plVar33 = (long *)(lStack_e8 + -0x18);
          puVar35 = *(undefined8 **)(lStack_e8 + -0x10);
          do {
            if (puVar35 < *(undefined8 **)(lVar12 + -8)) {
              uVar42 = *puVar27;
              puVar36 = puVar35 + 2;
              puVar35[1] = puVar27[1];
              *puVar35 = uVar42;
            }
            else {
              lVar40 = (long)puVar35 - *plVar33;
              uVar23 = (lVar40 >> 4) + 1;
              if (uVar23 >> 0x3c != 0) {
                FUN_10a35e504();
                uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
                uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
                goto LAB_10a54ecf0;
              }
              uVar16 = (long)*(undefined8 **)(lVar12 + -8) - *plVar33;
              uVar21 = (long)uVar16 >> 3;
              if (uVar21 <= uVar23) {
                uVar21 = uVar23;
              }
              if (0x7fffffffffffffef < uVar16) {
                uVar21 = 0xfffffffffffffff;
              }
              plVar10 = plVar33;
              func_0x000109435ef8(plVar33,uVar21,0);
              puVar36 = (undefined8 *)((long)plVar10 + lVar40);
              uVar42 = *puVar27;
              puVar36[1] = puVar27[1];
              *puVar36 = uVar42;
              puVar17 = *(undefined8 **)(lVar12 + -0x18);
              puVar2 = *(undefined8 **)(lVar12 + -0x10);
              lVar40 = (long)puVar17 - (long)puVar2;
              puVar35 = (undefined8 *)((long)puVar36 + lVar40);
              puVar25 = puVar35;
              if (lVar40 != 0) {
                do {
                  puVar15 = puVar17 + 2;
                  uVar42 = *puVar17;
                  puVar25[1] = puVar17[1];
                  *puVar25 = uVar42;
                  puVar17 = puVar15;
                  puVar25 = puVar25 + 2;
                } while (puVar15 != puVar2);
                puVar17 = (undefined8 *)*plVar33;
              }
              puVar36 = puVar36 + 2;
              *(undefined8 **)(lVar12 + -0x18) = puVar35;
              *(undefined8 **)(lVar12 + -0x10) = puVar36;
              *(long **)(lVar12 + -8) = plVar10 + uVar21 * 2;
              if (puVar17 != (undefined8 *)0x0) {
                _free(puVar17);
              }
            }
            *(undefined8 **)(lVar12 + -0x10) = puVar36;
            puVar27 = puVar27 + 4;
            puVar35 = puVar36;
          } while (puVar27 != puVar28);
        }
      }
      FUN_10a55d5f8(&iStack_108,&uStack_f0);
      lVar12 = CONCAT44(uStack_104,iStack_108);
      if (lStack_100 - lVar12 == 0) {
        if (lStack_100 != 0) goto LAB_10a54ec68;
      }
      else {
        uVar21 = 0;
        uVar23 = lStack_100 - lVar12 >> 2;
        uVar38 = 3;
        do {
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((ulong)(param_2[0x15] - param_2[0x14] >> 2) <= uVar31) goto LAB_10a54ecf0;
          uStack_d0._4_4_ = *(int *)(lVar12 + uVar21 * 4);
          iVar3 = *(int *)(param_2[0x14] + uVar31 * 4);
          iVar1 = aiStack_8c[0] + iVar3;
          uStack_d0._0_4_ = iVar1 + uStack_d0._4_4_;
          iVar3 = iVar3 + iVar37;
          uStack_d0._4_4_ = iVar3 + uStack_d0._4_4_;
          uVar16 = (ulong)(uVar38 - 2);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,iVar6);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uVar23 <= uVar16) goto LAB_10a54ecf0;
          iVar4 = *(int *)(lVar12 + uVar16 * 4);
          uStack_c8._4_4_ = iVar1 + iVar4;
          uStack_c0 = (int *)CONCAT44(iVar6,iVar3 + iVar4);
          uVar39 = (ulong)(uVar38 - 1);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,iVar6);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uVar23 <= uVar39) goto LAB_10a54ecf0;
          iVar4 = *(int *)(lVar12 + uVar39 * 4);
          uStack_b8 = (int *)CONCAT44(iVar3 + iVar4,iVar1 + iVar4);
          piStack_b0 = (int *)CONCAT44(piStack_b0._4_4_,iVar6);
          uStack_c8._0_4_ = iVar6;
          FUN_10a55dbbc(param_2 + 0xc,&uStack_d0);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((uVar23 <= uVar21) ||
             (uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
             uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
             (ulong)(param_2[0x15] - param_2[0x14] >> 2) <= uVar31)) goto LAB_10a54ecf0;
          uStack_d0._4_4_ = *(int *)(lVar12 + uVar21 * 4);
          iVar3 = *(int *)(param_2[0x14] + uVar31 * 4);
          iVar1 = iStack_90 + iVar3;
          uStack_d0._0_4_ = iVar1 + uStack_d0._4_4_;
          iVar3 = iVar3 + iVar37 + (int)(uVar18 >> 4);
          uStack_d0._4_4_ = iVar3 + uStack_d0._4_4_;
          iVar4 = *(int *)(lVar12 + uVar39 * 4);
          uStack_c8._4_4_ = iVar1 + iVar4;
          uStack_c0 = (int *)CONCAT44(iVar7,iVar3 + iVar4);
          iVar4 = *(int *)(lVar12 + uVar16 * 4);
          uStack_b8 = (int *)CONCAT44(iVar3 + iVar4,iVar1 + iVar4);
          piStack_b0 = (int *)CONCAT44(piStack_b0._4_4_,iVar7);
          uStack_c8._0_4_ = iVar7;
          FUN_10a55dbbc(param_2 + 0xc,&uStack_d0);
          uVar21 = (ulong)uVar38;
          uVar16 = (ulong)uVar38;
          uVar38 = uVar38 + 3;
        } while (uVar16 < uVar23);
LAB_10a54ec68:
        __ZdlPv(lVar12);
      }
      FUN_10a560780(&uStack_f0);
      uVar31 = (ulong)((int)uVar31 + 1);
      lVar34 = *(long *)param_2[0xf];
      uVar23 = (((long *)param_2[0xf])[1] - lVar34 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar31 <= uVar23 && uVar23 - uVar31 != 0);
  }
  FUN_10a5607f4(param_1,param_2);
  return;
}



/* Entry: 10a54ed44; end: 10a54fce3;  */

void FUN_10a54ed44(undefined8 param_1,long *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  double *pdVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  double *pdVar30;
  double *pdVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  int iStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int aiStack_8c [3];
  
  lVar27 = *(long *)param_2[0xf];
  lVar41 = ((long *)param_2[0xf])[1];
  if (lVar27 != lVar41) {
    iVar38 = 0;
    do {
      uStack_d0._0_4_ = (int)((ulong)(param_2[0x12] - param_2[0x11]) >> 4);
      FUN_109febd04(param_2 + 0x14,&uStack_d0);
      FUN_10a55dcc8(param_2 + 0x26,(param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555 + 1);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if (param_2[0x26] == param_2[0x27]) goto LAB_10a54fc90;
      func_0x000109634dec(param_2[0x27] + -0x18,
                          *(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 6);
      FUN_10a55dcc8(param_2 + 0x29,(param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555 + 1);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if (param_2[0x29] == param_2[0x2a]) goto LAB_10a54fc90;
      func_0x000109634dec(param_2[0x2a] + -0x18,
                          *(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 6);
      uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
      uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
      if ((param_2[0x29] == param_2[0x2a]) ||
         (uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
         uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
         param_2[0x26] == param_2[0x27])) goto LAB_10a54fc90;
      FUN_10a560db0(param_2,param_2[0x2a] + -0x30,param_2[0x27] + -0x30,lVar27,iVar38);
      iVar38 = iVar38 + 1;
      lVar12 = *(long *)(lVar27 + 0x40);
      if (*(long *)(lVar27 + 0x48) != lVar12) {
        uVar18 = 0;
        uVar32 = 1;
        do {
          lVar19 = param_2[0x2a];
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((((param_2[0x29] == lVar19) ||
               (uVar23 = (*(long *)(lVar19 + -0x10) - *(long *)(lVar19 + -0x18) >> 3) *
                         -0x5555555555555555,
               uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
               uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
               uVar23 < uVar18 || uVar23 - uVar18 == 0)) ||
              (lVar35 = param_2[0x27], uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0), param_2[0x26] == lVar35)
              ) || (uVar23 = (*(long *)(lVar35 + -0x10) - *(long *)(lVar35 + -0x18) >> 3) *
                             -0x5555555555555555,
                   uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
                   uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                   uVar23 < uVar18 || uVar23 - uVar18 == 0)) goto LAB_10a54fc90;
          FUN_10a560db0(param_2,*(long *)(lVar19 + -0x18) + uVar18 * 0x18,
                        *(long *)(lVar35 + -0x18) + uVar18 * 0x18,lVar12 + uVar18 * 0x40,iVar38);
          iVar38 = iVar38 + 1;
          lVar12 = *(long *)(lVar27 + 0x40);
          bVar9 = uVar32 < (ulong)(*(long *)(lVar27 + 0x48) - lVar12 >> 6);
          uVar18 = uVar32;
          uVar32 = (ulong)((int)uVar32 + 1);
        } while (bVar9);
      }
      lVar27 = lVar27 + 0x58;
    } while (lVar27 != lVar41);
  }
  FUN_10a55cd80(param_2,param_2[0x12] - param_2[0x11] >> 3);
  func_0x00010a55ce50(param_2 + 3,
                      (param_2[1] - *param_2 >> 3) * -0x5555555555555555 +
                      (param_2[0x18] - param_2[0x17] >> 4));
  plVar13 = param_2 + 0x1a;
  FUN_10a55cd80(param_2 + 6,(param_2[0x1b] - *plVar13 >> 4) + 2);
  func_0x00010a55cef8(param_2 + 9,(param_2[0x21] - param_2[0x20] >> 4) + 2);
  aiStack_8c[0] = (int)((ulong)(param_2[1] - *param_2) >> 3) * -0x55555555;
  puVar28 = (undefined8 *)param_2[0x11];
  puVar29 = (undefined8 *)param_2[0x12];
  iStack_90 = aiStack_8c[0];
  if (puVar28 != puVar29) {
    do {
      uStack_c0 = (int *)(double)(*(float *)(param_3 + 0x18) * 0.5);
      puVar36 = puVar28 + 2;
      uStack_c8._0_4_ = (int)puVar28[1];
      uStack_c8._4_4_ = (int)((ulong)puVar28[1] >> 0x20);
      uStack_d0._0_4_ = (int)*puVar28;
      uStack_d0._4_4_ = (int)((ulong)*puVar28 >> 0x20);
      func_0x00010a55cf9c(param_2,&uStack_d0);
      puVar28 = puVar36;
    } while (puVar36 != puVar29);
    puVar28 = (undefined8 *)param_2[0x11];
    puVar29 = (undefined8 *)param_2[0x12];
    iStack_90 = (int)((ulong)(param_2[1] - *param_2) >> 3) * -0x55555555;
  }
  for (; puVar28 != puVar29; puVar28 = puVar28 + 2) {
    uStack_c0 = (int *)(double)(*(float *)(param_3 + 0x18) * -0.5);
    uStack_c8._0_4_ = (int)puVar28[1];
    uStack_c8._4_4_ = (int)((ulong)puVar28[1] >> 0x20);
    uStack_d0._0_4_ = (int)*puVar28;
    uStack_d0._4_4_ = (int)((ulong)*puVar28 >> 0x20);
    func_0x00010a55cf9c(param_2,&uStack_d0);
  }
  iStack_94 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  puVar28 = (undefined8 *)param_2[0x17];
  puVar29 = (undefined8 *)param_2[0x18];
  iStack_98 = iStack_94;
  if (puVar28 != puVar29) {
    do {
      FUN_10a560ed0(*puVar28,0,&uStack_d0,param_2[0x10],*(undefined4 *)(puVar28 + 1));
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      puVar28 = puVar28 + 4;
    } while (puVar28 != puVar29);
    puVar28 = (undefined8 *)param_2[0x17];
    puVar29 = (undefined8 *)param_2[0x18];
    iStack_98 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  }
  iVar38 = iStack_98;
  if (puVar28 != puVar29) {
    do {
      FUN_10a560ed0(*puVar28,*(undefined8 *)(param_2[0x10] + 0x10),&uStack_d0,param_2[0x10],
                    *(undefined4 *)(puVar28 + 1));
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      puVar28 = puVar28 + 4;
    } while (puVar28 != puVar29);
    iVar38 = (int)((ulong)(param_2[4] - param_2[3]) >> 4);
  }
  pdVar30 = (double *)param_2[0x11];
  pdVar26 = (double *)param_2[0x12];
  if (pdVar30 != pdVar26) {
    do {
      pbVar11 = *(byte **)param_2[0x10];
      dVar42 = (double)((undefined8 *)param_2[0x10])[1];
      uStack_d0 = (long *)(((*pdVar30 + (double)(float)*(undefined8 *)(pbVar11 + 0x20)) -
                           (double)(float)*(undefined8 *)(pbVar11 + 8)) * dVar42);
      dVar42 = ((pdVar30[1] + (double)(float)((ulong)*(undefined8 *)(pbVar11 + 0x20) >> 0x20)) -
               (double)(float)((ulong)*(undefined8 *)(pbVar11 + 8) >> 0x20)) * dVar42;
      if ((*pbVar11 & 1) != 0) {
        uStack_d0 = (long *)(0.5 - (double)uStack_d0);
      }
      if ((*pbVar11 & 2) != 0) {
        dVar42 = (double)*(float *)(pbVar11 + 0x38) - dVar42;
      }
      uStack_c8 = (int *)((dVar42 - (double)*(float *)(pbVar11 + 0x38)) + 1.0);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      pdVar30 = pdVar30 + 2;
    } while (pdVar30 != pdVar26);
    pdVar30 = (double *)param_2[0x11];
    pdVar26 = (double *)param_2[0x12];
  }
  uVar18 = (long)pdVar26 - (long)pdVar30;
  if (uVar18 != 0) {
    do {
      pbVar11 = *(byte **)param_2[0x10];
      dVar42 = (double)((undefined8 *)param_2[0x10])[1];
      pdVar31 = pdVar30 + 2;
      dVar43 = ((*pdVar30 + (double)(float)*(undefined8 *)(pbVar11 + 0x28)) -
               (double)(float)*(undefined8 *)(pbVar11 + 8)) * dVar42;
      dVar42 = ((pdVar30[1] + (double)(float)((ulong)*(undefined8 *)(pbVar11 + 0x28) >> 0x20)) -
               (double)(float)((ulong)*(undefined8 *)(pbVar11 + 8) >> 0x20)) * dVar42;
      if ((*pbVar11 & 4) != 0) {
        dVar43 = 0.5 - dVar43;
      }
      if ((*pbVar11 & 8) != 0) {
        dVar42 = (double)*(float *)(pbVar11 + 0x38) - dVar42;
      }
      uStack_c8 = (int *)((dVar42 - (double)*(float *)(pbVar11 + 0x38)) + 1.0);
      uStack_d0 = (long *)(1.0 - dVar43);
      FUN_10a55a1d4(param_2 + 3,&uStack_d0);
      pdVar30 = pdVar31;
    } while (pdVar31 != pdVar26);
  }
  lVar27 = *(long *)param_2[0xf];
  lVar41 = ((long *)param_2[0xf])[1];
  if (lVar27 != lVar41) {
    do {
      FUN_10a55dcc8(param_2 + 0x1d,(param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555 + 1);
      FUN_10a55dcc8(param_2 + 0x23,(param_2[0x24] - param_2[0x23] >> 4) * -0x5555555555555555 + 1);
      lVar12 = *(long *)(lVar27 + 0x18);
      lVar19 = *(long *)(lVar27 + 0x20);
      if (lVar19 != lVar12) {
        uVar32 = 1;
        uVar23 = 0;
        do {
          uVar21 = uVar32;
          lVar35 = param_2[0x1e];
          if ((param_2[0x1d] == lVar35) || ((ulong)(lVar19 - lVar12 >> 4) <= uVar23))
          goto LAB_10a54fc90;
          uVar44 = 0x3ff0000000000000;
          if (*(int *)(lVar27 + 0x38) != 1) {
            uVar44 = 0xbff0000000000000;
          }
          plVar33 = plVar13;
          FUN_10a55e2d8(uVar44,plVar13,lVar12 + uVar23 * 0x10);
          uStack_d0._0_4_ = (int)plVar33;
          FUN_109febd04(lVar35 + -0x30,&uStack_d0);
          lVar12 = param_2[0x24];
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((param_2[0x23] == lVar12) ||
             (uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
             (ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18) >> 4) <= uVar23))
          goto LAB_10a54fc90;
          pdVar30 = (double *)(*(long *)(lVar27 + 0x18) + uVar23 * 0x10);
          lStack_e8 = -0x4080000000000000;
          uStack_f0 = CONCAT44(-(float)*pdVar30,(float)pdVar30[1]);
          uStack_d0._0_4_ = 0x3f800000;
          if (*(int *)(lVar27 + 0x38) != 1) {
            uStack_d0._0_4_ = 0xbf800000;
          }
          iVar6 = (int)param_2 + 0x100;
          uStack_c8 = (int *)&uStack_f0;
          FUN_10a55e3d8(CONCAT44(uStack_d0._4_4_,(int)uStack_d0));
          iStack_108 = iVar6;
          FUN_109febd04(lVar12 + -0x30,&iStack_108);
          lVar12 = *(long *)(lVar27 + 0x18);
          lVar19 = *(long *)(lVar27 + 0x20);
          uVar32 = (ulong)((int)uVar21 + 1);
          uVar23 = uVar21;
        } while (uVar21 < (ulong)(lVar19 - lVar12 >> 4));
      }
      if (param_2[0x1d] == param_2[0x1e]) goto LAB_10a54fc90;
      func_0x000109634dec(param_2[0x1e] + -0x18,
                          *(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 6);
      if (param_2[0x23] == param_2[0x24]) goto LAB_10a54fc90;
      func_0x000109634dec(param_2[0x24] + -0x18,
                          *(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 6);
      lVar12 = *(long *)(lVar27 + 0x40);
      lVar19 = *(long *)(lVar27 + 0x48);
      if (lVar19 != lVar12) {
        uVar32 = 0;
        do {
          uVar23 = lVar19 - lVar12 >> 6;
          if (uVar23 <= uVar32) goto LAB_10a54fc90;
          lVar35 = lVar12 + uVar32 * 0x40;
          lVar14 = *(long *)(lVar35 + 0x18);
          if (*(long *)(lVar35 + 0x20) != lVar14) {
            uVar21 = 1;
            uVar16 = 0;
            do {
              uVar40 = uVar21;
              lVar19 = param_2[0x1e];
              if ((param_2[0x1d] == lVar19) ||
                 (lVar35 = *(long *)(lVar19 + -0x18),
                 uVar23 = (*(long *)(lVar19 + -0x10) - lVar35 >> 3) * -0x5555555555555555,
                 uVar23 < uVar32 || uVar23 - uVar32 == 0)) goto LAB_10a54fc90;
              uVar44 = 0xbff0000000000000;
              if (*(int *)(lVar12 + uVar32 * 0x40 + 0x38) != 1) {
                uVar44 = 0x3ff0000000000000;
              }
              plVar33 = plVar13;
              FUN_10a55e2d8(uVar44,plVar13,lVar14 + uVar16 * 0x10);
              uStack_d0._0_4_ = (int)plVar33;
              FUN_109febd04(lVar35 + uVar32 * 0x18,&uStack_d0);
              lVar12 = param_2[0x24];
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
              if (((param_2[0x23] == lVar12) ||
                  (lVar19 = *(long *)(lVar12 + -0x18),
                  uVar23 = (*(long *)(lVar12 + -0x10) - lVar19 >> 3) * -0x5555555555555555,
                  uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                  uVar23 < uVar32 || uVar23 - uVar32 == 0)) ||
                 (uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
                 (ulong)(*(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40) >> 6) <= uVar32))
              goto LAB_10a54fc90;
              lVar12 = *(long *)(lVar27 + 0x40) + uVar32 * 0x40;
              uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
              if ((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 4) <= uVar16)
              goto LAB_10a54fc90;
              pdVar30 = (double *)(*(long *)(lVar12 + 0x18) + uVar16 * 0x10);
              lStack_e8 = 0x3f80000000000000;
              uStack_f0 = CONCAT44(-(float)*pdVar30,(float)pdVar30[1]);
              uStack_d0._0_4_ = 0xbf800000;
              if (*(int *)(lVar12 + 0x38) != 1) {
                uStack_d0._0_4_ = 0x3f800000;
              }
              iVar6 = (int)param_2 + 0x100;
              uStack_c8 = (int *)&uStack_f0;
              FUN_10a55e3d8(CONCAT44(uStack_d0._4_4_,(int)uStack_d0));
              iStack_108 = iVar6;
              FUN_109febd04(lVar19 + uVar32 * 0x18,&iStack_108);
              lVar12 = *(long *)(lVar27 + 0x40);
              lVar19 = *(long *)(lVar27 + 0x48);
              uVar23 = lVar19 - lVar12 >> 6;
              if (uVar23 <= uVar32) goto LAB_10a54fc90;
              lVar35 = lVar12 + uVar32 * 0x40;
              lVar14 = *(long *)(lVar35 + 0x18);
              uVar21 = (ulong)((int)uVar40 + 1);
              uVar16 = uVar40;
            } while (uVar40 < (ulong)(*(long *)(lVar35 + 0x20) - lVar14 >> 4));
          }
          uVar32 = (ulong)((int)uVar32 + 1);
        } while (uVar32 < uVar23);
      }
      lVar27 = lVar27 + 0x58;
    } while (lVar27 != lVar41);
  }
  iStack_9c = (int)((ulong)(param_2[7] - param_2[6]) >> 3) * -0x55555555;
  puVar29 = (undefined8 *)param_2[0x1b];
  for (puVar28 = (undefined8 *)param_2[0x1a]; puVar28 != puVar29; puVar28 = puVar28 + 2) {
    uStack_c8._0_4_ = (int)puVar28[1];
    uStack_c8._4_4_ = (int)((ulong)puVar28[1] >> 0x20);
    uStack_d0._0_4_ = (int)*puVar28;
    uStack_d0._4_4_ = (int)((ulong)*puVar28 >> 0x20);
    uStack_c0 = (int *)0x0;
    func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  }
  FUN_10a55e4cc(param_2 + 9,param_2 + 0x20);
  lVar27 = param_2[6];
  lVar12 = param_2[7];
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  uStack_c0 = (int *)0x3ff0000000000000;
  func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  lVar41 = param_2[6];
  lVar19 = param_2[7];
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  uStack_c0 = (int *)0xbff0000000000000;
  func_0x00010a55cf9c(param_2 + 6,&uStack_d0);
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  bVar5 = *param_3;
  uVar45 = 0x3f800000;
  uVar46 = 0xbf800000;
  uStack_d0._0_4_ = uVar46;
  if ((bVar5 & 1) == 0) {
    uStack_d0._0_4_ = 0x3f800000;
  }
  uStack_c8._4_4_ = uVar46;
  if ((((uint)bVar5 ^ (bVar5 & 2) >> 1) & 1) == 0) {
    uStack_c8._4_4_ = uVar45;
  }
  func_0x00010a55d0b0(param_2 + 9,&uStack_d0);
  uStack_d0._4_4_ = 0;
  uStack_c8._0_4_ = 0;
  bVar5 = *param_3;
  uStack_d0._0_4_ = uVar45;
  if ((bVar5 & 4) == 0) {
    uStack_d0._0_4_ = 0xbf800000;
  }
  uStack_c8._4_4_ = uVar46;
  if ((bVar5 & 4) >> 2 == (bVar5 & 8) >> 3) {
    uStack_c8._4_4_ = uVar45;
  }
  func_0x00010a55d0b0(param_2 + 9,&uStack_d0);
  plVar13 = (long *)param_2[0xf];
  lVar35 = *plVar13;
  lVar14 = plVar13[1];
  if (lVar14 != lVar35) {
    uVar32 = 0;
    do {
      uStack_c8 = aiStack_8c;
      uStack_c0 = &iStack_94;
      uStack_b8 = &iStack_9c;
      piStack_b0 = &iStack_90;
      piStack_a8 = &iStack_98;
      uVar23 = (plVar13[1] - *plVar13 >> 3) * 0x2e8ba2e8ba2e8ba3;
      uStack_d0 = param_2;
      if (((uVar23 < uVar32 || uVar23 - uVar32 == 0) ||
          (uVar23 = (param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar32 || uVar23 - uVar32 == 0)) ||
         ((uVar23 = (param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar32 || uVar23 - uVar32 == 0 ||
          (uVar23 = (param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555, uStack_d0 = param_2,
          uVar23 < uVar32 || uVar23 - uVar32 == 0)))) goto LAB_10a54fc90;
      uStack_d0 = param_2;
      FUN_10a560ab8(&uStack_d0,*plVar13 + uVar32 * 0x58,param_2[0x26] + uVar32 * 0x30,
                    param_2[0x1d] + uVar32 * 0x30,param_2[0x29] + uVar32 * 0x30,0);
      plVar13 = (long *)param_2[0xf];
      lVar35 = *plVar13;
      lVar14 = plVar13[1];
      uVar23 = (lVar14 - lVar35 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar23 < uVar32 || uVar23 - uVar32 == 0) goto LAB_10a54fc90;
      lVar20 = lVar35 + uVar32 * 0x58;
      lVar22 = *(long *)(lVar20 + 0x40);
      if (*(long *)(lVar20 + 0x48) != lVar22) {
        uVar21 = 0;
        uVar16 = 1;
        do {
          uVar23 = (param_2[0x27] - param_2[0x26] >> 4) * -0x5555555555555555;
          if (((uVar23 < uVar32 || uVar23 - uVar32 == 0) ||
              (lVar14 = param_2[0x26] + uVar32 * 0x30, lVar35 = *(long *)(lVar14 + 0x18),
              uVar23 = (*(long *)(lVar14 + 0x20) - lVar35 >> 3) * -0x5555555555555555,
              uVar23 < uVar21 || uVar23 - uVar21 == 0)) ||
             ((uVar23 = (param_2[0x1e] - param_2[0x1d] >> 4) * -0x5555555555555555,
              uVar23 < uVar32 || uVar23 - uVar32 == 0 ||
              (((lVar20 = param_2[0x1d] + uVar32 * 0x30, lVar14 = *(long *)(lVar20 + 0x18),
                uVar23 = (*(long *)(lVar20 + 0x20) - lVar14 >> 3) * -0x5555555555555555,
                uVar23 < uVar21 || uVar23 - uVar21 == 0 ||
                (uVar23 = (param_2[0x2a] - param_2[0x29] >> 4) * -0x5555555555555555,
                uVar23 < uVar32 || uVar23 - uVar32 == 0)) ||
               (lVar24 = param_2[0x29] + uVar32 * 0x30, lVar20 = *(long *)(lVar24 + 0x18),
               uVar23 = (*(long *)(lVar24 + 0x20) - lVar20 >> 3) * -0x5555555555555555,
               uVar23 < uVar21 || uVar23 - uVar21 == 0)))))) goto LAB_10a54fc90;
          FUN_10a560ab8(&uStack_d0,lVar22 + uVar21 * 0x40,lVar35 + uVar21 * 0x18,
                        lVar14 + uVar21 * 0x18,lVar20 + uVar21 * 0x18,1);
          plVar13 = (long *)param_2[0xf];
          lVar35 = *plVar13;
          lVar14 = plVar13[1];
          uVar23 = (lVar14 - lVar35 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar23 < uVar32 || uVar23 - uVar32 == 0) goto LAB_10a54fc90;
          lVar20 = lVar35 + uVar32 * 0x58;
          lVar22 = *(long *)(lVar20 + 0x40);
          bVar9 = uVar16 < (ulong)(*(long *)(lVar20 + 0x48) - lVar22 >> 6);
          uVar21 = uVar16;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (bVar9);
      }
      uVar32 = (ulong)((int)uVar32 + 1);
    } while (uVar32 < uVar23);
  }
  if (lVar14 != lVar35) {
    uVar32 = 0;
    iVar6 = (int)((ulong)(lVar12 - lVar27) >> 3) * -0x55555555;
    iVar7 = (int)((ulong)(lVar19 - lVar41) >> 3) * -0x55555555;
    do {
      uStack_f0 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d0._0_4_ = 0;
      uStack_d0._4_4_ = 0;
      uStack_c8._0_4_ = 0;
      uStack_c8._4_4_ = 0;
      uStack_c0 = (int *)0x0;
      FUN_10a55d480(&uStack_f0,&uStack_d0);
      if (CONCAT44(uStack_d0._4_4_,(int)uStack_d0) != 0) {
        _free();
      }
      lVar27 = lStack_e8;
      plVar13 = (long *)(lVar35 + uVar32 * 0x58);
      puVar28 = (undefined8 *)*plVar13;
      puVar29 = (undefined8 *)plVar13[1];
      if (puVar28 != puVar29) {
        uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
        uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
        if (uStack_f0 == lStack_e8) {
LAB_10a54fc90:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a54fc94);
          (*pcVar8)();
        }
        plVar33 = (long *)(lStack_e8 + -0x18);
        puVar36 = *(undefined8 **)(lStack_e8 + -0x10);
        do {
          if (puVar36 < *(undefined8 **)(lVar27 + -8)) {
            uVar44 = *puVar28;
            puVar37 = puVar36 + 2;
            puVar36[1] = puVar28[1];
            *puVar36 = uVar44;
          }
          else {
            lVar41 = (long)puVar36 - *plVar33;
            uVar23 = (lVar41 >> 4) + 1;
            if (uVar23 >> 0x3c != 0) {
              FUN_10a35e504();
              goto LAB_10a54fc90;
            }
            uVar16 = (long)*(undefined8 **)(lVar27 + -8) - *plVar33;
            uVar21 = (long)uVar16 >> 3;
            if (uVar21 <= uVar23) {
              uVar21 = uVar23;
            }
            if (0x7fffffffffffffef < uVar16) {
              uVar21 = 0xfffffffffffffff;
            }
            plVar34 = plVar33;
            func_0x000109435ef8(plVar33,uVar21,0);
            puVar37 = (undefined8 *)((long)plVar34 + lVar41);
            uVar44 = *puVar28;
            puVar37[1] = puVar28[1];
            *puVar37 = uVar44;
            puVar17 = *(undefined8 **)(lVar27 + -0x18);
            puVar2 = *(undefined8 **)(lVar27 + -0x10);
            lVar41 = (long)puVar17 - (long)puVar2;
            puVar36 = (undefined8 *)((long)puVar37 + lVar41);
            puVar25 = puVar36;
            if (lVar41 != 0) {
              do {
                puVar15 = puVar17 + 2;
                uVar44 = *puVar17;
                puVar25[1] = puVar17[1];
                *puVar25 = uVar44;
                puVar17 = puVar15;
                puVar25 = puVar25 + 2;
              } while (puVar15 != puVar2);
              puVar17 = (undefined8 *)*plVar33;
            }
            puVar37 = puVar37 + 2;
            *(undefined8 **)(lVar27 + -0x18) = puVar36;
            *(undefined8 **)(lVar27 + -0x10) = puVar37;
            *(long **)(lVar27 + -8) = plVar34 + uVar21 * 2;
            if (puVar17 != (undefined8 *)0x0) {
              _free(puVar17);
            }
          }
          *(undefined8 **)(lVar27 + -0x10) = puVar37;
          puVar28 = puVar28 + 4;
          puVar36 = puVar37;
        } while (puVar28 != puVar29);
      }
      plVar33 = (long *)plVar13[9];
      for (plVar13 = (long *)plVar13[8]; plVar13 != plVar33; plVar13 = plVar13 + 8) {
        uStack_d0._0_4_ = 0;
        uStack_d0._4_4_ = 0;
        uStack_c8._0_4_ = 0;
        uStack_c8._4_4_ = 0;
        uStack_c0 = (int *)0x0;
        FUN_10a55d480(&uStack_f0,&uStack_d0);
        if (CONCAT44(uStack_d0._4_4_,(int)uStack_d0) != 0) {
          _free();
        }
        lVar27 = lStack_e8;
        puVar28 = (undefined8 *)*plVar13;
        puVar29 = (undefined8 *)plVar13[1];
        if (puVar28 != puVar29) {
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uStack_f0 == lStack_e8) goto LAB_10a54fc90;
          plVar34 = (long *)(lStack_e8 + -0x18);
          puVar36 = *(undefined8 **)(lStack_e8 + -0x10);
          do {
            if (puVar36 < *(undefined8 **)(lVar27 + -8)) {
              uVar44 = *puVar28;
              puVar37 = puVar36 + 2;
              puVar36[1] = puVar28[1];
              *puVar36 = uVar44;
            }
            else {
              lVar41 = (long)puVar36 - *plVar34;
              uVar23 = (lVar41 >> 4) + 1;
              if (uVar23 >> 0x3c != 0) {
                FUN_10a35e504();
                uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
                uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
                goto LAB_10a54fc90;
              }
              uVar16 = (long)*(undefined8 **)(lVar27 + -8) - *plVar34;
              uVar21 = (long)uVar16 >> 3;
              if (uVar21 <= uVar23) {
                uVar21 = uVar23;
              }
              if (0x7fffffffffffffef < uVar16) {
                uVar21 = 0xfffffffffffffff;
              }
              plVar10 = plVar34;
              func_0x000109435ef8(plVar34,uVar21,0);
              puVar37 = (undefined8 *)((long)plVar10 + lVar41);
              uVar44 = *puVar28;
              puVar37[1] = puVar28[1];
              *puVar37 = uVar44;
              puVar17 = *(undefined8 **)(lVar27 + -0x18);
              puVar2 = *(undefined8 **)(lVar27 + -0x10);
              lVar41 = (long)puVar17 - (long)puVar2;
              puVar36 = (undefined8 *)((long)puVar37 + lVar41);
              puVar25 = puVar36;
              if (lVar41 != 0) {
                do {
                  puVar15 = puVar17 + 2;
                  uVar44 = *puVar17;
                  puVar25[1] = puVar17[1];
                  *puVar25 = uVar44;
                  puVar17 = puVar15;
                  puVar25 = puVar25 + 2;
                } while (puVar15 != puVar2);
                puVar17 = (undefined8 *)*plVar34;
              }
              puVar37 = puVar37 + 2;
              *(undefined8 **)(lVar27 + -0x18) = puVar36;
              *(undefined8 **)(lVar27 + -0x10) = puVar37;
              *(long **)(lVar27 + -8) = plVar10 + uVar21 * 2;
              if (puVar17 != (undefined8 *)0x0) {
                _free(puVar17);
              }
            }
            *(undefined8 **)(lVar27 + -0x10) = puVar37;
            puVar28 = puVar28 + 4;
            puVar36 = puVar37;
          } while (puVar28 != puVar29);
        }
      }
      FUN_10a55d5f8(&iStack_108,&uStack_f0);
      lVar27 = CONCAT44(uStack_104,iStack_108);
      if (lStack_100 - lVar27 == 0) {
        if (lStack_100 != 0) goto LAB_10a54fc08;
      }
      else {
        uVar21 = 0;
        uVar23 = lStack_100 - lVar27 >> 2;
        uVar39 = 3;
        do {
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((ulong)(param_2[0x15] - param_2[0x14] >> 2) <= uVar32) goto LAB_10a54fc90;
          uStack_d0._4_4_ = *(int *)(lVar27 + uVar21 * 4);
          iVar3 = *(int *)(param_2[0x14] + uVar32 * 4);
          iVar1 = aiStack_8c[0] + iVar3;
          uStack_d0._0_4_ = iVar1 + uStack_d0._4_4_;
          iVar3 = iVar3 + iVar38;
          uStack_d0._4_4_ = iVar3 + uStack_d0._4_4_;
          uVar16 = (ulong)(uVar39 - 2);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,iVar6);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uVar23 <= uVar16) goto LAB_10a54fc90;
          iVar4 = *(int *)(lVar27 + uVar16 * 4);
          uStack_c8._4_4_ = iVar1 + iVar4;
          uStack_c0 = (int *)CONCAT44(iVar6,iVar3 + iVar4);
          uVar40 = (ulong)(uVar39 - 1);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,iVar6);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if (uVar23 <= uVar40) goto LAB_10a54fc90;
          iVar4 = *(int *)(lVar27 + uVar40 * 4);
          uStack_b8 = (int *)CONCAT44(iVar3 + iVar4,iVar1 + iVar4);
          piStack_b0 = (int *)CONCAT44(piStack_b0._4_4_,iVar6);
          uStack_c8._0_4_ = iVar6;
          FUN_10a55dbbc(param_2 + 0xc,&uStack_d0);
          uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8);
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0);
          if ((uVar23 <= uVar21) ||
             (uStack_c8 = (int *)CONCAT44(uStack_c8._4_4_,(int)uStack_c8),
             uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(int)uStack_d0),
             (ulong)(param_2[0x15] - param_2[0x14] >> 2) <= uVar32)) goto LAB_10a54fc90;
          uStack_d0._4_4_ = *(int *)(lVar27 + uVar21 * 4);
          iVar3 = *(int *)(param_2[0x14] + uVar32 * 4);
          iVar1 = iStack_90 + iVar3;
          uStack_d0._0_4_ = iVar1 + uStack_d0._4_4_;
          iVar3 = iVar3 + iVar38 + (int)(uVar18 >> 4);
          uStack_d0._4_4_ = iVar3 + uStack_d0._4_4_;
          iVar4 = *(int *)(lVar27 + uVar40 * 4);
          uStack_c8._4_4_ = iVar1 + iVar4;
          uStack_c0 = (int *)CONCAT44(iVar7,iVar3 + iVar4);
          iVar4 = *(int *)(lVar27 + uVar16 * 4);
          uStack_b8 = (int *)CONCAT44(iVar3 + iVar4,iVar1 + iVar4);
          piStack_b0 = (int *)CONCAT44(piStack_b0._4_4_,iVar7);
          uStack_c8._0_4_ = iVar7;
          FUN_10a55dbbc(param_2 + 0xc,&uStack_d0);
          uVar21 = (ulong)uVar39;
          uVar16 = (ulong)uVar39;
          uVar39 = uVar39 + 3;
        } while (uVar16 < uVar23);
LAB_10a54fc08:
        __ZdlPv(lVar27);
      }
      FUN_10a560780(&uStack_f0);
      uVar32 = (ulong)((int)uVar32 + 1);
      lVar35 = *(long *)param_2[0xf];
      uVar23 = (((long *)param_2[0xf])[1] - lVar35 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar32 <= uVar23 && uVar23 - uVar32 != 0);
  }
  FUN_10a5607f4(param_1,param_2);
  return;
}



/* Entry: 10a54fce4; end: 10a550087;  */

void FUN_10a54fce4(undefined8 *param_1,long *param_2,long *param_3)

{
  double *****pppppdVar1;
  double *****pppppdVar2;
  undefined8 *puVar3;
  double *****pppppdVar4;
  long lVar5;
  float *pfVar6;
  double *****pppppdVar7;
  code *pcVar8;
  double *****pppppdVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double ****ppppdVar16;
  double dVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar21;
  ulong uVar20;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  double ****ppppdVar25;
  double dStack_f0;
  double dStack_e8;
  double ****ppppdStack_e0;
  double ****ppppdStack_d8;
  double ****ppppdStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double dStack_b0;
  int iStack_a8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (param_2 == param_3) {
      return;
    }
    iStack_a8 = 0;
    dStack_b0 = 0.0;
    lStack_c8 = 0;
    ppppdStack_d0 = (double ****)0x0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    lStack_c0 = 0;
    ppppdStack_d8 = (double ****)0x0;
    ppppdStack_e0 = (double ****)0x0;
    pfVar10 = (float *)*param_2;
    lVar12 = param_2[1] - (long)pfVar10;
    uVar11 = lVar12 >> 3;
    if (1 < uVar11) {
      dStack_b0 = 0.0;
      uVar14 = 1;
      uVar15 = uVar11;
      pfVar6 = pfVar10;
      do {
        uVar19 = *(undefined8 *)pfVar6;
        uVar22 = uVar19;
        if (uVar15 != 1) {
          if (uVar11 <= uVar14) goto LAB_10a550058;
          uVar22 = *(undefined8 *)(pfVar6 + 2);
        }
        fVar18 = (float)uVar22 - (float)uVar19;
        fVar21 = (float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
        dStack_b0 = dStack_b0 + (double)SQRT(fVar18 * fVar18 + fVar21 * fVar21);
        uVar14 = uVar14 + 1;
        uVar15 = uVar15 - 1;
        pfVar6 = pfVar6 + 2;
      } while (uVar15 != 0);
    }
    if (lVar12 == 0) {
LAB_10a54fff4:
      iStack_a8 = 0;
    }
    else {
      uVar14 = 0;
      ppppdVar25 = (double ****)0x0;
      do {
        if (uVar14 == 0) {
          uVar20 = (ulong)(uint)*pfVar10;
          fVar18 = pfVar10[1];
          uVar15 = (ulong)((int)uVar11 - 1);
          fVar21 = *(float *)((long)pfVar10 + lVar12 + -8) - *pfVar10;
          fVar23 = *(float *)((long)pfVar10 + lVar12 + -4) - fVar18;
          fVar24 = 1.0 / SQRT(fVar21 * fVar21 + fVar23 * fVar23);
          fVar21 = fVar21 * fVar24;
          fVar23 = fVar23 * fVar24;
          fVar24 = fVar21 * 0.0 - fVar23;
          fVar21 = fVar21 + fVar23 * 0.0;
        }
        else {
          uVar15 = uVar14 - 1;
          if (uVar11 <= uVar15) goto LAB_10a550058;
          fVar18 = (pfVar10 + uVar14 * 2)[1];
          uVar20 = *(ulong *)(pfVar10 + uVar14 * 2);
          fVar21 = (float)*(undefined8 *)(pfVar10 + uVar15 * 2) - (float)uVar20;
          fVar23 = (float)((ulong)*(undefined8 *)(pfVar10 + uVar15 * 2) >> 0x20) -
                   (float)(uVar20 >> 0x20);
          fVar24 = SQRT(fVar21 * fVar21 + fVar23 * fVar23);
          ppppdVar25 = (double ****)((double)ppppdVar25 + (double)fVar24 / dStack_b0);
          fVar24 = 1.0 / fVar24;
          fVar21 = fVar21 * fVar24;
          fVar23 = fVar23 * fVar24;
          fVar24 = fVar21 * 0.0 - fVar23;
          fVar21 = fVar21 + fVar23 * 0.0;
        }
        if (ppppdStack_d8 < ppppdStack_d0) {
          *ppppdStack_d8 = (double ***)(double)(float)uVar20;
          ppppdStack_d8[1] = (double ***)(double)fVar18;
          ppppdStack_d8[2] = (double ***)ppppdVar25;
          pppppdVar9 = (double *****)(ppppdStack_d8 + 4);
          *(int *)(ppppdStack_d8 + 3) = (int)uVar15;
          *(int *)((long)ppppdStack_d8 + 0x1c) = (int)uVar14;
        }
        else {
          lVar12 = (long)ppppdStack_d8 - (long)ppppdStack_e0;
          uVar11 = (lVar12 >> 5) + 1;
          if (uVar11 >> 0x3b != 0) {
            FUN_10a35e3ec();
LAB_10a550058:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a55005c);
            (*pcVar8)();
          }
          uVar13 = (long)ppppdStack_d0 - (long)ppppdStack_e0 >> 4;
          if (uVar13 <= uVar11) {
            uVar13 = uVar11;
          }
          if (0x7fffffffffffffdf < (ulong)((long)ppppdStack_d0 - (long)ppppdStack_e0)) {
            uVar13 = 0x7ffffffffffffff;
          }
          if (uVar13 == 0) {
            pppppdVar9 = (double *****)0x0;
          }
          else {
            pppppdVar9 = &ppppdStack_e0;
            FUN_10a35e400(pppppdVar9,uVar13,0);
          }
          puVar3 = (undefined8 *)((long)pppppdVar9 + lVar12);
          *puVar3 = (double ****)(double)(float)uVar20;
          puVar3[1] = (double ****)(double)fVar18;
          puVar3[2] = ppppdVar25;
          *(int *)(puVar3 + 3) = (int)uVar15;
          *(int *)((long)puVar3 + 0x1c) = (int)uVar14;
          pppppdVar4 = (double *****)((long)puVar3 + ((long)ppppdStack_e0 - (long)ppppdStack_d8));
          pppppdVar2 = pppppdVar4;
          pppppdVar7 = (double *****)ppppdStack_e0;
          for (pppppdVar1 = (double *****)ppppdStack_e0; (double *****)ppppdStack_d8 != pppppdVar1;
              pppppdVar1 = pppppdVar1 + 4) {
            ppppdVar16 = *pppppdVar1;
            pppppdVar2[1] = pppppdVar1[1];
            ppppdStack_e0 = (double ****)pppppdVar7;
            *pppppdVar2 = ppppdVar16;
            ppppdVar16 = pppppdVar1[2];
            pppppdVar2[3] = pppppdVar1[3];
            pppppdVar2[2] = ppppdVar16;
            pppppdVar2 = pppppdVar2 + 4;
            pppppdVar7 = (double *****)ppppdStack_e0;
          }
          ppppdStack_d0 = (double ****)(pppppdVar9 + uVar13 * 4);
          pppppdVar9 = (double *****)(puVar3 + 4);
          ppppdStack_e0 = (double ****)pppppdVar4;
          if (pppppdVar7 != (double *****)0x0) {
            ppppdStack_d8 = (double ****)pppppdVar9;
            _free(pppppdVar7);
          }
        }
        dStack_f0 = (double)fVar24;
        dStack_e8 = (double)fVar21;
        ppppdStack_d8 = (double ****)pppppdVar9;
        FUN_10a55a1d4(&lStack_c8,&dStack_f0);
        uVar14 = uVar14 + 1;
        pfVar10 = (float *)*param_2;
        lVar12 = param_2[1] - (long)pfVar10;
        uVar11 = lVar12 >> 3;
      } while (uVar14 < uVar11);
      uVar11 = (long)ppppdStack_d8 - (long)ppppdStack_e0;
      if (uVar11 == 0) goto LAB_10a54fff4;
      pppppdVar9 = (double *****)(ppppdStack_e0 + 1);
      dVar17 = 0.0;
      lVar12 = 1;
      do {
        lVar5 = 0;
        if (lVar12 != (long)uVar11 >> 5) {
          lVar5 = lVar12;
        }
        dVar17 = dVar17 + ((double)(ppppdStack_e0 + lVar5 * 4)[1] + (double)*pppppdVar9) *
                          ((double)ppppdStack_e0[lVar5 * 4] - (double)pppppdVar9[-1]);
        pppppdVar9 = pppppdVar9 + 4;
        lVar12 = lVar12 + 1;
      } while (lVar12 - ((long)uVar11 >> 5) != 1);
      iStack_a8 = -(uint)(dVar17 < 0.0);
      if (0.0 < dVar17) {
        iStack_a8 = 1;
      }
      if (0x40 < uVar11) {
        FUN_10a5509b8(param_1,&ppppdStack_e0);
      }
    }
    if (lStack_c8 != 0) {
      lStack_c0 = lStack_c8;
      _free();
    }
    if ((double *****)ppppdStack_e0 != (double *****)0x0) {
      ppppdStack_d8 = ppppdStack_e0;
      _free();
    }
    param_2 = param_2 + 3;
  } while( true );
}



/* Entry: 10a550088; end: 10a5505bb;  */

void FUN_10a550088(long *param_1,long *param_2,int param_3)

{
  double *pdVar1;
  ulong **ppuVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  double *pdVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dStack_120;
  double dStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  undefined8 *apuStack_80 [2];
  
  lVar17 = *param_2;
  lVar16 = param_2[1];
  if (lVar17 != lVar16) {
    do {
      lVar21 = lVar17 + 0x40;
      if (*(int *)(lVar17 + 0x38) == 0) {
        lVar20 = lVar17;
        if ((lVar17 != lVar16) && (lVar21 != lVar16)) {
          do {
            if (*(int *)(lVar21 + 0x38) != 0) {
              FUN_10a55a8b4(lVar17,lVar21);
              FUN_10a55a32c(lVar17 + 0x18,lVar21 + 0x18);
              uVar10 = *(undefined8 *)(lVar21 + 0x30);
              *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(lVar21 + 0x38);
              *(undefined8 *)(lVar17 + 0x30) = uVar10;
              lVar17 = lVar17 + 0x40;
            }
            lVar21 = lVar21 + 0x40;
          } while (lVar21 != lVar16);
          lVar16 = param_2[1];
          lVar20 = lVar17;
        }
        break;
      }
      lVar20 = lVar16;
      lVar17 = lVar21;
    } while (lVar21 != lVar16);
    FUN_10a5505bc(param_2,lVar20,lVar16);
    plVar11 = (long *)*param_2;
    if (plVar11 != (long *)param_2[1]) {
      iVar19 = 1;
      plVar14 = plVar11;
      dVar27 = 0.0;
      do {
        lVar17 = *plVar14;
        dVar26 = 0.0;
        if (plVar14[1] - lVar17 != 0) {
          lVar21 = plVar14[1] - lVar17 >> 5;
          pdVar12 = (double *)(lVar17 + 8);
          lVar16 = 1;
          do {
            lVar20 = 0;
            if (lVar16 != lVar21) {
              lVar20 = lVar16;
            }
            pdVar1 = (double *)(lVar17 + lVar20 * 0x20);
            dVar26 = dVar26 + (pdVar1[1] + *pdVar12) * (*pdVar1 - pdVar12[-1]);
            pdVar12 = pdVar12 + 4;
            lVar16 = lVar16 + 1;
          } while (lVar16 - lVar21 != 1);
        }
        dVar25 = ABS(dVar26);
        iVar8 = (int)plVar14[7];
        if (ABS(dVar26) <= dVar27) {
          dVar25 = dVar27;
          iVar8 = iVar19;
        }
        iVar19 = iVar8;
        plVar14 = plVar14 + 8;
        dVar27 = dVar25;
      } while (plVar14 != (long *)param_2[1]);
      puStack_a0 = (ulong *)0x0;
      puStack_98 = (ulong *)0x0;
      uStack_90 = 0;
      puStack_c0 = (ulong *)0x0;
      puStack_b8 = (ulong *)0x0;
      uStack_b0 = 0;
      dStack_120 = 0.0;
      do {
        ppuVar2 = &puStack_a0;
        if ((int)plVar11[(long)dStack_120 * 8 + 7] != iVar19) {
          ppuVar2 = &puStack_c0;
        }
        FUN_10a17478c(ppuVar2,&dStack_120);
        uVar10 = uStack_90;
        puVar5 = puStack_98;
        puVar4 = puStack_a0;
        dStack_120 = (double)((long)dStack_120 + 1);
        plVar11 = (long *)*param_2;
      } while ((ulong)dStack_120 < (ulong)(param_2[1] - (long)plVar11 >> 6));
      if (param_3 == 1) {
        puStack_98 = puStack_b8;
        puStack_a0 = puStack_c0;
        puStack_b8 = puVar5;
        puStack_c0 = puVar4;
        uStack_90 = uStack_b0;
        uStack_b0 = uVar10;
      }
      else if (param_3 == 2) {
        puStack_b8 = puStack_c0;
      }
      puVar7 = puStack_98;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar4 = puStack_c0;
      puVar5 = puStack_b8;
      puVar6 = puStack_a0;
      if (puStack_a0 != puStack_98) {
        puVar18 = puStack_a0;
        do {
          lStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          lStack_100 = 0;
          dStack_118 = 0.0;
          dStack_120 = 0.0;
          dStack_f0 = -1.0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_e0 = 0;
          if ((ulong)(param_2[1] - *param_2 >> 6) <= *puVar18) goto LAB_10a550564;
          pdVar12 = (double *)(*param_2 + *puVar18 * 0x40);
          if (&dStack_120 != pdVar12) {
            FUN_10a55a37c(&dStack_120,*pdVar12,pdVar12[1],(long)pdVar12[1] - (long)*pdVar12 >> 5);
            func_0x00010a55a4e0(&lStack_108,pdVar12[3],pdVar12[4],
                                (long)pdVar12[4] - (long)pdVar12[3] >> 4);
          }
          dStack_f0 = pdVar12[6];
          uStack_e8 = *(undefined4 *)(pdVar12 + 7);
          FUN_10a55069c(param_1,&dStack_120);
          apuStack_80[0] = &uStack_e0;
          FUN_10a34ef08(apuStack_80);
          if (lStack_108 != 0) {
            lStack_100 = lStack_108;
            _free();
          }
          if (dStack_120 != 0.0) {
            dStack_118 = dStack_120;
            _free();
          }
          puVar18 = puVar18 + 1;
          puVar4 = puStack_c0;
          puVar5 = puStack_b8;
          puVar6 = puStack_a0;
        } while (puVar18 != puVar7);
      }
      while( true ) {
        puVar7 = puStack_b8;
        puStack_a0 = puVar6;
        if (puVar4 == puStack_b8) {
          lVar16 = param_1[1];
          puStack_b8 = puVar5;
          for (lVar17 = *param_1; lVar17 != lVar16; lVar17 = lVar17 + 0x58) {
            if (*(int *)(lVar17 + 0x38) != 1) {
              FUN_10a550adc(lVar17);
            }
            lVar20 = *(long *)(lVar17 + 0x48);
            for (lVar21 = *(long *)(lVar17 + 0x40); lVar21 != lVar20; lVar21 = lVar21 + 0x40) {
              if (*(int *)(lVar21 + 0x38) == 1) {
                FUN_10a550adc(lVar21);
              }
            }
          }
          if (puStack_c0 != (ulong *)0x0) {
            puStack_b8 = puStack_c0;
            __ZdlPv();
          }
          if (puStack_a0 == (ulong *)0x0) {
            return;
          }
          puStack_98 = puStack_a0;
          __ZdlPv();
          return;
        }
        lVar17 = *param_2;
        uVar22 = param_2[1] - lVar17 >> 6;
        puStack_b8 = puVar5;
        if (uVar22 <= *puVar4) break;
        plVar11 = (long *)(lVar17 + *puVar4 * 0x40);
        dStack_120 = 0.0;
        dStack_118 = 0.0;
        for (pdVar12 = (double *)*plVar11; pdVar12 != (double *)plVar11[1]; pdVar12 = pdVar12 + 4) {
          dStack_120 = dStack_120 + *pdVar12;
          dStack_118 = dStack_118 + pdVar12[1];
        }
        dVar27 = (double)(ulong)(plVar11[1] - *plVar11 >> 5);
        dStack_120 = dStack_120 / dVar27;
        dStack_118 = dStack_118 / dVar27;
        lVar16 = (long)puStack_98 - (long)puVar6;
        if (lVar16 != 0) {
          lVar21 = 0;
          dVar27 = 1.79769313486232e+308;
          uVar23 = 0xffffffff;
          do {
            if (uVar22 <= puVar6[lVar21]) goto LAB_10a550564;
            plVar14 = (long *)(lVar17 + puVar6[lVar21] * 0x40);
            lVar20 = *plVar14;
            lVar13 = plVar14[1];
            lVar15 = lVar20;
            FUN_10a550904(lVar20,lVar13,&dStack_120);
            dVar26 = dVar27;
            uVar24 = uVar23;
            if ((int)lVar15 != 0) {
              lVar13 = lVar13 - lVar20;
              if (lVar13 == 0) {
                dVar25 = 0.0;
              }
              else {
                lVar13 = lVar13 >> 5;
                pdVar12 = (double *)(lVar20 + 8);
                dVar25 = 0.0;
                lVar15 = 1;
                do {
                  lVar3 = 0;
                  if (lVar15 != lVar13) {
                    lVar3 = lVar15;
                  }
                  pdVar1 = (double *)(lVar20 + lVar3 * 0x20);
                  dVar25 = dVar25 + (pdVar1[1] + *pdVar12) * (*pdVar1 - pdVar12[-1]);
                  pdVar12 = pdVar12 + 4;
                  lVar15 = lVar15 + 1;
                } while (lVar15 - lVar13 != 1);
              }
              dVar26 = ABS(dVar25);
              uVar24 = (uint)lVar21;
              if (dVar27 <= ABS(dVar25)) {
                dVar26 = dVar27;
                uVar24 = uVar23;
              }
            }
            lVar21 = lVar21 + 1;
            dVar27 = dVar26;
            uVar23 = uVar24;
          } while (lVar21 != lVar16 >> 3);
          if (-1 < (int)uVar24) {
            uVar22 = (param_1[1] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
            if (uVar22 < uVar24 || uVar22 - uVar24 == 0) break;
            FUN_10a5509b8(*param_1 + (ulong)uVar24 * 0x58 + 0x40,plVar11);
          }
        }
        puVar4 = puVar4 + 1;
        puVar5 = puStack_b8;
        puVar6 = puStack_a0;
        puStack_b8 = puVar7;
      }
LAB_10a550564:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a550568);
      (*pcVar9)();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a5505bc; end: 10a55069b;  */

ulong FUN_10a5505bc(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a55069c);
    (*pcVar3)();
  }
  if (param_3 != param_2) {
    uVar5 = param_1[1];
    uVar6 = param_2;
    if (param_3 != uVar5) {
      lVar7 = *param_1;
      lVar8 = lVar7 + param_2;
      lVar9 = -lVar7;
      lVar10 = lVar7 + param_3;
      do {
        lVar1 = lVar8 + lVar9;
        lVar2 = lVar10 + lVar9;
        FUN_10a55a8b4(lVar1,lVar2);
        FUN_10a55a32c(lVar1 + 0x18,lVar2 + 0x18);
        uVar4 = *(undefined8 *)(lVar2 + 0x30);
        *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar1 + 0x30) = uVar4;
        lVar8 = lVar8 + 0x40;
        lVar10 = lVar10 + 0x40;
      } while (lVar10 + lVar9 != uVar5);
      uVar5 = param_1[1];
      uVar6 = lVar8 - lVar7;
    }
    while (uVar5 != uVar6) {
      uVar5 = uVar5 - 0x40;
      FUN_10a34ef78(uVar5);
    }
    param_1[1] = uVar6;
  }
  return param_2;
}



/* Entry: 10a55069c; end: 10a5508ab;  */

undefined8 ** FUN_10a55069c(undefined8 **param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  
  ppuVar4 = (undefined8 **)param_1[1];
  if (ppuVar4 < param_1[2]) {
    ppuVar5 = ppuVar4;
    FUN_10a55a604(ppuVar4,param_2);
    ppuVar4 = ppuVar4 + 0xb;
    param_1[1] = ppuVar4;
  }
  else {
    lVar13 = (long)ppuVar4 - (long)*param_1;
    uVar11 = (lVar13 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    ppuVar4 = param_1;
    if (0x2e8ba2e8ba2e8ba < uVar11) {
      FUN_10a55a6b8();
LAB_10a550888:
      func_0x000109ffded8();
      FUN_10a55a6cc(&puStack_68);
      ppuVar5 = ppuVar4;
      __Unwind_Resume();
      pcStack_78 = FUN_10a5508ac;
      ppuStack_98 = ppuVar5 + 8;
      ppuStack_90 = ppuVar4;
      ppuStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      FUN_10a34ef08(&ppuStack_98);
      if (ppuVar5[3] != (undefined8 *)0x0) {
        ppuVar5[4] = ppuVar5[3];
        _free();
      }
      if (*ppuVar5 != (undefined8 *)0x0) {
        ppuVar5[1] = *ppuVar5;
        _free();
      }
      return ppuVar5;
    }
    lVar7 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar9 = lVar7 * 0x5d1745d1745d1746;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x2e8ba2e8ba2e8ba;
    }
    ppuStack_48 = param_1;
    if (uVar9 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar9) goto LAB_10a550888;
      puVar3 = (undefined8 *)(uVar9 * 0x58);
      __Znwm();
    }
    lVar13 = (long)puVar3 + lVar13;
    puStack_68 = puVar3;
    puStack_60 = (undefined8 *)lVar13;
    ppuStack_58 = (undefined8 **)lVar13;
    puStack_50 = puVar3 + uVar9 * 0xb;
    FUN_10a55a604(lVar13,param_2);
    ppuStack_58 = (undefined8 **)(lVar13 + 0x58);
    puVar12 = *param_1;
    puVar2 = param_1[1];
    puVar1 = (undefined8 *)(lVar13 + ((long)puVar12 - (long)puVar2));
    puVar6 = puVar12;
    puVar8 = puVar1;
    ppuVar4 = ppuStack_58;
    puVar3 = puVar3 + uVar9 * 0xb;
    if ((long)puVar12 - (long)puVar2 != 0) {
      do {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        uVar10 = *puVar6;
        puVar8[1] = puVar6[1];
        *puVar8 = uVar10;
        puVar8[2] = puVar6[2];
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        uVar10 = puVar6[3];
        puVar8[4] = puVar6[4];
        puVar8[3] = uVar10;
        puVar8[5] = puVar6[5];
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        uVar10 = puVar6[6];
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar6 + 7);
        puVar8[6] = uVar10;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[8] = 0;
        uVar10 = puVar6[8];
        puVar8[9] = puVar6[9];
        puVar8[8] = uVar10;
        puVar8[10] = puVar6[10];
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6 = puVar6 + 0xb;
        puVar8 = puVar8 + 0xb;
      } while (puVar6 != puVar2);
      do {
        FUN_10a34ee74(puVar12);
        puVar12 = puVar12 + 0xb;
      } while (puVar12 != puVar2);
      puVar12 = *param_1;
      ppuVar4 = ppuStack_58;
      puVar3 = puStack_50;
    }
    *param_1 = puVar1;
    param_1[1] = ppuVar4;
    puStack_50 = param_1[2];
    param_1[2] = puVar3;
    ppuVar5 = &puStack_68;
    puStack_68 = puVar12;
    puStack_60 = puVar12;
    ppuStack_58 = (undefined8 **)puVar12;
    FUN_10a55a6cc(ppuVar5);
  }
  param_1[1] = ppuVar4;
  return ppuVar5;
}



/* Entry: 10a5508ac; end: 10a550903;  */

long * FUN_10a5508ac(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 8;
  FUN_10a34ef08(&plStack_28);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
  }
  return param_1;
}



/* Entry: 10a550904; end: 10a5509b7;  */

byte FUN_10a550904(undefined1 (*param_1) [16],undefined1 (*param_2) [16],double *param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_1 == param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5509b8);
    (*pcVar2)();
  }
  bVar4 = 0;
  dVar6 = *param_3;
  pauVar3 = param_1;
  uVar5 = 1;
  dVar7 = *(double *)param_2[-2];
  dVar9 = *(double *)(param_2[-2] + 8);
  do {
    dVar10 = *(double *)(*pauVar3 + 8);
    dVar8 = *(double *)*pauVar3;
    if (param_3[1] < dVar9 == dVar10 <= param_3[1]) {
      if (dVar7 <= dVar6) {
        if (dVar6 < dVar8) goto LAB_10a550970;
      }
      else if (dVar8 <= dVar6) {
LAB_10a550970:
        auVar11._8_8_ = dVar9;
        auVar11._0_8_ = dVar7;
        auVar11 = NEON_ext(auVar11,*pauVar3,8,1);
        auVar12._8_8_ = dVar9;
        auVar12._0_8_ = dVar7;
        auVar12 = NEON_ext(*pauVar3,auVar12,8,1);
        bVar4 = bVar4 + (dVar9 <= dVar10 !=
                        0.0 < (dVar7 - *param_3) * (auVar11._0_8_ - auVar12._0_8_) +
                              (dVar9 - param_3[1]) * (auVar11._8_8_ - auVar12._8_8_));
      }
      else {
        bVar4 = bVar4 + 1;
      }
    }
    bVar1 = (ulong)((long)param_2 - (long)param_1 >> 5) <= uVar5;
    pauVar3 = pauVar3 + 2;
    uVar5 = (ulong)((int)uVar5 + 1);
    dVar7 = dVar8;
    dVar9 = dVar10;
    if (bVar1) {
      return bVar4 & 1;
    }
  } while( true );
}



/* Entry: 10a5509b8; end: 10a550adb;  */

void FUN_10a5509b8(ulong *param_1,undefined8 param_2)

{
  double *pdVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  uVar11 = param_1[1];
  if (uVar11 < param_1[2]) {
    FUN_10a55a718(uVar11,param_2);
    uVar11 = uVar11 + 0x40;
    param_1[1] = uVar11;
  }
  else {
    lVar12 = uVar11 - *param_1;
    uVar11 = (lVar12 >> 6) + 1;
    if (uVar11 >> 0x3a != 0) {
      FUN_10a35e5d4();
      func_0x00010a55a840(&puStack_58);
      __Unwind_Resume();
      uVar7 = (uint)((int)param_1[7] == -1);
      if ((int)param_1[7] == 1) {
        uVar7 = 0xffffffff;
      }
      *(uint *)(param_1 + 7) = uVar7;
      puVar5 = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      if ((puVar5 != puVar9) && (puVar10 = puVar9 + -4, puVar5 < puVar10)) {
        do {
          uVar14 = puVar5[1];
          uVar13 = *puVar5;
          uVar15 = puVar5[3];
          uVar17 = puVar5[2];
          uVar16 = *puVar10;
          puVar5[1] = puVar10[1];
          *puVar5 = uVar16;
          uVar16 = puVar10[2];
          puVar5[3] = puVar10[3];
          puVar5[2] = uVar16;
          puVar9 = puVar10 + -4;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10[3] = uVar15;
          puVar10[2] = uVar17;
          puVar5 = puVar5 + 4;
          puVar10 = puVar9;
        } while (puVar5 < puVar9);
        puVar5 = (undefined8 *)*param_1;
        puVar9 = (undefined8 *)param_1[1];
      }
      if (puVar5 != puVar9) {
        uVar14 = puVar9[-3];
        uVar13 = puVar9[-4];
        lVar12 = (long)puVar9 - (long)puVar5 >> 5;
        uVar11 = lVar12 - 1;
        if (uVar11 != 0) {
          lVar12 = lVar12 * 0x20 + -0x40;
          do {
            uVar3 = uVar11 - 1;
            uVar8 = (long)puVar9 - (long)puVar5 >> 5;
            if ((uVar8 <= uVar3) || (uVar8 <= uVar11)) goto LAB_10a550c1c;
            puVar5 = (undefined8 *)((long)puVar5 + lVar12);
            puVar5[5] = puVar5[1];
            puVar5[4] = *puVar5;
            puVar5 = (undefined8 *)*param_1;
            puVar9 = (undefined8 *)param_1[1];
            uVar8 = (long)puVar9 - (long)puVar5 >> 5;
            if ((uVar8 <= uVar3) || (uVar8 <= uVar11)) goto LAB_10a550c1c;
            uVar17 = NEON_rev64(*(undefined8 *)((long)puVar5 + lVar12 + 0x38),4);
            *(double *)((long)puVar5 + lVar12 + 0x30) =
                 1.0 - *(double *)((long)puVar5 + lVar12 + 0x10);
            *(undefined8 *)((long)puVar5 + lVar12 + 0x38) = uVar17;
            lVar12 = lVar12 + -0x20;
            uVar11 = uVar3;
          } while (uVar3 != 0);
        }
        if (puVar9 != puVar5) {
          puVar5[1] = uVar14;
          *puVar5 = uVar13;
          uVar11 = *param_1;
          if (param_1[1] != uVar11) {
            *(undefined8 *)(uVar11 + 0x10) = 0;
            uVar13 = NEON_rev64(*(undefined8 *)(uVar11 + 0x18),4);
            *(undefined8 *)(uVar11 + 0x18) = uVar13;
            pdVar1 = (double *)param_1[4];
            for (pdVar6 = (double *)param_1[3]; pdVar6 != pdVar1; pdVar6 = pdVar6 + 2) {
              pdVar6[1] = -pdVar6[1];
              *pdVar6 = -*pdVar6;
            }
            return;
          }
        }
      }
LAB_10a550c1c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a550c20);
      (*pcVar2)();
    }
    uVar3 = param_1[2] - *param_1;
    uVar8 = (long)uVar3 >> 5;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar8 = 0x3ffffffffffffff;
    }
    puStack_38 = param_1;
    if (uVar8 == 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      puVar4 = param_1;
      FUN_10a35e5e8();
    }
    lVar12 = (long)puVar4 + lVar12;
    puStack_58 = puVar4;
    puStack_50 = (ulong *)lVar12;
    puStack_48 = (ulong *)lVar12;
    puStack_40 = puVar4 + uVar8 * 8;
    FUN_10a55a718(lVar12,param_2);
    uVar11 = lVar12 + 0x40;
    uVar3 = lVar12 + (*param_1 - param_1[1]);
    FUN_10a55a7a0(*param_1,param_1[1],uVar3);
    puStack_58 = (ulong *)*param_1;
    *param_1 = uVar3;
    param_1[1] = uVar11;
    puStack_40 = (ulong *)param_1[2];
    param_1[2] = (ulong)(puVar4 + uVar8 * 8);
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    func_0x00010a55a840(&puStack_58);
  }
  param_1[1] = uVar11;
  return;
}



/* Entry: 10a550adc; end: 10a550c1f;  */

void FUN_10a550adc(ulong *param_1)

{
  double *pdVar1;
  code *pcVar2;
  undefined8 *puVar3;
  double *pdVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar5 = (uint)((int)param_1[7] == -1);
  if ((int)param_1[7] == 1) {
    uVar5 = 0xffffffff;
  }
  *(uint *)(param_1 + 7) = uVar5;
  puVar3 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if ((puVar3 != puVar7) && (puVar8 = puVar7 + -4, puVar3 < puVar8)) {
    do {
      uVar13 = puVar3[1];
      uVar12 = *puVar3;
      uVar14 = puVar3[3];
      uVar16 = puVar3[2];
      uVar15 = *puVar8;
      puVar3[1] = puVar8[1];
      *puVar3 = uVar15;
      uVar15 = puVar8[2];
      puVar3[3] = puVar8[3];
      puVar3[2] = uVar15;
      puVar7 = puVar8 + -4;
      puVar8[1] = uVar13;
      *puVar8 = uVar12;
      puVar8[3] = uVar14;
      puVar8[2] = uVar16;
      puVar3 = puVar3 + 4;
      puVar8 = puVar7;
    } while (puVar3 < puVar7);
    puVar3 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
  }
  if (puVar3 != puVar7) {
    uVar13 = puVar7[-3];
    uVar12 = puVar7[-4];
    lVar9 = (long)puVar7 - (long)puVar3 >> 5;
    uVar11 = lVar9 - 1;
    if (uVar11 != 0) {
      lVar9 = lVar9 * 0x20 + -0x40;
      do {
        uVar10 = uVar11 - 1;
        uVar6 = (long)puVar7 - (long)puVar3 >> 5;
        if ((uVar6 <= uVar10) || (uVar6 <= uVar11)) goto LAB_10a550c1c;
        puVar3 = (undefined8 *)((long)puVar3 + lVar9);
        puVar3[5] = puVar3[1];
        puVar3[4] = *puVar3;
        puVar3 = (undefined8 *)*param_1;
        puVar7 = (undefined8 *)param_1[1];
        uVar6 = (long)puVar7 - (long)puVar3 >> 5;
        if ((uVar6 <= uVar10) || (uVar6 <= uVar11)) goto LAB_10a550c1c;
        uVar16 = NEON_rev64(*(undefined8 *)((long)puVar3 + lVar9 + 0x38),4);
        *(double *)((long)puVar3 + lVar9 + 0x30) = 1.0 - *(double *)((long)puVar3 + lVar9 + 0x10);
        *(undefined8 *)((long)puVar3 + lVar9 + 0x38) = uVar16;
        lVar9 = lVar9 + -0x20;
        uVar11 = uVar10;
      } while (uVar10 != 0);
    }
    if (puVar7 != puVar3) {
      puVar3[1] = uVar13;
      *puVar3 = uVar12;
      uVar11 = *param_1;
      if (param_1[1] != uVar11) {
        *(undefined8 *)(uVar11 + 0x10) = 0;
        uVar12 = NEON_rev64(*(undefined8 *)(uVar11 + 0x18),4);
        *(undefined8 *)(uVar11 + 0x18) = uVar12;
        pdVar1 = (double *)param_1[4];
        for (pdVar4 = (double *)param_1[3]; pdVar4 != pdVar1; pdVar4 = pdVar4 + 2) {
          pdVar4[1] = -pdVar4[1];
          *pdVar4 = -*pdVar4;
        }
        return;
      }
    }
  }
LAB_10a550c1c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a550c20);
  (*pcVar2)();
}



/* Entry: 10a550c20; end: 10a550e7f;  */

void FUN_10a550c20(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long alStack_210 [3];
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_68 [3];
  
  FUN_10a54fce4(auStack_68,*param_2,param_2[1]);
  FUN_10a550088(&lStack_80,auStack_68,*(undefined1 *)(param_3 + 1));
  for (lVar2 = lStack_80; lVar2 != lStack_78; lVar2 = lVar2 + 0x58) {
    FUN_10a54d45c((double)*(float *)(param_3 + 0x3c),(double)*(float *)(param_3 + 0x1c),lVar2);
    lVar1 = *(long *)(lVar2 + 0x48);
    for (lVar3 = *(long *)(lVar2 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
      FUN_10a54d45c((double)*(float *)(param_3 + 0x3c),(double)*(float *)(param_3 + 0x1c),lVar3);
    }
  }
  if (*(char *)(param_3 + 2) == '\x01') {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    plStack_168 = &lStack_80;
    uStack_170 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_88 = 0;
    alStack_210[0] = param_3;
    puStack_160 = (undefined1 *)alStack_210;
    FUN_10a54dd20(param_1,&plStack_1e0,param_3);
    func_0x00010a559c08(&plStack_1e0);
  }
  else {
    FUN_10a559d94(alStack_210,param_3,&lStack_80);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_170 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_88 = 0;
    plStack_168 = &lStack_80;
    puStack_160 = (undefined1 *)alStack_210;
    FUN_10a54ed44(param_1,&plStack_1e0,param_3);
    func_0x00010a55a0f4(&plStack_1e0);
    if (lStack_1f8 != 0) {
      lStack_1f0 = lStack_1f8;
      __ZdlPv();
    }
  }
  plStack_1e0 = &lStack_80;
  FUN_10a34ee04(&plStack_1e0);
  plStack_1e0 = auStack_68;
  FUN_10a34ef08(&plStack_1e0);
  return;
}


