/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a27eb3c; end: 10a27ebff;  */

void FUN_10a27eb3c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  byte bStack_20;
  long lStack_18;
  
  plVar8 = &lStack_60;
  plVar5 = &lStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_58 = param_2[1];
  lStack_60 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_48 = param_2[3];
  lStack_50 = param_2[2];
  if (param_2[3] != 0) {
    plVar6 = (long *)(param_2[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_20 = 2;
  func_0x00010a2496a8(param_1 + 0xa8,&lStack_60);
  if (3 < (ulong)bStack_20) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a27ebfc);
    (*pcVar3)();
  }
  (*(code *)(&PTR_FUN_110b9a040)[bStack_20])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a27e60c(plVar5,plVar8);
  FUN_10a052e3c(param_4);
  if ((char)plVar7[0x1d] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar5,plVar7[0x15] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar5 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar5[lVar9 + 2];
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
  lVar9 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar5;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_e8 = lVar9;
          lStack_e0 = lVar9;
          lStack_d8 = lVar9;
          lStack_d0 = lVar15;
          func_0x00010988c1b8(&lStack_e8);
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
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a27ec00; end: 10a27ecd3;  */

void FUN_10a27ec00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27e60c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x1d] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x15] + 8);
  }
  else {
    *param_1 = 1;
  }
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



/* Entry: 10a27ecd4; end: 10a27ed8b;  */

void FUN_10a27ecd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27ed8c(param_1,param_2,FUN_10a27eb3c,0,param_3,param_4,param_5);
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



/* Entry: 10a27ed8c; end: 10a27ee3b;  */

void FUN_10a27ed8c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_70 [32];
  
  lVar2 = param_2;
  func_0x00010a27e650(param_2,param_5);
  FUN_10a27b778(param_7);
  FUN_10a05dd14(auStack_70,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_70);
  FUN_10a688c1c(auStack_70);
  *param_1 = 0;
  return;
}



/* Entry: 10a27ee3c; end: 10a27eeff;  */

void FUN_10a27ee3c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  byte bStack_20;
  long lStack_18;
  
  plVar8 = &lStack_60;
  plVar5 = &lStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_58 = param_2[1];
  lStack_60 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_48 = param_2[3];
  lStack_50 = param_2[2];
  if (param_2[3] != 0) {
    plVar6 = (long *)(param_2[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_20 = 2;
  func_0x00010a2496a8(param_1 + 0xf0,&lStack_60);
  if (3 < (ulong)bStack_20) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a27eefc);
    (*pcVar3)();
  }
  (*(code *)(&PTR_FUN_110b9a040)[bStack_20])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a27e60c(plVar5,plVar8);
  FUN_10a052e3c(param_4);
  if ((char)plVar7[0x26] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar5,plVar7[0x1e] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar5 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar5[lVar9 + 2];
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
  lVar9 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar5;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_e8 = lVar9;
          lStack_e0 = lVar9;
          lStack_d8 = lVar9;
          lStack_d0 = lVar15;
          func_0x00010988c1b8(&lStack_e8);
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
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a27ef00; end: 10a27efd3;  */

void FUN_10a27ef00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27e60c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x26] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x1e] + 8);
  }
  else {
    *param_1 = 1;
  }
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



/* Entry: 10a27efd4; end: 10a27f08b;  */

void FUN_10a27efd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27ed8c(param_1,param_2,FUN_10a27ee3c,0,param_3,param_4,param_5);
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



/* Entry: 10a27f08c; end: 10a27f15f;  */

void FUN_10a27f08c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27e60c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x2f] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x27] + 8);
  }
  else {
    *param_1 = 1;
  }
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



/* Entry: 10a27f160; end: 10a27f2db;  */

/* WARNING: Possible PIC construction at 0x00010a27f2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a27f2d4) */
/* WARNING: Removing unreachable block (ram,0x00010a27f384) */
/* WARNING: Removing unreachable block (ram,0x00010a27f320) */
/* WARNING: Removing unreachable block (ram,0x00010a27f338) */

