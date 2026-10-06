/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2a85f0; end: 10a2a8633;  */

undefined8 * FUN_10a2a85f0(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bbac60) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a2a8634; end: 10a2a864b;  */

undefined8 FUN_10a2a8634(void)

{
  return 0;
}



/* Entry: 10a2a864c; end: 10a2a86c7;  */

void FUN_10a2a864c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010a2a8684(param_2 + 1);
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a2a86c8; end: 10a2a8777;  */

void FUN_10a2a86c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8510(param_1,param_2,FUN_10a268420,0,param_3,param_5);
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



/* Entry: 10a2a8778; end: 10a2a8827;  */

void FUN_10a2a8778(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8510(param_1,param_2,0x10a268448,0,param_3,param_5);
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



/* Entry: 10a2a8828; end: 10a2a88e3;  */

void FUN_10a2a8828(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a85f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 6);
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



/* Entry: 10a2a88e4; end: 10a2a899f;  */

void FUN_10a2a88e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a85f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x34);
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



/* Entry: 10a2a89a0; end: 10a2a8a5b;  */

void FUN_10a2a89a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a85f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 7);
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



/* Entry: 10a2a8a5c; end: 10a2a8c8b;  */

void FUN_10a2a8a5c(undefined8 *param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pppuStack_78,&UNK_10f6498de,param_2);
  ppppuVar3 = &pppuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar3,&UNK_10f6498e7,0x11);
  pppuVar13 = ppppuVar3[1];
  pppuVar12 = *ppppuVar3;
  param_1[2] = ppppuVar3[2];
  param_1[1] = pppuVar13;
  *param_1 = pppuVar12;
  ppppuVar3[1] = (undefined8 ***)0x0;
  ppppuVar3[2] = (undefined8 ***)0x0;
  *ppppuVar3 = (undefined8 ***)0x0;
  if ((char)bStack_61 < '\0') {
    __ZdlPv(pppuStack_78);
  }
  lVar5 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != lVar5) {
    uVar9 = 0;
    do {
      if (uVar9 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,&DAT_10f68f19e,2);
        lVar5 = *(long *)(param_2 + 0x18);
        lVar6 = *(long *)(param_2 + 0x20);
      }
      if ((ulong)(lVar6 - lVar5 >> 2) <= uVar9) goto LAB_10a2a8c34;
      __ZNSt3__19to_stringEf(&pppuStack_78,*(undefined4 *)(lVar5 + uVar9 * 4));
      bVar7 = bStack_61;
      uVar11 = uStack_70;
      ppppuVar3 = (undefined8 ****)pppuStack_78;
      uVar10 = (ulong)bStack_61;
      uVar8 = uStack_70;
      if (-1 < (char)bStack_61) {
        uVar8 = uVar10;
      }
      if (uVar8 != 0) {
        ppppuVar1 = (undefined8 ****)pppuStack_78;
        if (-1 < (char)bStack_61) {
          ppppuVar1 = &pppuStack_78;
        }
        ppppuVar4 = ppppuVar1;
        _memchr(ppppuVar1,0x2e,uVar8);
        if (ppppuVar4 != (undefined8 ****)0x0 &&
            (long)ppppuVar4 - (long)ppppuVar1 != 0xffffffffffffffff) {
          do {
            if (uVar8 == 0) {
              uVar8 = 0xffffffffffffffff;
              break;
            }
            lVar5 = uVar8 - 1;
            uVar8 = uVar8 - 1;
          } while (*(char *)((long)ppppuVar1 + lVar5) == '0');
          uVar8 = (uVar8 - (uVar8 == (long)ppppuVar4 - (long)ppppuVar1)) + 1;
          if ((char)bVar7 < '\0') {
            uVar10 = uVar8;
            if (uVar11 < uVar8) goto LAB_10a2a8c30;
          }
          else {
            if (uVar10 < uVar8) {
LAB_10a2a8c30:
              FUN_109ffddc8();
LAB_10a2a8c34:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2a8c38);
              (*pcVar2)();
            }
            bStack_61 = (byte)uVar8;
            ppppuVar3 = &pppuStack_78;
            uVar10 = uStack_70;
          }
          uStack_70 = uVar10;
          *(undefined1 *)((long)ppppuVar3 + uVar8) = 0;
          uVar10 = (ulong)bStack_61;
          ppppuVar3 = (undefined8 ****)pppuStack_78;
          uVar11 = uStack_70;
          bVar7 = bStack_61;
        }
      }
      if (-1 < (char)bVar7) {
        uVar11 = uVar10;
        ppppuVar3 = &pppuStack_78;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,ppppuVar3,uVar11);
      if ((char)bStack_61 < '\0') {
        __ZdlPv(pppuStack_78);
      }
      uVar9 = uVar9 + 1;
      lVar5 = *(long *)(param_2 + 0x18);
      lVar6 = *(long *)(param_2 + 0x20);
    } while (uVar9 < (ulong)(lVar6 - lVar5 >> 2));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f4f6855,2);
  return;
}



/* Entry: 10a2a8c8c; end: 10a2a8d3b;  */

void FUN_10a2a8c8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8d3c(param_1,param_2,FUN_10a2a8a5c,0,param_3,param_5);
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



/* Entry: 10a2a8d3c; end: 10a2a8e1b;  */

void FUN_10a2a8d3c(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10a2a8e1c(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a2a8e1c; end: 10a2a8e5f;  */

undefined8 * FUN_10a2a8e1c(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bbac98) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a2a8e60; end: 10a2a8e77;  */

undefined8 FUN_10a2a8e60(void)

{
  return 0;
}



/* Entry: 10a2a8e78; end: 10a2a8ef3;  */

void FUN_10a2a8e78(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010a2a8eb0(param_2 + 1);
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a2a8ef4; end: 10a2a8fa3;  */

void FUN_10a2a8ef4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8d3c(param_1,param_2,0x10a268470,0,param_3,param_5);
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



/* Entry: 10a2a8fa4; end: 10a2a90af;  */

/* WARNING: Removing unreachable block (ram,0x00010a2a9054) */

void FUN_10a2a8fa4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a8e1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0ca588(&stack0xffffffffffffffa8,plVar4[3],plVar4[4],plVar4[4] - plVar4[3] >> 2);
  FUN_10a2a90b0(param_1,param_2,0,0);
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



/* Entry: 10a2a90b0; end: 10a2a91bf;  */

void FUN_10a2a90b0(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puStack_50 = (undefined8 *)(double)*(float *)(param_3 + lVar1 * 4);
      iStack_58 = 3;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a2a91c0; end: 10a2a927b;  */

void FUN_10a2a91c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a927c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 1);
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



/* Entry: 10a2a927c; end: 10a2a92bf;  */

undefined8 * FUN_10a2a927c(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bb9aa0) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a2a92c0; end: 10a2a92d7;  */

undefined8 FUN_10a2a92c0(void)

{
  return 0;
}



/* Entry: 10a2a92d8; end: 10a2a9317;  */

void FUN_10a2a92d8(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a2a9318; end: 10a2a93d3;  */

void FUN_10a2a9318(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a927c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0xc);
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



/* Entry: 10a2a93d4; end: 10a2a948f;  */

void FUN_10a2a93d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a927c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[2];
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



/* Entry: 10a2a9490; end: 10a2a956f;  */

void FUN_10a2a9490(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a927c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
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



/* Entry: 10a2a9570; end: 10a2a966b;  */

undefined1  [16] FUN_10a2a9570(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9cd0;
  puVar1 = &UNK_10f64697a;
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
    ppuStack_40 = &PTR_DAT_110bb9cd0;
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



/* Entry: 10a2a966c; end: 10a2a96cf;  */

ulong FUN_10a2a966c(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2a96d0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a2a96d0,5,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a2a96d0; end: 10a2a9967;  */

/* WARNING: Possible PIC construction at 0x00010a2a995c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2a9960) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9980) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9990) */
/* WARNING: Removing unreachable block (ram,0x00010a2a99b8) */
/* WARNING: Removing unreachable block (ram,0x00010a2a99c4) */
/* WARNING: Removing unreachable block (ram,0x00010a2a99dc) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9a10) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9a4c) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9a64) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9a80) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9ab4) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9abc) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9ac8) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9ad0) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9adc) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b78) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9ae0) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b0c) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b10) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b20) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b30) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b34) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b3c) */
/* WARNING: Removing unreachable block (ram,0x00010a2a9b44) */
/* WARNING: Removing unreachable block (ram,0x00010a2a99d8) */
/* WARNING: Removing unreachable block (ram,0x00010a2a99ac) */

void FUN_10a2a96d0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *unaff_x19;
  undefined8 **unaff_x20;
  undefined8 **unaff_x21;
  long lVar14;
  undefined1 *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 **ppuStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 **ppuStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  char cStack_a1;
  char cStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a2a9968(param_2,param_3);
  FUN_10a2a99d0(param_5);
  if (*param_4 == 3) {
    uVar19 = *(ulong *)(param_4 + 2);
    if (0x7fefffffffffffff < (uVar19 & 0x7fffffffffffffff)) {
      uVar19 = 0;
    }
    if (param_4[4] == 3) {
      uVar20 = *(ulong *)(param_4 + 6);
      FUN_10a2a99f4(auStack_c8,param_2,param_4[8],*(undefined8 *)(param_4 + 10));
      FUN_10a059354(auStack_d8,param_2,param_4 + 0xc);
      if (0x7fefffffffffffff < (uVar20 & 0x7fffffffffffffff)) {
        uVar20 = 0;
      }
      uStack_b8 = 0;
      cStack_a0 = '\0';
      FUN_10a268b80(auStack_98,plVar9,&uStack_b8,auStack_c8,auStack_d8);
      if ((cStack_a0 == '\x01') && (cStack_a1 < '\0')) {
        __ZdlPv(CONCAT71(uStack_b7,uStack_b8));
      }
      puVar2 = auStack_98;
      FUN_10a268e44(uVar19,uVar20,plVar9,auStack_98);
      ppuVar10 = apuStack_90;
      (*(code *)*apuStack_90[0])();
      if (ppuStack_d0 != (undefined8 **)0x0) {
        ppuVar3 = ppuStack_d0 + 1;
        do {
          puVar13 = *ppuVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar5) {
            *ppuVar3 = (undefined8 *)((long)puVar13 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d0)[2])(ppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar10 = ppuStack_d0;
        }
      }
      if (ppuStack_c0 != (undefined8 **)0x0) {
        ppuVar3 = ppuStack_c0 + 1;
        do {
          puVar13 = *ppuVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar5) {
            *ppuVar3 = (undefined8 *)((long)puVar13 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c0)[2])(ppuStack_c0);
          ppuVar10 = ppuStack_c0;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        (*(code *)*apuStack_90[0])(apuStack_90);
        func_0x00010a07a8a8(auStack_d8);
        FUN_10a2a9c10(auStack_c8);
        unaff_x30 = 0x10a2a9960;
        register0x00000008 = (BADSPACEBASE *)auStack_e0;
        unaff_x19 = plVar8;
        unaff_x20 = ppuVar10;
        unaff_x21 = ppuStack_c0;
        unaff_x22 = puVar2;
        unaff_x23 = param_2;
        unaff_x24 = param_5;
        unaff_x29 = puVar1;
      }
      plVar9 = plVar8 + 0x4b;
      lVar11 = plVar8[0x59];
      uVar19 = lVar11 - 1;
      plVar8[0x59] = uVar19;
      if (uVar19 < 8) {
        uVar19 = plVar9[lVar11 + 2];
        if (plVar8[0x5a] == uVar19) {
          return;
        }
      }
      else {
        uVar19 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar19) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 ***)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar11 = *plVar9;
      lVar16 = plVar8[0x4c];
      lVar14 = lVar16 - lVar11;
      uVar20 = lVar14 >> 4;
      if (uVar20 < uVar19) {
        uVar18 = uVar19 - uVar20;
        lVar17 = plVar8[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar18) {
          if (uVar19 >> 0x3c == 0) {
            uVar12 = lVar17 - lVar11 >> 3;
            if (uVar12 <= uVar19) {
              uVar12 = uVar19;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar11)) {
              uVar12 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar9;
            if (uVar12 >> 0x3c == 0) {
              lVar7 = uVar12 << 4;
              __Znwm();
              lVar16 = lVar7 + lVar14;
              _bzero(lVar16,uVar18 * 0x10);
              lVar15 = lVar16 + uVar20 * -0x10;
              _memcpy(lVar15,lVar11,lVar14);
              *plVar9 = lVar15;
              plVar8[0x4c] = lVar16 + uVar18 * 0x10;
              plVar8[0x4d] = lVar7 + uVar12 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar11;
              *(long *)((long)register0x00000008 + -0x70) = lVar17;
              *(long *)((long)register0x00000008 + -0x88) = lVar11;
              *(long *)((long)register0x00000008 + -0x80) = lVar11;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
        _bzero(lVar16,uVar18 * 0x10);
        plVar8[0x4c] = lVar16 + uVar18 * 0x10;
      }
      else if (uVar19 < uVar20) {
        lVar11 = lVar11 + uVar19 * 0x10;
        while (lVar16 != lVar11) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar8[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar19;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2a98fc);
  (*pcVar6)();
}



/* Entry: 10a2a9968; end: 10a2a99cf;  */

void FUN_10a2a9968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  int iStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar7 = param_1;
  func_0x000109898688();
  if (lVar7 != 0) {
    FUN_10a053854(param_1,lVar7);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  iVar10 = 0xf68f52e;
  func_0x00010988bd28();
  if (iVar10 == 4) {
    return;
  }
  puVar4 = (undefined8 *)0x4;
  plVar9 = (long *)0x0;
  FUN_10a052ee0();
  if (iVar10 == 7) {
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x98))(plVar9,param_4);
    plVar6 = plVar9;
    plStack_68 = plVar5;
    (**(code **)(*plVar9 + 0x228))(plVar9,&plStack_68);
    if ((int)plVar6 != 0) {
      plVar5 = plVar9;
      (**(code **)(*plVar9 + 0x58))();
      lVar7 = plVar5[0x48];
      if ((lVar7 == 0) ||
         (___dynamic_cast(lVar7,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar5 = plStack_68,
         lVar7 == 0)) goto LAB_10a2a9b78;
      plStack_68 = (long *)0x0;
      iStack_78 = 7;
      plStack_70 = plVar5;
      plStack_80 = plVar9;
      FUN_10a688ac0(&uStack_a0,&plStack_80,*(undefined8 *)(lVar7 + 8));
      if ((3 < iStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)*plStack_68)();
    }
    if (((ulong)plVar6 & 1) != 0) {
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110bb9ad8;
      puVar8[4] = lStack_98;
      puVar8[3] = uStack_a0;
      if (lStack_98 != 0) {
        plVar9 = (long *)(lStack_98 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar8[6] = lStack_88;
      puVar8[5] = uStack_90;
      if (lStack_88 != 0) {
        plVar9 = (long *)(lStack_88 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar8 + 0xb) = 2;
      *puVar4 = puVar8 + 3;
      puVar4[1] = puVar8;
      FUN_10a688c1c(&uStack_a0);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a9b78:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a9b88);
  (*pcVar3)();
}



/* Entry: 10a2a99d0; end: 10a2a99f3;  */

void FUN_10a2a99d0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  int iStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_1 == 4) {
    return;
  }
  puVar4 = (undefined8 *)0x4;
  plVar9 = (long *)0x0;
  FUN_10a052ee0();
  if (param_1 == 7) {
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x98))(plVar9,param_4);
    plVar6 = plVar9;
    plStack_48 = plVar5;
    (**(code **)(*plVar9 + 0x228))(plVar9,&plStack_48);
    if ((int)plVar6 != 0) {
      plVar5 = plVar9;
      (**(code **)(*plVar9 + 0x58))();
      lVar7 = plVar5[0x48];
      if ((lVar7 == 0) ||
         (___dynamic_cast(lVar7,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar5 = plStack_48,
         lVar7 == 0)) goto LAB_10a2a9b78;
      plStack_48 = (long *)0x0;
      iStack_58 = 7;
      plStack_50 = plVar5;
      plStack_60 = plVar9;
      FUN_10a688ac0(&uStack_80,&plStack_60,*(undefined8 *)(lVar7 + 8));
      if ((3 < iStack_58) && (plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
    }
    if (plStack_48 != (long *)0x0) {
      (**(code **)*plStack_48)();
    }
    if (((ulong)plVar6 & 1) != 0) {
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110bb9ad8;
      puVar8[4] = lStack_78;
      puVar8[3] = uStack_80;
      if (lStack_78 != 0) {
        plVar9 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar8[6] = lStack_68;
      puVar8[5] = uStack_70;
      if (lStack_68 != 0) {
        plVar9 = (long *)(lStack_68 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar8 + 0xb) = 2;
      *puVar4 = puVar8 + 3;
      puVar4[1] = puVar8;
      FUN_10a688c1c(&uStack_80);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a9b78:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a9b88);
  (*pcVar3)();
}



/* Entry: 10a2a99f4; end: 10a2a9bb7;  */

void FUN_10a2a99f4(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar5 = param_2;
    plStack_38 = plVar4;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar5 != 0) {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar4 = plStack_38,
         lVar6 == 0)) goto LAB_10a2a9b78;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_40 = plVar4;
      plStack_50 = param_2;
      FUN_10a688ac0(&uStack_70,&plStack_50,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110bb9ad8;
      puVar7[4] = lStack_68;
      puVar7[3] = uStack_70;
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar7[6] = lStack_58;
      puVar7[5] = uStack_60;
      if (lStack_58 != 0) {
        plVar4 = (long *)(lStack_58 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar7 + 0xb) = 2;
      *param_1 = puVar7 + 3;
      param_1[1] = puVar7;
      FUN_10a688c1c(&uStack_70);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a9b78:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a9b88);
  (*pcVar3)();
}



/* Entry: 10a2a9bb8; end: 10a2a9bc7;  */

void FUN_10a2a9bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9ad8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a9bc8; end: 10a2a9be7;  */

void FUN_10a2a9bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9ad8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a9be8; end: 10a2a9c0f;  */

undefined1  [16] FUN_10a2a9be8(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a9c0c);
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



/* Entry: 10a2a9c10; end: 10a2a9ccb;  */

long FUN_10a2a9c10(long param_1)

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



/* Entry: 10a2a9ccc; end: 10a2aa13b;  */

/* WARNING: Possible PIC construction at 0x00010a2aa130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2aa134) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa148) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa218) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa178) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa1d8) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa208) */
/* WARNING: Removing unreachable block (ram,0x00010a2aa144) */

void FUN_10a2a9ccc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *unaff_x19;
  undefined8 **unaff_x20;
  undefined4 *puVar18;
  undefined8 **unaff_x21;
  long lVar19;
  long *unaff_x22;
  long lVar20;
  long lVar21;
  long *unaff_x23;
  long lVar22;
  long *unaff_x24;
  ulong uVar23;
  long unaff_x25;
  long lVar24;
  ulong uVar25;
  long *unaff_x26;
  long *plVar26;
  ulong unaff_x27;
  ulong uVar27;
  long *unaff_x28;
  long *plVar28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_100;
  undefined4 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 **ppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  char cStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a2a9968(param_2,param_3);
  FUN_10a2aa13c(param_5);
  plVar10 = param_2;
  func_0x000109898688(param_2,param_4);
  if (plVar10 == (long *)0x0) {
    puVar13 = &UNK_10f68f52e;
  }
  else {
    if ((undefined **)*plVar10 == &PTR_FUN_110bbab10) {
      FUN_10a2a99f4(&puStack_e0,param_2,*(undefined4 *)(param_4 + 0x10),
                    *(undefined8 *)(param_4 + 0x18));
      FUN_10a059354(auStack_f0,param_2,param_4 + 0x20);
      __ZNSt3__15mutex4lockEv(plVar9 + 0xd);
      plVar2 = plVar10 + 1;
      lVar24 = plVar9[0xc];
      plVar11 = (long *)(lVar24 + 0x28);
      puStack_f8 = param_1;
      func_0x000107c2b05c(plVar11,plVar2);
      plVar26 = *(long **)(lVar24 + 0x30);
      uVar27 = unaff_x27;
      plVar28 = unaff_x28;
      if (plVar26 != (long *)0x0) {
        uVar27 = (long)plVar26 - 1;
        if (((ulong)plVar26 & uVar27) == 0) {
          plVar28 = (long *)(uVar27 & (ulong)plVar11);
        }
        else {
          plVar28 = plVar11;
          if (plVar26 <= plVar11) {
            uVar23 = 0;
            if (plVar26 != (long *)0x0) {
              uVar23 = (ulong)plVar11 / (ulong)plVar26;
            }
            plVar28 = (long *)((long)plVar11 - uVar23 * (long)plVar26);
          }
        }
        plVar14 = *(long **)(*(long *)(lVar24 + 0x28) + (long)plVar28 * 8);
        param_2 = plVar11;
        if (plVar14 != (long *)0x0) {
          for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            plVar15 = (long *)plVar14[1];
            if (plVar11 == plVar15) {
              uVar23 = lVar24 + 0x28;
              func_0x000107c2b068(uVar23,plVar14 + 2,plVar2);
              if ((uVar23 & 1) != 0) {
                param_2 = (long *)plVar9[0xc];
                (**(code **)(*param_2 + 0x10))(param_2,plVar2);
                plVar11 = param_2;
                __ZNSt3__16chrono12system_clock3nowEv();
                puVar18 = puStack_f8;
                if ((ulong)((long)plVar11 / 1000000) < *param_2 + 600U) {
                  if ((puStack_e0 == (undefined8 *)0x0) || (*(char *)(puStack_e0 + 8) != '\x02')) {
                    if ((puStack_e0 != (undefined8 *)0x0) && (*(char *)(puStack_e0 + 8) == '\x01'))
                    {
                      (*(code *)*puStack_e0)(param_2);
                    }
                  }
                  else {
                    FUN_10a2aaf30(puStack_e0,param_2);
                    puVar18 = puStack_f8;
                  }
                  ppuVar12 = (undefined8 **)(plVar9 + 0xd);
                  __ZNSt3__15mutex6unlockEv();
                  goto LAB_10a2a9fb4;
                }
                break;
              }
            }
            else {
              if (((ulong)plVar26 & uVar27) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar27);
              }
              else if (plVar26 <= plVar15) {
                uVar23 = 0;
                if (plVar26 != (long *)0x0) {
                  uVar23 = (ulong)plVar15 / (ulong)plVar26;
                }
                plVar15 = (long *)((long)plVar15 - uVar23 * (long)plVar26);
              }
              if (plVar15 != plVar28) break;
            }
          }
        }
      }
      __ZNSt3__15mutex6unlockEv(plVar9 + 0xd);
      puVar18 = puStack_f8;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        plStack_100 = (long *)plVar10[1];
        if (-1 < *(char *)((long)plVar10 + 0x1f)) {
          plStack_100 = plVar2;
        }
        func_0x00010ae06f08(1,4,&UNK_10f648219,&UNK_10f6482cc,0x54,&UNK_10f648361);
      }
      if (*(char *)((long)plVar10 + 0x1f) < '\0') {
        func_0x000107c3192c(&lStack_d0,plVar10[1],plVar10[2]);
      }
      else {
        lStack_c8 = plVar10[2];
        lStack_d0 = *plVar2;
        lStack_c0 = plVar10[3];
      }
      cStack_b8 = '\x01';
      FUN_10a268b80(&lStack_b0,plVar9,&lStack_d0,&puStack_e0,auStack_f0);
      if ((cStack_b8 == '\x01') && (lStack_c0 < 0)) {
        __ZdlPv(lStack_d0);
      }
      plVar11 = plVar10 + 4;
      plVar14 = plVar10 + 5;
      plVar10 = &lStack_b0;
      FUN_10a268e44(*plVar11,*plVar14,plVar9,&lStack_b0);
      ppuVar12 = apuStack_a8;
      (*(code *)*apuStack_a8[0])();
LAB_10a2a9fb4:
      if (ppuStack_e8 != (undefined8 **)0x0) {
        ppuVar3 = ppuStack_e8 + 1;
        do {
          puVar17 = *ppuVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar5) {
            *ppuVar3 = (undefined8 *)((long)puVar17 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar17 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_e8)[2])(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar12 = ppuStack_e8;
        }
      }
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar3 = ppuStack_d8 + 1;
        do {
          puVar17 = *ppuVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar5) {
            *ppuVar3 = (undefined8 *)((long)puVar17 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar17 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          ppuVar12 = ppuStack_d8;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *puVar18 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        __ZNSt3__15mutex6unlockEv(ppuStack_d8 + 0xd);
        func_0x00010a07a8a8(auStack_f0);
        FUN_10a2a9c10(&puStack_e0);
        unaff_x30 = 0x10a2aa134;
        register0x00000008 = (BADSPACEBASE *)&plStack_100;
        unaff_x19 = plVar8;
        unaff_x20 = ppuVar12;
        unaff_x21 = ppuStack_d8;
        unaff_x22 = plVar10;
        unaff_x23 = plVar2;
        unaff_x24 = param_2;
        unaff_x25 = lVar24;
        unaff_x26 = plVar26;
        unaff_x27 = uVar27;
        unaff_x28 = plVar28;
        unaff_x29 = puVar1;
      }
      plVar10 = plVar8 + 0x4b;
      lVar24 = plVar8[0x59];
      uVar27 = lVar24 - 1;
      plVar8[0x59] = uVar27;
      if (uVar27 < 8) {
        uVar27 = plVar10[lVar24 + 2];
        if (plVar8[0x5a] == uVar27) {
          return;
        }
      }
      else {
        uVar27 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar27) {
          return;
        }
      }
      *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
      *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 ***)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar24 = *plVar10;
      lVar21 = plVar8[0x4c];
      lVar19 = lVar21 - lVar24;
      uVar23 = lVar19 >> 4;
      if (uVar23 < uVar27) {
        uVar25 = uVar27 - uVar23;
        lVar22 = plVar8[0x4d];
        if ((ulong)(lVar22 - lVar21 >> 4) < uVar25) {
          if (uVar27 >> 0x3c == 0) {
            uVar16 = lVar22 - lVar24 >> 3;
            if (uVar16 <= uVar27) {
              uVar16 = uVar27;
            }
            if (0x7fffffffffffffef < (ulong)(lVar22 - lVar24)) {
              uVar16 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar10;
            if (uVar16 >> 0x3c == 0) {
              lVar7 = uVar16 << 4;
              __Znwm();
              lVar21 = lVar7 + lVar19;
              _bzero(lVar21,uVar25 * 0x10);
              lVar20 = lVar21 + uVar23 * -0x10;
              _memcpy(lVar20,lVar24,lVar19);
              *plVar10 = lVar20;
              plVar8[0x4c] = lVar21 + uVar25 * 0x10;
              plVar8[0x4d] = lVar7 + uVar16 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar24;
              *(long *)((long)register0x00000008 + -0x70) = lVar22;
              *(long *)((long)register0x00000008 + -0x88) = lVar24;
              *(long *)((long)register0x00000008 + -0x80) = lVar24;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
        _bzero(lVar21,uVar25 * 0x10);
        plVar8[0x4c] = lVar21 + uVar25 * 0x10;
      }
      else if (uVar27 < uVar23) {
        lVar24 = lVar24 + uVar27 * 0x10;
        while (lVar21 != lVar24) {
          lVar21 = lVar21 + -0x10;
          func_0x00010988c204(lVar21);
        }
        plVar8[0x4c] = lVar24;
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar27;
      return;
    }
    puVar13 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar13);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2aa0b4);
  (*pcVar6)();
}



/* Entry: 10a2aa13c; end: 10a2aa15f;  */

void FUN_10a2aa13c(undefined8 param_1)

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
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f648bf0,0xd);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2aa21c);
  (*pcVar2)();
}



/* Entry: 10a2aa160; end: 10a2aa21b;  */

void FUN_10a2aa160(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f648bf0,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2aa21c);
  (*pcVar4)();
}



/* Entry: 10a2aa21c; end: 10a2aa21f;  */

undefined8 * FUN_10a2aa21c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb9b28;
  func_0x00010a2aa3e0(param_1 + 5);
  func_0x000107c31960(param_1 + 2);
  func_0x00010a2aa434(param_1 + 5,param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(param_1 + 2);
  return param_1;
}



/* Entry: 10a2aa220; end: 10a2aa233;  */

void FUN_10a2aa220(void)

{
  FUN_10a2aa384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2aa234; end: 10a2aa36f;  */

undefined *** FUN_10a2aa234(undefined ***param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_68;
  undefined ***pppuStack_60;
  char cStack_49;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_1 + 5;
  FUN_10a2aad28();
  if (pppuVar1 == (undefined ***)0x0) {
    (*(code *)(*param_1)[3])(&pcStack_78,param_1,param_2);
    FUN_10a2aa51c(param_1,param_2,&pcStack_78);
    pppuVar2 = param_1;
    if (cStack_49 < '\0') {
      pppuVar2 = pppuStack_60;
      __ZdlPv();
    }
  }
  else {
    FUN_10a274140();
    pppuVar2 = param_1 + 2;
    ppuVar3 = *pppuVar2;
    *param_2 = ppuVar3;
    param_2[1] = (undefined **)pppuVar2;
    ppuVar3[1] = (undefined *)param_2;
    *pppuVar2 = (undefined **)param_2;
    param_1[4] = (undefined **)((long)param_1[4] + 1);
    pcStack_78 = FUN_10a2aae0c;
    ppuStack_70 = &PTR_DAT_110bb9b60;
    pppuStack_68 = param_1;
    pppuStack_60 = param_2;
    func_0x00010a108320(pppuVar1 + 0xb,&pcStack_78);
    FUN_10a044790(&pcStack_78);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
    param_1 = pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1 + 5;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(pppuStack_60);
  }
  __Unwind_Resume(pppuVar2);
  pppuVar1 = (undefined ***)&UNK_10f6499f1;
  FUN_10a00946c();
  *pppuVar1 = &PTR_FUN_110bb9b28;
  func_0x00010a2aa3e0(pppuVar1 + 5);
  func_0x000107c31960(pppuVar1 + 2);
  func_0x00010a2aa434(pppuVar1 + 5,pppuVar1[7]);
  ppuVar3 = pppuVar1[5];
  pppuVar1[5] = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    __ZdlPv();
  }
  func_0x000107c31960(pppuVar1 + 2);
  return pppuVar1;
}



/* Entry: 10a2aa370; end: 10a2aa383;  */

undefined8 * FUN_10a2aa370(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)&UNK_10f6499f1;
  FUN_10a00946c();
  *puVar1 = &PTR_FUN_110bb9b28;
  func_0x00010a2aa3e0(puVar1 + 5);
  func_0x000107c31960(puVar1 + 2);
  func_0x00010a2aa434(puVar1 + 5,puVar1[7]);
  lVar2 = puVar1[5];
  puVar1[5] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(puVar1 + 2);
  return puVar1;
}



/* Entry: 10a2aa384; end: 10a2aa51b;  */

undefined8 * FUN_10a2aa384(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb9b28;
  func_0x00010a2aa3e0(param_1 + 5);
  func_0x000107c31960(param_1 + 2);
  func_0x00010a2aa434(param_1 + 5,param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c31960(param_1 + 2);
  return param_1;
}



/* Entry: 10a2aa51c; end: 10a2aad27;  */

long * FUN_10a2aa51c(long param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x24;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)(param_1 + 0x28);
  plVar17 = plVar3;
  FUN_10a2aad28();
  if (plVar17 == (long *)0x0) {
    ppuStack_d8 = (undefined **)param_3[1];
    pcStack_e0 = (code *)*param_3;
    lStack_d0 = CONCAT44(lStack_d0._4_4_,(int)param_3[2]);
    if (*(char *)((long)param_3 + 0x2f) < '\0') {
      func_0x000107c3192c(&plStack_c8,param_3[3],param_3[4]);
    }
    else {
      lStack_c0 = param_3[4];
      plStack_c8 = (long *)param_3[3];
      lStack_b8 = param_3[5];
    }
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    puStack_b0 = &UNK_1053a6a3c;
    ppuStack_a8 = &PTR_DAT_110ae9180;
    plVar8 = plVar3;
    func_0x000107c2b05c(plVar3,param_2);
    plVar18 = *(long **)(param_1 + 0x30);
    if (plVar18 != (long *)0x0) {
      uVar19 = (long)plVar18 - 1;
      if (((ulong)plVar18 & uVar19) == 0) {
        unaff_x24 = (long *)(uVar19 & (ulong)plVar8);
      }
      else {
        unaff_x24 = plVar8;
        if (plVar18 <= plVar8) {
          uVar9 = 0;
          if (plVar18 != (long *)0x0) {
            uVar9 = (ulong)plVar8 / (ulong)plVar18;
          }
          unaff_x24 = (long *)((long)plVar8 - uVar9 * (long)plVar18);
        }
      }
      puVar4 = *(undefined8 **)(*plVar3 + (long)unaff_x24 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        for (plVar17 = (long *)*puVar4; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
          plVar5 = (long *)plVar17[1];
          if (plVar5 == plVar8) {
            plVar5 = plVar3;
            func_0x000107c2b068(plVar3,plVar17 + 2,param_2);
            if (((ulong)plVar5 & 1) != 0) goto LAB_10a2aaa78;
          }
          else {
            if (((ulong)plVar18 & uVar19) == 0) {
              plVar5 = (long *)((ulong)plVar5 & uVar19);
            }
            else if (plVar18 <= plVar5) {
              uVar9 = 0;
              if (plVar18 != (long *)0x0) {
                uVar9 = (ulong)plVar5 / (ulong)plVar18;
              }
              plVar5 = (long *)((long)plVar5 - uVar9 * (long)plVar18);
            }
            if (plVar5 != unaff_x24) break;
          }
        }
      }
    }
    plVar17 = (long *)0x98;
    __Znwm();
    *plVar17 = 0;
    plVar17[1] = (long)plVar8;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(plVar17 + 2,*param_2,param_2[1]);
    }
    else {
      lVar6 = *param_2;
      plVar17[3] = param_2[1];
      plVar17[2] = lVar6;
      plVar17[4] = param_2[2];
    }
    lVar6 = lStack_b8;
    plVar17[6] = (long)ppuStack_d8;
    plVar17[5] = (long)pcStack_e0;
    *(undefined4 *)(plVar17 + 7) = (undefined4)lStack_d0;
    plVar17[9] = lStack_c0;
    plVar17[8] = (long)plStack_c8;
    plStack_c8 = (long *)0x0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    plVar17[10] = lVar6;
    plVar17[0xb] = (long)puStack_b0;
    (*(code *)ppuStack_a8[2])(plVar17 + 0xc,&ppuStack_a8);
    puStack_b0 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    ppuStack_a8 = &PTR_DAT_110ae9180;
    fVar20 = (float)(*(long *)(param_1 + 0x40) + 1);
    if ((plVar18 == (long *)0x0) || (*(float *)(param_1 + 0x48) * (float)plVar18 < fVar20)) {
      if (plVar18 < (long *)0x3) {
        uVar19 = 1;
      }
      else {
        uVar19 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
      }
      plVar5 = (long *)(uVar19 | (long)plVar18 << 1);
      plVar18 = (long *)(long)(fVar20 / *(float *)(param_1 + 0x48));
      if (plVar5 <= plVar18) {
        plVar5 = plVar18;
      }
      if ((long)plVar5 - 1U == 0) {
        plVar5 = (long *)0x2;
      }
      else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar18 = *(long **)(param_1 + 0x30);
      if (plVar18 < plVar5) {
LAB_10a2aa88c:
        if ((ulong)plVar5 >> 0x3d != 0) goto LAB_10a2aacf0;
        lVar6 = (long)plVar5 << 3;
        __Znwm();
        lVar2 = *plVar3;
        *plVar3 = lVar6;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        plVar18 = (long *)0x0;
        *(long **)(param_1 + 0x30) = plVar5;
        do {
          *(undefined8 *)(*plVar3 + (long)plVar18 * 8) = 0;
          plVar18 = (long *)((long)plVar18 + 1);
        } while (plVar5 != plVar18);
        plVar7 = *(long **)(param_1 + 0x38);
        plVar18 = plVar5;
        if (plVar7 != (long *)0x0) {
          plVar10 = (long *)plVar7[1];
          uVar19 = (long)plVar5 - 1;
          if (((ulong)plVar5 & uVar19) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar19);
          }
          else if (plVar5 <= plVar10) {
            uVar9 = 0;
            if (plVar5 != (long *)0x0) {
              uVar9 = (ulong)plVar10 / (ulong)plVar5;
            }
            plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar5);
          }
          *(undefined8 **)(*plVar3 + (long)plVar10 * 8) = (undefined8 *)(param_1 + 0x38);
          plVar11 = (long *)*plVar7;
          while (plVar11 != (long *)0x0) {
            plVar13 = (long *)plVar11[1];
            if (((ulong)plVar5 & uVar19) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar19);
            }
            else if (plVar5 <= plVar13) {
              uVar9 = 0;
              if (plVar5 != (long *)0x0) {
                uVar9 = (ulong)plVar13 / (ulong)plVar5;
              }
              plVar13 = (long *)((long)plVar13 - uVar9 * (long)plVar5);
            }
            plVar12 = plVar11;
            if (plVar13 != plVar10) {
              lVar6 = *plVar3;
              if (*(long *)(lVar6 + (long)plVar13 * 8) == 0) {
                *(long **)(lVar6 + (long)plVar13 * 8) = plVar7;
                plVar10 = plVar13;
              }
              else {
                *plVar7 = *plVar11;
                *plVar11 = **(undefined8 **)(lVar6 + (long)plVar13 * 8);
                **(long **)(lVar6 + (long)plVar13 * 8) = (long)plVar11;
                plVar12 = plVar7;
              }
            }
            plVar7 = plVar12;
            plVar11 = (long *)*plVar12;
          }
        }
      }
      else if (plVar5 < plVar18) {
        plVar7 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
        if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
        if (plVar5 <= plVar7) {
          plVar5 = plVar7;
        }
        if (plVar5 < plVar18) {
          if (plVar5 != (long *)0x0) goto LAB_10a2aa88c;
          lVar6 = *plVar3;
          *plVar3 = 0;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x30) = 0;
          plVar18 = (long *)0x0;
        }
        else {
          plVar18 = *(long **)(param_1 + 0x30);
        }
      }
      if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
        unaff_x24 = (long *)((long)plVar18 - 1U & (ulong)plVar8);
      }
      else {
        unaff_x24 = plVar8;
        if (plVar18 <= plVar8) {
          uVar19 = 0;
          if (plVar18 != (long *)0x0) {
            uVar19 = (ulong)plVar8 / (ulong)plVar18;
          }
          unaff_x24 = (long *)((long)plVar8 - uVar19 * (long)plVar18);
        }
      }
    }
    lVar6 = *plVar3;
    plVar8 = *(long **)(lVar6 + (long)unaff_x24 * 8);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)(param_1 + 0x38);
      *plVar17 = *plVar8;
      *plVar8 = (long)plVar17;
      *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar8;
      if (*plVar17 != 0) {
        plVar8 = *(long **)(*plVar17 + 8);
        if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
          plVar8 = (long *)((ulong)plVar8 & (long)plVar18 - 1U);
        }
        else if (plVar18 <= plVar8) {
          uVar19 = 0;
          if (plVar18 != (long *)0x0) {
            uVar19 = (ulong)plVar8 / (ulong)plVar18;
          }
          plVar8 = (long *)((long)plVar8 - uVar19 * (long)plVar18);
        }
        *(long **)(*plVar3 + (long)plVar8 * 8) = plVar17;
      }
    }
    else {
      *plVar17 = *plVar8;
      *plVar8 = (long)plVar17;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a2aaa78:
    FUN_10a044790(&puStack_b0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    if (lStack_b8 < 0) {
      __ZdlPv(plStack_c8);
    }
    FUN_10a274140();
    plVar8 = (long *)(param_1 + 0x10);
    param_2[1] = (long)plVar8;
    lVar6 = *plVar8;
    *param_2 = lVar6;
    *(long **)(lVar6 + 8) = param_2;
    *plVar8 = (long)param_2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    pcStack_e0 = FUN_10a2aae0c;
    ppuStack_d8 = &PTR_DAT_110bb9b60;
    lStack_d0 = param_1;
    plStack_c8 = param_2;
    func_0x00010a108320(plVar17 + 0xb,&pcStack_e0);
    FUN_10a044790(&pcStack_e0);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    if ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20)) {
      do {
        plVar8 = plVar3;
        FUN_10a2aad28(plVar3,*(long *)(param_1 + 0x18) + 0x10);
        if (plVar8 != (long *)0x0) {
          uVar9 = *(ulong *)(param_1 + 0x30);
          uVar19 = plVar8[1];
          uVar14 = uVar9 - 1;
          if ((uVar9 & uVar14) == 0) {
            uVar19 = uVar14 & uVar19;
          }
          else if (uVar9 <= uVar19) {
            uVar15 = 0;
            if (uVar9 != 0) {
              uVar15 = uVar19 / uVar9;
            }
            uVar19 = uVar19 - uVar15 * uVar9;
          }
          lVar6 = *plVar8;
          plVar18 = *(long **)(*plVar3 + uVar19 * 8);
          do {
            plVar5 = plVar18;
            plVar18 = (long *)*plVar5;
          } while ((long *)*plVar5 != plVar8);
          if (plVar5 == (long *)(param_1 + 0x38)) {
LAB_10a2aabb4:
            if (lVar6 == 0) {
LAB_10a2aabe8:
              *(undefined8 *)(*plVar3 + uVar19 * 8) = 0;
              lVar6 = *plVar8;
              goto LAB_10a2aabf0;
            }
            uVar15 = *(ulong *)(lVar6 + 8);
            if ((uVar9 & uVar14) == 0) {
              uVar16 = uVar15 & uVar14;
            }
            else {
              uVar16 = uVar15;
              if (uVar9 <= uVar15) {
                uVar16 = 0;
                if (uVar9 != 0) {
                  uVar16 = uVar15 / uVar9;
                }
                uVar16 = uVar15 - uVar16 * uVar9;
              }
            }
            if (uVar16 != uVar19) goto LAB_10a2aabe8;
LAB_10a2aabf8:
            if ((uVar9 & uVar14) == 0) {
              uVar15 = uVar15 & uVar14;
            }
            else if (uVar9 <= uVar15) {
              uVar14 = 0;
              if (uVar9 != 0) {
                uVar14 = uVar15 / uVar9;
              }
              uVar15 = uVar15 - uVar14 * uVar9;
            }
            if (uVar15 != uVar19) {
              *(long **)(*plVar3 + uVar15 * 8) = plVar5;
              lVar6 = *plVar8;
            }
          }
          else {
            uVar15 = plVar5[1];
            if ((uVar9 & uVar14) == 0) {
              uVar15 = uVar15 & uVar14;
            }
            else if (uVar9 <= uVar15) {
              uVar16 = 0;
              if (uVar9 != 0) {
                uVar16 = uVar15 / uVar9;
              }
              uVar15 = uVar15 - uVar16 * uVar9;
            }
            if (uVar15 != uVar19) goto LAB_10a2aabb4;
LAB_10a2aabf0:
            if (lVar6 != 0) {
              uVar15 = *(ulong *)(lVar6 + 8);
              goto LAB_10a2aabf8;
            }
          }
          *plVar5 = lVar6;
          *plVar8 = 0;
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
          func_0x00010a2aa470(plVar8 + 2);
          __ZdlPv(plVar8);
        }
      } while ((ulong)*(uint *)(param_1 + 8) < *(ulong *)(param_1 + 0x20));
    }
LAB_10a2aac60:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar17;
    }
    ___stack_chk_fail();
  }
  else if (*(char *)(param_1 + 0x50) != '\x01') {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f6498f9,0x91,&UNK_10f64071c);
    }
    lVar2 = param_3[1];
    lVar6 = *param_3;
    *(int *)(plVar17 + 7) = (int)param_3[2];
    plVar17[6] = lVar2;
    plVar17[5] = lVar6;
    if (*(char *)((long)plVar17 + 0x57) < '\0') {
      __ZdlPv(plVar17[8]);
    }
    lVar2 = param_3[4];
    lVar6 = param_3[3];
    plVar17[10] = param_3[5];
    plVar17[9] = lVar2;
    plVar17[8] = lVar6;
    *(undefined1 *)((long)param_3 + 0x2f) = 0;
    *(undefined1 *)(param_3 + 3) = 0;
    FUN_10a274140();
    plVar3 = (long *)(param_1 + 0x10);
    lVar6 = *plVar3;
    *param_2 = lVar6;
    param_2[1] = (long)plVar3;
    *(long **)(lVar6 + 8) = param_2;
    *plVar3 = (long)param_2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    pcStack_e0 = FUN_10a2aae0c;
    ppuStack_d8 = &PTR_DAT_110bb9b60;
    lStack_d0 = param_1;
    plStack_c8 = param_2;
    func_0x00010a108320(plVar17 + 0xb,&pcStack_e0);
    FUN_10a044790(&pcStack_e0);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    goto LAB_10a2aac60;
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a2aacf0:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2aacf8);
  (*pcVar1)();
}



