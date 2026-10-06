/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8428e4; end: 10a842a4b;  */

void FUN_10a8428e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a080bb8(param_5);
      FUN_10a079938(&stack0xffffffffffffffb0,param_2,param_4);
      FUN_10a81a8cc(plVar7,&stack0xffffffffffffffb0);
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a842a28);
  (*pcVar3)();
}



/* Entry: 10a842a4c; end: 10a842ab3;  */

void FUN_10a842a4c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
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
  FUN_10a842b64(extraout_x8,plVar4,FUN_10a8195e0,0,param_2,param_4);
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



/* Entry: 10a842ab4; end: 10a842b63;  */

void FUN_10a842ab4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a842b64(param_1,param_2,FUN_10a8195e0,0,param_3,param_5);
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



/* Entry: 10a842b64; end: 10a842c1f;  */

void FUN_10a842b64(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a842a4c(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar4 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_50);
  FUN_10a07d9d4(param_1,param_2,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a842c20; end: 10a842ccf;  */

void FUN_10a842c20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a842b64(param_1,param_2,0x10a819608,0,param_3,param_5);
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



/* Entry: 10a842cd0; end: 10a842deb;  */

void FUN_10a842cd0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a842a4c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x27];
  if (plVar6[0x27] != 0) {
    plVar6 = (long *)(plVar6[0x27] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a842dec; end: 10a842ef3;  */

void FUN_10a842dec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  code *extraout_x9;
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
  FUN_10a052e3c(param_5);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffb0,*ppuVar7);
  FUN_10a3ab53c(param_1,param_2,&stack0xffffffffffffffb0);
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
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
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



/* Entry: 10a842ef4; end: 10a842f0f;  */

void FUN_10a842ef4(void)

{
  return;
}



/* Entry: 10a842f10; end: 10a842f67;  */

void FUN_10a842f10(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x1c8;
  __Znwm();
  FUN_10a842f68();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a842f68; end: 10a842faf;  */

undefined8 * FUN_10a842f68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba2038;
  FUN_10ab49f0c(param_1 + 3);
  return param_1;
}



/* Entry: 10a842fb0; end: 10a842feb;  */

void FUN_10a842fb0(long *param_1,long param_2)

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
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar9 = *(long *)(param_2 + 0x10);
  lVar11 = *param_1;
  lVar10 = *(long *)(lVar9 + 0x100);
  if (lVar11 == lVar10) {
    return;
  }
  if (lVar11 != 0) {
    uVar12 = (uint)*(byte *)(lVar11 + 0xe0);
    if ((lVar10 != 0) && (uVar12 == *(byte *)(lVar10 + 0xe0))) {
      bVar4 = *(byte *)(lVar11 + 0xff);
      uVar1 = *(ulong *)(lVar11 + 0xf0);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(lVar10 + 0xff);
      uVar2 = *(ulong *)(lVar10 + 0xf0);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar8 = (long *)*(long *)(lVar11 + 0xe8);
        if (-1 < (char)bVar4) {
          plVar8 = (long *)(lVar11 + 0xe8);
        }
        plVar3 = (long *)*(long *)(lVar10 + 0xe8);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(lVar10 + 0xe8);
        }
        _memcmp(plVar8,plVar3);
        if ((int)plVar8 == 0) {
          return;
        }
      }
    }
    if (9 < uVar12 || (1 << (ulong)(uVar12 & 0x1f) & 0x212U) == 0) {
      func_0x00010ae06f08(1,0x14,&UNK_10f67a8c5,&UNK_10f67a8c5,0xffffffff,&UNK_10f67a929);
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      FUN_10a6eef74(lVar9 + 0x100,&uStack_40);
      plVar8 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar3 = plStack_38 + 1;
        do {
          lVar10 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10a81a988;
    }
  }
  FUN_10a6e467c(lVar9 + 0x100,param_1);
LAB_10a81a988:
  FUN_10a81a688(lVar9);
  return;
}



/* Entry: 10a842fec; end: 10a84300b;  */

void FUN_10a842fec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c22368;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84300c; end: 10a84301b;  */

void FUN_10a84300c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a843014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a84301c; end: 10a843073;  */

long FUN_10a84301c(long param_1)

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



/* Entry: 10a843074; end: 10a843083;  */

void FUN_10a843074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c223b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a843084; end: 10a8430a3;  */

void FUN_10a843084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c223b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8430a4; end: 10a8430af;  */

long FUN_10a8430a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_28;
  
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x38))(&plStack_28);
    FUN_109d1a244(&plStack_28);
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
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
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10a84329c(param_1 + 0xb8);
  plVar4 = *(long **)(param_1 + 0xb0);
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
  func_0x00010a843244(param_1 + 0xa0);
  func_0x00010a8431ec(param_1 + 0x90);
  func_0x00010a8431ec(param_1 + 0x80);
  func_0x00010a843194(param_1 + 0x70);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x0001092b4274();
  }
  func_0x00010a05a86c(param_1 + 0x58);
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0772f0(param_1 + 0x38);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10a8430b0; end: 10a843157;  */

