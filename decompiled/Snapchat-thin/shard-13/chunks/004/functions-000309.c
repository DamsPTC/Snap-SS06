/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a649c38; end: 10a649d0b;  */

void FUN_10a649c38(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6486bc(param_2,param_3);
  FUN_10a1fba14(param_5);
  func_0x00010a1fba38(param_2,param_4);
  (**(code **)(*plVar4 + 0x1a0))
            ((int)*param_2,*(undefined4 *)((long)param_2 + 4),(int)param_2[1],
             *(undefined4 *)((long)param_2 + 0xc),plVar4);
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



/* Entry: 10a649d0c; end: 10a649e67;  */

void FUN_10a649d0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
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
  FUN_10a648aac(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a60a1b0(&stack0xffffffffffffffb0,param_2);
  if (in_stack_ffffffffffffffb0 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669a55,0xc5,&UNK_10f669a91);
    }
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(in_stack_ffffffffffffffb0 + 0x2c8) >> 1 & 1;
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar10;
  plVar1 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar7 = lVar9 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar9 + 2];
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
  lVar9 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar9;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar9,lVar11);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar13 != lVar9) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a649e68; end: 10a649f1f;  */

void FUN_10a649e68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a6495bc(param_1,param_2,FUN_10a60b0e0,0,param_3,param_4,param_5);
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



/* Entry: 10a649f20; end: 10a64a083;  */

void FUN_10a649f20(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
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
  double dVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a648aac(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a60a1b0(&stack0xffffffffffffffa0,param_2);
  if (in_stack_ffffffffffffffa0 == 0) {
    dVar16 = 0.0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669b05,0xd5,&UNK_10f669b44);
    }
  }
  else {
    dVar16 = (double)*(float *)(in_stack_ffffffffffffffa0 + 0x2d0);
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar16;
  plVar1 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar7 = lVar9 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar9 + 2];
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
  lVar9 = *plVar1;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar1 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a64a084; end: 10a64a207;  */

