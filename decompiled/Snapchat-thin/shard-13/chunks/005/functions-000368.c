/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a802cf4; end: 10a802daf;  */

void FUN_10a802cf4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[10];
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



/* Entry: 10a802db0; end: 10a802e6f;  */

void FUN_10a802db0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a800ee4(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 10) = (int)param_2;
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



/* Entry: 10a802e70; end: 10a802f27;  */

void FUN_10a802e70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07a760(param_1,param_2,plVar4 + 0xb);
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



/* Entry: 10a802f28; end: 10a803033;  */

void FUN_10a802f28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a800ee4(param_2,param_3);
  FUN_10a803034(param_5);
  FUN_10a803058(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a7df60c(plVar6 + 0xb,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
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



/* Entry: 10a803034; end: 10a803057;  */

void FUN_10a803034(int *param_1)

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
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110b9f038,0), lStack_40 != 0)) {
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a803140);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a803058; end: 10a803153;  */

void FUN_10a803058(long *param_1,long param_2,int *param_3)

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
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110b9f038,0), lStack_30 != 0)) {
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a803140);
  (*pcVar3)();
}



/* Entry: 10a803154; end: 10a80320f;  */

void FUN_10a803154(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xd];
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



/* Entry: 10a803210; end: 10a8032cf;  */

void FUN_10a803210(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a800ee4(param_2,param_3);
  FUN_10a8032d0(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0xd) = (int)param_2;
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



/* Entry: 10a8032d0; end: 10a8032f3;  */

void FUN_10a8032d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
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
  FUN_10a802bcc(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar4 + 0x6c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
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



/* Entry: 10a8032f4; end: 10a8033af;  */

void FUN_10a8032f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x6c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10a8033b0; end: 10a80346f;  */

void FUN_10a8033b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a800ee4(param_2,param_3);
  FUN_10a8032d0(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x6c) = (int)param_2;
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



/* Entry: 10a803470; end: 10a80354f;  */

void FUN_10a803470(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x2c];
  plVar1 = (long *)plVar5[0x2b];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x16f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x16f);
    plVar1 = plVar5 + 0x2b;
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



/* Entry: 10a803550; end: 10a803607;  */

void FUN_10a803550(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802c34(param_1,param_2,FUN_10a7df680,0,param_3,param_4,param_5);
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



/* Entry: 10a803608; end: 10a8036e7;  */

void FUN_10a803608(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x2f];
  plVar1 = (long *)plVar5[0x2e];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x187)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x187);
    plVar1 = plVar5 + 0x2e;
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



/* Entry: 10a8036e8; end: 10a80379f;  */

void FUN_10a8036e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802c34(param_1,param_2,0x10a7df688,0,param_3,param_4,param_5);
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



/* Entry: 10a8037a0; end: 10a80388b;  */

void FUN_10a8037a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a802bcc(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(byte *)(plVar4 + 0x32) & 1) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a074bf0(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a80388c; end: 10a8038e3;  */

long FUN_10a80388c(long param_1)

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



/* Entry: 10a8038e4; end: 10a803a47;  */

void FUN_10a8038e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10a803a48; end: 10a803a67;  */

void FUN_10a803a48(void)

{
  return;
}



/* Entry: 10a803a68; end: 10a803a7b;  */

void FUN_10a803a68(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a803a7c; end: 10a803a93;  */

void FUN_10a803a7c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a803a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a803a94; end: 10a803acb;  */

undefined8 FUN_10a803a94(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c1f9b8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a803acc; end: 10a803b7f;  */

void FUN_10a803acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a803b80; end: 10a803b9f;  */

void FUN_10a803b80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c1f9e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a803ba0; end: 10a803bb3;  */

void FUN_10a803ba0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    return;
  }
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
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 0x18));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a803bb4; end: 10a803c0b;  */

long FUN_10a803bb4(long param_1)

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



/* Entry: 10a803c0c; end: 10a803e1f;  */

long * FUN_10a803c0c(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar8) {
          if (*(int *)(plVar4 + 2) == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *param_3;
  plVar4[3] = 0;
  plVar4[4] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a7128c4(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10a803de0;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10a803de0:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a803e20; end: 10a80401b;  */

void FUN_10a803e20(long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar11 = *(long **)(param_4 + 0x10);
  plStack_48 = (long *)param_3[1];
  uStack_50 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar8 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar8 = param_1;
    }
    func_0x00010ae06f08(1,4,&UNK_10f678ac1,&UNK_10f67a267,0xa0,&UNK_10f67a307,param_7,param_8,plVar8
                       );
  }
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar8 = (long *)plVar11[1];
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
LAB_10a803f30:
    FUN_10a70a5c8(*(undefined8 *)plVar11[2],&uStack_50);
    if (plVar8 == (long *)0x0) goto LAB_10a803f74;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar8;
    if (plVar8 == (long *)0x0) goto LAB_10a803f30;
    lVar12 = *plVar11;
    lStack_40 = lVar12;
    if (lVar12 == 0) goto LAB_10a803f30;
    __ZNSt3__115recursive_mutex4lockEv(lVar12 + 0x88);
    lVar9 = lVar12 + 0xe0;
    func_0x0001094b22d8(lVar9,plVar11 + 4);
    if (lVar9 != 0) {
      bVar4 = *(byte *)(lVar9 + 0x2f);
      uVar1 = *(ulong *)(lVar9 + 0x20);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)plVar11 + 0x3f);
      uVar2 = plVar11[6];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar10 = (long *)*(long *)(lVar9 + 0x18);
        if (-1 < (char)bVar4) {
          plVar10 = (long *)(lVar9 + 0x18);
        }
        plVar3 = (long *)plVar11[5];
        if (-1 < (char)bVar5) {
          plVar3 = plVar11 + 5;
        }
        _memcmp(plVar10,plVar3);
        if ((int)plVar10 == 0) {
          lVar9 = lVar12 + 0x108;
          FUN_10a803c0c(lVar9,(int)plVar11[4],plVar11 + 4);
          FUN_10a2e9dcc(lVar9 + 0x18,&uStack_50);
          __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x88);
          goto LAB_10a803f30;
        }
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x88);
  }
  plVar11 = plVar8 + 1;
  do {
    lVar12 = *plVar11;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = lVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10a803f74:
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar8 = plStack_48 + 1;
    do {
      lVar12 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return;
}



/* Entry: 10a80401c; end: 10a80406f;  */

void FUN_10a80401c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    FUN_10a803bb4(lVar1 + 0x10);
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



/* Entry: 10a804070; end: 10a804087;  */

void FUN_10a804070(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a804088; end: 10a804173;  */

void FUN_10a804088(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar2;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [272];
  undefined1 auStack_158 [8];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [272];
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f678ac1,&UNK_10f67a329,0xb3,&UNK_10f67a390,in_x6,in_x7,plVar1);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  FUN_10a009538(auStack_278,&UNK_10f67a3ba);
  __ZNSt13runtime_errorC2ERKS_(appuStack_150,auStack_278);
  _memcpy(auStack_140,auStack_268,0x110);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_158,appuStack_150);
  __ZNSt13runtime_errorD2Ev(appuStack_150);
  func_0x000109d1b350(*puVar2,auStack_158);
  __ZNSt13exception_ptrD1Ev(auStack_158);
  __ZNSt13runtime_errorD2Ev(auStack_278);
  return;
}



/* Entry: 10a804174; end: 10a804197;  */

long FUN_10a804174(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a804198; end: 10a804293;  */

undefined1  [16] FUN_10a804198(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1da40;
  puVar1 = &UNK_10f678718;
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
    ppuStack_40 = &PTR_DAT_110c1da40;
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



/* Entry: 10a804294; end: 10a8042f7;  */

ulong FUN_10a804294(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8042f8);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8042f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8042f8; end: 10a804457;  */

void FUN_10a8042f8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a804458(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a7e08fc(&lStack_70,plVar7);
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



/* Entry: 10a804458; end: 10a804517;  */

undefined ** FUN_10a804458(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
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
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10a804518,FUN_10a804644);
  }
  return ppuVar1;
}



/* Entry: 10a804518; end: 10a804643;  */

void FUN_10a804518(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar8 = plVar5[0x1e];
      plVar4 = (long *)plVar5[0x1d];
      if (-1 < (char)*(byte *)((long)plVar5 + 0xff)) {
        uVar8 = (ulong)*(byte *)((long)plVar5 + 0xff);
        plVar4 = plVar5 + 0x1d;
      }
      (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar8);
      *param_1 = 6;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a804630);
  (*pcVar1)();
}



/* Entry: 10a804644; end: 10a80473f;  */

void FUN_10a804644(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a804458(param_2,param_3);
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



/* Entry: 10a804740; end: 10a8047fb;  */

void FUN_10a804740(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f679d2a,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8047fc);
  (*pcVar4)();
}



/* Entry: 10a8047fc; end: 10a80480b;  */

void FUN_10a8047fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fa60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a80480c; end: 10a80482b;  */

void FUN_10a80480c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fa60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a80482c; end: 10a80484b;  */

void FUN_10a80482c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a804834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a80484c; end: 10a80486b;  */

void FUN_10a80484c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c204e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a80486c; end: 10a804877;  */

long FUN_10a80486c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010932d188(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10a804878; end: 10a8055f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a804cc0) */