void FUN_10a8430b0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = param_1 + 2;
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
    param_2[1] = param_1;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
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
        (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a843158; end: 10a843167;  */

void FUN_10a843158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a843168; end: 10a843187;  */

void FUN_10a843168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22408;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a843188; end: 10a843193;  */

undefined8 * FUN_10a843188(long param_1)

{
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(char *)(param_1 + 0xf7) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  func_0x00010a71259c(param_1 + 0xb0);
  func_0x00010a71245c(param_1 + 0x88);
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x7f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a843194; end: 10a84329b;  */

long FUN_10a843194(long param_1)

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



/* Entry: 10a84329c; end: 10a8432f7;  */

long * FUN_10a84329c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a8431ec(plVar1 + 3);
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



/* Entry: 10a8432f8; end: 10a843307;  */

void FUN_10a8432f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a843308; end: 10a843327;  */

void FUN_10a843308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a843328; end: 10a843403;  */

void FUN_10a843328(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  FUN_10a844058(param_1 + 0x30);
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



/* Entry: 10a843404; end: 10a843407;  */

void FUN_10a843404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a843408; end: 10a8434df;  */

long * FUN_10a843408(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  FUN_10a844058(param_1 + 3);
  plVar4 = (long *)param_1[2];
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
  plVar4 = (long *)param_1[1];
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
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a8434e0; end: 10a843aab;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10a8434e0(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_70 [2];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  param_1[6] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  puVar5 = (undefined8 *)0x1c0;
  __Znwm();
  plVar7 = puVar5 + 1;
  puVar5[2] = 0;
  *plVar7 = 0x200000006;
  *(undefined2 *)(puVar5 + 3) = 4;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar5 + 3;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_FUN_110c21db8;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x37) = 0;
  *param_1 = puVar5;
  param_1[1] = puVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_10a852ca4;
  puVar6[1] = FUN_10a852f90;
  FUN_10a843f78(puVar6 + 2);
  lVar11 = puVar6[7];
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0xb] = puVar5;
  puVar6[9] = param_2;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  alStack_70[0] = 0;
  FUN_109d18960(puVar6 + 2,param_2,alStack_70);
  if (alStack_70[0] == 0) {
    if ((*(byte *)(puVar6 + 10) & 1) == 0) {
      puStack_58 = (undefined8 *)puVar6[9];
      alStack_70[1] = 0;
      puStack_60 = puVar6;
      (**(code **)*puStack_58)(puStack_58,alStack_70 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_70);
LAB_10a8437fc:
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      param_1[2] = lVar11;
      return param_1;
    }
    __ZNSt13exception_ptrD1Ev(alStack_70);
    FUN_10a843b70(puVar6 + 0xc,puVar6 + 0xb);
    puVar6[9] = puVar6[0xc];
    plVar7 = (long *)(puVar6[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0xd) = 1;
      lVar10 = puVar6[9];
      plVar7 = (long *)(lVar10 + 0x10);
      puVar5 = (undefined8 *)puVar6[3];
      do {
        lVar9 = *plVar7;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_70[1] = 0;
            puStack_60 = puVar6;
            puStack_58 = puVar5;
            func_0x000109d1b588(lVar10 + 0x18,alStack_70 + 1);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            goto LAB_10a8437fc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    lVar10 = puVar6[9];
    if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar10 + 0x1b8) & 1) != 0) {
        FUN_10a843aac(puVar6 + 2,lVar10 + 0x98);
        plVar7 = (long *)puVar6[9];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar6[0xc];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar6[0xb];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar6 + 2);
        __ZdlPv(puVar6);
        goto LAB_10a8437fc;
      }
    }
    else {
      func_0x0001092af97c(lVar10 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_70);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a843880);
  (*pcVar4)();
}



/* Entry: 10a843aac; end: 10a843b6f;  */

void FUN_10a843aac(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0x1b8) == '\x01') {
          FUN_10a6fd048(lVar8 + 0x98);
          *(undefined1 *)(lVar8 + 0x1b8) = 0;
        }
        FUN_10a835fe8(lVar8 + 0x98,param_2);
        *(undefined1 *)(lVar8 + 0x1b8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a843b40;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a843b40:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
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
        FUN_109d1b3c4(plVar4,1,plVar7);
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
  } while( true );
}



/* Entry: 10a843b70; end: 10a843f77;  */

void FUN_10a843b70(long *param_1,undefined8 param_2)

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
  *puVar5 = FUN_10a852804;
  puVar5[1] = FUN_10a852b34;
  puVar5[0xc] = param_2;
  FUN_10a843f78(puVar5 + 2);
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
  FUN_10a8352a4(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
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
    if ((*(byte *)(lVar6 + 0x1b8) & 1) != 0) {
      FUN_10a844018(puVar5 + 2,lVar6 + 0x98);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a843e4c);
  (*pcVar4)();
}



/* Entry: 10a843f78; end: 10a844017;  */

undefined8 * FUN_10a843f78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x1c0;
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
  *puVar1 = &PTR_FUN_110c21db8;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
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



/* Entry: 10a844018; end: 10a844057;  */

