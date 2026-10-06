/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac97200; end: 10ac972bf;  */

void FUN_10ac97200(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x22);
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



/* Entry: 10ac972c0; end: 10ac9738f;  */

void FUN_10ac972c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96aa8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)(plVar4 + 0x22) = *(byte *)(plVar4 + 0x22) & 0xfe | (byte)param_2 ^ 1;
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



/* Entry: 10ac97390; end: 10ac9744f;  */

void FUN_10ac97390(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x22);
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



/* Entry: 10ac97450; end: 10ac97527;  */

void FUN_10ac97450(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96aa8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar1 = 0;
  if ((int)param_2 == 0) {
    bVar1 = 2;
  }
  *(byte *)(plVar5 + 0x22) = *(byte *)(plVar5 + 0x22) & 0xfd | bVar1;
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



/* Entry: 10ac97528; end: 10ac9765b;  */

void FUN_10ac97528(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x25];
  if (plVar6[0x25] != 0) {
    plVar6 = (long *)(plVar6[0x25] + 8);
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



/* Entry: 10ac9765c; end: 10ac97713;  */

void FUN_10ac9765c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x23];
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



/* Entry: 10ac97714; end: 10ac977d3;  */

void FUN_10ac97714(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac96aa8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x23) = (char)param_2;
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



/* Entry: 10ac977d4; end: 10ac97847;  */

void FUN_10ac977d4(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    puStack_18 = (undefined8 *)(double)param_3;
    aiStack_20[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac97848);
  (*pcVar1)();
}



/* Entry: 10ac97848; end: 10ac9787b;  */

void FUN_10ac97848(void)

{
  return;
}



/* Entry: 10ac9787c; end: 10ac97c8b;  */

void FUN_10ac9787c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a08f0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f6a0902;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f477b35;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a0902;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ac979dc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a0903;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a0902;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ac979dc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f477b2b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a0902;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ac979dc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac97c8c; end: 10ac97d0f;  */

undefined1  [16] FUN_10ac97c8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f63f2d8;
  return auVar1;
}



/* Entry: 10ac97d10; end: 10ac9833b;  */

void FUN_10ac97d10(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f63f2d8,0xd);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6ad10;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
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
    ppuStack_c0 = &PTR_DAT_110c6ad10;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9831c;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10acb6b6c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10acb6dc0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f636f1e,FUN_10acb6f68,FUN_10acb7084);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0d4,FUN_10acb7674,FUN_10acb7730);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a091e,FUN_10acb7820,FUN_10acb78dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f656c3e,FUN_10acb79cc,FUN_10acb7a88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"begin",FUN_10acb7b6c,FUN_10acb7c28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"end",FUN_10acb7d18,FUN_10acb7dd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f63975c,FUN_10acb7ec4,FUN_10acb7f80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c745,FUN_10acb8070,FUN_10acb8128);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"disabled",FUN_10acb81e8,FUN_10acb82a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10acb8360,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10acb8420,FUN_10acb84dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c74e,FUN_10acb859c,FUN_10acb8658);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f63f2d8,0xd);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f63f2d8;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f6a0902;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6a0902;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac9831c;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10acb8718,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac9831c;
      FUN_10a054dac(param_1,&UNK_10f6a092c,FUN_10acb886c,2,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac9831c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac98320);
  (*pcVar6)();
}



/* Entry: 10ac9833c; end: 10ac984b3;  */

void FUN_10ac9833c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a0940;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xfd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a094d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xfd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac984b4(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f528128;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xfd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac984b4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a0954;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xfd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac984b4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac984b4; end: 10ac9855b;  */

undefined8 * FUN_10ac984b4(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac9855c);
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



/* Entry: 10ac9855c; end: 10ac98643;  */

undefined8 * FUN_10ac9855c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ac98644; end: 10ac98947;  */

void FUN_10ac98644(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined4 *unaff_x21;
  long *plVar7;
  undefined **unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar8;
  undefined *puVar9;
  
  while( true ) {
    ppuVar5 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined4 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    (**(code **)(*ppuVar5 + 0xa0))
              ((undefined1 *)((long)register0x00000008 + -0x88),ppuVar5,&PTR_DAT_110c6b300);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(param_1[5]);
    }
    puVar9 = *(undefined **)((long)register0x00000008 + -0x88);
    param_1[6] = *(undefined **)((long)register0x00000008 + -0x80);
    param_1[5] = puVar9;
    param_1[7] = *(undefined **)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x88);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10acb8abc;
    *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c6b588;
    *(undefined ***)((long)register0x00000008 + -0x78) = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x6f6974616d696e61;
    *(undefined2 *)((long)register0x00000008 + -0x68) = 0x6e;
    *(undefined1 *)((long)register0x00000008 + -0x59) = 9;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa0),&UNK_10f6a0902);
    uVar8 = SUB84(puVar9,0);
    unaff_x22 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x250))
              (ppuVar5,&PTR_DAT_110c6a3b0,(undefined1 *)((long)register0x00000008 + -0x88),0,
               (undefined1 *)((long)register0x00000008 + -0xa0));
    if (*(char *)((long)register0x00000008 + -0x89) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xa0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))
              ((undefined1 *)((long)register0x00000008 + -0x80));
    if (((ulong)unaff_x22 & 1) == 0) {
      func_0x00010a0dd924(param_1 + 8,(undefined1 *)((long)register0x00000008 + -0xb0));
    }
    plVar7 = *(long **)((long)register0x00000008 + -0xa8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_DAT_110c6a3d0);
    *(undefined4 *)(param_1 + 10) = uVar8;
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_s_begin_110c6b320);
    *(undefined4 *)((long)param_1 + 0x5c) = uVar8;
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_s_end_110c6b340);
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x50))(ppuVar5,&PTR_DAT_110c6a3f0);
    *(char *)(param_1 + 0xd) = (char)ppuVar4;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 200))(ppuVar5,&PTR_DAT_110c6a410);
    uVar8 = *(undefined4 *)((long)param_1 + 0x54);
    *(char *)(param_1 + 0xb) = (char)ppuVar4;
    (**(code **)(*ppuVar5 + 0x48))(ppuVar5,&PTR_DAT_110c6a430);
    *(undefined4 *)((long)param_1 + 0x54) = uVar8;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x58))
              (ppuVar5,&PTR_s_disabled_110c6a450,*(undefined1 *)((long)param_1 + 0x69));
    *(undefined1 *)((long)param_1 + 0x69) = (char)ppuVar4;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x38))(ppuVar5,&PTR_DAT_110c6a470,*(undefined4 *)(param_1 + 0xe));
    *(int *)(param_1 + 0xe) = (int)ppuVar4;
    unaff_x21 = (undefined4 *)((long)param_1 + 0x74);
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x38))(ppuVar5,&PTR_DAT_110c6a490,*unaff_x21);
    *unaff_x21 = (int)ppuVar4;
    uVar8 = *(undefined4 *)((long)param_1 + 100);
    param_2 = &PTR_DAT_110c6a4b0;
    unaff_x19 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x48))();
    *(undefined4 *)((long)param_1 + 100) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x89) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xa0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))
              ((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x00010a0dd8cc((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10ac98948;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x20 = ppuVar5;
  }
  return;
}



/* Entry: 10ac98948; end: 10ac9894f;  */

void FUN_10ac98948(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *plVar7;
  undefined4 *unaff_x21;
  undefined **unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar8;
  undefined *puVar9;
  
  while( true ) {
    ppuVar5 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined4 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    (**(code **)(*ppuVar5 + 0xa0))
              ((undefined1 *)((long)register0x00000008 + -0x88),ppuVar5,&PTR_DAT_110c6b300);
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      __ZdlPv(param_1[2]);
    }
    puVar9 = *(undefined **)((long)register0x00000008 + -0x88);
    param_1[3] = *(undefined **)((long)register0x00000008 + -0x80);
    param_1[2] = puVar9;
    param_1[4] = *(undefined **)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x88);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10acb8abc;
    *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110c6b588;
    *(undefined ***)((long)register0x00000008 + -0x78) = param_1 + 5;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x6f6974616d696e61;
    *(undefined2 *)((long)register0x00000008 + -0x68) = 0x6e;
    *(undefined1 *)((long)register0x00000008 + -0x59) = 9;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa0),&UNK_10f6a0902);
    uVar8 = SUB84(puVar9,0);
    unaff_x22 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x250))
              (ppuVar5,&PTR_DAT_110c6a3b0,(undefined1 *)((long)register0x00000008 + -0x88),0,
               (undefined1 *)((long)register0x00000008 + -0xa0));
    if (*(char *)((long)register0x00000008 + -0x89) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xa0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))
              ((undefined1 *)((long)register0x00000008 + -0x80));
    if (((ulong)unaff_x22 & 1) == 0) {
      func_0x00010a0dd924(param_1 + 5,(undefined1 *)((long)register0x00000008 + -0xb0));
    }
    plVar7 = *(long **)((long)register0x00000008 + -0xa8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_DAT_110c6a3d0);
    *(undefined4 *)(param_1 + 7) = uVar8;
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_s_begin_110c6b320);
    *(undefined4 *)((long)param_1 + 0x44) = uVar8;
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_s_end_110c6b340);
    *(undefined4 *)(param_1 + 9) = uVar8;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x50))(ppuVar5,&PTR_DAT_110c6a3f0);
    *(char *)(param_1 + 10) = (char)ppuVar4;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 200))(ppuVar5,&PTR_DAT_110c6a410);
    uVar8 = *(undefined4 *)((long)param_1 + 0x3c);
    *(char *)(param_1 + 8) = (char)ppuVar4;
    (**(code **)(*ppuVar5 + 0x48))(ppuVar5,&PTR_DAT_110c6a430);
    *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x58))
              (ppuVar5,&PTR_s_disabled_110c6a450,*(undefined1 *)((long)param_1 + 0x51));
    *(undefined1 *)((long)param_1 + 0x51) = (char)ppuVar4;
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x38))(ppuVar5,&PTR_DAT_110c6a470,*(undefined4 *)(param_1 + 0xb));
    *(int *)(param_1 + 0xb) = (int)ppuVar4;
    unaff_x21 = (undefined4 *)((long)param_1 + 0x5c);
    ppuVar4 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x38))(ppuVar5,&PTR_DAT_110c6a490,*unaff_x21);
    *unaff_x21 = (int)ppuVar4;
    uVar8 = *(undefined4 *)((long)param_1 + 0x4c);
    param_2 = &PTR_DAT_110c6a4b0;
    unaff_x19 = ppuVar5;
    (**(code **)(*ppuVar5 + 0x48))();
    *(undefined4 *)((long)param_1 + 0x4c) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x89) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xa0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x80))
              ((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x00010a0dd8cc((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10ac98948;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x20 = ppuVar5;
  }
  return;
}



/* Entry: 10ac98950; end: 10ac98b47;  */

void FUN_10ac98950(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a00d760(param_2,&PTR_DAT_110c6b300,param_1 + 0x28);
  puStack_40 = &UNK_10f663546;
  uStack_38 = 0x14;
  plStack_48 = *(long **)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x48) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c6a3b0,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x50),param_2,&PTR_DAT_110c6a3d0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x5c),param_2,&PTR_s_begin_110c6b320);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x60),param_2,&PTR_s_end_110c6b340);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 100),param_2,&PTR_DAT_110c6a4b0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c6a3f0,*(undefined1 *)(param_1 + 0x68));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c6a410,*(undefined1 *)(param_1 + 0x58));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x54),param_2,&PTR_DAT_110c6a430);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_disabled_110c6a450,*(undefined1 *)(param_1 + 0x69));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6a470,*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010ac98b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6a490,*(undefined4 *)(param_1 + 0x74));
  return;
}



/* Entry: 10ac98b48; end: 10ac98b4f;  */

void FUN_10ac98b48(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a00d760(param_2,&PTR_DAT_110c6b300,param_1 + 0x10);
  puStack_40 = &UNK_10f663546;
  uStack_38 = 0x14;
  plStack_48 = *(long **)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c6a3b0,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x38),param_2,&PTR_DAT_110c6a3d0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x44),param_2,&PTR_s_begin_110c6b320);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x48),param_2,&PTR_s_end_110c6b340);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x4c),param_2,&PTR_DAT_110c6a4b0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c6a3f0,*(undefined1 *)(param_1 + 0x50));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c6a410,*(undefined1 *)(param_1 + 0x40));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x3c),param_2,&PTR_DAT_110c6a430);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_disabled_110c6a450,*(undefined1 *)(param_1 + 0x51));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6a470,*(undefined4 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010ac98b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6a490,*(undefined4 *)(param_1 + 0x5c));
  return;
}



/* Entry: 10ac98b50; end: 10ac98cff;  */

/* WARNING: Removing unreachable block (ram,0x00010ac98ca0) */
/* WARNING: Removing unreachable block (ram,0x00010ac98cb0) */

void FUN_10ac98b50(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(param_2 + 0x40);
  if (lVar2 == 0) {
    func_0x000107c2b054(&uStack_50,&DAT_10f684ec4);
  }
  else if (*(char *)(lVar2 + 0x6f) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  }
  else {
    uStack_48 = *(undefined8 *)(lVar2 + 0x60);
    uStack_50 = *(undefined8 *)(lVar2 + 0x58);
    uStack_40 = *(undefined8 *)(lVar2 + 0x68);
  }
  puVar1 = &DAT_10f4a5045;
  if (*(char *)(param_2 + 0x68) == '\0') {
    puVar1 = &DAT_10f4a504a;
  }
  func_0x000107c2b054(auStack_68,puVar1);
  puVar1 = &DAT_10f4a504a;
  if (*(char *)(param_2 + 0x69) == '\0') {
    puVar1 = &DAT_10f4a5045;
  }
  func_0x000107c2b054(auStack_80,puVar1);
  FUN_10a0ee900(param_1,&UNK_10f6a0997,0x84);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  return;
}



/* Entry: 10ac98d00; end: 10ac98e13;  */

undefined8 * FUN_10ac98d00(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_110c6a310;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110c6a378;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac98df4);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    puVar3 = param_1 + 5;
    *(char *)((long)param_1 + 0x3f) = (char)param_3;
    if (param_3 == 0) goto LAB_10ac98d9c;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[6] = param_3;
    param_1[7] = (ulong)puVar1 | 0x8000000000000000;
    param_1[5] = puVar3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_10ac98d9c:
  *(undefined1 *)((long)puVar3 + param_3) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar4 = NEON_fmov(0x3f800000,4);
  param_1[10] = uVar4;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  param_1[0xe] = 1;
  return param_1;
}



/* Entry: 10ac98e14; end: 10ac98eab;  */

undefined1  [16] FUN_10ac98e14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f654fc7;
  return auVar1;
}



/* Entry: 10ac98eac; end: 10ac99307;  */

void FUN_10ac98eac(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f654fc7,0xe);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c4c8;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
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
  uStack_68 = 0xea;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c6c4c8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac992e8;
    FUN_10a054dac(param_1,&UNK_10f6a0a1c,FUN_10acb8d18,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac992e8;
    FUN_10a054dac(param_1,&UNK_10f6a0a25,FUN_10acb8e20,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac992e8;
    FUN_10a054dac(param_1,&UNK_10f68cdd0,FUN_10acb906c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac992e8;
    FUN_10a054dac(param_1,&UNK_10f6a0a31,FUN_10acb9160,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0a3d,FUN_10acb9370,0);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f654fc7,0xe);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f654fc7;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f6a0902;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6a0902;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac992e8;
      FUN_10a054dac(param_1,&UNK_10f6a0a4b,FUN_10acb9434,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac992e8;
      FUN_10a054dac(param_1,&UNK_10f6a0a5a,FUN_10acb9568,7,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac992e8;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10acb9af0,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac992e8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac992ec);
  (*pcVar6)();
}



/* Entry: 10ac99308; end: 10ac99527;  */

void FUN_10ac99308(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c6b360);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0;
LAB_10ac993ec:
      (**(code **)(*param_1 + 0x18))(param_1,&lStack_98);
      if (lStack_98 != 0) {
        puStack_90 = (undefined8 *)lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (0x23 < uStack_78) {
      uVar3 = uStack_78 / 0x24;
      if (uStack_78 % 0x24 == 0) {
        lStack_98 = 0;
        puStack_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_10a1d7f40(&lStack_98,uVar3);
        puVar2 = (undefined8 *)((long)puStack_90 + uVar3 * 0x24);
        do {
          *puStack_90 = 0;
          puStack_90[2] = 0x3ea8f5c33ea8f5c3;
          puStack_90[1] = 0x3ea8f5c33ea8f5c3;
          puStack_90[3] = 0x100000001;
          *(undefined4 *)(puStack_90 + 4) = 0;
          puStack_90 = (undefined8 *)((long)puStack_90 + 0x24);
        } while (puStack_90 != puVar2);
        puStack_90 = puVar2;
        if ((bStack_70 & 1) == 0) goto LAB_10ac994b4;
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10ac993ec;
      }
    }
    uStack_51 = 4;
    uStack_68 = 0x7379656b;
    uStack_64 = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    uStack_51 = 4;
    uStack_68 = 0x7379656b;
    uStack_64 = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
LAB_10ac994b4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac994b8);
  (*pcVar1)();
}



/* Entry: 10ac99528; end: 10ac9952f;  */

void FUN_10ac99528(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c6b360);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0;
LAB_10ac993ec:
      (**(code **)(*(long *)(param_1 + -0x58) + 0x18))((long *)(param_1 + -0x58),&lStack_98);
      if (lStack_98 != 0) {
        puStack_90 = (undefined8 *)lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (0x23 < uStack_78) {
      uVar3 = uStack_78 / 0x24;
      if (uStack_78 % 0x24 == 0) {
        lStack_98 = 0;
        puStack_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_10a1d7f40(&lStack_98,uVar3);
        puVar2 = (undefined8 *)((long)puStack_90 + uVar3 * 0x24);
        do {
          *puStack_90 = 0;
          puStack_90[2] = 0x3ea8f5c33ea8f5c3;
          puStack_90[1] = 0x3ea8f5c33ea8f5c3;
          puStack_90[3] = 0x100000001;
          *(undefined4 *)(puStack_90 + 4) = 0;
          puStack_90 = (undefined8 *)((long)puStack_90 + 0x24);
        } while (puStack_90 != puVar2);
        puStack_90 = puVar2;
        if ((bStack_70 & 1) == 0) goto LAB_10ac994b4;
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10ac993ec;
      }
    }
    uStack_51 = 4;
    uStack_68 = 0x7379656b;
    uStack_64 = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    uStack_51 = 4;
    uStack_68 = 0x7379656b;
    uStack_64 = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
LAB_10ac994b4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac994b8);
  (*pcVar1)();
}



/* Entry: 10ac99530; end: 10ac9956f;  */

void FUN_10ac99530(long param_1,long *param_2)