void FUN_10a27f160(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar13;
  undefined8 unaff_x22;
  long lVar14;
  long lVar15;
  long *unaff_x23;
  long lVar16;
  undefined8 unaff_x24;
  ulong uVar17;
  undefined8 unaff_x25;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  puVar9 = &uStack_b0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010a27e650(param_2,param_3);
  FUN_10a27b9ec(param_5);
  FUN_10a086014(&uStack_b0,param_2,param_4);
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 != 0) {
    plVar2 = (long *)(lStack_a8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 != 0) {
    plVar2 = (long *)(lStack_98 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  bStack_50 = 2;
  func_0x00010a249770(plVar8 + 0x27,&uStack_90);
  if (3 < (ulong)bStack_50) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a27f2c4);
    (*pcVar5)();
  }
  (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&uStack_90);
  FUN_10a688c1c();
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    unaff_x30 = 0x10a27f2d4;
    register0x00000008 = (BADSPACEBASE *)&uStack_b0;
    unaff_x19 = plVar7;
    unaff_x20 = (undefined1 *)puVar9;
    unaff_x21 = plVar8;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  plVar8 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar11 = lVar10 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar8[lVar10 + 2];
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = *plVar8;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar15 = lVar6 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar8 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar6 + uVar12 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar10;
          *(long *)((long)register0x00000008 + -0x70) = lVar16;
          *(long *)((long)register0x00000008 + -0x88) = lVar10;
          *(long *)((long)register0x00000008 + -0x80) = lVar10;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar11 < uVar17) {
    lVar10 = lVar10 + uVar11 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a27f2dc; end: 10a27f3a3;  */

void FUN_10a27f2dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a27f40c(param_5);
  func_0x00010a27aa80(param_2,param_4);
  FUN_10a249f74(plVar4,param_2);
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



/* Entry: 10a27f3a4; end: 10a27f40b;  */

/* WARNING: Possible PIC construction at 0x00010a27f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a27f7d4) */
/* WARNING: Removing unreachable block (ram,0x00010a27f884) */
/* WARNING: Removing unreachable block (ram,0x00010a27f820) */
/* WARNING: Removing unreachable block (ram,0x00010a27f838) */

void FUN_10a27f3a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  long *unaff_x21;
  long lVar18;
  long *unaff_x22;
  long lVar19;
  long *unaff_x23;
  long lVar20;
  long *unaff_x24;
  long lVar21;
  ulong uVar22;
  long *unaff_x25;
  long *plVar23;
  ulong uVar24;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar25;
  long lStack_1a0;
  ulong uStack_198;
  code **ppcStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long alStack_168 [7];
  undefined8 uStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [56];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  plVar7 = param_1;
  func_0x000109898688();
  if (plVar7 != (long *)0x0) {
    plVar9 = param_1;
    FUN_10a053854(param_1,plVar7);
    if (plVar9 != (long *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (plVar9 != (long *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar8 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar8 == 1) {
    return;
  }
  pppuVar5 = &ppuStack_30;
  pcStack_28 = FUN_10a27f40c;
  plVar9 = (long *)0x1;
  uVar14 = 0;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_10a052ee0(1,0,puVar8);
  pcStack_38 = FUN_10a27f430;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar9;
  pppuStack_40 = &ppuStack_30;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a27f3a4(plVar9,uVar14);
  FUN_10a052e3c(param_4);
  FUN_10a3bf120(&plStack_178);
  lVar21 = *(long *)(plVar9[7] + 0x100);
  plVar10 = (long *)0x138;
  __Znwm();
  plStack_e8 = plStack_178;
  plVar23 = plVar10 + 1;
  *plVar23 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar10 + 3;
  plStack_178 = (long *)0x0;
  plStack_e0 = plStack_170;
  (**(code **)(alStack_168[0] + 0x10))(auStack_d8,alStack_168);
  uStack_a0 = uStack_130;
  uStack_198 = *(ulong *)(lVar21 + 0x210);
  lStack_1a0 = *(long *)(lVar21 + 0x208);
  if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
    uStack_198 = (ulong)*(byte *)(lVar21 + 0x21f);
    lStack_1a0 = lVar21 + 0x208;
  }
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  ppcStack_190 = &pcStack_128;
  pcStack_128 = FUN_10a282dc4;
  ppuStack_120 = &PTR_DAT_110ae9180;
  FUN_10a23708c(plVar1,&UNK_10e4a2275,0x1f,&UNK_10f647b49,4,&plStack_e8,1);
  (*(code *)*ppuStack_120)(&ppuStack_120);
  FUN_10a042634(&plStack_e8);
  plStack_188 = plVar1;
  plStack_180 = plVar10;
  FUN_10a042634(&plStack_178);
  plVar11 = *(long **)(*(long *)(plVar9[7] + 0x100) + 0x1c8);
  (**(code **)(*plVar11 + 0x60))();
  plStack_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  plVar12 = (long *)plVar11[1];
  if (((plVar12 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar12, plVar12 == (long *)0x0)) ||
     (plVar12 = (long *)*plVar11, plStack_e8 = plVar12, plVar12 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f6473ed,0x159,&UNK_10f64724b);
    }
    FUN_10a24b478();
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = *plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_178 = plVar1;
    plStack_170 = plVar10;
    (**(code **)*plVar12)(plVar12,&plStack_178);
    plVar13 = plStack_170;
    plVar9 = plVar12;
    if (plStack_170 != (long *)0x0) {
      plVar12 = plStack_170 + 1;
      do {
        lVar17 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar9 = plVar13;
      }
    }
  }
  plVar12 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar13 = plStack_e0 + 1;
    do {
      lVar17 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar9 = plVar12;
    }
  }
  plVar12 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar13 = plStack_180 + 1;
    do {
      lVar17 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      plVar9 = plVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *extraout_x8 = 0;
  ppppuVar25 = (undefined8 ****)pppuStack_40;
  pcVar4 = pcStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_178);
    func_0x00010a05a8c4(&plStack_e8);
    FUN_10a05bd88(&plStack_188);
    pppuVar5 = (undefined8 ***)&lStack_1a0;
    param_1 = plVar7;
    unaff_x20 = plVar9;
    unaff_x21 = plVar12;
    unaff_x22 = plVar10;
    unaff_x23 = plVar1;
    unaff_x24 = plVar11;
    unaff_x25 = plVar23;
    unaff_x26 = lVar21 + 0x208;
    ppppuVar25 = &pppuStack_40;
    pcVar4 = (code *)0x10a27f7d4;
  }
  plVar9 = plVar7 + 0x4b;
  lVar21 = plVar7[0x59];
  uVar15 = lVar21 - 1;
  plVar7[0x59] = uVar15;
  if (uVar15 < 8) {
    uVar15 = plVar9[lVar21 + 2];
    if (plVar7[0x5a] == uVar15) {
      return;
    }
  }
  else {
    uVar15 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar15) {
      return;
    }
  }
  *(undefined8 *)((long)pppuVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppuVar5 + -0x58) = unaff_x27;
  *(long *)((long)pppuVar5 + -0x50) = unaff_x26;
  *(long **)((long)pppuVar5 + -0x48) = unaff_x25;
  *(long **)((long)pppuVar5 + -0x40) = unaff_x24;
  *(long **)((long)pppuVar5 + -0x38) = unaff_x23;
  *(long **)((long)pppuVar5 + -0x30) = unaff_x22;
  *(long **)((long)pppuVar5 + -0x28) = unaff_x21;
  *(long **)((long)pppuVar5 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar5 + -0x18) = param_1;
  *(undefined8 *****)((long)pppuVar5 + -0x10) = ppppuVar25;
  *(code **)((long)pppuVar5 + -8) = pcVar4;
  lVar21 = *plVar9;
  lVar17 = plVar7[0x4c];
  lVar18 = lVar17 - lVar21;
  uVar22 = lVar18 >> 4;
  if (uVar22 < uVar15) {
    uVar24 = uVar15 - uVar22;
    lVar20 = plVar7[0x4d];
    if ((ulong)(lVar20 - lVar17 >> 4) < uVar24) {
      if (uVar15 >> 0x3c == 0) {
        uVar16 = lVar20 - lVar21 >> 3;
        if (uVar16 <= uVar15) {
          uVar16 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - lVar21)) {
          uVar16 = 0xfffffffffffffff;
        }
        *(long **)((long)pppuVar5 + -0x68) = plVar9;
        if (uVar16 >> 0x3c == 0) {
          lVar6 = uVar16 << 4;
          __Znwm();
          lVar17 = lVar6 + lVar18;
          _bzero(lVar17,uVar24 * 0x10);
          lVar19 = lVar17 + uVar22 * -0x10;
          _memcpy(lVar19,lVar21,lVar18);
          *plVar9 = lVar19;
          plVar7[0x4c] = lVar17 + uVar24 * 0x10;
          plVar7[0x4d] = lVar6 + uVar16 * 0x10;
          *(long *)((long)pppuVar5 + -0x78) = lVar21;
          *(long *)((long)pppuVar5 + -0x70) = lVar20;
          *(long *)((long)pppuVar5 + -0x88) = lVar21;
          *(long *)((long)pppuVar5 + -0x80) = lVar21;
          func_0x00010988c1b8((undefined1 *)((long)pppuVar5 + -0x88));
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
    _bzero(lVar17,uVar24 * 0x10);
    plVar7[0x4c] = lVar17 + uVar24 * 0x10;
  }
  else if (uVar15 < uVar22) {
    lVar21 = lVar21 + uVar15 * 0x10;
    while (lVar17 != lVar21) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar7[0x4c] = lVar21;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar15;
  return;
}



/* Entry: 10a27f40c; end: 10a27f42f;  */

/* WARNING: Possible PIC construction at 0x00010a27f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a27f7d4) */
/* WARNING: Removing unreachable block (ram,0x00010a27f884) */
/* WARNING: Removing unreachable block (ram,0x00010a27f820) */
/* WARNING: Removing unreachable block (ram,0x00010a27f838) */

void FUN_10a27f40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  long lVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long *unaff_x23;
  long lVar19;
  long *unaff_x24;
  long lVar20;
  ulong uVar21;
  long *unaff_x25;
  long *plVar22;
  ulong uVar23;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  long lStack_180;
  ulong uStack_178;
  code **ppcStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long alStack_148 [7];
  undefined8 uStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)&stack0xfffffffffffffff0;
  plVar7 = (long *)0x1;
  uVar13 = 0;
  FUN_10a052ee0(1,0,param_1);
  pcStack_18 = FUN_10a27f430;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar7;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a27f3a4(plVar7,uVar13);
  FUN_10a052e3c(param_4);
  FUN_10a3bf120(&plStack_158);
  lVar20 = *(long *)(plVar7[7] + 0x100);
  plVar9 = (long *)0x138;
  __Znwm();
  plStack_c8 = plStack_158;
  plVar22 = plVar9 + 1;
  *plVar22 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar9 + 3;
  plStack_158 = (long *)0x0;
  plStack_c0 = plStack_150;
  (**(code **)(alStack_148[0] + 0x10))(auStack_b8,alStack_148);
  uStack_80 = uStack_110;
  uStack_178 = *(ulong *)(lVar20 + 0x210);
  lStack_180 = *(long *)(lVar20 + 0x208);
  if (-1 < (char)*(byte *)(lVar20 + 0x21f)) {
    uStack_178 = (ulong)*(byte *)(lVar20 + 0x21f);
    lStack_180 = lVar20 + 0x208;
  }
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  ppcStack_170 = &pcStack_108;
  pcStack_108 = FUN_10a282dc4;
  ppuStack_100 = &PTR_DAT_110ae9180;
  FUN_10a23708c(plVar1,&UNK_10e4a2275,0x1f,&UNK_10f647b49,4,&plStack_c8,1);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  FUN_10a042634(&plStack_c8);
  plStack_168 = plVar1;
  plStack_160 = plVar9;
  FUN_10a042634(&plStack_158);
  plVar10 = *(long **)(*(long *)(plVar7[7] + 0x100) + 0x1c8);
  (**(code **)(*plVar10 + 0x60))();
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar11 = (long *)plVar10[1];
  if (((plVar11 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_c0 = plVar11, plVar11 == (long *)0x0)) ||
     (plVar11 = (long *)*plVar10, plStack_c8 = plVar11, plVar11 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f6473ed,0x159,&UNK_10f64724b);
    }
    FUN_10a24b478();
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_158 = plVar1;
    plStack_150 = plVar9;
    (**(code **)*plVar11)(plVar11,&plStack_158);
    plVar12 = plStack_150;
    plVar7 = plVar11;
    if (plStack_150 != (long *)0x0) {
      plVar11 = plStack_150 + 1;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plVar12;
      }
    }
  }
  plVar11 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar12 = plStack_c0 + 1;
    do {
      lVar16 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar11;
    }
  }
  plVar11 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    plVar12 = plStack_160 + 1;
    do {
      lVar16 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      plVar7 = plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *extraout_x8 = 0;
  ppppuVar24 = (undefined8 ****)pppuStack_20;
  pcVar4 = pcStack_18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_158);
    func_0x00010a05a8c4(&plStack_c8);
    FUN_10a05bd88(&plStack_168);
    plVar5 = &lStack_180;
    unaff_x19 = plVar8;
    unaff_x20 = plVar7;
    unaff_x21 = plVar11;
    unaff_x22 = plVar9;
    unaff_x23 = plVar1;
    unaff_x24 = plVar10;
    unaff_x25 = plVar22;
    unaff_x26 = lVar20 + 0x208;
    ppppuVar24 = &pppuStack_20;
    pcVar4 = (code *)0x10a27f7d4;
  }
  plVar7 = plVar8 + 0x4b;
  lVar20 = plVar8[0x59];
  uVar14 = lVar20 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar7[lVar20 + 2];
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  *(undefined8 *)((long)plVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)plVar5 + -0x58) = unaff_x27;
  *(long *)((long)plVar5 + -0x50) = unaff_x26;
  *(long **)((long)plVar5 + -0x48) = unaff_x25;
  *(long **)((long)plVar5 + -0x40) = unaff_x24;
  *(long **)((long)plVar5 + -0x38) = unaff_x23;
  *(long **)((long)plVar5 + -0x30) = unaff_x22;
  *(long **)((long)plVar5 + -0x28) = unaff_x21;
  *(long **)((long)plVar5 + -0x20) = unaff_x20;
  *(long **)((long)plVar5 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)plVar5 + -0x10) = ppppuVar24;
  *(code **)((long)plVar5 + -8) = pcVar4;
  lVar20 = *plVar7;
  lVar16 = plVar8[0x4c];
  lVar17 = lVar16 - lVar20;
  uVar21 = lVar17 >> 4;
  if (uVar21 < uVar14) {
    uVar23 = uVar14 - uVar21;
    lVar19 = plVar8[0x4d];
    if ((ulong)(lVar19 - lVar16 >> 4) < uVar23) {
      if (uVar14 >> 0x3c == 0) {
        uVar15 = lVar19 - lVar20 >> 3;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar20)) {
          uVar15 = 0xfffffffffffffff;
        }
        *(long **)((long)plVar5 + -0x68) = plVar7;
        if (uVar15 >> 0x3c == 0) {
          lVar6 = uVar15 << 4;
          __Znwm();
          lVar16 = lVar6 + lVar17;
          _bzero(lVar16,uVar23 * 0x10);
          lVar18 = lVar16 + uVar21 * -0x10;
          _memcpy(lVar18,lVar20,lVar17);
          *plVar7 = lVar18;
          plVar8[0x4c] = lVar16 + uVar23 * 0x10;
          plVar8[0x4d] = lVar6 + uVar15 * 0x10;
          *(long *)((long)plVar5 + -0x78) = lVar20;
          *(long *)((long)plVar5 + -0x70) = lVar19;
          *(long *)((long)plVar5 + -0x88) = lVar20;
          *(long *)((long)plVar5 + -0x80) = lVar20;
          func_0x00010988c1b8((undefined1 *)((long)plVar5 + -0x88));
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
    _bzero(lVar16,uVar23 * 0x10);
    plVar8[0x4c] = lVar16 + uVar23 * 0x10;
  }
  else if (uVar14 < uVar21) {
    lVar20 = lVar20 + uVar14 * 0x10;
    while (lVar16 != lVar20) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar8[0x4c] = lVar20;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}



/* Entry: 10a27f430; end: 10a27f7db;  */

/* WARNING: Possible PIC construction at 0x00010a27f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a27f7d4) */
/* WARNING: Removing unreachable block (ram,0x00010a27f884) */
/* WARNING: Removing unreachable block (ram,0x00010a27f820) */
/* WARNING: Removing unreachable block (ram,0x00010a27f838) */

void FUN_10a27f430(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  long *unaff_x24;
  long lVar18;
  ulong uVar19;
  long *unaff_x25;
  long *plVar20;
  ulong uVar21;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_170;
  ulong uStack_168;
  code **ppcStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3bf120(&plStack_148);
  lVar18 = *(long *)(param_2[7] + 0x100);
  plVar7 = (long *)0x138;
  __Znwm();
  plStack_b8 = plStack_148;
  plVar20 = plVar7 + 1;
  *plVar20 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b9f3b0;
  plVar11 = plVar7 + 3;
  plStack_148 = (long *)0x0;
  plStack_b0 = plStack_140;
  (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
  uStack_70 = uStack_100;
  uStack_168 = *(ulong *)(lVar18 + 0x210);
  lStack_170 = *(long *)(lVar18 + 0x208);
  if (-1 < (char)*(byte *)(lVar18 + 0x21f)) {
    uStack_168 = (ulong)*(byte *)(lVar18 + 0x21f);
    lStack_170 = lVar18 + 0x208;
  }
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  ppcStack_160 = &pcStack_f8;
  pcStack_f8 = FUN_10a282dc4;
  ppuStack_f0 = &PTR_DAT_110ae9180;
  FUN_10a23708c(plVar11,&UNK_10e4a2275,0x1f,&UNK_10f647b49,4,&plStack_b8,1);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10a042634(&plStack_b8);
  plStack_158 = plVar11;
  plStack_150 = plVar7;
  FUN_10a042634(&plStack_148);
  plVar8 = *(long **)(*(long *)(param_2[7] + 0x100) + 0x1c8);
  (**(code **)(*plVar8 + 0x60))();
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plVar9 = (long *)plVar8[1];
  if (((plVar9 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b0 = plVar9, plVar9 == (long *)0x0)) ||
     (plVar9 = (long *)*plVar8, plStack_b8 = plVar9, plVar9 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f6473ed,0x159,&UNK_10f64724b);
    }
    FUN_10a24b478();
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_148 = plVar11;
    plStack_140 = plVar7;
    (**(code **)*plVar9)(plVar9,&plStack_148);
    plVar10 = plStack_140;
    param_2 = plVar9;
    if (plStack_140 != (long *)0x0) {
      plVar9 = plStack_140 + 1;
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
        (**(code **)(*plStack_140 + 0x10))(plStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar10;
      }
    }
  }
  plVar9 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar10 = plStack_b0 + 1;
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
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = plVar9;
    }
  }
  plVar9 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar10 = plStack_150 + 1;
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
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      param_2 = plVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_148);
    func_0x00010a05a8c4(&plStack_b8);
    FUN_10a05bd88(&plStack_158);
    unaff_x30 = 0x10a27f7d4;
    register0x00000008 = (BADSPACEBASE *)&lStack_170;
    unaff_x19 = plVar6;
    unaff_x20 = param_2;
    unaff_x21 = plVar9;
    unaff_x22 = plVar7;
    unaff_x23 = plVar11;
    unaff_x24 = plVar8;
    unaff_x25 = plVar20;
    unaff_x26 = lVar18 + 0x208;
    unaff_x29 = puVar1;
  }
  plVar11 = plVar6 + 0x4b;
  lVar18 = plVar6[0x59];
  uVar12 = lVar18 - 1;
  plVar6[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar11[lVar18 + 2];
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
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar18 = *plVar11;
  lVar14 = plVar6[0x4c];
  lVar15 = lVar14 - lVar18;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar21 = uVar12 - uVar19;
    lVar17 = plVar6[0x4d];
    if ((ulong)(lVar17 - lVar14 >> 4) < uVar21) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar17 - lVar18 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar18)) {
          uVar13 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar11;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar15;
          _bzero(lVar14,uVar21 * 0x10);
          lVar16 = lVar14 + uVar19 * -0x10;
          _memcpy(lVar16,lVar18,lVar15);
          *plVar11 = lVar16;
          plVar6[0x4c] = lVar14 + uVar21 * 0x10;
          plVar6[0x4d] = lVar5 + uVar13 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar18;
          *(long *)((long)register0x00000008 + -0x70) = lVar17;
          *(long *)((long)register0x00000008 + -0x88) = lVar18;
          *(long *)((long)register0x00000008 + -0x80) = lVar18;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar14,uVar21 * 0x10);
    plVar6[0x4c] = lVar14 + uVar21 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar18 = lVar18 + uVar12 * 0x10;
    while (lVar14 != lVar18) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar18;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar12;
  return;
}



/* Entry: 10a27f7dc; end: 10a27f8a3;  */

void FUN_10a27f7dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  FUN_10a24c56c((int)*param_2,*(undefined4 *)((long)param_2 + 4),plVar4);
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



/* Entry: 10a27f8a4; end: 10a27f96b;  */

void FUN_10a27f8a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a27f96c(param_5);
  func_0x00010a27a3f0(param_2,param_4);
  FUN_10a24ca6c(plVar4,param_2);
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



/* Entry: 10a27f96c; end: 10a27f98f;  */

void FUN_10a27f96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
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
  FUN_10a27f3a4(plVar3,uVar6);
  FUN_10a076f00(param_4);
  func_0x000109898518(plVar3,param_1);
  FUN_10a24c56c((float)(int)plVar3,(float)(int)plVar3,plVar5);
  *extraout_x8 = 0;
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



/* Entry: 10a27f990; end: 10a27fa5b;  */