/* Entry: 10a2aad28; end: 10a2aae0b;  */

long FUN_10a2aad28(long *param_1,undefined8 param_2)

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



/* Entry: 10a2aae0c; end: 10a2aae57;  */

void FUN_10a2aae0c(long param_1)

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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2aae3c);
  (*pcVar5)();
}



/* Entry: 10a2aae58; end: 10a2aaf2f;  */

void FUN_10a2aae58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a2aa470(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2aaf30; end: 10a2ab16b;  */

void FUN_10a2aaf30(long *param_1,code **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code **ppcVar11;
  code **ppcVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 *puStack_120;
  int **ppiStack_118;
  int *piStack_110;
  undefined8 uStack_108;
  code *pcStack_c0;
  undefined ***pppuStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined4 uStack_a0;
  undefined ***pppuStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  code **ppcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  ppcVar11 = param_2;
  FUN_10a688b40();
  if (plVar6 == (long *)0x0) {
    ppcVar12 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar11 != (code **)0x0) {
      pppuStack_b8 = (undefined ***)param_1[1];
      pcStack_c0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_a8 = param_2[1];
      pcStack_b0 = *param_2;
      uStack_a0 = *(undefined4 *)(param_2 + 2);
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        func_0x000107c3192c(&pppuStack_98,param_2[3],param_2[4]);
      }
      else {
        pcStack_90 = param_2[4];
        pppuStack_98 = (undefined ***)param_2[3];
        pcStack_88 = param_2[5];
      }
      pcStack_78 = FUN_10a2ab488;
      ppuStack_70 = &PTR_FUN_110bb9b78;
      param_2 = (code **)0x40;
      __Znwm();
      pppuVar7 = pppuStack_b8;
      pcVar5 = pcStack_c0;
      pcStack_c0 = (code *)0x0;
      pppuStack_b8 = (undefined ***)0x0;
      param_2[1] = (code *)pppuVar7;
      *param_2 = pcVar5;
      param_2[3] = pcStack_a8;
      param_2[2] = pcStack_b0;
      *(undefined4 *)(param_2 + 4) = uStack_a0;
      if ((long)pcStack_88 < 0) {
        func_0x000107c3192c(param_2 + 5,pppuStack_98,pcStack_90);
      }
      else {
        param_2[6] = pcStack_90;
        param_2[5] = (code *)pppuStack_98;
        param_2[7] = pcStack_88;
      }
      ppcVar12 = &pcStack_78;
      ppcStack_68 = param_2;
      FUN_10a4634ec(ppcVar11);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if ((long)pcStack_88 < 0) {
        pppuVar7 = pppuStack_98;
        __ZdlPv();
      }
      pppuVar8 = pppuStack_b8;
      if (pppuStack_b8 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_b8 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar3) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    ppcVar12 = param_2;
    FUN_10a2ab16c();
    iVar4 = *(int *)((long)plVar6 + 4) + -1;
    *(int *)((long)plVar6 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)plVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(param_2);
  __ZdlPv();
  FUN_10a2ab458(&pcStack_c0);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_130,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_158,&ppuStack_130,*pppuVar7);
  if (ppuStack_130 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_130)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_160);
  ppuVar14 = *pppuVar7;
  ppuVar13 = ppuVar14;
  (**(code **)(*ppuVar14 + 0x58))();
  if (((ulong)ppuVar13[0x3c] & 1) != 0) {
    puVar15 = (undefined8 *)ppuVar13[9];
    if (puVar15 == (undefined8 *)0x0) {
      FUN_10a140784(ppuVar13 + 5);
      puVar15 = (undefined8 *)ppuVar13[9];
    }
    ppuVar13[9] = (undefined *)*puVar15;
    puVar15[8] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_110bb9aa0;
    pcVar16 = ppcVar12[1];
    pcVar5 = *ppcVar12;
    *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(ppcVar12 + 2);
    puVar15[2] = pcVar16;
    puVar15[1] = pcVar5;
    if (*(char *)((long)ppcVar12 + 0x2f) < '\0') {
      func_0x000107c3192c(puVar15 + 4,ppcVar12[3],ppcVar12[4]);
    }
    else {
      pcVar16 = ppcVar12[4];
      pcVar5 = ppcVar12[3];
      puVar15[6] = ppcVar12[5];
      puVar15[5] = pcVar16;
      puVar15[4] = pcVar5;
    }
    ppuVar9 = ppuVar14;
    (**(code **)(*ppuVar14 + 0x58))();
    ppuVar13 = ppuVar9;
    FUN_10a065534();
    if (ppuVar13 == (undefined **)0x0) {
      if (((ulong)ppuVar9[0x3c] & 1) == 0) goto LAB_10a2ab3d4;
      ppuVar13 = ppuVar9 + 0x1b;
    }
    ppuStack_130 = (undefined8 **)CONCAT44(ppuStack_130._4_4_,7);
    ppuVar10 = ppuVar14;
    (**(code **)(*ppuVar14 + 0x98))(ppuVar14,*ppuVar13);
    ppuStack_128 = ppuVar10;
    (**(code **)(*ppuVar14 + 0x2f8))
              (&puStack_138,ppuVar14,puVar15,ppuVar9,&UNK_10989ba24,&ppuStack_130);
    aiStack_140[0] = 7;
    if ((3 < (int)ppuStack_130) && (ppuStack_128 != (undefined **)0x0)) {
      (**(code **)*ppuStack_128)();
    }
    uStack_108 = 1;
    piStack_110 = aiStack_140;
    (**(code **)(*ppuVar14 + 0x58))(ppuVar14);
    ppuStack_130 = &puStack_158;
    ppiStack_118 = &piStack_110;
    ppuStack_128 = ppuVar14;
    puStack_120 = (undefined1 *)&puStack_160;
    func_0x0001098960c0(aiStack_150);
    if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    if (puStack_160 != (undefined8 *)0x0) {
      (**(code **)*puStack_160)();
    }
    if (puStack_158 != (undefined8 *)0x0) {
      (**(code **)*puStack_158)();
    }
    return;
  }
LAB_10a2ab3d4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2ab3d8);
  (*pcVar5)();
}



/* Entry: 10a2ab16c; end: 10a2ab457;  */

void FUN_10a2ab16c(long *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  param_1 = (long *)*param_1;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plVar5 = (long *)plVar2[9];
    if (plVar5 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plVar5 = (long *)plVar2[9];
    }
    plVar2[9] = *plVar5;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    plVar5[2] = 0;
    plVar5[1] = 0;
    *plVar5 = (long)&PTR_FUN_110bb9aa0;
    lVar7 = param_2[1];
    lVar6 = *param_2;
    *(int *)(plVar5 + 3) = (int)param_2[2];
    plVar5[2] = lVar7;
    plVar5[1] = lVar6;
    if (*(char *)((long)param_2 + 0x2f) < '\0') {
      func_0x000107c3192c(plVar5 + 4,param_2[3],param_2[4]);
    }
    else {
      lVar7 = param_2[4];
      lVar6 = param_2[3];
      plVar5[6] = param_2[5];
      plVar5[5] = lVar7;
      plVar5[4] = lVar6;
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x58))();
    plVar2 = plVar3;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) goto LAB_10a2ab3d4;
      plVar2 = plVar3 + 0x1b;
    }
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,7);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x98))(param_1,*plVar2);
    plStack_68 = plVar4;
    (**(code **)(*param_1 + 0x2f8))(&puStack_78,param_1,plVar5,plVar3,&UNK_10989ba24,&ppuStack_70);
    aiStack_80[0] = 7;
    if ((3 < (int)ppuStack_70) && (plStack_68 != (long *)0x0)) {
      (**(code **)*plStack_68)();
    }
    uStack_48 = 1;
    piStack_50 = aiStack_80;
    (**(code **)(*param_1 + 0x58))(param_1);
    ppuStack_70 = &puStack_98;
    ppuStack_58 = &piStack_50;
    plStack_68 = param_1;
    puStack_60 = (undefined1 *)&puStack_a0;
    func_0x0001098960c0(aiStack_90);
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
      (**(code **)*puStack_78)();
    }
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    if (puStack_98 != (undefined8 *)0x0) {
      (**(code **)*puStack_98)();
    }
    return;
  }
LAB_10a2ab3d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2ab3d8);
  (*pcVar1)();
}



/* Entry: 10a2ab458; end: 10a2ab487;  */

long FUN_10a2ab458(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
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



/* Entry: 10a2ab488; end: 10a2ab493;  */

void FUN_10a2ab488(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  plVar5 = (long *)*puVar6;
  func_0x000109884c0c(&ppuStack_70,plVar5 + 1,*plVar5);
  func_0x000109884820(&puStack_98,&ppuStack_70,*plVar5);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*plVar5 + 0x30))(&puStack_a0);
  plVar5 = (long *)*plVar5;
  plVar2 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plVar7 = (long *)plVar2[9];
    if (plVar7 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plVar7 = (long *)plVar2[9];
    }
    plVar2[9] = *plVar7;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    plVar7[1] = 0;
    *plVar7 = (long)&PTR_FUN_110bb9aa0;
    lVar9 = puVar6[3];
    lVar8 = puVar6[2];
    *(undefined4 *)(plVar7 + 3) = *(undefined4 *)(puVar6 + 4);
    plVar7[2] = lVar9;
    plVar7[1] = lVar8;
    if (*(char *)((long)puVar6 + 0x3f) < '\0') {
      func_0x000107c3192c(plVar7 + 4,puVar6[5],puVar6[6]);
    }
    else {
      lVar9 = puVar6[6];
      lVar8 = puVar6[5];
      plVar7[6] = puVar6[7];
      plVar7[5] = lVar9;
      plVar7[4] = lVar8;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x58))();
    plVar2 = plVar3;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) goto LAB_10a2ab3d4;
      plVar2 = plVar3 + 0x1b;
    }
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,7);
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0x98))(plVar5,*plVar2);
    plStack_68 = plVar4;
    (**(code **)(*plVar5 + 0x2f8))(&puStack_78,plVar5,plVar7,plVar3,&UNK_10989ba24,&ppuStack_70);
    aiStack_80[0] = 7;
    if ((3 < (int)ppuStack_70) && (plStack_68 != (long *)0x0)) {
      (**(code **)*plStack_68)();
    }
    uStack_48 = 1;
    piStack_50 = aiStack_80;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    ppuStack_70 = &puStack_98;
    ppuStack_58 = &piStack_50;
    plStack_68 = plVar5;
    puStack_60 = (undefined1 *)&puStack_a0;
    func_0x0001098960c0(aiStack_90);
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
      (**(code **)*puStack_78)();
    }
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    if (puStack_98 != (undefined8 *)0x0) {
      (**(code **)*puStack_98)();
    }
    return;
  }
LAB_10a2ab3d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2ab3d8);
  (*pcVar1)();
}



/* Entry: 10a2ab494; end: 10a2ab4d7;  */

void FUN_10a2ab494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2ab4d8; end: 10a2ab4ef;  */

void FUN_10a2ab4d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2ab4f0; end: 10a2ab5c3;  */

undefined1  [16] FUN_10a2ab4f0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  plVar7 = (long *)(param_1 + 8);
  plVar8 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    do {
      while (plVar7 = plVar4, (ulong)plVar7[5] <= *(ulong *)(param_2 + 8)) {
        if (*(ulong *)(param_2 + 8) <= (ulong)plVar7[5]) {
          uVar5 = 0;
          goto LAB_10a2ab5ac;
        }
        plVar4 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_10a2ab558;
        }
      }
      plVar4 = (long *)*plVar7;
      plVar8 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_10a2ab558:
  plVar4 = (long *)0x30;
  __Znwm();
  lVar6 = param_3[1];
  lVar9 = *param_3;
  plVar4[5] = param_3[1];
  plVar4[4] = lVar9;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a2ab5c4(param_1,plVar7,plVar8,plVar4);
  uVar5 = 1;
  plVar7 = plVar4;
LAB_10a2ab5ac:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a2ab5c4; end: 10a2ab617;  */

void FUN_10a2ab5c4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a2ab618; end: 10a2abc0b;  */

void FUN_10a2ab618(long *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined *puStack_1b0;
  long lStack_1a8;
  uint uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  char cStack_169;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined **ppuStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  int iStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [56];
  long lStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = *(long **)(param_2 + 0x10);
  lStack_108 = param_1[1];
  ppuStack_110 = (undefined **)*param_1;
  lStack_100 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_f0 = param_1[4];
  ppuStack_f8 = (undefined **)param_1[3];
  lStack_e8 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_e0 = (int)param_1[6];
  puStack_d8 = (undefined *)param_1[7];
  lStack_d0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_c8,param_1 + 9);
  lStack_90 = param_1[0x10];
  uStack_88 = (undefined4)param_1[0x11];
  ppuVar10 = (undefined8 **)(param_1 + 0x12);
  FUN_10a0424c4(auStack_80);
  lVar19 = *plVar20;
  puStack_120 = (undefined8 *)0x0;
  plStack_118 = (long *)0x0;
  plVar4 = (long *)plVar20[2];
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_118 = plVar4, plVar4 == (long *)0x0)) {
    puVar16 = (undefined8 *)0x0;
    bVar3 = true;
  }
  else {
    puVar16 = (undefined8 *)plVar20[1];
    bVar3 = puVar16 == (undefined8 *)0x0;
    puStack_120 = puVar16;
  }
  plVar4 = plStack_118;
  puStack_130 = (undefined8 *)0x0;
  plStack_128 = (long *)0x0;
  plVar5 = (long *)plVar20[4];
  if ((plVar5 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar5, plVar5 == (long *)0x0))
  goto LAB_10a2aba78;
  puVar18 = (undefined8 *)plVar20[3];
  if (puVar18 == (undefined8 *)0x0) {
    bVar3 = true;
  }
  puStack_130 = puVar18;
  if (bVar3) goto LAB_10a2aba78;
  if (iStack_e0 - 200U < 100) {
    ppuStack_150 = &PTR_DAT_110b1ba90;
    uStack_148 = 0;
    uStack_140 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_178 = (long)(int)lStack_90;
    puStack_180 = puStack_d8;
    pppuVar6 = &ppuStack_150;
    func_0x000107c30348(pppuVar6,&puStack_180);
    puVar18 = puStack_130;
    if (((ulong)pppuVar6 & 1) == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f648219,&UNK_10f649a67,0x6b,&UNK_10f649b3e);
      }
      puVar16 = puStack_130;
      func_0x000107c2b054(&puStack_180,&UNK_10f649b8e);
      if ((puVar16 == (undefined8 *)0x0) || (*(char *)(puVar16 + 8) != '\x02')) {
        if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 8) == '\x01')) {
          (*(code *)*puVar16)(&puStack_180,puVar16);
        }
      }
      else {
        FUN_10a05aad0(puVar16,&puStack_180);
      }
      if (cStack_169 < '\0') {
        __ZdlPv(puStack_180);
      }
      FUN_10a2abc0c(lVar19 + 0x30,plVar4);
      ppuVar10 = &puStack_130;
      func_0x00010a2abcd8(lVar19 + 0x48);
      func_0x0001098ddcb0(&ppuStack_150);
      goto LAB_10a2aba78;
    }
    if ((uStack_140 & 1) == 0) {
      func_0x000107c2b054(&puStack_180,&UNK_10f649bb2);
      if ((puVar18 == (undefined8 *)0x0) || (*(char *)(puVar18 + 8) != '\x02')) {
        if ((puVar18 != (undefined8 *)0x0) && (*(char *)(puVar18 + 8) == '\x01')) {
          (*(code *)*puVar18)(&puStack_180,puVar18);
        }
      }
      else {
        FUN_10a05aad0(puVar18,&puStack_180);
      }
      puVar7 = puStack_180;
      if (cStack_169 < '\0') {
LAB_10a2aba54:
        __ZdlPv(puVar7);
      }
    }
    else {
      uStack_170 = (uint)ppuStack_138[3] & 0xfffffffc;
      func_0x00010a5386f4();
      ppuVar8 = &PTR_PTR_1132e5c48;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar8 = ppuStack_138;
      }
      ppuVar15 = &PTR_PTR_1134046c0;
      if ((undefined **)ppuVar8[5] != (undefined **)0x0) {
        ppuVar15 = (undefined **)ppuVar8[5];
      }
      puStack_180 = ppuVar15[2];
      uStack_178._4_4_ = *(float *)(ppuVar8 + 6);
      puVar18 = (undefined8 *)((ulong)ppuVar8[4] & 0xfffffffffffffffc);
      uStack_178._0_4_ = 0;
      if (*(char *)((long)puVar18 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_168,*puVar18,puVar18[1]);
      }
      else {
        uStack_160 = puVar18[1];
        puStack_168 = (undefined *)*puVar18;
        lStack_158 = puVar18[2];
      }
      uStack_178 = CONCAT44(uStack_178._4_4_,((uStack_178._4_4_ + -32.0) * 5.0) / 9.0);
      if ((puVar16 == (undefined8 *)0x0) || (*(char *)(puVar16 + 8) != '\x02')) {
        if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 8) == '\x01')) {
          (*(code *)*puVar16)(&puStack_180,puVar16);
        }
      }
      else {
        FUN_10a2aaf30(puVar16,&puStack_180);
      }
      if ((char)plVar20[8] == '\x01') {
        __ZNSt3__15mutex4lockEv(lVar19 + 0x68);
        if ((*(byte *)(plVar20 + 8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2abb50);
          (*pcVar2)();
        }
        uVar17 = *(undefined8 *)(lVar19 + 0x60);
        lStack_1a8 = uStack_178;
        puStack_1b0 = puStack_180;
        uStack_1a0 = uStack_170;
        if (lStack_158 < 0) {
          func_0x000107c3192c(&puStack_198,puStack_168,uStack_160);
        }
        else {
          uStack_190 = uStack_160;
          puStack_198 = puStack_168;
          lStack_188 = lStack_158;
        }
        FUN_10a2aa51c(uVar17,plVar20 + 5,&puStack_1b0);
        if (lStack_188 < 0) {
          __ZdlPv(puStack_198);
        }
        __ZNSt3__15mutex6unlockEv(lVar19 + 0x68);
      }
      puVar7 = puStack_168;
      if (lStack_158 < 0) goto LAB_10a2aba54;
    }
    func_0x0001098ddcb0(&ppuStack_150);
  }
  else {
    func_0x000107c2b054(&puStack_180,&UNK_10f649be0);
    if (*(char *)(puVar18 + 8) == '\x01') {
      (*(code *)*puVar18)(&puStack_180,puVar18);
    }
    else if (*(char *)(puVar18 + 8) == '\x02') {
      FUN_10a05aad0(puVar18,&puStack_180);
    }
    if (cStack_169 < '\0') {
      __ZdlPv(puStack_180);
    }
  }
  FUN_10a2abc0c(lVar19 + 0x30,plVar4);
  ppuVar10 = &puStack_130;
  func_0x00010a2abcd8(lVar19 + 0x48);