{
  FUN_10ac99570();
                    /* WARNING: Could not recover jumptable at 0x00010ac9956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c6b360,*(long *)(param_1 + 8),
             *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  return;
}



/* Entry: 10ac99570; end: 10ac9980b;  */

void FUN_10ac99570(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar3 = PTR___ZSt7nothrow_1103469d8;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    lVar9 = *(long *)(param_1 + 0x98);
    lVar13 = *(long *)(param_1 + 0xa0);
    uVar10 = lVar13 - lVar9 >> 4;
    uVar7 = uVar10;
    if ((long)uVar10 < 1) {
      lVar5 = 0;
      uVar7 = 0;
    }
    else {
      do {
        lVar5 = uVar7 << 4;
        __ZnwmRKSt9nothrow_t(lVar5,puVar3);
        if (lVar5 != 0) goto LAB_10ac995fc;
        uVar8 = uVar7 >> 1;
        bVar1 = 1 < uVar7;
        uVar7 = uVar8;
      } while (bVar1);
      lVar5 = 0;
    }
LAB_10ac995fc:
    FUN_10acb9bdc(lVar9,lVar13,uVar10,lVar5,uVar7);
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98);
    if (lVar9 != 0) {
      uVar7 = lVar9 >> 4;
      if (0x71c71c71c71c71c < uVar7) {
        FUN_10a1d7f8c();
LAB_10ac997d4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac997d8);
        (*pcVar4)();
      }
      plVar6 = &lStack_78;
      FUN_10a1d7fa0();
      plVar11 = (long *)((long)plVar6 + uVar7 * 0x24);
      lVar9 = (long)plVar6 - ((long)plStack_70 - lStack_78);
      _memcpy(lVar9);
      bVar1 = lStack_78 != 0;
      lStack_78 = lVar9;
      plStack_70 = plVar6;
      plStack_68 = plVar11;
      if (bVar1) {
        __ZdlPv();
      }
    }
    plVar11 = *(long **)(param_1 + 0xa0);
    for (plVar6 = *(long **)(param_1 + 0x98); plVar6 != plVar11; plVar6 = plVar6 + 2) {
      lVar9 = *plVar6;
      if (plStack_70 < plStack_68) {
        lVar5 = *(long *)(lVar9 + 0x20);
        lVar13 = *(long *)(lVar9 + 0x18);
        lVar19 = *(long *)(lVar9 + 0x30);
        lVar17 = *(long *)(lVar9 + 0x28);
        *(undefined4 *)(plStack_70 + 4) = *(undefined4 *)(lVar9 + 0x38);
        plStack_70[1] = lVar5;
        *plStack_70 = lVar13;
        plStack_70[3] = lVar19;
        plStack_70[2] = lVar17;
        plVar14 = (long *)((long)plStack_70 + 0x24);
      }
      else {
        lVar13 = (long)plStack_70 - lStack_78;
        uVar7 = (lVar13 >> 2) * -0x71c71c71c71c71c7 + 1;
        if (0x71c71c71c71c71c < uVar7) {
          FUN_10a1d7f8c();
          goto LAB_10ac997d4;
        }
        lVar5 = (long)plStack_68 - lStack_78 >> 2;
        uVar10 = lVar5 * 0x1c71c71c71c71c72;
        if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
          uVar10 = uVar7;
        }
        if (0x38e38e38e38e38d < (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
          uVar10 = 0x71c71c71c71c71c;
        }
        plVar12 = &lStack_78;
        FUN_10a1d7fa0();
        puVar2 = (undefined8 *)((long)plVar12 + lVar13);
        plVar12 = (long *)((long)plVar12 + uVar10 * 0x24);
        uVar16 = *(undefined8 *)(lVar9 + 0x30);
        uVar15 = *(undefined8 *)(lVar9 + 0x28);
        uVar20 = *(undefined8 *)(lVar9 + 0x20);
        uVar18 = *(undefined8 *)(lVar9 + 0x18);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar9 + 0x38);
        puVar2[1] = uVar20;
        *puVar2 = uVar18;
        puVar2[3] = uVar16;
        puVar2[2] = uVar15;
        plVar14 = (long *)((long)puVar2 + 0x24);
        lVar9 = (long)puVar2 - ((long)plStack_70 - lStack_78);
        _memcpy(lVar9);
        bVar1 = lStack_78 != 0;
        lStack_78 = lVar9;
        plStack_68 = plVar12;
        if (bVar1) {
          plStack_70 = plVar14;
          __ZdlPv();
        }
      }
      plStack_70 = plVar14;
    }
    FUN_10a1c9c84(param_1,&lStack_78);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    if (lStack_78 != 0) {
      plStack_70 = (long *)lStack_78;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ac9980c; end: 10ac9984f;  */

void FUN_10ac9980c(long param_1,long *param_2)

{
  FUN_10ac99570(param_1 + -0x58);
                    /* WARNING: Could not recover jumptable at 0x00010ac9984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c6b360,*(long *)(param_1 + -0x50),
             *(long *)(param_1 + -0x48) - *(long *)(param_1 + -0x50));
  return;
}



/* Entry: 10ac99850; end: 10ac9986f;  */

ulong * FUN_10ac99850(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f654fc7;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
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
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f654fc7,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10ac99870; end: 10ac99f73;  */

void FUN_10ac99870(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long **pplVar2;
  long *plVar3;
  float *pfVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined4 uVar29;
  long lVar30;
  long *aplStack_c0 [4];
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  if (*param_2 == 0) {
    return;
  }
  if (NAN(*(float *)(*param_2 + 0x18))) {
    FUN_10a00946c(&UNK_10f6a0a9d);
LAB_10ac99f2c:
    FUN_10acb5804();
  }
  else {
    plVar13 = param_2;
    FUN_10ac99570();
    plVar8 = (long *)0x68;
    __Znwm();
    plVar24 = plVar8 + 1;
    *plVar24 = 0;
    plVar8[2] = 0;
    plVar28 = plVar8 + 3;
    *plVar28 = (long)&PTR_FUN_110c6c628;
    pfVar22 = (float *)(plVar8 + 6);
    plVar8[7] = 0;
    pfVar22[0] = 0.0;
    pfVar22[1] = 0.0;
    *plVar8 = (long)&PTR_FUN_110c42c18;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[8] = 0x3ea8f5c33ea8f5c3;
    plVar8[7] = 0x3ea8f5c33ea8f5c3;
    plVar8[9] = 0x100000001;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[10] = 0;
    aplStack_c0[0] = plVar28;
    aplStack_c0[1] = plVar8;
    lVar10 = *param_2;
    uVar29 = *(undefined4 *)(lVar10 + 0x38);
    lVar9 = *(long *)(lVar10 + 0x30);
    lVar26 = *(long *)(lVar10 + 0x28);
    lVar21 = *(long *)(lVar10 + 0x18);
    plVar8[7] = *(long *)(lVar10 + 0x20);
    *(long *)pfVar22 = lVar21;
    plVar8[9] = lVar9;
    plVar8[8] = lVar26;
    *(undefined4 *)(plVar8 + 10) = uVar29;
    lVar10 = *(long *)(param_1 + 0x80);
    lVar26 = *(long *)(param_1 + 0x88);
    if (lVar26 == 0) {
      plVar8[0xb] = lVar10;
      plVar8[0xc] = 0;
    }
    else {
      plVar18 = (long *)(lVar26 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = *plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar9 = plVar8[0xc];
      plVar8[0xb] = lVar10;
      plVar8[0xc] = lVar26;
      if (lVar9 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    puVar25 = (undefined8 *)(param_1 + 0x98);
    plVar3 = (long *)*puVar25;
    plVar23 = *(long **)(param_1 + 0xa0);
    uVar14 = (long)plVar23 - (long)plVar3 >> 4;
    plVar18 = plVar23;
    if ((long)plVar23 - (long)plVar3 != 0) {
      uVar16 = uVar14;
      plVar17 = plVar3;
      do {
        uVar15 = uVar16 >> 1;
        plVar18 = plVar17 + uVar15 * 2 + 2;
        uVar16 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
        if (*pfVar22 <= *(float *)(plVar17[uVar15 * 2] + 0x18)) {
          plVar18 = plVar17;
          uVar16 = uVar15;
        }
        plVar17 = plVar18;
      } while (uVar16 != 0);
    }
    if (plVar23 < *(long **)(param_1 + 0xa8)) {
      if ((long)plVar18 - (long)plVar23 == 0) {
        *plVar23 = (long)plVar28;
        plVar23[1] = (long)plVar8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = *plVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(long **)(param_1 + 0xa0) = plVar23 + 2;
      }
      else {
        plVar8 = plVar23 + -2;
        plVar13 = plVar23;
        if (plVar8 < plVar23) {
          plVar23[1] = plVar23[-1];
          *plVar23 = *plVar8;
          *plVar8 = 0;
          plVar23[-1] = 0;
          plVar13 = plVar23 + 2;
        }
        *(long **)(param_1 + 0xa0) = plVar13;
        if (plVar23 != plVar18 + 2) {
          lVar10 = ((long)plVar18 - (long)plVar23) + 0x10;
          plVar23 = plVar23 + -4;
          do {
            func_0x00010acb57a0(plVar8,plVar23);
            plVar8 = plVar8 + -2;
            plVar23 = plVar23 + -2;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0);
          plVar13 = *(long **)(param_1 + 0xa0);
        }
        if (plVar13 < plVar18) goto LAB_10ac99f38;
        lVar10 = 0x10;
        if (aplStack_c0 < plVar18 || plVar13 <= aplStack_c0) {
          lVar10 = 0;
        }
        lVar10 = *(long *)((long)aplStack_c0 + lVar10);
        pplVar2 = aplStack_c0 + 3;
        if (aplStack_c0 < plVar18 || plVar13 <= aplStack_c0) {
          pplVar2 = aplStack_c0 + 1;
        }
        plVar13 = *pplVar2;
        if (plVar13 != (long *)0x0) {
          plVar8 = plVar13 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = *plVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar8 = (long *)plVar18[1];
        *plVar18 = lVar10;
        plVar18[1] = (long)plVar13;
        if (plVar8 != (long *)0x0) {
          plVar13 = plVar8 + 1;
          do {
            lVar10 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
    }
    else {
      uVar14 = uVar14 + 1;
      if (uVar14 >> 0x3c != 0) goto LAB_10ac99f2c;
      uVar15 = (long)*(long **)(param_1 + 0xa8) - (long)plVar3;
      uVar16 = (long)uVar15 >> 3;
      if (uVar16 <= uVar14) {
        uVar16 = uVar14;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar16 = 0xfffffffffffffff;
      }
      puStack_90 = puVar25;
      if (uVar16 == 0) {
        uVar16 = 0;
        uVar14 = 0;
      }
      else {
        FUN_10acb5818();
        uVar14 = (long)plVar13 << 4;
      }
      uVar15 = (long)plVar18 - (long)plVar3;
      puVar1 = (undefined8 *)(uVar16 + uVar15);
      lVar10 = uVar16 + uVar14;
      puVar27 = puVar1;
      aplStack_c0[2] = (long *)uVar16;
      aplStack_c0[3] = puVar1;
      puStack_a0 = puVar1;
      lStack_98 = lVar10;
      if (uVar15 == uVar14) {
        if ((long)uVar15 < 1) {
          uVar15 = (long)uVar15 >> 3;
          if (plVar18 == plVar3) {
            uVar15 = 1;
          }
          uVar14 = uVar15;
          puStack_68 = puVar25;
          FUN_10acb5818();
          lStack_98 = uVar14 + (long)plVar13 * 0x10;
          puVar27 = (undefined8 *)(uVar14 + (uVar15 >> 2) * 0x10);
          uStack_88 = uVar16;
          puStack_80 = puVar1;
          puStack_78 = puVar1;
          lStack_70 = lVar10;
          func_0x00010acb584c(&uStack_88);
        }
        else {
          puVar27 = (undefined8 *)((long)puVar1 - ((uVar15 >> 1) + 8 & 0xfffffffffffffff0));
        }
      }
      *puVar27 = plVar28;
      puVar27[1] = plVar8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      _memcpy(puVar27 + 2,plVar18,*(long *)(param_1 + 0xa0) - (long)plVar18);
      lVar10 = *(long *)(param_1 + 0xa0);
      *(long **)(param_1 + 0xa0) = plVar18;
      lVar26 = (long)puVar27 - ((long)plVar18 - *(long *)(param_1 + 0x98));
      _memcpy(lVar26);
      aplStack_c0[2] = *(long **)(param_1 + 0x98);
      *(long *)(param_1 + 0x98) = lVar26;
      *(long *)(param_1 + 0xa0) = (long)(puVar27 + 2) + (lVar10 - (long)plVar18);
      uVar11 = *(undefined8 *)(param_1 + 0xa8);
      *(long *)(param_1 + 0xa8) = lStack_98;
      aplStack_c0[3] = aplStack_c0[2];
      puStack_a0 = aplStack_c0[2];
      lStack_98 = uVar11;
      func_0x00010acb584c(aplStack_c0 + 2);
    }
    plVar13 = aplStack_c0[0];
    pfVar22 = (float *)(aplStack_c0[0] + 3);
    plVar8 = (long *)(param_1 + 8);
    pfVar12 = (float *)*plVar8;
    pfVar4 = *(float **)(param_1 + 0x10);
    lVar10 = (long)pfVar4 - (long)pfVar12 >> 2;
    pfVar20 = pfVar4;
    if ((long)pfVar4 - (long)pfVar12 != 0) {
      uVar14 = lVar10 * -0x71c71c71c71c71c7;
      pfVar19 = pfVar12;
      do {
        uVar16 = uVar14 >> 1;
        pfVar20 = pfVar19 + uVar16 * 9 + 9;
        uVar14 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
        if (*pfVar22 <= pfVar19[uVar16 * 9]) {
          pfVar20 = pfVar19;
          uVar14 = uVar16;
        }
        pfVar19 = pfVar20;
      } while (uVar14 != 0);
    }
    if (pfVar4 < *(float **)(param_1 + 0x18)) {
      if (pfVar20 == pfVar4) {
        lVar26 = aplStack_c0[0][4];
        lVar10 = *(long *)pfVar22;
        lVar21 = aplStack_c0[0][6];
        lVar9 = aplStack_c0[0][5];
        pfVar4[8] = *(float *)(aplStack_c0[0] + 7);
        *(long *)(pfVar4 + 2) = lVar26;
        *(long *)pfVar4 = lVar10;
        *(long *)(pfVar4 + 6) = lVar21;
        *(long *)(pfVar4 + 4) = lVar9;
        *(float **)(param_1 + 0x10) = pfVar4 + 9;
      }
      else {
        pfVar12 = pfVar4;
        if (pfVar4 + -9 < pfVar4) {
          pfVar4[8] = pfVar4[-1];
          *(long *)(pfVar4 + 2) = *(long *)(pfVar4 + -7);
          *(long *)pfVar4 = *(long *)(pfVar4 + -9);
          *(long *)(pfVar4 + 6) = *(long *)(pfVar4 + -3);
          *(long *)(pfVar4 + 4) = *(long *)(pfVar4 + -5);
          pfVar12 = pfVar4 + 9;
        }
        *(float **)(param_1 + 0x10) = pfVar12;
        if (pfVar4 != pfVar20 + 9) {
          _memmove(pfVar20 + 9,pfVar20);
          pfVar12 = *(float **)(param_1 + 0x10);
        }
        if (pfVar12 < pfVar20) goto LAB_10ac99f38;
        lVar10 = 0x24;
        if (pfVar12 <= pfVar22 || pfVar22 < pfVar20) {
          lVar10 = 0;
        }
        plVar13 = (long *)((long)pfVar22 + lVar10);
        lVar26 = plVar13[1];
        lVar10 = *plVar13;
        lVar21 = plVar13[3];
        lVar9 = plVar13[2];
        pfVar20[8] = *(float *)(plVar13 + 4);
        *(long *)(pfVar20 + 2) = lVar26;
        *(long *)pfVar20 = lVar10;
        *(long *)(pfVar20 + 6) = lVar21;
        *(long *)(pfVar20 + 4) = lVar9;
      }
    }
    else {
      uVar14 = lVar10 * -0x71c71c71c71c71c7 + 1;
      if (0x71c71c71c71c71c < uVar14) {
        FUN_10a1d7f8c();
        goto LAB_10ac99f38;
      }
      lVar10 = (long)*(float **)(param_1 + 0x18) - (long)pfVar12 >> 2;
      uVar16 = lVar10 * 0x1c71c71c71c71c72;
      if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
        uVar16 = uVar14;
      }
      if (0x38e38e38e38e38d < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
        uVar16 = 0x71c71c71c71c71c;
      }
      if (uVar16 == 0) {
        plVar24 = (long *)0x0;
        lVar10 = 0;
      }
      else {
        plVar24 = plVar8;
        FUN_10a1d7fa0();
        lVar10 = uVar16 * 0x24;
      }
      lVar9 = (long)pfVar20 - (long)pfVar12;
      plVar28 = (long *)((long)plVar24 + lVar9);
      lVar26 = (long)plVar24 + lVar10;
      if (lVar9 == lVar10) {
        if (lVar9 < 1) {
          uVar14 = 1;
          if (pfVar20 != pfVar12) {
            uVar14 = ((ulong)-lVar9 >> 2) * -0x1c71c71c71c71c72;
          }
          uVar16 = uVar14;
          FUN_10a1d7fa0();
          plVar28 = (long *)((long)plVar8 + (uVar14 >> 2) * 0x24);
          lVar26 = (long)plVar8 + uVar16 * 0x24;
          if (plVar24 != (long *)0x0) {
            __ZdlPv(plVar24);
          }
        }
        else {
          lVar10 = ((long)plVar28 - (long)plVar24 >> 2) * -0x71c71c71c71c71c7 + 1;
          plVar28 = (long *)((long)plVar28 + ((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1) * -0x24);
        }
      }
      lVar9 = plVar13[4];
      lVar10 = *(long *)pfVar22;
      lVar30 = plVar13[6];
      lVar21 = plVar13[5];
      *(int *)(plVar28 + 4) = (int)plVar13[7];
      plVar28[1] = lVar9;
      *plVar28 = lVar10;
      plVar28[3] = lVar30;
      plVar28[2] = lVar21;
      _memcpy((long)plVar28 + 0x24,pfVar20,*(long *)(param_1 + 0x10) - (long)pfVar20);
      lVar10 = *(long *)(param_1 + 0x10);
      *(float **)(param_1 + 0x10) = pfVar20;
      lVar21 = (long)plVar28 - ((long)pfVar20 - *(long *)(param_1 + 8));
      _memcpy(lVar21);
      lVar9 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar21;
      *(long *)(param_1 + 0x10) = (long)plVar28 + 0x24 + (lVar10 - (long)pfVar20);
      *(long *)(param_1 + 0x18) = lVar26;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    plVar13 = aplStack_c0[1];
    if (*(undefined4 **)(param_1 + 8) != *(undefined4 **)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-9];
      uVar29 = **(undefined4 **)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar29;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
      if (aplStack_c0[1] != (long *)0x0) {
        plVar8 = aplStack_c0[1] + 1;
        do {
          lVar10 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*aplStack_c0[1] + 0x10))(aplStack_c0[1]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      return;
    }
  }
LAB_10ac99f38:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac99f3c);
  (*pcVar7)();
}



/* Entry: 10ac99f74; end: 10ac9a0b3;  */

void FUN_10ac99f74(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_10ac99570();
  lVar4 = *(long *)(param_2 + 0x98);
  if (lVar4 == *(long *)(param_2 + 0xa0)) {
    return;
  }
  if (1.1920929e-07 <= ABS((float)param_1 - *(float *)(param_2 + 0x28))) {
    uVar6 = *(long *)(param_2 + 0xa0) - lVar4;
    if (uVar6 < 0x11) {
      uVar3 = 0;
      goto LAB_10ac99ff0;
    }
    lVar4 = param_2;
    FUN_10ac9a0b4(param_1);
    uVar3 = (uint)lVar4;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x24);
  }
  if ((int)uVar3 < 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x98);
  uVar6 = *(long *)(param_2 + 0xa0) - lVar4;
LAB_10ac99ff0:
  if ((int)((long)uVar6 >> 4) <= (int)uVar3) {
    return;
  }
  if ((ulong)uVar3 < (ulong)((long)uVar6 >> 4)) {
    uVar6 = (ulong)uVar3;
    lVar5 = *(long *)(lVar4 + uVar6 * 0x10);
    lVar4 = *(long *)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar5 = *(long *)(param_2 + 0xa0);
    lVar4 = *(long *)(param_2 + 0x98) + uVar6 * 0x10;
    if (lVar5 != lVar4) {
      lVar7 = lVar4;
      if (lVar4 + 0x10 != lVar5) {
        do {
          lVar4 = lVar7 + 0x10;
          func_0x00010acb57a0(lVar7,lVar4);
          lVar1 = lVar7 + 0x20;
          lVar7 = lVar4;
        } while (lVar1 != lVar5);
        lVar5 = *(long *)(param_2 + 0xa0);
      }
      while (lVar5 != lVar4) {
        lVar5 = lVar5 + -0x10;
        func_0x00010aa006d4(lVar5);
      }
      *(long *)(param_2 + 0xa0) = lVar4;
      FUN_10ac9a140(param_2,uVar6);
      *(undefined1 *)(param_2 + 0xb0) = 0;
      *(undefined1 *)(param_2 + 0x90) = 1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac9a0b4);
  (*pcVar2)();
}



/* Entry: 10ac9a0b4; end: 10ac9a13f;  */

int FUN_10ac9a0b4(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  lVar4 = param_2;
  FUN_10a1c9c18();
  lVar1 = *(long *)(param_2 + 8);
  uVar6 = (*(long *)(param_2 + 0x10) - lVar1 >> 2) * -0x71c71c71c71c71c7;
  iVar3 = (int)lVar4;
  if (((ulong)(long)iVar3 <= uVar6 && uVar6 - (long)iVar3 != 0) &&
     ((ulong)(lVar4 >> 0x20) <= uVar6 && uVar6 - (lVar4 >> 0x20) != 0)) {
    iVar5 = (int)((ulong)lVar4 >> 0x20);
    if (ABS(*(float *)(lVar1 + (long)iVar5 * 0x24) - param_1) <=
        ABS(*(float *)(lVar1 + (long)iVar3 * 0x24) - param_1)) {
      iVar3 = iVar5;
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac9a140);
  (*pcVar2)();
}



/* Entry: 10ac9a140; end: 10ac9a287;  */

void FUN_10ac9a140(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  puVar8 = *(undefined4 **)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar10 = ((long)puVar3 - (long)puVar8 >> 2) * -0x71c71c71c71c71c7;
  if (param_2 <= uVar10 && uVar10 - param_2 != 0) {
    puVar11 = puVar8 + param_2 * 9;
    if (puVar3 != puVar11) {
      lVar9 = (long)puVar3 - (long)(puVar11 + 9);
      if (lVar9 != 0) {
        _memmove(puVar11,puVar11 + 9,lVar9);
        puVar8 = *(undefined4 **)(param_1 + 8);
      }
      puVar11 = (undefined4 *)((long)puVar11 + lVar9);
      *(undefined4 **)(param_1 + 0x10) = puVar11;
      if (puVar8 == puVar11) {
        uVar12 = 0;
        uVar14 = 0x7f7fffff;
      }
      else {
        uVar12 = puVar11[-9];
        uVar14 = *puVar8;
      }
      *(undefined4 *)(param_1 + 0x20) = uVar12;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar14;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9a1f4);
    (*pcVar6)();
  }
  puVar7 = &UNK_10f6a1bdd;
  FUN_10a00946c();
  FUN_10ac99570();
  if (-1 < (int)param_2) {
    uVar10 = *(long *)(puVar7 + 0xa0) - *(long *)(puVar7 + 0x98) >> 4;
    if ((int)param_2 < (int)uVar10) {
      if (uVar10 <= (param_2 & 0xffffffff)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9a288);
        (*pcVar6)();
      }
      puVar2 = (undefined8 *)(*(long *)(puVar7 + 0x98) + (param_2 & 0xffffffff) * 0x10);
      lVar9 = puVar2[1];
      uVar13 = *puVar2;
      extraout_x8[1] = puVar2[1];
      *extraout_x8 = uVar13;
      if (lVar9 == 0) {
        return;
      }
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      return;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10ac9a288; end: 10ac9a2bb;  */

mach_header * FUN_10ac9a288(ulong param_1,mach_header *param_2,mach_header *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  mach_header *pmVar6;
  undefined *puVar7;
  dword dVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  mach_header mStack_a8;
  code *pcStack_88;
  mach_header mStack_80;
  long lStack_48;
  ulong uVar14;
  
  FUN_10ac99570();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_1;
  if (*(float **)&param_2->cpusubtype == *(float **)&param_2->ncmds) {
LAB_10a1c9bb0:
    fVar19 = (float)uVar9;
    pmVar6 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_2;
    }
  }
  else {
    fVar19 = **(float **)&param_2->cpusubtype;
    uVar9 = (ulong)(uint)fVar19;
    fVar21 = (float)param_1;
    if ((fVar21 <= fVar19) ||
       (fVar19 = (*(float **)&param_2->ncmds)[-9], uVar9 = (ulong)(uint)fVar19, fVar19 <= fVar21))
    goto LAB_10a1c9bb0;
    pmVar6 = param_2;
    FUN_10a1c9c18(param_1);
    lVar11 = *(long *)&param_2->cpusubtype;
    uVar9 = (*(long *)&param_2->ncmds - lVar11 >> 2) * -0x71c71c71c71c71c7;
    iVar5 = (int)pmVar6;
    if ((uVar9 < (ulong)(long)iVar5 || uVar9 - (long)iVar5 == 0) ||
       (uVar9 < (ulong)((long)pmVar6 >> 0x20) || uVar9 - ((long)pmVar6 >> 0x20) == 0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c9be8);
      (*pcVar3)();
    }
    puVar10 = (undefined8 *)(lVar11 + (long)iVar5 * 0x24);
    uVar24 = *puVar10;
    fVar23 = (float)uVar24;
    uVar9 = (ulong)(uint)ABS(fVar23 - fVar21);
    fVar19 = 1e-05;
    param_2 = pmVar6;
    if (ABS(fVar23 - fVar21) < 1e-05) goto LAB_10a1c9bb0;
    pfVar18 = (float *)(lVar11 + (long)(int)((ulong)pmVar6 >> 0x20) * 0x24);
    fVar26 = pfVar18[1];
    iVar5 = *(int *)((long)puVar10 + 0x1c);
    if (iVar5 - 1U < 2 || iVar5 == 4) {
      iVar5 = *(int *)(puVar10 + 4);
      if (iVar5 < 3) {
        if (iVar5 == 0) goto LAB_10a1c99fc;
        if (iVar5 == 1) {
          mStack_a8._8_8_ = puVar10[2];
          mStack_a8.ncmds = (dword)pfVar18[2];
          mStack_a8.sizeofcmds = (dword)pfVar18[3];
          mStack_a8.flags = (dword)*pfVar18;
        }
        else {
          if (iVar5 != 2) goto LAB_10a1c9bb0;
          fVar21 = *(float *)(puVar10 + 2);
          fVar22 = *(float *)((long)puVar10 + 0x14);
          _atanf();
          ___sincosf_stret();
          fVar25 = fVar19 * fVar21;
          fVar28 = pfVar18[2];
          fVar27 = pfVar18[3];
          _atanf();
          ___sincosf_stret();
          mStack_a8.cpusubtype = (dword)(fVar23 + fVar25);
          mStack_a8.filetype = (dword)(SUB84(uVar24,4) + fVar22 * fVar21);
          mStack_a8.flags = (dword)*pfVar18;
          mStack_a8.ncmds = (dword)((float)mStack_a8.flags - fVar28 * fVar19);
          mStack_a8.sizeofcmds = (dword)(fVar26 - fVar28 * fVar27);
        }
        mStack_a8.reserved = (dword)fVar26;
        param_3 = &mStack_a8;
        mStack_a8._0_8_ = uVar24;
        FUN_10a1c9288(&pcStack_88);
        (*pcStack_88)(&pcStack_88);
      }
      else {
        if (3 < iVar5 - 3U) goto LAB_10a1c9bb0;
LAB_10a1c99fc:
        fVar27 = *pfVar18;
        fVar26 = *(float *)(puVar10 + 2);
        fVar22 = pfVar18[2];
        fVar19 = 1.0;
        if (fVar26 <= 1.0) {
          fVar19 = fVar26;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar26) {
          fVar25 = fVar19;
        }
        fVar19 = 1.0;
        if (fVar22 <= 1.0) {
          fVar19 = fVar22;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar22) {
          fVar26 = fVar19;
        }
        fVar19 = ABS(fVar26 - pfVar18[3]);
        bVar4 = false;
        if ((ABS(fVar25 - *(float *)((long)puVar10 + 0x14)) < 1.1920929e-07) &&
           (bVar4 = false, !NAN(fVar19))) {
          bVar4 = fVar19 < 1.1920929e-07;
        }
        if (bVar4) {
          pcStack_88 = FUN_10a1d7960;
          mStack_80._0_8_ = &PTR_DAT_110bade18;
        }
        else {
          mStack_a8.magic = 0;
          mStack_a8.cputype = 0;
          mStack_a8.filetype = (dword)*(float *)((long)puVar10 + 0x14);
          mStack_a8.cpusubtype = (dword)fVar25;
          mStack_a8._24_8_ = NEON_fmov(0x3f800000,4);
          param_3 = &mStack_a8;
          mStack_a8.ncmds = (dword)fVar26;
          mStack_a8.sizeofcmds = (dword)pfVar18[3];
          FUN_10a1c9288(&pcStack_88);
        }
        param_1 = (ulong)(uint)((fVar21 - fVar23) / (fVar27 - fVar23));
        (*pcStack_88)(&pcStack_88);
      }
      param_2 = &mStack_80;
      (**(code **)mStack_80._0_8_)();
      uVar9 = param_1;
      goto LAB_10a1c9bb0;
    }
    if (iVar5 != 3) goto LAB_10a1c9bb0;
    fVar19 = *pfVar18;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pmVar6;
    }
  }
  ___stack_chk_fail();
  (**(code **)mStack_80._0_8_)(&mStack_80);
  __Unwind_Resume();
  if (fVar19 < 0.0) {
    FUN_10a00946c(&UNK_10f643d6d);
LAB_10a1c9c78:
    puVar7 = &UNK_10f643d8a;
    FUN_10a00946c();
    pmVar6 = (mach_header *)(puVar7 + 8);
    if (pmVar6 != param_3) {
      FUN_10a1d7dd0(pmVar6,*(long *)param_3,*(long *)&param_3->cpusubtype,
                    (*(long *)&param_3->cpusubtype - *(long *)param_3 >> 2) * -0x71c71c71c71c71c7);
    }
    if (*(undefined4 **)(puVar7 + 8) == *(undefined4 **)(puVar7 + 0x10)) {
      *(undefined4 *)(puVar7 + 0x20) = 0;
      uVar20 = 0;
    }
    else {
      *(undefined4 *)(puVar7 + 0x20) = (*(undefined4 **)(puVar7 + 0x10))[-9];
      uVar20 = **(undefined4 **)(puVar7 + 8);
    }
    *(undefined4 *)(puVar7 + 0x24) = 0;
    *(undefined4 *)(puVar7 + 0x28) = uVar20;
    *(undefined4 *)(puVar7 + 0x50) = 0;
    return pmVar6;
  }
  lVar11 = *(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype;
  if ((ulong)((lVar11 >> 2) * -0x71c71c71c71c71c7) < 2) goto LAB_10a1c9c78;
  if (lVar11 == 0x48) {
    return &MACH_HEADER;
  }
  dVar8 = pmVar6[2].ncmds;
  if (dVar8 == 0) {
    fVar21 = (float)(ulong)((*(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype >> 2) *
                           -0x71c71c71c71c71c7);
    _logf();
    dVar8 = (dword)fVar21;
    if ((int)dVar8 < 2) {
      dVar8 = 1;
    }
    pmVar6[2].ncmds = dVar8;
  }
  uVar13 = pmVar6[1].cputype;
  uVar9 = (ulong)uVar13;
  if ((float)pmVar6[1].cpusubtype <= fVar19) {
    uVar9 = (long)(int)uVar13 + 1;
    pfVar18 = *(float **)&pmVar6->cpusubtype;
    lVar11 = *(long *)&pmVar6->ncmds;
    uVar12 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
    uVar2 = (int)uVar12 - 1;
    uVar16 = (ulong)uVar2;
    uVar13 = (int)uVar9 + dVar8;
    if ((int)uVar2 <= (int)uVar13) {
      uVar13 = uVar2;
    }
    uVar14 = uVar9;
    if ((int)uVar9 < (int)uVar13) {
      pfVar15 = pfVar18 + uVar9 * 9;
      lVar17 = 0;
      if (uVar9 <= uVar12) {
        lVar17 = uVar12 - uVar9;
      }
      do {
        if (lVar17 == 0) goto LAB_10a1d7dcc;
        uVar14 = uVar9;
        if (fVar19 < *pfVar15) break;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        uVar14 = (ulong)uVar13;
        pfVar15 = pfVar15 + 9;
        lVar17 = lVar17 + -1;
      } while (uVar13 != uVar1);
    }
    uVar13 = (uint)uVar14;
    if (uVar13 != uVar2) {
      if (uVar12 < (ulong)(long)(int)uVar13 || uVar12 - (long)(int)uVar13 == 0) goto LAB_10a1d7dcc;
      uVar16 = uVar14;
      if (pfVar18[(long)(int)uVar13 * 9] <= fVar19) goto LAB_10a1d7d20;
    }
  }
  else {
    uVar2 = uVar13 - dVar8 & ((int)(uVar13 - dVar8) >> 0x1f ^ 0xffffffffU);
    uVar16 = uVar9;
    if ((int)uVar2 < (int)uVar13) {
      uVar12 = (*(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype >> 2) * -0x71c71c71c71c71c7;
      pfVar18 = (float *)(*(long *)&pmVar6->cpusubtype + (ulong)uVar13 * 0x24);
      do {
        if (uVar12 < uVar9 || uVar12 - uVar9 == 0) goto LAB_10a1d7dcc;
        uVar16 = uVar9;
      } while ((fVar19 <= *pfVar18) &&
              (uVar9 = uVar9 - 1, uVar16 = (ulong)uVar2, pfVar18 = pfVar18 + -9,
              (long)(ulong)uVar2 < (long)uVar9));
    }
    iVar5 = (int)uVar16;
    if (iVar5 == 0) {
      pfVar18 = *(float **)&pmVar6->cpusubtype;
      lVar11._0_4_ = pmVar6->ncmds;
      lVar11._4_4_ = pmVar6->sizeofcmds;
    }
    else {
      pfVar18 = *(float **)&pmVar6->cpusubtype;
      lVar11 = *(long *)&pmVar6->ncmds;
      uVar9 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
      if (uVar9 < (ulong)(long)iVar5 || uVar9 - (long)iVar5 == 0) goto LAB_10a1d7dcc;
      if (fVar19 <= pfVar18[(long)iVar5 * 9]) {
LAB_10a1d7d20:
        pmVar6[1].filetype = (dword)fVar19;
        lVar17 = lVar11 + (-0x24 - (long)pfVar18);
        pfVar15 = pfVar18;
        if (lVar17 != 0) {
          uVar9 = (lVar17 >> 2) * -0x71c71c71c71c71c7;
          do {
            uVar12 = uVar9 >> 1;
            uVar16 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
            uVar9 = uVar12;
            if (pfVar15[uVar12 * 9] <= fVar19) {
              uVar9 = uVar16;
              pfVar15 = pfVar15 + uVar12 * 9 + 9;
            }
          } while (uVar9 != 0);
        }
        uVar16 = (ulong)(uint)((int)((ulong)((long)pfVar15 - (long)pfVar18) >> 2) * 0x38e38e39);
        goto LAB_10a1d7d8c;
      }
    }
    uVar16 = (ulong)(iVar5 + 1);
  }
LAB_10a1d7d8c:
  uVar13 = (int)uVar16 - 1;
  uVar9 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)(int)uVar13 <= uVar9 && uVar9 - (long)(int)uVar13 != 0) {
    fVar19 = pfVar18[(long)(int)uVar13 * 9];
    pmVar6[1].cputype = uVar13;
    pmVar6[1].cpusubtype = (dword)fVar19;
    return (mach_header *)((ulong)uVar13 | uVar16 << 0x20);
  }
LAB_10a1d7dcc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1d7dd0);
  (*pcVar3)();
}



/* Entry: 10ac9a2bc; end: 10ac9a5bb;  */

undefined1  [16] FUN_10ac9a2bc(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  pfVar9 = (float *)*param_2;
  do {
    if (pfVar9 == (float *)param_2[1]) {
      FUN_10a1c9c84(param_1);
      plVar18 = (long *)(param_1 + 0x98);
      plVar17 = (long *)*plVar18;
      plVar14 = *(long **)(param_1 + 0xa0);
      if (plVar17 != plVar14) {
        do {
          lVar10 = *plVar17;
          lVar7 = *(long *)(lVar10 + 0x48);
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          if (lVar7 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar17 = plVar17 + 2;
        } while (plVar17 != plVar14);
        plVar17 = *(long **)(param_1 + 0x98);
        plVar14 = *(long **)(param_1 + 0xa0);
      }
      plVar11 = plVar17;
      if (plVar14 != plVar17) {
        do {
          plVar14 = plVar14 + -2;
          func_0x00010aa006d4(plVar14);
        } while (plVar14 != plVar17);
        plVar11 = (long *)*plVar18;
      }
      *(long **)(param_1 + 0xa0) = plVar17;
      puVar8 = (undefined8 *)
               ((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) * -0x71c71c71c71c71c7);
      puVar16 = (undefined8 *)(*(long *)(param_1 + 0xa8) - (long)plVar11 >> 4);
      if (puVar16 <= puVar8 && (long)puVar8 - (long)puVar16 != 0) {
        if ((ulong)puVar8 >> 0x3c != 0) {
          FUN_10acb5804();
          func_0x00010aa006d4(&puStack_98);
          if (plVar14 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
          __Unwind_Resume(puVar8);
          auVar30._8_8_ = 0x11;
          auVar30._0_8_ = &UNK_10f6a19bb;
          return auVar30;
        }
        plStack_68 = plVar18;
        FUN_10acb5818();
        lVar7 = (long)puVar8 + ((long)plVar17 - (long)plVar11);
        lVar10 = (long)param_2 * 2;
        param_2 = *(long **)(param_1 + 0x98);
        lVar15 = lVar7 - (*(long *)(param_1 + 0xa0) - (long)param_2);
        _memcpy(lVar15);
        uStack_88 = *(undefined8 *)(param_1 + 0x98);
        *(long *)(param_1 + 0x98) = lVar15;
        *(long *)(param_1 + 0xa0) = lVar7;
        uStack_70 = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 **)(param_1 + 0xa8) = puVar8 + lVar10;
        puVar8 = &uStack_88;
        uStack_80 = uStack_88;
        uStack_78 = uStack_88;
        func_0x00010acb584c(puVar8);
      }
      puVar16 = *(undefined8 **)(param_1 + 0x88);
      uVar25 = *(undefined8 *)(param_1 + 0x88);
      uVar23 = *(undefined8 *)(param_1 + 0x80);
      if (puVar16 != (undefined8 *)0x0) {
        plVar17 = puVar16 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar19 = *(undefined8 **)(param_1 + 8);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if (puVar19 != puVar3) {
        plVar17 = puVar16 + 2;
        do {
          puVar8 = (undefined8 *)0x68;
          __Znwm();
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = &PTR_FUN_110c42c18;
          puVar20 = puVar8 + 3;
          *puVar20 = &PTR_FUN_110c6c628;
          puVar8[10] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          uVar26 = puVar19[1];
          uVar24 = *puVar19;
          uVar28 = puVar19[3];
          uVar27 = puVar19[2];
          *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(puVar19 + 4);
          puVar8[7] = uVar26;
          puVar8[6] = uVar24;
          puVar8[9] = uVar28;
          puVar8[8] = uVar27;
          if (puVar16 != (undefined8 *)0x0) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = *plVar17 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar8[0xc] = uVar25;
          puVar8[0xb] = uVar23;
          puVar21 = *(undefined8 **)(param_1 + 0xa0);
          puStack_98 = puVar20;
          puStack_90 = puVar8;
          if (puVar21 < *(undefined8 **)(param_1 + 0xa8)) {
            *puVar21 = puVar20;
            puVar21[1] = puVar8;
            puVar21 = puVar21 + 2;
          }
          else {
            lVar7 = (long)puVar21 - *plVar18;
            uVar1 = (lVar7 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) goto LAB_10ac9a584;
            uVar12 = (long)*(undefined8 **)(param_1 + 0xa8) - *plVar18;
            uVar13 = (long)uVar12 >> 3;
            if (uVar13 <= uVar1) {
              uVar13 = uVar1;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar13 = 0xfffffffffffffff;
            }
            plStack_68 = plVar18;
            FUN_10acb5818();
            puVar2 = (undefined8 *)(uVar13 + lVar7);
            lVar7 = (long)param_2 * 0x10;
            *puVar2 = puVar20;
            puVar2[1] = puVar8;
            puVar21 = puVar2 + 2;
            param_2 = *(long **)(param_1 + 0x98);
            lVar10 = (long)puVar2 - (*(long *)(param_1 + 0xa0) - (long)param_2);
            _memcpy(lVar10);
            uStack_88 = *(undefined8 *)(param_1 + 0x98);
            *(long *)(param_1 + 0x98) = lVar10;
            *(undefined8 **)(param_1 + 0xa0) = puVar21;
            uStack_70 = *(undefined8 *)(param_1 + 0xa8);
            *(ulong *)(param_1 + 0xa8) = uVar13 + lVar7;
            puVar8 = &uStack_88;
            uStack_80 = uStack_88;
            uStack_78 = uStack_88;
            func_0x00010acb584c(puVar8);
          }
          *(undefined8 **)(param_1 + 0xa0) = puVar21;
          puVar19 = (undefined8 *)((long)puVar19 + 0x24);
        } while (puVar19 != puVar3);
      }
      if (puVar16 != (undefined8 *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar16);
        puVar8 = puVar16;
      }
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
      auVar29._8_8_ = param_2;
      auVar29._0_8_ = puVar8;
      return auVar29;
    }
    fVar22 = *pfVar9;
    pfVar9 = pfVar9 + 9;
  } while (!NAN(fVar22));
  FUN_10a00946c(&UNK_10f6a0ace);
LAB_10ac9a584:
  FUN_10acb5804();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9a58c);
  (*pcVar6)();
}



/* Entry: 10ac9a5bc; end: 10ac9a647;  */

undefined1  [16] FUN_10ac9a5bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6a19bb;
  return auVar1;
}



/* Entry: 10ac9a648; end: 10ac9a9d7;  */

void FUN_10ac9a648(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a19bb,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c670;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
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
  uStack_58 = 0xea;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6c670;
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
    FUN_10a052828(param_1,"value",FUN_10acba588,FUN_10acba644);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0b02,FUN_10acba7a4,FUN_10acba85c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0b10,FUN_10acba928,FUN_10acba9e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0b1f,FUN_10acbaaac,FUN_10acbab68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0b30,FUN_10acbac54,FUN_10acbad10);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0b40,FUN_10acbadd8,FUN_10acbae94);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3909e3,FUN_10acbaf80,FUN_10acbb03c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a19bb,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9a9bc);
  (*pcVar6)();
}



/* Entry: 10ac9a9d8; end: 10ac9aa53;  */

void FUN_10ac9a9d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0xb0) = 1;
      *(undefined1 *)(lVar5 + 0x90) = 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10ac9aa54; end: 10ac9ac9f;  */

void FUN_10ac9aa54(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "CameraDistortionType";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "NONE";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "KB5";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "KB8";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "KB8Tan";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "LUT";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Modified_Brown_Conrady";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "GridInverse";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000014f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac9aca0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac9aca0; end: 10ac9ad47;  */

undefined8 * FUN_10ac9aca0(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac9ad48);
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



/* Entry: 10ac9ad48; end: 10ac9ae17;  */

undefined1  [16] FUN_10ac9ad48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f6a19cd;
  return auVar1;
}



/* Entry: 10ac9ae18; end: 10ac9b107;  */

void FUN_10ac9ae18(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a19cd,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c420;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
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
  uStack_58 = 0x12400000162;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6c420;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c6c3d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9b0e8;
    FUN_10a054dac(param_1,&UNK_10f6a0bb0,FUN_10acbb14c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9b0e8;
    FUN_10a054dac(param_1,&UNK_10f674f25,FUN_10acbb6c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9b0e8;
    FUN_10a054dac(param_1,&UNK_10f674f2e,FUN_10acbb818,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9b0e8;
    FUN_10a054dac(param_1,&UNK_10f674f40,FUN_10acbc068,2,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a19cd,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac9b0e8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9b0ec);
  (*pcVar6)();
}



/* Entry: 10ac9b108; end: 10ac9b247;  */

undefined8 * FUN_10ac9b108(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_110c6c330;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110c6c3a0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = FUN_10a4ba630;
  param_1[0x11] = &PTR_DAT_110950c70;
  param_1[0x18] = 0x10a4ba640;
  param_1[0x19] = &PTR_DAT_110950c70;
  param_1[0x20] = FUN_10a4ba630;
  param_1[0x21] = &PTR_DAT_110950c70;
  FUN_10a03c0d0(param_1 + 0x28);
  *param_1 = &PTR_FUN_110c6a4e0;
  param_1[3] = &PTR_DAT_110c6a558;
  param_1[0x28] = &PTR_DAT_110c6a5a0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2e;
  param_1[0x2f] = param_1 + 0x2e;
  param_1[0x30] = 0;
  uVar1 = 0x18;
  __Znwm(0x18);
  FUN_10acb5898();
  FUN_10ac9b248(param_1 + 0x2c,uVar1);
  return param_1;
}



/* Entry: 10ac9b248; end: 10ac9b353;  */

void FUN_10ac9b248(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10acbc1bc(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10ac9b354; end: 10ac9b49f;  */

/* WARNING: Possible PIC construction at 0x00010ac9b494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac9b498) */
/* WARNING: Removing unreachable block (ram,0x00010ac9b4f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac9b4f4) */

undefined8 *
FUN_10ac9b354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  pcStack_78 = FUN_10a4ba630;
  ppuStack_70 = &PTR_DAT_110950c70;
  FUN_10a5cce24(param_1,0,param_3,param_4,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  FUN_10a03c0d0(param_1 + 0x28);
  *param_1 = &PTR_FUN_110c6a4e0;
  param_1[3] = &PTR_DAT_110c6a558;
  param_1[0x28] = &PTR_DAT_110c6a5a0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x2e] = puVar1;
  param_1[0x2f] = puVar1;
  param_1[0x30] = 0;
  uVar2 = 0x18;
  __Znwm(0x18);
  FUN_10acb5898();
  FUN_10ac9b248(param_1 + 0x2c,uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZdlPv(uVar2);
  FUN_10acb5a70(puVar1);
  FUN_10acbc164(param_1 + 0x2c);
  param_1[0x28] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x2b] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x2b] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x29);
  *param_1 = &PTR_FUN_110c6c330;
  param_1[3] = &PTR_DAT_110c6c3a0;
  (**(code **)param_1[0x21])(param_1 + 0x21);
  (**(code **)param_1[0x19])();
  (**(code **)param_1[0x11])(param_1 + 0x11);
  func_0x00010a042b54(param_1 + 0xe);
  func_0x00010a4bab10(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac9b4a0; end: 10ac9b50b;  */

undefined8 * FUN_10ac9b4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a4e0;
  param_1[3] = &PTR_DAT_110c6a558;
  param_1[0x28] = &PTR_DAT_110c6a5a0;
  FUN_10acb5a70(param_1 + 0x2e);
  FUN_10acbc164(param_1 + 0x2c);
  param_1[0x28] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x2b] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x2b] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x29);
  *param_1 = &PTR_FUN_110c6c330;
  param_1[3] = &PTR_DAT_110c6c3a0;
  (**(code **)param_1[0x21])(param_1 + 0x21);
  (**(code **)param_1[0x19])();
  (**(code **)param_1[0x11])(param_1 + 0x11);
  func_0x00010a042b54(param_1 + 0xe);
  func_0x00010a4bab10(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac9b50c; end: 10ac9b51f;  */

undefined8 * FUN_10ac9b50c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a4e0;
  param_1[3] = &PTR_DAT_110c6a558;
  param_1[0x28] = &PTR_DAT_110c6a5a0;
  FUN_10acb5a70(param_1 + 0x2e);
  FUN_10acbc164(param_1 + 0x2c);
  param_1[0x28] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x2b] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x2b] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x29);
  *param_1 = &PTR_FUN_110c6c330;
  param_1[3] = &PTR_DAT_110c6c3a0;
  (**(code **)param_1[0x21])(param_1 + 0x21);
  (**(code **)param_1[0x19])();
  (**(code **)param_1[0x11])(param_1 + 0x11);
  func_0x00010a042b54(param_1 + 0xe);
  func_0x00010a4bab10(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac9b520; end: 10ac9b563;  */

void FUN_10ac9b520(void)

{
  FUN_10ac9b4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9b564; end: 10ac9b8df;  */

void FUN_10ac9b564(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined7 uStack_58;
  byte bStack_51;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  uVar1 = param_2[1];
  plVar7 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar7 = param_2;
  }
  lVar3 = param_1;
  FUN_10ac9baa4(param_1,plVar7,uVar1);
  if ((int)lVar3 != 0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      plVar7 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar7 = param_2;
      }
      func_0x00010ae06f08(1,8,&UNK_10f6a0bba,&UNK_10f6a0d85,0x68,&UNK_10f6a0dce,in_x6,in_x7,plVar7);
    }
    FUN_10ac9bb88(&ppuStack_68,param_1,param_2);
    if ((char)bStack_51 < '\0') {
      func_0x000107c3192c(&ppuStack_80,ppuStack_68,uStack_60);
    }
    else {
      uStack_78 = uStack_60;
      ppuStack_80 = ppuStack_68;
      lStack_70 = CONCAT17(bStack_51,uStack_58);
    }
    pppuVar4 = &ppuStack_80;
    FUN_10ad015f0(pppuVar4,0x8000);
    if ((int)pppuVar4 != 0) {
      pppuVar4 = (undefined8 ***)ppuStack_68;
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        pppuVar4 = &ppuStack_68;
      }
      FUN_10a151324(&ppuStack_b0,pppuVar4,uStack_60);
      if (lStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
      uStack_78 = uStack_a8;
      ppuStack_80 = ppuStack_b0;
      lStack_70 = lStack_a0;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x160) + 8);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_b0,*param_2,param_2[1]);
    }
    else {
      uStack_a8 = param_2[1];
      ppuStack_b0 = (undefined8 **)*param_2;
      lStack_a0 = param_2[2];
    }
    if (lStack_70 < 0) {
      func_0x000107c3192c(&ppuStack_98,ppuStack_80,uStack_78);
    }
    else {
      uStack_90 = uStack_78;
      ppuStack_98 = ppuStack_80;
      lStack_88 = lStack_70;
    }
    plVar7 = (long *)puVar6[2];
    puStack_38 = puVar6;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x40;
      __Znwm();
      if (lStack_a0 < 0) {
        func_0x000107c3192c(plVar7,ppuStack_b0,uStack_a8);
      }
      else {
        plVar7[1] = uStack_a8;
        *plVar7 = (long)ppuStack_b0;
        plVar7[2] = lStack_a0;
      }
      plVar7[4] = uStack_90;
      plVar7[3] = (long)ppuStack_98;
      plVar7[5] = lStack_88;
      uStack_90 = 0;
      lStack_88 = 0;
      ppuStack_98 = (undefined8 **)0x0;
      plVar7[7] = 0x10acbc408;
      pcStack_48 = FUN_10acbc32c;
      plStack_40 = plVar7;
      (**(code **)*puVar6)(puVar6,&pcStack_48);
    }
    else {
      lStack_50 = 0;
      (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac9b86c);
        (*pcVar2)();
      }
      plVar5 = (long *)0x48;
      __Znwm();
      if (lStack_a0 < 0) {
        func_0x000107c3192c(plVar5,ppuStack_b0,uStack_a8);
      }
      else {
        plVar5[1] = uStack_a8;
        *plVar5 = (long)ppuStack_b0;
        plVar5[2] = lStack_a0;
      }
      plVar5[4] = uStack_90;
      plVar5[3] = (long)ppuStack_98;
      plVar5[5] = lStack_88;
      uStack_90 = 0;
      lStack_88 = 0;
      ppuStack_98 = (undefined8 **)0x0;
      plVar5[7] = (long)FUN_10acbc3c0;
      plVar5[8] = (long)plVar7;
      pcStack_48 = FUN_10acbc2fc;
      plStack_40 = plVar5;
      (**(code **)*puVar6)(puVar6,&pcStack_48);
      __ZNSt13exception_ptrD1Ev(&lStack_50);
    }
    lStack_50 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_50);
    if (lStack_88 < 0) {
      __ZdlPv(ppuStack_98);
    }
    if (lStack_a0 < 0) {
      __ZdlPv(ppuStack_b0);
    }
    if (lStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if ((char)bStack_51 < '\0') {
      __ZdlPv(ppuStack_68);
    }
  }
  return;
}