void FUN_10a844018(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010a835f4c(*plVar6);
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



/* Entry: 10a844058; end: 10a8440cf;  */

void FUN_10a844058(undefined8 *param_1)

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



/* Entry: 10a8440d0; end: 10a844267;  */

void FUN_10a8440d0(long param_1,undefined8 ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 ****unaff_x21;
  undefined8 *puVar9;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code **ppcStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  char cStack_90;
  undefined8 **ppuStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppuVar3 = &pppuStack_98;
    pppuStack_98 = (undefined8 ****)(param_1 + 0x70);
    func_0x00010a701888();
    ppppuVar4 = ppppuVar3;
    if (((ulong)ppppuVar3 & 1) != 0) {
      pppuStack_b0 = (undefined8 ***)0x0;
      pppuStack_a8 = (undefined8 ***)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      unaff_x21 = *(undefined8 *****)(param_1 + 0x18);
      uStack_b8 = *(undefined8 *)(param_1 + 0x28);
      pppuStack_c0 = *(undefined8 ****)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppuStack_b0 = unaff_x21;
      pppuStack_a8 = pppuStack_c0;
      uStack_a0 = uStack_b8;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      pppuVar6 = pppuStack_c0;
      for (; unaff_x21 != (undefined8 ****)pppuVar6; unaff_x21 = unaff_x21 + 8) {
        ppuStack_88 = *unaff_x21;
        (*(code *)unaff_x21[1][3])(apuStack_80,unaff_x21 + 1);
        param_2 = &ppuStack_88;
        (*(code *)ppuStack_88)(param_1 + 8);
        (*(code *)*apuStack_80[0])(apuStack_80);
      }
      ppppuVar4 = &pppuStack_b0;
      FUN_10a844058();
    }
    if (cStack_90 == '\x01') {
      ppppuVar4 = (undefined8 ****)pppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppuVar3 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    unaff_x21 = *(undefined8 *****)(param_1 + 0x18);
    ppppuVar3 = *(undefined8 *****)(param_1 + 0x20);
    ppppuVar4 = (undefined8 ****)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (ppppuVar3 != unaff_x21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a844058(&pppuStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppuStack_98);
  }
  ppppuVar5 = ppppuVar4;
  __Unwind_Resume();
  pppuStack_e0 = ppppuVar3;
  pppuStack_d8 = ppppuVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_10a844268;
  ppppuVar3 = ppppuVar5 + 2;
  do {
    pppuVar6 = *ppppuVar3;
    if (pppuVar6 == (undefined8 ***)0x0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
      if (bVar2) {
        *ppppuVar3 = (undefined8 ***)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        if (*(char *)(ppppuVar5 + 0x37) == '\x01') {
          FUN_10a6fd048(ppppuVar5 + 0x13);
          *(undefined1 *)(ppppuVar5 + 0x37) = 0;
        }
        FUN_10a835fe8(ppppuVar5 + 0x13,param_2);
        *(undefined1 *)(ppppuVar5 + 0x37) = 1;
        ppppuVar5[2] = (undefined8 ***)0x2;
        ppcStack_f0 = (code **)&ppuStack_88;
        pppuStack_e8 = unaff_x21;
        ppuStack_138 = ppppuVar5[0xc];
        ppuStack_140 = ppppuVar5[0xb];
        ppuStack_128 = ppppuVar5[0xe];
        ppuStack_130 = ppppuVar5[0xd];
        ppuStack_118 = ppppuVar5[0x10];
        ppuStack_120 = ppppuVar5[0xf];
        ppuStack_180 = ppppuVar5[3];
        ppuStack_178 = ppppuVar5[4];
        ppuStack_168 = ppppuVar5[6];
        ppuStack_170 = ppppuVar5[5];
        ppppuVar5[0x11] = ppppuVar5 + 3;
        *(undefined1 *)((long)ppppuVar5 + 0x19) = 0;
        ppuStack_158 = ppppuVar5[8];
        ppuStack_160 = ppppuVar5[7];
        ppuStack_148 = ppppuVar5[10];
        ppuStack_150 = ppppuVar5[9];
        pppuVar6 = &ppuStack_180;
        do {
          uVar7 = (ulong)*(byte *)((long)pppuVar6 + 1);
          if (uVar7 != 0) {
            puVar9 = (undefined8 *)((long)pppuVar6 + 0x20);
            do {
              uStack_108 = puVar9[-1];
              uStack_110 = puVar9[-2];
              uStack_100 = *puVar9;
              (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,&uStack_110);
              uVar7 = uVar7 - 1;
              puVar9 = puVar9 + 3;
            } while (uVar7 != 0);
          }
          puVar8 = *(undefined1 **)((long)pppuVar6 + 8);
          if (pppuVar6 != &ppuStack_180) {
            _free(pppuVar6);
          }
          pppuVar6 = (undefined8 ***)puVar8;
        } while (puVar8 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)pppuVar6 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a844268; end: 10a844303;  */

void FUN_10a844268(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
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
        if (*(char *)(param_1 + 0x1b8) == '\x01') {
          FUN_10a6fd048(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0x1b8) = 0;
        }
        FUN_10a835fe8(param_1 + 0x98,param_2);
        *(undefined1 *)(param_1 + 0x1b8) = 1;
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



/* Entry: 10a844304; end: 10a8444d3;  */

void FUN_10a844304(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010a8431ec(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a8444d4; end: 10a84451b;  */

void FUN_10a8444d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a8431ec(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a84451c; end: 10a84452b;  */

void FUN_10a84451c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c224a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84452c; end: 10a84454b;  */

void FUN_10a84452c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c224a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84454c; end: 10a844627;  */

void FUN_10a84454c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  FUN_10a837f18(param_1 + 0x30);
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



/* Entry: 10a844628; end: 10a84462b;  */

void FUN_10a844628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84462c; end: 10a844703;  */

long * FUN_10a84462c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  FUN_10a837f18(param_1 + 3);
  plVar4 = (long *)param_1[2];
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
  plVar4 = (long *)param_1[1];
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
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a844704; end: 10a844cf3;  */

/* WARNING: Removing unreachable block (ram,0x00010a844910) */

long * FUN_10a844704(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_1[6] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  FUN_10a79dddc(&plStack_68);
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  param_1[1] = (long)plStack_68;
  plStack_68 = (long *)0x0;
  if (*param_1 == 0) {
    *param_1 = (long)puStack_60;
  }
  else {
    func_0x0001092b4274(param_1);
    *param_1 = (long)puStack_60;
    puStack_60 = (undefined8 *)0x0;
    if (plStack_68 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_68 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plStack_68 + 8))();
        }
      }
    }
  }
  lVar11 = param_1[1];
  if (lVar11 != 0) {
    plVar5 = (long *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_10a852410;
  puVar6[1] = FUN_10a8526fc;
  FUN_10a6fc7f0(puVar6 + 2);
  lVar12 = puVar6[7];
  if (lVar12 != 0) {
    plVar5 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0xb] = lVar11;
  puVar6[9] = param_2;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  puVar7 = puVar6 + 9;
  FUN_10a6fc714(puVar7,puVar6);
  if (((ulong)puVar7 & 1) != 0) {
LAB_10a844a58:
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    param_1[2] = lVar12;
    return param_1;
  }
  FUN_10a844cf4(puVar6 + 0xc,puVar6 + 0xb);
  puVar6[9] = puVar6[0xc];
  plVar5 = (long *)(puVar6[0xc] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    lVar11 = puVar6[9];
    plVar5 = (long *)(lVar11 + 0x10);
    uVar9 = puVar6[3];
    do {
      lVar10 = *plVar5;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plStack_68 = (long *)0x0;
          puStack_60 = puVar6;
          uStack_58 = uVar9;
          func_0x000109d1b588(lVar11 + 0x18,&plStack_68);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          goto LAB_10a844a58;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar11 = puVar6[9];
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0xa8) & 1) != 0) {
      FUN_10a6fc7b0(puVar6 + 2,lVar11 + 0x98);
      plVar5 = (long *)puVar6[9];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = (long *)puVar6[0xc];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = (long *)puVar6[0xb];
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      goto LAB_10a844a58;
    }
  }
  else {
    func_0x0001092af97c(lVar11 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a844ad0);
  (*pcVar4)();
}



/* Entry: 10a844cf4; end: 10a845093;  */

void FUN_10a844cf4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a851f74;
  puVar5[1] = FUN_10a8522a0;
  puVar5[0xc] = param_2;
  FUN_10a6fc7f0(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a79de4c(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a6db324(puVar5 + 0xb,puVar5 + 9,puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    lVar8 = puVar5[10];
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
        FUN_10a79def0(puVar5 + 2,lVar8 + 0x98);
        plVar7 = (long *)puVar5[10];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar5[0xb];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar5[9];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar7 + 8))(plVar7);
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
      func_0x0001092af97c(lVar8 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a844f68);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a845094; end: 10a84522b;  */

long ***** FUN_10a845094(long param_1)

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
      FUN_10a845294();
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
  FUN_10a845294(&ppplStack_b0);
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



/* Entry: 10a84522c; end: 10a84523f;  */

long * FUN_10a84522c(void)

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



/* Entry: 10a845240; end: 10a845293;  */

long * FUN_10a845240(long *param_1)

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



/* Entry: 10a845294; end: 10a84530b;  */

void FUN_10a845294(undefined8 *param_1)

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



/* Entry: 10a84530c; end: 10a845363;  */

long FUN_10a84530c(long param_1)

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



/* Entry: 10a845364; end: 10a84572b;  */

void FUN_10a845364(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = *(long *)(param_2 + 0x10);
  lVar8 = lVar9;
  FUN_10a81e010(&lStack_50,lVar9);
  if (lStack_50 != 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a845608);
      (*pcVar7)();
    }
    plStack_58 = *(long **)(lVar6 + 0xa0);
    uStack_60 = *(undefined8 *)(lVar6 + 0x98);
    if (*(long *)(lVar6 + 0xa0) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0xa0) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a7d0154(auStack_70,&uStack_60);
    uVar10 = *(undefined8 *)(lStack_50 + 0x18);
    plVar4 = (long *)0x108;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110c1b428;
    plVar1 = plVar4 + 3;
    plVar5 = plVar4;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar1,uVar10,plVar5,lVar8);
    plVar4[3] = (long)&PTR_DAT_110c49a60;
    plVar4[5] = (long)&PTR_DAT_110c49b00;
    plVar4[10] = (long)&PTR_DAT_110c49b58;
    plVar4[0x1f] = 0;
    plVar4[0x20] = 0;
    plStack_40 = plVar1;
    plStack_38 = plVar4;
    FUN_10a7d65b0(&plStack_40,plVar4 + 8,plVar1);
    FUN_10a7d6330(&plStack_80,&plStack_40);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    *(undefined1 *)(plStack_80 + 1) = 1;
    FUN_10a52a0d0(plStack_80 + 0x1c,auStack_70);
    pcVar7 = *(code **)(lVar9 + 0x10);
    plStack_38 = plStack_78;
    plStack_40 = plStack_80;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (*pcVar7)(&plStack_40);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
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
  return;
}



/* Entry: 10a84572c; end: 10a84578b;  */

void FUN_10a84572c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x58))();
    (*(code *)**(undefined8 **)(lVar1 + 0x18))((undefined8 *)(lVar1 + 0x18));
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



/* Entry: 10a84578c; end: 10a8457a3;  */

void FUN_10a84578c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8457a4; end: 10a84588b;  */

void FUN_10a8457a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c224e8;
  puVar4 = (undefined8 *)0x90;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[2] = puVar6[2];
  (**(code **)(puVar6[3] + 0x18))(puVar4 + 3);
  puVar4[10] = puVar6[10];
  (**(code **)(puVar6[0xb] + 0x18))(puVar4 + 0xb,puVar6 + 0xb);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84588c; end: 10a84589f;  */

long * FUN_10a84588c(void)

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



/* Entry: 10a8458a0; end: 10a8458f3;  */

long * FUN_10a8458a0(long *param_1)

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



/* Entry: 10a8458f4; end: 10a845d17;  */

/* WARNING: Removing unreachable block (ram,0x00010a845aa8) */
/* WARNING: Removing unreachable block (ram,0x00010a845994) */
/* WARNING: Removing unreachable block (ram,0x00010a845cb0) */

void FUN_10a8458f4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  code **ppcVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 uStack_1bb;
  char cStack_1b1;
  undefined8 ****appppuStack_1b0 [2];
  char cStack_199;
  undefined1 auStack_178 [48];
  byte bStack_148;
  undefined8 uStack_140;
  char cStack_129;
  char cStack_128;
  undefined8 uStack_120;
  char cStack_109;
  undefined8 uStack_e8;
  char cStack_d1;
  undefined8 uStack_d0;
  char cStack_b9;
  char cStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ****ppppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte bStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = (undefined8 *****)&pppuStack_98;
  ppcVar8 = (code **)(param_2 + 0x10);
  FUN_10a81e010();
  if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
    pppuVar11 = (undefined8 ***)pppuStack_98[3];
    pppppuVar6 = appppuStack_1b0;
    func_0x000107c2b054(pppppuVar6,&UNK_10f67cc0d);
    pppuVar9 = (undefined8 ***)pppuStack_98[4];
    if (*(char *)((long)pppuVar9 + 0xff) < '\0') {
      pppppuVar6 = (undefined8 *****)&pppuStack_b0;
      func_0x000107c3192c(pppppuVar6,pppuVar9[0x1d],pppuVar9[0x1e]);
    }
    else {
      puStack_a8 = pppuVar9[0x1e];
      pppuStack_b0 = (undefined8 ***)pppuVar9[0x1d];
      puStack_a0 = pppuVar9[0x1f];
    }
    if (pppuVar11 != (undefined8 ***)0x0) {
      pppppuVar6 = (undefined8 *****)pppuVar11[0x11b];
      FUN_10a76bdb0(pppppuVar6,appppuStack_1b0,&pppuStack_b0);
    }
    if (cStack_199 < '\0') {
      pppppuVar6 = (undefined8 *****)appppuStack_1b0[0];
      __ZdlPv();
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuStack_98[0x1b] = pppppuVar6;
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0x1b8) & 1) == 0) {
LAB_10a845bec:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a845bf0);
      (*pcVar5)();
    }
    FUN_10a6e51b8(appppuStack_1b0,*param_1 + 0x98);
    if ((bStack_148 & 1) == 0) {
      func_0x000107c2b054(&pcStack_88,&UNK_10f67cc27);
      ppcVar8 = &pcStack_88;
      FUN_10a81f62c(pppuStack_98);
    }
    else {
      bStack_58 = 3;
      FUN_10a700d88(&pcStack_88,auStack_178);
      bStack_58 = 0;
      FUN_10a81e5c4(pppuStack_98,&pcStack_88,pppuStack_98 + 0xf);
      if (3 < (ulong)bStack_58) goto LAB_10a845bec;
      (*(code *)(&PTR_FUN_110c14970)[bStack_58])(&pcStack_88);
      pppuVar9 = (undefined8 ***)pppuStack_98[0xf];
      uStack_70 = *(undefined8 *)(param_2 + 0x18);
      uStack_78 = *(undefined8 *)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x18) + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = FUN_10a845fc8;
      ppuStack_80 = &PTR_FUN_110c22508;
      ppcVar8 = &pcStack_88;
      FUN_10a845d18(pppuVar9);
      (*(code *)*ppuStack_80)(&ppuStack_80);
    }
    if ((cStack_b8 == '\x01') && (cStack_b9 < '\0')) {
      __ZdlPv(uStack_d0);
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(uStack_e8);
    }
    if (cStack_109 < '\0') {
      __ZdlPv(uStack_120);
    }
    if ((cStack_128 == '\x01') && (cStack_129 < '\0')) {
      __ZdlPv(uStack_140);
    }
    FUN_10a700ce4(auStack_178);
    pppppuVar6 = appppuStack_1b0;
    FUN_10a700ce4();
  }
  while( true ) {
    pppppuVar7 = (undefined8 *****)ppppuStack_90;
    if ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)(ppppuStack_90 + 1);
      do {
        ppppuVar10 = *pppppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
        if (bVar4) {
          *pppppuVar2 = (undefined8 ****)((long)ppppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar10 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_90)[2])(ppppuStack_90);
        pppppuVar6 = pppppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
    if (cStack_199 < '\0') {
      __ZdlPv(appppuStack_1b0[0]);
    }
    do {
      FUN_10a84530c(&pppuStack_98);
      __Unwind_Resume();
    } while ((int)ppcVar8 != 1);
    ___cxa_begin_catch();
    cStack_1b1 = '\r';
    uStack_1c8 = 0x7573206f6e;
    uStack_1c3 = 0x616d6d;
    uStack_1c0 = 0x202d207972;
    uStack_1bb = 0;
    (*(code *)(*pppppuVar6)[2])();
    FUN_10a012db0(&pcStack_88,&uStack_1c8,pppppuVar6);
    ppcVar8 = &pcStack_88;
    FUN_10a81f62c();
    pppppuVar6 = pppppuVar7;
    if (cStack_1b1 < '\0') {
      pppppuVar6 = (undefined8 *****)CONCAT35(uStack_1c3,uStack_1c8);
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a845d18; end: 10a845f5f;  */

void FUN_10a845d18(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *****pppppuVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *****pppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *puVar20;
  undefined8 *****pppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  char cStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar4 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar4 + 1,param_2 + 1);
    ppppuVar16 = (undefined8 ****)(puVar4 + 8);
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar16;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar12 = (long)puVar4 - *plVar1;
    uVar2 = (lVar12 >> 6) + 1;
    if (uVar2 >> 0x3a != 0) {
      FUN_10a845f60();
LAB_10a845f0c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a845f10);
      (*pcVar7)();
    }
    uVar13 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar14 = (long)uVar13 >> 5;
    if (uVar14 <= uVar2) {
      uVar14 = uVar2;
    }
    if (0x7fffffffffffffbf < uVar13) {
      uVar14 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar14 == 0) {
      ppppuVar11 = (undefined8 ****)0x0;
    }
    else {
      if (uVar14 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a845f0c;
      }
      ppppuVar11 = (undefined8 ****)(uVar14 << 6);
      __Znwm();
    }
    ppppuVar16 = (undefined8 ****)((long)ppppuVar11 + lVar12);
    *ppppuVar16 = (undefined8 ***)*param_2;
    ppppuStack_88 = ppppuVar11;
    ppppuStack_80 = ppppuVar16;
    ppppuStack_78 = ppppuVar16;
    pppuStack_70 = ppppuVar11 + uVar14 * 8;
    (**(code **)(param_2[1] + 0x18))(ppppuVar16 + 1,param_2 + 1);
    pppppuVar19 = *(undefined8 ******)(param_1 + 0x18);
    pppppuVar6 = *(undefined8 ******)(param_1 + 0x20);
    puVar4 = (undefined8 *)((long)ppppuVar16 + ((long)pppppuVar19 - (long)pppppuVar6));
    pppppuVar15 = pppppuVar19;
    puVar20 = puVar4;
    if (pppppuVar6 != pppppuVar19) {
      do {
        *puVar20 = *pppppuVar15;
        (*(code *)pppppuVar15[1][2])(puVar20 + 1,pppppuVar15 + 1);
        pppppuVar15 = pppppuVar15 + 8;
        puVar20 = puVar20 + 8;
      } while (pppppuVar15 != pppppuVar6);
      pppppuVar19 = pppppuVar19 + 1;
      do {
        pppppuVar15 = pppppuVar19 + 7;
        (*(code *)**pppppuVar19)(pppppuVar19);
        pppppuVar19 = pppppuVar19 + 8;
      } while (pppppuVar15 != pppppuVar6);
      pppppuVar19 = (undefined8 *****)*plVar1;
    }
    ppppuVar16 = ppppuVar16 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar16;
    pppuStack_70 = *(undefined8 ****)(param_1 + 0x28);
    *(undefined8 *****)(param_1 + 0x28) = ppppuVar11 + uVar14 * 8;
    ppppuStack_88 = pppppuVar19;
    ppppuStack_80 = pppppuVar19;
    ppppuStack_78 = pppppuVar19;
    FUN_10a845f74(&ppppuStack_88);
  }
  *(undefined8 *****)(param_1 + 0x20) = ppppuVar16;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    pppppppuVar8 = &ppppppuStack_98;
    ppppppuStack_98 = (undefined8 *******)(param_1 + 0x70);
    func_0x00010a701888();
    pppppppuVar9 = pppppppuVar8;
    if (((ulong)pppppppuVar8 & 1) != 0) {
      pppppuStack_b0 = (undefined8 ******)0x0;
      pppppuStack_a8 = (undefined8 *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      ppppppuVar17 = *(undefined8 *******)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      ppppppuVar10 = *(undefined8 *******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppppuStack_b0 = ppppppuVar17;
      pppppuStack_a8 = ppppppuVar10;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; ppppppuVar17 != ppppppuVar10; ppppppuVar17 = ppppppuVar17 + 8) {
        ppppuStack_88 = *ppppppuVar17;
        (*(code *)ppppppuVar17[1][3])(&ppppuStack_80,ppppppuVar17 + 1);
        (*(code *)ppppuStack_88)(param_1 + 8,&ppppuStack_88);
        (*(code *)*ppppuStack_80)(&ppppuStack_80);
      }
      pppppppuVar9 = (undefined8 *******)&pppppuStack_b0;
      FUN_10a837f18();
    }
    if (cStack_90 == '\x01') {
      pppppppuVar9 = (undefined8 *******)ppppppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)pppppppuVar8 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    pppppppuVar9 = (undefined8 *******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar5 != lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a837f18(&pppppuStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(ppppppuStack_98);
  }
  __Unwind_Resume();
  ppppppuVar17 = *pppppppuVar9;
  if (ppppppuVar17 == (undefined8 ******)0x0) {
    return;
  }
  ppppppuVar10 = ppppppuVar17;
  if (pppppppuVar9[1] != ppppppuVar17) {
    ppppppuVar10 = pppppppuVar9[1] + -7;
    do {
      ppppppuVar18 = ppppppuVar10 + -1;
      (*(code *)**ppppppuVar10)(ppppppuVar10);
      ppppppuVar10 = ppppppuVar10 + -8;
    } while (ppppppuVar18 != ppppppuVar17);
    ppppppuVar10 = *pppppppuVar9;
  }
  pppppppuVar9[1] = ppppppuVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(ppppppuVar10);
  return;
}



/* Entry: 10a845f60; end: 10a845f73;  */

long * FUN_10a845f60(void)

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



/* Entry: 10a845f74; end: 10a845fc7;  */

long * FUN_10a845f74(long *param_1)

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



/* Entry: 10a845fc8; end: 10a846207;  */

void FUN_10a845fc8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  short sStack_5a;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar5 = &uStack_70;
  FUN_10a81e010(&lStack_40,param_2 + 0x10);
  if (lStack_40 != 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a846144);
      (*pcVar4)();
    }
    FUN_10a3ad2b8(&lStack_50,*(undefined8 *)(*param_1 + 0x98));
    if (lStack_50 == 0) {
      uStack_68 = 0x655220612074;
      uStack_70 = 0x6f6e207465737361;
      uStack_62 = 0x646e;
      uStack_60 = 0x6873654d7265;
      sStack_5a = 0x1600;
      FUN_10a81f62c(lStack_40,&uStack_70);
      if (sStack_5a < 0) {
        __ZdlPv(uStack_70);
      }
    }
    else {
      lVar6 = *(long *)(lStack_40 + 0x18);
      func_0x000107c2b054(&uStack_70,&UNK_10f67cc44);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar6 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar5 - *(long *)(lStack_40 + 0xd8)) / 1e+09),
                      *(undefined8 *)(lVar6 + 0x8d8),&uStack_70);
      }
      if (sStack_5a < 0) {
        __ZdlPv(uStack_70);
      }
      func_0x00010a8373b4(*(undefined8 *)(lStack_40 + 0x50),&lStack_50);
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a846208; end: 10a846367;  */