void FUN_10a27f990(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a24c56c((float)(int)param_2,(float)(int)param_2,plVar4);
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



/* Entry: 10a27fa5c; end: 10a27fb83;  */

void FUN_10a27fa5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
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
  plVar7 = param_2;
  FUN_10a27f3a4(param_2,param_3);
  FUN_10a27fb84(param_5);
  plVar8 = param_2;
  func_0x00010a27e650(param_2,param_4);
  FUN_10a24bddc(&stack0xffffffffffffffb8,plVar7,plVar8);
  FUN_10a13e614(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar11 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar11 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar11 = lVar9 - 1;
  plVar6[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar9 + 2];
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  lVar9 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar9 >> 3;
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
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
  else if (uVar11 < uVar16) {
    lVar9 = lVar9 + uVar11 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar11;
  return;
}



/* Entry: 10a27fb84; end: 10a27fba7;  */

undefined8 * FUN_10a27fb84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar1 = (undefined8 *)0x1;
  uVar3 = 0;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = uVar3;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110bbabb0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uVar3;
  puVar1[1] = puVar2;
  FUN_10a05a7bc(puVar1,uVar3,uVar3);
  return puVar1;
}



/* Entry: 10a27fba8; end: 10a27fc23;  */

undefined8 * FUN_10a27fba8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bbabb0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  FUN_10a05a7bc(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 10a27fc24; end: 10a27fc27;  */

void FUN_10a27fc24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a27fc28; end: 10a27fc3b;  */

void FUN_10a27fc28(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a27fc3c; end: 10a27fc43;  */

void FUN_10a27fc3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_10a05a748(lVar1 + 0x50);
    __ZNSt3__115recursive_mutexD1Ev(lVar1 + 0x10);
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a27fc44; end: 10a27fc7b;  */

undefined8 FUN_10a27fc44(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bbac00);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a27fc7c; end: 10a27fc7f;  */

void FUN_10a27fc7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a27fc80; end: 10a27fd1b;  */

void FUN_10a27fc80(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a05a748(param_2 + 0x50);
    __ZNSt3__115recursive_mutexD1Ev(param_2 + 0x10);
    if (*(long *)(param_2 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a27fd1c; end: 10a27ff07;  */

void FUN_10a27fd1c(long *param_1,code **param_2,code **param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  code **ppcStack_e8;
  code **ppcStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 **ppuStack_b8;
  undefined4 uStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  ppcVar11 = &pcStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  ppcVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_b8 = (undefined8 **)param_1[1];
      pcStack_c0 = (code *)*param_1;
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
      uStack_b0 = *(undefined4 *)param_2;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_3,param_3[1]);
      }
      else {
        pcStack_a0 = param_3[1];
        ppuStack_a8 = (undefined8 **)*param_3;
        pcStack_98 = param_3[2];
      }
      pcStack_88 = FUN_10a280178;
      param_3 = &pcStack_88;
      FUN_10a2801e4(apuStack_80,&PTR_FUN_110bbaf30,&pcStack_c0);
      ppcVar9 = &pcStack_88;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppcVar10 = ppcVar11;
      if ((long)pcStack_98 < 0) {
        ppuVar6 = ppuStack_a8;
        __ZdlPv();
        ppcVar10 = ppcVar11;
      }
      ppuVar7 = ppuStack_b8;
      if (ppuStack_b8 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_b8 + 1;
        do {
          puVar12 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar12 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_b8)[2])(ppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    ppcVar10 = param_3;
    FUN_10a27ff08(ppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    unaff_x22 = plVar5;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&pcStack_c0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a27ff08;
  plStack_f0 = unaff_x22;
  ppcStack_e8 = param_2;
  ppcStack_e0 = param_3;
  ppuStack_d8 = ppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_100,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_f8,&puStack_100,*ppuVar7);
  if (puStack_100 != (undefined8 *)0x0) {
    (**(code **)*puStack_100)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_100);
  FUN_10a280034(*ppuVar7,&puStack_100,&puStack_f8,ppcVar9,ppcVar10);
  if (puStack_100 != (undefined8 *)0x0) {
    (**(code **)*puStack_100)();
  }
  if (puStack_f8 != (undefined8 *)0x0) {
    (**(code **)*puStack_f8)();
  }
  return;
}



/* Entry: 10a27ff08; end: 10a280003;  */

void FUN_10a27ff08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_40,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_38,&puStack_40,*param_1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_40);
  FUN_10a280034(*param_1,&puStack_40,&puStack_38,param_2,param_3);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a280004; end: 10a280033;  */

long FUN_10a280004(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10a280034; end: 10a280177;  */

void FUN_10a280034(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  double dStack_78;
  int aiStack_70 [2];
  long alStack_68 [2];
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  dStack_78 = (double)*param_4;
  auStack_80[0] = 3;
  uVar1 = param_5[1];
  puVar2 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar2 = param_5;
  }
  (**(code **)(*param_1 + 0x128))(alStack_68,param_1,puVar2,uVar1);
  aiStack_70[0] = 6;
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &puStack_40;
  alStack_68[1] = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)alStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  return;
}



/* Entry: 10a280178; end: 10a280187;  */

void FUN_10a280178(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&puStack_40,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_38,&puStack_40,*puVar1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_40);
  FUN_10a280034(*puVar1,&puStack_40,&puStack_38,puVar2 + 2,puVar2 + 3);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a280188; end: 10a2801cb;  */

void FUN_10a280188(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x18));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2801cc; end: 10a2801e3;  */

void FUN_10a2801cc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2801e4; end: 10a280277;  */

undefined8 * FUN_10a2801e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000107c3192c(puVar1 + 3,param_3[3],param_3[4]);
  }
  else {
    uVar2 = param_3[3];
    puVar1[4] = param_3[4];
    puVar1[3] = uVar2;
    puVar1[5] = param_3[5];
  }
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a280278; end: 10a281363;  */

/* WARNING: Removing unreachable block (ram,0x00010a28058c) */
/* WARNING: Removing unreachable block (ram,0x00010a28064c) */
/* WARNING: Removing unreachable block (ram,0x00010a280d5c) */
/* WARNING: Removing unreachable block (ram,0x00010a280480) */
/* WARNING: Removing unreachable block (ram,0x00010a280440) */
/* WARNING: Removing unreachable block (ram,0x00010a280f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a280c0c) */
/* WARNING: Removing unreachable block (ram,0x00010a280d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a280600) */
/* WARNING: Removing unreachable block (ram,0x00010a281244) */
/* WARNING: Removing unreachable block (ram,0x00010a280854) */
/* WARNING: Removing unreachable block (ram,0x00010a2807c4) */
/* WARNING: Removing unreachable block (ram,0x00010a280730) */
/* WARNING: Removing unreachable block (ram,0x00010a280c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a28076c) */
/* WARNING: Removing unreachable block (ram,0x00010a280814) */
/* WARNING: Removing unreachable block (ram,0x00010a2808a4) */

void FUN_10a280278(long *param_1,long param_2)

{
  code *****pppppcVar1;
  char cVar2;
  code *pcVar3;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined7 uStack_218;
  char cStack_211;
  code ****ppppcStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  char acStack_1f8 [8];
  long lStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  int iStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 auStack_188 [56];
  long lStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [48];
  code ****ppppcStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte bStack_d0;
  long alStack_c0 [3];
  long *plStack_a8;
  code ***apppcStack_a0 [8];
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c8 = param_1[1];
  plStack_1d0 = (long *)*param_1;
  lStack_1c0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_1b0 = param_1[4];
  plStack_1b8 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_1a8 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_1a0 = (int)param_1[6];
  lStack_198 = param_1[7];
  lStack_190 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_188,param_1 + 9);
  lStack_150 = param_1[0x10];
  uStack_148 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_140,param_1 + 0x12);
  lVar12 = *(long *)(param_2 + 0x10);
  bStack_60 = 3;
  ppppcStack_110 = apppcStack_a0;
  if (*(char *)(lVar12 + 0x1a8) == '\0') {
    bStack_60 = 0;
  }
  else {
    FUN_10a005398(&ppppcStack_110,lVar12 + 0x168);
    bStack_60 = *(byte *)(lVar12 + 0x1a8);
  }
  if (iStack_1a0 == 200) {
    FUN_109ffe064(auStack_1e8,lStack_198,lStack_150);
    plStack_a8 = (long *)0x0;
    FUN_109fc89b4(acStack_1f8,auStack_1e8,alStack_c0,0,0);
    if (plStack_a8 == alStack_c0) {
      lVar10 = 0x20;
LAB_10a2803c8:
      (**(code **)(*plStack_a8 + lVar10))();
    }
    else if (plStack_a8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_10a2803c8;
    }
    if (acStack_1f8[0] == '\t') {
      ppppcStack_210 = (code ****)CONCAT44(ppppcStack_210._4_4_,500);
      func_0x000107c2b054(&ppppcStack_110,&UNK_10f649303);
      FUN_10a25f92c(apppcStack_a0,&ppppcStack_210,&ppppcStack_110);
    }
    else if (acStack_1f8[0] == '\x01') {
      lVar10 = lStack_1f0;
      FUN_109d21b74(lStack_1f0,&PTR_s_eventType_110bb7400);
      if (lStack_1f0 + 8 == lVar10) {
LAB_10a280594:
        if (acStack_1f8[0] == '\x01') {
          lVar10 = lStack_1f0;
          FUN_109d21b74(lStack_1f0,&PTR_DAT_110bb7450);
          if (lStack_1f0 + 8 != lVar10) {
            uStack_100 = CONCAT17(0xc,(undefined7)uStack_100);
            ppppcStack_110 = (code ****)0x6472616f6279656b;
            uStack_108 = CONCAT35(uStack_108._5_3_,0x6e65704f);
            pcVar5 = acStack_1f8;
            func_0x0001094947d8(pcVar5,&ppppcStack_110);
            if (*pcVar5 == '\x04') {
              uStack_100 = CONCAT17(0xc,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)0x6472616f6279656b;
              uStack_108 = CONCAT35(uStack_108._5_3_,0x6e65704f);
              func_0x0001094947d8(acStack_1f8,&ppppcStack_110);
              func_0x00010938d198();
              uStack_228 = (code *****)CONCAT71(uStack_228._1_7_,(char)ppppcStack_210);
              if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                pcVar5 = "true";
                if ((char)ppppcStack_210 == '\0') {
                  pcVar5 = "false";
                }
                func_0x00010ae06f08(1,4,&UNK_10f6471ae,&UNK_10f6491d1,0xce,&UNK_10f6492ce,in_x6,
                                    in_x7,pcVar5);
              }
              bStack_d0 = 3;
              ppppcStack_210 = (code ****)&ppppcStack_110;
              if (*(char *)(lVar12 + 0x160) == '\0') {
                bStack_d0 = 0;
              }
              else {
                FUN_10a005398(&ppppcStack_210,lVar12 + 0x120);
                bStack_d0 = *(byte *)(lVar12 + 0x160);
              }
              FUN_10a087a3c(&ppppcStack_110,&uStack_228);
              if (((ulong)uStack_228 & 1) == 0) {
                FUN_10a24b478(lVar12);
              }
              if (3 < (ulong)bStack_d0) goto LAB_10a281358;
              (*(code *)(&PTR_FUN_110b9a040)[bStack_d0])(&ppppcStack_110);
              goto LAB_10a280fbc;
            }
          }
          if ((acStack_1f8[0] == '\x01') &&
             (lVar10 = lStack_1f0, FUN_109d21b74(lStack_1f0,&PTR_s_text_110bb6a58),
             lStack_1f0 + 8 != lVar10)) {
            uStack_100 = CONCAT17(4,(undefined7)uStack_100);
            ppppcStack_110 = (code ****)CONCAT35(ppppcStack_110._5_3_,0x74786574);
            pcVar5 = acStack_1f8;
            func_0x0001094947d8(pcVar5,&ppppcStack_110);
            if (*pcVar5 == '\x03') {
              uStack_100 = CONCAT17(4,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT35(ppppcStack_110._5_3_,0x74786574);
              func_0x0001094947d8(acStack_1f8,&ppppcStack_110);
              func_0x00010937c804(&ppppcStack_210);
              uStack_100 = CONCAT17(5,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT26(ppppcStack_110._6_2_,0x7472617473);
              uStack_228 = (code *****)uStack_208;
              if (-1 < (char)bStack_1f9) {
                uStack_228 = (code *****)(ulong)bStack_1f9;
              }
              pcVar5 = acStack_1f8;
              FUN_10a2814a8(pcVar5,&ppppcStack_110,&uStack_228);
              uStack_100 = CONCAT17(3,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT44(ppppcStack_110._4_4_,0x646e65);
              uStack_228 = (code *****)uStack_208;
              if (-1 < (char)bStack_1f9) {
                uStack_228 = (code *****)(ulong)bStack_1f9;
              }
              pcVar6 = acStack_1f8;
              FUN_10a2814a8(pcVar6,&ppppcStack_110,&uStack_228);
              uStack_100 = CONCAT17(4,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT35(ppppcStack_110._5_3_,0x656e6f64);
              uStack_228 = (code *****)((ulong)uStack_228 & 0xffffffffffffff00);
              pcVar7 = acStack_1f8;
              func_0x000109389ba4(pcVar7,&ppppcStack_110,&uStack_228);
              uStack_100 = CONCAT17(0xc,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)0x6f4e646c756f6873;
              uStack_108 = CONCAT35(uStack_108._5_3_,0x79666974);
              uStack_228 = (code *****)((ulong)uStack_228 & 0xffffffffffffff00);
              pcVar8 = acStack_1f8;
              func_0x000109389ba4(pcVar8,&ppppcStack_110,&uStack_228);
              if ((int)pcVar8 != 0) {
                bStack_d0 = 3;
                uStack_228 = &ppppcStack_110;
                if (*(char *)(lVar12 + 0xd0) == '\0') {
                  bStack_d0 = 0;
                }
                else {
                  FUN_10a005398(&uStack_228,lVar12 + 0x90);
                  bStack_d0 = *(byte *)(lVar12 + 0xd0);
                }
                uStack_228 = (code *****)CONCAT44((float)(int)pcVar6,(float)(int)pcVar5);
                FUN_10a281634(&ppppcStack_110,&ppppcStack_210,&uStack_228);
                if (3 < (ulong)bStack_d0) goto LAB_10a281358;
                (*(code *)(&PTR_FUN_110b9a040)[bStack_d0])(&ppppcStack_110);
              }
              if ((int)pcVar7 != 0) {
                bStack_d0 = 3;
                uStack_228 = &ppppcStack_110;
                if (*(char *)(lVar12 + 0x118) == '\0') {
                  uVar11 = 0;
                  bStack_d0 = 0;
                }
                else {
                  FUN_10a005398(&uStack_228,lVar12 + 0xd8);
                  bStack_d0 = *(byte *)(lVar12 + 0x118);
                  if (bStack_d0 == 1) {
                    (*(code *)ppppcStack_110)(&ppppcStack_110);
                  }
                  else if (bStack_d0 == 2) {
                    FUN_10a05e614(&ppppcStack_110);
                  }
                  uVar11 = (ulong)bStack_d0;
                  if (3 < bStack_d0) goto LAB_10a281358;
                }
                (*(code *)(&PTR_FUN_110b9a040)[uVar11])(&ppppcStack_110);
              }
              goto LAB_10a280fac;
            }
          }
        }
      }
      else {
        uStack_100 = CONCAT17(9,(undefined7)uStack_100);
        uStack_108 = CONCAT62(uStack_108._2_6_,0x65);
        ppppcStack_110 = (code ****)0x707954746e657665;
        pcVar5 = acStack_1f8;
        func_0x0001094947d8(pcVar5,&ppppcStack_110);
        if (*pcVar5 != '\x03') goto LAB_10a280594;
        uStack_100 = CONCAT17(9,(undefined7)uStack_100);
        ppppcStack_110 = (code ****)0x707954746e657665;
        uStack_108 = CONCAT62(uStack_108._2_6_,0x65);
        func_0x0001094947d8(acStack_1f8,&ppppcStack_110);
        func_0x00010937c804(&ppppcStack_210);
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          pppppcVar1 = (code *****)ppppcStack_210;
          if (-1 < (char)bStack_1f9) {
            pppppcVar1 = &ppppcStack_210;
          }
          func_0x00010ae06f08(1,8,&UNK_10f6471ae,&UNK_10f6491d1,0x96,&UNK_10f649259,in_x6,in_x7,
                              pppppcVar1);
        }
        if (-1 < (char)bStack_1f9) {
          uStack_208 = (ulong)bStack_1f9;
        }
        if ((long)uStack_208 < 0x10) {
          if (uStack_208 == 10) {
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            if ((*pppppcVar1 != (code ****)0x655474696d6d6f63 ||
                 *(short *)(pppppcVar1 + 1) != 0x7478) || (*(char *)(lVar12 + 0x388) != '\x01'))
            goto LAB_10a280f68;
            func_0x0001098998d4(&uStack_228,&PTR_DAT_110bb7430);
            uStack_240 = 0;
            uStack_238 = 0;
            lStack_230 = 0;
            func_0x000109494628(&ppppcStack_110,acStack_1f8,&uStack_228,&uStack_240);
            if (lStack_230 < 0) {
              __ZdlPv(uStack_240);
            }
            if (cStack_211 < '\0') {
              __ZdlPv(uStack_228);
            }
            func_0x0001098998d4(&uStack_228,&PTR_DAT_110bb7420);
            uStack_258 = (ulong)uStack_258._4_4_ << 0x20;
            pcVar5 = acStack_1f8;
            func_0x00010938988c(pcVar5,&uStack_228,&uStack_258);
            if (cStack_211 < '\0') {
              __ZdlPv(uStack_228);
            }
            uStack_240 = CONCAT44(uStack_240._4_4_,(int)pcVar5);
            FUN_10a2818c8(lVar12 + 0x340,&ppppcStack_110,&uStack_240);
          }
          else {
            if (uStack_208 != 0xc) {
              if (uStack_208 == 0xe) {
                pppppcVar1 = (code *****)ppppcStack_210;
                if (-1 < (char)bStack_1f9) {
                  pppppcVar1 = &ppppcStack_210;
                }
                if ((*pppppcVar1 == (code ****)0x7461426e69676562 &&
                     *(long *)((long)pppppcVar1 + 6) == 0x7469644568637461) &&
                   ((*(byte *)(lVar12 + 0x2e8) & 1) != 0)) {
                  lVar10 = 0x2a0;
                  goto LAB_10a280e00;
                }
              }
              goto LAB_10a280f68;
            }
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            if ((*pppppcVar1 == (code ****)0x63656c6553746573 &&
                 *(int *)(pppppcVar1 + 1) == 0x6e6f6974) && (*(char *)(lVar12 + 0x1f8) == '\x01')) {
              uStack_100 = CONCAT17(5,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT26(ppppcStack_110._6_2_,0x7472617473);
              uStack_240 = (ulong)uStack_240._4_4_ << 0x20;
              pcVar5 = acStack_1f8;
              func_0x00010938988c(pcVar5,&ppppcStack_110,&uStack_240);
              uStack_228 = (code *****)CONCAT44(uStack_228._4_4_,(int)pcVar5);
              uStack_100 = CONCAT17(3,(undefined7)uStack_100);
              ppppcStack_110 = (code ****)CONCAT44(ppppcStack_110._4_4_,0x646e65);
              uStack_258 = uStack_258 & 0xffffffff00000000;
              pcVar5 = acStack_1f8;
              func_0x00010938988c(pcVar5,&ppppcStack_110,&uStack_258);
              uStack_240 = CONCAT44(uStack_240._4_4_,(int)pcVar5);
              FUN_10a060cac(lVar12 + 0x1b0,&uStack_228,&uStack_240);
            }
            else if ((*pppppcVar1 == (code ****)0x6863746142646e65 &&
                      *(int *)(pppppcVar1 + 1) == 0x74696445) &&
                    (*(char *)(lVar12 + 0x338) == '\x01')) {
              lVar10 = 0x2f0;
LAB_10a280e00:
              cVar2 = *(char *)((undefined8 *)(lVar12 + lVar10) + 8);
              if (cVar2 == '\x01') {
                (**(code **)(lVar12 + lVar10))();
              }
              else if (cVar2 == '\x02') {
                FUN_10a05e614();
              }
            }
            else {
              if ((*pppppcVar1 != (code ****)0x6574616470556e6f ||
                   *(int *)(pppppcVar1 + 1) != 0x74786554) || (*(char *)(lVar12 + 0x428) != '\x01'))
              goto LAB_10a280f68;
              uStack_108 = 0;
              ppppcStack_110 = (code ****)0x0;
              uStack_f8 = 0;
              uStack_100 = 0;
              func_0x0001098998d4(&uStack_240,&PTR_s_text_110bb6a58);
              uStack_258 = 0;
              uStack_250 = 0;
              lStack_248 = 0;
              func_0x000109494628(&uStack_228,acStack_1f8,&uStack_240,&uStack_258);
              uStack_108 = uStack_220;
              ppppcStack_110 = (code ****)uStack_228;
              uStack_100 = CONCAT17(cStack_211,uStack_218);
              cStack_211 = '\0';
              uStack_228 = (code *****)((ulong)uStack_228 & 0xffffffffffffff00);
              if (lStack_248 < 0) {
                __ZdlPv(uStack_258);
              }
              if (lStack_230 < 0) {
                __ZdlPv(uStack_240);
              }
              func_0x0001098998d4(&uStack_228,&PTR_s_start_110bb6a68);
              uVar11 = uStack_108;
              if (-1 < (long)uStack_100) {
                uVar11 = uStack_100 >> 0x38;
              }
              pcVar5 = acStack_1f8;
              uStack_240 = uVar11;
              FUN_10a2814a8(pcVar5,&uStack_228,&uStack_240);
              uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)pcVar5);
              if (cStack_211 < '\0') {
                __ZdlPv(uStack_228);
              }
              func_0x0001098998d4(&uStack_228,&PTR_s_end_110bb6a78);
              pcVar5 = acStack_1f8;
              uStack_240 = uVar11;
              FUN_10a2814a8(pcVar5,&uStack_228,&uStack_240);
              uStack_f8 = CONCAT44((int)pcVar5,(undefined4)uStack_f8);
              if (cStack_211 < '\0') {
                __ZdlPv(uStack_228);
              }
              FUN_10a282174(lVar12 + 0x3e0,&ppppcStack_110);
            }
          }
        }
        else {
          if (uStack_208 == 0x10) {
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            if ((*pppppcVar1 == (code ****)0x6f706d6f43746573 &&
                 pppppcVar1[1] == (code ****)0x74786554676e6973) &&
               (*(char *)(lVar12 + 0x298) == '\x01')) {
              func_0x0001098998d4(&uStack_228,&PTR_DAT_110bb7410);
              uStack_240 = 0;
              uStack_238 = 0;
              lStack_230 = 0;
              func_0x000109494628(&ppppcStack_110,acStack_1f8,&uStack_228,&uStack_240);
              if (lStack_230 < 0) {
                __ZdlPv(uStack_240);
              }
              if (cStack_211 < '\0') {
                __ZdlPv(uStack_228);
              }
              func_0x0001098998d4(&uStack_228,&PTR_DAT_110bb7420);
              uStack_258 = (ulong)uStack_258._4_4_ << 0x20;
              pcVar5 = acStack_1f8;
              func_0x00010938988c(pcVar5,&uStack_228,&uStack_258);
              if (cStack_211 < '\0') {
                __ZdlPv(uStack_228);
              }
              uStack_240 = CONCAT44(uStack_240._4_4_,(int)pcVar5);
              FUN_10a2818c8(lVar12 + 0x250,&ppppcStack_110,&uStack_240);
              goto LAB_10a280fac;
            }
          }
          else if (uStack_208 == 0x12) {
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            if (((*pppppcVar1 == (code ****)0x6f706d6f43746573 &&
                 pppppcVar1[1] == (code ****)0x69676552676e6973) &&
                 *(short *)(pppppcVar1 + 2) == 0x6e6f) && (*(char *)(lVar12 + 0x248) == '\x01')) {
              uStack_100 = CONCAT17(0x14,(undefined7)uStack_100);
              uStack_108 = 0x536e6f6967655267;
              ppppcStack_110 = (code ****)0x6e69736f706d6f63;
              uStack_100 = CONCAT35(uStack_100._5_3_,0x74726174);
              uStack_240 = (ulong)uStack_240._4_4_ << 0x20;
              pcVar5 = acStack_1f8;
              func_0x00010938988c(pcVar5,&ppppcStack_110,&uStack_240);
              uStack_228 = (code *****)CONCAT44(uStack_228._4_4_,(int)pcVar5);
              uStack_100 = CONCAT17(0x12,(undefined7)uStack_100);
              uStack_108 = 0x456e6f6967655267;
              ppppcStack_110 = (code ****)0x6e69736f706d6f63;
              uStack_100 = CONCAT53(uStack_100._3_5_,0x646e);
              uStack_258 = uStack_258 & 0xffffffff00000000;
              pcVar5 = acStack_1f8;
              func_0x00010938988c(pcVar5,&ppppcStack_110,&uStack_258);
              uStack_240 = CONCAT44(uStack_240._4_4_,(int)pcVar5);
              func_0x00010a060cb0(lVar12 + 0x200,&uStack_228,&uStack_240);
              goto LAB_10a280fac;
            }
          }
          else if (uStack_208 == 0x13) {
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            if (((*pppppcVar1 == (code ****)0x456d726f66726570 &&
                 pppppcVar1[1] == (code ****)0x746341726f746964) &&
                 *(long *)((long)pppppcVar1 + 0xb) == 0x6e6f69746341726f) &&
               (*(char *)(lVar12 + 0x3d8) == '\x01')) {
              func_0x0001098998d4(&uStack_228,&PTR_DAT_110bb7440);
              uStack_240 = 0;
              uStack_238 = 0;
              lStack_230 = 0;
              func_0x000109494628(&ppppcStack_110,acStack_1f8,&uStack_228,&uStack_240);
              if (lStack_230 < 0) {
                __ZdlPv(uStack_240);
              }
              if (cStack_211 < '\0') {
                __ZdlPv(uStack_228);
              }
              uVar4 = SUB81(&ppppcStack_110,0);
              FUN_10a281364();
              uStack_228 = (code *****)CONCAT71(uStack_228._1_7_,uVar4);
              FUN_10a281e04(lVar12 + 0x390,&uStack_228);
              goto LAB_10a280fac;
            }
          }
LAB_10a280f68:
          if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
            pppppcVar1 = (code *****)ppppcStack_210;
            if (-1 < (char)bStack_1f9) {
              pppppcVar1 = &ppppcStack_210;
            }
            func_0x00010ae06f08(1,2,&UNK_10f6471ae,&UNK_10f6491d1,0xc5,&UNK_10f649283,in_x6,in_x7,
                                pppppcVar1);
          }
        }
LAB_10a280fac:
        if ((char)bStack_1f9 < '\0') {
          __ZdlPv(ppppcStack_210);
        }
      }
    }
LAB_10a280fbc:
    func_0x000109380ffc(&lStack_1f0,acStack_1f8[0]);
    if (cStack_1d1 < '\0') {
      __ZdlPv(auStack_1e8[0]);
    }
  }
  else {
    ppppcStack_110 = (code ****)CONCAT44(ppppcStack_110._4_4_,iStack_1a0);
    FUN_10a25f92c(apppcStack_a0,&ppppcStack_110,&plStack_1b8);
  }
  if ((ulong)bStack_60 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(apppcStack_a0);
    func_0x000104c4f944(auStack_140);
    plVar9 = &lStack_198;
    FUN_10a042634(plVar9);
    if (lStack_1a8 < 0) {
      plVar9 = plStack_1b8;
      __ZdlPv(plStack_1b8);
    }
    if (lStack_1c0 < 0) {
      plVar9 = plStack_1d0;
      __ZdlPv(plStack_1d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    if ((char)bStack_1f9 < '\0') {
      __ZdlPv(ppppcStack_210);
    }
    func_0x000109380ffc(&lStack_1f0,acStack_1f8[0]);
    if (cStack_1d1 < '\0') {
      __ZdlPv(auStack_1e8[0]);
    }
    if ((ulong)bStack_60 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(apppcStack_a0);
      FUN_10a05bd10(&plStack_1d0);
      __Unwind_Resume(plVar9);
    }
  }
LAB_10a281358:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a28135c);
  (*pcVar3)();
}



