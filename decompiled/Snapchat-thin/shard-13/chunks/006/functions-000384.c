/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a88a7c8; end: 10a88a94b;  */

void FUN_10a88a7c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x430;
  __Znwm();
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (long)&PTR_FUN_110c24640;
  _bzero(plVar5 + 4,1000);
  *(undefined1 *)(plVar5 + 0x18) = 1;
  plVar5[0x77] = 0;
  plVar5[0x76] = 0;
  *(undefined1 *)(plVar5 + 0x78) = 0;
  plVar5[0x59] = 0;
  plVar5[0x58] = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x5d] = 0;
  plVar5[0x5c] = 0;
  plVar5[0x5f] = 0;
  plVar5[0x5e] = 0;
  plVar5[0x61] = 0;
  plVar5[0x60] = 0;
  plVar5[99] = 0;
  plVar5[0x62] = 0;
  plVar5[0x65] = 0;
  plVar5[100] = 0;
  plVar5[0x67] = 0;
  plVar5[0x66] = 0;
  plVar5[0x69] = 0;
  plVar5[0x68] = 0;
  plVar5[0x6b] = 0;
  plVar5[0x6a] = 0;
  plVar5[0x7a] = 0;
  plVar5[0x79] = 0;
  plVar5[0x7c] = 0;
  plVar5[0x7b] = 0;
  plVar5[0x7d] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c23f38;
  *(undefined1 *)(plVar5 + 0x80) = 0;
  plVar5[0x7f] = 0;
  plVar5[0x7e] = 0;
  *(undefined4 *)((long)plVar5 + 0x404) = 0x40;
  plVar5[0x82] = 0;
  plVar5[0x81] = 0;
  plVar5[0x84] = 0;
  plVar5[0x83] = 0;
  plVar5[0x85] = 0;
  ppuStack_48 = &PTR_DAT_110c25720;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a88a94c; end: 10a88a95b;  */

void FUN_10a88a94c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a88a95c; end: 10a88a97b;  */

void FUN_10a88a95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24640;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a88a97c; end: 10a88a98b;  */

void FUN_10a88a97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a88a984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a88a98c; end: 10a88aa43;  */

void FUN_10a88a98c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a88aaac(param_1,param_2,plVar4[3],plVar4[4]);
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



/* Entry: 10a88aa44; end: 10a88ab4b;  */

void FUN_10a88aa44(undefined **param_1,undefined **param_2,undefined **param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c23e88;
      param_4 = (long *)0x0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
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
  ppuStack_58 = &PTR_DAT_110c23b78;
  ppuStack_50 = param_3;
  plStack_48 = param_4;
  func_0x000109899de4(puVar6,param_2,&ppuStack_50,&ppuStack_58,0,0);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a88ab4c; end: 10a88ac03;  */

void FUN_10a88ab4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a88aaac(param_1,param_2,plVar4[5],plVar4[6]);
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



/* Entry: 10a88ac04; end: 10a88acc3;  */

void FUN_10a88ac04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88acc4(param_1,param_2,plVar4[7],plVar4[8] - plVar4[7] >> 4);
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



/* Entry: 10a88acc4; end: 10a88addb;  */

void FUN_10a88acc4(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    puVar2 = (undefined8 *)(param_3 + 8);
    do {
      func_0x00010a88aaac(&iStack_58,param_2,puVar2[-1],*puVar2);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      puVar2 = puVar2 + 2;
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a88addc; end: 10a88ae9b;  */

void FUN_10a88addc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88ae9c(param_1,param_2,plVar4[10],plVar4[0xb] - plVar4[10] >> 4);
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



/* Entry: 10a88ae9c; end: 10a88afaf;  */

void FUN_10a88ae9c(undefined4 *param_1,long *param_2,long param_3,long param_4)

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
      func_0x00010a5cc6a4(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x10;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a88afb0; end: 10a88b143;  */

void FUN_10a88afb0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = plVar4[0xd];
  lVar10 = plVar4[0xe];
  lVar8 = lVar10 - lVar5 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar8);
  if (lVar10 != lVar5) {
    lVar10 = 0;
    puVar12 = (undefined8 *)(lVar5 + 8);
    do {
      FUN_10a88b144(&stack0xffffffffffffffa8,param_2,puVar12[-1],*puVar12);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar10,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      puVar12 = puVar12 + 2;
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
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
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar14) {
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
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
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



/* Entry: 10a88b144; end: 10a88b1e3;  */

void FUN_10a88b144(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
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
  ppuStack_38 = &PTR_DAT_110c23c58;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a88b1e4; end: 10a88b2c3;  */

void FUN_10a88b1e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88aa44(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x11];
  plVar1 = (long *)plVar5[0x10];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x97)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x97);
    plVar1 = plVar5 + 0x10;
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



/* Entry: 10a88b2c4; end: 10a88b33f;  */

undefined8 * FUN_10a88b2c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110c24690;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a88b340; end: 10a88b343;  */

void FUN_10a88b340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a88b344; end: 10a88b357;  */

void FUN_10a88b344(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a88b358; end: 10a88b373;  */

void FUN_10a88b358(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a88b374; end: 10a88b3af;  */

long FUN_10a88b374(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c246e0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a88b3b0; end: 10a88b3b3;  */

void FUN_10a88b3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a88b3b4; end: 10a88b49f;  */

void FUN_10a88b3b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88b59c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x48))();
  uVar7 = plVar5[1];
  plVar1 = (long *)*plVar5;
  if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x17);
    plVar1 = plVar5;
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



/* Entry: 10a88b4a0; end: 10a88b59b;  */

void FUN_10a88b4a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a88b604(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 3,&stack0xffffffffffffffa8);
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



/* Entry: 10a88b59c; end: 10a88b66b;  */

void FUN_10a88b59c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
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
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
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
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
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
  FUN_10a88b59c(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar10 = plVar8[0x79];
  plVar1 = (long *)plVar8[0x78];
  if (-1 < (char)*(byte *)((long)plVar8 + 0x3d7)) {
    uVar10 = (ulong)*(byte *)((long)plVar8 + 0x3d7);
    plVar1 = plVar8 + 0x78;
  }
  (**(code **)(*plVar6 + 0x128))(extraout_x8 + 2,plVar6,plVar1,uVar10);
  *extraout_x8 = 6;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar3 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar3 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar3 + uVar11 * 0x10;
          lStack_c8 = lVar9;
          lStack_c0 = lVar9;
          lStack_b8 = lVar9;
          lStack_b0 = lVar15;
          func_0x00010988c1b8(&lStack_c8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a88b66c; end: 10a88b74f;  */

void FUN_10a88b66c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88b59c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x79];
  plVar1 = (long *)plVar5[0x78];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x3d7)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x3d7);
    plVar1 = plVar5 + 0x78;
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



/* Entry: 10a88b750; end: 10a88b84b;  */

void FUN_10a88b750(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a88b604(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 0x78,&stack0xffffffffffffffa8);
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



/* Entry: 10a88b84c; end: 10a88b9bb;  */

void FUN_10a88b84c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x3f0;
  __Znwm();
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (long)&PTR_FUN_110bf8288;
  _bzero(plVar5 + 4,0x3a8);
  *(undefined1 *)(plVar5 + 0x18) = 1;
  plVar5[0x77] = 0;
  plVar5[0x76] = 0;
  *(undefined1 *)(plVar5 + 0x78) = 0;
  plVar5[0x7a] = 0;
  plVar5[0x79] = 0;
  plVar5[0x59] = 0;
  plVar5[0x58] = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x5d] = 0;
  plVar5[0x5c] = 0;
  plVar5[0x5f] = 0;
  plVar5[0x5e] = 0;
  plVar5[0x61] = 0;
  plVar5[0x60] = 0;
  plVar5[99] = 0;
  plVar5[0x62] = 0;
  plVar5[0x65] = 0;
  plVar5[100] = 0;
  plVar5[0x67] = 0;
  plVar5[0x66] = 0;
  plVar5[0x69] = 0;
  plVar5[0x68] = 0;
  plVar5[0x6b] = 0;
  plVar5[0x6a] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_DAT_110c25618;
  plVar5[0x7c] = 0;
  plVar5[0x7b] = 0;
  plVar5[0x7d] = 0;
  ppuStack_48 = &PTR_DAT_110c23f90;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a88b9bc; end: 10a88ba17;  */

long * FUN_10a88b9bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a88ba18(plVar1 + 2);
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



/* Entry: 10a88ba18; end: 10a88ba53;  */

void FUN_10a88ba18(undefined8 *param_1)

{
  FUN_10a8820bc(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a88ba54; end: 10a88bb4f;  */

void FUN_10a88ba54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a86cb78(plVar4,&stack0xffffffffffffffa8);
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



/* Entry: 10a88bb50; end: 10a88bbb7;  */

void FUN_10a88bb50(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  long **pplVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long *plStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c25738;
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
  FUN_10a88bb50(plVar7,param_2);
  FUN_10a88c0cc(param_4);
  if (*(int *)param_3 == 1) {
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
    if ((*(byte *)((long)plVar9 + 0x4ba) & 1) == 0) {
LAB_10a88bd7c:
      ppuVar6 = &PTR_PTR_113305a78;
    }
    else {
      ppuVar6 = &PTR_PTR_113304a80;
    }
    ppuVar10 = ppuVar6;
    FUN_10ae079a0(0,ppuVar6);
LAB_10a88bdec:
    FUN_10ae07cd4(ppuVar10,ppuVar6);
  }
  else {
    func_0x000109898688(plVar7,param_3);
    if (plVar7 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a88c030:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a88c034);
      (*pcVar4)();
    }
    func_0x00010989879c(&plStack_118);
    if ((plStack_118 == (long *)0x0) ||
       (plVar7 = plStack_118, ___dynamic_cast(plStack_118,&PTR_DAT_110b178e0,&PTR_DAT_110c240d0,0),
       plVar7 == (long *)0x0)) {
      pplVar12 = &plStack_128;
    }
    else {
      plStack_120 = plStack_110;
      pplVar12 = &plStack_118;
      plStack_128 = plVar7;
    }
    *pplVar12 = (long *)0x0;
    pplVar12[1] = (long *)0x0;
    plVar7 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar18 = plStack_110 + 1;
      do {
        lVar14 = *plVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_128;
    if (plStack_128 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a88c030;
    }
    if ((*(byte *)((long)plVar9 + 0x4ba) & 1) == 0) goto LAB_10a88bd7c;
    lVar14 = plVar9[0x6f];
    if (((lVar14 != 0) && (*(char *)(lVar14 + 0xa8) != '\x01')) || (plVar9[0x6d] == 0)) {
LAB_10a88bda0:
      func_0x00010ae02ecc(0,*(undefined1 *)(lVar14 + 0xa8));
      func_0x00010ae02ecc();
      ppuVar6 = &PTR_PTR_113305348;
      ppuVar10 = ppuVar6;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      goto LAB_10a88bdec;
    }
    if (*(int *)plVar9[0x3d] != 2) {
      lVar14 = plVar9[0x6f];
      goto LAB_10a88bda0;
    }
    plStack_80 = (long *)0x0;
    uStack_78 = 0;
    plStack_88 = (long *)0x0;
    func_0x000104c58880(&plStack_88,plStack_128[4] - plStack_128[3] >> 4);
    plVar1 = (long *)plVar7[4];
    for (plVar18 = (long *)plVar7[3]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_118 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_118 = (long *)*plStack_118;
        }
        FUN_10a87f360(&plStack_88,&plStack_118);
      }
    }
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    func_0x000104c58880(&lStack_a0,plVar7[7] - plVar7[6] >> 4);
    plVar1 = (long *)plVar7[7];
    for (plVar18 = (long *)plVar7[6]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_118 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_118 = (long *)*plStack_118;
        }
        FUN_10a87f360(&lStack_a0,&plStack_118);
      }
    }
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    func_0x000104c58880(&lStack_b8,plVar7[10] - plVar7[9] >> 4);
    plVar1 = (long *)plVar7[10];
    for (plVar18 = (long *)plVar7[9]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_118 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_118 = (long *)*plStack_118;
        }
        FUN_10a87f360(&lStack_b8,&plStack_118);
      }
    }
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    uStack_c0 = 0;
    func_0x000104c58880(&plStack_d0,plVar7[0xe] - plVar7[0xd] >> 4);
    plVar1 = (long *)plVar7[0xe];
    for (plVar18 = (long *)plVar7[0xd]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_118 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_118 = (long *)*plStack_118;
        }
        FUN_10a87f360(&plStack_d0,&plStack_118);
      }
    }
    plStack_118 = (long *)CONCAT44(plStack_118._4_4_,(int)plVar7[0xc]);
    plStack_110 = plStack_d0;
    uStack_104 = (undefined4)plVar7[0x10];
    uStack_108 = (undefined4)((ulong)((long)plStack_c8 - (long)plStack_d0) >> 3);
    plStack_100 = plStack_88;
    uStack_f8 = (undefined4)((ulong)((long)plStack_80 - (long)plStack_88) >> 3);
    lStack_f0 = lStack_a0;
    uStack_e8 = (undefined4)((ulong)(lStack_98 - lStack_a0) >> 3);
    lStack_e0 = lStack_b8;
    uStack_d8 = (undefined4)((ulong)(lStack_b0 - lStack_b8) >> 3);
    (**(code **)(*(long *)plVar9[0x6d] + 0x120))((long *)plVar9[0x6d],&plStack_118);
    if (plStack_d0 != (long *)0x0) {
      plStack_c8 = plStack_d0;
      __ZdlPv();
    }
    if (lStack_b8 != 0) {
      lStack_b0 = lStack_b8;
      __ZdlPv();
    }
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    if (plStack_88 != (long *)0x0) {
      plStack_80 = plStack_88;
      __ZdlPv();
    }
  }
  plVar7 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar9 = plStack_120 + 1;
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
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar14 = plVar8[0x59];
  uVar11 = lVar14 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar14 + 2];
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  lVar14 = *plVar7;
  lVar17 = plVar8[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar20 = lVar15 >> 4;
  if (uVar20 < uVar11) {
    uVar21 = uVar11 - uVar20;
    lVar19 = plVar8[0x4d];
    if ((ulong)(lVar19 - lVar17 >> 4) < uVar21) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar14 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar21 * 0x10);
          lVar16 = lVar17 + uVar20 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar7 = lVar16;
          plVar8[0x4c] = lVar17 + uVar21 * 0x10;
          plVar8[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar19;
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
    _bzero(lVar17,uVar21 * 0x10);
    plVar8[0x4c] = lVar17 + uVar21 * 0x10;
  }
  else if (uVar11 < uVar20) {
    lVar14 = lVar14 + uVar11 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar8[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar11;
  return;
}



/* Entry: 10a88bbb8; end: 10a88c0cb;  */

void FUN_10a88bbb8(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long **pplVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long *plStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88c0cc(param_5);
  if (*param_4 == 1) {
    plStack_108 = (long *)0x0;
    plStack_100 = (long *)0x0;
    if ((*(byte *)((long)plVar7 + 0x4ba) & 1) == 0) {
LAB_10a88bd7c:
      ppuVar10 = &PTR_PTR_113305a78;
    }
    else {
      ppuVar10 = &PTR_PTR_113304a80;
    }
    ppuVar9 = ppuVar10;
    FUN_10ae079a0(0,ppuVar10);
LAB_10a88bdec:
    FUN_10ae07cd4(ppuVar9,ppuVar10);
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a88c030:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a88c034);
      (*pcVar4)();
    }
    func_0x00010989879c(&plStack_f8);
    if ((plStack_f8 == (long *)0x0) ||
       (plVar8 = plStack_f8, ___dynamic_cast(plStack_f8,&PTR_DAT_110b178e0,&PTR_DAT_110c240d0,0),
       plVar8 == (long *)0x0)) {
      pplVar12 = &plStack_108;
    }
    else {
      plStack_100 = plStack_f0;
      pplVar12 = &plStack_f8;
      plStack_108 = plVar8;
    }
    *pplVar12 = (long *)0x0;
    pplVar12[1] = (long *)0x0;
    plVar8 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      plVar18 = plStack_f0 + 1;
      do {
        lVar14 = *plVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_108;
    if (plStack_108 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a88c030;
    }
    if ((*(byte *)((long)plVar7 + 0x4ba) & 1) == 0) goto LAB_10a88bd7c;
    lVar14 = plVar7[0x6f];
    if (((lVar14 != 0) && (*(char *)(lVar14 + 0xa8) != '\x01')) || (plVar7[0x6d] == 0)) {
LAB_10a88bda0:
      func_0x00010ae02ecc(0,*(undefined1 *)(lVar14 + 0xa8));
      func_0x00010ae02ecc();
      ppuVar10 = &PTR_PTR_113305348;
      ppuVar9 = ppuVar10;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      goto LAB_10a88bdec;
    }
    if (*(int *)plVar7[0x3d] != 2) {
      lVar14 = plVar7[0x6f];
      goto LAB_10a88bda0;
    }
    plStack_60 = (long *)0x0;
    uStack_58 = 0;
    plStack_68 = (long *)0x0;
    func_0x000104c58880(&plStack_68,plStack_108[4] - plStack_108[3] >> 4);
    plVar1 = (long *)plVar8[4];
    for (plVar18 = (long *)plVar8[3]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_f8 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_f8 = (long *)*plStack_f8;
        }
        FUN_10a87f360(&plStack_68,&plStack_f8);
      }
    }
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    func_0x000104c58880(&lStack_80,plVar8[7] - plVar8[6] >> 4);
    plVar1 = (long *)plVar8[7];
    for (plVar18 = (long *)plVar8[6]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_f8 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_f8 = (long *)*plStack_f8;
        }
        FUN_10a87f360(&lStack_80,&plStack_f8);
      }
    }
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    func_0x000104c58880(&lStack_98,plVar8[10] - plVar8[9] >> 4);
    plVar1 = (long *)plVar8[10];
    for (plVar18 = (long *)plVar8[9]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_f8 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_f8 = (long *)*plStack_f8;
        }
        FUN_10a87f360(&lStack_98,&plStack_f8);
      }
    }
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    func_0x000104c58880(&plStack_b0,plVar8[0xe] - plVar8[0xd] >> 4);
    plVar1 = (long *)plVar8[0xe];
    for (plVar18 = (long *)plVar8[0xd]; plVar18 != plVar1; plVar18 = plVar18 + 2) {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        plStack_f8 = (long *)(lVar14 + 0x18);
        if (*(char *)(lVar14 + 0x2f) < '\0') {
          plStack_f8 = (long *)*plStack_f8;
        }
        FUN_10a87f360(&plStack_b0,&plStack_f8);
      }
    }
    plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,(int)plVar8[0xc]);
    plStack_f0 = plStack_b0;
    uStack_e4 = (undefined4)plVar8[0x10];
    uStack_e8 = (undefined4)((ulong)((long)plStack_a8 - (long)plStack_b0) >> 3);
    plStack_e0 = plStack_68;
    uStack_d8 = (undefined4)((ulong)((long)plStack_60 - (long)plStack_68) >> 3);
    lStack_d0 = lStack_80;
    uStack_c8 = (undefined4)((ulong)(lStack_78 - lStack_80) >> 3);
    lStack_c0 = lStack_98;
    uStack_b8 = (undefined4)((ulong)(lStack_90 - lStack_98) >> 3);
    (**(code **)(*(long *)plVar7[0x6d] + 0x120))((long *)plVar7[0x6d],&plStack_f8);
    if (plStack_b0 != (long *)0x0) {
      plStack_a8 = plStack_b0;
      __ZdlPv();
    }
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    if (lStack_80 != 0) {
      lStack_78 = lStack_80;
      __ZdlPv();
    }
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
  }
  plVar7 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar8 = plStack_100 + 1;
    do {
      lVar14 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar14 = plVar6[0x59];
  uVar11 = lVar14 - 1;
  plVar6[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar14 + 2];
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
  lVar14 = *plVar7;
  lVar17 = plVar6[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar20 = lVar15 >> 4;
  if (uVar20 < uVar11) {
    uVar21 = uVar11 - uVar20;
    lVar19 = plVar6[0x4d];
    if ((ulong)(lVar19 - lVar17 >> 4) < uVar21) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar14 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar21 * 0x10);
          lVar16 = lVar17 + uVar20 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar7 = lVar16;
          plVar6[0x4c] = lVar17 + uVar21 * 0x10;
          plVar6[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_88 = lVar14;
          lStack_80 = lVar14;
          lStack_78 = lVar14;
          lStack_70 = lVar19;
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
    _bzero(lVar17,uVar21 * 0x10);
    plVar6[0x4c] = lVar17 + uVar21 * 0x10;
  }
  else if (uVar11 < uVar20) {
    lVar14 = lVar14 + uVar11 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar6[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar11;
  return;
}



/* Entry: 10a88c0cc; end: 10a88c0ef;  */

void FUN_10a88c0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long ***ppplVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  long lVar13;
  long ***ppplVar14;
  long lVar15;
  long ***ppplVar16;
  long **pplStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long lStack_80;
  long ***ppplStack_78;
  ulong in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar6 = (long *)0x1;
  uVar10 = 0;
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
  plVar8 = plVar6;
  FUN_10a88bb50(plVar6,uVar10);
  FUN_10a54642c(param_4);
  func_0x000109898570(&ppplStack_78,plVar6,param_1);
  func_0x000109898518(plVar6,param_1 + 0x10);
  lVar13 = plVar8[0x6f];
  if (((lVar13 == 0) || (*(char *)(lVar13 + 0xa8) == '\x01')) && (plVar8[0x6d] != 0)) {
    if (*(int *)plVar8[0x3d] != 2) {
      lVar13 = plVar8[0x6f];
      goto LAB_10a88c240;
    }
    if (-1 < (long)in_stack_ffffffffffffff98) {
      in_stack_ffffffffffffff90 = in_stack_ffffffffffffff98 >> 0x38;
    }
    func_0x00010ae02f70(0,in_stack_ffffffffffffff90);
    func_0x00010ae02ecc();
    ppuVar11 = &PTR_PTR_1133042e8;
    FUN_10ae079a0();
    func_0x00010ae02f80();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_1133042e8);
    pppplVar2 = (long ****)ppplStack_78;
    if (-1 < (long)in_stack_ffffffffffffff98) {
      pppplVar2 = &ppplStack_78;
    }
    (**(code **)(*(long *)plVar8[0x6d] + 0x40))((long *)plVar8[0x6d],pppplVar2,plVar6);
  }
  else {
LAB_10a88c240:
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar13 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar11 = &PTR_PTR_1133057f0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_1133057f0);
  }
  if ((long)in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(ppplStack_78);
  }
  *extraout_x8 = 0;
  pppplVar2 = (long ****)(plVar7 + 0x4b);
  lVar13 = plVar7[0x59];
  uVar12 = lVar13 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    ppplVar9 = pppplVar2[lVar13 + 2];
    if ((long ***)plVar7[0x5a] == ppplVar9) {
      return;
    }
  }
  else {
    ppplVar9 = *(long ****)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((long ***)plVar7[0x5a] == ppplVar9) {
      return;
    }
  }
  ppplVar3 = *pppplVar2;
  ppplVar14 = (long ***)plVar7[0x4c];
  lVar13 = (long)ppplVar14 - (long)ppplVar3;
  ppplVar16 = (long ***)(lVar13 >> 4);
  if (ppplVar16 < ppplVar9) {
    uVar12 = (long)ppplVar9 - (long)ppplVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)ppplVar14 >> 4) < uVar12) {
      if ((ulong)ppplVar9 >> 0x3c == 0) {
        ppplVar14 = (long ***)(lVar15 - (long)ppplVar3 >> 3);
        if (ppplVar14 <= ppplVar9) {
          ppplVar14 = ppplVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)ppplVar3)) {
          ppplVar14 = (long ***)0xfffffffffffffff;
        }
        ppplStack_78 = (long ***)pppplVar2;
        if ((ulong)ppplVar14 >> 0x3c == 0) {
          lVar5 = (long)ppplVar14 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar12 * 0x10);
          ppplVar16 = (long ***)(lVar1 + (long)ppplVar16 * -0x10);
          _memcpy(ppplVar16,ppplVar3,lVar13);
          *pppplVar2 = ppplVar16;
          plVar7[0x4c] = lVar1 + uVar12 * 0x10;
          plVar7[0x4d] = lVar5 + (long)ppplVar14 * 0x10;
          pplStack_98 = (long **)ppplVar3;
          pplStack_90 = (long **)ppplVar3;
          pplStack_88 = (long **)ppplVar3;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&pplStack_98);
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
    _bzero(ppplVar14,uVar12 * 0x10);
    plVar7[0x4c] = (long)(ppplVar14 + uVar12 * 2);
  }
  else if (ppplVar9 < ppplVar16) {
    while (ppplVar14 != ppplVar3 + (long)ppplVar9 * 2) {
      ppplVar14 = ppplVar14 + -2;
      func_0x00010988c204(ppplVar14);
    }
    plVar7[0x4c] = (long)(ppplVar3 + (long)ppplVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)ppplVar9;
  return;
}



/* Entry: 10a88c0f0; end: 10a88c2fb;  */