void FUN_10a64a084(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
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
  float fVar16;
  float fVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a6486bc(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar17 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar17 = 0.0;
    }
    FUN_10a60a1b0(&stack0xffffffffffffffa0,param_2);
    if (in_stack_ffffffffffffffa0 != 0) {
      fVar16 = 0.0;
      if (0.0 <= fVar17) {
        fVar16 = fVar17;
      }
      fVar17 = 1.0;
      if (fVar16 <= 1.0) {
        fVar17 = fVar16;
      }
      *(float *)(in_stack_ffffffffffffffa0 + 0x2d0) = fVar17;
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar1 = in_stack_ffffffffffffffa8 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      *param_1 = 0;
      plVar1 = plVar6 + 0x4b;
      lVar9 = plVar6[0x59];
      uVar7 = lVar9 - 1;
      plVar6[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar1[lVar9 + 2];
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
      lVar9 = *plVar1;
      lVar12 = plVar6[0x4c];
      lVar10 = lVar12 - lVar9;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar7) {
        uVar15 = uVar7 - uVar14;
        lVar13 = plVar6[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar13 - lVar9 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar8 >> 0x3c == 0) {
              lVar5 = uVar8 << 4;
              __Znwm();
              lVar12 = lVar5 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar9,lVar10);
              *plVar1 = lVar11;
              plVar6[0x4c] = lVar12 + uVar15 * 0x10;
              plVar6[0x4d] = lVar5 + uVar8 * 0x10;
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar4)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar6[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar7 < uVar14) {
        lVar9 = lVar9 + uVar7 * 0x10;
        while (lVar12 != lVar9) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar6[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar7;
      return;
    }
    FUN_10a00946c(&UNK_10f669b79);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a64a1e4);
  (*pcVar4)();
}



/* Entry: 10a64a208; end: 10a64a2b7;  */

void FUN_10a64a208(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a649298(param_1,param_2,FUN_10a60b19c,0,param_3,param_5);
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



/* Entry: 10a64a2b8; end: 10a64a36f;  */

void FUN_10a64a2b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a649320(param_1,param_2,FUN_10a60b2a8,0,param_3,param_4,param_5);
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



/* Entry: 10a64a370; end: 10a64a3c7;  */

long FUN_10a64a370(long param_1)

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



/* Entry: 10a64a3c8; end: 10a64a3cb;  */

void FUN_10a64a3c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a64a3cc; end: 10a64a3df;  */

void FUN_10a64a3cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64a3e0; end: 10a64a3fb;  */

void FUN_10a64a3e0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a64a3fc; end: 10a64a437;  */

long FUN_10a64a3fc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a64a438; end: 10a64a43b;  */

void FUN_10a64a438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64a43c; end: 10a64a493;  */

long FUN_10a64a43c(long param_1)

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



/* Entry: 10a64a494; end: 10a64a4e7;  */

undefined8 * FUN_10a64a494(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a64a4e8(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a64a4e8; end: 10a64a5e7;  */

void FUN_10a64a4e8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x00010a64a568(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a64a5e8; end: 10a64a78f;  */

long * FUN_10a64a5e8(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1 + 1;
  if (plVar3 != param_2) {
    uVar4 = *(ulong *)(param_5 + 0x18);
    if ((ulong)param_2[7] <= uVar4) {
      if (uVar4 <= (ulong)param_2[7]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar2 = (long *)plVar7[2];
          bVar1 = (long *)*plVar2 != plVar7;
          plVar7 = plVar2;
        } while (bVar1);
      }
      else {
        do {
          plVar2 = plVar5;
          plVar5 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if ((plVar2 == plVar3) || (uVar4 < (ulong)plVar2[7])) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar2;
          return plVar2;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar3;
      while (plVar5 = plVar3, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (ulong)plVar5[7] <= uVar4) {
          if (uVar4 <= (ulong)plVar5[7]) goto LAB_10a64a788;
          plVar3 = plVar5 + 1;
          plVar7 = (long *)*plVar3;
          if ((long *)*plVar3 == (long *)0x0) goto LAB_10a64a788;
        }
        plVar3 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a64a788:
      *param_3 = (long)plVar5;
      return plVar3;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar2 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar1 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar2;
        plVar2 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar4 = *(ulong *)(param_5 + 0x18);
    if (uVar4 <= (ulong)plVar7[7]) {
      plVar7 = (long *)*plVar3;
      while (plVar5 = plVar3, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (ulong)plVar5[7] <= uVar4) {
          if (uVar4 <= (ulong)plVar5[7]) goto LAB_10a64a6f0;
          plVar3 = plVar5 + 1;
          plVar7 = (long *)*plVar3;
          if ((long *)*plVar3 == (long *)0x0) goto LAB_10a64a6f0;
        }
        plVar3 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a64a6f0:
      *param_3 = (long)plVar5;
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 10a64a790; end: 10a64a7f7;  */

void FUN_10a64a790(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a64a7f8(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a64a7f8; end: 10a64a86f;  */

undefined8 * FUN_10a64a7f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  lVar4 = param_2[5];
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
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
  return param_1;
}



/* Entry: 10a64a870; end: 10a64a87f;  */

void FUN_10a64a870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c01d10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a64a880; end: 10a64a89f;  */

void FUN_10a64a880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c01d10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64a8a0; end: 10a64a8e7;  */

void FUN_10a64a8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a64a8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a64a8e8; end: 10a64aa5f;  */

void FUN_10a64a8e8(ulong param_1)

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
  puStack_a8 = &UNK_10f66a646;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
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
  puStack_a8 = &UNK_10f66a65a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a64aa60(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f65bab4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a64aa60();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6479fc;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a64aa60();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a64aa60; end: 10a64ab07;  */

undefined8 * FUN_10a64aa60(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a64ab08);
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



/* Entry: 10a64ab08; end: 10a64ad3f;  */

undefined *** FUN_10a64ab08(undefined ***param_1,undefined **param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  char cStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  *param_1 = &PTR_FUN_110c021b8;
  param_1[4] = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  pppuVar7 = param_1 + 5;
  param_1[6] = (undefined **)0x0;
  *pppuVar7 = (undefined **)0x0;
  param_1[7] = (undefined **)0xffffffffffffffff;
  param_1[8] = (undefined **)0x0;
  *(undefined4 *)((long)param_1 + 0x47) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3a83126f3a83126f;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = param_2;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[0xf] = &PTR_DAT_110950c70;
  param_1[0xe] = (undefined **)FUN_10a66cf9c;
  *(undefined1 *)(param_1 + 0x16) = param_3;
  *(undefined1 *)((long)param_1 + 0xb1) = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  FUN_10a3dd9ac(&uStack_a0,param_2);
  FUN_10a772568(uStack_a0,param_1,*(undefined1 *)(param_1 + 0x16));
  FUN_10a66def4(&pcStack_88,&uStack_b0);
  FUN_10a64ad40(pppuVar7,&pcStack_88);
  if (ppuStack_80 != (undefined **)0x0) {
    ppuVar6 = ppuStack_80 + 1;
    do {
      puVar5 = *ppuVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *ppuVar6 = puVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_80);
    }
  }
  ppuStack_70 = param_1[6];
  ppuStack_78 = param_1[5];
  if (param_1[6] != (undefined **)0x0) {
    ppuVar6 = param_1[6] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_88 = FUN_10a66e1ac;
  ppuStack_80 = &PTR_DAT_110c06f18;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pppuVar4 = param_1;
  FUN_10a772790(uStack_a0,param_1,&pcStack_88);
  pppuVar3 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (cStack_90 == '\x01') {
    pppuVar3 = pppuStack_98;
    __ZNSt3__15mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x00010a3bd1cc(&uStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppuStack_98);
  }
  (*(code *)*param_1[0xf])(param_1 + 0xf);
  func_0x00010a3bd1cc(pppuVar7);
  func_0x00010a3bef9c(param_1 + 3);
  if (param_1[2] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
  ppuVar9 = pppuVar4[1];
  ppuVar8 = *pppuVar4;
  *pppuVar4 = (undefined **)0x0;
  pppuVar4[1] = (undefined **)0x0;
  ppuVar6 = pppuVar3[1];
  pppuVar3[1] = ppuVar9;
  *pppuVar3 = ppuVar8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar8 = ppuVar6 + 1;
    do {
      puVar5 = *ppuVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = puVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return pppuVar3;
}



/* Entry: 10a64ad40; end: 10a64adf7;  */

undefined8 * FUN_10a64ad40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a64adf8; end: 10a64adfb;  */

undefined8 * FUN_10a64adf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c021b8;
  (**(code **)param_1[0xf])();
  func_0x00010a3bd1cc(param_1 + 5);
  func_0x00010a3bef9c(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a64adfc; end: 10a64ae0f;  */

void FUN_10a64adfc(void)

{
  func_0x00010a64ada4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64ae10; end: 10a64aeab;  */

void FUN_10a64ae10(long param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_1 + 0x60));
    FUN_10a771cdc(uStack_48,param_1);
    FUN_10a77242c(uStack_48,param_1);
    func_0x00010a3a4b08((long *)(param_1 + 0x18));
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
  }
  return;
}



/* Entry: 10a64aeac; end: 10a64b06b;  */

undefined ** FUN_10a64aeac(undefined4 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined ***unaff_x20;
  code **unaff_x21;
  long *unaff_x22;
  long lVar8;
  long lVar9;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  char cStack_d8;
  long *plStack_d0;
  code **ppcStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  char cStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    pppuVar4 = (undefined ***)&UNK_10f66a65f;
    FUN_10a00946c();
  }
  else {
    unaff_x22 = param_2 + 0xf;
    param_2[0xe] = *param_4;
    (**(code **)*unaff_x22)(unaff_x22);
    (**(code **)(param_4[1] + 0x10))(unaff_x22,param_4 + 1);
    lStack_98 = param_2[2];
    lStack_a0 = param_2[1];
    if (param_2[2] != 0) {
      plVar6 = (long *)(param_2[2] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3dd9ac(&uStack_90,param_2[0xc]);
    unaff_x21 = &pcStack_78;
    pcStack_78 = FUN_10a66e21c;
    ppuStack_70 = &PTR_FUN_110c06f38;
    lStack_60 = lStack_98;
    lStack_68 = lStack_a0;
    plVar6 = param_2;
    FUN_10a771b30(uStack_90,param_2,*param_3 + 0x30,&pcStack_78);
    pppuVar4 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
    if (cStack_80 == '\x01') {
      pppuVar4 = pppuStack_88;
      __ZNSt3__15mutex6unlockEv();
    }
    lVar9 = param_3[1];
    lVar8 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = (undefined ***)param_2[4];
    param_2[4] = lVar9;
    param_2[3] = lVar8;
    if (unaff_x20 != (undefined ***)0x0) {
      pppuVar5 = unaff_x20 + 1;
      do {
        ppuVar7 = *pppuVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*unaff_x20)[2])(unaff_x20);
        pppuVar4 = unaff_x20;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_1 = (undefined4)lVar8;
    param_3 = plVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return (undefined **)0x0;
    }
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  if (cStack_80 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppuStack_88);
  }
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a64b06c;
  plStack_d0 = unaff_x22;
  ppcStack_c8 = unaff_x21;
  pppuStack_c0 = unaff_x20;
  pppuStack_b8 = pppuVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10a3dd9ac(&ppuStack_e8,pppuVar5[0xc]);
  FUN_10a771bcc(ppuStack_e8,pppuVar5,param_3);
  ppuVar7 = ppuStack_e8;
  FUN_10a772268(ppuStack_e8,pppuVar5);
  if (*(char *)(pppuVar5 + 9) == '\x01') {
    *(undefined1 *)((long)pppuVar5 + 0x49) = 1;
    *(undefined4 *)((long)pppuVar5 + 0x54) = param_1;
    *(undefined4 *)(pppuVar5 + 0xb) = param_1;
    *(undefined4 *)((long)pppuVar5 + 0x5c) = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar5[8] = ppuVar7;
  }
  FUN_10a7722fc(ppuStack_e8,pppuVar5);
  if (cStack_d8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuStack_e0);
    return ppuStack_e0;
  }
  return ppuStack_e8;
}



/* Entry: 10a64b06c; end: 10a64b13f;  */

void FUN_10a64b06c(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10a771bcc(uStack_48,param_2,param_3);
  uVar1 = uStack_48;
  FUN_10a772268(uStack_48,param_2);
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_2 + 0x49) = 1;
    *(undefined4 *)(param_2 + 0x54) = param_1;
    *(undefined4 *)(param_2 + 0x58) = param_1;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(param_2 + 0x40) = uVar1;
  }
  FUN_10a7722fc(uStack_48,param_2);
  if (cStack_38 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_40);
    return;
  }
  return;
}



/* Entry: 10a64b140; end: 10a64b1ef;  */

void FUN_10a64b140(undefined4 param_1,long param_2,int param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_2 + 0x60));
  if (param_3 == 0) {
    FUN_10a771cdc(uStack_38,param_2);
  }
  else {
    FUN_10a772268(uStack_38,param_2);
    *(undefined4 *)(param_2 + 0x68) = param_1;
    *(undefined4 *)(param_2 + 0x54) = param_1;
    *(undefined4 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 0x5c) = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(param_2 + 0x40) = uStack_38;
    *(undefined2 *)(param_2 + 0x49) = 0x100;
  }
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a64b1f0; end: 10a64b26b;  */

void FUN_10a64b1f0(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a771c58(uStack_38,param_1);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a64b26c; end: 10a64b2e7;  */

void FUN_10a64b26c(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a771e08(uStack_38,param_1);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a64b2e8; end: 10a64b38b;  */

void FUN_10a64b2e8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  if (((*(byte *)(param_2 + 0x4a) & 1) == 0) && ((*(byte *)(param_2 + 0x49) & 1) == 0)) {
    uVar1 = NEON_fminnm((int)param_1,0x3f800000);
    *(undefined4 *)(param_2 + 0x68) = uVar1;
    FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
    FUN_10a7722fc(param_1,uStack_48,param_2);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
  }
  return;
}



/* Entry: 10a64b38c; end: 10a64b427;  */

ulong FUN_10a64b38c(ulong param_1,long param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  if (((*(byte *)(param_2 + 0x4a) & 1) == 0) && (*(char *)(param_2 + 0x49) != '\x01')) {
    FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
    FUN_10a772268(uStack_48,param_2);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
  }
  else {
    param_1 = (ulong)*(uint *)(param_2 + 0x68);
  }
  return param_1;
}



/* Entry: 10a64b428; end: 10a64b4b7;  */

void FUN_10a64b428(undefined8 param_1,long param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10a772140(param_1,uStack_48,param_2);
  if (cStack_38 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_40);
    return;
  }
  return;
}



/* Entry: 10a64b4b8; end: 10a64b537;  */

undefined8 FUN_10a64b4b8(undefined8 param_1,long param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10a7720ac(uStack_48,param_2);
  if (cStack_38 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_40);
  }
  return param_1;
}



/* Entry: 10a64b538; end: 10a64b5b7;  */

undefined8 FUN_10a64b538(undefined8 param_1,long param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10a7721d4(uStack_48,param_2);
  if (cStack_38 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_40);
  }
  return param_1;
}



/* Entry: 10a64b5b8; end: 10a64b62f;  */

undefined8 FUN_10a64b5b8(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a772020(uStack_38,param_1);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
  return uStack_38;
}



/* Entry: 10a64b630; end: 10a64b6a7;  */

undefined8 FUN_10a64b630(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a771e8c(uStack_38,param_1);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
  return uStack_38;
}



/* Entry: 10a64b6a8; end: 10a64b723;  */

void FUN_10a64b6a8(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a771f18(uStack_38,param_1);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a64b724; end: 10a64b79f;  */

void FUN_10a64b724(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x60));
  FUN_10a771f9c(uStack_38,param_1);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a64b7a0; end: 10a64b7eb;  */

void FUN_10a64b7a0(float param_1,long param_2)

{
  if (0.001 < param_1) {
    *(float *)(param_2 + 0x4c) = param_1;
  }
  *(bool *)(param_2 + 0x48) = 0.001 < param_1;
  return;
}



/* Entry: 10a64b7ec; end: 10a64b883;  */

void FUN_10a64b7ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_10a3dd9ac(&uStack_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10a772390(param_1,uStack_48,param_2,param_3);
  if (cStack_38 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_40);
    return;
  }
  return;
}



/* Entry: 10a64b884; end: 10a64b8fb;  */

undefined * FUN_10a64b884(undefined *param_1,undefined1 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x5880) = param_2;
    return param_1;
  }
  puVar1 = &UNK_10f66a68e;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    return (undefined *)(ulong)*(byte *)(*(long *)(puVar1 + 0x28) + 0x5880);
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(puVar1 + 0x28) + 0x5881) = param_2;
    return puVar1;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  uVar2 = 0;
  if (*(long *)(puVar1 + 0x28) != 0) {
    uVar2 = (uint)*(byte *)(*(long *)(puVar1 + 0x28) + 0x5881);
  }
  return (undefined *)(ulong)(uVar2 & 1);
}



/* Entry: 10a64b8fc; end: 10a64b913;  */

byte FUN_10a64b8fc(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x5881);
  }
  return bVar1 & 1;
}