LAB_10a2aba78:
  plVar4 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar20 = plStack_128 + 1;
    do {
      lVar11 = *plVar20;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar20 = plStack_118 + 1;
    do {
      lVar11 = *plVar20;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x000104c4f944(auStack_80);
  ppuVar8 = &puStack_d8;
  FUN_10a042634();
  if (lStack_e8 < 0) {
    ppuVar8 = ppuStack_f8;
    __ZdlPv();
  }
  if (lStack_100 < 0) {
    ppuVar8 = ppuStack_110;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(lVar19 + 0x68);
  if (lStack_158 < 0) {
    __ZdlPv(puStack_168);
  }
  func_0x0001098ddcb0(&ppuStack_150);
  func_0x00010a07a8a8(&puStack_130);
  FUN_10a2a9c10(&puStack_120);
  FUN_10a05bd10(&ppuStack_110);
  __Unwind_Resume();
  ppuVar12 = ppuVar8 + 1;
  ppuVar9 = (undefined **)*ppuVar12;
  ppuVar14 = ppuVar9;
  ppuVar15 = ppuVar12;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      lVar19 = 8;
      if (ppuVar10 <= ppuVar14[5]) {
        lVar19 = 0;
        ppuVar15 = ppuVar14;
      }
      puVar16 = (undefined8 *)((long)ppuVar14 + lVar19);
      ppuVar14 = (undefined **)*puVar16;
    } while ((undefined **)*puVar16 != (undefined **)0x0);
    if ((ppuVar15 != ppuVar12) && (ppuVar15[5] <= ppuVar10)) {
      ppuVar14 = ppuVar15;
      ppuVar12 = (undefined **)ppuVar15[1];
      if ((undefined **)ppuVar15[1] == (undefined **)0x0) {
        do {
          ppuVar13 = (undefined **)ppuVar14[2];
          bVar3 = (undefined **)*ppuVar13 != ppuVar14;
          ppuVar14 = ppuVar13;
        } while (bVar3);
      }
      else {
        do {
          ppuVar13 = ppuVar12;
          ppuVar12 = (undefined **)*ppuVar13;
        } while ((undefined **)*ppuVar13 != (undefined **)0x0);
      }
      if ((undefined **)*ppuVar8 == ppuVar15) {
        *ppuVar8 = (undefined *)ppuVar13;
      }
      ppuVar8[2] = ppuVar8[2] + -1;
      FUN_10a04815c(ppuVar9,ppuVar15);
      FUN_10a2a9c10(ppuVar15 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(ppuVar15);
      return;
    }
  }
  return;
}



/* Entry: 10a2abc0c; end: 10a2abe33;  */

void FUN_10a2abc0c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  plVar4 = (long *)*plVar5;
  plVar7 = plVar4;
  plVar8 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      lVar2 = 8;
      if (param_2 <= (ulong)plVar7[5]) {
        lVar2 = 0;
        plVar8 = plVar7;
      }
      puVar1 = (undefined8 *)((long)plVar7 + lVar2);
      plVar7 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar8 != plVar5) && ((ulong)plVar8[5] <= param_2)) {
      plVar7 = plVar8;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar8) {
        *param_1 = plVar6;
      }
      param_1[2] = param_1[2] + -1;
      FUN_10a04815c(plVar4,plVar8);
      FUN_10a2a9c10(plVar8 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10a2abe34; end: 10a2abe4b;  */

void FUN_10a2abe34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2abe4c; end: 10a2abf1b;  */

undefined8 * FUN_10a2abe4c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bb6310;
  func_0x00010a26df2c(param_1 + 0x26,0);
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1e;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x1b;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x18;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x15;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 0xe;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 0xb;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 8;
  func_0x00010a26e0a4(&puStack_28);
  return param_1;
}



/* Entry: 10a2abf1c; end: 10a2ac933;  */

/* WARNING: Removing unreachable block (ram,0x00010a2ac594) */

void FUN_10a2abf1c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    lVar21 = *(long *)(param_1 + 0x100);
    plVar12 = *(long **)(lVar21 + 0x78);
    if ((plVar12 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 == (long *)0x0)) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    else {
      if (*(long *)(lVar21 + 0x70) == 0) {
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      else {
        func_0x00010a152370(&puStack_90);
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        if (plStack_88 != (long *)0x0) {
          plVar23 = plStack_88;
          __ZNSt3__119__shared_weak_count4lockEv();
          *(long **)(param_1 + 0xd8) = plVar23;
          if (plVar23 != (long *)0x0) {
            *(undefined8 **)(param_1 + 0xd0) = puStack_90;
          }
          if (plStack_88 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      plVar23 = plVar12 + 1;
      do {
        lVar21 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      puVar7 = PTR___tlv_bootstrap_11340d750;
      if (*(long *)(param_1 + 0xd0) != 0) {
        ppuVar18 = &PTR___tlv_bootstrap_11340d750;
        ppuVar13 = ppuVar18;
        (*(code *)PTR___tlv_bootstrap_11340d750)();
        ppuVar17 = &PTR___tlv_bootstrap_11340d738;
        if (((ulong)*ppuVar13 & 1) == 0) {
          (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
          __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
          (*(code *)puVar7)();
          *(undefined1 *)ppuVar18 = 1;
        }
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        FUN_10a15217c();
      }
    }
    FUN_10a26af30(param_1 + 0x48);
    plVar12 = (long *)(param_1 + 0xe0);
    lVar21 = *(long *)(param_1 + 0x70);
    lVar20 = *(long *)(param_1 + 0x78);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0xe0) = uVar14;
    *(long *)(param_1 + 0xe8) = lVar21;
    if (lVar21 != 0) {
      plVar23 = (long *)(lVar21 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar22 = *(undefined8 **)(param_1 + 0x80);
    FUN_10a26b13c(uVar14,&PTR_DAT_110bb6b20);
    uVar9 = (undefined4)uVar14;
    *(long **)(param_1 + 0xc0) = plVar12;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)(param_1 + 200) = uVar9;
    lVar21 = *(long *)(param_1 + 0xe0);
    if (*(int *)(lVar20 + 0x734) != 1) {
      uVar4 = *(undefined4 *)(lVar21 + 0x1c);
      uVar3 = *(uint *)(*(long *)(lVar21 + 0x40) + 0x30);
      uVar9 = *(undefined4 *)(*(long *)(lVar21 + 0x40) + 0x34);
      uVar10 = uVar3;
      FUN_109fc8e58(uVar3,uVar9,uVar4);
      uVar11 = (int)*(undefined8 *)(lVar21 + 0x40) + 0x18;
      FUN_10a1a5510();
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      uVar19 = (ulong)uVar10;
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&DAT_10f647544,&DAT_10f64867e,0xe9,&UNK_10f648724,in_x6,in_x7,uVar19
                            ,uVar3,uVar9,uVar4);
      }
      FUN_10a1738b8(&puStack_90,lVar20,uVar19);
      lVar21 = *plVar12;
      FUN_10a0e65b0(lVar21 + 0x80,&puStack_90);
      plVar23 = plStack_88;
      *(undefined8 **)(lVar21 + 0x90) = uStack_80;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar21 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      lVar21 = *(long *)(*plVar12 + 0x80);
      func_0x00010b0ae4b8(&puStack_90,&UNK_10f648774,0x3a);
      if ((long)uStack_80._7_1_ < 0) {
        *(undefined8 **)(param_1 + 0xb0) = puStack_90;
        *(long **)(param_1 + 0xb8) = plStack_88;
        if (lVar21 != 0) {
          __ZdlPv();
          goto LAB_10a2ac198;
        }
      }
      else {
        *(undefined8 ***)(param_1 + 0xb0) = &puStack_90;
        *(long *)(param_1 + 0xb8) = (long)uStack_80._7_1_;
        if (lVar21 != 0) {
LAB_10a2ac198:
          plVar23 = *(long **)(*plVar12 + 0x80);
          (**(code **)(*plVar23 + 0x30))(plVar23,2,0,0);
          func_0x00010b0ae4b8(&puStack_90,&UNK_10f6487af,0x37);
          if ((long)uStack_80._7_1_ < 0) {
            *(undefined8 **)(param_1 + 0xa0) = puStack_90;
            *(long **)(param_1 + 0xa8) = plStack_88;
            if (plVar23 != (long *)0x0) {
              __ZdlPv();
              goto LAB_10a2ac1fc;
            }
          }
          else {
            *(undefined8 ***)(param_1 + 0xa0) = &puStack_90;
            *(long *)(param_1 + 0xa8) = (long)uStack_80._7_1_;
            if (plVar23 != (long *)0x0) {
LAB_10a2ac1fc:
              lVar21 = *plVar12;
              lVar20 = (long)plVar23 + (ulong)*(uint *)(lVar21 + 0x90);
              *(long *)(lVar21 + 0x98) = lVar20;
              *(ulong *)(lVar21 + 0xa0) = uVar19;
              goto LAB_10a2ac20c;
            }
          }
          FUN_10a0edfc4(param_1 + 0xa0);
          goto LAB_10a2ac7b8;
        }
      }
      FUN_10a0edfc4(param_1 + 0xb0);
      goto LAB_10a2ac7b8;
    }
    lVar20 = *(long *)(lVar21 + 0x98);
    uVar19 = *(ulong *)(lVar21 + 0xa0);
LAB_10a2ac20c:
    uVar15 = *(ulong *)(lVar21 + 0x40);
    FUN_10a318c10(uVar15,lVar20,uVar19);
    if ((uVar15 & 1) == 0) {
      lVar21 = *(long *)(*(long *)(*plVar12 + 0x40) + 8);
      if (*(char *)(lVar21 + 0x87) < '\0') {
        func_0x000107c3192c((undefined8 *)(param_1 + 0x88),*(undefined8 *)(lVar21 + 0x70),
                            *(undefined8 *)(lVar21 + 0x78));
      }
      else {
        uVar24 = *(undefined8 *)(lVar21 + 0x78);
        uVar14 = *(undefined8 *)(lVar21 + 0x70);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar21 + 0x80);
        *(undefined8 *)(param_1 + 0x90) = uVar24;
        *(undefined8 *)(param_1 + 0x88) = uVar14;
      }
      FUN_10a0ee900(&puStack_90,&UNK_10f6487e7,0x2e);
      FUN_10a26b2e0(&puStack_90);
      goto LAB_10a2ac7b8;
    }
    FUN_10a26b13c(*plVar12,&PTR_DAT_110bb6b38);
    uVar14 = *(undefined8 *)(param_1 + 0xe0);
    plVar12 = *(long **)(param_1 + 0xe8);
    if (plVar12 != (long *)0x0) {
      plVar23 = plVar12 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar23 = (long *)puVar22[2];
    plStack_88 = (long *)0x0;
    uStack_80 = (undefined8 *)0x0;
    if (plVar23 == (long *)0x0) {
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      puVar16 = (undefined8 *)0xd8;
      __Znwm();
      puVar16[2] = 0;
      puVar16[1] = 0x200000006;
      *(undefined2 *)(puVar16 + 3) = 4;
      puVar16[5] = 0;
      puVar16[4] = 0;
      puVar16[7] = 0;
      puVar16[6] = 0;
      puVar16[9] = 0;
      puVar16[8] = 0;
      puVar16[0xb] = 0;
      puVar16[10] = 0;
      puVar16[0xd] = 0;
      puVar16[0xc] = 0;
      puVar16[0xf] = 0;
      puVar16[0xe] = 0;
      puVar16[0x10] = 0;
      puVar16[0x11] = puVar16 + 3;
      puVar16[0x12] = 0;
      *(undefined1 *)(puVar16 + 0x13) = 0;
      *(undefined1 *)(puVar16 + 0x15) = 0;
      *puVar16 = &PTR_DAT_110bb6c00;
      puStack_90 = puVar16 + 0x16;
      *puStack_90 = uVar14;
      puVar16[0x17] = plVar12;
      *(undefined1 *)(puVar16 + 0x19) = 1;
      puVar16[0x1a] = 0;
      pcStack_78 = FUN_10a26b3f8;
      plStack_88 = puVar16;
      uStack_80 = puVar16;
    }
    else {
      pcStack_a8 = (code *)0x0;
      uStack_70 = uVar14;
      plStack_68 = plVar12;
      (**(code **)(*plVar23 + 0x28))(plVar23,0,&pcStack_a8);
      if (pcStack_a8 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_a8);
        goto LAB_10a2ac7b8;
      }
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      puVar16 = (undefined8 *)0xe0;
      __Znwm();
      puVar16[2] = 0;
      puVar16[1] = 0x200000006;
      *(undefined2 *)(puVar16 + 3) = 4;
      puVar16[5] = 0;
      puVar16[4] = 0;
      puVar16[7] = 0;
      puVar16[6] = 0;
      puVar16[9] = 0;
      puVar16[8] = 0;
      puVar16[0xb] = 0;
      puVar16[10] = 0;
      puVar16[0xd] = 0;
      puVar16[0xc] = 0;
      puVar16[0xf] = 0;
      puVar16[0xe] = 0;
      puVar16[0x10] = 0;
      puVar16[0x11] = puVar16 + 3;
      puVar16[0x12] = 0;
      *(undefined1 *)(puVar16 + 0x13) = 0;
      *(undefined1 *)(puVar16 + 0x15) = 0;
      *puVar16 = &PTR_FUN_110bb6bc8;
      puVar16[0x16] = uVar14;
      puVar16[0x17] = plVar12;
      *(undefined1 *)(puVar16 + 0x19) = 1;
      puVar16[0x1a] = 0;
      puVar16[0x1b] = plVar23;
      if (plStack_88 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_88 + 1);
        do {
          uVar19 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plStack_88 + 8))();
          }
        }
      }
      plStack_88 = puVar16;
      if (uStack_80 != (undefined8 *)0x0) {
        func_0x0001092b4274(&uStack_80);
      }
      pcStack_78 = FUN_10a26b3c8;
      puStack_90 = puVar16 + 0x16;
      uStack_80 = puVar16;
      __ZNSt13exception_ptrD1Ev(&pcStack_a8);
    }
    puVar16 = puStack_90;
    if (puStack_90[4] != 0) {
      func_0x0001092b4274();
    }
    puVar16[4] = uStack_80;
    uStack_80 = (undefined8 *)0x0;
    pcStack_a8 = pcStack_78;
    puStack_a0 = puStack_90;
    puStack_98 = puVar22;
    (**(code **)*puVar22)(puVar22,&pcStack_a8);
    *(long **)(param_1 + 0xf8) = plStack_88;
    plStack_88 = (long *)0x0;
    if ((uStack_80 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&uStack_80), plStack_88 != (long *)0x0)) {
      puVar2 = (ulong *)(plStack_88 + 1);
      do {
        uVar19 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar19 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plStack_88 + 8))();
        }
      }
    }
    plVar12 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar23 = plStack_68 + 1;
      do {
        lVar21 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    FUN_10a26b1b4(param_1 + 0xc0);
    plVar12 = *(long **)(param_1 + 0xe8);
    if (plVar12 != (long *)0x0) {
      plVar23 = plVar12 + 1;
      do {
        lVar21 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    FUN_10a26bfb0(param_1 + 0x48);
    plVar12 = *(long **)(param_1 + 0xd8);
    if (plVar12 != (long *)0x0) {
      plVar23 = plVar12 + 1;
      do {
        lVar21 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf8);
    plVar12 = (long *)(*(long *)(param_1 + 0xf8) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x110) = 1;
      lVar21 = *(long *)(param_1 + 0xf0);
      plVar12 = (long *)(lVar21 + 0x10);
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar20 = *plVar12;
        if (lVar20 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            puStack_90 = (undefined8 *)0x0;
            plStack_88 = (long *)param_1;
            uStack_80 = (undefined8 *)uVar14;
            func_0x000109d1b588(lVar21 + 0x18,&puStack_90);
            *(undefined8 *)(lVar21 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar20 >> 1 & 1) == 0);
    }
  }
  lVar21 = *(long *)(param_1 + 0xf0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar21 + 0xa8) & 1) != 0) {
      FUN_10a26ada4(param_1 + 0x10,lVar21 + 0x98);
      plVar12 = *(long **)(param_1 + 0xf0);
      if (plVar12 != (long *)0x0) {
        puVar2 = (ulong *)(plVar12 + 1);
        do {
          uVar19 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(param_1 + 0xf8);
      if (plVar12 != (long *)0x0) {
        puVar2 = (ulong *)(plVar12 + 1);
        do {
          uVar19 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(param_1 + 0x70);
      if (plVar12 != (long *)0x0) {
        plVar23 = plVar12 + 1;
        do {
          lVar21 = *plVar23;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar21 + 0x90);
  }
LAB_10a2ac7b8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a2ac7bc);
  (*pcVar8)();
}



/* Entry: 10a2ac934; end: 10a2aca53;  */

void FUN_10a2ac934(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    if (*(long *)(param_1 + 0x108) == 0) goto LAB_10a2aca3c;
    plVar5 = (long *)(*(long *)(param_1 + 0x108) + 8);
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_10a2aca3c;
    plVar5 = *(long **)(param_1 + 0x108);
  }
  else {
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xf8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 == (long *)0x0) goto LAB_10a2aca3c;
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_10a2aca3c;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
LAB_10a2aca3c:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2aca54; end: 10a2aceb3;  */

void FUN_10a2aca54(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 0x10);
    FUN_109d16cc4(param_1 + 0x48,plVar5,param_1 + 0x50);
    plVar9 = *(long **)(param_1 + 0x50);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        plVar5 = plVar9;
        (**(code **)(*plVar9 + 0x10))();
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
          plVar5 = plVar9;
        }
      }
    }
    plVar9 = *(long **)(param_1 + 0x58);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        plVar5 = plVar9;
        (**(code **)(*plVar9 + 0x10))();
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
          plVar5 = plVar9;
        }
      }
    }
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) != 0) goto LAB_10a2accd8;
    lVar10 = *(long *)(param_1 + 0x60);
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar10 = *(long *)(lVar10 + 0x28);
    if ((long)plVar5 < lVar10) {
      FUN_109d1a80c();
      FUN_109d16728(param_1 + 0x58,param_1 + 0x48,lVar10,plVar5[0x12]);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
      plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x70) = 1;
        lVar10 = *(long *)(param_1 + 0x50);
        plVar5 = (long *)(lVar10 + 0x10);
        uStack_38 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar8 = *plVar5;
          if (lVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              uStack_48 = 0;
              lStack_40 = param_1;
              func_0x000109d1b588(lVar10 + 0x18,&uStack_48);
              *(undefined8 *)(lVar10 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar8 >> 1 & 1) == 0);
      }
      goto LAB_10a2aca74;
    }
  }
  else {
LAB_10a2aca74:
    plVar5 = *(long **)(param_1 + 0x50);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2acd98);
      (*pcVar4)();
    }
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  FUN_10a26c684(*(long *)(param_1 + 0x68) + 0x50,*(undefined4 *)(*(long *)(param_1 + 0x60) + 8));
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x18);
  if (puVar6 == (undefined8 *)0x0 || *(char *)(puVar6 + 8) != '\x02') {
    if (puVar6 != (undefined8 *)0x0 && *(char *)(puVar6 + 8) == '\x01') {
      (*(code *)*puVar6)();
    }
  }
  else {
    FUN_10a05e614();
  }
LAB_10a2accd8:
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
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



/* Entry: 10a2aceb4; end: 10a2ad023;  */

void FUN_10a2aceb4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10a2ad008;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a2ad008;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
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
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a2ad008;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a2ad008;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_10a2ad008:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2ad024; end: 10a2ad317;  */

void FUN_10a2ad024(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_10a26c1b0(param_1 + 0x88,param_1 + 0x48);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x88);
    plVar6 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      lVar9 = *(long *)(param_1 + 0x78);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x78);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2ad254);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2ad318; end: 10a2ad477;  */

void FUN_10a2ad318(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2ad478; end: 10a2ad503;  */

undefined8 FUN_10a2ad478(void)

{
  return 4;
}



/* Entry: 10a2ad504; end: 10a2ad5cb;  */

void FUN_10a2ad504(undefined8 param_1)

{
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
  
  FUN_10a003e74(param_1,&UNK_10f649c03,0xd);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f649c11;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f649c22;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a2ad5cc(param_1,&puStack_88,&PTR_DAT_110bbaf70);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a2ad5cc; end: 10a2ad623;  */

ulong FUN_10a2ad5cc(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a2b8f48(param_1,*param_2,*param_3,param_3[1]);
  }
  return param_1;
}



/* Entry: 10a2ad624; end: 10a2adb93;  */

void FUN_10a2ad624(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64a871,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbbc90;
  pppuVar2 = (undefined8 ***)&UNK_10f649c2a;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bbbc90;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c2b,FUN_10a2b8fec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x102,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c3a,FUN_10a2ba628,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c4d,FUN_10a2baab0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c5f,FUN_10a2bab64,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,10,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c6d,FUN_10a2bac18,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2adb74;
    FUN_10a054dac(param_1,&UNK_10f649c97,FUN_10a2bacd4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bbb470,FUN_10a2bad88);
    FUN_10a0605c4(param_1,&UNK_10f649cac,FUN_10a2bbb90,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bbb488,FUN_10a2bbd70);
    FUN_10a0605c4(param_1,&UNK_10f649cbe,FUN_10a2bcb78,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bbb4a0,FUN_10a2bccf0);
    FUN_10a0605c4(param_1,&UNK_10f649cd4,FUN_10a2bdaf8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bbb4b8,FUN_10a2bdc2c);
    FUN_10a0605c4(param_1,&UNK_10f649ce5,FUN_10a2bea34,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f649cfa,FUN_10a2bebac,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f649d0d,FUN_10a2bed18,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64a871,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2adb74:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2adb78);
  (*pcVar6)();
}



/* Entry: 10a2adb94; end: 10a2adccb;  */

void FUN_10a2adb94(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f649c03,0xd);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f649d21;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f649c2a;
  uStack_68 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2adccc(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f649d39;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a2add24(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f649d3c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a2add24(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a2adccc; end: 10a2add23;  */

ulong FUN_10a2adccc(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a2add24; end: 10a2add7b;  */

ulong FUN_10a2add24(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a2bedc8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a2add7c; end: 10a2adf3b;  */

void FUN_10a2add7c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f649c03,0xd);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "AnswerStatusCodes";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f649c2a;
  uStack_68 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "UNSET";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2adf3c(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "STATUS_OK";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2adf3c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NOT_A_QUESTION";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2adf3c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NO_ANSWER_FOUND";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f649c2a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x99;
  uStack_58 = 0x151;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2adf3c();
  FUN_10a003ff4();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a2adf3c; end: 10a2adfe3;  */

undefined8 * FUN_10a2adf3c(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2adfe4);
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



/* Entry: 10a2adfe4; end: 10a2ae033;  */

void FUN_10a2adfe4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x248);
  uVar5 = *(undefined8 *)(param_2 + 0x240);
  param_1[1] = *(undefined8 *)(param_2 + 0x248);
  *param_1 = uVar5;
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



/* Entry: 10a2ae034; end: 10a2aee07;  */

long * FUN_10a2ae034(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *puVar15;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined2 uStack_80;
  undefined5 uStack_7e;
  char cStack_79;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(plVar6 + 0x1c);
  FUN_10a03e114(param_1 + 0x20);
  param_1[0x24] = (long)&PTR_FUN_110bbbb70;
  FUN_10a2aee08(param_1 + 0x25,param_2);
  *param_1 = (long)&PTR_FUN_110bbaf90;
  param_1[2] = (long)&PTR_DAT_110bbb068;
  param_1[7] = (long)&PTR_DAT_110bbb0c0;
  param_1[0x1c] = (long)&PTR_DAT_110bbb0e0;
  param_1[0x20] = (long)&PTR_DAT_110bbb108;
  param_1[0x24] = (long)&PTR_DAT_110bbb130;
  param_1[0x25] = (long)&PTR_FUN_110bbb160;
  FUN_10a05a5d4(param_1 + 0x28,&lStack_90);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  param_1[0x31] = (long)(param_1 + 0x32);
  param_1[0x32] = 0;
  param_1[0x35] = param_2;
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
  param_1[0x36] = (long)(puVar5 + 3);
  param_1[0x37] = (long)puVar5;
  FUN_10a5cf1fc(param_1 + 0x36);
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bbb4e0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[3] = &PTR_FUN_110bbb530;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a2bf168;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x40] = (long)(puVar5 + 3);
  param_1[0x41] = (long)puVar5;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bbb588;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[3] = &PTR_FUN_110bbb5d8;
  puVar5[0x12] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a2bf4cc;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x42] = (long)(puVar5 + 3);
  param_1[0x43] = (long)puVar5;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bbb630;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[3] = &PTR_FUN_110bbb680;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a2bf830;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x44] = (long)(puVar5 + 3);
  param_1[0x45] = (long)puVar5;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bbb6d8;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[3] = &PTR_FUN_110bbb728;
  puVar5[0x12] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a2bfb94;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x46] = (long)(puVar5 + 3);
  param_1[0x47] = (long)puVar5;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110b9a070;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[3] = &PTR_FUN_110b9a0c0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a004c4c;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x48] = (long)(puVar5 + 3);
  param_1[0x49] = (long)puVar5;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110b9a070;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[3] = &PTR_FUN_110b9a0c0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[0xb] = FUN_10a004c4c;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4a] = (long)(puVar5 + 3);
  param_1[0x4b] = (long)puVar5;
  puVar5 = (undefined8 *)0x138;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_1107eb320;
  puVar15 = puVar5 + 3;
  puVar5[4] = 0;
  *puVar15 = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  puVar5[0x14] = 0;
  puVar5[0x13] = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = 0;
  puVar5[0x18] = 0;
  puVar5[0x17] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x22] = 0;
  puVar5[0x21] = 0;
  puVar5[0x24] = 0;
  puVar5[0x23] = 0;
  puVar5[0x26] = 0;
  puVar5[0x25] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined2 *)puVar15 = 0x101;
  func_0x000107c2b054(puVar5 + 5,&UNK_10e4a8a5a);
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xc] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 1;
  *(undefined2 *)((long)puVar5 + 0x7c) = 1;
  *(undefined1 *)((long)puVar5 + 0x7e) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 1;
  puVar5[0x14] = 0;
  puVar5[0x13] = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = 0;
  puVar5[0x18] = 0;
  puVar5[0x17] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x22] = 0;
  puVar5[0x21] = 0;
  *(undefined4 *)((long)puVar5 + 0x11c) = 1;
  puVar5[0x26] = 0;
  puVar5[0x25] = 0;
  puVar5[0x24] = 0;
  param_1[0x4c] = (long)puVar15;
  param_1[0x4d] = (long)puVar5;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649dbc,0x44,&UNK_10f649e14);
  }
  FUN_10a5971e0(&lStack_90,*(undefined8 *)(param_1[0x35] + 0x900));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1[0x4c] + 0xa0,&lStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  __ZNSt3__19to_stringEi(&lStack_90,0x17d);
  lVar12 = param_1[0x4c];
  if (*(char *)(lVar12 + 0x9f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar12 + 0x88));
  }
  *(long **)(lVar12 + 0x90) = plStack_88;
  *(long *)(lVar12 + 0x88) = lStack_90;
  *(ulong *)(lVar12 + 0x98) = CONCAT17(cStack_79,CONCAT52(uStack_7e,uStack_80));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1[0x4c] + 0x48,*(long *)(param_1[0x35] + 0x100) + 0x208);
  plVar6 = *(long **)(*(long *)(param_1[0x35] + 0x100) + 0x1c8);
  (**(code **)(*plVar6 + 0xf0))();
  plVar7 = (long *)plVar6[1];
  if (((plVar7 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0))
     || (lVar12 = *plVar6, lVar12 == 0)) {
    FUN_10a00946c(&UNK_10f64a1b3);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2aec68);
    (*pcVar4)();
  }
  lVar8 = 0x228;
  __Znwm();
  FUN_10ad19a0c();
  lVar11 = *(long *)(lVar12 + 0x78);
  lVar2 = *(long *)(lVar12 + 0x80);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar14) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_80 = 0x101;
  plVar6 = (long *)0x38;
  lStack_90 = lVar11;
  plStack_88 = (long *)lVar2;
  lStack_70 = lVar8;
  __Znwm();
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  *plVar6 = (long)&PTR_FUN_110bbb318;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = lVar8;
  plVar6[4] = lVar11;
  plVar6[5] = lVar2;
  *(undefined2 *)(plVar6 + 6) = uStack_80;
  *(undefined4 *)((long)plVar6 + 0x32) = 0;
  *(undefined2 *)((long)plVar6 + 0x36) = 0;
  piVar10 = *(int **)(lVar12 + 0x78);
  do {
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar14) {
      *piVar10 = *piVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar10 = (int *)(*(long *)(lVar12 + 0x78) + 4);
  do {
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar14) {
      *piVar10 = *piVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar10 = (int *)(*(long *)(lVar12 + 0x78) + 8);
  do {
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar14) {
      *piVar10 = *piVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar13 = *(undefined8 *)(lVar12 + 0x58);
  plVar9 = *(long **)(lVar12 + 0x60);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = uVar13;
  plStack_98 = plVar9;
  plStack_68 = plVar6;
  __ZNSt3__15mutex4lockEv(uVar13);
  lVar11 = lStack_70;
  func_0x00010ad1bf6c(lStack_70,lVar12 + 0x68);
  lStack_c0 = lVar11;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_b8 = plVar6;
  FUN_10a2b7e7c(lVar12,&lStack_c0,&lStack_c0);
  if (plStack_b8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutex6unlockEv(uVar13);
  puVar5 = (undefined8 *)0x38;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bbb378;
  puVar15 = puVar5 + 3;
  *puVar15 = uVar13;
  puVar5[4] = plVar9;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[5] = lVar11;
  puVar5[6] = plVar6;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = (long *)param_1[0x39];
  param_1[0x38] = (long)puVar15;
  param_1[0x39] = (long)puVar5;
  if (plVar6 == (long *)0x0) {
LAB_10a2ae790:
    plStack_88 = (long *)param_1[0x4d];
    lStack_90 = param_1[0x4c];
    if (param_1[0x4d] != 0) {
      plVar6 = (long *)(param_1[0x4d] + 8);
      do {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar14) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar13 = *puVar15;
    __ZNSt3__15mutex4lockEv(uVar13);
    func_0x00010ad1bd34(puVar15[2] + 0x28,&lStack_90);
    __ZNSt3__15mutex6unlockEv(uVar13);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar14) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    plVar9 = plVar6 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    puVar15 = (undefined8 *)param_1[0x38];
    if (puVar15 != (undefined8 *)0x0) goto LAB_10a2ae790;
  }
  plVar6 = *(long **)(*(long *)(param_1[0x35] + 0x100) + 0x1c8);
  (**(code **)(*plVar6 + 0xa8))();
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  plVar9 = (long *)plVar6[1];
  if ((plVar9 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar9, plVar9 == (long *)0x0)) {
    puVar5 = (undefined8 *)param_1[0x38];
    bVar14 = true;
    lStack_a0 = 0;
    plStack_98 = (long *)0x0;
  }
  else {
    lStack_a0 = *plVar6;
    puVar5 = (undefined8 *)param_1[0x38];
    plVar6 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar14) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar14 = false;
    plStack_98 = plVar9;
    lStack_70 = lStack_a0;
  }
  plVar6 = plStack_98;
  lVar12 = lStack_a0;
  uVar13 = *puVar5;
  __ZNSt3__15mutex4lockEv(uVar13);
  lVar11 = puVar5[2];
  if (!bVar14) {
    plVar9 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_90 = lVar12;
  plStack_88 = plVar6;
  func_0x00010ad1bcd0(lVar11 + 0x128,&lStack_90);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  __ZNSt3__15mutex6unlockEv(uVar13);
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar9 = plStack_98 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    if (param_1[0x3d] == 0) goto LAB_10a2ae968;
  }
  else if (*(char *)((long)param_1 + 0x1f7) == '\0') goto LAB_10a2ae968;
  (**(code **)(*param_1 + 0xb8))(param_1,param_1 + 0x3c,param_1 + 0x3f);
LAB_10a2ae968:
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar14) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a5ae998(param_1[0x1d],&PTR_DAT_110b9f988,param_1[0x35],param_1 + 0x1c);
  FUN_10a5ae998(param_1[0x21],&PTR_DAT_110b9fab0,param_1[0x35],param_1 + 0x20);
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  FUN_10a2aeeb4(param_1 + 0x4f,&lStack_90);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar12 = *plVar7;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar14) {
        *plVar7 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  lVar12 = param_1[0x35];
  func_0x000107c2b054(&lStack_90,&UNK_10e4a7f78);
  if (lVar12 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar12 + 0x8d8),&lStack_90,0);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  lVar12 = param_1[0x35];
  func_0x000107c2b054(&lStack_90,&UNK_10e4a7f94);
  if (lVar12 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar12 + 0x8d8),&lStack_90,0);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  lVar12 = param_1[0x35];
  func_0x000107c2b054(&lStack_90,&UNK_10e4a7fbe);
  if (lVar12 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar12 + 0x8d8),&lStack_90,0);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  lVar12 = param_1[0x35];
  func_0x000107c2b054(&lStack_90,&UNK_10e4a7fe1);
  if (lVar12 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar12 + 0x8d8),&lStack_90,0);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  lVar12 = param_1[0x35];
  func_0x000107c2b054(&lStack_90,&UNK_10e4a8005);
  if (lVar12 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar12 + 0x8d8),&lStack_90,0);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  return param_1;
}