/* Entry: 10ac9b8e0; end: 10ac9baa3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac9b9e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac9ba48) */

char FUN_10ac9b8e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  puVar3 = param_1;
  FUN_10a53e714(param_1,puVar4,uVar1);
  bVar2 = *(byte *)((long)puVar3 + 0x17);
  uVar1 = puVar3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      puVar4 = (undefined8 *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        puVar4 = param_2;
      }
      func_0x00010ae06f08(1,8,&UNK_10f6a0bba,&UNK_10f6a0cf2,0x59,&UNK_10f6a0d3e,in_x6,in_x7,puVar4);
    }
    cStack_70 = '\0';
  }
  else {
    if ((char)bVar2 < '\0') {
      func_0x000107c3192c(&uStack_50,*puVar3);
    }
    else {
      uStack_48 = puVar3[1];
      uStack_50 = *puVar3;
      uStack_40 = puVar3[2];
    }
    puVar4 = &uStack_50;
    FUN_10ad015f0(puVar4,0x8000);
    if ((int)puVar4 != 0) {
      uVar1 = puVar3[1];
      puVar4 = (undefined8 *)*puVar3;
      if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
        puVar4 = puVar3;
      }
      FUN_10a151324(&uStack_a0,puVar4,uVar1);
      uStack_48 = uStack_98;
      uStack_50 = uStack_a0;
      uStack_40 = uStack_90;
    }
    FUN_10a3dda08(&uStack_68,*(undefined8 *)param_1[0x2c]);
    FUN_10a9dd660(&uStack_a0,uStack_68,&uStack_50);
    if (cStack_70 == '\x01') {
      FUN_10a0f1ea0(&uStack_a0);
    }
    if (cStack_58 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_60);
    }
  }
  return cStack_70;
}



/* Entry: 10ac9baa4; end: 10ac9bb87;  */

undefined8 * FUN_10ac9baa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if ((undefined8 *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    __Unwind_Resume();
    uVar1 = param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar3 = param_3;
    }
    puVar5 = param_2;
    FUN_10a53e714(param_2,puVar3,uVar1);
    if (*(char *)((long)puVar5 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*puVar5,puVar5[1]);
    }
    else {
      uVar7 = puVar5[1];
      uVar6 = *puVar5;
      param_1[2] = puVar5[2];
      param_1[1] = uVar7;
      *param_1 = uVar6;
    }
    FUN_10ac9e388(param_2,param_3,0);
    return param_2;
  }
  if (param_3 < (undefined8 *)0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (param_3 == (undefined8 *)0x0) goto LAB_10ac9bb24;
  }
  else {
    pppuVar2 = (undefined8 ***)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppuVar2 = (undefined8 ***)(((ulong)param_3 | 7) + 1);
    }
    pppuVar4 = pppuVar2;
    __Znwm();
    uStack_48 = (ulong)pppuVar2 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    puStack_50 = param_3;
  }
  _memmove(pppuVar4,param_2,param_3);
LAB_10ac9bb24:
  *(undefined1 *)((long)pppuVar4 + (long)param_3) = 0;
  param_1 = param_1 + 7;
  FUN_10a54a2c0(param_1,&ppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return (undefined8 *)(ulong)(param_1 != (undefined8 *)0x0);
}



/* Entry: 10ac9bb88; end: 10ac9bc27;  */

void FUN_10ac9bb88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  puVar3 = param_2;
  FUN_10a53e714(param_2,puVar2,uVar1);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*puVar3,puVar3[1]);
  }
  else {
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    param_1[2] = puVar3[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  FUN_10ac9e388(param_2,param_3,0);
  return;
}



/* Entry: 10ac9bc28; end: 10ac9bcd7;  */

undefined8 * FUN_10ac9bc28(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ac9bcd8; end: 10ac9bcdb;  */

void FUN_10ac9bcd8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long unaff_x19;
  undefined *unaff_x20;
  long *unaff_x21;
  long *plVar11;
  long *unaff_x22;
  long *unaff_x23;
  long lVar12;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar13;
  undefined8 uVar14;
  
  puVar6 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar6 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined1 **)(puVar6 + -0x48) = unaff_x25;
    *(long **)(puVar6 + -0x40) = unaff_x24;
    *(long **)(puVar6 + -0x38) = unaff_x23;
    *(long **)(puVar6 + -0x30) = unaff_x22;
    *(long **)(puVar6 + -0x28) = unaff_x21;
    *(undefined **)(puVar6 + -0x20) = unaff_x20;
    *(long *)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = (long *)(param_1 + 0x170);
    unaff_x21 = *(long **)(param_1 + 0x178);
    unaff_x19 = param_1;
    if (unaff_x21 != unaff_x24) {
      unaff_x25 = puVar6 + -0xb0;
      unaff_x26 = 400;
      unaff_x20 = &UNK_10f6a0e21;
      plVar11 = unaff_x21;
      do {
        unaff_x22 = plVar11 + 6;
        if (((uint)*(undefined8 *)(*unaff_x22 + 0x10) >> 1 & 1) == 0) {
          unaff_x21 = (long *)plVar11[1];
        }
        else {
          func_0x0001092af8bc(unaff_x22);
          lVar8 = *unaff_x22;
          if ((*(byte *)(lVar8 + 200) & 1) == 0) {
LAB_10ac9bf4c:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac9bf50);
            (*pcVar9)();
          }
          lVar12 = *(long *)(lVar8 + 0x98);
          uVar14 = *(undefined8 *)(lVar8 + 0xa8);
          lVar13 = *(long *)(lVar8 + 0xa0);
          *(undefined8 *)(lVar8 + 0x98) = 0;
          *(undefined8 *)(lVar8 + 0xa0) = 0;
          unaff_x27 = *(undefined8 *)(lVar8 + 0xb0);
          *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(lVar8 + 0xb8);
          *(undefined8 *)(puVar6 + -0x79) = *(undefined8 *)(lVar8 + 0xbf);
          bVar3 = *(byte *)(lVar8 + 199);
          unaff_x28 = (ulong)bVar3;
          *(undefined8 *)(lVar8 + 0xa8) = 0;
          *(undefined8 *)(lVar8 + 0xb0) = 0;
          *(undefined8 *)(lVar8 + 0xb8) = 0;
          *(undefined8 *)(lVar8 + 0xc0) = 0;
          plVar7 = (long *)*unaff_x22;
          *unaff_x22 = 0;
          if (plVar7 != (long *)0x0) {
            puVar1 = (ulong *)(plVar7 + 1);
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar10 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar10 - 1 == 0) {
                pcVar9 = *(code **)(*plVar7 + 8);
                *(undefined8 *)(puVar6 + -200) = uVar14;
                *(long *)(puVar6 + -0xd0) = lVar13;
                (*pcVar9)();
                uVar14 = *(undefined8 *)(puVar6 + -200);
                lVar13 = *(long *)(puVar6 + -0xd0);
              }
            }
          }
          unaff_x22 = plVar11 + 2;
          *(long *)(puVar6 + -0xb0) = lVar12;
          *(undefined8 *)(puVar6 + -0xa0) = uVar14;
          *(long *)(puVar6 + -0xa8) = lVar13;
          *(undefined8 *)(puVar6 + -0x98) = unaff_x27;
          *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x80);
          *(undefined8 *)(puVar6 + -0x89) = *(undefined8 *)(puVar6 + -0x79);
          puVar6[-0x81] = bVar3;
          if (lVar12 == lVar13) {
            lVar8 = plVar11[4];
            *(undefined4 *)(puVar6 + -0xb4) = 400;
            func_0x000107c2b054(puVar6 + -0x80,&UNK_10f6a0e21);
            FUN_10a25f92c(lVar8,puVar6 + -0xb4,puVar6 + -0x80);
            if ((char)puVar6[-0x69] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar6 + -0x80));
            }
          }
          else {
            FUN_10a771178(puVar6 + -0x80,
                          *(undefined8 *)(*(long *)(**(long **)(param_1 + 0x160) + 0x888) + 0x40),
                          puVar6 + -0x98,puVar6 + -0xb0);
            FUN_10a05e0a8(*unaff_x22,puVar6 + -0x80);
            plVar7 = *(long **)(puVar6 + -0x78);
            if (plVar7 != (long *)0x0) {
              plVar2 = plVar7 + 1;
              do {
                lVar8 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
          }
          if (unaff_x24 == plVar11) goto LAB_10ac9bf4c;
          lVar8 = *plVar11;
          unaff_x21 = (long *)plVar11[1];
          *(long **)(lVar8 + 8) = unaff_x21;
          *unaff_x21 = lVar8;
          *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + -1;
          FUN_10acb5adc(unaff_x22);
          __ZdlPv(plVar11);
          if ((char)puVar6[-0x81] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar6 + -0x98));
          }
          unaff_x19 = *(long *)(puVar6 + -0xb0);
          unaff_x23 = unaff_x21;
          if (unaff_x19 != 0) {
            *(long *)(puVar6 + -0xa8) = unaff_x19;
            __ZdlPv();
          }
        }
        plVar11 = unaff_x21;
      } while (unaff_x21 != unaff_x24);
    }
    if (*(long *)(param_1 + 0x180) == 0) {
      unaff_x19 = *(long *)(param_1 + 0x148);
      FUN_10a5ae930();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    if ((char)puVar6[-0x69] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar6 + -0x80));
    }
    FUN_10ac9bfa4(puVar6 + -0xb0);
    unaff_x30 = FUN_10ac9bf9c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x140;
    puVar6 = puVar6 + -0xd0;
  } while( true );
}



/* Entry: 10ac9bcdc; end: 10ac9bf9b;  */

void FUN_10ac9bcdc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long unaff_x19;
  undefined *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  long lVar11;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar12;
  undefined8 uVar13;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = (long *)(param_1 + 0x170);
    unaff_x21 = *(long **)(param_1 + 0x178);
    unaff_x19 = param_1;
    if (unaff_x21 != unaff_x24) {
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_x26 = 400;
      unaff_x20 = &UNK_10f6a0e21;
      plVar10 = unaff_x21;
      do {
        unaff_x22 = plVar10 + 6;
        if (((uint)*(undefined8 *)(*unaff_x22 + 0x10) >> 1 & 1) == 0) {
          unaff_x21 = (long *)plVar10[1];
        }
        else {
          func_0x0001092af8bc(unaff_x22);
          lVar7 = *unaff_x22;
          if ((*(byte *)(lVar7 + 200) & 1) == 0) {
LAB_10ac9bf4c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac9bf50);
            (*pcVar8)();
          }
          lVar11 = *(long *)(lVar7 + 0x98);
          uVar13 = *(undefined8 *)(lVar7 + 0xa8);
          lVar12 = *(long *)(lVar7 + 0xa0);
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          unaff_x27 = *(undefined8 *)(lVar7 + 0xb0);
          *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(lVar7 + 0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x79) = *(undefined8 *)(lVar7 + 0xbf);
          bVar3 = *(byte *)(lVar7 + 199);
          unaff_x28 = (ulong)bVar3;
          *(undefined8 *)(lVar7 + 0xa8) = 0;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
          *(undefined8 *)(lVar7 + 0xb8) = 0;
          *(undefined8 *)(lVar7 + 0xc0) = 0;
          plVar6 = (long *)*unaff_x22;
          *unaff_x22 = 0;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar9 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar9 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar9 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar9 - 1 == 0) {
                pcVar8 = *(code **)(*plVar6 + 8);
                *(undefined8 *)((long)register0x00000008 + -200) = uVar13;
                *(long *)((long)register0x00000008 + -0xd0) = lVar12;
                (*pcVar8)();
                uVar13 = *(undefined8 *)((long)register0x00000008 + -200);
                lVar12 = *(long *)((long)register0x00000008 + -0xd0);
              }
            }
          }
          unaff_x22 = plVar10 + 2;
          *(long *)((long)register0x00000008 + -0xb0) = lVar11;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
          *(long *)((long)register0x00000008 + -0xa8) = lVar12;
          *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x90) =
               *(undefined8 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x89) =
               *(undefined8 *)((long)register0x00000008 + -0x79);
          *(byte *)((long)register0x00000008 + -0x81) = bVar3;
          if (lVar11 == lVar12) {
            lVar7 = plVar10[4];
            *(undefined4 *)((long)register0x00000008 + -0xb4) = 400;
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f6a0e21);
            FUN_10a25f92c(lVar7,(undefined1 *)((long)register0x00000008 + -0xb4),
                          (undefined1 *)((long)register0x00000008 + -0x80));
            if (*(char *)((long)register0x00000008 + -0x69) < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x80));
            }
          }
          else {
            FUN_10a771178((undefined1 *)((long)register0x00000008 + -0x80),
                          *(undefined8 *)(*(long *)(**(long **)(param_1 + 0x160) + 0x888) + 0x40),
                          (undefined1 *)((long)register0x00000008 + -0x98),
                          (undefined1 *)((long)register0x00000008 + -0xb0));
            FUN_10a05e0a8(*unaff_x22,(undefined1 *)((long)register0x00000008 + -0x80));
            plVar6 = *(long **)((long)register0x00000008 + -0x78);
            if (plVar6 != (long *)0x0) {
              plVar2 = plVar6 + 1;
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
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
          }
          if (unaff_x24 == plVar10) goto LAB_10ac9bf4c;
          lVar7 = *plVar10;
          unaff_x21 = (long *)plVar10[1];
          *(long **)(lVar7 + 8) = unaff_x21;
          *unaff_x21 = lVar7;
          *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + -1;
          FUN_10acb5adc(unaff_x22);
          __ZdlPv(plVar10);
          if (*(char *)((long)register0x00000008 + -0x81) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x98));
          }
          unaff_x19 = *(long *)((long)register0x00000008 + -0xb0);
          unaff_x23 = unaff_x21;
          if (unaff_x19 != 0) {
            *(long *)((long)register0x00000008 + -0xa8) = unaff_x19;
            __ZdlPv();
          }
        }
        plVar10 = unaff_x21;
      } while (unaff_x21 != unaff_x24);
    }
    if (*(long *)(param_1 + 0x180) == 0) {
      unaff_x19 = *(long *)(param_1 + 0x148);
      FUN_10a5ae930();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x69) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x80));
    }
    FUN_10ac9bfa4((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10ac9bf9c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x140;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  } while( true );
}



/* Entry: 10ac9bf9c; end: 10ac9bfa3;  */

void FUN_10ac9bf9c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long unaff_x19;
  undefined *unaff_x20;
  long *plVar10;
  long *unaff_x21;
  long *unaff_x22;
  long lVar11;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar12;
  undefined8 uVar13;
  
  do {
    lVar7 = param_1 + -0x140;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = (long *)(param_1 + 0x30);
    unaff_x21 = *(long **)(param_1 + 0x38);
    if (unaff_x21 != unaff_x24) {
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_x26 = 400;
      unaff_x20 = &UNK_10f6a0e21;
      plVar10 = unaff_x21;
      do {
        unaff_x22 = plVar10 + 6;
        if (((uint)*(undefined8 *)(*unaff_x22 + 0x10) >> 1 & 1) == 0) {
          unaff_x21 = (long *)plVar10[1];
        }
        else {
          func_0x0001092af8bc(unaff_x22);
          lVar7 = *unaff_x22;
          if ((*(byte *)(lVar7 + 200) & 1) == 0) {
LAB_10ac9bf4c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac9bf50);
            (*pcVar8)();
          }
          lVar11 = *(long *)(lVar7 + 0x98);
          uVar13 = *(undefined8 *)(lVar7 + 0xa8);
          lVar12 = *(long *)(lVar7 + 0xa0);
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          unaff_x27 = *(undefined8 *)(lVar7 + 0xb0);
          *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(lVar7 + 0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x79) = *(undefined8 *)(lVar7 + 0xbf);
          bVar3 = *(byte *)(lVar7 + 199);
          unaff_x28 = (ulong)bVar3;
          *(undefined8 *)(lVar7 + 0xa8) = 0;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
          *(undefined8 *)(lVar7 + 0xb8) = 0;
          *(undefined8 *)(lVar7 + 0xc0) = 0;
          plVar6 = (long *)*unaff_x22;
          *unaff_x22 = 0;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar9 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar9 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar9 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar9 - 1 == 0) {
                pcVar8 = *(code **)(*plVar6 + 8);
                *(undefined8 *)((long)register0x00000008 + -200) = uVar13;
                *(long *)((long)register0x00000008 + -0xd0) = lVar12;
                (*pcVar8)();
                uVar13 = *(undefined8 *)((long)register0x00000008 + -200);
                lVar12 = *(long *)((long)register0x00000008 + -0xd0);
              }
            }
          }
          unaff_x22 = plVar10 + 2;
          *(long *)((long)register0x00000008 + -0xb0) = lVar11;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
          *(long *)((long)register0x00000008 + -0xa8) = lVar12;
          *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x90) =
               *(undefined8 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x89) =
               *(undefined8 *)((long)register0x00000008 + -0x79);
          *(byte *)((long)register0x00000008 + -0x81) = bVar3;
          if (lVar11 == lVar12) {
            lVar7 = plVar10[4];
            *(undefined4 *)((long)register0x00000008 + -0xb4) = 400;
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f6a0e21);
            FUN_10a25f92c(lVar7,(undefined1 *)((long)register0x00000008 + -0xb4),
                          (undefined1 *)((long)register0x00000008 + -0x80));
            if (*(char *)((long)register0x00000008 + -0x69) < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x80));
            }
          }
          else {
            FUN_10a771178((undefined1 *)((long)register0x00000008 + -0x80),
                          *(undefined8 *)(*(long *)(**(long **)(param_1 + 0x20) + 0x888) + 0x40),
                          (undefined1 *)((long)register0x00000008 + -0x98),
                          (undefined1 *)((long)register0x00000008 + -0xb0));
            FUN_10a05e0a8(*unaff_x22,(undefined1 *)((long)register0x00000008 + -0x80));
            plVar6 = *(long **)((long)register0x00000008 + -0x78);
            if (plVar6 != (long *)0x0) {
              plVar2 = plVar6 + 1;
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
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
          }
          if (unaff_x24 == plVar10) goto LAB_10ac9bf4c;
          lVar7 = *plVar10;
          unaff_x21 = (long *)plVar10[1];
          *(long **)(lVar7 + 8) = unaff_x21;
          *unaff_x21 = lVar7;
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
          FUN_10acb5adc(unaff_x22);
          __ZdlPv(plVar10);
          if (*(char *)((long)register0x00000008 + -0x81) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x98));
          }
          lVar7 = *(long *)((long)register0x00000008 + -0xb0);
          unaff_x23 = unaff_x21;
          if (lVar7 != 0) {
            *(long *)((long)register0x00000008 + -0xa8) = lVar7;
            __ZdlPv();
          }
        }
        plVar10 = unaff_x21;
      } while (unaff_x21 != unaff_x24);
    }
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar7 = *(long *)(param_1 + 8);
      FUN_10a5ae930();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x69) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x80));
    }
    FUN_10ac9bfa4((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10ac9bf9c;
    param_1 = lVar7;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    unaff_x19 = lVar7;
  } while( true );
}



/* Entry: 10ac9bfa4; end: 10ac9bfe3;  */

long * FUN_10ac9bfa4(long *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac9bfe4; end: 10ac9c377;  */

void FUN_10ac9bfe4(ulong param_1)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6b628;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 8;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 8;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *puVar6 = 0x656d695465746144;
  *(undefined1 *)(puVar6 + 1) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &DAT_10f64970c;
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
    ppuStack_b0 = &PTR_DAT_110c6b628;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&DAT_10f64970c,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10acbc450,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"year",FUN_10acbc540,FUN_10acbc600);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"month",FUN_10acbc6fc,FUN_10acbc7bc);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"day",FUN_10acbc874,FUN_10acbc934);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"hour",FUN_10acbc9ec,FUN_10acbcb08);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"minute",FUN_10acbcbc0,FUN_10acbccf8);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f507f4e,FUN_10acbcdb0,FUN_10acbcf00);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a0e5d,FUN_10acbcfb8,FUN_10acbd068);
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
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&DAT_10f64970c,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac9c378);
  (*pcVar4)();
}



/* Entry: 10ac9c378; end: 10ac9c3f3;  */

undefined1  [16] FUN_10ac9c378(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6a19ec;
  return auVar1;
}



/* Entry: 10ac9c3f4; end: 10ac9c833;  */

void FUN_10ac9c3f4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a19ec,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c458;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
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
    ppuStack_b0 = &PTR_DAT_110c6c458;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9c814;
    FUN_10a054dac(param_1,&UNK_10f657a65,FUN_10acbd120,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9c814;
    FUN_10a054dac(param_1,&UNK_10f598d6c,FUN_10acbd2a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3eaeed,FUN_10acbd38c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0e69,FUN_10acbd444,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f36f23a,FUN_10acbd4fc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f40976b,FUN_10acbd5d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f417690,FUN_10acbd688,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0e78,FUN_10acbd740,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f588a6b,FUN_10acbd7fc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a0e87,FUN_10acbd8c4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a19ec,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac9c814:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9c818);
  (*pcVar6)();
}



/* Entry: 10ac9c834; end: 10ac9c843;  */

undefined1  [16] FUN_10ac9c834(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f654faa;
  return auVar1;
}



/* Entry: 10ac9c844; end: 10ac9e34f;  */

void FUN_10ac9c844(ulong param_1)

{
  char ***pppcVar1;
  char ***pppcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char **ppcStack_110;
  char *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  char **ppcStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000109887da8(&ppcStack_110,&UNK_10f654faa,0x10);
  pppcVar1 = (char ***)ppcStack_110;
  if (-1 < (long)puStack_100) {
    pppcVar1 = &ppcStack_110;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c3d8;
  pppcVar2 = (char ***)&UNK_10f6a0902;
  if (pppcVar1 != (char ***)0x0) {
    pppcVar2 = pppcVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppcVar2);
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = 0;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x100000064;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_e0 = (char **)pppcVar1;
  func_0x00010a052690(param_1 + 0x168,&ppcStack_e0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_f0 = &PTR_DAT_110c6c3d8;
    uStack_e8 = 0;
    ppcStack_e0 = &PTR_DAT_110b178e0;
    ppcStack_d8 = (char **)0x0;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    func_0x0001098949cc(param_1,pppcVar1,&ppuStack_f0,&ppcStack_e0);
  }
  if ((long)puStack_100 < 0) {
    __ZdlPv(ppcStack_110);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0e95,FUN_10acbdddc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0ea3,FUN_10acbebc8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0eb0,FUN_10acbf210,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0ebf,FUN_10acbfe78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0ecd,FUN_10acc0448,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0edc,FUN_10acc0bc0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0eea,FUN_10acc11c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0efa,FUN_10acc1ed8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,"getInt",FUN_10acc21b4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f68d0b4,FUN_10acc2444,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,"getBool",FUN_10acc2568,2,*(undefined8 *)(param_1 + 0x40));
  }
  ppcStack_110 = (char **)0x10f149b84;
  ppcStack_d8 = (char **)&ppcStack_110;
  ppcStack_e0 = (char **)0x10f243c6e;
  uStack_d0 = 1;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x100000064;
  puStack_b8 = &UNK_10f6a0902;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = param_1;
  FUN_10acc268c(param_1,&ppcStack_e0);
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,"getFloat",FUN_10acc29a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f0a,FUN_10acc2d44,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f12,FUN_10acc3104,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f1a,FUN_10acc34c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f22,FUN_10acc3890,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f2a,FUN_10acc3cb4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f32,FUN_10acc3fe4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f3a,FUN_10acc43ac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f42,FUN_10acc44d0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f4e,FUN_10acc45fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f5c,FUN_10acc4bd4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f69,FUN_10acc523c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f78,FUN_10acc57ec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f85,FUN_10acc5da8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f92,FUN_10acc636c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0f9f,FUN_10acc699c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fac,FUN_10acc6ed4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fb9,FUN_10acc740c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fc6,FUN_10acc7a3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  ppcStack_110 = (char **)0x10f149b84;
  ppcStack_d8 = (char **)&ppcStack_110;
  ppcStack_e0 = (char **)&DAT_10f4653d9;
  uStack_d0 = 1;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = param_1;
  FUN_10acc268c(param_1,&ppcStack_e0);
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fd3,FUN_10acc7c64,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fe0,FUN_10acc860c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0fee,FUN_10acc8c1c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a0ffd,FUN_10acc9244,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a100b,FUN_10acc986c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a101a,FUN_10acca324,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1028,FUN_10acca52c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1038,FUN_10acca6d0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1048,FUN_10accb3fc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a104f,FUN_10accb530,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1059,FUN_10accba80,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1061,FUN_10accbbb4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a106b,FUN_10accbea0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1074,FUN_10accc004,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a107c,FUN_10accc52c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1084,FUN_10accca60,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a108c,FUN_10acccf8c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1094,FUN_10accd4b8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a109c,FUN_10accd9f0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10a4,FUN_10accdf2c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10ac,FUN_10acce458,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10b8,FUN_10acce5b4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10c6,FUN_10acce710,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10d3,FUN_10acce898,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10e2,FUN_10accea04,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10ef,FUN_10accefc0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a10fc,FUN_10accf588,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1109,FUN_10accfb44,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1116,FUN_10acd0100,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1123,FUN_10acd06d0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1130,FUN_10acd0c8c,3,*(undefined8 *)(param_1 + 0x40));
  }
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a113d;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = param_1;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd13b8(param_1,&ppcStack_e0);
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a1155;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd13b8();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a1172;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd13b8();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a118e;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1594();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a11a3;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1594();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a11bd;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1594();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a11d6;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd173c();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a11ed;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd173c();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a1209;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd173c();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a1224;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1914();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a123a;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1914();
  pcStack_108 = "value";
  ppcStack_110 = (char **)0x10f149b84;
  puStack_100 = &DAT_10f2eb3e2;
  ppcStack_e0 = (char **)&UNK_10f6a1255;
  uStack_d0 = 3;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd1914();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a126f,FUN_10acd1ba8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a127c,FUN_10acd1dfc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1286,FUN_10acd1ffc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a1292,FUN_10acd2204,2,*(undefined8 *)(param_1 + 0x40));
  }
  ppcStack_110 = (char **)0x10f149b84;
  ppcStack_e0 = (char **)&DAT_10f41677d;
  uStack_d0 = 1;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x100000064;
  puStack_b8 = &UNK_10f6a0902;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = param_1;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd230c(param_1,&ppcStack_e0);
  ppcStack_110 = (char **)0x10f149b84;
  ppcStack_e0 = (char **)&UNK_10f6a129d;
  uStack_d0 = 1;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  puStack_b8 = &UNK_10f6a0902;
  puStack_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  ppcStack_d8 = (char **)&ppcStack_110;
  FUN_10acd230c();
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = 0;
  ppcStack_e0 = (char **)&UNK_10f6a12ac;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0x124;
  uStack_90 = 0x13c;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10acd2490();
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = 0;
  ppcStack_e0 = (char **)&DAT_10f68f0dc;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 0x200000019;
  uStack_b0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_94 = 0x124;
  uStack_90 = 0x13c;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10acd2490();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,"clear",FUN_10acd25b0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a12ba,FUN_10acd2664,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a12cc,FUN_10acd2720,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&UNK_10f6a12d7,FUN_10acd2828,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac9e330;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10acd291c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a12e6,FUN_10acd2a18,FUN_10acd2af4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppcStack_d8 = *(char ***)(lVar3 + -0x60);
    ppcStack_e0 = *(char ***)(lVar3 + -0x68);
    puStack_b8 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_d0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_a8 = *(undefined **)(lVar3 + -0x30);
    uStack_b0 = *(undefined8 *)(lVar3 + -0x38);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x28);
    uStack_80 = *(undefined8 *)(lVar3 + -8);
    uStack_88 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_98 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_90 = (undefined4)uVar10;
    uStack_8c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_c8._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_c8._4_4_;
    uStack_c0._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_c0._4_4_;
    uVar7 = param_1;
    uStack_c8 = uVar9;
    uStack_c0 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppcStack_e0,param_1 + 0x1b8,&UNK_10f654faa,0x10);
      FUN_10a05431c(param_1);
    }
    ppcStack_d8 = (char **)0x0;
    uStack_d0 = 0;
    ppcStack_e0 = (char **)&UNK_10f654faa;
    uStack_c0 = 0xffffffffffffffff;
    uStack_c8 = 0x100000064;
    puStack_b8 = &UNK_10f6a0902;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    puStack_a8 = &UNK_10f6a0902;
    uStack_90 = 0xffffffff;
    uStack_88 = 0;
    uStack_80 = 0;
    func_0x00010a004eb4(param_1,&ppcStack_e0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac9e330;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10acd2c18,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac9e330:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac9e334);
  (*pcVar6)();
}