/* Entry: 10a64b914; end: 10a64b937;  */

int * FUN_10a64b914(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 == (int *)0x0) {
    puVar3 = &UNK_10f66a6c8;
    FUN_10a00946c();
    if (*(uint **)(puVar3 + 0x28) == (uint *)0x0) {
      return (int *)0x0;
    }
    return (int *)(ulong)**(uint **)(puVar3 + 0x28);
  }
  *piVar2 = param_2;
  fVar7 = (float)piVar2[3];
  fVar8 = (float)piVar2[4];
  fVar6 = (float)piVar2[1];
  if ((float)piVar2[1] <= fVar7) {
    fVar6 = fVar7;
  }
  piVar2[1] = (int)fVar6;
  piVar4 = piVar2;
  if (fVar8 <= fVar6) {
    fVar5 = (float)piVar2[5];
  }
  else {
    iVar1 = *piVar2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar5 = ((fVar6 - fVar7) * ((float)piVar2[5] + -1.0)) / (fVar8 - fVar7);
        fVar6 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return piVar2;
        }
        fVar8 = (fVar8 * (1.0 - (float)piVar2[5])) / (fVar8 - fVar7);
        fVar5 = 1.0 - fVar8;
        fVar6 = (fVar7 * fVar8) / fVar6;
      }
      fVar5 = fVar5 + fVar6;
    }
    else if (iVar1 == 2) {
      fVar5 = (float)piVar2[5];
      _powf(fVar5,(fVar6 - fVar7) / (fVar8 - fVar7));
    }
    else {
      if (iVar1 != 3) {
        return piVar2;
      }
      fVar5 = (float)piVar2[5] + -1.0 + (float)piVar2[5] + -1.0;
      ___exp10f();
      fVar6 = ((fVar6 - fVar7) * (fVar5 + -1.0)) / (fVar8 - fVar7) + 1.0;
      _log10f();
      fVar5 = fVar6 * 0.5 + 1.0;
    }
  }
  piVar2[2] = (int)fVar5;
  return piVar4;
}



/* Entry: 10a64b938; end: 10a64b94f;  */

undefined4 FUN_10a64b938(long param_1)

{
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x28);
  }
  return 0;
}



/* Entry: 10a64b950; end: 10a64b97b;  */