/* Entry: 10a2aee08; end: 10a2aeeb3;  */

undefined8 * FUN_10a2aee08(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_110bbb230;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  FUN_10a5cf1fc(param_1 + 1);
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[1],&PTR_DAT_110bbbb40,param_2,param_1);
  }
  return param_1;
}



/* Entry: 10a2aeeb4; end: 10a2aef17;  */

undefined8 * FUN_10a2aeeb4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a2aef18; end: 10a2aef5b;  */

undefined8 * FUN_10a2aef18(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110bbb230;
  FUN_10a5ae930(param_1[1]);
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a2aef5c; end: 10a2af0c7;  */

undefined8 * FUN_10a2aef5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbaf90;
  param_1[2] = &PTR_DAT_110bbb068;
  param_1[7] = &PTR_DAT_110bbb0c0;
  param_1[0x1c] = &PTR_DAT_110bbb0e0;
  param_1[0x20] = &PTR_DAT_110bbb108;
  param_1[0x24] = &PTR_DAT_110bbb130;
  param_1[0x25] = &PTR_FUN_110bbb160;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649e3b,0x55,&UNK_10f649e7e);
  }
  FUN_10a2af0c8(param_1);
  if (param_1[0x3a] != 0) {
    FUN_10a2b6d0c(param_1[0x3a] + 0x110);
  }
  func_0x00010a2bfcd4(param_1 + 0x4f);
  FUN_10a2bee3c(param_1 + 0x4c);
  FUN_10a004cfc(param_1 + 0x4a);
  FUN_10a004cfc(param_1 + 0x48);
  FUN_10a2bf8c0(param_1 + 0x46);
  FUN_10a2bf55c(param_1 + 0x44);
  FUN_10a2bf1f8(param_1 + 0x42);
  func_0x00010a2bee94(param_1 + 0x40);
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    __ZdlPv(param_1[0x3c]);
  }
  func_0x00010a2bfc7c(param_1 + 0x3a);
  func_0x00010a2bfc24(param_1 + 0x38);
  func_0x00010a004e5c(param_1 + 0x36);
  func_0x00010951ec08(param_1 + 0x31,param_1[0x32]);
  func_0x00010a05a86c(param_1 + 0x28);
  FUN_10a2aef18(param_1 + 0x25);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a2af0c8; end: 10a2af16f;  */

void FUN_10a2af0c8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a0c0,0x1c1,&UNK_10f64a0f9);
  }
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_10a5ae930(*(undefined8 *)(param_1 + 0x1b0));
    *(undefined1 *)(param_1 + 0x150) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x1c0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *puVar2;
      __ZNSt3__15mutex4lockEv(uVar1);
      FUN_10ad19ce4(puVar2[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a2af170; end: 10a2af1a3;  */

undefined8 * FUN_10a2af170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbaf90;
  param_1[2] = &PTR_DAT_110bbb068;
  param_1[7] = &PTR_DAT_110bbb0c0;
  param_1[0x1c] = &PTR_DAT_110bbb0e0;
  param_1[0x20] = &PTR_DAT_110bbb108;
  param_1[0x24] = &PTR_DAT_110bbb130;
  param_1[0x25] = &PTR_FUN_110bbb160;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649e3b,0x55,&UNK_10f649e7e);
  }
  FUN_10a2af0c8(param_1);
  if (param_1[0x3a] != 0) {
    FUN_10a2b6d0c(param_1[0x3a] + 0x110);
  }
  func_0x00010a2bfcd4(param_1 + 0x4f);
  FUN_10a2bee3c(param_1 + 0x4c);
  FUN_10a004cfc(param_1 + 0x4a);
  FUN_10a004cfc(param_1 + 0x48);
  FUN_10a2bf8c0(param_1 + 0x46);
  FUN_10a2bf55c(param_1 + 0x44);
  FUN_10a2bf1f8(param_1 + 0x42);
  func_0x00010a2bee94(param_1 + 0x40);
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    __ZdlPv(param_1[0x3c]);
  }
  func_0x00010a2bfc7c(param_1 + 0x3a);
  func_0x00010a2bfc24(param_1 + 0x38);
  func_0x00010a004e5c(param_1 + 0x36);
  func_0x00010951ec08(param_1 + 0x31,param_1[0x32]);
  func_0x00010a05a86c(param_1 + 0x28);
  FUN_10a2aef18(param_1 + 0x25);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a2af1a4; end: 10a2af247;  */

void FUN_10a2af1a4(void)

{
  FUN_10a2aef5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2af248; end: 10a2af3ef;  */

void FUN_10a2af248(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  int iStack_68;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10e4a8075);
  lVar1 = param_1 + 0x188;
  FUN_10a0df194(lVar1,param_2);
  if (param_1 + 400 == lVar1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_80,*param_2,param_2[1]);
    }
    else {
      uStack_78 = param_2[1];
      puStack_80 = (undefined8 *)*param_2;
      lStack_70 = param_2[2];
    }
    iStack_68 = 1;
    FUN_10a2bfd2c(param_1 + 0x188,&puStack_80,&puStack_80);
  }
  else {
    lVar1 = param_1 + 0x188;
    puStack_38 = param_2;
    func_0x0001095672f0(lVar1,param_2,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    iStack_68 = *(int *)(lVar1 + 0x38) + 1;
    *(int *)(lVar1 + 0x38) = iStack_68;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_80,*param_2,param_2[1]);
      iStack_68 = *(int *)(lVar1 + 0x38);
    }
    else {
      uStack_78 = param_2[1];
      puStack_80 = (undefined8 *)*param_2;
      lStack_70 = param_2[2];
    }
    FUN_10a2bfd2c(param_1 + 0x188,&puStack_80,&puStack_80);
  }
  if (lStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  lVar1 = *(long *)(param_1 + 0x1a8);
  param_1 = param_1 + 0x188;
  puStack_80 = param_2;
  func_0x0001095672f0(param_1,param_2,&UNK_10dd5b8f9,&puStack_80,&puStack_38);
  if (lVar1 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar1 + 0x8d8),auStack_58,*(undefined4 *)(param_1 + 0x38));
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a2af3f0; end: 10a2af463;  */

bool FUN_10a2af3f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xd48;
  FUN_10a5aeb74(param_1,&PTR_DAT_110bbbc90);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != param_1) && ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649ea6,0x86,&UNK_10f649eec);
  }
  return lVar1 == param_1;
}



/* Entry: 10a2af464; end: 10a2af6c7;  */

void FUN_10a2af464(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_38;
  long *plStack_30;
  char cStack_21;
  
  if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x168) = 1;
    lVar5 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(param_1 + 0x1a0) = lVar5;
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a7f78);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,1);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a808f);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a8031);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a80a6);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a80c4);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10e4a80e9);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x000107c2b054(&uStack_38,&UNK_10f64a885);
    if (lVar5 != 0) {
      FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&uStack_38,0);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x240);
  plVar4 = *(long **)(param_1 + 0x248);
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
  plStack_30 = plVar4;
  FUN_10a07e58c();
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2af6c8; end: 10a2af9ff;  */

void FUN_10a2af6c8(long *param_1,long **param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plStack_188;
  long *plStack_180;
  long *aplStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) goto LAB_10a2af948;
  FUN_10a3bf120(&plStack_138);
  lVar9 = *(long *)(param_1[0x35] + 0x100);
  FUN_10a2afa00(&uStack_160,param_1[0x28],param_1);
  plVar4 = (long *)0x138;
  __Znwm();
  plStack_a8 = plStack_138;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9f3b0;
  plVar10 = plVar4 + 3;
  plStack_138 = (long *)0x0;
  plStack_a0 = plStack_130;
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  uVar1 = *(ulong *)(lVar9 + 0x210);
  lVar8 = *(long *)(lVar9 + 0x208);
  if (-1 < (char)*(byte *)(lVar9 + 0x21f)) {
    uVar1 = (ulong)*(byte *)(lVar9 + 0x21f);
    lVar8 = lVar9 + 0x208;
  }
  pcStack_e8 = FUN_10a2bfe08;
  ppuStack_e0 = &PTR_FUN_110bbb770;
  uStack_d8 = uStack_160;
  uStack_c8 = uStack_150;
  uStack_d0 = uStack_158;
  uStack_158 = 0;
  uStack_150 = 0;
  param_2 = (long **)&UNK_10e4a8110;
  param_3 = 0x25;
  FUN_10a23708c(plVar10,&UNK_10e4a8110,0x25,&DAT_10f2d965b,3,&plStack_a8,4,in_x7,lVar8,uVar1,
                &pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&plStack_a8);
  plStack_148 = plVar10;
  plStack_140 = plVar4;
  FUN_10a2afaa8(&uStack_160);
  FUN_10a042634(&plStack_138);
  plVar5 = *(long **)(*(long *)(param_1[0x35] + 0x100) + 0x1c8);
  (**(code **)(*plVar5 + 0x60))();
  plVar6 = (long *)plVar5[1];
  if ((plVar6 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar6, plVar6 != (long *)0x0)) {
    plVar5 = (long *)*plVar5;
    plStack_a8 = plVar5;
    if (plVar5 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_2 = &plStack_188;
      plStack_188 = plVar10;
      plStack_180 = plVar4;
      (**(code **)(*plVar5 + 0x10))(aplStack_178);
      if (cStack_161 < '\0') {
        __ZdlPv();
        plVar5 = aplStack_178[0];
      }
      plVar10 = plStack_180;
      if (plStack_180 != (long *)0x0) {
        plVar4 = plStack_180 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar5 = plVar10;
        }
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      plVar6 = plVar5;
      if (plStack_a0 == (long *)0x0) goto LAB_10a2af910;
    }
    plVar4 = plStack_a0;
    plVar10 = plStack_a0 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar5;
    if (lVar8 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar4;
    }
  }
LAB_10a2af910:
  plVar10 = plStack_140;
  param_1 = plVar6;
  if (plStack_140 != (long *)0x0) {
    plVar4 = plStack_140 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar10;
    }
  }
LAB_10a2af948:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_188);
  func_0x00010a05a8c4(&plStack_a8);
  FUN_10a05bd88(&plStack_148);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_FUN_110bbb250;
  plVar7[3] = param_3;
  plVar10 = param_2[0xb];
  plVar4 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)plVar10;
  *plVar10 = (long)plVar7;
  param_2[0xb] = plVar7;
  param_2[0xc] = (long *)((long)plVar4 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  plVar4 = param_2[1];
  plVar10 = *param_2;
  if (param_2[1] != (long *)0x0) {
    plVar5 = param_2[1] + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)plVar7;
  param_1[2] = (long)plVar4;
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10a2afa00; end: 10a2afaa7;  */

void FUN_10a2afa00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110bbb250;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a2afaa8; end: 10a2afb27;  */

undefined8 * FUN_10a2afaa8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a2afb28; end: 10a2afb2b;  */

void FUN_10a2afb28(long *param_1,long **param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plStack_188;
  long *plStack_180;
  long *aplStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) goto LAB_10a2af948;
  FUN_10a3bf120(&plStack_138);
  lVar9 = *(long *)(param_1[0x35] + 0x100);
  FUN_10a2afa00(&uStack_160,param_1[0x28],param_1);
  plVar4 = (long *)0x138;
  __Znwm();
  plStack_a8 = plStack_138;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9f3b0;
  plVar10 = plVar4 + 3;
  plStack_138 = (long *)0x0;
  plStack_a0 = plStack_130;
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  uVar1 = *(ulong *)(lVar9 + 0x210);
  lVar8 = *(long *)(lVar9 + 0x208);
  if (-1 < (char)*(byte *)(lVar9 + 0x21f)) {
    uVar1 = (ulong)*(byte *)(lVar9 + 0x21f);
    lVar8 = lVar9 + 0x208;
  }
  pcStack_e8 = FUN_10a2bfe08;
  ppuStack_e0 = &PTR_FUN_110bbb770;
  uStack_d8 = uStack_160;
  uStack_c8 = uStack_150;
  uStack_d0 = uStack_158;
  uStack_158 = 0;
  uStack_150 = 0;
  param_2 = (long **)&UNK_10e4a8110;
  param_3 = 0x25;
  FUN_10a23708c(plVar10,&UNK_10e4a8110,0x25,&DAT_10f2d965b,3,&plStack_a8,4,in_x7,lVar8,uVar1,
                &pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&plStack_a8);
  plStack_148 = plVar10;
  plStack_140 = plVar4;
  FUN_10a2afaa8(&uStack_160);
  FUN_10a042634(&plStack_138);
  plVar5 = *(long **)(*(long *)(param_1[0x35] + 0x100) + 0x1c8);
  (**(code **)(*plVar5 + 0x60))();
  plVar6 = (long *)plVar5[1];
  if ((plVar6 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar6, plVar6 != (long *)0x0)) {
    plVar5 = (long *)*plVar5;
    plStack_a8 = plVar5;
    if (plVar5 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_2 = &plStack_188;
      plStack_188 = plVar10;
      plStack_180 = plVar4;
      (**(code **)(*plVar5 + 0x10))(aplStack_178);
      if (cStack_161 < '\0') {
        __ZdlPv();
        plVar5 = aplStack_178[0];
      }
      plVar10 = plStack_180;
      if (plStack_180 != (long *)0x0) {
        plVar4 = plStack_180 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar5 = plVar10;
        }
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      plVar6 = plVar5;
      if (plStack_a0 == (long *)0x0) goto LAB_10a2af910;
    }
    plVar4 = plStack_a0;
    plVar10 = plStack_a0 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar5;
    if (lVar8 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar4;
    }
  }
LAB_10a2af910:
  plVar10 = plStack_140;
  param_1 = plVar6;
  if (plStack_140 != (long *)0x0) {
    plVar4 = plStack_140 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar10;
    }
  }