/* Entry: 10a281364; end: 10a2814a7;  */

undefined4 FUN_10a281364(uint *param_1)

{
  ulong uVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = *(ulong *)(param_1 + 2);
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if ((long)uVar1 < 6) {
    if (uVar1 == 2) {
      puVar2 = *(uint **)param_1;
      if (-1 < (char)bVar3) {
        puVar2 = param_1;
      }
      if ((short)*puVar2 == 0x6f47) {
        return 2;
      }
    }
    else if (uVar1 == 4) {
      puVar2 = *(uint **)param_1;
      if (-1 < (char)bVar3) {
        puVar2 = param_1;
      }
      if (*puVar2 != 0x7478654e) {
        if (*puVar2 != 0x646e6553) {
          uVar5 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
          uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (uint)(uVar4 < 0x446f6e65);
          if (0x446f6e65 < uVar4) {
            uVar5 = 0xffffffff;
          }
          uVar6 = 6;
          if (uVar5 != 0) {
            uVar6 = 0;
          }
          return uVar6;
        }
        return 4;
      }
      return 3;
    }
  }
  else if (uVar1 == 7) {
    puVar2 = *(uint **)param_1;
    if (-1 < (char)bVar3) {
      puVar2 = param_1;
    }
    if (*puVar2 == 0x4c77654e && *(int *)((long)puVar2 + 3) == 0x656e694c) {
      return 5;
    }
  }
  else if (uVar1 == 6) {
    puVar2 = *(uint **)param_1;
    if (-1 < (char)bVar3) {
      puVar2 = param_1;
    }
    if (*puVar2 == 0x72616553 && (short)puVar2[1] == 0x6863) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a2814a8; end: 10a281633;  */

char * FUN_10a2814a8(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    uStack_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcStack_50 = param_1;
    func_0x0001093793a4();
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      lStack_68 = *(long *)(param_1 + 8) + 8;
    }
    else {
      uStack_58 = 1;
    }
    ppcVar3 = &pcStack_50;
    pcStack_70 = param_1;
    uStack_48 = uVar2;
    func_0x00010937c708(ppcVar3,&pcStack_70);
    if (((ulong)ppcVar3 & 1) == 0) {
      func_0x00010938cf68(&pcStack_50);
      func_0x0001094e5754();
    }
    else {
      pcStack_70 = (char *)*param_3;
    }
    return pcStack_70;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x00010937bcec(param_1);
  func_0x000107c2b054(&pcStack_70,param_1);
  FUN_109feb280(&pcStack_50,&UNK_10f5688f8,&pcStack_70);
  func_0x00010937bbbc(uVar2,0x132,&pcStack_50);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2815dc);
  (*pcVar1)();
}