/* Entry: 10ac9e350; end: 10ac9e35b;  */

undefined8 * FUN_10ac9e350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c330;
  param_1[3] = &PTR_DAT_110c6c3a0;
  (**(code **)param_1[0x21])(param_1 + 0x21);
  (**(code **)param_1[0x19])();
  (**(code **)param_1[0x11])(param_1 + 0x11);
  func_0x00010a042b54(param_1 + 0xe);
  func_0x00010a4bab10(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac9e35c; end: 10ac9e387;  */

void FUN_10ac9e35c(void)

{
  func_0x00010ac9b2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9e388; end: 10ac9e467;  */

void FUN_10ac9e388(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar4 = param_1 + 0x38;
  FUN_10acd2d04();
  if (lVar4 != 0) {
    func_0x00010a5499ec(param_1,0xffffffff,lVar4 + 0x28,param_2);
    FUN_10acd2de8(param_1 + 0x38,lVar4);
    if (((param_3 & 1) == 0) && (*(char *)(*(long *)(param_1 + 0x108) + 8) == '\x01')) {
      FUN_10a54a030(auStack_40,param_1 + 0x28);
      FUN_10ac9e468(param_1 + 0x100,auStack_40,param_2);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
  }
  return;
}



/* Entry: 10ac9e468; end: 10ac9e4f7;  */

void FUN_10ac9e468(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10ac9e4f8; end: 10ac9e56b;  */

void FUN_10ac9e4f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x50));
  plVar1 = (long *)(param_2 + 0x48);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10a0b4ec0(param_1,plVar1 + 2);
  }
  return;
}



/* Entry: 10ac9e56c; end: 10ac9e673;  */

undefined8 * FUN_10ac9e56c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a0cf0cc(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * -0x5555555555555555);
  param_1[6] = 0;
  if (*(long **)(param_2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(&plStack_38);
    plVar1 = plStack_38;
    plStack_38 = (long *)0x0;
    plVar2 = (long *)param_1[6];
    param_1[6] = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10ac9e674; end: 10ac9e9db;  */

void FUN_10ac9e674(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_x27;
  long *plVar12;
  float fVar13;
  long lStack_90;
  long lStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if (0 < (int)plVar3) {
    iVar9 = 0;
    plVar1 = (long *)(param_1 + 0x38);
    plVar2 = (long *)(param_1 + 0x48);
    plVar5 = plVar3;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar9);
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf0340);
      if ((int)plVar8 != 0) {
        (**(code **)(*param_2 + 0xa0))(&lStack_90,param_2,&PTR_DAT_110bf0340);
        plVar8 = plVar1;
        func_0x000107c2b05c(plVar1,&lStack_90);
        plVar12 = *(long **)(param_1 + 0x40);
        if (plVar12 != (long *)0x0) {
          uVar10 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar10) == 0) {
            unaff_x27 = (long *)(uVar10 & (ulong)plVar8);
          }
          else {
            unaff_x27 = plVar8;
            if (plVar12 <= plVar8) {
              uVar7 = 0;
              if (plVar12 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar12;
              }
              unaff_x27 = (long *)((long)plVar8 - uVar7 * (long)plVar12);
            }
          }
          puVar4 = *(undefined8 **)(*plVar1 + (long)unaff_x27 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            for (plVar11 = (long *)*puVar4; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              plVar5 = (long *)plVar11[1];
              if (plVar5 == plVar8) {
                plVar5 = plVar1;
                func_0x000107c2b068(plVar1,plVar11 + 2,&lStack_90);
                if (((ulong)plVar5 & 1) != 0) {
                  plVar5 = (long *)((ulong)plVar3 & 0xffffffff);
                  goto LAB_10ac9e938;
                }
              }
              else {
                if (((ulong)plVar12 & uVar10) == 0) {
                  plVar5 = (long *)((ulong)plVar5 & uVar10);
                }
                else if (plVar12 <= plVar5) {
                  uVar7 = 0;
                  if (plVar12 != (long *)0x0) {
                    uVar7 = (ulong)plVar5 / (ulong)plVar12;
                  }
                  plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar12);
                }
                if (plVar5 != unaff_x27) break;
              }
            }
          }
          plVar5 = (long *)((ulong)plVar3 & 0xffffffff);
        }
        plVar11 = (long *)0x60;
        __Znwm();
        uStack_68 = 0;
        *plVar11 = 0;
        plVar11[1] = (long)plVar8;
        plStack_78 = plVar11;
        plStack_70 = plVar1;
        if (cStack_79 < '\0') {
          func_0x000107c3192c(plVar11 + 2,lStack_90,lStack_88);
        }
        else {
          plVar11[3] = lStack_88;
          plVar11[2] = lStack_90;
          plVar11[4] = CONCAT17(cStack_79,uStack_80);
        }
        *(undefined1 *)(plVar11 + 6) = 0;
        plVar11[5] = (long)&PTR_FUN_110c6c2d0;
        plVar11[9] = 0;
        plVar11[8] = 0;
        plVar11[0xb] = 0;
        plVar11[10] = 0;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        fVar13 = (float)(*(long *)(param_1 + 0x50) + 1);
        if ((plVar12 == (long *)0x0) || (*(float *)(param_1 + 0x58) * (float)plVar12 < fVar13)) {
          uVar10 = 1;
          if ((long *)0x2 < plVar12) {
            uVar10 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
          }
          uVar10 = uVar10 | (long)plVar12 << 1;
          uVar7 = (ulong)(fVar13 / *(float *)(param_1 + 0x58));
          if (uVar10 <= uVar7) {
            uVar10 = uVar7;
          }
          FUN_10a4ba824(plVar1,uVar10);
          plVar12 = *(long **)(param_1 + 0x40);
          if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
            unaff_x27 = (long *)((long)plVar12 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x27 = plVar8;
            if (plVar12 <= plVar8) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar8 / (ulong)plVar12;
              }
              unaff_x27 = (long *)((long)plVar8 - uVar10 * (long)plVar12);
            }
          }
        }
        lVar6 = *plVar1;
        plVar8 = *(long **)(lVar6 + (long)unaff_x27 * 8);
        if (plVar8 == (long *)0x0) {
          *plStack_78 = *plVar2;
          *plVar2 = (long)plStack_78;
          *(long **)(lVar6 + (long)unaff_x27 * 8) = plVar2;
          if (*plStack_78 != 0) {
            plVar8 = *(long **)(*plStack_78 + 8);
            if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar12 - 1U);
            }
            else if (plVar12 <= plVar8) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar8 / (ulong)plVar12;
              }
              plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar12);
            }
            *(long **)(*plVar1 + (long)plVar8 * 8) = plStack_78;
          }
        }
        else {
          *plStack_78 = *plVar8;
          *plVar8 = (long)plStack_78;
        }
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        plVar11 = plStack_78;
LAB_10ac9e938:
        (**(code **)(*param_2 + 0x1e0))(param_2,plVar11 + 5);
        if (cStack_79 < '\0') {
          __ZdlPv(lStack_90);
        }
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 != (int)plVar5);
  }
  return;
}



/* Entry: 10ac9e9dc; end: 10ac9ea03;  */

void FUN_10ac9e9dc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_x27;
  long *plVar12;
  float fVar13;
  long lStack_90;
  long lStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if (0 < (int)plVar3) {
    iVar9 = 0;
    plVar1 = (long *)(param_1 + 0x20);
    plVar2 = (long *)(param_1 + 0x30);
    plVar5 = plVar3;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar9);
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf0340);
      if ((int)plVar8 != 0) {
        (**(code **)(*param_2 + 0xa0))(&lStack_90,param_2,&PTR_DAT_110bf0340);
        plVar8 = plVar1;
        func_0x000107c2b05c(plVar1,&lStack_90);
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 != (long *)0x0) {
          uVar10 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar10) == 0) {
            unaff_x27 = (long *)(uVar10 & (ulong)plVar8);
          }
          else {
            unaff_x27 = plVar8;
            if (plVar12 <= plVar8) {
              uVar7 = 0;
              if (plVar12 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar12;
              }
              unaff_x27 = (long *)((long)plVar8 - uVar7 * (long)plVar12);
            }
          }
          puVar4 = *(undefined8 **)(*plVar1 + (long)unaff_x27 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            for (plVar11 = (long *)*puVar4; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              plVar5 = (long *)plVar11[1];
              if (plVar5 == plVar8) {
                plVar5 = plVar1;
                func_0x000107c2b068(plVar1,plVar11 + 2,&lStack_90);
                if (((ulong)plVar5 & 1) != 0) {
                  plVar5 = (long *)((ulong)plVar3 & 0xffffffff);
                  goto LAB_10ac9e938;
                }
              }
              else {
                if (((ulong)plVar12 & uVar10) == 0) {
                  plVar5 = (long *)((ulong)plVar5 & uVar10);
                }
                else if (plVar12 <= plVar5) {
                  uVar7 = 0;
                  if (plVar12 != (long *)0x0) {
                    uVar7 = (ulong)plVar5 / (ulong)plVar12;
                  }
                  plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar12);
                }
                if (plVar5 != unaff_x27) break;
              }
            }
          }
          plVar5 = (long *)((ulong)plVar3 & 0xffffffff);
        }
        plVar11 = (long *)0x60;
        __Znwm();
        uStack_68 = 0;
        *plVar11 = 0;
        plVar11[1] = (long)plVar8;
        plStack_78 = plVar11;
        plStack_70 = plVar1;
        if (cStack_79 < '\0') {
          func_0x000107c3192c(plVar11 + 2,lStack_90,lStack_88);
        }
        else {
          plVar11[3] = lStack_88;
          plVar11[2] = lStack_90;
          plVar11[4] = CONCAT17(cStack_79,uStack_80);
        }
        *(undefined1 *)(plVar11 + 6) = 0;
        plVar11[5] = (long)&PTR_FUN_110c6c2d0;
        plVar11[9] = 0;
        plVar11[8] = 0;
        plVar11[0xb] = 0;
        plVar11[10] = 0;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        fVar13 = (float)(*(long *)(param_1 + 0x38) + 1);
        if ((plVar12 == (long *)0x0) || (*(float *)(param_1 + 0x40) * (float)plVar12 < fVar13)) {
          uVar10 = 1;
          if ((long *)0x2 < plVar12) {
            uVar10 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
          }
          uVar10 = uVar10 | (long)plVar12 << 1;
          uVar7 = (ulong)(fVar13 / *(float *)(param_1 + 0x40));
          if (uVar10 <= uVar7) {
            uVar10 = uVar7;
          }
          FUN_10a4ba824(plVar1,uVar10);
          plVar12 = *(long **)(param_1 + 0x28);
          if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
            unaff_x27 = (long *)((long)plVar12 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x27 = plVar8;
            if (plVar12 <= plVar8) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar8 / (ulong)plVar12;
              }
              unaff_x27 = (long *)((long)plVar8 - uVar10 * (long)plVar12);
            }
          }
        }
        lVar6 = *plVar1;
        plVar8 = *(long **)(lVar6 + (long)unaff_x27 * 8);
        if (plVar8 == (long *)0x0) {
          *plStack_78 = *plVar2;
          *plVar2 = (long)plStack_78;
          *(long **)(lVar6 + (long)unaff_x27 * 8) = plVar2;
          if (*plStack_78 != 0) {
            plVar8 = *(long **)(*plStack_78 + 8);
            if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar12 - 1U);
            }
            else if (plVar12 <= plVar8) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar8 / (ulong)plVar12;
              }
              plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar12);
            }
            *(long **)(*plVar1 + (long)plVar8 * 8) = plStack_78;
          }
        }
        else {
          *plStack_78 = *plVar8;
          *plVar8 = (long)plStack_78;
        }
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
        plVar11 = plStack_78;
LAB_10ac9e938:
        (**(code **)(*param_2 + 0x1e0))(param_2,plVar11 + 5);
        if (cStack_79 < '\0') {
          __ZdlPv(lStack_90);
        }
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 != (int)plVar5);
  }
  return;
}



/* Entry: 10ac9ea04; end: 10ac9eaf7;  */