LAB_10a2af948:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_188);
  func_0x00010a05a8c4(&plStack_a8);
  FUN_10a05bd88(&plStack_148);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_FUN_110bbb250;
  plVar7[3] = param_3;
  plVar10 = param_2[0xb];
  plVar4 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)plVar10;
  *plVar10 = (long)plVar7;
  param_2[0xb] = plVar7;
  param_2[0xc] = (long *)((long)plVar4 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  plVar4 = param_2[1];
  plVar10 = *param_2;
  if (param_2[1] != (long *)0x0) {
    plVar5 = param_2[1] + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)plVar7;
  param_1[2] = (long)plVar4;
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10a2afb2c; end: 10a2b0dc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a2b0b24) */
/* WARNING: Removing unreachable block (ram,0x00010a2b08a8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b044c) */
/* WARNING: Removing unreachable block (ram,0x00010a2b0738) */
/* WARNING: Removing unreachable block (ram,0x00010a2b0b34) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a2afb2c(long *******param_1,long *******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  char cVar13;
  undefined8 *puVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long ******pppppplVar21;
  long *****ppppplVar22;
  long *******ppppppplVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long ****pppplVar30;
  undefined4 *puVar31;
  long lVar32;
  long *******ppppppplVar33;
  ulong uVar34;
  undefined8 ******ppppppuVar35;
  undefined8 ******ppppppuVar36;
  long ****pppplVar37;
  long ****pppplStack_1a8;
  long ******pppppplStack_1a0;
  long ****pppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined8 *******pppppppuStack_128;
  long ******pppppplStack_120;
  ulong uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  
  if (((ulong)param_1[0x2a] & 1) == 0) {
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (((ulong)param_1[0x2c] & 1) != 0) goto LAB_10a2af948;
    FUN_10a3bf120(&uStack_138);
    ppppplVar22 = param_1[0x35][0x20];
    FUN_10a2afa00(&uStack_160,param_1[0x28],param_1);
    ppppppplVar23 = (long *******)0x138;
    __Znwm();
    ppppppplVar25 = ppppppplVar23 + 1;
    *ppppppplVar25 = (long ******)0x0;
    ppppppplVar23[2] = (long ******)0x0;
    *ppppppplVar23 = (long ******)&PTR_FUN_110b9f3b0;
    ppppppplVar24 = ppppppplVar23 + 3;
    ppppppplStack_a8 = (long *******)CONCAT44(uStack_134,uStack_138);
    ppppppplStack_a0 = (long *******)CONCAT44(iStack_12c,uStack_130);
    uStack_138 = 0;
    uStack_134 = 0;
    (*(code *)pppppppuStack_128[2])(&ppppppplStack_98,&pppppppuStack_128);
    pppplStack_198 = ppppplVar22[0x42];
    pppppplStack_1a0 = (long ******)ppppplVar22[0x41];
    if (-1 < (char)*(byte *)((long)ppppplVar22 + 0x21f)) {
      pppplStack_198 = (long ****)(ulong)*(byte *)((long)ppppplVar22 + 0x21f);
      pppppplStack_1a0 = (long ******)(ppppplVar22 + 0x41);
    }
    ppppppplStack_190 = (long *******)&ppppppplStack_e8;
    ppppppplStack_e8 = (long *******)FUN_10a2bfe08;
    ppuStack_e0 = &PTR_FUN_110bbb770;
    pppppplStack_c8 = pppppplStack_150;
    pppppplStack_d0 = pppppplStack_158;
    pppppplStack_158 = (long ******)0x0;
    pppppplStack_150 = (long ******)0x0;
    param_2 = (long *******)&UNK_10e4a8110;
    param_3 = (long *****)0x25;
    FUN_10a23708c(ppppppplVar24,&UNK_10e4a8110,0x25,&DAT_10f2d965b,3,&ppppppplStack_a8,4);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&ppppppplStack_a8);
    uStack_140 = SUB84(ppppppplVar23,0);
    uStack_13c = (undefined4)((ulong)ppppppplVar23 >> 0x20);
    uStack_148 = ppppppplVar24;
    FUN_10a2afaa8(&uStack_160);
    FUN_10a042634(&uStack_138);
    pppplVar37 = param_1[0x35][0x20][0x39];
    (*(code *)(*pppplVar37)[0xc])();
    ppppppplVar15 = (long *******)pppplVar37[1];
    if (ppppppplVar15 != (long *******)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      ppppppplStack_a0 = ppppppplVar15;
      if (ppppppplVar15 != (long *******)0x0) {
        ppppppplVar15 = (long *******)*pppplVar37;
        ppppppplStack_a8 = ppppppplVar15;
        if (ppppppplVar15 != (long *******)0x0) {
          do {
            cVar13 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
            if (bVar8) {
              *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          param_2 = (long *******)&ppppppplStack_188;
          ppppppplStack_188 = ppppppplVar24;
          ppppppplStack_180 = ppppppplVar23;
          (*(code *)(*ppppppplVar15)[2])(&uStack_178);
          if (uStack_164._3_1_ < '\0') {
            ppppppplVar15 = (long *******)CONCAT44(uStack_178._4_4_,(uint)uStack_178);
            __ZdlPv();
          }
          ppppppplVar24 = ppppppplStack_180;
          if (ppppppplStack_180 != (long *******)0x0) {
            ppppppplVar23 = ppppppplStack_180 + 1;
            do {
              pppppplVar28 = *ppppppplVar23;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
              if (bVar8) {
                *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (pppppplVar28 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_180)[2])(ppppppplStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppplVar15 = ppppppplVar24;
            }
          }
          *(undefined1 *)(param_1 + 0x2c) = 1;
          if (ppppppplStack_a0 == (long *******)0x0) goto LAB_10a2af910;
        }
        ppppppplVar23 = ppppppplStack_a0;
        ppppppplVar24 = ppppppplStack_a0 + 1;
        do {
          pppppplVar28 = *ppppppplVar24;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
          if (bVar8) {
            *ppppppplVar24 = (long ******)((long)pppppplVar28 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar28 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_a0)[2])(ppppppplStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar15 = ppppppplVar23;
        }
      }
    }
LAB_10a2af910:
    ppppppplVar24 = (long *******)CONCAT44(uStack_13c,uStack_140);
    param_1 = ppppppplVar15;
    if (ppppppplVar24 != (long *******)0x0) {
      ppppppplVar23 = ppppppplVar24 + 1;
      do {
        pppppplVar28 = *ppppppplVar23;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar8) {
          *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar28 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppplVar24;
      }
    }
LAB_10a2af948:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      FUN_10a05bd88(&ppppppplStack_188);
      func_0x00010a05a8c4(&ppppppplStack_a8);
      FUN_10a05bd88(&uStack_148);
      __Unwind_Resume();
      pppplStack_1a8 = (long ****)FUN_10a2afa00;
      __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
      pppppplVar21 = (long ******)0x48;
      __Znwm();
      pppppplVar21[2] = (long *****)&PTR_FUN_110bbb250;
      pppppplVar21[3] = param_3;
      pppppplVar28 = param_2[0xb];
      pppppplVar26 = param_2[0xc];
      *pppppplVar21 = (long *****)(param_2 + 10);
      pppppplVar21[1] = (long *****)pppppplVar28;
      *pppppplVar28 = (long *****)pppppplVar21;
      param_2[0xb] = pppppplVar21;
      param_2[0xc] = (long ******)((long)pppppplVar26 + 1);
      __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
      pppppplVar26 = param_2[1];
      pppppplVar28 = *param_2;
      if (param_2[1] != (long ******)0x0) {
        pppppplVar1 = param_2[1] + 2;
        do {
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
          if (bVar8) {
            *pppppplVar1 = (long *****)((long)*pppppplVar1 + 1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      *param_1 = pppppplVar21;
      param_1[2] = pppppplVar26;
      param_1[1] = pppppplVar28;
      return;
    }
    return;
  }
  iVar5 = *(int *)((long)param_1 + 0x1fc);
  if (iVar5 == 0) {
    pppppplVar28 = param_1[0x38];
    pppplStack_1a8 = (long ****)((ulong)pppplStack_1a8 & 0xffffffffffffff00);
    pppplStack_198 = (long ****)0x0;
    pppppplStack_1a0 = (long ******)0x0;
    ppppppplStack_188 = (long *******)0x0;
    ppppppplStack_190 = (long *******)0x0;
    ppppppplStack_180 = (long *******)CONCAT71(ppppppplStack_180._1_7_,1);
    uStack_178._0_4_ = (uint)uStack_178 & 0xffffff00;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_164 = 0;
    uStack_160._0_4_ = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_160._4_4_ = 0;
    if (pppppplVar28 != (long ******)0x0) {
      ppppplVar22 = *pppppplVar28;
      __ZNSt3__15mutex4lockEv(ppppplVar22);
      ppppplVar29 = pppppplVar28[2];
      pppplStack_1a8 = (long ****)CONCAT71(pppplStack_1a8._1_7_,*(undefined1 *)(ppppplVar29 + 8));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pppppplStack_1a0,ppppplVar29 + 9);
      ppppppplStack_188 = (long *******)ppppplVar29[0xc];
      ppppppplStack_180 =
           (long *******)CONCAT71(ppppppplStack_180._1_7_,*(undefined1 *)(ppppplVar29 + 0xd));
      uStack_178._0_4_ = (uint)ppppplVar29[0xe];
      uStack_178._4_4_ = (undefined4)((ulong)ppppplVar29[0xe] >> 0x20);
      param_2 = (long *******)(ppppplVar29 + 0xf);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_170);
      __ZNSt3__15mutex6unlockEv(ppppplVar22);
    }
    ppppppplVar24 = ppppppplStack_188;
    if ((long)param_1[0x2b] < (long)ppppppplStack_188) {
      if ((char)uStack_178 != '\x01') {
        FUN_10a2b1328(param_1,&pppppplStack_1a0,(ulong)ppppppplStack_180 & 0xff);
        param_1[0x2b] = (long ******)ppppppplVar24;
        param_2 = (long *******)param_1[0x43];
        FUN_10a2b149c(param_1[0x42],param_2,&pppppplStack_1a0,(ulong)ppppppplStack_180 & 0xff);
        goto LAB_10a2afd18;
      }
      ppppppplVar23 = (long *******)param_1[0x46];
      ppppppplStack_b8 = (long *******)param_1[0x47];
      if (ppppppplStack_b8 != (long *******)0x0) {
        ppppppplVar25 = ppppppplStack_b8 + 1;
        do {
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
          if (bVar8) {
            *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      ppppppplStack_c0 = ppppppplVar23;
      FUN_10a2c030c(&ppppppplStack_98,uStack_178._4_4_,&uStack_170);
      param_2 = (long *******)&ppppppplStack_98;
      FUN_10a2b0dc8(ppppppplVar23);
      ppppppplVar23 = ppppppplStack_90;
      param_1[0x2b] = (long ******)ppppppplVar24;
      if (ppppppplStack_90 != (long *******)0x0) {
        ppppppplVar24 = ppppppplStack_90 + 1;
        do {
          pppppplVar28 = *ppppppplVar24;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
          if (bVar8) {
            *ppppppplVar24 = (long ******)((long)pppppplVar28 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar28 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar23);
        }
      }
      ppppppplVar24 = ppppppplStack_b8;
      if (ppppppplStack_b8 != (long *******)0x0) {
        ppppppplVar23 = ppppppplStack_b8 + 1;
        do {
          pppppplVar28 = *ppppppplVar23;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
          if (bVar8) {
            *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar28 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
        }
      }
      bVar8 = false;
    }
    else {
LAB_10a2afd18:
      bVar8 = true;
    }
    if (uStack_160._4_4_ < 0) {
      __ZdlPv(CONCAT44(uStack_16c,uStack_170));
    }
    if ((long)ppppppplStack_190 < 0) {
      __ZdlPv(pppppplStack_1a0);
    }
    if (!bVar8) {
      return;
    }
    iVar5 = *(int *)((long)param_1 + 0x1fc);
  }
  if (iVar5 != 1) goto LAB_10a2b0a80;
  pppppplVar28 = param_1[0x38];
  pppplStack_1a8 = (long ****)CONCAT71(pppplStack_1a8._1_7_,1);
  pppplStack_198 = (long ****)0x0;
  pppppplStack_1a0 = (long ******)0x0;
  ppppppplStack_188 = (long *******)0x0;
  ppppppplStack_190 = (long *******)0x0;
  uStack_178._0_4_ = 0;
  uStack_178._4_4_ = 0;
  uStack_178 = (long *******)0x0;
  ppppppplStack_180 = (long *******)0x0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  pppppplStack_158 = (long ******)0x0;
  uStack_160._0_4_ = 0;
  uStack_160._4_4_ = 0;
  uStack_160 = 0;
  pppppplStack_150 = (long ******)CONCAT71(pppppplStack_150._1_7_,1);
  uStack_148._0_4_ = (uint)uStack_148 & 0xffffff00;
  uStack_148._4_4_ = 0;
  uStack_140 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  iStack_12c = 0;
  if (pppppplVar28 != (long ******)0x0) {
    ppppplVar22 = *pppppplVar28;
    __ZNSt3__15mutex4lockEv(ppppplVar22);
    ppppplVar29 = pppppplVar28[2];
    pppplStack_1a8 = (long ****)CONCAT71(pppplStack_1a8._1_7_,*(undefined1 *)(ppppplVar29 + 0x12));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&pppppplStack_1a0,ppppplVar29 + 0x13);
    ppppppplVar24 = ppppppplStack_188;
    if (ppppplVar29 + 0x12 != &pppplStack_1a8) {
      ppppppplVar23 = (long *******)ppppplVar29[0x16];
      pppplVar37 = ppppplVar29[0x17];
      uVar19 = (long)pppplVar37 - (long)ppppppplVar23;
      lVar18 = CONCAT44(uStack_178._4_4_,(uint)uStack_178);
      if ((ulong)(lVar18 - (long)ppppppplStack_188) < uVar19) {
        uVar34 = ((long)uVar19 >> 5) * -0x3333333333333333;
        ppppppplVar25 = ppppppplStack_180;
        if (ppppppplStack_188 != (long *******)0x0) {
          while (ppppppplVar25 != ppppppplVar24) {
            FUN_10a2b6eec(ppppppplVar25 + -0x14);
            ppppppplVar25 = ppppppplVar25 + -0x14;
          }
          ppppppplStack_180 = ppppppplVar24;
          __ZdlPv(ppppppplStack_188);
          lVar18 = 0;
          ppppppplStack_188 = (long *******)0x0;
          ppppppplStack_180 = (long *******)0x0;
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
        }
        if (uVar34 < 0x19999999999999a) {
          uVar20 = (lVar18 >> 5) * -0x6666666666666666;
          if (uVar20 < uVar34 || uVar20 + ((long)uVar19 >> 5) * 0x3333333333333333 == 0) {
            uVar20 = uVar34;
          }
          if (0xcccccccccccccb < (ulong)((lVar18 >> 5) * -0x3333333333333333)) {
            uVar20 = 0x199999999999999;
          }
          if (uVar20 < 0x19999999999999a) {
            ppppppplVar24 = (long *******)&ppppppplStack_188;
            FUN_10a2c2da8();
            uStack_178 = ppppppplVar24 + uVar20 * 0x14;
            ppppppplStack_188 = ppppppplVar24;
            ppppppplStack_180 = ppppppplVar24;
            FUN_10a2c2ad4(ppppppplVar23,pppplVar37,ppppppplVar24);
            goto LAB_10a2aff14;
          }
        }
        FUN_10a2c2d94();
        goto LAB_10a2b0b8c;
      }
      uVar34 = (long)ppppppplStack_180 - (long)ppppppplStack_188;
      if (uVar34 < uVar19) {
        FUN_10a2c2b58(ppppppplVar23,(long)ppppppplVar23 + uVar34,ppppppplStack_188);
        ppppppplVar23 = (long *******)((long)ppppppplVar23 + uVar34);
        FUN_10a2c2ad4(ppppppplVar23,pppplVar37,ppppppplStack_180);
      }
      else {
        FUN_10a2c2b58(ppppppplVar23,pppplVar37,ppppppplStack_188);
        ppppppplVar24 = ppppppplStack_180;
        while (ppppppplVar24 != ppppppplVar23) {
          ppppppplVar24 = ppppppplVar24 + -0x14;
          FUN_10a2b6eec(ppppppplVar24);
        }
      }
LAB_10a2aff14:
      ppppppplStack_180 = ppppppplVar23;
      uVar7 = uStack_16c;
      uVar6 = uStack_170;
      pppplVar37 = ppppplVar29[0x19];
      pppplVar30 = ppppplVar29[0x1a];
      uVar19 = (long)pppplVar30 - (long)pppplVar37;
      lVar32 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      lVar18 = CONCAT44(uStack_16c,uStack_170);
      if ((ulong)(lVar32 - lVar18) < uVar19) {
        uVar34 = ((long)uVar19 >> 3) * 0x6db6db6db6db6db7;
        if (lVar18 != 0) {
          lVar32 = CONCAT44(uStack_164,uStack_168);
          if (lVar32 != lVar18) {
            do {
              lVar32 = lVar32 + -0x38;
              FUN_10a2b6df4(lVar32);
            } while (lVar32 != lVar18);
            lVar18 = CONCAT44(uStack_16c,uStack_170);
          }
          uStack_168 = uVar6;
          uStack_164 = uVar7;
          __ZdlPv(lVar18);
          lVar32 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160._0_4_ = 0;
          uStack_160._4_4_ = 0;
        }
        if (uVar34 < 0x492492492492493) {
          uVar20 = (lVar32 >> 3) * -0x2492492492492492;
          if (uVar20 < uVar34 || uVar20 + ((long)uVar19 >> 3) * -0x6db6db6db6db6db7 == 0) {
            uVar20 = uVar34;
          }
          if (0x249249249249248 < (ulong)((lVar32 >> 3) * 0x6db6db6db6db6db7)) {
            uVar20 = 0x492492492492492;
          }
          if (uVar20 < 0x492492492492493) {
            puVar14 = (undefined8 *)&uStack_170;
            FUN_10a2c2fe4();
            uStack_170 = SUB84(puVar14,0);
            uStack_16c = (undefined4)((ulong)puVar14 >> 0x20);
            uStack_160 = (long)(puVar14 + uVar20 * 7);
            uStack_168 = uStack_170;
            uStack_164 = uStack_16c;
            FUN_10a2c2dec(pppplVar37,pppplVar30,puVar14);
            goto LAB_10a2b0044;
          }
        }
        FUN_10a2c2fd0();
        goto LAB_10a2b0b8c;
      }
      uVar34 = CONCAT44(uStack_164,uStack_168) - lVar18;
      if (uVar34 < uVar19) {
        FUN_10a2c2f10(pppplVar37,(long)pppplVar37 + uVar34,lVar18);
        pppplVar37 = (long ****)((long)pppplVar37 + uVar34);
        FUN_10a2c2dec(pppplVar37,pppplVar30,CONCAT44(uStack_164,uStack_168));
LAB_10a2b0044:
        uStack_168 = SUB84(pppplVar37,0);
        uStack_164 = (undefined4)((ulong)pppplVar37 >> 0x20);
      }
      else {
        FUN_10a2c2f10(pppplVar37,pppplVar30,lVar18);
        pppplVar30 = (long ****)CONCAT44(uStack_164,uStack_168);
        while (pppplVar30 != pppplVar37) {
          pppplVar30 = pppplVar30 + -7;
          FUN_10a2b6df4(pppplVar30);
        }
        uStack_168 = SUB84(pppplVar37,0);
        uStack_164 = (undefined4)((ulong)pppplVar37 >> 0x20);
      }
    }
    pppppplStack_158 = (long ******)ppppplVar29[0x1c];
    pppppplStack_150 =
         (long ******)CONCAT71(pppppplStack_150._1_7_,*(undefined1 *)(ppppplVar29 + 0x1d));
    uStack_148._0_4_ = (uint)ppppplVar29[0x1e];
    uStack_148._4_4_ = (undefined4)((ulong)ppppplVar29[0x1e] >> 0x20);
    param_2 = (long *******)(ppppplVar29 + 0x1f);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_140);
    __ZNSt3__15mutex6unlockEv(ppppplVar22);
  }
  pppppplVar28 = pppppplStack_158;
  if ((long)param_1[0x2b] < (long)pppppplStack_158) {
    if ((char)uStack_148 != '\x01') {
      if (*(char *)param_1[0x4c] == '\x01') {
        param_2 = &pppppplStack_1a0;
        FUN_10a2b1328(param_1,param_2,(ulong)pppppplStack_150 & 0xff);
      }
      param_1[0x2b] = pppppplVar28;
      ppppppplStack_f8 = (long *******)0x0;
      ppppppplStack_f0 = (long *******)0x0;
      ppppppplStack_e8 = (long *******)0x0;
      ppppppplStack_110 = (long *******)0x0;
      ppppppplStack_108 = (long *******)0x0;
      ppppppplStack_100 = (long *******)0x0;
      puVar9 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
      puVar31 = (undefined4 *)CONCAT44(uStack_164,uStack_168);
      puVar10 = PTR___DefaultRuneLocale_11034bcf8;
      ppppppplVar24 = ppppppplStack_188;
      ppppppplVar23 = ppppppplStack_180;
      if ((long)puVar31 - (long)puVar9 != 0) {
        ppppppplVar24 = (long *******)(((long)puVar31 - (long)puVar9 >> 3) * 0x6db6db6db6db6db7);
        if ((ulong)ppppppplVar24 >> 0x3c != 0) {
          FUN_10a2b7024();
LAB_10a2b0b8c:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10a2b0b90);
          (*pcVar12)();
        }
        ppppppplStack_a0 = (long *******)&ppppppplStack_110;
        FUN_10a2b7038();
        lVar18 = (long)param_2 * 2;
        ppppppplVar23 =
             (long *******)
             ((long)ppppppplVar24 - ((long)ppppppplStack_108 - (long)ppppppplStack_110));
        param_2 = ppppppplStack_110;
        _memcpy(ppppppplVar23);
        ppppppplStack_b0 = ppppppplStack_110;
        ppppppplStack_a8 = ppppppplStack_100;
        ppppppplStack_c0 = ppppppplStack_110;
        ppppppplStack_b8 = ppppppplStack_110;
        ppppppplStack_110 = ppppppplVar23;
        ppppppplStack_108 = ppppppplVar24;
        ppppppplStack_100 = ppppppplVar24 + lVar18;
        func_0x00010a2b706c(&ppppppplStack_c0);
        puVar9 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
        puVar31 = (undefined4 *)CONCAT44(uStack_164,uStack_168);
        puVar10 = PTR___DefaultRuneLocale_11034bcf8;
        ppppppplVar24 = ppppppplStack_188;
        ppppppplVar23 = ppppppplStack_180;
      }
      for (; PTR___DefaultRuneLocale_11034bcf8 = puVar10, ppppppplStack_188 = ppppppplVar24,
          ppppppplStack_180 = ppppppplVar23, puVar9 != puVar31; puVar9 = puVar9 + 0xe) {
        pppppplStack_d0 = (long ******)0x0;
        pppppplStack_c8 = (long ******)0x0;
        puVar14 = *(undefined8 **)(puVar9 + 2);
        (**(code **)*puVar14)();
        if ((int)puVar14 == 0) {
          ppppppplVar24 = (long *******)0x50;
          __Znwm();
          ppppppplVar23 = ppppppplVar24 + 1;
          *ppppppplVar23 = (long ******)0x0;
          ppppppplVar24[2] = (long ******)0x0;
          *ppppppplVar24 = (long ******)&PTR_FUN_110bbb278;
          ppppppplVar25 = ppppppplVar24 + 3;
          *ppppppplVar25 = (long ******)&PTR_FUN_110c36718;
          ppppppplVar24[4] = (long ******)0x0;
          ppppppplVar24[5] = (long ******)0x0;
          ppppppplVar24[8] = (long ******)0x0;
          ppppppplVar24[9] = (long ******)0x0;
          ppppppplVar24[7] = (long ******)0x0;
          *(undefined1 *)(ppppppplVar24 + 6) = *(undefined1 *)(puVar9 + 0xc);
          pppppppuVar4 = *(undefined8 ********)(puVar9 + 2);
          pppppplVar28 = *(long *******)(puVar9 + 4);
          if (pppppplVar28 != (long ******)0x0) {
            pppppplVar26 = pppppplVar28 + 1;
            do {
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
              if (bVar8) {
                *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          uVar6 = *puVar9;
          uVar7 = *(undefined4 *)(pppppppuVar4 + 5);
          pppppplVar26 = (long ******)0x68;
          pppppppuStack_128 = pppppppuVar4;
          pppppplStack_120 = pppppplVar28;
          ppppppplStack_98 = ppppppplVar25;
          ppppppplStack_90 = ppppppplVar24;
          __Znwm();
          pppppplVar26[1] = (long *****)0x0;
          pppppplVar26[2] = (long *****)0x0;
          *pppppplVar26 = (long *****)&PTR_DAT_110bbb2c8;
          pppppplVar26[4] = (long *****)0x0;
          pppppplVar26[5] = (long *****)0x0;
          *(undefined4 *)(pppppplVar26 + 6) = uVar6;
          pppppplVar26[7] = (long *****)ppppppplVar25;
          pppppplVar26[8] = (long *****)ppppppplVar24;
          do {
            cVar13 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
            if (bVar8) {
              *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + 1);
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          pppppplVar26[3] = (long *****)&PTR_FUN_110c36770;
          if (*(char *)((long)pppppppuVar4 + 0x27) < '\0') {
            func_0x000107c3192c(pppppplVar26 + 9,pppppppuVar4[2],pppppppuVar4[3]);
          }
          else {
            ppppppuVar36 = pppppppuVar4[3];
            ppppppuVar35 = pppppppuVar4[2];
            pppppplVar26[0xb] = (long *****)pppppppuVar4[4];
            pppppplVar26[10] = (long *****)ppppppuVar36;
            pppppplVar26[9] = (long *****)ppppppuVar35;
          }
          *(undefined1 *)(pppppplVar26 + 0xc) = 0;
          *(char *)((long)pppppplVar26 + 0x61) = (char)uVar7;
          pppppplVar21 = param_1[0x35];
          param_2 = (long *******)&UNK_10f64a8aa;
          pppppplStack_d0 = pppppplVar26 + 3;
          pppppplStack_c8 = pppppplVar26;
          func_0x000107c2b054(&ppppppplStack_c0);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          if (pppppplVar21 != (long ******)0x0) {
            param_2 = (long *******)&ppppppplStack_c0;
            FUN_10a76bd40(pppppplVar21[0x11b]);
          }
          if (pppppplVar28 != (long ******)0x0) {
            pppppplVar26 = pppppplVar28 + 1;
            do {
              ppppplVar22 = *pppppplVar26;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
              if (bVar8) {
                *pppppplVar26 = (long *****)((long)ppppplVar22 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (ppppplVar22 == (long *****)0x0) {
              (*(code *)(*pppppplVar28)[2])(pppppplVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
            }
          }
          ppppppplVar24 = ppppppplStack_90;
          if (ppppppplStack_90 != (long *******)0x0) {
            ppppppplVar23 = ppppppplStack_90 + 1;
            do {
              pppppplVar28 = *ppppppplVar23;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
              if (bVar8) {
                *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (pppppplVar28 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
            }
          }
        }
        if (ppppppplStack_108 < ppppppplStack_100) {
          ppppppplVar25 = ppppppplStack_108 + 2;
          ppppppplStack_108[1] = pppppplStack_c8;
          *ppppppplStack_108 = pppppplStack_d0;
        }
        else {
          lVar18 = (long)ppppppplStack_108 - (long)ppppppplStack_110;
          uVar19 = (lVar18 >> 4) + 1;
          if (uVar19 >> 0x3c != 0) {
            FUN_10a2b7024();
            goto LAB_10a2b0b8c;
          }
          uVar34 = (long)ppppppplStack_100 - (long)ppppppplStack_110 >> 3;
          if (uVar34 <= uVar19) {
            uVar34 = uVar19;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppppppplStack_100 - (long)ppppppplStack_110)) {
            uVar34 = 0xfffffffffffffff;
          }
          ppppppplStack_a0 = (long *******)&ppppppplStack_110;
          FUN_10a2b7038();
          plVar3 = (long *)(uVar34 + lVar18);
          lVar18 = (long)param_2 * 0x10;
          ppppppplVar25 = (long *******)(plVar3 + 2);
          plVar3[1] = (long)pppppplStack_c8;
          *plVar3 = (long)pppppplStack_d0;
          ppppppplVar24 =
               (long *******)((long)plVar3 - ((long)ppppppplStack_108 - (long)ppppppplStack_110));
          param_2 = ppppppplStack_110;
          _memcpy(ppppppplVar24);
          ppppppplStack_b0 = ppppppplStack_110;
          ppppppplStack_a8 = ppppppplStack_100;
          ppppppplStack_c0 = ppppppplStack_110;
          ppppppplStack_b8 = ppppppplStack_110;
          ppppppplStack_110 = ppppppplVar24;
          ppppppplStack_108 = ppppppplVar25;
          ppppppplStack_100 = (long *******)(uVar34 + lVar18);
          func_0x00010a2b706c(&ppppppplStack_c0);
        }
        puVar10 = PTR___DefaultRuneLocale_11034bcf8;
        ppppppplVar24 = ppppppplStack_188;
        ppppppplVar23 = ppppppplStack_180;
        ppppppplStack_108 = ppppppplVar25;
      }
      if (ppppppplVar24 != ppppppplVar23) {
        ppppppplVar25 = param_1 + 0x4f;
        do {
          if (*(char *)ppppppplVar24 == '\x02') {
            pppppplVar28 = ppppppplVar24[0xe];
            ppppppplVar15 = (long *******)ppppppplVar24[0xd];
            if (-1 < (char)*(byte *)((long)ppppppplVar24 + 0x7f)) {
              pppppplVar28 = (long ******)(ulong)*(byte *)((long)ppppppplVar24 + 0x7f);
              ppppppplVar15 = ppppppplVar24 + 0xd;
            }
            pppppplStack_120 = (long ******)0x0;
            uStack_118 = 0;
            pppppppuStack_128 = (undefined8 *******)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_128,pppppplVar28,0);
            if (pppppplVar28 != (long ******)0x0) {
              pppppplVar26 = (long ******)0x0;
              do {
                cVar13 = *(char *)((long)ppppppplVar15 + (long)pppppplVar26);
                lVar18 = (long)cVar13;
                if ((-1 < lVar18) && ((*(uint *)(puVar10 + lVar18 * 4 + 0x3c) >> 0xf & 1) != 0)) {
                  ___tolower();
                  cVar13 = (char)lVar18;
                }
                pppppplVar21 = pppppplStack_120;
                if (-1 < (long)uStack_118) {
                  pppppplVar21 = (long ******)(uStack_118 >> 0x38);
                }
                if (pppppplVar21 < pppppplVar26) goto LAB_10a2b0b8c;
                pppppppuVar4 = pppppppuStack_128;
                if (-1 < (long)uStack_118) {
                  pppppppuVar4 = &pppppppuStack_128;
                }
                *(char *)((long)pppppppuVar4 + (long)pppppplVar26) = cVar13;
                pppppplVar26 = (long ******)((long)pppppplVar26 + 1);
              } while (pppppplVar28 != pppppplVar26);
            }
            if (*(char *)(param_1 + 0x4e) == '\x01') {
              pppppplVar28 = *ppppppplVar25;
              if (pppppplVar28 == (long ******)0x0) {
                pppppplVar28 = param_1[0x35];
                ppppppplVar15 = (long *******)0x30;
                __Znwm();
                ppppppplVar33 = ppppppplVar15 + 1;
                *ppppppplVar33 = (long ******)0x0;
                ppppppplVar15[2] = (long ******)0x0;
                ppppppplVar16 = ppppppplVar15 + 3;
                *ppppppplVar15 = (long ******)&PTR_DAT_110bbb950;
                FUN_10a9c38ac(ppppppplVar16,pppppplVar28);
                ppppppplStack_c0 = ppppppplVar16;
                ppppppplStack_b8 = ppppppplVar15;
                if (ppppppplVar15[4] == (long ******)0x0) {
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                    if (bVar8) {
                      *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar16 = ppppppplVar15 + 2;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                    if (bVar8) {
                      *ppppppplVar16 = (long ******)((long)*ppppppplVar16 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar15[3] = (long ******)(ppppppplVar15 + 3);
                  ppppppplVar15[4] = (long ******)ppppppplVar15;
LAB_10a2b0644:
                  do {
                    pppppplVar28 = *ppppppplVar33;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                    if (bVar8) {
                      *ppppppplVar33 = (long ******)((long)pppppplVar28 + -1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (pppppplVar28 == (long ******)0x0) {
                    (*(code *)(*ppppppplVar15)[2])(ppppppplVar15);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
                  }
                }
                else if (ppppppplVar15[4][1] == (long *****)0xffffffffffffffff) {
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                    if (bVar8) {
                      *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar16 = ppppppplVar15 + 2;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                    if (bVar8) {
                      *ppppppplVar16 = (long ******)((long)*ppppppplVar16 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar15[3] = (long ******)(ppppppplVar15 + 3);
                  ppppppplVar15[4] = (long ******)ppppppplVar15;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  goto LAB_10a2b0644;
                }
                FUN_10a2aeeb4(ppppppplVar25,&ppppppplStack_c0);
                ppppppplVar15 = ppppppplStack_b8;
                if (ppppppplStack_b8 != (long *******)0x0) {
                  ppppppplVar16 = ppppppplStack_b8 + 1;
                  do {
                    pppppplVar28 = *ppppppplVar16;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                    if (bVar8) {
                      *ppppppplVar16 = (long ******)((long)pppppplVar28 + -1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (pppppplVar28 == (long ******)0x0) {
                    (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar15);
                  }
                }
                pppppplVar28 = *ppppppplVar25;
              }
              pppppplVar26 = param_1[0x50];
              if (pppppplVar26 != (long ******)0x0) {
                pppppplVar21 = pppppplVar26 + 1;
                do {
                  cVar13 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
                  if (bVar8) {
                    *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              pppppplStack_d0 = pppppplVar28;
              pppppplStack_c8 = pppppplVar26;
              FUN_10a9c3928(pppppplVar28,&pppppppuStack_128);
              if ((int)pppppplVar28 != 0) {
                ppppppplStack_98 = (long *******)0x0;
                ppppppplStack_90 = (long *******)0x0;
                ppppppplStack_88 = (long *******)0x0;
                FUN_10a2b2150(&ppuStack_e0,param_1,ppppppplVar24,(ulong)pppppplStack_150 & 0xff);
                ppuVar11 = ppuStack_e0;
                if (ppuStack_e0 != (undefined **)0x0) {
                  pppppplVar28 = param_1[0x35];
                  func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a808f);
                  if (pppppplVar28 != (long ******)0x0) {
                    FUN_10a76bd40(pppppplVar28[0x11b],&ppppppplStack_c0,1);
                  }
                  ppppppplStack_a0 = (long *******)&ppppppplStack_98;
                  puVar14 = (undefined8 *)0x10;
                  __Znwm();
                  ppppppplVar15 = ppppppplStack_98;
                  *puVar14 = ppuVar11;
                  puVar14[1] = plStack_d8;
                  if (plStack_d8 != (long *)0x0) {
                    plVar3 = plStack_d8 + 1;
                    do {
                      cVar13 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar8) {
                        *plVar3 = *plVar3 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppppppplVar16 = (long *******)(puVar14 + 2);
                  ppppppplVar33 =
                       (long *******)
                       ((long)puVar14 - ((long)ppppppplStack_90 - (long)ppppppplStack_98));
                  _memcpy(ppppppplVar33,ppppppplStack_98);
                  ppppppplStack_b0 = ppppppplVar15;
                  ppppppplStack_a8 = ppppppplStack_88;
                  ppppppplStack_c0 = ppppppplVar15;
                  ppppppplStack_b8 = ppppppplVar15;
                  ppppppplStack_98 = ppppppplVar33;
                  ppppppplStack_90 = ppppppplVar16;
                  ppppppplStack_88 = ppppppplVar16;
                  FUN_10a2b72f0(&ppppppplStack_c0);
                  ppppppplStack_90 = ppppppplVar16;
                }
                FUN_10a2b2c88(param_1[0x40],param_1[0x41],&ppppppplStack_98,&ppppppplStack_110,
                              &pppppplStack_1a0,(ulong)pppppplStack_150 & 0xff);
                plVar3 = plStack_d8;
                if (plStack_d8 != (long *)0x0) {
                  plVar2 = plStack_d8 + 1;
                  do {
                    lVar18 = *plVar2;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar8) {
                      *plVar2 = lVar18 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
                  }
                }
                func_0x00010a2b7398(&ppppppplStack_98);
                pppppplVar26 = pppppplStack_c8;
              }
              if (pppppplVar26 != (long ******)0x0) {
                pppppplVar28 = pppppplVar26 + 1;
                do {
                  ppppplVar22 = *pppppplVar28;
                  cVar13 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
                  if (bVar8) {
                    *pppppplVar28 = (long *****)((long)ppppplVar22 + -1);
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (ppppplVar22 == (long *****)0x0) {
                  (*(code *)(*pppppplVar26)[2])(pppppplVar26);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
                }
              }
            }
            if ((long)uStack_118 < 0) {
              __ZdlPv(pppppppuStack_128);
            }
          }
          else {
            FUN_10a2b2150(&ppppppplStack_98,param_1,ppppppplVar24,(ulong)pppppplStack_150 & 0xff);
            ppppppplVar15 = ppppppplStack_98;
            ppppppplVar16 = ppppppplStack_90;
            if (ppppppplStack_98 != (long *******)0x0) {
              pppppplVar28 = param_1[0x35];
              func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a808f);
              if (pppppplVar28 != (long ******)0x0) {
                FUN_10a76bd40(pppppplVar28[0x11b],&ppppppplStack_c0,1);
              }
              ppppppplVar27 = ppppppplStack_e8;
              ppppppplVar33 = ppppppplStack_f8;
              if (ppppppplStack_f0 < ppppppplStack_e8) {
                *ppppppplStack_f0 = (long ******)ppppppplVar15;
                ppppppplStack_f0[1] = (long ******)ppppppplStack_90;
                if (ppppppplStack_90 != (long *******)0x0) {
                  ppppppplVar15 = ppppppplStack_90 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
                    if (bVar8) {
                      *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                ppppppplVar16 = ppppppplStack_90;
                ppppppplStack_f0 = ppppppplStack_f0 + 2;
              }
              else {
                lVar32 = (long)ppppppplStack_f0 - (long)ppppppplStack_f8;
                lVar18 = lVar32 >> 4;
                uVar19 = lVar18 + 1;
                if (uVar19 >> 0x3c != 0) {
                  FUN_10a2b72dc();
                  goto LAB_10a2b0b8c;
                }
                uVar34 = (long)ppppppplStack_e8 - (long)ppppppplStack_f8 >> 3;
                if (uVar34 <= uVar19) {
                  uVar34 = uVar19;
                }
                if (0x7fffffffffffffef < (ulong)((long)ppppppplStack_e8 - (long)ppppppplStack_f8)) {
                  uVar34 = 0xfffffffffffffff;
                }
                ppppppplStack_a0 = (long *******)&ppppppplStack_f8;
                if (uVar34 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a2b0b8c;
                }
                lVar17 = uVar34 << 4;
                __Znwm();
                ppppppplVar16 = ppppppplStack_90;
                puVar14 = (undefined8 *)(lVar17 + lVar32);
                *puVar14 = ppppppplVar15;
                puVar14[1] = ppppppplStack_90;
                if (ppppppplStack_90 != (long *******)0x0) {
                  ppppppplVar15 = ppppppplStack_90 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
                    if (bVar8) {
                      *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  lVar32 = (long)ppppppplStack_f0 - (long)ppppppplVar33;
                  lVar18 = lVar32 >> 4;
                  ppppppplVar27 = ppppppplStack_e8;
                }
                _memcpy(puVar14 + lVar18 * -2,ppppppplVar33,lVar32);
                ppppppplStack_b0 = ppppppplVar33;
                ppppppplStack_c0 = ppppppplVar33;
                ppppppplStack_b8 = ppppppplVar33;
                ppppppplStack_f8 = (long *******)(puVar14 + lVar18 * -2);
                ppppppplStack_f0 = (long *******)(puVar14 + 2);
                ppppppplStack_e8 = (long *******)(lVar17 + uVar34 * 0x10);
                ppppppplStack_a8 = ppppppplVar27;
                FUN_10a2b72f0(&ppppppplStack_c0);
                ppppppplStack_f0 = (long *******)(puVar14 + 2);
              }
            }
            if (ppppppplVar16 != (long *******)0x0) {
              ppppppplVar15 = ppppppplVar16 + 1;
              do {
                pppppplVar28 = *ppppppplVar15;
                cVar13 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
                if (bVar8) {
                  *ppppppplVar15 = (long ******)((long)pppppplVar28 + -1);
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (pppppplVar28 == (long ******)0x0) {
                (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
              }
            }
          }
          ppppppplVar24 = ppppppplVar24 + 0x14;
        } while (ppppppplVar24 != ppppppplVar23);
      }
      FUN_10a2b2c88(param_1[0x40],param_1[0x41],&ppppppplStack_f8,&ppppppplStack_110,
                    &pppppplStack_1a0,(ulong)pppppplStack_150 & 0xff);
      func_0x00010a2b733c(&ppppppplStack_110);
      func_0x00010a2b7398(&ppppppplStack_f8);
      goto LAB_10a2b0a2c;
    }
    ppppppplVar24 = (long *******)param_1[0x44];
    ppppppplStack_b8 = (long *******)param_1[0x45];
    if (ppppppplStack_b8 != (long *******)0x0) {
      ppppppplVar23 = ppppppplStack_b8 + 1;
      do {
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar8) {
          *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + 1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    ppppppplStack_c0 = ppppppplVar24;
    FUN_10a2c0718(&ppppppplStack_98,uStack_148._4_4_,&uStack_140);
    FUN_10a2b1b80(ppppppplVar24,&ppppppplStack_98);
    ppppppplVar24 = ppppppplStack_90;
    param_1[0x2b] = pppppplVar28;
    if (ppppppplStack_90 != (long *******)0x0) {
      ppppppplVar23 = ppppppplStack_90 + 1;
      do {
        pppppplVar28 = *ppppppplVar23;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar8) {
          *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar28 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
      }
    }
    ppppppplVar24 = ppppppplStack_b8;
    if (ppppppplStack_b8 != (long *******)0x0) {
      ppppppplVar23 = ppppppplStack_b8 + 1;
      do {
        pppppplVar28 = *ppppppplVar23;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar8) {
          *ppppppplVar23 = (long ******)((long)pppppplVar28 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar28 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
      }
    }
    bVar8 = false;
  }
  else {
LAB_10a2b0a2c:
    bVar8 = true;
  }
  if (iStack_12c < 0) {
    __ZdlPv(CONCAT44(uStack_13c,uStack_140));
  }
  ppppppplStack_c0 = (long *******)&uStack_170;
  FUN_10a2b6d84(&ppppppplStack_c0);
  ppppppplStack_c0 = (long *******)&ppppppplStack_188;
  FUN_10a2b6e7c(&ppppppplStack_c0);
  if ((long)ppppppplStack_190 < 0) {
    __ZdlPv(pppppplStack_1a0);
  }
  if (!bVar8) {
    return;
  }
LAB_10a2b0a80:
  if (*(char *)((long)param_1 + 0x161) == '\x01') {
    pppppplVar28 = param_1[0x38];
    if (pppppplVar28 == (long ******)0x0) {
      pppplVar37 = (long ****)0x0;
    }
    else {
      ppppplVar22 = *pppppplVar28;
      __ZNSt3__15mutex4lockEv(ppppplVar22);
      pppplVar37 = pppppplVar28[2][0x27];
      __ZNSt3__15mutex6unlockEv(ppppplVar22);
    }
    func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a8214);
    __ZNSt3__19to_stringEd(&ppppppplStack_98,pppplVar37);
    func_0x000107c2b054(&pppplStack_1a8,&UNK_10f64a9f7);
    ppppppplStack_190 = (long *******)CONCAT71(ppppppplStack_190._1_7_,1);
    FUN_10a2b52e8(param_1,&ppppppplStack_c0,&ppppppplStack_98,&pppplStack_1a8);
    if (((char)ppppppplStack_190 == '\x01') && ((long)pppplStack_198 < 0)) {
      __ZdlPv(pppplStack_1a8);
    }
  }
  return;
}



/* Entry: 10a2b0dc8; end: 10a2b1327;  */