void FUN_10a804878(undefined4 *param_1,undefined **param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long *plVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuStack_168;
  long *plStack_160;
  undefined **ppuStack_158;
  long *plStack_150;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  puStack_78 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if (ppuVar8[0x59] < (undefined *)0x8) {
    ppuVar8[(long)(ppuVar8[0x59] + 0x4e)] = ppuVar8[0x5a];
    ppuVar8[0x59] = ppuVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar8 + 0x4b);
  }
  ppuVar9 = param_2;
  FUN_10a8055f8(param_2,param_3);
  FUN_10a805660(param_5);
  func_0x000109898570(auStack_148,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    ppuVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    ppuVar14 = param_2;
    ppuStack_d0 = ppuVar12;
    (**(code **)(*param_2 + 0x228))(param_2,&ppuStack_d0);
    if ((int)ppuVar14 != 0) {
      ppuVar12 = param_2;
      (**(code **)(*param_2 + 0x58))();
      puVar10 = ppuVar12[0x48];
      if ((puVar10 == (undefined *)0x0) ||
         (___dynamic_cast(puVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), ppuVar12 = ppuStack_d0,
         puVar10 == (undefined *)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a8052c4;
      }
      ppuStack_d0 = (undefined **)0x0;
      plStack_118 = (long *)CONCAT44(plStack_118._4_4_,7);
      ppuStack_110 = ppuVar12;
      ppuStack_120 = param_2;
      FUN_10a688ac0(&ppuStack_c0,&ppuStack_120,*(undefined8 *)(puVar10 + 8));
      if ((3 < (int)plStack_118) && (ppuStack_110 != (undefined **)0x0)) {
        (**(code **)*ppuStack_110)();
      }
    }
    if (ppuStack_d0 != (undefined **)0x0) {
      (**(code **)*ppuStack_d0)();
    }
    if (((ulong)ppuVar14 & 1) != 0) {
      plVar11 = (long *)0x60;
      __Znwm();
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c1fab0;
      ppuStack_158 = (undefined **)(plVar11 + 3);
      plVar11[4] = (long)ppuStack_b8;
      *ppuStack_158 = (undefined *)ppuStack_c0;
      if (ppuStack_b8 != (undefined **)0x0) {
        ppuVar12 = ppuStack_b8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar5) {
            *ppuVar12 = *ppuVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar11[6] = (long)plStack_a8;
      plVar11[5] = (long)ppuStack_b0;
      if (plStack_a8 != (long *)0x0) {
        plVar15 = plStack_a8 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = *plVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(plVar11 + 0xb) = 2;
      plStack_150 = plVar11;
      FUN_10a688c1c(&ppuStack_c0);
      FUN_10a059354(&ppuStack_168,param_2,param_4 + 0x20);
      ppuVar12 = (undefined **)0x38;
      __Znwm();
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *ppuVar12 = (undefined *)&PTR_DAT_110c1fbf0;
      ppuVar12[4] = (undefined *)0x0;
      ppuStack_d0 = ppuVar12 + 3;
      *ppuStack_d0 = (undefined *)&PTR_FUN_110c78ce0;
      *(undefined8 *)((long)ppuVar12 + 0x2c) = 0;
      *(undefined4 *)((long)ppuVar12 + 0x34) = 0;
      *(undefined4 *)(ppuVar12 + 5) = 1;
      puVar10 = (undefined *)0x0;
      ppuStack_c8 = ppuVar12;
      FUN_10a701c0c();
      ppuVar12[6] = puVar10;
      uVar16 = *(ulong *)(puVar10 + 8);
      if ((uVar16 & 1) != 0) {
        uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(puVar10 + 0x10,auStack_148,uVar16);
      *(undefined4 *)(puVar10 + 0x18) = 1;
      puStack_e0 = (undefined *)0x0;
      plStack_d8 = (long *)0x0;
      plVar11 = (long *)ppuVar9[6];
      if (((plVar11 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_d8 = plVar11, plVar11 == (long *)0x0))
         || (puStack_e0 = ppuVar9[5], puStack_e0 == (undefined *)0x0)) {
        plVar11 = plStack_d8;
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f678b57,&UNK_10f678b94,0x43,&UNK_10f678c14);
        }
joined_r0x00010a804e24:
        if (plVar11 != (long *)0x0) {
          plVar15 = plVar11 + 1;
          do {
            lVar19 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        ppuVar9 = ppuStack_c8;
        if (ppuStack_c8 != (undefined **)0x0) {
          ppuVar12 = ppuStack_c8 + 1;
          do {
            puVar10 = *ppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar5) {
              *ppuVar12 = puVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar10 == (undefined *)0x0) {
            (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
        }
        if (plStack_160 != (long *)0x0) {
          plVar11 = plStack_160 + 1;
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
            (**(code **)(*plStack_160 + 0x10))(plStack_160);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
          }
        }
        plVar11 = plStack_150;
        if (plStack_150 != (long *)0x0) {
          plVar15 = plStack_150 + 1;
          do {
            lVar19 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_150 + 0x10))(plStack_150);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        if (cStack_131 < '\0') {
          __ZdlPv(auStack_148[0]);
        }
        *param_1 = 0;
        if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_78) {
          ppuVar9 = ppuVar8 + 0x4b;
          puVar10 = ppuVar8[0x59];
          puVar20 = puVar10 + -1;
          ppuVar8[0x59] = puVar20;
          if (puVar20 < (undefined *)0x8) {
            puVar10 = ppuVar9[(long)(puVar10 + 2)];
            if (ppuVar8[0x5a] == puVar10) {
              return;
            }
          }
          else {
            puVar10 = *(undefined **)(ppuVar8[0x57] + -8);
            ppuVar8[0x57] = ppuVar8[0x57] + -8;
            if (ppuVar8[0x5a] == puVar10) {
              return;
            }
          }
          puVar20 = *ppuVar9;
          puVar17 = ppuVar8[0x4c];
          lVar19 = (long)puVar17 - (long)puVar20;
          puVar22 = (undefined *)(lVar19 >> 4);
          if (puVar22 < puVar10) {
            uVar16 = (long)puVar10 - (long)puVar22;
            puVar21 = ppuVar8[0x4d];
            if ((ulong)((long)puVar21 - (long)puVar17 >> 4) < uVar16) {
              if ((ulong)puVar10 >> 0x3c == 0) {
                puVar17 = (undefined *)((long)puVar21 - (long)puVar20 >> 3);
                if (puVar17 <= puVar10) {
                  puVar17 = puVar10;
                }
                if (0x7fffffffffffffef < (ulong)((long)puVar21 - (long)puVar20)) {
                  puVar17 = (undefined *)0xfffffffffffffff;
                }
                ppuStack_68 = ppuVar9;
                if ((ulong)puVar17 >> 0x3c == 0) {
                  lVar7 = (long)puVar17 << 4;
                  __Znwm();
                  lVar3 = lVar7 + lVar19;
                  _bzero(lVar3,uVar16 * 0x10);
                  puVar22 = (undefined *)(lVar3 + (long)puVar22 * -0x10);
                  _memcpy(puVar22,puVar20,lVar19);
                  *ppuVar9 = puVar22;
                  ppuVar8[0x4c] = (undefined *)(lVar3 + uVar16 * 0x10);
                  ppuVar8[0x4d] = (undefined *)(lVar7 + (long)puVar17 * 0x10);
                  puStack_88 = puVar20;
                  puStack_80 = puVar20;
                  puStack_78 = puVar20;
                  puStack_70 = puVar21;
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
            _bzero(puVar17,uVar16 * 0x10);
            ppuVar8[0x4c] = puVar17 + uVar16 * 0x10;
          }
          else if (puVar10 < puVar22) {
            while (puVar17 != puVar20 + (long)puVar10 * 0x10) {
              puVar17 = puVar17 + -0x10;
              func_0x00010988c204(puVar17);
            }
            ppuVar8[0x4c] = puVar20 + (long)puVar10 * 0x10;
          }
code_r0x00010988c138:
          ppuVar8[0x5a] = puVar10;
          return;
        }
        ___stack_chk_fail();
      }
      else {
        puVar10 = *(undefined **)(*(long *)(puStack_e0 + 0x960) + 0x3a8);
        plVar11 = (long *)0xc8;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        ppuVar12 = (undefined **)(plVar11 + 3);
        plVar11[4] = 0;
        *ppuVar12 = (undefined *)0x0;
        *plVar11 = (long)&PTR_FUN_110c1fc40;
        plVar11[9] = 0x32aaaba7;
        plVar11[6] = 0;
        plVar11[5] = 0;
        plVar11[8] = 0;
        plVar11[7] = 0;
        plVar11[0xb] = 0;
        plVar11[10] = 0;
        plVar11[0xd] = 0;
        plVar11[0xc] = 0;
        plVar11[0xf] = 0;
        plVar11[0xe] = 0;
        plVar11[0x10] = 0;
        plVar11[0x11] = 0x32aaaba7;
        plVar11[0x13] = 0;
        plVar11[0x12] = 0;
        plVar11[0x15] = 0;
        plVar11[0x14] = 0;
        plVar11[0x17] = 0;
        plVar11[0x16] = 0;
        plVar11[0x18] = 0;
        puVar13 = (undefined8 *)0xb0;
        __Znwm();
        plVar15 = puVar13 + 1;
        puVar13[2] = 0;
        *plVar15 = 0x200000006;
        *(undefined2 *)(puVar13 + 3) = 4;
        puVar13[5] = 0;
        puVar13[4] = 0;
        puVar13[7] = 0;
        puVar13[6] = 0;
        puVar13[9] = 0;
        puVar13[8] = 0;
        puVar13[0xb] = 0;
        puVar13[10] = 0;
        puVar13[0xd] = 0;
        puVar13[0xc] = 0;
        puVar13[0xf] = 0;
        puVar13[0xe] = 0;
        puVar13[0x10] = 0;
        puVar13[0x11] = puVar13 + 3;
        puVar13[0x12] = 0;
        *puVar13 = &PTR_FUN_110c1fc90;
        *(undefined1 *)(puVar13 + 0x13) = 0;
        *(undefined1 *)(puVar13 + 0x15) = 0;
        plVar11[3] = (long)puVar13;
        plVar11[4] = (long)puVar13;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = *plVar15 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar14 = (undefined **)0x70;
        __Znwm();
        *ppuVar14 = FUN_10a817040;
        ppuVar14[1] = FUN_10a81732c;
        FUN_10a807998(ppuVar14 + 2);
        puVar20 = ppuVar14[7];
        if (puVar20 != (undefined *)0x0) {
          plVar15 = (long *)(puVar20 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = *plVar15 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppuVar14[0xb] = (undefined *)puVar13;
        ppuVar14[9] = puVar10;
        *(undefined1 *)(ppuVar14 + 10) = 0;
        *(undefined1 *)(ppuVar14 + 0xd) = 0;
        ppuStack_120 = (undefined **)0x0;
        FUN_109d18960(ppuVar14 + 2,puVar10,&ppuStack_120);
        if (ppuStack_120 == (undefined **)0x0) {
          if (((ulong)ppuVar14[10] & 1) == 0) {
            ppuStack_b0 = (undefined **)ppuVar14[9];
            ppuStack_c0 = (undefined **)0x0;
            ppuStack_b8 = ppuVar14;
            (**(code **)*ppuStack_b0)(ppuStack_b0,&ppuStack_c0);
            __ZNSt13exception_ptrD1Ev(&ppuStack_120);
          }
          else {
            __ZNSt13exception_ptrD1Ev(&ppuStack_120);
            FUN_10a807590(ppuVar14 + 0xc,ppuVar14 + 0xb);
            ppuVar14[9] = ppuVar14[0xc];
            plVar15 = (long *)(ppuVar14[0xc] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = *plVar15 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (((uint)*(undefined8 *)(ppuVar14[9] + 0x10) >> 1 & 1) == 0) {
              *(undefined1 *)(ppuVar14 + 0xd) = 1;
              puVar10 = ppuVar14[9];
              plVar15 = (long *)(puVar10 + 0x10);
              ppuVar18 = (undefined **)ppuVar14[3];
              do {
                lVar19 = *plVar15;
                if (lVar19 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar5) {
                    *plVar15 = 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    ppuStack_c0 = (undefined **)0x0;
                    ppuStack_b8 = ppuVar14;
                    ppuStack_b0 = ppuVar18;
                    func_0x000109d1b588(puVar10 + 0x18,&ppuStack_c0);
                    *(undefined8 *)(puVar10 + 0x10) = 0;
                    goto LAB_10a804ea0;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
              } while (((uint)lVar19 >> 1 & 1) == 0);
            }
            puVar10 = ppuVar14[9];
            if (((uint)*(undefined8 *)(ppuVar14[9] + 0x10) >> 5 & 1) != 0) {
              func_0x0001092af97c(puVar10 + 0x90);
              goto LAB_10a8052c4;
            }
            if ((puVar10[0xa8] & 1) == 0) goto LAB_10a8052c4;
            func_0x00010a8074e8(ppuVar14 + 2,puVar10 + 0x98);
            plVar15 = (long *)ppuVar14[9];
            if (plVar15 != (long *)0x0) {
              puVar1 = (ulong *)(plVar15 + 1);
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
                  (**(code **)(*plVar15 + 8))();
                }
              }
            }
            plVar15 = (long *)ppuVar14[0xc];
            if (plVar15 != (long *)0x0) {
              puVar1 = (ulong *)(plVar15 + 1);
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
                  (**(code **)(*plVar15 + 8))();
                }
              }
            }
            plVar15 = (long *)ppuVar14[0xb];
            if (plVar15 != (long *)0x0) {
              puVar1 = (ulong *)(plVar15 + 1);
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
                  (**(code **)(*plVar15 + 8))();
                }
              }
            }
            func_0x000109d1a1d0(ppuVar14 + 2);
            __ZdlPv(ppuVar14);
          }
LAB_10a804ea0:
          plVar15 = (long *)plVar11[5];
          if (plVar15 != (long *)0x0) {
            puVar1 = (ulong *)(plVar15 + 1);
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
                (**(code **)(*plVar15 + 8))();
              }
            }
          }
          plVar15 = plStack_160;
          plVar11[5] = (long)puVar20;
          ppuStack_120 = ppuStack_158;
          plStack_118 = plStack_150;
          if (plStack_150 != (long *)0x0) {
            plVar2 = plStack_150 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_110 = ppuStack_168;
          plStack_108 = plStack_160;
          if (plStack_160 != (long *)0x0) {
            plVar2 = plStack_160 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puStack_90 = ppuVar9[5];
          puStack_88 = ppuVar9[6];
          if (puStack_88 != (undefined *)0x0) {
            plVar2 = (long *)(puStack_88 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_c0 = (undefined **)FUN_10a808818;
          ppuStack_b8 = &PTR_FUN_110c1fd08;
          ppuStack_b0 = ppuStack_158;
          plStack_a8 = plStack_150;
          if (plStack_150 != (long *)0x0) {
            plVar2 = plStack_150 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_a0 = ppuStack_168;
          plStack_98 = plStack_160;
          if (plStack_160 != (long *)0x0) {
            plVar2 = plStack_160 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_100 = 0;
          uStack_f8 = 0;
          ppuStack_f0 = ppuVar12;
          plStack_e8 = plVar11;
          FUN_10a7e1080(ppuVar12,&ppuStack_c0);
          (*(code *)*ppuStack_b8)(&ppuStack_b8);
          if (plVar15 != (long *)0x0) {
            plVar11 = plVar15 + 1;
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
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          plVar11 = plStack_118;
          if (plStack_118 != (long *)0x0) {
            plVar15 = plStack_118 + 1;
            do {
              lVar19 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_118 + 0x10))(plStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          ppuStack_c0 = ppuStack_d0;
          ppuStack_b8 = ppuStack_c8;
          if (ppuStack_c8 != (undefined **)0x0) {
            ppuVar12 = ppuStack_c8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar5) {
                *ppuVar12 = *ppuVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_120 = ppuStack_f0;
          plStack_118 = plStack_e8;
          if (plStack_e8 != (long *)0x0) {
            plVar11 = plStack_e8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_130 = 0;
          plStack_128 = (long *)0x0;
          FUN_10a7e12fc(ppuVar9,&UNK_10e4db8e0,0x57);
          plVar11 = plStack_128;
          if (plStack_128 != (long *)0x0) {
            plVar15 = plStack_128 + 1;
            do {
              lVar19 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_128 + 0x10))(plStack_128);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plVar11 = plStack_118;
          if (plStack_118 != (long *)0x0) {
            plVar15 = plStack_118 + 1;
            do {
              lVar19 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_118 + 0x10))(plStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          ppuVar9 = ppuStack_b8;
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar12 = ppuStack_b8 + 1;
            do {
              puVar10 = *ppuVar12;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar5) {
                *ppuVar12 = puVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar10 == (undefined *)0x0) {
              (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
            }
          }
          plVar15 = plStack_e8;
          plVar11 = plStack_d8;
          if (plStack_e8 != (long *)0x0) {
            plVar2 = plStack_e8 + 1;
            do {
              lVar19 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              plVar11 = plStack_d8;
            }
          }
          goto joined_r0x00010a804e24;
        }
      }
      func_0x0001092af97c(&ppuStack_120);
      goto LAB_10a8052c4;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a8052c4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8052c8);
  (*pcVar6)();
}



/* Entry: 10a8055f8; end: 10a80565f;  */

void FUN_10a8055f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a053854(param_1,lVar1);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 3) {
    return;
  }
  puVar3 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,puVar2);
  *puVar3 = &PTR_FUN_110c1fab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a805660; end: 10a805683;  */

void FUN_10a805660(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c1fab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a805684; end: 10a805693;  */

void FUN_10a805684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a805694; end: 10a8056b3;  */

void FUN_10a805694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fab0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8056b4; end: 10a8056db;  */

undefined1  [16] FUN_10a8056b4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a8056d8);
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



/* Entry: 10a8056dc; end: 10a806343;  */

void FUN_10a8056dc(undefined4 *param_1,undefined8 param_2,double param_3,long *param_4,
                  undefined8 param_5,int *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined ***pppuStack_3e0;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long lStack_3b0;
  long *plStack_3a8;
  long lStack_3a0;
  long *plStack_398;
  undefined **ppuStack_390;
  long *plStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined1 auStack_358 [64];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [16];
  ulong uStack_2e0;
  ulong uStack_2d8;
  double dStack_2d0;
  undefined4 uStack_2c8;
  double dStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  long lStack_290;
  long *plStack_288;
  char cStack_279;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [7];
  code *pcStack_d0;
  undefined8 *apuStack_c8 [7];
  long lStack_90;
  long lStack_88;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_4;
  (**(code **)(*param_4 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar16 = param_4;
  FUN_10a8055f8(param_4,param_5);
  FUN_10a806344(param_7);
  if (*param_6 == 1) {
    lStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
LAB_10a805820:
    lVar12 = lStack_3b0;
    FUN_10a05dcbc(&uStack_3c0,param_4,param_6 + 4);
    FUN_10a059354(&puStack_3d0,param_4,param_6 + 8);
    plVar4 = plStack_3a8;
    plStack_398 = plStack_3a8;
    lStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_2a0 = 0;
    plStack_298 = (long *)0x0;
    plVar7 = (long *)plVar16[6];
    lStack_3a0 = lVar12;
    if (((plVar7 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 = plStack_3b8, plStack_298 = plVar7,
        plVar7 == (long *)0x0)) || (lStack_2a0 = plVar16[5], lStack_2a0 == 0)) {
      plVar7 = plStack_298;
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f678b57,&UNK_10f678c33,0x62,&UNK_10f678c14);
      }
joined_r0x00010a80593c:
      if (plVar7 != (long *)0x0) goto LAB_10a805940;
    }
    else {
      if (*(char *)((long)plVar16 + 0x4f) < '\0') {
        if (plVar16[8] != 0) goto LAB_10a805880;
      }
      else if (*(char *)((long)plVar16 + 0x4f) != '\0') {
LAB_10a805880:
        if (plStack_3b8 == (long *)0x0) {
          pcStack_150 = FUN_10a80903c;
          ppuStack_148 = &PTR_DAT_110c1fd28;
          uStack_140 = uStack_3c0;
          plStack_138 = (long *)0x0;
        }
        else {
          plVar7 = plStack_3b8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pcStack_150 = FUN_10a80903c;
          ppuStack_148 = &PTR_DAT_110c1fd28;
          uStack_140 = uStack_3c0;
          plStack_138 = plStack_3b8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
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
            (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar7 = plStack_3c8;
        if (plStack_3c8 == (long *)0x0) {
          uStack_190 = 0x10a8090d8;
          ppuStack_188 = &PTR_DAT_110c1fd48;
          puStack_180 = puStack_3d0;
          plStack_178 = (long *)0x0;
        }
        else {
          plVar8 = plStack_3c8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_190 = 0x10a8090d8;
          ppuStack_188 = &PTR_DAT_110c1fd48;
          puStack_180 = puStack_3d0;
          plStack_178 = plStack_3c8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
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
            (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        lVar12 = lStack_3a0;
        pppuStack_3e0 = &ppuStack_188;
        __ZNSt3__115recursive_mutex4lockEv(lStack_3a0 + 0x88);
        lVar13 = (long)*(char *)(lVar12 + 0xdf);
        if (lVar13 < 0) {
          lVar13 = *(long *)(lVar12 + 0xd0);
        }
        lVar17 = lVar12;
        if (lVar13 == 0) {
          plVar7 = *(long **)(*(long *)(lStack_2a0 + 0x100) + 0x1c8);
          (**(code **)(*plVar7 + 200))();
          plVar8 = (long *)plVar7[1];
          __ZNSt3__119__shared_weak_count4lockEv();
          ppuStack_390 = (undefined **)*plVar7;
          plStack_388 = plVar8;
          (**(code **)(*ppuStack_390 + 0x10))(&lStack_290,ppuStack_390,0x10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar12 + 200,&lStack_290);
          if (cStack_279 < '\0') {
            __ZdlPv(lStack_290);
          }
          plVar7 = plVar8 + 1;
          do {
            lVar13 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar17 = lStack_3a0;
          if (lVar13 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            lVar17 = lStack_3a0;
          }
        }
        lVar13 = lStack_2a0;
        ppuStack_390 = &PTR_FUN_110c78d80;
        plStack_388 = (long *)0x0;
        FUN_10ae0e08c(&ppuStack_390,0);
        plVar7 = plStack_388;
        if (((ulong)plStack_388 & 1) != 0) {
          plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(auStack_318,lVar17 + 0x38,plVar7);
        uStack_2c8 = *(undefined4 *)(lVar17 + 0x50);
        lVar14 = *(long *)(lVar17 + 0x58);
        if (lVar14 != 0) {
          dVar22 = *(double *)(lVar14 + 0x28);
          dVar23 = *(double *)(lVar14 + 0x30);
          dVar24 = *(double *)(lVar14 + 0x40);
          dStack_2d0 = dVar23;
          dStack_2c0 = dVar22;
          if (dVar24 != 0.0) {
            uStack_380 = uStack_380 | 1;
            if (uStack_2e0 == 0) {
              plVar7 = plStack_388;
              if (((ulong)plStack_388 & 1) != 0) {
                plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
              }
              func_0x00010a700ae4();
              uStack_2e0 = (ulong)plVar7;
            }
            uVar11 = uStack_2e0;
            dVar21 = (dVar22 * 3.141592653589793) / 180.0;
            ___sincos_stret();
            dVar24 = dVar24 / ((param_3 * 20037508.342789244) /
                              (SQRT(dVar21 * dVar21 * -0.006694379990141316 + 1.0) * 180.0));
            *(double *)(uVar11 + 0x10) = dVar23 - dVar24;
            *(double *)(uVar11 + 0x20) = dVar23 + dVar24;
            lVar14 = *(long *)(lVar17 + 0x58);
          }
          dVar24 = *(double *)(lVar14 + 0x48);
          if (dVar24 != 0.0) {
            uStack_380 = uStack_380 | 1;
            if (uStack_2e0 == 0) {
              plVar7 = plStack_388;
              if (((ulong)plStack_388 & 1) != 0) {
                plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
              }
              func_0x00010a700ae4();
              uStack_2e0 = (ulong)plVar7;
            }
            uVar11 = uStack_2e0;
            dVar23 = (dVar22 * 3.141592653589793) / 180.0;
            _sin();
            dVar23 = dVar23 * dVar23 * -0.006694379990141316 + 1.0;
            _pow(dVar23,0x3ff8000000000000);
            dVar24 = dVar24 / (19903369.647886984 / (dVar23 * 180.0));
            *(double *)(uVar11 + 0x18) = dVar22 - dVar24;
            *(double *)(uVar11 + 0x28) = dVar22 + dVar24;
          }
        }
        uStack_2b8 = *(undefined8 *)(lVar17 + 0x68);
        plVar7 = plStack_388;
        if (((ulong)plStack_388 & 1) != 0) {
          plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(auStack_300,lVar17 + 0x70,plVar7);
        __ZNSt3__115recursive_mutex4lockEv(lVar17 + 0x88);
        plVar7 = plStack_388;
        if (((ulong)plStack_388 & 1) != 0) {
          plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(auStack_308,lVar17 + 200,plVar7);
        plVar7 = (long *)(lVar17 + 0xf0);
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          func_0x0001098d58d4(&lStack_290,&uStack_378,plVar7 + 2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lStack_290 + 0x10,plVar7 + 3);
        }
        for (plVar7 = *(long **)(lVar17 + 0x140); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          uVar1 = *(undefined4 *)((long)plVar7 + 0x14);
          FUN_10a714638(&lStack_290,auStack_358,plVar7 + 2);
          *(undefined4 *)(lStack_290 + 0xc) = uVar1;
        }
        uVar11 = (ulong)plStack_388;
        if (((ulong)plStack_388 & 1) != 0) {
          uVar11 = *(ulong *)((ulong)plStack_388 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(auStack_2f8,lVar17 + 0x158,uVar11);
        plVar7 = plStack_388;
        if (((ulong)plStack_388 & 1) != 0) {
          plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(auStack_2f0,lVar17 + 0x170,plVar7);
        if (*(char *)(lVar17 + 400) == '\x01') {
          uStack_380 = uStack_380 | 2;
          if (uStack_2d8 == 0) {
            plVar7 = plStack_388;
            if (((ulong)plStack_388 & 1) != 0) {
              plVar7 = *(long **)((ulong)plStack_388 & 0xfffffffffffffffe);
            }
            func_0x00010564a3b4();
            uStack_2d8 = (ulong)plVar7;
            if ((*(byte *)(lVar17 + 400) & 1) == 0) goto LAB_10a80619c;
          }
          *(undefined8 *)(uStack_2d8 + 0x10) = *(undefined8 *)(lVar17 + 0x188);
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar17 + 0x88);
        plVar7 = (long *)0x210;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c13a98;
        if (*(char *)((long)plVar16 + 0x4f) < '\0') {
          func_0x000107c3192c(&lStack_1b0,plVar16[7],plVar16[8]);
        }
        else {
          lStack_1a8 = plVar16[8];
          lStack_1b0 = plVar16[7];
          lStack_1a0 = plVar16[9];
        }
        FUN_10a7013e8(&lStack_290,0,&ppuStack_390);
        pcStack_d0 = pcStack_150;
        (*(code *)ppuStack_148[3])(apuStack_c8,&ppuStack_148);
        uStack_110 = uStack_190;
        (*(code *)ppuStack_188[3])(apuStack_108,&ppuStack_188);
        plVar16 = plVar7 + 3;
        FUN_10a6e5dd0(plVar16,lVar13,&lStack_1b0,&lStack_290,&pcStack_d0,&uStack_110);
        (*(code *)*apuStack_108[0])(apuStack_108);
        (*(code *)*apuStack_c8[0])(apuStack_c8);
        FUN_10ae0e238(&lStack_290);
        if (lStack_1a0 < 0) {
          __ZdlPv(lStack_1b0);
        }
        plStack_2b0 = plVar16;
        plStack_2a8 = plVar7;
        func_0x00010a712e08(&plStack_2b0,plVar16,plVar16);
        FUN_10ae0e238(&ppuStack_390);
        lVar13 = lStack_3a0;
        func_0x000107c28744(&lStack_290,lStack_3a0 + 0xe0);
        plStack_388 = (long *)0x0;
        ppuStack_390 = (undefined **)0x0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_370 = 0x3f800000;
        for (plVar16 = *(long **)(lVar13 + 0x118); plVar16 != (long *)0x0;
            plVar16 = (long *)*plVar16) {
          plVar7 = &lStack_290;
          func_0x0001094b22d8(plVar7,plVar16 + 2);
          if (plVar7 == (long *)0x0) {
            pppuVar9 = &ppuStack_390;
            FUN_10a803c0c(pppuVar9,*(undefined4 *)(plVar16 + 2),plVar16 + 2);
            FUN_10a2e9dcc(pppuVar9 + 3,plVar16 + 3);
          }
        }
        FUN_10a6df3a4(plStack_2b0,&ppuStack_390);
        func_0x00010a71259c(&ppuStack_390);
        func_0x0001094b03dc(&lStack_290);
        plVar16 = plStack_2a8;
        if (plStack_2a8 != (long *)0x0) {
          plVar7 = plStack_2a8 + 1;
          do {
            lVar13 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x88);
        (*(code *)*ppuStack_188)(pppuStack_3e0);
        (*(code *)*ppuStack_148)(&ppuStack_148);
        plVar7 = plStack_298;
        goto joined_r0x00010a80593c;
      }
      if (puStack_3d0 != (undefined8 *)0x0) {
        func_0x000107c2b054(&lStack_290,&UNK_10f678cbc);
        if (*(char *)(puStack_3d0 + 8) == '\x01') {
          (*(code *)*puStack_3d0)(&lStack_290,puStack_3d0);
        }
        else if (*(char *)(puStack_3d0 + 8) == '\x02') {
          FUN_10a05aad0(puStack_3d0,&lStack_290);
        }
        if (cStack_279 < '\0') {
          __ZdlPv(lStack_290);
        }
      }
LAB_10a805940:
      plVar16 = plVar7 + 1;
      do {
        lVar12 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar4 != (long *)0x0) {
      plVar16 = plVar4 + 1;
      do {
        lVar12 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_3c8 != (long *)0x0) {
      plVar16 = plStack_3c8 + 1;
      do {
        lVar12 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3c8);
      }
    }
    if (plStack_3b8 != (long *)0x0) {
      plVar16 = plStack_3b8 + 1;
      do {
        lVar12 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3b8);
      }
    }
    plVar16 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      plVar7 = plStack_3a8 + 1;
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
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      plVar16 = plVar6 + 0x4b;
      lVar12 = plVar6[0x59];
      uVar11 = lVar12 - 1;
      plVar6[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar16[lVar12 + 2];
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
      lVar12 = *plVar16;
      lVar13 = plVar6[0x4c];
      lVar17 = lVar13 - lVar12;
      uVar19 = lVar17 >> 4;
      if (uVar19 < uVar11) {
        uVar20 = uVar11 - uVar19;
        if ((ulong)(plVar6[0x4d] - lVar13 >> 4) < uVar20) {
          if (uVar11 >> 0x3c == 0) {
            uVar10 = plVar6[0x4d] - lVar12;
            uVar15 = (long)uVar10 >> 3;
            if (uVar15 <= uVar11) {
              uVar15 = uVar11;
            }
            if (0x7fffffffffffffef < uVar10) {
              uVar15 = 0xfffffffffffffff;
            }
            if (uVar15 >> 0x3c == 0) {
              lVar14 = uVar15 << 4;
              __Znwm();
              lVar13 = lVar14 + lVar17;
              _bzero(lVar13,uVar20 * 0x10);
              lVar18 = lVar13 + uVar19 * -0x10;
              _memcpy(lVar18,lVar12,lVar17);
              *plVar16 = lVar18;
              plVar6[0x4c] = lVar13 + uVar20 * 0x10;
              plVar6[0x4d] = lVar14 + uVar15 * 0x10;
              lStack_88 = lVar12;
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
        _bzero(lVar13,uVar20 * 0x10);
        plVar6[0x4c] = lVar13 + uVar20 * 0x10;
      }
      else if (uVar11 < uVar19) {
        lVar12 = lVar12 + uVar11 * 0x10;
        while (lVar13 != lVar12) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar6[0x4c] = lVar12;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar11;
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar7 = param_4;
    func_0x000109898688(param_4,param_6);
    if (plVar7 != (long *)0x0) {
      func_0x00010989879c(&lStack_290);
      if ((lStack_290 == 0) ||
         (lVar12 = lStack_290, ___dynamic_cast(lStack_290,&PTR_DAT_110b178e0,&PTR_DAT_110c1da08,0),
         lVar12 == 0)) {
        plVar7 = &lStack_3b0;
      }
      else {
        plStack_3a8 = plStack_288;
        plVar7 = &lStack_290;
        lStack_3b0 = lVar12;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_288 != (long *)0x0) {
        plVar7 = plStack_288 + 1;
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
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
        }
      }
      if (lStack_3b0 == 0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10a80619c;
      }
      goto LAB_10a805820;
    }
  }
  func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a80619c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8061a0);
  (*pcVar5)();
}



/* Entry: 10a806344; end: 10a806367;  */

/* WARNING: Possible PIC construction at 0x00010a806830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a806834) */
/* WARNING: Removing unreachable block (ram,0x00010a806848) */
/* WARNING: Removing unreachable block (ram,0x00010a806f18) */
/* WARNING: Removing unreachable block (ram,0x00010a8068c0) */
/* WARNING: Removing unreachable block (ram,0x00010a8068d8) */
/* WARNING: Removing unreachable block (ram,0x00010a806908) */
/* WARNING: Removing unreachable block (ram,0x00010a806918) */
/* WARNING: Removing unreachable block (ram,0x00010a806928) */
/* WARNING: Removing unreachable block (ram,0x00010a806954) */
/* WARNING: Removing unreachable block (ram,0x00010a806944) */
/* WARNING: Removing unreachable block (ram,0x00010a806958) */
/* WARNING: Removing unreachable block (ram,0x00010a806964) */
/* WARNING: Removing unreachable block (ram,0x00010a806968) */
/* WARNING: Removing unreachable block (ram,0x00010a806970) */
/* WARNING: Removing unreachable block (ram,0x00010a806978) */
/* WARNING: Removing unreachable block (ram,0x00010a80697c) */
/* WARNING: Removing unreachable block (ram,0x00010a806994) */
/* WARNING: Removing unreachable block (ram,0x00010a806f64) */
/* WARNING: Removing unreachable block (ram,0x00010a8068fc) */
/* WARNING: Removing unreachable block (ram,0x00010a80699c) */
/* WARNING: Removing unreachable block (ram,0x00010a8069a8) */
/* WARNING: Removing unreachable block (ram,0x00010a8069dc) */
/* WARNING: Removing unreachable block (ram,0x00010a8069f4) */
/* WARNING: Removing unreachable block (ram,0x00010a806f40) */
/* WARNING: Removing unreachable block (ram,0x00010a806a10) */
/* WARNING: Removing unreachable block (ram,0x00010a806a44) */
/* WARNING: Removing unreachable block (ram,0x00010a806a4c) */
/* WARNING: Removing unreachable block (ram,0x00010a806a58) */
/* WARNING: Removing unreachable block (ram,0x00010a806a60) */
/* WARNING: Removing unreachable block (ram,0x00010a806a6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806f30) */
/* WARNING: Removing unreachable block (ram,0x00010a806a70) */
/* WARNING: Removing unreachable block (ram,0x00010a806a9c) */
/* WARNING: Removing unreachable block (ram,0x00010a806aa0) */
/* WARNING: Removing unreachable block (ram,0x00010a806aa8) */
/* WARNING: Removing unreachable block (ram,0x00010a806ab0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ac0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ac4) */
/* WARNING: Removing unreachable block (ram,0x00010a806acc) */
/* WARNING: Removing unreachable block (ram,0x00010a806ad4) */
/* WARNING: Removing unreachable block (ram,0x00010a806b00) */
/* WARNING: Removing unreachable block (ram,0x00010a806dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a806dec) */
/* WARNING: Removing unreachable block (ram,0x00010a806e04) */
/* WARNING: Removing unreachable block (ram,0x00010a806e08) */
/* WARNING: Removing unreachable block (ram,0x00010a806e10) */
/* WARNING: Removing unreachable block (ram,0x00010a806df4) */
/* WARNING: Removing unreachable block (ram,0x00010a806e20) */
/* WARNING: Removing unreachable block (ram,0x00010a806e28) */
/* WARNING: Removing unreachable block (ram,0x00010a806b08) */
/* WARNING: Removing unreachable block (ram,0x00010a806b34) */
/* WARNING: Removing unreachable block (ram,0x00010a806b38) */
/* WARNING: Removing unreachable block (ram,0x00010a806b40) */
/* WARNING: Removing unreachable block (ram,0x00010a806b48) */
/* WARNING: Removing unreachable block (ram,0x00010a806f24) */
/* WARNING: Removing unreachable block (ram,0x00010a806b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c24) */
/* WARNING: Removing unreachable block (ram,0x00010a806c28) */
/* WARNING: Removing unreachable block (ram,0x00010a806c30) */
/* WARNING: Removing unreachable block (ram,0x00010a806c38) */
/* WARNING: Removing unreachable block (ram,0x00010a806c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c54) */
/* WARNING: Removing unreachable block (ram,0x00010a806c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c70) */
/* WARNING: Removing unreachable block (ram,0x00010a806c78) */
/* WARNING: Removing unreachable block (ram,0x00010a806c80) */
/* WARNING: Removing unreachable block (ram,0x00010a806c8c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c90) */
/* WARNING: Removing unreachable block (ram,0x00010a806c98) */
/* WARNING: Removing unreachable block (ram,0x00010a806ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a806cac) */
/* WARNING: Removing unreachable block (ram,0x00010a806cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a806cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a806cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a806cec) */
/* WARNING: Removing unreachable block (ram,0x00010a806cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a806cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a806d00) */
/* WARNING: Removing unreachable block (ram,0x00010a806d08) */
/* WARNING: Removing unreachable block (ram,0x00010a806d10) */
/* WARNING: Removing unreachable block (ram,0x00010a806d18) */
/* WARNING: Removing unreachable block (ram,0x00010a806d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d24) */
/* WARNING: Removing unreachable block (ram,0x00010a806d2c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d50) */
/* WARNING: Removing unreachable block (ram,0x00010a806d58) */
/* WARNING: Removing unreachable block (ram,0x00010a806d5c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d60) */
/* WARNING: Removing unreachable block (ram,0x00010a806d68) */
/* WARNING: Removing unreachable block (ram,0x00010a806d70) */
/* WARNING: Removing unreachable block (ram,0x00010a806d74) */
/* WARNING: Removing unreachable block (ram,0x00010a806d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d94) */
/* WARNING: Removing unreachable block (ram,0x00010a806d98) */
/* WARNING: Removing unreachable block (ram,0x00010a806da0) */
/* WARNING: Removing unreachable block (ram,0x00010a806da8) */
/* WARNING: Removing unreachable block (ram,0x00010a806dac) */
/* WARNING: Removing unreachable block (ram,0x00010a806dc4) */
/* WARNING: Removing unreachable block (ram,0x00010a806e30) */
/* WARNING: Removing unreachable block (ram,0x00010a806e38) */
/* WARNING: Removing unreachable block (ram,0x00010a806e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e44) */
/* WARNING: Removing unreachable block (ram,0x00010a806e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e50) */
/* WARNING: Removing unreachable block (ram,0x00010a806e68) */
/* WARNING: Removing unreachable block (ram,0x00010a806e70) */
/* WARNING: Removing unreachable block (ram,0x00010a806e74) */
/* WARNING: Removing unreachable block (ram,0x00010a806e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e84) */
/* WARNING: Removing unreachable block (ram,0x00010a806e88) */
/* WARNING: Removing unreachable block (ram,0x00010a806ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ea8) */
/* WARNING: Removing unreachable block (ram,0x00010a806eac) */
/* WARNING: Removing unreachable block (ram,0x00010a806eb4) */
/* WARNING: Removing unreachable block (ram,0x00010a806ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a806ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ed8) */
/* WARNING: Removing unreachable block (ram,0x00010a806f50) */
/* WARNING: Removing unreachable block (ram,0x00010a806f54) */
/* WARNING: Removing unreachable block (ram,0x00010a806f70) */
/* WARNING: Removing unreachable block (ram,0x00010a806ef4) */
/* WARNING: Removing unreachable block (ram,0x00010a806844) */
/* WARNING: Removing unreachable block (ram,0x00010a8066b8) */
/* WARNING: Removing unreachable block (ram,0x00010a80679c) */

void FUN_10a806344(undefined ***param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  undefined ***pppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ****ppppuVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined4 *extraout_x8;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar16;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined **ppuVar17;
  undefined ***unaff_x24;
  undefined **ppuVar18;
  undefined8 *unaff_x25;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar21;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  undefined8 uStack_168;
  undefined8 *apuStack_160 [7];
  undefined **ppuStack_128;
  undefined8 *apuStack_120 [7];
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  long lStack_68;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  ppppuVar6 = (undefined ****)&stack0xfffffffffffffff0;
  pppuVar8 = (undefined ***)0x3;
  uVar12 = 0;
  FUN_10a052ee0(3,0);
  pcStack_18 = FUN_10a806368;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = pppuVar8;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  (*(code *)(*pppuVar8)[0xb])();
  if (pppuVar9[0x59] < (undefined **)0x8) {
    pppuVar9[(long)pppuVar9[0x59] + 0x4e] = pppuVar9[0x5a];
    pppuVar9[0x59] = (undefined **)((long)pppuVar9[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar9 + 0x4b);
  }
  pppuVar10 = pppuVar8;
  FUN_10a8055f8(pppuVar8,uVar12);
  FUN_10a80683c(param_4);
  func_0x000109898570(&pppuStack_180,pppuVar8,param_1);
  FUN_10a05dcbc(&uStack_190,pppuVar8,param_1 + 2);
  pppuVar11 = pppuVar8;
  FUN_10a059354(&pppuStack_1a0,pppuVar8,param_1 + 4);
  pppuVar1 = pppuStack_188;
  puVar19 = unaff_x25;
  if (*(char *)((long)pppuVar10 + 0x4f) < '\0') {
    if (pppuVar10[8] == (undefined **)0x0) goto LAB_10a8064cc;
LAB_10a806430:
    if (-1 < (char)bStack_169) {
      uStack_178 = (ulong)bStack_169;
    }
    if (uStack_178 == 0) {
      if (pppuStack_1a0 != (undefined ***)0x0) {
        pppuVar11 = &ppuStack_a8;
        func_0x000107c2b054(pppuVar11,&UNK_10f678cfa);
        if (*(char *)(pppuStack_1a0 + 8) == '\x01') {
          (*(code *)*pppuStack_1a0)();
        }
        else if (*(char *)(pppuStack_1a0 + 8) == '\x02') {
          FUN_10a05aad0(pppuStack_1a0,&ppuStack_a8);
          pppuVar11 = pppuStack_1a0;
        }
      }
    }
    else {
      if (pppuStack_188 == (undefined ***)0x0) {
        ppuStack_a8 = (undefined **)0x10a809188;
        ppuStack_a0 = &PTR_DAT_110c1fd68;
        uStack_98 = uStack_190;
        pppuStack_90 = (undefined ***)0x0;
      }
      else {
        pppuVar8 = pppuStack_188 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_a8 = (undefined **)0x10a809188;
        ppuStack_a0 = &PTR_DAT_110c1fd68;
        uStack_98 = uStack_190;
        pppuStack_90 = pppuStack_188;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          ppuVar14 = *pppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_188)[2])(pppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar1);
        }
      }
      pppuVar8 = pppuStack_198;
      param_1 = &ppuStack_a0;
      if (pppuStack_198 == (undefined ***)0x0) {
        uStack_e8 = 0x10a809224;
        ppuStack_e0 = &PTR_DAT_110c1fd88;
        pppuStack_d8 = pppuStack_1a0;
        pppuStack_d0 = (undefined ***)0x0;
      }
      else {
        pppuVar1 = pppuStack_198 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_e8 = 0x10a809224;
        ppuStack_e0 = &PTR_DAT_110c1fd88;
        pppuStack_d8 = pppuStack_1a0;
        pppuStack_d0 = pppuStack_198;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          ppuVar14 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_198)[2])(pppuStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
        }
      }
      ppuVar14 = pppuVar10[0xc];
      ppuStack_128 = ppuStack_a8;
      param_4 = &ppuStack_128;
      (*(code *)ppuStack_a0[2])(apuStack_120,param_1);
      pppuVar8 = &ppuStack_e0;
      uStack_168 = uStack_e8;
      (*(code *)ppuStack_e0[2])(apuStack_160,pppuVar8);
      FUN_10a6e7dc0(ppuVar14,&pppuStack_180,&ppuStack_128,&uStack_168);
      (*(code *)*apuStack_160[0])(apuStack_160);
      (*(code *)*apuStack_120[0])(apuStack_120);
      (*(code *)*ppuStack_e0)(pppuVar8);
      pppuVar11 = param_1;
      (*(code *)*ppuStack_a0)();
      puVar19 = &uStack_168;
    }
  }
  else {
    if (*(char *)((long)pppuVar10 + 0x4f) != '\0') goto LAB_10a806430;
LAB_10a8064cc:
    if (pppuStack_1a0 != (undefined ***)0x0) {
      pppuVar11 = &ppuStack_a8;
      func_0x000107c2b054(pppuVar11,&UNK_10f678cbc);
      if (*(char *)(pppuStack_1a0 + 8) == '\x01') {
        (*(code *)*pppuStack_1a0)();
      }
      else if (*(char *)(pppuStack_1a0 + 8) == '\x02') {
        FUN_10a05aad0(pppuStack_1a0,&ppuStack_a8);
        pppuVar11 = pppuStack_1a0;
      }
    }
  }
  if (pppuStack_198 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_198 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_198)[2])(pppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar11 = pppuStack_198;
    }
  }
  if (pppuStack_188 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_188 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_188)[2])(pppuStack_188);
      pppuVar11 = pppuStack_188;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((char)bStack_169 < '\0') {
    pppuVar11 = pppuStack_180;
    __ZdlPv();
  }
  *extraout_x8 = 0;
  ppppuVar21 = (undefined8 ****)pppuStack_20;
  pcVar5 = pcStack_18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010a07a8a8(&pppuStack_1a0);
    func_0x00010a042b54(&uStack_190);
    if ((char)bStack_169 < '\0') {
      __ZdlPv(pppuStack_180);
    }
    ppppuVar6 = &pppuStack_1a0;
    unaff_x19 = pppuVar9;
    unaff_x20 = pppuVar11;
    unaff_x21 = pppuStack_188;
    unaff_x22 = param_1;
    unaff_x23 = pppuVar8;
    unaff_x24 = param_4;
    unaff_x25 = puVar19;
    ppppuVar21 = &pppuStack_20;
    pcVar5 = (code *)0x10a806834;
  }
  pppuVar8 = pppuVar9 + 0x4b;
  ppuVar14 = pppuVar9[0x59];
  ppuVar13 = (undefined **)((long)ppuVar14 + -1);
  pppuVar9[0x59] = ppuVar13;
  if (ppuVar13 < (undefined **)0x8) {
    ppuVar14 = pppuVar8[(long)ppuVar14 + 2];
    if (pppuVar9[0x5a] == ppuVar14) {
      return;
    }
  }
  else {
    ppuVar14 = (undefined **)pppuVar9[0x57][-1];
    pppuVar9[0x57] = pppuVar9[0x57] + -1;
    if (pppuVar9[0x5a] == ppuVar14) {
      return;
    }
  }
  *(undefined8 *)((long)ppppuVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppppuVar6 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppppuVar6 + -0x50) = unaff_x26;
  *(undefined8 **)((long)ppppuVar6 + -0x48) = unaff_x25;
  *(undefined ****)((long)ppppuVar6 + -0x40) = unaff_x24;
  *(undefined ****)((long)ppppuVar6 + -0x38) = unaff_x23;
  *(undefined ****)((long)ppppuVar6 + -0x30) = unaff_x22;
  *(undefined ****)((long)ppppuVar6 + -0x28) = unaff_x21;
  *(undefined ****)((long)ppppuVar6 + -0x20) = unaff_x20;
  *(undefined ****)((long)ppppuVar6 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)ppppuVar6 + -0x10) = ppppuVar21;
  *(code **)((long)ppppuVar6 + -8) = pcVar5;
  ppuVar13 = *pppuVar8;
  ppuVar15 = pppuVar9[0x4c];
  lVar16 = (long)ppuVar15 - (long)ppuVar13;
  ppuVar18 = (undefined **)(lVar16 >> 4);
  if (ppuVar18 < ppuVar14) {
    uVar20 = (long)ppuVar14 - (long)ppuVar18;
    ppuVar17 = pppuVar9[0x4d];
    if ((ulong)((long)ppuVar17 - (long)ppuVar15 >> 4) < uVar20) {
      if ((ulong)ppuVar14 >> 0x3c == 0) {
        ppuVar15 = (undefined **)((long)ppuVar17 - (long)ppuVar13 >> 3);
        if (ppuVar15 <= ppuVar14) {
          ppuVar15 = ppuVar14;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar17 - (long)ppuVar13)) {
          ppuVar15 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)ppppuVar6 + -0x68) = pppuVar8;
        if ((ulong)ppuVar15 >> 0x3c == 0) {
          lVar7 = (long)ppuVar15 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar16;
          _bzero(lVar2,uVar20 * 0x10);
          ppuVar18 = (undefined **)(lVar2 + (long)ppuVar18 * -0x10);
          _memcpy(ppuVar18,ppuVar13,lVar16);
          *pppuVar8 = ppuVar18;
          pppuVar9[0x4c] = (undefined **)(lVar2 + uVar20 * 0x10);
          pppuVar9[0x4d] = (undefined **)(lVar7 + (long)ppuVar15 * 0x10);
          *(undefined ***)((long)ppppuVar6 + -0x78) = ppuVar13;
          *(undefined ***)((long)ppppuVar6 + -0x70) = ppuVar17;
          *(undefined ***)((long)ppppuVar6 + -0x88) = ppuVar13;
          *(undefined ***)((long)ppppuVar6 + -0x80) = ppuVar13;
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
    _bzero(ppuVar15,uVar20 * 0x10);
    pppuVar9[0x4c] = ppuVar15 + uVar20 * 2;
  }
  else if (ppuVar14 < ppuVar18) {
    while (ppuVar15 != ppuVar13 + (long)ppuVar14 * 2) {
      ppuVar15 = ppuVar15 + -2;
      func_0x00010988c204(ppuVar15);
    }
    pppuVar9[0x4c] = ppuVar13 + (long)ppuVar14 * 2;
  }
code_r0x00010988c138:
  pppuVar9[0x5a] = ppuVar14;
  return;
}



/* Entry: 10a806368; end: 10a80683b;  */

/* WARNING: Possible PIC construction at 0x00010a806830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a806834) */
/* WARNING: Removing unreachable block (ram,0x00010a806848) */
/* WARNING: Removing unreachable block (ram,0x00010a806f18) */
/* WARNING: Removing unreachable block (ram,0x00010a8068c0) */
/* WARNING: Removing unreachable block (ram,0x00010a8068d8) */
/* WARNING: Removing unreachable block (ram,0x00010a806908) */
/* WARNING: Removing unreachable block (ram,0x00010a806918) */
/* WARNING: Removing unreachable block (ram,0x00010a806928) */
/* WARNING: Removing unreachable block (ram,0x00010a806954) */
/* WARNING: Removing unreachable block (ram,0x00010a806944) */
/* WARNING: Removing unreachable block (ram,0x00010a806958) */
/* WARNING: Removing unreachable block (ram,0x00010a806964) */
/* WARNING: Removing unreachable block (ram,0x00010a806968) */
/* WARNING: Removing unreachable block (ram,0x00010a806970) */
/* WARNING: Removing unreachable block (ram,0x00010a806978) */
/* WARNING: Removing unreachable block (ram,0x00010a80697c) */
/* WARNING: Removing unreachable block (ram,0x00010a806994) */
/* WARNING: Removing unreachable block (ram,0x00010a806f64) */
/* WARNING: Removing unreachable block (ram,0x00010a8068fc) */
/* WARNING: Removing unreachable block (ram,0x00010a80699c) */
/* WARNING: Removing unreachable block (ram,0x00010a8069a8) */
/* WARNING: Removing unreachable block (ram,0x00010a8069dc) */
/* WARNING: Removing unreachable block (ram,0x00010a8069f4) */
/* WARNING: Removing unreachable block (ram,0x00010a806f40) */
/* WARNING: Removing unreachable block (ram,0x00010a806a10) */
/* WARNING: Removing unreachable block (ram,0x00010a806a44) */
/* WARNING: Removing unreachable block (ram,0x00010a806a4c) */
/* WARNING: Removing unreachable block (ram,0x00010a806a58) */
/* WARNING: Removing unreachable block (ram,0x00010a806a60) */
/* WARNING: Removing unreachable block (ram,0x00010a806a6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806f30) */
/* WARNING: Removing unreachable block (ram,0x00010a806a70) */
/* WARNING: Removing unreachable block (ram,0x00010a806a9c) */
/* WARNING: Removing unreachable block (ram,0x00010a806aa0) */
/* WARNING: Removing unreachable block (ram,0x00010a806aa8) */
/* WARNING: Removing unreachable block (ram,0x00010a806ab0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ac0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ac4) */
/* WARNING: Removing unreachable block (ram,0x00010a806acc) */
/* WARNING: Removing unreachable block (ram,0x00010a806ad4) */
/* WARNING: Removing unreachable block (ram,0x00010a806b00) */
/* WARNING: Removing unreachable block (ram,0x00010a806dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a806dec) */
/* WARNING: Removing unreachable block (ram,0x00010a806e04) */
/* WARNING: Removing unreachable block (ram,0x00010a806e08) */
/* WARNING: Removing unreachable block (ram,0x00010a806e10) */
/* WARNING: Removing unreachable block (ram,0x00010a806df4) */
/* WARNING: Removing unreachable block (ram,0x00010a806e20) */
/* WARNING: Removing unreachable block (ram,0x00010a806e28) */
/* WARNING: Removing unreachable block (ram,0x00010a806b08) */
/* WARNING: Removing unreachable block (ram,0x00010a806b34) */
/* WARNING: Removing unreachable block (ram,0x00010a806b38) */
/* WARNING: Removing unreachable block (ram,0x00010a806b40) */
/* WARNING: Removing unreachable block (ram,0x00010a806b48) */
/* WARNING: Removing unreachable block (ram,0x00010a806f24) */
/* WARNING: Removing unreachable block (ram,0x00010a806b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c24) */
/* WARNING: Removing unreachable block (ram,0x00010a806c28) */
/* WARNING: Removing unreachable block (ram,0x00010a806c30) */
/* WARNING: Removing unreachable block (ram,0x00010a806c38) */
/* WARNING: Removing unreachable block (ram,0x00010a806c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c54) */
/* WARNING: Removing unreachable block (ram,0x00010a806c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c70) */
/* WARNING: Removing unreachable block (ram,0x00010a806c78) */
/* WARNING: Removing unreachable block (ram,0x00010a806c80) */
/* WARNING: Removing unreachable block (ram,0x00010a806c8c) */
/* WARNING: Removing unreachable block (ram,0x00010a806c90) */
/* WARNING: Removing unreachable block (ram,0x00010a806c98) */
/* WARNING: Removing unreachable block (ram,0x00010a806ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a806cac) */
/* WARNING: Removing unreachable block (ram,0x00010a806cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a806cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a806cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a806cec) */
/* WARNING: Removing unreachable block (ram,0x00010a806cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a806cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a806d00) */
/* WARNING: Removing unreachable block (ram,0x00010a806d08) */
/* WARNING: Removing unreachable block (ram,0x00010a806d10) */
/* WARNING: Removing unreachable block (ram,0x00010a806d18) */
/* WARNING: Removing unreachable block (ram,0x00010a806d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d24) */
/* WARNING: Removing unreachable block (ram,0x00010a806d2c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d50) */
/* WARNING: Removing unreachable block (ram,0x00010a806d58) */
/* WARNING: Removing unreachable block (ram,0x00010a806d5c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d60) */
/* WARNING: Removing unreachable block (ram,0x00010a806d68) */
/* WARNING: Removing unreachable block (ram,0x00010a806d70) */
/* WARNING: Removing unreachable block (ram,0x00010a806d74) */
/* WARNING: Removing unreachable block (ram,0x00010a806d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a806d94) */
/* WARNING: Removing unreachable block (ram,0x00010a806d98) */
/* WARNING: Removing unreachable block (ram,0x00010a806da0) */
/* WARNING: Removing unreachable block (ram,0x00010a806da8) */
/* WARNING: Removing unreachable block (ram,0x00010a806dac) */
/* WARNING: Removing unreachable block (ram,0x00010a806dc4) */
/* WARNING: Removing unreachable block (ram,0x00010a806e30) */
/* WARNING: Removing unreachable block (ram,0x00010a806e38) */
/* WARNING: Removing unreachable block (ram,0x00010a806e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e44) */
/* WARNING: Removing unreachable block (ram,0x00010a806e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e50) */
/* WARNING: Removing unreachable block (ram,0x00010a806e68) */
/* WARNING: Removing unreachable block (ram,0x00010a806e70) */
/* WARNING: Removing unreachable block (ram,0x00010a806e74) */
/* WARNING: Removing unreachable block (ram,0x00010a806e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a806e84) */
/* WARNING: Removing unreachable block (ram,0x00010a806e88) */
/* WARNING: Removing unreachable block (ram,0x00010a806ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ea8) */
/* WARNING: Removing unreachable block (ram,0x00010a806eac) */
/* WARNING: Removing unreachable block (ram,0x00010a806eb4) */
/* WARNING: Removing unreachable block (ram,0x00010a806ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a806ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a806ed8) */
/* WARNING: Removing unreachable block (ram,0x00010a806f50) */
/* WARNING: Removing unreachable block (ram,0x00010a806f54) */
/* WARNING: Removing unreachable block (ram,0x00010a806f70) */
/* WARNING: Removing unreachable block (ram,0x00010a806ef4) */
/* WARNING: Removing unreachable block (ram,0x00010a806844) */
/* WARNING: Removing unreachable block (ram,0x00010a8066b8) */
/* WARNING: Removing unreachable block (ram,0x00010a80679c) */

void FUN_10a806368(undefined4 *param_1,undefined ***param_2,undefined8 param_3,undefined ***param_4,
                  undefined ***param_5)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar14;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined **ppuVar15;
  undefined ***unaff_x24;
  undefined **ppuVar16;
  undefined8 *unaff_x25;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined8 uStack_180;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 uStack_158;
  undefined8 *apuStack_150 [7];
  undefined **ppuStack_118;
  undefined8 *apuStack_110 [7];
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar7[0x59] < (undefined **)0x8) {
    pppuVar7[(long)pppuVar7[0x59] + 0x4e] = pppuVar7[0x5a];
    pppuVar7[0x59] = (undefined **)((long)pppuVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar7 + 0x4b);
  }
  pppuVar8 = param_2;
  FUN_10a8055f8(param_2,param_3);
  FUN_10a80683c(param_5);
  func_0x000109898570(&pppuStack_170,param_2,param_4);
  FUN_10a05dcbc(&uStack_180,param_2,param_4 + 2);
  pppuVar9 = param_2;
  FUN_10a059354(&pppuStack_190,param_2,param_4 + 4);
  pppuVar10 = pppuStack_178;
  puVar17 = unaff_x25;
  if (*(char *)((long)pppuVar8 + 0x4f) < '\0') {
    if (pppuVar8[8] == (undefined **)0x0) goto LAB_10a8064cc;
LAB_10a806430:
    if (-1 < (char)bStack_159) {
      uStack_168 = (ulong)bStack_159;
    }
    if (uStack_168 == 0) {
      if (pppuStack_190 != (undefined ***)0x0) {
        pppuVar9 = &ppuStack_98;
        func_0x000107c2b054(pppuVar9,&UNK_10f678cfa);
        if (*(char *)(pppuStack_190 + 8) == '\x01') {
          (*(code *)*pppuStack_190)();
        }
        else if (*(char *)(pppuStack_190 + 8) == '\x02') {
          FUN_10a05aad0(pppuStack_190,&ppuStack_98);
          pppuVar9 = pppuStack_190;
        }
      }
    }
    else {
      if (pppuStack_178 == (undefined ***)0x0) {
        ppuStack_98 = (undefined **)0x10a809188;
        ppuStack_90 = &PTR_DAT_110c1fd68;
        uStack_88 = uStack_180;
        pppuStack_80 = (undefined ***)0x0;
      }
      else {
        pppuVar9 = pppuStack_178 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_98 = (undefined **)0x10a809188;
        ppuStack_90 = &PTR_DAT_110c1fd68;
        uStack_88 = uStack_180;
        pppuStack_80 = pppuStack_178;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          ppuVar12 = *pppuVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_178)[2])(pppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
        }
      }
      pppuVar10 = pppuStack_188;
      param_4 = &ppuStack_90;
      if (pppuStack_188 == (undefined ***)0x0) {
        uStack_d8 = 0x10a809224;
        ppuStack_d0 = &PTR_DAT_110c1fd88;
        pppuStack_c8 = pppuStack_190;
        pppuStack_c0 = (undefined ***)0x0;
      }
      else {
        pppuVar9 = pppuStack_188 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_d8 = 0x10a809224;
        ppuStack_d0 = &PTR_DAT_110c1fd88;
        pppuStack_c8 = pppuStack_190;
        pppuStack_c0 = pppuStack_188;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          ppuVar12 = *pppuVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_188)[2])(pppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
        }
      }
      ppuVar12 = pppuVar8[0xc];
      ppuStack_118 = ppuStack_98;
      param_5 = &ppuStack_118;
      (*(code *)ppuStack_90[2])(apuStack_110,param_4);
      param_2 = &ppuStack_d0;
      uStack_158 = uStack_d8;
      (*(code *)ppuStack_d0[2])(apuStack_150,param_2);
      FUN_10a6e7dc0(ppuVar12,&pppuStack_170,&ppuStack_118,&uStack_158);
      (*(code *)*apuStack_150[0])(apuStack_150);
      (*(code *)*apuStack_110[0])(apuStack_110);
      (*(code *)*ppuStack_d0)(param_2);
      pppuVar9 = param_4;
      (*(code *)*ppuStack_90)();
      puVar17 = &uStack_158;
    }
  }
  else {
    if (*(char *)((long)pppuVar8 + 0x4f) != '\0') goto LAB_10a806430;
LAB_10a8064cc:
    if (pppuStack_190 != (undefined ***)0x0) {
      pppuVar9 = &ppuStack_98;
      func_0x000107c2b054(pppuVar9,&UNK_10f678cbc);
      if (*(char *)(pppuStack_190 + 8) == '\x01') {
        (*(code *)*pppuStack_190)();
      }
      else if (*(char *)(pppuStack_190 + 8) == '\x02') {
        FUN_10a05aad0(pppuStack_190,&ppuStack_98);
        pppuVar9 = pppuStack_190;
      }
    }
  }
  if (pppuStack_188 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_188 + 1;
    do {
      ppuVar12 = *pppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar4) {
        *pppuVar10 = (undefined **)((long)ppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_188)[2])(pppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuStack_188;
    }
  }
  if (pppuStack_178 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_178 + 1;
    do {
      ppuVar12 = *pppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar4) {
        *pppuVar10 = (undefined **)((long)ppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_178)[2])(pppuStack_178);
      pppuVar9 = pppuStack_178;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((char)bStack_159 < '\0') {
    pppuVar9 = pppuStack_170;
    __ZdlPv();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a07a8a8(&pppuStack_190);
    func_0x00010a042b54(&uStack_180);
    if ((char)bStack_159 < '\0') {
      __ZdlPv(pppuStack_170);
    }
    unaff_x30 = 0x10a806834;
    register0x00000008 = (BADSPACEBASE *)&pppuStack_190;
    unaff_x19 = pppuVar7;
    unaff_x20 = pppuVar9;
    unaff_x21 = pppuStack_178;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_x24 = param_5;
    unaff_x25 = puVar17;
    unaff_x29 = puVar1;
  }
  pppuVar10 = pppuVar7 + 0x4b;
  ppuVar12 = pppuVar7[0x59];
  ppuVar11 = (undefined **)((long)ppuVar12 + -1);
  pppuVar7[0x59] = ppuVar11;
  if (ppuVar11 < (undefined **)0x8) {
    ppuVar12 = pppuVar10[(long)ppuVar12 + 2];
    if (pppuVar7[0x5a] == ppuVar12) {
      return;
    }
  }
  else {
    ppuVar12 = (undefined **)pppuVar7[0x57][-1];
    pppuVar7[0x57] = pppuVar7[0x57] + -1;
    if (pppuVar7[0x5a] == ppuVar12) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar11 = *pppuVar10;
  ppuVar13 = pppuVar7[0x4c];
  lVar14 = (long)ppuVar13 - (long)ppuVar11;
  ppuVar16 = (undefined **)(lVar14 >> 4);
  if (ppuVar16 < ppuVar12) {
    uVar18 = (long)ppuVar12 - (long)ppuVar16;
    ppuVar15 = pppuVar7[0x4d];
    if ((ulong)((long)ppuVar15 - (long)ppuVar13 >> 4) < uVar18) {
      if ((ulong)ppuVar12 >> 0x3c == 0) {
        ppuVar13 = (undefined **)((long)ppuVar15 - (long)ppuVar11 >> 3);
        if (ppuVar13 <= ppuVar12) {
          ppuVar13 = ppuVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar15 - (long)ppuVar11)) {
          ppuVar13 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar10;
        if ((ulong)ppuVar13 >> 0x3c == 0) {
          lVar6 = (long)ppuVar13 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar14;
          _bzero(lVar2,uVar18 * 0x10);
          ppuVar16 = (undefined **)(lVar2 + (long)ppuVar16 * -0x10);
          _memcpy(ppuVar16,ppuVar11,lVar14);
          *pppuVar10 = ppuVar16;
          pppuVar7[0x4c] = (undefined **)(lVar2 + uVar18 * 0x10);
          pppuVar7[0x4d] = (undefined **)(lVar6 + (long)ppuVar13 * 0x10);
          *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar15;
          *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar11;
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
    _bzero(ppuVar13,uVar18 * 0x10);
    pppuVar7[0x4c] = ppuVar13 + uVar18 * 2;
  }
  else if (ppuVar12 < ppuVar16) {
    while (ppuVar13 != ppuVar11 + (long)ppuVar12 * 2) {
      ppuVar13 = ppuVar13 + -2;
      func_0x00010988c204(ppuVar13);
    }
    pppuVar7[0x4c] = ppuVar11 + (long)ppuVar12 * 2;
  }
code_r0x00010988c138:
  pppuVar7[0x5a] = ppuVar12;
  return;
}



/* Entry: 10a80683c; end: 10a80685f;  */

void FUN_10a80683c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 *extraout_x8;
  undefined ***pppuVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 *puStack_180;
  long *plStack_178;
  code *pcStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  code *pcStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  pcVar9 = (code *)0x3;
  uVar16 = 0;
  FUN_10a052ee0(3,0);
  pcStack_78 = *(code **)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar9;
  (**(code **)(*(long *)pcVar9 + 0x58))();
  if (*(ulong *)(pcVar7 + 0x2c8) < 8) {
    *(long *)(pcVar7 + (*(ulong *)(pcVar7 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar7 + 0x2d0);
    *(long *)(pcVar7 + 0x2c8) = *(long *)(pcVar7 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar7 + 600);
  }
  pcVar10 = pcVar9;
  FUN_10a8055f8(pcVar9,uVar16);
  FUN_10a807040(param_4);
  if (*param_1 == 1) {
    ppuStack_160 = (undefined **)0x0;
    plStack_158 = (long *)0x0;
LAB_10a80699c:
    ppuVar12 = ppuStack_160;
    if (param_1[4] == 7) {
      pcVar11 = pcVar9;
      (**(code **)(*(long *)pcVar9 + 0x98))(pcVar9,*(undefined8 *)(param_1 + 6));
      pcVar13 = pcVar9;
      pcStack_150 = pcVar11;
      (**(code **)(*(long *)pcVar9 + 0x228))(pcVar9,&pcStack_150);
      if ((int)pcVar13 != 0) {
        pcVar11 = pcVar9;
        (**(code **)(*(long *)pcVar9 + 0x58))();
        lVar14 = *(long *)(pcVar11 + 0x240);
        if ((lVar14 == 0) ||
           (___dynamic_cast(lVar14,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar11 = pcStack_150,
           lVar14 == 0)) {
          func_0x00010988bd28(&UNK_10f685540);
          goto LAB_10a806f70;
        }
        pcStack_150 = (code *)0x0;
        ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,7);
        pcStack_a8 = pcVar11;
        pcStack_b8 = pcVar9;
        FUN_10a688ac0(&ppuStack_120,&pcStack_b8,*(undefined8 *)(lVar14 + 8));
        if ((3 < (int)ppuStack_b0) && (pcStack_a8 != (code *)0x0)) {
          (*(code *)**(undefined8 **)pcStack_a8)();
        }
      }
      if (pcStack_150 != (code *)0x0) {
        (*(code *)**(undefined8 **)pcStack_150)();
      }
      if (((ulong)pcVar13 & 1) != 0) {
        plVar15 = (long *)0x60;
        __Znwm();
        plVar15[1] = 0;
        plVar15[2] = 0;
        *plVar15 = (long)&PTR_FUN_110c1fb00;
        pcStack_170 = (code *)(plVar15 + 3);
        plVar15[4] = (long)plStack_118;
        *(undefined ***)pcStack_170 = ppuStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar1 = plStack_118 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar15[6] = lStack_108;
        plVar15[5] = lStack_110;
        if (lStack_108 != 0) {
          plVar1 = (long *)(lStack_108 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(undefined1 *)(plVar15 + 0xb) = 2;
        plStack_168 = plVar15;
        FUN_10a688c1c(&ppuStack_120);
        FUN_10a059354(&puStack_180,pcVar9,param_1 + 8);
        pcVar9 = (code *)ppuVar12[3];
        if ((pcVar9 == (code *)0x0) || (*(int *)(ppuVar12 + 5) == 0)) {
          func_0x000107c2b054(&ppuStack_120,&UNK_10f678d36);
          if ((puStack_180 == (undefined8 *)0x0) || (*(char *)(puStack_180 + 8) != '\x02')) {
            if ((puStack_180 != (undefined8 *)0x0) && (*(char *)(puStack_180 + 8) == '\x01')) {
              (*(code *)*puStack_180)(&ppuStack_120,puStack_180);
            }
          }
          else {
            FUN_10a05aad0(puStack_180,&ppuStack_120);
          }
          if (lStack_110 < 0) {
            __ZdlPv(ppuStack_120);
          }
        }
        else {
          ppuStack_120 = &PTR_FUN_110c78d30;
          plStack_118 = (long *)0x0;
          uStack_c0 = 0;
          lStack_108 = 0;
          lStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_d0 = 0;
          ppuVar22 = (undefined **)ppuVar12[4];
          if (ppuVar22 != (undefined **)0x0) {
            ppuVar2 = ppuVar22 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar6) {
                *ppuVar2 = *ppuVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          dVar29 = *(double *)(pcVar9 + 0x28);
          auVar27 = *(undefined1 (*) [16])(pcVar9 + 0x28);
          pcStack_b8 = pcVar9;
          ppuStack_b0 = ppuVar22;
          FUN_10ae0f554(&ppuStack_120);
          uStack_c0 = 2;
          plVar15 = plStack_118;
          if (((ulong)plStack_118 & 1) != 0) {
            plVar15 = *(long **)((ulong)plStack_118 & 0xfffffffffffffffe);
          }
          func_0x00010a700ae4();
          auVar27 = NEON_ext(auVar27,auVar27,8,1);
          dVar28 = 180.0;
          plStack_c8 = plVar15;
          dVar29 = (double)___sincos_stret((dVar29 * 3.141592653589793) / 180.0);
          dVar30 = dVar29 * dVar29 * -0.006694379990141316 + 1.0;
          dVar29 = (double)_pow(dVar30,0x3ff8000000000000);
          dVar28 = *(double *)(pcVar9 + 0x40) /
                   ((dVar28 * 20037508.342789244) / (SQRT(dVar30) * 180.0));
          dVar29 = *(double *)(pcVar9 + 0x48) / (19903369.647886984 / (dVar29 * 180.0));
          plVar15[3] = (long)(auVar27._8_8_ - dVar29);
          plVar15[2] = (long)(auVar27._0_8_ - dVar28);
          plVar15[5] = (long)(auVar27._8_8_ + dVar29);
          plVar15[4] = (long)(auVar27._0_8_ + dVar28);
          uStack_d0 = CONCAT44(1,*(undefined4 *)(ppuVar12 + 5));
          if (ppuVar22 != (undefined **)0x0) {
            ppuVar12 = ppuVar22 + 1;
            do {
              puVar20 = *ppuVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar6) {
                *ppuVar12 = puVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar20 == (undefined *)0x0) {
              (**(code **)(*ppuVar22 + 0x10))(ppuVar22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
            }
          }
          FUN_10a6e75a0(*(long *)(pcVar10 + 0x50),&ppuStack_120);
          plVar15 = plStack_178;
          pcStack_150 = pcStack_170;
          plStack_148 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar1 = plStack_168 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puStack_140 = puStack_180;
          plStack_138 = plStack_178;
          if (plStack_178 != (long *)0x0) {
            plVar1 = plStack_178 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_130 = *(long *)(pcVar10 + 0x28);
          lVar14 = *(long *)(pcVar10 + 0x30);
          if (lVar14 != 0) {
            plVar1 = (long *)(lVar14 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar21 = *(long *)(pcVar10 + 0x50);
          pcStack_b8 = FUN_10a8092d4;
          ppuStack_b0 = &PTR_FUN_110c1fdc0;
          pcStack_a8 = pcStack_170;
          plStack_a0 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar1 = plStack_168 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puStack_98 = puStack_180;
          plStack_90 = plStack_178;
          if (plStack_178 != (long *)0x0) {
            plVar1 = plStack_178 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (lVar14 != 0) {
            plVar1 = (long *)(lVar14 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_128 = lVar14;
          puStack_88 = (undefined8 *)lStack_130;
          lStack_80 = lVar14;
          FUN_10a6e7358(*(undefined8 *)(lVar21 + 0x80),&pcStack_b8);
          (*(code *)*ppuStack_b0)(&ppuStack_b0);
          if (lVar14 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
          }
          if (plVar15 != (long *)0x0) {
            plVar1 = plVar15 + 1;
            do {
              lVar14 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          plVar15 = plStack_148;
          if (plStack_148 != (long *)0x0) {
            plVar1 = plStack_148 + 1;
            do {
              lVar14 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_148 + 0x10))(plStack_148);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          FUN_10ae0f5dc(&ppuStack_120);
        }
        if (plStack_178 != (long *)0x0) {
          plVar15 = plStack_178 + 1;
          do {
            lVar14 = *plVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
          }
        }
        plVar15 = plStack_168;
        if (plStack_168 != (long *)0x0) {
          plVar1 = plStack_168 + 1;
          do {
            lVar14 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar1 = plStack_158 + 1;
          do {
            lVar14 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        *extraout_x8 = 0;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_78) {
          pcVar9 = pcVar7 + 600;
          lVar14 = *(long *)(pcVar7 + 0x2c8);
          uVar17 = lVar14 - 1;
          *(ulong *)(pcVar7 + 0x2c8) = uVar17;
          if (uVar17 < 8) {
            uVar17 = *(ulong *)(pcVar9 + (lVar14 + 2) * 8);
            if (*(ulong *)(pcVar7 + 0x2d0) == uVar17) {
              return;
            }
          }
          else {
            uVar17 = *(ulong *)(*(long *)(pcVar7 + 0x2b8) + -8);
            *(ulong **)(pcVar7 + 0x2b8) = (ulong *)(*(long *)(pcVar7 + 0x2b8) + -8);
            if (*(ulong *)(pcVar7 + 0x2d0) == uVar17) {
              return;
            }
          }
          puVar4 = *(undefined8 **)pcVar9;
          puVar24 = *(undefined8 **)(pcVar7 + 0x260);
          lVar14 = (long)puVar24 - (long)puVar4;
          uVar25 = lVar14 >> 4;
          if (uVar25 < uVar17) {
            uVar26 = uVar17 - uVar25;
            lVar21 = *(long *)(pcVar7 + 0x268);
            if ((ulong)(lVar21 - (long)puVar24 >> 4) < uVar26) {
              if (uVar17 >> 0x3c == 0) {
                uVar19 = lVar21 - (long)puVar4 >> 3;
                if (uVar19 <= uVar17) {
                  uVar19 = uVar17;
                }
                if (0x7fffffffffffffef < (ulong)(lVar21 - (long)puVar4)) {
                  uVar19 = 0xfffffffffffffff;
                }
                pcStack_78 = pcVar9;
                if (uVar19 >> 0x3c == 0) {
                  lVar8 = uVar19 << 4;
                  __Znwm();
                  lVar3 = lVar8 + lVar14;
                  _bzero(lVar3,uVar26 * 0x10);
                  lVar23 = lVar3 + uVar25 * -0x10;
                  _memcpy(lVar23,puVar4,lVar14);
                  *(long *)pcVar9 = lVar23;
                  *(ulong *)(pcVar7 + 0x260) = lVar3 + uVar26 * 0x10;
                  *(ulong *)(pcVar7 + 0x268) = lVar8 + uVar19 * 0x10;
                  puStack_98 = puVar4;
                  plStack_90 = puVar4;
                  puStack_88 = puVar4;
                  lStack_80 = lVar21;
                  func_0x00010988c1b8(&puStack_98);
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
            _bzero(puVar24,uVar26 * 0x10);
            *(undefined8 **)(pcVar7 + 0x260) = puVar24 + uVar26 * 2;
          }
          else if (uVar17 < uVar25) {
            while (puVar24 != puVar4 + uVar17 * 2) {
              puVar24 = puVar24 + -2;
              func_0x00010988c204(puVar24);
            }
            *(undefined8 **)(pcVar7 + 0x260) = puVar4 + uVar17 * 2;
          }
code_r0x00010988c138:
          *(ulong *)(pcVar7 + 0x2d0) = uVar17;
          return;
        }
        ___stack_chk_fail();
        goto LAB_10a806f54;
      }
    }
    func_0x00010988bd28(&UNK_10f6347ad);
  }
  else {
    pcVar11 = pcVar9;
    func_0x000109898688(pcVar9,param_1);
    if (pcVar11 != (code *)0x0) {
      func_0x00010989879c(&ppuStack_120);
      if ((ppuStack_120 == (undefined **)0x0) ||
         (ppuVar12 = ppuStack_120,
         ___dynamic_cast(ppuStack_120,&PTR_DAT_110b178e0,&PTR_DAT_110c1daa0,0),
         ppuVar12 == (undefined **)0x0)) {
        pppuVar18 = &ppuStack_160;
      }
      else {
        plStack_158 = plStack_118;
        pppuVar18 = &ppuStack_120;
        ppuStack_160 = ppuVar12;
      }
      *pppuVar18 = (undefined **)0x0;
      pppuVar18[1] = (undefined **)0x0;
      plVar15 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar1 = plStack_118 + 1;
        do {
          lVar14 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      if (ppuStack_160 == (undefined **)0x0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10a806f70;
      }
      goto LAB_10a80699c;
    }
LAB_10a806f54:
    func_0x00010988bd28(&UNK_10f68f52e);
  }
LAB_10a806f70:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a806f74);
  (*pcVar7)();
}



/* Entry: 10a806860; end: 10a80703f;  */

void FUN_10a806860(undefined4 *param_1,code *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  undefined **ppuVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined ***pppuVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined8 *puVar21;
  code *pcVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 *puStack_170;
  long *plStack_168;
  code *pcStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  code *pcStack_140;
  long *plStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  code *pcStack_68;
  
  pcStack_68 = *(code **)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar7 + 0x2c8) < 8) {
    *(long *)(pcVar7 + (*(ulong *)(pcVar7 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar7 + 0x2d0);
    *(long *)(pcVar7 + 0x2c8) = *(long *)(pcVar7 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar7 + 600);
  }
  pcVar9 = param_2;
  FUN_10a8055f8(param_2,param_3);
  FUN_10a807040(param_5);
  if (*param_4 == 1) {
    ppuStack_150 = (undefined **)0x0;
    plStack_148 = (long *)0x0;
LAB_10a80699c:
    ppuVar10 = ppuStack_150;
    if (param_4[4] == 7) {
      pcVar22 = param_2;
      (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 6));
      pcVar11 = param_2;
      pcStack_140 = pcVar22;
      (**(code **)(*(long *)param_2 + 0x228))(param_2,&pcStack_140);
      if ((int)pcVar11 != 0) {
        pcVar22 = param_2;
        (**(code **)(*(long *)param_2 + 0x58))();
        lVar12 = *(long *)(pcVar22 + 0x240);
        if ((lVar12 == 0) ||
           (___dynamic_cast(lVar12,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar22 = pcStack_140,
           lVar12 == 0)) {
          func_0x00010988bd28(&UNK_10f685540);
          goto LAB_10a806f70;
        }
        pcStack_140 = (code *)0x0;
        ppuStack_a0 = (undefined **)CONCAT44(ppuStack_a0._4_4_,7);
        pcStack_98 = pcVar22;
        pcStack_a8 = param_2;
        FUN_10a688ac0(&ppuStack_110,&pcStack_a8,*(undefined8 *)(lVar12 + 8));
        if ((3 < (int)ppuStack_a0) && (pcStack_98 != (code *)0x0)) {
          (*(code *)**(undefined8 **)pcStack_98)();
        }
      }
      if (pcStack_140 != (code *)0x0) {
        (*(code *)**(undefined8 **)pcStack_140)();
      }
      if (((ulong)pcVar11 & 1) != 0) {
        plVar13 = (long *)0x60;
        __Znwm();
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&PTR_FUN_110c1fb00;
        pcStack_160 = (code *)(plVar13 + 3);
        plVar13[4] = (long)plStack_108;
        *(undefined ***)pcStack_160 = ppuStack_110;
        if (plStack_108 != (long *)0x0) {
          plVar1 = plStack_108 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar13[6] = lStack_f8;
        plVar13[5] = lStack_100;
        if (lStack_f8 != 0) {
          plVar1 = (long *)(lStack_f8 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(undefined1 *)(plVar13 + 0xb) = 2;
        plStack_158 = plVar13;
        FUN_10a688c1c(&ppuStack_110);
        FUN_10a059354(&puStack_170,param_2,param_4 + 8);
        pcVar22 = (code *)ppuVar10[3];
        if ((pcVar22 == (code *)0x0) || (*(int *)(ppuVar10 + 5) == 0)) {
          func_0x000107c2b054(&ppuStack_110,&UNK_10f678d36);
          if ((puStack_170 == (undefined8 *)0x0) || (*(char *)(puStack_170 + 8) != '\x02')) {
            if ((puStack_170 != (undefined8 *)0x0) && (*(char *)(puStack_170 + 8) == '\x01')) {
              (*(code *)*puStack_170)(&ppuStack_110,puStack_170);
            }
          }
          else {
            FUN_10a05aad0(puStack_170,&ppuStack_110);
          }
          if (lStack_100 < 0) {
            __ZdlPv(ppuStack_110);
          }
        }
        else {
          ppuStack_110 = &PTR_FUN_110c78d30;
          plStack_108 = (long *)0x0;
          uStack_b0 = 0;
          lStack_f8 = 0;
          lStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_c0 = 0;
          ppuVar19 = (undefined **)ppuVar10[4];
          if (ppuVar19 != (undefined **)0x0) {
            ppuVar2 = ppuVar19 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar6) {
                *ppuVar2 = *ppuVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          dVar27 = *(double *)(pcVar22 + 0x28);
          auVar25 = *(undefined1 (*) [16])(pcVar22 + 0x28);
          pcStack_a8 = pcVar22;
          ppuStack_a0 = ppuVar19;
          FUN_10ae0f554(&ppuStack_110);
          uStack_b0 = 2;
          plVar13 = plStack_108;
          if (((ulong)plStack_108 & 1) != 0) {
            plVar13 = *(long **)((ulong)plStack_108 & 0xfffffffffffffffe);
          }
          func_0x00010a700ae4();
          auVar25 = NEON_ext(auVar25,auVar25,8,1);
          dVar26 = 180.0;
          plStack_b8 = plVar13;
          dVar27 = (double)___sincos_stret((dVar27 * 3.141592653589793) / 180.0);
          dVar28 = dVar27 * dVar27 * -0.006694379990141316 + 1.0;
          dVar27 = (double)_pow(dVar28,0x3ff8000000000000);
          dVar26 = *(double *)(pcVar22 + 0x40) /
                   ((dVar26 * 20037508.342789244) / (SQRT(dVar28) * 180.0));
          dVar27 = *(double *)(pcVar22 + 0x48) / (19903369.647886984 / (dVar27 * 180.0));
          plVar13[3] = (long)(auVar25._8_8_ - dVar27);
          plVar13[2] = (long)(auVar25._0_8_ - dVar26);
          plVar13[5] = (long)(auVar25._8_8_ + dVar27);
          plVar13[4] = (long)(auVar25._0_8_ + dVar26);
          uStack_c0 = CONCAT44(1,*(undefined4 *)(ppuVar10 + 5));
          if (ppuVar19 != (undefined **)0x0) {
            ppuVar10 = ppuVar19 + 1;
            do {
              puVar17 = *ppuVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
              if (bVar6) {
                *ppuVar10 = puVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar17 == (undefined *)0x0) {
              (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
            }
          }
          FUN_10a6e75a0(*(long *)(pcVar9 + 0x50),&ppuStack_110);
          plVar13 = plStack_168;
          pcStack_140 = pcStack_160;
          plStack_138 = plStack_158;
          if (plStack_158 != (long *)0x0) {
            plVar1 = plStack_158 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puStack_130 = puStack_170;
          plStack_128 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar1 = plStack_168 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_120 = *(long *)(pcVar9 + 0x28);
          lVar12 = *(long *)(pcVar9 + 0x30);
          if (lVar12 != 0) {
            plVar1 = (long *)(lVar12 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar18 = *(long *)(pcVar9 + 0x50);
          pcStack_a8 = FUN_10a8092d4;
          ppuStack_a0 = &PTR_FUN_110c1fdc0;
          pcStack_98 = pcStack_160;
          plStack_90 = plStack_158;
          if (plStack_158 != (long *)0x0) {
            plVar1 = plStack_158 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puStack_88 = puStack_170;
          plStack_80 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar1 = plStack_168 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (lVar12 != 0) {
            plVar1 = (long *)(lVar12 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_118 = lVar12;
          puStack_78 = (undefined8 *)lStack_120;
          lStack_70 = lVar12;
          FUN_10a6e7358(*(undefined8 *)(lVar18 + 0x80),&pcStack_a8);
          (*(code *)*ppuStack_a0)(&ppuStack_a0);
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
          }
          if (plVar13 != (long *)0x0) {
            plVar1 = plVar13 + 1;
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          plVar13 = plStack_138;
          if (plStack_138 != (long *)0x0) {
            plVar1 = plStack_138 + 1;
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_138 + 0x10))(plStack_138);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          FUN_10ae0f5dc(&ppuStack_110);
        }
        if (plStack_168 != (long *)0x0) {
          plVar13 = plStack_168 + 1;
          do {
            lVar12 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
        plVar13 = plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar1 = plStack_158 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar1 = plStack_148 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        *param_1 = 0;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_68) {
          pcVar9 = pcVar7 + 600;
          lVar12 = *(long *)(pcVar7 + 0x2c8);
          uVar14 = lVar12 - 1;
          *(ulong *)(pcVar7 + 0x2c8) = uVar14;
          if (uVar14 < 8) {
            uVar14 = *(ulong *)(pcVar9 + (lVar12 + 2) * 8);
            if (*(ulong *)(pcVar7 + 0x2d0) == uVar14) {
              return;
            }
          }
          else {
            uVar14 = *(ulong *)(*(long *)(pcVar7 + 0x2b8) + -8);
            *(ulong **)(pcVar7 + 0x2b8) = (ulong *)(*(long *)(pcVar7 + 0x2b8) + -8);
            if (*(ulong *)(pcVar7 + 0x2d0) == uVar14) {
              return;
            }
          }
          puVar4 = *(undefined8 **)pcVar9;
          puVar21 = *(undefined8 **)(pcVar7 + 0x260);
          lVar12 = (long)puVar21 - (long)puVar4;
          uVar23 = lVar12 >> 4;
          if (uVar23 < uVar14) {
            uVar24 = uVar14 - uVar23;
            lVar18 = *(long *)(pcVar7 + 0x268);
            if ((ulong)(lVar18 - (long)puVar21 >> 4) < uVar24) {
              if (uVar14 >> 0x3c == 0) {
                uVar16 = lVar18 - (long)puVar4 >> 3;
                if (uVar16 <= uVar14) {
                  uVar16 = uVar14;
                }
                if (0x7fffffffffffffef < (ulong)(lVar18 - (long)puVar4)) {
                  uVar16 = 0xfffffffffffffff;
                }
                pcStack_68 = pcVar9;
                if (uVar16 >> 0x3c == 0) {
                  lVar8 = uVar16 << 4;
                  __Znwm();
                  lVar3 = lVar8 + lVar12;
                  _bzero(lVar3,uVar24 * 0x10);
                  lVar20 = lVar3 + uVar23 * -0x10;
                  _memcpy(lVar20,puVar4,lVar12);
                  *(long *)pcVar9 = lVar20;
                  *(ulong *)(pcVar7 + 0x260) = lVar3 + uVar24 * 0x10;
                  *(ulong *)(pcVar7 + 0x268) = lVar8 + uVar16 * 0x10;
                  puStack_88 = puVar4;
                  plStack_80 = puVar4;
                  puStack_78 = puVar4;
                  lStack_70 = lVar18;
                  func_0x00010988c1b8(&puStack_88);
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
            _bzero(puVar21,uVar24 * 0x10);
            *(undefined8 **)(pcVar7 + 0x260) = puVar21 + uVar24 * 2;
          }
          else if (uVar14 < uVar23) {
            while (puVar21 != puVar4 + uVar14 * 2) {
              puVar21 = puVar21 + -2;
              func_0x00010988c204(puVar21);
            }
            *(undefined8 **)(pcVar7 + 0x260) = puVar4 + uVar14 * 2;
          }
code_r0x00010988c138:
          *(ulong *)(pcVar7 + 0x2d0) = uVar14;
          return;
        }
        ___stack_chk_fail();
        goto LAB_10a806f54;
      }
    }
    func_0x00010988bd28(&UNK_10f6347ad);
  }
  else {
    pcVar22 = param_2;
    func_0x000109898688(param_2,param_4);
    if (pcVar22 != (code *)0x0) {
      func_0x00010989879c(&ppuStack_110);
      if ((ppuStack_110 == (undefined **)0x0) ||
         (ppuVar10 = ppuStack_110,
         ___dynamic_cast(ppuStack_110,&PTR_DAT_110b178e0,&PTR_DAT_110c1daa0,0),
         ppuVar10 == (undefined **)0x0)) {
        pppuVar15 = &ppuStack_150;
      }
      else {
        plStack_148 = plStack_108;
        pppuVar15 = &ppuStack_110;
        ppuStack_150 = ppuVar10;
      }
      *pppuVar15 = (undefined **)0x0;
      pppuVar15[1] = (undefined **)0x0;
      plVar13 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar1 = plStack_108 + 1;
        do {
          lVar12 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      if (ppuStack_150 == (undefined **)0x0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10a806f70;
      }
      goto LAB_10a80699c;
    }
LAB_10a806f54:
    func_0x00010988bd28(&UNK_10f68f52e);
  }
LAB_10a806f70:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a806f74);
  (*pcVar7)();
}



/* Entry: 10a807040; end: 10a807063;  */

void FUN_10a807040(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c1fb00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a807064; end: 10a807073;  */

void FUN_10a807064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fb00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a807074; end: 10a807093;  */

void FUN_10a807074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fb00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a807094; end: 10a8070bb;  */

undefined1  [16] FUN_10a807094(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a8070b8);
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



/* Entry: 10a8070bc; end: 10a8071c3;  */

long FUN_10a8070bc(long param_1)

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



/* Entry: 10a8071c4; end: 10a8071d3;  */

void FUN_10a8071c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fb50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8071d4; end: 10a8071f3;  */

void FUN_10a8071d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fb50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8071f4; end: 10a80725f;  */

void FUN_10a8071f4(long param_1)

{
  func_0x00010a05a86c(param_1 + 0xa8);
  FUN_10a717390(param_1 + 0x98);
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a807260; end: 10a807273;  */

void FUN_10a807260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a807274; end: 10a807293;  */

void FUN_10a807274(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c1fba0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a807294; end: 10a8072d3;  */

void FUN_10a807294(long param_1)

{
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a8072d4; end: 10a8072e7;  */

void FUN_10a8072d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8072e8; end: 10a807307;  */

void FUN_10a8072e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c1fbf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a807308; end: 10a807313;  */

long FUN_10a807308(long param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f1fc(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10a807314; end: 10a80736b;  */

long FUN_10a807314(long param_1)

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



/* Entry: 10a80736c; end: 10a80737b;  */

void FUN_10a80736c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fc40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a80737c; end: 10a80739b;  */

void FUN_10a80737c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1fc40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a80739c; end: 10a807477;  */

void FUN_10a80739c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  FUN_10a808548(param_1 + 0x30);
  plVar4 = *(long **)(param_1 + 0x28);
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
  plVar4 = *(long **)(param_1 + 0x20);
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
  plVar4 = *(long **)(param_1 + 0x18);
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
      FUN_109d1b3c4(plVar4,1,param_1 + 0x18);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))(plVar4);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a807478; end: 10a80747b;  */

void FUN_10a807478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a80747c; end: 10a80758f;  */

undefined8 * FUN_10a80747c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a807590; end: 10a807997;  */

void FUN_10a807590(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a816ba0;
  puVar5[1] = FUN_10a816ed0;
  puVar5[0xc] = param_2;
  FUN_10a807998(puVar5 + 2);
  lVar6 = puVar5[7];
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar6;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  lVar6 = puVar5[6];
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = (long *)puVar5[10];
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  puVar5[9] = lVar6;
  puVar5[10] = lVar6;
  FUN_10a807a78(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
  puVar5[10] = puVar5[0xb];
  plVar9 = (long *)(puVar5[0xb] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xd) = 1;
    lVar6 = puVar5[10];
    plVar9 = (long *)(lVar6 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar8 = *plVar9;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar6 + 0x18,&uStack_48);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  lVar6 = puVar5[10];
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar6 + 0xa8) & 1) != 0) {
      FUN_10a807a38(puVar5 + 2,lVar6 + 0x98);
      plVar9 = (long *)puVar5[10];
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
          }
        }
      }
      plVar9 = (long *)puVar5[0xb];
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
          }
        }
      }
      plVar9 = (long *)puVar5[9];
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
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
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar6 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a80786c);
  (*pcVar4)();
}



/* Entry: 10a807998; end: 10a807a37;  */

undefined8 * FUN_10a807998(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c1fc90;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a807a38; end: 10a807a77;  */

void FUN_10a807a38(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a807ffc(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
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
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a807a78; end: 10a807ffb;  */

/* WARNING: Removing unreachable block (ram,0x00010a807bd0) */
/* WARNING: Removing unreachable block (ram,0x00010a807de0) */
/* WARNING: Removing unreachable block (ram,0x00010a807b90) */
/* WARNING: Removing unreachable block (ram,0x00010a807d24) */

void FUN_10a807a78(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
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
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c1fcc8;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a808068;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a807d10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a807f50:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a807d10:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a808178;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a807f4c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a807df4:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a807f44;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a807df4;
  pcStack_68 = FUN_10a808068;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a807f44:
  *param_1 = (long)plVar4;
LAB_10a807f4c:
  plStack_80 = (long *)0x0;
  goto LAB_10a807f50;
}



/* Entry: 10a807ffc; end: 10a808067;  */

void FUN_10a807ffc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a808068; end: 10a808177;  */

void FUN_10a808068(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a808178;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a808174);
      (*pcVar4)();
    }
    FUN_10a807ffc(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a8084d8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a808178; end: 10a808257;  */

void FUN_10a808178(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a808068;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a8084d8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a808258; end: 10a8082cb;  */

long * FUN_10a808258(long *param_1)

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



/* Entry: 10a8082cc; end: 10a8084d7;  */

undefined8 * FUN_10a8082cc(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c1fcc8;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a8084d8; end: 10a808547;  */

void FUN_10a8084d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a808548; end: 10a8085bf;  */

void FUN_10a808548(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a8085c0; end: 10a808617;  */

long FUN_10a8085c0(long param_1)

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



/* Entry: 10a808618; end: 10a8087af;  */

long ***** FUN_10a808618(long param_1)

{
  long lVar1;
  long lVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  long ****pppplStack_98;
  char cStack_90;
  long **pplStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppplVar3 = &pppplStack_98;
    pppplStack_98 = (long ****)(param_1 + 0x70);
    func_0x00010a701888();
    ppppplVar4 = ppppplVar3;
    if (((ulong)ppppplVar3 & 1) != 0) {
      ppplStack_b0 = (long ***)0x0;
      ppplStack_a8 = (long ***)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      pppplVar7 = *(long *****)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      pppplVar5 = *(long *****)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      ppplStack_b0 = (long ***)pppplVar7;
      ppplStack_a8 = (long ***)pppplVar5;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; pppplVar7 != pppplVar5; pppplVar7 = pppplVar7 + 8) {
        pplStack_88 = (long **)*pppplVar7;
        (*(code *)pppplVar7[1][3])(apuStack_80,pppplVar7 + 1);
        (*(code *)pplStack_88)(param_1 + 8,&pplStack_88);
        (*(code *)*apuStack_80[0])(apuStack_80);
      }
      ppppplVar4 = (long *****)&ppplStack_b0;
      FUN_10a808548();
    }
    if (cStack_90 == '\x01') {
      ppppplVar4 = (long *****)pppplStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppplVar3 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    ppppplVar4 = (long *****)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar2 != lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar4;
  }
  ___stack_chk_fail();
  FUN_10a808548(&ppplStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppplStack_98);
  }
  __Unwind_Resume(ppppplVar4);
  ppppplVar3 = (long *****)&DAT_10f62a4d8;
  FUN_109ffde64();
  pppplVar7 = ppppplVar3[1];
  pppplVar5 = ppppplVar3[2];
  while (pppplVar5 != pppplVar7) {
    ppplVar6 = pppplVar5[-7];
    ppppplVar3[2] = pppplVar5 + -8;
    (*(code *)*ppplVar6)();
    pppplVar5 = ppppplVar3[2];
  }
  if (*ppppplVar3 != (long ****)0x0) {
    __ZdlPv();
  }
  return ppppplVar3;
}



/* Entry: 10a8087b0; end: 10a8087c3;  */

long * FUN_10a8087b0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a8087c4; end: 10a808817;  */

long * FUN_10a8087c4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a808818; end: 10a808c27;  */

void FUN_10a808818(long *param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined ****ppppuVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined ****ppppuVar14;
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
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  ppppuVar10 = &pppuStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = &PTR_FUN_110c78e70;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_a8 = (undefined **)0x0;
  func_0x0001092af8bc();
  lVar11 = *param_1;
  if ((*(byte *)(lVar11 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a808af0);
    (*pcVar5)();
  }
  ppppuVar8 = *(undefined *****)(lVar11 + 0x98);
  FUN_10a0f10ac(&ppuStack_c0,ppppuVar8,*(undefined8 *)(lVar11 + 0xa0));
  if (param_2[2] == (undefined **)0x0) goto LAB_10a808ab8;
  ppppuVar9 = (undefined ****)param_2[6];
  ppuVar13 = param_2[7];
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar1 = ppuVar13 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuVar1 = &PTR_PTR_11330c590;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_a8;
  }
  FUN_10a7df690(&pppuStack_d0,ppppuVar9,ppuVar13,ppuVar1);
  if (ppuVar13 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
  }
  ppppuVar14 = (undefined ****)param_2[2];
  if ((ppppuVar14 == (undefined ****)0x0) || (*(char *)(ppppuVar14 + 8) != '\x02')) {
    ppppuVar8 = ppppuVar9;
    if ((ppppuVar14 != (undefined ****)0x0) && (*(char *)(ppppuVar14 + 8) == '\x01')) {
      pppuVar12 = *ppppuVar14;
      pppuStack_98 = pppuStack_c8;
      pppuStack_a0 = pppuStack_d0;
      if (pppuStack_c8 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_c8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar3) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (*(code *)pppuVar12)(&pppuStack_a0);
      ppppuVar8 = ppppuVar14;
      if (pppuStack_98 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_98 + 1;
        do {
          ppuVar13 = *pppuVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
          if (bVar3) {
            *pppuVar12 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_10a808a64:
        pppuVar12 = pppuStack_98;
        ppppuVar8 = ppppuVar14;
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_98)[2])(pppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar12);
          ppppuVar8 = ppppuVar14;
        }
      }
    }
  }
  else {
    ppppuVar6 = ppppuVar14;
    FUN_10a688b40();
    pppuVar12 = pppuStack_c8;
    if (ppppuVar6 == (undefined ****)0x0) {
      ppppuVar8 = (undefined ****)0x0;
      if (ppppuVar9 != (undefined ****)0x0) {
        pppuStack_60 = ppppuVar14[1];
        pppuStack_68 = *ppppuVar14;
        if (ppppuVar14[1] != (undefined ***)0x0) {
          pppuVar7 = ppppuVar14[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuStack_90 = pppuStack_d0;
        pppuStack_88 = pppuStack_c8;
        if (pppuStack_c8 != (undefined ***)0x0) {
          pppuVar7 = pppuStack_c8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuStack_78 = (undefined ***)FUN_10a808e58;
        ppuStack_70 = &PTR_FUN_110c1fcf0;
        pppuStack_a0 = (undefined ***)0x0;
        pppuStack_98 = (undefined ***)0x0;
        pppuStack_58 = pppuStack_d0;
        pppuStack_50 = pppuStack_c8;
        if (pppuStack_c8 != (undefined ***)0x0) {
          pppuVar7 = pppuStack_c8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppuVar14 = &pppuStack_78;
        FUN_10a4634ec(ppppuVar9);
        (*(code *)*ppuStack_70)(&ppuStack_70);
        if (pppuVar12 != (undefined ***)0x0) {
          pppuVar7 = pppuVar12 + 1;
          do {
            ppuVar13 = *pppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)ppuVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar13 == (undefined **)0x0) {
            (*(code *)(*pppuVar12)[2])(pppuVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar12);
          }
        }
        ppppuVar8 = ppppuVar14;
        if (pppuStack_98 != (undefined ***)0x0) {
          pppuVar12 = pppuStack_98 + 1;
          do {
            ppuVar13 = *pppuVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
            if (bVar3) {
              *pppuVar12 = (undefined **)((long)ppuVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_10a808a64;
        }
      }
    }
    else {
      *ppppuVar6 = (undefined ***)CONCAT44((int)((ulong)*ppppuVar6 >> 0x20) + 1,(int)*ppppuVar6 + 1)
      ;
      FUN_10a808c28(*ppppuVar14);
      iVar4 = *(int *)((long)ppppuVar6 + 4) + -1;
      *(int *)((long)ppppuVar6 + 4) = iVar4;
      ppppuVar8 = ppppuVar10;
      if (iVar4 == 0) {
        *(undefined4 *)ppppuVar6 = 0;
      }
    }
  }
  param_2 = pppuStack_c8;
  if (pppuStack_c8 != (undefined ***)0x0) {
    pppuVar12 = pppuStack_c8 + 1;
    do {
      ppuVar13 = *pppuVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar3) {
        *pppuVar12 = (undefined **)((long)ppuVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_c8);
    }
  }
LAB_10a808ab8:
  pppuVar12 = &ppuStack_c0;
  FUN_10ae0fac8();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    ppppuVar10 = ppppuVar8;
    (*(code *)*ppuStack_70)(&ppuStack_70);
    FUN_10a80388c(&pppuStack_90);
    func_0x00010a004dac(&pppuStack_a0);
    FUN_10a80388c(&pppuStack_d0);
    FUN_10ae0fac8(&ppuStack_c0);
    if ((int)ppppuVar8 != 1) break;
    ___cxa_begin_catch();
    param_2 = (undefined ***)param_2[4];
    if (param_2 != (undefined ***)0x0) {
      (*(code *)(*pppuVar12)[2])();
      func_0x000107c2b054(&pppuStack_78,pppuVar12);
      ppppuVar10 = &pppuStack_78;
      pppuVar12 = param_2;
      FUN_10a13609c();
      if ((long)pppuStack_68 < 0) {
        pppuVar12 = pppuStack_78;
        __ZdlPv();
      }
    }
    ___cxa_end_catch();
    ppppuVar8 = ppppuVar10;
  }
  pppuVar7 = pppuVar12;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a808c28;
  ppppuStack_100 = &pppuStack_a0;
  ppppuStack_f8 = ppppuVar8;
  pppuStack_f0 = pppuVar12;
  pppuStack_e8 = param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_130,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_158,&ppuStack_130,*pppuVar7);
  if (ppuStack_130 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_130)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_160);
  ppuVar13 = *pppuVar7;
  FUN_10a808db8(aiStack_140,ppuVar13,*ppppuVar10,ppppuVar10[1]);
  uStack_108 = 1;
  piStack_110 = aiStack_140;
  (**(code **)(*ppuVar13 + 0x58))(ppuVar13);
  ppuStack_130 = &puStack_158;
  ppiStack_118 = &piStack_110;
  ppuStack_128 = ppuVar13;
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



/* Entry: 10a808c28; end: 10a808db7;  */

void FUN_10a808c28(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10a808db8(aiStack_70,plVar1,*param_2,param_2[1]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
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



/* Entry: 10a808db8; end: 10a808e57;  */

void FUN_10a808db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  ppuStack_38 = &PTR_DAT_110c1da08;
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



/* Entry: 10a808e58; end: 10a808e67;  */

void FUN_10a808e58(long param_1)

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
  FUN_10a808db8(aiStack_70,plVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uStack_38 = 1;
  piStack_40 = aiStack_70;
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



/* Entry: 10a808e68; end: 10a808e8f;  */

long FUN_10a808e68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a80388c(param_1 + 0x18);
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



/* Entry: 10a808e90; end: 10a808ecf;  */

void FUN_10a808e90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c1fcf0;
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



/* Entry: 10a808ed0; end: 10a808f03;  */

long FUN_10a808ed0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a07a8a8(param_1 + 0x18);
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



/* Entry: 10a808f04; end: 10a808fe3;  */

void FUN_10a808f04(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c1fd08;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 10a808fe4; end: 10a80903b;  */

long FUN_10a808fe4(long param_1)

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



/* Entry: 10a80903c; end: 10a8092d3;  */

void FUN_10a80903c(long param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_28;
  
  ppcVar8 = *(code ***)(param_1 + 0x10);
  if (ppcVar8 != (code **)0x0) {
    if (*(char *)(ppcVar8 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a809064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar8)();
      return;
    }
    if (*(char *)(ppcVar8 + 8) == '\x02') {
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = ppcVar8;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = ppcVar8[1];
          pcStack_58 = *ppcVar8;
          if (ppcVar8[1] != (code *)0x0) {
            pcVar1 = ppcVar8[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*ppcVar8;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar5 + 1);
      func_0x00010a004dac(&uStack_78);
      pppuVar7 = pppuVar6;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar6;
      ppcStack_98 = ppcVar5;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
  }
  return;
}