ulong FUN_10a64b950(float param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == (int *)0x0) {
    puVar3 = &UNK_10f66a6c8;
    FUN_10a00946c();
    if (*(long *)(puVar3 + 0x28) != 0) {
      return (ulong)*(uint *)(*(long *)(puVar3 + 0x28) + 0xc);
    }
    return 0;
  }
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  piVar2[3] = (int)param_1;
  fVar4 = (float)piVar2[1];
  uVar5 = 0;
  fVar7 = (float)piVar2[3];
  fVar8 = (float)piVar2[4];
  fVar6 = fVar4;
  if (fVar4 <= fVar7) {
    fVar6 = fVar7;
  }
  piVar2[1] = (int)fVar6;
  if (fVar8 <= fVar6) {
    fVar4 = (float)piVar2[5];
    uVar5 = 0;
  }
  else {
    iVar1 = *piVar2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar6 - fVar7) * ((float)piVar2[5] + -1.0)) / (fVar8 - fVar7);
        fVar6 = 1.0;
      }
      else {
        if (iVar1 != 1) goto LAB_10ad1e668;
        fVar8 = (fVar8 * (1.0 - (float)piVar2[5])) / (fVar8 - fVar7);
        fVar4 = 1.0 - fVar8;
        fVar6 = (fVar7 * fVar8) / fVar6;
      }
      fVar4 = fVar4 + fVar6;
      uVar5 = 0;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar2[5];
      uVar5 = 0;
      _powf(fVar4,(fVar6 - fVar7) / (fVar8 - fVar7));
    }
    else {
      if (iVar1 != 3) goto LAB_10ad1e668;
      fVar4 = (float)piVar2[5] + -1.0 + (float)piVar2[5] + -1.0;
      ___exp10f();
      fVar6 = ((fVar6 - fVar7) * (fVar4 + -1.0)) / (fVar8 - fVar7) + 1.0;
      _log10f();
      fVar4 = fVar6 * 0.5 + 1.0;
      uVar5 = 0;
    }
  }
  piVar2[2] = (int)fVar4;
LAB_10ad1e668:
  return CONCAT44(uVar5,fVar4);
}



/* Entry: 10a64b97c; end: 10a64b993;  */

undefined4 FUN_10a64b97c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
  }
  return 0;
}



/* Entry: 10a64b994; end: 10a64b9bf;  */

ulong FUN_10a64b994(float param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == (int *)0x0) {
    puVar3 = &UNK_10f66a6c8;
    FUN_10a00946c();
    if (*(long *)(puVar3 + 0x28) != 0) {
      return (ulong)*(uint *)(*(long *)(puVar3 + 0x28) + 0x10);
    }
    return 0x42c80000;
  }
  if (param_1 <= 2.0) {
    param_1 = 2.0;
  }
  piVar2[4] = (int)param_1;
  fVar4 = (float)piVar2[1];
  uVar5 = 0;
  fVar7 = (float)piVar2[3];
  fVar8 = (float)piVar2[4];
  fVar6 = fVar4;
  if (fVar4 <= fVar7) {
    fVar6 = fVar7;
  }
  piVar2[1] = (int)fVar6;
  if (fVar8 <= fVar6) {
    fVar4 = (float)piVar2[5];
    uVar5 = 0;
  }
  else {
    iVar1 = *piVar2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar6 - fVar7) * ((float)piVar2[5] + -1.0)) / (fVar8 - fVar7);
        fVar6 = 1.0;
      }
      else {
        if (iVar1 != 1) goto LAB_10ad1e668;
        fVar8 = (fVar8 * (1.0 - (float)piVar2[5])) / (fVar8 - fVar7);
        fVar4 = 1.0 - fVar8;
        fVar6 = (fVar7 * fVar8) / fVar6;
      }
      fVar4 = fVar4 + fVar6;
      uVar5 = 0;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar2[5];
      uVar5 = 0;
      _powf(fVar4,(fVar6 - fVar7) / (fVar8 - fVar7));
    }
    else {
      if (iVar1 != 3) goto LAB_10ad1e668;
      fVar4 = (float)piVar2[5] + -1.0 + (float)piVar2[5] + -1.0;
      ___exp10f();
      fVar6 = ((fVar6 - fVar7) * (fVar4 + -1.0)) / (fVar8 - fVar7) + 1.0;
      _log10f();
      fVar4 = fVar6 * 0.5 + 1.0;
      uVar5 = 0;
    }
  }
  piVar2[2] = (int)fVar4;
LAB_10ad1e668:
  return CONCAT44(uVar5,fVar4);
}



/* Entry: 10a64b9c0; end: 10a64b9db;  */

undefined4 FUN_10a64b9c0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  return 0x42c80000;
}



/* Entry: 10a64b9dc; end: 10a64bb2f;  */

int * FUN_10a64b9dc(int param_1,long param_2,int param_3)

{
  undefined1 **ppuVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined8 unaff_d8;
  float fVar13;
  undefined8 unaff_d9;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 != (int *)0x0) {
    piVar2[5] = param_1;
    fVar12 = (float)piVar2[3];
    fVar13 = (float)piVar2[4];
    fVar10 = (float)piVar2[1];
    if ((float)piVar2[1] <= fVar12) {
      fVar10 = fVar12;
    }
    piVar2[1] = (int)fVar10;
    piVar4 = piVar2;
    if (fVar13 <= fVar10) {
      fVar9 = (float)piVar2[5];
    }
    else {
      iVar11 = *piVar2;
      if (iVar11 < 2) {
        if (iVar11 == 0) {
          fVar9 = ((fVar10 - fVar12) * ((float)piVar2[5] + -1.0)) / (fVar13 - fVar12);
          fVar10 = 1.0;
        }
        else {
          if (iVar11 != 1) {
            return piVar2;
          }
          fVar13 = (fVar13 * (1.0 - (float)piVar2[5])) / (fVar13 - fVar12);
          fVar9 = 1.0 - fVar13;
          fVar10 = (fVar12 * fVar13) / fVar10;
        }
        fVar9 = fVar9 + fVar10;
      }
      else if (iVar11 == 2) {
        fVar9 = (float)piVar2[5];
        _powf(fVar9,(fVar10 - fVar12) / (fVar13 - fVar12));
      }
      else {
        if (iVar11 != 3) {
          return piVar2;
        }
        fVar9 = (float)piVar2[5] + -1.0 + (float)piVar2[5] + -1.0;
        ___exp10f();
        fVar10 = ((fVar10 - fVar12) * (fVar9 + -1.0)) / (fVar13 - fVar12) + 1.0;
        _log10f();
        fVar9 = fVar10 * 0.5 + 1.0;
      }
    }
    piVar2[2] = (int)fVar9;
    return piVar4;
  }
  piVar2 = (int *)&UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(piVar2 + 10) != 0) {
    return piVar2;
  }
  piVar2 = (int *)&UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(piVar2 + 10) != 0) {
    *(char *)(*(long *)(piVar2 + 10) + 0x5882) = (char)param_3;
    return piVar2;
  }
  puVar3 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar3 + 0x28) == 0) {
    ppuVar1 = (undefined1 **)&stack0xffffffffffffffc0;
    puVar3 = &UNK_10f66a6c8;
    uVar8 = 0x10a64ba74;
    FUN_10a00946c();
    if (*(long *)(puVar3 + 0x28) == 0) {
      uStack_48 = 0x10a64ba74;
      puVar3 = &UNK_10f66a6c8;
      puStack_50 = &stack0xffffffffffffffc0;
      FUN_10a00946c();
      uVar5 = (undefined1)param_3;
      if (*(long *)(puVar3 + 0x28) != 0) {
        return (int *)(ulong)*(uint *)(*(long *)(puVar3 + 0x28) + 0x18);
      }
      ppuVar1 = &puStack_60;
      uStack_58 = 0x10a64ba98;
      puVar3 = &UNK_10f66a6c8;
      uVar8 = 0x10a64babc;
      puStack_60 = (undefined1 *)&puStack_50;
      FUN_10a00946c();
      lVar7 = *(long *)(puVar3 + 0x28);
      if (lVar7 == 0) {
        piVar2 = (int *)&UNK_10f66a6c8;
        FUN_10a00946c();
        if (*(long *)(piVar2 + 10) != 0) {
          return piVar2;
        }
        piVar2 = (int *)&UNK_10f66a6c8;
        FUN_10a00946c();
        if (*(long *)(piVar2 + 10) == 0) {
          puVar3 = &UNK_10f66a6c8;
          FUN_10a00946c();
          uVar6 = 0;
          if (*(long *)(puVar3 + 0x28) != 0) {
            uVar6 = (uint)*(byte *)(*(long *)(puVar3 + 0x28) + 0x5883);
          }
          return (int *)(ulong)(uVar6 & 1);
        }
        *(undefined1 *)(*(long *)(piVar2 + 10) + 0x5883) = uVar5;
        return piVar2;
      }
      *(int *)(lVar7 + 0x24) = param_1;
      piVar2 = (int *)(lVar7 + 0x18);
    }
    else {
      piVar2 = (int *)(*(long *)(puVar3 + 0x28) + 0x18);
      *piVar2 = param_3;
    }
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar1;
    *(undefined8 *)((long)ppuVar1 + -8) = uVar8;
    fVar10 = (float)piVar2[3];
    fVar12 = (float)piVar2[1];
    piVar4 = piVar2;
    _sinf();
    fVar10 = fVar10 * fVar12;
    piVar2[2] = (int)fVar10;
    if (*piVar2 == 1) {
      fVar12 = 3.3702806e+12;
      fVar10 = fVar10 * 0.7853982;
      ___sincosf_stret();
      piVar2[4] = (int)((fVar12 - fVar10) * 0.70710677);
      fVar10 = (fVar12 + fVar10) * 0.70710677;
    }
    else {
      if (*piVar2 != 0) {
        return piVar4;
      }
      iVar11 = NEON_fminnm(1.0 - fVar10,0x3f800000);
      piVar2[4] = iVar11;
      fVar10 = (float)NEON_fminnm(fVar10 + 1.0,0x3f800000);
    }
    piVar2[5] = (int)fVar10;
    return piVar4;
  }
  return (int *)(ulong)*(byte *)(*(long *)(puVar3 + 0x28) + 0x5882);
}