void FUN_10ac9ea04(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    for (plVar1 = *(long **)(param_1 + 0x48); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110bf0340,plVar1 + 2);
      (**(code **)(*param_2 + 0x120))(param_2,plVar1 + 5,0);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  else {
    param_1 = param_1 + 0x38;
    FUN_10acd2d04(param_1,*(undefined8 *)(param_3 + 0x10));
    if (param_1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110bf0340,param_1 + 0x10);
      (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010ac9ea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ac9eaf8; end: 10ac9eaff;  */

void FUN_10ac9eaf8(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110bf0340,plVar1 + 2);
      (**(code **)(*param_2 + 0x120))(param_2,plVar1 + 5,0);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  else {
    param_1 = param_1 + 0x20;
    FUN_10acd2d04(param_1,*(undefined8 *)(param_3 + 0x10));
    if (param_1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110bf0340,param_1 + 0x10);
      (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010ac9ea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ac9eb00; end: 10ac9fdb7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac9ebc8) */

void FUN_10ac9eb00(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 auStack_98 [11];
  undefined1 uStack_81;
  ulong *apuStack_80 [3];
  ulong *apuStack_68 [3];
  
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_t_110c6b430);
  *(short *)(param_5 + 10) = (short)plVar4;
  switch((ulong)plVar4 & 0xffff) {
  case 0:
  case 4:
    (**(code **)(*param_6 + 0xa0))(apuStack_68,param_6,&PTR_DAT_110c6b450);
    FUN_10a0ec420(&uStack_e0,apuStack_68);
    func_0x000107c3193c(param_5 + 0x18);
    *(ulong *)(param_5 + 0x20) = uStack_d8;
    *(ulong *)(param_5 + 0x18) = uStack_e0;
    *(ulong *)(param_5 + 0x28) = uStack_d0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    apuStack_80[0] = &uStack_e0;
    FUN_10a0426d8(apuStack_80);
    break;
  case 1:
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c6b450);
    *(char *)(param_5 + 0x10) = (char)param_6;
    break;
  case 2:
    pcVar2 = *(code **)(*param_6 + 0x30);
    goto code_r0x00010ac9ee18;
  case 3:
    (**(code **)(*param_6 + 0x40))(param_6,&PTR_DAT_110c6b450);
    *(int *)(param_5 + 0x10) = (int)param_1;
    break;
  case 5:
    (**(code **)(*param_6 + 0xb8))(param_6,&PTR_DAT_110c6b450);
    *(undefined8 *)(param_5 + 0x10) = param_1;
    break;
  case 6:
    pcVar2 = *(code **)(*param_6 + 200);
code_r0x00010ac9ee18:
    (*pcVar2)(param_6,&PTR_DAT_110c6b450);
    *(int *)(param_5 + 0x10) = (int)param_6;
    break;
  case 7:
    (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110c6b450);
    puVar3 = (undefined8 *)0x10;
    __Znwm();
    *puVar3 = &PTR_FUN_110c6b9e0;
    *(int *)(puVar3 + 1) = (int)param_1;
    *(undefined4 *)((long)puVar3 + 0xc) = param_2;
    goto code_r0x00010ac9eee0;
  case 8:
    (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110c6b450);
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    *puVar3 = &PTR_FUN_110c6ba30;
    *(int *)(puVar3 + 1) = (int)param_1;
    *(undefined4 *)((long)puVar3 + 0xc) = param_2;
    *(undefined4 *)(puVar3 + 2) = param_3;
    goto code_r0x00010ac9eee0;
  case 9:
    (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c6b450);
    uVar10 = (undefined4)param_1;
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    ppuVar6 = &PTR_FUN_110c6ba80;
    goto code_r0x00010ac9eed4;
  case 10:
    (**(code **)(*param_6 + 0x1c8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    *puVar3 = &PTR_FUN_110c6bb20;
    puVar3[2] = uStack_d8;
    puVar3[1] = uStack_e0;
    puVar3[4] = uStack_c8;
    puVar3[3] = uStack_d0;
    *(undefined4 *)(puVar3 + 5) = uStack_c0;
    goto code_r0x00010ac9ef5c;
  case 0xb:
    (**(code **)(*param_6 + 0x1a8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    *puVar3 = &PTR_FUN_110c6bb70;
    puVar3[2] = uStack_d8;
    puVar3[1] = uStack_e0;
    puVar3[4] = uStack_c8;
    puVar3[3] = uStack_d0;
    puVar3[6] = uStack_b8;
    puVar3[5] = CONCAT44(uStack_bc,uStack_c0);
    puVar3[8] = uStack_a8;
    puVar3[7] = uStack_b0;
code_r0x00010ac9ef5c:
    plVar4 = *(long **)(param_5 + 0x30);
    *(undefined8 **)(param_5 + 0x30) = puVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    break;
  case 0xc:
    (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110c6b450);
    uVar10 = (undefined4)param_1;
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    ppuVar6 = &PTR_FUN_110c6bbc0;
    goto code_r0x00010ac9eed4;
  default:
LAB_10ac9f7d8:
    FUN_10a00946c(&UNK_10f6a12f2);
code_r0x00010ac9f7e4:
    uStack_81 = 1;
    auStack_98[0] = 0x76;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (apuStack_80,&UNK_10f63b9fc,auStack_98);
    FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
    FUN_10a0029c0(apuStack_68);
LAB_10ac9fbdc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac9fbe0);
    (*pcVar2)();
  case 0xf:
    plVar4 = param_6;
    (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110c6b470);
    switch((ulong)plVar4 & 0xffff) {
    case 0:
    case 4:
      (**(code **)(*param_6 + 0x60))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      *puVar3 = &PTR_FUN_110c6bc60;
      puVar3[2] = uStack_d8;
      puVar3[1] = uStack_e0;
      puVar3[3] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      plVar4 = *(long **)(param_5 + 0x30);
      *(undefined8 **)(param_5 + 0x30) = puVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      apuStack_68[0] = &uStack_e0;
      FUN_10a0426d8(apuStack_68);
      return;
    case 1:
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      uVar1 = uStack_e0;
      uVar7 = uStack_d8;
      if ((char)uStack_d0 == '\0') {
        uVar7 = 0;
      }
      func_0x00010737fadc(&uStack_e0,uVar7);
      if (uVar7 != 0) {
        uVar5 = 0;
        do {
          if (uStack_d8 <= uVar5) goto LAB_10ac9fbdc;
          uVar8 = uVar5 >> 6;
          uVar9 = 1L << (uVar5 & 0x3f);
          if (*(char *)(uVar1 + uVar5) == '\0') {
            uVar9 = *(ulong *)(uStack_e0 + uVar8 * 8) & (uVar9 ^ 0xffffffffffffffff);
          }
          else {
            uVar9 = *(ulong *)(uStack_e0 + uVar8 * 8) | uVar9;
          }
          *(ulong *)(uStack_e0 + uVar8 * 8) = uVar9;
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
      }
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      *puVar3 = &PTR_FUN_110c6bc10;
      puVar3[1] = uStack_e0;
      puVar3[3] = uStack_d0;
      puVar3[2] = uStack_d8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      plVar4 = *(long **)(param_5 + 0x30);
      *(undefined8 **)(param_5 + 0x30) = puVar3;
      if (plVar4 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      uVar7 = uStack_e0;
      if (uStack_e0 == 0) {
        return;
      }
      goto code_r0x00010ac9f7b8;
    case 2:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 2;
      if ((uStack_d8 & 3) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x000108a5942c(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b870;
      break;
    case 3:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 2;
      if ((uStack_d8 & 3) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x00010742a308(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b8d8;
      break;
    case 5:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 3;
      if ((uStack_d8 & 7) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x000108a851e4(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b928;
      break;
    case 6:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 2;
      if ((uStack_d8 & 3) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x0001074287b0(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b820;
      break;
    case 7:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 3;
      if ((uStack_d8 & 7) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x0001096b5544(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bcb0;
      break;
    case 8:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 / 0xc;
      if (uStack_d8 % 0xc != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x0001096b5198(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bd00;
      break;
    case 9:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 4;
      if ((uStack_d8 & 0xf) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x00010983d048(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bd50;
      break;
    case 10:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) != 0) {
        uVar7 = uStack_d8 / 0x24;
        if (uStack_d8 % 0x24 != 0) {
          uVar7 = uVar7 + 1;
        }
        FUN_10a4248c8(&uStack_100,uVar7);
        if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
        _memcpy(uStack_100,uStack_e0,uStack_d8);
        puVar3 = (undefined8 *)0x20;
        __Znwm();
        ppuVar6 = &PTR_FUN_110c6bdf0;
        break;
      }
      goto code_r0x00010ac9f7e4;
    case 0xb:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 6;
      if ((uStack_d8 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      FUN_10a01066c(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6be40;
      break;
    case 0xc:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 4;
      if ((uStack_d8 & 0xf) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x00010983d018(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6be90;
      break;
    default:
      goto LAB_10ac9f7d8;
    case 0x10:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 3;
      if ((uStack_d8 & 7) != 0) {
        uVar7 = uVar7 + 1;
      }
      FUN_10acd2fb4(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bee0;
      break;
    case 0x11:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 3;
      if ((uStack_d8 & 7) != 0) {
        uVar7 = uVar7 + 1;
      }
      func_0x0001090d98d8(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bf30;
      break;
    case 0x12:
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      FUN_10a0ff254(param_6,&PTR_DAT_110c6b450,&uStack_e0,FUN_10acd2f68);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b6b0;
      goto code_r0x00010ac9f2ec;
    case 0x13:
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      FUN_10a0ff254(param_6,&PTR_DAT_110c6b450,&uStack_e0,FUN_10ab55214);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b650;
code_r0x00010ac9f2ec:
      *puVar3 = ppuVar6;
      puVar3[2] = uStack_d8;
      puVar3[1] = uStack_e0;
      puVar3[3] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      plVar4 = *(long **)(param_5 + 0x30);
      *(undefined8 **)(param_5 + 0x30) = puVar3;
      if (plVar4 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      if (uStack_e0 == 0) {
        return;
      }
      uStack_d8 = uStack_e0;
      uVar7 = uStack_e0;
      goto code_r0x00010ac9f7b8;
    case 0x14:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      func_0x000108a3c9d0(&uStack_100,uStack_d8 - (uStack_d8 >> 1));
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b7b8;
      break;
    case 0x15:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      func_0x000108262984(&uStack_100,uStack_d8 - (uStack_d8 >> 1));
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6b768;
      break;
    case 0x16:
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      (**(code **)(*param_6 + 0x1d8))(&uStack_e0,param_6,&PTR_DAT_110c6b450);
      if ((uStack_d0 & 1) == 0) {
        uStack_81 = 1;
        auStack_98[0] = 0x76;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_80,&UNK_10f63b9fc,auStack_98);
        FUN_10a012db0(apuStack_68,apuStack_80,&UNK_10f63ba05);
        FUN_10a0029c0(apuStack_68);
        goto LAB_10ac9fbdc;
      }
      uVar7 = uStack_d8 >> 4;
      if ((uStack_d8 & 0xf) != 0) {
        uVar7 = uVar7 + 1;
      }
      FUN_10a4686f8(&uStack_100,uVar7);
      if ((uStack_d0 & 1) == 0) goto LAB_10ac9fbdc;
      _memcpy(uStack_100,uStack_e0,uStack_d8);
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar6 = &PTR_FUN_110c6bda0;
    }
    *puVar3 = ppuVar6;
    puVar3[2] = uStack_f8;
    puVar3[1] = uStack_100;
    puVar3[3] = uStack_f0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plVar4 = *(long **)(param_5 + 0x30);
    *(undefined8 **)(param_5 + 0x30) = puVar3;
    if ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 8))(plVar4), uStack_100 != 0)) {
      uStack_f8 = uStack_100;
      uVar7 = uStack_100;
code_r0x00010ac9f7b8:
      __ZdlPv(uVar7);
    }
    break;
  case 0x10:
    pcVar2 = *(code **)(*param_6 + 0x18);
    goto code_r0x00010ac9edcc;
  case 0x11:
    pcVar2 = *(code **)(*param_6 + 0x20);
code_r0x00010ac9edcc:
    (*pcVar2)(param_6,&PTR_DAT_110c6b450);
    *(long **)(param_5 + 0x10) = param_6;
    break;
  case 0x16:
    (**(code **)(*param_6 + 0x1b8))(param_6,&PTR_DAT_110c6b450);
    uVar10 = (undefined4)param_1;
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    ppuVar6 = &PTR_FUN_110c6bad0;
code_r0x00010ac9eed4:
    *puVar3 = ppuVar6;
    *(undefined4 *)(puVar3 + 1) = uVar10;
    *(undefined4 *)((long)puVar3 + 0xc) = param_2;
    *(undefined4 *)(puVar3 + 2) = param_3;
    *(undefined4 *)((long)puVar3 + 0x14) = param_4;
code_r0x00010ac9eee0:
    plVar4 = *(long **)(param_5 + 0x30);
    *(undefined8 **)(param_5 + 0x30) = puVar3;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ac9ef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10ac9fdb8; end: 10ac9ff63;  */

void FUN_10ac9fdb8(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  ushort uVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_x8;
  long *plVar13;
  undefined1 *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 ****appppuStack_e8 [2];
  char cStack_d1;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ****ppppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_t_110c6b430,(long)*(short *)(param_1 + 10));
  uVar4 = *(ushort *)(param_1 + 10);
  if (uVar4 < 4) {
    if (uVar4 < 2) {
      if (uVar4 == 0) goto LAB_10ac9feb0;
      if (uVar4 == 1) {
        uVar11 = (uint)*(byte *)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x70);
        goto LAB_10ac9fef0;
      }
    }
    else {
      if (uVar4 == 2) {
        uVar11 = *(uint *)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x40);
LAB_10ac9fef0:
                    /* WARNING: Could not recover jumptable at 0x00010ac9ff04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,&PTR_DAT_110c6b450,uVar11);
        return;
      }
      if (uVar4 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010ac9fe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x10),param_2,&PTR_DAT_110c6b450);
        return;
      }
    }
  }
  else if (uVar4 < 6) {
    if (uVar4 == 4) {
LAB_10ac9feb0:
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != *(long *)(param_1 + 0x20)) {
        if ((*(char *)(lVar3 + 0x17) < '\0') && (*(long *)(lVar3 + 8) < 0)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6b450,&stack0xffffffffffffffe0);
        return;
      }
      FUN_10a108c2c(&UNK_10f63b259);
      goto LAB_10ac9ff58;
    }
    if (uVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ac9feac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x68))(*(undefined8 *)(param_1 + 0x10),param_2,&PTR_DAT_110c6b450);
      return;
    }
  }
  else {
    if (uVar4 == 6) {
      uVar11 = *(uint *)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x50);
      goto LAB_10ac9fef0;
    }
    if (uVar4 == 0x10) {
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x48);
LAB_10ac9ff14:
                    /* WARNING: Could not recover jumptable at 0x00010ac9ff28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_2,&PTR_DAT_110c6b450,uVar12);
      return;
    }
    if (uVar4 == 0x11) {
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x58);
      goto LAB_10ac9ff14;
    }
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ac9ff48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
    return;
  }
LAB_10ac9ff58:
  puVar7 = &UNK_10f6a131e;
  FUN_10a00946c();
  func_0x000107c2b054(extraout_x8,&UNK_10f6a0902);
  plVar6 = *(long **)(puVar7 + 0x48);
  if (plVar6 != (long *)0x0) {
    do {
      uVar1 = plVar6[3];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x27)) {
        uVar1 = (ulong)*(byte *)((long)plVar6 + 0x27);
      }
      FUN_10a003c90(appppuStack_e8,uVar1 + 2,auStack_98);
      pppppuVar8 = (undefined8 *****)appppuStack_e8[0];
      if (-1 < cStack_d1) {
        pppppuVar8 = appppuStack_e8;
      }
      if (uVar1 != 0) {
        plVar13 = (long *)plVar6[2];
        if (-1 < *(char *)((long)plVar6 + 0x27)) {
          plVar13 = plVar6 + 2;
        }
        _memmove(pppppuVar8,plVar13,uVar1);
      }
      *(undefined2 *)((long)pppppuVar8 + uVar1) = 0x203a;
      *(undefined1 *)((undefined2 *)((long)pppppuVar8 + uVar1) + 1) = 0;
      puVar10 = (undefined8 *)plVar6[8];
      if (puVar10 != (undefined8 *)plVar6[9]) {
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          func_0x000107c3192c(&puStack_100,*puVar10,puVar10[1]);
        }
        else {
          uStack_f8 = puVar10[1];
          puStack_100 = (undefined1 *)*puVar10;
          uStack_f0 = puVar10[2];
        }
        goto LAB_10aca009c;
      }
      switch(*(short *)((long)plVar6 + 0x32)) {
      case 1:
        uVar11 = (uint)*(byte *)(plVar6 + 7);
        goto code_r0x00010aca01f8;
      case 2:
        uVar11 = *(uint *)(plVar6 + 7);
code_r0x00010aca01f8:
        __ZNSt3__19to_stringEi(&puStack_100,uVar11);
        break;
      case 3:
        __ZNSt3__19to_stringEf(&puStack_100,(int)plVar6[7]);
        break;
      default:
        __ZNSt3__19to_stringEi(auStack_98,(int)*(short *)((long)plVar6 + 0x32));
        puVar10 = auStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar10,0,&UNK_10f6a134b,0x18);
code_r0x00010aca01c0:
        uStack_f8 = puVar10[1];
        puStack_100 = (undefined1 *)*puVar10;
        uStack_f0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        break;
      case 5:
        __ZNSt3__19to_stringEd(&puStack_100,plVar6[7]);
        break;
      case 6:
        __ZNSt3__19to_stringEj(&puStack_100,(int)plVar6[7]);
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x16:
        plVar13 = (long *)plVar6[0xb];
        if (plVar13 == (long *)0x0) {
          __ZNSt3__19to_stringEi(auStack_98);
          puVar10 = auStack_98;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar10,0,&UNK_10f6a1338,0x12);
          goto code_r0x00010aca01c0;
        }
        (**(code **)(*plVar13 + 0x20))(&puStack_100,plVar13);
        break;
      case 0x10:
        __ZNSt3__19to_stringEx(&puStack_100,plVar6[7]);
        break;
      case 0x11:
        __ZNSt3__19to_stringEy(&puStack_100,plVar6[7]);
      }
LAB_10aca009c:
      uVar1 = uStack_f8;
      ppuVar5 = (undefined1 **)puStack_100;
      if (-1 < (long)uStack_f0) {
        uVar1 = uStack_f0 >> 0x38;
        ppuVar5 = &puStack_100;
      }
      pppppuVar8 = appppuStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar8,ppuVar5,uVar1);
      pppuStack_c8 = pppppuVar8[1];
      pppuStack_d0 = *pppppuVar8;
      pppuStack_c0 = pppppuVar8[2];
      pppppuVar8[1] = (undefined8 ****)0x0;
      pppppuVar8[2] = (undefined8 ****)0x0;
      *pppppuVar8 = (undefined8 ****)0x0;
      ppppuVar9 = &pppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar9,&DAT_10f68f19e,2);
      ppuStack_a8 = ppppuVar9[1];
      ppppuStack_b0 = (undefined8 ****)*ppppuVar9;
      ppuStack_a0 = ppppuVar9[2];
      ppppuVar9[1] = (undefined8 ***)0x0;
      ppppuVar9[2] = (undefined8 ***)0x0;
      *ppppuVar9 = (undefined8 ***)0x0;
      pppuVar2 = (undefined8 ***)ppuStack_a8;
      pppppuVar8 = (undefined8 *****)ppppuStack_b0;
      if (-1 < (long)ppuStack_a0) {
        pppuVar2 = (undefined8 ***)((ulong)ppuStack_a0 >> 0x38);
        pppppuVar8 = &ppppuStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,pppppuVar8,pppuVar2);
      if ((long)ppuStack_a0 < 0) {
        __ZdlPv(ppppuStack_b0);
      }
      if ((long)pppuStack_c0 < 0) {
        __ZdlPv(pppuStack_d0);
      }
      if ((long)uStack_f0 < 0) {
        __ZdlPv(puStack_100);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(appppuStack_e8[0]);
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}



/* Entry: 10ac9ff64; end: 10aca02f7;  */

void FUN_10ac9ff64(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 ****appppuStack_c8 [2];
  char cStack_b1;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&UNK_10f6a0902);
  plVar9 = *(long **)(param_2 + 0x48);
  if (plVar9 != (long *)0x0) {
    do {
      uVar1 = plVar9[3];
      if (-1 < (char)*(byte *)((long)plVar9 + 0x27)) {
        uVar1 = (ulong)*(byte *)((long)plVar9 + 0x27);
      }
      FUN_10a003c90(appppuStack_c8,uVar1 + 2,auStack_78);
      pppppuVar5 = (undefined8 *****)appppuStack_c8[0];
      if (-1 < cStack_b1) {
        pppppuVar5 = appppuStack_c8;
      }
      if (uVar1 != 0) {
        plVar8 = (long *)plVar9[2];
        if (-1 < *(char *)((long)plVar9 + 0x27)) {
          plVar8 = plVar9 + 2;
        }
        _memmove(pppppuVar5,plVar8,uVar1);
      }
      *(undefined2 *)((long)pppppuVar5 + uVar1) = 0x203a;
      *(undefined1 *)((undefined2 *)((long)pppppuVar5 + uVar1) + 1) = 0;
      puVar7 = (undefined8 *)plVar9[8];
      if (puVar7 != (undefined8 *)plVar9[9]) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000107c3192c(&puStack_e0,*puVar7,puVar7[1]);
        }
        else {
          uStack_d8 = puVar7[1];
          puStack_e0 = (undefined1 *)*puVar7;
          uStack_d0 = puVar7[2];
        }
        goto LAB_10aca009c;
      }
      switch(*(short *)((long)plVar9 + 0x32)) {
      case 1:
        uVar4 = (uint)*(byte *)(plVar9 + 7);
        goto code_r0x00010aca01f8;
      case 2:
        uVar4 = *(uint *)(plVar9 + 7);
code_r0x00010aca01f8:
        __ZNSt3__19to_stringEi(&puStack_e0,uVar4);
        break;
      case 3:
        __ZNSt3__19to_stringEf(&puStack_e0,(int)plVar9[7]);
        break;
      default:
        __ZNSt3__19to_stringEi(auStack_78,(int)*(short *)((long)plVar9 + 0x32));
        puVar7 = auStack_78;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar7,0,&UNK_10f6a134b,0x18);
code_r0x00010aca01c0:
        uStack_d8 = puVar7[1];
        puStack_e0 = (undefined1 *)*puVar7;
        uStack_d0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        if (cStack_61 < '\0') {
          __ZdlPv(auStack_78[0]);
        }
        break;
      case 5:
        __ZNSt3__19to_stringEd(&puStack_e0,plVar9[7]);
        break;
      case 6:
        __ZNSt3__19to_stringEj(&puStack_e0,(int)plVar9[7]);
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x16:
        plVar8 = (long *)plVar9[0xb];
        if (plVar8 == (long *)0x0) {
          __ZNSt3__19to_stringEi(auStack_78);
          puVar7 = auStack_78;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f6a1338,0x12);
          goto code_r0x00010aca01c0;
        }
        (**(code **)(*plVar8 + 0x20))(&puStack_e0,plVar8);
        break;
      case 0x10:
        __ZNSt3__19to_stringEx(&puStack_e0,plVar9[7]);
        break;
      case 0x11:
        __ZNSt3__19to_stringEy(&puStack_e0,plVar9[7]);
      }
LAB_10aca009c:
      uVar1 = uStack_d8;
      ppuVar3 = (undefined1 **)puStack_e0;
      if (-1 < (long)uStack_d0) {
        uVar1 = uStack_d0 >> 0x38;
        ppuVar3 = &puStack_e0;
      }
      pppppuVar5 = appppuStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar5,ppuVar3,uVar1);
      pppuStack_a8 = pppppuVar5[1];
      pppuStack_b0 = *pppppuVar5;
      pppuStack_a0 = pppppuVar5[2];
      pppppuVar5[1] = (undefined8 ****)0x0;
      pppppuVar5[2] = (undefined8 ****)0x0;
      *pppppuVar5 = (undefined8 ****)0x0;
      ppppuVar6 = &pppuStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar6,&DAT_10f68f19e,2);
      ppuStack_88 = ppppuVar6[1];
      ppppuStack_90 = (undefined8 ****)*ppppuVar6;
      ppuStack_80 = ppppuVar6[2];
      ppppuVar6[1] = (undefined8 ***)0x0;
      ppppuVar6[2] = (undefined8 ***)0x0;
      *ppppuVar6 = (undefined8 ***)0x0;
      pppuVar2 = (undefined8 ***)ppuStack_88;
      pppppuVar5 = (undefined8 *****)ppppuStack_90;
      if (-1 < (long)ppuStack_80) {
        pppuVar2 = (undefined8 ***)((ulong)ppuStack_80 >> 0x38);
        pppppuVar5 = &ppppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppppuVar5,pppuVar2);
      if ((long)ppuStack_80 < 0) {
        __ZdlPv(ppppuStack_90);
      }
      if ((long)pppuStack_a0 < 0) {
        __ZdlPv(pppuStack_b0);
      }
      if ((long)uStack_d0 < 0) {
        __ZdlPv(puStack_e0);
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(appppuStack_c8[0]);
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}



/* Entry: 10aca02f8; end: 10aca06ef;  */

void FUN_10aca02f8(long param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if (param_1 != 0) {
    plVar11 = (long *)*param_2;
    while (plVar11 != param_2 + 1) {
      lVar9 = (long)(plVar11 + 4);
      piVar5 = (int *)plVar11[7];
      iVar1 = *piVar5;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          lVar4 = (long)*(char *)((long)plVar11 + 0x37);
          if (lVar4 < 0) {
            lVar9 = plVar11[4];
            lVar4 = plVar11[5];
          }
          uVar7 = (ulong)uStack_80 >> 0x20;
          uStack_80 = CONCAT44((int)uVar7,(float)*(double *)(piVar5 + 2));
          FUN_10aca0aac(param_1,lVar9,lVar4,&uStack_80);
        }
        else if (iVar1 == 1) {
          lVar4 = (long)*(char *)((long)plVar11 + 0x37);
          if (lVar4 < 0) {
            lVar9 = plVar11[4];
            lVar4 = plVar11[5];
          }
          FUN_10a53e510(param_1,lVar9,lVar4,*(undefined8 *)(piVar5 + 2));
        }
      }
      else if (iVar1 == 4) {
        plVar10 = *(long **)(piVar5 + 2);
        lVar4 = plVar10[1] - *plVar10;
        if (lVar4 != 0) {
          iVar1 = **(int **)*plVar10;
          uVar7 = lVar4 >> 3;
          if (iVar1 == 0) {
            lVar4 = (long)*(char *)((long)plVar11 + 0x37);
            if (lVar4 < 0) {
              lVar9 = plVar11[4];
              lVar4 = plVar11[5];
            }
            uStack_80 = 0;
            uVar6 = 0;
            lStack_78 = 0;
            uStack_70 = 0;
            do {
              uVar8 = uVar6 & 0xffffffff;
              func_0x0001098390a4(&UNK_10f63c7bf,0x174,&UNK_10f650e37,
                                  uVar8 < (ulong)(plVar10[1] - *plVar10 >> 3));
              if ((ulong)(plVar10[1] - *plVar10 >> 3) <= uVar8) {
                FUN_10a34e7b4();
                goto LAB_10aca0690;
              }
              piVar5 = *(int **)(*plVar10 + uVar8 * 8);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1f7,&UNK_10f6514a4,*piVar5 == 0);
              plStack_68 = (long *)CONCAT44(plStack_68._4_4_,(float)*(double *)(piVar5 + 2));
              FUN_10a001c34(&uStack_80,&plStack_68);
              uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            FUN_10aca12bc(param_1,lVar9,lVar4,&uStack_80);
            if (uStack_80 != 0) {
              lStack_78 = uStack_80;
LAB_10aca0620:
              __ZdlPv();
            }
          }
          else if (iVar1 == 1) {
            lVar4 = (long)*(char *)((long)plVar11 + 0x37);
            if (lVar4 < 0) {
              lVar9 = plVar11[4];
              lVar4 = plVar11[5];
            }
            uStack_80 = 0;
            uVar6 = 0;
            lStack_78 = 0;
            uStack_70 = 0;
            do {
              uVar8 = uVar6 & 0xffffffff;
              func_0x0001098390a4(&UNK_10f63c7bf,0x174,&UNK_10f650e37,
                                  uVar8 < (ulong)(plVar10[1] - *plVar10 >> 3));
              if ((ulong)(plVar10[1] - *plVar10 >> 3) <= uVar8) {
                FUN_10a34e7b4();
                goto LAB_10aca0690;
              }
              piVar5 = *(int **)(*plVar10 + uVar8 * 8);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1f1,&UNK_10f580d70,*piVar5 == 1);
              FUN_10a0b4ec0(&uStack_80,*(undefined8 *)(piVar5 + 2));
              uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            FUN_10aca1724(param_1,lVar9,lVar4,&uStack_80);
            plStack_68 = &uStack_80;
            FUN_10a0426d8(&plStack_68);
          }
          else if (iVar1 == 2) {
            lVar4 = (long)*(char *)((long)plVar11 + 0x37);
            if (lVar4 < 0) {
              lVar9 = plVar11[4];
              lVar4 = plVar11[5];
            }
            uStack_80 = 0;
            uVar6 = 0;
            lStack_78 = 0;
            uStack_70 = 0;
            do {
              uVar8 = uVar6 & 0xffffffff;
              func_0x0001098390a4(&UNK_10f63c7bf,0x174,&UNK_10f650e37,
                                  uVar8 < (ulong)(plVar10[1] - *plVar10 >> 3));
              if ((ulong)(plVar10[1] - *plVar10 >> 3) <= uVar8) {
                FUN_10a34e7b4();
LAB_10aca0690:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca0694);
                (*pcVar2)();
              }
              piVar5 = *(int **)(*plVar10 + uVar8 * 8);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1eb,&UNK_10f6514be,*piVar5 == 2);
              func_0x0001078db3d4(&uStack_80,piVar5 + 2);
              uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            FUN_10aca0e6c(param_1,lVar9,lVar4,&uStack_80);
            if (uStack_80 != 0) goto LAB_10aca0620;
          }
        }
      }
      else if (iVar1 == 2) {
        lVar4 = (long)*(char *)((long)plVar11 + 0x37);
        if (lVar4 < 0) {
          lVar9 = plVar11[4];
          lVar4 = plVar11[5];
        }
        FUN_10aca06f0(param_1,lVar9,lVar4,piVar5 + 2);
      }
      plVar10 = (long *)plVar11[1];
      plVar12 = plVar11;
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar12[2];
          bVar3 = (long *)*plVar11 != plVar12;
          plVar12 = plVar11;
        } while (bVar3);
      }
      else {
        do {
          plVar11 = plVar10;
          plVar10 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 10aca06f0; end: 10aca0aab;  */

long ****** FUN_10aca06f0(long ******param_1,undefined8 param_2,long ****param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  undefined8 uVar6;
  long ******pppppplVar7;
  ulong uVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  long ******pppppplVar14;
  long ******unaff_x25;
  long ******unaff_x26;
  undefined1 *puVar15;
  long ******unaff_x27;
  long ****pppplStack_320;
  long ***ppplStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *****ppppplStack_2c8;
  long ***ppplStack_2c0;
  undefined8 uStack_2b8;
  long ****pppplStack_2b0;
  long *****ppppplStack_2a8;
  undefined8 uStack_2a0;
  long *****ppppplStack_238;
  long ***ppplStack_230;
  undefined8 uStack_228;
  long ****pppplStack_220;
  long *****ppppplStack_218;
  undefined8 uStack_210;
  long *****ppppplStack_198;
  long ***ppplStack_190;
  undefined8 uStack_188;
  long ****pppplStack_180;
  long *****ppppplStack_178;
  undefined8 uStack_170;
  long *****ppppplStack_100;
  long ***ppplStack_f8;
  undefined8 uStack_f0;
  long ****pppplStack_e8;
  long *****ppppplStack_e0;
  undefined8 uStack_d8;
  long *****ppppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  long *****ppppplStack_60;
  undefined8 uStack_58;
  
  pppppplVar12 = &ppppplStack_80;
  pppppplVar9 = &ppppplStack_80;
  if ((long ****)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    uVar6 = 0;
    func_0x00010a4baa30(&pppplStack_68,0);
    if (uStack_70._7_1_ < '\0') {
      __ZdlPv(ppppplStack_80);
    }
    __Unwind_Resume();
    pppppplVar12 = &ppppplStack_100;
    pppppplVar9 = &ppppplStack_100;
    if ((long ****)0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
      uVar6 = 0;
      func_0x00010a4baa30(&pppplStack_e8,0);
      if (uStack_f0._7_1_ < '\0') {
        __ZdlPv(ppppplStack_100);
      }
      __Unwind_Resume();
      if ((long ****)0x7ffffffffffffff7 < param_3) {
        func_0x000109ffde50();
        uVar6 = 0;
        func_0x00010a4baa30(&pppplStack_180,0);
        if (uStack_188._7_1_ < '\0') {
          __ZdlPv(ppppplStack_198);
        }
        __Unwind_Resume();
        if ((long ****)0x7ffffffffffffff7 < param_3) {
          func_0x000109ffde50();
          uVar6 = 0;
          func_0x00010a4baa30(&pppplStack_220,0);
          if (uStack_228._7_1_ < '\0') {
            __ZdlPv(ppppplStack_238);
          }
          __Unwind_Resume();
          if ((long ****)0x7ffffffffffffff7 < param_3) {
            func_0x000109ffde50();
            func_0x00010a4baa30(&pppplStack_2b0,0);
            if (uStack_2b8._7_1_ < '\0') {
              __ZdlPv(ppppplStack_2c8);
            }
            __Unwind_Resume();
            pppppplVar12 = (long ******)&pppplStack_320;
            if (param_1 == (long ******)0x0) {
              pppppplVar12 = (long ******)0x0;
            }
            else {
              pppplStack_320 = &ppplStack_318;
              ppplStack_318 = (long ***)0x0;
              uStack_310 = 0;
              uStack_308 = 0;
              uStack_300 = 0;
              uStack_2f8 = 0;
              func_0x00010983a984();
              if (((ulong)pppppplVar12 & 1) != 0) {
                FUN_10aca02f8(param_1,&pppplStack_320);
              }
              func_0x000109839668(&pppplStack_320);
            }
            return pppppplVar12;
          }
          if (param_3 < (long ****)0x17) {
            uStack_2b8 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_2b8);
            pppppplVar9 = &ppppplStack_2c8;
            if (param_3 == (long ****)0x0) goto LAB_10aca17ac;
          }
          else {
            pppppplVar12 = (long ******)0x19;
            if (((ulong)param_3 | 7) != 0x17) {
              pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
            }
            pppppplVar9 = pppppplVar12;
            __Znwm();
            uStack_2b8 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
            ppppplStack_2c8 = (long *****)pppppplVar9;
            ppplStack_2c0 = (long ***)param_3;
          }
          _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca17ac:
          *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
          FUN_10ac9e388(param_1,&ppppplStack_2c8,0);
          pppppplVar12 = param_1 + 7;
          pppppplVar9 = pppppplVar12;
          func_0x000107c2b05c(pppppplVar12,&ppppplStack_2c8);
          pppppplVar14 = (long ******)param_1[8];
          if (pppppplVar14 != (long ******)0x0) {
            puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
            if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
              unaff_x25 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
            }
            else {
              unaff_x25 = pppppplVar9;
              if (pppppplVar14 <= pppppplVar9) {
                uVar8 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
                }
                unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
              }
            }
            if ((*pppppplVar12)[(long)unaff_x25] != (long ****)0x0) {
              for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x25];
                  ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
                pppppplVar7 = (long ******)ppppplVar13[1];
                if (pppppplVar7 == pppppplVar9) {
                  pppppplVar7 = pppppplVar12;
                  func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_2c8);
                  if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca19fc;
                }
                else {
                  if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
                    pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
                  }
                  else if (pppppplVar14 <= pppppplVar7) {
                    uVar8 = 0;
                    if (pppppplVar14 != (long ******)0x0) {
                      uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
                    }
                    pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
                  }
                  if (pppppplVar7 != unaff_x25) break;
                }
              }
            }
          }
          ppppplVar13 = (long *****)0x60;
          __Znwm();
          uStack_2a0 = 0;
          *ppppplVar13 = (long ****)0x0;
          ppppplVar13[1] = (long ****)pppppplVar9;
          pppplStack_2b0 = (long ****)ppppplVar13;
          ppppplStack_2a8 = (long *****)pppppplVar12;
          if ((long)uStack_2b8 < 0) {
            func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_2c8,ppplStack_2c0);
          }
          else {
            ppppplVar13[3] = (long ****)ppplStack_2c0;
            ppppplVar13[2] = (long ****)ppppplStack_2c8;
            ppppplVar13[4] = uStack_2b8;
          }
          ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
          *(undefined1 *)(ppppplVar13 + 6) = 0;
          *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
          ppppplVar13[9] = (long ****)0x0;
          ppppplVar13[8] = (long ****)0x0;
          ppppplVar13[0xb] = (long ****)0x0;
          ppppplVar13[10] = (long ****)0x0;
          FUN_10acc4edc(ppppplVar13 + 5,*param_4,param_4[1]);
          uStack_2a0 = CONCAT71(uStack_2a0._1_7_,1);
          if ((pppppplVar14 == (long ******)0x0) ||
             (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
            uVar8 = 1;
            if ((long ******)0x2 < pppppplVar14) {
              uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
            }
            uVar8 = uVar8 | (long)pppppplVar14 << 1;
            uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
            if (uVar8 <= uVar10) {
              uVar8 = uVar10;
            }
            FUN_10a4ba824(pppppplVar12,uVar8);
            pppppplVar14 = (long ******)param_1[8];
            if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
              unaff_x25 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
            }
            else {
              unaff_x25 = pppppplVar9;
              if (pppppplVar14 <= pppppplVar9) {
                uVar8 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
                }
                unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
              }
            }
          }
          ppppplVar13 = *pppppplVar12;
          pppplVar11 = ppppplVar13[(long)unaff_x25];
          if (pppplVar11 == (long ****)0x0) {
            pppppplVar9 = param_1 + 9;
            *pppplStack_2b0 = (long ***)*pppppplVar9;
            *pppppplVar9 = (long *****)pppplStack_2b0;
            ppppplVar13[(long)unaff_x25] = (long ****)pppppplVar9;
            if ((long ****)*pppplStack_2b0 != (long ****)0x0) {
              pppppplVar9 = (long ******)(*pppplStack_2b0)[1];
              if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
                pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
              }
              else if (pppppplVar14 <= pppppplVar9) {
                uVar8 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
                }
                pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
              }
              (*pppppplVar12)[(long)pppppplVar9] = pppplStack_2b0;
            }
          }
          else {
            *pppplStack_2b0 = *pppplVar11;
            *pppplVar11 = (long ***)pppplStack_2b0;
          }
          param_1[10] = (long *****)((long)param_1[10] + 1);
          ppppplVar13 = (long *****)pppplStack_2b0;
LAB_10aca19fc:
          pppppplVar12 = param_1;
          func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_2c8);
          if (*(char *)(param_1[0x11] + 1) == '\x01') {
            FUN_10a54a030(&pppplStack_2b0,param_1 + 5);
            pppppplVar12 = param_1 + 0x10;
            FUN_10a549a74(pppppplVar12,&pppplStack_2b0,&ppppplStack_2c8);
            pppppplVar9 = (long ******)ppppplStack_2a8;
            if ((long ******)ppppplStack_2a8 != (long ******)0x0) {
              pppppplVar14 = (long ******)(ppppplStack_2a8 + 1);
              do {
                ppppplVar13 = *pppppplVar14;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
                if (bVar4) {
                  *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppplVar13 == (long *****)0x0) {
                (*(code *)(*ppppplStack_2a8)[2])(ppppplStack_2a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
                pppppplVar12 = pppppplVar9;
              }
            }
          }
          if ((long)uStack_2b8 < 0) {
            __ZdlPv(ppppplStack_2c8);
            pppppplVar12 = (long ******)ppppplStack_2c8;
          }
          return pppppplVar12;
        }
        if (param_3 < (long ****)0x17) {
          uStack_228 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_228);
          pppppplVar9 = &ppppplStack_238;
          if (param_3 == (long ****)0x0) goto LAB_10aca1348;
        }
        else {
          pppppplVar12 = (long ******)0x19;
          if (((ulong)param_3 | 7) != 0x17) {
            pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
          }
          pppppplVar9 = pppppplVar12;
          __Znwm();
          uStack_228 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
          ppppplStack_238 = (long *****)pppppplVar9;
          ppplStack_230 = (long ***)param_3;
        }
        _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca1348:
        *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
        FUN_10ac9e388(param_1,&ppppplStack_238,0);
        pppppplVar12 = param_1 + 7;
        pppppplVar9 = pppppplVar12;
        func_0x000107c2b05c(pppppplVar12,&ppppplStack_238);
        pppppplVar14 = (long ******)param_1[8];
        if (pppppplVar14 != (long ******)0x0) {
          puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
          if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
            unaff_x27 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
          }
          else {
            unaff_x27 = pppppplVar9;
            if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              unaff_x27 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
          }
          if ((*pppppplVar12)[(long)unaff_x27] != (long ****)0x0) {
            for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x27];
                ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
              pppppplVar7 = (long ******)ppppplVar13[1];
              if (pppppplVar7 == pppppplVar9) {
                pppppplVar7 = pppppplVar12;
                func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_238);
                if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca15dc;
              }
              else {
                if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
                  pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
                }
                else if (pppppplVar14 <= pppppplVar7) {
                  uVar8 = 0;
                  if (pppppplVar14 != (long ******)0x0) {
                    uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
                  }
                  pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
                }
                if (pppppplVar7 != unaff_x27) break;
              }
            }
          }
        }
        ppppplVar13 = (long *****)0x60;
        __Znwm();
        uStack_210 = 0;
        *ppppplVar13 = (long ****)0x0;
        ppppplVar13[1] = (long ****)pppppplVar9;
        pppplStack_220 = (long ****)ppppplVar13;
        ppppplStack_218 = (long *****)pppppplVar12;
        if ((long)uStack_228 < 0) {
          func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_238,ppplStack_230);
        }
        else {
          ppppplVar13[3] = (long ****)ppplStack_230;
          ppppplVar13[2] = (long ****)ppppplStack_238;
          ppppplVar13[4] = uStack_228;
        }
        ppppplVar13[9] = (long ****)0x0;
        ppppplVar13[8] = (long ****)0x0;
        *(undefined1 *)(ppppplVar13 + 6) = 0;
        ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
        *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
        ppppplVar13[0xb] = (long ****)0x0;
        ppppplVar13[10] = (long ****)0x0;
        lVar1 = *param_4;
        lVar2 = param_4[1];
        pppplVar11 = (long ****)0x20;
        __Znwm();
        *pppplVar11 = (long ***)&PTR_FUN_110c6b8d8;
        pppplVar11[2] = (long ***)0x0;
        pppplVar11[3] = (long ***)0x0;
        pppplVar11[1] = (long ***)0x0;
        FUN_10a0ca588(pppplVar11 + 1,lVar1,lVar2,lVar2 - lVar1 >> 2);
        pppplVar5 = ppppplVar13[0xb];
        ppppplVar13[0xb] = pppplVar11;
        if (pppplVar5 != (long ****)0x0) {
          (*(code *)(*pppplVar5)[1])();
        }
        uStack_210 = CONCAT71(uStack_210._1_7_,1);
        if ((pppppplVar14 == (long ******)0x0) ||
           (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
          uVar8 = 1;
          if ((long ******)0x2 < pppppplVar14) {
            uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
          }
          uVar8 = uVar8 | (long)pppppplVar14 << 1;
          uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
          if (uVar8 <= uVar10) {
            uVar8 = uVar10;
          }
          FUN_10a4ba824(pppppplVar12,uVar8);
          pppppplVar14 = (long ******)param_1[8];
          if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
            unaff_x27 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
          }
          else {
            unaff_x27 = pppppplVar9;
            if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              unaff_x27 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
          }
        }
        ppppplVar13 = *pppppplVar12;
        pppplVar11 = ppppplVar13[(long)unaff_x27];
        if (pppplVar11 == (long ****)0x0) {
          pppppplVar9 = param_1 + 9;
          *pppplStack_220 = (long ***)*pppppplVar9;
          *pppppplVar9 = (long *****)pppplStack_220;
          ppppplVar13[(long)unaff_x27] = (long ****)pppppplVar9;
          if ((long ****)*pppplStack_220 != (long ****)0x0) {
            pppppplVar9 = (long ******)(*pppplStack_220)[1];
            if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
              pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
            }
            else if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
            (*pppppplVar12)[(long)pppppplVar9] = pppplStack_220;
          }
        }
        else {
          *pppplStack_220 = *pppplVar11;
          *pppplVar11 = (long ***)pppplStack_220;
        }
        param_1[10] = (long *****)((long)param_1[10] + 1);
        ppppplVar13 = (long *****)pppplStack_220;
LAB_10aca15dc:
        pppppplVar12 = param_1;
        func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_238);
        if (*(char *)(param_1[0x11] + 1) == '\x01') {
          FUN_10a54a030(&pppplStack_220,param_1 + 5);
          pppppplVar12 = param_1 + 0x10;
          FUN_10a549a74(pppppplVar12,&pppplStack_220,&ppppplStack_238);
          pppppplVar9 = (long ******)ppppplStack_218;
          if ((long ******)ppppplStack_218 != (long ******)0x0) {
            pppppplVar14 = (long ******)(ppppplStack_218 + 1);
            do {
              ppppplVar13 = *pppppplVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
              if (bVar4) {
                *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppplVar13 == (long *****)0x0) {
              (*(code *)(*ppppplStack_218)[2])(ppppplStack_218);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
              pppppplVar12 = pppppplVar9;
            }
          }
        }
        if ((long)uStack_228 < 0) {
          __ZdlPv(ppppplStack_238);
          pppppplVar12 = (long ******)ppppplStack_238;
        }
        return pppppplVar12;
      }
      if (param_3 < (long ****)0x17) {
        uStack_188 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_188);
        pppppplVar9 = &ppppplStack_198;
        if (param_3 == (long ****)0x0) goto LAB_10aca0ef8;
      }
      else {
        pppppplVar12 = (long ******)0x19;
        if (((ulong)param_3 | 7) != 0x17) {
          pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
        }
        pppppplVar9 = pppppplVar12;
        __Znwm();
        uStack_188 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
        ppppplStack_198 = (long *****)pppppplVar9;
        ppplStack_190 = (long ***)param_3;
      }
      _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca0ef8:
      *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
      FUN_10ac9e388(param_1,&ppppplStack_198,0);
      pppppplVar12 = param_1 + 7;
      pppppplVar9 = pppppplVar12;
      func_0x000107c2b05c(pppppplVar12,&ppppplStack_198);
      pppppplVar14 = (long ******)param_1[8];
      if (pppppplVar14 != (long ******)0x0) {
        puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
        if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
          unaff_x26 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
        }
        else {
          unaff_x26 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x26 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
        }
        if ((*pppppplVar12)[(long)unaff_x26] != (long ****)0x0) {
          for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x26];
              ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
            pppppplVar7 = (long ******)ppppplVar13[1];
            if (pppppplVar7 == pppppplVar9) {
              pppppplVar7 = pppppplVar12;
              func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_198);
              if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca1174;
            }
            else {
              if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
                pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
              }
              else if (pppppplVar14 <= pppppplVar7) {
                uVar8 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
                }
                pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
              }
              if (pppppplVar7 != unaff_x26) break;
            }
          }
        }
      }
      ppppplVar13 = (long *****)0x60;
      __Znwm();
      uStack_170 = 0;
      *ppppplVar13 = (long ****)0x0;
      ppppplVar13[1] = (long ****)pppppplVar9;
      pppplStack_180 = (long ****)ppppplVar13;
      ppppplStack_178 = (long *****)pppppplVar12;
      if ((long)uStack_188 < 0) {
        func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_198,ppplStack_190);
      }
      else {
        ppppplVar13[3] = (long ****)ppplStack_190;
        ppppplVar13[2] = (long ****)ppppplStack_198;
        ppppplVar13[4] = uStack_188;
      }
      ppppplVar13[9] = (long ****)0x0;
      ppppplVar13[8] = (long ****)0x0;
      *(undefined1 *)(ppppplVar13 + 6) = 0;
      ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
      ppppplVar13[0xb] = (long ****)0x0;
      ppppplVar13[10] = (long ****)0x0;
      pppplVar11 = (long ****)0x20;
      __Znwm();
      *pppplVar11 = (long ***)&PTR_FUN_110c6bc10;
      func_0x000105007b50(pppplVar11 + 1,param_4);
      pppplVar5 = ppppplVar13[0xb];
      ppppplVar13[0xb] = pppplVar11;
      if (pppplVar5 != (long ****)0x0) {
        (*(code *)(*pppplVar5)[1])();
      }
      uStack_170 = CONCAT71(uStack_170._1_7_,1);
      if ((pppppplVar14 == (long ******)0x0) ||
         (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
        uVar8 = 1;
        if ((long ******)0x2 < pppppplVar14) {
          uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
        }
        uVar8 = uVar8 | (long)pppppplVar14 << 1;
        uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        FUN_10a4ba824(pppppplVar12,uVar8);
        pppppplVar14 = (long ******)param_1[8];
        if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
          unaff_x26 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
        }
        else {
          unaff_x26 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x26 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
        }
      }
      ppppplVar13 = *pppppplVar12;
      pppplVar11 = ppppplVar13[(long)unaff_x26];
      if (pppplVar11 == (long ****)0x0) {
        pppppplVar9 = param_1 + 9;
        *pppplStack_180 = (long ***)*pppppplVar9;
        *pppppplVar9 = (long *****)pppplStack_180;
        ppppplVar13[(long)unaff_x26] = (long ****)pppppplVar9;
        if ((long ****)*pppplStack_180 != (long ****)0x0) {
          pppppplVar9 = (long ******)(*pppplStack_180)[1];
          if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
            pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
          }
          else if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
          (*pppppplVar12)[(long)pppppplVar9] = pppplStack_180;
        }
      }
      else {
        *pppplStack_180 = *pppplVar11;
        *pppplVar11 = (long ***)pppplStack_180;
      }
      param_1[10] = (long *****)((long)param_1[10] + 1);
      ppppplVar13 = (long *****)pppplStack_180;
