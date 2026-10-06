/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3fed38; end: 10a3fed53;  */

void FUN_10a3fed38(void)

{
  return;
}



/* Entry: 10a3fed54; end: 10a3fedf7;  */

void FUN_10a3fed54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x10) + 0x850) + 0x18);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar13;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a3fedf8; end: 10a3fee13;  */

void FUN_10a3fedf8(void)

{
  return;
}



/* Entry: 10a3fee14; end: 10a3feebf;  */

void FUN_10a3fee14(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  FUN_10a3feec0(param_1,param_2,param_6 + 0x10,param_4,param_5);
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



/* Entry: 10a3feec0; end: 10a3ff053;  */

void FUN_10a3feec0(undefined4 *param_1,undefined8 param_2,long *param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  byte bStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  FUN_10a3ff054(param_5);
  uVar5 = param_2;
  func_0x00010a137904(param_2,param_4);
  uVar6 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x10);
  uVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  if (((int)uVar5 == 0) || ((int)uVar6 == 0)) {
    FUN_10a0ee900(&uStack_70,&UNK_10f6560ed,0x54);
    FUN_10a0029c0(&uStack_70);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3ff024);
    (*pcVar4)();
  }
  lVar8 = *param_3;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x888);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    FUN_10a096284();
    FUN_10a7710c0(&uStack_70,*(undefined8 *)(lVar9 + 0x40),uVar5,uVar6,uVar7);
    plStack_48 = (long *)CONCAT44(uStack_64,iStack_68);
    uStack_50 = uStack_70;
    FUN_10a3ff078(&uStack_70,lVar8,&uStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    if ((bStack_58 & 1) != 0) {
      func_0x0001098849a4(param_1,param_2,&iStack_68);
      if (iStack_68 < 4) {
        return;
      }
      if (puStack_60 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puStack_60)();
      return;
    }
  }
  *param_1 = 1;
  return;
}



/* Entry: 10a3ff054; end: 10a3ff077;  */

void FUN_10a3ff054(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  int aiStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar3 = (undefined8 *)0x3;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 == 0) {
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  else {
    puVar6 = (ulong *)0x1;
    FUN_10a088744(*(undefined8 *)(*param_1 + 0x268));
    plVar4 = (long *)*puVar6;
    (**(code **)(*plVar4 + 0x10))();
    lVar7 = *(long *)(lVar5 + 0x870);
    lVar5 = *(long *)(lVar7 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x70);
    lVar5 = *(long *)(lVar5 + 0xb8);
    if ((*(byte *)(lVar5 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3ff1cc);
      (*pcVar2)();
    }
    uStack_68 = *(undefined8 *)(lVar5 + 0x50);
    aiStack_60[0] = 0;
    FUN_10a1f92d8(&uStack_68,param_1);
    FUN_10a464ec0(lVar7,&uStack_68,(ulong)plVar4 & 0xffffffff);
    uVar1 = uStack_68;
    func_0x0001098849a4(aiStack_78,uStack_68,aiStack_60);
    *puVar3 = uVar1;
    *(int *)(puVar3 + 1) = aiStack_78[0];
    if (aiStack_78[0] == 3) {
      puVar3[2] = uStack_70;
    }
    else if (aiStack_78[0] == 2) {
      *(undefined1 *)(puVar3 + 2) = (undefined1)uStack_70;
    }
    else if (3 < aiStack_78[0]) {
      puVar3[2] = uStack_70;
      uStack_70 = 0;
    }
    aiStack_78[0] = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x70);
  }
  return;
}



/* Entry: 10a3ff078; end: 10a3ff1ff;  */

void FUN_10a3ff078(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  int aiStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  int aiStack_50 [2];
  undefined8 *puStack_48;
  
  if (*param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    puVar4 = (ulong *)0x1;
    FUN_10a088744(*(undefined8 *)(*param_3 + 0x268));
    plVar3 = (long *)*puVar4;
    (**(code **)(*plVar3 + 0x10))();
    lVar5 = *(long *)(param_2 + 0x870);
    lVar6 = *(long *)(lVar5 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar5 + 0x70);
    lVar6 = *(long *)(lVar6 + 0xb8);
    if ((*(byte *)(lVar6 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3ff1cc);
      (*pcVar2)();
    }
    uStack_58 = *(undefined8 *)(lVar6 + 0x50);
    aiStack_50[0] = 0;
    FUN_10a1f92d8(&uStack_58,param_3);
    FUN_10a464ec0(lVar5,&uStack_58,(ulong)plVar3 & 0xffffffff);
    uVar1 = uStack_58;
    func_0x0001098849a4(aiStack_68,uStack_58,aiStack_50);
    *param_1 = uVar1;
    *(int *)(param_1 + 1) = aiStack_68[0];
    if (aiStack_68[0] == 3) {
      param_1[2] = uStack_60;
    }
    else if (aiStack_68[0] == 2) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_60;
    }
    else if (3 < aiStack_68[0]) {
      param_1[2] = uStack_60;
      uStack_60 = 0;
    }
    aiStack_68[0] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
      (**(code **)*puStack_48)();
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar5 + 0x70);
  }
  return;
}



/* Entry: 10a3ff200; end: 10a3ff21b;  */

void FUN_10a3ff200(void)

{
  return;
}



/* Entry: 10a3ff21c; end: 10a3ff40f;  */

void FUN_10a3ff21c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  byte bStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a3ff410(param_5);
  plVar5 = param_2;
  func_0x00010a137904(param_2,param_4);
  plVar6 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x10);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  if (((int)plVar5 == 0) || ((int)plVar6 == 0)) {
    FUN_10a0ee900(&uStack_80,&UNK_10f6560ed,0x54);
    FUN_10a0029c0(&uStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3ff3d0);
    (*pcVar3)();
  }
  lVar8 = *(long *)(param_6 + 0x10);
  if (lVar8 != 0) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    FUN_10a7710c0(&uStack_80,*(undefined8 *)(*(long *)(lVar8 + 0x888) + 0x40),plVar5,plVar6,plVar7);
    plStack_58 = (long *)CONCAT44(uStack_74,iStack_78);
    uStack_60 = uStack_80;
    FUN_10a3ff078(&uStack_80,lVar8,&uStack_60);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    if ((bStack_68 & 1) != 0) {
      func_0x0001098849a4(param_1,param_2,&iStack_78);
      if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
        (**(code **)*puStack_70)();
      }
      goto LAB_10a3ff37c;
    }
  }
  *param_1 = 1;
LAB_10a3ff37c:
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a3ff410; end: 10a3ff433;  */

void FUN_10a3ff410(undefined8 param_1)

{
  if ((int)param_1 == 3) {
    return;
  }
  FUN_10a052ee0(3,0,param_1);
  return;
}



/* Entry: 10a3ff434; end: 10a3ff44f;  */

void FUN_10a3ff434(void)

{
  return;
}