void FUN_10a846208(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a846368; end: 10a8463cf;  */

void FUN_10a846368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c224a8;
  FUN_10a844704(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8463d0; end: 10a846813;  */

void FUN_10a8463d0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 ***unaff_x23;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 auStack_c0 [2];
  undefined1 uStack_ad;
  undefined1 uStack_a9;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [48];
  byte bStack_68;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a81e010(&lStack_a8,param_2 + 2);
  if (lStack_a8 == 0) {
LAB_10a846488:
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
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
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    param_2 = plStack_a0;
  }
  else {
    unaff_x23 = &ppuStack_d8;
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0x1b8) & 1) == 0) goto LAB_10a84665c;
    func_0x00010a6e5d5c(auStack_98,*param_1 + 0x98,(int)param_2[4]);
    if ((bStack_60 & 1) != 0) {
      FUN_10a81e668(lStack_a8,auStack_98,param_2[5] + 0x18);
      if (bStack_60 == 1) {
        if (3 < (ulong)bStack_68) goto LAB_10a84665c;
        (*(code *)(&PTR_FUN_110c14970)[bStack_68])(auStack_98);
      }
      goto LAB_10a846488;
    }
  }
  puVar5 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  uStack_a9 = 0x13;
  *(undefined4 *)((long)unaff_x23 + 0x27) = 0x20657079;
  unaff_x23[4] = (undefined8 **)0x797420666f20746e;
  unaff_x23[3] = (undefined8 **)0x65746e6f63206f6e;
  uStack_ad = 0;
  __ZNSt3__19to_stringEi(&ppuStack_d8,(int)param_2[4]);
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    ppuStack_d8 = &ppuStack_d8;
  }
  puVar6 = auStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuStack_d8,uStack_d0);
  uStack_1f8 = puVar6[1];
  uStack_200 = *puVar6;
  uStack_1f0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  FUN_10a002a94(puVar5,&uStack_200);
  *puVar5 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar5,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a84665c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a846660);
  (*pcVar4)();
}