LAB_10aca1174:
      pppppplVar12 = param_1;
      func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_198);
      if (*(char *)(param_1[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_180,param_1 + 5);
        pppppplVar12 = param_1 + 0x10;
        FUN_10a549a74(pppppplVar12,&pppplStack_180,&ppppplStack_198);
        pppppplVar9 = (long ******)ppppplStack_178;
        if ((long ******)ppppplStack_178 != (long ******)0x0) {
          pppppplVar14 = (long ******)(ppppplStack_178 + 1);
          do {
            ppppplVar13 = *pppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
            if (bVar4) {
              *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppplVar13 == (long *****)0x0) {
            (*(code *)(*ppppplStack_178)[2])(ppppplStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
            pppppplVar12 = pppppplVar9;
          }
        }
      }
      if ((long)uStack_188 < 0) {
        __ZdlPv(ppppplStack_198);
        pppppplVar12 = (long ******)ppppplStack_198;
      }
      return pppppplVar12;
    }
    if (param_3 < (long ****)0x17) {
      uStack_f0 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_f0);
      if (param_3 == (long ****)0x0) goto LAB_10aca0b34;
    }
    else {
      pppppplVar9 = (long ******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        pppppplVar9 = (long ******)(((ulong)param_3 | 7) + 1);
      }
      pppppplVar12 = pppppplVar9;
      __Znwm();
      uStack_f0 = (long ****)((ulong)pppppplVar9 | 0x8000000000000000);
      ppppplStack_100 = (long *****)pppppplVar12;
      ppplStack_f8 = (long ***)param_3;
    }
    _memmove(pppppplVar12,uVar6,param_3);
    pppppplVar9 = pppppplVar12;
LAB_10aca0b34:
    *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
    FUN_10ac9e388(param_1,&ppppplStack_100,0);
    pppppplVar12 = param_1 + 7;
    pppppplVar9 = pppppplVar12;
    func_0x000107c2b05c(pppppplVar12,&ppppplStack_100);
    pppppplVar14 = (long ******)param_1[8];
    if (pppppplVar14 != (long ******)0x0) {
      puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
      if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
        unaff_x25 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
      }
      else {
        unaff_x25 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
      }
      if ((*pppppplVar12)[(long)unaff_x25] != (long ****)0x0) {
        for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x25];
            ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
          pppppplVar7 = (long ******)ppppplVar13[1];
          if (pppppplVar7 == pppppplVar9) {
            pppppplVar7 = pppppplVar12;
            func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_100);
            if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca0d78;
          }
          else {
            if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
              pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
            }
            else if (pppppplVar14 <= pppppplVar7) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
              }
              pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
            }
            if (pppppplVar7 != unaff_x25) break;
          }
        }
      }
    }
    ppppplVar13 = (long *****)0x60;
    __Znwm();
    uStack_d8 = 0;
    *ppppplVar13 = (long ****)0x0;
    ppppplVar13[1] = (long ****)pppppplVar9;
    pppplStack_e8 = (long ****)ppppplVar13;
    ppppplStack_e0 = (long *****)pppppplVar12;
    if ((long)uStack_f0 < 0) {
      func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_100,ppplStack_f8);
    }
    else {
      ppppplVar13[3] = (long ****)ppplStack_f8;
      ppppplVar13[2] = (long ****)ppppplStack_100;
      ppppplVar13[4] = uStack_f0;
    }
    *(undefined1 *)(ppppplVar13 + 6) = 0;
    ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
    *(undefined2 *)((long)ppppplVar13 + 0x32) = 3;
    ppppplVar13[9] = (long ****)0x0;
    ppppplVar13[8] = (long ****)0x0;
    ppppplVar13[0xb] = (long ****)0x0;
    ppppplVar13[10] = (long ****)0x0;
    *(int *)(ppppplVar13 + 7) = (int)*param_4;
    uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
    if ((pppppplVar14 == (long ******)0x0) ||
       (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
      uVar8 = 1;
      if ((long ******)0x2 < pppppplVar14) {
        uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
      }
      uVar8 = uVar8 | (long)pppppplVar14 << 1;
      uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_10a4ba824(pppppplVar12,uVar8);
      pppppplVar14 = (long ******)param_1[8];
      if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
        unaff_x25 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
      }
      else {
        unaff_x25 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
      }
    }
    ppppplVar13 = *pppppplVar12;
    pppplVar11 = ppppplVar13[(long)unaff_x25];
    if (pppplVar11 == (long ****)0x0) {
      pppppplVar9 = param_1 + 9;
      *pppplStack_e8 = (long ***)*pppppplVar9;
      *pppppplVar9 = (long *****)pppplStack_e8;
      ppppplVar13[(long)unaff_x25] = (long ****)pppppplVar9;
      if ((long ****)*pppplStack_e8 != (long ****)0x0) {
        pppppplVar9 = (long ******)(*pppplStack_e8)[1];
        if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
          pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
        }
        else if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
        (*pppppplVar12)[(long)pppppplVar9] = pppplStack_e8;
      }
    }
    else {
      *pppplStack_e8 = *pppplVar11;
      *pppplVar11 = (long ***)pppplStack_e8;
    }
    param_1[10] = (long *****)((long)param_1[10] + 1);
    ppppplVar13 = (long *****)pppplStack_e8;
LAB_10aca0d78:
    pppppplVar12 = param_1;
    func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_100);
    if (*(char *)(param_1[0x11] + 1) == '\x01') {
      FUN_10a54a030(&pppplStack_e8,param_1 + 5);
      pppppplVar12 = param_1 + 0x10;
      FUN_10a549a74(pppppplVar12,&pppplStack_e8,&ppppplStack_100);
      pppppplVar9 = (long ******)ppppplStack_e0;
      if ((long ******)ppppplStack_e0 != (long ******)0x0) {
        pppppplVar14 = (long ******)(ppppplStack_e0 + 1);
        do {
          ppppplVar13 = *pppppplVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar4) {
            *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppplVar13 == (long *****)0x0) {
          (*(code *)(*ppppplStack_e0)[2])(ppppplStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
          pppppplVar12 = pppppplVar9;
        }
      }
    }
    if ((long)uStack_f0 < 0) {
      __ZdlPv(ppppplStack_100);
      pppppplVar12 = (long ******)ppppplStack_100;
    }
    return pppppplVar12;
  }
  if (param_3 < (long ****)0x17) {
    uStack_70 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_70);
    if (param_3 == (long ****)0x0) goto LAB_10aca0778;
  }
  else {
    pppppplVar9 = (long ******)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppppplVar9 = (long ******)(((ulong)param_3 | 7) + 1);
    }
    pppppplVar12 = pppppplVar9;
    __Znwm();
    uStack_70 = (long ****)((ulong)pppppplVar9 | 0x8000000000000000);
    ppppplStack_80 = (long *****)pppppplVar12;
    ppplStack_78 = (long ***)param_3;
  }
  _memmove(pppppplVar12,param_2,param_3);
  pppppplVar9 = pppppplVar12;
LAB_10aca0778:
  *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
  FUN_10ac9e388(param_1,&ppppplStack_80,0);
  pppppplVar12 = param_1 + 7;
  pppppplVar9 = pppppplVar12;
  func_0x000107c2b05c(pppppplVar12,&ppppplStack_80);
  pppppplVar14 = (long ******)param_1[8];
  if (pppppplVar14 != (long ******)0x0) {
    puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
    if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
      unaff_x25 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
    }
    else {
      unaff_x25 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
    }
    if ((*pppppplVar12)[(long)unaff_x25] != (long ****)0x0) {
      for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x25];
          ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
        pppppplVar7 = (long ******)ppppplVar13[1];
        if (pppppplVar7 == pppppplVar9) {
          pppppplVar7 = pppppplVar12;
          func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_80);
          if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca09b8;
        }
        else {
          if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
            pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
          }
          else if (pppppplVar14 <= pppppplVar7) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
            }
            pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
          }
          if (pppppplVar7 != unaff_x25) break;
        }
      }
    }
  }
  ppppplVar13 = (long *****)0x60;
  __Znwm();
  uStack_58 = 0;
  *ppppplVar13 = (long ****)0x0;
  ppppplVar13[1] = (long ****)pppppplVar9;
  pppplStack_68 = (long ****)ppppplVar13;
  ppppplStack_60 = (long *****)pppppplVar12;
  if ((long)uStack_70 < 0) {
    func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_80,ppplStack_78);
  }
  else {
    ppppplVar13[3] = (long ****)ppplStack_78;
    ppppplVar13[2] = (long ****)ppppplStack_80;
    ppppplVar13[4] = uStack_70;
  }
  *(undefined1 *)(ppppplVar13 + 6) = 0;
  ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)ppppplVar13 + 0x32) = 1;
  ppppplVar13[9] = (long ****)0x0;
  ppppplVar13[8] = (long ****)0x0;
  ppppplVar13[0xb] = (long ****)0x0;
  ppppplVar13[10] = (long ****)0x0;
  *(char *)(ppppplVar13 + 7) = (char)*param_4;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((pppppplVar14 == (long ******)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
    uVar8 = 1;
    if ((long ******)0x2 < pppppplVar14) {
      uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
    }
    uVar8 = uVar8 | (long)pppppplVar14 << 1;
    uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    FUN_10a4ba824(pppppplVar12,uVar8);
    pppppplVar14 = (long ******)param_1[8];
    if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
      unaff_x25 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
    }
    else {
      unaff_x25 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
    }
  }
  ppppplVar13 = *pppppplVar12;
  pppplVar11 = ppppplVar13[(long)unaff_x25];
  if (pppplVar11 == (long ****)0x0) {
    pppppplVar9 = param_1 + 9;
    *pppplStack_68 = (long ***)*pppppplVar9;
    *pppppplVar9 = (long *****)pppplStack_68;
    ppppplVar13[(long)unaff_x25] = (long ****)pppppplVar9;
    if ((long ****)*pppplStack_68 != (long ****)0x0) {
      pppppplVar9 = (long ******)(*pppplStack_68)[1];
      if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
        pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
      }
      else if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
      (*pppppplVar12)[(long)pppppplVar9] = pppplStack_68;
    }
  }
  else {
    *pppplStack_68 = *pppplVar11;
    *pppplVar11 = (long ***)pppplStack_68;
  }
  param_1[10] = (long *****)((long)param_1[10] + 1);
  ppppplVar13 = (long *****)pppplStack_68;
LAB_10aca09b8:
  pppppplVar12 = param_1;
  func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_80);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&pppplStack_68,param_1 + 5);
    pppppplVar12 = param_1 + 0x10;
    FUN_10a549a74(pppppplVar12,&pppplStack_68,&ppppplStack_80);
    pppppplVar9 = (long ******)ppppplStack_60;
    if ((long ******)ppppplStack_60 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplStack_60 + 1);
      do {
        ppppplVar13 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar13 == (long *****)0x0) {
        (*(code *)(*ppppplStack_60)[2])(ppppplStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
        pppppplVar12 = pppppplVar9;
      }
    }
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppppplStack_80);
    pppppplVar12 = (long ******)ppppplStack_80;
  }
  return pppppplVar12;
}



/* Entry: 10aca0aac; end: 10aca0e6b;  */

long ****** FUN_10aca0aac(long ******param_1,undefined8 param_2,long ****param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  undefined8 uVar6;
  long ******pppppplVar7;
  ulong uVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  long ******pppppplVar14;
  long ******unaff_x25;
  long ******unaff_x26;
  undefined1 *puVar15;
  long ******unaff_x27;
  long ****pppplStack_2a0;
  long ***ppplStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *****ppppplStack_248;
  long ***ppplStack_240;
  undefined8 uStack_238;
  long ****pppplStack_230;
  long *****ppppplStack_228;
  undefined8 uStack_220;
  long *****ppppplStack_1b8;
  long ***ppplStack_1b0;
  undefined8 uStack_1a8;
  long ****pppplStack_1a0;
  long *****ppppplStack_198;
  undefined8 uStack_190;
  long *****ppppplStack_118;
  long ***ppplStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  long *****ppppplStack_f8;
  undefined8 uStack_f0;
  long *****ppppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  long *****ppppplStack_60;
  undefined8 uStack_58;
  
  pppppplVar12 = &ppppplStack_80;
  pppppplVar9 = &ppppplStack_80;
  if ((long ****)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    uVar6 = 0;
    func_0x00010a4baa30(&pppplStack_68,0);
    if (uStack_70._7_1_ < '\0') {
      __ZdlPv(ppppplStack_80);
    }
    __Unwind_Resume();
    if ((long ****)0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
      uVar6 = 0;
      func_0x00010a4baa30(&pppplStack_100,0);
      if (uStack_108._7_1_ < '\0') {
        __ZdlPv(ppppplStack_118);
      }
      __Unwind_Resume();
      if ((long ****)0x7ffffffffffffff7 < param_3) {
        func_0x000109ffde50();
        uVar6 = 0;
        func_0x00010a4baa30(&pppplStack_1a0,0);
        if (uStack_1a8._7_1_ < '\0') {
          __ZdlPv(ppppplStack_1b8);
        }
        __Unwind_Resume();
        if ((long ****)0x7ffffffffffffff7 < param_3) {
          func_0x000109ffde50();
          func_0x00010a4baa30(&pppplStack_230,0);
          if (uStack_238._7_1_ < '\0') {
            __ZdlPv(ppppplStack_248);
          }
          __Unwind_Resume();
          pppppplVar12 = (long ******)&pppplStack_2a0;
          if (param_1 == (long ******)0x0) {
            pppppplVar12 = (long ******)0x0;
          }
          else {
            pppplStack_2a0 = &ppplStack_298;
            ppplStack_298 = (long ***)0x0;
            uStack_290 = 0;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            func_0x00010983a984();
            if (((ulong)pppppplVar12 & 1) != 0) {
              FUN_10aca02f8(param_1,&pppplStack_2a0);
            }
            func_0x000109839668(&pppplStack_2a0);
          }
          return pppppplVar12;
        }
        if (param_3 < (long ****)0x17) {
          uStack_238 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_238);
          pppppplVar9 = &ppppplStack_248;
          if (param_3 == (long ****)0x0) goto LAB_10aca17ac;
        }
        else {
          pppppplVar12 = (long ******)0x19;
          if (((ulong)param_3 | 7) != 0x17) {
            pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
          }
          pppppplVar9 = pppppplVar12;
          __Znwm();
          uStack_238 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
          ppppplStack_248 = (long *****)pppppplVar9;
          ppplStack_240 = (long ***)param_3;
        }
        _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca17ac:
        *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
        FUN_10ac9e388(param_1,&ppppplStack_248,0);
        pppppplVar12 = param_1 + 7;
        pppppplVar9 = pppppplVar12;
        func_0x000107c2b05c(pppppplVar12,&ppppplStack_248);
        pppppplVar14 = (long ******)param_1[8];
        if (pppppplVar14 != (long ******)0x0) {
          puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
          if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
            unaff_x25 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
          }
          else {
            unaff_x25 = pppppplVar9;
            if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
          }
          if ((*pppppplVar12)[(long)unaff_x25] != (long ****)0x0) {
            for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x25];
                ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
              pppppplVar7 = (long ******)ppppplVar13[1];
              if (pppppplVar7 == pppppplVar9) {
                pppppplVar7 = pppppplVar12;
                func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_248);
                if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca19fc;
              }
              else {
                if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
                  pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
                }
                else if (pppppplVar14 <= pppppplVar7) {
                  uVar8 = 0;
                  if (pppppplVar14 != (long ******)0x0) {
                    uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
                  }
                  pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
                }
                if (pppppplVar7 != unaff_x25) break;
              }
            }
          }
        }
        ppppplVar13 = (long *****)0x60;
        __Znwm();
        uStack_220 = 0;
        *ppppplVar13 = (long ****)0x0;
        ppppplVar13[1] = (long ****)pppppplVar9;
        pppplStack_230 = (long ****)ppppplVar13;
        ppppplStack_228 = (long *****)pppppplVar12;
        if ((long)uStack_238 < 0) {
          func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_248,ppplStack_240);
        }
        else {
          ppppplVar13[3] = (long ****)ppplStack_240;
          ppppplVar13[2] = (long ****)ppppplStack_248;
          ppppplVar13[4] = uStack_238;
        }
        ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
        *(undefined1 *)(ppppplVar13 + 6) = 0;
        *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
        ppppplVar13[9] = (long ****)0x0;
        ppppplVar13[8] = (long ****)0x0;
        ppppplVar13[0xb] = (long ****)0x0;
        ppppplVar13[10] = (long ****)0x0;
        FUN_10acc4edc(ppppplVar13 + 5,*param_4,param_4[1]);
        uStack_220 = CONCAT71(uStack_220._1_7_,1);
        if ((pppppplVar14 == (long ******)0x0) ||
           (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
          uVar8 = 1;
          if ((long ******)0x2 < pppppplVar14) {
            uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
          }
          uVar8 = uVar8 | (long)pppppplVar14 << 1;
          uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
          if (uVar8 <= uVar10) {
            uVar8 = uVar10;
          }
          FUN_10a4ba824(pppppplVar12,uVar8);
          pppppplVar14 = (long ******)param_1[8];
          if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
            unaff_x25 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
          }
          else {
            unaff_x25 = pppppplVar9;
            if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
          }
        }
        ppppplVar13 = *pppppplVar12;
        pppplVar11 = ppppplVar13[(long)unaff_x25];
        if (pppplVar11 == (long ****)0x0) {
          pppppplVar9 = param_1 + 9;
          *pppplStack_230 = (long ***)*pppppplVar9;
          *pppppplVar9 = (long *****)pppplStack_230;
          ppppplVar13[(long)unaff_x25] = (long ****)pppppplVar9;
          if ((long ****)*pppplStack_230 != (long ****)0x0) {
            pppppplVar9 = (long ******)(*pppplStack_230)[1];
            if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
              pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
            }
            else if (pppppplVar14 <= pppppplVar9) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
              }
              pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
            }
            (*pppppplVar12)[(long)pppppplVar9] = pppplStack_230;
          }
        }
        else {
          *pppplStack_230 = *pppplVar11;
          *pppplVar11 = (long ***)pppplStack_230;
        }
        param_1[10] = (long *****)((long)param_1[10] + 1);
        ppppplVar13 = (long *****)pppplStack_230;
LAB_10aca19fc:
        pppppplVar12 = param_1;
        func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_248);
        if (*(char *)(param_1[0x11] + 1) == '\x01') {
          FUN_10a54a030(&pppplStack_230,param_1 + 5);
          pppppplVar12 = param_1 + 0x10;
          FUN_10a549a74(pppppplVar12,&pppplStack_230,&ppppplStack_248);
          pppppplVar9 = (long ******)ppppplStack_228;
          if ((long ******)ppppplStack_228 != (long ******)0x0) {
            pppppplVar14 = (long ******)(ppppplStack_228 + 1);
            do {
              ppppplVar13 = *pppppplVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
              if (bVar4) {
                *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppplVar13 == (long *****)0x0) {
              (*(code *)(*ppppplStack_228)[2])(ppppplStack_228);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
              pppppplVar12 = pppppplVar9;
            }
          }
        }
        if ((long)uStack_238 < 0) {
          __ZdlPv(ppppplStack_248);
          pppppplVar12 = (long ******)ppppplStack_248;
        }
        return pppppplVar12;
      }
      if (param_3 < (long ****)0x17) {
        uStack_1a8 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_1a8);
        pppppplVar9 = &ppppplStack_1b8;
        if (param_3 == (long ****)0x0) goto LAB_10aca1348;
      }
      else {
        pppppplVar12 = (long ******)0x19;
        if (((ulong)param_3 | 7) != 0x17) {
          pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
        }
        pppppplVar9 = pppppplVar12;
        __Znwm();
        uStack_1a8 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
        ppppplStack_1b8 = (long *****)pppppplVar9;
        ppplStack_1b0 = (long ***)param_3;
      }
      _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca1348:
      *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
      FUN_10ac9e388(param_1,&ppppplStack_1b8,0);
      pppppplVar12 = param_1 + 7;
      pppppplVar9 = pppppplVar12;
      func_0x000107c2b05c(pppppplVar12,&ppppplStack_1b8);
      pppppplVar14 = (long ******)param_1[8];
      if (pppppplVar14 != (long ******)0x0) {
        puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
        if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
          unaff_x27 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
        }
        else {
          unaff_x27 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x27 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
        }
        if ((*pppppplVar12)[(long)unaff_x27] != (long ****)0x0) {
          for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x27];
              ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
            pppppplVar7 = (long ******)ppppplVar13[1];
            if (pppppplVar7 == pppppplVar9) {
              pppppplVar7 = pppppplVar12;
              func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_1b8);
              if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca15dc;
            }
            else {
              if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
                pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
              }
              else if (pppppplVar14 <= pppppplVar7) {
                uVar8 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
                }
                pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
              }
              if (pppppplVar7 != unaff_x27) break;
            }
          }
        }
      }
      ppppplVar13 = (long *****)0x60;
      __Znwm();
      uStack_190 = 0;
      *ppppplVar13 = (long ****)0x0;
      ppppplVar13[1] = (long ****)pppppplVar9;
      pppplStack_1a0 = (long ****)ppppplVar13;
      ppppplStack_198 = (long *****)pppppplVar12;
      if ((long)uStack_1a8 < 0) {
        func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_1b8,ppplStack_1b0);
      }
      else {
        ppppplVar13[3] = (long ****)ppplStack_1b0;
        ppppplVar13[2] = (long ****)ppppplStack_1b8;
        ppppplVar13[4] = uStack_1a8;
      }
      ppppplVar13[9] = (long ****)0x0;
      ppppplVar13[8] = (long ****)0x0;
      *(undefined1 *)(ppppplVar13 + 6) = 0;
      ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
      ppppplVar13[0xb] = (long ****)0x0;
      ppppplVar13[10] = (long ****)0x0;
      lVar1 = *param_4;
      lVar2 = param_4[1];
      pppplVar11 = (long ****)0x20;
      __Znwm();
      *pppplVar11 = (long ***)&PTR_FUN_110c6b8d8;
      pppplVar11[2] = (long ***)0x0;
      pppplVar11[3] = (long ***)0x0;
      pppplVar11[1] = (long ***)0x0;
      FUN_10a0ca588(pppplVar11 + 1,lVar1,lVar2,lVar2 - lVar1 >> 2);
      pppplVar5 = ppppplVar13[0xb];
      ppppplVar13[0xb] = pppplVar11;
      if (pppplVar5 != (long ****)0x0) {
        (*(code *)(*pppplVar5)[1])();
      }
      uStack_190 = CONCAT71(uStack_190._1_7_,1);
      if ((pppppplVar14 == (long ******)0x0) ||
         (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
        uVar8 = 1;
        if ((long ******)0x2 < pppppplVar14) {
          uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
        }
        uVar8 = uVar8 | (long)pppppplVar14 << 1;
        uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        FUN_10a4ba824(pppppplVar12,uVar8);
        pppppplVar14 = (long ******)param_1[8];
        if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
          unaff_x27 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
        }
        else {
          unaff_x27 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x27 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
        }
      }
      ppppplVar13 = *pppppplVar12;
      pppplVar11 = ppppplVar13[(long)unaff_x27];
      if (pppplVar11 == (long ****)0x0) {
        pppppplVar9 = param_1 + 9;
        *pppplStack_1a0 = (long ***)*pppppplVar9;
        *pppppplVar9 = (long *****)pppplStack_1a0;
        ppppplVar13[(long)unaff_x27] = (long ****)pppppplVar9;
        if ((long ****)*pppplStack_1a0 != (long ****)0x0) {
          pppppplVar9 = (long ******)(*pppplStack_1a0)[1];
          if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
            pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
          }
          else if (pppppplVar14 <= pppppplVar9) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
          }
          (*pppppplVar12)[(long)pppppplVar9] = pppplStack_1a0;
        }
      }
      else {
        *pppplStack_1a0 = *pppplVar11;
        *pppplVar11 = (long ***)pppplStack_1a0;
      }
      param_1[10] = (long *****)((long)param_1[10] + 1);
      ppppplVar13 = (long *****)pppplStack_1a0;
LAB_10aca15dc:
      pppppplVar12 = param_1;
      func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_1b8);
      if (*(char *)(param_1[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_1a0,param_1 + 5);
        pppppplVar12 = param_1 + 0x10;
        FUN_10a549a74(pppppplVar12,&pppplStack_1a0,&ppppplStack_1b8);
        pppppplVar9 = (long ******)ppppplStack_198;
        if ((long ******)ppppplStack_198 != (long ******)0x0) {
          pppppplVar14 = (long ******)(ppppplStack_198 + 1);
          do {
            ppppplVar13 = *pppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
            if (bVar4) {
              *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppplVar13 == (long *****)0x0) {
            (*(code *)(*ppppplStack_198)[2])(ppppplStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
            pppppplVar12 = pppppplVar9;
          }
        }
      }
      if ((long)uStack_1a8 < 0) {
        __ZdlPv(ppppplStack_1b8);
        pppppplVar12 = (long ******)ppppplStack_1b8;
      }
      return pppppplVar12;
    }
    if (param_3 < (long ****)0x17) {
      uStack_108 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_108);
      pppppplVar9 = &ppppplStack_118;
      if (param_3 == (long ****)0x0) goto LAB_10aca0ef8;
    }
    else {
      pppppplVar12 = (long ******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        pppppplVar12 = (long ******)(((ulong)param_3 | 7) + 1);
      }
      pppppplVar9 = pppppplVar12;
      __Znwm();
      uStack_108 = (long ****)((ulong)pppppplVar12 | 0x8000000000000000);
      ppppplStack_118 = (long *****)pppppplVar9;
      ppplStack_110 = (long ***)param_3;
    }
    _memmove(pppppplVar9,uVar6,param_3);
LAB_10aca0ef8:
    *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
    FUN_10ac9e388(param_1,&ppppplStack_118,0);
    pppppplVar12 = param_1 + 7;
    pppppplVar9 = pppppplVar12;
    func_0x000107c2b05c(pppppplVar12,&ppppplStack_118);
    pppppplVar14 = (long ******)param_1[8];
    if (pppppplVar14 != (long ******)0x0) {
      puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
      if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
        unaff_x26 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
      }
      else {
        unaff_x26 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x26 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
      }
      if ((*pppppplVar12)[(long)unaff_x26] != (long ****)0x0) {
        for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x26];
            ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
          pppppplVar7 = (long ******)ppppplVar13[1];
          if (pppppplVar7 == pppppplVar9) {
            pppppplVar7 = pppppplVar12;
            func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_118);
            if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca1174;
          }
          else {
            if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
              pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
            }
            else if (pppppplVar14 <= pppppplVar7) {
              uVar8 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
              }
              pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
            }
            if (pppppplVar7 != unaff_x26) break;
          }
        }
      }
    }
    ppppplVar13 = (long *****)0x60;
    __Znwm();
    uStack_f0 = 0;
    *ppppplVar13 = (long ****)0x0;
    ppppplVar13[1] = (long ****)pppppplVar9;
    pppplStack_100 = (long ****)ppppplVar13;
    ppppplStack_f8 = (long *****)pppppplVar12;
    if ((long)uStack_108 < 0) {
      func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_118,ppplStack_110);
    }
    else {
      ppppplVar13[3] = (long ****)ppplStack_110;
      ppppplVar13[2] = (long ****)ppppplStack_118;
      ppppplVar13[4] = uStack_108;
    }
    ppppplVar13[9] = (long ****)0x0;
    ppppplVar13[8] = (long ****)0x0;
    *(undefined1 *)(ppppplVar13 + 6) = 0;
    ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
    *(undefined2 *)((long)ppppplVar13 + 0x32) = 0xf;
    ppppplVar13[0xb] = (long ****)0x0;
    ppppplVar13[10] = (long ****)0x0;
    pppplVar11 = (long ****)0x20;
    __Znwm();
    *pppplVar11 = (long ***)&PTR_FUN_110c6bc10;
    func_0x000105007b50(pppplVar11 + 1,param_4);
    pppplVar5 = ppppplVar13[0xb];
    ppppplVar13[0xb] = pppplVar11;
    if (pppplVar5 != (long ****)0x0) {
      (*(code *)(*pppplVar5)[1])();
    }
    uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
    if ((pppppplVar14 == (long ******)0x0) ||
       (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
      uVar8 = 1;
      if ((long ******)0x2 < pppppplVar14) {
        uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
      }
      uVar8 = uVar8 | (long)pppppplVar14 << 1;
      uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_10a4ba824(pppppplVar12,uVar8);
      pppppplVar14 = (long ******)param_1[8];
      if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
        unaff_x26 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
      }
      else {
        unaff_x26 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x26 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
      }
    }
    ppppplVar13 = *pppppplVar12;
    pppplVar11 = ppppplVar13[(long)unaff_x26];
    if (pppplVar11 == (long ****)0x0) {
      pppppplVar9 = param_1 + 9;
      *pppplStack_100 = (long ***)*pppppplVar9;
      *pppppplVar9 = (long *****)pppplStack_100;
      ppppplVar13[(long)unaff_x26] = (long ****)pppppplVar9;
      if ((long ****)*pppplStack_100 != (long ****)0x0) {
        pppppplVar9 = (long ******)(*pppplStack_100)[1];
        if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
          pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
        }
        else if (pppppplVar14 <= pppppplVar9) {
          uVar8 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
        }
        (*pppppplVar12)[(long)pppppplVar9] = pppplStack_100;
      }
    }
    else {
      *pppplStack_100 = *pppplVar11;
      *pppplVar11 = (long ***)pppplStack_100;
    }
    param_1[10] = (long *****)((long)param_1[10] + 1);
    ppppplVar13 = (long *****)pppplStack_100;
LAB_10aca1174:
    pppppplVar12 = param_1;
    func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_118);
    if (*(char *)(param_1[0x11] + 1) == '\x01') {
      FUN_10a54a030(&pppplStack_100,param_1 + 5);
      pppppplVar12 = param_1 + 0x10;
      FUN_10a549a74(pppppplVar12,&pppplStack_100,&ppppplStack_118);
      pppppplVar9 = (long ******)ppppplStack_f8;
      if ((long ******)ppppplStack_f8 != (long ******)0x0) {
        pppppplVar14 = (long ******)(ppppplStack_f8 + 1);
        do {
          ppppplVar13 = *pppppplVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar4) {
            *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppplVar13 == (long *****)0x0) {
          (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
          pppppplVar12 = pppppplVar9;
        }
      }
    }
    if ((long)uStack_108 < 0) {
      __ZdlPv(ppppplStack_118);
      pppppplVar12 = (long ******)ppppplStack_118;
    }
    return pppppplVar12;
  }
  if (param_3 < (long ****)0x17) {
    uStack_70 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_70);
    if (param_3 == (long ****)0x0) goto LAB_10aca0b34;
  }
  else {
    pppppplVar9 = (long ******)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppppplVar9 = (long ******)(((ulong)param_3 | 7) + 1);
    }
    pppppplVar12 = pppppplVar9;
    __Znwm();
    uStack_70 = (long ****)((ulong)pppppplVar9 | 0x8000000000000000);
    ppppplStack_80 = (long *****)pppppplVar12;
    ppplStack_78 = (long ***)param_3;
  }
  _memmove(pppppplVar12,param_2,param_3);
  pppppplVar9 = pppppplVar12;