/* Entry: 10a64bb30; end: 10a64bb47;  */

byte FUN_10a64bb30(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x5883);
  }
  return bVar1 & 1;
}



/* Entry: 10a64bb48; end: 10a64bba7;  */

ulong FUN_10a64bb48(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    *(float *)(lVar2 + 0x34) = param_1;
    fVar3 = *(float *)(lVar2 + 0x3c);
    _cosf();
    fVar3 = (fVar3 * param_1 + 1.0) / (param_1 + 1.0);
    uVar4 = 0;
    _powf(fVar3,*(undefined4 *)(lVar2 + 0x38));
    *(float *)(lVar2 + 0x30) = fVar3;
    return CONCAT44(uVar4,fVar3);
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    return (ulong)*(uint *)(*(long *)(puVar1 + 0x28) + 0x34);
  }
  return 0;
}



/* Entry: 10a64bba8; end: 10a64bbbf;  */

undefined4 FUN_10a64bba8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x34);
  }
  return 0;
}



/* Entry: 10a64bbc0; end: 10a64bc23;  */

ulong FUN_10a64bbc0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x38) = (int)param_1;
    fVar5 = *(float *)(lVar2 + 0x34);
    fVar3 = *(float *)(lVar2 + 0x3c);
    _cosf();
    fVar3 = (fVar3 * fVar5 + 1.0) / (fVar5 + 1.0);
    uVar4 = 0;
    _powf(fVar3,param_1);
    *(float *)(lVar2 + 0x30) = fVar3;
    return CONCAT44(uVar4,fVar3);
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    return (ulong)*(uint *)(*(long *)(puVar1 + 0x28) + 0x38);
  }
  return 0;
}



/* Entry: 10a64bc24; end: 10a64bc3b;  */

undefined4 FUN_10a64bc24(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x38);
  }
  return 0;
}



/* Entry: 10a64bc3c; end: 10a64bc63;  */

ulong FUN_10a64bc3c(ulong param_1,undefined1 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x5884) = param_2;
    return param_1;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  uVar2 = 0;
  if (*(long *)(puVar1 + 0x28) != 0) {
    uVar2 = (uint)*(byte *)(*(long *)(puVar1 + 0x28) + 0x5884);
  }
  return (ulong)(uVar2 & 1);
}



/* Entry: 10a64bc64; end: 10a64bc7b;  */

byte FUN_10a64bc64(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x5884);
  }
  return bVar1 & 1;
}



/* Entry: 10a64bc7c; end: 10a64bcb3;  */

undefined4 FUN_10a64bc7c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar2 = NEON_fminnm(param_1,0x42c80000);
    *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x50) = uVar2;
    return uVar2;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(puVar1 + 0x28) + 0x50);
  }
  return 0x42c80000;
}



/* Entry: 10a64bcb4; end: 10a64bccf;  */

undefined4 FUN_10a64bcb4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50);
  }
  return 0x42c80000;
}



/* Entry: 10a64bcd0; end: 10a64bcf7;  */

ulong FUN_10a64bcd0(ulong param_1,undefined1 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x5885) = param_2;
    return param_1;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  uVar2 = 0;
  if (*(long *)(puVar1 + 0x28) != 0) {
    uVar2 = (uint)*(byte *)(*(long *)(puVar1 + 0x28) + 0x5885);
  }
  return (ulong)(uVar2 & 1);
}



/* Entry: 10a64bcf8; end: 10a64bd0f;  */

byte FUN_10a64bcf8(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x5885);
  }
  return bVar1 & 1;
}



/* Entry: 10a64bd10; end: 10a64bd87;  */

undefined * FUN_10a64bd10(undefined *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x486c) = param_2;
    return param_1;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  uVar2 = (undefined1)param_2;
  if (*(long *)(puVar1 + 0x28) != 0) {
    return (undefined *)(ulong)*(uint *)(*(long *)(puVar1 + 0x28) + 0x486c);
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(puVar1 + 0x28) + 0x5886) = uVar2;
    return puVar1;
  }
  puVar1 = &UNK_10f66a6c8;
  FUN_10a00946c();
  uVar3 = 0;
  if (*(long *)(puVar1 + 0x28) != 0) {
    uVar3 = (uint)*(byte *)(*(long *)(puVar1 + 0x28) + 0x5886);
  }
  return (undefined *)(ulong)(uVar3 & 1);
}



/* Entry: 10a64bd88; end: 10a64bdc7;  */

byte FUN_10a64bd88(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x28) + 0x5886);
  }
  return bVar1 & 1;
}



/* Entry: 10a64bdc8; end: 10a64c11b;  */