void FUN_10a88c0f0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long ***ppplVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  long ***ppplVar12;
  long lVar13;
  long ***ppplVar14;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a54642c(param_5);
  func_0x000109898570(&ppplStack_68,param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  lVar11 = plVar7[0x6f];
  if (((lVar11 == 0) || (*(char *)(lVar11 + 0xa8) == '\x01')) && (plVar7[0x6d] != 0)) {
    if (*(int *)plVar7[0x3d] != 2) {
      lVar11 = plVar7[0x6f];
      goto LAB_10a88c240;
    }
    if (-1 < (long)in_stack_ffffffffffffffa8) {
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    }
    func_0x00010ae02f70(0,in_stack_ffffffffffffffa0);
    func_0x00010ae02ecc();
    ppuVar9 = &PTR_PTR_1133042e8;
    FUN_10ae079a0();
    func_0x00010ae02f80();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133042e8);
    pppplVar2 = (long ****)ppplStack_68;
    if (-1 < (long)in_stack_ffffffffffffffa8) {
      pppplVar2 = &ppplStack_68;
    }
    (**(code **)(*(long *)plVar7[0x6d] + 0x40))((long *)plVar7[0x6d],pppplVar2,param_2);
  }
  else {
LAB_10a88c240:
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar11 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar9 = &PTR_PTR_1133057f0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133057f0);
  }
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(ppplStack_68);
  }
  *param_1 = 0;
  pppplVar2 = (long ****)(plVar6 + 0x4b);
  lVar11 = plVar6[0x59];
  uVar10 = lVar11 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    ppplVar8 = pppplVar2[lVar11 + 2];
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
  ppplVar3 = *pppplVar2;
  ppplVar12 = (long ***)plVar6[0x4c];
  lVar11 = (long)ppplVar12 - (long)ppplVar3;
  ppplVar14 = (long ***)(lVar11 >> 4);
  if (ppplVar14 < ppplVar8) {
    uVar10 = (long)ppplVar8 - (long)ppplVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - (long)ppplVar12 >> 4) < uVar10) {
      if ((ulong)ppplVar8 >> 0x3c == 0) {
        ppplVar12 = (long ***)(lVar13 - (long)ppplVar3 >> 3);
        if (ppplVar12 <= ppplVar8) {
          ppplVar12 = ppplVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - (long)ppplVar3)) {
          ppplVar12 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar2;
        if ((ulong)ppplVar12 >> 0x3c == 0) {
          lVar5 = (long)ppplVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar10 * 0x10);
          ppplVar14 = (long ***)(lVar1 + (long)ppplVar14 * -0x10);
          _memcpy(ppplVar14,ppplVar3,lVar11);
          *pppplVar2 = ppplVar14;
          plVar6[0x4c] = lVar1 + uVar10 * 0x10;
          plVar6[0x4d] = lVar5 + (long)ppplVar12 * 0x10;
          pplStack_88 = (long **)ppplVar3;
          pplStack_80 = (long **)ppplVar3;
          pplStack_78 = (long **)ppplVar3;
          lStack_70 = lVar13;
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
    _bzero(ppplVar12,uVar10 * 0x10);
    plVar6[0x4c] = (long)(ppplVar12 + uVar10 * 2);
  }
  else if (ppplVar8 < ppplVar14) {
    while (ppplVar12 != ppplVar3 + (long)ppplVar8 * 2) {
      ppplVar12 = ppplVar12 + -2;
      func_0x00010988c204(ppplVar12);
    }
    plVar6[0x4c] = (long)(ppplVar3 + (long)ppplVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = (long)ppplVar8;
  return;
}



/* Entry: 10a88c2fc; end: 10a88c41b;  */

void FUN_10a88c2fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *in_stack_ffffffffffffffb0;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a1ceb0c(param_5);
  FUN_10a13a07c(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a86cc9c(plVar6,*in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb0[1]);
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



/* Entry: 10a88c41c; end: 10a88c62f;  */

void FUN_10a88c41c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
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
  undefined8 *in_stack_ffffffffffffffa0;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88c630(param_5);
  FUN_10a13a07c(&stack0xffffffffffffffa0,param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  lVar9 = plVar6[0x6f];
  if (((lVar9 == 0) || (*(char *)(lVar9 + 0xa8) == '\x01')) && (plVar6[0x6d] != 0)) {
    if (*(int *)plVar6[0x3d] != 2) {
      lVar9 = plVar6[0x6f];
      goto LAB_10a88c554;
    }
    func_0x00010ae02f70(0,in_stack_ffffffffffffffa0[1]);
    func_0x00010ae02ecc();
    ppuVar7 = &PTR_PTR_113304318;
    FUN_10ae079a0();
    func_0x00010ae02f80();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304318);
    (**(code **)(*(long *)plVar6[0x6d] + 0x50))
              ((long *)plVar6[0x6d],*in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa0[1],param_2)
    ;
  }
  else {
LAB_10a88c554:
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar9 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar7 = &PTR_PTR_113305ad8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113305ad8);
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar8 = lVar9 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar9;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar9 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar9)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar9,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
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
    lVar9 = lVar9 + uVar8 * 0x10;
    while (lVar13 != lVar9) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a88c630; end: 10a88c653;  */

/* WARNING: Removing unreachable block (ram,0x00010a88c9e4) */
/* WARNING: Removing unreachable block (ram,0x00010a88ced0) */

void FUN_10a88c630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined4 *extraout_x8;
  undefined8 ******ppppppuVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 ****ppppuVar22;
  int iVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  undefined8 ****ppppuVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 ****ppppuVar32;
  undefined8 ****ppppuVar33;
  float fVar34;
  undefined8 uStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 *****pppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 *****pppppuStack_160;
  undefined8 ***pppuStack_158;
  undefined7 uStack_150;
  char cStack_149;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 ***pppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  int iStack_9c;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar7 = (long *)0x2;
  uVar11 = 0;
  FUN_10a052ee0(2,0,param_1);
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
  FUN_10a88bb50(plVar7,uVar11);
  FUN_10a88d0a4(param_4);
  func_0x000109898570(&pppppuStack_160,plVar7,param_1);
  func_0x000109898570(&pppppuStack_178,plVar7,param_1 + 0x10);
  FUN_10a059354(&uStack_190,plVar7,param_1 + 0x20);
  FUN_10a768f5c(&uStack_1a0,plVar7,param_1 + 0x30);
  if ((plVar9[0x6d] == 0) || (*(int *)plVar9[0x3d] != 2)) {
    func_0x00010ae02ecc(0,*(undefined4 *)plVar9[0x3d]);
    ppuVar12 = &PTR_PTR_113304698;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar12,&PTR_PTR_113304698);
  }
  else {
    if (cStack_149 < '\0') {
      func_0x000107c3192c(&pppppuStack_d0,pppppuStack_160,pppuStack_158);
    }
    else {
      pppuStack_c8 = pppuStack_158;
      pppppuStack_d0 = pppppuStack_160;
      pppuStack_c0 = (undefined8 ***)CONCAT17(cStack_149,uStack_150);
    }
    plStack_b0 = plStack_188;
    uStack_b8 = uStack_190;
    if (plStack_188 != (long *)0x0) {
      plVar7 = plStack_188 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuStack_f0 = pppppuStack_160;
    if (-1 < cStack_149) {
      pppppuStack_f0 = &pppppuStack_160;
    }
    uStack_e0 = uStack_170;
    pppppuStack_e8 = pppppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_e0 = (ulong)bStack_161;
      pppppuStack_e8 = &pppppuStack_178;
    }
    uStack_d8 = 1;
    puVar10 = (undefined8 *)0x10;
    __Znwm();
    FUN_10a8a41a8(&ppppuStack_98,plVar9 + 3);
    if ((undefined8 *****)ppppuStack_98 == (undefined8 *****)0x0) {
      ppppppuVar13 = &pppppuStack_130;
    }
    else {
      pppppuStack_130 = (undefined8 *****)ppppuStack_98;
      pppuStack_128 = ppppuStack_90;
      ppppppuVar13 = (undefined8 ******)&ppppuStack_98;
    }
    *ppppppuVar13 = (undefined8 *****)0x0;
    ppppppuVar13[1] = (undefined8 *****)0x0;
    pppuVar17 = pppuStack_128;
    if ((undefined8 ****)pppuStack_128 == (undefined8 ****)0x0) {
      *puVar10 = pppppuStack_130;
      puVar10[1] = 0;
    }
    else {
      ppppuVar1 = (undefined8 ****)(pppuStack_128 + 2);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *puVar10 = pppppuStack_130;
      puVar10[1] = pppuStack_128;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_128);
      ppppuVar1 = (undefined8 ****)(pppuVar17 + 1);
      do {
        pppuVar16 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*pppuVar17)[2])(pppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
      }
    }
    ppppuVar1 = ppppuStack_90;
    if (ppppuStack_90 != (undefined8 ****)0x0) {
      ppppuVar27 = ppppuStack_90 + 1;
      do {
        pppuVar17 = *ppppuVar27;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
        if (bVar4) {
          *ppppuVar27 = (undefined8 ***)((long)pppuVar17 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar17 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuStack_90)[2])(ppppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar1);
      }
    }
    plVar7 = (long *)plVar9[0x6d];
    (**(code **)(*plVar7 + 0x90))(plVar7,&pppppuStack_f0,FUN_10a868240,FUN_10a868058,puVar10);
    func_0x00010ae02ecc(0,plVar7);
    FUN_10ae03140();
    func_0x00010ae02f70();
    ppuVar12 = &PTR_PTR_113304ac0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar12,&PTR_PTR_113304ac0);
    uStack_108 = 0x19;
    uStack_100 = uStack_1a0;
    pppuStack_f8 = pppuStack_198;
    if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_198 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar29 = plVar9[0x75];
    pppuStack_128 = pppuStack_c8;
    pppppuStack_130 = pppppuStack_d0;
    pppuStack_120 = pppuStack_c0;
    plStack_110 = plStack_b0;
    uStack_118 = uStack_b8;
    if (plStack_b0 != (long *)0x0) {
      plVar9 = plStack_b0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_148 = 0x19;
    uStack_140 = uStack_1a0;
    pppuStack_138 = pppuStack_198;
    if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_198 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuVar1 = (undefined8 ****)(lVar29 + 0x168);
    iVar23 = (int)plVar7;
    ppppuVar32 = (undefined8 ****)(long)iVar23;
    ppppuVar33 = *(undefined8 *****)(lVar29 + 0x170);
    ppppuVar27 = (undefined8 ****)pppuStack_198;
    iStack_9c = iVar23;
    if (ppppuVar33 != (undefined8 ****)0x0) {
      uVar14 = (long)ppppuVar33 - 1;
      if (((ulong)ppppuVar33 & uVar14) == 0) {
        ppppuVar27 = (undefined8 ****)(uVar14 & (ulong)ppppuVar32);
      }
      else {
        ppppuVar27 = ppppuVar32;
        if (ppppuVar33 <= ppppuVar32) {
          uVar30 = 0;
          if (ppppuVar33 != (undefined8 ****)0x0) {
            uVar30 = (ulong)ppppuVar32 / (ulong)ppppuVar33;
          }
          ppppuVar27 = (undefined8 ****)((long)ppppuVar32 - uVar30 * (long)ppppuVar33);
        }
      }
      if ((*ppppuVar1)[(long)ppppuVar27] != (undefined8 **)0x0) {
        for (pppppuVar24 = (undefined8 *****)*(*ppppuVar1)[(long)ppppuVar27];
            pppppuVar24 != (undefined8 *****)0x0; pppppuVar24 = (undefined8 *****)*pppppuVar24) {
          ppppuVar18 = pppppuVar24[1];
          if (ppppuVar18 == ppppuVar32) {
            if (*(int *)(pppppuVar24 + 2) == iVar23) goto LAB_10a88cd7c;
          }
          else {
            if (((ulong)ppppuVar33 & uVar14) == 0) {
              ppppuVar18 = (undefined8 ****)((ulong)ppppuVar18 & uVar14);
            }
            else if (ppppuVar33 <= ppppuVar18) {
              uVar30 = 0;
              if (ppppuVar33 != (undefined8 ****)0x0) {
                uVar30 = (ulong)ppppuVar18 / (ulong)ppppuVar33;
              }
              ppppuVar18 = (undefined8 ****)((long)ppppuVar18 - uVar30 * (long)ppppuVar33);
            }
            if (ppppuVar18 != ppppuVar27) break;
          }
        }
      }
    }
    pppppuVar24 = (undefined8 *****)0x40;
    __Znwm();
    ppppuStack_88 = (undefined8 ****)0x1;
    *pppppuVar24 = (undefined8 ****)0x0;
    pppppuVar24[1] = ppppuVar32;
    *(int *)(pppppuVar24 + 2) = iVar23;
    pppppuVar24[4] = (undefined8 ****)0x0;
    pppppuVar24[3] = (undefined8 ****)0x0;
    pppppuVar24[6] = (undefined8 ****)0x0;
    pppppuVar24[5] = (undefined8 ****)0x0;
    pppppuVar24[7] = (undefined8 ****)0x0;
    fVar34 = (float)(*(long *)(lVar29 + 0x180) + 1);
    ppppuStack_98 = pppppuVar24;
    ppppuStack_90 = ppppuVar1;
    if ((ppppuVar33 == (undefined8 ****)0x0) ||
       (*(float *)(lVar29 + 0x188) * (float)ppppuVar33 < fVar34)) {
      uVar14 = 1;
      if ((undefined8 ****)0x2 < ppppuVar33) {
        uVar14 = (ulong)(((ulong)ppppuVar33 & (long)ppppuVar33 - 1U) != 0);
      }
      ppppuVar27 = (undefined8 ****)(uVar14 | (long)ppppuVar33 << 1);
      ppppuVar18 = (undefined8 ****)(long)(fVar34 / *(float *)(lVar29 + 0x188));
      if (ppppuVar27 <= ppppuVar18) {
        ppppuVar27 = ppppuVar18;
      }
      if ((long)ppppuVar27 - 1U == 0) {
        ppppuVar27 = (undefined8 ****)0x2;
      }
      else if (((ulong)ppppuVar27 & (long)ppppuVar27 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        ppppuVar33 = *(undefined8 *****)(lVar29 + 0x170);
      }
      if (ppppuVar33 < ppppuVar27) {
LAB_10a88cb90:
        if ((ulong)ppppuVar27 >> 0x3d != 0) {
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a88cfe0);
          (*pcVar5)();
        }
        pppuVar17 = (undefined8 ***)((long)ppppuVar27 << 3);
        __Znwm();
        pppuVar16 = *ppppuVar1;
        *ppppuVar1 = pppuVar17;
        if (pppuVar16 != (undefined8 ***)0x0) {
          __ZdlPv();
        }
        ppppuVar33 = (undefined8 ****)0x0;
        *(undefined8 *****)(lVar29 + 0x170) = ppppuVar27;
        do {
          (*ppppuVar1)[(long)ppppuVar33] = (undefined8 **)0x0;
          ppppuVar33 = (undefined8 ****)((long)ppppuVar33 + 1);
        } while (ppppuVar27 != ppppuVar33);
        ppuVar19 = *(undefined8 ***)(lVar29 + 0x178);
        ppppuVar33 = ppppuVar27;
        if (ppuVar19 != (undefined8 **)0x0) {
          ppppuVar18 = (undefined8 ****)ppuVar19[1];
          uVar14 = (long)ppppuVar27 - 1;
          if (((ulong)ppppuVar27 & uVar14) == 0) {
            ppppuVar18 = (undefined8 ****)((ulong)ppppuVar18 & uVar14);
          }
          else if (ppppuVar27 <= ppppuVar18) {
            uVar30 = 0;
            if (ppppuVar27 != (undefined8 ****)0x0) {
              uVar30 = (ulong)ppppuVar18 / (ulong)ppppuVar27;
            }
            ppppuVar18 = (undefined8 ****)((long)ppppuVar18 - uVar30 * (long)ppppuVar27);
          }
          (*ppppuVar1)[(long)ppppuVar18] = (undefined8 **)(lVar29 + 0x178);
          ppuVar20 = (undefined8 **)*ppuVar19;
          while (ppuVar20 != (undefined8 **)0x0) {
            ppppuVar22 = (undefined8 ****)ppuVar20[1];
            if (((ulong)ppppuVar27 & uVar14) == 0) {
              ppppuVar22 = (undefined8 ****)((ulong)ppppuVar22 & uVar14);
            }
            else if (ppppuVar27 <= ppppuVar22) {
              uVar30 = 0;
              if (ppppuVar27 != (undefined8 ****)0x0) {
                uVar30 = (ulong)ppppuVar22 / (ulong)ppppuVar27;
              }
              ppppuVar22 = (undefined8 ****)((long)ppppuVar22 - uVar30 * (long)ppppuVar27);
            }
            ppuVar21 = ppuVar20;
            if (ppppuVar22 != ppppuVar18) {
              pppuVar17 = *ppppuVar1;
              if (pppuVar17[(long)ppppuVar22] == (undefined8 **)0x0) {
                pppuVar17[(long)ppppuVar22] = ppuVar19;
                ppppuVar18 = ppppuVar22;
              }
              else {
                *ppuVar19 = *ppuVar20;
                *ppuVar20 = *pppuVar17[(long)ppppuVar22];
                *pppuVar17[(long)ppppuVar22] = ppuVar20;
                ppuVar21 = ppuVar19;
              }
            }
            ppuVar19 = ppuVar21;
            ppuVar20 = (undefined8 **)*ppuVar21;
          }
        }
      }
      else if (ppppuVar27 < ppppuVar33) {
        ppppuVar18 = (undefined8 ****)
                     (long)((float)*(ulong *)(lVar29 + 0x180) / *(float *)(lVar29 + 0x188));
        if ((ppppuVar33 < (undefined8 ****)0x3) ||
           (((ulong)ppppuVar33 & (long)ppppuVar33 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 ****)0x1 < ppppuVar18) {
          ppppuVar18 = (undefined8 ****)(1L << (-LZCOUNT((long)ppppuVar18 - 1) & 0x3fU));
        }
        if (ppppuVar27 <= ppppuVar18) {
          ppppuVar27 = ppppuVar18;
        }
        if (ppppuVar27 < ppppuVar33) {
          if (ppppuVar27 != (undefined8 ****)0x0) goto LAB_10a88cb90;
          pppuVar17 = *ppppuVar1;
          *ppppuVar1 = (undefined8 ***)0x0;
          if (pppuVar17 != (undefined8 ***)0x0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar29 + 0x170) = 0;
          ppppuVar33 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar33 = *(undefined8 *****)(lVar29 + 0x170);
        }
      }
      if (((ulong)ppppuVar33 & (long)ppppuVar33 - 1U) == 0) {
        ppppuVar27 = (undefined8 ****)((long)ppppuVar33 - 1U & (ulong)ppppuVar32);
      }
      else {
        ppppuVar27 = ppppuVar32;
        if (ppppuVar33 <= ppppuVar32) {
          uVar14 = 0;
          if (ppppuVar33 != (undefined8 ****)0x0) {
            uVar14 = (ulong)ppppuVar32 / (ulong)ppppuVar33;
          }
          ppppuVar27 = (undefined8 ****)((long)ppppuVar32 - uVar14 * (long)ppppuVar33);
        }
      }
    }
    pppuVar16 = *ppppuVar1;
    pppuVar17 = (undefined8 ***)pppuVar16[(long)ppppuVar27];
    if (pppuVar17 == (undefined8 ***)0x0) {
      *pppppuVar24 = *(undefined8 *****)(lVar29 + 0x178);
      *(undefined8 ******)(lVar29 + 0x178) = pppppuVar24;
      pppuVar16[(long)ppppuVar27] = (undefined8 **)(lVar29 + 0x178);
      if (*pppppuVar24 != (undefined8 ****)0x0) {
        ppppuVar27 = (undefined8 ****)(*pppppuVar24)[1];
        if (((ulong)ppppuVar33 & (long)ppppuVar33 - 1U) == 0) {
          ppppuVar27 = (undefined8 ****)((ulong)ppppuVar27 & (long)ppppuVar33 - 1U);
        }
        else if (ppppuVar33 <= ppppuVar27) {
          uVar14 = 0;
          if (ppppuVar33 != (undefined8 ****)0x0) {
            uVar14 = (ulong)ppppuVar27 / (ulong)ppppuVar33;
          }
          ppppuVar27 = (undefined8 ****)((long)ppppuVar27 - uVar14 * (long)ppppuVar33);
        }
        pppuVar17 = *ppppuVar1 + (long)ppppuVar27;
        goto LAB_10a88cd6c;
      }
    }
    else {
      *pppppuVar24 = (undefined8 ****)*pppuVar17;
LAB_10a88cd6c:
      *pppuVar17 = pppppuVar24;
    }
    *(long *)(lVar29 + 0x180) = *(long *)(lVar29 + 0x180) + 1;
LAB_10a88cd7c:
    if (*(char *)((long)pppppuVar24 + 0x2f) < '\0') {
      __ZdlPv(pppppuVar24[3]);
    }
    pppppuVar24[4] = (undefined8 ****)pppuStack_128;
    pppppuVar24[3] = pppppuStack_130;
    pppppuVar24[5] = (undefined8 ****)pppuStack_120;
    pppuStack_120 = (undefined8 ***)((ulong)pppuStack_120 & 0xffffffffffffff);
    pppppuStack_130 = (undefined8 *****)((ulong)pppppuStack_130 & 0xffffffffffffff00);
    FUN_10a5afaac(pppppuVar24 + 6,&uStack_118);
    lVar29 = lVar29 + 0x140;
    FUN_10a87f4f0(lVar29,plVar7,&iStack_9c);
    *(undefined4 *)(lVar29 + 0x18) = uStack_148;
    FUN_10a03c06c(lVar29 + 0x20,&uStack_140);
    pppuVar17 = pppuStack_138;
    if ((undefined8 ****)pppuStack_138 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_138 + 1);
      do {
        pppuVar16 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*pppuStack_138)[2])(pppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
      }
    }
    plVar7 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar9 = plStack_110 + 1;
      do {
        lVar29 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((long)pppuStack_120 < 0) {
      __ZdlPv(pppppuStack_130);
    }
    pppuVar17 = pppuStack_f8;
    if ((undefined8 ****)pppuStack_f8 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_f8 + 1);
      do {
        pppuVar16 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
      }
    }
    plVar7 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar9 = plStack_b0 + 1;
      do {
        lVar29 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
    ppppuVar1 = (undefined8 ****)(pppuStack_198 + 1);
    do {
      pppuVar17 = *ppppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar4) {
        *ppppuVar1 = (undefined8 ***)((long)pppuVar17 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppuVar17 == (undefined8 ***)0x0) {
      (*(code *)(*pppuStack_198)[2])(pppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_198);
    }
  }
  if (plStack_188 != (long *)0x0) {
    plVar7 = plStack_188 + 1;
    do {
      lVar29 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  if ((char)bStack_161 < '\0') {
    __ZdlPv(pppppuStack_178);
  }
  if (cStack_149 < '\0') {
    __ZdlPv(pppppuStack_160);
  }
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar29 = plVar8[0x59];
  uVar14 = lVar29 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar7[lVar29 + 2];
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
  pppppuVar24 = (undefined8 *****)*plVar7;
  pppppuVar26 = (undefined8 *****)plVar8[0x4c];
  lVar29 = (long)pppppuVar26 - (long)pppppuVar24;
  uVar30 = lVar29 >> 4;
  if (uVar30 < uVar14) {
    uVar31 = uVar14 - uVar30;
    lVar28 = plVar8[0x4d];
    if ((ulong)(lVar28 - (long)pppppuVar26 >> 4) < uVar31) {
      if (uVar14 >> 0x3c == 0) {
        uVar15 = lVar28 - (long)pppppuVar24 >> 3;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar28 - (long)pppppuVar24)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_78 = plVar7;
        if (uVar15 >> 0x3c == 0) {
          lVar6 = uVar15 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar29;
          _bzero(lVar2,uVar31 * 0x10);
          lVar25 = lVar2 + uVar30 * -0x10;
          _memcpy(lVar25,pppppuVar24,lVar29);
          *plVar7 = lVar25;
          plVar8[0x4c] = lVar2 + uVar31 * 0x10;
          plVar8[0x4d] = lVar6 + uVar15 * 0x10;
          ppppuStack_98 = pppppuVar24;
          ppppuStack_90 = pppppuVar24;
          ppppuStack_88 = pppppuVar24;
          lStack_80 = lVar28;
          func_0x00010988c1b8(&ppppuStack_98);
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
    _bzero(pppppuVar26,uVar31 * 0x10);
    plVar8[0x4c] = (long)(pppppuVar26 + uVar31 * 2);
  }
  else if (uVar14 < uVar30) {
    while (pppppuVar26 != pppppuVar24 + uVar14 * 2) {
      pppppuVar26 = pppppuVar26 + -2;
      func_0x00010988c204(pppppuVar26);
    }
    plVar8[0x4c] = (long)(pppppuVar24 + uVar14 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}



/* Entry: 10a88c654; end: 10a88d0a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a88c9e4) */
/* WARNING: Removing unreachable block (ram,0x00010a88ced0) */

void FUN_10a88c654(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 ******ppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 ****ppppuVar21;
  int iVar22;
  undefined8 *****pppppuVar23;
  long lVar24;
  undefined8 *****pppppuVar25;
  undefined8 ****ppppuVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 ****ppppuVar31;
  undefined8 ****ppppuVar32;
  float fVar33;
  undefined8 uStack_190;
  undefined8 ***pppuStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 *****pppppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 *****pppppuStack_150;
  undefined8 ***pppuStack_148;
  undefined7 uStack_140;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 ***pppuStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  int iStack_8c;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88d0a4(param_5);
  func_0x000109898570(&pppppuStack_150,param_2,param_4);
  func_0x000109898570(&pppppuStack_168,param_2,param_4 + 0x10);
  FUN_10a059354(&uStack_180,param_2,param_4 + 0x20);
  FUN_10a768f5c(&uStack_190,param_2,param_4 + 0x30);
  if ((plVar8[0x6d] == 0) || (*(int *)plVar8[0x3d] != 2)) {
    func_0x00010ae02ecc(0,*(undefined4 *)plVar8[0x3d]);
    ppuVar11 = &PTR_PTR_113304698;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_113304698);
  }
  else {
    if (cStack_139 < '\0') {
      func_0x000107c3192c(&pppppuStack_c0,pppppuStack_150,pppuStack_148);
    }
    else {
      pppuStack_b8 = pppuStack_148;
      pppppuStack_c0 = pppppuStack_150;
      pppuStack_b0 = (undefined8 ***)CONCAT17(cStack_139,uStack_140);
    }
    plStack_a0 = plStack_178;
    uStack_a8 = uStack_180;
    if (plStack_178 != (long *)0x0) {
      plVar10 = plStack_178 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuStack_e0 = pppppuStack_150;
    if (-1 < cStack_139) {
      pppppuStack_e0 = &pppppuStack_150;
    }
    uStack_d0 = uStack_160;
    pppppuStack_d8 = pppppuStack_168;
    if (-1 < (char)bStack_151) {
      uStack_d0 = (ulong)bStack_151;
      pppppuStack_d8 = &pppppuStack_168;
    }
    uStack_c8 = 1;
    puVar9 = (undefined8 *)0x10;
    __Znwm();
    FUN_10a8a41a8(&ppppuStack_88,plVar8 + 3);
    if ((undefined8 *****)ppppuStack_88 == (undefined8 *****)0x0) {
      ppppppuVar12 = &pppppuStack_120;
    }
    else {
      pppppuStack_120 = (undefined8 *****)ppppuStack_88;
      pppuStack_118 = ppppuStack_80;
      ppppppuVar12 = (undefined8 ******)&ppppuStack_88;
    }
    *ppppppuVar12 = (undefined8 *****)0x0;
    ppppppuVar12[1] = (undefined8 *****)0x0;
    pppuVar16 = pppuStack_118;
    if ((undefined8 ****)pppuStack_118 == (undefined8 ****)0x0) {
      *puVar9 = pppppuStack_120;
      puVar9[1] = 0;
    }
    else {
      ppppuVar1 = (undefined8 ****)(pppuStack_118 + 2);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *puVar9 = pppppuStack_120;
      puVar9[1] = pppuStack_118;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_118);
      ppppuVar1 = (undefined8 ****)(pppuVar16 + 1);
      do {
        pppuVar15 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar15 == (undefined8 ***)0x0) {
        (*(code *)(*pppuVar16)[2])(pppuVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
      }
    }
    ppppuVar1 = ppppuStack_80;
    if (ppppuStack_80 != (undefined8 ****)0x0) {
      ppppuVar26 = ppppuStack_80 + 1;
      do {
        pppuVar16 = *ppppuVar26;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar26,0x10);
        if (bVar4) {
          *ppppuVar26 = (undefined8 ***)((long)pppuVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuStack_80)[2])(ppppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar1);
      }
    }
    plVar10 = (long *)plVar8[0x6d];
    (**(code **)(*plVar10 + 0x90))(plVar10,&pppppuStack_e0,FUN_10a868240,FUN_10a868058,puVar9);
    func_0x00010ae02ecc(0,plVar10);
    FUN_10ae03140();
    func_0x00010ae02f70();
    ppuVar11 = &PTR_PTR_113304ac0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_113304ac0);
    uStack_f8 = 0x19;
    uStack_f0 = uStack_190;
    pppuStack_e8 = pppuStack_188;
    if ((undefined8 ****)pppuStack_188 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_188 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar28 = plVar8[0x75];
    pppuStack_118 = pppuStack_b8;
    pppppuStack_120 = pppppuStack_c0;
    pppuStack_110 = pppuStack_b0;
    plStack_100 = plStack_a0;
    uStack_108 = uStack_a8;
    if (plStack_a0 != (long *)0x0) {
      plVar8 = plStack_a0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_138 = 0x19;
    uStack_130 = uStack_190;
    pppuStack_128 = pppuStack_188;
    if ((undefined8 ****)pppuStack_188 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_188 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuVar1 = (undefined8 ****)(lVar28 + 0x168);
    iVar22 = (int)plVar10;
    ppppuVar31 = (undefined8 ****)(long)iVar22;
    ppppuVar32 = *(undefined8 *****)(lVar28 + 0x170);
    ppppuVar26 = (undefined8 ****)pppuStack_188;
    iStack_8c = iVar22;
    if (ppppuVar32 != (undefined8 ****)0x0) {
      uVar13 = (long)ppppuVar32 - 1;
      if (((ulong)ppppuVar32 & uVar13) == 0) {
        ppppuVar26 = (undefined8 ****)(uVar13 & (ulong)ppppuVar31);
      }
      else {
        ppppuVar26 = ppppuVar31;
        if (ppppuVar32 <= ppppuVar31) {
          uVar29 = 0;
          if (ppppuVar32 != (undefined8 ****)0x0) {
            uVar29 = (ulong)ppppuVar31 / (ulong)ppppuVar32;
          }
          ppppuVar26 = (undefined8 ****)((long)ppppuVar31 - uVar29 * (long)ppppuVar32);
        }
      }
      if ((*ppppuVar1)[(long)ppppuVar26] != (undefined8 **)0x0) {
        for (pppppuVar23 = (undefined8 *****)*(*ppppuVar1)[(long)ppppuVar26];
            pppppuVar23 != (undefined8 *****)0x0; pppppuVar23 = (undefined8 *****)*pppppuVar23) {
          ppppuVar17 = pppppuVar23[1];
          if (ppppuVar17 == ppppuVar31) {
            if (*(int *)(pppppuVar23 + 2) == iVar22) goto LAB_10a88cd7c;
          }
          else {
            if (((ulong)ppppuVar32 & uVar13) == 0) {
              ppppuVar17 = (undefined8 ****)((ulong)ppppuVar17 & uVar13);
            }
            else if (ppppuVar32 <= ppppuVar17) {
              uVar29 = 0;
              if (ppppuVar32 != (undefined8 ****)0x0) {
                uVar29 = (ulong)ppppuVar17 / (ulong)ppppuVar32;
              }
              ppppuVar17 = (undefined8 ****)((long)ppppuVar17 - uVar29 * (long)ppppuVar32);
            }
            if (ppppuVar17 != ppppuVar26) break;
          }
        }
      }
    }
    pppppuVar23 = (undefined8 *****)0x40;
    __Znwm();
    ppppuStack_78 = (undefined8 ****)0x1;
    *pppppuVar23 = (undefined8 ****)0x0;
    pppppuVar23[1] = ppppuVar31;
    *(int *)(pppppuVar23 + 2) = iVar22;
    pppppuVar23[4] = (undefined8 ****)0x0;
    pppppuVar23[3] = (undefined8 ****)0x0;
    pppppuVar23[6] = (undefined8 ****)0x0;
    pppppuVar23[5] = (undefined8 ****)0x0;
    pppppuVar23[7] = (undefined8 ****)0x0;
    fVar33 = (float)(*(long *)(lVar28 + 0x180) + 1);
    ppppuStack_88 = pppppuVar23;
    ppppuStack_80 = ppppuVar1;
    if ((ppppuVar32 == (undefined8 ****)0x0) ||
       (*(float *)(lVar28 + 0x188) * (float)ppppuVar32 < fVar33)) {
      uVar13 = 1;
      if ((undefined8 ****)0x2 < ppppuVar32) {
        uVar13 = (ulong)(((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) != 0);
      }
      ppppuVar26 = (undefined8 ****)(uVar13 | (long)ppppuVar32 << 1);
      ppppuVar17 = (undefined8 ****)(long)(fVar33 / *(float *)(lVar28 + 0x188));
      if (ppppuVar26 <= ppppuVar17) {
        ppppuVar26 = ppppuVar17;
      }
      if ((long)ppppuVar26 - 1U == 0) {
        ppppuVar26 = (undefined8 ****)0x2;
      }
      else if (((ulong)ppppuVar26 & (long)ppppuVar26 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        ppppuVar32 = *(undefined8 *****)(lVar28 + 0x170);
      }
      if (ppppuVar32 < ppppuVar26) {
LAB_10a88cb90:
        if ((ulong)ppppuVar26 >> 0x3d != 0) {
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a88cfe0);
          (*pcVar5)();
        }
        pppuVar16 = (undefined8 ***)((long)ppppuVar26 << 3);
        __Znwm();
        pppuVar15 = *ppppuVar1;
        *ppppuVar1 = pppuVar16;
        if (pppuVar15 != (undefined8 ***)0x0) {
          __ZdlPv();
        }
        ppppuVar32 = (undefined8 ****)0x0;
        *(undefined8 *****)(lVar28 + 0x170) = ppppuVar26;
        do {
          (*ppppuVar1)[(long)ppppuVar32] = (undefined8 **)0x0;
          ppppuVar32 = (undefined8 ****)((long)ppppuVar32 + 1);
        } while (ppppuVar26 != ppppuVar32);
        ppuVar18 = *(undefined8 ***)(lVar28 + 0x178);
        ppppuVar32 = ppppuVar26;
        if (ppuVar18 != (undefined8 **)0x0) {
          ppppuVar17 = (undefined8 ****)ppuVar18[1];
          uVar13 = (long)ppppuVar26 - 1;
          if (((ulong)ppppuVar26 & uVar13) == 0) {
            ppppuVar17 = (undefined8 ****)((ulong)ppppuVar17 & uVar13);
          }
          else if (ppppuVar26 <= ppppuVar17) {
            uVar29 = 0;
            if (ppppuVar26 != (undefined8 ****)0x0) {
              uVar29 = (ulong)ppppuVar17 / (ulong)ppppuVar26;
            }
            ppppuVar17 = (undefined8 ****)((long)ppppuVar17 - uVar29 * (long)ppppuVar26);
          }
          (*ppppuVar1)[(long)ppppuVar17] = (undefined8 **)(lVar28 + 0x178);
          ppuVar19 = (undefined8 **)*ppuVar18;
          while (ppuVar19 != (undefined8 **)0x0) {
            ppppuVar21 = (undefined8 ****)ppuVar19[1];
            if (((ulong)ppppuVar26 & uVar13) == 0) {
              ppppuVar21 = (undefined8 ****)((ulong)ppppuVar21 & uVar13);
            }
            else if (ppppuVar26 <= ppppuVar21) {
              uVar29 = 0;
              if (ppppuVar26 != (undefined8 ****)0x0) {
                uVar29 = (ulong)ppppuVar21 / (ulong)ppppuVar26;
              }
              ppppuVar21 = (undefined8 ****)((long)ppppuVar21 - uVar29 * (long)ppppuVar26);
            }
            ppuVar20 = ppuVar19;
            if (ppppuVar21 != ppppuVar17) {
              pppuVar16 = *ppppuVar1;
              if (pppuVar16[(long)ppppuVar21] == (undefined8 **)0x0) {
                pppuVar16[(long)ppppuVar21] = ppuVar18;
                ppppuVar17 = ppppuVar21;
              }
              else {
                *ppuVar18 = *ppuVar19;
                *ppuVar19 = *pppuVar16[(long)ppppuVar21];
                *pppuVar16[(long)ppppuVar21] = ppuVar19;
                ppuVar20 = ppuVar18;
              }
            }
            ppuVar18 = ppuVar20;
            ppuVar19 = (undefined8 **)*ppuVar20;
          }
        }
      }
      else if (ppppuVar26 < ppppuVar32) {
        ppppuVar17 = (undefined8 ****)
                     (long)((float)*(ulong *)(lVar28 + 0x180) / *(float *)(lVar28 + 0x188));
        if ((ppppuVar32 < (undefined8 ****)0x3) ||
           (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 ****)0x1 < ppppuVar17) {
          ppppuVar17 = (undefined8 ****)(1L << (-LZCOUNT((long)ppppuVar17 - 1) & 0x3fU));
        }
        if (ppppuVar26 <= ppppuVar17) {
          ppppuVar26 = ppppuVar17;
        }
        if (ppppuVar26 < ppppuVar32) {
          if (ppppuVar26 != (undefined8 ****)0x0) goto LAB_10a88cb90;
          pppuVar16 = *ppppuVar1;
          *ppppuVar1 = (undefined8 ***)0x0;
          if (pppuVar16 != (undefined8 ***)0x0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar28 + 0x170) = 0;
          ppppuVar32 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar32 = *(undefined8 *****)(lVar28 + 0x170);
        }
      }
      if (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) == 0) {
        ppppuVar26 = (undefined8 ****)((long)ppppuVar32 - 1U & (ulong)ppppuVar31);
      }
      else {
        ppppuVar26 = ppppuVar31;
        if (ppppuVar32 <= ppppuVar31) {
          uVar13 = 0;
          if (ppppuVar32 != (undefined8 ****)0x0) {
            uVar13 = (ulong)ppppuVar31 / (ulong)ppppuVar32;
          }
          ppppuVar26 = (undefined8 ****)((long)ppppuVar31 - uVar13 * (long)ppppuVar32);
        }
      }
    }
    pppuVar15 = *ppppuVar1;
    pppuVar16 = (undefined8 ***)pppuVar15[(long)ppppuVar26];
    if (pppuVar16 == (undefined8 ***)0x0) {
      *pppppuVar23 = *(undefined8 *****)(lVar28 + 0x178);
      *(undefined8 ******)(lVar28 + 0x178) = pppppuVar23;
      pppuVar15[(long)ppppuVar26] = (undefined8 **)(lVar28 + 0x178);
      if (*pppppuVar23 != (undefined8 ****)0x0) {
        ppppuVar26 = (undefined8 ****)(*pppppuVar23)[1];
        if (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) == 0) {
          ppppuVar26 = (undefined8 ****)((ulong)ppppuVar26 & (long)ppppuVar32 - 1U);
        }
        else if (ppppuVar32 <= ppppuVar26) {
          uVar13 = 0;
          if (ppppuVar32 != (undefined8 ****)0x0) {
            uVar13 = (ulong)ppppuVar26 / (ulong)ppppuVar32;
          }
          ppppuVar26 = (undefined8 ****)((long)ppppuVar26 - uVar13 * (long)ppppuVar32);
        }
        pppuVar16 = *ppppuVar1 + (long)ppppuVar26;
        goto LAB_10a88cd6c;
      }
    }
    else {
      *pppppuVar23 = (undefined8 ****)*pppuVar16;
LAB_10a88cd6c:
      *pppuVar16 = pppppuVar23;
    }
    *(long *)(lVar28 + 0x180) = *(long *)(lVar28 + 0x180) + 1;
LAB_10a88cd7c:
    if (*(char *)((long)pppppuVar23 + 0x2f) < '\0') {
      __ZdlPv(pppppuVar23[3]);
    }
    pppppuVar23[4] = (undefined8 ****)pppuStack_118;
    pppppuVar23[3] = pppppuStack_120;
    pppppuVar23[5] = (undefined8 ****)pppuStack_110;
    pppuStack_110 = (undefined8 ***)((ulong)pppuStack_110 & 0xffffffffffffff);
    pppppuStack_120 = (undefined8 *****)((ulong)pppppuStack_120 & 0xffffffffffffff00);
    FUN_10a5afaac(pppppuVar23 + 6,&uStack_108);
    lVar28 = lVar28 + 0x140;
    FUN_10a87f4f0(lVar28,plVar10,&iStack_8c);
    *(undefined4 *)(lVar28 + 0x18) = uStack_138;
    FUN_10a03c06c(lVar28 + 0x20,&uStack_130);
    pppuVar16 = pppuStack_128;
    if ((undefined8 ****)pppuStack_128 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_128 + 1);
      do {
        pppuVar15 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar15 == (undefined8 ***)0x0) {
        (*(code *)(*pppuStack_128)[2])(pppuStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
      }
    }
    plVar8 = plStack_100;
    if (plStack_100 != (long *)0x0) {
      plVar10 = plStack_100 + 1;
      do {
        lVar28 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((long)pppuStack_110 < 0) {
      __ZdlPv(pppppuStack_120);
    }
    pppuVar16 = pppuStack_e8;
    if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
      ppppuVar1 = (undefined8 ****)(pppuStack_e8 + 1);
      do {
        pppuVar15 = *ppppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar15 == (undefined8 ***)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
      }
    }
    plVar8 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar10 = plStack_a0 + 1;
      do {
        lVar28 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((undefined8 ****)pppuStack_188 != (undefined8 ****)0x0) {
    ppppuVar1 = (undefined8 ****)(pppuStack_188 + 1);
    do {
      pppuVar16 = *ppppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
      if (bVar4) {
        *ppppuVar1 = (undefined8 ***)((long)pppuVar16 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppuVar16 == (undefined8 ***)0x0) {
      (*(code *)(*pppuStack_188)[2])(pppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_188);
    }
  }
  if (plStack_178 != (long *)0x0) {
    plVar8 = plStack_178 + 1;
    do {
      lVar28 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
    }
  }
  if ((char)bStack_151 < '\0') {
    __ZdlPv(pppppuStack_168);
  }
  if (cStack_139 < '\0') {
    __ZdlPv(pppppuStack_150);
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar28 = plVar7[0x59];
  uVar13 = lVar28 - 1;
  plVar7[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar8[lVar28 + 2];
    if (plVar7[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar13) {
      return;
    }
  }
  pppppuVar23 = (undefined8 *****)*plVar8;
  pppppuVar25 = (undefined8 *****)plVar7[0x4c];
  lVar28 = (long)pppppuVar25 - (long)pppppuVar23;
  uVar29 = lVar28 >> 4;
  if (uVar29 < uVar13) {
    uVar30 = uVar13 - uVar29;
    lVar27 = plVar7[0x4d];
    if ((ulong)(lVar27 - (long)pppppuVar25 >> 4) < uVar30) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar27 - (long)pppppuVar23 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar27 - (long)pppppuVar23)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar14 >> 0x3c == 0) {
          lVar6 = uVar14 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar28;
          _bzero(lVar2,uVar30 * 0x10);
          lVar24 = lVar2 + uVar29 * -0x10;
          _memcpy(lVar24,pppppuVar23,lVar28);
          *plVar8 = lVar24;
          plVar7[0x4c] = lVar2 + uVar30 * 0x10;
          plVar7[0x4d] = lVar6 + uVar14 * 0x10;
          ppppuStack_88 = pppppuVar23;
          ppppuStack_80 = pppppuVar23;
          ppppuStack_78 = pppppuVar23;
          lStack_70 = lVar27;
          func_0x00010988c1b8(&ppppuStack_88);
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
    _bzero(pppppuVar25,uVar30 * 0x10);
    plVar7[0x4c] = (long)(pppppuVar25 + uVar30 * 2);
  }
  else if (uVar13 < uVar29) {
    while (pppppuVar25 != pppppuVar23 + uVar13 * 2) {
      pppppuVar25 = pppppuVar25 + -2;
      func_0x00010988c204(pppppuVar25);
    }
    plVar7[0x4c] = (long)(pppppuVar23 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar13;
  return;
}



/* Entry: 10a88d0a4; end: 10a88d0c7;  */

void FUN_10a88d0a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar6 = (long *)0x4;
  uVar10 = 0;
  FUN_10a052ee0(4,0,param_1);
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
  FUN_10a88bb50(plVar6,uVar10);
  FUN_10a88d2d0(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar6,param_1);
  func_0x000109898570(&lStack_80,plVar6,param_1 + 0x10);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_1 + 0x20);
  FUN_10a767274(&plStack_90,plVar6,param_1 + 0x30);
  FUN_10a768f5c(auStack_a0,plVar6,param_1 + 0x40);
  FUN_10a86cde0(plVar8,&stack0xffffffffffffff98,&lStack_80,plVar9,&plStack_90,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar13 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar13 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (in_stack_ffffffffffffff90 < 0) {
    __ZdlPv(lStack_80);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar13 = plVar7[0x59];
  uVar11 = lVar13 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar13 + 2];
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
  plVar8 = (long *)*plVar6;
  plVar9 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar9 - (long)plVar8;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar9 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar15 - (long)plVar8 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar8)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar17 * 0x10);
          lVar14 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar14,plVar8,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar12 * 0x10;
          plStack_98 = plVar8;
          plStack_90 = plVar8;
          plStack_88 = plVar8;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&plStack_98);
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
    _bzero(plVar9,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar9 + uVar17 * 2);
  }
  else if (uVar11 < uVar16) {
    while (plVar9 != plVar8 + uVar11 * 2) {
      plVar9 = plVar9 + -2;
      func_0x00010988c204(plVar9);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a88d0c8; end: 10a88d2cf;  */

void FUN_10a88d0c8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
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
  plVar7 = param_2;
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88d2d0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  plVar8 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a767274(&plStack_80,param_2,param_4 + 0x30);
  FUN_10a768f5c(auStack_90,param_2,param_4 + 0x40);
  FUN_10a86cde0(plVar7,&stack0xffffffffffffffa8,&lStack_70,plVar8,&plStack_80,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
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
  plVar8 = (long *)*plVar7;
  plVar13 = (long *)plVar6[0x4c];
  lVar11 = (long)plVar13 - (long)plVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)plVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,plVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar1 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar8;
          plStack_80 = plVar8;
          plStack_78 = plVar8;
          lStack_70 = lVar14;
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
    _bzero(plVar13,uVar16 * 0x10);
    plVar6[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (plVar13 != plVar8 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar6[0x4c] = (long)(plVar8 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a88d2d0; end: 10a88d2f3;  */

void FUN_10a88d2d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar6 = (long *)0x5;
  uVar11 = 0;
  FUN_10a052ee0(5,0,param_1);
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
  FUN_10a88bb50(plVar6,uVar11);
  FUN_10a88d51c(param_4);
  func_0x000109898570(&plStack_78,plVar6,param_1);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_1 + 0x10);
  plVar10 = plVar6;
  func_0x000109898518(plVar6,param_1 + 0x20);
  func_0x000109898570(&plStack_90,plVar6,param_1 + 0x30);
  FUN_10a769b0c(auStack_a0,plVar6,param_1 + 0x40);
  FUN_10a768f5c(auStack_b0,plVar6,param_1 + 0x50);
  FUN_10a86e5a4(plVar8,&plStack_78,plVar9,plVar10,&plStack_90,auStack_a0,auStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar14 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar14 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(plStack_90);
  }
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(plStack_78);
  }
  *extraout_x8 = 0;
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
  plVar8 = (long *)*plVar6;
  plVar9 = (long *)plVar7[0x4c];
  lVar14 = (long)plVar9 - (long)plVar8;
  uVar17 = lVar14 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - (long)plVar9 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar16 - (long)plVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar14;
          _bzero(lVar1,uVar18 * 0x10);
          lVar15 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar15,plVar8,lVar14);
          *plVar6 = lVar15;
          plVar7[0x4c] = lVar1 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar13 * 0x10;
          plStack_98 = plVar8;
          plStack_90 = plVar8;
          plStack_88 = plVar8;
          uStack_80 = lVar16;
          func_0x00010988c1b8(&plStack_98);
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
    _bzero(plVar9,uVar18 * 0x10);
    plVar7[0x4c] = (long)(plVar9 + uVar18 * 2);
  }
  else if (uVar12 < uVar17) {
    while (plVar9 != plVar8 + uVar12 * 2) {
      plVar9 = plVar9 + -2;
      func_0x00010988c204(plVar9);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar12 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a88d2f4; end: 10a88d51b;  */

void FUN_10a88d2f4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88d51c(param_5);
  func_0x000109898570(&plStack_68,param_2,param_4);
  plVar8 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  func_0x000109898570(&plStack_80,param_2,param_4 + 0x30);
  FUN_10a769b0c(auStack_90,param_2,param_4 + 0x40);
  FUN_10a768f5c(auStack_a0,param_2,param_4 + 0x50);
  FUN_10a86e5a4(plVar7,&plStack_68,plVar8,plVar9,&plStack_80,auStack_90,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar7 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(plStack_80);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar10 = lVar12 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar12 + 2];
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
  plVar8 = (long *)*plVar7;
  plVar9 = (long *)plVar6[0x4c];
  lVar12 = (long)plVar9 - (long)plVar8;
  uVar15 = lVar12 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - (long)plVar9 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar14 - (long)plVar8 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar8)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar12;
          _bzero(lVar1,uVar16 * 0x10);
          lVar13 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar13,plVar8,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar1 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar11 * 0x10;
          plStack_88 = plVar8;
          plStack_80 = plVar8;
          plStack_78 = plVar8;
          uStack_70 = lVar14;
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
    _bzero(plVar9,uVar16 * 0x10);
    plVar6[0x4c] = (long)(plVar9 + uVar16 * 2);
  }
  else if (uVar10 < uVar15) {
    while (plVar9 != plVar8 + uVar10 * 2) {
      plVar9 = plVar9 + -2;
      func_0x00010988c204(plVar9);
    }
    plVar6[0x4c] = (long)(plVar8 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a88d51c; end: 10a88d53f;  */

/* WARNING: Possible PIC construction at 0x00010a88d80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a88d810) */
/* WARNING: Removing unreachable block (ram,0x00010a88d824) */
/* WARNING: Removing unreachable block (ram,0x00010a88d864) */
/* WARNING: Removing unreachable block (ram,0x00010a88d908) */
/* WARNING: Removing unreachable block (ram,0x00010a88d874) */
/* WARNING: Removing unreachable block (ram,0x00010a88d888) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8c0) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8c4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8cc) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8d4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8d8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8f0) */
/* WARNING: Removing unreachable block (ram,0x00010a88d914) */
/* WARNING: Removing unreachable block (ram,0x00010a88d85c) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8f8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d820) */

void FUN_10a88d51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  long *unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  ulong uVar19;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar21;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 *apuStack_d0 [2];
  char cStack_b9;
  undefined1 *apuStack_b8 [2];
  char cStack_a1;
  undefined1 auStack_a0 [64];
  byte bStack_60;
  long lStack_58;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 6) {
    return;
  }
  puVar5 = &stack0xfffffffffffffff0;
  plVar7 = (long *)0x6;
  uVar11 = 0;
  FUN_10a052ee0(6,0,param_1);
  pcStack_18 = FUN_10a88d540;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  plVar9 = plVar7;
  FUN_10a88bb50(plVar7,uVar11);
  FUN_10a88d818(param_4);
  func_0x000109898570(apuStack_b8,plVar7,param_1);
  func_0x000109898570(apuStack_d0,plVar7,param_1 + 0x10);
  FUN_10a7694c4(auStack_a0,plVar7,param_1 + 0x20);
  FUN_10a88d83c(auStack_e0,plVar7,param_1 + 0x30);
  FUN_10a05dcbc(auStack_f0,plVar7,param_1 + 0x40);
  FUN_10a768f5c(auStack_100,plVar7,param_1 + 0x50);
  FUN_10a86f8b4(plVar9,apuStack_b8,apuStack_d0,auStack_a0,auStack_e0,auStack_f0,auStack_100);
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  if (10 < (ulong)bStack_60) {
LAB_10a88d7d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a88d7d4);
    (*pcVar4)();
  }
  puVar10 = auStack_a0;
  (*(code *)(&PTR_FUN_110c17158)[bStack_60])();
  if (cStack_b9 < '\0') {
    puVar10 = apuStack_d0[0];
    __ZdlPv();
  }
  if (cStack_a1 < '\0') {
    puVar10 = apuStack_b8[0];
    __ZdlPv();
  }
  *extraout_x8 = 0;
  ppppuVar21 = (undefined8 ****)pppuStack_20;
  pcVar4 = pcStack_18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a0803a0(auStack_100);
    func_0x00010a042b54(auStack_f0);
    FUN_10a76b8ac(auStack_e0);
    if (10 < (ulong)bStack_60) goto LAB_10a88d7d0;
    (*(code *)(&PTR_FUN_110c17158)[bStack_60])(auStack_a0);
    if (cStack_b9 < '\0') {
      __ZdlPv(apuStack_d0[0]);
    }
    if (cStack_a1 < '\0') {
      __ZdlPv(apuStack_b8[0]);
    }
    puVar5 = auStack_100;
    unaff_x19 = plVar8;
    unaff_x20 = puVar10;
    unaff_x21 = plStack_d8;
    unaff_x22 = plVar7;
    unaff_x23 = plVar9;
    unaff_x24 = param_4;
    ppppuVar21 = &pppuStack_20;
    pcVar4 = (code *)0x10a88d810;
  }
  plVar7 = plVar8 + 0x4b;
  lVar14 = plVar8[0x59];
  uVar12 = lVar14 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar14 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(long **)(puVar5 + -0x38) = unaff_x23;
  *(long **)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
  *(long **)(puVar5 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar21;
  *(code **)(puVar5 + -8) = pcVar4;
  lVar14 = *plVar7;
  lVar17 = plVar8[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar20 = uVar12 - uVar19;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar14 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        *(long **)(puVar5 + -0x68) = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar6 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar6 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar7 = lVar16;
          plVar8[0x4c] = lVar17 + uVar20 * 0x10;
          plVar8[0x4d] = lVar6 + uVar13 * 0x10;
          *(long *)(puVar5 + -0x78) = lVar14;
          *(long *)(puVar5 + -0x70) = lVar18;
          *(long *)(puVar5 + -0x88) = lVar14;
          *(long *)(puVar5 + -0x80) = lVar14;
          func_0x00010988c1b8(puVar5 + -0x88);
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
    _bzero(lVar17,uVar20 * 0x10);
    plVar8[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar14 = lVar14 + uVar12 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar8[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a88d540; end: 10a88d817;  */

/* WARNING: Possible PIC construction at 0x00010a88d80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a88d810) */
/* WARNING: Removing unreachable block (ram,0x00010a88d824) */
/* WARNING: Removing unreachable block (ram,0x00010a88d864) */
/* WARNING: Removing unreachable block (ram,0x00010a88d908) */
/* WARNING: Removing unreachable block (ram,0x00010a88d874) */
/* WARNING: Removing unreachable block (ram,0x00010a88d888) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8c0) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8c4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8cc) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8d4) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8d8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8f0) */
/* WARNING: Removing unreachable block (ram,0x00010a88d914) */
/* WARNING: Removing unreachable block (ram,0x00010a88d85c) */
/* WARNING: Removing unreachable block (ram,0x00010a88d8f8) */
/* WARNING: Removing unreachable block (ram,0x00010a88d820) */

void FUN_10a88d540(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar13;
  long *unaff_x22;
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
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined1 *apuStack_c0 [2];
  char cStack_a9;
  undefined1 *apuStack_a8 [2];
  char cStack_91;
  undefined1 auStack_90 [64];
  byte bStack_50;
  long lStack_48;
  
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88d818(param_5);
  func_0x000109898570(apuStack_a8,param_2,param_4);
  func_0x000109898570(apuStack_c0,param_2,param_4 + 0x10);
  FUN_10a7694c4(auStack_90,param_2,param_4 + 0x20);
  FUN_10a88d83c(auStack_d0,param_2,param_4 + 0x30);
  FUN_10a05dcbc(auStack_e0,param_2,param_4 + 0x40);
  FUN_10a768f5c(auStack_f0,param_2,param_4 + 0x50);
  FUN_10a86f8b4(plVar8,apuStack_a8,apuStack_c0,auStack_90,auStack_d0,auStack_e0,auStack_f0);
  if (plStack_e8 != (long *)0x0) {
    plVar2 = plStack_e8 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (10 < (ulong)bStack_50) {
LAB_10a88d7d0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a88d7d4);
    (*pcVar5)();
  }
  puVar9 = auStack_90;
  (*(code *)(&PTR_FUN_110c17158)[bStack_50])();
  if (cStack_a9 < '\0') {
    puVar9 = apuStack_c0[0];
    __ZdlPv();
  }
  if (cStack_91 < '\0') {
    puVar9 = apuStack_a8[0];
    __ZdlPv();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a0803a0(auStack_f0);
    func_0x00010a042b54(auStack_e0);
    FUN_10a76b8ac(auStack_d0);
    if (10 < (ulong)bStack_50) goto LAB_10a88d7d0;
    (*(code *)(&PTR_FUN_110c17158)[bStack_50])(auStack_90);
    if (cStack_a9 < '\0') {
      __ZdlPv(apuStack_c0[0]);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(apuStack_a8[0]);
    }
    unaff_x30 = 0x10a88d810;
    register0x00000008 = (BADSPACEBASE *)auStack_f0;
    unaff_x19 = plVar7;
    unaff_x20 = puVar9;
    unaff_x21 = plStack_c8;
    unaff_x22 = param_2;
    unaff_x23 = plVar8;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  plVar8 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar8[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar12 = *plVar8;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar8;
        if (uVar11 >> 0x3c == 0) {
          lVar6 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar6 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar8 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar6 + uVar11 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar12;
          *(long *)((long)register0x00000008 + -0x70) = lVar16;
          *(long *)((long)register0x00000008 + -0x88) = lVar12;
          *(long *)((long)register0x00000008 + -0x80) = lVar12;
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
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a88d818; end: 10a88d83b;  */

void FUN_10a88d818(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 6) {
    return;
  }
  plVar4 = (long *)0x6;
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
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c24060,0), lStack_40 != 0)) {
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a88d924);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a88d83c; end: 10a88d937;  */

void FUN_10a88d83c(long *param_1,long param_2,int *param_3)

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
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c24060,0), lStack_30 != 0)) {
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a88d924);
  (*pcVar3)();
}



/* Entry: 10a88d938; end: 10a88db3f;  */

void FUN_10a88d938(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
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
  plVar7 = param_2;
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88db40(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  plVar8 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a05dcbc(&plStack_80,param_2,param_4 + 0x30);
  FUN_10a768f5c(auStack_90,param_2,param_4 + 0x40);
  FUN_10a871854(plVar7,&stack0xffffffffffffffa8,&lStack_70,plVar8,&plStack_80,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
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
  plVar8 = (long *)*plVar7;
  plVar13 = (long *)plVar6[0x4c];
  lVar11 = (long)plVar13 - (long)plVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)plVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,plVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar1 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar8;
          plStack_80 = plVar8;
          plStack_78 = plVar8;
          lStack_70 = lVar14;
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
    _bzero(plVar13,uVar16 * 0x10);
    plVar6[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (plVar13 != plVar8 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar6[0x4c] = (long)(plVar8 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a88db40; end: 10a88db63;  */

void FUN_10a88db40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar5 = (long *)0x5;
  uVar9 = 0;
  FUN_10a052ee0(5,0,param_1);
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
  FUN_10a88bb50(plVar5,uVar9);
  FUN_10a88dd30(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar5,param_1);
  plVar8 = plVar5;
  func_0x000109898518(plVar5,param_1 + 0x10);
  FUN_10a76a2f8(&plStack_78,plVar5,param_1 + 0x20);
  FUN_10a768f5c(&lStack_88,plVar5,param_1 + 0x30);
  FUN_10a86d89c(plVar7,&stack0xffffffffffffff98,plVar8,&plStack_78,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (in_stack_ffffffffffffff90 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff90 + 1;
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
      (**(code **)(*in_stack_ffffffffffffff90 + 0x10))(in_stack_ffffffffffffff90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff90);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
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
          plStack_80 = (long *)lVar16;
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



/* Entry: 10a88db64; end: 10a88dd2f;  */

void FUN_10a88db64(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
  long *plStack_70;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88dd30(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  FUN_10a76a2f8(&plStack_68,param_2,param_4 + 0x20);
  FUN_10a768f5c(&lStack_78,param_2,param_4 + 0x30);
  FUN_10a86d89c(plVar6,&stack0xffffffffffffffa8,plVar7,&plStack_68,&lStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
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
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          plStack_70 = (long *)lVar14;
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



/* Entry: 10a88dd30; end: 10a88dd53;  */

void FUN_10a88dd30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar5 = (long *)0x4;
  uVar9 = 0;
  FUN_10a052ee0(4,0,param_1);
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
  FUN_10a88bb50(plVar5,uVar9);
  FUN_10a88df1c(param_4);
  plVar8 = plVar5;
  func_0x000109898518(plVar5,param_1);
  func_0x000109898570(&stack0xffffffffffffff98,plVar5,param_1 + 0x10);
  FUN_10a76a8e0(&plStack_78,plVar5,param_1 + 0x20);
  FUN_10a768f5c(&lStack_88,plVar5,param_1 + 0x30);
  FUN_10a86f054(plVar7,plVar8,&stack0xffffffffffffff98,&plStack_78,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (in_stack_ffffffffffffff90 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff90 + 1;
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
      (**(code **)(*in_stack_ffffffffffffff90 + 0x10))(in_stack_ffffffffffffff90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff90);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
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
          plStack_80 = (long *)lVar16;
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



/* Entry: 10a88dd54; end: 10a88df1b;  */

void FUN_10a88dd54(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
  long *plStack_70;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88df1c(param_5);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4 + 0x10);
  FUN_10a76a8e0(&plStack_68,param_2,param_4 + 0x20);
  FUN_10a768f5c(&lStack_78,param_2,param_4 + 0x30);
  FUN_10a86f054(plVar6,plVar7,&stack0xffffffffffffffa8,&plStack_68,&lStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
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
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          plStack_70 = (long *)lVar14;
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



/* Entry: 10a88df1c; end: 10a88df3f;  */

/* WARNING: Possible PIC construction at 0x00010a88e1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a88e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010a88e1e8) */
/* WARNING: Removing unreachable block (ram,0x00010a88e370) */
/* WARNING: Removing unreachable block (ram,0x00010a88e248) */
/* WARNING: Removing unreachable block (ram,0x00010a88e260) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2d8) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2f0) */
/* WARNING: Removing unreachable block (ram,0x00010a88e308) */
/* WARNING: Removing unreachable block (ram,0x00010a88e310) */
/* WARNING: Removing unreachable block (ram,0x00010a88e314) */
/* WARNING: Removing unreachable block (ram,0x00010a88e31c) */
/* WARNING: Removing unreachable block (ram,0x00010a88e324) */
/* WARNING: Removing unreachable block (ram,0x00010a88e328) */
/* WARNING: Removing unreachable block (ram,0x00010a88e340) */
/* WARNING: Removing unreachable block (ram,0x00010a88e348) */
/* WARNING: Removing unreachable block (ram,0x00010a88e350) */
/* WARNING: Removing unreachable block (ram,0x00010a88e1e4) */

void FUN_10a88df1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  long *unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  ulong uVar19;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar21;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  undefined1 *apuStack_b8 [2];
  char cStack_a1;
  undefined1 auStack_a0 [64];
  byte bStack_60;
  long lStack_58;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 4) {
    return;
  }
  puVar5 = &stack0xfffffffffffffff0;
  plVar7 = (long *)0x4;
  uVar11 = 0;
  FUN_10a052ee0(4,0,param_1);
  pcStack_18 = FUN_10a88df40;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  plVar9 = plVar7;
  FUN_10a88bb50(plVar7,uVar11);
  FUN_10a88e1dc(param_4);
  func_0x000109898570(apuStack_b8,plVar7,param_1);
  FUN_10a7694c4(auStack_a0,plVar7,param_1 + 0x10);
  FUN_10a88d83c(auStack_c8,plVar7,param_1 + 0x20);
  FUN_10a05dcbc(auStack_d8,plVar7,param_1 + 0x30);
  FUN_10a768f5c(auStack_e8,plVar7,param_1 + 0x40);
  FUN_10a8703e0(plVar9,apuStack_b8,auStack_a0,auStack_c8,auStack_d8,auStack_e8);
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if (plStack_d0 != (long *)0x0) {
    plVar1 = plStack_d0 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  if (10 < (ulong)bStack_60) {
LAB_10a88e1ac:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a88e1b0);
    (*pcVar4)();
  }
  puVar10 = auStack_a0;
  (*(code *)(&PTR_FUN_110c17158)[bStack_60])();
  if (cStack_a1 < '\0') {
    puVar10 = apuStack_b8[0];
    __ZdlPv();
  }
  *extraout_x8 = 0;
  ppppuVar21 = (undefined8 ****)pppuStack_20;
  pcVar4 = pcStack_18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a0803a0(auStack_e8);
    func_0x00010a042b54(auStack_d8);
    FUN_10a76b8ac(auStack_c8);
    if (10 < (ulong)bStack_60) goto LAB_10a88e1ac;
    (*(code *)(&PTR_FUN_110c17158)[bStack_60])(auStack_a0);
    if (cStack_a1 < '\0') {
      __ZdlPv(apuStack_b8[0]);
    }
    puVar5 = auStack_f0;
    unaff_x19 = plVar8;
    unaff_x20 = puVar10;
    unaff_x21 = plStack_c0;
    unaff_x22 = plVar7;
    unaff_x23 = plVar9;
    unaff_x24 = param_4;
    ppppuVar21 = &pppuStack_20;
    pcVar4 = (code *)0x10a88e1d4;
  }
  plVar7 = plVar8 + 0x4b;
  lVar14 = plVar8[0x59];
  uVar12 = lVar14 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar14 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(long **)(puVar5 + -0x38) = unaff_x23;
  *(long **)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
  *(long **)(puVar5 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar21;
  *(code **)(puVar5 + -8) = pcVar4;
  lVar14 = *plVar7;
  lVar17 = plVar8[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar20 = uVar12 - uVar19;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar14 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar14)) {
          uVar13 = 0xfffffffffffffff;
        }
        *(long **)(puVar5 + -0x68) = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar6 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar6 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar7 = lVar16;
          plVar8[0x4c] = lVar17 + uVar20 * 0x10;
          plVar8[0x4d] = lVar6 + uVar13 * 0x10;
          *(long *)(puVar5 + -0x78) = lVar14;
          *(long *)(puVar5 + -0x70) = lVar18;
          *(long *)(puVar5 + -0x88) = lVar14;
          *(long *)(puVar5 + -0x80) = lVar14;
          func_0x00010988c1b8(puVar5 + -0x88);
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
    _bzero(lVar17,uVar20 * 0x10);
    plVar8[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar14 = lVar14 + uVar12 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar8[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a88df40; end: 10a88e1db;  */

/* WARNING: Possible PIC construction at 0x00010a88e1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a88e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010a88e1e8) */
/* WARNING: Removing unreachable block (ram,0x00010a88e370) */
/* WARNING: Removing unreachable block (ram,0x00010a88e248) */
/* WARNING: Removing unreachable block (ram,0x00010a88e260) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2d8) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a88e2f0) */
/* WARNING: Removing unreachable block (ram,0x00010a88e308) */
/* WARNING: Removing unreachable block (ram,0x00010a88e310) */
/* WARNING: Removing unreachable block (ram,0x00010a88e314) */
/* WARNING: Removing unreachable block (ram,0x00010a88e31c) */
/* WARNING: Removing unreachable block (ram,0x00010a88e324) */
/* WARNING: Removing unreachable block (ram,0x00010a88e328) */
/* WARNING: Removing unreachable block (ram,0x00010a88e340) */
/* WARNING: Removing unreachable block (ram,0x00010a88e348) */
/* WARNING: Removing unreachable block (ram,0x00010a88e350) */
/* WARNING: Removing unreachable block (ram,0x00010a88e1e4) */

void FUN_10a88df40(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar13;
  long *unaff_x22;
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
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined1 *apuStack_a8 [2];
  char cStack_91;
  undefined1 auStack_90 [64];
  byte bStack_50;
  long lStack_48;
  
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88e1dc(param_5);
  func_0x000109898570(apuStack_a8,param_2,param_4);
  FUN_10a7694c4(auStack_90,param_2,param_4 + 0x10);
  FUN_10a88d83c(auStack_b8,param_2,param_4 + 0x20);
  FUN_10a05dcbc(auStack_c8,param_2,param_4 + 0x30);
  FUN_10a768f5c(auStack_d8,param_2,param_4 + 0x40);
  FUN_10a8703e0(plVar8,apuStack_a8,auStack_90,auStack_b8,auStack_c8,auStack_d8);
  if (plStack_d0 != (long *)0x0) {
    plVar2 = plStack_d0 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    plVar2 = plStack_c0 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar2 = plStack_b0 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
    }
  }
  if (10 < (ulong)bStack_50) {
LAB_10a88e1ac:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a88e1b0);
    (*pcVar5)();
  }
  puVar9 = auStack_90;
  (*(code *)(&PTR_FUN_110c17158)[bStack_50])();
  if (cStack_91 < '\0') {
    puVar9 = apuStack_a8[0];
    __ZdlPv();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a0803a0(auStack_d8);
    func_0x00010a042b54(auStack_c8);
    FUN_10a76b8ac(auStack_b8);
    if (10 < (ulong)bStack_50) goto LAB_10a88e1ac;
    (*(code *)(&PTR_FUN_110c17158)[bStack_50])(auStack_90);
    if (cStack_91 < '\0') {
      __ZdlPv(apuStack_a8[0]);
    }
    unaff_x30 = 0x10a88e1d4;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = plVar7;
    unaff_x20 = puVar9;
    unaff_x21 = plStack_b0;
    unaff_x22 = param_2;
    unaff_x23 = plVar8;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  plVar8 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar8[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar12 = *plVar8;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar8;
        if (uVar11 >> 0x3c == 0) {
          lVar6 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar6 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar8 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar6 + uVar11 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar12;
          *(long *)((long)register0x00000008 + -0x70) = lVar16;
          *(long *)((long)register0x00000008 + -0x88) = lVar12;
          *(long *)((long)register0x00000008 + -0x80) = lVar12;
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
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a88e1dc; end: 10a88e1ff;  */

void FUN_10a88e1dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar5 = (long *)0x5;
  uVar9 = 0;
  FUN_10a052ee0(5,0,param_1);
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
  FUN_10a88bb50(plVar5,uVar9);
  FUN_10a88e3cc(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar5,param_1);
  plVar8 = plVar5;
  func_0x000109898518(plVar5,param_1 + 0x10);
  FUN_10a05dcbc(&plStack_78,plVar5,param_1 + 0x20);
  FUN_10a768f5c(&lStack_88,plVar5,param_1 + 0x30);
  FUN_10a871eac(plVar7,&stack0xffffffffffffff98,plVar8,&plStack_78,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (in_stack_ffffffffffffff90 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff90 + 1;
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
      (**(code **)(*in_stack_ffffffffffffff90 + 0x10))(in_stack_ffffffffffffff90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff90);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
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
          plStack_80 = (long *)lVar16;
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



/* Entry: 10a88e200; end: 10a88e3cb;  */

void FUN_10a88e200(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
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
  long *plStack_70;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88e3cc(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  FUN_10a05dcbc(&plStack_68,param_2,param_4 + 0x20);
  FUN_10a768f5c(&lStack_78,param_2,param_4 + 0x30);
  FUN_10a871eac(plVar6,&stack0xffffffffffffffa8,plVar7,&plStack_68,&lStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
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
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          plStack_70 = (long *)lVar14;
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



/* Entry: 10a88e3cc; end: 10a88e3ef;  */

void FUN_10a88e3cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar6 = (long *)0x4;
  uVar9 = 0;
  FUN_10a052ee0(4,0,param_1);
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
  FUN_10a88bb50(plVar6,uVar9);
  FUN_10a88e6e4(param_4);
  func_0x000109898570(&plStack_78,plVar6,param_1);
  func_0x000109898570(&plStack_90,plVar6,param_1 + 0x10);
  FUN_10a2e79e4(&uStack_a0,plVar6,param_1 + 0x20);
  FUN_10a88d83c(auStack_b0,plVar6,param_1 + 0x30);
  FUN_10a05dcbc(auStack_c0,plVar6,param_1 + 0x40);
  FUN_10a768f5c(auStack_d0,plVar6,param_1 + 0x50);
  plVar6 = plStack_98;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  FUN_10a870f7c(plVar8,&plStack_78,&plStack_90,&stack0xffffffffffffffa0,auStack_b0,auStack_c0,
                auStack_d0);
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar6 = plStack_c8 + 1;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar6 = plStack_b8 + 1;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(plStack_90);
  }
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(plStack_78);
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  plVar8 = (long *)*plVar6;
  plVar14 = (long *)plVar7[0x4c];
  lVar12 = (long)plVar14 - (long)plVar8;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - (long)plVar8 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar8)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar12;
          _bzero(lVar1,uVar17 * 0x10);
          lVar13 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar13,plVar8,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar11 * 0x10;
          plStack_98 = plVar8;
          plStack_90 = plVar8;
          plStack_88 = plVar8;
          uStack_80 = lVar15;
          func_0x00010988c1b8(&plStack_98);
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
    _bzero(plVar14,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar14 + uVar17 * 2);
  }
  else if (uVar10 < uVar16) {
    while (plVar14 != plVar8 + uVar10 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a88e3f0; end: 10a88e6e3;  */

void FUN_10a88e3f0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88e6e4(param_5);
  func_0x000109898570(&plStack_68,param_2,param_4);
  func_0x000109898570(&plStack_80,param_2,param_4 + 0x10);
  FUN_10a2e79e4(&uStack_90,param_2,param_4 + 0x20);
  FUN_10a88d83c(auStack_a0,param_2,param_4 + 0x30);
  FUN_10a05dcbc(auStack_b0,param_2,param_4 + 0x40);
  FUN_10a768f5c(auStack_c0,param_2,param_4 + 0x50);
  plVar1 = plStack_88;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  FUN_10a870f7c(plVar8,&plStack_68,&plStack_80,&stack0xffffffffffffffb0,auStack_a0,auStack_b0,
                auStack_c0);
  if (plVar1 != (long *)0x0) {
    plVar8 = plVar1 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(plStack_80);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 0;
  plVar1 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar1[lVar11 + 2];
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
  plVar8 = (long *)*plVar1;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - (long)plVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)plVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar11;
          _bzero(lVar2,uVar16 * 0x10);
          lVar12 = lVar2 + uVar15 * -0x10;
          _memcpy(lVar12,plVar8,lVar11);
          *plVar1 = lVar12;
          plVar7[0x4c] = lVar2 + uVar16 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          plStack_88 = plVar8;
          plStack_80 = plVar8;
          plStack_78 = plVar8;
          uStack_70 = lVar14;
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
    _bzero(plVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (plVar13 != plVar8 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a88e6e4; end: 10a88e707;  */

void FUN_10a88e6e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 6) {
    return;
  }
  plVar6 = (long *)0x6;
  uVar10 = 0;
  FUN_10a052ee0(6,0,param_1);
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
  FUN_10a88bb50(plVar6,uVar10);
  FUN_10a88e910(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar6,param_1);
  func_0x000109898570(&lStack_80,plVar6,param_1 + 0x10);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_1 + 0x20);
  FUN_10a76b320(&plStack_90,plVar6,param_1 + 0x30);
  FUN_10a768f5c(auStack_a0,plVar6,param_1 + 0x40);
  FUN_10a8705b0(plVar8,&stack0xffffffffffffff98,&lStack_80,plVar9,&plStack_90,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar13 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar13 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (in_stack_ffffffffffffff90 < 0) {
    __ZdlPv(lStack_80);
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar13 = plVar7[0x59];
  uVar11 = lVar13 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar13 + 2];
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
  plVar8 = (long *)*plVar6;
  plVar9 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar9 - (long)plVar8;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar9 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar15 - (long)plVar8 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar8)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar17 * 0x10);
          lVar14 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar14,plVar8,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar12 * 0x10;
          plStack_98 = plVar8;
          plStack_90 = plVar8;
          plStack_88 = plVar8;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&plStack_98);
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
    _bzero(plVar9,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar9 + uVar17 * 2);
  }
  else if (uVar11 < uVar16) {
    while (plVar9 != plVar8 + uVar11 * 2) {
      plVar9 = plVar9 + -2;
      func_0x00010988c204(plVar9);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a88e708; end: 10a88e90f;  */

void FUN_10a88e708(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
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
  plVar7 = param_2;
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88e910(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  plVar8 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a76b320(&plStack_80,param_2,param_4 + 0x30);
  FUN_10a768f5c(auStack_90,param_2,param_4 + 0x40);
  FUN_10a8705b0(plVar7,&stack0xffffffffffffffa8,&lStack_70,plVar8,&plStack_80,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
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
  plVar8 = (long *)*plVar7;
  plVar13 = (long *)plVar6[0x4c];
  lVar11 = (long)plVar13 - (long)plVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)plVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,plVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar1 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar8;
          plStack_80 = plVar8;
          plStack_78 = plVar8;
          lStack_70 = lVar14;
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
    _bzero(plVar13,uVar16 * 0x10);
    plVar6[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (plVar13 != plVar8 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar6[0x4c] = (long)(plVar8 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a88e910; end: 10a88e933;  */

/* WARNING: Removing unreachable block (ram,0x00010a88f4d0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4c0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4f0) */

void FUN_10a88e910(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *******pppppppuVar12;
  undefined **ppuVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined4 *extraout_x8;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined ******ppppppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined ******ppppppuStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined ******ppppppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined ******ppppppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined2 uStack_190;
  long *plStack_188;
  undefined ******ppppppuStack_180;
  undefined **ppuStack_178;
  undefined ******ppppppuStack_170;
  undefined **ppuStack_168;
  undefined **appuStack_160 [2];
  undefined **appuStack_150 [3];
  long *plStack_138;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined5 uStack_ce;
  undefined1 uStack_c9;
  byte bStack_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined ******ppppppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  
  if ((int)param_1 == 5) {
    return;
  }
  plVar8 = (long *)0x5;
  uVar15 = 0;
  FUN_10a052ee0(5,0);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10a88bb50(plVar8,uVar15);
  FUN_10a88f6dc(param_4);
  if (*param_1 == 1) {
    lStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
  }
  else {
    plVar11 = plVar8;
    func_0x000109898688(plVar8,param_1);
    if (plVar11 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a88f5ac;
    }
    func_0x00010989879c(&lStack_110);
    if ((lStack_110 == 0) ||
       (lVar25 = lStack_110, ___dynamic_cast(lStack_110,&PTR_DAT_110b178e0,&PTR_DAT_110c24048,0),
       lVar25 == 0)) {
      plVar11 = &lStack_1c8;
    }
    else {
      plStack_1c0 = plStack_108;
      plVar11 = &lStack_110;
      lStack_1c8 = lVar25;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar1 = plStack_108 + 1;
      do {
        lVar25 = *plVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (lStack_1c8 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a88f5ac;
    }
  }
  FUN_10a5cc2d8(&ppppppuStack_1d8,plVar8,param_1 + 4);
  FUN_10a059354(&ppppppuStack_1e8,plVar8,param_1 + 8);
  lVar25 = lStack_1c8;
  ppuVar13 = ppuStack_1e0;
  lVar18 = plVar10[0x6f];
  if (((lVar18 == 0) || (*(char *)(lVar18 + 0xa8) == '\x01')) && (plVar10[0x6d] != 0)) {
    if (*(int *)plVar10[0x3d] != 2) {
      lVar18 = plVar10[0x6f];
      goto LAB_10a88eb08;
    }
    if (lStack_1c8 == 0) {
      ppppppuStack_180 = ppppppuStack_1e8;
      ppuStack_178 = ppuStack_1e0;
      if (ppuStack_1e0 == (undefined **)0x0) {
        ppuVar24 = &PTR_PTR_113304d80;
        FUN_10ae079a0(0,&PTR_PTR_113304d80);
        FUN_10ae07cd4(ppuVar24,&PTR_PTR_113304d80);
        ppuStack_98 = (undefined **)0x0;
      }
      else {
        ppuVar24 = ppuStack_1e0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = *ppuVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuVar16 = &PTR_PTR_113304d80;
        FUN_10ae079a0(0,&PTR_PTR_113304d80);
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304d80);
        ppuStack_98 = ppuVar13;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = *ppuVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_a0 = ppppppuStack_1e8;
      if ((undefined *******)ppppppuStack_1e8 != (undefined *******)0x0) {
        func_0x000107c2b054(&lStack_110,&UNK_10f67f0c5);
        if (*(char *)(ppppppuStack_1e8 + 8) == '\x01') {
          (*(code *)*ppppppuStack_1e8)();
        }
        else if (*(char *)(ppppppuStack_1e8 + 8) == '\x02') {
          FUN_10a05aad0(ppppppuStack_1e8,&lStack_110);
        }
      }
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar24 = ppuVar13 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      ppuVar13 = ppuStack_178;
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar24 = ppuStack_178 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
    }
    else {
      lVar18 = plVar10[0xae];
      uStack_c0 = 0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      plStack_108 = (long *)0x0;
      lStack_110 = 0;
      lStack_f8 = 0;
      lStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      uStack_d8 = 0;
      lStack_e0 = 0;
      uStack_ce = 0;
      uStack_c9 = 0;
      bStack_c8 = 0;
      uStack_c7 = 0;
      uStack_d6 = 0;
      uStack_d0 = 0;
      if (*(char *)(lStack_1c8 + 0x4f) < '\0') {
        if (*(long *)(lStack_1c8 + 0x40) == 0) goto LAB_10a88eca0;
        func_0x000107c3192c(&ppppppuStack_180,*(undefined8 *)(lStack_1c8 + 0x38));
      }
      else if (*(char *)(lStack_1c8 + 0x4f) == '\0') {
LAB_10a88eca0:
        pppppppuVar12 = (undefined *******)0x28;
        __Znwm();
        ppppppuStack_170 = (undefined ******)0x8000000000000028;
        ppuStack_178 = (undefined **)0x20;
        pppppppuVar12[1] = (undefined ******)0x0;
        *pppppppuVar12 = (undefined ******)0x0;
        pppppppuVar12[3] = (undefined ******)0x0;
        pppppppuVar12[2] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar12 + 4) = 0;
        ppuVar13 = &PTR___tlv_bootstrap_11340ddc8;
        ppppppuStack_180 = (undefined ******)pppppppuVar12;
        (*(code *)PTR___tlv_bootstrap_11340ddc8)();
        ppuVar24 = (undefined **)0x0;
        do {
          FUN_10a0095ac();
          uStack_128 = 0x3d00000000;
          puVar14 = &uStack_128;
          func_0x00010937f57c(puVar14,ppuVar13,&uStack_128);
          ppuVar16 = ppuStack_178;
          if (-1 < (long)ppppppuStack_170) {
            ppuVar16 = (undefined **)((ulong)ppppppuStack_170 >> 0x38);
          }
          if (ppuVar16 < ppuVar24) goto LAB_10a88f5ac;
          pppppppuVar12 = (undefined *******)ppppppuStack_180;
          if (-1 < (long)ppppppuStack_170) {
            pppppppuVar12 = &ppppppuStack_180;
          }
          *(undefined *)((long)pppppppuVar12 + (long)ppuVar24) = (&UNK_10e4b07dc)[(int)puVar14];
          ppuVar24 = (undefined **)((long)ppuVar24 + 1);
        } while (ppuVar24 != (undefined **)0x20);
      }
      else {
        ppuStack_178 = *(undefined ***)(lStack_1c8 + 0x40);
        ppppppuStack_180 = *(undefined *******)(lStack_1c8 + 0x38);
        ppppppuStack_170 = *(undefined *******)(lStack_1c8 + 0x48);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_110,&ppppppuStack_180);
      if ((long)ppppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      bVar4 = *(byte *)(lVar25 + 0x18);
      bVar7 = bVar4 == 2;
      if (bVar4 - 1 < 2) {
        func_0x000107c2b054(&ppppppuStack_180,&UNK_10f67d9eb);
      }
      else {
        lVar19 = plVar10[0x46];
        if (*(char *)(lVar19 + 0x2f) < '\0') {
          func_0x000107c3192c(&ppppppuStack_180,*(undefined8 *)(lVar19 + 0x18),
                              *(undefined8 *)(lVar19 + 0x20));
        }
        else {
          ppuStack_178 = *(undefined ***)(lVar19 + 0x20);
          ppppppuStack_180 = *(undefined *******)(lVar19 + 0x18);
          ppppppuStack_170 = *(undefined *******)(lVar19 + 0x28);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_f8,&ppppppuStack_180);
      if ((long)ppppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((bVar4 == 2) || (*(char *)(lVar25 + 0x18) == '\x01')) {
        func_0x000107c2b054(&ppppppuStack_180,&UNK_10f67d9eb);
      }
      else {
        lVar19 = plVar10[0x46];
        if (*(char *)(lVar19 + 0x47) < '\0') {
          func_0x000107c3192c(&ppppppuStack_180,*(undefined8 *)(lVar19 + 0x30),
                              *(undefined8 *)(lVar19 + 0x38));
        }
        else {
          ppuStack_178 = *(undefined ***)(lVar19 + 0x38);
          ppppppuStack_180 = *(undefined *******)(lVar19 + 0x30);
          ppppppuStack_170 = *(undefined *******)(lVar19 + 0x40);
        }
      }
      pppppppuVar12 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&lStack_e0);
      if ((long)ppppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      uStack_c4 = *(undefined4 *)(lVar25 + 0x1c);
      if (bVar4 == 2) {
        bStack_c8 = 0;
      }
      else {
        bStack_c8 = *(byte *)(lVar25 + 0x30);
      }
      bStack_c8 = bStack_c8 & 1;
      lVar19 = *(long *)(lVar25 + 0x20);
      uStack_c7 = bVar7;
      if (lVar19 != 0) {
        uVar26 = *(ulong *)(lVar19 + 0x50);
        uStack_120 = 0;
        lStack_118 = 0;
        uStack_128 = 0;
        if (uVar26 == 0) {
          uVar29 = 0;
        }
        else {
          if (0x555555555555555 < uVar26) {
            FUN_10a882064();
            goto LAB_10a88f5ac;
          }
          uVar29 = uVar26;
          FUN_10a882078();
          lStack_118 = uVar29 + (long)pppppppuVar12 * 0x30;
          uStack_128 = uVar29;
          _bzero();
          uStack_120 = uVar29 + ((uVar26 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
          lVar19 = *(long *)(lVar25 + 0x20);
        }
        uVar26 = uStack_120;
        plVar8 = *(long **)(lVar19 + 0x48);
        if (plVar8 != (long *)0x0) {
          uVar30 = 0xffffffffffffffff;
          lVar19 = 0x18;
          do {
            FUN_10a0f984c(&ppppppuStack_180);
            uStack_190 = 1;
            ppuStack_198 = &PTR_FUN_110c24280;
            lVar27 = 0;
            if (*(long *)(lVar25 + 0x20) != 0) {
              lVar27 = *(long *)(lVar25 + 0x20) + 0x18;
            }
            plStack_188 = plVar8 + 2;
            FUN_10a0fff24(&ppppppuStack_180,lVar27,&ppuStack_198);
            uVar21 = ((long)(uVar26 - uVar29) >> 4) * -0x5555555555555555;
            if (uVar21 < uVar30 + 1 || uVar21 - (uVar30 + 1) == 0) goto LAB_10a88f5ac;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (uVar29 + lVar19 + -0x18,plVar8 + 2);
            uVar29 = uStack_128;
            uVar21 = ((long)(uVar26 - uStack_128) >> 4) * -0x5555555555555555;
            uVar30 = uVar30 + 1;
            if (uVar21 < uVar30 || uVar21 - uVar30 == 0) goto LAB_10a88f5ac;
            func_0x00010a0fb0f4(&ppppppuStack_180,uStack_128 + lVar19);
            plVar10 = plStack_138;
            ppppppuStack_180 = (undefined ******)&PTR_FUN_110ba53b0;
            ppuStack_178 = &PTR_FUN_110ba5578;
            plStack_138 = (long *)0x0;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
            appuStack_150[0] = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(appuStack_150);
            appuStack_160[0] = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(appuStack_160);
            ppppppuStack_170 = (undefined ******)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppppuStack_170);
            lVar19 = lVar19 + 0x30;
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        uVar30 = uStack_c0;
        uVar26 = uStack_b8;
        if (uStack_c0 != 0) {
          while (uVar26 != uVar30) {
            FUN_10a882124(uVar26 - 0x30);
            uVar29 = uStack_128;
            uVar26 = uVar26 - 0x30;
          }
          uStack_b8 = uVar30;
          __ZdlPv(uStack_c0);
        }
        lStack_b0 = lStack_118;
        uStack_b8 = uStack_120;
        uStack_120 = 0;
        lStack_118 = 0;
        uStack_128 = 0;
        uStack_c0 = uVar29;
        FUN_10a8820bc(&uStack_128);
      }
      ppppppuStack_180 = ppppppuStack_1d8;
      ppuStack_178 = ppuStack_1d0;
      if (ppuStack_1d0 != (undefined **)0x0) {
        ppuVar13 = ppuStack_1d0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar7) {
            *ppuVar13 = *ppuVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_170 = ppppppuStack_1e8;
      ppuStack_168 = ppuStack_1e0;
      if (ppuStack_1e0 != (undefined **)0x0) {
        ppuVar13 = ppuStack_1e0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar7) {
            *ppuVar13 = *ppuVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar25 = *(long *)(lVar18 + 0x30);
      ppppppuStack_1b8 = ppppppuStack_1d8;
      ppuStack_1b0 = ppuStack_1d0;
      if (ppuStack_1d0 != (undefined **)0x0) {
        ppuVar13 = ppuStack_1d0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar7) {
            *ppuVar13 = *ppuVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_1a8 = ppppppuStack_1e8;
      ppuStack_1a0 = ppuStack_1e0;
      if (ppuStack_1e0 != (undefined **)0x0) {
        ppuVar13 = ppuStack_1e0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar7) {
            *ppuVar13 = *ppuVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a8821b0(&lStack_110,lVar25,&ppppppuStack_1b8);
      __ZNSt3__15mutex4lockEv(lVar25 + 0x40);
      plVar8 = *(long **)(lVar25 + 0x30);
      if (plVar8 < *(long **)(lVar25 + 0x38)) {
        plVar8[2] = lStack_100;
        plVar8[1] = (long)plStack_108;
        *plVar8 = lStack_110;
        plStack_108 = (long *)0x0;
        lStack_100 = 0;
        lStack_110 = 0;
        plVar8[4] = lStack_f0;
        plVar8[3] = lStack_f8;
        plVar8[5] = lStack_e8;
        lStack_f0 = 0;
        lStack_e8 = 0;
        lStack_f8 = 0;
        plVar8[8] = CONCAT17(uStack_c9,CONCAT52(uStack_ce,uStack_d0));
        plVar8[7] = CONCAT62(uStack_d6,uStack_d8);
        plVar8[6] = lStack_e0;
        uStack_d8 = 0;
        uStack_d6 = 0;
        uStack_d0 = 0;
        uStack_ce = 0;
        uStack_c9 = 0;
        lStack_e0 = 0;
        plVar8[9] = CONCAT44(uStack_c4,CONCAT22(uStack_c6,CONCAT11(uStack_c7,bStack_c8)));
        plVar8[10] = 0;
        plVar8[0xb] = 0;
        plVar8[0xc] = 0;
        plVar8[0xb] = uStack_b8;
        plVar8[10] = uStack_c0;
        plVar8[0xc] = lStack_b0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        plVar8 = plVar8 + 0xd;
      }
      else {
        lVar18 = (long)plVar8 - *(long *)(lVar25 + 0x28);
        uVar26 = (lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar26) {
          FUN_10a882698();
LAB_10a88f5ac:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a88f5b0);
          (*pcVar6)();
        }
        lVar19 = (long)*(long **)(lVar25 + 0x38) - *(long *)(lVar25 + 0x28) >> 3;
        uVar29 = lVar19 * -0x6276276276276276;
        if (uVar29 < uVar26 || uVar29 - uVar26 == 0) {
          uVar29 = uVar26;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar19 * 0x4ec4ec4ec4ec4ec5)) {
          uVar29 = 0x276276276276276;
        }
        if (0x276276276276276 < uVar29) {
          func_0x000109ffded8();
          goto LAB_10a88f5ac;
        }
        lVar19 = uVar29 * 0x68;
        __Znwm();
        plVar8 = (long *)(lVar19 + lVar18);
        plVar8[2] = lStack_100;
        plVar8[5] = lStack_e8;
        plVar8[1] = (long)plStack_108;
        *plVar8 = lStack_110;
        plStack_108 = (long *)0x0;
        lStack_100 = 0;
        lStack_110 = 0;
        plVar8[4] = lStack_f0;
        plVar8[3] = lStack_f8;
        lStack_f8 = 0;
        lStack_f0 = 0;
        lVar18 = CONCAT17(uStack_c9,CONCAT52(uStack_ce,uStack_d0));
        plVar8[7] = CONCAT62(uStack_d6,uStack_d8);
        plVar8[6] = lStack_e0;
        uStack_d8 = 0;
        uStack_d6 = 0;
        uStack_d0 = 0;
        uStack_ce = 0;
        uStack_c9 = 0;
        lStack_e8 = 0;
        lStack_e0 = 0;
        plVar8[8] = lVar18;
        plVar8[9] = CONCAT44(uStack_c4,CONCAT22(uStack_c6,CONCAT11(uStack_c7,bStack_c8)));
        plVar8[0xb] = uStack_b8;
        plVar8[10] = uStack_c0;
        plVar8[0xc] = lStack_b0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        puVar28 = *(undefined8 **)(lVar25 + 0x28);
        puVar3 = *(undefined8 **)(lVar25 + 0x30);
        puVar2 = (undefined8 *)((long)plVar8 + ((long)puVar28 - (long)puVar3));
        puVar20 = puVar28;
        puVar22 = puVar2;
        if ((long)puVar28 - (long)puVar3 != 0) {
          do {
            uVar31 = puVar20[1];
            uVar15 = *puVar20;
            puVar22[2] = puVar20[2];
            puVar22[1] = uVar31;
            *puVar22 = uVar15;
            puVar20[1] = 0;
            puVar20[2] = 0;
            *puVar20 = 0;
            uVar31 = puVar20[4];
            uVar15 = puVar20[3];
            puVar22[5] = puVar20[5];
            puVar22[4] = uVar31;
            puVar22[3] = uVar15;
            puVar20[4] = 0;
            puVar20[5] = 0;
            puVar20[3] = 0;
            uVar31 = puVar20[7];
            uVar15 = puVar20[6];
            puVar22[8] = puVar20[8];
            puVar22[7] = uVar31;
            puVar22[6] = uVar15;
            puVar20[7] = 0;
            puVar20[8] = 0;
            puVar20[6] = 0;
            puVar22[9] = puVar20[9];
            puVar22[0xb] = 0;
            puVar22[0xc] = 0;
            uVar15 = puVar20[10];
            puVar22[0xb] = puVar20[0xb];
            puVar22[10] = uVar15;
            puVar22[0xc] = puVar20[0xc];
            puVar20[10] = 0;
            puVar20[0xb] = 0;
            puVar20[0xc] = 0;
            puVar20 = puVar20 + 0xd;
            puVar22 = puVar22 + 0xd;
          } while (puVar20 != puVar3);
          do {
            FUN_10a87ead4(puVar28);
            puVar28 = puVar28 + 0xd;
          } while (puVar28 != puVar3);
          puVar28 = *(undefined8 **)(lVar25 + 0x28);
        }
        plVar8 = plVar8 + 0xd;
        *(undefined8 **)(lVar25 + 0x28) = puVar2;
        *(long **)(lVar25 + 0x30) = plVar8;
        *(ulong *)(lVar25 + 0x38) = lVar19 + uVar29 * 0x68;
        if (puVar28 != (undefined8 *)0x0) {
          __ZdlPv(puVar28);
        }
      }
      *(long **)(lVar25 + 0x30) = plVar8;
      __ZNSt3__15mutex6unlockEv(lVar25 + 0x40);
      ppuVar13 = ppuStack_1a0;
      if (ppuStack_1a0 != (undefined **)0x0) {
        ppuVar24 = ppuStack_1a0 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1a0 + 0x10))(ppuStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      ppuVar13 = ppuStack_1b0;
      if (ppuStack_1b0 != (undefined **)0x0) {
        ppuVar24 = ppuStack_1b0 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b0 + 0x10))(ppuStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      ppuVar13 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar24 = ppuStack_168 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      ppuVar13 = ppuStack_178;
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar24 = ppuStack_178 + 1;
        do {
          puVar23 = *ppuVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar7) {
            *ppuVar24 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      FUN_10a8820bc(&uStack_c0);
    }
  }
  else {
LAB_10a88eb08:
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar18 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar13 = &PTR_PTR_1133050c8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133050c8);
  }
  if (ppuStack_1e0 != (undefined **)0x0) {
    ppuVar13 = ppuStack_1e0 + 1;
    do {
      puVar23 = *ppuVar13;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar7) {
        *ppuVar13 = puVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar23 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1e0 + 0x10))(ppuStack_1e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1e0);
    }
  }
  if (ppuStack_1d0 != (undefined **)0x0) {
    ppuVar13 = ppuStack_1d0 + 1;
    do {
      puVar23 = *ppuVar13;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar7) {
        *ppuVar13 = puVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar23 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1d0 + 0x10))(ppuStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1d0);
    }
  }
  plVar8 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    plVar10 = plStack_1c0 + 1;
    do {
      lVar25 = *plVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar25 = plVar9[0x59];
  uVar26 = lVar25 - 1;
  plVar9[0x59] = uVar26;
  if (uVar26 < 8) {
    uVar26 = plVar8[lVar25 + 2];
    if (plVar9[0x5a] == uVar26) {
      return;
    }
  }
  else {
    uVar26 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar26) {
      return;
    }
  }
  ppuVar13 = (undefined **)*plVar8;
  ppuVar24 = (undefined **)plVar9[0x4c];
  lVar25 = (long)ppuVar24 - (long)ppuVar13;
  uVar29 = lVar25 >> 4;
  if (uVar29 < uVar26) {
    uVar30 = uVar26 - uVar29;
    if ((ulong)(plVar9[0x4d] - (long)ppuVar24 >> 4) < uVar30) {
      if (uVar26 >> 0x3c == 0) {
        uVar17 = plVar9[0x4d] - (long)ppuVar13;
        uVar21 = (long)uVar17 >> 3;
        if (uVar21 <= uVar26) {
          uVar21 = uVar26;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar21 = 0xfffffffffffffff;
        }
        if (uVar21 >> 0x3c == 0) {
          lVar19 = uVar21 << 4;
          __Znwm();
          lVar18 = lVar19 + lVar25;
          _bzero(lVar18,uVar30 * 0x10);
          lVar27 = lVar18 + uVar29 * -0x10;
          _memcpy(lVar27,ppuVar13,lVar25);
          *plVar8 = lVar27;
          plVar9[0x4c] = lVar18 + uVar30 * 0x10;
          plVar9[0x4d] = lVar19 + uVar21 * 0x10;
          ppuStack_98 = ppuVar13;
          ppuStack_90 = ppuVar13;
          ppuStack_88 = ppuVar13;
          func_0x00010988c1b8(&ppuStack_98);
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
    _bzero(ppuVar24,uVar30 * 0x10);
    plVar9[0x4c] = (long)(ppuVar24 + uVar30 * 2);
  }
  else if (uVar26 < uVar29) {
    while (ppuVar24 != ppuVar13 + uVar26 * 2) {
      ppuVar24 = ppuVar24 + -2;
      func_0x00010988c204(ppuVar24);
    }
    plVar9[0x4c] = (long)(ppuVar13 + uVar26 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar26;
  return;
}



/* Entry: 10a88e934; end: 10a88f6db;  */

/* WARNING: Removing unreachable block (ram,0x00010a88f4d0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4c0) */
/* WARNING: Removing unreachable block (ram,0x00010a88f4f0) */

void FUN_10a88e934(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined *******pppppppuVar10;
  undefined **ppuVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined ******ppppppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined ******ppppppuStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined ******ppppppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined ******ppppppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined2 uStack_180;
  long *plStack_178;
  undefined ******ppppppuStack_170;
  undefined **ppuStack_168;
  undefined ******ppppppuStack_160;
  undefined **ppuStack_158;
  undefined **appuStack_150 [2];
  undefined **appuStack_140 [3];
  long *plStack_128;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined5 uStack_be;
  undefined1 uStack_b9;
  byte bStack_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined ******ppppppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar26 = param_2;
  FUN_10a88bb50(param_2,param_3);
  FUN_10a88f6dc(param_5);
  if (*param_4 == 1) {
    lStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
  }
  else {
    plVar9 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar9 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a88f5ac;
    }
    func_0x00010989879c(&lStack_100);
    if ((lStack_100 == 0) ||
       (lVar22 = lStack_100, ___dynamic_cast(lStack_100,&PTR_DAT_110b178e0,&PTR_DAT_110c24048,0),
       lVar22 == 0)) {
      plVar9 = &lStack_1b8;
    }
    else {
      plStack_1b0 = plStack_f8;
      plVar9 = &lStack_100;
      lStack_1b8 = lVar22;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar22 = *plVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (lStack_1b8 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a88f5ac;
    }
  }
  FUN_10a5cc2d8(&ppppppuStack_1c8,param_2,param_4 + 4);
  FUN_10a059354(&ppppppuStack_1d8,param_2,param_4 + 8);
  lVar22 = lStack_1b8;
  ppuVar11 = ppuStack_1d0;
  lVar15 = plVar26[0x6f];
  if (((lVar15 == 0) || (*(char *)(lVar15 + 0xa8) == '\x01')) && (plVar26[0x6d] != 0)) {
    if (*(int *)plVar26[0x3d] != 2) {
      lVar15 = plVar26[0x6f];
      goto LAB_10a88eb08;
    }
    if (lStack_1b8 == 0) {
      ppppppuStack_170 = ppppppuStack_1d8;
      ppuStack_168 = ppuStack_1d0;
      if (ppuStack_1d0 == (undefined **)0x0) {
        ppuVar21 = &PTR_PTR_113304d80;
        FUN_10ae079a0(0,&PTR_PTR_113304d80);
        FUN_10ae07cd4(ppuVar21,&PTR_PTR_113304d80);
        ppuStack_88 = (undefined **)0x0;
      }
      else {
        ppuVar21 = ppuStack_1d0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = *ppuVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuVar13 = &PTR_PTR_113304d80;
        FUN_10ae079a0(0,&PTR_PTR_113304d80);
        FUN_10ae07cd4(ppuVar13,&PTR_PTR_113304d80);
        ppuStack_88 = ppuVar11;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = *ppuVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_90 = ppppppuStack_1d8;
      if ((undefined *******)ppppppuStack_1d8 != (undefined *******)0x0) {
        func_0x000107c2b054(&lStack_100,&UNK_10f67f0c5);
        if (*(char *)(ppppppuStack_1d8 + 8) == '\x01') {
          (*(code *)*ppppppuStack_1d8)();
        }
        else if (*(char *)(ppppppuStack_1d8 + 8) == '\x02') {
          FUN_10a05aad0(ppppppuStack_1d8,&lStack_100);
        }
      }
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar21 = ppuVar11 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      ppuVar11 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar21 = ppuStack_168 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
    }
    else {
      lVar15 = plVar26[0xae];
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_a0 = 0;
      plStack_f8 = (long *)0x0;
      lStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_be = 0;
      uStack_b9 = 0;
      bStack_b8 = 0;
      uStack_b7 = 0;
      uStack_c6 = 0;
      uStack_c0 = 0;
      if (*(char *)(lStack_1b8 + 0x4f) < '\0') {
        if (*(long *)(lStack_1b8 + 0x40) == 0) goto LAB_10a88eca0;
        func_0x000107c3192c(&ppppppuStack_170,*(undefined8 *)(lStack_1b8 + 0x38));
      }
      else if (*(char *)(lStack_1b8 + 0x4f) == '\0') {
LAB_10a88eca0:
        pppppppuVar10 = (undefined *******)0x28;
        __Znwm();
        ppppppuStack_160 = (undefined ******)0x8000000000000028;
        ppuStack_168 = (undefined **)0x20;
        pppppppuVar10[1] = (undefined ******)0x0;
        *pppppppuVar10 = (undefined ******)0x0;
        pppppppuVar10[3] = (undefined ******)0x0;
        pppppppuVar10[2] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar10 + 4) = 0;
        ppuVar11 = &PTR___tlv_bootstrap_11340ddc8;
        ppppppuStack_170 = (undefined ******)pppppppuVar10;
        (*(code *)PTR___tlv_bootstrap_11340ddc8)();
        ppuVar21 = (undefined **)0x0;
        do {
          FUN_10a0095ac();
          uStack_118 = 0x3d00000000;
          puVar12 = &uStack_118;
          func_0x00010937f57c(puVar12,ppuVar11,&uStack_118);
          ppuVar13 = ppuStack_168;
          if (-1 < (long)ppppppuStack_160) {
            ppuVar13 = (undefined **)((ulong)ppppppuStack_160 >> 0x38);
          }
          if (ppuVar13 < ppuVar21) goto LAB_10a88f5ac;
          pppppppuVar10 = (undefined *******)ppppppuStack_170;
          if (-1 < (long)ppppppuStack_160) {
            pppppppuVar10 = &ppppppuStack_170;
          }
          *(undefined *)((long)pppppppuVar10 + (long)ppuVar21) = (&UNK_10e4b07dc)[(int)puVar12];
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (ppuVar21 != (undefined **)0x20);
      }
      else {
        ppuStack_168 = *(undefined ***)(lStack_1b8 + 0x40);
        ppppppuStack_170 = *(undefined *******)(lStack_1b8 + 0x38);
        ppppppuStack_160 = *(undefined *******)(lStack_1b8 + 0x48);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_100,&ppppppuStack_170);
      if ((long)ppppppuStack_160 < 0) {
        __ZdlPv(ppppppuStack_170);
      }
      bVar4 = *(byte *)(lVar22 + 0x18);
      bVar7 = bVar4 == 2;
      if (bVar4 - 1 < 2) {
        func_0x000107c2b054(&ppppppuStack_170,&UNK_10f67d9eb);
      }
      else {
        lVar16 = plVar26[0x46];
        if (*(char *)(lVar16 + 0x2f) < '\0') {
          func_0x000107c3192c(&ppppppuStack_170,*(undefined8 *)(lVar16 + 0x18),
                              *(undefined8 *)(lVar16 + 0x20));
        }
        else {
          ppuStack_168 = *(undefined ***)(lVar16 + 0x20);
          ppppppuStack_170 = *(undefined *******)(lVar16 + 0x18);
          ppppppuStack_160 = *(undefined *******)(lVar16 + 0x28);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_e8,&ppppppuStack_170);
      if ((long)ppppppuStack_160 < 0) {
        __ZdlPv(ppppppuStack_170);
      }
      if ((bVar4 == 2) || (*(char *)(lVar22 + 0x18) == '\x01')) {
        func_0x000107c2b054(&ppppppuStack_170,&UNK_10f67d9eb);
      }
      else {
        lVar16 = plVar26[0x46];
        if (*(char *)(lVar16 + 0x47) < '\0') {
          func_0x000107c3192c(&ppppppuStack_170,*(undefined8 *)(lVar16 + 0x30),
                              *(undefined8 *)(lVar16 + 0x38));
        }
        else {
          ppuStack_168 = *(undefined ***)(lVar16 + 0x38);
          ppppppuStack_170 = *(undefined *******)(lVar16 + 0x30);
          ppppppuStack_160 = *(undefined *******)(lVar16 + 0x40);
        }
      }
      pppppppuVar10 = &ppppppuStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&lStack_d0);
      if ((long)ppppppuStack_160 < 0) {
        __ZdlPv(ppppppuStack_170);
      }
      uStack_b4 = *(undefined4 *)(lVar22 + 0x1c);
      if (bVar4 == 2) {
        bStack_b8 = 0;
      }
      else {
        bStack_b8 = *(byte *)(lVar22 + 0x30);
      }
      bStack_b8 = bStack_b8 & 1;
      lVar16 = *(long *)(lVar22 + 0x20);
      uStack_b7 = bVar7;
      if (lVar16 != 0) {
        uVar23 = *(ulong *)(lVar16 + 0x50);
        uStack_110 = 0;
        lStack_108 = 0;
        uStack_118 = 0;
        if (uVar23 == 0) {
          uVar27 = 0;
        }
        else {
          if (0x555555555555555 < uVar23) {
            FUN_10a882064();
            goto LAB_10a88f5ac;
          }
          uVar27 = uVar23;
          FUN_10a882078();
          lStack_108 = uVar27 + (long)pppppppuVar10 * 0x30;
          uStack_118 = uVar27;
          _bzero();
          uStack_110 = uVar27 + ((uVar23 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
          lVar16 = *(long *)(lVar22 + 0x20);
        }
        uVar23 = uStack_110;
        plVar26 = *(long **)(lVar16 + 0x48);
        if (plVar26 != (long *)0x0) {
          uVar28 = 0xffffffffffffffff;
          lVar16 = 0x18;
          do {
            FUN_10a0f984c(&ppppppuStack_170);
            uStack_180 = 1;
            ppuStack_188 = &PTR_FUN_110c24280;
            lVar24 = 0;
            if (*(long *)(lVar22 + 0x20) != 0) {
              lVar24 = *(long *)(lVar22 + 0x20) + 0x18;
            }
            plStack_178 = plVar26 + 2;
            FUN_10a0fff24(&ppppppuStack_170,lVar24,&ppuStack_188);
            uVar18 = ((long)(uVar23 - uVar27) >> 4) * -0x5555555555555555;
            if (uVar18 < uVar28 + 1 || uVar18 - (uVar28 + 1) == 0) goto LAB_10a88f5ac;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (uVar27 + lVar16 + -0x18,plVar26 + 2);
            uVar27 = uStack_118;
            uVar18 = ((long)(uVar23 - uStack_118) >> 4) * -0x5555555555555555;
            uVar28 = uVar28 + 1;
            if (uVar18 < uVar28 || uVar18 - uVar28 == 0) goto LAB_10a88f5ac;
            func_0x00010a0fb0f4(&ppppppuStack_170,uStack_118 + lVar16);
            plVar9 = plStack_128;
            ppppppuStack_170 = (undefined ******)&PTR_FUN_110ba53b0;
            ppuStack_168 = &PTR_FUN_110ba5578;
            plStack_128 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            appuStack_140[0] = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(appuStack_140);
            appuStack_150[0] = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(appuStack_150);
            ppppppuStack_160 = (undefined ******)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppppuStack_160);
            lVar16 = lVar16 + 0x30;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        uVar28 = uStack_b0;
        uVar23 = uStack_a8;
        if (uStack_b0 != 0) {
          while (uVar23 != uVar28) {
            FUN_10a882124(uVar23 - 0x30);
            uVar27 = uStack_118;
            uVar23 = uVar23 - 0x30;
          }
          uStack_a8 = uVar28;
          __ZdlPv(uStack_b0);
        }
        lStack_a0 = lStack_108;
        uStack_a8 = uStack_110;
        uStack_110 = 0;
        lStack_108 = 0;
        uStack_118 = 0;
        uStack_b0 = uVar27;
        FUN_10a8820bc(&uStack_118);
      }
      ppppppuStack_170 = ppppppuStack_1c8;
      ppuStack_168 = ppuStack_1c0;
      if (ppuStack_1c0 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1c0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar7) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_160 = ppppppuStack_1d8;
      ppuStack_158 = ppuStack_1d0;
      if (ppuStack_1d0 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1d0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar7) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar22 = *(long *)(lVar15 + 0x30);
      ppppppuStack_1a8 = ppppppuStack_1c8;
      ppuStack_1a0 = ppuStack_1c0;
      if (ppuStack_1c0 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1c0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar7) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppppuStack_198 = ppppppuStack_1d8;
      ppuStack_190 = ppuStack_1d0;
      if (ppuStack_1d0 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1d0 + 1;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar7) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a8821b0(&lStack_100,lVar22,&ppppppuStack_1a8);
      __ZNSt3__15mutex4lockEv(lVar22 + 0x40);
      plVar26 = *(long **)(lVar22 + 0x30);
      if (plVar26 < *(long **)(lVar22 + 0x38)) {
        plVar26[2] = lStack_f0;
        plVar26[1] = (long)plStack_f8;
        *plVar26 = lStack_100;
        plStack_f8 = (long *)0x0;
        lStack_f0 = 0;
        lStack_100 = 0;
        plVar26[4] = lStack_e0;
        plVar26[3] = lStack_e8;
        plVar26[5] = lStack_d8;
        lStack_e0 = 0;
        lStack_d8 = 0;
        lStack_e8 = 0;
        plVar26[8] = CONCAT17(uStack_b9,CONCAT52(uStack_be,uStack_c0));
        plVar26[7] = CONCAT62(uStack_c6,uStack_c8);
        plVar26[6] = lStack_d0;
        uStack_c8 = 0;
        uStack_c6 = 0;
        uStack_c0 = 0;
        uStack_be = 0;
        uStack_b9 = 0;
        lStack_d0 = 0;
        plVar26[9] = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,bStack_b8)));
        plVar26[10] = 0;
        plVar26[0xb] = 0;
        plVar26[0xc] = 0;
        plVar26[0xb] = uStack_a8;
        plVar26[10] = uStack_b0;
        plVar26[0xc] = lStack_a0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        lStack_a0 = 0;
        plVar26 = plVar26 + 0xd;
      }
      else {
        lVar15 = (long)plVar26 - *(long *)(lVar22 + 0x28);
        uVar23 = (lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar23) {
          FUN_10a882698();
LAB_10a88f5ac:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a88f5b0);
          (*pcVar6)();
        }
        lVar16 = (long)*(long **)(lVar22 + 0x38) - *(long *)(lVar22 + 0x28) >> 3;
        uVar27 = lVar16 * -0x6276276276276276;
        if (uVar27 < uVar23 || uVar27 - uVar23 == 0) {
          uVar27 = uVar23;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar16 * 0x4ec4ec4ec4ec4ec5)) {
          uVar27 = 0x276276276276276;
        }
        if (0x276276276276276 < uVar27) {
          func_0x000109ffded8();
          goto LAB_10a88f5ac;
        }
        lVar16 = uVar27 * 0x68;
        __Znwm();
        plVar26 = (long *)(lVar16 + lVar15);
        plVar26[2] = lStack_f0;
        plVar26[5] = lStack_d8;
        plVar26[1] = (long)plStack_f8;
        *plVar26 = lStack_100;
        plStack_f8 = (long *)0x0;
        lStack_f0 = 0;
        lStack_100 = 0;
        plVar26[4] = lStack_e0;
        plVar26[3] = lStack_e8;
        lStack_e8 = 0;
        lStack_e0 = 0;
        lVar15 = CONCAT17(uStack_b9,CONCAT52(uStack_be,uStack_c0));
        plVar26[7] = CONCAT62(uStack_c6,uStack_c8);
        plVar26[6] = lStack_d0;
        uStack_c8 = 0;
        uStack_c6 = 0;
        uStack_c0 = 0;
        uStack_be = 0;
        uStack_b9 = 0;
        lStack_d8 = 0;
        lStack_d0 = 0;
        plVar26[8] = lVar15;
        plVar26[9] = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,bStack_b8)));
        plVar26[0xb] = uStack_a8;
        plVar26[10] = uStack_b0;
        plVar26[0xc] = lStack_a0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        lStack_a0 = 0;
        puVar25 = *(undefined8 **)(lVar22 + 0x28);
        puVar3 = *(undefined8 **)(lVar22 + 0x30);
        puVar2 = (undefined8 *)((long)plVar26 + ((long)puVar25 - (long)puVar3));
        puVar17 = puVar25;
        puVar19 = puVar2;
        if ((long)puVar25 - (long)puVar3 != 0) {
          do {
            uVar30 = puVar17[1];
            uVar29 = *puVar17;
            puVar19[2] = puVar17[2];
            puVar19[1] = uVar30;
            *puVar19 = uVar29;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            uVar30 = puVar17[4];
            uVar29 = puVar17[3];
            puVar19[5] = puVar17[5];
            puVar19[4] = uVar30;
            puVar19[3] = uVar29;
            puVar17[4] = 0;
            puVar17[5] = 0;
            puVar17[3] = 0;
            uVar30 = puVar17[7];
            uVar29 = puVar17[6];
            puVar19[8] = puVar17[8];
            puVar19[7] = uVar30;
            puVar19[6] = uVar29;
            puVar17[7] = 0;
            puVar17[8] = 0;
            puVar17[6] = 0;
            puVar19[9] = puVar17[9];
            puVar19[0xb] = 0;
            puVar19[0xc] = 0;
            uVar29 = puVar17[10];
            puVar19[0xb] = puVar17[0xb];
            puVar19[10] = uVar29;
            puVar19[0xc] = puVar17[0xc];
            puVar17[10] = 0;
            puVar17[0xb] = 0;
            puVar17[0xc] = 0;
            puVar17 = puVar17 + 0xd;
            puVar19 = puVar19 + 0xd;
          } while (puVar17 != puVar3);
          do {
            FUN_10a87ead4(puVar25);
            puVar25 = puVar25 + 0xd;
          } while (puVar25 != puVar3);
          puVar25 = *(undefined8 **)(lVar22 + 0x28);
        }
        plVar26 = plVar26 + 0xd;
        *(undefined8 **)(lVar22 + 0x28) = puVar2;
        *(long **)(lVar22 + 0x30) = plVar26;
        *(ulong *)(lVar22 + 0x38) = lVar16 + uVar27 * 0x68;
        if (puVar25 != (undefined8 *)0x0) {
          __ZdlPv(puVar25);
        }
      }
      *(long **)(lVar22 + 0x30) = plVar26;
      __ZNSt3__15mutex6unlockEv(lVar22 + 0x40);
      ppuVar11 = ppuStack_190;
      if (ppuStack_190 != (undefined **)0x0) {
        ppuVar21 = ppuStack_190 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_190 + 0x10))(ppuStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      ppuVar11 = ppuStack_1a0;
      if (ppuStack_1a0 != (undefined **)0x0) {
        ppuVar21 = ppuStack_1a0 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1a0 + 0x10))(ppuStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      ppuVar11 = ppuStack_158;
      if (ppuStack_158 != (undefined **)0x0) {
        ppuVar21 = ppuStack_158 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_158 + 0x10))(ppuStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      ppuVar11 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar21 = ppuStack_168 + 1;
        do {
          puVar20 = *ppuVar21;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar7) {
            *ppuVar21 = puVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      FUN_10a8820bc(&uStack_b0);
    }
  }
  else {
LAB_10a88eb08:
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar15 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar11 = &PTR_PTR_1133050c8;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_1133050c8);
  }
  if (ppuStack_1d0 != (undefined **)0x0) {
    ppuVar11 = ppuStack_1d0 + 1;
    do {
      puVar20 = *ppuVar11;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar7) {
        *ppuVar11 = puVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar20 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1d0 + 0x10))(ppuStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1d0);
    }
  }
  if (ppuStack_1c0 != (undefined **)0x0) {
    ppuVar11 = ppuStack_1c0 + 1;
    do {
      puVar20 = *ppuVar11;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar7) {
        *ppuVar11 = puVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar20 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1c0 + 0x10))(ppuStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1c0);
    }
  }
  plVar26 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar9 = plStack_1b0 + 1;
    do {
      lVar22 = *plVar9;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  *param_1 = 0;
  plVar26 = plVar8 + 0x4b;
  lVar22 = plVar8[0x59];
  uVar23 = lVar22 - 1;
  plVar8[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar26[lVar22 + 2];
    if (plVar8[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar23) {
      return;
    }
  }
  ppuVar11 = (undefined **)*plVar26;
  ppuVar21 = (undefined **)plVar8[0x4c];
  lVar22 = (long)ppuVar21 - (long)ppuVar11;
  uVar27 = lVar22 >> 4;
  if (uVar27 < uVar23) {
    uVar28 = uVar23 - uVar27;
    if ((ulong)(plVar8[0x4d] - (long)ppuVar21 >> 4) < uVar28) {
      if (uVar23 >> 0x3c == 0) {
        uVar14 = plVar8[0x4d] - (long)ppuVar11;
        uVar18 = (long)uVar14 >> 3;
        if (uVar18 <= uVar23) {
          uVar18 = uVar23;
        }
        if (0x7fffffffffffffef < uVar14) {
          uVar18 = 0xfffffffffffffff;
        }
        if (uVar18 >> 0x3c == 0) {
          lVar16 = uVar18 << 4;
          __Znwm();
          lVar15 = lVar16 + lVar22;
          _bzero(lVar15,uVar28 * 0x10);
          lVar24 = lVar15 + uVar27 * -0x10;
          _memcpy(lVar24,ppuVar11,lVar22);
          *plVar26 = lVar24;
          plVar8[0x4c] = lVar15 + uVar28 * 0x10;
          plVar8[0x4d] = lVar16 + uVar18 * 0x10;
          ppuStack_88 = ppuVar11;
          ppuStack_80 = ppuVar11;
          ppuStack_78 = ppuVar11;
          func_0x00010988c1b8(&ppuStack_88);
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
    _bzero(ppuVar21,uVar28 * 0x10);
    plVar8[0x4c] = (long)(ppuVar21 + uVar28 * 2);
  }
  else if (uVar23 < uVar27) {
    while (ppuVar21 != ppuVar11 + uVar23 * 2) {
      ppuVar21 = ppuVar21 + -2;
      func_0x00010988c204(ppuVar21);
    }
    plVar8[0x4c] = (long)(ppuVar11 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar23;
  return;
}



/* Entry: 10a88f6dc; end: 10a88f6ff;  */

long * FUN_10a88f6dc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_928;
  undefined8 uStack_920;
  undefined1 uStack_918;
  undefined *puStack_910;
  undefined8 uStack_908;
  undefined1 uStack_900;
  undefined **ppuStack_8f8;
  undefined *puStack_8f0;
  undefined *puStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  undefined4 uStack_8c8;
  undefined **ppuStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined1 uStack_890;
  int iStack_888;
  undefined1 auStack_880 [1024];
  undefined1 auStack_480 [1008];
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  lVar5 = 3;
  puVar14 = (undefined8 *)0x0;
  FUN_10a052ee0();
  lVar17 = *(long *)(lVar5 + 0x378);
  if (((lVar17 == 0) || (*(char *)(lVar17 + 0xa8) == '\x01')) && (*(long *)(lVar5 + 0x368) != 0)) {
    if (**(int **)(lVar5 + 0x1e8) == 2) {
      lVar17 = *(long *)(lVar5 + 0x570);
      lVar5 = lVar17 + 0x60;
      FUN_10a8aaad4(lVar5,*puVar14);
      if (lVar5 == 0) {
        ppuVar16 = &PTR_PTR_113304820;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304820);
        plVar12 = (long *)*param_4;
        plVar9 = (long *)param_4[1];
        if (plVar9 == (long *)0x0) {
          plStack_88 = (long *)0x0;
        }
        else {
          plVar8 = plVar9 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plStack_88 = plVar9;
          } while (cVar3 != '\0');
        }
        plStack_90 = plVar12;
        FUN_10a87a670();
        plVar8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar7 = plStack_88 + 1;
          do {
            lVar5 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar12 = plVar8;
          }
        }
        if (plVar9 == (long *)0x0) {
          return plVar12;
        }
        plVar8 = plVar9 + 1;
        do {
          lVar5 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar2 = *(long *)(lVar5 + 0x20);
        plVar9 = *(long **)(lVar5 + 0x28);
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_90 = (long *)*param_1;
        plVar8 = (long *)param_1[1];
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_80 = *param_4;
        plVar7 = (long *)param_4[1];
        if (plVar7 != (long *)0x0) {
          plVar12 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar5 = *(long *)(lVar17 + 0x30);
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plVar7 != (long *)0x0) {
          plVar12 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_88 = plVar8;
        plStack_78 = plVar7;
        FUN_10a8821b0(lVar2 + 0x18,lVar5 + 0x80,&plStack_90);
        __ZNSt3__15mutex4lockEv(lVar5 + 0xc0);
        FUN_10a0b4ec0(lVar5 + 0xa8,lVar2 + 0x18);
        plVar12 = (long *)(lVar5 + 0xc0);
        __ZNSt3__15mutex6unlockEv(plVar12);
        plVar6 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
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
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar12 = plVar6;
          }
        }
        plVar6 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
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
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar12 = plVar6;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 1;
          do {
            lVar5 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar12 = plVar7;
          }
        }
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            lVar5 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar12 = plVar8;
          }
        }
        if (plVar9 == (long *)0x0) {
          return plVar12;
        }
        plVar8 = plVar9 + 1;
        do {
          lVar5 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        plVar12 = plVar9;
      }
      return plVar12;
    }
    lVar17 = *(long *)(lVar5 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar17 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar16 = &PTR_PTR_113305118;
  ppuVar15 = ppuVar16;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)0x0;
  if (ppuVar15 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8b8,auStack_480,0x400,auStack_880,0x400,ppuVar15[0x13],ppuVar15[0xf],
                  ppuVar15 + 0x14,0x400);
    puStack_928 = puStack_8a0;
    uStack_920 = uStack_898;
    puStack_910 = puStack_8b8;
    uStack_908 = uStack_8b0;
    uStack_918 = uStack_890;
    if (iStack_888 != 0) {
      puStack_928 = &UNK_10f6c352e;
      uStack_920 = 0x10;
      puStack_910 = &UNK_10f6c352e;
      uStack_908 = 0x10;
      uStack_918 = 0;
      uStack_8a8 = 0;
    }
    puVar19 = ppuVar15[0x12];
    puVar18 = ppuVar15[0xb];
    uVar10 = 0;
    _clock_gettime_nsec_np();
    uVar11 = uVar10;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8f8 = ppuVar15 + 1;
    uStack_8c8 = *(undefined4 *)(ppuVar15 + 0xe);
    uStack_8d0 = uVar11 & 0xffffffff;
    ppuStack_8c0 = ppuVar15 + 0x10;
    plVar12 = (long *)*ppuVar15;
    ppuVar16 = (undefined **)&ppuStack_8f8;
    uStack_900 = uStack_8a8;
    puStack_8f0 = puVar18;
    puStack_8e8 = puVar19;
    uStack_8e0 = (ulong)(puVar19 != (undefined *)0x0);
    uStack_8d8 = uVar10;
    FUN_10ae0784c(plVar12,ppuVar16,&puStack_910,&puStack_928);
  }
  iVar13 = (int)ppuVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar12;
  }
  ___stack_chk_fail();
  if (iVar13 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar12);
  return plVar12;
}



/* Entry: 10a88f700; end: 10a88facf;  */

long * FUN_10a88f700(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1008];
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar15 = *(long *)(param_1 + 0x378);
  if (((lVar15 == 0) || (*(char *)(lVar15 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0x368) != 0))
  {
    if (**(int **)(param_1 + 0x1e8) == 2) {
      lVar17 = *(long *)(param_1 + 0x570);
      lVar15 = lVar17 + 0x60;
      FUN_10a8aaad4(lVar15,*param_2);
      if (lVar15 == 0) {
        ppuVar14 = &PTR_PTR_113304820;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar14,&PTR_PTR_113304820);
        plVar11 = (long *)*param_4;
        plVar8 = (long *)param_4[1];
        if (plVar8 == (long *)0x0) {
          plStack_78 = (long *)0x0;
        }
        else {
          plVar7 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plStack_78 = plVar8;
          } while (cVar3 != '\0');
        }
        plStack_80 = plVar11;
        FUN_10a87a670();
        plVar7 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar6 = plStack_78 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar2 = *(long *)(lVar15 + 0x20);
        plVar8 = *(long **)(lVar15 + 0x28);
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_80 = (long *)*param_3;
        plVar7 = (long *)param_3[1];
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_70 = *param_4;
        plVar6 = (long *)param_4[1];
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar15 = *(long *)(lVar17 + 0x30);
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_78 = plVar7;
        plStack_68 = plVar6;
        FUN_10a8821b0(lVar2 + 0x18,lVar15 + 0x80,&plStack_80);
        __ZNSt3__15mutex4lockEv(lVar15 + 0xc0);
        FUN_10a0b4ec0(lVar15 + 0xa8,lVar2 + 0x18);
        plVar11 = (long *)(lVar15 + 0xc0);
        __ZNSt3__15mutex6unlockEv(plVar11);
        plVar5 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        plVar5 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            lVar15 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar11 = plVar6;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar11 = plVar8;
      }
      return plVar11;
    }
    lVar15 = *(long *)(param_1 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar15 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar14 = &PTR_PTR_113305118;
  ppuVar13 = ppuVar14;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar13[0x13],ppuVar13[0xf],
                  ppuVar13 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar18 = ppuVar13[0x12];
    puVar16 = ppuVar13[0xb];
    uVar9 = 0;
    _clock_gettime_nsec_np();
    uVar10 = uVar9;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar13 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar13 + 0xe);
    uStack_8c0 = uVar10 & 0xffffffff;
    ppuStack_8b0 = ppuVar13 + 0x10;
    plVar11 = (long *)*ppuVar13;
    ppuVar14 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar16;
    puStack_8d8 = puVar18;
    uStack_8d0 = (ulong)(puVar18 != (undefined *)0x0);
    uStack_8c8 = uVar9;
    FUN_10ae0784c(plVar11,ppuVar14,&puStack_900,&puStack_918);
  }
  iVar12 = (int)ppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar11;
  }
  ___stack_chk_fail();
  if (iVar12 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar11);
  return plVar11;
}



/* Entry: 10a88fad0; end: 10a88fb87;  */

void FUN_10a88fad0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88fb88(param_1,param_2,FUN_10a88f700,0,param_3,param_4,param_5);
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



/* Entry: 10a88fb88; end: 10a88fd1f;  */

void FUN_10a88fb88(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a88bb50(param_2,param_5);
  FUN_10a88fd20(param_7);
  FUN_10a4ba370(auStack_60,param_2,param_6);
  FUN_10a5cc2d8(auStack_70,param_2,param_6 + 0x10);
  FUN_10a059354(auStack_80,param_2,param_6 + 0x20);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60,auStack_70,auStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
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



/* Entry: 10a88fd20; end: 10a88fd43;  */

long * FUN_10a88fd20(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_928;
  undefined8 uStack_920;
  undefined1 uStack_918;
  undefined *puStack_910;
  undefined8 uStack_908;
  undefined1 uStack_900;
  undefined **ppuStack_8f8;
  undefined *puStack_8f0;
  undefined *puStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  undefined4 uStack_8c8;
  undefined **ppuStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined1 uStack_890;
  int iStack_888;
  undefined1 auStack_880 [1024];
  undefined1 auStack_480 [1008];
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  lVar5 = 3;
  puVar14 = (undefined8 *)0x0;
  FUN_10a052ee0();
  lVar17 = *(long *)(lVar5 + 0x378);
  if (((lVar17 == 0) || (*(char *)(lVar17 + 0xa8) == '\x01')) && (*(long *)(lVar5 + 0x368) != 0)) {
    if (**(int **)(lVar5 + 0x1e8) == 2) {
      lVar17 = *(long *)(lVar5 + 0x570);
      lVar5 = lVar17 + 0x60;
      FUN_10a8aaad4(lVar5,*puVar14);
      if (lVar5 == 0) {
        ppuVar16 = &PTR_PTR_113304820;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113304820);
        plVar12 = (long *)*param_4;
        plVar9 = (long *)param_4[1];
        if (plVar9 == (long *)0x0) {
          plStack_88 = (long *)0x0;
        }
        else {
          plVar8 = plVar9 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plStack_88 = plVar9;
          } while (cVar3 != '\0');
        }
        plStack_90 = plVar12;
        FUN_10a87a670();
        plVar8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar7 = plStack_88 + 1;
          do {
            lVar5 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar12 = plVar8;
          }
        }
        if (plVar9 == (long *)0x0) {
          return plVar12;
        }
        plVar8 = plVar9 + 1;
        do {
          lVar5 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar2 = *(long *)(lVar5 + 0x20);
        plVar9 = *(long **)(lVar5 + 0x28);
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_90 = (long *)*param_1;
        plVar8 = (long *)param_1[1];
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_80 = *param_4;
        plVar7 = (long *)param_4[1];
        if (plVar7 != (long *)0x0) {
          plVar12 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar5 = *(long *)(lVar17 + 0x30);
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plVar7 != (long *)0x0) {
          plVar12 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_88 = plVar8;
        plStack_78 = plVar7;
        FUN_10a8821b0(lVar2 + 0x18,lVar5 + 0x168,&plStack_90);
        __ZNSt3__15mutex4lockEv(lVar5 + 0x1a8);
        FUN_10a0b4ec0(lVar5 + 400,lVar2 + 0x18);
        plVar12 = (long *)(lVar5 + 0x1a8);
        __ZNSt3__15mutex6unlockEv(plVar12);
        plVar6 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
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
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar12 = plVar6;
          }
        }
        plVar6 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
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
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar12 = plVar6;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 1;
          do {
            lVar5 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar12 = plVar7;
          }
        }
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            lVar5 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar12 = plVar8;
          }
        }
        if (plVar9 == (long *)0x0) {
          return plVar12;
        }
        plVar8 = plVar9 + 1;
        do {
          lVar5 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        plVar12 = plVar9;
      }
      return plVar12;
    }
    lVar17 = *(long *)(lVar5 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar17 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar16 = &PTR_PTR_113305588;
  ppuVar15 = ppuVar16;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)0x0;
  if (ppuVar15 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8b8,auStack_480,0x400,auStack_880,0x400,ppuVar15[0x13],ppuVar15[0xf],
                  ppuVar15 + 0x14,0x400);
    puStack_928 = puStack_8a0;
    uStack_920 = uStack_898;
    puStack_910 = puStack_8b8;
    uStack_908 = uStack_8b0;
    uStack_918 = uStack_890;
    if (iStack_888 != 0) {
      puStack_928 = &UNK_10f6c352e;
      uStack_920 = 0x10;
      puStack_910 = &UNK_10f6c352e;
      uStack_908 = 0x10;
      uStack_918 = 0;
      uStack_8a8 = 0;
    }
    puVar19 = ppuVar15[0x12];
    puVar18 = ppuVar15[0xb];
    uVar10 = 0;
    _clock_gettime_nsec_np();
    uVar11 = uVar10;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8f8 = ppuVar15 + 1;
    uStack_8c8 = *(undefined4 *)(ppuVar15 + 0xe);
    uStack_8d0 = uVar11 & 0xffffffff;
    ppuStack_8c0 = ppuVar15 + 0x10;
    plVar12 = (long *)*ppuVar15;
    ppuVar16 = (undefined **)&ppuStack_8f8;
    uStack_900 = uStack_8a8;
    puStack_8f0 = puVar18;
    puStack_8e8 = puVar19;
    uStack_8e0 = (ulong)(puVar19 != (undefined *)0x0);
    uStack_8d8 = uVar10;
    FUN_10ae0784c(plVar12,ppuVar16,&puStack_910,&puStack_928);
  }
  iVar13 = (int)ppuVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar12;
  }
  ___stack_chk_fail();
  if (iVar13 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar12);
  return plVar12;
}



/* Entry: 10a88fd44; end: 10a890113;  */

long * FUN_10a88fd44(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1008];
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar15 = *(long *)(param_1 + 0x378);
  if (((lVar15 == 0) || (*(char *)(lVar15 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0x368) != 0))
  {
    if (**(int **)(param_1 + 0x1e8) == 2) {
      lVar17 = *(long *)(param_1 + 0x570);
      lVar15 = lVar17 + 0x60;
      FUN_10a8aaad4(lVar15,*param_2);
      if (lVar15 == 0) {
        ppuVar14 = &PTR_PTR_113304820;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar14,&PTR_PTR_113304820);
        plVar11 = (long *)*param_4;
        plVar8 = (long *)param_4[1];
        if (plVar8 == (long *)0x0) {
          plStack_78 = (long *)0x0;
        }
        else {
          plVar7 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plStack_78 = plVar8;
          } while (cVar3 != '\0');
        }
        plStack_80 = plVar11;
        FUN_10a87a670();
        plVar7 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar6 = plStack_78 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar2 = *(long *)(lVar15 + 0x20);
        plVar8 = *(long **)(lVar15 + 0x28);
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_80 = (long *)*param_3;
        plVar7 = (long *)param_3[1];
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_70 = *param_4;
        plVar6 = (long *)param_4[1];
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar15 = *(long *)(lVar17 + 0x30);
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_78 = plVar7;
        plStack_68 = plVar6;
        FUN_10a8821b0(lVar2 + 0x18,lVar15 + 0x168,&plStack_80);
        __ZNSt3__15mutex4lockEv(lVar15 + 0x1a8);
        FUN_10a0b4ec0(lVar15 + 400,lVar2 + 0x18);
        plVar11 = (long *)(lVar15 + 0x1a8);
        __ZNSt3__15mutex6unlockEv(plVar11);
        plVar5 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        plVar5 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            lVar15 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar11 = plVar6;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar11 = plVar8;
      }
      return plVar11;
    }
    lVar15 = *(long *)(param_1 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar15 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar14 = &PTR_PTR_113305588;
  ppuVar13 = ppuVar14;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar13[0x13],ppuVar13[0xf],
                  ppuVar13 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar18 = ppuVar13[0x12];
    puVar16 = ppuVar13[0xb];
    uVar9 = 0;
    _clock_gettime_nsec_np();
    uVar10 = uVar9;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar13 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar13 + 0xe);
    uStack_8c0 = uVar10 & 0xffffffff;
    ppuStack_8b0 = ppuVar13 + 0x10;
    plVar11 = (long *)*ppuVar13;
    ppuVar14 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar16;
    puStack_8d8 = puVar18;
    uStack_8d0 = (ulong)(puVar18 != (undefined *)0x0);
    uStack_8c8 = uVar9;
    FUN_10ae0784c(plVar11,ppuVar14,&puStack_900,&puStack_918);
  }
  iVar12 = (int)ppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar11;
  }
  ___stack_chk_fail();
  if (iVar12 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar11);
  return plVar11;
}



/* Entry: 10a890114; end: 10a8901cb;  */

void FUN_10a890114(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88fb88(param_1,param_2,FUN_10a88fd44,0,param_3,param_4,param_5);
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



/* Entry: 10a8901cc; end: 10a89059b;  */

long * FUN_10a8901cc(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1008];
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar15 = *(long *)(param_1 + 0x378);
  if (((lVar15 == 0) || (*(char *)(lVar15 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0x368) != 0))
  {
    if (**(int **)(param_1 + 0x1e8) == 2) {
      lVar17 = *(long *)(param_1 + 0x570);
      lVar15 = lVar17 + 0x60;
      FUN_10a8aaad4(lVar15,*param_2);
      if (lVar15 == 0) {
        ppuVar14 = &PTR_PTR_113304820;
        FUN_10ae079a0();
        FUN_10ae07cd4(ppuVar14,&PTR_PTR_113304820);
        plVar11 = (long *)*param_4;
        plVar8 = (long *)param_4[1];
        if (plVar8 == (long *)0x0) {
          plStack_78 = (long *)0x0;
        }
        else {
          plVar7 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plStack_78 = plVar8;
          } while (cVar3 != '\0');
        }
        plStack_80 = plVar11;
        FUN_10a87a670();
        plVar7 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar6 = plStack_78 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar2 = *(long *)(lVar15 + 0x20);
        plVar8 = *(long **)(lVar15 + 0x28);
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_80 = (long *)*param_3;
        plVar7 = (long *)param_3[1];
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_70 = *param_4;
        plVar6 = (long *)param_4[1];
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar15 = *(long *)(lVar17 + 0x30);
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_78 = plVar7;
        plStack_68 = plVar6;
        FUN_10a8821b0(lVar2 + 0x18,lVar15 + 0x1e8,&plStack_80);
        __ZNSt3__15mutex4lockEv(lVar15 + 0x228);
        FUN_10a0b4ec0(lVar15 + 0x210,lVar2 + 0x18);
        plVar11 = (long *)(lVar15 + 0x228);
        __ZNSt3__15mutex6unlockEv(plVar11);
        plVar5 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        plVar5 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar15 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar11 = plVar5;
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            lVar15 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar11 = plVar6;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 1;
          do {
            lVar15 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar11 = plVar7;
          }
        }
        if (plVar8 == (long *)0x0) {
          return plVar11;
        }
        plVar7 = plVar8 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar11 = plVar8;
      }
      return plVar11;
    }
    lVar15 = *(long *)(param_1 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar15 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar14 = &PTR_PTR_1133055e0;
  ppuVar13 = ppuVar14;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar13[0x13],ppuVar13[0xf],
                  ppuVar13 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar18 = ppuVar13[0x12];
    puVar16 = ppuVar13[0xb];
    uVar9 = 0;
    _clock_gettime_nsec_np();
    uVar10 = uVar9;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar13 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar13 + 0xe);
    uStack_8c0 = uVar10 & 0xffffffff;
    ppuStack_8b0 = ppuVar13 + 0x10;
    plVar11 = (long *)*ppuVar13;
    ppuVar14 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar16;
    puStack_8d8 = puVar18;
    uStack_8d0 = (ulong)(puVar18 != (undefined *)0x0);
    uStack_8c8 = uVar9;
    FUN_10ae0784c(plVar11,ppuVar14,&puStack_900,&puStack_918);
  }
  iVar12 = (int)ppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar11;
  }
  ___stack_chk_fail();
  if (iVar12 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar11);
  return plVar11;
}



/* Entry: 10a89059c; end: 10a890653;  */

void FUN_10a89059c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88fb88(param_1,param_2,FUN_10a8901cc,0,param_3,param_4,param_5);
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



/* Entry: 10a890654; end: 10a890acf;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a890654(long *******param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *******ppppppplVar1;
  long *****ppppplVar2;
  char cVar3;
  bool bVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  ulong uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long *****ppppplVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long ******pppppplVar18;
  undefined *puVar19;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [992];
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long lStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  long in_stack_ffffffffffffffa0;
  
  pppppplVar13 = param_1[0x6f];
  if (((pppppplVar13 == (long ******)0x0) || (*(char *)(pppppplVar13 + 0x15) == '\x01')) &&
     (param_1[0x6d] != (long ******)0x0)) {
    if (*(int *)param_1[0x3d] == 2) {
      ppppppplVar9 = param_1;
      FUN_10a890ad0();
      if (((ulong)ppppppplVar9 & 1) == 0) {
        ppppppplVar14 = (long *******)*param_4;
        if (ppppppplVar14 != (long *******)0x0) {
          ppppppplVar9 = (long *******)&ppppppplStack_70;
          func_0x000107c2b054(ppppppplVar9,&UNK_10f67f57b);
          if (*(char *)(ppppppplVar14 + 8) == '\x01') {
            ppppppplVar9 = (long *******)&ppppppplStack_70;
            (*(code *)*ppppppplVar14)(ppppppplVar9,ppppppplVar14);
          }
          else if (*(char *)(ppppppplVar14 + 8) == '\x02') {
            FUN_10a05aad0(ppppppplVar14,&ppppppplStack_70);
            ppppppplVar9 = ppppppplVar14;
          }
          if (in_stack_ffffffffffffffa0 < 0) {
            __ZdlPv(ppppppplStack_70);
            ppppppplVar9 = ppppppplStack_70;
          }
        }
      }
      else {
        pppppplVar18 = param_1[0xae];
        uVar17 = *param_2;
        pppppplVar13 = pppppplVar18 + 0xc;
        FUN_10a8aaad4(pppppplVar13,uVar17);
        if (pppppplVar13 == (long ******)0x0) {
          ppuVar12 = &PTR_PTR_113304820;
          FUN_10ae079a0();
          FUN_10ae07cd4(ppuVar12,&PTR_PTR_113304820);
          ppppppplVar9 = (long *******)*param_4;
          ppppppplStack_68 = (long *******)param_4[1];
          if (ppppppplStack_68 == (long *******)0x0) {
            ppppppplStack_88 = (long *******)0x0;
          }
          else {
            ppppppplVar14 = ppppppplStack_68 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
              if (bVar4) {
                *ppppppplVar14 = (long ******)((long)*ppppppplVar14 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
              if (bVar4) {
                *ppppppplVar14 = (long ******)((long)*ppppppplVar14 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
              ppppppplStack_88 = ppppppplStack_68;
            } while (cVar3 != '\0');
          }
          ppppppplStack_90 = ppppppplVar9;
          ppppppplStack_70 = ppppppplVar9;
          FUN_10a87a670();
          ppppppplVar14 = ppppppplStack_88;
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar6 = ppppppplStack_88 + 1;
            do {
              pppppplVar13 = *ppppppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
              if (bVar4) {
                *ppppppplVar6 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_88)[2])(ppppppplStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          if (ppppppplStack_68 == (long *******)0x0) {
            return ppppppplVar9;
          }
          ppppppplVar14 = ppppppplStack_68 + 1;
          do {
            pppppplVar13 = *ppppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar4) {
              *ppppppplVar14 = (long ******)((long)pppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
            ppppppplVar6 = ppppppplStack_68;
          } while (cVar3 != '\0');
        }
        else {
          pppppplVar13 = pppppplVar18 + 0xc;
          FUN_10a8aba9c(pppppplVar13,uVar17,param_2);
          ppppplVar2 = pppppplVar13[4];
          ppppppplVar6 = (long *******)pppppplVar13[5];
          if (ppppppplVar6 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar6 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppplStack_90 = (long *******)*param_3;
          ppppppplStack_88 = (long *******)param_3[1];
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar9 = ppppppplStack_88 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_80 = *param_4;
          ppppppplVar14 = (long *******)param_4[1];
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar14 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppplVar15 = pppppplVar18[6];
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar9 = ppppppplStack_88 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar14 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppplStack_78 = ppppppplVar14;
          ppppppplStack_70 = ppppppplStack_90;
          ppppppplStack_68 = ppppppplStack_88;
          FUN_10a8821b0(ppppplVar2 + 3,ppppplVar15 + 0x4d,&ppppppplStack_90);
          __ZNSt3__15mutex4lockEv(ppppplVar15 + 0x55);
          FUN_10a0b4ec0(ppppplVar15 + 0x52,ppppplVar2 + 3);
          ppppppplVar9 = (long *******)(ppppplVar15 + 0x55);
          __ZNSt3__15mutex6unlockEv(ppppppplVar9);
          ppppppplVar5 = ppppppplStack_78;
          if (ppppppplStack_78 != (long *******)0x0) {
            ppppppplVar1 = ppppppplStack_78 + 1;
            do {
              pppppplVar13 = *ppppppplVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
              if (bVar4) {
                *ppppppplVar1 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_78)[2])(ppppppplStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar5);
              ppppppplVar9 = ppppppplVar5;
            }
          }
          ppppppplVar5 = ppppppplStack_88;
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar1 = ppppppplStack_88 + 1;
            do {
              pppppplVar13 = *ppppppplVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
              if (bVar4) {
                *ppppppplVar1 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_88)[2])(ppppppplStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar5);
              ppppppplVar9 = ppppppplVar5;
            }
          }
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar5 = ppppppplVar14 + 1;
            do {
              pppppplVar13 = *ppppppplVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar5,0x10);
              if (bVar4) {
                *ppppppplVar5 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          ppppppplVar14 = ppppppplStack_68;
          if (ppppppplStack_68 != (long *******)0x0) {
            ppppppplVar5 = ppppppplStack_68 + 1;
            do {
              pppppplVar13 = *ppppppplVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar5,0x10);
              if (bVar4) {
                *ppppppplVar5 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_68)[2])(ppppppplStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          if (ppppppplVar6 == (long *******)0x0) {
            return ppppppplVar9;
          }
          ppppppplVar14 = ppppppplVar6 + 1;
          do {
            pppppplVar13 = *ppppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar4) {
              *ppppppplVar14 = (long ******)((long)pppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (pppppplVar13 == (long ******)0x0) {
          (*(code *)(*ppppppplVar6)[2])(ppppppplVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar6);
          ppppppplVar9 = ppppppplVar6;
        }
      }
      return ppppppplVar9;
    }
    pppppplVar13 = param_1[0x6f];
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(pppppplVar13 + 0x15));
  func_0x00010ae02ecc();
  ppuVar12 = &PTR_PTR_1133058f8;
  ppuVar11 = ppuVar12;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  ppppppplStack_70 = *(long ********)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar9 = (long *******)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                  ppuVar11 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar19 = ppuVar11[0x12];
    puVar16 = ppuVar11[0xb];
    uVar7 = 0;
    _clock_gettime_nsec_np();
    uVar8 = uVar7;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar11 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
    uStack_8c0 = uVar8 & 0xffffffff;
    ppuStack_8b0 = ppuVar11 + 0x10;
    ppppppplVar9 = (long *******)*ppuVar11;
    ppuVar12 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar16;
    puStack_8d8 = puVar19;
    uStack_8d0 = (ulong)(puVar19 != (undefined *)0x0);
    uStack_8c8 = uVar7;
    FUN_10ae0784c(ppppppplVar9,ppuVar12,&puStack_900,&puStack_918);
  }
  iVar10 = (int)ppuVar12;
  if ((long *******)*(long *******)PTR____stack_chk_guard_11034bdc0 == ppppppplStack_70) {
    return ppppppplVar9;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(ppppppplVar9);
  return ppppppplVar9;
}



/* Entry: 10a890ad0; end: 10a890b4b;  */

bool FUN_10a890ad0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x240);
  if ((lVar7 != 0) && (lVar8 = *(long *)(param_1 + 0x230), lVar8 != 0)) {
    bVar4 = *(byte *)(lVar8 + 0x47);
    uVar1 = *(ulong *)(lVar8 + 0x38);
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(lVar7 + 0x47);
    uVar2 = *(ulong *)(lVar7 + 0x38);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      plVar6 = (long *)*(long *)(lVar8 + 0x30);
      if (-1 < (char)bVar4) {
        plVar6 = (long *)(lVar8 + 0x30);
      }
      plVar3 = (long *)*(long *)(lVar7 + 0x30);
      if (-1 < (char)bVar5) {
        plVar3 = (long *)(lVar7 + 0x30);
      }
      _memcmp(plVar6,plVar3);
      return (int)plVar6 == 0;
    }
  }
  return false;
}



/* Entry: 10a890b4c; end: 10a890c03;  */

void FUN_10a890b4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88fb88(param_1,param_2,FUN_10a890654,0,param_3,param_4,param_5);
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



/* Entry: 10a890c04; end: 10a89107f;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a890c04(long *******param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *******ppppppplVar1;
  long *****ppppplVar2;
  char cVar3;
  bool bVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  ulong uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long *****ppppplVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long ******pppppplVar18;
  undefined *puVar19;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [992];
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long lStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  long in_stack_ffffffffffffffa0;
  
  pppppplVar13 = param_1[0x6f];
  if (((pppppplVar13 == (long ******)0x0) || (*(char *)(pppppplVar13 + 0x15) == '\x01')) &&
     (param_1[0x6d] != (long ******)0x0)) {
    if (*(int *)param_1[0x3d] == 2) {
      ppppppplVar9 = param_1;
      FUN_10a890ad0();
      if (((ulong)ppppppplVar9 & 1) == 0) {
        ppppppplVar14 = (long *******)*param_4;
        if (ppppppplVar14 != (long *******)0x0) {
          ppppppplVar9 = (long *******)&ppppppplStack_70;
          func_0x000107c2b054(ppppppplVar9,&UNK_10f67f57b);
          if (*(char *)(ppppppplVar14 + 8) == '\x01') {
            ppppppplVar9 = (long *******)&ppppppplStack_70;
            (*(code *)*ppppppplVar14)(ppppppplVar9,ppppppplVar14);
          }
          else if (*(char *)(ppppppplVar14 + 8) == '\x02') {
            FUN_10a05aad0(ppppppplVar14,&ppppppplStack_70);
            ppppppplVar9 = ppppppplVar14;
          }
          if (in_stack_ffffffffffffffa0 < 0) {
            __ZdlPv(ppppppplStack_70);
            ppppppplVar9 = ppppppplStack_70;
          }
        }
      }
      else {
        pppppplVar18 = param_1[0xae];
        uVar17 = *param_2;
        pppppplVar13 = pppppplVar18 + 0xc;
        FUN_10a8aaad4(pppppplVar13,uVar17);
        if (pppppplVar13 == (long ******)0x0) {
          ppuVar12 = &PTR_PTR_113304820;
          FUN_10ae079a0();
          FUN_10ae07cd4(ppuVar12,&PTR_PTR_113304820);
          ppppppplVar9 = (long *******)*param_4;
          ppppppplStack_68 = (long *******)param_4[1];
          if (ppppppplStack_68 == (long *******)0x0) {
            ppppppplStack_88 = (long *******)0x0;
          }
          else {
            ppppppplVar14 = ppppppplStack_68 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
              if (bVar4) {
                *ppppppplVar14 = (long ******)((long)*ppppppplVar14 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
              if (bVar4) {
                *ppppppplVar14 = (long ******)((long)*ppppppplVar14 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
              ppppppplStack_88 = ppppppplStack_68;
            } while (cVar3 != '\0');
          }
          ppppppplStack_90 = ppppppplVar9;
          ppppppplStack_70 = ppppppplVar9;
          FUN_10a87a670();
          ppppppplVar14 = ppppppplStack_88;
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar6 = ppppppplStack_88 + 1;
            do {
              pppppplVar13 = *ppppppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
              if (bVar4) {
                *ppppppplVar6 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_88)[2])(ppppppplStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          if (ppppppplStack_68 == (long *******)0x0) {
            return ppppppplVar9;
          }
          ppppppplVar14 = ppppppplStack_68 + 1;
          do {
            pppppplVar13 = *ppppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar4) {
              *ppppppplVar14 = (long ******)((long)pppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
            ppppppplVar6 = ppppppplStack_68;
          } while (cVar3 != '\0');
        }
        else {
          pppppplVar13 = pppppplVar18 + 0xc;
          FUN_10a8aba9c(pppppplVar13,uVar17,param_2);
          ppppplVar2 = pppppplVar13[4];
          ppppppplVar6 = (long *******)pppppplVar13[5];
          if (ppppppplVar6 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar6 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppplStack_90 = (long *******)*param_3;
          ppppppplStack_88 = (long *******)param_3[1];
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar9 = ppppppplStack_88 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_80 = *param_4;
          ppppppplVar14 = (long *******)param_4[1];
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar14 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppplVar15 = pppppplVar18[6];
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar9 = ppppppplStack_88 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar9 = ppppppplVar14 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
              if (bVar4) {
                *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppplStack_78 = ppppppplVar14;
          ppppppplStack_70 = ppppppplStack_90;
          ppppppplStack_68 = ppppppplStack_88;
          FUN_10a8821b0(ppppplVar2 + 3,ppppplVar15 + 0x5d,&ppppppplStack_90);
          __ZNSt3__15mutex4lockEv(ppppplVar15 + 0x65);
          FUN_10a0b4ec0(ppppplVar15 + 0x62,ppppplVar2 + 3);
          ppppppplVar9 = (long *******)(ppppplVar15 + 0x65);
          __ZNSt3__15mutex6unlockEv(ppppppplVar9);
          ppppppplVar5 = ppppppplStack_78;
          if (ppppppplStack_78 != (long *******)0x0) {
            ppppppplVar1 = ppppppplStack_78 + 1;
            do {
              pppppplVar13 = *ppppppplVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
              if (bVar4) {
                *ppppppplVar1 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_78)[2])(ppppppplStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar5);
              ppppppplVar9 = ppppppplVar5;
            }
          }
          ppppppplVar5 = ppppppplStack_88;
          if (ppppppplStack_88 != (long *******)0x0) {
            ppppppplVar1 = ppppppplStack_88 + 1;
            do {
              pppppplVar13 = *ppppppplVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
              if (bVar4) {
                *ppppppplVar1 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_88)[2])(ppppppplStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar5);
              ppppppplVar9 = ppppppplVar5;
            }
          }
          if (ppppppplVar14 != (long *******)0x0) {
            ppppppplVar5 = ppppppplVar14 + 1;
            do {
              pppppplVar13 = *ppppppplVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar5,0x10);
              if (bVar4) {
                *ppppppplVar5 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          ppppppplVar14 = ppppppplStack_68;
          if (ppppppplStack_68 != (long *******)0x0) {
            ppppppplVar5 = ppppppplStack_68 + 1;
            do {
              pppppplVar13 = *ppppppplVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar5,0x10);
              if (bVar4) {
                *ppppppplVar5 = (long ******)((long)pppppplVar13 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_68)[2])(ppppppplStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar14);
              ppppppplVar9 = ppppppplVar14;
            }
          }
          if (ppppppplVar6 == (long *******)0x0) {
            return ppppppplVar9;
          }
          ppppppplVar14 = ppppppplVar6 + 1;
          do {
            pppppplVar13 = *ppppppplVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar14,0x10);
            if (bVar4) {
              *ppppppplVar14 = (long ******)((long)pppppplVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (pppppplVar13 == (long ******)0x0) {
          (*(code *)(*ppppppplVar6)[2])(ppppppplVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar6);
          ppppppplVar9 = ppppppplVar6;
        }
      }
      return ppppppplVar9;
    }
    pppppplVar13 = param_1[0x6f];
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(pppppplVar13 + 0x15));
  func_0x00010ae02ecc();
  ppuVar12 = &PTR_PTR_113305958;
  ppuVar11 = ppuVar12;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  ppppppplStack_70 = *(long ********)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar9 = (long *******)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                  ppuVar11 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar19 = ppuVar11[0x12];
    puVar16 = ppuVar11[0xb];
    uVar7 = 0;
    _clock_gettime_nsec_np();
    uVar8 = uVar7;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar11 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
    uStack_8c0 = uVar8 & 0xffffffff;
    ppuStack_8b0 = ppuVar11 + 0x10;
    ppppppplVar9 = (long *******)*ppuVar11;
    ppuVar12 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar16;
    puStack_8d8 = puVar19;
    uStack_8d0 = (ulong)(puVar19 != (undefined *)0x0);
    uStack_8c8 = uVar7;
    FUN_10ae0784c(ppppppplVar9,ppuVar12,&puStack_900,&puStack_918);
  }
  iVar10 = (int)ppuVar12;
  if ((long *******)*(long *******)PTR____stack_chk_guard_11034bdc0 == ppppppplStack_70) {
    return ppppppplVar9;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(ppppppplVar9);
  return ppppppplVar9;
}



/* Entry: 10a891080; end: 10a891137;  */

void FUN_10a891080(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88fb88(param_1,param_2,FUN_10a890c04,0,param_3,param_4,param_5);
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



/* Entry: 10a891138; end: 10a89135b;  */

/* WARNING: Removing unreachable block (ram,0x00010a891288) */
/* WARNING: Removing unreachable block (ram,0x00010a891290) */

void FUN_10a891138(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a89135c(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_10a891380();
  }
  lVar9 = plVar5[0x6f];
  if ((((lVar9 == 0) || (*(char *)(lVar9 + 0xa8) == '\x01')) && (plVar5[0x6d] != 0)) &&
     (lVar9 = plVar5[0x6f], *(int *)plVar5[0x3d] == 2)) {
    if ((*(byte *)(lVar9 + 0xab) & 1) == 0) {
      ppuVar7 = &PTR_PTR_1133051b8;
LAB_10a8912c4:
      ppuVar6 = ppuVar7;
      FUN_10ae079a0(0,ppuVar7);
      goto LAB_10a891278;
    }
    if (param_2 == (long *)0x0) {
      param_2 = (long *)&UNK_10f67d9eb;
    }
    else if (*(char *)((long)param_2 + 0x47) < '\0') {
      if (param_2[7] == 0) goto LAB_10a891308;
      param_2 = (long *)param_2[6];
    }
    else {
      if (*(char *)((long)param_2 + 0x47) == '\0') {
LAB_10a891308:
        ppuVar7 = &PTR_PTR_113305638;
        goto LAB_10a8912c4;
      }
      param_2 = param_2 + 6;
    }
    (**(code **)(*(long *)plVar5[0x6d] + 0x138))((long *)plVar5[0x6d],param_2);
  }
  else {
    func_0x00010ae02ecc(0,*(undefined1 *)(lVar9 + 0xa8));
    func_0x00010ae02ecc();
    ppuVar7 = &PTR_PTR_113305168;
    ppuVar6 = ppuVar7;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02edc();
LAB_10a891278:
    FUN_10ae07cd4(ppuVar6,ppuVar7);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar9 = plVar4[0x59];
  uVar8 = lVar9 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar9 + 2];
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
  lVar9 = *plVar5;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar9;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar9 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar9)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar9,lVar11);
          *plVar5 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
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
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar9 = lVar9 + uVar8 * 0x10;
    while (lVar13 != lVar9) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a89135c; end: 10a89137f;  */

undefined ** FUN_10a89135c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  if ((uint)param_1 < 2) {
    return param_1;
  }
  ppuVar1 = (undefined **)0x1;
  ppuVar3 = (undefined **)0x1;
  FUN_10a052ee0(1,1,param_1);
  ppuVar4 = ppuVar1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854();
    ppuVar3 = ppuVar4;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar1 != (undefined **)0x0) {
        return ppuVar1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  lVar5 = *(long *)(puVar2 + 0x378);
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0xa8) == '\x01')) && (*(long *)(puVar2 + 0x368) != 0)) {
    if (**(int **)(puVar2 + 0x1e8) == 2) {
      lVar5 = *(long *)(puVar2 + 0x570) + 0x60;
      FUN_10a8aaad4(lVar5,*ppuVar3);
      if (lVar5 != 0) {
        return *(undefined ***)(*(long *)(lVar5 + 0x20) + 0x38);
      }
      ppuVar4 = &PTR_PTR_113304858;
      ppuVar3 = ppuVar4;
      FUN_10ae079a0();
      goto LAB_10a891494;
    }
    lVar5 = *(long *)(puVar2 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar5 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar3 = &PTR_PTR_113305690;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  ppuVar4 = &PTR_PTR_113305690;
LAB_10a891494:
  FUN_10ae07cd4(ppuVar3,ppuVar4);
  return (undefined **)0xffffffffffffffff;
}



/* Entry: 10a891380; end: 10a8913e7;  */

undefined ** FUN_10a891380(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a053854();
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
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  lVar4 = *(long *)(puVar2 + 0x378);
  if (((lVar4 == 0) || (*(char *)(lVar4 + 0xa8) == '\x01')) && (*(long *)(puVar2 + 0x368) != 0)) {
    if (**(int **)(puVar2 + 0x1e8) == 2) {
      lVar4 = *(long *)(puVar2 + 0x570) + 0x60;
      FUN_10a8aaad4(lVar4,*param_2);
      if (lVar4 != 0) {
        return *(undefined ***)(*(long *)(lVar4 + 0x20) + 0x38);
      }
      ppuVar3 = &PTR_PTR_113304858;
      ppuVar1 = ppuVar3;
      FUN_10ae079a0();
      goto LAB_10a891494;
    }
    lVar4 = *(long *)(puVar2 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar4 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar1 = &PTR_PTR_113305690;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  ppuVar3 = &PTR_PTR_113305690;
LAB_10a891494:
  FUN_10ae07cd4(ppuVar1,ppuVar3);
  return (undefined **)0xffffffffffffffff;
}



/* Entry: 10a8913e8; end: 10a8914c7;  */

undefined8 FUN_10a8913e8(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x378);
  if (((lVar3 == 0) || (*(char *)(lVar3 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0x368) != 0)) {
    if (**(int **)(param_1 + 0x1e8) == 2) {
      lVar3 = *(long *)(param_1 + 0x570) + 0x60;
      FUN_10a8aaad4(lVar3,*param_2);
      if (lVar3 != 0) {
        return *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x38);
      }
      ppuVar2 = &PTR_PTR_113304858;
      ppuVar1 = ppuVar2;
      FUN_10ae079a0();
      goto LAB_10a891494;
    }
    lVar3 = *(long *)(param_1 + 0x378);
  }
  func_0x00010ae02ecc(0,*(undefined1 *)(lVar3 + 0xa8));
  func_0x00010ae02ecc();
  ppuVar1 = &PTR_PTR_113305690;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02edc();
  ppuVar2 = &PTR_PTR_113305690;
LAB_10a891494:
  FUN_10ae07cd4(ppuVar1,ppuVar2);
  return 0xffffffffffffffff;
}



/* Entry: 10a8914c8; end: 10a8915e3;  */

void FUN_10a8914c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  plVar7 = param_2;
  FUN_10a88bb50(param_2,param_3);
  FUN_10a5cc85c(param_5);
  FUN_10a4ba370(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a8913e8(plVar7,&stack0xffffffffffffffb0);
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
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(long)plVar7;
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
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
  lVar10 = *plVar7;
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
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
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



/* Entry: 10a8915e4; end: 10a891697;  */

void FUN_10a8915e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a860544(param_2);
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



/* Entry: 10a891698; end: 10a89177b;  */

void FUN_10a891698(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a89177c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x44];
  plVar1 = (long *)plVar5[0x43];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x22f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x22f);
    plVar1 = plVar5 + 0x43;
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



/* Entry: 10a89177c; end: 10a8917e3;  */

/* WARNING: Possible PIC construction at 0x00010a891ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a891bac) */
/* WARNING: Removing unreachable block (ram,0x00010a891bc0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a891bbc) */

void FUN_10a89177c(undefined **param_1,undefined **param_2,undefined **param_3,undefined ***param_4)

{
  undefined ***pppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ****ppppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined4 *extraout_x8;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined ***unaff_x20;
  undefined **unaff_x21;
  long lVar18;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined ***pppuVar19;
  undefined *puVar20;
  undefined ***unaff_x24;
  undefined *puVar21;
  undefined ***unaff_x25;
  undefined ***pppuVar22;
  ulong uVar23;
  undefined ***unaff_x26;
  undefined ***pppuVar24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar25;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  int iStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  long lStack_78;
  undefined8 ***pppuStack_30;
  code *pcStack_28;
  
  ppppuVar6 = (undefined ****)&stack0xffffffffffffffe0;
  ppuVar16 = param_1;
  func_0x000109898688();
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar8 = param_1;
    FUN_10a052c2c(param_1,ppuVar16);
    param_2 = ppuVar16;
    if (ppuVar8 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c25738;
      param_4 = (undefined ***)0x0;
      ___dynamic_cast();
      if (ppuVar8 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar16 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  pcStack_28 = FUN_10a8917e4;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar16;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*ppuVar16 + 0x58))();
  if (ppuVar8[0x59] < (undefined *)0x8) {
    ppuVar8[(long)(ppuVar8[0x59] + 0x4e)] = ppuVar8[0x5a];
    ppuVar8[0x59] = ppuVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar8 + 0x4b);
  }
  ppuVar9 = ppuVar16;
  FUN_10a88bb50(ppuVar16,param_2);
  FUN_10a891bb4(param_4);
  if (*(int *)param_3 == 7) {
    ppuVar10 = ppuVar16;
    (**(code **)(*ppuVar16 + 0x98))(ppuVar16,param_3[1]);
    ppuVar11 = ppuVar16;
    ppuStack_c8 = ppuVar10;
    (**(code **)(*ppuVar16 + 0x228))(ppuVar16,&ppuStack_c8);
    if ((int)ppuVar11 != 0) {
      ppuVar10 = ppuVar16;
      (**(code **)(*ppuVar16 + 0x58))();
      puVar12 = ppuVar10[0x48];
      if ((puVar12 == (undefined *)0x0) ||
         (___dynamic_cast(puVar12,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         puVar12 == (undefined *)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a891b44;
      }
      ppuStack_d0 = ppuStack_c8;
      ppuStack_c8 = (undefined **)0x0;
      iStack_d8 = 7;
      ppuStack_e0 = ppuVar16;
      FUN_10a688ac0(&ppuStack_c0,&ppuStack_e0,*(undefined8 *)(puVar12 + 8));
      if ((3 < iStack_d8) && (ppuStack_d0 != (undefined **)0x0)) {
        (**(code **)*ppuStack_d0)();
      }
    }
    if (ppuStack_c8 != (undefined **)0x0) {
      (**(code **)*ppuStack_c8)();
    }
    if (((ulong)ppuVar11 & 1) != 0) {
      pppuVar13 = (undefined ***)0x60;
      __Znwm();
      pppuVar24 = pppuVar13 + 1;
      *pppuVar24 = (undefined **)0x0;
      pppuVar13[2] = (undefined **)0x0;
      *pppuVar13 = &PTR_FUN_110c24710;
      pppuVar19 = pppuVar13 + 3;
      pppuVar13[4] = ppuStack_b8;
      *pppuVar19 = ppuStack_c0;
      if (ppuStack_b8 != (undefined **)0x0) {
        ppuVar16 = ppuStack_b8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = *ppuVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuVar13[6] = (undefined **)pppuStack_a8;
      pppuVar13[5] = (undefined **)pppuStack_b0;
      if (pppuStack_a8 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_a8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(pppuVar13 + 0xb) = 2;
      pppuStack_f0 = pppuVar19;
      pppuStack_e8 = pppuVar13;
      FUN_10a688c1c(&ppuStack_c0);
      pppuVar22 = pppuStack_e8;
      pppuVar1 = pppuStack_f0;
      if (((ppuVar9[0x6d] == (undefined *)0x0) ||
          (pppuVar19 = pppuStack_f0, *(int *)ppuVar9[0x3d] != 2)) ||
         (ppuVar9[0x46] == (undefined *)0x0)) {
        pppuStack_b0 = pppuVar19;
        if (pppuStack_e8 == (undefined ***)0x0) {
          ppuStack_c0 = (undefined **)0x10a8a5e1c;
          ppuStack_b8 = &PTR_DAT_110c24f48;
          pppuStack_a8 = (undefined ***)0x0;
        }
        else {
          pppuVar1 = pppuStack_e8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
            if (bVar4) {
              *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppuStack_c0 = (undefined **)0x10a8a5e1c;
          ppuStack_b8 = &PTR_DAT_110c24f48;
          pppuStack_a8 = pppuStack_e8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
            if (bVar4) {
              *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            ppuVar16 = *pppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
            if (bVar4) {
              *pppuVar1 = (undefined **)((long)ppuVar16 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar16 == (undefined **)0x0) {
            (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar22);
          }
        }
        FUN_10a873d04(ppuVar9,&ppuStack_c0);
        param_4 = &ppuStack_b8;
        pppuVar14 = param_4;
        (*(code *)*ppuStack_b8)();
      }
      else {
        pppuVar14 = pppuStack_f0;
        FUN_10a8742ac(pppuStack_f0,ppuVar9 + 0x46);
        pppuVar19 = pppuVar1;
        pppuVar22 = unaff_x25;
      }
      do {
        ppuVar16 = *pppuVar24;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
        if (bVar4) {
          *pppuVar24 = (undefined **)((long)ppuVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar16 == (undefined **)0x0) {
        (*(code *)(*pppuVar13)[2])(pppuVar13);
        pppuVar14 = pppuVar13;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *extraout_x8 = 0;
      ppppuVar25 = (undefined8 ****)pppuStack_30;
      pcVar5 = pcStack_28;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        FUN_10a881900(&pppuStack_f0);
        ppppuVar6 = &pppuStack_f0;
        param_1 = ppuVar8;
        unaff_x20 = pppuVar14;
        unaff_x21 = ppuVar9;
        unaff_x22 = pppuVar13;
        unaff_x23 = pppuVar19;
        unaff_x24 = param_4;
        unaff_x25 = pppuVar22;
        unaff_x26 = pppuVar24;
        ppppuVar25 = &pppuStack_30;
        pcVar5 = (code *)0x10a891bac;
      }
      ppuVar16 = ppuVar8 + 0x4b;
      puVar12 = ppuVar8[0x59];
      puVar15 = puVar12 + -1;
      ppuVar8[0x59] = puVar15;
      if (puVar15 < (undefined *)0x8) {
        puVar12 = ppuVar16[(long)(puVar12 + 2)];
        if (ppuVar8[0x5a] == puVar12) {
          return;
        }
      }
      else {
        puVar12 = *(undefined **)(ppuVar8[0x57] + -8);
        ppuVar8[0x57] = ppuVar8[0x57] + -8;
        if (ppuVar8[0x5a] == puVar12) {
          return;
        }
      }
      *(undefined8 *)((long)ppppuVar6 + -0x60) = unaff_x28;
      *(undefined8 *)((long)ppppuVar6 + -0x58) = unaff_x27;
      *(undefined ****)((long)ppppuVar6 + -0x50) = unaff_x26;
      *(undefined ****)((long)ppppuVar6 + -0x48) = unaff_x25;
      *(undefined ****)((long)ppppuVar6 + -0x40) = unaff_x24;
      *(undefined ****)((long)ppppuVar6 + -0x38) = unaff_x23;
      *(undefined ****)((long)ppppuVar6 + -0x30) = unaff_x22;
      *(undefined ***)((long)ppppuVar6 + -0x28) = unaff_x21;
      *(undefined ****)((long)ppppuVar6 + -0x20) = unaff_x20;
      *(undefined ***)((long)ppppuVar6 + -0x18) = param_1;
      *(undefined8 *****)((long)ppppuVar6 + -0x10) = ppppuVar25;
      *(code **)((long)ppppuVar6 + -8) = pcVar5;
      puVar15 = *ppuVar16;
      puVar17 = ppuVar8[0x4c];
      lVar18 = (long)puVar17 - (long)puVar15;
      puVar21 = (undefined *)(lVar18 >> 4);
      if (puVar21 < puVar12) {
        uVar23 = (long)puVar12 - (long)puVar21;
        puVar20 = ppuVar8[0x4d];
        if ((ulong)((long)puVar20 - (long)puVar17 >> 4) < uVar23) {
          if ((ulong)puVar12 >> 0x3c == 0) {
            puVar17 = (undefined *)((long)puVar20 - (long)puVar15 >> 3);
            if (puVar17 <= puVar12) {
              puVar17 = puVar12;
            }
            if (0x7fffffffffffffef < (ulong)((long)puVar20 - (long)puVar15)) {
              puVar17 = (undefined *)0xfffffffffffffff;
            }
            *(undefined ***)((long)ppppuVar6 + -0x68) = ppuVar16;
            if ((ulong)puVar17 >> 0x3c == 0) {
              lVar7 = (long)puVar17 << 4;
              __Znwm();
              lVar2 = lVar7 + lVar18;
              _bzero(lVar2,uVar23 * 0x10);
              puVar21 = (undefined *)(lVar2 + (long)puVar21 * -0x10);
              _memcpy(puVar21,puVar15,lVar18);
              *ppuVar16 = puVar21;
              ppuVar8[0x4c] = (undefined *)(lVar2 + uVar23 * 0x10);
              ppuVar8[0x4d] = (undefined *)(lVar7 + (long)puVar17 * 0x10);
              *(undefined **)((long)ppppuVar6 + -0x78) = puVar15;
              *(undefined **)((long)ppppuVar6 + -0x70) = puVar20;
              *(undefined **)((long)ppppuVar6 + -0x88) = puVar15;
              *(undefined **)((long)ppppuVar6 + -0x80) = puVar15;
              func_0x00010988c1b8((undefined1 *)((long)ppppuVar6 + -0x88));
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
        _bzero(puVar17,uVar23 * 0x10);
        ppuVar8[0x4c] = puVar17 + uVar23 * 0x10;
      }
      else if (puVar12 < puVar21) {
        while (puVar17 != puVar15 + (long)puVar12 * 0x10) {
          puVar17 = puVar17 + -0x10;
          func_0x00010988c204(puVar17);
        }
        ppuVar8[0x4c] = puVar15 + (long)puVar12 * 0x10;
      }
code_r0x00010988c138:
      ppuVar8[0x5a] = puVar12;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a891b44:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a891b48);
  (*pcVar5)();
}



/* Entry: 10a8917e4; end: 10a891bb3;  */

/* WARNING: Possible PIC construction at 0x00010a891ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a891bac) */
/* WARNING: Removing unreachable block (ram,0x00010a891bc0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a891bbc) */

void FUN_10a8917e4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined ***param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long *unaff_x19;
  undefined ***unaff_x20;
  long *unaff_x21;
  long lVar17;
  undefined ***unaff_x22;
  long lVar18;
  long lVar19;
  undefined ***unaff_x23;
  undefined ***pppuVar20;
  long lVar21;
  undefined ***unaff_x24;
  ulong uVar22;
  undefined ***unaff_x25;
  undefined ***pppuVar23;
  ulong uVar24;
  undefined ***unaff_x26;
  undefined ***pppuVar25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  long *plStack_c0;
  int iStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a891bb4(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar10 = param_2;
    plStack_a8 = plVar9;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_a8);
    if ((int)plVar10 != 0) {
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar11 = plVar9[0x48];
      if ((lVar11 == 0) ||
         (___dynamic_cast(lVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar11 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a891b44;
      }
      plStack_b0 = plStack_a8;
      plStack_a8 = (long *)0x0;
      iStack_b8 = 7;
      plStack_c0 = param_2;
      FUN_10a688ac0(&ppuStack_a0,&plStack_c0,*(undefined8 *)(lVar11 + 8));
      if ((3 < iStack_b8) && (plStack_b0 != (long *)0x0)) {
        (**(code **)*plStack_b0)();
      }
    }
    if (plStack_a8 != (long *)0x0) {
      (**(code **)*plStack_a8)();
    }
    if (((ulong)plVar10 & 1) != 0) {
      pppuVar12 = (undefined ***)0x60;
      __Znwm();
      pppuVar25 = pppuVar12 + 1;
      *pppuVar25 = (undefined **)0x0;
      pppuVar12[2] = (undefined **)0x0;
      *pppuVar12 = &PTR_FUN_110c24710;
      pppuVar20 = pppuVar12 + 3;
      pppuVar12[4] = ppuStack_98;
      *pppuVar20 = ppuStack_a0;
      if (ppuStack_98 != (undefined **)0x0) {
        ppuVar15 = ppuStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar4) {
            *ppuVar15 = *ppuVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuVar12[6] = (undefined **)pppuStack_88;
      pppuVar12[5] = (undefined **)pppuStack_90;
      if (pppuStack_88 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_88 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(pppuVar12 + 0xb) = 2;
      pppuStack_d0 = pppuVar20;
      pppuStack_c8 = pppuVar12;
      FUN_10a688c1c(&ppuStack_a0);
      pppuVar23 = pppuStack_c8;
      pppuVar2 = pppuStack_d0;
      if (((plVar8[0x6d] == 0) || (pppuVar20 = pppuStack_d0, *(int *)plVar8[0x3d] != 2)) ||
         (plVar8[0x46] == 0)) {
        pppuStack_90 = pppuVar20;
        if (pppuStack_c8 == (undefined ***)0x0) {
          ppuStack_a0 = (undefined **)0x10a8a5e1c;
          ppuStack_98 = &PTR_DAT_110c24f48;
          pppuStack_88 = (undefined ***)0x0;
        }
        else {
          pppuVar2 = pppuStack_c8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppuStack_a0 = (undefined **)0x10a8a5e1c;
          ppuStack_98 = &PTR_DAT_110c24f48;
          pppuStack_88 = pppuStack_c8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            ppuVar15 = *pppuVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar15 == (undefined **)0x0) {
            (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar23);
          }
        }
        FUN_10a873d04(plVar8,&ppuStack_a0);
        param_5 = &ppuStack_98;
        pppuVar13 = param_5;
        (*(code *)*ppuStack_98)();
      }
      else {
        pppuVar13 = pppuStack_d0;
        FUN_10a8742ac(pppuStack_d0,plVar8 + 0x46);
        pppuVar20 = pppuVar2;
        pppuVar23 = unaff_x25;
      }
      do {
        ppuVar15 = *pppuVar25;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar25,0x10);
        if (bVar4) {
          *pppuVar25 = (undefined **)((long)ppuVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar15 == (undefined **)0x0) {
        (*(code *)(*pppuVar12)[2])(pppuVar12);
        pppuVar13 = pppuVar12;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        FUN_10a881900(&pppuStack_d0);
        unaff_x30 = 0x10a891bac;
        register0x00000008 = (BADSPACEBASE *)&pppuStack_d0;
        unaff_x19 = plVar7;
        unaff_x20 = pppuVar13;
        unaff_x21 = plVar8;
        unaff_x22 = pppuVar12;
        unaff_x23 = pppuVar20;
        unaff_x24 = param_5;
        unaff_x25 = pppuVar23;
        unaff_x26 = pppuVar25;
        unaff_x29 = puVar1;
      }
      plVar8 = plVar7 + 0x4b;
      lVar11 = plVar7[0x59];
      uVar14 = lVar11 - 1;
      plVar7[0x59] = uVar14;
      if (uVar14 < 8) {
        uVar14 = plVar8[lVar11 + 2];
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
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar11 = *plVar8;
      lVar19 = plVar7[0x4c];
      lVar17 = lVar19 - lVar11;
      uVar22 = lVar17 >> 4;
      if (uVar22 < uVar14) {
        uVar24 = uVar14 - uVar22;
        lVar21 = plVar7[0x4d];
        if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
          if (uVar14 >> 0x3c == 0) {
            uVar16 = lVar21 - lVar11 >> 3;
            if (uVar16 <= uVar14) {
              uVar16 = uVar14;
            }
            if (0x7fffffffffffffef < (ulong)(lVar21 - lVar11)) {
              uVar16 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar8;
            if (uVar16 >> 0x3c == 0) {
              lVar6 = uVar16 << 4;
              __Znwm();
              lVar19 = lVar6 + lVar17;
              _bzero(lVar19,uVar24 * 0x10);
              lVar18 = lVar19 + uVar22 * -0x10;
              _memcpy(lVar18,lVar11,lVar17);
              *plVar8 = lVar18;
              plVar7[0x4c] = lVar19 + uVar24 * 0x10;
              plVar7[0x4d] = lVar6 + uVar16 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar11;
              *(long *)((long)register0x00000008 + -0x70) = lVar21;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar19,uVar24 * 0x10);
        plVar7[0x4c] = lVar19 + uVar24 * 0x10;
      }
      else if (uVar14 < uVar22) {
        lVar11 = lVar11 + uVar14 * 0x10;
        while (lVar19 != lVar11) {
          lVar19 = lVar19 + -0x10;
          func_0x00010988c204(lVar19);
        }
        plVar7[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar14;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a891b44:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a891b48);
  (*pcVar5)();
}



/* Entry: 10a891bb4; end: 10a891bd7;  */

void FUN_10a891bb4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110c24710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a891bd8; end: 10a891be7;  */

void FUN_10a891bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a891be8; end: 10a891c07;  */

void FUN_10a891be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24710;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a891c08; end: 10a891c2f;  */

undefined1  [16] FUN_10a891c08(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a891c2c);
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



/* Entry: 10a891c30; end: 10a891d4b;  */

void FUN_10a891c30(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a891d4c(param_5);
  FUN_10a059354(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a873b18(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a891d4c; end: 10a891d6f;  */

void FUN_10a891d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a89177c(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  uVar9 = plVar6[0x4b];
  plVar1 = (long *)plVar6[0x4a];
  if (-1 < (char)*(byte *)((long)plVar6 + 0x267)) {
    uVar9 = (ulong)*(byte *)((long)plVar6 + 0x267);
    plVar1 = plVar6 + 0x4a;
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



/* Entry: 10a891d70; end: 10a891e53;  */

void FUN_10a891d70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a89177c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x4b];
  plVar1 = (long *)plVar5[0x4a];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x267)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x267);
    plVar1 = plVar5 + 0x4a;
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



/* Entry: 10a891e54; end: 10a892017;  */

void FUN_10a891e54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a052e3c();
  if ((param_2[0x6d] == 0) || (*(int *)param_2[0x3d] != 2)) {
    func_0x00010ae02ecc(0,*(undefined4 *)param_2[0x3d]);
    ppuVar5 = &PTR_PTR_113303bb0;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303bb0);
    dVar15 = -1.0;
  }
  else {
    if (*(char *)(param_2[200] + 8) == '\x01') {
      plVar4 = param_2 + 199;
      (*(code *)param_2[199])();
    }
    else {
      __ZNSt3__16chrono12system_clock3nowEv();
      plVar4 = (long *)(param_5 / 1000);
    }
    if (1000 < (long)plVar4 - param_2[0xc6]) {
      plVar4 = (long *)param_2[0x6d];
      (**(code **)(*plVar4 + 0x118))();
      param_2[0xc5] = (long)plVar4;
      if (*(char *)(param_2[200] + 8) == '\x01') {
        plVar4 = param_2 + 199;
        (*(code *)param_2[199])();
      }
      else {
        __ZNSt3__16chrono12system_clock3nowEv();
        plVar4 = (long *)((long)plVar4 / 1000);
      }
      param_2[0xc6] = (long)plVar4;
    }
    dVar15 = (double)((long)plVar4 - param_2[0xc5]);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar15;
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



/* Entry: 10a892018; end: 10a89212f;  */

void FUN_10a892018(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  FUN_10a89177c(param_2,param_3);
  FUN_10a0743b0(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a89211c);
    (*pcVar2)();
  }
  uVar7 = *(ulong *)(param_4 + 2);
  uVar6 = uVar7 & 0x7fffffffffffffff;
  *param_1 = 2;
  *(bool *)(param_1 + 2) =
       uVar6 + 0xfff0000000000000 >> 0x35 < 0x3ff && uVar7 < 0x8000000000000000 ||
       (0x7ff0000000000000 < uVar6 ||
       (uVar7 - 1 < 0xfffffffffffff || (uVar6 == 0x7ff0000000000000 || uVar6 == 0)));
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
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar7 = lVar9 >> 4;
  if (uVar7 < uVar6) {
    uVar13 = uVar6 - uVar7;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar13 * 0x10);
          lVar10 = lVar11 + uVar7 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar13 * 0x10;
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
    _bzero(lVar11,uVar13 * 0x10);
    plVar4[0x4c] = lVar11 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar7) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a892130; end: 10a89225f;  */

void FUN_10a892130(undefined8 *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar5 = *(ulong *)(*(long *)(param_2 + 0x570) + 0x68);
  if (uVar5 != 0) {
    uVar7 = *param_3;
    uVar8 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
    uVar8 = (uVar7 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = uVar5 - 1;
    if ((uVar5 & uVar9) == 0) {
      uVar10 = uVar8 & uVar9;
    }
    else {
      uVar10 = uVar8;
      if (uVar5 <= uVar8) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar8 / uVar5;
        }
        uVar10 = uVar8 - uVar10 * uVar5;
      }
    }
    plVar11 = *(long **)(*(long *)(*(long *)(param_2 + 0x570) + 0x60) + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10a892208;
          uVar12 = plVar11[1];
          if (uVar8 - uVar12 != 0) break;
          if (plVar11[2] == uVar7) {
            lVar6 = plVar11[5];
            uVar13 = plVar11[4];
            param_1[1] = plVar11[5];
            *param_1 = uVar13;
            if (lVar6 == 0) {
              return;
            }
            plVar11 = (long *)(lVar6 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = *plVar11 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            return;
          }
        }
        if ((uVar5 & uVar9) == 0) {
          uVar12 = uVar12 & uVar9;
        }
        else if (uVar5 <= uVar12) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar12 / uVar5;
          }
          uVar12 = uVar12 - uVar3 * uVar5;
        }
      } while (uVar12 == uVar10);
    }
  }
LAB_10a892208:
  ppuVar4 = &PTR_PTR_113304858;
  FUN_10ae079a0(0,&PTR_PTR_113304858);
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_113304858);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a892260; end: 10a89240f;  */

void FUN_10a892260(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  plVar7 = param_2;
  FUN_10a89177c(param_2,param_3);
  FUN_10a5cc85c(param_5);
  FUN_10a4ba370(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a892130(&lStack_70,plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
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
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
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
  lVar10 = *plVar7;
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
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
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



/* Entry: 10a892410; end: 10a89259f;  */

/* WARNING: Removing unreachable block (ram,0x00010a892518) */
/* WARNING: Removing unreachable block (ram,0x00010a89251c) */
/* WARNING: Removing unreachable block (ram,0x00010a892524) */
/* WARNING: Removing unreachable block (ram,0x00010a89252c) */
/* WARNING: Removing unreachable block (ram,0x00010a892530) */

void FUN_10a892410(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a8925a0(param_5);
  if (*param_4 < 2) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = param_2;
    FUN_10a891380(param_2,param_4);
  }
  FUN_10a2a3be0(&stack0xffffffffffffffa0,param_2,param_4 + 4);
  FUN_10a87566c(plVar6,plVar14,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar16) {
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
          _bzero(lVar12,uVar16 * 0x10);
          lVar11 = lVar12 + uVar15 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar16 * 0x10;
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
    _bzero(lVar12,uVar16 * 0x10);
    plVar5[0x4c] = lVar12 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
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



/* Entry: 10a8925a0; end: 10a8925c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8926cc) */
/* WARNING: Removing unreachable block (ram,0x00010a8926d0) */
/* WARNING: Removing unreachable block (ram,0x00010a8926d8) */
/* WARNING: Removing unreachable block (ram,0x00010a8926e0) */
/* WARNING: Removing unreachable block (ram,0x00010a8926e4) */

void FUN_10a8925a0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar8 = 0;
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
  FUN_10a88bb50(plVar5,uVar8);
  FUN_10a892754(param_4);
  if (*param_1 < 2) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = plVar5;
    FUN_10a891380(plVar5,param_1);
  }
  FUN_10a2a424c(&stack0xffffffffffffff90,plVar5,param_1 + 4);
  FUN_10a876338(plVar7,plVar16,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffff98 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
    }
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar11 + 2];
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
  lVar11 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar18 * 0x10);
          lVar13 = lVar14 + uVar17 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar18 * 0x10;
          plVar6[0x4d] = lVar4 + uVar10 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a8925c4; end: 10a892753;  */

/* WARNING: Removing unreachable block (ram,0x00010a8926cc) */
/* WARNING: Removing unreachable block (ram,0x00010a8926d0) */
/* WARNING: Removing unreachable block (ram,0x00010a8926d8) */
/* WARNING: Removing unreachable block (ram,0x00010a8926e0) */
/* WARNING: Removing unreachable block (ram,0x00010a8926e4) */

void FUN_10a8925c4(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
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
  FUN_10a88bb50(param_2,param_3);
  FUN_10a892754(param_5);
  if (*param_4 < 2) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = param_2;
    FUN_10a891380(param_2,param_4);
  }
  FUN_10a2a424c(&stack0xffffffffffffffa0,param_2,param_4 + 4);
  FUN_10a876338(plVar6,plVar14,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar16) {
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
          _bzero(lVar12,uVar16 * 0x10);
          lVar11 = lVar12 + uVar15 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar16 * 0x10;
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
    _bzero(lVar12,uVar16 * 0x10);
    plVar5[0x4c] = lVar12 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
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



/* Entry: 10a892754; end: 10a892777;  */

void FUN_10a892754(undefined8 param_1)

{
  long lVar1;
  undefined8 *extraout_x8;
  long *plVar2;
  
  if ((int)param_1 == 2) {
    return;
  }
  lVar1 = 2;
  FUN_10a052ee0(2,0,param_1);
  lVar1 = *(long *)(lVar1 + 0x570);
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  func_0x00010a87aa5c(extraout_x8,*(undefined8 *)(lVar1 + 0x78));
  plVar2 = (long *)(lVar1 + 0x70);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x00010a87a948(extraout_x8,plVar2 + 2);
  }
  return;
}



/* Entry: 10a892778; end: 10a8927df;  */

void FUN_10a892778(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_2 + 0x570);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x00010a87aa5c(param_1,*(undefined8 *)(lVar1 + 0x78));
  plVar2 = (long *)(lVar1 + 0x70);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x00010a87a948(param_1,plVar2 + 2);
  }
  return;
}



/* Entry: 10a8927e0; end: 10a8928cb;  */

void FUN_10a8927e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a89177c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a892778(&stack0xffffffffffffffa8,plVar4);
  FUN_10a88ae9c(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 4);
  FUN_10a87f1e0(&stack0xffffffffffffffa8);
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