LAB_10aca0b34:
  *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
  FUN_10ac9e388(param_1,&ppppplStack_80,0);
  pppppplVar12 = param_1 + 7;
  pppppplVar9 = pppppplVar12;
  func_0x000107c2b05c(pppppplVar12,&ppppplStack_80);
  pppppplVar14 = (long ******)param_1[8];
  if (pppppplVar14 != (long ******)0x0) {
    puVar15 = (undefined1 *)((long)pppppplVar14 + -1);
    if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
      unaff_x25 = (long ******)((ulong)puVar15 & (ulong)pppppplVar9);
    }
    else {
      unaff_x25 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
    }
    if ((*pppppplVar12)[(long)unaff_x25] != (long ****)0x0) {
      for (ppppplVar13 = (long *****)*(*pppppplVar12)[(long)unaff_x25];
          ppppplVar13 != (long *****)0x0; ppppplVar13 = (long *****)*ppppplVar13) {
        pppppplVar7 = (long ******)ppppplVar13[1];
        if (pppppplVar7 == pppppplVar9) {
          pppppplVar7 = pppppplVar12;
          func_0x000107c2b068(pppppplVar12,ppppplVar13 + 2,&ppppplStack_80);
          if (((ulong)pppppplVar7 & 1) != 0) goto LAB_10aca0d78;
        }
        else {
          if (((ulong)pppppplVar14 & (ulong)puVar15) == 0) {
            pppppplVar7 = (long ******)((ulong)pppppplVar7 & (ulong)puVar15);
          }
          else if (pppppplVar14 <= pppppplVar7) {
            uVar8 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar7 / (ulong)pppppplVar14;
            }
            pppppplVar7 = (long ******)((long)pppppplVar7 - uVar8 * (long)pppppplVar14);
          }
          if (pppppplVar7 != unaff_x25) break;
        }
      }
    }
  }
  ppppplVar13 = (long *****)0x60;
  __Znwm();
  uStack_58 = 0;
  *ppppplVar13 = (long ****)0x0;
  ppppplVar13[1] = (long ****)pppppplVar9;
  pppplStack_68 = (long ****)ppppplVar13;
  ppppplStack_60 = (long *****)pppppplVar12;
  if ((long)uStack_70 < 0) {
    func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_80,ppplStack_78);
  }
  else {
    ppppplVar13[3] = (long ****)ppplStack_78;
    ppppplVar13[2] = (long ****)ppppplStack_80;
    ppppplVar13[4] = uStack_70;
  }
  *(undefined1 *)(ppppplVar13 + 6) = 0;
  ppppplVar13[5] = (long ****)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)ppppplVar13 + 0x32) = 3;
  ppppplVar13[9] = (long ****)0x0;
  ppppplVar13[8] = (long ****)0x0;
  ppppplVar13[0xb] = (long ****)0x0;
  ppppplVar13[10] = (long ****)0x0;
  *(int *)(ppppplVar13 + 7) = (int)*param_4;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((pppppplVar14 == (long ******)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
    uVar8 = 1;
    if ((long ******)0x2 < pppppplVar14) {
      uVar8 = (ulong)(((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) != 0);
    }
    uVar8 = uVar8 | (long)pppppplVar14 << 1;
    uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    FUN_10a4ba824(pppppplVar12,uVar8);
    pppppplVar14 = (long ******)param_1[8];
    if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
      unaff_x25 = (long ******)((ulong)((long)pppppplVar14 + -1) & (ulong)pppppplVar9);
    }
    else {
      unaff_x25 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x25 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
    }
  }
  ppppplVar13 = *pppppplVar12;
  pppplVar11 = ppppplVar13[(long)unaff_x25];
  if (pppplVar11 == (long ****)0x0) {
    pppppplVar9 = param_1 + 9;
    *pppplStack_68 = (long ***)*pppppplVar9;
    *pppppplVar9 = (long *****)pppplStack_68;
    ppppplVar13[(long)unaff_x25] = (long ****)pppppplVar9;
    if ((long ****)*pppplStack_68 != (long ****)0x0) {
      pppppplVar9 = (long ******)(*pppplStack_68)[1];
      if (((ulong)pppppplVar14 & (ulong)((long)pppppplVar14 + -1)) == 0) {
        pppppplVar9 = (long ******)((ulong)pppppplVar9 & (ulong)((long)pppppplVar14 + -1));
      }
      else if (pppppplVar14 <= pppppplVar9) {
        uVar8 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar8 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        pppppplVar9 = (long ******)((long)pppppplVar9 - uVar8 * (long)pppppplVar14);
      }
      (*pppppplVar12)[(long)pppppplVar9] = pppplStack_68;
    }
  }
  else {
    *pppplStack_68 = *pppplVar11;
    *pppplVar11 = (long ***)pppplStack_68;
  }
  param_1[10] = (long *****)((long)param_1[10] + 1);
  ppppplVar13 = (long *****)pppplStack_68;
LAB_10aca0d78:
  pppppplVar12 = param_1;
  func_0x00010a5499ec(param_1,1,ppppplVar13 + 5,&ppppplStack_80);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&pppplStack_68,param_1 + 5);
    pppppplVar12 = param_1 + 0x10;
    FUN_10a549a74(pppppplVar12,&pppplStack_68,&ppppplStack_80);
    pppppplVar9 = (long ******)ppppplStack_60;
    if ((long ******)ppppplStack_60 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplStack_60 + 1);
      do {
        ppppplVar13 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar13 == (long *****)0x0) {
        (*(code *)(*ppppplStack_60)[2])(ppppplStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
        pppppplVar12 = pppppplVar9;
      }
    }
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppppplStack_80);
    pppppplVar12 = (long ******)ppppplStack_80;
  }
  return pppppplVar12;
}



/* Entry: 10aca0e6c; end: 10aca12bb;  */

long ****** FUN_10aca0e6c(long ******param_1,undefined8 param_2,long ****param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  ulong uVar13;
  long ******unaff_x25;
  long ******pppppplVar14;
  long ******unaff_x26;
  long ******unaff_x27;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *****ppppplStack_1c8;
  long ***ppplStack_1c0;
  undefined8 uStack_1b8;
  long ****pppplStack_1b0;
  long *****ppppplStack_1a8;
  undefined8 uStack_1a0;
  long *****ppppplStack_138;
  long ***ppplStack_130;
  undefined8 uStack_128;
  long ****pppplStack_120;
  long *****ppppplStack_118;
  undefined8 uStack_110;
  long *****ppppplStack_98;
  long ***ppplStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long *****ppppplStack_78;
  undefined8 uStack_70;
  
  if ((long ****)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    uVar7 = 0;
    func_0x00010a4baa30(&pppplStack_80,0);
    if (uStack_88._7_1_ < '\0') {
      __ZdlPv(ppppplStack_98);
    }
    __Unwind_Resume();
    if ((long ****)0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
      uVar7 = 0;
      func_0x00010a4baa30(&pppplStack_120,0);
      if (uStack_128._7_1_ < '\0') {
        __ZdlPv(ppppplStack_138);
      }
      __Unwind_Resume();
      if ((long ****)0x7ffffffffffffff7 < param_3) {
        func_0x000109ffde50();
        func_0x00010a4baa30(&pppplStack_1b0,0);
        if (uStack_1b8._7_1_ < '\0') {
          __ZdlPv(ppppplStack_1c8);
        }
        __Unwind_Resume();
        pppppplVar11 = (long ******)&pppplStack_220;
        if (param_1 == (long ******)0x0) {
          pppppplVar11 = (long ******)0x0;
        }
        else {
          pppplStack_220 = &ppplStack_218;
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0;
          func_0x00010983a984();
          if (((ulong)pppppplVar11 & 1) != 0) {
            FUN_10aca02f8(param_1,&pppplStack_220);
          }
          func_0x000109839668(&pppplStack_220);
        }
        return pppppplVar11;
      }
      if (param_3 < (long ****)0x17) {
        uStack_1b8 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_1b8);
        pppppplVar9 = &ppppplStack_1c8;
        if (param_3 == (long ****)0x0) goto LAB_10aca17ac;
      }
      else {
        pppppplVar11 = (long ******)0x19;
        if (((ulong)param_3 | 7) != 0x17) {
          pppppplVar11 = (long ******)(((ulong)param_3 | 7) + 1);
        }
        pppppplVar9 = pppppplVar11;
        __Znwm();
        uStack_1b8 = (long ****)((ulong)pppppplVar11 | 0x8000000000000000);
        ppppplStack_1c8 = (long *****)pppppplVar9;
        ppplStack_1c0 = (long ***)param_3;
      }
      _memmove(pppppplVar9,uVar7,param_3);
LAB_10aca17ac:
      *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
      FUN_10ac9e388(param_1,&ppppplStack_1c8,0);
      pppppplVar11 = param_1 + 7;
      pppppplVar9 = pppppplVar11;
      func_0x000107c2b05c(pppppplVar11,&ppppplStack_1c8);
      pppppplVar14 = (long ******)param_1[8];
      if (pppppplVar14 != (long ******)0x0) {
        uVar13 = (long)pppppplVar14 - 1;
        if (((ulong)pppppplVar14 & uVar13) == 0) {
          unaff_x25 = (long ******)(uVar13 & (ulong)pppppplVar9);
        }
        else {
          unaff_x25 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar10 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar10 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x25 = (long ******)((long)pppppplVar9 - uVar10 * (long)pppppplVar14);
          }
        }
        if ((*pppppplVar11)[(long)unaff_x25] != (long ****)0x0) {
          for (ppppplVar12 = (long *****)*(*pppppplVar11)[(long)unaff_x25];
              ppppplVar12 != (long *****)0x0; ppppplVar12 = (long *****)*ppppplVar12) {
            pppppplVar8 = (long ******)ppppplVar12[1];
            if (pppppplVar8 == pppppplVar9) {
              pppppplVar8 = pppppplVar11;
              func_0x000107c2b068(pppppplVar11,ppppplVar12 + 2,&ppppplStack_1c8);
              if (((ulong)pppppplVar8 & 1) != 0) goto LAB_10aca19fc;
            }
            else {
              if (((ulong)pppppplVar14 & uVar13) == 0) {
                pppppplVar8 = (long ******)((ulong)pppppplVar8 & uVar13);
              }
              else if (pppppplVar14 <= pppppplVar8) {
                uVar10 = 0;
                if (pppppplVar14 != (long ******)0x0) {
                  uVar10 = (ulong)pppppplVar8 / (ulong)pppppplVar14;
                }
                pppppplVar8 = (long ******)((long)pppppplVar8 - uVar10 * (long)pppppplVar14);
              }
              if (pppppplVar8 != unaff_x25) break;
            }
          }
        }
      }
      ppppplVar12 = (long *****)0x60;
      __Znwm();
      uStack_1a0 = 0;
      *ppppplVar12 = (long ****)0x0;
      ppppplVar12[1] = (long ****)pppppplVar9;
      pppplStack_1b0 = (long ****)ppppplVar12;
      ppppplStack_1a8 = (long *****)pppppplVar11;
      if ((long)uStack_1b8 < 0) {
        func_0x000107c3192c(ppppplVar12 + 2,ppppplStack_1c8,ppplStack_1c0);
      }
      else {
        ppppplVar12[3] = (long ****)ppplStack_1c0;
        ppppplVar12[2] = (long ****)ppppplStack_1c8;
        ppppplVar12[4] = uStack_1b8;
      }
      ppppplVar12[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined1 *)(ppppplVar12 + 6) = 0;
      *(undefined2 *)((long)ppppplVar12 + 0x32) = 0xf;
      ppppplVar12[9] = (long ****)0x0;
      ppppplVar12[8] = (long ****)0x0;
      ppppplVar12[0xb] = (long ****)0x0;
      ppppplVar12[10] = (long ****)0x0;
      FUN_10acc4edc(ppppplVar12 + 5,*param_4,param_4[1]);
      uStack_1a0 = CONCAT71(uStack_1a0._1_7_,1);
      if ((pppppplVar14 == (long ******)0x0) ||
         (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
        uVar13 = 1;
        if ((long ******)0x2 < pppppplVar14) {
          uVar13 = (ulong)(((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)pppppplVar14 << 1;
        uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
        if (uVar13 <= uVar10) {
          uVar13 = uVar10;
        }
        FUN_10a4ba824(pppppplVar11,uVar13);
        pppppplVar14 = (long ******)param_1[8];
        if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
          unaff_x25 = (long ******)((long)pppppplVar14 - 1U & (ulong)pppppplVar9);
        }
        else {
          unaff_x25 = pppppplVar9;
          if (pppppplVar14 <= pppppplVar9) {
            uVar13 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            unaff_x25 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
          }
        }
      }
      ppppplVar12 = *pppppplVar11;
      pppplVar5 = ppppplVar12[(long)unaff_x25];
      if (pppplVar5 == (long ****)0x0) {
        pppppplVar9 = param_1 + 9;
        *pppplStack_1b0 = (long ***)*pppppplVar9;
        *pppppplVar9 = (long *****)pppplStack_1b0;
        ppppplVar12[(long)unaff_x25] = (long ****)pppppplVar9;
        if ((long ****)*pppplStack_1b0 != (long ****)0x0) {
          pppppplVar9 = (long ******)(*pppplStack_1b0)[1];
          if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
            pppppplVar9 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar14 - 1U);
          }
          else if (pppppplVar14 <= pppppplVar9) {
            uVar13 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
            }
            pppppplVar9 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
          }
          (*pppppplVar11)[(long)pppppplVar9] = pppplStack_1b0;
        }
      }
      else {
        *pppplStack_1b0 = *pppplVar5;
        *pppplVar5 = (long ***)pppplStack_1b0;
      }
      param_1[10] = (long *****)((long)param_1[10] + 1);
      ppppplVar12 = (long *****)pppplStack_1b0;
LAB_10aca19fc:
      pppppplVar11 = param_1;
      func_0x00010a5499ec(param_1,1,ppppplVar12 + 5,&ppppplStack_1c8);
      if (*(char *)(param_1[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_1b0,param_1 + 5);
        pppppplVar11 = param_1 + 0x10;
        FUN_10a549a74(pppppplVar11,&pppplStack_1b0,&ppppplStack_1c8);
        pppppplVar9 = (long ******)ppppplStack_1a8;
        if ((long ******)ppppplStack_1a8 != (long ******)0x0) {
          pppppplVar14 = (long ******)(ppppplStack_1a8 + 1);
          do {
            ppppplVar12 = *pppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
            if (bVar4) {
              *pppppplVar14 = (long *****)((long)ppppplVar12 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppplVar12 == (long *****)0x0) {
            (*(code *)(*ppppplStack_1a8)[2])(ppppplStack_1a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
            pppppplVar11 = pppppplVar9;
          }
        }
      }
      if ((long)uStack_1b8 < 0) {
        __ZdlPv(ppppplStack_1c8);
        pppppplVar11 = (long ******)ppppplStack_1c8;
      }
      return pppppplVar11;
    }
    if (param_3 < (long ****)0x17) {
      uStack_128 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_128);
      pppppplVar9 = &ppppplStack_138;
      if (param_3 == (long ****)0x0) goto LAB_10aca1348;
    }
    else {
      pppppplVar11 = (long ******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        pppppplVar11 = (long ******)(((ulong)param_3 | 7) + 1);
      }
      pppppplVar9 = pppppplVar11;
      __Znwm();
      uStack_128 = (long ****)((ulong)pppppplVar11 | 0x8000000000000000);
      ppppplStack_138 = (long *****)pppppplVar9;
      ppplStack_130 = (long ***)param_3;
    }
    _memmove(pppppplVar9,uVar7,param_3);
LAB_10aca1348:
    *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
    FUN_10ac9e388(param_1,&ppppplStack_138,0);
    pppppplVar11 = param_1 + 7;
    pppppplVar9 = pppppplVar11;
    func_0x000107c2b05c(pppppplVar11,&ppppplStack_138);
    pppppplVar14 = (long ******)param_1[8];
    if (pppppplVar14 != (long ******)0x0) {
      uVar13 = (long)pppppplVar14 - 1;
      if (((ulong)pppppplVar14 & uVar13) == 0) {
        unaff_x27 = (long ******)(uVar13 & (ulong)pppppplVar9);
      }
      else {
        unaff_x27 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar10 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar10 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x27 = (long ******)((long)pppppplVar9 - uVar10 * (long)pppppplVar14);
        }
      }
      if ((*pppppplVar11)[(long)unaff_x27] != (long ****)0x0) {
        for (ppppplVar12 = (long *****)*(*pppppplVar11)[(long)unaff_x27];
            ppppplVar12 != (long *****)0x0; ppppplVar12 = (long *****)*ppppplVar12) {
          pppppplVar8 = (long ******)ppppplVar12[1];
          if (pppppplVar8 == pppppplVar9) {
            pppppplVar8 = pppppplVar11;
            func_0x000107c2b068(pppppplVar11,ppppplVar12 + 2,&ppppplStack_138);
            if (((ulong)pppppplVar8 & 1) != 0) goto LAB_10aca15dc;
          }
          else {
            if (((ulong)pppppplVar14 & uVar13) == 0) {
              pppppplVar8 = (long ******)((ulong)pppppplVar8 & uVar13);
            }
            else if (pppppplVar14 <= pppppplVar8) {
              uVar10 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar10 = (ulong)pppppplVar8 / (ulong)pppppplVar14;
              }
              pppppplVar8 = (long ******)((long)pppppplVar8 - uVar10 * (long)pppppplVar14);
            }
            if (pppppplVar8 != unaff_x27) break;
          }
        }
      }
    }
    ppppplVar12 = (long *****)0x60;
    __Znwm();
    uStack_110 = 0;
    *ppppplVar12 = (long ****)0x0;
    ppppplVar12[1] = (long ****)pppppplVar9;
    pppplStack_120 = (long ****)ppppplVar12;
    ppppplStack_118 = (long *****)pppppplVar11;
    if ((long)uStack_128 < 0) {
      func_0x000107c3192c(ppppplVar12 + 2,ppppplStack_138,ppplStack_130);
    }
    else {
      ppppplVar12[3] = (long ****)ppplStack_130;
      ppppplVar12[2] = (long ****)ppppplStack_138;
      ppppplVar12[4] = uStack_128;
    }
    ppppplVar12[9] = (long ****)0x0;
    ppppplVar12[8] = (long ****)0x0;
    *(undefined1 *)(ppppplVar12 + 6) = 0;
    ppppplVar12[5] = (long ****)&PTR_FUN_110c6c2d0;
    *(undefined2 *)((long)ppppplVar12 + 0x32) = 0xf;
    ppppplVar12[0xb] = (long ****)0x0;
    ppppplVar12[10] = (long ****)0x0;
    lVar1 = *param_4;
    lVar2 = param_4[1];
    pppplVar5 = (long ****)0x20;
    __Znwm();
    *pppplVar5 = (long ***)&PTR_FUN_110c6b8d8;
    pppplVar5[2] = (long ***)0x0;
    pppplVar5[3] = (long ***)0x0;
    pppplVar5[1] = (long ***)0x0;
    FUN_10a0ca588(pppplVar5 + 1,lVar1,lVar2,lVar2 - lVar1 >> 2);
    pppplVar6 = ppppplVar12[0xb];
    ppppplVar12[0xb] = pppplVar5;
    if (pppplVar6 != (long ****)0x0) {
      (*(code *)(*pppplVar6)[1])();
    }
    uStack_110 = CONCAT71(uStack_110._1_7_,1);
    if ((pppppplVar14 == (long ******)0x0) ||
       (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
      uVar13 = 1;
      if ((long ******)0x2 < pppppplVar14) {
        uVar13 = (ulong)(((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) != 0);
      }
      uVar13 = uVar13 | (long)pppppplVar14 << 1;
      uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      FUN_10a4ba824(pppppplVar11,uVar13);
      pppppplVar14 = (long ******)param_1[8];
      if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
        unaff_x27 = (long ******)((long)pppppplVar14 - 1U & (ulong)pppppplVar9);
      }
      else {
        unaff_x27 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar13 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x27 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
        }
      }
    }
    ppppplVar12 = *pppppplVar11;
    pppplVar5 = ppppplVar12[(long)unaff_x27];
    if (pppplVar5 == (long ****)0x0) {
      pppppplVar9 = param_1 + 9;
      *pppplStack_120 = (long ***)*pppppplVar9;
      *pppppplVar9 = (long *****)pppplStack_120;
      ppppplVar12[(long)unaff_x27] = (long ****)pppppplVar9;
      if ((long ****)*pppplStack_120 != (long ****)0x0) {
        pppppplVar9 = (long ******)(*pppplStack_120)[1];
        if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
          pppppplVar9 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar14 - 1U);
        }
        else if (pppppplVar14 <= pppppplVar9) {
          uVar13 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          pppppplVar9 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
        }
        (*pppppplVar11)[(long)pppppplVar9] = pppplStack_120;
      }
    }
    else {
      *pppplStack_120 = *pppplVar5;
      *pppplVar5 = (long ***)pppplStack_120;
    }
    param_1[10] = (long *****)((long)param_1[10] + 1);
    ppppplVar12 = (long *****)pppplStack_120;
LAB_10aca15dc:
    pppppplVar11 = param_1;
    func_0x00010a5499ec(param_1,1,ppppplVar12 + 5,&ppppplStack_138);
    if (*(char *)(param_1[0x11] + 1) == '\x01') {
      FUN_10a54a030(&pppplStack_120,param_1 + 5);
      pppppplVar11 = param_1 + 0x10;
      FUN_10a549a74(pppppplVar11,&pppplStack_120,&ppppplStack_138);
      pppppplVar9 = (long ******)ppppplStack_118;
      if ((long ******)ppppplStack_118 != (long ******)0x0) {
        pppppplVar14 = (long ******)(ppppplStack_118 + 1);
        do {
          ppppplVar12 = *pppppplVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar4) {
            *pppppplVar14 = (long *****)((long)ppppplVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppplVar12 == (long *****)0x0) {
          (*(code *)(*ppppplStack_118)[2])(ppppplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
          pppppplVar11 = pppppplVar9;
        }
      }
    }
    if ((long)uStack_128 < 0) {
      __ZdlPv(ppppplStack_138);
      pppppplVar11 = (long ******)ppppplStack_138;
    }
    return pppppplVar11;
  }
  if (param_3 < (long ****)0x17) {
    uStack_88 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_88);
    pppppplVar9 = &ppppplStack_98;
    if (param_3 == (long ****)0x0) goto LAB_10aca0ef8;
  }
  else {
    pppppplVar11 = (long ******)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppppplVar11 = (long ******)(((ulong)param_3 | 7) + 1);
    }
    pppppplVar9 = pppppplVar11;
    __Znwm();
    uStack_88 = (long ****)((ulong)pppppplVar11 | 0x8000000000000000);
    ppppplStack_98 = (long *****)pppppplVar9;
    ppplStack_90 = (long ***)param_3;
  }
  _memmove(pppppplVar9,param_2,param_3);
LAB_10aca0ef8:
  *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
  FUN_10ac9e388(param_1,&ppppplStack_98,0);
  pppppplVar11 = param_1 + 7;
  pppppplVar9 = pppppplVar11;
  func_0x000107c2b05c(pppppplVar11,&ppppplStack_98);
  pppppplVar14 = (long ******)param_1[8];
  if (pppppplVar14 != (long ******)0x0) {
    uVar13 = (long)pppppplVar14 - 1;
    if (((ulong)pppppplVar14 & uVar13) == 0) {
      unaff_x26 = (long ******)(uVar13 & (ulong)pppppplVar9);
    }
    else {
      unaff_x26 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar10 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar10 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x26 = (long ******)((long)pppppplVar9 - uVar10 * (long)pppppplVar14);
      }
    }
    if ((*pppppplVar11)[(long)unaff_x26] != (long ****)0x0) {
      for (ppppplVar12 = (long *****)*(*pppppplVar11)[(long)unaff_x26];
          ppppplVar12 != (long *****)0x0; ppppplVar12 = (long *****)*ppppplVar12) {
        pppppplVar8 = (long ******)ppppplVar12[1];
        if (pppppplVar8 == pppppplVar9) {
          pppppplVar8 = pppppplVar11;
          func_0x000107c2b068(pppppplVar11,ppppplVar12 + 2,&ppppplStack_98);
          if (((ulong)pppppplVar8 & 1) != 0) goto LAB_10aca1174;
        }
        else {
          if (((ulong)pppppplVar14 & uVar13) == 0) {
            pppppplVar8 = (long ******)((ulong)pppppplVar8 & uVar13);
          }
          else if (pppppplVar14 <= pppppplVar8) {
            uVar10 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar10 = (ulong)pppppplVar8 / (ulong)pppppplVar14;
            }
            pppppplVar8 = (long ******)((long)pppppplVar8 - uVar10 * (long)pppppplVar14);
          }
          if (pppppplVar8 != unaff_x26) break;
        }
      }
    }
  }
  ppppplVar12 = (long *****)0x60;
  __Znwm();
  uStack_70 = 0;
  *ppppplVar12 = (long ****)0x0;
  ppppplVar12[1] = (long ****)pppppplVar9;
  pppplStack_80 = (long ****)ppppplVar12;
  ppppplStack_78 = (long *****)pppppplVar11;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(ppppplVar12 + 2,ppppplStack_98,ppplStack_90);
  }
  else {
    ppppplVar12[3] = (long ****)ppplStack_90;
    ppppplVar12[2] = (long ****)ppppplStack_98;
    ppppplVar12[4] = uStack_88;
  }
  ppppplVar12[9] = (long ****)0x0;
  ppppplVar12[8] = (long ****)0x0;
  *(undefined1 *)(ppppplVar12 + 6) = 0;
  ppppplVar12[5] = (long ****)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)ppppplVar12 + 0x32) = 0xf;
  ppppplVar12[0xb] = (long ****)0x0;
  ppppplVar12[10] = (long ****)0x0;
  pppplVar5 = (long ****)0x20;
  __Znwm();
  *pppplVar5 = (long ***)&PTR_FUN_110c6bc10;
  func_0x000105007b50(pppplVar5 + 1,param_4);
  pppplVar6 = ppppplVar12[0xb];
  ppppplVar12[0xb] = pppplVar5;
  if (pppplVar6 != (long ****)0x0) {
    (*(code *)(*pppplVar6)[1])();
  }
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  if ((pppppplVar14 == (long ******)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
    uVar13 = 1;
    if ((long ******)0x2 < pppppplVar14) {
      uVar13 = (ulong)(((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)pppppplVar14 << 1;
    uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar13 <= uVar10) {
      uVar13 = uVar10;
    }
    FUN_10a4ba824(pppppplVar11,uVar13);
    pppppplVar14 = (long ******)param_1[8];
    if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
      unaff_x26 = (long ******)((long)pppppplVar14 - 1U & (ulong)pppppplVar9);
    }
    else {
      unaff_x26 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar13 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x26 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
      }
    }
  }
  ppppplVar12 = *pppppplVar11;
  pppplVar5 = ppppplVar12[(long)unaff_x26];
  if (pppplVar5 == (long ****)0x0) {
    pppppplVar9 = param_1 + 9;
    *pppplStack_80 = (long ***)*pppppplVar9;
    *pppppplVar9 = (long *****)pppplStack_80;
    ppppplVar12[(long)unaff_x26] = (long ****)pppppplVar9;
    if ((long ****)*pppplStack_80 != (long ****)0x0) {
      pppppplVar9 = (long ******)(*pppplStack_80)[1];
      if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
        pppppplVar9 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar14 - 1U);
      }
      else if (pppppplVar14 <= pppppplVar9) {
        uVar13 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        pppppplVar9 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
      }
      (*pppppplVar11)[(long)pppppplVar9] = pppplStack_80;
    }
  }
  else {
    *pppplStack_80 = *pppplVar5;
    *pppplVar5 = (long ***)pppplStack_80;
  }
  param_1[10] = (long *****)((long)param_1[10] + 1);
  ppppplVar12 = (long *****)pppplStack_80;
LAB_10aca1174:
  pppppplVar11 = param_1;
  func_0x00010a5499ec(param_1,1,ppppplVar12 + 5,&ppppplStack_98);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&pppplStack_80,param_1 + 5);
    pppppplVar11 = param_1 + 0x10;
    FUN_10a549a74(pppppplVar11,&pppplStack_80,&ppppplStack_98);
    pppppplVar9 = (long ******)ppppplStack_78;
    if ((long ******)ppppplStack_78 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplStack_78 + 1);
      do {
        ppppplVar12 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar12 == (long *****)0x0) {
        (*(code *)(*ppppplStack_78)[2])(ppppplStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
        pppppplVar11 = pppppplVar9;
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppppplStack_98);
    pppppplVar11 = (long ******)ppppplStack_98;
  }
  return pppppplVar11;
}



/* Entry: 10aca12bc; end: 10aca1723;  */

long ****** FUN_10aca12bc(long ******param_1,undefined8 param_2,long ****param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  ulong uVar13;
  long ******unaff_x25;
  long ******pppppplVar14;
  long ******unaff_x27;
  long ****pppplStack_180;
  long ***ppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *****ppppplStack_128;
  long ***ppplStack_120;
  undefined8 uStack_118;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  undefined8 uStack_100;
  long *****ppppplStack_98;
  long ***ppplStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long *****ppppplStack_78;
  undefined8 uStack_70;
  
  if ((long ****)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    uVar7 = 0;
    func_0x00010a4baa30(&pppplStack_80,0);
    if (uStack_88._7_1_ < '\0') {
      __ZdlPv(ppppplStack_98);
    }
    __Unwind_Resume();
    if ((long ****)0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
      func_0x00010a4baa30(&pppplStack_110,0);
      if (uStack_118._7_1_ < '\0') {
        __ZdlPv(ppppplStack_128);
      }
      __Unwind_Resume();
      pppppplVar11 = (long ******)&pppplStack_180;
      if (param_1 == (long ******)0x0) {
        pppppplVar11 = (long ******)0x0;
      }
      else {
        pppplStack_180 = &ppplStack_178;
        ppplStack_178 = (long ***)0x0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        func_0x00010983a984();
        if (((ulong)pppppplVar11 & 1) != 0) {
          FUN_10aca02f8(param_1,&pppplStack_180);
        }
        func_0x000109839668(&pppplStack_180);
      }
      return pppppplVar11;
    }
    if (param_3 < (long ****)0x17) {
      uStack_118 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_118);
      pppppplVar9 = &ppppplStack_128;
      if (param_3 == (long ****)0x0) goto LAB_10aca17ac;
    }
    else {
      pppppplVar11 = (long ******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        pppppplVar11 = (long ******)(((ulong)param_3 | 7) + 1);
      }
      pppppplVar9 = pppppplVar11;
      __Znwm();
      uStack_118 = (long ****)((ulong)pppppplVar11 | 0x8000000000000000);
      ppppplStack_128 = (long *****)pppppplVar9;
      ppplStack_120 = (long ***)param_3;
    }
    _memmove(pppppplVar9,uVar7,param_3);
LAB_10aca17ac:
    *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
    FUN_10ac9e388(param_1,&ppppplStack_128,0);
    pppppplVar11 = param_1 + 7;
    pppppplVar9 = pppppplVar11;
    func_0x000107c2b05c(pppppplVar11,&ppppplStack_128);
    pppppplVar14 = (long ******)param_1[8];
    if (pppppplVar14 != (long ******)0x0) {
      uVar13 = (long)pppppplVar14 - 1;
      if (((ulong)pppppplVar14 & uVar13) == 0) {
        unaff_x25 = (long ******)(uVar13 & (ulong)pppppplVar9);
      }
      else {
        unaff_x25 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar10 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar10 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x25 = (long ******)((long)pppppplVar9 - uVar10 * (long)pppppplVar14);
        }
      }
      if ((*pppppplVar11)[(long)unaff_x25] != (long ****)0x0) {
        for (ppppplVar12 = (long *****)*(*pppppplVar11)[(long)unaff_x25];
            ppppplVar12 != (long *****)0x0; ppppplVar12 = (long *****)*ppppplVar12) {
          pppppplVar8 = (long ******)ppppplVar12[1];
          if (pppppplVar8 == pppppplVar9) {
            pppppplVar8 = pppppplVar11;
            func_0x000107c2b068(pppppplVar11,ppppplVar12 + 2,&ppppplStack_128);
            if (((ulong)pppppplVar8 & 1) != 0) goto LAB_10aca19fc;
          }
          else {
            if (((ulong)pppppplVar14 & uVar13) == 0) {
              pppppplVar8 = (long ******)((ulong)pppppplVar8 & uVar13);
            }
            else if (pppppplVar14 <= pppppplVar8) {
              uVar10 = 0;
              if (pppppplVar14 != (long ******)0x0) {
                uVar10 = (ulong)pppppplVar8 / (ulong)pppppplVar14;
              }
              pppppplVar8 = (long ******)((long)pppppplVar8 - uVar10 * (long)pppppplVar14);
            }
            if (pppppplVar8 != unaff_x25) break;
          }
        }
      }
    }
    ppppplVar12 = (long *****)0x60;
    __Znwm();
    uStack_100 = 0;
    *ppppplVar12 = (long ****)0x0;
    ppppplVar12[1] = (long ****)pppppplVar9;
    pppplStack_110 = (long ****)ppppplVar12;
    ppppplStack_108 = (long *****)pppppplVar11;
    if ((long)uStack_118 < 0) {
      func_0x000107c3192c(ppppplVar12 + 2,ppppplStack_128,ppplStack_120);
    }
    else {
      ppppplVar12[3] = (long ****)ppplStack_120;
      ppppplVar12[2] = (long ****)ppppplStack_128;
      ppppplVar12[4] = uStack_118;
    }
    ppppplVar12[5] = (long ****)&PTR_FUN_110c6c2d0;
    *(undefined1 *)(ppppplVar12 + 6) = 0;
    *(undefined2 *)((long)ppppplVar12 + 0x32) = 0xf;
    ppppplVar12[9] = (long ****)0x0;
    ppppplVar12[8] = (long ****)0x0;
    ppppplVar12[0xb] = (long ****)0x0;
    ppppplVar12[10] = (long ****)0x0;
    FUN_10acc4edc(ppppplVar12 + 5,*param_4,param_4[1]);
    uStack_100 = CONCAT71(uStack_100._1_7_,1);
    if ((pppppplVar14 == (long ******)0x0) ||
       (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
      uVar13 = 1;
      if ((long ******)0x2 < pppppplVar14) {
        uVar13 = (ulong)(((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) != 0);
      }
      uVar13 = uVar13 | (long)pppppplVar14 << 1;
      uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      FUN_10a4ba824(pppppplVar11,uVar13);
      pppppplVar14 = (long ******)param_1[8];
      if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
        unaff_x25 = (long ******)((long)pppppplVar14 - 1U & (ulong)pppppplVar9);
      }
      else {
        unaff_x25 = pppppplVar9;
        if (pppppplVar14 <= pppppplVar9) {
          uVar13 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          unaff_x25 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
        }
      }
    }
    ppppplVar12 = *pppppplVar11;
    pppplVar5 = ppppplVar12[(long)unaff_x25];
    if (pppplVar5 == (long ****)0x0) {
      pppppplVar9 = param_1 + 9;
      *pppplStack_110 = (long ***)*pppppplVar9;
      *pppppplVar9 = (long *****)pppplStack_110;
      ppppplVar12[(long)unaff_x25] = (long ****)pppppplVar9;
      if ((long ****)*pppplStack_110 != (long ****)0x0) {
        pppppplVar9 = (long ******)(*pppplStack_110)[1];
        if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
          pppppplVar9 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar14 - 1U);
        }
        else if (pppppplVar14 <= pppppplVar9) {
          uVar13 = 0;
          if (pppppplVar14 != (long ******)0x0) {
            uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
          }
          pppppplVar9 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
        }
        (*pppppplVar11)[(long)pppppplVar9] = pppplStack_110;
      }
    }
    else {
      *pppplStack_110 = *pppplVar5;
      *pppplVar5 = (long ***)pppplStack_110;
    }
    param_1[10] = (long *****)((long)param_1[10] + 1);
    ppppplVar12 = (long *****)pppplStack_110;