/* Entry: 10a846814; end: 10a846893;  */

void FUN_10a846814(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a846894; end: 10a8468b3;  */

void FUN_10a846894(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c22578;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8468b4; end: 10a84698f;  */

void FUN_10a8468b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  FUN_10a845294(param_1 + 0x30);
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



/* Entry: 10a846990; end: 10a846993;  */

void FUN_10a846990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a846994; end: 10a846a47;  */

undefined8 * FUN_10a846994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c225c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a711ef8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a846a48; end: 10a846b07;  */

void FUN_10a846a48(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          FUN_10a711ef8(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a846ad8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a846ad8:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
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
        FUN_109d1b3c4(plVar4,1,plVar7);
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
  } while( true );
}



/* Entry: 10a846b08; end: 10a846f0f;  */

void FUN_10a846b08(long *param_1,undefined8 param_2)

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
  *puVar5 = FUN_10a853ba4;
  puVar5[1] = FUN_10a853ed4;
  puVar5[0xc] = param_2;
  FUN_10a846f10(puVar5 + 2);
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
  FUN_10a846ff0(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
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
      FUN_10a846fb0(puVar5 + 2,lVar6 + 0x98);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a846de4);
  (*pcVar4)();
}



/* Entry: 10a846f10; end: 10a846faf;  */

undefined8 * FUN_10a846f10(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c225c8;
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



/* Entry: 10a846fb0; end: 10a846fef;  */

void FUN_10a846fb0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a847574(*plVar6);
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



/* Entry: 10a846ff0; end: 10a847573;  */

/* WARNING: Removing unreachable block (ram,0x00010a847148) */
/* WARNING: Removing unreachable block (ram,0x00010a847358) */
/* WARNING: Removing unreachable block (ram,0x00010a847108) */
/* WARNING: Removing unreachable block (ram,0x00010a84729c) */

void FUN_10a846ff0(long *param_1,long *param_2,long param_3)

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
  *plVar4 = (long)&PTR_FUN_110c22600;
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
          pcStack_68 = FUN_10a847628;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a847288;
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
LAB_10a8474c8:
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
LAB_10a847288:
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
        pcStack_68 = FUN_10a847738;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a8474c4;
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
LAB_10a84736c:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a8474bc;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a84736c;
  pcStack_68 = FUN_10a847628;
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
LAB_10a8474bc:
  *param_1 = (long)plVar4;
LAB_10a8474c4:
  plStack_80 = (long *)0x0;
  goto LAB_10a8474c8;
}



/* Entry: 10a847574; end: 10a847627;  */

void FUN_10a847574(long param_1,undefined8 *param_2)

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
          FUN_10a711ef8(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        lVar4 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
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



/* Entry: 10a847628; end: 10a847737;  */

void FUN_10a847628(long *param_1)

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
  pcStack_38 = FUN_10a847738;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a847734);
      (*pcVar4)();
    }
    FUN_10a847574(lVar7,*param_1 + 0x98);
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
  FUN_10a847ad8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a847738; end: 10a847817;  */