/* Entry: 10a3ff450; end: 10a3ff4fb;  */

void FUN_10a3ff450(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  FUN_10a3feec0(param_1,param_2,param_6 + 0x10,param_4,param_5);
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



/* Entry: 10a3ff4fc; end: 10a3ff517;  */

void FUN_10a3ff4fc(void)

{
  return;
}



/* Entry: 10a3ff518; end: 10a3ff5cb;  */

void FUN_10a3ff518(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(*(long *)(param_6 + 0x10) + 0x28) = (char)param_2;
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



/* Entry: 10a3ff5cc; end: 10a3ff5e7;  */

void FUN_10a3ff5cc(void)

{
  return;
}



/* Entry: 10a3ff5e8; end: 10a3ff6b7;  */

void FUN_10a3ff5e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a3ff630:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3ff860);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a3ff630;
  }
  return;
}



/* Entry: 10a3ff6b8; end: 10a3ff85f;  */

void FUN_10a3ff6b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3ff860);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
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
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a3ff860; end: 10a3ffe7b;  */

/* WARNING: Possible PIC construction at 0x00010a3ffe70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3ffe74) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffe94) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffea4) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffecc) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffed8) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffef0) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff2c) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff58) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff44) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff4c) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff5c) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff64) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff74) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff80) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffa0) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff8c) */
/* WARNING: Removing unreachable block (ram,0x00010a3fff94) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffa4) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffac) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffb0) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffd4) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffbc) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffc8) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffd8) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffe0) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffe8) */
/* WARNING: Removing unreachable block (ram,0x00010a3fffec) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffff0) */
/* WARNING: Removing unreachable block (ram,0x00010a40000c) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffff8) */
/* WARNING: Removing unreachable block (ram,0x00010a400000) */
/* WARNING: Removing unreachable block (ram,0x00010a400010) */
/* WARNING: Removing unreachable block (ram,0x00010a400018) */
/* WARNING: Removing unreachable block (ram,0x00010a400024) */
/* WARNING: Removing unreachable block (ram,0x00010a400058) */
/* WARNING: Removing unreachable block (ram,0x00010a400084) */
/* WARNING: Removing unreachable block (ram,0x00010a400068) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffeec) */
/* WARNING: Removing unreachable block (ram,0x00010a3ffec0) */