LAB_10aca19fc:
    pppppplVar11 = param_1;
    func_0x00010a5499ec(param_1,1,ppppplVar12 + 5,&ppppplStack_128);
    if (*(char *)(param_1[0x11] + 1) == '\x01') {
      FUN_10a54a030(&pppplStack_110,param_1 + 5);
      pppppplVar11 = param_1 + 0x10;
      FUN_10a549a74(pppppplVar11,&pppplStack_110,&ppppplStack_128);
      pppppplVar9 = (long ******)ppppplStack_108;
      if ((long ******)ppppplStack_108 != (long ******)0x0) {
        pppppplVar14 = (long ******)(ppppplStack_108 + 1);
        do {
          ppppplVar12 = *pppppplVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar4) {
            *pppppplVar14 = (long *****)((long)ppppplVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppplVar12 == (long *****)0x0) {
          (*(code *)(*ppppplStack_108)[2])(ppppplStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
          pppppplVar11 = pppppplVar9;
        }
      }
    }
    if ((long)uStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
      pppppplVar11 = (long ******)ppppplStack_128;
    }
    return pppppplVar11;
  }
  if (param_3 < (long ****)0x17) {
    uStack_88 = (long ****)CONCAT17((char)param_3,(undefined7)uStack_88);
    pppppplVar9 = &ppppplStack_98;
    if (param_3 == (long ****)0x0) goto LAB_10aca1348;
  }
  else {
    pppppplVar11 = (long ******)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppppplVar11 = (long ******)(((ulong)param_3 | 7) + 1);
    }
    pppppplVar9 = pppppplVar11;
    __Znwm();
    uStack_88 = (long ****)((ulong)pppppplVar11 | 0x8000000000000000);
    ppppplStack_98 = (long *****)pppppplVar9;
    ppplStack_90 = (long ***)param_3;
  }
  _memmove(pppppplVar9,param_2,param_3);
LAB_10aca1348:
  *(undefined1 *)((long)pppppplVar9 + (long)param_3) = 0;
  FUN_10ac9e388(param_1,&ppppplStack_98,0);
  pppppplVar11 = param_1 + 7;
  pppppplVar9 = pppppplVar11;
  func_0x000107c2b05c(pppppplVar11,&ppppplStack_98);
  pppppplVar14 = (long ******)param_1[8];
  if (pppppplVar14 != (long ******)0x0) {
    uVar13 = (long)pppppplVar14 - 1;
    if (((ulong)pppppplVar14 & uVar13) == 0) {
      unaff_x27 = (long ******)(uVar13 & (ulong)pppppplVar9);
    }
    else {
      unaff_x27 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar10 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar10 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x27 = (long ******)((long)pppppplVar9 - uVar10 * (long)pppppplVar14);
      }
    }
    if ((*pppppplVar11)[(long)unaff_x27] != (long ****)0x0) {
      for (ppppplVar12 = (long *****)*(*pppppplVar11)[(long)unaff_x27];
          ppppplVar12 != (long *****)0x0; ppppplVar12 = (long *****)*ppppplVar12) {
        pppppplVar8 = (long ******)ppppplVar12[1];
        if (pppppplVar8 == pppppplVar9) {
          pppppplVar8 = pppppplVar11;
          func_0x000107c2b068(pppppplVar11,ppppplVar12 + 2,&ppppplStack_98);
          if (((ulong)pppppplVar8 & 1) != 0) goto LAB_10aca15dc;
        }
        else {
          if (((ulong)pppppplVar14 & uVar13) == 0) {
            pppppplVar8 = (long ******)((ulong)pppppplVar8 & uVar13);
          }
          else if (pppppplVar14 <= pppppplVar8) {
            uVar10 = 0;
            if (pppppplVar14 != (long ******)0x0) {
              uVar10 = (ulong)pppppplVar8 / (ulong)pppppplVar14;
            }
            pppppplVar8 = (long ******)((long)pppppplVar8 - uVar10 * (long)pppppplVar14);
          }
          if (pppppplVar8 != unaff_x27) break;
        }
      }
    }
  }
  ppppplVar12 = (long *****)0x60;
  __Znwm();
  uStack_70 = 0;
  *ppppplVar12 = (long ****)0x0;
  ppppplVar12[1] = (long ****)pppppplVar9;
  pppplStack_80 = (long ****)ppppplVar12;
  ppppplStack_78 = (long *****)pppppplVar11;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(ppppplVar12 + 2,ppppplStack_98,ppplStack_90);
  }
  else {
    ppppplVar12[3] = (long ****)ppplStack_90;
    ppppplVar12[2] = (long ****)ppppplStack_98;
    ppppplVar12[4] = uStack_88;
  }
  ppppplVar12[9] = (long ****)0x0;
  ppppplVar12[8] = (long ****)0x0;
  *(undefined1 *)(ppppplVar12 + 6) = 0;
  ppppplVar12[5] = (long ****)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)ppppplVar12 + 0x32) = 0xf;
  ppppplVar12[0xb] = (long ****)0x0;
  ppppplVar12[10] = (long ****)0x0;
  lVar1 = *param_4;
  lVar2 = param_4[1];
  pppplVar5 = (long ****)0x20;
  __Znwm();
  *pppplVar5 = (long ***)&PTR_FUN_110c6b8d8;
  pppplVar5[2] = (long ***)0x0;
  pppplVar5[3] = (long ***)0x0;
  pppplVar5[1] = (long ***)0x0;
  FUN_10a0ca588(pppplVar5 + 1,lVar1,lVar2,lVar2 - lVar1 >> 2);
  pppplVar6 = ppppplVar12[0xb];
  ppppplVar12[0xb] = pppplVar5;
  if (pppplVar6 != (long ****)0x0) {
    (*(code *)(*pppplVar6)[1])();
  }
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  if ((pppppplVar14 == (long ******)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)pppppplVar14 < (float)((long)param_1[10] + 1))) {
    uVar13 = 1;
    if ((long ******)0x2 < pppppplVar14) {
      uVar13 = (ulong)(((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)pppppplVar14 << 1;
    uVar10 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar13 <= uVar10) {
      uVar13 = uVar10;
    }
    FUN_10a4ba824(pppppplVar11,uVar13);
    pppppplVar14 = (long ******)param_1[8];
    if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
      unaff_x27 = (long ******)((long)pppppplVar14 - 1U & (ulong)pppppplVar9);
    }
    else {
      unaff_x27 = pppppplVar9;
      if (pppppplVar14 <= pppppplVar9) {
        uVar13 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        unaff_x27 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
      }
    }
  }
  ppppplVar12 = *pppppplVar11;
  pppplVar5 = ppppplVar12[(long)unaff_x27];
  if (pppplVar5 == (long ****)0x0) {
    pppppplVar9 = param_1 + 9;
    *pppplStack_80 = (long ***)*pppppplVar9;
    *pppppplVar9 = (long *****)pppplStack_80;
    ppppplVar12[(long)unaff_x27] = (long ****)pppppplVar9;
    if ((long ****)*pppplStack_80 != (long ****)0x0) {
      pppppplVar9 = (long ******)(*pppplStack_80)[1];
      if (((ulong)pppppplVar14 & (long)pppppplVar14 - 1U) == 0) {
        pppppplVar9 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar14 - 1U);
      }
      else if (pppppplVar14 <= pppppplVar9) {
        uVar13 = 0;
        if (pppppplVar14 != (long ******)0x0) {
          uVar13 = (ulong)pppppplVar9 / (ulong)pppppplVar14;
        }
        pppppplVar9 = (long ******)((long)pppppplVar9 - uVar13 * (long)pppppplVar14);
      }
      (*pppppplVar11)[(long)pppppplVar9] = pppplStack_80;
    }
  }
  else {
    *pppplStack_80 = *pppplVar5;
    *pppplVar5 = (long ***)pppplStack_80;
  }
  param_1[10] = (long *****)((long)param_1[10] + 1);
  ppppplVar12 = (long *****)pppplStack_80;
LAB_10aca15dc:
  pppppplVar11 = param_1;
  func_0x00010a5499ec(param_1,1,ppppplVar12 + 5,&ppppplStack_98);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&pppplStack_80,param_1 + 5);
    pppppplVar11 = param_1 + 0x10;
    FUN_10a549a74(pppppplVar11,&pppplStack_80,&ppppplStack_98);
    pppppplVar9 = (long ******)ppppplStack_78;
    if ((long ******)ppppplStack_78 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplStack_78 + 1);
      do {
        ppppplVar12 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar12 == (long *****)0x0) {
        (*(code *)(*ppppplStack_78)[2])(ppppplStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
        pppppplVar11 = pppppplVar9;
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppppplStack_98);
    pppppplVar11 = (long ******)ppppplStack_98;
  }
  return pppppplVar11;
}



/* Entry: 10aca1724; end: 10aca1b2b;  */

long ***** FUN_10aca1724(long *****param_1,undefined8 param_2,long ***param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  ulong uVar5;
  long ***ppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  long *****unaff_x25;
  ulong uVar10;
  long ***ppplStack_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ****pppplStack_88;
  long **pplStack_80;
  undefined8 uStack_78;
  long ***ppplStack_70;
  long ****pppplStack_68;
  undefined8 uStack_60;
  
  if ((long ***)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    func_0x00010a4baa30(&ppplStack_70,0);
    if (uStack_78._7_1_ < '\0') {
      __ZdlPv(pppplStack_88);
    }
    __Unwind_Resume();
    ppppplVar7 = (long *****)&ppplStack_e0;
    if (param_1 == (long *****)0x0) {
      ppppplVar7 = (long *****)0x0;
    }
    else {
      ppplStack_e0 = &pplStack_d8;
      pplStack_d8 = (long **)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010983a984();
      if (((ulong)ppppplVar7 & 1) != 0) {
        FUN_10aca02f8(param_1,&ppplStack_e0);
      }
      func_0x000109839668(&ppplStack_e0);
    }
    return ppppplVar7;
  }
  if (param_3 < (long ***)0x17) {
    uStack_78 = (long ***)CONCAT17((char)param_3,(undefined7)uStack_78);
    ppppplVar4 = &pppplStack_88;
    if (param_3 == (long ***)0x0) goto LAB_10aca17ac;
  }
  else {
    ppppplVar7 = (long *****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      ppppplVar7 = (long *****)(((ulong)param_3 | 7) + 1);
    }
    ppppplVar4 = ppppplVar7;
    __Znwm();
    uStack_78 = (long ***)((ulong)ppppplVar7 | 0x8000000000000000);
    pppplStack_88 = (long ****)ppppplVar4;
    pplStack_80 = (long **)param_3;
  }
  _memmove(ppppplVar4,param_2,param_3);
LAB_10aca17ac:
  *(undefined1 *)((long)ppppplVar4 + (long)param_3) = 0;
  FUN_10ac9e388(param_1,&pppplStack_88,0);
  ppppplVar7 = param_1 + 7;
  ppppplVar4 = ppppplVar7;
  func_0x000107c2b05c(ppppplVar7,&pppplStack_88);
  ppppplVar9 = (long *****)param_1[8];
  if (ppppplVar9 != (long *****)0x0) {
    uVar10 = (long)ppppplVar9 - 1;
    if (((ulong)ppppplVar9 & uVar10) == 0) {
      unaff_x25 = (long *****)(uVar10 & (ulong)ppppplVar4);
    }
    else {
      unaff_x25 = ppppplVar4;
      if (ppppplVar9 <= ppppplVar4) {
        uVar5 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar5 = (ulong)ppppplVar4 / (ulong)ppppplVar9;
        }
        unaff_x25 = (long *****)((long)ppppplVar4 - uVar5 * (long)ppppplVar9);
      }
    }
    if ((*ppppplVar7)[(long)unaff_x25] != (long ***)0x0) {
      for (pppplVar8 = (long ****)*(*ppppplVar7)[(long)unaff_x25]; pppplVar8 != (long ****)0x0;
          pppplVar8 = (long ****)*pppplVar8) {
        ppppplVar3 = (long *****)pppplVar8[1];
        if (ppppplVar3 == ppppplVar4) {
          ppppplVar3 = ppppplVar7;
          func_0x000107c2b068(ppppplVar7,pppplVar8 + 2,&pppplStack_88);
          if (((ulong)ppppplVar3 & 1) != 0) goto LAB_10aca19fc;
        }
        else {
          if (((ulong)ppppplVar9 & uVar10) == 0) {
            ppppplVar3 = (long *****)((ulong)ppppplVar3 & uVar10);
          }
          else if (ppppplVar9 <= ppppplVar3) {
            uVar5 = 0;
            if (ppppplVar9 != (long *****)0x0) {
              uVar5 = (ulong)ppppplVar3 / (ulong)ppppplVar9;
            }
            ppppplVar3 = (long *****)((long)ppppplVar3 - uVar5 * (long)ppppplVar9);
          }
          if (ppppplVar3 != unaff_x25) break;
        }
      }
    }
  }
  pppplVar8 = (long ****)0x60;
  __Znwm();
  uStack_60 = 0;
  *pppplVar8 = (long ***)0x0;
  pppplVar8[1] = (long ***)ppppplVar4;
  ppplStack_70 = (long ***)pppplVar8;
  pppplStack_68 = (long ****)ppppplVar7;
  if ((long)uStack_78 < 0) {
    func_0x000107c3192c(pppplVar8 + 2,pppplStack_88,pplStack_80);
  }
  else {
    pppplVar8[3] = (long ***)pplStack_80;
    pppplVar8[2] = (long ***)pppplStack_88;
    pppplVar8[4] = uStack_78;
  }
  pppplVar8[5] = (long ***)&PTR_FUN_110c6c2d0;
  *(undefined1 *)(pppplVar8 + 6) = 0;
  *(undefined2 *)((long)pppplVar8 + 0x32) = 0xf;
  pppplVar8[9] = (long ***)0x0;
  pppplVar8[8] = (long ***)0x0;
  pppplVar8[0xb] = (long ***)0x0;
  pppplVar8[10] = (long ***)0x0;
  FUN_10acc4edc(pppplVar8 + 5,*param_4,param_4[1]);
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  if ((ppppplVar9 == (long *****)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)ppppplVar9 < (float)((long)param_1[10] + 1))) {
    uVar10 = 1;
    if ((long *****)0x2 < ppppplVar9) {
      uVar10 = (ulong)(((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)ppppplVar9 << 1;
    uVar5 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    FUN_10a4ba824(ppppplVar7,uVar10);
    ppppplVar9 = (long *****)param_1[8];
    if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
      unaff_x25 = (long *****)((long)ppppplVar9 - 1U & (ulong)ppppplVar4);
    }
    else {
      unaff_x25 = ppppplVar4;
      if (ppppplVar9 <= ppppplVar4) {
        uVar10 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar10 = (ulong)ppppplVar4 / (ulong)ppppplVar9;
        }
        unaff_x25 = (long *****)((long)ppppplVar4 - uVar10 * (long)ppppplVar9);
      }
    }
  }
  pppplVar8 = *ppppplVar7;
  ppplVar6 = pppplVar8[(long)unaff_x25];
  if (ppplVar6 == (long ***)0x0) {
    ppppplVar4 = param_1 + 9;
    *ppplStack_70 = (long **)*ppppplVar4;
    *ppppplVar4 = (long ****)ppplStack_70;
    pppplVar8[(long)unaff_x25] = (long ***)ppppplVar4;
    if ((long ***)*ppplStack_70 != (long ***)0x0) {
      ppppplVar4 = (long *****)(*ppplStack_70)[1];
      if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
        ppppplVar4 = (long *****)((ulong)ppppplVar4 & (long)ppppplVar9 - 1U);
      }
      else if (ppppplVar9 <= ppppplVar4) {
        uVar10 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar10 = (ulong)ppppplVar4 / (ulong)ppppplVar9;
        }
        ppppplVar4 = (long *****)((long)ppppplVar4 - uVar10 * (long)ppppplVar9);
      }
      (*ppppplVar7)[(long)ppppplVar4] = ppplStack_70;
    }
  }
  else {
    *ppplStack_70 = *ppplVar6;
    *ppplVar6 = (long **)ppplStack_70;
  }
  param_1[10] = (long ****)((long)param_1[10] + 1);
  pppplVar8 = (long ****)ppplStack_70;
LAB_10aca19fc:
  ppppplVar7 = param_1;
  func_0x00010a5499ec(param_1,1,pppplVar8 + 5,&pppplStack_88);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&ppplStack_70,param_1 + 5);
    ppppplVar7 = param_1 + 0x10;
    FUN_10a549a74(ppppplVar7,&ppplStack_70,&pppplStack_88);
    ppppplVar4 = (long *****)pppplStack_68;
    if ((long *****)pppplStack_68 != (long *****)0x0) {
      ppppplVar9 = (long *****)(pppplStack_68 + 1);
      do {
        pppplVar8 = *ppppplVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar2) {
          *ppppplVar9 = (long ****)((long)pppplVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar8 == (long ****)0x0) {
        (*(code *)(*pppplStack_68)[2])(pppplStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar4);
        ppppplVar7 = ppppplVar4;
      }
    }
  }
  if ((long)uStack_78 < 0) {
    __ZdlPv(pppplStack_88);
    ppppplVar7 = (long *****)pppplStack_88;
  }
  return ppppplVar7;
}



/* Entry: 10aca1b2c; end: 10aca1bab;  */

undefined1 * FUN_10aca1b2c(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  if (param_1 == 0) {
    ppuVar1 = (undefined8 **)0x0;
  }
  else {
    puStack_50 = &uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010983a984();
    if (((ulong)ppuVar1 & 1) != 0) {
      FUN_10aca02f8(param_1,&puStack_50);
    }
    func_0x000109839668(&puStack_50);
  }
  return (undefined1 *)ppuVar1;
}



/* Entry: 10aca1bac; end: 10aca1c43;  */

undefined1  [16] FUN_10aca1bac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f6a19f9;
  return auVar1;
}



/* Entry: 10aca1c44; end: 10aca1d3b;  */

void FUN_10aca1c44(undefined8 param_1)

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
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x132;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aca1d3c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1364;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acd379c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a136a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acd3974(param_1,&puStack_98);
  FUN_10acd3a94(param_1);
  return;
}



/* Entry: 10aca1d3c; end: 10aca1e13;  */

/* WARNING: Removing unreachable block (ram,0x00010aca1dd4) */

undefined1  [16] FUN_10aca1d3c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a19f9,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd36a0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aca1e14; end: 10aca1f63;  */

long ******* FUN_10aca1e14(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  undefined8 *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long ******pppppplStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  ppppppplVar4 = (long *******)(param_1 + 0x48);
  puVar6 = &uStack_50;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_10acd3b50();
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  if ((long *******)(param_1 + 0x50) != ppppppplVar4) {
    return ppppppplVar4;
  }
  if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
    return ppppppplVar4;
  }
  if (0x7ffffffffffffff7 < uStack_48) {
    func_0x000109ffde50();
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppplStack_68);
    }
    __Unwind_Resume();
    if (puVar6 == (undefined8 *)0xc) {
      bVar3 = false;
      if (*ppppppplVar4 == (long ******)0x624f747069726353) {
        bVar3 = *(int *)(ppppppplVar4 + 1) == 0x7463656a;
      }
    }
    else {
      if (puVar6 != (undefined8 *)0x12) {
        return (long *******)0x0;
      }
      bVar3 = (*ppppppplVar4 == (long ******)0x70537463656a624f &&
              ppppppplVar4[1] == (long ******)0x6144636966696365) &&
              *(short *)(ppppppplVar4 + 2) == 0x6174;
    }
    return (long *******)(ulong)bVar3;
  }
  if (uStack_48 < 0x17) {
    uStack_58 = CONCAT17((char)uStack_48,(undefined7)uStack_58);
    ppppppplVar5 = &pppppplStack_68;
    if (uStack_48 == 0) goto LAB_10aca1ed4;
  }
  else {
    ppppppplVar4 = (long *******)0x19;
    if ((uStack_48 | 7) != 0x17) {
      ppppppplVar4 = (long *******)((uStack_48 | 7) + 1);
    }
    ppppppplVar5 = ppppppplVar4;
    __Znwm();
    uStack_58 = (ulong)ppppppplVar4 | 0x8000000000000000;
    uStack_60 = uVar2;
    pppppplStack_68 = (long ******)ppppppplVar5;
  }
  _memmove(ppppppplVar5,uVar1,uVar2);
LAB_10aca1ed4:
  *(undefined1 *)((long)ppppppplVar5 + uVar2) = 0;
  ppppppplVar4 = (long *******)pppppplStack_68;
  if (-1 < (long)uStack_58) {
    ppppppplVar4 = &pppppplStack_68;
  }
  ppppppplVar5 = (long *******)0x1;
  func_0x00010ae06f08(1,2,&UNK_10f6a1371,&UNK_10f6a13ab,10,&UNK_10f6a13f1,in_x6,in_x7,ppppppplVar4);
  if ((long)uStack_58 < 0) {
    __ZdlPv(pppppplStack_68);
    ppppppplVar5 = (long *******)pppppplStack_68;
  }
  return ppppppplVar5;
}



/* Entry: 10aca1f64; end: 10aca20cf;  */

bool FUN_10aca1f64(long *param_1,long param_2)

{
  bool bVar1;
  
  if (param_2 == 0xc) {
    bVar1 = false;
    if (*param_1 == 0x624f747069726353) {
      bVar1 = (int)param_1[1] == 0x7463656a;
    }
  }
  else {
    if (param_2 != 0x12) {
      return false;
    }
    bVar1 = (*param_1 == 0x70537463656a624f && param_1[1] == 0x6144636966696365) &&
            (short)param_1[2] == 0x6174;
  }
  return bVar1;
}



/* Entry: 10aca20d0; end: 10aca212b;  */

void FUN_10aca20d0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6a0902;
  uStack_38 = 0;
  puStack_30 = &UNK_10f6a0902;
  uStack_28 = 0;
  uStack_20 = 0x14100000000;
  uStack_18 = 0xffffffff;
  FUN_10aca212c(param_1,&uStack_58);
  FUN_10acd3de4();
  return;
}



/* Entry: 10aca212c; end: 10aca2203;  */

/* WARNING: Removing unreachable block (ram,0x00010aca21c4) */

undefined1  [16] FUN_10aca212c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a1a05,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd3ce8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aca2204; end: 10aca2257;  */

void FUN_10aca2204(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6a0902;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f6a0902;
  uStack_18 = 0xffffffff;
  FUN_10aca2258(param_1,&uStack_58);
  FUN_10acd3f9c();
  return;
}



/* Entry: 10aca2258; end: 10aca232f;  */

/* WARNING: Removing unreachable block (ram,0x00010aca22f0) */

undefined1  [16] FUN_10aca2258(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a1a18,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd3ea0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aca2330; end: 10aca2777;  */

void FUN_10aca2330(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  int *piVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar14 = (long *)*param_2;
  plVar15 = (long *)param_2[1];
  if ((long)plVar15 - (long)plVar14 != 0) {
    uVar12 = ((long)plVar15 - (long)plVar14 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar12) {
      FUN_10acb61ec();
LAB_10aca2738:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10aca273c);
      (*pcVar11)();
    }
    plVar14 = param_2;
    plStack_68 = param_1;
    FUN_10acb6200();
    plVar13 = (long *)param_1[1];
    lVar23 = uVar12 + (*param_1 - (long)plVar13);
    func_0x00010acb6244(*param_1,plVar13,lVar23);
    uStack_88 = *param_1;
    *param_1 = lVar23;
    param_1[1] = uVar12;
    lStack_70 = param_1[2];
    param_1[2] = uVar12 + (long)plVar14 * 0x28;
    lStack_80 = uStack_88;
    lStack_78 = uStack_88;
    func_0x00010acb62c4(&uStack_88);
    plVar14 = (long *)*param_2;
    plVar15 = (long *)param_2[1];
    param_2 = plVar13;
  }
  do {
    if (plVar14 == plVar15) {
      return;
    }
    uStack_98 = (undefined5)plVar14[3];
    uStack_93 = (undefined3)*(undefined8 *)((long)plVar14 + 0x1d);
    uStack_90 = (undefined5)((ulong)*(undefined8 *)((long)plVar14 + 0x1d) >> 0x18);
    piVar2 = (int *)*plVar14;
    piVar22 = (int *)plVar14[1];
    if ((long)piVar22 - (long)piVar2 == 0) {
      plVar13 = (long *)0x0;
      plVar21 = (long *)0x0;
      plVar6 = plVar13;
    }
    else {
      plVar13 = (long *)(((long)piVar22 - (long)piVar2 >> 3) * -0x5555555555555555);
      if ((long *)0xaaaaaaaaaaaaaaa < plVar13) {
        FUN_10acb6324();
        goto LAB_10aca2738;
      }
      FUN_10acb6338();
      plVar21 = plVar13 + (long)param_2 * 3;
      piVar2 = (int *)*plVar14;
      piVar22 = (int *)plVar14[1];
      plVar6 = plVar13;
    }
    for (; piVar2 != piVar22; piVar2 = piVar2 + 6) {
      uVar17 = 2;
      if (*piVar2 != 1) {
        uVar17 = 0;
      }
      iVar7 = piVar2[1];
      if (*piVar2 == 0) {
        uVar17 = 1;
      }
      iVar3 = piVar2[2];
      uVar12 = (ulong)uStack_88 >> 0x38;
      uStack_88._7_1_ = (undefined1)uVar12;
      uStack_88._0_7_ = CONCAT43(iVar3,(int3)*(undefined4 *)((long)piVar2 + 5));
      lVar23 = uStack_88;
      iVar8 = piVar2[3];
      iVar9 = piVar2[4];
      uVar5 = *(undefined2 *)((long)piVar2 + 0x11);
      uVar4 = *(undefined1 *)((long)piVar2 + 0x13);
      iVar10 = piVar2[5];
      if (plVar13 < plVar21) {
        *(undefined4 *)plVar13 = uVar17;
        *(char *)((long)plVar13 + 4) = (char)iVar7;
        *(undefined4 *)((long)plVar13 + 5) = (undefined4)uStack_88;
        *(int *)(plVar13 + 1) = iVar3;
        *(char *)((long)plVar13 + 0xc) = (char)iVar8;
        *(char *)(plVar13 + 2) = (char)iVar9;
        *(undefined2 *)((long)plVar13 + 0x11) = uVar5;
        *(undefined1 *)((long)plVar13 + 0x13) = uVar4;
        *(char *)((long)plVar13 + 0x14) = (char)iVar10;
        plVar19 = plVar6;
        uStack_88 = lVar23;
      }
      else {
        plVar16 = (long *)(((long)plVar13 - (long)plVar6 >> 3) * -0x5555555555555555 + 1);
        if ((long *)0xaaaaaaaaaaaaaaa < plVar16) {
          FUN_10acb6324();
          goto LAB_10aca2738;
        }
        lVar23 = (long)plVar21 - (long)plVar6 >> 3;
        plVar19 = (long *)(lVar23 * 0x5555555555555556);
        if (plVar19 < plVar16 || (long)plVar19 - (long)plVar16 == 0) {
          plVar19 = plVar16;
        }
        if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
          plVar19 = (long *)0xaaaaaaaaaaaaaaa;
        }
        FUN_10acb6338();
        plVar13 = (long *)((long)plVar19 + ((long)plVar13 - (long)plVar6));
        *(undefined4 *)plVar13 = uVar17;
        *(char *)((long)plVar13 + 4) = (char)iVar7;
        plVar21 = plVar19 + (long)param_2 * 3;
        *(undefined4 *)((long)plVar13 + 5) = (undefined4)uStack_88;
        *(undefined4 *)(plVar13 + 1) = uStack_88._3_4_;
        *(char *)((long)plVar13 + 0xc) = (char)iVar8;
        *(char *)(plVar13 + 2) = (char)iVar9;
        *(undefined2 *)((long)plVar13 + 0x11) = uVar5;
        *(undefined1 *)((long)plVar13 + 0x13) = uVar4;
        *(char *)((long)plVar13 + 0x14) = (char)iVar10;
        param_2 = plVar6;
        _memcpy();
        if (plVar6 != (long *)0x0) {
          __ZdlPv(plVar6);
        }
      }
      plVar13 = plVar13 + 3;
      plVar6 = plVar19;
    }
    puVar24 = (undefined8 *)param_1[1];
    if (puVar24 < (undefined8 *)param_1[2]) {
      *puVar24 = plVar6;
      puVar24[1] = plVar13;
      puVar24[2] = plVar21;
      puVar24[4] = CONCAT35(uStack_8b,uStack_90);
      puVar24[3] = CONCAT35(uStack_93,uStack_98);
      puVar24 = puVar24 + 5;
    }
    else {
      lVar23 = (long)puVar24 - *param_1;
      uVar12 = (lVar23 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar12) {
        FUN_10acb61ec();
        goto LAB_10aca2738;
      }
      lVar18 = param_1[2] - *param_1 >> 3;
      uVar20 = lVar18 * -0x6666666666666666;
      if (uVar20 < uVar12 || uVar20 - uVar12 == 0) {
        uVar20 = uVar12;
      }
      if (0x333333333333332 < (ulong)(lVar18 * -0x3333333333333333)) {
        uVar20 = 0x666666666666666;
      }
      plStack_68 = param_1;
      FUN_10acb6200();
      puVar1 = (undefined8 *)(uVar20 + lVar23);
      lVar18 = (long)param_2 * 0x28;
      *puVar1 = plVar6;
      puVar1[1] = plVar13;
      puVar1[2] = plVar21;
      puVar1[4] = CONCAT35(uStack_8b,uStack_90);
      puVar1[3] = CONCAT35(uStack_93,uStack_98);
      puVar24 = puVar1 + 5;
      param_2 = (long *)param_1[1];
      lVar23 = (long)puVar1 + (*param_1 - (long)param_2);
      func_0x00010acb6244(*param_1,param_2,lVar23);
      uStack_88 = *param_1;
      *param_1 = lVar23;
      param_1[1] = (long)puVar24;
      lStack_70 = param_1[2];
      param_1[2] = uVar20 + lVar18;
      lStack_80 = uStack_88;
      lStack_78 = uStack_88;
      func_0x00010acb62c4(&uStack_88);
    }
    param_1[1] = (long)puVar24;
    plVar14 = plVar14 + 5;
  } while( true );
}



/* Entry: 10aca2778; end: 10aca27e3;  */

undefined8 * FUN_10aca2778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a5e0;
  func_0x00010acd40d0(param_1 + 0xf);
  func_0x00010acb637c(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aca27e4; end: 10aca27e7;  */

undefined8 * FUN_10aca27e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a5e0;
  func_0x00010acd40d0(param_1 + 0xf);
  func_0x00010acb637c(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aca27e8; end: 10aca27fb;  */

void FUN_10aca27e8(void)

{
  FUN_10aca2778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aca27fc; end: 10aca29c3;  */

undefined1  [16] FUN_10aca27fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f6a1a29;
  return auVar1;
}



/* Entry: 10aca29c4; end: 10aca2a27;  */

void FUN_10aca29c4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6a0902;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x130;
  uStack_18 = 0xffffffff;
  FUN_10aca2a28(param_1,&uStack_58);
  FUN_10acd441c();
  return;
}



/* Entry: 10aca2a28; end: 10aca2aff;  */

/* WARNING: Removing unreachable block (ram,0x00010aca2ac0) */

undefined1  [16] FUN_10aca2a28(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a1a29,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd4320(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aca2b00; end: 10aca2b53;  */

void FUN_10aca2b00(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6a0902;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f6a0902;
  uStack_18 = 0xffffffff;
  FUN_10aca2b54(param_1,&uStack_58);
  FUN_10acd45d4();
  return;
}



/* Entry: 10aca2b54; end: 10aca2c2b;  */

/* WARNING: Removing unreachable block (ram,0x00010aca2bec) */

undefined1  [16] FUN_10aca2b54(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a1a3f,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd44d8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