void FUN_10a64bdc8(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  char cStack_60;
  char cStack_51;
  
  if (((*(byte *)(param_5 + 0x4a) & 1) != 0) || (*(char *)(param_5 + 0x49) == '\x01')) {
    cStack_51 = '\0';
    FUN_10a420138(param_5 + 0x40,&cStack_51);
    FUN_10a3dd9ac(&uStack_70,*(undefined8 *)(param_5 + 0x60));
    uVar3 = uStack_70;
    if (cStack_51 == '\x01') {
      FUN_10a771cdc(uStack_70,param_5);
    }
    FUN_10a7722fc(uVar3,param_5);
    if (cStack_60 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_64,fStack_68));
    }
  }
  if ((*(long *)(param_5 + 0x28) != 0) && (*(char *)(*(long *)(param_5 + 0x28) + 0x5880) == '\x01'))
  {
    plVar5 = (long *)(*(long *)(*(long *)(param_5 + 0x60) + 0xb90) + 0x30);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f66a705,&UNK_10f66a745,499,&UNK_10f66a7ab);
        }
        goto LAB_10a64c088;
      }
      lVar6 = plVar5[2];
    } while ((*(ushort *)(lVar6 + 0x180) & 0x17) != 0);
    FUN_10a2cd058(param_6);
    fVar8 = param_1;
    fVar7 = param_3;
    fVar11 = param_2;
    func_0x00010a2cd08c(param_6);
    fVar12 = fVar7 * fVar8 + fVar11 * param_4;
    fVar10 = -(param_4 * fVar8) + fVar11 * fVar7;
    fVar9 = 0.5;
    fVar7 = 0.5 - (fVar8 * fVar8 + fVar11 * fVar11);
    fVar12 = fVar12 + fVar12;
    fVar14 = fVar10 + fVar10;
    fVar15 = fVar7 + fVar7;
    FUN_10a2cd058(*(undefined8 *)(lVar6 + 0x178));
    fVar7 = fVar7 - param_1;
    fVar9 = fVar9 - param_2;
    fVar10 = fVar10 - param_3;
    fVar11 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15);
    fVar13 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
    fVar8 = 0.0;
    bVar4 = true;
    if ((1.1920929e-07 <= fVar11) && (bVar4 = false, !NAN(fVar13))) {
      bVar4 = fVar13 < 1.1920929e-07;
    }
    if (!bVar4) {
      fVar8 = (fVar15 * fVar10 + fVar12 * fVar7 + fVar14 * fVar9) / (fVar11 * fVar13);
      fVar7 = -1.0;
      if (-1.0 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = 1.0;
      if (fVar7 <= 1.0) {
        fVar8 = fVar7;
      }
      _acosf();
    }
    lVar6 = *(long *)(lVar6 + 0x178);
    if ((*(byte *)(lVar6 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar6);
    }
    fStack_68 = param_1 * *(float *)(lVar6 + 0x108) + param_2 * *(float *)(lVar6 + 0x118) +
                param_3 * *(float *)(lVar6 + 0x128) + *(float *)(lVar6 + 0x138);
    uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x100) >> 0x20) * param_1 +
                         (float)((ulong)*(undefined8 *)(lVar6 + 0x110) >> 0x20) * param_2 +
                         (float)((ulong)*(undefined8 *)(lVar6 + 0x120) >> 0x20) * param_3 +
                         (float)((ulong)*(undefined8 *)(lVar6 + 0x130) >> 0x20),
                         (float)*(undefined8 *)(lVar6 + 0x100) * param_1 +
                         (float)*(undefined8 *)(lVar6 + 0x110) * param_2 +
                         (float)*(undefined8 *)(lVar6 + 0x120) * param_3 +
                         (float)*(undefined8 *)(lVar6 + 0x130));
    FUN_10ad1f0a4((float)*(double *)(*(long *)(*(long *)(param_5 + 0x60) + 0x850) + 0x10),
                  *(undefined8 *)(param_5 + 0x28),&uStack_70);
    lVar6 = *(long *)(param_5 + 0x28);
    if (*(char *)(lVar6 + 0x5883) == '\x01') {
      *(float *)(lVar6 + 0x3c) = fVar8;
      fVar7 = *(float *)(lVar6 + 0x34);
      _cosf();
      fVar8 = (fVar8 * fVar7 + 1.0) / (fVar7 + 1.0);
      _powf(fVar8,*(undefined4 *)(lVar6 + 0x38));
      *(float *)(lVar6 + 0x30) = fVar8;
    }
  }
LAB_10a64c088:
  if (*(char *)(*(long *)(param_5 + 0x78) + 8) == '\x01') {
    pcVar1 = (char *)(param_5 + 0xb1);
    while (*pcVar1 == '\x01') {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010a64c0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_5 + 0x70))(0,0,param_5 + 0x70);
        return;
      }
    }
    ClearExclusiveLocal();
  }
  return;
}



/* Entry: 10a64c11c; end: 10a64c1ff;  */

undefined1  [16] FUN_10a64c11c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f662b72;
  return auVar1;
}



/* Entry: 10a64c200; end: 10a64cc0f;  */

void FUN_10a64c200(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662b72,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c05048;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c05048;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a66e2f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a66e498,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a66e5d4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,"resume",FUN_10a66e698,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&DAT_10f3becc6,FUN_10a66e75c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&DAT_10f385236,FUN_10a66e888,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&UNK_10f66a837,FUN_10a66e94c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&UNK_10f66a847,FUN_10a66ea04,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64cbf0;
    FUN_10a054dac(param_1,&UNK_10f656bc8,FUN_10a66eabc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f30839b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a66ec30(param_1,&ppuStack_a0);
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350e61,FUN_10a66ef28,FUN_10a66eff0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f408bea,FUN_10a66f148,FUN_10a66f210);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10a66f2c4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a857,FUN_10a66f38c,FUN_10a66f454);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a860,FUN_10a66f508,FUN_10a66f5cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a873,FUN_10a66f680,FUN_10a66f744);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a888,FUN_10a66f7f8,FUN_10a66f8c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a89b,FUN_10a66f990,FUN_10a66fa58);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a8b5,FUN_10a66fb0c,FUN_10a66fbd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a8cf,FUN_10a66fc88,FUN_10a66fd50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a8ec,FUN_10a66fe04,FUN_10a66fec8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a8fc,FUN_10a66ff7c,FUN_10a670044);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a90a,FUN_10a670138,FUN_10a670200);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a919,FUN_10a6702b4,FUN_10a670378);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a931,FUN_10a67042c,FUN_10a6704f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a94e,FUN_10a6705a8,FUN_10a670670);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a96a,FUN_10a670724,FUN_10a6707f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a97e,FUN_10a6708d4,FUN_10a6709a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a992,FUN_10a670a60,FUN_10a670b34);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a9a3,FUN_10a670c10,FUN_10a670ce8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66a9b2,FUN_10a670de8,FUN_10a670ebc);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f2f2731;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  puStack_48 = &UNK_10f66a659;
  uStack_40 = 0;
  FUN_10a66ec30(param_1,&ppuStack_a0);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662b72,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a64cbf0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a64cbf4);
  (*pcVar6)();
}



/* Entry: 10a64cc10; end: 10a64cd9b;  */

undefined8 * FUN_10a64cc10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0x49] = &PTR_FUN_110c383b8;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c02988,param_2,param_3);
  *puVar1 = &PTR_FUN_110c023a8;
  puVar1[2] = &PTR_DAT_110c02630;
  puVar1[7] = &PTR_DAT_110c02688;
  puVar1[0xd] = &PTR_DAT_110c026a8;
  puVar1[0x49] = &PTR_DAT_110c02948;
  puVar1[0x16] = &PTR_DAT_110c02718;
  puVar1[0x17] = &PTR_DAT_110c02748;
  puVar1[0x3e] = &PTR_FUN_110c02778;
  puVar1[0x3f] = &PTR_DAT_110c028e8;
  *(undefined1 *)(puVar1 + 0x40) = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  puVar1[0x44] = 0;
  puVar1[0x43] = 0;
  puVar1[0x46] = 0;
  puVar1[0x45] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x47] = puVar1 + 3;
  param_1[0x48] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x47);
  lVar2 = param_1[0x2e];
  func_0x000107c2b054(auStack_48,&UNK_10f66a9c8);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a64cd9c; end: 10a64ce27;  */