/* Entry: 10a281634; end: 10a2818c7;  */

void FUN_10a281634(undefined ***param_1,undefined ***param_2,undefined **param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **UNRECOVERED_JUMPTABLE;
  long lVar11;
  undefined *puVar12;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  int aiStack_210 [2];
  undefined8 *puStack_208;
  undefined4 auStack_200 [2];
  undefined1 auStack_1f8 [8];
  int aiStack_1f0 [2];
  double dStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 *puStack_1d0;
  undefined4 **ppuStack_1c8;
  undefined4 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined ***pppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  uint uStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    UNRECOVERED_JUMPTABLE = *param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a281700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)
                (*(uint *)param_3,*(uint *)((long)param_3 + 4),param_2,param_1);
      return;
    }
  }
  else {
    pppuVar6 = param_1;
    pppuVar9 = param_2;
    UNRECOVERED_JUMPTABLE = param_3;
    if (*(char *)(param_1 + 8) == '\x02') {
      pppuVar5 = param_1;
      pppuVar8 = param_2;
      FUN_10a688b40();
      if (pppuVar5 == (undefined ***)0x0) {
        pppuVar9 = (undefined ***)0x0;
        pppuVar6 = (undefined ***)0x0;
        if (pppuVar8 != (undefined ***)0x0) {
          pppuStack_b8 = (undefined ***)param_1[1];
          ppuStack_c0 = *param_1;
          if (param_1[1] != (undefined **)0x0) {
            ppuVar10 = param_1[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
              if (bVar3) {
                *ppuVar10 = *ppuVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            UNRECOVERED_JUMPTABLE = param_2[1];
            func_0x000107c3192c(&pppuStack_b0,*param_2);
          }
          else {
            ppuStack_a8 = param_2[1];
            pppuStack_b0 = (undefined ***)*param_2;
            ppuStack_a0 = param_2[2];
          }
          puVar12 = *param_3;
          ppuStack_88 = (undefined **)FUN_10a2829a4;
          ppuStack_80 = &PTR_FUN_110bb74a8;
          param_3 = (undefined **)0x30;
          puStack_98 = puVar12;
          __Znwm();
          param_3[1] = (undefined *)pppuStack_b8;
          *param_3 = (undefined *)ppuStack_c0;
          ppuStack_c0 = (undefined **)0x0;
          pppuStack_b8 = (undefined ***)0x0;
          if ((long)ppuStack_a0 < 0) {
            UNRECOVERED_JUMPTABLE = ppuStack_a8;
            func_0x000107c3192c(param_3 + 2,pppuStack_b0);
            puVar12 = puStack_98;
          }
          else {
            param_3[3] = (undefined *)ppuStack_a8;
            param_3[2] = (undefined *)pppuStack_b0;
            param_3[4] = (undefined *)ppuStack_a0;
          }
          param_3[5] = puVar12;
          pppuVar9 = &ppuStack_88;
          ppuStack_78 = param_3;
          FUN_10a4634ec(pppuVar8);
          pppuVar6 = &ppuStack_80;
          (*(code *)*ppuStack_80)();
          if ((long)ppuStack_a0 < 0) {
            pppuVar6 = pppuStack_b0;
            __ZdlPv();
          }
          pppuVar5 = pppuStack_b8;
          if (pppuStack_b8 != (undefined ***)0x0) {
            pppuVar8 = pppuStack_b8 + 1;
            do {
              ppuVar10 = *pppuVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
              if (bVar3) {
                *pppuVar8 = (undefined **)((long)ppuVar10 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppuVar10 == (undefined **)0x0) {
              (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar6 = pppuVar5;
            }
          }
        }
      }
      else {
        *pppuVar5 = (undefined **)CONCAT44((int)((ulong)*pppuVar5 >> 0x20) + 1,(int)*pppuVar5 + 1);
        pppuVar6 = (undefined ***)*param_1;
        UNRECOVERED_JUMPTABLE = param_3;
        FUN_10a282774();
        iVar4 = *(int *)((long)pppuVar5 + 4) + -1;
        *(int *)((long)pppuVar5 + 4) = iVar4;
        pppuVar9 = param_2;
        if (iVar4 == 0) {
          *(undefined4 *)pppuVar5 = 0;
        }
      }
    }
    param_1 = pppuVar6;
    param_2 = pppuVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010a004dac(param_3);
  __ZdlPv();
  FUN_10a282974(&ppuStack_c0);
  __Unwind_Resume();
  pcStack_c8 = FUN_10a2818c8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_2;
  ppuVar10 = UNRECOVERED_JUMPTABLE;
  ppuVar7 = UNRECOVERED_JUMPTABLE;
  pppuStack_1b0 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar6 = param_1;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar9 = (undefined ***)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
                    /* WARNING: Could not recover jumptable at 0x00010a28199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(param_2,pppuVar9,param_1);
        return;
      }
      goto LAB_10a281af4;
    }
  }
  else {
    pppuVar5 = param_1;
    pppuVar8 = param_2;
    FUN_10a688b40();
    if (pppuVar5 == (undefined ***)0x0) {
      pppuVar6 = (undefined ***)0x0;
      pppuVar9 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuStack_178 = (undefined ***)param_1[1];
        ppuStack_180 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar7 = param_1[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *ppuVar7 = *ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          ppuVar10 = param_2[1];
          func_0x000107c3192c(&pppuStack_170,*param_2);
        }
        else {
          ppuStack_168 = param_2[1];
          pppuStack_170 = (undefined ***)*param_2;
          ppuStack_160 = param_2[2];
        }
        uVar1 = *(uint *)UNRECOVERED_JUMPTABLE;
        ppuStack_148 = (undefined **)FUN_10a281d98;
        ppuStack_140 = &PTR_FUN_110bb7460;
        ppuVar7 = (undefined **)0x30;
        uStack_158 = uVar1;
        __Znwm();
        ppuVar7[1] = (undefined *)pppuStack_178;
        *ppuVar7 = (undefined *)ppuStack_180;
        ppuStack_180 = (undefined **)0x0;
        pppuStack_178 = (undefined ***)0x0;
        if ((long)ppuStack_160 < 0) {
          ppuVar10 = ppuStack_168;
          func_0x000107c3192c(ppuVar7 + 2,pppuStack_170);
          uVar1 = uStack_158;
        }
        else {
          ppuVar7[3] = (undefined *)ppuStack_168;
          ppuVar7[2] = (undefined *)pppuStack_170;
          ppuVar7[4] = (undefined *)ppuStack_160;
        }
        param_2 = (undefined ***)(ulong)uVar1;
        *(uint *)(ppuVar7 + 5) = uVar1;
        pppuVar9 = &ppuStack_148;
        ppuStack_138 = ppuVar7;
        FUN_10a4634ec(pppuVar8);
        pppuVar6 = &ppuStack_140;
        (*(code *)*ppuStack_140)();
        if ((long)ppuStack_160 < 0) {
          pppuVar6 = pppuStack_170;
          __ZdlPv();
        }
        pppuVar5 = pppuStack_178;
        pppuStack_1b0 = &ppuStack_148;
        if (pppuStack_178 != (undefined ***)0x0) {
          pppuVar8 = pppuStack_178 + 1;
          do {
            UNRECOVERED_JUMPTABLE = *pppuVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
            if (bVar3) {
              *pppuVar8 = (undefined **)((long)UNRECOVERED_JUMPTABLE + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (UNRECOVERED_JUMPTABLE == (undefined **)0x0) {
            (*(code *)(*pppuStack_178)[2])(pppuStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar6 = pppuVar5;
          }
        }
      }
    }
    else {
      *pppuVar5 = (undefined **)CONCAT44((int)((ulong)*pppuVar5 >> 0x20) + 1,(int)*pppuVar5 + 1);
      pppuVar6 = (undefined ***)*param_1;
      ppuVar10 = UNRECOVERED_JUMPTABLE;
      FUN_10a281b64();
      iVar4 = *(int *)((long)pppuVar5 + 4) + -1;
      *(int *)((long)pppuVar5 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)pppuVar5 = 0;
      }
    }
  }
  param_1 = pppuVar6;
  UNRECOVERED_JUMPTABLE = ppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
LAB_10a281af4:
  ___stack_chk_fail();
  func_0x00010a004dac(ppuVar7);
  __ZdlPv();
  FUN_10a281d68(&ppuStack_180);
  pppuVar6 = param_1;
  __Unwind_Resume();
  pcStack_188 = FUN_10a281b64;
  pppuStack_1a8 = param_2;
  ppuStack_1a0 = ppuVar7;
  pppuStack_198 = param_1;
  ppuStack_190 = &puStack_d0;
  func_0x000109884c0c(&ppuStack_1e0,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_218,&ppuStack_1e0,*pppuVar6);
  if (ppuStack_1e0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_1e0)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_220);
  ppuStack_1d8 = *pppuVar6;
  ppuVar10 = pppuVar9[1];
  pppuVar6 = (undefined ***)*pppuVar9;
  if (-1 < (char)*(byte *)((long)pppuVar9 + 0x17)) {
    ppuVar10 = (undefined **)(ulong)*(byte *)((long)pppuVar9 + 0x17);
    pppuVar6 = pppuVar9;
  }
  (**(code **)(*ppuStack_1d8 + 0x128))(auStack_1f8,ppuStack_1d8,pppuVar6,ppuVar10);
  auStack_200[0] = 6;
  aiStack_1f0[0] = 3;
  dStack_1e8 = (double)(int)*(uint *)UNRECOVERED_JUMPTABLE;
  uStack_1b8 = 2;
  puStack_1c0 = auStack_200;
  (**(code **)(*ppuStack_1d8 + 0x58))(ppuStack_1d8);
  ppuStack_1e0 = &puStack_218;
  ppuStack_1c8 = &puStack_1c0;
  puStack_1d0 = (undefined1 *)&puStack_220;
  func_0x0001098960c0(aiStack_210);
  if ((3 < aiStack_210[0]) && (puStack_208 != (undefined8 *)0x0)) {
    (**(code **)*puStack_208)();
  }
  lVar11 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_1f0 + lVar11)) &&
       (*(undefined8 **)((long)&dStack_1e8 + lVar11) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_1e8 + lVar11))();
    }
    lVar11 = lVar11 + -0x10;
  } while (lVar11 != -0x20);
  if (puStack_220 != (undefined8 *)0x0) {
    (**(code **)*puStack_220)();
  }
  if (puStack_218 != (undefined8 *)0x0) {
    (**(code **)*puStack_218)();
  }
  return;
}



/* Entry: 10a2818c8; end: 10a281b63;  */

void FUN_10a2818c8(undefined ***param_1,undefined ***param_2,undefined **param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined ***pppuVar13;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined4 auStack_140 [2];
  undefined1 auStack_138 [8];
  int aiStack_130 [2];
  double dStack_128;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  undefined4 **ppuStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  uint uStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_2;
  ppuVar10 = param_3;
  ppuVar7 = param_3;
  pppuVar13 = param_1;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar6 = param_1;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar9 = (undefined ***)(ulong)*(uint *)param_3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a28199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(param_2,pppuVar9,param_1);
        return;
      }
      goto LAB_10a281af4;
    }
  }
  else {
    pppuVar5 = param_1;
    pppuVar8 = param_2;
    FUN_10a688b40();
    if (pppuVar5 == (undefined ***)0x0) {
      pppuVar6 = (undefined ***)0x0;
      pppuVar9 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuStack_b8 = (undefined ***)param_1[1];
        ppuStack_c0 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar7 = param_1[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *ppuVar7 = *ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          ppuVar10 = param_2[1];
          func_0x000107c3192c(&pppuStack_b0,*param_2);
        }
        else {
          ppuStack_a8 = param_2[1];
          pppuStack_b0 = (undefined ***)*param_2;
          ppuStack_a0 = param_2[2];
        }
        uVar1 = *(uint *)param_3;
        ppuStack_88 = (undefined **)FUN_10a281d98;
        ppuStack_80 = &PTR_FUN_110bb7460;
        ppuVar7 = (undefined **)0x30;
        uStack_98 = uVar1;
        __Znwm();
        ppuVar7[1] = (undefined *)pppuStack_b8;
        *ppuVar7 = (undefined *)ppuStack_c0;
        ppuStack_c0 = (undefined **)0x0;
        pppuStack_b8 = (undefined ***)0x0;
        if ((long)ppuStack_a0 < 0) {
          ppuVar10 = ppuStack_a8;
          func_0x000107c3192c(ppuVar7 + 2,pppuStack_b0);
          uVar1 = uStack_98;
        }
        else {
          ppuVar7[3] = (undefined *)ppuStack_a8;
          ppuVar7[2] = (undefined *)pppuStack_b0;
          ppuVar7[4] = (undefined *)ppuStack_a0;
        }
        param_2 = (undefined ***)(ulong)uVar1;
        *(uint *)(ppuVar7 + 5) = uVar1;
        pppuVar9 = &ppuStack_88;
        ppuStack_78 = ppuVar7;
        FUN_10a4634ec(pppuVar8);
        pppuVar6 = &ppuStack_80;
        (*(code *)*ppuStack_80)();
        if ((long)ppuStack_a0 < 0) {
          pppuVar6 = pppuStack_b0;
          __ZdlPv();
        }
        pppuVar5 = pppuStack_b8;
        pppuVar13 = &ppuStack_88;
        if (pppuStack_b8 != (undefined ***)0x0) {
          pppuVar8 = pppuStack_b8 + 1;
          do {
            ppuVar11 = *pppuVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
            if (bVar3) {
              *pppuVar8 = (undefined **)((long)ppuVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar11 == (undefined **)0x0) {
            (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar6 = pppuVar5;
          }
        }
      }
    }
    else {
      *pppuVar5 = (undefined **)CONCAT44((int)((ulong)*pppuVar5 >> 0x20) + 1,(int)*pppuVar5 + 1);
      pppuVar6 = (undefined ***)*param_1;
      ppuVar10 = param_3;
      FUN_10a281b64();
      iVar4 = *(int *)((long)pppuVar5 + 4) + -1;
      *(int *)((long)pppuVar5 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)pppuVar5 = 0;
      }
    }
  }
  param_1 = pppuVar6;
  param_3 = ppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10a281af4:
  ___stack_chk_fail();
  func_0x00010a004dac(ppuVar7);
  __ZdlPv();
  FUN_10a281d68(&ppuStack_c0);
  pppuVar6 = param_1;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a281b64;
  pppuStack_f0 = pppuVar13;
  pppuStack_e8 = param_2;
  ppuStack_e0 = ppuVar7;
  pppuStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_120,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_158,&ppuStack_120,*pppuVar6);
  if (ppuStack_120 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_120)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_160);
  ppuStack_118 = *pppuVar6;
  ppuVar10 = pppuVar9[1];
  pppuVar13 = (undefined ***)*pppuVar9;
  if (-1 < (char)*(byte *)((long)pppuVar9 + 0x17)) {
    ppuVar10 = (undefined **)(ulong)*(byte *)((long)pppuVar9 + 0x17);
    pppuVar13 = pppuVar9;
  }
  (**(code **)(*ppuStack_118 + 0x128))(auStack_138,ppuStack_118,pppuVar13,ppuVar10);
  auStack_140[0] = 6;
  aiStack_130[0] = 3;
  dStack_128 = (double)(int)*(uint *)param_3;
  uStack_f8 = 2;
  puStack_100 = auStack_140;
  (**(code **)(*ppuStack_118 + 0x58))(ppuStack_118);
  ppuStack_120 = &puStack_158;
  ppuStack_108 = &puStack_100;
  puStack_110 = (undefined1 *)&puStack_160;
  func_0x0001098960c0(aiStack_150);
  if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
    (**(code **)*puStack_148)();
  }
  lVar12 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_130 + lVar12)) &&
       (*(undefined8 **)((long)&dStack_128 + lVar12) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_128 + lVar12))();
    }
    lVar12 = lVar12 + -0x10;
  } while (lVar12 != -0x20);
  if (puStack_160 != (undefined8 *)0x0) {
    (**(code **)*puStack_160)();
  }
  if (puStack_158 != (undefined8 *)0x0) {
    (**(code **)*puStack_158)();
  }
  return;
}