void FUN_10a847738(long param_1)

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
  pcStack_48 = FUN_10a847628;
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
  FUN_10a847ad8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a847818; end: 10a84788b;  */

long * FUN_10a847818(long *param_1)

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



/* Entry: 10a84788c; end: 10a847ad7;  */

undefined8 * FUN_10a84788c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c22600;
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
  *param_1 = &PTR_FUN_110c225c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a711ef8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a847ad8; end: 10a847bfb;  */

void FUN_10a847ad8(long param_1,undefined8 *param_2)

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



/* Entry: 10a847bfc; end: 10a848027;  */

/* WARNING: Removing unreachable block (ram,0x00010a847dac) */
/* WARNING: Removing unreachable block (ram,0x00010a847c9c) */
/* WARNING: Removing unreachable block (ram,0x00010a847fc0) */

void FUN_10a847bfc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  code **ppcVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 uStack_1bb;
  char cStack_1b1;
  undefined8 ****appppuStack_1b0 [2];
  char cStack_199;
  byte bStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  char cStack_128;
  undefined8 uStack_120;
  char cStack_109;
  undefined8 uStack_e8;
  char cStack_d1;
  undefined8 uStack_d0;
  char cStack_b9;
  char cStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ****ppppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte bStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = (undefined8 *****)&pppuStack_98;
  ppcVar8 = (code **)(param_2 + 0x10);
  FUN_10a81e010();
  if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
    pppuVar11 = (undefined8 ***)pppuStack_98[3];
    pppppuVar6 = appppuStack_1b0;
    func_0x000107c2b054(pppppuVar6,&UNK_10f67ccad);
    pppuVar9 = (undefined8 ***)pppuStack_98[4];
    if (*(char *)((long)pppuVar9 + 0xff) < '\0') {
      pppppuVar6 = (undefined8 *****)&pppuStack_b0;
      func_0x000107c3192c(pppppuVar6,pppuVar9[0x1d],pppuVar9[0x1e]);
    }
    else {
      puStack_a8 = pppuVar9[0x1e];
      pppuStack_b0 = (undefined8 ***)pppuVar9[0x1d];
      puStack_a0 = pppuVar9[0x1f];
    }
    if (pppuVar11 != (undefined8 ***)0x0) {
      pppppuVar6 = (undefined8 *****)pppuVar11[0x11b];
      FUN_10a76bdb0(pppppuVar6,appppuStack_1b0,&pppuStack_b0);
    }
    if (cStack_199 < '\0') {
      pppppuVar6 = (undefined8 *****)appppuStack_1b0[0];
      __ZdlPv();
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuStack_98[0x1a] = pppppuVar6;
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0x1b8) & 1) == 0) {
LAB_10a847efc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a847f00);
      (*pcVar5)();
    }
    FUN_10a6e51b8(appppuStack_1b0,*param_1 + 0x98);
    if ((bStack_180 & 1) == 0) {
      func_0x000107c2b054(&pcStack_88,&UNK_10f67ccc6);
      ppcVar8 = &pcStack_88;
      FUN_10a81f438(pppuStack_98);
    }
    else {
      bStack_58 = 3;
      FUN_10a700d88(&pcStack_88,appppuStack_1b0);
      bStack_58 = 0;
      FUN_10a81e5c4(pppuStack_98,&pcStack_88,pppuStack_98 + 0xd);
      if (3 < (ulong)bStack_58) goto LAB_10a847efc;
      (*(code *)(&PTR_FUN_110c14970)[bStack_58])(&pcStack_88);
      pppuVar9 = (undefined8 ***)pppuStack_98[0xd];
      uStack_70 = *(undefined8 *)(param_2 + 0x18);
      uStack_78 = *(undefined8 *)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x18) + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = FUN_10a848028;
      ppuStack_80 = &PTR_FUN_110c22628;
      ppcVar8 = &pcStack_88;
      FUN_10a845d18(pppuVar9);
      (*(code *)*ppuStack_80)(&ppuStack_80);
    }
    if ((cStack_b8 == '\x01') && (cStack_b9 < '\0')) {
      __ZdlPv(uStack_d0);
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(uStack_e8);
    }
    if (cStack_109 < '\0') {
      __ZdlPv(uStack_120);
    }
    if ((cStack_128 == '\x01') && (cStack_129 < '\0')) {
      __ZdlPv(uStack_140);
    }
    FUN_10a700ce4(auStack_178);
    pppppuVar6 = appppuStack_1b0;
    FUN_10a700ce4();
  }
  while( true ) {
    pppppuVar7 = (undefined8 *****)ppppuStack_90;
    if ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)(ppppuStack_90 + 1);
      do {
        ppppuVar10 = *pppppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
        if (bVar4) {
          *pppppuVar2 = (undefined8 ****)((long)ppppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar10 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_90)[2])(ppppuStack_90);
        pppppuVar6 = pppppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
    if (cStack_199 < '\0') {
      __ZdlPv(appppuStack_1b0[0]);
    }
    do {
      FUN_10a84530c(&pppuStack_98);
      __Unwind_Resume();
    } while ((int)ppcVar8 != 1);
    ___cxa_begin_catch();
    cStack_1b1 = '\r';
    uStack_1c8 = 0x7573206f6e;
    uStack_1c3 = 0x616d6d;
    uStack_1c0 = 0x202d207972;
    uStack_1bb = 0;
    (*(code *)(*pppppuVar6)[2])();
    FUN_10a012db0(&pcStack_88,&uStack_1c8,pppppuVar6);
    ppcVar8 = &pcStack_88;
    FUN_10a81f438();
    pppppuVar6 = pppppuVar7;
    if (cStack_1b1 < '\0') {
      pppppuVar6 = (undefined8 *****)CONCAT35(uStack_1c3,uStack_1c8);
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a848028; end: 10a84826b;  */

void FUN_10a848028(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_68 [2];
  char cStack_51;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a81e010(&lStack_40,param_2 + 0x10);
  if (lStack_40 != 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8481a0);
      (*pcVar4)();
    }
    FUN_10a6f4d6c(&lStack_50,*(undefined8 *)(*param_1 + 0x98));
    if (lStack_50 == 0) {
      func_0x000107c2b054(auStack_68,&UNK_10f67cced);
      FUN_10a81f438(lStack_40,auStack_68);
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
    }
    else {
      lVar5 = *(long *)(lStack_40 + 0x18);
      puVar6 = auStack_68;
      func_0x000107c2b054(puVar6,&UNK_10f67ccd4);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar5 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar6 - *(long *)(lStack_40 + 0xd0)) / 1e+09),
                      *(undefined8 *)(lVar5 + 0x8d8),auStack_68);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
      puVar6 = *(undefined8 **)(lStack_40 + 0x88);
      func_0x00010a847b48(*puVar6,&lStack_50);
      FUN_10a845094(puVar6);
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a84826c; end: 10a84832b;  */

