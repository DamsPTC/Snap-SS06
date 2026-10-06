/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa4dbd4; end: 10aa4dbf3;  */

void FUN_10aa4dbd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3bb98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4dbf4; end: 10aa4dbff;  */

void FUN_10aa4dbf4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x138;
  func_0x00010a4aec24(&lStack_28);
  lStack_28 = param_1 + 0x120;
  func_0x00010a4aec24(&lStack_28);
  func_0x00010aa71c88(param_1 + 0x18);
  return;
}



/* Entry: 10aa4dc00; end: 10aa4ddb3;  */

void FUN_10aa4dc00(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10aa4ddb4; end: 10aa4de6b;  */

void FUN_10aa4ddb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4de6c(param_1,param_2,0x10aa16f58,0,param_3,param_4,param_5);
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



/* Entry: 10aa4de6c; end: 10aa4df07;  */

void FUN_10aa4de6c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  FUN_10aa4df08(param_2,param_5);
  FUN_10aa4df70(param_7);
  lVar3 = param_2;
  func_0x00010a0655d8(param_2,param_6);
  func_0x00010a068bd8(param_2,param_6 + 0x10);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,lVar3,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10aa4df08; end: 10aa4df6f;  */

void FUN_10aa4df08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
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
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar7 = param_1;
  func_0x000109898688();
  if (lVar7 != 0) {
    FUN_10a053854(param_1,lVar7);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa4e04c(extraout_x8,plVar4,FUN_10aa170dc,0,uVar6,puVar3,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_b8 = lVar7;
          lStack_b0 = lVar7;
          lStack_a8 = lVar7;
          lStack_a0 = lVar13;
          func_0x00010988c1b8(&lStack_b8);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aa4df70; end: 10aa4df93;  */

void FUN_10aa4df70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa4e04c(extraout_x8,plVar3,FUN_10aa170dc,0,uVar5,param_1,param_4);
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



/* Entry: 10aa4df94; end: 10aa4e04b;  */

void FUN_10aa4df94(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4e04c(param_1,param_2,FUN_10aa170dc,0,param_3,param_4,param_5);
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



/* Entry: 10aa4e04c; end: 10aa4e0fb;  */

void FUN_10aa4e04c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2;
  FUN_10aa4df08(param_2,param_5);
  FUN_10aa4e0fc(param_7);
  lVar3 = param_2;
  func_0x00010a0655d8(param_2,param_6);
  lVar4 = param_2;
  func_0x00010a0655d8(param_2,param_6 + 0x10);
  func_0x00010a068bd8(param_2,param_6 + 0x20);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,lVar3,lVar4,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10aa4e0fc; end: 10aa4e11f;  */

void FUN_10aa4e0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar5 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa4de6c(extraout_x8,plVar3,FUN_10aa17284,0,uVar5,param_1,param_4);
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



/* Entry: 10aa4e120; end: 10aa4e1d7;  */

void FUN_10aa4e120(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4de6c(param_1,param_2,FUN_10aa17284,0,param_3,param_4,param_5);
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



/* Entry: 10aa4e1d8; end: 10aa4e28f;  */

void FUN_10aa4e1d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4de6c(param_1,param_2,FUN_10aa17414,0,param_3,param_4,param_5);
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



/* Entry: 10aa4e290; end: 10aa4e347;  */

void FUN_10aa4e290(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4e04c(param_1,param_2,0x10aa17448,0,param_3,param_4,param_5);
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



/* Entry: 10aa4e348; end: 10aa4e3ff;  */

void FUN_10aa4e348(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4de6c(param_1,param_2,0x10aa17480,0,param_3,param_4,param_5);
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



/* Entry: 10aa4e400; end: 10aa4e9c7;  */

/* WARNING: Possible PIC construction at 0x00010aa4e9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa4e9c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa4e9d4) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb78) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ea34) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb84) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ea70) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb94) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ea80) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ea90) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eabc) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eaac) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eac0) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eacc) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ead0) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ead8) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eae0) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eae4) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eafc) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eba4) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb04) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ebb4) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb10) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ebc0) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010aa4ebcc) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb1c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb28) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb2c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb34) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb3c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb40) */
/* WARNING: Removing unreachable block (ram,0x00010aa4eb58) */
/* WARNING: Removing unreachable block (ram,0x00010aa4e9d0) */

void FUN_10aa4e400(undefined8 param_1,undefined **param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code **ppcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *****pppppuVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined ****unaff_x23;
  long *plVar19;
  undefined ****ppppuVar20;
  undefined *puVar21;
  long unaff_x24;
  long *plVar22;
  undefined *puVar23;
  code **unaff_x25;
  undefined8 uVar24;
  ulong uVar25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined ****ppppuStack_c0;
  long *plStack_b8;
  byte bStack_a9;
  long *plStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if (ppuVar9[0x59] < (undefined *)0x8) {
    ppuVar9[(long)(ppuVar9[0x59] + 0x4e)] = ppuVar9[0x5a];
    ppuVar9[0x59] = ppuVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar9 + 0x4b);
  }
  ppuVar10 = param_2;
  FUN_10aa4df08(param_2,param_3);
  FUN_10aa4e9c8(param_5);
  FUN_10a4b40a4(&lStack_e0,param_2,param_4);
  ppuVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  puVar15 = ppuVar10[0x2d];
  puVar16 = ppuVar10[0x2e];
  puVar17 = &UNK_10f68a531;
  func_0x000107c2b054(&pcStack_98,&UNK_10f68a531);
  puVar23 = puVar16;
  FUN_10a3dd220(puVar16);
  func_0x00010a0fda30();
  FUN_10a3dd268(puVar16,puVar23,puVar17,&pcStack_98);
  if (uStack_88._7_1_ < '\0') {
    __ZdlPv(pcStack_98);
  }
  uVar24 = *(undefined8 *)(puVar16 + 0x140);
  FUN_10a0c3500(puVar16,puVar15);
  FUN_10a3e8ad4(uVar24,ppuVar11);
  puVar17 = &UNK_10f68a531;
  pppppuVar12 = &ppppuStack_c0;
  func_0x000107c2b054(pppppuVar12,&UNK_10f68a531);
  uVar24 = *(undefined8 *)(puVar16 + 0x120);
  func_0x00010a0fda30();
  FUN_10aa4fc94(&plStack_f0,uVar24,pppppuVar12,puVar17);
  plStack_a8 = plStack_f0;
  pppppuVar12 = (undefined *****)ppppuStack_c0;
  if (-1 < (char)bStack_a9) {
    pppppuVar12 = &ppppuStack_c0;
    plStack_b8 = (long *)(ulong)bStack_a9;
  }
  func_0x000107c2c4d8(plStack_f0 + 0x2a,pppppuVar12,plStack_b8);
  ppcVar2 = &pcStack_98;
  ppuStack_a0 = ppuStack_e8;
  if (ppuStack_e8 != (undefined **)0x0) {
    ppuVar10 = ppuStack_e8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar5) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  pcStack_98 = FUN_10a0d4f18;
  ppuStack_90 = &PTR_DAT_110950c70;
  FUN_10a3e4814(puVar16,&plStack_a8,&pcStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  ppuVar10 = ppuStack_a0;
  if (ppuStack_a0 != (undefined **)0x0) {
    ppuVar11 = ppuStack_a0 + 1;
    do {
      puVar17 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = puVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppppuStack_c0);
  }
  plVar6 = plStack_f0;
  plVar13 = (long *)0x40;
  __Znwm();
  plVar19 = plVar13 + 1;
  *plVar19 = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_FUN_110c3bc88;
  plVar22 = plVar13 + 3;
  *plVar22 = (long)&PTR_FUN_110c399f0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  *(undefined2 *)(plVar13 + 7) = 0x200;
  plVar13[6] = (long)&PTR_FUN_110c39a78;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  if (lStack_d8 != 0) {
    plVar3 = (long *)(lStack_d8 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar14 = plVar6[0x3f];
  plVar6[0x3f] = lStack_d8;
  plVar6[0x3e] = lStack_e0;
  plStack_a8 = plVar22;
  ppuStack_a0 = (undefined **)plVar13;
  if (lVar14 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar5) {
      *plVar19 = *plVar19 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar6[0x40] = (long)plVar22;
  plVar19 = (long *)plVar6[0x41];
  plVar6[0x41] = (long)plVar13;
  if (plVar19 != (long *)0x0) {
    plVar13 = plVar19 + 1;
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
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  ppppuStack_c0 = (undefined ****)0x0;
  plStack_b8 = (long *)0x0;
  plVar13 = (long *)plVar6[0x3f];
  if ((plVar13 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) {
    ppppuVar20 = (undefined ****)0x0;
  }
  else {
    ppppuVar20 = (undefined ****)plVar6[0x3e];
    ppppuStack_c0 = ppppuVar20;
  }
  plVar13 = plStack_b8;
  lVar14 = plVar6[0x2f];
  if ((*(byte *)(lVar14 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar14);
  }
  FUN_10aa246b8(&pcStack_98,ppppuVar20,lVar14 + 0xc0);
  *(undefined ***)((long)plVar6 + 0x21c) = ppuStack_90;
  *(code **)((long)plVar6 + 0x214) = pcStack_98;
  *(undefined8 *)((long)plVar6 + 0x22c) = uStack_80;
  *(undefined8 *)((long)plVar6 + 0x224) = uStack_88;
  *(undefined8 *)((long)plVar6 + 0x23c) = uStack_70;
  *(undefined8 *)((long)plVar6 + 0x234) = uStack_78;
  *(undefined8 *)((long)plVar6 + 0x24c) = uStack_60;
  *(undefined8 *)((long)plVar6 + 0x244) = uStack_68;
  if (plVar13 != (long *)0x0) {
    plVar19 = plVar13 + 1;
    do {
      lVar18 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  ppuVar10 = ppuStack_a0;
  if (ppuStack_a0 != (undefined **)0x0) {
    plVar13 = (long *)(ppuStack_a0 + 1);
    do {
      lVar18 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)((long)*ppuStack_a0 + 0x10))(ppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  plVar13 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar19 = plStack_c8 + 1;
    do {
      lVar18 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (lStack_d8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuStack_90 = ppuStack_e8;
  plVar19 = plStack_f0;
  plStack_f0 = (long *)0x0;
  ppuStack_e8 = (undefined **)0x0;
  pcStack_98 = (code *)0x0;
  if (plVar19 != (long *)0x0) {
    pcStack_98 = (code *)(plVar19 + 2);
  }
  ppppuStack_c0 = (undefined ****)&PTR_DAT_110c3b150;
  func_0x000109899de4(param_1,param_2,&pcStack_98,&ppppuStack_c0,0,0);
  ppuVar10 = ppuStack_90;
  if (ppuStack_90 != (undefined **)0x0) {
    ppuVar11 = ppuStack_90 + 1;
    do {
      puVar17 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = puVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = ppuVar10;
    }
  }
  ppuVar10 = ppuStack_e8;
  if (ppuStack_e8 != (undefined **)0x0) {
    ppuVar11 = ppuStack_e8 + 1;
    do {
      puVar17 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = puVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_2 = ppuVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10aa4fffc(&plStack_f0);
    if (lStack_d8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    unaff_x30 = 0x10aa4e9c0;
    register0x00000008 = (BADSPACEBASE *)&plStack_f0;
    unaff_x19 = ppuVar9;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x22 = plVar13;
    unaff_x23 = ppppuVar20;
    unaff_x24 = lVar14;
    unaff_x25 = ppcVar2;
    unaff_x26 = plVar6;
    unaff_x29 = puVar1;
  }
  ppuVar10 = ppuVar9 + 0x4b;
  puVar17 = ppuVar9[0x59];
  puVar15 = puVar17 + -1;
  ppuVar9[0x59] = puVar15;
  if (puVar15 < (undefined *)0x8) {
    puVar17 = ppuVar10[(long)(puVar17 + 2)];
    if (ppuVar9[0x5a] == puVar17) {
      return;
    }
  }
  else {
    puVar17 = *(undefined **)(ppuVar9[0x57] + -8);
    ppuVar9[0x57] = ppuVar9[0x57] + -8;
    if (ppuVar9[0x5a] == puVar17) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined *****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar15 = *ppuVar10;
  puVar16 = ppuVar9[0x4c];
  lVar14 = (long)puVar16 - (long)puVar15;
  puVar23 = (undefined *)(lVar14 >> 4);
  if (puVar23 < puVar17) {
    uVar25 = (long)puVar17 - (long)puVar23;
    puVar21 = ppuVar9[0x4d];
    if ((ulong)((long)puVar21 - (long)puVar16 >> 4) < uVar25) {
      if ((ulong)puVar17 >> 0x3c == 0) {
        puVar16 = (undefined *)((long)puVar21 - (long)puVar15 >> 3);
        if (puVar16 <= puVar17) {
          puVar16 = puVar17;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar21 - (long)puVar15)) {
          puVar16 = (undefined *)0xfffffffffffffff;
        }
        *(undefined ***)((long)register0x00000008 + -0x68) = ppuVar10;
        if ((ulong)puVar16 >> 0x3c == 0) {
          lVar8 = (long)puVar16 << 4;
          __Znwm();
          lVar18 = lVar8 + lVar14;
          _bzero(lVar18,uVar25 * 0x10);
          puVar23 = (undefined *)(lVar18 + (long)puVar23 * -0x10);
          _memcpy(puVar23,puVar15,lVar14);
          *ppuVar10 = puVar23;
          ppuVar9[0x4c] = (undefined *)(lVar18 + uVar25 * 0x10);
          ppuVar9[0x4d] = (undefined *)(lVar8 + (long)puVar16 * 0x10);
          *(undefined **)((long)register0x00000008 + -0x78) = puVar15;
          *(undefined **)((long)register0x00000008 + -0x70) = puVar21;
          *(undefined **)((long)register0x00000008 + -0x88) = puVar15;
          *(undefined **)((long)register0x00000008 + -0x80) = puVar15;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(puVar16,uVar25 * 0x10);
    ppuVar9[0x4c] = puVar16 + uVar25 * 0x10;
  }
  else if (puVar17 < puVar23) {
    while (puVar16 != puVar15 + (long)puVar17 * 0x10) {
      puVar16 = puVar16 + -0x10;
      func_0x00010988c204(puVar16);
    }
    ppuVar9[0x4c] = puVar15 + (long)puVar17 * 0x10;
  }
code_r0x00010988c138:
  ppuVar9[0x5a] = puVar17;
  return;
}



/* Entry: 10aa4e9c8; end: 10aa4e9eb;  */

void FUN_10aa4e9c8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined4 *extraout_x8;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  long *in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar9 = 0;
  FUN_10a052ee0(2,0);
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
  FUN_10aa4df08(plVar5,uVar9);
  FUN_10aa4ebf8(param_4);
  if (*param_1 == 1) {
    puVar8 = &UNK_10f68a541;
  }
  else {
    func_0x000109898688(plVar5,param_1);
    if (plVar5 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10aa4ebcc;
    }
    func_0x00010989879c(&stack0xffffffffffffffa0);
    puVar11 = (undefined8 *)&stack0xffffffffffffff90;
    if ((in_stack_ffffffffffffffa0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffa0,&PTR_DAT_110b178e0,&PTR_DAT_110c3b150,0x10),
       puVar11 = (undefined8 *)&stack0xffffffffffffff90, in_stack_ffffffffffffffa0 != 0)) {
      puVar11 = (undefined8 *)&stack0xffffffffffffffa0;
      in_stack_ffffffffffffff90 = in_stack_ffffffffffffffa0;
      in_stack_ffffffffffffff98 = in_stack_ffffffffffffffa8;
    }
    *puVar11 = 0;
    puVar11[1] = 0;
    if (in_stack_ffffffffffffffa8 != (long *)0x0) {
      plVar5 = in_stack_ffffffffffffffa8 + 1;
      do {
        lVar13 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
      }
    }
    if (in_stack_ffffffffffffff90 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10aa4ebcc;
    }
    lVar13 = *(long *)(*(long *)(in_stack_ffffffffffffff90 + 0x168) + 0x188);
    if (lVar13 == 0) {
      puVar8 = &UNK_10f68a564;
    }
    else {
      if (lVar13 == plVar7[0x2d]) {
        FUN_10a3e00f4();
        if (in_stack_ffffffffffffff98 != (long *)0x0) {
          plVar5 = in_stack_ffffffffffffff98 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
          }
        }
        *extraout_x8 = 0;
        plVar5 = plVar6 + 0x4b;
        lVar13 = plVar6[0x59];
        uVar10 = lVar13 - 1;
        plVar6[0x59] = uVar10;
        if (uVar10 < 8) {
          uVar10 = plVar5[lVar13 + 2];
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
        lVar13 = *plVar5;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar13;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar10) {
          uVar19 = uVar10 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar10 >> 0x3c == 0) {
              uVar12 = lVar17 - lVar13 >> 3;
              if (uVar12 <= uVar10) {
                uVar12 = uVar10;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar13)) {
                uVar12 = 0xfffffffffffffff;
              }
              plStack_78 = plVar5;
              if (uVar12 >> 0x3c == 0) {
                lVar4 = uVar12 << 4;
                __Znwm();
                lVar16 = lVar4 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar13,lVar14);
                *plVar5 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar4 + uVar12 * 0x10;
                lStack_98 = lVar13;
                lStack_90 = lVar13;
                lStack_88 = lVar13;
                lStack_80 = lVar17;
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
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar10 < uVar18) {
          lVar13 = lVar13 + uVar10 * 0x10;
          while (lVar16 != lVar13) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar13;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar10;
        return;
      }
      puVar8 = &UNK_10f68a58f;
    }
  }
  FUN_10a00946c(puVar8);
LAB_10aa4ebcc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa4ebd0);
  (*pcVar3)();
}



/* Entry: 10aa4e9ec; end: 10aa4ebf7;  */

void FUN_10aa4e9ec(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
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
  plVar7 = param_2;
  FUN_10aa4df08(param_2,param_3);
  FUN_10aa4ebf8(param_5);
  if (*param_4 == 1) {
    puVar8 = &UNK_10f68a541;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10aa4ebcc;
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar10 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c3b150,0x10),
       puVar10 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
      puVar10 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffb8 + 1;
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
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10aa4ebcc;
    }
    lVar12 = *(long *)(*(long *)(in_stack_ffffffffffffffa0 + 0x168) + 0x188);
    if (lVar12 == 0) {
      puVar8 = &UNK_10f68a564;
    }
    else {
      if (lVar12 == plVar7[0x2d]) {
        FUN_10a3e00f4();
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
        *param_1 = 0;
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
      puVar8 = &UNK_10f68a58f;
    }
  }
  FUN_10a00946c(puVar8);
LAB_10aa4ebcc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa4ebd0);
  (*pcVar4)();
}



/* Entry: 10aa4ebf8; end: 10aa4ec1b;  */

void FUN_10aa4ebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
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
  plVar4 = (long *)0x1;
  uVar6 = 0;
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
  FUN_10aa4edec(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  bVar1 = *(byte *)(plVar4 + 0x77);
  *extraout_x8 = 2;
  *(byte *)(extraout_x8 + 2) = (bVar1 ^ 0xff) & 1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aa4ec1c; end: 10aa4ecdb;  */

void FUN_10aa4ec1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4edec(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x77);
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



/* Entry: 10aa4ecdc; end: 10aa4edeb;  */

void FUN_10aa4ecdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
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
  FUN_10aa4df08(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar2 = *(byte *)(plVar7 + 0x77);
  if ((bVar2 & 1) == 0) {
    bVar3 = *(byte *)(plVar7[0x4a] + 0x3d);
    *(byte *)(plVar7 + 0x77) = bVar2 | (byte)param_2 ^ 1;
    if ((((uint)param_2 | (uint)bVar3) & 1) == 0) {
LAB_10aa4eda4:
      plVar7[0x74] = -1;
      plVar7[0x75] = 0;
    }
  }
  else {
    uVar1 = (uint)param_2 ^ 1;
    *(byte *)(plVar7 + 0x77) = bVar2 & 0xfe | (byte)uVar1;
    if (((uVar1 & 1) == 0) && ((*(byte *)(plVar7[0x4a] + 0x3d) & 1) == 0)) goto LAB_10aa4eda4;
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar8 + 2];
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
  lVar8 = *plVar7;
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
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
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



/* Entry: 10aa4edec; end: 10aa4ee53;  */

void FUN_10aa4edec(float param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
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
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_2;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_2,ppuVar3);
    param_3 = ppuVar3;
    if (param_2 != (undefined **)0x0) {
      param_3 = &PTR_DAT_110b178e0;
      param_5 = 0x10;
      ___dynamic_cast();
      if (param_2 != (undefined **)0x0) {
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
  FUN_10aa4edec(plVar4,param_3);
  FUN_10a052e3c(param_5);
  if (((*(byte *)(plVar4 + 0x77) & 3) == 0) && ((*(byte *)(plVar4[0x4a] + 0x3d) & 1) == 0)) {
    FUN_10aa16e5c(plVar4);
    fVar15 = param_1 * 0.001 * *(float *)((long)plVar4 + 0x3bc);
  }
  else {
    fVar15 = *(float *)((long)plVar4 + 0x3bc);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
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



/* Entry: 10aa4ee54; end: 10aa4ef47;  */

void FUN_10aa4ee54(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa4edec(param_3,param_4);
  FUN_10a052e3c(param_6);
  if (((*(byte *)(param_3 + 0x77) & 3) == 0) && ((*(byte *)(param_3[0x4a] + 0x3d) & 1) == 0)) {
    FUN_10aa16e5c(param_3);
    fVar14 = param_2 * 0.001 * *(float *)((long)param_3 + 0x3bc);
  }
  else {
    fVar14 = *(float *)((long)param_3 + 0x3bc);
  }
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



/* Entry: 10aa4ef48; end: 10aa4efff;  */

void FUN_10aa4ef48(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4f000(param_1,param_2,FUN_10aa16ef0,0,param_3,param_4,param_5);
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



/* Entry: 10aa4f000; end: 10aa4f0a3;  */

void FUN_10aa4f000(float param_1,undefined4 *param_2,long param_3,code *param_4,ulong param_5,
                  undefined8 param_6,int *param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  uVar6 = param_5;
  FUN_10aa4df08(param_3,param_6);
  FUN_10a05ed04(param_8);
  if (*param_7 == 3) {
    if ((param_5 & 1) != 0) {
      param_4 = *(code **)(*(long *)(param_3 + ((long)param_5 >> 1)) + ((ulong)param_4 & 0xffffffff)
                          );
    }
    fVar14 = (float)*(double *)(param_7 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_7 + 2))) {
      fVar14 = 0.0;
    }
    (*param_4)(fVar14);
    *param_2 = 0;
    return;
  }
  plVar3 = (long *)&UNK_10f68f550;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa4edec(plVar3,param_6);
  FUN_10a052e3c(uVar6);
  if (((*(byte *)(plVar3 + 0x77) & 3) == 2) && ((*(byte *)(plVar3[0x4a] + 0x3d) & 1) == 0)) {
    FUN_10aa16e5c(plVar3);
    fVar14 = *(float *)((long)plVar3 + 0x3bc);
    if (1e-06 <= param_1 * 0.001) {
      fVar14 = fVar14 / (param_1 * 0.001);
    }
  }
  else {
    fVar14 = *(float *)((long)plVar3 + 0x3bc);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar14;
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_a8 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_c8 = lVar5;
          lStack_c0 = lVar5;
          lStack_b8 = lVar5;
          lStack_b0 = lVar11;
          func_0x00010988c1b8(&lStack_c8);
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



/* Entry: 10aa4f0a4; end: 10aa4f1ab;  */

void FUN_10aa4f0a4(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa4edec(param_3,param_4);
  FUN_10a052e3c(param_6);
  if (((*(byte *)(param_3 + 0x77) & 3) == 2) && ((*(byte *)(param_3[0x4a] + 0x3d) & 1) == 0)) {
    FUN_10aa16e5c(param_3);
    fVar14 = *(float *)((long)param_3 + 0x3bc);
    if (1e-06 <= param_2 * 0.001) {
      fVar14 = fVar14 / (param_2 * 0.001);
    }
  }
  else {
    fVar14 = *(float *)((long)param_3 + 0x3bc);
  }
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



/* Entry: 10aa4f1ac; end: 10aa4f263;  */

void FUN_10aa4f1ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4f000(param_1,param_2,0x10aa16f24,0,param_3,param_4,param_5);
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



/* Entry: 10aa4f264; end: 10aa4f31f;  */

void FUN_10aa4f264(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4edec(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x78);
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



/* Entry: 10aa4f320; end: 10aa4f40f;  */

void FUN_10aa4f320(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  FUN_10aa4df08(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa4f3fc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x78) = fVar2;
  *param_1 = 0;
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



/* Entry: 10aa4f410; end: 10aa4f4cb;  */

void FUN_10aa4f410(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa4edec(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x3c4);
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



/* Entry: 10aa4f4cc; end: 10aa4f5bb;  */

void FUN_10aa4f4cc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  FUN_10aa4df08(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa4f5a8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x3c4) = fVar2;
  *param_1 = 0;
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



/* Entry: 10aa4f5bc; end: 10aa4f613;  */

long FUN_10aa4f5bc(long param_1)

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



/* Entry: 10aa4f614; end: 10aa4fbc7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa4fa40) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa44) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa54) */
/* WARNING: Removing unreachable block (ram,0x00010aa4fa58) */

undefined8 * FUN_10aa4f614(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  puVar4 = (undefined8 *)0x3e8;
  __Znwm();
  puVar4[0x79] = &PTR_FUN_110c383b8;
  puVar4[0x7b] = 0;
  puVar4[0x7a] = 0;
  *(undefined2 *)(puVar4 + 0x7c) = 0x100;
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3ed8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x203;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd32e8;
  plVar5[6] = (long)&PTR_FUN_110bd3390;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0x4170000041700000;
  *(undefined4 *)(plVar5 + 0xd) = 0x41700000;
  plStack_38 = plVar5;
  FUN_10a3c575c(puVar4,&PTR_PTR_110c38740,param_1,param_2);
  *puVar4 = &PTR_FUN_110c3a788;
  puVar4[2] = &PTR_DAT_110c38898;
  puVar4[7] = &PTR_DAT_110c388f0;
  puVar4[0xd] = &PTR_DAT_110c38910;
  puVar4[0x79] = &PTR_DAT_110c3a8d8;
  puVar4[0x16] = &PTR_DAT_110c38980;
  puVar4[0x17] = &PTR_DAT_110c389b0;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3bd68;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3bdb8;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59218;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x3e] = puVar6 + 3;
  puVar4[0x3f] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3be10;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[3] = &PTR_FUN_110c3be60;
  puVar6[0x12] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa5957c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x40] = puVar6 + 3;
  puVar4[0x41] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3beb8;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3bf08;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa598e0;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x42] = puVar6 + 3;
  puVar4[0x43] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3bf60;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[3] = &PTR_FUN_110c3bfb0;
  puVar6[0x12] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59c44;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x44] = puVar6 + 3;
  puVar4[0x45] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3c008;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3c058;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa59fa8;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x46] = puVar6 + 3;
  puVar4[0x47] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110c3c0b0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c3c100;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10aa5a30c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar4[0x48] = puVar6 + 3;
  puVar4[0x49] = puVar6;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4c] = 0;
  puVar4[0x4f] = 0;
  puVar4[0x4e] = 0;
  puVar4[0x51] = 0;
  puVar4[0x50] = 0;
  puVar4[0x53] = 0;
  puVar4[0x52] = 0;
  *(undefined1 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x2a4) = 0x41f0000041f00000;
  puVar4[0x56] = 0;
  *(undefined4 *)(puVar4 + 0x57) = 1;
  puVar4[0x59] = 0;
  puVar4[0x58] = 0;
  puVar4[0x5b] = 0;
  puVar4[0x5a] = 0;
  puVar4[0x5d] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x5f] = 0;
  puVar4[0x5e] = 0;
  puVar4[0x60] = 0;
  *(undefined4 *)(puVar4 + 0x61) = 1;
  *(undefined8 *)((long)puVar4 + 900) = 0;
  *(undefined8 *)((long)puVar4 + 0x37c) = 0;
  *(undefined8 *)((long)puVar4 + 0x374) = 0;
  puVar4[99] = 0;
  puVar4[0x62] = 0;
  puVar4[0x65] = 0;
  puVar4[100] = 0;
  puVar4[0x67] = 0;
  puVar4[0x66] = 0;
  puVar4[0x69] = 0;
  puVar4[0x68] = 0;
  puVar4[0x6b] = 0;
  puVar4[0x6a] = 0;
  puVar4[0x6d] = 0;
  puVar4[0x6c] = 0;
  *(undefined1 *)(puVar4 + 0x6e) = 0;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110bf7fc8;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((long)puVar6 + 0x4d) = 0;
  *(undefined8 *)((long)puVar6 + 0x45) = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar4[0x72] = puVar6 + 3;
  puVar4[0x73] = puVar6;
  FUN_10a5cf1fc(puVar4 + 0x72);
  puVar4[0x74] = 0xffffffffffffffff;
  puVar4[0x75] = 0;
  puVar4[0x76] = 0xffffffff;
  if (puVar4[0x4a] != 0) {
    *(undefined8 *)(puVar4[0x4a] + 0x40) = 0;
  }
  FUN_10a91135c(puVar4 + 0x4a,&plStack_40);
  plVar5 = plStack_38;
  *(undefined8 **)(puVar4[0x4a] + 0x40) = puVar4;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *puVar4 = &PTR_FUN_110c38460;
  puVar4[2] = &PTR_DAT_110c38580;
  puVar4[7] = &PTR_DAT_110c385d8;
  puVar4[0xd] = &PTR_DAT_110c385f8;
  puVar4[0x79] = &PTR_DAT_110c386f8;
  puVar4[0x16] = &PTR_DAT_110c38668;
  puVar4[0x17] = &PTR_DAT_110c38698;
  *(undefined1 *)(puVar4 + 0x77) = 0;
  *(undefined4 *)((long)puVar4 + 0x3bc) = 0x3f800000;
  puVar4[0x78] = 0;
  return puVar4;
}



/* Entry: 10aa4fbc8; end: 10aa4fbcb;  */

void FUN_10aa4fbc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa4fbcc; end: 10aa4fbdf;  */

void FUN_10aa4fbcc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4fbe0; end: 10aa4fbfb;  */

void FUN_10aa4fbe0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10aa4fbfc; end: 10aa4fc37;  */

long FUN_10aa4fbfc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa4fc38; end: 10aa4fc3b;  */

void FUN_10aa4fc38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4fc3c; end: 10aa4fc93;  */

long FUN_10aa4fc3c(long param_1)

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



/* Entry: 10aa4fc94; end: 10aa4fddb;  */

void FUN_10aa4fc94(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  FUN_10a3dd220(param_2);
  FUN_10aa4fddc(param_3,param_4);
  *param_1 = param_3;
  plVar4 = (long *)0x28;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_FUN_110c3bc38;
  plVar4[2] = 0;
  plVar4[3] = param_3;
  plVar4[4] = (long)FUN_10a3df8cc;
  param_1[1] = (long)plVar4;
  if (*(long *)(param_3 + 0x30) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
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
    *(long *)(param_3 + 0x28) = param_3;
    *(long **)(param_3 + 0x30) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(param_3 + 0x30) + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
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
    *(long *)(param_3 + 0x28) = param_3;
    *(long **)(param_3 + 0x30) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10aa4fddc; end: 10aa4ff87;  */

undefined8 * FUN_10aa4fddc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x2b0;
  __Znwm();
  puVar1[0x52] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x55) = 0x100;
  puVar1[0x54] = 0;
  puVar1[0x53] = 0;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110c39520;
  puVar1[2] = &PTR_DAT_110c39630;
  puVar1[7] = &PTR_DAT_110c39688;
  puVar1[0xd] = &PTR_DAT_110c396a8;
  puVar1[0x52] = &PTR_DAT_110c397a8;
  puVar1[0x16] = &PTR_DAT_110c39718;
  puVar1[0x17] = &PTR_DAT_110c39748;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110c3cd70;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110c39850;
  puVar2[6] = &PTR_FUN_110c398d8;
  puVar1[0x40] = puVar2 + 3;
  puVar1[0x41] = puVar2;
  *(undefined1 *)(puVar1 + 0x42) = 0;
  *(undefined8 *)((long)puVar1 + 0x21c) = 0;
  *(undefined8 *)((long)puVar1 + 0x214) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x22c) = 0;
  *(undefined8 *)((long)puVar1 + 0x224) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar1 + 0x23c) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x234) = 0;
  *(undefined8 *)((long)puVar1 + 0x24c) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar1 + 0x244) = 0;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar1[0x4b] = puVar2 + 3;
  puVar1[0x4c] = puVar2;
  FUN_10a5cf1fc(puVar1 + 0x4b);
  puVar1[0x4d] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 0x4e) = 0;
  puVar1[0x4f] = 0;
  puVar1[0x51] = 0;
  puVar1[0x50] = 0;
  return puVar1;
}



/* Entry: 10aa4ff88; end: 10aa4ff8b;  */

void FUN_10aa4ff88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa4ff8c; end: 10aa4ff9f;  */

void FUN_10aa4ff8c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4ffa0; end: 10aa4ffbb;  */

void FUN_10aa4ffa0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10aa4ffbc; end: 10aa4fff7;  */

long FUN_10aa4ffbc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa4fff8; end: 10aa4fffb;  */

void FUN_10aa4fff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4fffc; end: 10aa50053;  */

long FUN_10aa4fffc(long param_1)

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



/* Entry: 10aa50054; end: 10aa50063;  */

void FUN_10aa50054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3bc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa50064; end: 10aa50083;  */

void FUN_10aa50064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3bc88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa50084; end: 10aa5009b;  */

long FUN_10aa50084(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10aa5009c; end: 10aa5014b;  */

long FUN_10aa5009c(long param_1)

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



/* Entry: 10aa5014c; end: 10aa5021b;  */

void FUN_10aa5014c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa5021c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(byte *)(param_2 + 0x6e) = *(byte *)(param_2 + 0x6e) | 3;
  *(undefined8 *)((long)param_2 + 0x37c) = 0;
  *(undefined8 *)((long)param_2 + 900) = 0;
  *(undefined8 *)((long)param_2 + 0x374) = 0;
  param_2[0x74] = -1;
  param_2[0x75] = 0;
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



/* Entry: 10aa5021c; end: 10aa50283;  */

void FUN_10aa5021c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
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
  FUN_10aa504d4(plVar6,param_2);
  FUN_10a052e3c(param_4);
  plVar18 = (long *)plVar8[0x4b];
  if (plVar8[0x4b] != 0) {
    plVar8 = (long *)(plVar8[0x4b] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(extraout_x8,plVar6,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0,0);
  if (plVar18 != (long *)0x0) {
    plVar6 = plVar18 + 1;
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
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
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
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_a8 = lVar11;
          lStack_a0 = lVar11;
          lStack_98 = lVar11;
          lStack_90 = lVar15;
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



/* Entry: 10aa50284; end: 10aa503b7;  */

void FUN_10aa50284(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x4b];
  if (plVar6[0x4b] != 0) {
    plVar6 = (long *)(plVar6[0x4b] + 8);
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



/* Entry: 10aa503b8; end: 10aa504d3;  */

void FUN_10aa503b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa5021c(param_2,param_3);
  FUN_10aa5053c(param_5);
  FUN_10aa50560(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa19ddc(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10aa504d4; end: 10aa5053b;  */

void FUN_10aa504d4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 != 0) {
    FUN_10a052c2c(param_1,lVar6);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar4 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar4 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  lVar6 = 0;
  FUN_10a052ee0();
  if (*piVar4 != 1) {
    func_0x000109898688(lVar6,piVar4);
    if (lVar6 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar7 = plVar5;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110bd3f18,0), lStack_60 != 0)) {
        *plVar5 = lStack_60;
        plVar5[1] = (long)plStack_58;
        plVar7 = &lStack_60;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (*plVar5 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa50648);
    (*pcVar3)();
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  return;
}



/* Entry: 10aa5053c; end: 10aa5055f;  */

void FUN_10aa5053c(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar5,param_1);
    if (lVar5 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_40);
      plVar6 = plVar4;
      if ((lStack_40 != 0) &&
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110bd3f18,0), lStack_40 != 0)) {
        *plVar4 = lStack_40;
        plVar4[1] = (long)plStack_38;
        plVar6 = &lStack_40;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (*plVar4 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa50648);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10aa50560; end: 10aa5065b;  */

void FUN_10aa50560(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110bd3f18,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa50648);
  (*pcVar3)();
}



/* Entry: 10aa5065c; end: 10aa5072f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa17e4c) */
/* WARNING: Removing unreachable block (ram,0x00010aa17e50) */
/* WARNING: Removing unreachable block (ram,0x00010aa17e58) */

long * FUN_10aa5065c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_10aa18970(&lStack_30,*(undefined8 *)(param_1 + 0x170));
    plVar5 = plStack_28;
    plVar6 = (long *)(param_1 + 0x260);
    FUN_10aa17e38(plVar6,lStack_30,plStack_28);
    if (plVar5 == (long *)0x0) {
      return plVar6;
    }
  }
  else {
    plVar5 = (long *)param_2[1];
    lStack_30 = lVar4;
    plStack_28 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x268);
      *(long *)(param_1 + 0x260) = lVar4;
      *(undefined8 *)(param_1 + 0x268) = 0;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 1;
        do {
          lVar4 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      return (long *)(param_1 + 0x260);
    }
    plVar6 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(param_1 + 0x260);
    FUN_10aa17e38(plVar6,lVar4,plVar5);
  }
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
  if (lVar4 != 0) {
    return plVar6;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return plVar5;
}



/* Entry: 10aa50730; end: 10aa507eb;  */

void FUN_10aa50730(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa508a4(param_1,param_2,plVar4[0x4c],plVar4[0x4d]);
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



/* Entry: 10aa507ec; end: 10aa508a3;  */

void FUN_10aa507ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa5092c(param_1,param_2,FUN_10aa5065c,0,param_3,param_4,param_5);
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



/* Entry: 10aa508a4; end: 10aa5092b;  */

void FUN_10aa508a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10aa5092c; end: 10aa50a0b;  */

void FUN_10aa5092c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10aa5021c(param_2,param_5);
  FUN_10aa50a0c(param_7);
  FUN_10aa50a30(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10aa50a0c; end: 10aa50a2f;  */

void FUN_10aa50a0c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined *extraout_x8;
  undefined *puVar10;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  lVar8 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar9 = &lStack_a0;
  func_0x000109898610(&lStack_90,lVar8,param_1);
  if (lStack_90 == 0) {
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_90,&PTR_DAT_110b178e0,&PTR_DAT_110c3b1b0,0x10);
    if (lStack_90 != 0) {
      plStack_98 = plStack_88;
      plVar9 = &lStack_90;
      lStack_a0 = lStack_90;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = plStack_98;
    if (lStack_a0 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa50e1c);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_70,lStack_a0);
    if (plStack_70 == (long *)0x0) {
      func_0x0001098849a4(&lStack_60,lVar8,param_1);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110b174d8;
      plStack_80 = plVar5 + 3;
      if ((int)lStack_60 == 3) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 3;
        plVar5[5] = (long)plStack_58;
      }
      else if ((int)lStack_60 == 2) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 2;
        *(undefined1 *)(plVar5 + 5) = plStack_58._0_1_;
      }
      else if ((int)lStack_60 < 4) {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
      }
      else {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
        plVar5[5] = (long)plStack_58;
      }
      lStack_60 = lStack_a0;
      plStack_58 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar6 = (long *)0x90;
      plStack_78 = plVar5;
      __Znwm();
      plVar5 = plStack_68;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110b9fe30;
      plStack_70 = plVar6 + 3;
      *plStack_70 = lStack_a0;
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar6[4] = (long)plVar9;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0x32aaaba7;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_68;
          plStack_68 = plVar6;
          (**(code **)(lVar8 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar6 = plStack_68;
        }
      }
      plStack_68 = plVar6;
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a04a7fc(plStack_70 + 2,&plStack_80);
      *plVar4 = lStack_a0;
      plVar4[1] = (long)plStack_68;
      if (plStack_68 == (long *)0x0) {
        plStack_58 = (long *)0x0;
      }
      else {
        plVar9 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_58 = plStack_68;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_60 = lStack_a0;
      func_0x00010a053e8c(plStack_70,&lStack_60);
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a053ee8(lStack_a0,&plStack_70);
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_a0 + 0x50));
      puVar10 = *ppuVar7;
      if (extraout_x8 != (undefined *)0x0) {
        puVar10 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar10 + 0x870),&plStack_70);
      plVar9 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_60);
      plVar4[1] = (long)plStack_58;
      *plVar4 = lStack_60;
    }
    plVar9 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar4 = plStack_98 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10aa50a30; end: 10aa50eab;  */

void FUN_10aa50a30(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar7 = &lStack_90;
  func_0x000109898610(&lStack_80,param_2,param_3);
  if (lStack_80 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c3b1b0,0x10);
    if (lStack_80 != 0) {
      plStack_88 = plStack_78;
      plVar7 = &lStack_80;
      lStack_90 = lStack_80;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7 = plStack_88;
    if (lStack_90 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa50e1c);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_60,lStack_90);
    if (plStack_60 == (long *)0x0) {
      func_0x0001098849a4(&lStack_50,param_2,param_3);
      plVar4 = (long *)0x30;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar4 + 3;
      if ((int)lStack_50 == 3) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 3;
        plVar4[5] = (long)plStack_48;
      }
      else if ((int)lStack_50 == 2) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 2;
        *(undefined1 *)(plVar4 + 5) = plStack_48._0_1_;
      }
      else if ((int)lStack_50 < 4) {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
      }
      else {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
        plVar4[5] = (long)plStack_48;
      }
      lStack_50 = lStack_90;
      plStack_48 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)0x90;
      plStack_68 = plVar4;
      __Znwm();
      plVar4 = plStack_58;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b9fe30;
      plStack_60 = plVar5 + 3;
      *plStack_60 = lStack_90;
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar5[4] = (long)plVar7;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0x32aaaba7;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_58;
          plStack_58 = plVar5;
          (**(code **)(lVar8 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          plVar5 = plStack_58;
        }
      }
      plStack_58 = plVar5;
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a04a7fc(plStack_60 + 2,&plStack_70);
      *param_1 = lStack_90;
      param_1[1] = (long)plStack_58;
      if (plStack_58 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else {
        plVar7 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_48 = plStack_58;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_50 = lStack_90;
      func_0x00010a053e8c(plStack_60,&lStack_50);
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a053ee8(lStack_90,&plStack_60);
      ppuVar6 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_90 + 0x50));
      puVar9 = *ppuVar6;
      if (extraout_x8 != (undefined *)0x0) {
        puVar9 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_60);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_50);
      param_1[1] = (long)plStack_48;
      *param_1 = lStack_50;
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar4 = plStack_88 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10aa50eac; end: 10aa50f67;  */

void FUN_10aa50eac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa51074(param_1,param_2,plVar4[0x4e],plVar4[0x4f]);
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



/* Entry: 10aa50f68; end: 10aa51073;  */

void FUN_10aa50f68(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffb0;
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
  FUN_10aa5021c(param_2,param_3);
  FUN_10aa510fc(param_5);
  FUN_10aa51120(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa17db4(plVar6 + 0x4e,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
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



/* Entry: 10aa51074; end: 10aa510fb;  */

void FUN_10aa51074(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10aa510fc; end: 10aa5111f;  */

void FUN_10aa510fc(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined *extraout_x8;
  undefined *puVar10;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  lVar8 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar9 = &lStack_a0;
  func_0x000109898610(&lStack_90,lVar8,param_1);
  if (lStack_90 == 0) {
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_90,&PTR_DAT_110b178e0,&PTR_DAT_110c3b1f8,0x10);
    if (lStack_90 != 0) {
      plStack_98 = plStack_88;
      plVar9 = &lStack_90;
      lStack_a0 = lStack_90;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = plStack_98;
    if (lStack_a0 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa5150c);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_70,lStack_a0);
    if (plStack_70 == (long *)0x0) {
      func_0x0001098849a4(&lStack_60,lVar8,param_1);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110b174d8;
      plStack_80 = plVar5 + 3;
      if ((int)lStack_60 == 3) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 3;
        plVar5[5] = (long)plStack_58;
      }
      else if ((int)lStack_60 == 2) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 2;
        *(undefined1 *)(plVar5 + 5) = plStack_58._0_1_;
      }
      else if ((int)lStack_60 < 4) {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
      }
      else {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
        plVar5[5] = (long)plStack_58;
      }
      lStack_60 = lStack_a0;
      plStack_58 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar6 = (long *)0x90;
      plStack_78 = plVar5;
      __Znwm();
      plVar5 = plStack_68;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110b9fe30;
      plStack_70 = plVar6 + 3;
      *plStack_70 = lStack_a0;
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar6[4] = (long)plVar9;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0x32aaaba7;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_68;
          plStack_68 = plVar6;
          (**(code **)(lVar8 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar6 = plStack_68;
        }
      }
      plStack_68 = plVar6;
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a04a7fc(plStack_70 + 2,&plStack_80);
      *plVar4 = lStack_a0;
      plVar4[1] = (long)plStack_68;
      if (plStack_68 == (long *)0x0) {
        plStack_58 = (long *)0x0;
      }
      else {
        plVar9 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_58 = plStack_68;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_60 = lStack_a0;
      func_0x00010a053e8c(plStack_70,&lStack_60);
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a053ee8(lStack_a0,&plStack_70);
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_a0 + 0x50));
      puVar10 = *ppuVar7;
      if (extraout_x8 != (undefined *)0x0) {
        puVar10 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar10 + 0x870),&plStack_70);
      plVar9 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_60);
      plVar4[1] = (long)plStack_58;
      *plVar4 = lStack_60;
    }
    plVar9 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar4 = plStack_98 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10aa51120; end: 10aa5159b;  */

void FUN_10aa51120(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar7 = &lStack_90;
  func_0x000109898610(&lStack_80,param_2,param_3);
  if (lStack_80 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c3b1f8,0x10);
    if (lStack_80 != 0) {
      plStack_88 = plStack_78;
      plVar7 = &lStack_80;
      lStack_90 = lStack_80;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7 = plStack_88;
    if (lStack_90 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa5150c);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_60,lStack_90);
    if (plStack_60 == (long *)0x0) {
      func_0x0001098849a4(&lStack_50,param_2,param_3);
      plVar4 = (long *)0x30;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar4 + 3;
      if ((int)lStack_50 == 3) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 3;
        plVar4[5] = (long)plStack_48;
      }
      else if ((int)lStack_50 == 2) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 2;
        *(undefined1 *)(plVar4 + 5) = plStack_48._0_1_;
      }
      else if ((int)lStack_50 < 4) {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
      }
      else {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
        plVar4[5] = (long)plStack_48;
      }
      lStack_50 = lStack_90;
      plStack_48 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)0x90;
      plStack_68 = plVar4;
      __Znwm();
      plVar4 = plStack_58;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b9fe30;
      plStack_60 = plVar5 + 3;
      *plStack_60 = lStack_90;
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar5[4] = (long)plVar7;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0x32aaaba7;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_58;
          plStack_58 = plVar5;
          (**(code **)(lVar8 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          plVar5 = plStack_58;
        }
      }
      plStack_58 = plVar5;
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a04a7fc(plStack_60 + 2,&plStack_70);
      *param_1 = lStack_90;
      param_1[1] = (long)plStack_58;
      if (plStack_58 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else {
        plVar7 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_48 = plStack_58;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_50 = lStack_90;
      func_0x00010a053e8c(plStack_60,&lStack_50);
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a053ee8(lStack_90,&plStack_60);
      ppuVar6 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_90 + 0x50));
      puVar9 = *ppuVar6;
      if (extraout_x8 != (undefined *)0x0) {
        puVar9 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_60);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_50);
      param_1[1] = (long)plStack_48;
      *param_1 = lStack_50;
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar4 = plStack_88 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10aa5159c; end: 10aa51657;  */

void FUN_10aa5159c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa508a4(param_1,param_2,plVar4[0x50],plVar4[0x51]);
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



/* Entry: 10aa51658; end: 10aa5170f;  */

void FUN_10aa51658(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa5092c(param_1,param_2,FUN_10aa17e28,0,param_3,param_4,param_5);
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



/* Entry: 10aa51710; end: 10aa517cb;  */

void FUN_10aa51710(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10aa518d8(param_1,param_2,plVar4[0x52],plVar4[0x53]);
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



/* Entry: 10aa517cc; end: 10aa518d7;  */

void FUN_10aa517cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffb0;
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
  FUN_10aa5021c(param_2,param_3);
  FUN_10aa51960(param_5);
  FUN_10aa51984(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010aa17eac(plVar6 + 0x52,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
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



/* Entry: 10aa518d8; end: 10aa5195f;  */

void FUN_10aa518d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10aa51960; end: 10aa51983;  */

void FUN_10aa51960(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined *extraout_x8;
  undefined *puVar10;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  lVar8 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar9 = &lStack_a0;
  func_0x000109898610(&lStack_90,lVar8,param_1);
  if (lStack_90 == 0) {
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_90,&PTR_DAT_110b178e0,&PTR_DAT_110c3b448,0x10);
    if (lStack_90 != 0) {
      plStack_98 = plStack_88;
      plVar9 = &lStack_90;
      lStack_a0 = lStack_90;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = plStack_98;
    if (lStack_a0 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa51d70);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_70,lStack_a0);
    if (plStack_70 == (long *)0x0) {
      func_0x0001098849a4(&lStack_60,lVar8,param_1);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110b174d8;
      plStack_80 = plVar5 + 3;
      if ((int)lStack_60 == 3) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 3;
        plVar5[5] = (long)plStack_58;
      }
      else if ((int)lStack_60 == 2) {
        plVar5[3] = lVar8;
        *(undefined4 *)(plVar5 + 4) = 2;
        *(undefined1 *)(plVar5 + 5) = plStack_58._0_1_;
      }
      else if ((int)lStack_60 < 4) {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
      }
      else {
        plVar5[3] = lVar8;
        *(int *)(plVar5 + 4) = (int)lStack_60;
        plVar5[5] = (long)plStack_58;
      }
      lStack_60 = lStack_a0;
      plStack_58 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar6 = (long *)0x90;
      plStack_78 = plVar5;
      __Znwm();
      plVar5 = plStack_68;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110b9fe30;
      plStack_70 = plVar6 + 3;
      *plStack_70 = lStack_a0;
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar6[4] = (long)plVar9;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0x32aaaba7;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_68;
          plStack_68 = plVar6;
          (**(code **)(lVar8 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar6 = plStack_68;
        }
      }
      plStack_68 = plVar6;
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a04a7fc(plStack_70 + 2,&plStack_80);
      *plVar4 = lStack_a0;
      plVar4[1] = (long)plStack_68;
      if (plStack_68 == (long *)0x0) {
        plStack_58 = (long *)0x0;
      }
      else {
        plVar9 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_58 = plStack_68;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_60 = lStack_a0;
      func_0x00010a053e8c(plStack_70,&lStack_60);
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x00010a053ee8(lStack_a0,&plStack_70);
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_a0 + 0x50));
      puVar10 = *ppuVar7;
      if (extraout_x8 != (undefined *)0x0) {
        puVar10 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar10 + 0x870),&plStack_70);
      plVar9 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_60);
      plVar4[1] = (long)plStack_58;
      *plVar4 = lStack_60;
    }
    plVar9 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar4 = plStack_98 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10aa51984; end: 10aa51dff;  */

void FUN_10aa51984(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar7 = &lStack_90;
  func_0x000109898610(&lStack_80,param_2,param_3);
  if (lStack_80 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c3b448,0x10);
    if (lStack_80 != 0) {
      plStack_88 = plStack_78;
      plVar7 = &lStack_80;
      lStack_90 = lStack_80;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7 = plStack_88;
    if (lStack_90 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa51d70);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_60,lStack_90);
    if (plStack_60 == (long *)0x0) {
      func_0x0001098849a4(&lStack_50,param_2,param_3);
      plVar4 = (long *)0x30;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar4 + 3;
      if ((int)lStack_50 == 3) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 3;
        plVar4[5] = (long)plStack_48;
      }
      else if ((int)lStack_50 == 2) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 2;
        *(undefined1 *)(plVar4 + 5) = plStack_48._0_1_;
      }
      else if ((int)lStack_50 < 4) {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
      }
      else {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_50;
        plVar4[5] = (long)plStack_48;
      }
      lStack_50 = lStack_90;
      plStack_48 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)0x90;
      plStack_68 = plVar4;
      __Znwm();
      plVar4 = plStack_58;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b9fe30;
      plStack_60 = plVar5 + 3;
      *plStack_60 = lStack_90;
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar5[4] = (long)plVar7;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0x32aaaba7;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_58;
          plStack_58 = plVar5;
          (**(code **)(lVar8 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          plVar5 = plStack_58;
        }
      }
      plStack_58 = plVar5;
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a04a7fc(plStack_60 + 2,&plStack_70);
      *param_1 = lStack_90;
      param_1[1] = (long)plStack_58;
      if (plStack_58 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else {
        plVar7 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_48 = plStack_58;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_50 = lStack_90;
      func_0x00010a053e8c(plStack_60,&lStack_50);
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a053ee8(lStack_90,&plStack_60);
      ppuVar6 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_90 + 0x50));
      puVar9 = *ppuVar6;
      if (extraout_x8 != (undefined *)0x0) {
        puVar9 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_60);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_50);
      param_1[1] = (long)plStack_48;
      *param_1 = lStack_50;
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar4 = plStack_88 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10aa51e00; end: 10aa52007;  */

void FUN_10aa51e00(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4ec83b,0xbd);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3bcc8;
  ppuVar2 = (undefined **)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c3bcc8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa51fe8;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10aa52228,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa51fe8;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10aa52aec,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa51fe8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa51fec);
  (*pcVar9)();
}



/* Entry: 10aa52008; end: 10aa521d7;  */

void FUN_10aa52008(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa52228);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10aa521d8; end: 10aa52227;  */

void FUN_10aa521d8(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa52228);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa52228; end: 10aa52823;  */

/* WARNING: Possible PIC construction at 0x00010aa52818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa5281c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5283c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5284c) */
/* WARNING: Removing unreachable block (ram,0x00010aa52874) */
/* WARNING: Removing unreachable block (ram,0x00010aa52880) */
/* WARNING: Removing unreachable block (ram,0x00010aa52898) */
/* WARNING: Removing unreachable block (ram,0x00010aa528d0) */
/* WARNING: Removing unreachable block (ram,0x00010aa528fc) */
/* WARNING: Removing unreachable block (ram,0x00010aa528e8) */
/* WARNING: Removing unreachable block (ram,0x00010aa528f0) */
/* WARNING: Removing unreachable block (ram,0x00010aa52900) */
/* WARNING: Removing unreachable block (ram,0x00010aa52908) */
/* WARNING: Removing unreachable block (ram,0x00010aa52918) */
/* WARNING: Removing unreachable block (ram,0x00010aa52924) */
/* WARNING: Removing unreachable block (ram,0x00010aa52944) */
/* WARNING: Removing unreachable block (ram,0x00010aa52930) */
/* WARNING: Removing unreachable block (ram,0x00010aa52938) */
/* WARNING: Removing unreachable block (ram,0x00010aa52948) */
/* WARNING: Removing unreachable block (ram,0x00010aa52950) */
/* WARNING: Removing unreachable block (ram,0x00010aa52954) */
/* WARNING: Removing unreachable block (ram,0x00010aa52978) */
/* WARNING: Removing unreachable block (ram,0x00010aa52960) */
/* WARNING: Removing unreachable block (ram,0x00010aa5296c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5297c) */
/* WARNING: Removing unreachable block (ram,0x00010aa52984) */
/* WARNING: Removing unreachable block (ram,0x00010aa5298c) */
/* WARNING: Removing unreachable block (ram,0x00010aa52990) */
/* WARNING: Removing unreachable block (ram,0x00010aa52994) */
/* WARNING: Removing unreachable block (ram,0x00010aa529b0) */
/* WARNING: Removing unreachable block (ram,0x00010aa5299c) */
/* WARNING: Removing unreachable block (ram,0x00010aa529a4) */
/* WARNING: Removing unreachable block (ram,0x00010aa529b4) */
/* WARNING: Removing unreachable block (ram,0x00010aa529bc) */
/* WARNING: Removing unreachable block (ram,0x00010aa529c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa529e4) */
/* WARNING: Removing unreachable block (ram,0x00010aa52a0c) */
/* WARNING: Removing unreachable block (ram,0x00010aa529f4) */
/* WARNING: Removing unreachable block (ram,0x00010aa52894) */
/* WARNING: Removing unreachable block (ram,0x00010aa52868) */

void FUN_10aa52228(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10aa52824(param_2,param_3);
  FUN_10aa5288c(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa5280c;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10aa525c8;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10aa52008(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10aa5266c;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10aa5266c:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10aa5267c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10aa5280c;
LAB_10aa525c8:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10aa5267c:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10aa521d8(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10aa5280c;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10aa5281c;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
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
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
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
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10aa5280c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa52810);
  (*pcVar6)();
}



/* Entry: 10aa52824; end: 10aa5288b;  */

void FUN_10aa52824(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10aa52a18(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10aa529e4;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10aa52950:
    if (lVar6 == 0) {
LAB_10aa52984:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10aa5298c;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
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
    if (uVar12 != uVar7) goto LAB_10aa52984;
LAB_10aa52994:
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
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
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
    if (uVar11 != uVar7) goto LAB_10aa52950;
LAB_10aa5298c:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10aa52994;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10aa521d8(1);
LAB_10aa529e4:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa52a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa5288c; end: 10aa528af;  */

void FUN_10aa5288c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10aa52a18(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10aa529e4;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10aa52950:
    if (lVar5 == 0) {
LAB_10aa52984:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10aa5298c;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10aa52984;
LAB_10aa52994:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10aa52950;
LAB_10aa5298c:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10aa52994;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10aa521d8(1);
LAB_10aa529e4:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa52a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa528b0; end: 10aa52a17;  */

void FUN_10aa528b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10aa52a18(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10aa529e4;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10aa52950:
    if (lVar3 == 0) {
LAB_10aa52984:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10aa5298c;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10aa52984;
LAB_10aa52994:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa52950;
LAB_10aa5298c:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10aa52994;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10aa521d8(1);
LAB_10aa529e4:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa52a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10aa52a18; end: 10aa52aeb;  */

long * FUN_10aa52a18(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa52aec; end: 10aa52c07;  */

void FUN_10aa52aec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa52824(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa528b0(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10aa52c08; end: 10aa52d3b;  */

void FUN_10aa52c08(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x41];
  if (plVar6[0x41] != 0) {
    plVar6 = (long *)(plVar6[0x41] + 8);
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



/* Entry: 10aa52d3c; end: 10aa52f43;  */

void FUN_10aa52d3c(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4ec98c,0xbf);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3bce0;
  ppuVar2 = (undefined **)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c3bce0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa52f24;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10aa53164,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa52f24;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10aa53a28,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa52f24:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa52f28);
  (*pcVar9)();
}



/* Entry: 10aa52f44; end: 10aa53113;  */

void FUN_10aa52f44(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa53164);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10aa53114; end: 10aa53163;  */

void FUN_10aa53114(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa53164);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa53164; end: 10aa5375f;  */

/* WARNING: Possible PIC construction at 0x00010aa53754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa53758) */
/* WARNING: Removing unreachable block (ram,0x00010aa53778) */
/* WARNING: Removing unreachable block (ram,0x00010aa53788) */
/* WARNING: Removing unreachable block (ram,0x00010aa537b0) */
/* WARNING: Removing unreachable block (ram,0x00010aa537bc) */
/* WARNING: Removing unreachable block (ram,0x00010aa537d4) */
/* WARNING: Removing unreachable block (ram,0x00010aa5380c) */
/* WARNING: Removing unreachable block (ram,0x00010aa53838) */
/* WARNING: Removing unreachable block (ram,0x00010aa53824) */
/* WARNING: Removing unreachable block (ram,0x00010aa5382c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5383c) */
/* WARNING: Removing unreachable block (ram,0x00010aa53844) */
/* WARNING: Removing unreachable block (ram,0x00010aa53854) */
/* WARNING: Removing unreachable block (ram,0x00010aa53860) */
/* WARNING: Removing unreachable block (ram,0x00010aa53880) */
/* WARNING: Removing unreachable block (ram,0x00010aa5386c) */
/* WARNING: Removing unreachable block (ram,0x00010aa53874) */
/* WARNING: Removing unreachable block (ram,0x00010aa53884) */
/* WARNING: Removing unreachable block (ram,0x00010aa5388c) */
/* WARNING: Removing unreachable block (ram,0x00010aa53890) */
/* WARNING: Removing unreachable block (ram,0x00010aa538b4) */
/* WARNING: Removing unreachable block (ram,0x00010aa5389c) */
/* WARNING: Removing unreachable block (ram,0x00010aa538a8) */
/* WARNING: Removing unreachable block (ram,0x00010aa538b8) */
/* WARNING: Removing unreachable block (ram,0x00010aa538c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa538c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa538cc) */
/* WARNING: Removing unreachable block (ram,0x00010aa538d0) */
/* WARNING: Removing unreachable block (ram,0x00010aa538ec) */
/* WARNING: Removing unreachable block (ram,0x00010aa538d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa538e0) */
/* WARNING: Removing unreachable block (ram,0x00010aa538f0) */
/* WARNING: Removing unreachable block (ram,0x00010aa538f8) */
/* WARNING: Removing unreachable block (ram,0x00010aa53904) */
/* WARNING: Removing unreachable block (ram,0x00010aa53920) */
/* WARNING: Removing unreachable block (ram,0x00010aa53948) */
/* WARNING: Removing unreachable block (ram,0x00010aa53930) */
/* WARNING: Removing unreachable block (ram,0x00010aa537d0) */
/* WARNING: Removing unreachable block (ram,0x00010aa537a4) */

void FUN_10aa53164(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10aa53760(param_2,param_3);
  FUN_10aa537c8(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa53748;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10aa53504;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10aa52f44(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10aa535a8;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10aa535a8:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10aa535b8;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10aa53748;
LAB_10aa53504:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10aa535b8:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10aa53114(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10aa53748;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10aa53758;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
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
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
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
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10aa53748:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa5374c);
  (*pcVar6)();
}



/* Entry: 10aa53760; end: 10aa537c7;  */

void FUN_10aa53760(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10aa53954(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10aa53920;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10aa5388c:
    if (lVar6 == 0) {
LAB_10aa538c0:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10aa538c8;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
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
    if (uVar12 != uVar7) goto LAB_10aa538c0;
LAB_10aa538d0:
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
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
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
    if (uVar11 != uVar7) goto LAB_10aa5388c;
LAB_10aa538c8:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10aa538d0;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10aa53114(1);
LAB_10aa53920:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa53944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa537c8; end: 10aa537eb;  */

void FUN_10aa537c8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10aa53954(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10aa53920;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10aa5388c:
    if (lVar5 == 0) {
LAB_10aa538c0:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10aa538c8;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10aa538c0;
LAB_10aa538d0:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10aa5388c;
LAB_10aa538c8:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10aa538d0;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10aa53114(1);
LAB_10aa53920:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa53944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa537ec; end: 10aa53953;  */

void FUN_10aa537ec(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10aa53954(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10aa53920;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10aa5388c:
    if (lVar3 == 0) {
LAB_10aa538c0:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10aa538c8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10aa538c0;
LAB_10aa538d0:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa5388c;
LAB_10aa538c8:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10aa538d0;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10aa53114(1);
LAB_10aa53920:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa53944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10aa53954; end: 10aa53a27;  */

long * FUN_10aa53954(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa53a28; end: 10aa53b43;  */

void FUN_10aa53a28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa53760(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa537ec(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10aa53b44; end: 10aa53c77;  */

void FUN_10aa53b44(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa504d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x3f];
  if (plVar6[0x3f] != 0) {
    plVar6 = (long *)(plVar6[0x3f] + 8);
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



/* Entry: 10aa53c78; end: 10aa53e7f;  */

void FUN_10aa53c78(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4ecadd,0xbd);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3bcf8;
  ppuVar2 = (undefined **)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c3bcf8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa53e60;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10aa540a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa53e60;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10aa54964,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa53e60:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa53e64);
  (*pcVar9)();
}



/* Entry: 10aa53e80; end: 10aa5404f;  */

void FUN_10aa53e80(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa540a0);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10aa54050; end: 10aa5409f;  */

void FUN_10aa54050(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa540a0);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa540a0; end: 10aa5469b;  */

/* WARNING: Possible PIC construction at 0x00010aa54690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa54694) */
/* WARNING: Removing unreachable block (ram,0x00010aa546b4) */
/* WARNING: Removing unreachable block (ram,0x00010aa546c4) */
/* WARNING: Removing unreachable block (ram,0x00010aa546ec) */
/* WARNING: Removing unreachable block (ram,0x00010aa546f8) */
/* WARNING: Removing unreachable block (ram,0x00010aa54710) */
/* WARNING: Removing unreachable block (ram,0x00010aa54748) */
/* WARNING: Removing unreachable block (ram,0x00010aa54774) */
/* WARNING: Removing unreachable block (ram,0x00010aa54760) */
/* WARNING: Removing unreachable block (ram,0x00010aa54768) */
/* WARNING: Removing unreachable block (ram,0x00010aa54778) */
/* WARNING: Removing unreachable block (ram,0x00010aa54780) */
/* WARNING: Removing unreachable block (ram,0x00010aa54790) */
/* WARNING: Removing unreachable block (ram,0x00010aa5479c) */
/* WARNING: Removing unreachable block (ram,0x00010aa547bc) */
/* WARNING: Removing unreachable block (ram,0x00010aa547a8) */
/* WARNING: Removing unreachable block (ram,0x00010aa547b0) */
/* WARNING: Removing unreachable block (ram,0x00010aa547c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa547c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa547cc) */
/* WARNING: Removing unreachable block (ram,0x00010aa547f0) */
/* WARNING: Removing unreachable block (ram,0x00010aa547d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa547e4) */
/* WARNING: Removing unreachable block (ram,0x00010aa547f4) */
/* WARNING: Removing unreachable block (ram,0x00010aa547fc) */
/* WARNING: Removing unreachable block (ram,0x00010aa54804) */
/* WARNING: Removing unreachable block (ram,0x00010aa54808) */
/* WARNING: Removing unreachable block (ram,0x00010aa5480c) */
/* WARNING: Removing unreachable block (ram,0x00010aa54828) */
/* WARNING: Removing unreachable block (ram,0x00010aa54814) */
/* WARNING: Removing unreachable block (ram,0x00010aa5481c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5482c) */
/* WARNING: Removing unreachable block (ram,0x00010aa54834) */
/* WARNING: Removing unreachable block (ram,0x00010aa54840) */
/* WARNING: Removing unreachable block (ram,0x00010aa5485c) */
/* WARNING: Removing unreachable block (ram,0x00010aa54884) */
/* WARNING: Removing unreachable block (ram,0x00010aa5486c) */
/* WARNING: Removing unreachable block (ram,0x00010aa5470c) */
/* WARNING: Removing unreachable block (ram,0x00010aa546e0) */

void FUN_10aa540a0(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10aa5469c(param_2,param_3);
  FUN_10aa54704(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa54684;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10aa54440;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10aa53e80(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10aa544e4;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10aa544e4:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10aa544f4;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10aa54684;
LAB_10aa54440:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10aa544f4:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10aa54050(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10aa54684;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10aa54694;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
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
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
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
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10aa54684:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa54688);
  (*pcVar6)();
}