/* Entry: 10a281b64; end: 10a281d67;  */

void FUN_10a281b64(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  double dStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,puVar2,uVar1);
  auStack_80[0] = 6;
  aiStack_70[0] = 3;
  dStack_68 = (double)*param_3;
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&dStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a281d68; end: 10a281d97;  */

long FUN_10a281d68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10a281d98; end: 10a281da7;  */

void FUN_10a281d98(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  double dStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(&ppuStack_60,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar3);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*puVar3;
  uVar1 = puVar4[3];
  plVar2 = (long *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x27);
    plVar2 = puVar4 + 2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,plVar2,uVar1);
  auStack_80[0] = 6;
  aiStack_70[0] = 3;
  dStack_68 = (double)*(int *)(puVar4 + 5);
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&dStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a281da8; end: 10a281deb;  */

void FUN_10a281da8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a281dec; end: 10a281e03;  */

void FUN_10a281dec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a281e04; end: 10a281fa3;  */

void FUN_10a281e04(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  int aiStack_100 [2];
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  int **ppiStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  byte bStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar5 = param_1;
    pppuVar7 = param_2;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar5 = (undefined ***)(ulong)*(byte *)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010a281ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(pppuVar5,param_1);
        return;
      }
      goto LAB_10a281f60;
    }
  }
  else {
    pppuVar4 = param_1;
    pppuVar6 = param_2;
    FUN_10a688b40();
    if (pppuVar4 == (undefined ***)0x0) {
      pppuVar5 = (undefined ***)0x0;
      pppuVar7 = (undefined ***)0x0;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_60 = param_1[1];
        ppuStack_68 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar8 = param_1[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar2) {
              *ppuVar8 = *ppuVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        bStack_80 = *(byte *)param_2;
        param_1 = &ppuStack_78;
        ppuStack_78 = (undefined **)FUN_10a282138;
        ppuStack_70 = &PTR_DAT_110bb7478;
        uStack_90 = 0;
        uStack_88 = 0;
        pppuVar7 = &ppuStack_78;
        bStack_58 = bStack_80;
        FUN_10a4634ec();
        pppuVar5 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
    }
    else {
      *pppuVar4 = (undefined **)CONCAT44((int)((ulong)*pppuVar4 >> 0x20) + 1,(int)*pppuVar4 + 1);
      pppuVar5 = (undefined ***)*param_1;
      FUN_10a281fa4();
      iVar3 = *(int *)((long)pppuVar4 + 4) + -1;
      *(int *)((long)pppuVar4 + 4) = iVar3;
      pppuVar7 = param_2;
      if (iVar3 == 0) {
        *(undefined4 *)pppuVar4 = 0;
      }
    }
  }
  param_2 = pppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_10a281f60:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a004dac(&uStack_90);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_f0,pppuVar5 + 1,*pppuVar5);
  func_0x000109884820(&puStack_118,&ppuStack_f0,*pppuVar5);
  if (ppuStack_f0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_f0)();
  }
  (**(code **)(**pppuVar5 + 0x30))(&puStack_120);
  ppuVar8 = *pppuVar5;
  aiStack_100[0] = 3;
  puStack_f8 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)param_2);
  piStack_d0 = aiStack_100;
  uStack_c8 = 1;
  (**(code **)(*ppuVar8 + 0x58))(ppuVar8);
  ppuStack_f0 = &puStack_118;
  ppiStack_d8 = &piStack_d0;
  ppuStack_e8 = ppuVar8;
  puStack_e0 = (undefined1 *)&puStack_120;
  func_0x0001098960c0(aiStack_110);
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if ((3 < aiStack_100[0]) && (puStack_f8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f8)();
  }
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a281fa4; end: 10a282137;  */

void FUN_10a281fa4(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*param_2);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a282138; end: 10a282173;  */

void FUN_10a282138(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)(param_1 + 0x20));
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a282174; end: 10a2823f7;  */

void FUN_10a282174(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  code **ppcVar12;
  code **ppcVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  int aiStack_130 [2];
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  int **ppiStack_108;
  int *piStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  code **ppcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar13 = param_2;
  ppcVar8 = param_2;
  if ((param_1 == (undefined ***)0x0) || (*(code *)(param_1 + 8) != (code)0x2)) {
    pppuVar7 = param_1;
    if ((param_1 == (undefined ***)0x0) || (*(code *)(param_1 + 8) != (code)0x1))
    goto LAB_10a28235c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010a282234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_1);
      return;
    }
  }
  else {
    pppuVar6 = param_1;
    ppcVar12 = param_2;
    FUN_10a688b40();
    if (pppuVar6 == (undefined ***)0x0) {
      pppuVar7 = (undefined ***)0x0;
      ppcVar13 = (code **)0x0;
      if (ppcVar12 != (code **)0x0) {
        pppuStack_a8 = (undefined ***)param_1[1];
        ppuStack_b0 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar14 = param_1[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
            if (bVar3) {
              *ppuVar14 = *ppuVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(&pppuStack_a0,*param_2,param_2[1]);
        }
        else {
          pcStack_98 = param_2[1];
          pppuStack_a0 = (undefined ***)*param_2;
          pcStack_90 = param_2[2];
        }
        pcVar5 = param_2[3];
        pcStack_78 = FUN_10a28270c;
        ppuStack_70 = &PTR_FUN_110bb7490;
        ppcVar8 = (code **)0x30;
        pcStack_88 = pcVar5;
        __Znwm();
        ppcVar8[1] = (code *)pppuStack_a8;
        *ppcVar8 = (code *)ppuStack_b0;
        ppuStack_b0 = (undefined **)0x0;
        pppuStack_a8 = (undefined ***)0x0;
        if ((long)pcStack_90 < 0) {
          func_0x000107c3192c(ppcVar8 + 2,pppuStack_a0,pcStack_98);
          pcVar5 = pcStack_88;
        }
        else {
          ppcVar8[3] = pcStack_98;
          ppcVar8[2] = (code *)pppuStack_a0;
          ppcVar8[4] = pcStack_90;
        }
        ppcVar8[5] = pcVar5;
        ppcVar13 = &pcStack_78;
        ppcStack_68 = ppcVar8;
        FUN_10a4634ec(ppcVar12);
        pppuVar7 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
        if ((long)pcStack_90 < 0) {
          pppuVar7 = pppuStack_a0;
          __ZdlPv();
        }
        pppuVar6 = pppuStack_a8;
        if (pppuStack_a8 != (undefined ***)0x0) {
          pppuVar1 = pppuStack_a8 + 1;
          do {
            ppuVar14 = *pppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
            if (bVar3) {
              *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar7 = pppuVar6;
          }
        }
      }
    }
    else {
      *pppuVar6 = (undefined **)CONCAT44((int)((ulong)*pppuVar6 >> 0x20) + 1,(int)*pppuVar6 + 1);
      pppuVar7 = (undefined ***)*param_1;
      FUN_10a2823f8();
      iVar4 = *(int *)((long)pppuVar6 + 4) + -1;
      *(int *)((long)pppuVar6 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)pppuVar6 = 0;
      }
    }
LAB_10a28235c:
    param_1 = pppuVar7;
    param_2 = ppcVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010a004dac(ppcVar8);
  __ZdlPv();
  FUN_10a2826dc(&ppuStack_b0);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_120,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_148,&ppuStack_120,*param_1);
  if (ppuStack_120 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_120)();
  }
  (**(code **)(**param_1 + 0x30))(&puStack_150);
  ppuVar15 = *param_1;
  ppuVar14 = ppuVar15;
  (**(code **)(*ppuVar15 + 0x58))();
  if (((ulong)ppuVar14[0x3c] & 1) != 0) {
    puVar16 = (undefined8 *)ppuVar14[9];
    if (puVar16 == (undefined8 *)0x0) {
      FUN_10a140784(ppuVar14 + 5);
      puVar16 = (undefined8 *)ppuVar14[9];
    }
    ppuVar14[9] = (undefined *)*puVar16;
    puVar9 = puVar16 + 1;
    puVar16[2] = 0;
    *puVar9 = 0;
    puVar16[8] = 0;
    puVar16[7] = 0;
    puVar16[6] = 0;
    puVar16[5] = 0;
    puVar16[4] = 0;
    puVar16[3] = 0;
    *puVar16 = &PTR_FUN_110bb7368;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar9,*param_2,param_2[1]);
    }
    else {
      pcVar17 = param_2[1];
      pcVar5 = *param_2;
      puVar16[3] = param_2[2];
      puVar16[2] = pcVar17;
      *puVar9 = pcVar5;
    }
    puVar16[4] = param_2[3];
    ppuVar10 = ppuVar15;
    (**(code **)(*ppuVar15 + 0x58))();
    ppuVar14 = ppuVar10;
    FUN_10a065534();
    if (ppuVar14 == (undefined **)0x0) {
      if (((ulong)ppuVar10[0x3c] & 1) == 0) goto LAB_10a282658;
      ppuVar14 = ppuVar10 + 0x1b;
    }
    ppuStack_120 = (undefined8 **)CONCAT44(ppuStack_120._4_4_,7);
    ppuVar11 = ppuVar15;
    (**(code **)(*ppuVar15 + 0x98))(ppuVar15,*ppuVar14);
    ppuStack_118 = ppuVar11;
    (**(code **)(*ppuVar15 + 0x2f8))
              (&puStack_128,ppuVar15,puVar16,ppuVar10,&UNK_10989ba24,&ppuStack_120);
    aiStack_130[0] = 7;
    if ((3 < (int)ppuStack_120) && (ppuStack_118 != (undefined **)0x0)) {
      (**(code **)*ppuStack_118)();
    }
    uStack_f8 = 1;
    piStack_100 = aiStack_130;
    (**(code **)(*ppuVar15 + 0x58))(ppuVar15);
    ppuStack_120 = &puStack_148;
    ppiStack_108 = &piStack_100;
    ppuStack_118 = ppuVar15;
    puStack_110 = (undefined1 *)&puStack_150;
    func_0x0001098960c0(aiStack_140);
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    if ((3 < aiStack_130[0]) && (puStack_128 != (undefined8 *)0x0)) {
      (**(code **)*puStack_128)();
    }
    if (puStack_150 != (undefined8 *)0x0) {
      (**(code **)*puStack_150)();
    }
    if (puStack_148 != (undefined8 *)0x0) {
      (**(code **)*puStack_148)();
    }
    return;
  }