void FUN_10a64cd9c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c023a8;
  param_1[2] = &PTR_DAT_110c02630;
  param_1[7] = &PTR_DAT_110c02688;
  param_1[0xd] = &PTR_DAT_110c026a8;
  param_1[0x49] = &PTR_DAT_110c02948;
  param_1[0x16] = &PTR_DAT_110c02718;
  param_1[0x17] = &PTR_DAT_110c02748;
  param_1[0x3e] = &PTR_FUN_110c02778;
  param_1[0x3f] = &PTR_DAT_110c028e8;
  func_0x00010a004e5c(param_1 + 0x47);
  func_0x00010a3bef9c(param_1 + 0x45);
  FUN_10a37eea0(param_1 + 0x43);
  func_0x00010a3bd1cc(param_1 + 0x41);
  *param_1 = &PTR_FUN_110c04ee0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x49] = &PTR_DAT_110c05010;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a64ce28; end: 10a64ce6b;  */

void FUN_10a64ce28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c023a8;
  param_1[2] = &PTR_DAT_110c02630;
  param_1[7] = &PTR_DAT_110c02688;
  param_1[0xd] = &PTR_DAT_110c026a8;
  param_1[0x49] = &PTR_DAT_110c02948;
  param_1[0x16] = &PTR_DAT_110c02718;
  param_1[0x17] = &PTR_DAT_110c02748;
  param_1[0x3e] = &PTR_FUN_110c02778;
  param_1[0x3f] = &PTR_DAT_110c028e8;
  func_0x00010a004e5c(param_1 + 0x47);
  func_0x00010a3bef9c(param_1 + 0x45);
  FUN_10a37eea0(param_1 + 0x43);
  func_0x00010a3bd1cc(param_1 + 0x41);
  *param_1 = &PTR_FUN_110c04ee0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x49] = &PTR_DAT_110c05010;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a64ce6c; end: 10a64cf0f;  */

void FUN_10a64ce6c(void)

{
  FUN_10a64cd9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64cf10; end: 10a64cf3f;  */

void FUN_10a64cf10(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a64cd9c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a64cf40; end: 10a64d137;  */

void FUN_10a64cf40(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_50;
  float fStack_48;
  
  if (*(char *)(param_5 + 0x200) == '\x01') {
    plVar2 = (long *)(*(long *)(*(long *)(param_5 + 0x170) + 0xb90) + 0x30);
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar3 = plVar2[2];
    } while ((*(ushort *)(lVar3 + 0x180) & 0x17) != 0);
    FUN_10a2cd058(*(undefined8 *)(param_5 + 0x178));
    fVar5 = param_1;
    fVar4 = param_3;
    fVar7 = param_2;
    func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x178));
    fVar6 = fVar4 * fVar5 + fVar7 * param_4;
    fVar4 = 0.5 - (fVar5 * fVar5 + fVar7 * fVar7);
    fVar9 = fVar6 + fVar6;
    fVar10 = fVar4 + fVar4;
    FUN_10a2cd058(*(undefined8 *)(lVar3 + 0x178));
    fVar4 = fVar4 - param_1;
    fVar6 = fVar6 - param_3;
    fVar7 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
    fVar8 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
    fVar5 = 0.0;
    bVar1 = true;
    if ((1.1920929e-07 <= fVar7) && (bVar1 = false, !NAN(fVar8))) {
      bVar1 = fVar8 < 1.1920929e-07;
    }
    if (!bVar1) {
      fVar5 = (fVar10 * fVar6 + fVar9 * fVar4 + 0.0) / (fVar7 * fVar8);
      fVar4 = -1.0;
      if (-1.0 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      _acosf();
    }
    lVar3 = *(long *)(lVar3 + 0x178);
    if ((*(byte *)(lVar3 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar3);
    }
    fStack_48 = param_1 * *(float *)(lVar3 + 0x108) + param_2 * *(float *)(lVar3 + 0x118) +
                param_3 * *(float *)(lVar3 + 0x128) + *(float *)(lVar3 + 0x138);
    uStack_50 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x100) >> 0x20) * param_1 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x110) >> 0x20) * param_2 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x120) >> 0x20) * param_3 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x130) >> 0x20),
                         (float)*(undefined8 *)(lVar3 + 0x100) * param_1 +
                         (float)*(undefined8 *)(lVar3 + 0x110) * param_2 +
                         (float)*(undefined8 *)(lVar3 + 0x120) * param_3 +
                         (float)*(undefined8 *)(lVar3 + 0x130));
    if (*(long *)(param_5 + 0x208) != 0) {
      FUN_10ad1f0a4((float)*(double *)(*(long *)(*(long *)(param_5 + 0x170) + 0x850) + 0x10),
                    *(long *)(param_5 + 0x208),&uStack_50);
      lVar3 = *(long *)(param_5 + 0x208);
      if (*(char *)(lVar3 + 0x5883) == '\x01') {
        *(float *)(lVar3 + 0x3c) = fVar5;
        fVar4 = *(float *)(lVar3 + 0x34);
        _cosf();
        fVar5 = (fVar5 * fVar4 + 1.0) / (fVar4 + 1.0);
        _powf(fVar5,*(undefined4 *)(lVar3 + 0x38));
        *(float *)(lVar3 + 0x30) = fVar5;
      }
    }
  }
  return;
}



/* Entry: 10a64d138; end: 10a64d13f;  */

void FUN_10a64d138(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_50;
  float fStack_48;
  
  if (*(char *)(param_5 + 0x198) == '\x01') {
    plVar2 = (long *)(*(long *)(*(long *)(param_5 + 0x108) + 0xb90) + 0x30);
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar3 = plVar2[2];
    } while ((*(ushort *)(lVar3 + 0x180) & 0x17) != 0);
    FUN_10a2cd058(*(undefined8 *)(param_5 + 0x110));
    fVar5 = param_1;
    fVar4 = param_3;
    fVar7 = param_2;
    func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x110));
    fVar6 = fVar4 * fVar5 + fVar7 * param_4;
    fVar4 = 0.5 - (fVar5 * fVar5 + fVar7 * fVar7);
    fVar9 = fVar6 + fVar6;
    fVar10 = fVar4 + fVar4;
    FUN_10a2cd058(*(undefined8 *)(lVar3 + 0x178));
    fVar4 = fVar4 - param_1;
    fVar6 = fVar6 - param_3;
    fVar7 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
    fVar8 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
    fVar5 = 0.0;
    bVar1 = true;
    if ((1.1920929e-07 <= fVar7) && (bVar1 = false, !NAN(fVar8))) {
      bVar1 = fVar8 < 1.1920929e-07;
    }
    if (!bVar1) {
      fVar5 = (fVar10 * fVar6 + fVar9 * fVar4 + 0.0) / (fVar7 * fVar8);
      fVar4 = -1.0;
      if (-1.0 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      _acosf();
    }
    lVar3 = *(long *)(lVar3 + 0x178);
    if ((*(byte *)(lVar3 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar3);
    }
    fStack_48 = param_1 * *(float *)(lVar3 + 0x108) + param_2 * *(float *)(lVar3 + 0x118) +
                param_3 * *(float *)(lVar3 + 0x128) + *(float *)(lVar3 + 0x138);
    uStack_50 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x100) >> 0x20) * param_1 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x110) >> 0x20) * param_2 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x120) >> 0x20) * param_3 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x130) >> 0x20),
                         (float)*(undefined8 *)(lVar3 + 0x100) * param_1 +
                         (float)*(undefined8 *)(lVar3 + 0x110) * param_2 +
                         (float)*(undefined8 *)(lVar3 + 0x120) * param_3 +
                         (float)*(undefined8 *)(lVar3 + 0x130));
    if (*(long *)(param_5 + 0x1a0) != 0) {
      FUN_10ad1f0a4((float)*(double *)(*(long *)(*(long *)(param_5 + 0x108) + 0x850) + 0x10),
                    *(long *)(param_5 + 0x1a0),&uStack_50);
      lVar3 = *(long *)(param_5 + 0x1a0);
      if (*(char *)(lVar3 + 0x5883) == '\x01') {
        *(float *)(lVar3 + 0x3c) = fVar5;
        fVar4 = *(float *)(lVar3 + 0x34);
        _cosf();
        fVar5 = (fVar5 * fVar4 + 1.0) / (fVar4 + 1.0);
        _powf(fVar5,*(undefined4 *)(lVar3 + 0x38));
        *(float *)(lVar3 + 0x30) = fVar5;
      }
    }
  }
  return;
}