void FUN_10a3ff860(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  ulong unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long lVar20;
  long *unaff_x24;
  long *plVar21;
  long *unaff_x25;
  long *plVar22;
  ulong unaff_x26;
  ulong uVar23;
  ulong unaff_x27;
  ulong uVar24;
  long *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  byte bStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_110 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  plStack_108 = plVar8;
  FUN_10a3ffe7c(param_2,param_3);
  FUN_10a3ffee4(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar11 = param_2;
    plStack_d0 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_d0);
    if ((int)plVar11 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_d0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a3ffe60;
      }
      plStack_d0 = (long *)0x0;
      lStack_b0 = CONCAT44(lStack_b0._4_4_,7);
      plStack_a8 = plVar8;
      plStack_b8 = param_2;
      FUN_10a688ac0(&plStack_100,&plStack_b8,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_b0) && (plStack_a8 != (long *)0x0)) {
        (**(code **)*plStack_a8)();
      }
    }
    if (plStack_d0 != (long *)0x0) {
      (**(code **)*plStack_d0)();
    }
    if (((ulong)plVar11 & 1) != 0) {
      plStack_b8 = plStack_100;
      lStack_b0 = lStack_f8;
      if (lStack_f8 != 0) {
        plVar8 = (long *)(lStack_f8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a0 = lStack_e8;
      plStack_a8 = plStack_f0;
      if (lStack_e8 != 0) {
        plVar8 = (long *)(lStack_e8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_78 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar8 = plVar9 + 3;
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
      uVar14 = unaff_x21;
      plStack_e0 = plVar22;
      plStack_d8 = plVar11;
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
        puVar15 = *(undefined8 **)(*plVar8 + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar21 = (long *)*puVar15; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
            uVar16 = plVar21[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar21[2] == plVar22) goto LAB_10a3ffc14;
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
      plVar21 = (long *)0x68;
      __Znwm();
      uStack_c0 = 1;
      *plVar21 = 0;
      plVar21[1] = uVar24;
      plVar21[2] = (long)plVar22;
      plVar21[3] = (long)plVar11;
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      *(undefined1 *)(plVar21 + 0xc) = 3;
      plVar21[4] = (long)plStack_100;
      plVar21[5] = lStack_b0;
      if (lStack_b0 != 0) {
        plVar11 = (long *)(lStack_b0 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar21[7] = lStack_a0;
      plVar21[6] = (long)plStack_a8;
      if (lStack_a0 != 0) {
        plVar11 = (long *)(lStack_a0 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar21 + 0xc) = bStack_78;
      plStack_c8 = plVar8;
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
        FUN_10a3ff5e8(plVar8,uVar14);
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
      lVar10 = *plVar8;
      plVar11 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar11 == (long *)0x0) {
        plVar11 = plVar9 + 5;
        *plVar21 = *plVar11;
        *plVar11 = (long)plVar21;
        *(long **)(lVar10 + uVar14 * 8) = plVar11;
        if (*plVar21 != 0) {
          uVar13 = *(ulong *)(*plVar21 + 8);
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
          plVar11 = (long *)(*plVar8 + uVar13 * 8);
          goto LAB_10a3ffcb8;
        }
      }
      else {
        *plVar21 = *plVar11;
LAB_10a3ffcb8:
        *plVar11 = (long)plVar21;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a3ffcc8;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a3ffe60;
LAB_10a3ffc14:
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
LAB_10a3ffcc8:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plVar11 = plStack_108;
  plStack_c8 = (long *)plVar21[3];
  plStack_d0 = (long *)plVar21[2];
  if (plVar21[3] != 0) {
    plVar12 = (long *)(plVar21[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_78 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
    FUN_10a688c1c(&plStack_100);
    FUN_10a05ff7c(uStack_110,param_2,&plStack_d0);
    plVar12 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
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
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      plStack_d0 = (long *)0x0;
      func_0x00010a3ff7f4(plVar11 + 1,plVar21);
      FUN_10a004978(&plStack_e0);
      if (3 < (ulong)bStack_78) goto LAB_10a3ffe60;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
      FUN_10a688c1c(&plStack_100);
      unaff_x30 = 0x10a3ffe74;
      register0x00000008 = (BADSPACEBASE *)&uStack_110;
      unaff_x19 = plVar11;
      unaff_x20 = param_2;
      unaff_x21 = uVar14;
      unaff_x22 = plVar9;
      unaff_x23 = plVar8;
      unaff_x24 = plVar21;
      unaff_x25 = plVar22;
      unaff_x26 = uVar23;
      unaff_x27 = uVar24;
      unaff_x28 = plStack_100;
      unaff_x29 = puVar1;
      plVar11 = plStack_108;
    }
    plVar8 = plVar11 + 0x4b;
    lVar10 = plVar11[0x59];
    uVar14 = lVar10 - 1;
    plVar11[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar8[lVar10 + 2];
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar11[0x57] + -8);
      plVar11[0x57] = plVar11[0x57] + -8;
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar8;
    lVar19 = plVar11[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar20 = plVar11[0x4d];
      if ((ulong)(lVar20 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar20 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar20 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar8;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar8 = lVar18;
            plVar11[0x4c] = lVar19 + uVar24 * 0x10;
            plVar11[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar20;
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
      plVar11[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar11[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar11[0x5a] = uVar14;
    return;
  }
LAB_10a3ffe60:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3ffe64);
  (*pcVar6)();
}



/* Entry: 10a3ffe7c; end: 10a3ffee3;  */

void FUN_10a3ffe7c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  lVar4 = param_1;
  func_0x000109898688();
  if (lVar4 != 0) {
    FUN_10a053854(param_1,lVar4);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  lVar4 = 1;
  FUN_10a052ee0(1,0,puVar3);
  plVar1 = (long *)(lVar4 + 0x18);
  plVar5 = plVar1;
  FUN_10a400094();
  if (plVar5 == (long *)0x0) goto LAB_10a400058;
  uVar8 = *(ulong *)(lVar4 + 0x20);
  lVar6 = *plVar5;
  uVar7 = plVar5[1];
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
  plVar2 = *(long **)(*plVar1 + uVar7 * 8);
  do {
    plVar10 = plVar2;
    plVar2 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar5);
  if (plVar10 == (long *)(lVar4 + 0x28)) {
LAB_10a3fffac:
    if (lVar6 == 0) {
LAB_10a3fffe0:
      *(undefined8 *)(*plVar1 + uVar7 * 8) = 0;
      lVar6 = *plVar5;
      goto LAB_10a3fffe8;
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
    if (uVar12 != uVar7) goto LAB_10a3fffe0;
LAB_10a3ffff0:
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
      *(long **)(*plVar1 + uVar11 * 8) = plVar10;
      lVar6 = *plVar5;
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
    if (uVar11 != uVar7) goto LAB_10a3fffac;
LAB_10a3fffe8:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a3ffff0;
    }
  }
  *plVar10 = lVar6;
  *plVar5 = 0;
  *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
  uStack_58 = 1;
  uStack_57 = 0;
  uStack_53 = 0;
  plStack_60 = plVar1;
  func_0x00010a3ff7f4(&plStack_60);
LAB_10a400058:
  if (*(char *)(*(long *)(lVar4 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a400080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x40))(lVar4);
    return;
  }
  return;
}



/* Entry: 10a3ffee4; end: 10a3fff07;  */

void FUN_10a3ffee4(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  plVar1 = (long *)(lVar3 + 0x18);
  plVar4 = plVar1;
  FUN_10a400094();
  if (plVar4 == (long *)0x0) goto LAB_10a400058;
  uVar7 = *(ulong *)(lVar3 + 0x20);
  lVar5 = *plVar4;
  uVar6 = plVar4[1];
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
  plVar2 = *(long **)(*plVar1 + uVar6 * 8);
  do {
    plVar9 = plVar2;
    plVar2 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar4);
  if (plVar9 == (long *)(lVar3 + 0x28)) {
LAB_10a3fffac:
    if (lVar5 == 0) {
LAB_10a3fffe0:
      *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
      lVar5 = *plVar4;
      goto LAB_10a3fffe8;
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
    if (uVar11 != uVar6) goto LAB_10a3fffe0;
LAB_10a3ffff0:
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
      *(long **)(*plVar1 + uVar10 * 8) = plVar9;
      lVar5 = *plVar4;
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
    if (uVar10 != uVar6) goto LAB_10a3fffac;
LAB_10a3fffe8:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a3ffff0;
    }
  }
  *plVar9 = lVar5;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  uStack_38 = 1;
  uStack_37 = 0;
  uStack_33 = 0;
  plStack_40 = plVar1;
  func_0x00010a3ff7f4(&plStack_40);
LAB_10a400058:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a400080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a3fff08; end: 10a400093;  */

void FUN_10a3fff08(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = plVar1;
  FUN_10a400094();
  if (plVar3 == (long *)0x0) goto LAB_10a400058;
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar2 = *(long **)(*plVar1 + uVar5 * 8);
  do {
    plVar8 = plVar2;
    plVar2 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar3);
  if (plVar8 == (long *)(param_1 + 0x28)) {
LAB_10a3fffac:
    if (lVar4 == 0) {
LAB_10a3fffe0:
      *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a3fffe8;
    }
    uVar9 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar6 <= uVar9) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar9 / uVar6;
        }
        uVar10 = uVar9 - uVar10 * uVar6;
      }
    }
    if (uVar10 != uVar5) goto LAB_10a3fffe0;
LAB_10a3ffff0:
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar7 * uVar6;
    }
    if (uVar9 != uVar5) {
      *(long **)(*plVar1 + uVar9 * 8) = plVar8;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar9 = plVar8[1];
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar10 * uVar6;
    }
    if (uVar9 != uVar5) goto LAB_10a3fffac;
LAB_10a3fffe8:
    if (lVar4 != 0) {
      uVar9 = *(ulong *)(lVar4 + 8);
      goto LAB_10a3ffff0;
    }
  }
  *plVar8 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_30 = plVar1;
  func_0x00010a3ff7f4(&plStack_30);
LAB_10a400058:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a400080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a400094; end: 10a40016b;  */

long * FUN_10a400094(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 10a40016c; end: 10a400287;  */

void FUN_10a40016c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3ffe7c(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a3fff08(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a400288; end: 10a400327;  */

long FUN_10a400288(long param_1)

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



/* Entry: 10a400328; end: 10a400403;  */

void FUN_10a400328(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a0d8ae0(plVar2);
  uStack_48 = (undefined4)plVar2[10];
  lStack_50 = plVar2[9];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a400404; end: 10a40048b;  */

void FUN_10a400404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,code *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar1 = param_5;
  FUN_10a40048c(param_5,param_8);
  FUN_10a052e3c(param_9);
  if ((param_7 & 1) != 0) {
    param_6 = *(code **)(*(long *)(lVar1 + ((long)param_7 >> 1)) + ((ulong)param_6 & 0xffffffff));
  }
  (*param_6)();
  uStack_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  FUN_10a065390(param_4,param_5,&uStack_4c);
  return;
}



/* Entry: 10a40048c; end: 10a4004f3;  */

void FUN_10a40048c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar1);
    param_2 = ppuVar1;
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
  plVar2 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10a40048c(plVar2,param_2);
  FUN_10a052e3c(param_4);
  func_0x00010a0d8ae0(plVar4);
  uStack_68 = *(undefined8 *)((long)plVar4 + 0x5c);
  uStack_70 = *(undefined8 *)((long)plVar4 + 0x54);
  FUN_10a085248(extraout_x8,plVar2,&uStack_70);
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a4004f4; end: 10a4005c7;  */

void FUN_10a4004f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a0d8ae0(plVar2);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x5c);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x54);
  FUN_10a085248(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a4005c8; end: 10a40069b;  */

void FUN_10a4005c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x9c);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x94);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a40069c; end: 10a40074b;  */

void FUN_10a40069c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,FUN_10a2f1bb8,0,param_3,param_5);
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



/* Entry: 10a40074c; end: 10a40081b;  */

void FUN_10a40074c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a2cd08c(plVar4);
  FUN_10a085248(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a40081c; end: 10a4008cb;  */

void FUN_10a40081c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,FUN_10a2cd058,0,param_3,param_5);
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



/* Entry: 10a4008cc; end: 10a40099b;  */

void FUN_10a4008cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(byte *)((long)plVar4 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(plVar4);
  }
  FUN_10a368650(param_1,param_2,plVar4 + 0x18);
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



/* Entry: 10a40099c; end: 10a400a63;  */

void FUN_10a40099c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(byte *)((long)plVar4 + 0x2a) >> 6 & 1) != 0) {
    func_0x00010a3e933c(plVar4);
  }
  FUN_10a368650(param_1,param_2,plVar4 + 0x20);
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



/* Entry: 10a400a64; end: 10a400b3f;  */

void FUN_10a400a64(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400b40(param_2,param_3);
  FUN_10a400ba8(param_5);
  FUN_10a36c25c(param_2,param_4);
  func_0x00010a3e8d58(&lStack_80,param_2);
  func_0x00010a3e8440(plVar4,&lStack_80);
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



/* Entry: 10a400b40; end: 10a400ba7;  */

void FUN_10a400b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
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
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,puVar3);
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
  FUN_10a400b40(plVar4,uVar7);
  FUN_10a400ba8(param_4);
  FUN_10a36c25c(plVar4,puVar3);
  func_0x00010a3e8d58(&lStack_b0,plVar4);
  FUN_10a3e28b8(plVar6,&lStack_b0);
  *extraout_x8 = 0;
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
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
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



/* Entry: 10a400ba8; end: 10a400bcb;  */

void FUN_10a400ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a400b40(plVar3,uVar6);
  FUN_10a400ba8(param_4);
  FUN_10a36c25c(plVar3,param_1);
  func_0x00010a3e8d58(&lStack_90,plVar3);
  FUN_10a3e28b8(plVar5,&lStack_90);
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



/* Entry: 10a400bcc; end: 10a400ca7;  */

void FUN_10a400bcc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400b40(param_2,param_3);
  FUN_10a400ba8(param_5);
  FUN_10a36c25c(param_2,param_4);
  func_0x00010a3e8d58(&lStack_80,param_2);
  FUN_10a3e28b8(plVar4,&lStack_80);
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



/* Entry: 10a400ca8; end: 10a400d5f;  */

void FUN_10a400ca8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400d60(param_1,param_2,FUN_10a3e9534,0,param_3,param_4,param_5);
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



/* Entry: 10a400d60; end: 10a400de7;  */

void FUN_10a400d60(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10a400b40(param_2,param_5);
  FUN_10a400de8(param_7);
  func_0x00010a0655d8(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10a400de8; end: 10a400e0b;  */

void FUN_10a400de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a400d60(extraout_x8,plVar3,0x10a3e9580,0,uVar5,param_1,param_4);
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



/* Entry: 10a400e0c; end: 10a400ec3;  */

void FUN_10a400e0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400d60(param_1,param_2,0x10a3e9580,0,param_3,param_4,param_5);
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



/* Entry: 10a400ec4; end: 10a400f9f;  */

void FUN_10a400ec4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400b40(param_2,param_3);
  FUN_10a077240(param_5);
  func_0x00010a077264(param_2,param_4);
  func_0x00010a3e8e18();
  FUN_10a3e82bc(plVar4,&stack0xffffffffffffffb0);
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



/* Entry: 10a400fa0; end: 10a40107b;  */

void FUN_10a400fa0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400b40(param_2,param_3);
  FUN_10a077240(param_5);
  func_0x00010a077264(param_2,param_4);
  func_0x00010a3e8e18();
  FUN_10a3e8838(plVar4,&stack0xffffffffffffffb0);
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



/* Entry: 10a40107c; end: 10a401133;  */

void FUN_10a40107c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400d60(param_1,param_2,0x10a3e95cc,0,param_3,param_4,param_5);
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



/* Entry: 10a401134; end: 10a4011eb;  */

void FUN_10a401134(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400d60(param_1,param_2,0x10a3e9620,0,param_3,param_4,param_5);
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



/* Entry: 10a4011ec; end: 10a4012c3;  */

void FUN_10a4011ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a3e9674(&stack0xffffffffffffffb0,plVar4);
  FUN_10a26f500(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a4012c4; end: 10a401303;  */

float FUN_10a4012c4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  func_0x00010a2cd08c();
  fVar1 = param_3 * param_1 + param_2 * param_4;
  return fVar1 + fVar1;
}



/* Entry: 10a401304; end: 10a4013b3;  */

void FUN_10a401304(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,FUN_10a4012c4,0,param_3,param_5);
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



/* Entry: 10a4013b4; end: 10a4013f3;  */

float FUN_10a4013b4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  func_0x00010a2cd08c();
  fVar1 = -(param_3 * param_4) + param_1 * param_2;
  return fVar1 + fVar1;
}



/* Entry: 10a4013f4; end: 10a4014a3;  */

void FUN_10a4013f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,FUN_10a4013b4,0,param_3,param_5);
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



/* Entry: 10a4014a4; end: 10a401553;  */

void FUN_10a4014a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,FUN_10a3e96f8,0,param_3,param_5);
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



/* Entry: 10a401554; end: 10a401603;  */

void FUN_10a401554(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,0x10a3e973c,0,param_3,param_5);
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



/* Entry: 10a401604; end: 10a4016b3;  */

void FUN_10a401604(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,0x10a3e9780,0,param_3,param_5);
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



/* Entry: 10a4016b4; end: 10a401763;  */

void FUN_10a4016b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400404(param_1,param_2,0x10a3e97c4,0,param_3,param_5);
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



/* Entry: 10a401764; end: 10a40181f;  */

void FUN_10a401764(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a40048c(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)((long)param_2 + 0x29);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 & 1;
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



/* Entry: 10a401820; end: 10a4018eb;  */

void FUN_10a401820(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a400b40(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)((long)plVar4 + 0x29) = *(byte *)((long)plVar4 + 0x29) & 0xfe | (byte)param_2;
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



/* Entry: 10a4018ec; end: 10a4019c3;  */

undefined8 * FUN_10a4018ec(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 1) {
    puVar1 = (undefined8 *)0x88;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bd2d30;
    puVar2 = puVar1 + 3;
    *puVar2 = &PTR_FUN_110bd2d80;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0x10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    puVar1[9] = 1;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
  }
  else {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bd2e88;
    puVar2 = puVar1 + 3;
    *puVar2 = &PTR_FUN_110bd2ed8;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0;
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a4019c4; end: 10a4019d3;  */

void FUN_10a4019c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd2d30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a4019d4; end: 10a4019f3;  */

void FUN_10a4019d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd2d30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4019f4; end: 10a401a03;  */

void FUN_10a4019f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4019fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a401a04; end: 10a401a93;  */

undefined8 * FUN_10a401a04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2e28;
  FUN_10a4020b0(param_1 + 10);
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  func_0x00010a402128(param_1 + 1);
  return param_1;
}



/* Entry: 10a401a94; end: 10a401c4f;  */

long * FUN_10a401a94(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_48;
  
  lStack_48 = param_2;
  (**(code **)(*param_1 + 0x20))();
  if ((char)param_1[0xd] == '\x01') {
    plVar2 = param_1 + 1;
    FUN_10a40218c(plVar2,param_2);
    if ((plVar2 == (long *)0x0) || (*(char *)((undefined8 *)plVar2[4] + 1) != '\x01')) {
      plVar4 = (long *)param_1[0xb];
      plVar2 = (long *)param_1[10];
      plVar3 = plVar2;
      for (; (plVar2 != plVar4 && (plVar3 = plVar2, *plVar2 != param_2)); plVar2 = plVar2 + 9) {
        plVar3 = plVar4;
      }
      if (plVar4 == plVar3) {
        plVar2 = (long *)0x0;
        goto LAB_10a401bfc;
      }
      plVar2 = plVar3;
      if (plVar3 + 9 != plVar4) {
        do {
          plVar3 = plVar2 + 9;
          plVar2[1] = plVar2[10];
          *plVar2 = *plVar3;
          plVar1 = plVar2 + 2;
          (**(code **)*plVar1)(plVar1);
          (**(code **)(plVar2[0xb] + 0x10))(plVar1,plVar2 + 0xb);
          plVar1 = plVar2 + 0x12;
          plVar2 = plVar3;
        } while (plVar1 != plVar4);
        plVar4 = (long *)param_1[0xb];
      }
      if (plVar4 != plVar3) {
        plVar4 = plVar4 + -7;
        do {
          plVar2 = plVar4 + -2;
          (**(code **)*plVar4)(plVar4);
          plVar4 = plVar4 + -9;
        } while (plVar2 != plVar3);
      }
      param_1[0xb] = (long)plVar3;
    }
    else {
      plVar2[3] = (long)FUN_10a402228;
      (**(code **)plVar2[4])();
      plVar2[4] = (long)&PTR_DAT_110ae9180;
      FUN_10a17478c(param_1 + 7,&lStack_48);
    }
    plVar2 = (long *)0x1;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10a402238(plVar2,param_2);
  }
LAB_10a401bfc:
  (**(code **)(*param_1 + 0x28))(param_1);
  return plVar2;
}



/* Entry: 10a401c50; end: 10a401cbf;  */

byte FUN_10a401c50(long *param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_1 + 1;
  (**(code **)(*param_1 + 0x20))();
  FUN_10a40218c(plVar1,param_2);
  if (plVar1 == (long *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(plVar1[4] + 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return bVar2 & 1;
}



/* Entry: 10a401cc0; end: 10a401cc7;  */

void FUN_10a401cc0(void)

{
  return;
}



/* Entry: 10a401cc8; end: 10a402023;  */

void FUN_10a401cc8(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_b0;
  long lStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x20))();
  if (param_5 == 0) {
    param_5 = param_2[6];
    param_2[6] = param_5 + 1;
  }
  lStack_b0 = param_5;
  if ((char)param_2[0xd] == '\x01') {
    lStack_a8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_a0,param_4 + 1);
    plVar5 = (long *)param_2[0xb];
    if (plVar5 < (long *)param_2[0xc]) {
      *plVar5 = param_5;
      plVar5[1] = lStack_a8;
      (*(code *)apuStack_a0[0][2])(plVar5 + 2,apuStack_a0);
      plVar5 = plVar5 + 9;
LAB_10a401f34:
      param_2[0xb] = (long)plVar5;
      pcVar6 = (code *)*apuStack_a0[0];
      goto LAB_10a401f44;
    }
    lVar11 = (long)plVar5 - param_2[10];
    uVar9 = (lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (uVar9 < 0x38e38e38e38e38f) {
      lVar7 = param_2[0xc] - param_2[10] >> 3;
      uVar8 = lVar7 * 0x1c71c71c71c71c72;
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        uVar8 = uVar9;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
        uVar8 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar8) {
        func_0x000109ffded8();
        goto LAB_10a401fc8;
      }
      lVar7 = uVar8 * 0x48;
      __Znwm();
      plVar10 = (long *)(lVar7 + lVar11);
      *plVar10 = param_5;
      plVar10[1] = lStack_a8;
      (*(code *)apuStack_a0[0][2])(plVar10 + 2,apuStack_a0);
      plVar5 = plVar10 + 9;
      puVar12 = (undefined8 *)param_2[10];
      puVar2 = (undefined8 *)param_2[0xb];
      puVar1 = (undefined8 *)((long)plVar10 + ((long)puVar12 - (long)puVar2));
      puVar13 = puVar12;
      puVar14 = puVar1;
      if (puVar2 != puVar12) {
        do {
          uVar15 = *puVar13;
          puVar14[1] = puVar13[1];
          *puVar14 = uVar15;
          (**(code **)(puVar13[2] + 0x10))(puVar14 + 2,puVar13 + 2);
          puVar13 = puVar13 + 9;
          puVar14 = puVar14 + 9;
        } while (puVar13 != puVar2);
        puVar12 = puVar12 + 2;
        do {
          puVar13 = puVar12 + 7;
          (**(code **)*puVar12)(puVar12);
          puVar12 = puVar12 + 9;
        } while (puVar13 != puVar2);
        puVar12 = (undefined8 *)param_2[10];
      }
      param_2[10] = (long)puVar1;
      param_2[0xb] = (long)plVar5;
      param_2[0xc] = lVar7 + uVar8 * 0x48;
      if (puVar12 != (undefined8 *)0x0) {
        __ZdlPv(puVar12);
      }
      goto LAB_10a401f34;
    }
  }
  else {
    lStack_a8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_a0,param_4 + 1);
    plVar5 = param_2 + 1;
    FUN_10a402398(plVar5,param_5,&lStack_b0);
    plVar10 = plVar5 + 4;
    plVar5[3] = lStack_a8;
    (**(code **)*plVar10)(plVar10);
    (*(code *)apuStack_a0[0][2])(plVar10,apuStack_a0);
    pcVar6 = (code *)*apuStack_a0[0];
LAB_10a401f44:
    (*pcVar6)(apuStack_a0);
    uVar16 = param_3[1];
    uVar15 = *param_3;
    if (param_3[1] != 0) {
      plVar5 = (long *)(param_3[1] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_1[1] = uVar16;
    *param_1 = uVar15;
    param_1[2] = param_5;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a402384();
LAB_10a401fc8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a401fcc);
  (*pcVar6)();
}



/* Entry: 10a402024; end: 10a40202b;  */

undefined8 FUN_10a402024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10a40202c; end: 10a4020a7;  */

void FUN_10a40202c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  for (plVar3 = *(long **)(param_1 + 0x18); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (*(char *)(plVar3[4] + 8) == '\x01') {
      (*(code *)*param_2)(plVar3 + 3,param_2);
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != puVar5) {
    do {
      puVar4 = puVar2 + 1;
      FUN_10a402238(param_1 + 8,*puVar2);
      puVar2 = puVar4;
    } while (puVar4 != puVar5);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
  }
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != puVar5) {
    do {
      lVar1 = param_1 + 8;
      FUN_10a402398(lVar1,*puVar2,puVar2);
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = puVar2[1];
      (**(code **)*puVar4)(puVar4);
      (**(code **)(puVar2[2] + 0x10))(puVar4,puVar2 + 2);
      puVar2 = puVar2 + 9;
    } while (puVar2 != puVar5);
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    puVar5 = *(undefined8 **)(param_1 + 0x58);
  }
  if (puVar5 != puVar2) {
    puVar5 = puVar5 + -7;
    do {
      puVar4 = puVar5 + -2;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + -9;
    } while (puVar4 != puVar2);
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  return;
}



/* Entry: 10a4020a8; end: 10a4020af;  */

undefined8 FUN_10a4020a8(void)

{
  return 0;
}



/* Entry: 10a4020b0; end: 10a40218b;  */

void FUN_10a4020b0(undefined8 *param_1)

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
        puVar3 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
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



/* Entry: 10a40218c; end: 10a402227;  */

long * FUN_10a40218c(long *param_1,ulong param_2)

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



/* Entry: 10a402228; end: 10a402237;  */

void FUN_10a402228(undefined8 param_1,long *param_2)

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
  
  func_0x000105277f8c();
  plVar2 = param_2;
  FUN_10a40218c();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_2[1];
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
  plVar1 = *(long **)(*param_2 + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == param_2 + 2) {
LAB_10a4022d0:
    if (lVar3 == 0) {
LAB_10a402304:
      *(undefined8 *)(*param_2 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a40230c;
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
    if (uVar9 != uVar4) goto LAB_10a402304;
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
    if (uVar8 != uVar4) goto LAB_10a4022d0;
LAB_10a40230c:
    if (lVar3 == 0) goto LAB_10a402348;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
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
    *(long **)(*param_2 + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10a402348:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_2[3] = param_2[3] + -1;
  (**(code **)plVar2[4])();
  __ZdlPv(plVar2);
  return;
}



/* Entry: 10a402238; end: 10a402383;  */

void FUN_10a402238(long *param_1)

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
  
  plVar2 = param_1;
  FUN_10a40218c();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
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
  plVar1 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == param_1 + 2) {
LAB_10a4022d0:
    if (lVar3 == 0) {
LAB_10a402304:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a40230c;
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
    if (uVar9 != uVar4) goto LAB_10a402304;
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
    if (uVar8 != uVar4) goto LAB_10a4022d0;
LAB_10a40230c:
    if (lVar3 == 0) goto LAB_10a402348;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
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
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10a402348:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  (**(code **)plVar2[4])();
  __ZdlPv(plVar2);
  return;
}



/* Entry: 10a402384; end: 10a402397;  */

long * FUN_10a402384(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  
  plVar3 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  uVar14 = plVar3[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar14 <= param_2) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = param_2 / uVar14;
        }
        unaff_x25 = param_2 - uVar9 * uVar14;
      }
    }
    plVar8 = *(long **)(*plVar3 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (plVar8[2] == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar14 <= uVar9) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar9 / uVar14;
            }
            uVar9 = uVar9 - uVar7 * uVar14;
          }
          if (uVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x58;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = param_2;
  lVar6 = *param_3;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[4] = (long)&PTR_DAT_110ae9180;
  plVar8[2] = lVar6;
  plVar8[3] = (long)FUN_10a402228;
  if ((uVar14 == 0) || (*(float *)(plVar3 + 4) * (float)uVar14 < (float)(plVar3[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar9 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = plVar3[1];
    }
    if (uVar14 < uVar5) {
LAB_10a402514:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a402760);
        (*pcVar2)();
      }
      lVar6 = uVar5 << 3;
      __Znwm();
      lVar4 = *plVar3;
      *plVar3 = lVar6;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      plVar3[1] = uVar5;
      do {
        *(undefined8 *)(*plVar3 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar10 = (long *)plVar3[2];
      uVar14 = uVar5;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar5 - 1;
        if ((uVar5 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*plVar3 + uVar9 * 8) = plVar3 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar5 <= uVar13) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar1 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar6 = *plVar3;
            if (*(long *)(lVar6 + uVar13 * 8) == 0) {
              *(long **)(lVar6 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar6 + uVar13 * 8);
              **(long **)(lVar6 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar9 = (ulong)((float)(ulong)plVar3[3] / *(float *)(plVar3 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_10a402514;
        lVar6 = *plVar3;
        *plVar3 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        plVar3[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = plVar3[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar14 <= param_2) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = param_2 / uVar14;
        }
        unaff_x25 = param_2 - uVar5 * uVar14;
      }
    }
  }
  lVar6 = *plVar3;
  plVar10 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar3 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10a4026f4;
    uVar5 = *(ulong *)(*plVar8 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar5 = uVar5 & uVar14 - 1;
    }
    else if (uVar14 <= uVar5) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar5 / uVar14;
      }
      uVar5 = uVar5 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*plVar3 + uVar5 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10a4026f4:
  plVar3[3] = plVar3[3] + 1;
  return plVar8;
}



/* Entry: 10a402398; end: 10a402783;  */

long * FUN_10a402398(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x25 = uVar4 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_2) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x58;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  lVar5 = *param_3;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[4] = (long)&PTR_DAT_110ae9180;
  plVar7[2] = lVar5;
  plVar7[3] = (long)FUN_10a402228;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar13) {
      uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar4 = uVar4 | uVar13 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar4) {
LAB_10a402514:
      if (uVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a402760);
        (*pcVar2)();
      }
      lVar5 = uVar4 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar5;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      plVar9 = (long *)param_1[2];
      uVar13 = uVar4;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar4 - 1;
        if ((uVar4 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar4 <= uVar8) {
          uVar12 = 0;
          if (uVar4 != 0) {
            uVar12 = uVar8 / uVar4;
          }
          uVar8 = uVar8 - uVar12 * uVar4;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar4 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar4 <= uVar12) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar12 / uVar4;
            }
            uVar12 = uVar12 - uVar1 * uVar4;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar5 = *param_1;
            if (*(long *)(lVar5 + uVar12 * 8) == 0) {
              *(long **)(lVar5 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar5 + uVar12 * 8);
              **(long **)(lVar5 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar4 < uVar13) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar8) {
        uVar4 = uVar8;
      }
      if (uVar4 < uVar13) {
        if (uVar4 != 0) goto LAB_10a402514;
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar4 * uVar13;
      }
    }
  }
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10a4026f4;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar4 = uVar4 & uVar13 - 1;
    }
    else if (uVar13 <= uVar4) {
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = uVar4 / uVar13;
      }
      uVar4 = uVar4 - uVar8 * uVar13;
    }
    plVar9 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10a4026f4:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a402784; end: 10a40285f;  */

void FUN_10a402784(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 0x68) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != puVar4) {
    do {
      puVar3 = puVar2 + 1;
      FUN_10a402238(param_1 + 8,*puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
  }
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != puVar4) {
    do {
      lVar1 = param_1 + 8;
      FUN_10a402398(lVar1,*puVar2,puVar2);
      puVar3 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = puVar2[1];
      (**(code **)*puVar3)(puVar3);
      (**(code **)(puVar2[2] + 0x10))(puVar3,puVar2 + 2);
      puVar2 = puVar2 + 9;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    puVar4 = *(undefined8 **)(param_1 + 0x58);
  }
  if (puVar4 != puVar2) {
    puVar4 = puVar4 + -7;
    do {
      puVar3 = puVar4 + -2;
      (**(code **)*puVar4)(puVar4);
      puVar4 = puVar4 + -9;
    } while (puVar3 != puVar2);
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  return;
}



/* Entry: 10a402860; end: 10a40286f;  */

void FUN_10a402860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd2e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a402870; end: 10a40288f;  */

void FUN_10a402870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd2e88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a402890; end: 10a40289f;  */

void FUN_10a402890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a402898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a4028a0; end: 10a4028ff;  */

undefined8 * FUN_10a4028a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2f68;
  FUN_10a402e14(param_1 + 1);
  return param_1;
}



/* Entry: 10a402900; end: 10a4029cb;  */

undefined8 FUN_10a402900(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x20))();
  puVar1 = (undefined8 *)param_1[1];
  FUN_10a402e8c(puVar1,param_1[2],param_2);
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((undefined8 *)puVar1[1] + 1) == '\x01') {
      *puVar1 = FUN_10a402228;
      (**(code **)puVar1[1])();
      puVar1[1] = &PTR_DAT_110ae9180;
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      FUN_10a402efc(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return uVar2;
}



/* Entry: 10a4029cc; end: 10a402a2f;  */

byte FUN_10a4029cc(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  
  (**(code **)(*param_1 + 0x20))();
  lVar1 = param_1[1];
  FUN_10a402e8c(lVar1,param_1[2],param_2);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(*(long *)(lVar1 + 8) + 8);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return bVar2 & 1;
}



/* Entry: 10a402a30; end: 10a402a37;  */

void FUN_10a402a30(void)

{
  return;
}



/* Entry: 10a402a38; end: 10a402d13;  */

void FUN_10a402a38(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x20))();
  lVar15 = param_2[4];
  param_2[4] = lVar15 + 1;
  uVar7 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_a8,param_4 + 1);
  puVar12 = (undefined8 *)param_2[2];
  lStack_70 = lVar15;
  if (puVar12 < (undefined8 *)param_2[3]) {
    *puVar12 = uVar7;
    (*(code *)apuStack_a8[0][2])(puVar12 + 1,apuStack_a8);
    puVar12[8] = lStack_70;
    puVar12 = puVar12 + 9;
LAB_10a402c38:
    param_2[2] = (long)puVar12;
    (*(code *)*apuStack_a8[0])(apuStack_a8);
    uVar17 = param_3[1];
    uVar7 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    param_1[1] = uVar17;
    *param_1 = uVar7;
    param_1[2] = lVar15;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar11 = (long)puVar12 - param_2[1];
    uVar10 = (lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (uVar10 < 0x38e38e38e38e38f) {
      lVar8 = param_2[3] - param_2[1] >> 3;
      uVar9 = lVar8 * 0x1c71c71c71c71c72;
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        uVar9 = uVar10;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
        uVar9 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar9) {
        func_0x000109ffded8();
        goto LAB_10a402ccc;
      }
      lVar8 = uVar9 * 0x48;
      __Znwm();
      puVar12 = (undefined8 *)(lVar8 + lVar11);
      *puVar12 = uVar7;
      (*(code *)apuStack_a8[0][2])(puVar12 + 1,apuStack_a8);
      puVar12[8] = lStack_70;
      puVar13 = (undefined8 *)param_2[1];
      puVar3 = (undefined8 *)param_2[2];
      puVar2 = (undefined8 *)((long)puVar12 + ((long)puVar13 - (long)puVar3));
      puVar14 = puVar13;
      puVar16 = puVar2;
      if ((long)puVar13 - (long)puVar3 != 0) {
        do {
          *puVar16 = *puVar14;
          (**(code **)(puVar14[1] + 0x10))(puVar16 + 1,puVar14 + 1);
          puVar16[8] = puVar14[8];
          puVar14 = puVar14 + 9;
          puVar16 = puVar16 + 9;
        } while (puVar14 != puVar3);
        puVar13 = puVar13 + 1;
        do {
          puVar14 = puVar13 + 8;
          (**(code **)*puVar13)(puVar13);
          puVar13 = puVar13 + 9;
        } while (puVar14 != puVar3);
        puVar13 = (undefined8 *)param_2[1];
      }
      puVar12 = puVar12 + 9;
      param_2[1] = (long)puVar2;
      param_2[2] = (long)puVar12;
      param_2[3] = lVar8 + uVar9 * 0x48;
      if (puVar13 != (undefined8 *)0x0) {
        __ZdlPv(puVar13);
      }
      goto LAB_10a402c38;
    }
  }
  FUN_10a4030a8();
LAB_10a402ccc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a402cd0);
  (*pcVar6)();
}



/* Entry: 10a402d14; end: 10a402d37;  */

long FUN_10a402d14(long param_1)

{
  return (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x71c71c71c71c71c7;
}



/* Entry: 10a402d38; end: 10a402e0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a40300c) */
/* WARNING: Removing unreachable block (ram,0x00010a403010) */
/* WARNING: Removing unreachable block (ram,0x00010a403058) */

void FUN_10a402d38(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *(undefined1 *)(param_1 + 0x2c) = 1;
  lVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar4 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x71c71c71c71c71c7;
      if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a402df0);
        (*pcVar3)();
      }
      lVar1 = *(long *)(param_1 + 8) + lVar5;
      if (*(char *)(*(long *)(lVar1 + 8) + 8) == '\x01') {
        (*(code *)*param_2)(lVar1,param_2);
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((lVar2 >> 3) * -0x71c71c71c71c71c7 - uVar7 != 0);
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = ((long)puVar9 - (long)puVar8 >> 3) * -0x71c71c71c71c71c7;
    if ((10 < uVar7) && ((int)uVar7 / 10 <= *(int *)(param_1 + 0x28))) {
      while( true ) {
        if (puVar8 == puVar9) goto LAB_10a40308c;
        if (*(char *)(puVar8[1] + 8) != '\x01') break;
        puVar8 = puVar8 + 9;
      }
      if ((puVar8 != puVar9) && (puVar10 = puVar8 + 9, puVar10 != puVar9)) {
        do {
          if (*(char *)(puVar10[1] + 8) == '\x01') {
            *puVar8 = *puVar10;
            puVar6 = puVar8 + 1;
            (**(code **)*puVar6)(puVar6);
            (**(code **)(puVar10[1] + 0x10))(puVar6,puVar10 + 1);
            puVar8[8] = puVar10[8];
            puVar8 = puVar8 + 9;
          }
          puVar10 = puVar10 + 9;
        } while (puVar10 != puVar9);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar9 < puVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4030a8);
        (*pcVar3)();
      }
      if (puVar8 != puVar9) {
        if (puVar9 != puVar8) {
          puVar9 = puVar9 + -8;
          do {
            puVar10 = puVar9 + -1;
            (**(code **)*puVar9)(puVar9);
            puVar9 = puVar9 + -9;
          } while (puVar10 != puVar8);
        }
        *(undefined8 **)(param_1 + 0x10) = puVar8;
      }
LAB_10a40308c:
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



/* Entry: 10a402e0c; end: 10a402e13;  */

undefined4 FUN_10a402e0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10a402e14; end: 10a402e8b;  */

void FUN_10a402e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
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



/* Entry: 10a402e8c; end: 10a402efb;  */

long FUN_10a402e8c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 - param_1 != 0) {
    uVar2 = (param_2 - param_1 >> 3) * -0x71c71c71c71c71c7;
    do {
      uVar3 = uVar2 >> 1;
      lVar4 = param_1 + uVar3 * 0x48;
      lVar1 = lVar4 + 0x48;
      uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
      if (param_3 <= *(ulong *)(lVar4 + 0x40)) {
        lVar1 = param_1;
        uVar2 = uVar3;
      }
      param_1 = lVar1;
    } while (uVar2 != 0);
    if (lVar1 != param_2) {
      if (*(ulong *)(lVar1 + 0x40) != param_3) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return 0;
}



/* Entry: 10a402efc; end: 10a4030a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a40300c) */
/* WARNING: Removing unreachable block (ram,0x00010a403010) */
/* WARNING: Removing unreachable block (ram,0x00010a403058) */

void FUN_10a402efc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = ((long)puVar5 - (long)puVar4 >> 3) * -0x71c71c71c71c71c7;
    if ((10 < uVar2) && ((int)uVar2 / 10 <= *(int *)(param_1 + 0x28))) {
      while( true ) {
        if (puVar4 == puVar5) goto LAB_10a40308c;
        if (*(char *)(puVar4[1] + 8) != '\x01') break;
        puVar4 = puVar4 + 9;
      }
      if ((puVar4 != puVar5) && (puVar6 = puVar4 + 9, puVar6 != puVar5)) {
        do {
          if (*(char *)(puVar6[1] + 8) == '\x01') {
            *puVar4 = *puVar6;
            puVar3 = puVar4 + 1;
            (**(code **)*puVar3)(puVar3);
            (**(code **)(puVar6[1] + 0x10))(puVar3,puVar6 + 1);
            puVar4[8] = puVar6[8];
            puVar4 = puVar4 + 9;
          }
          puVar6 = puVar6 + 9;
        } while (puVar6 != puVar5);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar5 < puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4030a8);
        (*pcVar1)();
      }
      if (puVar4 != puVar5) {
        if (puVar5 != puVar4) {
          puVar5 = puVar5 + -8;
          do {
            puVar6 = puVar5 + -1;
            (**(code **)*puVar5)(puVar5);
            puVar5 = puVar5 + -9;
          } while (puVar6 != puVar4);
        }
        *(undefined8 **)(param_1 + 0x10) = puVar4;
      }
LAB_10a40308c:
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



/* Entry: 10a4030a8; end: 10a4030bb;  */

void FUN_10a4030a8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f655b2b;
  FUN_109ffde64();
                    /* WARNING: Could not recover jumptable at 0x00010a4030cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(*(undefined8 *)(param_2 + 0x10),puVar1);
  return;
}



/* Entry: 10a4030bc; end: 10a403193;  */

void FUN_10a4030bc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4030cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(*(undefined8 *)(param_2 + 0x10),param_1);
  return;
}



/* Entry: 10a403194; end: 10a403257;  */

void FUN_10a403194(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f656142;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x9d;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a403258(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f656143;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f656142;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x9d;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f656142;
  uStack_48 = 0;
  FUN_10a409694();
  FUN_10a40993c(param_1);
  return;
}



/* Entry: 10a403258; end: 10a40332f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4032f0) */

undefined1  [16] FUN_10a403258(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f656499,8);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a409598(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a403330; end: 10a40335f;  */

undefined8 * FUN_10a403330(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a403360; end: 10a403373;  */

long FUN_10a403360(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a403374; end: 10a4034eb;  */

void FUN_10a403374(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a4034ec; end: 10a4034f3;  */

void FUN_10a4034ec(float param_1,float param_2,float param_3,long param_4,long *param_5)

{
  long lVar1;
  
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bd33c8,&UNK_10e4b4704);
  *(float *)(param_4 + 0x30) = param_1;
  *(float *)(param_4 + 0x34) = param_2;
  *(float *)(param_4 + 0x38) = param_3;
  *(ulong *)(param_4 + 0x18) = CONCAT44(param_2 * 0.5,param_1 * 0.5);
  *(float *)(param_4 + 0x20) = param_3 * 0.5;
  lVar1 = *(long *)(param_4 + 0x28);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x3a0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a4034f4; end: 10a4035d7;  */

void FUN_10a4034f4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 9;
  plVar1 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd3b90,&plStack_30);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bd33c8,plVar2);
  return;
}



/* Entry: 10a4035d8; end: 10a403653;  */

/* WARNING: Removing unreachable block (ram,0x00010a403640) */

void FUN_10a4035d8(void)

{
  FUN_10a0ee900(&UNK_10f656148,0x15);
  return;
}