void FUN_10a84826c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a84832c; end: 10a848383;  */

long FUN_10a84832c(long param_1)

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



/* Entry: 10a848384; end: 10a84877b;  */

/* WARNING: Removing unreachable block (ram,0x00010a848564) */
/* WARNING: Removing unreachable block (ram,0x00010a848574) */

void FUN_10a848384(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  long lVar10;
  long lVar11;
  undefined8 auStack_280 [2];
  char cStack_269;
  int iStack_1c0;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(param_2 + 0x20);
  if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0))
  {
LAB_10a8485ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10a84857c:
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      goto LAB_10a8485ac;
    }
    lVar10 = *(long *)(param_2 + 0x10);
    uStack_108 = param_1[1];
    uStack_110 = *param_1;
    uStack_100 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    unaff_x22 = &uStack_110;
    uStack_f0 = param_1[4];
    uStack_f8 = param_1[3];
    uStack_e8 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uStack_e0 = *(undefined4 *)(param_1 + 6);
    uStack_d8 = param_1[7];
    uStack_d0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_c8,param_1 + 9);
    uStack_90 = param_1[0x10];
    uStack_88 = *(undefined4 *)(param_1 + 0x11);
    FUN_10a0424c4(auStack_80,param_1 + 0x12);
    lVar11 = *(long *)(lVar10 + 0x18);
    **(undefined4 **)(lVar10 + 0x30) = uStack_e0;
    uVar7 = 0;
    FUN_10a0f0eb8();
    if ((uVar7 & 1) != 0) {
      ppuStack_160 = &PTR_FUN_110c78e70;
      uStack_158 = 0;
      uStack_150 = 0;
      ppuStack_148 = (undefined **)0x0;
      FUN_10a0f10ac(&ppuStack_160,uStack_d8,uStack_90);
      lVar8 = *(long *)(lVar11 + 0x18);
      puVar9 = auStack_280;
      func_0x000107c2b054(puVar9,&UNK_10f67ccff);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar8 != 0) {
        FUN_10a76bf84((double)((long)puVar9 - *(long *)(lVar10 + 0x40)) / 1000000.0,
                      *(undefined8 *)(lVar8 + 0x8d8),auStack_280);
      }
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
      }
      puVar9 = *(undefined8 **)(lVar11 + 0x58);
      ppuVar2 = &PTR_PTR_11330c590;
      if (ppuStack_148 != (undefined **)0x0) {
        ppuVar2 = ppuStack_148;
      }
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      FUN_10a6e5564(auStack_280,ppuVar2,&uStack_140);
      func_0x00010a71259c(&uStack_140);
      if (iStack_1c0 != 4) {
        FUN_10a00946c(&UNK_10f67a9ac);
        goto LAB_10a8485fc;
      }
      FUN_10a844268(*puVar9,auStack_280);
      FUN_10a8440d0(puVar9);
      FUN_10a6fd048(auStack_280);
      FUN_10ae0fac8(&ppuStack_160);
      func_0x000104c4f944(auStack_80);
      FUN_10a042634(&uStack_d8);
      goto LAB_10a84857c;
    }
  }
  FUN_10a109200(unaff_x22 + 3);