void FUN_10a2b0dc8(long param_1,code **param_2,ulong param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  code **ppcVar9;
  code **ppcVar10;
  int iVar11;
  undefined1 uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined8 *puVar24;
  code **unaff_x23;
  ulong unaff_x26;
  ulong uVar25;
  long lVar26;
  undefined8 auStack_148 [2];
  char cStack_131;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  long lStack_80;
  
  plVar7 = &lStack_110;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  ppcVar9 = *(code ***)(param_1 + 0x20);
  FUN_10a2bde34(&lStack_110);
  plVar23 = *(long **)(param_1 + 0x28);
  if (plVar23 != (long *)0x0) {
    unaff_x23 = (code **)0x9ddfea08eb382d69;
    do {
      uVar25 = uStack_108;
      uVar13 = plVar23[2];
      uVar18 = ((ulong)(uint)((int)uVar13 << 3) + 8 ^ uVar13 >> 0x20) * -0x622015f714c7d297;
      uVar18 = (uVar13 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar15 = uStack_108 - 1;
        if ((uStack_108 & uVar15) == 0) {
          unaff_x26 = uVar18 & uVar15;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar20 = 0;
            if (uStack_108 != 0) {
              uVar20 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar20 * uStack_108;
          }
        }
        plVar19 = *(long **)(lStack_110 + unaff_x26 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_10a2b0ef8;
              uVar20 = plVar19[1];
              if (uVar20 != uVar18) break;
              if (plVar19[2] == uVar13) goto LAB_10a2b1058;
            }
            if ((uStack_108 & uVar15) == 0) {
              uVar20 = uVar20 & uVar15;
            }
            else if (uStack_108 <= uVar20) {
              uVar6 = 0;
              if (uStack_108 != 0) {
                uVar6 = uVar20 / uStack_108;
              }
              uVar20 = uVar20 - uVar6 * uStack_108;
            }
          } while (uVar20 == unaff_x26);
        }
      }
LAB_10a2b0ef8:
      plVar19 = (long *)0x68;
      __Znwm();
      *plVar19 = 0;
      plVar19[1] = uVar18;
      lVar21 = plVar23[3];
      lVar26 = plVar23[2];
      plVar19[3] = plVar23[3];
      plVar19[2] = lVar26;
      if (lVar21 != 0) {
        plVar16 = (long *)(lVar21 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = *plVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcStack_c0 = (code *)(plVar19 + 4);
      *(undefined1 *)(plVar19 + 0xc) = 3;
      param_3 = (ulong)*(byte *)(plVar23 + 0xc);
      if (param_3 == 0) {
        uVar12 = 0;
      }
      else {
        ppcVar9 = (code **)(plVar23 + 4);
        FUN_10a005398(&pcStack_c0);
        uVar12 = (undefined1)plVar23[0xc];
      }
      *(undefined1 *)(plVar19 + 0xc) = uVar12;
      if ((uVar25 == 0) || (fStack_f0 * (float)uVar25 < (float)(lStack_f8 + 1))) {
        uVar13 = 1;
        if (2 < uVar25) {
          uVar13 = (ulong)((uVar25 & uVar25 - 1) != 0);
        }
        ppcVar9 = (code **)(uVar13 | uVar25 << 1);
        ppcVar10 = (code **)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (ppcVar9 <= ppcVar10) {
          ppcVar9 = ppcVar10;
        }
        FUN_10a2bde34(&lStack_110);
        uVar25 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x26 = uStack_108 - 1 & uVar18;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar13 = 0;
            if (uStack_108 != 0) {
              uVar13 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar13 * uStack_108;
          }
        }
      }
      plVar16 = *(long **)(lStack_110 + unaff_x26 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar19 = (long)plStack_100;
        *(long ***)(lStack_110 + unaff_x26 * 8) = &plStack_100;
        plStack_100 = plVar19;
        if (*plVar19 != 0) {
          uVar13 = *(ulong *)(*plVar19 + 8);
          if ((uVar25 & uVar25 - 1) == 0) {
            uVar13 = uVar13 & uVar25 - 1;
          }
          else if (uVar25 <= uVar13) {
            uVar18 = 0;
            if (uVar25 != 0) {
              uVar18 = uVar13 / uVar25;
            }
            uVar13 = uVar13 - uVar18 * uVar25;
          }
          *(long **)(lStack_110 + uVar13 * 8) = plVar19;
        }
      }
      else {
        *plVar19 = *plVar16;
        *plVar16 = (long)plVar19;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a2b1058:
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  puVar24 = (undefined8 *)0x0;
  iVar11 = (int)param_3;
  if (plStack_100 != (long *)0x0) {
    puVar24 = &uStack_e0;
    unaff_x23 = &pcStack_c0;
    plVar23 = plStack_100;
    do {
      ppcVar10 = (code **)plVar23[2];
      lVar21 = param_1 + 0x18;
      FUN_10a2be844();
      ppcVar9 = ppcVar10;
      if (lVar21 != 0) {
        if ((char)plVar23[0xc] == '\x01') {
          pcVar14 = (code *)plVar23[4];
          ppuStack_b8 = (undefined **)param_2[1];
          pcStack_c0 = *param_2;
          if (param_2[1] != (code *)0x0) {
            pcVar1 = param_2[1] + 8;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar5) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppcVar9 = (code **)(plVar23 + 4);
          (*pcVar14)(&pcStack_c0);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar2 = ppuStack_b8 + 1;
            do {
              puVar17 = *ppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar5) {
                *ppuVar2 = puVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              ppuVar22 = ppuStack_b8;
            } while (cVar4 != '\0');
LAB_10a2b1138:
            if (puVar17 == (undefined *)0x0) {
              (**(code **)(*ppuVar22 + 0x10))(ppuVar22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
            }
          }
        }
        else if ((char)plVar23[0xc] == '\x02') {
          plVar19 = plVar23 + 4;
          FUN_10a688b40();
          if (plVar19 == (long *)0x0) {
            ppcVar9 = (code **)0x0;
            if (ppcVar10 != (code **)0x0) {
              lStack_b0 = plVar23[4];
              lStack_a8 = plVar23[5];
              if (lStack_a8 != 0) {
                plVar19 = (long *)(lStack_a8 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar5) {
                    *plVar19 = *plVar19 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              pcStack_d0 = *param_2;
              pcVar14 = param_2[1];
              if (pcVar14 == (code *)0x0) {
                pcStack_98 = (code *)0x0;
              }
              else {
                pcVar1 = pcVar14 + 8;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar5) {
                    *(long *)pcVar1 = *(long *)pcVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar5) {
                    *(long *)pcVar1 = *(long *)pcVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  pcStack_98 = pcVar14;
                } while (cVar4 != '\0');
              }
              ppuStack_b8 = &PTR_FUN_110bbb7d8;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              pcStack_c0 = FUN_10a2c06a0;
              ppcVar9 = &pcStack_c0;
              pcStack_c8 = pcVar14;
              pcStack_a0 = pcStack_d0;
              FUN_10a4634ec(ppcVar10);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (pcVar14 != (code *)0x0) {
                pcVar1 = pcVar14 + 8;
                do {
                  lVar21 = *(long *)pcVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar5) {
                    *(long *)pcVar1 = lVar21 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar2 = ppuStack_d8 + 1;
                do {
                  puVar17 = *ppuVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                  if (bVar5) {
                    *ppuVar2 = puVar17 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  ppuVar22 = ppuStack_d8;
                } while (cVar4 != '\0');
                goto LAB_10a2b1138;
              }
            }
          }
          else {
            *plVar19 = CONCAT44((int)((ulong)*plVar19 >> 0x20) + 1,(int)*plVar19 + 1);
            ppcVar9 = param_2;
            FUN_10a2c049c(plVar23[4]);
            iVar11 = *(int *)((long)plVar19 + 4) + -1;
            *(int *)((long)plVar19 + 4) = iVar11;
            if (iVar11 == 0) {
              *(undefined4 *)plVar19 = 0;
            }
          }
        }
      }
      iVar11 = (int)param_3;
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  FUN_10a2bfba4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a2c0444(puVar24 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a2bfba4(&lStack_110);
  puVar8 = (undefined1 *)plVar7;
  __Unwind_Resume();
  pcStack_118 = FUN_10a2b1328;
  if (iVar11 != 0) {
    pcVar14 = ppcVar9[1];
    if (-1 < (char)*(byte *)((long)ppcVar9 + 0x17)) {
      pcVar14 = (code *)(ulong)*(byte *)((long)ppcVar9 + 0x17);
    }
    if (pcVar14 != (code *)0x0) {
      lStack_130 = param_1;
      puStack_128 = (undefined1 *)plVar7;
      puStack_120 = &stack0xfffffffffffffff0;
      *(int *)(puVar8 + 0x178) = *(int *)(puVar8 + 0x178) + 1;
      uVar3 = *(uint *)(ppcVar9 + 1);
      if (-1 < (char)*(byte *)((long)ppcVar9 + 0x17)) {
        uVar3 = (uint)*(byte *)((long)ppcVar9 + 0x17);
      }
      *(uint *)(puVar8 + 0x17c) = *(int *)(puVar8 + 0x17c) + uVar3;
      lVar21 = *(long *)(puVar8 + 0x1a8);
      func_0x000107c2b054(auStack_148,&UNK_10e4a808f);
      if (lVar21 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar21 + 0x8d8),auStack_148,1);
      }
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      lVar21 = *(long *)(puVar8 + 0x1a8);
      func_0x000107c2b054(auStack_148,&UNK_10e4a8136);
      if (lVar21 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar21 + 0x8d8),auStack_148,*(undefined4 *)(puVar8 + 0x17c));
      }
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      lVar21 = *(long *)(puVar8 + 0x1a8);
      func_0x000107c2b054(auStack_148,&UNK_10e4a80c4);
      if (lVar21 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar21 + 0x8d8),auStack_148,1);
      }
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      lVar21 = *(long *)(puVar8 + 0x1a8);
      func_0x000107c2b054(auStack_148,&UNK_10e4a815e);
      if (lVar21 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar21 + 0x8d8),auStack_148,*(undefined4 *)(puVar8 + 0x178));
      }
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
    }
  }
  return;
}



/* Entry: 10a2b1328; end: 10a2b149b;  */

void FUN_10a2b1328(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar2 != 0) {
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      uVar1 = *(uint *)(param_2 + 8);
      if (-1 < (char)*(byte *)(param_2 + 0x17)) {
        uVar1 = (uint)*(byte *)(param_2 + 0x17);
      }
      *(uint *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + uVar1;
      lVar3 = *(long *)(param_1 + 0x1a8);
      func_0x000107c2b054(auStack_38,&UNK_10e4a808f);
      if (lVar3 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_38,1);
      }
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      lVar3 = *(long *)(param_1 + 0x1a8);
      func_0x000107c2b054(auStack_38,&UNK_10e4a8136);
      if (lVar3 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_38,*(undefined4 *)(param_1 + 0x17c));
      }
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      lVar3 = *(long *)(param_1 + 0x1a8);
      func_0x000107c2b054(auStack_38,&UNK_10e4a80c4);
      if (lVar3 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_38,1);
      }
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      lVar3 = *(long *)(param_1 + 0x1a8);
      func_0x000107c2b054(auStack_38,&UNK_10e4a815e);
      if (lVar3 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_38,*(undefined4 *)(param_1 + 0x178));
      }
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
    }
  }
  return;
}



/* Entry: 10a2b149c; end: 10a2b1b3f;  */

undefined ** FUN_10a2b149c(long param_1,undefined **param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong unaff_x26;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined **)0x0) {
    ppuVar6 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuVar6 = (undefined **)0x50;
  lStack_120 = param_1;
  ppuStack_118 = param_2;
  __Znwm();
  ppuVar6[1] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  ppuStack_130 = ppuVar6 + 3;
  *ppuStack_130 = (undefined *)&PTR_DAT_110c36a58;
  *ppuVar6 = (undefined *)&PTR_DAT_110bbb868;
  ppuVar6[4] = (undefined *)0x0;
  ppuVar6[5] = (undefined *)0x0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(ppuVar6 + 6,*param_3,param_3[1]);
  }
  else {
    puVar17 = (undefined *)*param_3;
    ppuVar6[7] = (undefined *)param_3[1];
    ppuVar6[6] = puVar17;
    ppuVar6[8] = (undefined *)param_3[2];
  }
  *(undefined1 *)(ppuVar6 + 9) = param_4;
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  ppuStack_128 = ppuVar6;
  FUN_10a2bbf78(&puStack_110,*(undefined8 *)(param_1 + 0x20));
  plVar21 = *(long **)(param_1 + 0x28);
  if (plVar21 != (long *)0x0) {
    do {
      uVar15 = uStack_108;
      uVar11 = plVar21[2];
      uVar18 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
      uVar18 = (uVar11 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar14 = uStack_108 - 1;
        if ((uStack_108 & uVar14) == 0) {
          unaff_x26 = uVar18 & uVar14;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar20 = 0;
            if (uStack_108 != 0) {
              uVar20 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar20 * uStack_108;
          }
        }
        plVar19 = *(long **)(puStack_110 + unaff_x26 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_10a2b1654;
              uVar20 = plVar19[1];
              if (uVar20 != uVar18) break;
              if (plVar19[2] == uVar11) goto LAB_10a2b17b4;
            }
            if ((uStack_108 & uVar14) == 0) {
              uVar20 = uVar20 & uVar14;
            }
            else if (uStack_108 <= uVar20) {
              uVar5 = 0;
              if (uStack_108 != 0) {
                uVar5 = uVar20 / uStack_108;
              }
              uVar20 = uVar20 - uVar5 * uStack_108;
            }
          } while (uVar20 == unaff_x26);
        }
      }