/* Entry: 10a64d140; end: 10a64d1d7;  */

void FUN_10a64d140(undefined *param_1,undefined8 param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d1d8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + 0x170));
  FUN_10a771bcc(*(undefined8 *)((long)register0x00000008 + -0x38),param_1,param_2);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x30));
    return;
  }
  return;
}



/* Entry: 10a64d1d8; end: 10a64d1df;  */

void FUN_10a64d1d8(undefined *param_1,undefined8 param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d1d8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + -0x80));
  FUN_10a771bcc(*(undefined8 *)((long)register0x00000008 + -0x38),param_1 + -0x1f0,param_2);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x30));
    return;
  }
  return;
}



/* Entry: 10a64d1e0; end: 10a64d26f;  */

void FUN_10a64d1e0(undefined *param_1)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d270;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + 0x170));
  FUN_10a771cdc(*(undefined8 *)((long)register0x00000008 + -0x38),param_1);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x30));
    return;
  }
  return;
}



/* Entry: 10a64d270; end: 10a64d277;  */

void FUN_10a64d270(undefined *param_1)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d270;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + -0x80));
  FUN_10a771cdc(*(undefined8 *)((long)register0x00000008 + -0x38),param_1 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x30));
    return;
  }
  return;
}



/* Entry: 10a64d278; end: 10a64d2ff;  */

undefined8 FUN_10a64d278(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771c58(uStack_38,param_1);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
    return 1;
  }
  puVar1 = &UNK_10f66a9de;
  FUN_10a00946c(&UNK_10f66a9de);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
  __Unwind_Resume(puVar1);
  FUN_10a64d278(puVar1 + -0x1f0);
  return 1;
}



/* Entry: 10a64d300; end: 10a64d31b;  */

undefined8 FUN_10a64d300(long param_1)

{
  FUN_10a64d278(param_1 + -0x1f0);
  return 1;
}



/* Entry: 10a64d31c; end: 10a64d3a3;  */

undefined8 FUN_10a64d31c(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771e08(uStack_38,param_1);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
    return 1;
  }
  puVar1 = &UNK_10f66a9de;
  FUN_10a00946c(&UNK_10f66a9de);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
  __Unwind_Resume(puVar1);
  FUN_10a64d31c(puVar1 + -0x1f0);
  return 1;
}



/* Entry: 10a64d3a4; end: 10a64d3bf;  */

undefined8 FUN_10a64d3a4(long param_1)

{
  FUN_10a64d31c(param_1 + -0x1f0);
  return 1;
}



/* Entry: 10a64d3c0; end: 10a64d437;  */

void FUN_10a64d3c0(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771f18(uStack_38,param_1);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d438; end: 10a64d43f;  */

void FUN_10a64d438(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + -0x88));
    FUN_10a771f18(uStack_38,param_1 + -0x1f8);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d440; end: 10a64d4b7;  */

void FUN_10a64d440(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771f9c(uStack_38,param_1);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d4b8; end: 10a64d4bf;  */

void FUN_10a64d4b8(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + -0x88));
    FUN_10a771f9c(uStack_38,param_1 + -0x1f8);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d4c0; end: 10a64d553;  */

undefined8 FUN_10a64d4c0(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d554;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + 0x170));
  FUN_10a7720ac(*(undefined8 *)((long)register0x00000008 + -0x48),param_2);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d554; end: 10a64d55b;  */

undefined8 FUN_10a64d554(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d554;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + -0x80));
  FUN_10a7720ac(*(undefined8 *)((long)register0x00000008 + -0x48),param_2 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d55c; end: 10a64d5ff;  */

void FUN_10a64d55c(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + 0x170));
  FUN_10a772140(param_1,*(undefined8 *)((long)register0x00000008 + -0x48),param_2);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x40));
    return;
  }
  return;
}



/* Entry: 10a64d600; end: 10a64d607;  */

void FUN_10a64d600(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + -0x80));
  FUN_10a772140(param_1,*(undefined8 *)((long)register0x00000008 + -0x48),param_2 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x40));
    return;
  }
  return;
}



/* Entry: 10a64d608; end: 10a64d693;  */

undefined8 FUN_10a64d608(undefined *param_1)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d694;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + 0x170));
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x38);
  FUN_10a772020(uVar1,param_1);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
  }
  return uVar1;
}



/* Entry: 10a64d694; end: 10a64d69b;  */

undefined8 FUN_10a64d694(undefined *param_1)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d694;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + -0x80));
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x38);
  FUN_10a772020(uVar1,param_1 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
  }
  return uVar1;
}



/* Entry: 10a64d69c; end: 10a64d727;  */

undefined8 FUN_10a64d69c(undefined *param_1)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d728;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + 0x170));
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x38);
  FUN_10a771e8c(uVar1,param_1);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
  }
  return uVar1;
}



/* Entry: 10a64d728; end: 10a64d72f;  */

undefined8 FUN_10a64d728(undefined *param_1)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_1 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
    }
    unaff_x30 = FUN_10a64d728;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x38),*(undefined8 *)(param_1 + -0x80));
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x38);
  FUN_10a771e8c(uVar1,param_1 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x28) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x30));
  }
  return uVar1;
}



/* Entry: 10a64d730; end: 10a64d7c3;  */

undefined8 FUN_10a64d730(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d7c4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + 0x170));
  FUN_10a772268(*(undefined8 *)((long)register0x00000008 + -0x48),param_2);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d7c4; end: 10a64d7cb;  */

undefined8 FUN_10a64d7c4(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d7c4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + -0x80));
  FUN_10a772268(*(undefined8 *)((long)register0x00000008 + -0x48),param_2 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d7cc; end: 10a64d86f;  */

void FUN_10a64d7cc(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d870;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + 0x170));
  FUN_10a7722fc(param_1,*(undefined8 *)((long)register0x00000008 + -0x48),param_2);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x40));
    return;
  }
  return;
}