LAB_10a282658:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a28265c);
  (*pcVar5)();
}



/* Entry: 10a2823f8; end: 10a2826db;  */

void FUN_10a2823f8(long *param_1,long *param_2)

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
    plVar2 = plVar5 + 1;
    plVar5[2] = 0;
    *plVar2 = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)&PTR_FUN_110bb7368;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(plVar2,*param_2,param_2[1]);
    }
    else {
      lVar7 = param_2[1];
      lVar6 = *param_2;
      plVar5[3] = param_2[2];
      plVar5[2] = lVar7;
      *plVar2 = lVar6;
    }
    plVar5[4] = param_2[3];
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x58))();
    plVar2 = plVar3;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) goto LAB_10a282658;
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
LAB_10a282658:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28265c);
  (*pcVar1)();
}



/* Entry: 10a2826dc; end: 10a28270b;  */

long FUN_10a2826dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10a28270c; end: 10a282717;  */

void FUN_10a28270c(long param_1)

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
    plVar2 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar2 = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[3] = 0;
    *plVar7 = (long)&PTR_FUN_110bb7368;
    if (*(char *)((long)puVar6 + 0x27) < '\0') {
      func_0x000107c3192c(plVar2,puVar6[2],puVar6[3]);
    }
    else {
      lVar9 = puVar6[3];
      lVar8 = puVar6[2];
      plVar7[3] = puVar6[4];
      plVar7[2] = lVar9;
      *plVar2 = lVar8;
    }
    plVar7[4] = puVar6[5];
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x58))();
    plVar2 = plVar3;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) goto LAB_10a282658;
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
LAB_10a282658:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28265c);
  (*pcVar1)();
}



/* Entry: 10a282718; end: 10a28275b;  */

void FUN_10a282718(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a28275c; end: 10a282773;  */

void FUN_10a28275c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a282774; end: 10a282973;  */

void FUN_10a282774(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,puVar2,uVar1);
  auStack_80[0] = 6;
  FUN_10a07aef4(aiStack_70,plStack_58,param_3);
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a282974; end: 10a2829a3;  */

long FUN_10a282974(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10a2829a4; end: 10a2829b3;  */

void FUN_10a2829a4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(&ppuStack_60,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar3);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*puVar3;
  uVar1 = puVar4[3];
  plVar2 = (long *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x27);
    plVar2 = puVar4 + 2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,plVar2,uVar1);
  auStack_80[0] = 6;
  FUN_10a07aef4(aiStack_70,plStack_58,puVar4 + 5);
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a2829b4; end: 10a2829f7;  */

void FUN_10a2829b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2829f8; end: 10a282a2b;  */

void FUN_10a2829f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a282a2c; end: 10a282a83;  */

long FUN_10a282a2c(long param_1)

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



/* Entry: 10a282a84; end: 10a282b9b;  */

void FUN_10a282a84(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = (long *)0x540;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  plVar5 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_110bb74e8;
  FUN_10a5936a4(plVar5,param_2);
  *param_1 = plVar5;
  param_1[1] = plVar4;
  lVar6 = plVar4[0xd];
  if (lVar6 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xc] = (long)plVar5;
    plVar4[0xd] = (long)plVar4;
  }
  else {
    if (*(long *)(lVar6 + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xc] = (long)plVar5;
    plVar4[0xd] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a282b9c; end: 10a282bab;  */

void FUN_10a282b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb74e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a282bac; end: 10a282bcb;  */

void FUN_10a282bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb74e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a282bcc; end: 10a282bdf;  */

undefined8 * FUN_10a282bcc(long param_1)

{
  code *pcVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x418) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x418)])(param_1 + 0x3d8);
    if ((ulong)*(byte *)(param_1 + 0x3d0) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x3d0)])(param_1 + 0x390);
      if ((ulong)*(byte *)(param_1 + 0x388) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x388)])(param_1 + 0x348);
        if ((ulong)*(byte *)(param_1 + 0x340) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x340)])(param_1 + 0x300);
          if ((ulong)*(byte *)(param_1 + 0x2f8) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x2f8)])(param_1 + 0x2b8);
            FUN_10a282d6c(param_1 + 0x2a8);
            if ((ulong)*(byte *)(param_1 + 0x1f0) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1f0)])(param_1 + 0x1b0);
              if ((ulong)*(byte *)(param_1 + 0x1a8) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1a8)])(param_1 + 0x168);
                if ((ulong)*(byte *)(param_1 + 0x160) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x160)])(param_1 + 0x120);
                  if ((ulong)*(byte *)(param_1 + 0x118) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x118)])(param_1 + 0xd8);
                    if ((ulong)*(byte *)(param_1 + 0xd0) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0xd0)])(param_1 + 0x90);
                      FUN_10a282d6c(param_1 + 0x80);
                      if (*(long *)(param_1 + 0x68) != 0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      *(undefined ***)(param_1 + 0x38) = &PTR_DAT_110bf7618;
                      *(undefined ***)(param_1 + 0x520) = &PTR_FUN_110bf7690;
                      func_0x00010a004e5c(param_1 + 0x50);
                      func_0x00010a004e04(param_1 + 0x40);
                      *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110b9f9a8;
                      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
                        **(undefined8 **)(param_1 + 0x30) = 0;
                      }
                      func_0x00010a004e5c(param_1 + 0x20);
                      return (undefined8 *)(param_1 + 0x18);
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
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a282d6c);
  (*pcVar1)();
}



/* Entry: 10a282be0; end: 10a282d6b;  */

undefined8 * FUN_10a282be0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((ulong)*(byte *)(param_1 + 0x80) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x80)])(param_1 + 0x78);
    if ((ulong)*(byte *)(param_1 + 0x77) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x77)])(param_1 + 0x6f);
      if ((ulong)*(byte *)(param_1 + 0x6e) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x6e)])(param_1 + 0x66);
        if ((ulong)*(byte *)(param_1 + 0x65) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x65)])(param_1 + 0x5d);
          if ((ulong)*(byte *)(param_1 + 0x5c) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x5c)])(param_1 + 0x54);
            FUN_10a282d6c(param_1 + 0x52);
            if ((ulong)*(byte *)(param_1 + 0x3b) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x3b)])(param_1 + 0x33);
              if ((ulong)*(byte *)(param_1 + 0x32) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x32)])(param_1 + 0x2a);
                if ((ulong)*(byte *)(param_1 + 0x29) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x29)])(param_1 + 0x21);
                  if ((ulong)*(byte *)(param_1 + 0x20) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x20)])(param_1 + 0x18);
                    if ((ulong)*(byte *)(param_1 + 0x17) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x17)])(param_1 + 0xf);
                      FUN_10a282d6c(param_1 + 0xd);
                      if (param_1[10] != 0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      lVar2 = *(long *)(param_2 + 8);
                      param_1[4] = lVar2;
                      *(undefined8 *)((long)(param_1 + 4) + *(long *)(lVar2 + -0x18)) =
                           *(undefined8 *)(param_2 + 0x10);
                      func_0x00010a004e5c(param_1 + 7);
                      func_0x00010a004e04(param_1 + 5);
                      *param_1 = &PTR_FUN_110b9f9a8;
                      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
                        *(undefined8 *)param_1[3] = 0;
                      }
                      func_0x00010a004e5c(param_1 + 1);
                      return param_1;
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
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a282d6c);
  (*pcVar1)();
}



/* Entry: 10a282d6c; end: 10a282dc3;  */

long FUN_10a282d6c(long param_1)

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



/* Entry: 10a282dc4; end: 10a282dd3;  */

uint FUN_10a282dc4(undefined8 param_1,undefined8 param_2)

{
  func_0x000105277f8c(param_2);
  return ~(uint)param_2 >> 0x1f;
}



/* Entry: 10a282dd4; end: 10a28310f;  */

uint FUN_10a282dd4(uint param_1)

{
  return ~param_1 >> 0x1f;
}



/* Entry: 10a283110; end: 10a283293;  */

undefined8 ** FUN_10a283110(long param_1,undefined8 param_2,undefined8 **param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long *extraout_x8;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong unaff_x22;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_650;
  long lStack_648;
  undefined8 uStack_640;
  undefined8 *puStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_600;
  long lStack_5f8;
  long *plStack_5e0;
  undefined8 uStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long lStack_520;
  undefined8 uStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined7 uStack_4e8;
  undefined4 uStack_4e1;
  undefined4 uStack_4dc;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [304];
  undefined8 *apuStack_2d8 [38];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined1 auStack_178 [304];
  undefined8 *puStack_48;
  
  lVar14 = param_1;
  func_0x00010a2840dc();
  if (lVar14 == 0) {
    plVar8 = param_3[3];
    ppuVar9 = (undefined8 **)0x0;
    if (plVar8 == (long *)0x0) goto LAB_10a283244;
    (**(code **)(*plVar8 + 0x30))(auStack_178,plVar8,param_2);
    FUN_10a283294(&uStack_190,auStack_178);
    func_0x00010a283ccc(auStack_408,auStack_178);
    unaff_x22 = uStack_180;
    uVar6 = uStack_188;
    uVar17 = uStack_190;
    param_3 = apuStack_2d8;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010a283ccc(apuStack_2d8,auStack_408);
    uStack_1a0 = uVar6;
    uStack_1a8 = uVar17;
    uStack_198 = unaff_x22;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_420 = 0;
    FUN_10a2836b8(param_1,param_2,param_2,apuStack_2d8);
    puStack_48 = &uStack_1a8;
    func_0x00010a208c30(&puStack_48);
    FUN_10a283e44(apuStack_2d8);
    puStack_48 = &uStack_420;
    func_0x00010a208c30(&puStack_48);
    FUN_10a283e44(auStack_408);
    apuStack_2d8[0] = &uStack_190;
    func_0x00010a208c30(apuStack_2d8);
    FUN_10a283e44(auStack_178);
  }
  func_0x00010a2840dc(param_1,param_2);
  if (param_1 != 0) {
    return (undefined8 **)(param_1 + 0x188);
  }
  ppuVar9 = (undefined8 **)&UNK_10f639994;
  FUN_109ffdddc();
LAB_10a283244:
  FUN_10a06186c();
  FUN_10a28367c(apuStack_2d8);
  puStack_48 = &uStack_420;
  func_0x00010a208c30(&puStack_48);
  FUN_10a283e44(auStack_408);
  apuStack_2d8[0] = &uStack_190;
  func_0x00010a208c30(apuStack_2d8);
  FUN_10a283e44(auStack_178);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar11 = *ppuVar9;
  ppuVar10 = ppuVar9;
  if (ppuVar9[1] != puVar11) {
    uVar15 = 0;
    puVar16 = ppuVar9[0x12];
    fVar20 = 0.0;
    do {
      ppuVar10 = ppuVar9 + 3;
      func_0x00010a283ff0(ppuVar10,puVar11 + uVar15 * 5);
      if (ppuVar10 == (undefined8 **)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a283618:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a28361c);
        (*pcVar7)();
      }
      puVar11 = ppuVar9[8];
      uVar12 = ((long)ppuVar9[9] - (long)puVar11 >> 2) * -0x5555555555555555;
      if (uVar12 < uVar15 || uVar12 - uVar15 == 0) goto LAB_10a283618;
      uStack_4dc = 0;
      lStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4e1 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      lStack_528 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      lStack_520 = 0;
      lStack_508 = 0;
      lStack_510 = 0;
      uStack_4d8 = 0x3f80000000000000;
      uStack_4d0 = puVar16[7];
      plStack_568 = (long *)0x0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_550 = 0x3f800000;
      uStack_54c = 0;
      uStack_548 = 0;
      uStack_544 = 0;
      FUN_10a2086b4(&uStack_570,puVar16 + 4);
      uStack_558 = puVar16[9];
      uStack_560 = puVar16[8];
      uVar17 = puVar16[7];
      uStack_54c = (undefined4)uVar17;
      uStack_548 = (undefined4)((ulong)uVar17 >> 0x20);
      uStack_544 = *(undefined4 *)((long)puVar16 + 0x34);
      uStack_550 = 0x3f800000;
      plVar8 = ppuVar10[7];
      if (plVar8[5] != plVar8[3] && plVar8[6] != plVar8[4]) {
        puVar2 = *ppuVar9;
        uVar12 = ((long)ppuVar9[1] - (long)puVar2 >> 3) * -0x3333333333333333;
        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) goto LAB_10a283618;
        (**(code **)(*plVar8 + 0x50))();
        uVar12 = ((long)ppuVar9[0x19] - (long)ppuVar9[0x18] >> 3) * -0x5555555555555555;
        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) goto LAB_10a283618;
        plVar8 = ppuVar9[0x18] + uVar15 * 3;
        lStack_650 = 0;
        lStack_648 = 0;
        uStack_640 = 0;
        lVar14 = *plVar8;
        lVar13 = plVar8[1];
        FUN_10a0e9a40(&lStack_650,lVar14,lVar13,lVar13 - lVar14 >> 2);
        if ((ulong)((long)ppuVar9[0x1c] - (long)ppuVar9[0x1b] >> 2) <= uVar15) goto LAB_10a283618;
        lVar14 = (long)puVar11 + uVar15 * 0xc;
        unaff_x22 = unaff_x22 & 0xffffffffffffff00;
        param_3 = (undefined8 **)((ulong)param_3 & 0xffffffffffffff00);
        FUN_10a250bbc(&puStack_638,fVar20,0,uVar17,0,0,lVar14,ppuVar10 + 7,puVar2 + uVar15 * 5,
                      &lStack_650,unaff_x22,param_3,0,
                      *(undefined4 *)((long)ppuVar9[0x1b] + uVar15 * 4),&uStack_570);
        FUN_10a208000(extraout_x8,&puStack_638);
        plVar8 = plStack_5e0;
        if (plStack_5e0 != (long *)0x0) {
          plVar1 = plStack_5e0 + 1;
          do {
            lVar13 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_5e0 + 0x10))(plStack_5e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (lStack_600 != 0) {
          lStack_5f8 = lStack_600;
          __ZdlPv();
        }
        if (lStack_630 != 0) {
          lStack_628 = lStack_630;
          __ZdlPv();
        }
        if (lStack_650 != 0) {
          lStack_648 = lStack_650;
          __ZdlPv();
        }
        lVar13 = extraout_x8[1];
        if (*extraout_x8 == lVar13) goto LAB_10a283618;
        fVar18 = (float)*(undefined8 *)(lVar13 + -0x48);
        fVar19 = fVar20 - fVar18;
        *(ulong *)(lVar13 + -0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + -0x40) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar13 + -0x40) + fVar19);
        *(ulong *)(lVar13 + -0x48) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + -0x48) >> 0x20) + 0.0,fVar18 + fVar19)
        ;
        lVar13 = extraout_x8[1];
        if (*extraout_x8 == lVar13) goto LAB_10a283618;
        uVar17 = CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + -0x38) >> 0x20) + 0.0,
                          (float)*(undefined8 *)(lVar13 + -0x38) + fVar19);
        *(ulong *)(lVar13 + -0x30) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + -0x30) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar13 + -0x30) + fVar19);
        *(undefined8 *)(lVar13 + -0x38) = uVar17;
        iVar3 = *(int *)(lVar14 + 8);
        (**(code **)(*ppuVar10[7] + 0x50))();
        fVar20 = fVar20 + (float)uVar17 * (float)iVar3;
      }
      plVar8 = plStack_568;
      if (plStack_568 != (long *)0x0) {
        plVar1 = plStack_568 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_568 + 0x10))(plStack_568);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_4f8 != 0) {
        __ZdlPv();
      }
      if (lStack_510 != 0) {
        lStack_508 = lStack_510;
        __ZdlPv();
      }
      if (lStack_528 != 0) {
        lStack_520 = lStack_528;
        __ZdlPv();
      }
      puStack_638 = &uStack_540;
      ppuVar10 = &puStack_638;
      func_0x00010a208c30(ppuVar10);
      uVar15 = uVar15 + 1;
      puVar11 = *ppuVar9;
    } while (uVar15 < (ulong)(((long)ppuVar9[1] - (long)puVar11 >> 3) * -0x3333333333333333));
  }
  return ppuVar10;
}



