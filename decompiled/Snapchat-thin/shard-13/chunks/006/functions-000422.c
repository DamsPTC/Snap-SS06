/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9aec90; end: 10a9aecf7;  */

void FUN_10a9aec90(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
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
  FUN_10a9aec90(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar6 + 3);
  lVar12 = plVar6[4];
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar12 + 0x88),*(undefined8 *)(lVar12 + 0x90));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9aede4);
    (*pcVar3)();
  }
  iVar2 = *(int *)(*(long *)(lVar12 + 0x88) + uVar8 * 0x180 + 0x20);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar2;
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar8 = lVar12 - 1;
  plVar7[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar11 = lVar14 - lVar12;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar16 * 0x10);
          lVar13 = lVar14 + uVar10 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
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
    _bzero(lVar14,uVar16 * 0x10);
    plVar7[0x4c] = lVar14 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar14 != lVar12) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar8;
  return;
}



/* Entry: 10a9aecf8; end: 10a9aedf7;  */

void FUN_10a9aecf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(uint *)(param_2 + 3);
  lVar11 = param_2[4];
  FUN_10a9781b4((ulong)uVar2,*(undefined8 *)(lVar11 + 0x88),*(undefined8 *)(lVar11 + 0x90));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9aede4);
    (*pcVar4)();
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x88) + uVar7 * 0x180 + 0x20);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar3;
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar7 = lVar11 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar11 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar11 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar11;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar11 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar11,lVar10);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar13,uVar15 * 0x10);
    plVar6[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar11 = lVar11 + uVar7 * 0x10;
    while (lVar13 != lVar11) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9aedf8; end: 10a9aeebf;  */

void FUN_10a9aedf8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a978a58(plVar4,param_2);
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



/* Entry: 10a9aeec0; end: 10a9af0df;  */

void FUN_10a9aeec0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a978ac4();
  lVar10 = *plVar8;
  lVar15 = plVar8[1];
  lVar14 = lVar15 - lVar10 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar14);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lVar15 != lVar10) {
    lVar15 = 0;
    do {
      plVar8 = *(long **)(lVar10 + lVar15 * 0x10 + 8);
      if (plVar8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
      }
      ppuStack_68 = &PTR_DAT_110bc3320;
      FUN_10a05348c(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar15,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar10 = plVar7[0x59];
  uVar11 = lVar10 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    puVar9 = ppuVar2[lVar10 + 2];
    if ((undefined *)plVar7[0x5a] == puVar9) {
      return;
    }
  }
  else {
    puVar9 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar9) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar12 = (undefined *)plVar7[0x4c];
  lVar10 = (long)puVar12 - (long)puVar3;
  puVar16 = (undefined *)(lVar10 >> 4);
  if (puVar16 < puVar9) {
    uVar11 = (long)puVar9 - (long)puVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)puVar12 >> 4) < uVar11) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar12 = (undefined *)(lVar15 - (long)puVar3 >> 3);
        if (puVar12 <= puVar9) {
          puVar12 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar3)) {
          puVar12 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar12 >> 0x3c == 0) {
          lVar13 = (long)puVar12 << 4;
          __Znwm();
          lVar14 = lVar13 + lVar10;
          _bzero(lVar14,uVar11 * 0x10);
          puVar16 = (undefined *)(lVar14 + (long)puVar16 * -0x10);
          _memcpy(puVar16,puVar3,lVar10);
          *ppuVar2 = puVar16;
          plVar7[0x4c] = lVar14 + uVar11 * 0x10;
          plVar7[0x4d] = lVar13 + (long)puVar12 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar15;
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
    _bzero(puVar12,uVar11 * 0x10);
    plVar7[0x4c] = (long)(puVar12 + uVar11 * 0x10);
  }
  else if (puVar9 < puVar16) {
    while (puVar12 != puVar3 + (long)puVar9 * 0x10) {
      puVar12 = puVar12 + -0x10;
      func_0x00010988c204(puVar12);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a9af0e0; end: 10a9af78b;  */

void FUN_10a9af0e0(undefined4 *param_1,ulong ****param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  ulong ****ppppuVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong **ppuVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong ****ppppuVar10;
  ulong ****ppppuVar11;
  ulong ***pppuVar12;
  undefined **ppuVar13;
  ulong *****pppppuVar14;
  ulong *puVar15;
  ulong ***pppuVar16;
  ulong **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  ulong ****ppppuVar20;
  ulong ***pppuVar21;
  ulong ***pppuVar22;
  ulong ****ppppuVar23;
  long lVar24;
  ulong ****ppppuVar25;
  ulong ****ppppuVar26;
  ulong ***pppuStack_c8;
  ulong ***pppuStack_c0;
  ulong ***pppuStack_b8;
  ulong ***pppuStack_b0;
  undefined8 *puStack_a8;
  ulong ***pppuStack_a0;
  ulong ***pppuStack_98;
  ulong ***pppuStack_90;
  ulong ****ppppuStack_88;
  ulong ***pppuStack_80;
  ulong ***pppuStack_78;
  ulong ***pppuStack_70;
  ulong ****ppppuStack_68;
  
  ppppuVar10 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppuVar10[0x59] < (ulong ***)0x8) {
    ppppuVar10[(long)ppppuVar10[0x59] + 0x4e] = ppppuVar10[0x5a];
    ppppuVar10[0x59] = (ulong ***)((long)ppppuVar10[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppuVar10 + 0x4b);
  }
  ppppuVar23 = param_2;
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a9af78c(param_5);
  if (*param_4 == 7) {
    ppppuVar25 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    ppppuVar11 = param_2;
    ppppuStack_88 = ppppuVar25;
    (*(code *)(*param_2)[0x41])(param_2,&ppppuStack_88);
    if (((ulong)ppppuVar11 & 1) != 0) {
      pppuStack_a0 = (ulong ***)ppppuStack_88;
      ppppuVar25 = &pppuStack_a0;
      ppppuVar11 = param_2;
      (*(code *)(*param_2)[0x4d])();
      pppuStack_c8 = (ulong ***)0x0;
      pppuStack_c0 = (ulong ***)0x0;
      pppuStack_b8 = (ulong ***)0x0;
      if (ppppuVar11 != (ulong ****)0x0) {
        if ((ulong)ppppuVar11 >> 0x3c != 0) {
          FUN_10a98a21c();
          goto LAB_10a9af6d0;
        }
        ppppuVar20 = ppppuVar11;
        ppppuStack_68 = &pppuStack_c8;
        FUN_10a98a230();
        ppppuVar26 = (ulong ****)((long)ppppuVar20 - ((long)pppuStack_c0 - (long)pppuStack_c8));
        _memcpy(ppppuVar26);
        pppuStack_78 = pppuStack_c8;
        pppuStack_70 = pppuStack_b8;
        ppppuStack_88 = (ulong ****)pppuStack_c8;
        pppuStack_80 = pppuStack_c8;
        pppuStack_c8 = (ulong ***)ppppuVar26;
        pppuStack_c0 = (ulong ***)ppppuVar20;
        pppuStack_b8 = (ulong ***)(ppppuVar20 + (long)ppppuVar25 * 2);
        FUN_10a9af7b0(&ppppuStack_88);
        ppppuVar25 = (ulong ****)0x0;
        do {
          ppuVar13 = (undefined **)&pppuStack_a0;
          (*(code *)(*param_2)[0x51])(&pppuStack_b0,param_2,ppuVar13,ppppuVar25);
          if ((int)pppuStack_b0 == 1) {
            ppppuVar20 = (ulong ****)0x0;
            ppppuVar26 = (ulong ****)0x0;
          }
          else {
            ppuVar13 = (undefined **)&pppuStack_b0;
            ppppuVar20 = param_2;
            func_0x000109898688();
            if (ppppuVar20 == (ulong ****)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a9af6d0;
            }
            func_0x00010989879c(&ppppuStack_88);
            if (ppppuStack_88 == (ulong ****)0x0) {
LAB_10a9af2b4:
              pppppuVar14 = (ulong *****)&pppuStack_98;
            }
            else {
              ppuVar13 = &PTR_DAT_110b178e0;
              ppppuVar20 = ppppuStack_88;
              ___dynamic_cast(ppppuStack_88,&PTR_DAT_110b178e0,&PTR_DAT_110bc3320,0x10);
              if (ppppuVar20 == (ulong ****)0x0) goto LAB_10a9af2b4;
              pppuStack_90 = pppuStack_80;
              pppppuVar14 = &ppppuStack_88;
              pppuStack_98 = (ulong ***)ppppuVar20;
            }
            *pppppuVar14 = (ulong ****)0x0;
            pppppuVar14[1] = (ulong ****)0x0;
            pppuVar21 = pppuStack_80;
            if ((ulong ****)pppuStack_80 != (ulong ****)0x0) {
              ppppuVar20 = (ulong ****)(pppuStack_80 + 1);
              do {
                pppuVar12 = *ppppuVar20;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
                if (bVar7) {
                  *ppppuVar20 = (ulong ***)((long)pppuVar12 - 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppuVar12 == (ulong ***)0x0) {
                (*(code *)(*pppuStack_80)[2])(pppuStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar21);
              }
            }
            ppppuVar26 = (ulong ****)pppuStack_90;
            ppppuVar20 = (ulong ****)pppuStack_98;
            if ((ulong ****)pppuStack_98 == (ulong ****)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a9af6d0;
            }
            if ((ulong ****)pppuStack_90 != (ulong ****)0x0) {
              ppppuVar1 = (ulong ****)(pppuStack_90 + 2);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                if (bVar7) {
                  *ppppuVar1 = (ulong ***)((long)*ppppuVar1 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              ppppuVar1 = (ulong ****)(pppuStack_90 + 1);
              do {
                pppuVar21 = *ppppuVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                if (bVar7) {
                  *ppppuVar1 = (ulong ***)((long)pppuVar21 - 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppuVar21 == (ulong ***)0x0) {
                (*(code *)(*pppuStack_90)[2])(pppuStack_90);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar26);
              }
            }
          }
          if (pppuStack_c0 < pppuStack_b8) {
            *pppuStack_c0 = (ulong **)ppppuVar20;
            pppuStack_c0[1] = (ulong **)ppppuVar26;
            ppppuVar20 = (ulong ****)(pppuStack_c0 + 2);
          }
          else {
            lVar24 = (long)pppuStack_c0 - (long)pppuStack_c8;
            uVar18 = (lVar24 >> 4) + 1;
            if (uVar18 >> 0x3c != 0) {
              FUN_10a98a21c();
              goto LAB_10a9af6d0;
            }
            uVar19 = (long)pppuStack_b8 - (long)pppuStack_c8 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppuStack_b8 - (long)pppuStack_c8)) {
              uVar19 = 0xfffffffffffffff;
            }
            ppppuStack_68 = &pppuStack_c8;
            FUN_10a98a230();
            puVar3 = (undefined8 *)(uVar19 + lVar24);
            *puVar3 = ppppuVar20;
            puVar3[1] = ppppuVar26;
            ppppuVar20 = (ulong ****)(puVar3 + 2);
            ppppuVar26 = (ulong ****)((long)puVar3 - ((long)pppuStack_c0 - (long)pppuStack_c8));
            _memcpy(ppppuVar26);
            pppuStack_78 = pppuStack_c8;
            pppuStack_70 = pppuStack_b8;
            ppppuStack_88 = (ulong ****)pppuStack_c8;
            pppuStack_80 = pppuStack_c8;
            pppuStack_c8 = (ulong ***)ppppuVar26;
            pppuStack_c0 = (ulong ***)ppppuVar20;
            pppuStack_b8 = (ulong ***)(uVar19 + (long)ppuVar13 * 0x10);
            FUN_10a9af7b0(&ppppuStack_88);
          }
          pppuStack_c0 = (ulong ***)ppppuVar20;
          if ((3 < (int)pppuStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          ppppuVar25 = (ulong ****)((long)ppppuVar25 + 1);
        } while (ppppuVar25 != ppppuVar11);
      }
      if ((ulong ****)pppuStack_a0 != (ulong ****)0x0) {
        (*(code *)**pppuStack_a0)();
      }
      pppuVar21 = pppuStack_c8;
      if (((pppuStack_c8 != pppuStack_c0) &&
          (pppuVar12 = (ulong ***)pppuStack_c8[1], pppuVar12 != (ulong ***)0x0)) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar12 != (ulong ***)0x0)) {
        pppuVar21 = (ulong ***)*pppuVar21;
        pppuVar22 = pppuVar12 + 1;
        do {
          ppuVar17 = *pppuVar22;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar22,0x10);
          if (bVar7) {
            *pppuVar22 = (ulong **)((long)ppuVar17 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar17 == (ulong **)0x0) {
          (*(code *)(*pppuVar12)[2])(pppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar12);
        }
        if (pppuVar21 != (ulong ***)0x0) {
          pppuVar12 = ppppuVar23[4];
          uVar5 = *(uint *)(ppppuVar23 + 3);
          ppuVar17 = pppuVar12[0x11];
          FUN_10a9781b4((ulong)uVar5,ppuVar17,pppuVar12[0x12]);
          pppuVar21 = pppuStack_c0;
          ppppuVar23 = (ulong ****)pppuStack_c8;
          ppuVar4 = pppuVar12[0x11];
          uVar18 = (ulong)uVar5 & 0x3fff;
          uVar19 = ((long)pppuVar12[0x12] - (long)ppuVar4 >> 7) * -0x5555555555555555;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) goto LAB_10a9af6d0;
          ppppuVar25 = (ulong ****)(ppuVar4 + uVar18 * 0x30 + 7);
          if (ppppuVar25 != &pppuStack_c8) {
            uVar19 = (long)pppuStack_c0 - (long)pppuStack_c8;
            puVar15 = ppuVar4[uVar18 * 0x30 + 9];
            pppuVar12 = *ppppuVar25;
            if ((ulong)((long)puVar15 - (long)pppuVar12) < uVar19) {
              pppuVar22 = (ulong ***)((long)uVar19 >> 4);
              if (pppuVar12 != (ulong ***)0x0) {
                FUN_10a3f8f70(ppppuVar25);
                __ZdlPv(*ppppuVar25);
                puVar15 = (ulong *)0x0;
                *ppppuVar25 = (ulong ***)0x0;
                ppuVar4[uVar18 * 0x30 + 8] = (ulong *)0x0;
                ppuVar4[uVar18 * 0x30 + 9] = (ulong *)0x0;
              }
              if ((ulong)pppuVar22 >> 0x3c == 0) {
                pppuVar12 = (ulong ***)((long)puVar15 >> 3);
                if ((ulong ***)((long)puVar15 >> 3) <= pppuVar22) {
                  pppuVar12 = pppuVar22;
                }
                if ((ulong *)0x7fffffffffffffef < puVar15) {
                  pppuVar12 = (ulong ***)0xfffffffffffffff;
                }
                if ((ulong)pppuVar12 >> 0x3c == 0) {
                  FUN_10a98a230();
                  *ppppuVar25 = pppuVar12;
                  ppuVar4[uVar18 * 0x30 + 8] = (ulong *)pppuVar12;
                  ppuVar4[uVar18 * 0x30 + 9] = (ulong *)(pppuVar12 + (long)ppuVar17 * 2);
                  for (; ppppuVar23 != (ulong ****)pppuVar21; ppppuVar23 = ppppuVar23 + 2) {
                    pppuVar22 = ppppuVar23[1];
                    pppuVar16 = *ppppuVar23;
                    pppuVar12[1] = (ulong **)ppppuVar23[1];
                    *pppuVar12 = (ulong **)pppuVar16;
                    if (pppuVar22 != (ulong ***)0x0) {
                      pppuVar22 = pppuVar22 + 2;
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(pppuVar22,0x10);
                        if (bVar7) {
                          *pppuVar22 = (ulong **)((long)*pppuVar22 + 1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    pppuVar12 = pppuVar12 + 2;
                  }
                  ppuVar4[uVar18 * 0x30 + 8] = (ulong *)pppuVar12;
                  goto SUB_10988c170;
                }
              }
              FUN_10a98a21c();
              goto LAB_10a9af6d0;
            }
            if ((ulong)((long)ppuVar4[uVar18 * 0x30 + 8] - (long)pppuVar12) < uVar19) {
              ppppuVar23 = (ulong ****)
                           ((long)pppuStack_c8 +
                           ((long)ppuVar4[uVar18 * 0x30 + 8] - (long)pppuVar12));
              FUN_10a98a1a4(pppuStack_c8,ppppuVar23);
              puVar15 = ppuVar4[uVar18 * 0x30 + 8];
              for (; ppppuVar23 != (ulong ****)pppuVar21; ppppuVar23 = ppppuVar23 + 2) {
                pppuVar12 = ppppuVar23[1];
                pppuVar22 = *ppppuVar23;
                puVar15[1] = (ulong)ppppuVar23[1];
                *puVar15 = (ulong)pppuVar22;
                if (pppuVar12 != (ulong ***)0x0) {
                  pppuVar12 = pppuVar12 + 2;
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
                    if (bVar7) {
                      *pppuVar12 = (ulong **)((long)*pppuVar12 + 1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                puVar15 = puVar15 + 2;
              }
              ppuVar4[uVar18 * 0x30 + 8] = puVar15;
            }
            else {
              ppppuVar25 = (ulong ****)pppuStack_c8;
              FUN_10a98a1a4(pppuStack_c8,pppuStack_c0);
              for (ppppuVar23 = (ulong ****)ppuVar4[uVar18 * 0x30 + 8]; ppppuVar23 != ppppuVar25;
                  ppppuVar23 = ppppuVar23 + -2) {
                if (ppppuVar23[-1] != (ulong ***)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
              }
              ppuVar4[uVar18 * 0x30 + 8] = (ulong *)ppppuVar25;
            }
          }
SUB_10988c170:
          ppppuStack_88 = &pppuStack_c8;
          func_0x00010a3f8f30(&ppppuStack_88);
          *param_1 = 0;
          ppppuVar23 = ppppuVar10 + 0x4b;
          pppuVar21 = ppppuVar10[0x59];
          pppuVar12 = (ulong ***)((long)pppuVar21 - 1);
          ppppuVar10[0x59] = pppuVar12;
          if (pppuVar12 < (ulong ***)0x8) {
            pppuVar21 = ppppuVar23[(long)pppuVar21 + 2];
            if (ppppuVar10[0x5a] == pppuVar21) {
              return;
            }
          }
          else {
            pppuVar21 = (ulong ***)ppppuVar10[0x57][-1];
            ppppuVar10[0x57] = ppppuVar10[0x57] + -1;
            if (ppppuVar10[0x5a] == pppuVar21) {
              return;
            }
          }
          ppppuVar25 = (ulong ****)*ppppuVar23;
          ppppuVar11 = (ulong ****)ppppuVar10[0x4c];
          lVar24 = (long)ppppuVar11 - (long)ppppuVar25;
          pppuVar12 = (ulong ***)(lVar24 >> 4);
          if (pppuVar12 < pppuVar21) {
            uVar18 = (long)pppuVar21 - (long)pppuVar12;
            pppuVar22 = ppppuVar10[0x4d];
            if ((ulong)((long)pppuVar22 - (long)ppppuVar11 >> 4) < uVar18) {
              if ((ulong)pppuVar21 >> 0x3c == 0) {
                pppuVar16 = (ulong ***)((long)pppuVar22 - (long)ppppuVar25 >> 3);
                if (pppuVar16 <= pppuVar21) {
                  pppuVar16 = pppuVar21;
                }
                if (0x7fffffffffffffef < (ulong)((long)pppuVar22 - (long)ppppuVar25)) {
                  pppuVar16 = (ulong ***)0xfffffffffffffff;
                }
                ppppuStack_68 = ppppuVar23;
                if ((ulong)pppuVar16 >> 0x3c == 0) {
                  lVar9 = (long)pppuVar16 << 4;
                  __Znwm();
                  lVar2 = lVar9 + lVar24;
                  _bzero(lVar2,uVar18 * 0x10);
                  pppuVar12 = (ulong ***)(lVar2 + (long)pppuVar12 * -0x10);
                  _memcpy(pppuVar12,ppppuVar25,lVar24);
                  *ppppuVar23 = pppuVar12;
                  ppppuVar10[0x4c] = (ulong ***)(lVar2 + uVar18 * 0x10);
                  ppppuVar10[0x4d] = (ulong ***)(lVar9 + (long)pppuVar16 * 0x10);
                  ppppuStack_88 = ppppuVar25;
                  pppuStack_80 = (ulong ***)ppppuVar25;
                  pppuStack_78 = (ulong ***)ppppuVar25;
                  pppuStack_70 = pppuVar22;
                  func_0x00010988c1b8(&ppppuStack_88);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar8)();
            }
            _bzero(ppppuVar11,uVar18 * 0x10);
            ppppuVar10[0x4c] = (ulong ***)(ppppuVar11 + uVar18 * 2);
          }
          else if (pppuVar21 < pppuVar12) {
            while (ppppuVar11 != ppppuVar25 + (long)pppuVar21 * 2) {
              ppppuVar11 = ppppuVar11 + -2;
              func_0x00010988c204(ppppuVar11);
            }
            ppppuVar10[0x4c] = (ulong ***)(ppppuVar25 + (long)pppuVar21 * 2);
          }
code_r0x00010988c138:
          ppppuVar10[0x5a] = pppuVar21;
          return;
        }
      }
      FUN_10a00946c(&UNK_10f686466);
      goto LAB_10a9af6d0;
    }
    if (ppppuStack_88 != (ulong ****)0x0) {
      (*(code *)**ppppuStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a9af6d0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9af6d4);
  (*pcVar8)();
}



/* Entry: 10a9af78c; end: 10a9af7af;  */

long * FUN_10a9af78c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_1 != 1) {
    plVar3 = (long *)0x1;
    FUN_10a052ee0(1,0,param_1);
    lVar2 = plVar3[1];
    lVar4 = plVar3[2];
    while (lVar4 != lVar2) {
      plVar3[2] = lVar4 + -0x10;
      plVar1 = (long *)(lVar4 + -8);
      lVar4 = lVar4 + -0x10;
      if (*plVar1 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        lVar4 = plVar3[2];
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  return param_1;
}



/* Entry: 10a9af7b0; end: 10a9af80b;  */

long * FUN_10a9af7b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar2) {
    param_1[2] = lVar3 + -0x10;
    plVar1 = (long *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9af80c; end: 10a9af8eb;  */

void FUN_10a9af80c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9783e0((long)&uStack_88 + 4,plVar4);
  if ((in_stack_ffffffffffffffb8 & 0x100000000) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a368650(param_1,param_2,(long)&uStack_88 + 4);
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
          uStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&uStack_88);
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



/* Entry: 10a9af8ec; end: 10a9afadb;  */

/* WARNING: Possible PIC construction at 0x00010a9afad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9afad4) */
/* WARNING: Removing unreachable block (ram,0x00010a9afae8) */
/* WARNING: Removing unreachable block (ram,0x00010a9afb90) */
/* WARNING: Removing unreachable block (ram,0x00010a9afb40) */
/* WARNING: Removing unreachable block (ram,0x00010a9afb58) */
/* WARNING: Removing unreachable block (ram,0x00010a9afae4) */

void FUN_10a9af8ec(undefined4 *param_1,byte *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  undefined1 *puVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  byte *unaff_x22;
  long lVar15;
  long unaff_x23;
  long lVar16;
  long lVar17;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar18;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  uint auStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined8 uStack_69;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pbVar6 + 0x2c8) < 8) {
    *(undefined8 *)(pbVar6 + *(ulong *)(pbVar6 + 0x2c8) * 8 + 0x270) =
         *(undefined8 *)(pbVar6 + 0x2d0);
    *(long *)(pbVar6 + 0x2c8) = *(long *)(pbVar6 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pbVar6 + 600);
  }
  pbVar8 = param_2;
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a9afadc(param_5);
  uVar18 = 0;
  auStack_b0[0] = 0;
  puVar2 = auStack_b0;
  if (param_5 != 0) {
    puVar2 = param_4;
  }
  bVar4 = 1 < *puVar2;
  if (bVar4) {
    FUN_10a36c25c();
    uVar18 = (ulong)*param_2;
    uStack_98 = *(undefined8 *)(param_2 + 9);
    uStack_a0 = *(undefined8 *)(param_2 + 1);
    uStack_88 = *(undefined8 *)(param_2 + 0x19);
    uStack_90 = *(undefined8 *)(param_2 + 0x11);
    uStack_80 = *(undefined8 *)(param_2 + 0x21);
    uStack_78 = (undefined7)*(undefined8 *)(param_2 + 0x29);
    uStack_69 = *(undefined8 *)(param_2 + 0x38);
    uStack_71 = (undefined1)*(undefined8 *)(param_2 + 0x30);
    uStack_70 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x30) >> 8);
  }
  lVar16 = *(long *)(pbVar8 + 0x20);
  puVar13 = (undefined8 *)(ulong)*(uint *)(pbVar8 + 0x18);
  puVar7 = puVar13;
  FUN_10a9781b4(puVar13,*(undefined8 *)(lVar16 + 0x88),*(undefined8 *)(lVar16 + 0x90));
  uVar9 = (ulong)puVar13 & 0x3fff;
  uVar12 = (*(long *)(lVar16 + 0x90) - *(long *)(lVar16 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9afa9c);
    (*pcVar3)();
  }
  lVar10 = *(long *)(lVar16 + 0x88) + uVar9 * 0x180;
  *(undefined8 *)(lVar10 + 0x12d) = uStack_98;
  *(undefined8 *)(lVar10 + 0x125) = uStack_a0;
  *(char *)(lVar10 + 0x124) = (char)uVar18;
  *(undefined8 *)(lVar10 + 0x13d) = uStack_88;
  *(undefined8 *)(lVar10 + 0x135) = uStack_90;
  *(ulong *)(lVar10 + 0x14d) = CONCAT17(uStack_71,uStack_78);
  *(undefined8 *)(lVar10 + 0x145) = uStack_80;
  *(undefined8 *)(lVar10 + 0x15c) = uStack_69;
  *(ulong *)(lVar10 + 0x154) = CONCAT71(uStack_70,uStack_71);
  *(bool *)(lVar10 + 0x164) = bVar4;
  if ((3 < (int)auStack_b0[0]) && (puVar7 = puStack_a8, puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((3 < (int)auStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    unaff_x30 = 0x10a9afad4;
    register0x00000008 = (BADSPACEBASE *)auStack_b0;
    unaff_x19 = pbVar6;
    unaff_x20 = puVar7;
    unaff_x21 = puVar13;
    unaff_x22 = pbVar8;
    unaff_x23 = lVar16;
    unaff_x24 = param_5;
    unaff_x25 = uVar18;
    unaff_x26 = (ulong)bVar4;
    unaff_x29 = puVar1;
  }
  pbVar8 = pbVar6 + 600;
  uVar18 = *(long *)(pbVar6 + 0x2c8) - 1;
  *(ulong *)(pbVar6 + 0x2c8) = uVar18;
  if (uVar18 < 8) {
    uVar18 = *(ulong *)(pbVar8 + uVar18 * 8 + 0x18);
    if (*(ulong *)(pbVar6 + 0x2d0) == uVar18) {
      return;
    }
  }
  else {
    uVar18 = *(ulong *)(*(long *)(pbVar6 + 0x2b8) + -8);
    *(ulong **)(pbVar6 + 0x2b8) = (ulong *)(*(long *)(pbVar6 + 0x2b8) + -8);
    if (*(ulong *)(pbVar6 + 0x2d0) == uVar18) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar16 = *(long *)pbVar8;
  lVar10 = *(long *)(pbVar6 + 0x260);
  lVar14 = lVar10 - lVar16;
  uVar9 = lVar14 >> 4;
  if (uVar9 < uVar18) {
    uVar12 = uVar18 - uVar9;
    lVar17 = *(long *)(pbVar6 + 0x268);
    if ((ulong)(lVar17 - lVar10 >> 4) < uVar12) {
      if (uVar18 >> 0x3c == 0) {
        uVar11 = lVar17 - lVar16 >> 3;
        if (uVar11 <= uVar18) {
          uVar11 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar16)) {
          uVar11 = 0xfffffffffffffff;
        }
        *(byte **)((long)register0x00000008 + -0x68) = pbVar8;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar10 = lVar5 + lVar14;
          _bzero(lVar10,uVar12 * 0x10);
          lVar15 = lVar10 + uVar9 * -0x10;
          _memcpy(lVar15,lVar16,lVar14);
          *(long *)pbVar8 = lVar15;
          *(ulong *)(pbVar6 + 0x260) = lVar10 + uVar12 * 0x10;
          *(ulong *)(pbVar6 + 0x268) = lVar5 + uVar11 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar16;
          *(long *)((long)register0x00000008 + -0x70) = lVar17;
          *(long *)((long)register0x00000008 + -0x88) = lVar16;
          *(long *)((long)register0x00000008 + -0x80) = lVar16;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar10,uVar12 * 0x10);
    *(ulong *)(pbVar6 + 0x260) = lVar10 + uVar12 * 0x10;
  }
  else if (uVar18 < uVar9) {
    lVar16 = lVar16 + uVar18 * 0x10;
    while (lVar10 != lVar16) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pbVar6 + 0x260) = lVar16;
  }
code_r0x00010988c138:
  *(ulong *)(pbVar6 + 0x2d0) = uVar18;
  return;
}



/* Entry: 10a9afadc; end: 10a9afaff;  */

void FUN_10a9afadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 1;
  FUN_10a052ee0(1,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a9afc68(extraout_x8,plVar3,FUN_10a978464,0,uVar5,param_4);
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



/* Entry: 10a9afb00; end: 10a9afbaf;  */

void FUN_10a9afb00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afc68(param_1,param_2,FUN_10a978464,0,param_3,param_5);
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



/* Entry: 10a9afbb0; end: 10a9afc67;  */

void FUN_10a9afbb0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afcec(param_1,param_2,FUN_10a9784c8,0,param_3,param_4,param_5);
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



/* Entry: 10a9afc68; end: 10a9afceb;  */

void FUN_10a9afc68(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  
  FUN_10a9aec90(param_2,param_5);
  FUN_10a052e3c(param_6);
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)();
  if (((ulong)plVar1 >> 0x20 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)SUB84(plVar1,0);
    uVar2 = 3;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10a9afcec; end: 10a9afddf;  */

void FUN_10a9afcec(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,long param_7)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined4 uStack_68;
  undefined1 uStack_64;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  
  lVar3 = param_2;
  FUN_10a9aea5c(param_2,param_5);
  FUN_10a9afde0(param_7);
  aiStack_60[0] = 0;
  piVar2 = aiStack_60;
  if (param_7 != 0) {
    piVar2 = param_6;
  }
  func_0x00010a479fa8(param_2,piVar2);
  uStack_68 = (undefined4)param_2;
  uStack_64 = (undefined1)((ulong)param_2 >> 0x20);
  plVar1 = (long *)(lVar3 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,&uStack_68);
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a9afde0; end: 10a9afe03;  */

void FUN_10a9afde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 1;
  FUN_10a052ee0(1,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a9afc68(extraout_x8,plVar3,FUN_10a978540,0,uVar5,param_4);
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



/* Entry: 10a9afe04; end: 10a9afeb3;  */

void FUN_10a9afe04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afc68(param_1,param_2,FUN_10a978540,0,param_3,param_5);
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



/* Entry: 10a9afeb4; end: 10a9aff6b;  */

void FUN_10a9afeb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afcec(param_1,param_2,FUN_10a9785a0,0,param_3,param_4,param_5);
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



/* Entry: 10a9aff6c; end: 10a9b001b;  */

void FUN_10a9aff6c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afc68(param_1,param_2,FUN_10a978618,0,param_3,param_5);
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



/* Entry: 10a9b001c; end: 10a9b00d3;  */

void FUN_10a9b001c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afcec(param_1,param_2,FUN_10a97867c,0,param_3,param_4,param_5);
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



/* Entry: 10a9b00d4; end: 10a9b01a3;  */

void FUN_10a9b00d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9aec90(param_2,param_3);
  uVar3 = (uint)param_2;
  FUN_10a052e3c(param_5);
  FUN_10a9786f4();
  if ((uVar3 >> 8 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)(uVar3 & 0xff);
    uVar6 = 3;
  }
  *param_1 = uVar6;
  plVar1 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar7 + 2];
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
  lVar7 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar1 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
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



/* Entry: 10a9b01a4; end: 10a9b032b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9b02a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b02b0) */

void FUN_10a9b01a4(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ushort uVar15;
  long lVar16;
  ulong uVar17;
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
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a9b032c(param_5);
  uVar15 = 0;
  puVar1 = (uint *)&stack0xffffffffffffffa0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  uVar2 = *puVar1;
  if (1 < uVar2) {
    func_0x00010a068bd8();
    uVar15 = (ushort)param_2;
  }
  lVar12 = plVar7[4];
  uVar3 = *(uint *)(plVar7 + 3);
  FUN_10a9781b4((ulong)uVar3,*(undefined8 *)(lVar12 + 0x88),*(undefined8 *)(lVar12 + 0x90));
  uVar8 = (ulong)uVar3 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b02f0);
    (*pcVar4)();
  }
  *(ushort *)(*(long *)(lVar12 + 0x88) + uVar8 * 0x180 + 0xf8) = uVar15 | (ushort)(1 < uVar2) << 8;
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar8 = lVar12 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar12 + 2];
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
  lVar12 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar11 = lVar14 - lVar12;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar17 = uVar8 - uVar10;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar16 - lVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar11;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar10 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar14 != lVar12) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b032c; end: 10a9b034f;  */

void FUN_10a9b032c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 1;
  FUN_10a052ee0(1,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a9afc68(extraout_x8,plVar3,0x10a978754,0,uVar5,param_4);
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



/* Entry: 10a9b0350; end: 10a9b03ff;  */

void FUN_10a9b0350(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afc68(param_1,param_2,0x10a978754,0,param_3,param_5);
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



/* Entry: 10a9b0400; end: 10a9b04b7;  */

void FUN_10a9b0400(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afcec(param_1,param_2,FUN_10a9787b8,0,param_3,param_4,param_5);
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



/* Entry: 10a9b04b8; end: 10a9b0567;  */

void FUN_10a9b04b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afc68(param_1,param_2,FUN_10a97891c,0,param_3,param_5);
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



/* Entry: 10a9b0568; end: 10a9b061f;  */

void FUN_10a9b0568(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9afcec(param_1,param_2,FUN_10a978980,0,param_3,param_4,param_5);
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



/* Entry: 10a9b0620; end: 10a9b06eb;  */

void FUN_10a9b0620(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9789f8();
  if (((ulong)param_2 >> 0x20 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)(int)param_2;
    uVar5 = 3;
  }
  *param_1 = uVar5;
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



/* Entry: 10a9b06ec; end: 10a9b0883;  */

/* WARNING: Removing unreachable block (ram,0x00010a9b07f8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b0800) */

void FUN_10a9b06ec(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  FUN_10a9aea5c(param_2,param_3);
  FUN_10a9b0884(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    uVar11 = 0;
  }
  else {
    func_0x000109898518();
    if (3 < (uint)param_2) {
      FUN_10a00946c(&UNK_10f686431);
      goto LAB_10a9b0844;
    }
    uVar11 = (ulong)param_2 & 0xffffffff | 0x100000000;
  }
  lVar14 = plVar6[4];
  uVar2 = *(uint *)(plVar6 + 3);
  FUN_10a9781b4((ulong)uVar2,*(undefined8 *)(lVar14 + 0x88),*(undefined8 *)(lVar14 + 0x90));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar14 + 0x90) - *(long *)(lVar14 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
LAB_10a9b0844:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b0848);
    (*pcVar3)();
  }
  lVar14 = *(long *)(lVar14 + 0x88) + uVar7 * 0x180;
  *(char *)(lVar14 + 0xf4) = (char)(uVar11 >> 0x20);
  *(int *)(lVar14 + 0xf0) = (int)uVar11;
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar11 = lVar14 - 1;
  plVar5[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar14 + 2];
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  lVar14 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar10 = lVar13 - lVar14;
  uVar7 = lVar10 >> 4;
  if (uVar7 < uVar11) {
    uVar9 = uVar11 - uVar7;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar13 >> 4) < uVar9) {
      if (uVar11 >> 0x3c == 0) {
        uVar8 = lVar15 - lVar14 >> 3;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar10;
          _bzero(lVar13,uVar9 * 0x10);
          lVar12 = lVar13 + uVar7 * -0x10;
          _memcpy(lVar12,lVar14,lVar10);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar9 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar14;
          lStack_80 = lVar14;
          lStack_78 = lVar14;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar9 * 0x10);
    plVar5[0x4c] = lVar13 + uVar9 * 0x10;
  }
  else if (uVar11 < uVar7) {
    lVar14 = lVar14 + uVar11 * 0x10;
    while (lVar13 != lVar14) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar11;
  return;
}



/* Entry: 10a9b0884; end: 10a9b08a7;  */

void FUN_10a9b0884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar8 = 1;
  FUN_10a052ee0(1,1,param_1);
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
  FUN_10a9aec90(plVar5,uVar8);
  FUN_10a052e3c(param_4);
  plVar18 = (long *)plVar7[7];
  if (plVar7[7] != 0) {
    plVar7 = (long *)(plVar7[7] + 8);
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
  if (plVar18 != (long *)0x0) {
    plVar5 = plVar18 + 1;
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
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
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
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
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
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
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



/* Entry: 10a9b08a8; end: 10a9b09db;  */

void FUN_10a9b08a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9aec90(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[7];
  if (plVar6[7] != 0) {
    plVar6 = (long *)(plVar6[7] + 8);
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



/* Entry: 10a9b09dc; end: 10a9b0a33;  */

long FUN_10a9b09dc(long param_1)

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



/* Entry: 10a9b0a34; end: 10a9b0beb;  */

void FUN_10a9b0a34(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puStack_88;
  undefined *puStack_80;
  long *plStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a9b0c54(param_5);
  plVar10 = param_2;
  func_0x00010a068bd8(param_2,param_4);
  plVar11 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  plVar12 = param_2;
  func_0x00010a068bd8(param_2,param_4 + 0x20);
  plVar13 = param_2;
  func_0x000109898518(param_2,param_4 + 0x30);
  FUN_10a9790b0(&puStack_80,plVar9,plVar10,plVar11,plVar12,plVar13);
  plVar9 = plStack_78;
  puStack_80 = (undefined *)0x0;
  plStack_78 = (long *)0x0;
  ppuStack_68 = &PTR_DAT_110c33940;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  ppuVar1 = (undefined **)(plVar8 + 0x4b);
  lVar17 = plVar8[0x59];
  uVar15 = lVar17 - 1;
  plVar8[0x59] = uVar15;
  if (uVar15 < 8) {
    puVar14 = ppuVar1[lVar17 + 2];
    if ((undefined *)plVar8[0x5a] == puVar14) {
      return;
    }
  }
  else {
    puVar14 = *(undefined **)(plVar8[0x57] + -8);
    plVar8[0x57] = (long)(plVar8[0x57] + -8);
    if ((undefined *)plVar8[0x5a] == puVar14) {
      return;
    }
  }
  puVar3 = *ppuVar1;
  puVar16 = (undefined *)plVar8[0x4c];
  lVar17 = (long)puVar16 - (long)puVar3;
  puVar19 = (undefined *)(lVar17 >> 4);
  if (puVar19 < puVar14) {
    uVar15 = (long)puVar14 - (long)puVar19;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - (long)puVar16 >> 4) < uVar15) {
      if ((ulong)puVar14 >> 0x3c == 0) {
        puVar16 = (undefined *)(lVar18 - (long)puVar3 >> 3);
        if (puVar16 <= puVar14) {
          puVar16 = puVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)puVar3)) {
          puVar16 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar1;
        if ((ulong)puVar16 >> 0x3c == 0) {
          lVar7 = (long)puVar16 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar17;
          _bzero(lVar2,uVar15 * 0x10);
          puVar19 = (undefined *)(lVar2 + (long)puVar19 * -0x10);
          _memcpy(puVar19,puVar3,lVar17);
          *ppuVar1 = puVar19;
          plVar8[0x4c] = lVar2 + uVar15 * 0x10;
          plVar8[0x4d] = lVar7 + (long)puVar16 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          plStack_78 = (long *)puVar3;
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
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar16,uVar15 * 0x10);
    plVar8[0x4c] = (long)(puVar16 + uVar15 * 0x10);
  }
  else if (puVar14 < puVar19) {
    while (puVar16 != puVar3 + (long)puVar14 * 0x10) {
      puVar16 = puVar16 + -0x10;
      func_0x00010988c204(puVar16);
    }
    plVar8[0x4c] = (long)(puVar3 + (long)puVar14 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar14;
  return;
}



/* Entry: 10a9b0bec; end: 10a9b0c53;  */

void FUN_10a9b0bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar13 = param_1;
  func_0x000109898688();
  if (lVar13 != 0) {
    FUN_10a053854(param_1,lVar13);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar5 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar5 == 4) {
    return;
  }
  plVar6 = (long *)0x4;
  uVar10 = 0;
  FUN_10a052ee0(4,0,puVar5);
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
  FUN_10a9b0bec(plVar6,uVar10);
  FUN_10a9b0dec(param_4);
  plVar9 = plVar6;
  func_0x00010a068bd8(plVar6,puVar5);
  func_0x00010a97927c(&lStack_a0,plVar8,plVar9);
  plVar8 = plStack_98;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  func_0x000109899de4(extraout_x8,plVar6,&stack0xffffffffffffff80,&stack0xffffffffffffff78,0,0);
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
    do {
      lVar13 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
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
  lVar13 = *plVar6;
  lVar16 = plVar7[0x4c];
  lVar14 = lVar16 - lVar13;
  uVar18 = lVar14 >> 4;
  if (uVar18 < uVar11) {
    uVar19 = uVar11 - uVar18;
    lVar17 = plVar7[0x4d];
    if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar17 - lVar13 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar13)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_98 = plVar6;
        if (uVar12 >> 0x3c == 0) {
          lVar4 = uVar12 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar14;
          _bzero(lVar16,uVar19 * 0x10);
          lVar15 = lVar16 + uVar18 * -0x10;
          _memcpy(lVar15,lVar13,lVar14);
          *plVar6 = lVar15;
          plVar7[0x4c] = lVar16 + uVar19 * 0x10;
          plVar7[0x4d] = lVar4 + uVar12 * 0x10;
          lStack_b8 = lVar13;
          lStack_b0 = lVar13;
          lStack_a8 = lVar13;
          lStack_a0 = lVar17;
          func_0x00010988c1b8(&lStack_b8);
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
    plVar7[0x4c] = lVar16 + uVar19 * 0x10;
  }
  else if (uVar11 < uVar18) {
    lVar13 = lVar13 + uVar11 * 0x10;
    while (lVar16 != lVar13) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar7[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a9b0c54; end: 10a9b0c77;  */

void FUN_10a9b0c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
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
  long lStack_80;
  long *plStack_78;
  
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
  FUN_10a9b0bec(plVar5,uVar9);
  FUN_10a9b0dec(param_4);
  plVar8 = plVar5;
  func_0x00010a068bd8(plVar5,param_1);
  func_0x00010a97927c(&lStack_80,plVar7,plVar8);
  plVar7 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
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



/* Entry: 10a9b0c78; end: 10a9b0deb;  */

void FUN_10a9b0c78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a9b0dec(param_5);
  plVar7 = param_2;
  func_0x00010a068bd8(param_2,param_4);
  func_0x00010a97927c(&lStack_70,plVar6,plVar7);
  plVar6 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
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



/* Entry: 10a9b0dec; end: 10a9b0e0f;  */

void FUN_10a9b0dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar7 = (long *)0x1;
  uVar14 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10a9b0bec(plVar7,uVar14);
  FUN_10a9b116c(param_4);
  FUN_10a3ab74c(&plStack_90,plVar7,param_1);
  FUN_10a066b34(&lStack_a0,plVar7,param_1 + 0x10);
  if (plStack_90 == (long *)0x0) {
    puVar13 = &UNK_10f6866ad;
  }
  else if (lStack_a0 == 0) {
    puVar13 = &UNK_10f6866f8;
  }
  else {
    lVar10 = plVar9[3];
    plVar11 = (long *)(lVar10 + 0x40);
    if (*(short *)(lVar10 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar10 + 0x48) - *plVar11 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      func_0x00010a97784c(plVar11,&plStack_90,&lStack_a0);
      ppuVar18 = (undefined **)plVar9[3];
      plVar9 = (long *)plVar9[4];
      plVar12 = (long *)0x48;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_DAT_110c34ca8;
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
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_80 = ppuVar18;
      plStack_78 = plVar9;
      FUN_10a9b1d80(plVar12 + 3,ppuVar18,plVar9,plVar11);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_78;
      plVar12[3] = (long)&PTR_DAT_110c33698;
      if (plStack_78 != (long *)0x0) {
        plVar11 = plStack_78 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      if (plStack_88 != (long *)0x0) {
        plVar9 = plStack_88 + 1;
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      ppuStack_80 = &PTR_DAT_110c336e0;
      func_0x000109899de4(extraout_x8,plVar7,&stack0xffffffffffffff90,&ppuStack_80,0,0);
      if (plVar12 != (long *)0x0) {
        plVar7 = plVar12 + 1;
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar7 = plVar8 + 0x4b;
      lVar10 = plVar8[0x59];
      uVar15 = lVar10 - 1;
      plVar8[0x59] = uVar15;
      if (uVar15 < 8) {
        uVar15 = plVar7[lVar10 + 2];
        if (plVar8[0x5a] == uVar15) {
          return;
        }
      }
      else {
        uVar15 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar15) {
          return;
        }
      }
      plVar9 = (long *)*plVar7;
      plVar11 = (long *)plVar8[0x4c];
      lVar10 = (long)plVar11 - (long)plVar9;
      uVar19 = lVar10 >> 4;
      if (uVar19 < uVar15) {
        uVar20 = uVar15 - uVar19;
        ppuVar18 = (undefined **)plVar8[0x4d];
        if ((ulong)((long)ppuVar18 - (long)plVar11 >> 4) < uVar20) {
          if (uVar15 >> 0x3c == 0) {
            uVar16 = (long)ppuVar18 - (long)plVar9 >> 3;
            if (uVar16 <= uVar15) {
              uVar16 = uVar15;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppuVar18 - (long)plVar9)) {
              uVar16 = 0xfffffffffffffff;
            }
            plStack_78 = plVar7;
            if (uVar16 >> 0x3c == 0) {
              lVar6 = uVar16 << 4;
              __Znwm();
              lVar2 = lVar6 + lVar10;
              _bzero(lVar2,uVar20 * 0x10);
              lVar17 = lVar2 + uVar19 * -0x10;
              _memcpy(lVar17,plVar9,lVar10);
              *plVar7 = lVar17;
              plVar8[0x4c] = lVar2 + uVar20 * 0x10;
              plVar8[0x4d] = lVar6 + uVar16 * 0x10;
              plStack_98 = plVar9;
              plStack_90 = plVar9;
              plStack_88 = plVar9;
              ppuStack_80 = ppuVar18;
              func_0x00010988c1b8(&plStack_98);
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
        _bzero(plVar11,uVar20 * 0x10);
        plVar8[0x4c] = (long)(plVar11 + uVar20 * 2);
      }
      else if (uVar15 < uVar19) {
        while (plVar11 != plVar9 + uVar15 * 2) {
          plVar11 = plVar11 + -2;
          func_0x00010988c204(plVar11);
        }
        plVar8[0x4c] = (long)(plVar9 + uVar15 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar15;
      return;
    }
    puVar13 = &UNK_10f686747;
  }
  FUN_10a00946c(puVar13);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b1114);
  (*pcVar5)();
}



/* Entry: 10a9b0e10; end: 10a9b116b;  */

void FUN_10a9b0e10(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
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
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a9b116c(param_5);
  FUN_10a3ab74c(&plStack_80,param_2,param_4);
  FUN_10a066b34(&lStack_90,param_2,param_4 + 0x10);
  if (plStack_80 == (long *)0x0) {
    puVar12 = &UNK_10f6866ad;
  }
  else if (lStack_90 == 0) {
    puVar12 = &UNK_10f6866f8;
  }
  else {
    lVar9 = plVar8[3];
    plVar10 = (long *)(lVar9 + 0x40);
    if (*(short *)(lVar9 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar9 + 0x48) - *plVar10 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      func_0x00010a97784c(plVar10,&plStack_80,&lStack_90);
      ppuVar16 = (undefined **)plVar8[3];
      plVar8 = (long *)plVar8[4];
      plVar11 = (long *)0x48;
      __Znwm();
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_DAT_110c34ca8;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
      }
      ppuStack_70 = ppuVar16;
      plStack_68 = plVar8;
      FUN_10a9b1d80(plVar11 + 3,ppuVar16,plVar8,plVar10);
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 1;
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_68;
      plVar11[3] = (long)&PTR_DAT_110c33698;
      if (plStack_68 != (long *)0x0) {
        plVar10 = plStack_68 + 1;
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_88 != (long *)0x0) {
        plVar8 = plStack_88 + 1;
        do {
          lVar9 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      if (plStack_78 != (long *)0x0) {
        plVar8 = plStack_78 + 1;
        do {
          lVar9 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      ppuStack_70 = &PTR_DAT_110c336e0;
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffa0,&ppuStack_70,0,0);
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar9 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar8 = plVar7 + 0x4b;
      lVar9 = plVar7[0x59];
      uVar13 = lVar9 - 1;
      plVar7[0x59] = uVar13;
      if (uVar13 < 8) {
        uVar13 = plVar8[lVar9 + 2];
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
      plVar10 = (long *)*plVar8;
      plVar11 = (long *)plVar7[0x4c];
      lVar9 = (long)plVar11 - (long)plVar10;
      uVar17 = lVar9 >> 4;
      if (uVar17 < uVar13) {
        uVar18 = uVar13 - uVar17;
        ppuVar16 = (undefined **)plVar7[0x4d];
        if ((ulong)((long)ppuVar16 - (long)plVar11 >> 4) < uVar18) {
          if (uVar13 >> 0x3c == 0) {
            uVar14 = (long)ppuVar16 - (long)plVar10 >> 3;
            if (uVar14 <= uVar13) {
              uVar14 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)plVar10)) {
              uVar14 = 0xfffffffffffffff;
            }
            plStack_68 = plVar8;
            if (uVar14 >> 0x3c == 0) {
              lVar6 = uVar14 << 4;
              __Znwm();
              lVar2 = lVar6 + lVar9;
              _bzero(lVar2,uVar18 * 0x10);
              lVar15 = lVar2 + uVar17 * -0x10;
              _memcpy(lVar15,plVar10,lVar9);
              *plVar8 = lVar15;
              plVar7[0x4c] = lVar2 + uVar18 * 0x10;
              plVar7[0x4d] = lVar6 + uVar14 * 0x10;
              plStack_88 = plVar10;
              plStack_80 = plVar10;
              plStack_78 = plVar10;
              ppuStack_70 = ppuVar16;
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
        _bzero(plVar11,uVar18 * 0x10);
        plVar7[0x4c] = (long)(plVar11 + uVar18 * 2);
      }
      else if (uVar13 < uVar17) {
        while (plVar11 != plVar10 + uVar13 * 2) {
          plVar11 = plVar11 + -2;
          func_0x00010988c204(plVar11);
        }
        plVar7[0x4c] = (long)(plVar10 + uVar13 * 2);
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar13;
      return;
    }
    puVar12 = &UNK_10f686747;
  }
  FUN_10a00946c(puVar12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b1114);
  (*pcVar5)();
}



/* Entry: 10a9b116c; end: 10a9b118f;  */

void FUN_10a9b116c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar8 = 0;
  FUN_10a052ee0(2,0,param_1);
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
  FUN_10a9b0bec(plVar5,uVar8);
  FUN_10a9b1350(param_4);
  FUN_10a066b34(&stack0xffffffffffffffa0,plVar5,param_1);
  FUN_10a97941c(&lStack_80,plVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar7 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
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
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
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
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
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



/* Entry: 10a9b1190; end: 10a9b134f;  */

void FUN_10a9b1190(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a9b1350(param_5);
  FUN_10a066b34(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a97941c(&lStack_70,plVar7,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b1350; end: 10a9b1373;  */

void FUN_10a9b1350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar8 = 0;
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
  plVar7 = plVar5;
  FUN_10a9b0bec(plVar5,uVar8);
  FUN_10a9b150c(param_4);
  FUN_10a9b1530(&stack0xffffffffffffffa0,plVar5,param_1);
  FUN_10a9795c8(&lStack_80,plVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar7 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
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
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
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
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
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



/* Entry: 10a9b1374; end: 10a9b150b;  */

void FUN_10a9b1374(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a9b150c(param_5);
  FUN_10a9b1530(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a9795c8(&lStack_70,plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a9b150c; end: 10a9b152f;  */

void FUN_10a9b150c(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 == 1) {
    *plVar4 = 0;
    plVar4[1] = 0;
    return;
  }
  func_0x000109898688(lVar5,param_1);
  if (lVar5 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_40);
    plVar6 = &lStack_50;
    if ((lStack_40 != 0) &&
       (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c07c30,0x10), plVar6 = &lStack_50,
       lStack_40 != 0)) {
      plStack_48 = plStack_38;
      plVar6 = &lStack_40;
      lStack_50 = lStack_40;
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
    plVar6 = plStack_48;
    if (lStack_50 != 0) {
      *plVar4 = lStack_50;
      plVar4[1] = (long)plStack_48;
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar4 = plStack_48 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 != 0) {
        return;
      }
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b1668);
  (*pcVar3)();
}



/* Entry: 10a9b1530; end: 10a9b167b;  */

void FUN_10a9b1530(long *param_1,long param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
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
    plVar5 = &lStack_40;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c07c30,0x10), plVar5 = &lStack_40,
       lStack_30 != 0)) {
      plStack_38 = plStack_28;
      plVar5 = &lStack_30;
      lStack_40 = lStack_30;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    plVar5 = plStack_38;
    if (lStack_40 != 0) {
      *param_1 = lStack_40;
      param_1[1] = (long)plStack_38;
      if (plStack_38 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b1668);
  (*pcVar4)();
}



/* Entry: 10a9b167c; end: 10a9b17ef;  */

void FUN_10a9b167c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a271768(param_5);
  plVar7 = param_2;
  func_0x00010a27178c(param_2,param_4);
  FUN_10a979834(&lStack_70,plVar6,plVar7);
  plVar6 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
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



/* Entry: 10a9b17f0; end: 10a9b1853;  */

ulong FUN_10a9b17f0(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b1854);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a9b1854,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a9b1854; end: 10a9b1957;  */

void FUN_10a9b1854(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a979ba0(&stack0xffffffffffffffb0,plVar6);
  FUN_10a9b1958(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b1958; end: 10a9b19e7;  */

void FUN_10a9b1958(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  ppuStack_38 = &PTR_DAT_110c33578;
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



/* Entry: 10a9b19e8; end: 10a9b1b4b;  */

void FUN_10a9b19e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa8;
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
  FUN_10a9b0bec(param_2,param_3);
  FUN_10a1fc5e8(param_5);
  FUN_10a1fc60c(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a979ce4(&stack0xffffffffffffffa0,plVar6,&stack0xffffffffffffffb0);
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
  FUN_10a9b1958(param_1,param_2,&stack0xffffffffffffffa0);
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



/* Entry: 10a9b1b4c; end: 10a9b1cbf;  */

void FUN_10a9b1b4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
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
      lVar8 = *(long *)(*(long *)(*(long *)(plVar5[3] + 0xa8) + 0x100) + 0x260);
      if (lVar8 != 0) {
        plVar5 = *(long **)(lVar8 + 0x228);
        (**(code **)(*plVar5 + 0x68))();
        uVar7 = plVar5[0xd];
        plVar4 = (long *)plVar5[0xc];
        if (-1 < (char)*(byte *)((long)plVar5 + 0x77)) {
          uVar7 = (ulong)*(byte *)((long)plVar5 + 0x77);
          plVar4 = plVar5 + 0xc;
        }
        (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar7);
        *param_1 = 6;
        plVar4 = plVar3 + 0x4b;
        lVar8 = plVar3[0x59];
        uVar7 = lVar8 - 1;
        plVar3[0x59] = uVar7;
        if (uVar7 < 8) {
          uVar7 = plVar4[lVar8 + 2];
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
        lVar8 = *plVar4;
        lVar12 = plVar3[0x4c];
        lVar10 = lVar12 - lVar8;
        uVar14 = lVar10 >> 4;
        if (uVar14 < uVar7) {
          uVar15 = uVar7 - uVar14;
          lVar13 = plVar3[0x4d];
          if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
            if (uVar7 >> 0x3c == 0) {
              uVar9 = lVar13 - lVar8 >> 3;
              if (uVar9 <= uVar7) {
                uVar9 = uVar7;
              }
              if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar4;
              if (uVar9 >> 0x3c == 0) {
                lVar2 = uVar9 << 4;
                __Znwm();
                lVar12 = lVar2 + lVar10;
                _bzero(lVar12,uVar15 * 0x10);
                lVar11 = lVar12 + uVar14 * -0x10;
                _memcpy(lVar11,lVar8,lVar10);
                *plVar4 = lVar11;
                plVar3[0x4c] = lVar12 + uVar15 * 0x10;
                plVar3[0x4d] = lVar2 + uVar9 * 0x10;
                lStack_88 = lVar8;
                lStack_80 = lVar8;
                lStack_78 = lVar8;
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
        else if (uVar7 < uVar14) {
          lVar8 = lVar8 + uVar7 * 0x10;
          while (lVar12 != lVar8) {
            lVar12 = lVar12 + -0x10;
            func_0x00010988c204(lVar12);
          }
          plVar3[0x4c] = lVar8;
        }
code_r0x00010988c138:
        plVar3[0x5a] = uVar7;
        return;
      }
      FUN_10a0edfc4(&stack0xffffffffffffffb0);
      goto LAB_10a9b1ca8;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
LAB_10a9b1ca8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b1cac);
  (*pcVar1)();
}



/* Entry: 10a9b1cc0; end: 10a9b1ccf;  */

void FUN_10a9b1cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9b1cd0; end: 10a9b1cef;  */

void FUN_10a9b1cd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34c08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1cf0; end: 10a9b1d0f;  */

void FUN_10a9b1cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1d10; end: 10a9b1d2f;  */

void FUN_10a9b1d10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34c58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1d30; end: 10a9b1d4f;  */

void FUN_10a9b1d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1d50; end: 10a9b1d6f;  */

void FUN_10a9b1d50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34ca8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1d70; end: 10a9b1d7f;  */

void FUN_10a9b1d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1d80; end: 10a9b1e27;  */

undefined8 * FUN_10a9b1d80(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a9b1e28(param_1,param_2,param_3);
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  *param_1 = &PTR_DAT_110c33628;
  return param_1;
}



/* Entry: 10a9b1e28; end: 10a9b1ed3;  */

undefined8 * FUN_10a9b1e28(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_3 == (long *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[4] = param_2;
    param_1[5] = 0;
  }
  else {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_DAT_110c33ce0;
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[4] = param_2;
    param_1[5] = param_3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  *param_1 = &PTR_DAT_110c335a0;
  return param_1;
}



/* Entry: 10a9b1ed4; end: 10a9b1ee3;  */

void FUN_10a9b1ed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34cf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9b1ee4; end: 10a9b1f03;  */

void FUN_10a9b1ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34cf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1f04; end: 10a9b1f23;  */

void FUN_10a9b1f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1f24; end: 10a9b1f43;  */

void FUN_10a9b1f24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34d48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1f44; end: 10a9b1f63;  */

void FUN_10a9b1f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1f64; end: 10a9b1f83;  */

void FUN_10a9b1f64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34d98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1f84; end: 10a9b1fa3;  */

void FUN_10a9b1f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1fa4; end: 10a9b1fc3;  */

void FUN_10a9b1fa4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34de8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b1fc4; end: 10a9b1fd3;  */

void FUN_10a9b1fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b1fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b1fd4; end: 10a9b210f;  */

void FUN_10a9b1fd4(long *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c34e38;
  if (param_3 == (long *)0x0) {
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = param_4;
    puVar4[7] = param_2;
    puVar4[8] = 0;
    puVar4[3] = &PTR_DAT_110c33518;
    puVar4[9] = 0;
    puVar4[10] = 0;
  }
  else {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = &PTR_DAT_110c33c88;
    *(undefined4 *)(puVar4 + 6) = param_4;
    puVar4[7] = param_2;
    puVar4[8] = param_3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
    puVar4[3] = &PTR_DAT_110c33518;
    puVar4[9] = 0;
    puVar4[10] = 0;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  return;
}



/* Entry: 10a9b2110; end: 10a9b211f;  */

void FUN_10a9b2110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34e38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9b2120; end: 10a9b213f;  */

void FUN_10a9b2120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34e38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9b2140; end: 10a9b214f;  */

void FUN_10a9b2140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9b2148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9b2150; end: 10a9b2247;  */

void FUN_10a9b2150(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b2248(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar12 = param_2[4];
  uVar2 = (undefined4)param_2[3];
  puVar9 = (undefined8 *)(lVar12 + 0x40);
  FUN_10a97ab94(uVar2,*puVar9,*(undefined8 *)(lVar12 + 0x48));
  FUN_10a91038c(lVar12 + 0x20,uVar2);
  FUN_10a977a0c(puVar9,uVar2);
  FUN_10a977ab4(puVar9,uVar2);
  *(long *)(lVar12 + 0x60) = *(long *)(lVar12 + 0x60) + -1;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar6 = lVar12 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar12 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar12 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar8 = lVar11 - lVar12;
  uVar14 = lVar8 >> 4;
  if (uVar14 < uVar6) {
    uVar15 = uVar6 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar11 >> 4) < uVar15) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar13 - lVar12 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar12)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar8;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar12,lVar8);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
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
    _bzero(lVar11,uVar15 * 0x10);
    plVar5[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar6 < uVar14) {
    lVar12 = lVar12 + uVar6 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a9b2248; end: 10a9b22af;  */

void FUN_10a9b2248(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
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
      param_4 = 0;
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
  FUN_10a9b2484(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar6 + 3);
  lVar12 = plVar6[4];
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b23a8);
    (*pcVar3)();
  }
  cVar2 = *(char *)(*(long *)(lVar12 + 0x40) + uVar8 * 0xd0);
  *extraout_x8 = 2;
  *(bool *)(extraout_x8 + 2) = cVar2 == '\0';
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar8 = lVar12 - 1;
  plVar7[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar11 = lVar14 - lVar12;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar16 * 0x10);
          lVar13 = lVar14 + uVar10 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
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
    _bzero(lVar14,uVar16 * 0x10);
    plVar7[0x4c] = lVar14 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar14 != lVar12) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b22b0; end: 10a9b23bb;  */

void FUN_10a9b22b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  FUN_10a9b2484(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(uint *)(param_2 + 3);
  lVar11 = param_2[4];
  FUN_10a97ab94((ulong)uVar2,*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b23a8);
    (*pcVar4)();
  }
  cVar3 = *(char *)(*(long *)(lVar11 + 0x40) + uVar7 * 0xd0);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = cVar3 == '\0';
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar7 = lVar11 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar11 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar11 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar11;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar11 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar11,lVar10);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar13,uVar15 * 0x10);
    plVar6[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar11 = lVar11 + uVar7 * 0x10;
    while (lVar13 != lVar11) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b23bc; end: 10a9b2483;  */

void FUN_10a9b23bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b2248(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a97abf8(plVar4,param_2);
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



/* Entry: 10a9b2484; end: 10a9b24eb;  */

void FUN_10a9b2484(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
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
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
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
  FUN_10a9b2484(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar7 + 3);
  lVar14 = plVar7[4];
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b25dc);
    (*pcVar2)();
  }
  FUN_10a368650(extraout_x8,plVar5,*(long *)(lVar14 + 0x40) + uVar8 * 0xd0 + 0x68);
  plVar5 = plVar6 + 0x4b;
  lVar14 = plVar6[0x59];
  uVar8 = lVar14 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar14 + 2];
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
  lVar14 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar14;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar14 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar10 * -0x10;
          _memcpy(lVar12,lVar14,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar14 = lVar14 + uVar8 * 0x10;
    while (lVar13 != lVar14) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b24ec; end: 10a9b25ef;  */

void FUN_10a9b24ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  FUN_10a9b2484(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar1 = *(uint *)(plVar5 + 3);
  lVar12 = plVar5[4];
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
  uVar6 = (ulong)uVar1 & 0x3fff;
  uVar8 = (*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b25dc);
    (*pcVar2)();
  }
  FUN_10a368650(param_1,param_2,*(long *)(lVar12 + 0x40) + uVar6 * 0xd0 + 0x68);
  plVar5 = plVar4 + 0x4b;
  lVar12 = plVar4[0x59];
  uVar6 = lVar12 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar5[lVar12 + 2];
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
  lVar12 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar12;
  uVar8 = lVar9 >> 4;
  if (uVar8 < uVar6) {
    uVar14 = uVar6 - uVar8;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar13 - lVar12 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar12)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar8 * -0x10;
          _memcpy(lVar10,lVar12,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar8) {
    lVar12 = lVar12 + uVar6 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a9b25f0; end: 10a9b26b7;  */

void FUN_10a9b25f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b2248(param_2,param_3);
  FUN_10a400ba8(param_5);
  FUN_10a36c25c(param_2,param_4);
  func_0x00010a97ac70(plVar4,param_2);
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



/* Entry: 10a9b26b8; end: 10a9b27bb;  */

void FUN_10a9b26b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  FUN_10a9b2484(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar1 = *(uint *)(plVar5 + 3);
  lVar12 = plVar5[4];
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
  uVar6 = (ulong)uVar1 & 0x3fff;
  uVar8 = (*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b27a8);
    (*pcVar2)();
  }
  FUN_10a066960(param_1,param_2,*(long *)(lVar12 + 0x40) + uVar6 * 0xd0 + 0x48);
  plVar5 = plVar4 + 0x4b;
  lVar12 = plVar4[0x59];
  uVar6 = lVar12 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar5[lVar12 + 2];
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
  lVar12 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar12;
  uVar8 = lVar9 >> 4;
  if (uVar8 < uVar6) {
    uVar14 = uVar6 - uVar8;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar13 - lVar12 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar12)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar8 * -0x10;
          _memcpy(lVar10,lVar12,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar8) {
    lVar12 = lVar12 + uVar6 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a9b27bc; end: 10a9b28d7;  */

void FUN_10a9b27bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b2248(param_2,param_3);
  FUN_10a9b1350(param_5);
  FUN_10a066b34(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a97acf8(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b28d8; end: 10a9b299b;  */

void FUN_10a9b28d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b2484(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar5 = (ulong)*(uint *)(plVar4 + 3);
  FUN_10a97ad84(uVar5,plVar4[4]);
  FUN_10a2f5360(param_1,param_2,uVar5);
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



/* Entry: 10a9b299c; end: 10a9b2aaf;  */

/* WARNING: Possible PIC construction at 0x00010a9b2aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a9b2bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b2aa8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2b98) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2b08) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2b20) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2ba4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2b7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2c08) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2c78) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2ca4) */

void FUN_10a9b299c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  long lVar11;
  undefined1 *unaff_x22;
  long lVar12;
  long lVar13;
  long *unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  ulong uVar15;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a9b2484(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a97af2c(auStack_88,plVar6);
  puVar2 = auStack_88;
  FUN_10a2f562c(param_1,param_2,auStack_88);
  puVar7 = auStack_80;
  FUN_10a2f5910();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a2f5910(auStack_80);
    unaff_x30 = 0x10a9b2aa8;
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    unaff_x19 = plVar5;
    unaff_x20 = puVar7;
    unaff_x21 = param_1;
    unaff_x22 = puVar2;
    unaff_x23 = plVar6;
    unaff_x29 = puVar1;
  }
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
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
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = *plVar6;
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
        *(long **)((long)register0x00000008 + -0x68) = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar8;
          *(long *)((long)register0x00000008 + -0x70) = lVar14;
          *(long *)((long)register0x00000008 + -0x88) = lVar8;
          *(long *)((long)register0x00000008 + -0x80) = lVar8;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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



/* Entry: 10a9b2ab0; end: 10a9b2bcb;  */

/* WARNING: Possible PIC construction at 0x00010a9b2bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b2bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2c08) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2c78) */
/* WARNING: Removing unreachable block (ram,0x00010a9b2ca4) */

void FUN_10a9b2ab0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 unaff_x23;
  long lVar14;
  long *unaff_x24;
  ulong uVar15;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a9b2248(param_2,param_3);
  FUN_10a2f5a4c(param_5);
  FUN_10a2f5a70(auStack_88,param_2,param_4);
  puVar2 = auStack_88;
  func_0x00010a97af98(plVar6,auStack_88);
  puVar7 = auStack_80;
  FUN_10a2f5910();
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a2f5910(auStack_80);
    unaff_x30 = 0x10a9b2bc4;
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    unaff_x19 = plVar5;
    unaff_x20 = puVar7;
    unaff_x21 = puVar2;
    unaff_x22 = param_2;
    unaff_x23 = param_5;
    unaff_x24 = plVar6;
    unaff_x29 = puVar1;
  }
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
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
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = *plVar6;
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
        *(long **)((long)register0x00000008 + -0x68) = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar8;
          *(long *)((long)register0x00000008 + -0x70) = lVar14;
          *(long *)((long)register0x00000008 + -0x88) = lVar8;
          *(long *)((long)register0x00000008 + -0x80) = lVar8;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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



/* Entry: 10a9b2bcc; end: 10a9b2cc7;  */

undefined1  [16] FUN_10a9b2bcc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33670;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33670;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c33600;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b2cc8; end: 10a9b2d1f;  */

ulong FUN_10a9b2cc8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9b2d20,FUN_10a9b2e6c);
  }
  return param_1;
}



/* Entry: 10a9b2d20; end: 10a9b2e6b;  */

void FUN_10a9b2d20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar1 = *(uint *)(plVar6 + 3);
      lVar14 = plVar6[4];
      FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
      uVar8 = (ulong)uVar1 & 0x3fff;
      uVar10 = (*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        FUN_10a26f500(param_1,param_2,*(long *)(lVar14 + 0x40) + uVar8 * 0xd0 + 8);
        plVar5 = plVar4 + 0x4b;
        lVar14 = plVar4[0x59];
        uVar8 = lVar14 - 1;
        plVar4[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar5[lVar14 + 2];
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
        lVar14 = *plVar5;
        lVar13 = plVar4[0x4c];
        lVar11 = lVar13 - lVar14;
        uVar10 = lVar11 >> 4;
        if (uVar10 < uVar8) {
          uVar16 = uVar8 - uVar10;
          lVar15 = plVar4[0x4d];
          if ((ulong)(lVar15 - lVar13 >> 4) < uVar16) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar15 - lVar14 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar13 = lVar3 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar10 * -0x10;
                _memcpy(lVar12,lVar14,lVar11);
                *plVar5 = lVar12;
                plVar4[0x4c] = lVar13 + uVar16 * 0x10;
                plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_88 = lVar14;
                lStack_80 = lVar14;
                lStack_78 = lVar14;
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar2)();
          }
          _bzero(lVar13,uVar16 * 0x10);
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
        }
        else if (uVar8 < uVar10) {
          lVar14 = lVar14 + uVar8 * 0x10;
          while (lVar13 != lVar14) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar4[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar8;
        return;
      }
      goto LAB_10a9b2e54;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
LAB_10a9b2e54:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b2e58);
  (*pcVar2)();
}



/* Entry: 10a9b2e6c; end: 10a9b2fab;  */

void FUN_10a9b2e6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a2fb124(param_5);
      FUN_10a2eb314(&stack0xffffffffffffffb0,param_2,param_4);
      FUN_10a97b0d0(plVar5,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *param_1 = 0;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b2f84);
  (*pcVar1)();
}



/* Entry: 10a9b2fac; end: 10a9b3067;  */

void FUN_10a9b2fac(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687513,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b3068);
  (*pcVar4)();
}



/* Entry: 10a9b3068; end: 10a9b3163;  */

undefined1  [16] FUN_10a9b3068(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c336e0;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c336e0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c33670;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b3164; end: 10a9b31bb;  */

ulong FUN_10a9b3164(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9b31bc,FUN_10a9b3308);
  }
  return param_1;
}



/* Entry: 10a9b31bc; end: 10a9b3307;  */

void FUN_10a9b31bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar1 = *(uint *)(plVar6 + 3);
      lVar14 = plVar6[4];
      FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
      uVar8 = (ulong)uVar1 & 0x3fff;
      uVar10 = (*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        FUN_10a3ab53c(param_1,param_2,*(long *)(lVar14 + 0x40) + uVar8 * 0xd0 + 0x38);
        plVar5 = plVar4 + 0x4b;
        lVar14 = plVar4[0x59];
        uVar8 = lVar14 - 1;
        plVar4[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar5[lVar14 + 2];
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
        lVar14 = *plVar5;
        lVar13 = plVar4[0x4c];
        lVar11 = lVar13 - lVar14;
        uVar10 = lVar11 >> 4;
        if (uVar10 < uVar8) {
          uVar16 = uVar8 - uVar10;
          lVar15 = plVar4[0x4d];
          if ((ulong)(lVar15 - lVar13 >> 4) < uVar16) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar15 - lVar14 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar13 = lVar3 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar10 * -0x10;
                _memcpy(lVar12,lVar14,lVar11);
                *plVar5 = lVar12;
                plVar4[0x4c] = lVar13 + uVar16 * 0x10;
                plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_88 = lVar14;
                lStack_80 = lVar14;
                lStack_78 = lVar14;
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar2)();
          }
          _bzero(lVar13,uVar16 * 0x10);
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
        }
        else if (uVar8 < uVar10) {
          lVar14 = lVar14 + uVar8 * 0x10;
          while (lVar13 != lVar14) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar4[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar8;
        return;
      }
      goto LAB_10a9b32f0;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
LAB_10a9b32f0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b32f4);
  (*pcVar2)();
}



/* Entry: 10a9b3308; end: 10a9b346f;  */

void FUN_10a9b3308(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a40be38(param_5);
      FUN_10a3ab74c(&stack0xffffffffffffffb0,param_2,param_4);
      func_0x00010a97b1a8(plVar7,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffb8 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
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
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b344c);
  (*pcVar3)();
}



/* Entry: 10a9b3470; end: 10a9b352b;  */

void FUN_10a9b3470(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687531,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b352c);
  (*pcVar4)();
}



/* Entry: 10a9b352c; end: 10a9b3627;  */

undefined1  [16] FUN_10a9b352c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33750;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33750;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c33670;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b3628; end: 10a9b36e3;  */

void FUN_10a9b3628(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687548,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b36e4);
  (*pcVar4)();
}



/* Entry: 10a9b36e4; end: 10a9b37df;  */

undefined1  [16] FUN_10a9b36e4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c337c0;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c337c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c33600;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b37e0; end: 10a9b3837;  */

ulong FUN_10a9b37e0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9b3838,FUN_10a9b3a0c);
  }
  return param_1;
}



/* Entry: 10a9b3838; end: 10a9b3a0b;  */

void FUN_10a9b3838(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
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
  plVar8 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar8 == (long *)0x0) {
    puVar9 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a052c2c(param_2,plVar8);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar1 = *(uint *)(plVar7 + 3);
      lVar16 = plVar7[4];
      FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x48));
      uVar10 = (ulong)uVar1 & 0x3fff;
      uVar12 = (*(long *)(lVar16 + 0x48) - *(long *)(lVar16 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (uVar10 <= uVar12 && uVar12 - uVar10 != 0) {
        plVar8 = *(long **)(*(long *)(lVar16 + 0x40) + uVar10 * 0xd0 + 0x20);
        if (plVar8 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
        }
        FUN_10a05348c(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            lVar16 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plVar6 + 0x4b;
        lVar16 = plVar6[0x59];
        uVar10 = lVar16 - 1;
        plVar6[0x59] = uVar10;
        if (uVar10 < 8) {
          uVar10 = plVar8[lVar16 + 2];
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
        lVar16 = *plVar8;
        lVar15 = plVar6[0x4c];
        lVar13 = lVar15 - lVar16;
        uVar12 = lVar13 >> 4;
        if (uVar12 < uVar10) {
          uVar18 = uVar10 - uVar12;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar15 >> 4) < uVar18) {
            if (uVar10 >> 0x3c == 0) {
              uVar11 = lVar17 - lVar16 >> 3;
              if (uVar11 <= uVar10) {
                uVar11 = uVar10;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar16)) {
                uVar11 = 0xfffffffffffffff;
              }
              plStack_68 = plVar8;
              if (uVar11 >> 0x3c == 0) {
                lVar5 = uVar11 << 4;
                __Znwm();
                lVar15 = lVar5 + lVar13;
                _bzero(lVar15,uVar18 * 0x10);
                lVar14 = lVar15 + uVar12 * -0x10;
                _memcpy(lVar14,lVar16,lVar13);
                *plVar8 = lVar14;
                plVar6[0x4c] = lVar15 + uVar18 * 0x10;
                plVar6[0x4d] = lVar5 + uVar11 * 0x10;
                lStack_88 = lVar16;
                lStack_80 = lVar16;
                lStack_78 = lVar16;
                lStack_70 = lVar17;
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
        else if (uVar10 < uVar12) {
          lVar16 = lVar16 + uVar10 * 0x10;
          while (lVar15 != lVar16) {
            lVar15 = lVar15 + -0x10;
            func_0x00010988c204(lVar15);
          }
          plVar6[0x4c] = lVar16;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar10;
        return;
      }
      goto LAB_10a9b39f4;
    }
    puVar9 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar9);
LAB_10a9b39f4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b39f8);
  (*pcVar4)();
}



/* Entry: 10a9b3a0c; end: 10a9b3b4b;  */

void FUN_10a9b3a0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a9b150c(param_5);
      FUN_10a9b1530(&stack0xffffffffffffffb0,param_2,param_4);
      func_0x00010a97b234(plVar5,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *param_1 = 0;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b3b24);
  (*pcVar1)();
}



/* Entry: 10a9b3b4c; end: 10a9b3c07;  */

void FUN_10a9b3b4c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687563,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b3c08);
  (*pcVar4)();
}