LAB_10a8485fc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a848600);
  (*pcVar5)();
}



/* Entry: 10a84877c; end: 10a8487a7;  */

undefined8 * FUN_10a84877c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a8487a8; end: 10a848857;  */

void FUN_10a8487a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x940);
  plVar6 = *(long **)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
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
  }
  FUN_10a25f3f4(uVar4,&uStack_30);
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
  return;
}



/* Entry: 10a848858; end: 10a8488cb;  */

long FUN_10a848858(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a8488cc; end: 10a8488eb;  */

void FUN_10a8488cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c226b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8488ec; end: 10a8488fb;  */

void FUN_10a8488ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8488f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a8488fc; end: 10a84895b;  */

void FUN_10a8488fc(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67ce46,0x2c0,&UNK_10f67ced6,in_x6,in_x7,
                        **(undefined4 **)(param_1 + 0x10),&UNK_10e4dd060);
  }
  return;
}



/* Entry: 10a84895c; end: 10a8489b3;  */

long FUN_10a84895c(long param_1)

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



/* Entry: 10a8489b4; end: 10a848af3;  */

void FUN_10a8489b4(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x18);
  puVar1 = auStack_158;
  func_0x000107c2b054(puVar1,&UNK_10f67aa90);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (lVar3 != 0) {
    FUN_10a76bf84((double)((long)puVar1 - *(long *)(param_1 + 0x28)) / 1000000.0,
                  *(undefined8 *)(lVar3 + 0x8d8),auStack_158);
  }
  if (cStack_141 < '\0') {
    __ZdlPv(auStack_158[0]);
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67ce46,0x2c7,&UNK_10f67cf19,in_x6,in_x7,
                        **(undefined4 **)(param_1 + 0x18),&UNK_10e4dd060);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x58);
  FUN_10a009538(auStack_158,&UNK_10f67cf5f);
  FUN_10a05bde0(auStack_38,auStack_158);
  func_0x000109d1b350(*puVar1,auStack_38);
  FUN_10a8440d0(puVar1);
  __ZNSt13exception_ptrD1Ev(auStack_38);
  __ZNSt13runtime_errorD2Ev(auStack_158);
  return;
}



/* Entry: 10a848af4; end: 10a848b6b;  */

long FUN_10a848af4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a848b6c; end: 10a848be3;  */

void FUN_10a848b6c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a84832c(lVar2 + 0x58);
  if ((ulong)*(byte *)(lVar2 + 0x50) < 4) {
    (*(code *)(&PTR_FUN_110c14970)[*(byte *)(lVar2 + 0x50)])(lVar2 + 0x20);
    if (*(char *)(lVar2 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a848be4);
  (*pcVar1)();
}



/* Entry: 10a848be4; end: 10a848bfb;  */

void FUN_10a848be4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a848bfc; end: 10a848d17;  */

void FUN_10a848bfc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_38;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c22730;
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  *puVar4 = *puVar6;
  if (*(char *)((long)puVar6 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar4 + 1,puVar6[1],puVar6[2]);
  }
  else {
    uVar8 = puVar6[2];
    uVar7 = puVar6[1];
    puVar4[3] = puVar6[3];
    puVar4[2] = uVar8;
    puVar4[1] = uVar7;
  }
  puStack_38 = puVar4 + 4;
  *(undefined1 *)(puVar4 + 10) = 3;
  FUN_10a700d30(&puStack_38,puVar6 + 4,*(undefined1 *)(puVar6 + 10));
  *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar6 + 10);
  lVar5 = puVar6[0xc];
  uVar7 = puVar6[0xb];
  puVar4[0xc] = puVar6[0xc];
  puVar4[0xb] = uVar7;
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
  lVar5 = puVar6[0xe];
  uVar7 = puVar6[0xd];
  puVar4[0xe] = puVar6[0xe];
  puVar4[0xd] = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a848d18; end: 10a848d77;  */

void FUN_10a848d18(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67cf7a,0x315,&UNK_10f67d048,in_x6,in_x7,plVar1);
  }
  return;
}



/* Entry: 10a848d78; end: 10a848de7;  */

void FUN_10a848d78(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a848de8; end: 10a848f1b;  */

void FUN_10a848de8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [288];
  undefined1 auStack_48 [8];
  undefined8 *puStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x28);
      puStack_40 = puVar6;
      plStack_38 = plVar3;
      if (puVar6 != (undefined8 *)0x0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar4 = (long *)(param_1 + 0x10);
          if (*(char *)(param_1 + 0x27) < '\0') {
            plVar4 = (long *)*plVar4;
          }
          func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67cf7a,0x319,&UNK_10f67d082,in_x6,in_x7,
                              plVar4);
        }
        FUN_10a009538(auStack_168,&UNK_10f67d0bd);
        FUN_10a05bde0(auStack_48,auStack_168);
        func_0x000109d1b350(*puVar6,auStack_48);
        FUN_10a837d80(puVar6);
        __ZNSt13exception_ptrD1Ev(auStack_48);
        __ZNSt13runtime_errorD2Ev(auStack_168);
      }
      plVar4 = plVar3 + 1;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}