/* Entry: 10a283294; end: 10a28367b;  */

void FUN_10a283294(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1d0;
  long lStack_1c8;
  long *plStack_1b0;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    uVar13 = 0;
    lVar14 = param_2[0x12];
    fVar18 = 0.0;
    do {
      plVar8 = param_2 + 3;
      FUN_10a283ff0(plVar8,lVar12 + uVar13 * 0x28);
      if (plVar8 == (long *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a283618:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a28361c);
        (*pcVar7)();
      }
      lVar12 = param_2[8];
      uVar10 = (param_2[9] - lVar12 >> 2) * -0x5555555555555555;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a283618;
      uStack_ac = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b1 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      lStack_f0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      uStack_a8 = 0x3f80000000000000;
      uStack_a0 = *(undefined8 *)(lVar14 + 0x38);
      plStack_138 = (long *)0x0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      FUN_10a2086b4(&uStack_140,lVar14 + 0x20);
      uStack_128 = *(undefined8 *)(lVar14 + 0x48);
      uStack_130 = *(undefined8 *)(lVar14 + 0x40);
      uVar15 = *(undefined8 *)(lVar14 + 0x38);
      uStack_11c = (undefined4)uVar15;
      uStack_118 = (undefined4)((ulong)uVar15 >> 0x20);
      uStack_114 = *(undefined4 *)(lVar14 + 0x34);
      uStack_120 = 0x3f800000;
      plVar9 = (long *)plVar8[7];
      if (plVar9[5] != plVar9[3] && plVar9[6] != plVar9[4]) {
        lVar11 = *param_2;
        uVar10 = (param_2[1] - lVar11 >> 3) * -0x3333333333333333;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a283618;
        (**(code **)(*plVar9 + 0x50))();
        uVar10 = (param_2[0x19] - param_2[0x18] >> 3) * -0x5555555555555555;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a283618;
        plVar9 = (long *)(param_2[0x18] + uVar13 * 0x18);
        lStack_220 = 0;
        lStack_218 = 0;
        uStack_210 = 0;
        lVar2 = *plVar9;
        lVar3 = plVar9[1];
        FUN_10a0e9a40(&lStack_220,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if ((ulong)(param_2[0x1c] - param_2[0x1b] >> 2) <= uVar13) goto LAB_10a283618;
        lVar12 = lVar12 + uVar13 * 0xc;
        unaff_x22 = unaff_x22 & 0xffffffffffffff00;
        unaff_x21 = unaff_x21 & 0xffffffffffffff00;
        FUN_10a250bbc(&puStack_208,fVar18,0,uVar15,0,0,lVar12,plVar8 + 7,lVar11 + uVar13 * 0x28,
                      &lStack_220,unaff_x22,unaff_x21,0,*(undefined4 *)(param_2[0x1b] + uVar13 * 4),
                      &uStack_140);
        FUN_10a208000(param_1,&puStack_208);
        plVar9 = plStack_1b0;
        if (plStack_1b0 != (long *)0x0) {
          plVar1 = plStack_1b0 + 1;
          do {
            lVar11 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (lStack_1d0 != 0) {
          lStack_1c8 = lStack_1d0;
          __ZdlPv();
        }
        if (lStack_200 != 0) {
          lStack_1f8 = lStack_200;
          __ZdlPv();
        }
        if (lStack_220 != 0) {
          lStack_218 = lStack_220;
          __ZdlPv();
        }
        lVar11 = param_1[1];
        if (*param_1 == lVar11) goto LAB_10a283618;
        fVar16 = (float)*(undefined8 *)(lVar11 + -0x48);
        fVar17 = fVar18 - fVar16;
        *(ulong *)(lVar11 + -0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x40) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar11 + -0x40) + fVar17);
        *(ulong *)(lVar11 + -0x48) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x48) >> 0x20) + 0.0,fVar16 + fVar17)
        ;
        lVar11 = param_1[1];
        if (*param_1 == lVar11) goto LAB_10a283618;
        uVar15 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x38) >> 0x20) + 0.0,
                          (float)*(undefined8 *)(lVar11 + -0x38) + fVar17);
        *(ulong *)(lVar11 + -0x30) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x30) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar11 + -0x30) + fVar17);
        *(undefined8 *)(lVar11 + -0x38) = uVar15;
        iVar4 = *(int *)(lVar12 + 8);
        (**(code **)(*(long *)plVar8[7] + 0x50))();
        fVar18 = fVar18 + (float)uVar15 * (float)iVar4;
      }
      plVar8 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar9 = plStack_138 + 1;
        do {
          lVar12 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_c8 != 0) {
        __ZdlPv();
      }
      if (lStack_e0 != 0) {
        lStack_d8 = lStack_e0;
        __ZdlPv();
      }
      if (lStack_f8 != 0) {
        lStack_f0 = lStack_f8;
        __ZdlPv();
      }
      puStack_208 = &uStack_110;
      func_0x00010a208c30(&puStack_208);
      uVar13 = uVar13 + 1;
      lVar12 = *param_2;
    } while (uVar13 < (ulong)((param_2[1] - lVar12 >> 3) * -0x3333333333333333));
  }
  return;
}



/* Entry: 10a28367c; end: 10a2836b7;  */

void FUN_10a28367c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x130;
  func_0x00010a208c30(&lStack_28);
  FUN_10a283e44(param_1);
  return;
}



/* Entry: 10a2836b8; end: 10a2838f7;  */

undefined1  [16]
FUN_10a2836b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010a20ad68();
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
          plVar3 = plVar7 + 2;
          FUN_10a20a46c(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a2838b4;
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
  FUN_10a2838f8(aplStack_78,param_1,plVar6,param_3,param_4);
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
    func_0x00010a283a18(param_1,uVar9);
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
LAB_10a2838b4:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a2838f8; end: 10a283973;  */

void FUN_10a2838f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1a0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a283974(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a283974; end: 10a283ae7;  */

undefined8 * FUN_10a283974(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar4;
  FUN_10a1ccb30(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  lVar5 = param_2[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010a283ccc(param_1 + 9,param_3);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x130);
  param_1[0x30] = *(undefined8 *)(param_3 + 0x138);
  param_1[0x2f] = uVar4;
  param_1[0x31] = *(undefined8 *)(param_3 + 0x140);
  *(undefined8 *)(param_3 + 0x130) = 0;
  *(undefined8 *)(param_3 + 0x138) = 0;
  *(undefined8 *)(param_3 + 0x140) = 0;
  return param_1;
}



/* Entry: 10a283ae8; end: 10a283dd7;  */

void FUN_10a283ae8(ulong *param_1,ulong param_2)

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
          func_0x00010a283c6c(uVar1 + 0x10);
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



/* Entry: 10a283dd8; end: 10a283e43;  */

void FUN_10a283dd8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a283e44; end: 10a283fef;  */

long FUN_10a283e44(long param_1)

{
  long lStack_28;
  
  func_0x000107c2826c(param_1 + 0x108);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xc0;
  func_0x00010a1f4bf4(&lStack_28);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a1f4c88(param_1 + 0x80);
  func_0x00010a1f4cfc(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a283ee8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010a1f4ebc(&lStack_28);
  return param_1;
}



/* Entry: 10a283ff0; end: 10a2841b3;  */

long FUN_10a283ff0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a2063e0();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar2 == uVar4) {
          if (plVar3[6] == *(long *)(param_2 + 0x20)) {
            uVar4 = (ulong)(plVar3 + 2);
            FUN_10a2064c0(uVar4,param_2);
            if ((uVar4 & 1) != 0) {
              return (long)plVar3;
            }
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a2841b4; end: 10a2841b7;  */

void FUN_10a2841b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2841b8; end: 10a2841cb;  */

void FUN_10a2841b8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2841cc; end: 10a2841e3;  */

void FUN_10a2841cc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a2841dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a2841e4; end: 10a28421b;  */

undefined8 FUN_10a2841e4(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb75e8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a28421c; end: 10a28421f;  */

void FUN_10a28421c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a284220; end: 10a2842d7;  */

void FUN_10a284220(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a2842d8; end: 10a2844d7;  */

char * FUN_10a2842d8(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0xf00);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0xf00,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0xf00);
          }
        }
        lVar13 = lRam00000001137eade0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eade0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eade0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f648666;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a2844d0);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a2844d8; end: 10a2844e7;  */

void FUN_10a2844d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7610;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2844e8; end: 10a284507;  */

void FUN_10a2844e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7610;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a284508; end: 10a2845ab;  */

long FUN_10a284508(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  func_0x00010a045fb4(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1 + 0x58;
}



/* Entry: 10a2845ac; end: 10a2845bf;  */

void FUN_10a2845ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2845c0; end: 10a2845df;  */

void FUN_10a2845c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7660;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2845e0; end: 10a2846d7;  */

void FUN_10a2845e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x00010a254334(param_1 + 0x18);
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x0001092ba41c(param_1 + 0xb8);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x0001092ba41c(param_1 + 0x68);
  }
  func_0x00010a0523dc(param_1 + 0x38);
  func_0x00010a0523dc(param_1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
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
  plVar4 = *(long **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00010a2846c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2846d8; end: 10a2846db;  */

void FUN_10a2846d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2846dc; end: 10a284713;  */

long * FUN_10a2846dc(long *param_1)

{
  long lVar1;
  
  FUN_10a284714(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a284714; end: 10a28479b;  */

void FUN_10a284714(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  while (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    plVar4 = (long *)param_2[3];
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
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
    __ZdlPv(param_2);
    param_2 = (long *)lVar6;
  }
  return;
}



/* Entry: 10a28479c; end: 10a2847eb;  */

void FUN_10a28479c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  FUN_10a2847ec();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110bb76a0,FUN_10a28480c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  FUN_10a002a94();
  *puVar2 = &PTR_FUN_110bb76c8;
  return;
}



/* Entry: 10a2847ec; end: 10a28480b;  */

void FUN_10a2847ec(undefined8 *param_1)

{
  FUN_10a002a94();
  *param_1 = &PTR_FUN_110bb76c8;
  return;
}



/* Entry: 10a28480c; end: 10a28480f;  */

void FUN_10a28480c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a284810; end: 10a284823;  */

void FUN_10a284810(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a284824; end: 10a28486b;  */

void FUN_10a284824(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  FUN_10a28486c();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110bb76e0,FUN_10a284894);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  FUN_10a009538();
  *puVar2 = &PTR_FUN_110bb7708;
  return;
}



/* Entry: 10a28486c; end: 10a284893;  */

void FUN_10a28486c(undefined8 *param_1)

{
  FUN_10a009538(param_1,&UNK_10f6478c6);
  *param_1 = &PTR_FUN_110bb7708;
  return;
}



/* Entry: 10a284894; end: 10a284897;  */

void FUN_10a284894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}