LAB_10a2b1654:
      plVar19 = (long *)0x68;
      __Znwm();
      *plVar19 = 0;
      plVar19[1] = uVar18;
      lVar12 = plVar21[3];
      lVar9 = plVar21[2];
      plVar19[3] = plVar21[3];
      plVar19[2] = lVar9;
      if (lVar12 != 0) {
        plVar16 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuStack_c0 = (undefined **)(plVar19 + 4);
      *(undefined1 *)(plVar19 + 0xc) = 3;
      if ((char)plVar21[0xc] == '\0') {
        uVar10 = 0;
      }
      else {
        FUN_10a005398(&ppuStack_c0,plVar21 + 4);
        uVar10 = (undefined1)plVar21[0xc];
      }
      *(undefined1 *)(plVar19 + 0xc) = uVar10;
      if ((uVar15 == 0) || (fStack_f0 * (float)uVar15 < (float)(lStack_f8 + 1))) {
        uVar11 = 1;
        if (2 < uVar15) {
          uVar11 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar11 = uVar11 | uVar15 << 1;
        uVar15 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        FUN_10a2bbf78(&puStack_110,uVar11);
        uVar15 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x26 = uStack_108 - 1 & uVar18;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar11 = 0;
            if (uStack_108 != 0) {
              uVar11 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar11 * uStack_108;
          }
        }
      }
      plVar16 = *(long **)(puStack_110 + unaff_x26 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar19 = (long)plStack_100;
        *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
        plStack_100 = plVar19;
        if (*plVar19 != 0) {
          uVar11 = *(ulong *)(*plVar19 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar11 = uVar11 & uVar15 - 1;
          }
          else if (uVar15 <= uVar11) {
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = uVar11 / uVar15;
            }
            uVar11 = uVar11 - uVar18 * uVar15;
          }
          *(long **)(puStack_110 + uVar11 * 8) = plVar19;
        }
      }
      else {
        *plVar19 = *plVar16;
        *plVar16 = (long)plVar19;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a2b17b4:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  plVar21 = plStack_100;
  if (plStack_100 == (long *)0x0) {
    ppuVar7 = &puStack_110;
    FUN_10a2bf4dc();
  }
  else {
    do {
      lVar9 = plVar21[2];
      lVar12 = param_1 + 0x18;
      FUN_10a2bc988();
      if (lVar12 != 0) {
        if ((char)plVar21[0xc] == '\x01') {
          pcVar13 = (code *)plVar21[4];
          ppuStack_b8 = ppuStack_128;
          ppuStack_c0 = ppuStack_130;
          if (ppuStack_128 != (undefined **)0x0) {
            ppuVar6 = ppuStack_128 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
              if (bVar3) {
                *ppuVar6 = *ppuVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (*pcVar13)(&ppuStack_c0,plVar21 + 4);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar6 = ppuStack_b8 + 1;
            do {
              puVar17 = *ppuVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
              if (bVar3) {
                *ppuVar6 = puVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppuVar7 = ppuStack_b8;
            } while (cVar2 != '\0');
LAB_10a2b1894:
            if (puVar17 == (undefined *)0x0) {
              (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
            }
          }
        }
        else if ((char)plVar21[0xc] == '\x02') {
          plVar19 = plVar21 + 4;
          FUN_10a688b40();
          ppuVar6 = ppuStack_128;
          if (plVar19 == (long *)0x0) {
            if (lVar9 != 0) {
              lStack_b0 = plVar21[4];
              lStack_a8 = plVar21[5];
              if (lStack_a8 != 0) {
                plVar19 = (long *)(lStack_a8 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar3) {
                    *plVar19 = *plVar19 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppuStack_d0 = ppuStack_130;
              ppuStack_c8 = ppuStack_128;
              if (ppuStack_128 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar7 = ppuStack_128 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar3) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                ppuStack_98 = ppuStack_128;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar3) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppuStack_a0 = ppuStack_130;
              ppuStack_b8 = &PTR_FUN_110bbb8a8;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              ppuStack_c0 = (undefined **)FUN_10a2c0df0;
              FUN_10a4634ec(lVar9,&ppuStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar6 != (undefined **)0x0) {
                ppuVar7 = ppuVar6 + 1;
                do {
                  puVar17 = *ppuVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar3) {
                    *ppuVar7 = puVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar6 = ppuStack_d8 + 1;
                do {
                  puVar17 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar7 = ppuStack_d8;
                } while (cVar2 != '\0');
                goto LAB_10a2b1894;
              }
            }
          }
          else {
            *plVar19 = CONCAT44((int)((ulong)*plVar19 >> 0x20) + 1,(int)*plVar19 + 1);
            FUN_10a2c0bec(plVar21[4],&ppuStack_130);
            iVar4 = *(int *)((long)plVar19 + 4) + -1;
            *(int *)((long)plVar19 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)plVar19 = 0;
            }
          }
        }
      }
      ppuVar6 = ppuStack_128;
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
    ppuVar7 = &puStack_110;
    FUN_10a2bf4dc();
    if (ppuVar6 == (undefined **)0x0) goto LAB_10a2b19f0;
  }
  ppuVar8 = ppuVar6 + 1;
  do {
    puVar17 = *ppuVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
    if (bVar3) {
      *ppuVar8 = puVar17 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar17 == (undefined *)0x0) {
    (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
    ppuVar7 = ppuVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a2b19f0:
  ppuVar8 = ppuStack_118;
  if (ppuStack_118 != (undefined **)0x0) {
    ppuVar1 = ppuStack_118 + 1;
    do {
      puVar17 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  ppuVar6[3] = (undefined *)&PTR_DAT_110b17898;
  func_0x00010a004dac(0);
  __ZNSt3__119__shared_weak_countD2Ev(ppuVar6);
  __ZdlPv();
  FUN_10a2bf1f8(&lStack_120);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar7 + 0x4f) < '\0') {
    __ZdlPv(ppuVar7[7]);
  }
  if (*(char *)((long)ppuVar7 + 0x1f) < '\0') {
    __ZdlPv(ppuVar7[1]);
  }
  return ppuVar7;
}



/* Entry: 10a2b1b40; end: 10a2b1b7f;  */

long FUN_10a2b1b40(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a2b1b80; end: 10a2b20df;  */

long * FUN_10a2b1b80(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined **ppuVar20;
  long *plVar21;
  undefined8 *puVar22;
  code **unaff_x23;
  ulong unaff_x26;
  undefined1 *puStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_80;
  
  plVar6 = &lStack_110;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  FUN_10a2bcef8(&lStack_110,*(undefined8 *)(param_1 + 0x20));
  plVar21 = *(long **)(param_1 + 0x28);
  if (plVar21 != (long *)0x0) {
    unaff_x23 = (code **)0x9ddfea08eb382d69;
    do {
      uVar13 = uStack_108;
      uVar10 = plVar21[2];
      uVar17 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
      uVar17 = (uVar10 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
      uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar12 = uStack_108 - 1;
        if ((uStack_108 & uVar12) == 0) {
          unaff_x26 = uVar17 & uVar12;
        }
        else {
          unaff_x26 = uVar17;
          if (uStack_108 <= uVar17) {
            uVar19 = 0;
            if (uStack_108 != 0) {
              uVar19 = uVar17 / uStack_108;
            }
            unaff_x26 = uVar17 - uVar19 * uStack_108;
          }
        }
        plVar18 = *(long **)(lStack_110 + unaff_x26 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_10a2b1cb0;
              uVar19 = plVar18[1];
              if (uVar19 != uVar17) break;
              if (plVar18[2] == uVar10) goto LAB_10a2b1e10;
            }
            if ((uStack_108 & uVar12) == 0) {
              uVar19 = uVar19 & uVar12;
            }
            else if (uStack_108 <= uVar19) {
              uVar5 = 0;
              if (uStack_108 != 0) {
                uVar5 = uVar19 / uStack_108;
              }
              uVar19 = uVar19 - uVar5 * uStack_108;
            }
          } while (uVar19 == unaff_x26);
        }
      }
LAB_10a2b1cb0:
      plVar18 = (long *)0x68;
      __Znwm();
      *plVar18 = 0;
      plVar18[1] = uVar17;
      lVar15 = plVar21[3];
      lVar8 = plVar21[2];
      plVar18[3] = plVar21[3];
      plVar18[2] = lVar8;
      if (lVar15 != 0) {
        plVar14 = (long *)(lVar15 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_c0 = (code *)(plVar18 + 4);
      *(undefined1 *)(plVar18 + 0xc) = 3;
      if ((char)plVar21[0xc] == '\0') {
        uVar9 = 0;
      }
      else {
        FUN_10a005398(&pcStack_c0,plVar21 + 4);
        uVar9 = (undefined1)plVar21[0xc];
      }
      *(undefined1 *)(plVar18 + 0xc) = uVar9;
      if ((uVar13 == 0) || (fStack_f0 * (float)uVar13 < (float)(lStack_f8 + 1))) {
        uVar10 = 1;
        if (2 < uVar13) {
          uVar10 = (ulong)((uVar13 & uVar13 - 1) != 0);
        }
        uVar10 = uVar10 | uVar13 << 1;
        uVar13 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
        if (uVar10 <= uVar13) {
          uVar10 = uVar13;
        }
        FUN_10a2bcef8(&lStack_110,uVar10);
        uVar13 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x26 = uStack_108 - 1 & uVar17;
        }
        else {
          unaff_x26 = uVar17;
          if (uStack_108 <= uVar17) {
            uVar10 = 0;
            if (uStack_108 != 0) {
              uVar10 = uVar17 / uStack_108;
            }
            unaff_x26 = uVar17 - uVar10 * uStack_108;
          }
        }
      }
      plVar14 = *(long **)(lStack_110 + unaff_x26 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar18 = (long)plStack_100;
        *(long ***)(lStack_110 + unaff_x26 * 8) = &plStack_100;
        plStack_100 = plVar18;
        if (*plVar18 != 0) {
          uVar10 = *(ulong *)(*plVar18 + 8);
          if ((uVar13 & uVar13 - 1) == 0) {
            uVar10 = uVar10 & uVar13 - 1;
          }
          else if (uVar13 <= uVar10) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar10 / uVar13;
            }
            uVar10 = uVar10 - uVar17 * uVar13;
          }
          *(long **)(lStack_110 + uVar10 * 8) = plVar18;
        }
      }
      else {
        *plVar18 = *plVar14;
        *plVar14 = (long)plVar18;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a2b1e10:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  puVar22 = (undefined8 *)0x0;
  if (plStack_100 != (long *)0x0) {
    puVar22 = &uStack_e0;
    unaff_x23 = &pcStack_c0;
    plVar21 = plStack_100;
    do {
      lVar8 = plVar21[2];
      lVar15 = param_1 + 0x18;
      FUN_10a2bd908();
      if (lVar15 != 0) {
        if ((char)plVar21[0xc] == '\x01') {
          pcVar11 = (code *)plVar21[4];
          ppuStack_b8 = (undefined **)param_2[1];
          pcStack_c0 = (code *)*param_2;
          if (param_2[1] != 0) {
            plVar18 = (long *)(param_2[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = *plVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (*pcVar11)(&pcStack_c0,plVar21 + 4);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar1 = ppuStack_b8 + 1;
            do {
              puVar16 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = puVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppuVar20 = ppuStack_b8;
            } while (cVar2 != '\0');
LAB_10a2b1ef0:
            if (puVar16 == (undefined *)0x0) {
              (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
            }
          }
        }
        else if ((char)plVar21[0xc] == '\x02') {
          plVar18 = plVar21 + 4;
          FUN_10a688b40();
          if (plVar18 == (long *)0x0) {
            if (lVar8 != 0) {
              lStack_b0 = plVar21[4];
              lStack_a8 = plVar21[5];
              if (lStack_a8 != 0) {
                plVar18 = (long *)(lStack_a8 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar3) {
                    *plVar18 = *plVar18 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uStack_d0 = *param_2;
              plVar18 = (long *)param_2[1];
              if (plVar18 == (long *)0x0) {
                plStack_98 = (long *)0x0;
              }
              else {
                plVar14 = plVar18 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = *plVar14 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = *plVar14 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  plStack_98 = plVar18;
                } while (cVar2 != '\0');
              }
              ppuStack_b8 = &PTR_FUN_110bbb840;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              pcStack_c0 = FUN_10a2c0aac;
              plStack_c8 = plVar18;
              uStack_a0 = uStack_d0;
              FUN_10a4634ec(lVar8,&pcStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (plVar18 != (long *)0x0) {
                plVar14 = plVar18 + 1;
                do {
                  lVar15 = *plVar14;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = lVar15 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar15 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar1 = ppuStack_d8 + 1;
                do {
                  puVar16 = *ppuVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar3) {
                    *ppuVar1 = puVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar20 = ppuStack_d8;
                } while (cVar2 != '\0');
                goto LAB_10a2b1ef0;
              }
            }
          }
          else {
            *plVar18 = CONCAT44((int)((ulong)*plVar18 >> 0x20) + 1,(int)*plVar18 + 1);
            FUN_10a2c08a8(plVar21[4],param_2);
            iVar4 = *(int *)((long)plVar18 + 4) + -1;
            *(int *)((long)plVar18 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)plVar18 = 0;
            }
          }
        }
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  FUN_10a2bf840();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a2c0850(puVar22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a2bf840(&lStack_110);
  puVar7 = (undefined1 *)plVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_10a2b20e0;
  lStack_130 = param_1;
  puStack_128 = (undefined1 *)plVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((char)puVar7[0x7f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar7 + 0x68));
  }
  puStack_138 = puVar7 + 0x38;
  FUN_10a2b6d84(&puStack_138);
  puStack_138 = puVar7 + 0x20;
  FUN_10a2b6e7c(&puStack_138);
  if ((char)puVar7[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar7 + 8));
  }
  return (long *)puVar7;
}



/* Entry: 10a2b20e0; end: 10a2b2147;  */

long FUN_10a2b20e0(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  lStack_28 = param_1 + 0x38;
  FUN_10a2b6d84(&lStack_28);
  lStack_28 = param_1 + 0x20;
  FUN_10a2b6e7c(&lStack_28);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a2b2148; end: 10a2b214f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2b0b24) */
/* WARNING: Removing unreachable block (ram,0x00010a2b08a8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b044c) */
/* WARNING: Removing unreachable block (ram,0x00010a2b0738) */
/* WARNING: Removing unreachable block (ram,0x00010a2b0b34) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a2b2148(long param_1,long *******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  char cVar13;
  long *plVar14;
  long ******pppppplVar15;
  long lVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long lVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long *****ppppplVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  undefined8 uVar28;
  long ******pppppplVar29;
  long *******ppppppplVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined4 *puVar33;
  long lVar34;
  long *******ppppppplVar35;
  long lVar36;
  ulong uVar37;
  undefined8 ******ppppppuVar38;
  undefined8 ******ppppppuVar39;
  code *pcStack_1a8;
  long ******pppppplStack_1a0;
  ulong uStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined8 *******pppppppuStack_128;
  long ******pppppplStack_120;
  ulong uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  
  ppppppplVar19 = (long *******)(param_1 + -0xe0);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) goto LAB_10a2af948;
    FUN_10a3bf120(&uStack_138);
    lVar36 = *(long *)(*(long *)(param_1 + 200) + 0x100);
    FUN_10a2afa00(&uStack_160,*(undefined8 *)(param_1 + 0x60),ppppppplVar19);
    ppppppplVar26 = (long *******)0x138;
    __Znwm();
    ppppppplVar17 = ppppppplVar26 + 1;
    *ppppppplVar17 = (long ******)0x0;
    ppppppplVar26[2] = (long ******)0x0;
    *ppppppplVar26 = (long ******)&PTR_FUN_110b9f3b0;
    ppppppplVar27 = ppppppplVar26 + 3;
    ppppppplStack_a8 = (long *******)CONCAT44(uStack_134,uStack_138);
    ppppppplStack_a0 = (long *******)CONCAT44(iStack_12c,uStack_130);
    uStack_138 = 0;
    uStack_134 = 0;
    (*(code *)pppppppuStack_128[2])(&ppppppplStack_98,&pppppppuStack_128);
    uStack_198 = *(ulong *)(lVar36 + 0x210);
    pppppplStack_1a0 = *(long *******)(lVar36 + 0x208);
    if (-1 < (char)*(byte *)(lVar36 + 0x21f)) {
      uStack_198 = (ulong)*(byte *)(lVar36 + 0x21f);
      pppppplStack_1a0 = (long ******)(lVar36 + 0x208);
    }
    ppppppplStack_190 = (long *******)&ppppppplStack_e8;
    ppppppplStack_e8 = (long *******)FUN_10a2bfe08;
    ppuStack_e0 = &PTR_FUN_110bbb770;
    pppppplStack_c8 = pppppplStack_150;
    pppppplStack_d0 = pppppplStack_158;
    pppppplStack_158 = (long ******)0x0;
    pppppplStack_150 = (long ******)0x0;
    param_2 = (long *******)&UNK_10e4a8110;
    param_3 = (long *****)0x25;
    FUN_10a23708c(ppppppplVar27,&UNK_10e4a8110,0x25,&DAT_10f2d965b,3,&ppppppplStack_a8,4);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&ppppppplStack_a8);
    uStack_140 = SUB84(ppppppplVar26,0);
    uStack_13c = (undefined4)((ulong)ppppppplVar26 >> 0x20);
    uStack_148 = ppppppplVar27;
    FUN_10a2afaa8(&uStack_160);
    FUN_10a042634(&uStack_138);
    plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 200) + 0x100) + 0x1c8);
    (**(code **)(*plVar14 + 0x60))();
    ppppppplVar19 = (long *******)plVar14[1];
    if (ppppppplVar19 != (long *******)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      ppppppplStack_a0 = ppppppplVar19;
      if (ppppppplVar19 != (long *******)0x0) {
        ppppppplVar19 = (long *******)*plVar14;
        ppppppplStack_a8 = ppppppplVar19;
        if (ppppppplVar19 != (long *******)0x0) {
          do {
            cVar13 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
            if (bVar8) {
              *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          param_2 = (long *******)&ppppppplStack_188;
          ppppppplStack_188 = ppppppplVar27;
          ppppppplStack_180 = ppppppplVar26;
          (*(code *)(*ppppppplVar19)[2])(&uStack_178);
          if (uStack_164._3_1_ < '\0') {
            ppppppplVar19 = (long *******)CONCAT44(uStack_178._4_4_,(uint)uStack_178);
            __ZdlPv();
          }
          ppppppplVar27 = ppppppplStack_180;
          if (ppppppplStack_180 != (long *******)0x0) {
            ppppppplVar26 = ppppppplStack_180 + 1;
            do {
              pppppplVar21 = *ppppppplVar26;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
              if (bVar8) {
                *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (pppppplVar21 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_180)[2])(ppppppplStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppplVar19 = ppppppplVar27;
            }
          }
          *(undefined1 *)(param_1 + 0x80) = 1;
          if (ppppppplStack_a0 == (long *******)0x0) goto LAB_10a2af910;
        }
        ppppppplVar26 = ppppppplStack_a0;
        ppppppplVar27 = ppppppplStack_a0 + 1;
        do {
          pppppplVar21 = *ppppppplVar27;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
          if (bVar8) {
            *ppppppplVar27 = (long ******)((long)pppppplVar21 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar21 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_a0)[2])(ppppppplStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplVar19 = ppppppplVar26;
        }
      }
    }
LAB_10a2af910:
    ppppppplVar27 = (long *******)CONCAT44(uStack_13c,uStack_140);
    if (ppppppplVar27 != (long *******)0x0) {
      ppppppplVar26 = ppppppplVar27 + 1;
      do {
        pppppplVar21 = *ppppppplVar26;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
        if (bVar8) {
          *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar21 == (long ******)0x0) {
        (*(code *)(*ppppppplVar27)[2])(ppppppplVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppplVar19 = ppppppplVar27;
      }
    }
LAB_10a2af948:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar32) {
      ___stack_chk_fail();
      FUN_10a05bd88(&ppppppplStack_188);
      func_0x00010a05a8c4(&ppppppplStack_a8);
      FUN_10a05bd88(&uStack_148);
      __Unwind_Resume();
      pcStack_1a8 = FUN_10a2afa00;
      __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
      pppppplVar15 = (long ******)0x48;
      __Znwm();
      pppppplVar15[2] = (long *****)&PTR_FUN_110bbb250;
      pppppplVar15[3] = param_3;
      pppppplVar21 = param_2[0xb];
      pppppplVar29 = param_2[0xc];
      *pppppplVar15 = (long *****)(param_2 + 10);
      pppppplVar15[1] = (long *****)pppppplVar21;
      *pppppplVar21 = (long *****)pppppplVar15;
      param_2[0xb] = pppppplVar15;
      param_2[0xc] = (long ******)((long)pppppplVar29 + 1);
      __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
      pppppplVar29 = param_2[1];
      pppppplVar21 = *param_2;
      if (param_2[1] != (long ******)0x0) {
        pppppplVar1 = param_2[1] + 2;
        do {
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
          if (bVar8) {
            *pppppplVar1 = (long *****)((long)*pppppplVar1 + 1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      *ppppppplVar19 = pppppplVar15;
      ppppppplVar19[2] = pppppplVar29;
      ppppppplVar19[1] = pppppplVar21;
      return;
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 0x11c);
  if (iVar5 == 0) {
    puVar31 = *(undefined8 **)(param_1 + 0xe0);
    pcStack_1a8 = (code *)((ulong)pcStack_1a8 & 0xffffffffffffff00);
    uStack_198 = 0;
    pppppplStack_1a0 = (long ******)0x0;
    ppppppplStack_188 = (long *******)0x0;
    ppppppplStack_190 = (long *******)0x0;
    ppppppplStack_180 = (long *******)CONCAT71(ppppppplStack_180._1_7_,1);
    uStack_178._0_4_ = (uint)uStack_178 & 0xffffff00;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_164 = 0;
    uStack_160._0_4_ = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_160._4_4_ = 0;
    if (puVar31 != (undefined8 *)0x0) {
      uVar25 = *puVar31;
      __ZNSt3__15mutex4lockEv(uVar25);
      lVar32 = puVar31[2];
      pcStack_1a8 = (code *)CONCAT71(pcStack_1a8._1_7_,*(undefined1 *)(lVar32 + 0x40));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pppppplStack_1a0,lVar32 + 0x48);
      ppppppplStack_188 = *(long ********)(lVar32 + 0x60);
      ppppppplStack_180 =
           (long *******)CONCAT71(ppppppplStack_180._1_7_,*(undefined1 *)(lVar32 + 0x68));
      uStack_178._0_4_ = (uint)*(undefined8 *)(lVar32 + 0x70);
      uStack_178._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20);
      param_2 = (long *******)(lVar32 + 0x78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_170);
      __ZNSt3__15mutex6unlockEv(uVar25);
    }
    ppppppplVar27 = ppppppplStack_188;
    if (*(long *)(param_1 + 0x78) < (long)ppppppplStack_188) {
      if ((char)uStack_178 != '\x01') {
        FUN_10a2b1328(ppppppplVar19,&pppppplStack_1a0,(ulong)ppppppplStack_180 & 0xff);
        *(long ********)(param_1 + 0x78) = ppppppplVar27;
        param_2 = *(long ********)(param_1 + 0x138);
        FUN_10a2b149c(*(undefined8 *)(param_1 + 0x130),param_2,&pppppplStack_1a0,
                      (ulong)ppppppplStack_180 & 0xff);
        goto LAB_10a2afd18;
      }
      ppppppplVar26 = *(long ********)(param_1 + 0x150);
      ppppppplStack_b8 = *(long ********)(param_1 + 0x158);
      if (ppppppplStack_b8 != (long *******)0x0) {
        ppppppplVar17 = ppppppplStack_b8 + 1;
        do {
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
          if (bVar8) {
            *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      ppppppplStack_c0 = ppppppplVar26;
      FUN_10a2c030c(&ppppppplStack_98,uStack_178._4_4_,&uStack_170);
      param_2 = (long *******)&ppppppplStack_98;
      FUN_10a2b0dc8(ppppppplVar26);
      ppppppplVar26 = ppppppplStack_90;
      *(long ********)(param_1 + 0x78) = ppppppplVar27;
      if (ppppppplStack_90 != (long *******)0x0) {
        ppppppplVar27 = ppppppplStack_90 + 1;
        do {
          pppppplVar21 = *ppppppplVar27;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
          if (bVar8) {
            *ppppppplVar27 = (long ******)((long)pppppplVar21 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar21 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar26);
        }
      }
      ppppppplVar27 = ppppppplStack_b8;
      if (ppppppplStack_b8 != (long *******)0x0) {
        ppppppplVar26 = ppppppplStack_b8 + 1;
        do {
          pppppplVar21 = *ppppppplVar26;
          cVar13 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
          if (bVar8) {
            *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (pppppplVar21 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar27);
        }
      }
      bVar8 = false;
    }
    else {
LAB_10a2afd18:
      bVar8 = true;
    }
    if (uStack_160._4_4_ < 0) {
      __ZdlPv(CONCAT44(uStack_16c,uStack_170));
    }
    if ((long)ppppppplStack_190 < 0) {
      __ZdlPv(pppppplStack_1a0);
    }
    if (!bVar8) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x11c);
  }
  if (iVar5 != 1) goto LAB_10a2b0a80;
  puVar31 = *(undefined8 **)(param_1 + 0xe0);
  pcStack_1a8 = (code *)CONCAT71(pcStack_1a8._1_7_,1);
  uStack_198 = 0;
  pppppplStack_1a0 = (long ******)0x0;
  ppppppplStack_188 = (long *******)0x0;
  ppppppplStack_190 = (long *******)0x0;
  uStack_178._0_4_ = 0;
  uStack_178._4_4_ = 0;
  uStack_178 = (long *******)0x0;
  ppppppplStack_180 = (long *******)0x0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  pppppplStack_158 = (long ******)0x0;
  uStack_160._0_4_ = 0;
  uStack_160._4_4_ = 0;
  uStack_160 = 0;
  pppppplStack_150 = (long ******)CONCAT71(pppppplStack_150._1_7_,1);
  uStack_148._0_4_ = (uint)uStack_148 & 0xffffff00;
  uStack_148._4_4_ = 0;
  uStack_140 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  iStack_12c = 0;
  if (puVar31 != (undefined8 *)0x0) {
    uVar25 = *puVar31;
    __ZNSt3__15mutex4lockEv(uVar25);
    lVar32 = puVar31[2];
    pcStack_1a8 = (code *)CONCAT71(pcStack_1a8._1_7_,*(undefined1 *)(lVar32 + 0x90));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&pppppplStack_1a0,lVar32 + 0x98);
    ppppppplVar27 = ppppppplStack_188;
    if ((code **)(lVar32 + 0x90) != &pcStack_1a8) {
      ppppppplVar26 = *(long ********)(lVar32 + 0xb0);
      lVar36 = *(long *)(lVar32 + 0xb8);
      uVar22 = lVar36 - (long)ppppppplVar26;
      lVar20 = CONCAT44(uStack_178._4_4_,(uint)uStack_178);
      if ((ulong)(lVar20 - (long)ppppppplStack_188) < uVar22) {
        uVar37 = ((long)uVar22 >> 5) * -0x3333333333333333;
        ppppppplVar17 = ppppppplStack_180;
        if (ppppppplStack_188 != (long *******)0x0) {
          while (ppppppplVar17 != ppppppplVar27) {
            FUN_10a2b6eec(ppppppplVar17 + -0x14);
            ppppppplVar17 = ppppppplVar17 + -0x14;
          }
          ppppppplStack_180 = ppppppplVar27;
          __ZdlPv(ppppppplStack_188);
          lVar20 = 0;
          ppppppplStack_188 = (long *******)0x0;
          ppppppplStack_180 = (long *******)0x0;
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
        }
        if (uVar37 < 0x19999999999999a) {
          uVar24 = (lVar20 >> 5) * -0x6666666666666666;
          if (uVar24 < uVar37 || uVar24 + ((long)uVar22 >> 5) * 0x3333333333333333 == 0) {
            uVar24 = uVar37;
          }
          if (0xcccccccccccccb < (ulong)((lVar20 >> 5) * -0x3333333333333333)) {
            uVar24 = 0x199999999999999;
          }
          if (uVar24 < 0x19999999999999a) {
            ppppppplVar27 = (long *******)&ppppppplStack_188;
            FUN_10a2c2da8();
            uStack_178 = ppppppplVar27 + uVar24 * 0x14;
            ppppppplStack_188 = ppppppplVar27;
            ppppppplStack_180 = ppppppplVar27;
            FUN_10a2c2ad4(ppppppplVar26,lVar36,ppppppplVar27);
            goto LAB_10a2aff14;
          }
        }
        FUN_10a2c2d94();
        goto LAB_10a2b0b8c;
      }
      uVar37 = (long)ppppppplStack_180 - (long)ppppppplStack_188;
      if (uVar37 < uVar22) {
        FUN_10a2c2b58(ppppppplVar26,(long)ppppppplVar26 + uVar37,ppppppplStack_188);
        ppppppplVar26 = (long *******)((long)ppppppplVar26 + uVar37);
        FUN_10a2c2ad4(ppppppplVar26,lVar36,ppppppplStack_180);
      }
      else {
        FUN_10a2c2b58(ppppppplVar26,lVar36,ppppppplStack_188);
        ppppppplVar27 = ppppppplStack_180;
        while (ppppppplVar27 != ppppppplVar26) {
          ppppppplVar27 = ppppppplVar27 + -0x14;
          FUN_10a2b6eec(ppppppplVar27);
        }
      }
LAB_10a2aff14:
      ppppppplStack_180 = ppppppplVar26;
      uVar7 = uStack_16c;
      uVar6 = uStack_170;
      lVar36 = *(long *)(lVar32 + 200);
      lVar20 = *(long *)(lVar32 + 0xd0);
      uVar22 = lVar20 - lVar36;
      lVar34 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      lVar16 = CONCAT44(uStack_16c,uStack_170);
      if ((ulong)(lVar34 - lVar16) < uVar22) {
        uVar37 = ((long)uVar22 >> 3) * 0x6db6db6db6db6db7;
        if (lVar16 != 0) {
          lVar34 = CONCAT44(uStack_164,uStack_168);
          if (lVar34 != lVar16) {
            do {
              lVar34 = lVar34 + -0x38;
              FUN_10a2b6df4(lVar34);
            } while (lVar34 != lVar16);
            lVar16 = CONCAT44(uStack_16c,uStack_170);
          }
          uStack_168 = uVar6;
          uStack_164 = uVar7;
          __ZdlPv(lVar16);
          lVar34 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160._0_4_ = 0;
          uStack_160._4_4_ = 0;
        }
        if (uVar37 < 0x492492492492493) {
          uVar24 = (lVar34 >> 3) * -0x2492492492492492;
          if (uVar24 < uVar37 || uVar24 + ((long)uVar22 >> 3) * -0x6db6db6db6db6db7 == 0) {
            uVar24 = uVar37;
          }
          if (0x249249249249248 < (ulong)((lVar34 >> 3) * 0x6db6db6db6db6db7)) {
            uVar24 = 0x492492492492492;
          }
          if (uVar24 < 0x492492492492493) {
            puVar31 = (undefined8 *)&uStack_170;
            FUN_10a2c2fe4();
            uStack_170 = SUB84(puVar31,0);
            uStack_16c = (undefined4)((ulong)puVar31 >> 0x20);
            uStack_160 = (long)(puVar31 + uVar24 * 7);
            uStack_168 = uStack_170;
            uStack_164 = uStack_16c;
            FUN_10a2c2dec(lVar36,lVar20,puVar31);
            goto LAB_10a2b0044;
          }
        }
        FUN_10a2c2fd0();
        goto LAB_10a2b0b8c;
      }
      uVar37 = CONCAT44(uStack_164,uStack_168) - lVar16;
      if (uVar37 < uVar22) {
        FUN_10a2c2f10(lVar36,lVar36 + uVar37,lVar16);
        lVar36 = lVar36 + uVar37;
        FUN_10a2c2dec(lVar36,lVar20,CONCAT44(uStack_164,uStack_168));
LAB_10a2b0044:
        uStack_168 = (undefined4)lVar36;
        uStack_164 = (undefined4)((ulong)lVar36 >> 0x20);
      }
      else {
        FUN_10a2c2f10(lVar36,lVar20,lVar16);
        lVar20 = CONCAT44(uStack_164,uStack_168);
        while (lVar20 != lVar36) {
          lVar20 = lVar20 + -0x38;
          FUN_10a2b6df4(lVar20);
        }
        uStack_168 = (undefined4)lVar36;
        uStack_164 = (undefined4)((ulong)lVar36 >> 0x20);
      }
    }
    pppppplStack_158 = *(long *******)(lVar32 + 0xe0);
    pppppplStack_150 = (long ******)CONCAT71(pppppplStack_150._1_7_,*(undefined1 *)(lVar32 + 0xe8));
    uStack_148._0_4_ = (uint)*(undefined8 *)(lVar32 + 0xf0);
    uStack_148._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar32 + 0xf0) >> 0x20);
    param_2 = (long *******)(lVar32 + 0xf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_140);
    __ZNSt3__15mutex6unlockEv(uVar25);
  }
  pppppplVar21 = pppppplStack_158;
  if (*(long *)(param_1 + 0x78) < (long)pppppplStack_158) {
    if ((char)uStack_148 != '\x01') {
      if (**(char **)(param_1 + 0x180) == '\x01') {
        param_2 = &pppppplStack_1a0;
        FUN_10a2b1328(ppppppplVar19,param_2,(ulong)pppppplStack_150 & 0xff);
      }
      *(long *******)(param_1 + 0x78) = pppppplVar21;
      ppppppplStack_f8 = (long *******)0x0;
      ppppppplStack_f0 = (long *******)0x0;
      ppppppplStack_e8 = (long *******)0x0;
      ppppppplStack_110 = (long *******)0x0;
      ppppppplStack_108 = (long *******)0x0;
      ppppppplStack_100 = (long *******)0x0;
      puVar9 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
      puVar33 = (undefined4 *)CONCAT44(uStack_164,uStack_168);
      puVar10 = PTR___DefaultRuneLocale_11034bcf8;
      ppppppplVar27 = ppppppplStack_188;
      ppppppplVar26 = ppppppplStack_180;
      if ((long)puVar33 - (long)puVar9 != 0) {
        ppppppplVar27 = (long *******)(((long)puVar33 - (long)puVar9 >> 3) * 0x6db6db6db6db6db7);
        if ((ulong)ppppppplVar27 >> 0x3c != 0) {
          FUN_10a2b7024();
LAB_10a2b0b8c:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10a2b0b90);
          (*pcVar12)();
        }
        ppppppplStack_a0 = (long *******)&ppppppplStack_110;
        FUN_10a2b7038();
        lVar32 = (long)param_2 * 2;
        ppppppplVar26 =
             (long *******)
             ((long)ppppppplVar27 - ((long)ppppppplStack_108 - (long)ppppppplStack_110));
        param_2 = ppppppplStack_110;
        _memcpy(ppppppplVar26);
        ppppppplStack_b0 = ppppppplStack_110;
        ppppppplStack_a8 = ppppppplStack_100;
        ppppppplStack_c0 = ppppppplStack_110;
        ppppppplStack_b8 = ppppppplStack_110;
        ppppppplStack_110 = ppppppplVar26;
        ppppppplStack_108 = ppppppplVar27;
        ppppppplStack_100 = ppppppplVar27 + lVar32;
        func_0x00010a2b706c(&ppppppplStack_c0);
        puVar9 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
        puVar33 = (undefined4 *)CONCAT44(uStack_164,uStack_168);
        puVar10 = PTR___DefaultRuneLocale_11034bcf8;
        ppppppplVar27 = ppppppplStack_188;
        ppppppplVar26 = ppppppplStack_180;
      }
      for (; PTR___DefaultRuneLocale_11034bcf8 = puVar10, ppppppplStack_188 = ppppppplVar27,
          ppppppplStack_180 = ppppppplVar26, puVar9 != puVar33; puVar9 = puVar9 + 0xe) {
        pppppplStack_d0 = (long ******)0x0;
        pppppplStack_c8 = (long ******)0x0;
        puVar31 = *(undefined8 **)(puVar9 + 2);
        (**(code **)*puVar31)();
        if ((int)puVar31 == 0) {
          ppppppplVar27 = (long *******)0x50;
          __Znwm();
          ppppppplVar26 = ppppppplVar27 + 1;
          *ppppppplVar26 = (long ******)0x0;
          ppppppplVar27[2] = (long ******)0x0;
          *ppppppplVar27 = (long ******)&PTR_FUN_110bbb278;
          ppppppplVar17 = ppppppplVar27 + 3;
          *ppppppplVar17 = (long ******)&PTR_FUN_110c36718;
          ppppppplVar27[4] = (long ******)0x0;
          ppppppplVar27[5] = (long ******)0x0;
          ppppppplVar27[8] = (long ******)0x0;
          ppppppplVar27[9] = (long ******)0x0;
          ppppppplVar27[7] = (long ******)0x0;
          *(undefined1 *)(ppppppplVar27 + 6) = *(undefined1 *)(puVar9 + 0xc);
          pppppppuVar4 = *(undefined8 ********)(puVar9 + 2);
          pppppplVar21 = *(long *******)(puVar9 + 4);
          if (pppppplVar21 != (long ******)0x0) {
            pppppplVar29 = pppppplVar21 + 1;
            do {
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
              if (bVar8) {
                *pppppplVar29 = (long *****)((long)*pppppplVar29 + 1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          uVar6 = *puVar9;
          uVar7 = *(undefined4 *)(pppppppuVar4 + 5);
          pppppplVar29 = (long ******)0x68;
          pppppppuStack_128 = pppppppuVar4;
          pppppplStack_120 = pppppplVar21;
          ppppppplStack_98 = ppppppplVar17;
          ppppppplStack_90 = ppppppplVar27;
          __Znwm();
          pppppplVar29[1] = (long *****)0x0;
          pppppplVar29[2] = (long *****)0x0;
          *pppppplVar29 = (long *****)&PTR_DAT_110bbb2c8;
          pppppplVar29[4] = (long *****)0x0;
          pppppplVar29[5] = (long *****)0x0;
          *(undefined4 *)(pppppplVar29 + 6) = uVar6;
          pppppplVar29[7] = (long *****)ppppppplVar17;
          pppppplVar29[8] = (long *****)ppppppplVar27;
          do {
            cVar13 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
            if (bVar8) {
              *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          pppppplVar29[3] = (long *****)&PTR_FUN_110c36770;
          if (*(char *)((long)pppppppuVar4 + 0x27) < '\0') {
            func_0x000107c3192c(pppppplVar29 + 9,pppppppuVar4[2],pppppppuVar4[3]);
          }
          else {
            ppppppuVar39 = pppppppuVar4[3];
            ppppppuVar38 = pppppppuVar4[2];
            pppppplVar29[0xb] = (long *****)pppppppuVar4[4];
            pppppplVar29[10] = (long *****)ppppppuVar39;
            pppppplVar29[9] = (long *****)ppppppuVar38;
          }
          *(undefined1 *)(pppppplVar29 + 0xc) = 0;
          *(char *)((long)pppppplVar29 + 0x61) = (char)uVar7;
          lVar32 = *(long *)(param_1 + 200);
          param_2 = (long *******)&UNK_10f64a8aa;
          pppppplStack_d0 = pppppplVar29 + 3;
          pppppplStack_c8 = pppppplVar29;
          func_0x000107c2b054(&ppppppplStack_c0);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          if (lVar32 != 0) {
            param_2 = (long *******)&ppppppplStack_c0;
            FUN_10a76bd40(*(undefined8 *)(lVar32 + 0x8d8));
          }
          if (pppppplVar21 != (long ******)0x0) {
            pppppplVar29 = pppppplVar21 + 1;
            do {
              ppppplVar23 = *pppppplVar29;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
              if (bVar8) {
                *pppppplVar29 = (long *****)((long)ppppplVar23 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (ppppplVar23 == (long *****)0x0) {
              (*(code *)(*pppppplVar21)[2])(pppppplVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
            }
          }
          ppppppplVar27 = ppppppplStack_90;
          if (ppppppplStack_90 != (long *******)0x0) {
            ppppppplVar26 = ppppppplStack_90 + 1;
            do {
              pppppplVar21 = *ppppppplVar26;
              cVar13 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
              if (bVar8) {
                *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (pppppplVar21 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar27);
            }
          }
        }
        if (ppppppplStack_108 < ppppppplStack_100) {
          ppppppplVar17 = ppppppplStack_108 + 2;
          ppppppplStack_108[1] = pppppplStack_c8;
          *ppppppplStack_108 = pppppplStack_d0;
        }
        else {
          lVar32 = (long)ppppppplStack_108 - (long)ppppppplStack_110;
          uVar22 = (lVar32 >> 4) + 1;
          if (uVar22 >> 0x3c != 0) {
            FUN_10a2b7024();
            goto LAB_10a2b0b8c;
          }
          uVar37 = (long)ppppppplStack_100 - (long)ppppppplStack_110 >> 3;
          if (uVar37 <= uVar22) {
            uVar37 = uVar22;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppppppplStack_100 - (long)ppppppplStack_110)) {
            uVar37 = 0xfffffffffffffff;
          }
          ppppppplStack_a0 = (long *******)&ppppppplStack_110;
          FUN_10a2b7038();
          plVar14 = (long *)(uVar37 + lVar32);
          lVar32 = (long)param_2 * 0x10;
          ppppppplVar17 = (long *******)(plVar14 + 2);
          plVar14[1] = (long)pppppplStack_c8;
          *plVar14 = (long)pppppplStack_d0;
          ppppppplVar27 =
               (long *******)((long)plVar14 - ((long)ppppppplStack_108 - (long)ppppppplStack_110));
          param_2 = ppppppplStack_110;
          _memcpy(ppppppplVar27);
          ppppppplStack_b0 = ppppppplStack_110;
          ppppppplStack_a8 = ppppppplStack_100;
          ppppppplStack_c0 = ppppppplStack_110;
          ppppppplStack_b8 = ppppppplStack_110;
          ppppppplStack_110 = ppppppplVar27;
          ppppppplStack_108 = ppppppplVar17;
          ppppppplStack_100 = (long *******)(uVar37 + lVar32);
          func_0x00010a2b706c(&ppppppplStack_c0);
        }
        puVar10 = PTR___DefaultRuneLocale_11034bcf8;
        ppppppplVar27 = ppppppplStack_188;
        ppppppplVar26 = ppppppplStack_180;
        ppppppplStack_108 = ppppppplVar17;
      }
      if (ppppppplVar27 != ppppppplVar26) {
        plVar14 = (long *)(param_1 + 0x198);
        do {
          if (*(char *)ppppppplVar27 == '\x02') {
            pppppplVar21 = ppppppplVar27[0xe];
            ppppppplVar17 = (long *******)ppppppplVar27[0xd];
            if (-1 < (char)*(byte *)((long)ppppppplVar27 + 0x7f)) {
              pppppplVar21 = (long ******)(ulong)*(byte *)((long)ppppppplVar27 + 0x7f);
              ppppppplVar17 = ppppppplVar27 + 0xd;
            }
            pppppplStack_120 = (long ******)0x0;
            uStack_118 = 0;
            pppppppuStack_128 = (undefined8 *******)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_128,pppppplVar21,0);
            if (pppppplVar21 != (long ******)0x0) {
              pppppplVar29 = (long ******)0x0;
              do {
                cVar13 = *(char *)((long)ppppppplVar17 + (long)pppppplVar29);
                lVar32 = (long)cVar13;
                if ((-1 < lVar32) && ((*(uint *)(puVar10 + lVar32 * 4 + 0x3c) >> 0xf & 1) != 0)) {
                  ___tolower();
                  cVar13 = (char)lVar32;
                }
                pppppplVar15 = pppppplStack_120;
                if (-1 < (long)uStack_118) {
                  pppppplVar15 = (long ******)(uStack_118 >> 0x38);
                }
                if (pppppplVar15 < pppppplVar29) goto LAB_10a2b0b8c;
                pppppppuVar4 = pppppppuStack_128;
                if (-1 < (long)uStack_118) {
                  pppppppuVar4 = &pppppppuStack_128;
                }
                *(char *)((long)pppppppuVar4 + (long)pppppplVar29) = cVar13;
                pppppplVar29 = (long ******)((long)pppppplVar29 + 1);
              } while (pppppplVar21 != pppppplVar29);
            }
            if (*(char *)(param_1 + 400) == '\x01') {
              pppppplVar21 = (long ******)*plVar14;
              if (pppppplVar21 == (long ******)0x0) {
                uVar25 = *(undefined8 *)(param_1 + 200);
                ppppppplVar17 = (long *******)0x30;
                __Znwm();
                ppppppplVar35 = ppppppplVar17 + 1;
                *ppppppplVar35 = (long ******)0x0;
                ppppppplVar17[2] = (long ******)0x0;
                ppppppplVar18 = ppppppplVar17 + 3;
                *ppppppplVar17 = (long ******)&PTR_DAT_110bbb950;
                FUN_10a9c38ac(ppppppplVar18,uVar25);
                ppppppplStack_c0 = ppppppplVar18;
                ppppppplStack_b8 = ppppppplVar17;
                if (ppppppplVar17[4] == (long ******)0x0) {
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar35,0x10);
                    if (bVar8) {
                      *ppppppplVar35 = (long ******)((long)*ppppppplVar35 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar18 = ppppppplVar17 + 2;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                    if (bVar8) {
                      *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar17[3] = (long ******)(ppppppplVar17 + 3);
                  ppppppplVar17[4] = (long ******)ppppppplVar17;
LAB_10a2b0644:
                  do {
                    pppppplVar21 = *ppppppplVar35;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar35,0x10);
                    if (bVar8) {
                      *ppppppplVar35 = (long ******)((long)pppppplVar21 + -1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (pppppplVar21 == (long ******)0x0) {
                    (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
                  }
                }
                else if (ppppppplVar17[4][1] == (long *****)0xffffffffffffffff) {
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar35,0x10);
                    if (bVar8) {
                      *ppppppplVar35 = (long ******)((long)*ppppppplVar35 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar18 = ppppppplVar17 + 2;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                    if (bVar8) {
                      *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  ppppppplVar17[3] = (long ******)(ppppppplVar17 + 3);
                  ppppppplVar17[4] = (long ******)ppppppplVar17;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  goto LAB_10a2b0644;
                }
                FUN_10a2aeeb4(plVar14,&ppppppplStack_c0);
                ppppppplVar17 = ppppppplStack_b8;
                if (ppppppplStack_b8 != (long *******)0x0) {
                  ppppppplVar18 = ppppppplStack_b8 + 1;
                  do {
                    pppppplVar21 = *ppppppplVar18;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                    if (bVar8) {
                      *ppppppplVar18 = (long ******)((long)pppppplVar21 + -1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (pppppplVar21 == (long ******)0x0) {
                    (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
                  }
                }
                pppppplVar21 = (long ******)*plVar14;
              }
              pppppplVar29 = *(long *******)(param_1 + 0x1a0);
              if (pppppplVar29 != (long ******)0x0) {
                pppppplVar15 = pppppplVar29 + 1;
                do {
                  cVar13 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
                  if (bVar8) {
                    *pppppplVar15 = (long *****)((long)*pppppplVar15 + 1);
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              pppppplStack_d0 = pppppplVar21;
              pppppplStack_c8 = pppppplVar29;
              FUN_10a9c3928(pppppplVar21,&pppppppuStack_128);
              if ((int)pppppplVar21 != 0) {
                ppppppplStack_98 = (long *******)0x0;
                ppppppplStack_90 = (long *******)0x0;
                ppppppplStack_88 = (long *******)0x0;
                FUN_10a2b2150(&ppuStack_e0,ppppppplVar19,ppppppplVar27,
                              (ulong)pppppplStack_150 & 0xff);
                ppuVar11 = ppuStack_e0;
                if (ppuStack_e0 != (undefined **)0x0) {
                  lVar32 = *(long *)(param_1 + 200);
                  func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a808f);
                  if (lVar32 != 0) {
                    FUN_10a76bd40(*(undefined8 *)(lVar32 + 0x8d8),&ppppppplStack_c0,1);
                  }
                  ppppppplStack_a0 = (long *******)&ppppppplStack_98;
                  puVar31 = (undefined8 *)0x10;
                  __Znwm();
                  ppppppplVar17 = ppppppplStack_98;
                  *puVar31 = ppuVar11;
                  puVar31[1] = plStack_d8;
                  if (plStack_d8 != (long *)0x0) {
                    plVar2 = plStack_d8 + 1;
                    do {
                      cVar13 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar8) {
                        *plVar2 = *plVar2 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppppppplVar18 = (long *******)(puVar31 + 2);
                  ppppppplVar35 =
                       (long *******)
                       ((long)puVar31 - ((long)ppppppplStack_90 - (long)ppppppplStack_98));
                  _memcpy(ppppppplVar35,ppppppplStack_98);
                  ppppppplStack_b0 = ppppppplVar17;
                  ppppppplStack_a8 = ppppppplStack_88;
                  ppppppplStack_c0 = ppppppplVar17;
                  ppppppplStack_b8 = ppppppplVar17;
                  ppppppplStack_98 = ppppppplVar35;
                  ppppppplStack_90 = ppppppplVar18;
                  ppppppplStack_88 = ppppppplVar18;
                  FUN_10a2b72f0(&ppppppplStack_c0);
                  ppppppplStack_90 = ppppppplVar18;
                }
                FUN_10a2b2c88(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                              &ppppppplStack_98,&ppppppplStack_110,&pppppplStack_1a0,
                              (ulong)pppppplStack_150 & 0xff);
                plVar2 = plStack_d8;
                if (plStack_d8 != (long *)0x0) {
                  plVar3 = plStack_d8 + 1;
                  do {
                    lVar32 = *plVar3;
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar8) {
                      *plVar3 = lVar32 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (lVar32 == 0) {
                    (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                  }
                }
                func_0x00010a2b7398(&ppppppplStack_98);
                pppppplVar29 = pppppplStack_c8;
              }
              if (pppppplVar29 != (long ******)0x0) {
                pppppplVar21 = pppppplVar29 + 1;
                do {
                  ppppplVar23 = *pppppplVar21;
                  cVar13 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
                  if (bVar8) {
                    *pppppplVar21 = (long *****)((long)ppppplVar23 + -1);
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (ppppplVar23 == (long *****)0x0) {
                  (*(code *)(*pppppplVar29)[2])(pppppplVar29);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar29);
                }
              }
            }
            if ((long)uStack_118 < 0) {
              __ZdlPv(pppppppuStack_128);
            }
          }
          else {
            FUN_10a2b2150(&ppppppplStack_98,ppppppplVar19,ppppppplVar27,
                          (ulong)pppppplStack_150 & 0xff);
            ppppppplVar17 = ppppppplStack_98;
            ppppppplVar18 = ppppppplStack_90;
            if (ppppppplStack_98 != (long *******)0x0) {
              lVar32 = *(long *)(param_1 + 200);
              func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a808f);
              if (lVar32 != 0) {
                FUN_10a76bd40(*(undefined8 *)(lVar32 + 0x8d8),&ppppppplStack_c0,1);
              }
              ppppppplVar30 = ppppppplStack_e8;
              ppppppplVar35 = ppppppplStack_f8;
              if (ppppppplStack_f0 < ppppppplStack_e8) {
                *ppppppplStack_f0 = (long ******)ppppppplVar17;
                ppppppplStack_f0[1] = (long ******)ppppppplStack_90;
                if (ppppppplStack_90 != (long *******)0x0) {
                  ppppppplVar17 = ppppppplStack_90 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                    if (bVar8) {
                      *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                ppppppplVar18 = ppppppplStack_90;
                ppppppplStack_f0 = ppppppplStack_f0 + 2;
              }
              else {
                lVar36 = (long)ppppppplStack_f0 - (long)ppppppplStack_f8;
                lVar32 = lVar36 >> 4;
                uVar22 = lVar32 + 1;
                if (uVar22 >> 0x3c != 0) {
                  FUN_10a2b72dc();
                  goto LAB_10a2b0b8c;
                }
                uVar37 = (long)ppppppplStack_e8 - (long)ppppppplStack_f8 >> 3;
                if (uVar37 <= uVar22) {
                  uVar37 = uVar22;
                }
                if (0x7fffffffffffffef < (ulong)((long)ppppppplStack_e8 - (long)ppppppplStack_f8)) {
                  uVar37 = 0xfffffffffffffff;
                }
                ppppppplStack_a0 = (long *******)&ppppppplStack_f8;
                if (uVar37 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a2b0b8c;
                }
                lVar20 = uVar37 << 4;
                __Znwm();
                ppppppplVar18 = ppppppplStack_90;
                puVar31 = (undefined8 *)(lVar20 + lVar36);
                *puVar31 = ppppppplVar17;
                puVar31[1] = ppppppplStack_90;
                if (ppppppplStack_90 != (long *******)0x0) {
                  ppppppplVar17 = ppppppplStack_90 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                    if (bVar8) {
                      *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  lVar36 = (long)ppppppplStack_f0 - (long)ppppppplVar35;
                  lVar32 = lVar36 >> 4;
                  ppppppplVar30 = ppppppplStack_e8;
                }
                _memcpy(puVar31 + lVar32 * -2,ppppppplVar35,lVar36);
                ppppppplStack_b0 = ppppppplVar35;
                ppppppplStack_c0 = ppppppplVar35;
                ppppppplStack_b8 = ppppppplVar35;
                ppppppplStack_f8 = (long *******)(puVar31 + lVar32 * -2);
                ppppppplStack_f0 = (long *******)(puVar31 + 2);
                ppppppplStack_e8 = (long *******)(lVar20 + uVar37 * 0x10);
                ppppppplStack_a8 = ppppppplVar30;
                FUN_10a2b72f0(&ppppppplStack_c0);
                ppppppplStack_f0 = (long *******)(puVar31 + 2);
              }
            }
            if (ppppppplVar18 != (long *******)0x0) {
              ppppppplVar17 = ppppppplVar18 + 1;
              do {
                pppppplVar21 = *ppppppplVar17;
                cVar13 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                if (bVar8) {
                  *ppppppplVar17 = (long ******)((long)pppppplVar21 + -1);
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (pppppplVar21 == (long ******)0x0) {
                (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar18);
              }
            }
          }
          ppppppplVar27 = ppppppplVar27 + 0x14;
        } while (ppppppplVar27 != ppppppplVar26);
      }
      FUN_10a2b2c88(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                    &ppppppplStack_f8,&ppppppplStack_110,&pppppplStack_1a0,
                    (ulong)pppppplStack_150 & 0xff);
      func_0x00010a2b733c(&ppppppplStack_110);
      func_0x00010a2b7398(&ppppppplStack_f8);
      goto LAB_10a2b0a2c;
    }
    ppppppplVar27 = *(long ********)(param_1 + 0x140);
    ppppppplStack_b8 = *(long ********)(param_1 + 0x148);
    if (ppppppplStack_b8 != (long *******)0x0) {
      ppppppplVar26 = ppppppplStack_b8 + 1;
      do {
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
        if (bVar8) {
          *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    ppppppplStack_c0 = ppppppplVar27;
    FUN_10a2c0718(&ppppppplStack_98,uStack_148._4_4_,&uStack_140);
    FUN_10a2b1b80(ppppppplVar27,&ppppppplStack_98);
    ppppppplVar27 = ppppppplStack_90;
    *(long *******)(param_1 + 0x78) = pppppplVar21;
    if (ppppppplStack_90 != (long *******)0x0) {
      ppppppplVar26 = ppppppplStack_90 + 1;
      do {
        pppppplVar21 = *ppppppplVar26;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
        if (bVar8) {
          *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar21 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_90)[2])(ppppppplStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar27);
      }
    }
    ppppppplVar27 = ppppppplStack_b8;
    if (ppppppplStack_b8 != (long *******)0x0) {
      ppppppplVar26 = ppppppplStack_b8 + 1;
      do {
        pppppplVar21 = *ppppppplVar26;
        cVar13 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
        if (bVar8) {
          *ppppppplVar26 = (long ******)((long)pppppplVar21 + -1);
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (pppppplVar21 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar27);
      }
    }
    bVar8 = false;
  }
  else {
LAB_10a2b0a2c:
    bVar8 = true;
  }
  if (iStack_12c < 0) {
    __ZdlPv(CONCAT44(uStack_13c,uStack_140));
  }
  ppppppplStack_c0 = (long *******)&uStack_170;
  FUN_10a2b6d84(&ppppppplStack_c0);
  ppppppplStack_c0 = (long *******)&ppppppplStack_188;
  FUN_10a2b6e7c(&ppppppplStack_c0);
  if ((long)ppppppplStack_190 < 0) {
    __ZdlPv(pppppplStack_1a0);
  }
  if (!bVar8) {
    return;
  }
LAB_10a2b0a80:
  if (*(char *)(param_1 + 0x81) == '\x01') {
    puVar31 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar31 == (undefined8 *)0x0) {
      uVar25 = 0;
    }
    else {
      uVar28 = *puVar31;
      __ZNSt3__15mutex4lockEv(uVar28);
      uVar25 = *(undefined8 *)(puVar31[2] + 0x138);
      __ZNSt3__15mutex6unlockEv(uVar28);
    }
    func_0x000107c2b054(&ppppppplStack_c0,&UNK_10e4a8214);
    __ZNSt3__19to_stringEd(&ppppppplStack_98,uVar25);
    func_0x000107c2b054(&pcStack_1a8,&UNK_10f64a9f7);
    ppppppplStack_190 = (long *******)CONCAT71(ppppppplStack_190._1_7_,1);
    FUN_10a2b52e8(ppppppplVar19,&ppppppplStack_c0,&ppppppplStack_98,&pcStack_1a8);
    if (((char)ppppppplStack_190 == '\x01') && ((long)uStack_198 < 0)) {
      __ZdlPv(pcStack_1a8);
    }
  }
  return;
}



/* Entry: 10a2b2150; end: 10a2b2c87;  */

/* WARNING: Removing unreachable block (ram,0x00010a2b24bc) */
/* WARNING: Removing unreachable block (ram,0x00010a2b2890) */
/* WARNING: Removing unreachable block (ram,0x00010a2b28b0) */
/* WARNING: Removing unreachable block (ram,0x00010a2b2a64) */
/* WARNING: Removing unreachable block (ram,0x00010a2b2504) */

void FUN_10a2b2150(undefined8 *param_1,long param_2,char *param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  long *plVar10;
  long *plVar11;
  long *******ppppppplVar12;
  undefined8 *puVar13;
  long *****ppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long ******pppppplVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  undefined8 uStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  
  if (param_3[0x1f] < '\0') {
    func_0x000107c3192c(&uStack_b0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  }
  else {
    uStack_a8 = *(undefined8 *)(param_3 + 0x10);
    uStack_b0 = *(undefined8 *)(param_3 + 8);
    lStack_a0 = *(long *)(param_3 + 0x18);
  }
  lVar18 = *(long *)(param_3 + 0x20);
  lVar3 = *(long *)(param_3 + 0x28);
  pppppplStack_c0 = (long ******)0x0;
  pppppplStack_b8 = (long ******)0x0;
  pppppplStack_c8 = (long ******)0x0;
  if (lVar18 != lVar3) {
    do {
      pppppplVar8 = (long ******)0x60;
      __Znwm();
      pppppplVar20 = pppppplVar8 + 1;
      *pppppplVar20 = (long *****)0x0;
      pppppplVar8[2] = (long *****)0x0;
      *pppppplVar8 = (long *****)&PTR_FUN_110bbbc50;
      pppppplVar8[4] = (long *****)0x0;
      pppppplVar8[5] = (long *****)0x0;
      ppppplStack_f8 = (long *****)(pppppplVar8 + 3);
      *ppppplStack_f8 = (long ****)&PTR_DAT_110c368f0;
      pppppplVar8[9] = (long *****)0x0;
      pppppplVar8[8] = (long *****)0x0;
      pppppplVar8[0xb] = (long *****)0x0;
      pppppplVar8[10] = (long *****)0x0;
      pppppplVar8[7] = (long *****)0x0;
      pppppplVar8[6] = (long *****)0x0;
      ppppplStack_f0 = (long *****)pppppplVar8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (pppppplVar8 + 6,lVar18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (pppppplVar8 + 9,lVar18 + 0x18);
      if (pppppplStack_c0 < pppppplStack_b8) {
        *pppppplStack_c0 = ppppplStack_f8;
        pppppplStack_c0[1] = (long *****)pppppplVar8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
          if (bVar6) {
            *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppplStack_c0 = pppppplStack_c0 + 2;
      }
      else {
        lVar22 = (long)pppppplStack_c0 - (long)pppppplStack_c8;
        uVar1 = (lVar22 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a2b7708();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a2b2aec);
          (*pcVar7)();
        }
        uVar17 = (long)pppppplStack_b8 - (long)pppppplStack_c8 >> 3;
        if (uVar17 <= uVar1) {
          uVar17 = uVar1;
        }
        if (0x7fffffffffffffef < (ulong)((long)pppppplStack_b8 - (long)pppppplStack_c8)) {
          uVar17 = 0xfffffffffffffff;
        }
        ppppppplVar9 = &pppppplStack_c8;
        pppppplStack_70 = (long ******)&pppppplStack_c8;
        FUN_10a2b771c();
        puVar13 = (undefined8 *)((long)ppppppplVar9 + lVar22);
        *puVar13 = ppppplStack_f8;
        puVar13[1] = pppppplVar8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
          if (bVar6) {
            *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppppppplVar15 =
             (long *******)((long)puVar13 - ((long)pppppplStack_c0 - (long)pppppplStack_c8));
        _memcpy(ppppppplVar15);
        uStack_80 = (long *******)pppppplStack_c8;
        pppppplStack_78 = pppppplStack_b8;
        pppppplStack_90 = pppppplStack_c8;
        pppppplStack_88 = pppppplStack_c8;
        pppppplStack_c8 = (long ******)ppppppplVar15;
        pppppplStack_c0 = (long ******)(puVar13 + 2);
        pppppplStack_b8 = (long ******)(ppppppplVar9 + uVar17 * 2);
        func_0x00010a2b85a0(&pppppplStack_90);
        pppppplStack_c0 = (long ******)(puVar13 + 2);
      }
      do {
        ppppplVar14 = *pppppplVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
        if (bVar6) {
          *pppppplVar20 = (long *****)((long)ppppplVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar14 == (long *****)0x0) {
        (*(code *)(*pppppplVar8)[2])(pppppplVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar8);
      }
      lVar18 = lVar18 + 0x30;
    } while (lVar18 != lVar3);
  }
  plVar10 = (long *)0x50;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_110bbba90;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plStack_e0 = plVar10 + 3;
  *plStack_e0 = (long)&PTR_FUN_110c36c60;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[7] = 0;
  *(char *)(plVar10 + 6) = param_3[0x80];
  plStack_d8 = plVar10;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar10 + 7,param_3 + 0x88);
  *param_1 = 0;
  param_1[1] = 0;
  cVar5 = *param_3;
  if (cVar5 == '\0') {
    if (param_4 != 0) {
      plVar4 = *(long **)(param_3 + 0x40);
      for (plVar10 = *(long **)(param_3 + 0x38); plVar10 != plVar4; plVar10 = plVar10 + 3) {
        lVar18 = (long)*(char *)((long)plVar10 + 0x17);
        plVar21 = plVar10;
        if (lVar18 < 0) {
          lVar18 = plVar10[1];
          plVar21 = (long *)*plVar10;
        }
        if (10 < lVar18) {
          plVar2 = (long *)((long)plVar21 + lVar18);
          plVar11 = plVar21;
          while (_memchr(plVar11,0x23,lVar18 + -10), plVar11 != (long *)0x0) {
            if (*plVar11 == 0x52455f50414e5323 && *(long *)((long)plVar11 + 3) == 0x524f5252455f5041
               ) {
              if ((plVar11 != plVar2) && ((long)plVar11 - (long)plVar21 != -1)) goto LAB_10a2b24c4;
              break;
            }
            plVar11 = (long *)((long)plVar11 + 1);
            lVar18 = (long)plVar2 - (long)plVar11;
            if (lVar18 < 0xb) break;
          }
        }
        *(int *)(param_2 + 0x16c) = *(int *)(param_2 + 0x16c) + 1;
        lVar18 = *(long *)(param_2 + 0x1a8);
        func_0x000107c2b054(&pppppplStack_90,&UNK_10e4a8031);
        if (lVar18 != 0) {
          FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&pppppplStack_90,1);
        }
LAB_10a2b24c4:
      }
      lVar18 = *(long *)(param_2 + 0x1a8);
      func_0x000107c2b054(&pppppplStack_90,&UNK_10e4a8050);
      if (lVar18 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&pppppplStack_90,
                      *(undefined4 *)(param_2 + 0x16c));
      }
    }
    puVar13 = (undefined8 *)0x90;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar19 = puVar13 + 3;
    *puVar19 = &PTR_FUN_110c36b40;
    *puVar13 = &PTR_DAT_110bbb9a0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    if (lStack_a0 < 0) {
      func_0x000107c3192c(puVar13 + 6,uStack_b0,uStack_a8);
    }
    else {
      puVar13[7] = uStack_a8;
      puVar13[6] = uStack_b0;
      puVar13[8] = lStack_a0;
    }
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    FUN_10a2b7654();
    puVar13[0xd] = plStack_d8;
    puVar13[0xc] = plStack_e0;
    if (plStack_d8 != (long *)0x0) {
      plVar10 = plStack_d8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar13[0xe] = 0;
    puVar13[3] = &PTR_FUN_110c36ae0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    FUN_10a0cf0cc();
    *(undefined1 *)(puVar13 + 0x11) = 0;
  }
  else {
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        if (param_3[0x7f] < '\0') {
          func_0x000107c3192c(&pppppplStack_90,*(undefined8 *)(param_3 + 0x68),
                              *(undefined8 *)(param_3 + 0x70));
        }
        else {
          pppppplStack_88 = (long ******)*(long ********)(param_3 + 0x70);
          pppppplStack_90 = (long ******)*(long ********)(param_3 + 0x68);
          uStack_80 = *(long ********)(param_3 + 0x78);
        }
        if (param_4 != 0) {
          ppppppplVar9 = (long *******)pppppplStack_90;
          if (-1 < (long)uStack_80._7_1_) {
            ppppppplVar9 = &pppppplStack_90;
          }
          ppppppplVar15 = (long *******)pppppplStack_88;
          if (-1 < (long)uStack_80) {
            ppppppplVar15 = (long *******)(long)uStack_80._7_1_;
          }
          if (10 < (long)ppppppplVar15) {
            ppppppplVar12 = ppppppplVar9;
            ppppppplVar16 = ppppppplVar15;
            while (_memchr(ppppppplVar12,0x23,(char *)((long)ppppppplVar16 + -10)),
                  ppppppplVar12 != (long *******)0x0) {
              if (*ppppppplVar12 == (long ******)0x52455f50414e5323 &&
                  *(long *)((long)ppppppplVar12 + 3) == 0x524f5252455f5041) {
                if ((ppppppplVar12 != (long *******)((long)ppppppplVar9 + (long)ppppppplVar15)) &&
                   ((long)ppppppplVar12 - (long)ppppppplVar9 != -1)) goto LAB_10a2b2978;
                break;
              }
              ppppppplVar12 = (long *******)((long)ppppppplVar12 + 1);
              ppppppplVar16 =
                   (long *******)(((long)ppppppplVar9 + (long)ppppppplVar15) - (long)ppppppplVar12);
              if ((long)ppppppplVar16 < 0xb) break;
            }
          }
          for (; ppppppplVar15 != (long *******)0x0;
              ppppppplVar15 = (long *******)((long)ppppppplVar15 + -1)) {
            if (*(char *)ppppppplVar9 == ' ') {
              *(char *)ppppppplVar9 = '_';
            }
            ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
          }
          FUN_10a2af248(param_2,&pppppplStack_90);
          *(int *)(param_2 + 0x170) = *(int *)(param_2 + 0x170) + 1;
          lVar18 = *(long *)(param_2 + 0x1a8);
          func_0x000107c2b054(&ppppplStack_f8,&UNK_10e4a80e9);
          if (lVar18 != 0) {
            FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&ppppplStack_f8,1);
          }
          if (cStack_e1 < '\0') {
            __ZdlPv(ppppplStack_f8);
          }
          lVar18 = *(long *)(param_2 + 0x1a8);
          func_0x000107c2b054(&ppppplStack_f8,&UNK_10e4a826c);
          if (lVar18 != 0) {
            FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&ppppplStack_f8,
                          *(undefined4 *)(param_2 + 0x170));
          }
          if (cStack_e1 < '\0') {
            __ZdlPv(ppppplStack_f8);
          }
        }
LAB_10a2b2978:
        puVar13 = (undefined8 *)0x90;
        __Znwm();
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = &PTR_FUN_110c36b40;
        *puVar13 = &PTR_DAT_110bbba40;
        puVar13[4] = 0;
        puVar13[5] = 0;
        if (lStack_a0 < 0) {
          func_0x000107c3192c(puVar13 + 6,uStack_b0,uStack_a8);
        }
        else {
          puVar13[7] = uStack_a8;
          puVar13[6] = uStack_b0;
          puVar13[8] = lStack_a0;
        }
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        FUN_10a2b7654();
        puVar13[0xd] = plStack_d8;
        puVar13[0xc] = plStack_e0;
        if (plStack_d8 != (long *)0x0) {
          plVar10 = plStack_d8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar13[3] = &PTR_FUN_110c36c00;
        if (param_3[0x7f] < '\0') {
          func_0x000107c3192c(puVar13 + 0xe,*(undefined8 *)(param_3 + 0x68),
                              *(undefined8 *)(param_3 + 0x70));
        }
        else {
          uVar23 = *(undefined8 *)(param_3 + 0x68);
          puVar13[0xf] = *(undefined8 *)(param_3 + 0x70);
          puVar13[0xe] = uVar23;
          puVar13[0x10] = *(undefined8 *)(param_3 + 0x78);
        }
        *(undefined1 *)(puVar13 + 0x11) = 2;
        *param_1 = puVar13 + 3;
        param_1[1] = puVar13;
      }
      goto LAB_10a2b2a6c;
    }
    if (param_3[0x67] < '\0') {
      func_0x000107c3192c(&pppppplStack_90,*(undefined8 *)(param_3 + 0x50),
                          *(undefined8 *)(param_3 + 0x58));
    }
    else {
      pppppplStack_88 = *(long *******)(param_3 + 0x58);
      pppppplStack_90 = *(long *******)(param_3 + 0x50);
      uStack_80 = *(long ********)(param_3 + 0x60);
    }
    if (param_4 != 0) {
      ppppppplVar9 = (long *******)pppppplStack_90;
      if (-1 < (long)uStack_80._7_1_) {
        ppppppplVar9 = &pppppplStack_90;
      }
      ppppppplVar15 = (long *******)pppppplStack_88;
      if (-1 < (long)uStack_80) {
        ppppppplVar15 = (long *******)(long)uStack_80._7_1_;
      }
      if (10 < (long)ppppppplVar15) {
        ppppppplVar16 = (long *******)((long)ppppppplVar9 + (long)ppppppplVar15);
        ppppppplVar12 = ppppppplVar9;
        while (_memchr(ppppppplVar12,0x23,(char *)((long)ppppppplVar15 + -10)),
              ppppppplVar12 != (long *******)0x0) {
          if (*ppppppplVar12 == (long ******)0x52455f50414e5323 &&
              *(long *)((long)ppppppplVar12 + 3) == 0x524f5252455f5041) {
            if ((ppppppplVar12 != ppppppplVar16) && ((long)ppppppplVar12 - (long)ppppppplVar9 != -1)
               ) goto LAB_10a2b27bc;
            break;
          }
          ppppppplVar12 = (long *******)((long)ppppppplVar12 + 1);
          ppppppplVar15 = (long *******)((long)ppppppplVar16 - (long)ppppppplVar12);
          if ((long)ppppppplVar15 < 0xb) break;
        }
      }
      FUN_10a2af248(param_2,&pppppplStack_90);
      *(int *)(param_2 + 0x174) = *(int *)(param_2 + 0x174) + 1;
      lVar18 = *(long *)(param_2 + 0x1a8);
      func_0x000107c2b054(&ppppplStack_f8,&UNK_10e4a80a6);
      if (lVar18 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&ppppplStack_f8,1);
      }
      if (cStack_e1 < '\0') {
        __ZdlPv(ppppplStack_f8);
      }
      lVar18 = *(long *)(param_2 + 0x1a8);
      func_0x000107c2b054(&ppppplStack_f8,&UNK_10e4a8248);
      if (lVar18 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&ppppplStack_f8,
                      *(undefined4 *)(param_2 + 0x174));
      }
      if (cStack_e1 < '\0') {
        __ZdlPv(ppppplStack_f8);
      }
    }
LAB_10a2b27bc:
    puVar13 = (undefined8 *)0x90;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar19 = puVar13 + 3;
    *puVar19 = &PTR_FUN_110c36b40;
    *puVar13 = &PTR_FUN_110bbb9f0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    if (lStack_a0 < 0) {
      func_0x000107c3192c(puVar13 + 6,uStack_b0,uStack_a8);
    }
    else {
      puVar13[7] = uStack_a8;
      puVar13[6] = uStack_b0;
      puVar13[8] = lStack_a0;
    }
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    FUN_10a2b7654();
    puVar13[0xd] = plStack_d8;
    puVar13[0xc] = plStack_e0;
    if (plStack_d8 != (long *)0x0) {
      plVar10 = plStack_d8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar13[3] = &PTR_FUN_110c36ba0;
    puVar13[0xf] = pppppplStack_88;
    puVar13[0xe] = pppppplStack_90;
    puVar13[0x10] = uStack_80;
    *(undefined1 *)(puVar13 + 0x11) = 1;
  }
  *param_1 = puVar19;
  param_1[1] = puVar13;
LAB_10a2b2a6c:
  plVar10 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar4 = plStack_d8 + 1;
    do {
      lVar18 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  pppppplStack_90 = (long ******)&pppppplStack_c8;
  FUN_10a2b7750(&pppppplStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  return;
}



/* Entry: 10a2b2c88; end: 10a2b32eb;  */

void FUN_10a2b2c88(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined1 param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined ***pppuVar21;
  ulong unaff_x26;
  double dVar22;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  long lStack_128;
  undefined **ppuStack_120;
  undefined1 uStack_111;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined **)0x0) {
    ppuVar5 = param_2 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar2) {
        *ppuVar5 = *ppuVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar5 = (undefined **)0xb0;
  lStack_128 = param_1;
  ppuStack_120 = param_2;
  uStack_111 = param_6;
  __Znwm();
  ppuVar5[1] = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  ppuVar6 = ppuVar5 + 3;
  *ppuVar5 = (undefined *)&PTR_DAT_110bbb8d0;
  FUN_10a9c0394(ppuVar6,param_3,param_4,param_5,&uStack_111);
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  ppuStack_140 = ppuVar6;
  ppuStack_138 = ppuVar5;
  FUN_10a2baf90(&puStack_110,*(undefined8 *)(param_1 + 0x20));
  plVar20 = *(long **)(param_1 + 0x28);
  if (plVar20 != (long *)0x0) {
    do {
      uVar15 = uStack_108;
      uVar11 = plVar20[2];
      uVar17 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
      uVar17 = (uVar11 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
      uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar14 = uStack_108 - 1;
        if ((uStack_108 & uVar14) == 0) {
          unaff_x26 = uVar17 & uVar14;
        }
        else {
          unaff_x26 = uVar17;
          if (uStack_108 <= uVar17) {
            uVar19 = 0;
            if (uStack_108 != 0) {
              uVar19 = uVar17 / uStack_108;
            }
            unaff_x26 = uVar17 - uVar19 * uStack_108;
          }
        }
        plVar18 = *(long **)(puStack_110 + unaff_x26 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_10a2b2e14;
              uVar19 = plVar18[1];
              if (uVar19 != uVar17) break;
              if (plVar18[2] == uVar11) goto LAB_10a2b2f74;
            }
            if ((uStack_108 & uVar14) == 0) {
              uVar19 = uVar19 & uVar14;
            }
            else if (uStack_108 <= uVar19) {
              uVar4 = 0;
              if (uStack_108 != 0) {
                uVar4 = uVar19 / uStack_108;
              }
              uVar19 = uVar19 - uVar4 * uStack_108;
            }
          } while (uVar19 == unaff_x26);
        }
      }
LAB_10a2b2e14:
      param_5 = (long *)0x68;
      __Znwm();
      *param_5 = 0;
      param_5[1] = uVar17;
      lVar12 = plVar20[3];
      lVar9 = plVar20[2];
      param_5[3] = plVar20[3];
      param_5[2] = lVar9;
      if (lVar12 != 0) {
        plVar18 = (long *)(lVar12 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = *plVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_c0 = (undefined **)(param_5 + 4);
      *(undefined1 *)(param_5 + 0xc) = 3;
      if ((char)plVar20[0xc] == '\0') {
        uVar10 = 0;
      }
      else {
        FUN_10a005398(&ppuStack_c0,plVar20 + 4);
        uVar10 = (undefined1)plVar20[0xc];
      }
      *(undefined1 *)(param_5 + 0xc) = uVar10;
      if ((uVar15 == 0) || (fStack_f0 * (float)uVar15 < (float)(lStack_f8 + 1))) {
        uVar11 = 1;
        if (2 < uVar15) {
          uVar11 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar11 = uVar11 | uVar15 << 1;
        uVar15 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        FUN_10a2baf90(&puStack_110,uVar11);
        uVar15 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x26 = uStack_108 - 1 & uVar17;
        }
        else {
          unaff_x26 = uVar17;
          if (uStack_108 <= uVar17) {
            uVar11 = 0;
            if (uStack_108 != 0) {
              uVar11 = uVar17 / uStack_108;
            }
            unaff_x26 = uVar17 - uVar11 * uStack_108;
          }
        }
      }
      plVar18 = *(long **)(puStack_110 + unaff_x26 * 8);
      if (plVar18 == (long *)0x0) {
        *param_5 = (long)plStack_100;
        *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
        plStack_100 = param_5;
        if (*param_5 != 0) {
          uVar11 = *(ulong *)(*param_5 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar11 = uVar11 & uVar15 - 1;
          }
          else if (uVar15 <= uVar11) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar11 / uVar15;
            }
            uVar11 = uVar11 - uVar17 * uVar15;
          }
          *(long **)(puStack_110 + uVar11 * 8) = param_5;
        }
      }
      else {
        *param_5 = *plVar18;
        *plVar18 = (long)param_5;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a2b2f74:
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  pppuVar21 = (undefined ***)0x0;
  if (plStack_100 == (long *)0x0) {
    ppuVar6 = &puStack_110;
    FUN_10a2bf178();
  }
  else {
    param_5 = &lStack_e0;
    pppuVar21 = &ppuStack_c0;
    plVar20 = plStack_100;
    do {
      lVar9 = plVar20[2];
      lVar12 = param_1 + 0x18;
      FUN_10a2bb9a0();
      if (lVar12 != 0) {
        if ((char)plVar20[0xc] == '\x01') {
          pcVar13 = (code *)plVar20[4];
          ppuStack_b8 = ppuStack_138;
          ppuStack_c0 = ppuStack_140;
          if (ppuStack_138 != (undefined **)0x0) {
            ppuVar5 = ppuStack_138 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
              if (bVar2) {
                *ppuVar5 = *ppuVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          (*pcVar13)(&ppuStack_c0,plVar20 + 4);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar5 = ppuStack_b8 + 1;
            do {
              puVar16 = *ppuVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
              if (bVar2) {
                *ppuVar5 = puVar16 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              ppuVar6 = ppuStack_b8;
            } while (cVar1 != '\0');
LAB_10a2b3054:
            if (puVar16 == (undefined *)0x0) {
              (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            }
          }
        }
        else if ((char)plVar20[0xc] == '\x02') {
          plVar18 = plVar20 + 4;
          FUN_10a688b40();
          ppuVar5 = ppuStack_138;
          if (plVar18 == (long *)0x0) {
            if (lVar9 != 0) {
              lStack_b0 = plVar20[4];
              lStack_a8 = plVar20[5];
              if (lStack_a8 != 0) {
                plVar18 = (long *)(lStack_a8 + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar2) {
                    *plVar18 = *plVar18 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_d0 = ppuStack_140;
              ppuStack_c8 = ppuStack_138;
              if (ppuStack_138 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar6 = ppuStack_138 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                ppuStack_98 = ppuStack_138;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_a0 = ppuStack_140;
              ppuStack_b8 = &PTR_FUN_110bbb910;
              ppuStack_d8 = (undefined **)0x0;
              lStack_e0 = 0;
              ppuStack_c0 = (undefined **)FUN_10a2c1340;
              FUN_10a4634ec(lVar9,&ppuStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar5 != (undefined **)0x0) {
                ppuVar6 = ppuVar5 + 1;
                do {
                  puVar16 = *ppuVar6;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = puVar16 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (puVar16 == (undefined *)0x0) {
                  (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar5 = ppuStack_d8 + 1;
                do {
                  puVar16 = *ppuVar5;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                  if (bVar2) {
                    *ppuVar5 = puVar16 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar6 = ppuStack_d8;
                } while (cVar1 != '\0');
                goto LAB_10a2b3054;
              }
            }
          }
          else {
            *plVar18 = CONCAT44((int)((ulong)*plVar18 >> 0x20) + 1,(int)*plVar18 + 1);
            FUN_10a2c113c(plVar20[4],&ppuStack_140);
            iVar3 = *(int *)((long)plVar18 + 4) + -1;
            *(int *)((long)plVar18 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)plVar18 = 0;
            }
          }
        }
      }
      ppuVar5 = ppuStack_138;
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
    ppuVar6 = &puStack_110;
    FUN_10a2bf178();
    if (ppuVar5 == (undefined **)0x0) goto LAB_10a2b31b0;
  }
  ppuVar7 = ppuVar5 + 1;
  do {
    puVar16 = *ppuVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
    if (bVar2) {
      *ppuVar7 = puVar16 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar16 == (undefined *)0x0) {
    (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
    ppuVar6 = ppuVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a2b31b0:
  ppuVar7 = ppuStack_120;
  ppuStack_158 = ppuVar6;
  if (ppuStack_120 != (undefined **)0x0) {
    ppuVar6 = ppuStack_120 + 1;
    do {
      puVar16 = *ppuVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *ppuVar6 = puVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuStack_158 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(pppuVar21 + 1);
  FUN_10a2c10e4(param_5 + 2);
  func_0x00010a004dac(&lStack_e0);
  FUN_10a2bf178(&puStack_110);
  FUN_10a2c10e4(&ppuStack_140);
  func_0x00010a2bee94(&lStack_128);
  ppuVar6 = ppuStack_158;
  __Unwind_Resume();
  pcStack_148 = FUN_10a2b32ec;
  ppuStack_160 = ppuVar5;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649f28,0x166,&UNK_10f649f69);
  }
  puVar16 = ppuVar6[0x35];
  puVar8 = auStack_178;
  func_0x000107c2b054(puVar8,&UNK_10e4a8189);
  dVar22 = 0.0;
  if (*(char *)(ppuVar6 + 0x2d) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv(0);
    dVar22 = (double)(((long)puVar8 - (long)ppuVar6[0x34]) / 1000000);
  }
  if (puVar16 != (undefined *)0x0) {
    FUN_10a76bf18(dVar22,*(undefined8 *)(puVar16 + 0x8d8),auStack_178);
  }
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  return;
}



/* Entry: 10a2b32ec; end: 10a2b33cf;  */

void FUN_10a2b32ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  double dVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649f28,0x166,&UNK_10f649f69);
  }
  lVar2 = *(long *)(param_1 + 0x1a8);
  puVar1 = auStack_38;
  func_0x000107c2b054(puVar1,&UNK_10e4a8189);
  dVar3 = 0.0;
  if (*(char *)(param_1 + 0x168) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv(0);
    dVar3 = (double)(((long)puVar1 - *(long *)(param_1 + 0x1a0)) / 1000000);
  }
  if (lVar2 != 0) {
    FUN_10a76bf18(dVar3,*(undefined8 *)(lVar2 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}


