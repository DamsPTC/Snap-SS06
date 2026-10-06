/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4c3afc; end: 10a4c3ba3;  */

void FUN_10a4c3afc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a4c3ba4; end: 10a4c3c43;  */

void FUN_10a4c3ba4(long param_1)

{
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  char cStack_b0;
  undefined1 auStack_a8 [104];
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_10aab72d4(auStack_e0);
    FUN_10aab73e4(param_1,auStack_e0);
    puStack_28 = auStack_40;
    FUN_10a22d224(&puStack_28);
    FUN_10a22ce48(auStack_a8);
    if ((cStack_b0 == '\x01') && (lStack_c8 != 0)) {
      lStack_c0 = lStack_c8;
      __ZdlPv();
    }
    return;
  }
  FUN_10aab72d4(auStack_e0);
  FUN_10a4c3cb8(param_1,auStack_e0);
  puStack_28 = auStack_40;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(auStack_a8);
  if ((cStack_b0 == '\x01') && (lStack_c8 != 0)) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a4c3c44; end: 10a4c3cb7;  */

void FUN_10a4c3c44(undefined8 param_1)

{
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  char cStack_b0;
  undefined1 auStack_a8 [104];
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  FUN_10aab72d4(auStack_e0);
  FUN_10aab73e4(param_1,auStack_e0);
  puStack_28 = auStack_40;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(auStack_a8);
  if ((cStack_b0 == '\x01') && (lStack_c8 != 0)) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a4c3cb8; end: 10a4c3d57;  */

undefined8 * FUN_10a4c3cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x17) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    func_0x00010a230998(param_1 + 3,param_2 + 3);
    func_0x00010a230a6c(param_1 + 7,param_2 + 7);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    FUN_10a230b90(param_1 + 0x14);
    uVar1 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar1;
    param_1[0x16] = param_2[0x16];
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
  }
  else {
    FUN_10a230bf4(param_1,param_2);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return param_1;
}



/* Entry: 10a4c3d58; end: 10a4c3daf;  */

undefined8 FUN_10a4c3d58(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x570;
  __Znwm(0x570);
  FUN_10a4a83a4();
  return uVar1;
}



/* Entry: 10a4c3db0; end: 10a4c3db3;  */

void FUN_10a4c3db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a4c3db4; end: 10a4c3dc7;  */

void FUN_10a4c3db4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c3dc8; end: 10a4c3de3;  */

void FUN_10a4c3dc8(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a4c3de4; end: 10a4c3e1f;  */

long FUN_10a4c3de4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4c3e20; end: 10a4c3e23;  */

void FUN_10a4c3e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c3e24; end: 10a4c3e7b;  */

long FUN_10a4c3e24(long param_1)

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



/* Entry: 10a4c3e7c; end: 10a4c3e8b;  */

void FUN_10a4c3e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be7418;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a4c3e8c; end: 10a4c3eab;  */

void FUN_10a4c3e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be7418;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c3eac; end: 10a4c3ebb;  */

void FUN_10a4c3eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4c3eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a4c3ebc; end: 10a4c3f7f;  */

void FUN_10a4c3ebc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0xa9];
  (**(code **)(*plVar4 + 0x40))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a4c3f80; end: 10a4c404f;  */

void FUN_10a4c3f80(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  (**(code **)(*(long *)plVar4[0xa9] + 0x48))((long *)plVar4[0xa9],param_2);
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



/* Entry: 10a4c4050; end: 10a4c411f;  */

void FUN_10a4c4050(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
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
  ppuVar3 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar4 = ppuVar3;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(ppuVar3,ppuVar4);
    param_2 = ppuVar4;
    if (ppuVar3 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a4c4050(plVar6,param_2);
  FUN_10a052e3c(param_4);
  plVar6 = (long *)plVar6[0xaa];
  (**(code **)(*plVar6 + 0x40))();
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar6;
  plVar6 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
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
  lVar7 = *plVar6;
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
        plStack_a8 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_c8 = lVar7;
          lStack_c0 = lVar7;
          lStack_b8 = lVar7;
          lStack_b0 = lVar13;
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



/* Entry: 10a4c4120; end: 10a4c41e3;  */

void FUN_10a4c4120(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0xaa];
  (**(code **)(*plVar4 + 0x40))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a4c41e4; end: 10a4c42b3;  */

void FUN_10a4c41e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  (**(code **)(*(long *)plVar4[0xaa] + 0x48))((long *)plVar4[0xaa],param_2);
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



/* Entry: 10a4c42b4; end: 10a4c43d3;  */

void FUN_10a4c42b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = *(long *)(plVar16[0xaa] + 0x48);
  plVar16 = *(long **)(plVar16[0xaa] + 0x48);
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar7 = lVar8 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar16[lVar8 + 2];
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
  lVar8 = *plVar16;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar16;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar16 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a4c43d4; end: 10a4c453b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4c44b4) */
/* WARNING: Removing unreachable block (ram,0x00010a4c44b8) */
/* WARNING: Removing unreachable block (ram,0x00010a4c44c0) */
/* WARNING: Removing unreachable block (ram,0x00010a4c44c8) */
/* WARNING: Removing unreachable block (ram,0x00010a4c44cc) */

void FUN_10a4c43d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a065cb8(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a4ab1d0(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a4c453c; end: 10a4c45fb;  */

void FUN_10a4c453c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  short sVar2;
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  sVar2 = *(short *)(param_2[0xa7] + 0x10a);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)sVar2;
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



/* Entry: 10a4c45fc; end: 10a4c46d7;  */

void FUN_10a4c45fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if (0x7f < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652c32);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4c46c4);
    (*pcVar1)();
  }
  *(short *)(plVar4[0xa7] + 0x10a) = (short)param_2;
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



/* Entry: 10a4c46d8; end: 10a4c4793;  */

void FUN_10a4c46d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3af424(param_1,param_2,plVar4[0xa7] + 0xe8);
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



/* Entry: 10a4c4794; end: 10a4c4897;  */

void FUN_10a4c4794(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a3af5a8(param_5);
  if (1 < *param_4) {
    FUN_10a3af5cc(&stack0xffffffffffffffa8,param_2,param_4);
  }
  FUN_10a3a754c(plVar4[0xa7] + 0xe8,&stack0xffffffffffffffa8);
  FUN_10a3a75a8(&stack0xffffffffffffffa8);
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



/* Entry: 10a4c4898; end: 10a4c4957;  */

void FUN_10a4c4898(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  undefined8 uVar14;
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = param_2[0xa7];
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(ushort *)(lVar6 + 0x108));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a4c4958; end: 10a4c4a33;  */

void FUN_10a4c4958(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if (0x7f < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652c32);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4c4a20);
    (*pcVar1)();
  }
  *(short *)(plVar4[0xa7] + 0x108) = (short)param_2;
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



/* Entry: 10a4c4a34; end: 10a4c4aff;  */

void FUN_10a4c4a34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  double dVar14;
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[0xa9] == 0) {
    dVar14 = 1.0;
  }
  else {
    dVar14 = (double)*(float *)(param_2[0xa9] + 0xc);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14;
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



/* Entry: 10a4c4b00; end: 10a4c4bf7;  */

void FUN_10a4c4b00(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4c4be4);
    (*pcVar2)();
  }
  if (param_2[0xa9] != 0) {
    fVar14 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar14 = 0.0;
    }
    *(float *)(param_2[0xa9] + 0xc) = fVar14;
  }
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



/* Entry: 10a4c4bf8; end: 10a4c4ccf;  */

void FUN_10a4c4bf8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)(plVar4[0xa7] +
                   *(long *)(&UNK_10e4b9c48 + (ulong)*(uint *)(plVar4[0xa7] + 0x104) * 8));
  lVar5 = *plVar4;
  FUN_10a2a90b0(param_1,param_2,lVar5,plVar4[1] - lVar5 >> 2);
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



/* Entry: 10a4c4cd0; end: 10a4c4d87;  */

void FUN_10a4c4cd0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4d88(param_1,param_2,FUN_10a4ab6b4,0,param_3,param_4,param_5);
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



/* Entry: 10a4c4d88; end: 10a4c4e7f;  */

void FUN_10a4c4d88(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  lVar2 = param_2;
  func_0x00010a4c40b8(param_2,param_5);
  FUN_10a4c4e80(param_7);
  FUN_10a36c768(&lStack_90,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  lStack_68 = lStack_88;
  lStack_70 = lStack_90;
  uStack_60 = uStack_80;
  lStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  (*param_3)(plVar1,&lStack_70);
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a4c4e80; end: 10a4c4ea3;  */

void FUN_10a4c4e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  FUN_10a4c4050(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[0xa3];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
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



/* Entry: 10a4c4ea4; end: 10a4c4f5b;  */

void FUN_10a4c4ea4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xa3];
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



/* Entry: 10a4c4f5c; end: 10a4c5023;  */

void FUN_10a4c4f5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a4ab71c(plVar4,param_2);
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



/* Entry: 10a4c5024; end: 10a4c50e7;  */

void FUN_10a4c5024(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *(long *)(plVar4[0xa7] + 0x140);
  FUN_10a2a90b0(param_1,param_2,lVar5,*(long *)(plVar4[0xa7] + 0x148) - lVar5 >> 2);
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



/* Entry: 10a4c50e8; end: 10a4c519f;  */

void FUN_10a4c50e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4d88(param_1,param_2,FUN_10a4ab7a0,0,param_3,param_4,param_5);
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



/* Entry: 10a4c51a0; end: 10a4c5263;  */

void FUN_10a4c51a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *(long *)(plVar4[0xa7] + 0x158);
  FUN_10a386ea0(param_1,param_2,lVar5,*(long *)(plVar4[0xa7] + 0x160) - lVar5 >> 1);
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



/* Entry: 10a4c5264; end: 10a4c538f;  */

void FUN_10a4c5264(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a4c5390(param_5);
  FUN_10a4c53b4(&lStack_80,param_2,param_4);
  lVar5 = lStack_80;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  FUN_10a4abd84(plVar4,&stack0xffffffffffffffa0);
  if (lVar5 != 0) {
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
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



/* Entry: 10a4c5390; end: 10a4c53b3;  */

void FUN_10a4c5390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long **pplVar8;
  long lVar9;
  ulong uVar10;
  long *extraout_x8;
  undefined4 *extraout_x8_00;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_60;
  undefined8 *puStack_58;
  undefined2 uStack_4a;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  piVar7 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  pplVar8 = &plStack_60;
  if (*piVar7 == 7) {
    plVar5 = plVar4;
    (**(code **)(*plVar4 + 0x98))();
    plVar13 = plVar4;
    plStack_60 = plVar5;
    (**(code **)(*plVar4 + 0x208))(plVar4,&plStack_60);
    if (((ulong)plVar13 & 1) != 0) {
      plStack_48 = plStack_60;
      plVar5 = plVar4;
      (**(code **)(*plVar4 + 0x268))(plVar4,&plStack_48);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      func_0x00010730b9d0(extraout_x8,plVar5);
      if (plVar5 != (long *)0x0) {
        plVar13 = (long *)0x0;
        do {
          (**(code **)(*plVar4 + 0x288))(&plStack_60,plVar4,&plStack_48,plVar13);
          plVar6 = plVar4;
          func_0x00010a2e40b8(plVar4,&plStack_60);
          uStack_4a = SUB82(plVar6,0);
          FUN_10a14f5d0(extraout_x8,&uStack_4a);
          if ((3 < (int)plStack_60) && (puStack_58 != (undefined8 *)0x0)) {
            (**(code **)*puStack_58)();
          }
          plVar13 = (long *)((long)plVar13 + 1);
        } while (plVar5 != plVar13);
      }
      if (plStack_48 != (long *)0x0) {
        (**(code **)*plStack_48)();
      }
      return;
    }
    piVar7 = (int *)pplVar8;
    if (plStack_60 != (long *)0x0) {
      (**(code **)*plStack_60)();
      piVar7 = (int *)pplVar8;
    }
  }
  plVar4 = (long *)&UNK_10f58253c;
  func_0x00010988bd28();
  if (*extraout_x8 != 0) {
    extraout_x8[1] = *extraout_x8;
    __ZdlPv();
  }
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  __Unwind_Resume();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a4c4050(plVar4,piVar7);
  FUN_10a052e3c(param_4);
  bVar1 = *(byte *)(plVar4[0xa7] + 0x100);
  *extraout_x8_00 = 2;
  *(byte *)(extraout_x8_00 + 2) = bVar1 >> 1 & 1;
  plVar4 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar10 = lVar9 - 1;
  plVar5[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar4[lVar9 + 2];
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar4;
  lVar15 = plVar5[0x4c];
  lVar12 = lVar15 - lVar9;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar5[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar4;
        if (uVar11 >> 0x3c == 0) {
          lVar3 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar3 + lVar12;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar9,lVar12);
          *plVar4 = lVar14;
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
          plVar5[0x4d] = lVar3 + uVar11 * 0x10;
          lStack_e8 = lVar9;
          lStack_e0 = lVar9;
          lStack_d8 = lVar9;
          lStack_d0 = lVar16;
          func_0x00010988c1b8(&lStack_e8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar5[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar15 != lVar9) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar10;
  return;
}



/* Entry: 10a4c53b4; end: 10a4c5553;  */

void FUN_10a4c53b4(long *param_1,long *param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_50;
  undefined8 *puStack_48;
  undefined2 uStack_3a;
  long *plStack_38;
  
  pplVar6 = &plStack_50;
  if (*param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar11 = param_2;
    plStack_50 = plVar4;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_50);
    if (((ulong)plVar11 & 1) != 0) {
      plStack_38 = plStack_50;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x268))(param_2,&plStack_38);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      func_0x00010730b9d0(param_1,plVar4);
      if (plVar4 != (long *)0x0) {
        plVar11 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(&plStack_50,param_2,&plStack_38,plVar11);
          plVar5 = param_2;
          func_0x00010a2e40b8(param_2,&plStack_50);
          uStack_3a = SUB82(plVar5,0);
          FUN_10a14f5d0(param_1,&uStack_3a);
          if ((3 < (int)plStack_50) && (puStack_48 != (undefined8 *)0x0)) {
            (**(code **)*puStack_48)();
          }
          plVar11 = (long *)((long)plVar11 + 1);
        } while (plVar4 != plVar11);
      }
      if (plStack_38 != (long *)0x0) {
        (**(code **)*plStack_38)();
      }
      return;
    }
    param_3 = (int *)pplVar6;
    if (plStack_50 != (long *)0x0) {
      (**(code **)*plStack_50)();
      param_3 = (int *)pplVar6;
    }
  }
  plVar4 = (long *)&UNK_10f58253c;
  func_0x00010988bd28();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  if (plStack_38 != (long *)0x0) {
    (**(code **)*plStack_38)();
  }
  __Unwind_Resume();
  plVar11 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  FUN_10a4c4050(plVar4,param_3);
  FUN_10a052e3c(param_5);
  bVar1 = *(byte *)(plVar4[0xa7] + 0x100);
  *extraout_x8 = 2;
  *(byte *)(extraout_x8 + 2) = bVar1 >> 1 & 1;
  plVar4 = plVar11 + 0x4b;
  lVar7 = plVar11[0x59];
  uVar8 = lVar7 - 1;
  plVar11[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar11[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar11[0x57] + -8);
    plVar11[0x57] = plVar11[0x57] + -8;
    if (plVar11[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar13 = plVar11[0x4c];
  lVar10 = lVar13 - lVar7;
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar11[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar10;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar7,lVar10);
          *plVar4 = lVar12;
          plVar11[0x4c] = lVar13 + uVar16 * 0x10;
          plVar11[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_d8 = lVar7;
          lStack_d0 = lVar7;
          lStack_c8 = lVar7;
          lStack_c0 = lVar14;
          func_0x00010988c1b8(&lStack_d8);
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
    plVar11[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar13 != lVar7) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar11[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar8;
  return;
}



/* Entry: 10a4c5554; end: 10a4c5613;  */

void FUN_10a4c5554(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2[0xa7] + 0x100);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 1 & 1;
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



/* Entry: 10a4c5614; end: 10a4c56ef;  */

void FUN_10a4c5614(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
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
  func_0x00010a4c40b8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar8 = 2;
  if ((int)param_2 == 0) {
    bVar8 = 0;
  }
  *(byte *)(plVar4[0xa7] + 0x100) = *(byte *)(plVar4[0xa7] + 0x100) & 0xfd | bVar8;
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
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a4c56f0; end: 10a4c57a7;  */

void FUN_10a4c56f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a4c4050(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3b04a0(param_1,param_2,plVar4 + 0x9f);
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



/* Entry: 10a4c57a8; end: 10a4c57ff;  */

undefined8 FUN_10a4c57a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x578;
  __Znwm(0x578);
  FUN_10a4aa85c();
  return uVar1;
}



/* Entry: 10a4c5800; end: 10a4c5803;  */

void FUN_10a4c5800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a4c5804; end: 10a4c5817;  */

void FUN_10a4c5804(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c5818; end: 10a4c5833;  */

void FUN_10a4c5818(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a4c5834; end: 10a4c586f;  */

long FUN_10a4c5834(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4c5870; end: 10a4c5873;  */

void FUN_10a4c5870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c5874; end: 10a4c58cb;  */

long FUN_10a4c5874(long param_1)

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



/* Entry: 10a4c58cc; end: 10a4c58d7;  */

undefined8 FUN_10a4c58cc(void)

{
  return 0x16800000001;
}



/* Entry: 10a4c58d8; end: 10a4c5a33;  */

void FUN_10a4c58d8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  undefined4 auStack_40 [2];
  long *plStack_38;
  
  plVar8 = (long *)(param_1 + 0x10);
  puVar5 = (undefined8 *)*plVar8;
  iVar2 = *(int *)(param_2 + 0x24);
  if ((puVar5 == (undefined8 *)0x0) || (*(int *)(param_1 + 8) != iVar2)) {
    *(int *)(param_1 + 8) = iVar2;
    FUN_10a1b498c(auStack_40,iVar2,1);
    func_0x00010a343394(plVar8,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    puVar5 = (undefined8 *)*plVar8;
  }
  auStack_40[0] = 0;
  (**(code **)*puVar5)(&uStack_58,puVar5,param_2,auStack_40,&UNK_10e4b9e00);
  FUN_10aad356c(&lStack_48,param_1 + 0x20,uStack_58);
  lVar7 = lStack_48;
  plVar8 = (long *)(param_4 + 0x60);
  lVar6 = *plVar8;
  lStack_48 = 0;
  *plVar8 = lVar7;
  if (lVar6 != 0) {
    func_0x00010a502448(plVar8);
    lVar7 = lStack_48;
    lStack_48 = 0;
    if (lVar7 != 0) {
      func_0x00010a502448(&lStack_48);
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar8 = plStack_50 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  return;
}



/* Entry: 10a4c5a34; end: 10a4c5ae7;  */

long * FUN_10a4c5a34(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a502448(param_1);
  }
  return param_1;
}



/* Entry: 10a4c5ae8; end: 10a4c5e7b;  */

undefined8 * FUN_10a4c5ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110be7600;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = &PTR_DAT_110ba5598;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xe9) = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  auVar2 = NEON_fmov(0xbf800000,4);
  *(long *)((long)param_1 + 0x1ac) = auVar2._8_8_;
  *(long *)((long)param_1 + 0x1a4) = auVar2._0_8_;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x7fc00000;
  param_1[0x37] = 0x3f8000007fc00000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_110be85e0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  param_1[0x23] = puVar1;
  return param_1;
}



/* Entry: 10a4c5e7c; end: 10a4c5f4b;  */

long * FUN_10a4c5e7c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a50299c(param_1);
  }
  return param_1;
}



/* Entry: 10a4c5f4c; end: 10a4c5f4f;  */

long FUN_10a4c5f4c(long param_1)

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



/* Entry: 10a4c5f50; end: 10a4c633f;  */

long * FUN_10a4c5f50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a502728(param_1);
  }
  return param_1;
}



/* Entry: 10a4c6340; end: 10a4c6343;  */

undefined8 * FUN_10a4c6340(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110be7600;
  func_0x00010a234f7c(param_1 + 0x43);
  func_0x00010a042d30(param_1 + 0x41);
  FUN_10a502bf8(param_1 + 0x32,0);
  func_0x00010a502bbc(param_1 + 0x31,0);
  lVar1 = param_1[0x30];
  param_1[0x30] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10a502ab4(param_1 + 0x2f,0);
  func_0x00010a502a70(param_1 + 0x2e,0);
  lVar1 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar1 != 0) {
    func_0x00010a5029d4();
  }
  lVar1 = param_1[0x2b];
  param_1[0x2b] = 0;
  if (lVar1 != 0) {
    func_0x00010a50299c(param_1 + 0x2b);
  }
  lVar1 = param_1[0x2a];
  param_1[0x2a] = 0;
  if (lVar1 != 0) {
    func_0x00010a502888(param_1 + 0x2a);
  }
  lVar1 = param_1[0x29];
  param_1[0x29] = 0;
  if (lVar1 != 0) {
    func_0x00010a502838(param_1 + 0x29);
  }
  lVar1 = param_1[0x28];
  param_1[0x28] = 0;
  if (lVar1 != 0) {
    func_0x00010a5027e8(param_1 + 0x28);
  }
  func_0x00010a502790(param_1 + 0x26);
  func_0x00010a26df2c(param_1 + 0x25,0);
  lVar1 = param_1[0x24];
  param_1[0x24] = 0;
  if (lVar1 != 0) {
    func_0x00010a502760();
  }
  plVar2 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a293674(param_1 + 0x22,0);
  plVar2 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar1 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar1 != 0) {
    func_0x00010a502728();
  }
  lVar1 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar1 != 0) {
    func_0x00010a5026e4();
  }
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  lVar1 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a5026a0(param_1 + 0x14,0);
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    func_0x00010a502670();
  }
  lVar1 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar1 != 0) {
    func_0x00010a502568();
  }
  plVar2 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a2914e4(param_1 + 0x10,0);
  func_0x00010a2914e4(param_1 + 0xf,0);
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    func_0x00010a502490();
  }
  plVar2 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    func_0x00010a502448();
  }
  FUN_10a236e48(param_1 + 0xb,0);
  func_0x00010a234f44(param_1 + 6);
  return param_1;
}



/* Entry: 10a4c6344; end: 10a4c6357;  */

void FUN_10a4c6344(void)

{
  func_0x00010a4c60cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4c6358; end: 10a4c63bb;  */

undefined8 * FUN_10a4c6358(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a4c63bc; end: 10a4c63bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a4c671c) */

void FUN_10a4c63bc(long ***param_1,long param_2,undefined **param_3)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long ***ppplVar11;
  long ***ppplVar12;
  undefined **ppuVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long lVar16;
  long **pplVar17;
  long **pplVar18;
  long lVar19;
  long **pplVar20;
  char *pcVar21;
  undefined1 *puVar22;
  char *unaff_x21;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  long lVar29;
  long lVar30;
  undefined8 uStack_188;
  long ***ppplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  long ***ppplStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long ***ppplStack_148;
  long **pplStack_140;
  long ***ppplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  long *plStack_120;
  long lStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long ***ppplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long ***ppplStack_a8;
  long **pplStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7638);
  FUN_10a1025f4(param_2 + 0x10,param_3);
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7658);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xa8;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_FUN_110c447c8;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x1d);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x41);
    pcVar21 = (char *)((long)unaff_x21 + 0x49);
    pcVar21[0] = '\0';
    pcVar21[1] = '\0';
    pcVar21[2] = '\0';
    pcVar21[3] = '\0';
    pcVar21[4] = '\0';
    pcVar21[5] = '\0';
    pcVar21[6] = '\0';
    pcVar21[7] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    FUN_10a14b750((long **)((long)unaff_x21 + 0x68));
    plVar8 = *(long **)(param_2 + 0x68);
    *(char **)(param_2 + 0x68) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x68);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7658);
    FUN_10aac03e8(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7678);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x48;
    __Znwm();
    param_1 = (long ***)0x0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[8] = 0;
    pplStack_c0 = (long **)0x0;
    func_0x00010a5026a0(param_2 + 0xa0,puVar9);
    func_0x00010a5026a0(&pplStack_c0,0);
    puVar22 = *(undefined1 **)(param_2 + 0xa0);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7678);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be7978,0);
    *puVar22 = (char)ppuVar7;
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7998);
    if ((int)ppuVar7 != 0) {
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7998);
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x208))();
      unaff_x21 = puVar22 + 0x30;
      plVar8 = *(long **)unaff_x21;
      pplVar18 = *(long ***)(puVar22 + 0x38);
      pplVar20 = (long **)((ulong)ppuVar7 & 0xffffffff);
      lVar19 = (long)pplVar18 - (long)plVar8 >> 5;
      bVar6 = pplVar20 < (long **)(lVar19 * -0x5555555555555555);
      pcVar1 = (char *)((long)pplVar20 + lVar19 * 0x5555555555555555);
      lStack_150 = param_2;
      pplStack_130 = pplVar20;
      if (bVar6 || pcVar1 == (char *)0x0) {
        if (bVar6) {
          unaff_x21 = (char *)(plVar8 + (long)pplVar20 * 0xc);
          for (; pplVar18 != (long **)unaff_x21; pplVar18 = pplVar18 + -0xc) {
          }
          *(char **)(puVar22 + 0x38) = unaff_x21;
        }
      }
      else if ((char *)((*(long *)(puVar22 + 0x40) - (long)pplVar18 >> 5) * -0x5555555555555555) <
               pcVar1) {
        lVar16 = *(long *)(puVar22 + 0x40) - (long)plVar8 >> 5;
        pplVar17 = (long **)(lVar16 * 0x5555555555555556);
        if (pplVar17 < pplVar20 || (long)pplVar17 - (long)pplVar20 == 0) {
          pplVar17 = pplVar20;
        }
        if (0x155555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
          pplVar17 = (long **)0x2aaaaaaaaaaaaaa;
        }
        pplVar10 = (long **)unaff_x21;
        pplStack_a0 = (long **)unaff_x21;
        FUN_10a4f01c0();
        lVar16 = 0;
        pcVar21 = (char *)((long)pplVar10 + ((long)pplVar18 - (long)plVar8));
        ppplStack_138 = (long ***)(pcVar21 + ((ulong)pcVar1 & 0xffffffff) * 0x60);
        pplStack_c0 = pplVar10;
        pplStack_b8 = (long **)pcVar21;
        ppplStack_a8 = (long ***)(pplVar10 + (long)pplVar17 * 0xc);
        do {
          pcVar1 = pcVar21 + lVar16;
          pcVar1[0x48] = '\0';
          pcVar1[0x49] = '\0';
          pcVar1[0x4a] = '\0';
          pcVar1[0x4b] = '\0';
          pcVar1[0x4c] = '\0';
          pcVar1[0x4d] = '\0';
          pcVar1[0x4e] = '\0';
          pcVar1[0x4f] = '\0';
          pcVar1[0x40] = '\0';
          pcVar1[0x41] = '\0';
          pcVar1[0x42] = '\0';
          pcVar1[0x43] = '\0';
          pcVar1[0x44] = '\0';
          pcVar1[0x45] = '\0';
          pcVar1[0x46] = '\0';
          pcVar1[0x47] = '\0';
          pcVar1[0x58] = '\0';
          pcVar1[0x59] = '\0';
          pcVar1[0x5a] = '\0';
          pcVar1[0x5b] = '\0';
          pcVar1[0x5c] = '\0';
          pcVar1[0x5d] = '\0';
          pcVar1[0x5e] = '\0';
          pcVar1[0x5f] = '\0';
          pcVar1[0x50] = '\0';
          pcVar1[0x51] = '\0';
          pcVar1[0x52] = '\0';
          pcVar1[0x53] = '\0';
          pcVar1[0x54] = '\0';
          pcVar1[0x55] = '\0';
          pcVar1[0x56] = '\0';
          pcVar1[0x57] = '\0';
          pcVar1[0x28] = '\0';
          pcVar1[0x29] = '\0';
          pcVar1[0x2a] = '\0';
          pcVar1[0x2b] = '\0';
          pcVar1[0x2c] = '\0';
          pcVar1[0x2d] = '\0';
          pcVar1[0x2e] = '\0';
          pcVar1[0x2f] = '\0';
          pcVar1[0x20] = '\0';
          pcVar1[0x21] = '\0';
          pcVar1[0x22] = '\0';
          pcVar1[0x23] = '\0';
          pcVar1[0x24] = '\0';
          pcVar1[0x25] = '\0';
          pcVar1[0x26] = '\0';
          pcVar1[0x27] = '\0';
          pcVar1[0x38] = '\0';
          pcVar1[0x39] = '\0';
          pcVar1[0x3a] = '\0';
          pcVar1[0x3b] = '\0';
          pcVar1[0x3c] = '\0';
          pcVar1[0x3d] = '\0';
          pcVar1[0x3e] = '\0';
          pcVar1[0x3f] = '\0';
          pcVar1[0x30] = '\0';
          pcVar1[0x31] = '\0';
          pcVar1[0x32] = '\0';
          pcVar1[0x33] = '\0';
          pcVar1[0x34] = '\0';
          pcVar1[0x35] = '\0';
          pcVar1[0x36] = '\0';
          pcVar1[0x37] = '\0';
          pcVar1[8] = '\0';
          pcVar1[9] = '\0';
          pcVar1[10] = '\0';
          pcVar1[0xb] = '\0';
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1[0x18] = '\0';
          pcVar1[0x19] = '\0';
          pcVar1[0x1a] = '\0';
          pcVar1[0x1b] = '\0';
          pcVar1[0x1c] = '\0';
          pcVar1[0x1d] = '\0';
          pcVar1[0x1e] = '\0';
          pcVar1[0x1f] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[0x11] = '\0';
          pcVar1[0x12] = '\0';
          pcVar1[0x13] = '\0';
          pcVar1[0x14] = '\0';
          pcVar1[0x15] = '\0';
          pcVar1[0x16] = '\0';
          pcVar1[0x17] = '\0';
          func_0x000107c2b054(pcVar1,"");
          pcVar1[0x18] = '\0';
          pcVar1[0x19] = '\0';
          pcVar1[0x1a] = '\0';
          pcVar1[0x1b] = '\0';
          pcVar1[0x1c] = '\0';
          pcVar1[0x28] = '\0';
          pcVar1[0x29] = '\0';
          pcVar1[0x2a] = '\0';
          pcVar1[0x2b] = '\0';
          pcVar1[0x2c] = '\0';
          pcVar1[0x2d] = '\0';
          pcVar1[0x2e] = '\0';
          pcVar1[0x2f] = '\0';
          pcVar1[0x20] = '\0';
          pcVar1[0x21] = '\0';
          pcVar1[0x22] = -0x80;
          pcVar1[0x23] = '?';
          pcVar1[0x24] = '\0';
          pcVar1[0x25] = '\0';
          pcVar1[0x26] = '\0';
          pcVar1[0x27] = '\0';
          pcVar1[0x38] = '\0';
          pcVar1[0x39] = '\0';
          pcVar1[0x3a] = '\0';
          pcVar1[0x3b] = '\0';
          pcVar1[0x3c] = '\0';
          pcVar1[0x3d] = '\0';
          pcVar1[0x3e] = '\0';
          pcVar1[0x3f] = '\0';
          pcVar1[0x30] = '\0';
          pcVar1[0x31] = '\0';
          pcVar1[0x32] = '\0';
          pcVar1[0x33] = '\0';
          pcVar1[0x34] = '\0';
          pcVar1[0x35] = '\0';
          pcVar1[0x36] = -0x80;
          pcVar1[0x37] = '?';
          param_1 = (long ***)0x0;
          pcVar1[0x48] = '\0';
          pcVar1[0x49] = '\0';
          pcVar1[0x4a] = -0x80;
          pcVar1[0x4b] = '?';
          pcVar1[0x4c] = '\0';
          pcVar1[0x4d] = '\0';
          pcVar1[0x4e] = '\0';
          pcVar1[0x4f] = '\0';
          pcVar1[0x40] = '\0';
          pcVar1[0x41] = '\0';
          pcVar1[0x42] = '\0';
          pcVar1[0x43] = '\0';
          pcVar1[0x44] = '\0';
          pcVar1[0x45] = '\0';
          pcVar1[0x46] = '\0';
          pcVar1[0x47] = '\0';
          pcVar1[0x58] = '\0';
          pcVar1[0x59] = '\0';
          pcVar1[0x5a] = '\0';
          pcVar1[0x5b] = '\0';
          pcVar1[0x5c] = '\0';
          pcVar1[0x5d] = '\0';
          pcVar1[0x5e] = -0x80;
          pcVar1[0x5f] = '?';
          pcVar1[0x50] = '\0';
          pcVar1[0x51] = '\0';
          pcVar1[0x52] = '\0';
          pcVar1[0x53] = '\0';
          pcVar1[0x54] = '\0';
          pcVar1[0x55] = '\0';
          pcVar1[0x56] = '\0';
          pcVar1[0x57] = '\0';
          lVar16 = lVar16 + 0x60;
        } while ((long)pplVar20 * 0x60 + lVar19 * -0x20 != lVar16);
        lVar19 = *(long *)(puVar22 + 0x30);
        lVar16 = *(long *)(puVar22 + 0x38);
        func_0x00010a4f0204(unaff_x21,lVar19,lVar16,pcVar21 + (lVar19 - lVar16));
        pplStack_c0 = *(long ***)(puVar22 + 0x30);
        *(char **)(puVar22 + 0x30) = pcVar21 + (lVar19 - lVar16);
        *(long ****)(puVar22 + 0x38) = ppplStack_138;
        ppplStack_a8 = *(long ****)(puVar22 + 0x40);
        *(long ***)(puVar22 + 0x40) = pplVar10 + (long)pplVar17 * 0xc;
        pplStack_b8 = pplStack_c0;
        pplStack_b0 = pplStack_c0;
        func_0x00010a4f0354(&pplStack_c0);
      }
      else {
        pplVar17 = pplVar18 + ((ulong)pcVar1 & 0xffffffff) * 0xc;
        lVar19 = (long)pplVar20 * 0x60 + lVar19 * -0x20;
        unaff_x21 = "";
        do {
          pplVar18[9] = (long *)0x0;
          pplVar18[8] = (long *)0x0;
          pplVar18[0xb] = (long *)0x0;
          pplVar18[10] = (long *)0x0;
          pplVar18[5] = (long *)0x0;
          pplVar18[4] = (long *)0x0;
          pplVar18[7] = (long *)0x0;
          pplVar18[6] = (long *)0x0;
          pplVar18[1] = (long *)0x0;
          *pplVar18 = (long *)0x0;
          pplVar18[3] = (long *)0x0;
          pplVar18[2] = (long *)0x0;
          func_0x000107c2b054(pplVar18,"");
          *(undefined4 *)(pplVar18 + 3) = 0;
          *(char *)((long)pplVar18 + 0x1c) = '\0';
          pplVar18[5] = (long *)0x0;
          pplVar18[4] = (long *)0x3f800000;
          pplVar18[7] = (long *)0x0;
          pplVar18[6] = (long *)0x3f80000000000000;
          param_1 = (long ***)0x0;
          pplVar18[9] = (long *)0x3f800000;
          pplVar18[8] = (long *)0x0;
          pplVar18[0xb] = (long *)0x3f80000000000000;
          pplVar18[10] = (long *)0x0;
          pplVar18 = pplVar18 + 0xc;
          lVar19 = lVar19 + -0x60;
        } while (lVar19 != 0);
        *(long ***)(puVar22 + 0x38) = pplVar17;
      }
      if ((int)pplStack_130 != 0) {
        lVar19 = 0;
        unaff_x21 = (char *)0x0;
        do {
          pplVar18 = (long **)((*(long *)(puVar22 + 0x38) - *(long *)(puVar22 + 0x30) >> 5) *
                              -0x5555555555555555);
          if (pplVar18 < unaff_x21 || (long)pplVar18 - (long)unaff_x21 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4c7d50);
            (*pcVar5)();
          }
          puVar9 = (undefined8 *)(*(long *)(puVar22 + 0x30) + lVar19);
          (**(code **)(*param_3 + 0x218))(param_3,unaff_x21);
          (**(code **)(*param_3 + 0xa0))(&pplStack_c0,param_3,&PTR_DAT_110be79b8);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            __ZdlPv(*puVar9);
          }
          puVar9[2] = pplStack_b0;
          puVar9[1] = pplStack_b8;
          *puVar9 = pplStack_c0;
          ppuVar7 = param_3;
          (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110be89c8);
          *(int *)(puVar9 + 3) = (int)ppuVar7;
          ppuVar7 = param_3;
          (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be79d8,0);
          *(char *)((long)puVar9 + 0x1c) = (char)ppuVar7;
          (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be79f8);
          puVar9[9] = CONCAT44(uStack_94,uStack_98);
          puVar9[8] = pplStack_a0;
          puVar9[0xb] = uStack_88;
          puVar9[10] = uStack_90;
          puVar9[5] = pplStack_b8;
          puVar9[4] = pplStack_c0;
          puVar9[7] = ppplStack_a8;
          puVar9[6] = pplStack_b0;
          param_1 = (long ***)pplStack_c0;
          (**(code **)(*param_3 + 0x220))(param_3);
          unaff_x21 = (char *)((long)unaff_x21 + 1);
          lVar19 = lVar19 + 0x60;
        } while (pplStack_130 != (long **)unaff_x21);
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      param_2 = lStack_150;
    }
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7698);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x30;
    __Znwm();
    param_1 = (long ***)0x3f800000;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x3f800000;
    *(undefined4 *)((long)unaff_x21 + 0x20) = 0x3f800000;
    pcVar1 = (char *)((long)unaff_x21 + 0x24);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0xa8);
    *(char **)(param_2 + 0xa8) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xa8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7698);
    FUN_10ace9054(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76b8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x58;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0xc);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 0x28) = 0x3f800000;
    pcVar1 = (char *)((long)unaff_x21 + 0x2c);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x34);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x3c);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x44);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x4d);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    lVar19 = *(long *)(param_2 + 0xb0);
    *(char **)(param_2 + 0xb0) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xb0);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76b8);
    FUN_10aaaf7d4(param_3,&PTR_DAT_110c43710,(char *)((long)unaff_x21 + 0x1c));
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110c43730,*(char *)((long)unaff_x21 + 0x54));
    *(char *)((long)unaff_x21 + 0x54) = (char)ppuVar7;
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76d8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xcc;
    __Znwm();
    *(long **)unaff_x21 = (long *)0x100000004;
    param_1 = (long ***)0x3f800000;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 200) = 0xffffffff;
    lVar19 = *(long *)(param_2 + 0xd0);
    *(char **)(param_2 + 0xd0) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xd0);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76d8);
    func_0x00010acea888(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76f8);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pplStack_c0 = (long **)0x0;
    func_0x00010a26df2c(param_2 + 0x128,puVar9);
    func_0x00010a26df2c(&pplStack_c0,0);
    unaff_x21 = *(char **)(param_2 + 0x128);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76f8);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c6d9d0);
    FUN_10acfc99c(param_3,unaff_x21);
    (**(code **)(*param_3 + 0x220))(param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7718);
  if ((int)ppuVar7 != 0) {
    ppplVar11 = (long ***)0x60;
    __Znwm();
    ppplVar11[1] = (long **)0x0;
    ppplVar11[2] = (long **)0x0;
    *ppplVar11 = (long **)&PTR_DAT_110be9c38;
    param_1 = (long ***)0x0;
    ppplVar11[6] = (long **)0x0;
    ppplVar11[5] = (long **)0x0;
    ppplVar11[8] = (long **)0x0;
    ppplVar11[7] = (long **)0x0;
    ppplVar11[10] = (long **)0x0;
    ppplVar11[9] = (long **)0x0;
    ppplVar11[0xb] = (long **)0x0;
    pplStack_c0 = (long **)(ppplVar11 + 3);
    ppplVar11[4] = (long **)0x0;
    *pplStack_c0 = (long *)0x0;
    pplStack_b8 = (long **)ppplVar11;
    FUN_10a4c6358(param_2 + 0x130,&pplStack_c0);
    pplVar18 = pplStack_b8;
    if ((long ***)pplStack_b8 != (long ***)0x0) {
      ppplVar11 = (long ***)(pplStack_b8 + 1);
      do {
        pplVar20 = *ppplVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppplVar11,0x10);
        if (bVar6) {
          *ppplVar11 = (long **)((long)pplVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pplVar20 == (long **)0x0) {
        (*(code *)(*pplStack_b8)[2])(pplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
      }
    }
    unaff_x21 = *(char **)(param_2 + 0x130);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7718);
    func_0x00010acf7c8c(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7738);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x140);
    *(char **)(param_2 + 0x140) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a5027e8(param_2 + 0x140);
      unaff_x21 = *(char **)(param_2 + 0x140);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7738);
    FUN_10acf7860(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7758);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x148);
    *(char **)(param_2 + 0x148) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502838(param_2 + 0x148);
      unaff_x21 = *(char **)(param_2 + 0x148);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7758);
    FUN_10acf5f78(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7778);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x70;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x3ff0000000000000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(char *)((long)unaff_x21 + 0x38) = '\0';
    *(undefined4 *)((long)unaff_x21 + 0x68) = 0xffffffff;
    lVar19 = *(long *)(param_2 + 0xd8);
    *(char **)(param_2 + 0xd8) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xd8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7778);
    FUN_10acea2d0(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7798);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x60;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x10000000000000;
    *(long **)unaff_x21 = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x8000000000000000;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 0x58) = 3;
    lVar19 = *(long *)(param_2 + 0xe8);
    *(char **)(param_2 + 0xe8) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502728(param_2 + 0xe8);
      unaff_x21 = *(char **)(param_2 + 0xe8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7798);
    FUN_10ace832c(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be77b8);
  if ((int)ppuVar7 != 0) {
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be77b8);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be77d8,1);
    if ((int)ppuVar7 != 0) {
      *(undefined8 *)(param_2 + 0xf0) = 0xffffffff;
      *(undefined8 *)(param_2 + 0xf8) = 0x10000000000000;
      *(undefined1 *)(param_2 + 0x100) = 1;
      FUN_10ace8278((undefined8 *)(param_2 + 0xf0),param_3);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be77f8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x548;
    __Znwm();
    _bzero();
    lVar19 = 0;
    auVar28 = NEON_fmov(0xbf800000,4);
    do {
      pcVar1 = (char *)((long)unaff_x21 + lVar19);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -1;
      pcVar1[3] = 'B';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      pcVar1[0x28] = '\0';
      pcVar1[0x29] = '\0';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x38] = '\0';
      pcVar1[0x39] = '\0';
      pcVar1[0x3a] = '\0';
      pcVar1[0x3b] = '\0';
      pcVar1[0x3c] = '\0';
      pcVar1[0x3d] = '\0';
      pcVar1[0x3e] = '\0';
      pcVar1[0x3f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x34] = '\0';
      pcVar1[0x35] = '\0';
      pcVar1[0x36] = '\0';
      pcVar1[0x37] = '\0';
      pcVar21 = pcVar1 + 0x50;
      pcVar1[0x58] = '\0';
      pcVar1[0x59] = '\0';
      pcVar1[0x5a] = '\0';
      pcVar1[0x5b] = '\0';
      pcVar1[0x5c] = '\0';
      pcVar1[0x5d] = '\0';
      pcVar1[0x5e] = '\0';
      pcVar1[0x5f] = '\0';
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[2] = '\0';
      pcVar21[3] = '\0';
      pcVar21[4] = '\0';
      pcVar21[5] = '\0';
      pcVar21[6] = '\0';
      pcVar21[7] = '\0';
      *(char **)(pcVar1 + 0x40) = pcVar1 + 8;
      *(char **)(pcVar1 + 0x48) = pcVar21;
      pcVar1[0x60] = '\0';
      pcVar1[0x61] = '\0';
      pcVar1[0x62] = -1;
      pcVar1[99] = 'B';
      pcVar1[0x6c] = '\0';
      pcVar1[0x6d] = '\0';
      pcVar1[0x6e] = '\0';
      pcVar1[0x6f] = '\0';
      pcVar1[0x70] = '\0';
      pcVar1[0x71] = '\0';
      pcVar1[0x72] = '\0';
      pcVar1[0x73] = '\0';
      pcVar1[100] = '\0';
      pcVar1[0x65] = '\0';
      pcVar1[0x66] = '\0';
      pcVar1[0x67] = '\0';
      pcVar1[0x68] = '\0';
      pcVar1[0x69] = '\0';
      pcVar1[0x6a] = '\0';
      pcVar1[0x6b] = '\0';
      pcVar1[0x7c] = '\0';
      pcVar1[0x7d] = '\0';
      pcVar1[0x7e] = '\0';
      pcVar1[0x7f] = '\0';
      pcVar1[0x80] = '\0';
      pcVar1[0x81] = '\0';
      pcVar1[0x82] = '\0';
      pcVar1[0x83] = '\0';
      pcVar1[0x74] = '\0';
      pcVar1[0x75] = '\0';
      pcVar1[0x76] = '\0';
      pcVar1[0x77] = '\0';
      pcVar1[0x78] = '\0';
      pcVar1[0x79] = '\0';
      pcVar1[0x7a] = '\0';
      pcVar1[0x7b] = '\0';
      pcVar1[0x8c] = '\0';
      pcVar1[0x8d] = '\0';
      pcVar1[0x8e] = '\0';
      pcVar1[0x8f] = '\0';
      pcVar1[0x90] = '\0';
      pcVar1[0x91] = '\0';
      pcVar1[0x92] = '\0';
      pcVar1[0x93] = '\0';
      pcVar1[0x84] = '\0';
      pcVar1[0x85] = '\0';
      pcVar1[0x86] = '\0';
      pcVar1[0x87] = '\0';
      pcVar1[0x88] = '\0';
      pcVar1[0x89] = '\0';
      pcVar1[0x8a] = '\0';
      pcVar1[0x8b] = '\0';
      pcVar1[0x98] = '\0';
      pcVar1[0x99] = '\0';
      pcVar1[0x9a] = '\0';
      pcVar1[0x9b] = '\0';
      pcVar1[0x9c] = '\0';
      pcVar1[0x9d] = '\0';
      pcVar1[0x9e] = '\0';
      pcVar1[0x9f] = '\0';
      pcVar1[0x90] = '\0';
      pcVar1[0x91] = '\0';
      pcVar1[0x92] = '\0';
      pcVar1[0x93] = '\0';
      pcVar1[0x94] = '\0';
      pcVar1[0x95] = '\0';
      pcVar1[0x96] = '\0';
      pcVar1[0x97] = '\0';
      pcVar21 = pcVar1 + 0xb0;
      pcVar1[0xb8] = '\0';
      pcVar1[0xb9] = '\0';
      pcVar1[0xba] = '\0';
      pcVar1[0xbb] = '\0';
      pcVar1[0xbc] = '\0';
      pcVar1[0xbd] = '\0';
      pcVar1[0xbe] = '\0';
      pcVar1[0xbf] = '\0';
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[2] = '\0';
      pcVar21[3] = '\0';
      pcVar21[4] = '\0';
      pcVar21[5] = '\0';
      pcVar21[6] = '\0';
      pcVar21[7] = '\0';
      *(char **)(pcVar1 + 0xa0) = pcVar1 + 0x68;
      *(char **)(pcVar1 + 0xa8) = pcVar21;
      pcVar1[0xc0] = '\0';
      pcVar1[0xc1] = '\0';
      pcVar1[0xc2] = -1;
      pcVar1[0xc3] = 'B';
      pcVar1[0xf8] = '\0';
      pcVar1[0xf9] = '\0';
      pcVar1[0xfa] = '\0';
      pcVar1[0xfb] = '\0';
      pcVar1[0xfc] = '\0';
      pcVar1[0xfd] = '\0';
      pcVar1[0xfe] = '\0';
      pcVar1[0xff] = '\0';
      pcVar1[0xf0] = '\0';
      pcVar1[0xf1] = '\0';
      pcVar1[0xf2] = '\0';
      pcVar1[0xf3] = '\0';
      pcVar1[0xf4] = '\0';
      pcVar1[0xf5] = '\0';
      pcVar1[0xf6] = '\0';
      pcVar1[0xf7] = '\0';
      pcVar1[0xec] = '\0';
      pcVar1[0xed] = '\0';
      pcVar1[0xee] = '\0';
      pcVar1[0xef] = '\0';
      pcVar1[0xf0] = '\0';
      pcVar1[0xf1] = '\0';
      pcVar1[0xf2] = '\0';
      pcVar1[0xf3] = '\0';
      pcVar1[0xe4] = '\0';
      pcVar1[0xe5] = '\0';
      pcVar1[0xe6] = '\0';
      pcVar1[0xe7] = '\0';
      pcVar1[0xe8] = '\0';
      pcVar1[0xe9] = '\0';
      pcVar1[0xea] = '\0';
      pcVar1[0xeb] = '\0';
      pcVar1[0xdc] = '\0';
      pcVar1[0xdd] = '\0';
      pcVar1[0xde] = '\0';
      pcVar1[0xdf] = '\0';
      pcVar1[0xe0] = '\0';
      pcVar1[0xe1] = '\0';
      pcVar1[0xe2] = '\0';
      pcVar1[0xe3] = '\0';
      pcVar1[0xd4] = '\0';
      pcVar1[0xd5] = '\0';
      pcVar1[0xd6] = '\0';
      pcVar1[0xd7] = '\0';
      pcVar1[0xd8] = '\0';
      pcVar1[0xd9] = '\0';
      pcVar1[0xda] = '\0';
      pcVar1[0xdb] = '\0';
      pcVar1[0xcc] = '\0';
      pcVar1[0xcd] = '\0';
      pcVar1[0xce] = '\0';
      pcVar1[0xcf] = '\0';
      pcVar1[0xd0] = '\0';
      pcVar1[0xd1] = '\0';
      pcVar1[0xd2] = '\0';
      pcVar1[0xd3] = '\0';
      pcVar1[0xc4] = '\0';
      pcVar1[0xc5] = '\0';
      pcVar1[0xc6] = '\0';
      pcVar1[199] = '\0';
      pcVar1[200] = '\0';
      pcVar1[0xc9] = '\0';
      pcVar1[0xca] = '\0';
      pcVar1[0xcb] = '\0';
      *(char **)(pcVar1 + 0x100) = pcVar1 + 200;
      *(char **)(pcVar1 + 0x108) = pcVar1 + 0x110;
      pcVar1[0x118] = '\0';
      pcVar1[0x119] = '\0';
      pcVar1[0x11a] = '\0';
      pcVar1[0x11b] = '\0';
      pcVar1[0x11c] = '\0';
      pcVar1[0x11d] = '\0';
      pcVar1[0x11e] = '\0';
      pcVar1[0x11f] = '\0';
      pcVar1[0x110] = '\0';
      pcVar1[0x111] = '\0';
      pcVar1[0x112] = '\0';
      pcVar1[0x113] = '\0';
      pcVar1[0x114] = '\0';
      pcVar1[0x115] = '\0';
      pcVar1[0x116] = '\0';
      pcVar1[0x117] = '\0';
      pcVar1[0x120] = '\0';
      pcVar1[0x128] = -1;
      pcVar1[0x129] = -1;
      pcVar1[0x12a] = -1;
      pcVar1[299] = -1;
      pcVar1[300] = '\0';
      pcVar1[0x12d] = '\0';
      pcVar1[0x12e] = '\0';
      pcVar1[0x12f] = '\0';
      pcVar1[0x130] = '\0';
      pcVar1[0x131] = '\0';
      pcVar1[0x132] = '\0';
      pcVar1[0x133] = '\0';
      *(long *)(pcVar1 + 0x13c) = auVar28._8_8_;
      *(long *)(pcVar1 + 0x134) = auVar28._0_8_;
      pcVar1[0x144] = '\0';
      pcVar1[0x145] = '\0';
      pcVar1[0x146] = -0x40;
      pcVar1[0x147] = '\x7f';
      pcVar1[0x148] = '\0';
      pcVar1[0x149] = '\0';
      pcVar1[0x14a] = -0x40;
      pcVar1[0x14b] = '\x7f';
      pcVar1[0x14c] = '\0';
      pcVar1[0x14d] = '\0';
      pcVar1[0x14e] = -0x80;
      pcVar1[0x14f] = '?';
      pcVar1[0x158] = '\0';
      pcVar1[0x159] = '\0';
      pcVar1[0x15a] = '\0';
      pcVar1[0x15b] = '\0';
      pcVar1[0x15c] = '\0';
      pcVar1[0x15d] = '\0';
      pcVar1[0x15e] = '\0';
      pcVar1[0x15f] = '\0';
      pcVar1[0x150] = '\0';
      pcVar1[0x151] = '\0';
      pcVar1[0x152] = '\0';
      pcVar1[0x153] = '\0';
      pcVar1[0x154] = '\0';
      pcVar1[0x155] = '\0';
      pcVar1[0x156] = '\0';
      pcVar1[0x157] = '\0';
      pcVar1[0x160] = '\0';
      pcVar1[0x161] = '\0';
      pcVar1[0x162] = -0x80;
      pcVar1[0x163] = '?';
      pcVar1[0x16c] = '\0';
      pcVar1[0x16d] = '\0';
      pcVar1[0x16e] = '\0';
      pcVar1[0x16f] = '\0';
      pcVar1[0x170] = '\0';
      pcVar1[0x171] = '\0';
      pcVar1[0x172] = '\0';
      pcVar1[0x173] = '\0';
      pcVar1[0x164] = '\0';
      pcVar1[0x165] = '\0';
      pcVar1[0x166] = '\0';
      pcVar1[0x167] = '\0';
      pcVar1[0x168] = '\0';
      pcVar1[0x169] = '\0';
      pcVar1[0x16a] = '\0';
      pcVar1[0x16b] = '\0';
      pcVar1[0x174] = '\0';
      pcVar1[0x175] = '\0';
      pcVar1[0x176] = -0x80;
      pcVar1[0x177] = '?';
      pcVar1[0x180] = '\0';
      pcVar1[0x181] = '\0';
      pcVar1[0x182] = '\0';
      pcVar1[0x183] = '\0';
      pcVar1[0x184] = '\0';
      pcVar1[0x185] = '\0';
      pcVar1[0x186] = '\0';
      pcVar1[0x187] = '\0';
      pcVar1[0x178] = '\0';
      pcVar1[0x179] = '\0';
      pcVar1[0x17a] = '\0';
      pcVar1[0x17b] = '\0';
      pcVar1[0x17c] = '\0';
      pcVar1[0x17d] = '\0';
      pcVar1[0x17e] = '\0';
      pcVar1[0x17f] = '\0';
      pcVar1[0x188] = '\0';
      pcVar1[0x189] = '\0';
      pcVar1[0x18a] = -0x80;
      pcVar1[0x18b] = '?';
      pcVar1[0x18c] = '\0';
      pcVar1[0x18d] = '\0';
      pcVar1[0x18e] = '\0';
      pcVar1[399] = '\0';
      pcVar1[400] = '\0';
      pcVar1[0x191] = '\0';
      pcVar1[0x192] = '\0';
      pcVar1[0x193] = '\0';
      pcVar1[0x1e8] = '\0';
      pcVar1[0x1ec] = '\0';
      pcVar1[0x1f0] = '\0';
      pcVar1[500] = '\0';
      pcVar1[0x1a8] = '\0';
      pcVar1[0x1a0] = '\0';
      pcVar1[0x1a1] = '\0';
      pcVar1[0x1a2] = '\0';
      pcVar1[0x1a3] = '\0';
      pcVar1[0x1a4] = '\0';
      pcVar1[0x1a5] = '\0';
      pcVar1[0x1a6] = '\0';
      pcVar1[0x1a7] = '\0';
      pcVar1[0x198] = '\0';
      pcVar1[0x199] = '\0';
      pcVar1[0x19a] = '\0';
      pcVar1[0x19b] = '\0';
      pcVar1[0x19c] = '\0';
      pcVar1[0x19d] = '\0';
      pcVar1[0x19e] = '\0';
      pcVar1[0x19f] = '\0';
      pcVar1[0x1f8] = '\0';
      pcVar1[0x1f9] = '\0';
      pcVar1[0x1fa] = -0x80;
      pcVar1[0x1fb] = '?';
      pcVar1[0x208] = '\0';
      *(undefined ***)(pcVar1 + 0x200) = &PTR_DAT_110ba5598;
      pcVar1[0x210] = '\0';
      pcVar1[0x211] = '\0';
      pcVar1[0x212] = '\0';
      pcVar1[0x213] = '\0';
      pcVar1[0x214] = '\0';
      pcVar1[0x215] = '\0';
      pcVar1[0x216] = '\0';
      pcVar1[0x217] = '\0';
      pcVar1[0x218] = '\0';
      pcVar1[0x220] = '\0';
      pcVar1[0x221] = '\0';
      pcVar1[0x222] = -1;
      pcVar1[0x223] = 'B';
      pcVar1[0x22c] = '\0';
      pcVar1[0x22d] = '\0';
      pcVar1[0x22e] = '\0';
      pcVar1[0x22f] = '\0';
      pcVar1[0x230] = '\0';
      pcVar1[0x231] = '\0';
      pcVar1[0x232] = '\0';
      pcVar1[0x233] = '\0';
      pcVar1[0x224] = '\0';
      pcVar1[0x225] = '\0';
      pcVar1[0x226] = '\0';
      pcVar1[0x227] = '\0';
      pcVar1[0x228] = '\0';
      pcVar1[0x229] = '\0';
      pcVar1[0x22a] = '\0';
      pcVar1[0x22b] = '\0';
      pcVar1[0x23c] = '\0';
      pcVar1[0x23d] = '\0';
      pcVar1[0x23e] = '\0';
      pcVar1[0x23f] = '\0';
      pcVar1[0x240] = '\0';
      pcVar1[0x241] = '\0';
      pcVar1[0x242] = '\0';
      pcVar1[0x243] = '\0';
      pcVar1[0x234] = '\0';
      pcVar1[0x235] = '\0';
      pcVar1[0x236] = '\0';
      pcVar1[0x237] = '\0';
      pcVar1[0x238] = '\0';
      pcVar1[0x239] = '\0';
      pcVar1[0x23a] = '\0';
      pcVar1[0x23b] = '\0';
      pcVar1[0x24c] = '\0';
      pcVar1[0x24d] = '\0';
      pcVar1[0x24e] = '\0';
      pcVar1[0x24f] = '\0';
      pcVar1[0x250] = '\0';
      pcVar1[0x251] = '\0';
      pcVar1[0x252] = '\0';
      pcVar1[0x253] = '\0';
      pcVar1[0x244] = '\0';
      pcVar1[0x245] = '\0';
      pcVar1[0x246] = '\0';
      pcVar1[0x247] = '\0';
      pcVar1[0x248] = '\0';
      pcVar1[0x249] = '\0';
      pcVar1[0x24a] = '\0';
      pcVar1[0x24b] = '\0';
      pcVar1[600] = '\0';
      pcVar1[0x259] = '\0';
      pcVar1[0x25a] = '\0';
      pcVar1[0x25b] = '\0';
      pcVar1[0x25c] = '\0';
      pcVar1[0x25d] = '\0';
      pcVar1[0x25e] = '\0';
      pcVar1[0x25f] = '\0';
      pcVar1[0x250] = '\0';
      pcVar1[0x251] = '\0';
      pcVar1[0x252] = '\0';
      pcVar1[0x253] = '\0';
      pcVar1[0x254] = '\0';
      pcVar1[0x255] = '\0';
      pcVar1[0x256] = '\0';
      pcVar1[599] = '\0';
      *(char **)(pcVar1 + 0x260) = pcVar1 + 0x228;
      *(char **)(pcVar1 + 0x268) = pcVar1 + 0x270;
      pcVar1[0x290] = '\0';
      pcVar1[0x291] = '\0';
      pcVar1[0x292] = '\0';
      pcVar1[0x293] = '\0';
      pcVar1[0x294] = '\0';
      pcVar1[0x295] = '\0';
      pcVar1[0x296] = '\0';
      pcVar1[0x297] = '\0';
      pcVar1[0x288] = '\0';
      pcVar1[0x289] = '\0';
      pcVar1[0x28a] = '\0';
      pcVar1[0x28b] = '\0';
      pcVar1[0x28c] = '\0';
      pcVar1[0x28d] = '\0';
      pcVar1[0x28e] = '\0';
      pcVar1[0x28f] = '\0';
      pcVar1[0x278] = '\0';
      pcVar1[0x279] = '\0';
      pcVar1[0x27a] = '\0';
      pcVar1[0x27b] = '\0';
      pcVar1[0x27c] = '\0';
      pcVar1[0x27d] = '\0';
      pcVar1[0x27e] = '\0';
      pcVar1[0x27f] = '\0';
      pcVar1[0x270] = '\0';
      pcVar1[0x271] = '\0';
      pcVar1[0x272] = '\0';
      pcVar1[0x273] = '\0';
      pcVar1[0x274] = '\0';
      pcVar1[0x275] = '\0';
      pcVar1[0x276] = '\0';
      pcVar1[0x277] = '\0';
      lVar19 = lVar19 + 0x298;
      pcVar1[0x280] = '\0';
      pcVar1[0x281] = '\0';
    } while (lVar19 != 0x530);
    *(char *)((long)unaff_x21 + 0x530) = '\0';
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x540) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x538) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x70);
    *(char **)(param_2 + 0x70) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502490(param_2 + 0x70);
      unaff_x21 = *(char **)(param_2 + 0x70);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be77f8);
    FUN_10ace2804(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  FUN_10a4c7e74(param_3,&PTR_DAT_110be7818,param_2 + 0x78);
  ppplVar11 = (long ***)(param_2 + 0x80);
  FUN_10a4c7e74(param_3,&PTR_DAT_110be7838);
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7858);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xd8;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 200) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd0) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_DAT_110c6d560;
    pcVar1 = (char *)((long)unaff_x21 + 0xa9);
    pcVar21 = (char *)((long)unaff_x21 + 0xb1);
    pcVar21[0] = '\0';
    pcVar21[1] = '\0';
    pcVar21[2] = '\0';
    pcVar21[3] = '\0';
    pcVar21[4] = '\0';
    pcVar21[5] = '\0';
    pcVar21[6] = '\0';
    pcVar21[7] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    plVar8 = *(long **)(param_2 + 0x88);
    *(char **)(param_2 + 0x88) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x88);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7858);
    (*(code *)(*(long **)unaff_x21)[2])(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7878);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x100;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 200) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xe8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xe0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xf8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xf0) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x90);
    *(char **)(param_2 + 0x90) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502568(param_2 + 0x90);
      unaff_x21 = *(char **)(param_2 + 0x90);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7878);
    func_0x00010acf2998(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7898);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_FUN_110bef718;
    *(undefined4 *)((long)unaff_x21 + 0x30) = 0x3f800000;
    plVar8 = *(long **)(param_2 + 0x108);
    *(char **)(param_2 + 0x108) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x108);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7898);
    (*(code *)(*(long **)unaff_x21)[2])(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78b8);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = puVar9 + 1;
    pplStack_c0 = (long **)0x0;
    func_0x00010a293674(param_2 + 0x110,puVar9);
    func_0x00010a293674(&pplStack_c0,0);
    ppplStack_138 = *(long ****)(param_2 + 0x110);
    lStack_150 = param_2;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78b8);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x208))();
    if ((int)ppuVar7 != 0) {
      uVar24 = 0;
      pplStack_140 = &plStack_120;
      ppplStack_148 = &pplStack_a0;
      unaff_x21 = (char *)0x109d138c8;
      do {
        (**(code **)(*param_3 + 0x218))(param_3,uVar24);
        *pplStack_140 = (long *)0x0;
        pplStack_140[1] = (long *)0x0;
        pplStack_128 = pplStack_140;
        (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be8480);
        ppuVar7 = param_3;
        (**(code **)(*param_3 + 0x208))();
        pplStack_130 = (long **)CONCAT44(pplStack_130._4_4_,uVar24);
        if ((int)ppuVar7 != 0) {
          uVar24 = 0;
          do {
            uVar25 = (uint)param_1;
            (**(code **)(*param_3 + 0x218))(param_3,uVar24);
            ppplStack_f8 = (long ***)0x0;
            pplStack_f0 = (long **)0x0;
            (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be8440);
            pplVar18 = (long **)0xa8;
            __Znwm();
            pplVar18[1] = (long *)0x0;
            pplVar18[2] = (long *)0x0;
            *pplVar18 = (long *)&PTR_FUN_110baa4d8;
            ppplVar12 = (long ***)(pplVar18 + 3);
            *ppplVar12 = (long **)&PTR_FUN_110bab9a0;
            pplVar18[5] = (long *)0x0;
            pplVar18[6] = (long *)0x0;
            *(char *)(pplVar18 + 4) = '\0';
            *(char *)(pplVar18 + 0x14) = '\0';
            pplVar18[9] = (long *)0x0;
            pplVar18[10] = (long *)0x0;
            pplVar18[7] = (long *)0xffffffff00000000;
            pplVar18[8] = (long *)0x0;
            pplVar18[0xb] = (long *)0x0;
            pplVar18[0xc] = (long *)0x109d138c8;
            pplVar18[0xd] = (long *)&PTR_DAT_110b3e838;
            pplVar18[0xe] = (long *)FUN_10a1b2664;
            ppplStack_f8 = ppplVar12;
            pplStack_f0 = pplVar18;
            FUN_10a1b3324(ppplVar12,param_3);
            (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110be8420);
            pplStack_e8 = (long **)CONCAT44(pplStack_e8._4_4_,uVar25);
            (**(code **)(*param_3 + 0x220))(param_3);
            (**(code **)(*param_3 + 0xa0))(&pplStack_110,param_3,&PTR_DAT_110be8460);
            pplStack_b0 = pplStack_100;
            param_1 = (long ***)pplStack_110;
            pplStack_b8 = pplStack_108;
            pplStack_c0 = pplStack_110;
            pplStack_108 = (long **)0x0;
            pplStack_100 = (long **)0x0;
            pplStack_110 = (long **)0x0;
            ppplStack_f8 = (long ***)0x0;
            pplStack_f0 = (long **)0x0;
            ppplVar11 = &pplStack_128;
            ppplStack_a8 = ppplVar12;
            pplStack_a0 = pplVar18;
            uStack_98 = uVar25;
            FUN_10a4f73d8(ppplVar11,&plStack_e0,&pplStack_c0);
            if (*ppplVar11 == (long **)0x0) {
              pplVar18 = (long **)0x50;
              __Znwm();
              ppplStack_d0 = &pplStack_128;
              uStack_c8 = 0;
              pplStack_d8 = pplVar18;
              if ((long)pplStack_b0 < 0) {
                func_0x000107c3192c(pplVar18 + 4,pplStack_c0,pplStack_b8);
              }
              else {
                pplVar18[5] = (long *)pplStack_b8;
                pplVar18[4] = (long *)pplStack_c0;
                pplVar18[6] = (long *)pplStack_b0;
              }
              pplVar18[8] = (long *)pplStack_a0;
              pplVar18[7] = (long *)ppplStack_a8;
              ppplStack_a8 = (long ***)0x0;
              pplStack_a0 = (long **)0x0;
              param_1 = (long ***)(ulong)uStack_98;
              *(uint *)(pplVar18 + 9) = uStack_98;
              *pplVar18 = (long *)0x0;
              pplVar18[1] = (long *)0x0;
              pplVar18[2] = plStack_e0;
              *ppplVar11 = pplVar18;
              if ((long **)*pplStack_128 != (long **)0x0) {
                pplVar18 = *ppplVar11;
                pplStack_128 = (long **)*pplStack_128;
              }
              func_0x000107c2b058(plStack_120,pplVar18);
              lStack_118 = lStack_118 + 1;
            }
            pplVar18 = pplStack_a0;
            if (pplStack_a0 != (long **)0x0) {
              pplVar20 = pplStack_a0 + 1;
              do {
                plVar8 = *pplVar20;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
                if (bVar6) {
                  *pplVar20 = (long *)((long)plVar8 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (plVar8 == (long *)0x0) {
                (*(code *)(*pplStack_a0)[2])(pplStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
              }
            }
            if ((long)pplStack_b0 < 0) {
              __ZdlPv(pplStack_c0);
            }
            if ((long)pplStack_100 < 0) {
              __ZdlPv(pplStack_110);
            }
            (**(code **)(*param_3 + 0x220))(param_3);
            pplVar18 = pplStack_f0;
            if ((long ***)pplStack_f0 != (long ***)0x0) {
              ppplVar11 = (long ***)(pplStack_f0 + 1);
              do {
                pplVar20 = *ppplVar11;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppplVar11,0x10);
                if (bVar6) {
                  *ppplVar11 = (long **)((long)pplVar20 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pplVar20 == (long **)0x0) {
                (*(code *)(*pplStack_f0)[2])(pplStack_f0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
              }
            }
            ppuVar7 = param_3;
            (**(code **)(*param_3 + 0x208))();
            uVar24 = uVar24 + 1;
          } while (uVar24 < (uint)ppuVar7);
        }
        (**(code **)(*param_3 + 0x220))(param_3);
        iVar4 = (int)pplStack_130;
        (**(code **)(*param_3 + 0xa0))(&ppplStack_f8,param_3,&PTR_DAT_110be84a0);
        param_1 = ppplStack_f8;
        pplStack_b8 = pplStack_f0;
        pplStack_c0 = (long **)ppplStack_f8;
        pplStack_b0 = pplStack_e8;
        pplStack_f0 = (long **)0x0;
        pplStack_e8 = (long **)0x0;
        ppplStack_f8 = (long ***)0x0;
        FUN_10a4f71c4(&ppplStack_a8,&pplStack_128);
        ppplVar11 = &pplStack_c0;
        ppplVar12 = ppplStack_138;
        FUN_10a503944(ppplStack_138,&pplStack_110);
        if (*ppplVar12 == (long **)0x0) {
          pplVar18 = (long **)0x50;
          __Znwm();
          ppplStack_d0 = ppplStack_138;
          uStack_c8 = 0;
          pplStack_d8 = pplVar18;
          if ((long)pplStack_b0 < 0) {
            func_0x000107c3192c(pplVar18 + 4,pplStack_c0,pplStack_b8);
          }
          else {
            pplVar18[5] = (long *)pplStack_b8;
            pplVar18[4] = (long *)pplStack_c0;
            pplVar18[6] = (long *)pplStack_b0;
            param_1 = (long ***)pplStack_c0;
          }
          pplVar20 = pplVar18 + 8;
          *pplVar20 = (long *)pplStack_a0;
          pplVar18[7] = (long *)ppplStack_a8;
          pplVar18[9] = (long *)CONCAT44(uStack_94,uStack_98);
          if ((long *)CONCAT44(uStack_94,uStack_98) == (long *)0x0) {
            pplVar18[7] = (long *)pplVar20;
          }
          else {
            pplStack_a0[2] = (long *)pplVar20;
            ppplStack_a8 = ppplStack_148;
            *ppplStack_148 = (long **)0x0;
            ppplStack_148[1] = (long **)0x0;
          }
          FUN_10a5038f0(ppplStack_138,pplStack_110,ppplVar12,pplVar18);
          ppplVar11 = ppplVar12;
        }
        func_0x00010a29373c(&ppplStack_a8,pplStack_a0);
        if ((long)pplStack_b0 < 0) {
          __ZdlPv(pplStack_c0);
        }
        if ((long)pplStack_e8 < 0) {
          __ZdlPv(ppplStack_f8);
        }
        (**(code **)(*param_3 + 0x220))(param_3);
        func_0x00010a29373c(&pplStack_128,plStack_120);
        uVar24 = iVar4 + 1;
        ppuVar7 = param_3;
        (**(code **)(*param_3 + 0x208))();
      } while (uVar24 < (uint)ppuVar7);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
    param_2 = lStack_150;
  }
  if ((*(long *)(param_2 + 0x110) != 0) && (*(long *)(*(long *)(param_2 + 0x110) + 0x10) == 0)) {
    func_0x00010a293674(param_2 + 0x110,0);
  }
  (**(code **)(**(long **)(param_2 + 0x118) + 0x10))(*(long **)(param_2 + 0x118),param_3);
  ppuVar7 = param_3;
  FUN_10acf1fe8(param_3,param_2);
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78d8);
    if ((int)ppuVar7 != 0) {
      unaff_x21 = (char *)0x38;
      __Znwm();
      *(long **)((long)unaff_x21 + 8) = (long *)0x0;
      *(long **)unaff_x21 = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
      lVar19 = *(long *)(param_2 + 0x150);
      *(char **)(param_2 + 0x150) = unaff_x21;
      if (lVar19 != 0) {
        func_0x00010a502888(param_2 + 0x150);
        unaff_x21 = *(char **)(param_2 + 0x150);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78d8);
      func_0x00010acf2460(unaff_x21,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78f8);
    if ((int)ppuVar7 != 0) {
      unaff_x21 = (char *)0x18;
      __Znwm();
      *(long **)((long)unaff_x21 + 8) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
      *(long **)unaff_x21 = (long *)0x0;
      lVar19 = *(long *)(param_2 + 0x158);
      *(char **)(param_2 + 0x158) = unaff_x21;
      if (lVar19 != 0) {
        func_0x00010a50299c(param_2 + 0x158);
        unaff_x21 = *(char **)(param_2 + 0x158);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78f8);
      func_0x00010acf222c(unaff_x21,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
  }
  pplVar18 = (long **)(param_2 + 0x218);
  ppuVar7 = &PTR_DAT_110be7918;
  ppuVar13 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7918);
  if ((int)ppuVar13 != 0) {
    FUN_10a23b0c4(&pplStack_c0,&pplStack_d8);
    pplVar20 = pplStack_c0;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7918);
    ppuVar7 = param_3;
    FUN_10a310514(pplVar20,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
    pplVar17 = pplStack_b8;
    pplVar20 = pplStack_c0;
    pplStack_c0 = (long **)0x0;
    pplStack_b8 = (long **)0x0;
    plVar8 = *(long **)(param_2 + 0x220);
    *(long ***)(param_2 + 0x220) = pplVar17;
    *pplVar18 = (long *)pplVar20;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        lVar19 = *plVar2;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    unaff_x21 = (char *)pplStack_b8;
    if (pplStack_b8 != (long **)0x0) {
      pplVar20 = pplStack_b8 + 1;
      do {
        plVar8 = *pplVar20;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
        if (bVar6) {
          *pplVar20 = (long *)((long)plVar8 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar8 == (long *)0x0) {
        (*(code *)(*pplStack_b8)[2])(pplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  plVar8 = *pplVar18;
  pplStack_c0 = (long **)&UNK_10f65ce32;
  pplStack_b8 = (long **)0x27;
  if (plVar8 != (long *)0x0) {
    FUN_10a22b608(plVar8,(int)plVar8[0x14]);
    lVar19 = plVar8[2];
    lVar16 = plVar8[3];
    lVar27 = plVar8[5];
    lVar26 = plVar8[4];
    lVar29 = *plVar8;
    *(long *)(param_2 + 0x1a0) = plVar8[1];
    *(long *)(param_2 + 0x198) = lVar29;
    *(long *)(param_2 + 0x1b0) = lVar16;
    *(long *)(param_2 + 0x1a8) = lVar19;
    *(long *)(param_2 + 0x1c0) = lVar27;
    *(long *)(param_2 + 0x1b8) = lVar26;
    lVar27 = plVar8[9];
    lVar26 = plVar8[8];
    lVar16 = plVar8[0xb];
    lVar19 = plVar8[10];
    uVar23 = *(undefined8 *)((long)plVar8 + 0x5c);
    lVar30 = plVar8[7];
    lVar29 = plVar8[6];
    *(undefined8 *)(param_2 + 0x1fc) = *(undefined8 *)((long)plVar8 + 100);
    *(undefined8 *)(param_2 + 500) = uVar23;
    *(long *)(param_2 + 0x1e0) = lVar27;
    *(long *)(param_2 + 0x1d8) = lVar26;
    *(long *)(param_2 + 0x1f0) = lVar16;
    *(long *)(param_2 + 0x1e8) = lVar19;
    *(long *)(param_2 + 0x1d0) = lVar30;
    *(long *)(param_2 + 0x1c8) = lVar29;
    FUN_10a22b858(param_2 + 0x208,plVar8 + 0xe);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7938);
    if ((int)ppuVar7 != 0) {
      puVar9 = (undefined8 *)0x68;
      __Znwm();
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xc] = 0;
      pplStack_c0 = (long **)0x0;
      func_0x00010a502a70(param_2 + 0x170,puVar9);
      func_0x00010a502a70(&pplStack_c0,0);
      uVar23 = *(undefined8 *)(param_2 + 0x170);
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7938);
      FUN_10acdedcc(uVar23,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7958);
    if ((int)ppuVar7 != 0) {
      puVar9 = (undefined8 *)0xa8;
      __Znwm();
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x14] = 0;
      *(undefined4 *)((long)puVar9 + 4) = 0x3f800000;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x1c) = 0;
      *(undefined8 *)((long)puVar9 + 0x24) = 0;
      *(undefined4 *)((long)puVar9 + 0x2c) = 0x3f800000;
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined4 *)(puVar9 + 8) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x4c) = 0;
      *(undefined8 *)((long)puVar9 + 0x44) = 0;
      *(undefined4 *)((long)puVar9 + 0x5c) = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x54) = 0;
      *(undefined8 *)((long)puVar9 + 0x6c) = 0;
      *(undefined8 *)((long)puVar9 + 100) = 0;
      *(undefined4 *)((long)puVar9 + 0x74) = 0x3f800000;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0;
      *(undefined4 *)(puVar9 + 0x11) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x94) = 0;
      *(undefined8 *)((long)puVar9 + 0x8c) = 0;
      *(undefined4 *)((long)puVar9 + 0x9c) = 0x3f800000;
      lVar19 = *(long *)(param_2 + 0x98);
      *(undefined8 **)(param_2 + 0x98) = puVar9;
      if (lVar19 != 0) {
        func_0x00010a502670();
        puVar9 = *(undefined8 **)(param_2 + 0x98);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7958);
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110be8f50);
      *(char *)puVar9 = (char)ppuVar7;
      (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be8f70);
      *(undefined8 *)((long)puVar9 + 0x3c) = uStack_88;
      *(undefined8 *)((long)puVar9 + 0x34) = uStack_90;
      *(ulong *)((long)puVar9 + 0x2c) = CONCAT44(uStack_94,uStack_98);
      *(long ***)((long)puVar9 + 0x24) = pplStack_a0;
      *(long ****)((long)puVar9 + 0x1c) = ppplStack_a8;
      *(long ***)((long)puVar9 + 0x14) = pplStack_b0;
      *(long ***)((long)puVar9 + 0xc) = pplStack_b8;
      *(long ***)((long)puVar9 + 4) = pplStack_c0;
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110be8f90);
      *(int *)((long)puVar9 + 0x44) = (int)ppuVar7;
      (**(code **)(*param_3 + 0xa0))(&pplStack_c0,param_3,&PTR_DAT_110be8fb0);
      if (*(char *)((long)puVar9 + 0x5f) < '\0') {
        __ZdlPv(puVar9[9]);
      }
      puVar9[10] = pplStack_b8;
      puVar9[9] = pplStack_c0;
      puVar9[0xb] = pplStack_b0;
      (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be8fd0);
      puVar9[0xd] = pplStack_b8;
      puVar9[0xc] = pplStack_c0;
      puVar9[0xf] = ppplStack_a8;
      puVar9[0xe] = pplStack_b0;
      puVar9[0x11] = CONCAT44(uStack_94,uStack_98);
      puVar9[0x10] = pplStack_a0;
      puVar9[0x13] = uStack_88;
      puVar9[0x12] = uStack_90;
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110be8ff0);
      *(char *)(puVar9 + 0x14) = (char)ppuVar7;
      (**(code **)(*param_3 + 0x220))(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a4c7d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x220))(param_3);
    return;
  }
  ppplVar12 = &pplStack_c0;
  FUN_10a0edfc4();
  func_0x00010a14e208(&pplStack_c0);
  FUN_10a500034((long **)((long)unaff_x21 + 0x40));
  pplStack_c0 = pplVar18;
  FUN_10a4fff4c(&pplStack_c0);
  if (*(long **)((long)unaff_x21 + 8) != (long *)0x0) {
    *(long **)((long)unaff_x21 + 0x10) = *(long **)((long)unaff_x21 + 8);
    __ZdlPv();
  }
  __ZdlPv(unaff_x21);
  ppplVar14 = ppplVar12;
  __Unwind_Resume();
  pcStack_158 = FUN_10a4c7e74;
  ppplVar15 = ppplVar14;
  ppplStack_180 = &pplStack_c0;
  pplStack_178 = (long **)unaff_x21;
  pplStack_170 = pplVar18;
  ppplStack_168 = ppplVar12;
  puStack_160 = &stack0xfffffffffffffff0;
  (*(code *)(*ppplVar14)[0x40])();
  if ((int)ppplVar15 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    uStack_188 = 0;
    func_0x00010a2914e4(ppplVar11,puVar9);
    func_0x00010a2914e4(&uStack_188,0);
    pplVar18 = *ppplVar11;
    (*(code *)(*ppplVar14)[0x42])(ppplVar14,ppuVar7);
    (*(code *)(*ppplVar14)[0x42])(ppplVar14,&PTR_DAT_110c434b0);
    FUN_10aae55d4(ppplVar14,pplVar18);
    (*(code *)(*ppplVar14)[0x44])(ppplVar14);
    (*(code *)(*ppplVar14)[0x44])(ppplVar14);
  }
  return;
}



/* Entry: 10a4c63c0; end: 10a4c7e73;  */

/* WARNING: Removing unreachable block (ram,0x00010a4c671c) */

void FUN_10a4c63c0(long ***param_1,long param_2,undefined **param_3)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long ***ppplVar11;
  long ***ppplVar12;
  undefined **ppuVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long lVar16;
  long **pplVar17;
  long **pplVar18;
  long lVar19;
  long **pplVar20;
  char *pcVar21;
  undefined1 *puVar22;
  char *unaff_x21;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  long lVar29;
  long lVar30;
  undefined8 uStack_188;
  long ***ppplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  long ***ppplStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long ***ppplStack_148;
  long **pplStack_140;
  long ***ppplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  long *plStack_120;
  long lStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long ***ppplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long ***ppplStack_a8;
  long **pplStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7638);
  FUN_10a1025f4(param_2 + 0x10,param_3);
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7658);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xa8;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_FUN_110c447c8;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x1d);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x41);
    pcVar21 = (char *)((long)unaff_x21 + 0x49);
    pcVar21[0] = '\0';
    pcVar21[1] = '\0';
    pcVar21[2] = '\0';
    pcVar21[3] = '\0';
    pcVar21[4] = '\0';
    pcVar21[5] = '\0';
    pcVar21[6] = '\0';
    pcVar21[7] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    FUN_10a14b750((long **)((long)unaff_x21 + 0x68));
    plVar8 = *(long **)(param_2 + 0x68);
    *(char **)(param_2 + 0x68) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x68);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7658);
    FUN_10aac03e8(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7678);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x48;
    __Znwm();
    param_1 = (long ***)0x0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[8] = 0;
    pplStack_c0 = (long **)0x0;
    func_0x00010a5026a0(param_2 + 0xa0,puVar9);
    func_0x00010a5026a0(&pplStack_c0,0);
    puVar22 = *(undefined1 **)(param_2 + 0xa0);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7678);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be7978,0);
    *puVar22 = (char)ppuVar7;
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7998);
    if ((int)ppuVar7 != 0) {
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7998);
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x208))();
      unaff_x21 = puVar22 + 0x30;
      plVar8 = *(long **)unaff_x21;
      pplVar18 = *(long ***)(puVar22 + 0x38);
      pplVar20 = (long **)((ulong)ppuVar7 & 0xffffffff);
      lVar19 = (long)pplVar18 - (long)plVar8 >> 5;
      bVar6 = pplVar20 < (long **)(lVar19 * -0x5555555555555555);
      pcVar1 = (char *)((long)pplVar20 + lVar19 * 0x5555555555555555);
      lStack_150 = param_2;
      pplStack_130 = pplVar20;
      if (bVar6 || pcVar1 == (char *)0x0) {
        if (bVar6) {
          unaff_x21 = (char *)(plVar8 + (long)pplVar20 * 0xc);
          for (; pplVar18 != (long **)unaff_x21; pplVar18 = pplVar18 + -0xc) {
          }
          *(char **)(puVar22 + 0x38) = unaff_x21;
        }
      }
      else if ((char *)((*(long *)(puVar22 + 0x40) - (long)pplVar18 >> 5) * -0x5555555555555555) <
               pcVar1) {
        lVar16 = *(long *)(puVar22 + 0x40) - (long)plVar8 >> 5;
        pplVar17 = (long **)(lVar16 * 0x5555555555555556);
        if (pplVar17 < pplVar20 || (long)pplVar17 - (long)pplVar20 == 0) {
          pplVar17 = pplVar20;
        }
        if (0x155555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
          pplVar17 = (long **)0x2aaaaaaaaaaaaaa;
        }
        pplVar10 = (long **)unaff_x21;
        pplStack_a0 = (long **)unaff_x21;
        FUN_10a4f01c0();
        lVar16 = 0;
        pcVar21 = (char *)((long)pplVar10 + ((long)pplVar18 - (long)plVar8));
        ppplStack_138 = (long ***)(pcVar21 + ((ulong)pcVar1 & 0xffffffff) * 0x60);
        pplStack_c0 = pplVar10;
        pplStack_b8 = (long **)pcVar21;
        ppplStack_a8 = (long ***)(pplVar10 + (long)pplVar17 * 0xc);
        do {
          pcVar1 = pcVar21 + lVar16;
          pcVar1[0x48] = '\0';
          pcVar1[0x49] = '\0';
          pcVar1[0x4a] = '\0';
          pcVar1[0x4b] = '\0';
          pcVar1[0x4c] = '\0';
          pcVar1[0x4d] = '\0';
          pcVar1[0x4e] = '\0';
          pcVar1[0x4f] = '\0';
          pcVar1[0x40] = '\0';
          pcVar1[0x41] = '\0';
          pcVar1[0x42] = '\0';
          pcVar1[0x43] = '\0';
          pcVar1[0x44] = '\0';
          pcVar1[0x45] = '\0';
          pcVar1[0x46] = '\0';
          pcVar1[0x47] = '\0';
          pcVar1[0x58] = '\0';
          pcVar1[0x59] = '\0';
          pcVar1[0x5a] = '\0';
          pcVar1[0x5b] = '\0';
          pcVar1[0x5c] = '\0';
          pcVar1[0x5d] = '\0';
          pcVar1[0x5e] = '\0';
          pcVar1[0x5f] = '\0';
          pcVar1[0x50] = '\0';
          pcVar1[0x51] = '\0';
          pcVar1[0x52] = '\0';
          pcVar1[0x53] = '\0';
          pcVar1[0x54] = '\0';
          pcVar1[0x55] = '\0';
          pcVar1[0x56] = '\0';
          pcVar1[0x57] = '\0';
          pcVar1[0x28] = '\0';
          pcVar1[0x29] = '\0';
          pcVar1[0x2a] = '\0';
          pcVar1[0x2b] = '\0';
          pcVar1[0x2c] = '\0';
          pcVar1[0x2d] = '\0';
          pcVar1[0x2e] = '\0';
          pcVar1[0x2f] = '\0';
          pcVar1[0x20] = '\0';
          pcVar1[0x21] = '\0';
          pcVar1[0x22] = '\0';
          pcVar1[0x23] = '\0';
          pcVar1[0x24] = '\0';
          pcVar1[0x25] = '\0';
          pcVar1[0x26] = '\0';
          pcVar1[0x27] = '\0';
          pcVar1[0x38] = '\0';
          pcVar1[0x39] = '\0';
          pcVar1[0x3a] = '\0';
          pcVar1[0x3b] = '\0';
          pcVar1[0x3c] = '\0';
          pcVar1[0x3d] = '\0';
          pcVar1[0x3e] = '\0';
          pcVar1[0x3f] = '\0';
          pcVar1[0x30] = '\0';
          pcVar1[0x31] = '\0';
          pcVar1[0x32] = '\0';
          pcVar1[0x33] = '\0';
          pcVar1[0x34] = '\0';
          pcVar1[0x35] = '\0';
          pcVar1[0x36] = '\0';
          pcVar1[0x37] = '\0';
          pcVar1[8] = '\0';
          pcVar1[9] = '\0';
          pcVar1[10] = '\0';
          pcVar1[0xb] = '\0';
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1[0x18] = '\0';
          pcVar1[0x19] = '\0';
          pcVar1[0x1a] = '\0';
          pcVar1[0x1b] = '\0';
          pcVar1[0x1c] = '\0';
          pcVar1[0x1d] = '\0';
          pcVar1[0x1e] = '\0';
          pcVar1[0x1f] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[0x11] = '\0';
          pcVar1[0x12] = '\0';
          pcVar1[0x13] = '\0';
          pcVar1[0x14] = '\0';
          pcVar1[0x15] = '\0';
          pcVar1[0x16] = '\0';
          pcVar1[0x17] = '\0';
          func_0x000107c2b054(pcVar1,"");
          pcVar1[0x18] = '\0';
          pcVar1[0x19] = '\0';
          pcVar1[0x1a] = '\0';
          pcVar1[0x1b] = '\0';
          pcVar1[0x1c] = '\0';
          pcVar1[0x28] = '\0';
          pcVar1[0x29] = '\0';
          pcVar1[0x2a] = '\0';
          pcVar1[0x2b] = '\0';
          pcVar1[0x2c] = '\0';
          pcVar1[0x2d] = '\0';
          pcVar1[0x2e] = '\0';
          pcVar1[0x2f] = '\0';
          pcVar1[0x20] = '\0';
          pcVar1[0x21] = '\0';
          pcVar1[0x22] = -0x80;
          pcVar1[0x23] = '?';
          pcVar1[0x24] = '\0';
          pcVar1[0x25] = '\0';
          pcVar1[0x26] = '\0';
          pcVar1[0x27] = '\0';
          pcVar1[0x38] = '\0';
          pcVar1[0x39] = '\0';
          pcVar1[0x3a] = '\0';
          pcVar1[0x3b] = '\0';
          pcVar1[0x3c] = '\0';
          pcVar1[0x3d] = '\0';
          pcVar1[0x3e] = '\0';
          pcVar1[0x3f] = '\0';
          pcVar1[0x30] = '\0';
          pcVar1[0x31] = '\0';
          pcVar1[0x32] = '\0';
          pcVar1[0x33] = '\0';
          pcVar1[0x34] = '\0';
          pcVar1[0x35] = '\0';
          pcVar1[0x36] = -0x80;
          pcVar1[0x37] = '?';
          param_1 = (long ***)0x0;
          pcVar1[0x48] = '\0';
          pcVar1[0x49] = '\0';
          pcVar1[0x4a] = -0x80;
          pcVar1[0x4b] = '?';
          pcVar1[0x4c] = '\0';
          pcVar1[0x4d] = '\0';
          pcVar1[0x4e] = '\0';
          pcVar1[0x4f] = '\0';
          pcVar1[0x40] = '\0';
          pcVar1[0x41] = '\0';
          pcVar1[0x42] = '\0';
          pcVar1[0x43] = '\0';
          pcVar1[0x44] = '\0';
          pcVar1[0x45] = '\0';
          pcVar1[0x46] = '\0';
          pcVar1[0x47] = '\0';
          pcVar1[0x58] = '\0';
          pcVar1[0x59] = '\0';
          pcVar1[0x5a] = '\0';
          pcVar1[0x5b] = '\0';
          pcVar1[0x5c] = '\0';
          pcVar1[0x5d] = '\0';
          pcVar1[0x5e] = -0x80;
          pcVar1[0x5f] = '?';
          pcVar1[0x50] = '\0';
          pcVar1[0x51] = '\0';
          pcVar1[0x52] = '\0';
          pcVar1[0x53] = '\0';
          pcVar1[0x54] = '\0';
          pcVar1[0x55] = '\0';
          pcVar1[0x56] = '\0';
          pcVar1[0x57] = '\0';
          lVar16 = lVar16 + 0x60;
        } while ((long)pplVar20 * 0x60 + lVar19 * -0x20 != lVar16);
        lVar19 = *(long *)(puVar22 + 0x30);
        lVar16 = *(long *)(puVar22 + 0x38);
        func_0x00010a4f0204(unaff_x21,lVar19,lVar16,pcVar21 + (lVar19 - lVar16));
        pplStack_c0 = *(long ***)(puVar22 + 0x30);
        *(char **)(puVar22 + 0x30) = pcVar21 + (lVar19 - lVar16);
        *(long ****)(puVar22 + 0x38) = ppplStack_138;
        ppplStack_a8 = *(long ****)(puVar22 + 0x40);
        *(long ***)(puVar22 + 0x40) = pplVar10 + (long)pplVar17 * 0xc;
        pplStack_b8 = pplStack_c0;
        pplStack_b0 = pplStack_c0;
        func_0x00010a4f0354(&pplStack_c0);
      }
      else {
        pplVar17 = pplVar18 + ((ulong)pcVar1 & 0xffffffff) * 0xc;
        lVar19 = (long)pplVar20 * 0x60 + lVar19 * -0x20;
        unaff_x21 = "";
        do {
          pplVar18[9] = (long *)0x0;
          pplVar18[8] = (long *)0x0;
          pplVar18[0xb] = (long *)0x0;
          pplVar18[10] = (long *)0x0;
          pplVar18[5] = (long *)0x0;
          pplVar18[4] = (long *)0x0;
          pplVar18[7] = (long *)0x0;
          pplVar18[6] = (long *)0x0;
          pplVar18[1] = (long *)0x0;
          *pplVar18 = (long *)0x0;
          pplVar18[3] = (long *)0x0;
          pplVar18[2] = (long *)0x0;
          func_0x000107c2b054(pplVar18,"");
          *(undefined4 *)(pplVar18 + 3) = 0;
          *(char *)((long)pplVar18 + 0x1c) = '\0';
          pplVar18[5] = (long *)0x0;
          pplVar18[4] = (long *)0x3f800000;
          pplVar18[7] = (long *)0x0;
          pplVar18[6] = (long *)0x3f80000000000000;
          param_1 = (long ***)0x0;
          pplVar18[9] = (long *)0x3f800000;
          pplVar18[8] = (long *)0x0;
          pplVar18[0xb] = (long *)0x3f80000000000000;
          pplVar18[10] = (long *)0x0;
          pplVar18 = pplVar18 + 0xc;
          lVar19 = lVar19 + -0x60;
        } while (lVar19 != 0);
        *(long ***)(puVar22 + 0x38) = pplVar17;
      }
      if ((int)pplStack_130 != 0) {
        lVar19 = 0;
        unaff_x21 = (char *)0x0;
        do {
          pplVar18 = (long **)((*(long *)(puVar22 + 0x38) - *(long *)(puVar22 + 0x30) >> 5) *
                              -0x5555555555555555);
          if (pplVar18 < unaff_x21 || (long)pplVar18 - (long)unaff_x21 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4c7d50);
            (*pcVar5)();
          }
          puVar9 = (undefined8 *)(*(long *)(puVar22 + 0x30) + lVar19);
          (**(code **)(*param_3 + 0x218))(param_3,unaff_x21);
          (**(code **)(*param_3 + 0xa0))(&pplStack_c0,param_3,&PTR_DAT_110be79b8);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            __ZdlPv(*puVar9);
          }
          puVar9[2] = pplStack_b0;
          puVar9[1] = pplStack_b8;
          *puVar9 = pplStack_c0;
          ppuVar7 = param_3;
          (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110be89c8);
          *(int *)(puVar9 + 3) = (int)ppuVar7;
          ppuVar7 = param_3;
          (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be79d8,0);
          *(char *)((long)puVar9 + 0x1c) = (char)ppuVar7;
          (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be79f8);
          puVar9[9] = CONCAT44(uStack_94,uStack_98);
          puVar9[8] = pplStack_a0;
          puVar9[0xb] = uStack_88;
          puVar9[10] = uStack_90;
          puVar9[5] = pplStack_b8;
          puVar9[4] = pplStack_c0;
          puVar9[7] = ppplStack_a8;
          puVar9[6] = pplStack_b0;
          param_1 = (long ***)pplStack_c0;
          (**(code **)(*param_3 + 0x220))(param_3);
          unaff_x21 = (char *)((long)unaff_x21 + 1);
          lVar19 = lVar19 + 0x60;
        } while (pplStack_130 != (long **)unaff_x21);
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      param_2 = lStack_150;
    }
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7698);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x30;
    __Znwm();
    param_1 = (long ***)0x3f800000;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x3f800000;
    *(undefined4 *)((long)unaff_x21 + 0x20) = 0x3f800000;
    pcVar1 = (char *)((long)unaff_x21 + 0x24);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0xa8);
    *(char **)(param_2 + 0xa8) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xa8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7698);
    FUN_10ace9054(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76b8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x58;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0xc);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 0x28) = 0x3f800000;
    pcVar1 = (char *)((long)unaff_x21 + 0x2c);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x34);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x3c);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1 = (char *)((long)unaff_x21 + 0x44);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    pcVar1 = (char *)((long)unaff_x21 + 0x4d);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    lVar19 = *(long *)(param_2 + 0xb0);
    *(char **)(param_2 + 0xb0) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xb0);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76b8);
    FUN_10aaaf7d4(param_3,&PTR_DAT_110c43710,(char *)((long)unaff_x21 + 0x1c));
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110c43730,*(char *)((long)unaff_x21 + 0x54));
    *(char *)((long)unaff_x21 + 0x54) = (char)ppuVar7;
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76d8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xcc;
    __Znwm();
    *(long **)unaff_x21 = (long *)0x100000004;
    param_1 = (long ***)0x3f800000;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x3f800000;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x3f80000000000000;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 200) = 0xffffffff;
    lVar19 = *(long *)(param_2 + 0xd0);
    *(char **)(param_2 + 0xd0) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xd0);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76d8);
    func_0x00010acea888(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be76f8);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pplStack_c0 = (long **)0x0;
    func_0x00010a26df2c(param_2 + 0x128,puVar9);
    func_0x00010a26df2c(&pplStack_c0,0);
    unaff_x21 = *(char **)(param_2 + 0x128);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be76f8);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c6d9d0);
    FUN_10acfc99c(param_3,unaff_x21);
    (**(code **)(*param_3 + 0x220))(param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7718);
  if ((int)ppuVar7 != 0) {
    ppplVar11 = (long ***)0x60;
    __Znwm();
    ppplVar11[1] = (long **)0x0;
    ppplVar11[2] = (long **)0x0;
    *ppplVar11 = (long **)&PTR_DAT_110be9c38;
    param_1 = (long ***)0x0;
    ppplVar11[6] = (long **)0x0;
    ppplVar11[5] = (long **)0x0;
    ppplVar11[8] = (long **)0x0;
    ppplVar11[7] = (long **)0x0;
    ppplVar11[10] = (long **)0x0;
    ppplVar11[9] = (long **)0x0;
    ppplVar11[0xb] = (long **)0x0;
    pplStack_c0 = (long **)(ppplVar11 + 3);
    ppplVar11[4] = (long **)0x0;
    *pplStack_c0 = (long *)0x0;
    pplStack_b8 = (long **)ppplVar11;
    FUN_10a4c6358(param_2 + 0x130,&pplStack_c0);
    pplVar18 = pplStack_b8;
    if ((long ***)pplStack_b8 != (long ***)0x0) {
      ppplVar11 = (long ***)(pplStack_b8 + 1);
      do {
        pplVar20 = *ppplVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppplVar11,0x10);
        if (bVar6) {
          *ppplVar11 = (long **)((long)pplVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pplVar20 == (long **)0x0) {
        (*(code *)(*pplStack_b8)[2])(pplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
      }
    }
    unaff_x21 = *(char **)(param_2 + 0x130);
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7718);
    func_0x00010acf7c8c(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7738);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x140);
    *(char **)(param_2 + 0x140) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a5027e8(param_2 + 0x140);
      unaff_x21 = *(char **)(param_2 + 0x140);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7738);
    FUN_10acf7860(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7758);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x148);
    *(char **)(param_2 + 0x148) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502838(param_2 + 0x148);
      unaff_x21 = *(char **)(param_2 + 0x148);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7758);
    FUN_10acf5f78(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7778);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x70;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x3ff0000000000000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(char *)((long)unaff_x21 + 0x38) = '\0';
    *(undefined4 *)((long)unaff_x21 + 0x68) = 0xffffffff;
    lVar19 = *(long *)(param_2 + 0xd8);
    *(char **)(param_2 + 0xd8) = unaff_x21;
    if (lVar19 != 0) {
      __ZdlPv();
      unaff_x21 = *(char **)(param_2 + 0xd8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7778);
    FUN_10acea2d0(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7798);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x60;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x10000000000000;
    *(long **)unaff_x21 = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x10000000000000;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x8000000000000000;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(undefined4 *)((long)unaff_x21 + 0x58) = 3;
    lVar19 = *(long *)(param_2 + 0xe8);
    *(char **)(param_2 + 0xe8) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502728(param_2 + 0xe8);
      unaff_x21 = *(char **)(param_2 + 0xe8);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7798);
    FUN_10ace832c(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be77b8);
  if ((int)ppuVar7 != 0) {
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be77b8);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110be77d8,1);
    if ((int)ppuVar7 != 0) {
      *(undefined8 *)(param_2 + 0xf0) = 0xffffffff;
      *(undefined8 *)(param_2 + 0xf8) = 0x10000000000000;
      *(undefined1 *)(param_2 + 0x100) = 1;
      FUN_10ace8278((undefined8 *)(param_2 + 0xf0),param_3);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be77f8);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x548;
    __Znwm();
    _bzero();
    lVar19 = 0;
    auVar28 = NEON_fmov(0xbf800000,4);
    do {
      pcVar1 = (char *)((long)unaff_x21 + lVar19);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -1;
      pcVar1[3] = 'B';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      pcVar1[0x28] = '\0';
      pcVar1[0x29] = '\0';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x38] = '\0';
      pcVar1[0x39] = '\0';
      pcVar1[0x3a] = '\0';
      pcVar1[0x3b] = '\0';
      pcVar1[0x3c] = '\0';
      pcVar1[0x3d] = '\0';
      pcVar1[0x3e] = '\0';
      pcVar1[0x3f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x34] = '\0';
      pcVar1[0x35] = '\0';
      pcVar1[0x36] = '\0';
      pcVar1[0x37] = '\0';
      pcVar21 = pcVar1 + 0x50;
      pcVar1[0x58] = '\0';
      pcVar1[0x59] = '\0';
      pcVar1[0x5a] = '\0';
      pcVar1[0x5b] = '\0';
      pcVar1[0x5c] = '\0';
      pcVar1[0x5d] = '\0';
      pcVar1[0x5e] = '\0';
      pcVar1[0x5f] = '\0';
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[2] = '\0';
      pcVar21[3] = '\0';
      pcVar21[4] = '\0';
      pcVar21[5] = '\0';
      pcVar21[6] = '\0';
      pcVar21[7] = '\0';
      *(char **)(pcVar1 + 0x40) = pcVar1 + 8;
      *(char **)(pcVar1 + 0x48) = pcVar21;
      pcVar1[0x60] = '\0';
      pcVar1[0x61] = '\0';
      pcVar1[0x62] = -1;
      pcVar1[99] = 'B';
      pcVar1[0x6c] = '\0';
      pcVar1[0x6d] = '\0';
      pcVar1[0x6e] = '\0';
      pcVar1[0x6f] = '\0';
      pcVar1[0x70] = '\0';
      pcVar1[0x71] = '\0';
      pcVar1[0x72] = '\0';
      pcVar1[0x73] = '\0';
      pcVar1[100] = '\0';
      pcVar1[0x65] = '\0';
      pcVar1[0x66] = '\0';
      pcVar1[0x67] = '\0';
      pcVar1[0x68] = '\0';
      pcVar1[0x69] = '\0';
      pcVar1[0x6a] = '\0';
      pcVar1[0x6b] = '\0';
      pcVar1[0x7c] = '\0';
      pcVar1[0x7d] = '\0';
      pcVar1[0x7e] = '\0';
      pcVar1[0x7f] = '\0';
      pcVar1[0x80] = '\0';
      pcVar1[0x81] = '\0';
      pcVar1[0x82] = '\0';
      pcVar1[0x83] = '\0';
      pcVar1[0x74] = '\0';
      pcVar1[0x75] = '\0';
      pcVar1[0x76] = '\0';
      pcVar1[0x77] = '\0';
      pcVar1[0x78] = '\0';
      pcVar1[0x79] = '\0';
      pcVar1[0x7a] = '\0';
      pcVar1[0x7b] = '\0';
      pcVar1[0x8c] = '\0';
      pcVar1[0x8d] = '\0';
      pcVar1[0x8e] = '\0';
      pcVar1[0x8f] = '\0';
      pcVar1[0x90] = '\0';
      pcVar1[0x91] = '\0';
      pcVar1[0x92] = '\0';
      pcVar1[0x93] = '\0';
      pcVar1[0x84] = '\0';
      pcVar1[0x85] = '\0';
      pcVar1[0x86] = '\0';
      pcVar1[0x87] = '\0';
      pcVar1[0x88] = '\0';
      pcVar1[0x89] = '\0';
      pcVar1[0x8a] = '\0';
      pcVar1[0x8b] = '\0';
      pcVar1[0x98] = '\0';
      pcVar1[0x99] = '\0';
      pcVar1[0x9a] = '\0';
      pcVar1[0x9b] = '\0';
      pcVar1[0x9c] = '\0';
      pcVar1[0x9d] = '\0';
      pcVar1[0x9e] = '\0';
      pcVar1[0x9f] = '\0';
      pcVar1[0x90] = '\0';
      pcVar1[0x91] = '\0';
      pcVar1[0x92] = '\0';
      pcVar1[0x93] = '\0';
      pcVar1[0x94] = '\0';
      pcVar1[0x95] = '\0';
      pcVar1[0x96] = '\0';
      pcVar1[0x97] = '\0';
      pcVar21 = pcVar1 + 0xb0;
      pcVar1[0xb8] = '\0';
      pcVar1[0xb9] = '\0';
      pcVar1[0xba] = '\0';
      pcVar1[0xbb] = '\0';
      pcVar1[0xbc] = '\0';
      pcVar1[0xbd] = '\0';
      pcVar1[0xbe] = '\0';
      pcVar1[0xbf] = '\0';
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[2] = '\0';
      pcVar21[3] = '\0';
      pcVar21[4] = '\0';
      pcVar21[5] = '\0';
      pcVar21[6] = '\0';
      pcVar21[7] = '\0';
      *(char **)(pcVar1 + 0xa0) = pcVar1 + 0x68;
      *(char **)(pcVar1 + 0xa8) = pcVar21;
      pcVar1[0xc0] = '\0';
      pcVar1[0xc1] = '\0';
      pcVar1[0xc2] = -1;
      pcVar1[0xc3] = 'B';
      pcVar1[0xf8] = '\0';
      pcVar1[0xf9] = '\0';
      pcVar1[0xfa] = '\0';
      pcVar1[0xfb] = '\0';
      pcVar1[0xfc] = '\0';
      pcVar1[0xfd] = '\0';
      pcVar1[0xfe] = '\0';
      pcVar1[0xff] = '\0';
      pcVar1[0xf0] = '\0';
      pcVar1[0xf1] = '\0';
      pcVar1[0xf2] = '\0';
      pcVar1[0xf3] = '\0';
      pcVar1[0xf4] = '\0';
      pcVar1[0xf5] = '\0';
      pcVar1[0xf6] = '\0';
      pcVar1[0xf7] = '\0';
      pcVar1[0xec] = '\0';
      pcVar1[0xed] = '\0';
      pcVar1[0xee] = '\0';
      pcVar1[0xef] = '\0';
      pcVar1[0xf0] = '\0';
      pcVar1[0xf1] = '\0';
      pcVar1[0xf2] = '\0';
      pcVar1[0xf3] = '\0';
      pcVar1[0xe4] = '\0';
      pcVar1[0xe5] = '\0';
      pcVar1[0xe6] = '\0';
      pcVar1[0xe7] = '\0';
      pcVar1[0xe8] = '\0';
      pcVar1[0xe9] = '\0';
      pcVar1[0xea] = '\0';
      pcVar1[0xeb] = '\0';
      pcVar1[0xdc] = '\0';
      pcVar1[0xdd] = '\0';
      pcVar1[0xde] = '\0';
      pcVar1[0xdf] = '\0';
      pcVar1[0xe0] = '\0';
      pcVar1[0xe1] = '\0';
      pcVar1[0xe2] = '\0';
      pcVar1[0xe3] = '\0';
      pcVar1[0xd4] = '\0';
      pcVar1[0xd5] = '\0';
      pcVar1[0xd6] = '\0';
      pcVar1[0xd7] = '\0';
      pcVar1[0xd8] = '\0';
      pcVar1[0xd9] = '\0';
      pcVar1[0xda] = '\0';
      pcVar1[0xdb] = '\0';
      pcVar1[0xcc] = '\0';
      pcVar1[0xcd] = '\0';
      pcVar1[0xce] = '\0';
      pcVar1[0xcf] = '\0';
      pcVar1[0xd0] = '\0';
      pcVar1[0xd1] = '\0';
      pcVar1[0xd2] = '\0';
      pcVar1[0xd3] = '\0';
      pcVar1[0xc4] = '\0';
      pcVar1[0xc5] = '\0';
      pcVar1[0xc6] = '\0';
      pcVar1[199] = '\0';
      pcVar1[200] = '\0';
      pcVar1[0xc9] = '\0';
      pcVar1[0xca] = '\0';
      pcVar1[0xcb] = '\0';
      *(char **)(pcVar1 + 0x100) = pcVar1 + 200;
      *(char **)(pcVar1 + 0x108) = pcVar1 + 0x110;
      pcVar1[0x118] = '\0';
      pcVar1[0x119] = '\0';
      pcVar1[0x11a] = '\0';
      pcVar1[0x11b] = '\0';
      pcVar1[0x11c] = '\0';
      pcVar1[0x11d] = '\0';
      pcVar1[0x11e] = '\0';
      pcVar1[0x11f] = '\0';
      pcVar1[0x110] = '\0';
      pcVar1[0x111] = '\0';
      pcVar1[0x112] = '\0';
      pcVar1[0x113] = '\0';
      pcVar1[0x114] = '\0';
      pcVar1[0x115] = '\0';
      pcVar1[0x116] = '\0';
      pcVar1[0x117] = '\0';
      pcVar1[0x120] = '\0';
      pcVar1[0x128] = -1;
      pcVar1[0x129] = -1;
      pcVar1[0x12a] = -1;
      pcVar1[299] = -1;
      pcVar1[300] = '\0';
      pcVar1[0x12d] = '\0';
      pcVar1[0x12e] = '\0';
      pcVar1[0x12f] = '\0';
      pcVar1[0x130] = '\0';
      pcVar1[0x131] = '\0';
      pcVar1[0x132] = '\0';
      pcVar1[0x133] = '\0';
      *(long *)(pcVar1 + 0x13c) = auVar28._8_8_;
      *(long *)(pcVar1 + 0x134) = auVar28._0_8_;
      pcVar1[0x144] = '\0';
      pcVar1[0x145] = '\0';
      pcVar1[0x146] = -0x40;
      pcVar1[0x147] = '\x7f';
      pcVar1[0x148] = '\0';
      pcVar1[0x149] = '\0';
      pcVar1[0x14a] = -0x40;
      pcVar1[0x14b] = '\x7f';
      pcVar1[0x14c] = '\0';
      pcVar1[0x14d] = '\0';
      pcVar1[0x14e] = -0x80;
      pcVar1[0x14f] = '?';
      pcVar1[0x158] = '\0';
      pcVar1[0x159] = '\0';
      pcVar1[0x15a] = '\0';
      pcVar1[0x15b] = '\0';
      pcVar1[0x15c] = '\0';
      pcVar1[0x15d] = '\0';
      pcVar1[0x15e] = '\0';
      pcVar1[0x15f] = '\0';
      pcVar1[0x150] = '\0';
      pcVar1[0x151] = '\0';
      pcVar1[0x152] = '\0';
      pcVar1[0x153] = '\0';
      pcVar1[0x154] = '\0';
      pcVar1[0x155] = '\0';
      pcVar1[0x156] = '\0';
      pcVar1[0x157] = '\0';
      pcVar1[0x160] = '\0';
      pcVar1[0x161] = '\0';
      pcVar1[0x162] = -0x80;
      pcVar1[0x163] = '?';
      pcVar1[0x16c] = '\0';
      pcVar1[0x16d] = '\0';
      pcVar1[0x16e] = '\0';
      pcVar1[0x16f] = '\0';
      pcVar1[0x170] = '\0';
      pcVar1[0x171] = '\0';
      pcVar1[0x172] = '\0';
      pcVar1[0x173] = '\0';
      pcVar1[0x164] = '\0';
      pcVar1[0x165] = '\0';
      pcVar1[0x166] = '\0';
      pcVar1[0x167] = '\0';
      pcVar1[0x168] = '\0';
      pcVar1[0x169] = '\0';
      pcVar1[0x16a] = '\0';
      pcVar1[0x16b] = '\0';
      pcVar1[0x174] = '\0';
      pcVar1[0x175] = '\0';
      pcVar1[0x176] = -0x80;
      pcVar1[0x177] = '?';
      pcVar1[0x180] = '\0';
      pcVar1[0x181] = '\0';
      pcVar1[0x182] = '\0';
      pcVar1[0x183] = '\0';
      pcVar1[0x184] = '\0';
      pcVar1[0x185] = '\0';
      pcVar1[0x186] = '\0';
      pcVar1[0x187] = '\0';
      pcVar1[0x178] = '\0';
      pcVar1[0x179] = '\0';
      pcVar1[0x17a] = '\0';
      pcVar1[0x17b] = '\0';
      pcVar1[0x17c] = '\0';
      pcVar1[0x17d] = '\0';
      pcVar1[0x17e] = '\0';
      pcVar1[0x17f] = '\0';
      pcVar1[0x188] = '\0';
      pcVar1[0x189] = '\0';
      pcVar1[0x18a] = -0x80;
      pcVar1[0x18b] = '?';
      pcVar1[0x18c] = '\0';
      pcVar1[0x18d] = '\0';
      pcVar1[0x18e] = '\0';
      pcVar1[399] = '\0';
      pcVar1[400] = '\0';
      pcVar1[0x191] = '\0';
      pcVar1[0x192] = '\0';
      pcVar1[0x193] = '\0';
      pcVar1[0x1e8] = '\0';
      pcVar1[0x1ec] = '\0';
      pcVar1[0x1f0] = '\0';
      pcVar1[500] = '\0';
      pcVar1[0x1a8] = '\0';
      pcVar1[0x1a0] = '\0';
      pcVar1[0x1a1] = '\0';
      pcVar1[0x1a2] = '\0';
      pcVar1[0x1a3] = '\0';
      pcVar1[0x1a4] = '\0';
      pcVar1[0x1a5] = '\0';
      pcVar1[0x1a6] = '\0';
      pcVar1[0x1a7] = '\0';
      pcVar1[0x198] = '\0';
      pcVar1[0x199] = '\0';
      pcVar1[0x19a] = '\0';
      pcVar1[0x19b] = '\0';
      pcVar1[0x19c] = '\0';
      pcVar1[0x19d] = '\0';
      pcVar1[0x19e] = '\0';
      pcVar1[0x19f] = '\0';
      pcVar1[0x1f8] = '\0';
      pcVar1[0x1f9] = '\0';
      pcVar1[0x1fa] = -0x80;
      pcVar1[0x1fb] = '?';
      pcVar1[0x208] = '\0';
      *(undefined ***)(pcVar1 + 0x200) = &PTR_DAT_110ba5598;
      pcVar1[0x210] = '\0';
      pcVar1[0x211] = '\0';
      pcVar1[0x212] = '\0';
      pcVar1[0x213] = '\0';
      pcVar1[0x214] = '\0';
      pcVar1[0x215] = '\0';
      pcVar1[0x216] = '\0';
      pcVar1[0x217] = '\0';
      pcVar1[0x218] = '\0';
      pcVar1[0x220] = '\0';
      pcVar1[0x221] = '\0';
      pcVar1[0x222] = -1;
      pcVar1[0x223] = 'B';
      pcVar1[0x22c] = '\0';
      pcVar1[0x22d] = '\0';
      pcVar1[0x22e] = '\0';
      pcVar1[0x22f] = '\0';
      pcVar1[0x230] = '\0';
      pcVar1[0x231] = '\0';
      pcVar1[0x232] = '\0';
      pcVar1[0x233] = '\0';
      pcVar1[0x224] = '\0';
      pcVar1[0x225] = '\0';
      pcVar1[0x226] = '\0';
      pcVar1[0x227] = '\0';
      pcVar1[0x228] = '\0';
      pcVar1[0x229] = '\0';
      pcVar1[0x22a] = '\0';
      pcVar1[0x22b] = '\0';
      pcVar1[0x23c] = '\0';
      pcVar1[0x23d] = '\0';
      pcVar1[0x23e] = '\0';
      pcVar1[0x23f] = '\0';
      pcVar1[0x240] = '\0';
      pcVar1[0x241] = '\0';
      pcVar1[0x242] = '\0';
      pcVar1[0x243] = '\0';
      pcVar1[0x234] = '\0';
      pcVar1[0x235] = '\0';
      pcVar1[0x236] = '\0';
      pcVar1[0x237] = '\0';
      pcVar1[0x238] = '\0';
      pcVar1[0x239] = '\0';
      pcVar1[0x23a] = '\0';
      pcVar1[0x23b] = '\0';
      pcVar1[0x24c] = '\0';
      pcVar1[0x24d] = '\0';
      pcVar1[0x24e] = '\0';
      pcVar1[0x24f] = '\0';
      pcVar1[0x250] = '\0';
      pcVar1[0x251] = '\0';
      pcVar1[0x252] = '\0';
      pcVar1[0x253] = '\0';
      pcVar1[0x244] = '\0';
      pcVar1[0x245] = '\0';
      pcVar1[0x246] = '\0';
      pcVar1[0x247] = '\0';
      pcVar1[0x248] = '\0';
      pcVar1[0x249] = '\0';
      pcVar1[0x24a] = '\0';
      pcVar1[0x24b] = '\0';
      pcVar1[600] = '\0';
      pcVar1[0x259] = '\0';
      pcVar1[0x25a] = '\0';
      pcVar1[0x25b] = '\0';
      pcVar1[0x25c] = '\0';
      pcVar1[0x25d] = '\0';
      pcVar1[0x25e] = '\0';
      pcVar1[0x25f] = '\0';
      pcVar1[0x250] = '\0';
      pcVar1[0x251] = '\0';
      pcVar1[0x252] = '\0';
      pcVar1[0x253] = '\0';
      pcVar1[0x254] = '\0';
      pcVar1[0x255] = '\0';
      pcVar1[0x256] = '\0';
      pcVar1[599] = '\0';
      *(char **)(pcVar1 + 0x260) = pcVar1 + 0x228;
      *(char **)(pcVar1 + 0x268) = pcVar1 + 0x270;
      pcVar1[0x290] = '\0';
      pcVar1[0x291] = '\0';
      pcVar1[0x292] = '\0';
      pcVar1[0x293] = '\0';
      pcVar1[0x294] = '\0';
      pcVar1[0x295] = '\0';
      pcVar1[0x296] = '\0';
      pcVar1[0x297] = '\0';
      pcVar1[0x288] = '\0';
      pcVar1[0x289] = '\0';
      pcVar1[0x28a] = '\0';
      pcVar1[0x28b] = '\0';
      pcVar1[0x28c] = '\0';
      pcVar1[0x28d] = '\0';
      pcVar1[0x28e] = '\0';
      pcVar1[0x28f] = '\0';
      pcVar1[0x278] = '\0';
      pcVar1[0x279] = '\0';
      pcVar1[0x27a] = '\0';
      pcVar1[0x27b] = '\0';
      pcVar1[0x27c] = '\0';
      pcVar1[0x27d] = '\0';
      pcVar1[0x27e] = '\0';
      pcVar1[0x27f] = '\0';
      pcVar1[0x270] = '\0';
      pcVar1[0x271] = '\0';
      pcVar1[0x272] = '\0';
      pcVar1[0x273] = '\0';
      pcVar1[0x274] = '\0';
      pcVar1[0x275] = '\0';
      pcVar1[0x276] = '\0';
      pcVar1[0x277] = '\0';
      lVar19 = lVar19 + 0x298;
      pcVar1[0x280] = '\0';
      pcVar1[0x281] = '\0';
    } while (lVar19 != 0x530);
    *(char *)((long)unaff_x21 + 0x530) = '\0';
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x540) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x538) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x70);
    *(char **)(param_2 + 0x70) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502490(param_2 + 0x70);
      unaff_x21 = *(char **)(param_2 + 0x70);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be77f8);
    FUN_10ace2804(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  FUN_10a4c7e74(param_3,&PTR_DAT_110be7818,param_2 + 0x78);
  ppplVar11 = (long ***)(param_2 + 0x80);
  FUN_10a4c7e74(param_3,&PTR_DAT_110be7838);
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7858);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0xd8;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 200) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd0) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_DAT_110c6d560;
    pcVar1 = (char *)((long)unaff_x21 + 0xa9);
    pcVar21 = (char *)((long)unaff_x21 + 0xb1);
    pcVar21[0] = '\0';
    pcVar21[1] = '\0';
    pcVar21[2] = '\0';
    pcVar21[3] = '\0';
    pcVar21[4] = '\0';
    pcVar21[5] = '\0';
    pcVar21[6] = '\0';
    pcVar21[7] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    plVar8 = *(long **)(param_2 + 0x88);
    *(char **)(param_2 + 0x88) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x88);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7858);
    (*(code *)(*(long **)unaff_x21)[2])(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7878);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x100;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x38) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x48) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x40) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x58) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x50) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x68) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x60) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x78) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x70) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x88) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x80) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x98) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x90) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xa0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xb0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 200) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xc0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xd0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xe8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xe0) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xf8) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0xf0) = (long *)0x0;
    lVar19 = *(long *)(param_2 + 0x90);
    *(char **)(param_2 + 0x90) = unaff_x21;
    if (lVar19 != 0) {
      func_0x00010a502568(param_2 + 0x90);
      unaff_x21 = *(char **)(param_2 + 0x90);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7878);
    func_0x00010acf2998(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7898);
  if ((int)ppuVar7 != 0) {
    unaff_x21 = (char *)0x38;
    __Znwm();
    param_1 = (long ***)0x0;
    *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
    *(long **)((long)unaff_x21 + 8) = (long *)0x0;
    *(long **)unaff_x21 = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
    *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
    *(undefined ***)unaff_x21 = &PTR_FUN_110bef718;
    *(undefined4 *)((long)unaff_x21 + 0x30) = 0x3f800000;
    plVar8 = *(long **)(param_2 + 0x108);
    *(char **)(param_2 + 0x108) = unaff_x21;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      unaff_x21 = *(char **)(param_2 + 0x108);
    }
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7898);
    (*(code *)(*(long **)unaff_x21)[2])(unaff_x21,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  ppuVar7 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78b8);
  if ((int)ppuVar7 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = puVar9 + 1;
    pplStack_c0 = (long **)0x0;
    func_0x00010a293674(param_2 + 0x110,puVar9);
    func_0x00010a293674(&pplStack_c0,0);
    ppplStack_138 = *(long ****)(param_2 + 0x110);
    lStack_150 = param_2;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78b8);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x208))();
    if ((int)ppuVar7 != 0) {
      uVar24 = 0;
      pplStack_140 = &plStack_120;
      ppplStack_148 = &pplStack_a0;
      unaff_x21 = (char *)0x109d138c8;
      do {
        (**(code **)(*param_3 + 0x218))(param_3,uVar24);
        *pplStack_140 = (long *)0x0;
        pplStack_140[1] = (long *)0x0;
        pplStack_128 = pplStack_140;
        (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be8480);
        ppuVar7 = param_3;
        (**(code **)(*param_3 + 0x208))();
        pplStack_130 = (long **)CONCAT44(pplStack_130._4_4_,uVar24);
        if ((int)ppuVar7 != 0) {
          uVar24 = 0;
          do {
            uVar25 = (uint)param_1;
            (**(code **)(*param_3 + 0x218))(param_3,uVar24);
            ppplStack_f8 = (long ***)0x0;
            pplStack_f0 = (long **)0x0;
            (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be8440);
            pplVar18 = (long **)0xa8;
            __Znwm();
            pplVar18[1] = (long *)0x0;
            pplVar18[2] = (long *)0x0;
            *pplVar18 = (long *)&PTR_FUN_110baa4d8;
            ppplVar12 = (long ***)(pplVar18 + 3);
            *ppplVar12 = (long **)&PTR_FUN_110bab9a0;
            pplVar18[5] = (long *)0x0;
            pplVar18[6] = (long *)0x0;
            *(char *)(pplVar18 + 4) = '\0';
            *(char *)(pplVar18 + 0x14) = '\0';
            pplVar18[9] = (long *)0x0;
            pplVar18[10] = (long *)0x0;
            pplVar18[7] = (long *)0xffffffff00000000;
            pplVar18[8] = (long *)0x0;
            pplVar18[0xb] = (long *)0x0;
            pplVar18[0xc] = (long *)0x109d138c8;
            pplVar18[0xd] = (long *)&PTR_DAT_110b3e838;
            pplVar18[0xe] = (long *)FUN_10a1b2664;
            ppplStack_f8 = ppplVar12;
            pplStack_f0 = pplVar18;
            FUN_10a1b3324(ppplVar12,param_3);
            (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110be8420);
            pplStack_e8 = (long **)CONCAT44(pplStack_e8._4_4_,uVar25);
            (**(code **)(*param_3 + 0x220))(param_3);
            (**(code **)(*param_3 + 0xa0))(&pplStack_110,param_3,&PTR_DAT_110be8460);
            pplStack_b0 = pplStack_100;
            param_1 = (long ***)pplStack_110;
            pplStack_b8 = pplStack_108;
            pplStack_c0 = pplStack_110;
            pplStack_108 = (long **)0x0;
            pplStack_100 = (long **)0x0;
            pplStack_110 = (long **)0x0;
            ppplStack_f8 = (long ***)0x0;
            pplStack_f0 = (long **)0x0;
            ppplVar11 = &pplStack_128;
            ppplStack_a8 = ppplVar12;
            pplStack_a0 = pplVar18;
            uStack_98 = uVar25;
            FUN_10a4f73d8(ppplVar11,&plStack_e0,&pplStack_c0);
            if (*ppplVar11 == (long **)0x0) {
              pplVar18 = (long **)0x50;
              __Znwm();
              ppplStack_d0 = &pplStack_128;
              uStack_c8 = 0;
              pplStack_d8 = pplVar18;
              if ((long)pplStack_b0 < 0) {
                func_0x000107c3192c(pplVar18 + 4,pplStack_c0,pplStack_b8);
              }
              else {
                pplVar18[5] = (long *)pplStack_b8;
                pplVar18[4] = (long *)pplStack_c0;
                pplVar18[6] = (long *)pplStack_b0;
              }
              pplVar18[8] = (long *)pplStack_a0;
              pplVar18[7] = (long *)ppplStack_a8;
              ppplStack_a8 = (long ***)0x0;
              pplStack_a0 = (long **)0x0;
              param_1 = (long ***)(ulong)uStack_98;
              *(uint *)(pplVar18 + 9) = uStack_98;
              *pplVar18 = (long *)0x0;
              pplVar18[1] = (long *)0x0;
              pplVar18[2] = plStack_e0;
              *ppplVar11 = pplVar18;
              if ((long **)*pplStack_128 != (long **)0x0) {
                pplVar18 = *ppplVar11;
                pplStack_128 = (long **)*pplStack_128;
              }
              func_0x000107c2b058(plStack_120,pplVar18);
              lStack_118 = lStack_118 + 1;
            }
            pplVar18 = pplStack_a0;
            if (pplStack_a0 != (long **)0x0) {
              pplVar20 = pplStack_a0 + 1;
              do {
                plVar8 = *pplVar20;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
                if (bVar6) {
                  *pplVar20 = (long *)((long)plVar8 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (plVar8 == (long *)0x0) {
                (*(code *)(*pplStack_a0)[2])(pplStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
              }
            }
            if ((long)pplStack_b0 < 0) {
              __ZdlPv(pplStack_c0);
            }
            if ((long)pplStack_100 < 0) {
              __ZdlPv(pplStack_110);
            }
            (**(code **)(*param_3 + 0x220))(param_3);
            pplVar18 = pplStack_f0;
            if ((long ***)pplStack_f0 != (long ***)0x0) {
              ppplVar11 = (long ***)(pplStack_f0 + 1);
              do {
                pplVar20 = *ppplVar11;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppplVar11,0x10);
                if (bVar6) {
                  *ppplVar11 = (long **)((long)pplVar20 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pplVar20 == (long **)0x0) {
                (*(code *)(*pplStack_f0)[2])(pplStack_f0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar18);
              }
            }
            ppuVar7 = param_3;
            (**(code **)(*param_3 + 0x208))();
            uVar24 = uVar24 + 1;
          } while (uVar24 < (uint)ppuVar7);
        }
        (**(code **)(*param_3 + 0x220))(param_3);
        iVar4 = (int)pplStack_130;
        (**(code **)(*param_3 + 0xa0))(&ppplStack_f8,param_3,&PTR_DAT_110be84a0);
        param_1 = ppplStack_f8;
        pplStack_b8 = pplStack_f0;
        pplStack_c0 = (long **)ppplStack_f8;
        pplStack_b0 = pplStack_e8;
        pplStack_f0 = (long **)0x0;
        pplStack_e8 = (long **)0x0;
        ppplStack_f8 = (long ***)0x0;
        FUN_10a4f71c4(&ppplStack_a8,&pplStack_128);
        ppplVar11 = &pplStack_c0;
        ppplVar12 = ppplStack_138;
        FUN_10a503944(ppplStack_138,&pplStack_110);
        if (*ppplVar12 == (long **)0x0) {
          pplVar18 = (long **)0x50;
          __Znwm();
          ppplStack_d0 = ppplStack_138;
          uStack_c8 = 0;
          pplStack_d8 = pplVar18;
          if ((long)pplStack_b0 < 0) {
            func_0x000107c3192c(pplVar18 + 4,pplStack_c0,pplStack_b8);
          }
          else {
            pplVar18[5] = (long *)pplStack_b8;
            pplVar18[4] = (long *)pplStack_c0;
            pplVar18[6] = (long *)pplStack_b0;
            param_1 = (long ***)pplStack_c0;
          }
          pplVar20 = pplVar18 + 8;
          *pplVar20 = (long *)pplStack_a0;
          pplVar18[7] = (long *)ppplStack_a8;
          pplVar18[9] = (long *)CONCAT44(uStack_94,uStack_98);
          if ((long *)CONCAT44(uStack_94,uStack_98) == (long *)0x0) {
            pplVar18[7] = (long *)pplVar20;
          }
          else {
            pplStack_a0[2] = (long *)pplVar20;
            ppplStack_a8 = ppplStack_148;
            *ppplStack_148 = (long **)0x0;
            ppplStack_148[1] = (long **)0x0;
          }
          FUN_10a5038f0(ppplStack_138,pplStack_110,ppplVar12,pplVar18);
          ppplVar11 = ppplVar12;
        }
        func_0x00010a29373c(&ppplStack_a8,pplStack_a0);
        if ((long)pplStack_b0 < 0) {
          __ZdlPv(pplStack_c0);
        }
        if ((long)pplStack_e8 < 0) {
          __ZdlPv(ppplStack_f8);
        }
        (**(code **)(*param_3 + 0x220))(param_3);
        func_0x00010a29373c(&pplStack_128,plStack_120);
        uVar24 = iVar4 + 1;
        ppuVar7 = param_3;
        (**(code **)(*param_3 + 0x208))();
      } while (uVar24 < (uint)ppuVar7);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
    param_2 = lStack_150;
  }
  if ((*(long *)(param_2 + 0x110) != 0) && (*(long *)(*(long *)(param_2 + 0x110) + 0x10) == 0)) {
    func_0x00010a293674(param_2 + 0x110,0);
  }
  (**(code **)(**(long **)(param_2 + 0x118) + 0x10))(*(long **)(param_2 + 0x118),param_3);
  ppuVar7 = param_3;
  FUN_10acf1fe8(param_3,param_2);
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78d8);
    if ((int)ppuVar7 != 0) {
      unaff_x21 = (char *)0x38;
      __Znwm();
      *(long **)((long)unaff_x21 + 8) = (long *)0x0;
      *(long **)unaff_x21 = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x18) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x28) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x20) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x30) = (long *)0x0;
      lVar19 = *(long *)(param_2 + 0x150);
      *(char **)(param_2 + 0x150) = unaff_x21;
      if (lVar19 != 0) {
        func_0x00010a502888(param_2 + 0x150);
        unaff_x21 = *(char **)(param_2 + 0x150);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78d8);
      func_0x00010acf2460(unaff_x21,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be78f8);
    if ((int)ppuVar7 != 0) {
      unaff_x21 = (char *)0x18;
      __Znwm();
      *(long **)((long)unaff_x21 + 8) = (long *)0x0;
      *(long **)((long)unaff_x21 + 0x10) = (long *)0x0;
      *(long **)unaff_x21 = (long *)0x0;
      lVar19 = *(long *)(param_2 + 0x158);
      *(char **)(param_2 + 0x158) = unaff_x21;
      if (lVar19 != 0) {
        func_0x00010a50299c(param_2 + 0x158);
        unaff_x21 = *(char **)(param_2 + 0x158);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be78f8);
      func_0x00010acf222c(unaff_x21,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
  }
  pplVar18 = (long **)(param_2 + 0x218);
  ppuVar7 = &PTR_DAT_110be7918;
  ppuVar13 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7918);
  if ((int)ppuVar13 != 0) {
    FUN_10a23b0c4(&pplStack_c0,&pplStack_d8);
    pplVar20 = pplStack_c0;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7918);
    ppuVar7 = param_3;
    FUN_10a310514(pplVar20,param_3);
    (**(code **)(*param_3 + 0x220))(param_3);
    pplVar17 = pplStack_b8;
    pplVar20 = pplStack_c0;
    pplStack_c0 = (long **)0x0;
    pplStack_b8 = (long **)0x0;
    plVar8 = *(long **)(param_2 + 0x220);
    *(long ***)(param_2 + 0x220) = pplVar17;
    *pplVar18 = (long *)pplVar20;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        lVar19 = *plVar2;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    unaff_x21 = (char *)pplStack_b8;
    if (pplStack_b8 != (long **)0x0) {
      pplVar20 = pplStack_b8 + 1;
      do {
        plVar8 = *pplVar20;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
        if (bVar6) {
          *pplVar20 = (long *)((long)plVar8 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar8 == (long *)0x0) {
        (*(code *)(*pplStack_b8)[2])(pplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  plVar8 = *pplVar18;
  pplStack_c0 = (long **)&UNK_10f65ce32;
  pplStack_b8 = (long **)0x27;
  if (plVar8 != (long *)0x0) {
    FUN_10a22b608(plVar8,(int)plVar8[0x14]);
    lVar19 = plVar8[2];
    lVar16 = plVar8[3];
    lVar27 = plVar8[5];
    lVar26 = plVar8[4];
    lVar29 = *plVar8;
    *(long *)(param_2 + 0x1a0) = plVar8[1];
    *(long *)(param_2 + 0x198) = lVar29;
    *(long *)(param_2 + 0x1b0) = lVar16;
    *(long *)(param_2 + 0x1a8) = lVar19;
    *(long *)(param_2 + 0x1c0) = lVar27;
    *(long *)(param_2 + 0x1b8) = lVar26;
    lVar27 = plVar8[9];
    lVar26 = plVar8[8];
    lVar16 = plVar8[0xb];
    lVar19 = plVar8[10];
    uVar23 = *(undefined8 *)((long)plVar8 + 0x5c);
    lVar30 = plVar8[7];
    lVar29 = plVar8[6];
    *(undefined8 *)(param_2 + 0x1fc) = *(undefined8 *)((long)plVar8 + 100);
    *(undefined8 *)(param_2 + 500) = uVar23;
    *(long *)(param_2 + 0x1e0) = lVar27;
    *(long *)(param_2 + 0x1d8) = lVar26;
    *(long *)(param_2 + 0x1f0) = lVar16;
    *(long *)(param_2 + 0x1e8) = lVar19;
    *(long *)(param_2 + 0x1d0) = lVar30;
    *(long *)(param_2 + 0x1c8) = lVar29;
    FUN_10a22b858(param_2 + 0x208,plVar8 + 0xe);
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7938);
    if ((int)ppuVar7 != 0) {
      puVar9 = (undefined8 *)0x68;
      __Znwm();
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xc] = 0;
      pplStack_c0 = (long **)0x0;
      func_0x00010a502a70(param_2 + 0x170,puVar9);
      func_0x00010a502a70(&pplStack_c0,0);
      uVar23 = *(undefined8 *)(param_2 + 0x170);
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7938);
      FUN_10acdedcc(uVar23,param_3);
      (**(code **)(*param_3 + 0x220))(param_3);
    }
    ppuVar7 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7958);
    if ((int)ppuVar7 != 0) {
      puVar9 = (undefined8 *)0xa8;
      __Znwm();
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x14] = 0;
      *(undefined4 *)((long)puVar9 + 4) = 0x3f800000;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x1c) = 0;
      *(undefined8 *)((long)puVar9 + 0x24) = 0;
      *(undefined4 *)((long)puVar9 + 0x2c) = 0x3f800000;
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined4 *)(puVar9 + 8) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x4c) = 0;
      *(undefined8 *)((long)puVar9 + 0x44) = 0;
      *(undefined4 *)((long)puVar9 + 0x5c) = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x54) = 0;
      *(undefined8 *)((long)puVar9 + 0x6c) = 0;
      *(undefined8 *)((long)puVar9 + 100) = 0;
      *(undefined4 *)((long)puVar9 + 0x74) = 0x3f800000;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0;
      *(undefined4 *)(puVar9 + 0x11) = 0x3f800000;
      *(undefined8 *)((long)puVar9 + 0x94) = 0;
      *(undefined8 *)((long)puVar9 + 0x8c) = 0;
      *(undefined4 *)((long)puVar9 + 0x9c) = 0x3f800000;
      lVar19 = *(long *)(param_2 + 0x98);
      *(undefined8 **)(param_2 + 0x98) = puVar9;
      if (lVar19 != 0) {
        func_0x00010a502670();
        puVar9 = *(undefined8 **)(param_2 + 0x98);
      }
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7958);
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110be8f50);
      *(char *)puVar9 = (char)ppuVar7;
      (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be8f70);
      *(undefined8 *)((long)puVar9 + 0x3c) = uStack_88;
      *(undefined8 *)((long)puVar9 + 0x34) = uStack_90;
      *(ulong *)((long)puVar9 + 0x2c) = CONCAT44(uStack_94,uStack_98);
      *(long ***)((long)puVar9 + 0x24) = pplStack_a0;
      *(long ****)((long)puVar9 + 0x1c) = ppplStack_a8;
      *(long ***)((long)puVar9 + 0x14) = pplStack_b0;
      *(long ***)((long)puVar9 + 0xc) = pplStack_b8;
      *(long ***)((long)puVar9 + 4) = pplStack_c0;
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110be8f90);
      *(int *)((long)puVar9 + 0x44) = (int)ppuVar7;
      (**(code **)(*param_3 + 0xa0))(&pplStack_c0,param_3,&PTR_DAT_110be8fb0);
      if (*(char *)((long)puVar9 + 0x5f) < '\0') {
        __ZdlPv(puVar9[9]);
      }
      puVar9[10] = pplStack_b8;
      puVar9[9] = pplStack_c0;
      puVar9[0xb] = pplStack_b0;
      (**(code **)(*param_3 + 0x1a8))(&pplStack_c0,param_3,&PTR_DAT_110be8fd0);
      puVar9[0xd] = pplStack_b8;
      puVar9[0xc] = pplStack_c0;
      puVar9[0xf] = ppplStack_a8;
      puVar9[0xe] = pplStack_b0;
      puVar9[0x11] = CONCAT44(uStack_94,uStack_98);
      puVar9[0x10] = pplStack_a0;
      puVar9[0x13] = uStack_88;
      puVar9[0x12] = uStack_90;
      ppuVar7 = param_3;
      (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110be8ff0);
      *(char *)(puVar9 + 0x14) = (char)ppuVar7;
      (**(code **)(*param_3 + 0x220))(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a4c7d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x220))(param_3);
    return;
  }
  ppplVar12 = &pplStack_c0;
  FUN_10a0edfc4();
  func_0x00010a14e208(&pplStack_c0);
  FUN_10a500034((long **)((long)unaff_x21 + 0x40));
  pplStack_c0 = pplVar18;
  FUN_10a4fff4c(&pplStack_c0);
  if (*(long **)((long)unaff_x21 + 8) != (long *)0x0) {
    *(long **)((long)unaff_x21 + 0x10) = *(long **)((long)unaff_x21 + 8);
    __ZdlPv();
  }
  __ZdlPv(unaff_x21);
  ppplVar14 = ppplVar12;
  __Unwind_Resume();
  pcStack_158 = FUN_10a4c7e74;
  ppplVar15 = ppplVar14;
  ppplStack_180 = &pplStack_c0;
  pplStack_178 = (long **)unaff_x21;
  pplStack_170 = pplVar18;
  ppplStack_168 = ppplVar12;
  puStack_160 = &stack0xfffffffffffffff0;
  (*(code *)(*ppplVar14)[0x40])();
  if ((int)ppplVar15 != 0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    uStack_188 = 0;
    func_0x00010a2914e4(ppplVar11,puVar9);
    func_0x00010a2914e4(&uStack_188,0);
    pplVar18 = *ppplVar11;
    (*(code *)(*ppplVar14)[0x42])(ppplVar14,ppuVar7);
    (*(code *)(*ppplVar14)[0x42])(ppplVar14,&PTR_DAT_110c434b0);
    FUN_10aae55d4(ppplVar14,pplVar18);
    (*(code *)(*ppplVar14)[0x44])(ppplVar14);
    (*(code *)(*ppplVar14)[0x44])(ppplVar14);
  }
  return;
}



/* Entry: 10a4c7e74; end: 10a4c7f3f;  */

void FUN_10a4c7e74(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar1 != 0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    uStack_38 = 0;
    func_0x00010a2914e4(param_3,puVar2);
    func_0x00010a2914e4(&uStack_38,0);
    uVar3 = *param_3;
    (**(code **)(*param_1 + 0x210))(param_1,param_2);
    (**(code **)(*param_1 + 0x210))(param_1,&PTR_DAT_110c434b0);
    FUN_10aae55d4(param_1,uVar3);
    (**(code **)(*param_1 + 0x220))(param_1);
    (**(code **)(*param_1 + 0x220))(param_1);
  }
  return;
}



/* Entry: 10a4c7f40; end: 10a4c893b;  */

void FUN_10a4c7f40(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  char cStack_89;
  long *plStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7638);
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10),param_2);
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7658);
    FUN_10aac1778(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  puVar5 = *(undefined1 **)(param_1 + 0xa0);
  if (puVar5 != (undefined1 *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7678);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be7978,*puVar5);
    if (*(long *)(puVar5 + 0x38) != *(long *)(puVar5 + 0x30)) {
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7998);
      lVar1 = *(long *)(puVar5 + 0x38);
      for (lVar8 = *(long *)(puVar5 + 0x30); lVar8 != lVar1; lVar8 = lVar8 + 0x60) {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110be79b8,lVar8);
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be89c8,*(undefined4 *)(lVar8 + 0x18));
        (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be79d8,*(undefined1 *)(lVar8 + 0x1c));
        (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110be79f8,lVar8 + 0x20);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7698);
    (**(code **)(*param_2 + 0xe8))(param_2,&PTR_DAT_110c6d208,lVar8);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c6d228,lVar8 + 0x24);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be76b8);
    func_0x00010aaaf868(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be76d8);
    FUN_10acea9b4(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x128);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be76f8);
    FUN_10acf8f10(param_2,&PTR_DAT_110c6d9d0,lVar8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x130);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7718);
    func_0x00010acf7d64(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7738);
    FUN_10acf7a5c(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x148);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7758);
    FUN_10acf6174(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0xd8);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7778);
    func_0x00010acea438(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0xe8);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7798);
    FUN_10ace855c(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be77b8);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6d1b0,*(undefined4 *)(param_1 + 0xf0));
    (**(code **)(*param_2 + 0x68))(*(undefined8 *)(param_1 + 0xf8),param_2,&PTR_DAT_110c6d1d0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be77f8);
    func_0x00010ace2964(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_10a4c893c(param_2,&PTR_DAT_110be7818,*(undefined8 *)(param_1 + 0x78));
  FUN_10a4c893c(param_2,&PTR_DAT_110be7838,*(undefined8 *)(param_1 + 0x80));
  plVar9 = *(long **)(param_1 + 0x88);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7858);
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7878);
    func_0x00010acf2a04(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  plVar9 = *(long **)(param_1 + 0x108);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7898);
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x110);
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be78b8);
    plVar9 = (long *)*puVar11;
    if (plVar9 != puVar11 + 1) {
      do {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110be84a0,plVar9 + 4);
        (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8480);
        plVar6 = (long *)plVar9[7];
        while (plVar6 != plVar9 + 8) {
          FUN_10a4f714c(&pppuStack_a0,plVar6 + 4);
          (**(code **)(*param_2 + 0x10))(param_2);
          lStack_68 = (long)cStack_89;
          pppuStack_70 = &pppuStack_a0;
          if (lStack_68 < 0) {
            pppuStack_70 = pppuStack_a0;
            lStack_68 = lStack_98;
            if (lStack_98 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4c8928);
              (*pcVar3)();
            }
          }
          (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110be8460,&pppuStack_70);
          (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8440);
          (**(code **)(*plStack_88 + 0x18))(plStack_88,param_2);
          (**(code **)(*param_2 + 0x60))(uStack_78,param_2,&PTR_DAT_110be8420);
          (**(code **)(*param_2 + 0x20))(param_2);
          (**(code **)(*param_2 + 0x20))(param_2);
          plVar10 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar7 = plStack_80 + 1;
            do {
              lVar8 = *plVar7;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          if (cStack_89 < '\0') {
            __ZdlPv(pppuStack_a0);
          }
          plVar10 = (long *)plVar6[1];
          plVar7 = plVar6;
          if ((long *)plVar6[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar7[2];
              bVar4 = (long *)*plVar6 != plVar7;
              plVar7 = plVar6;
            } while (bVar4);
          }
          else {
            do {
              plVar6 = plVar10;
              plVar10 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
        }
        (**(code **)(*param_2 + 0x20))(param_2);
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar6 = (long *)plVar9[1];
        plVar10 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar10[2];
            bVar4 = (long *)*plVar9 != plVar10;
            plVar10 = plVar9;
          } while (bVar4);
        }
        else {
          do {
            plVar9 = plVar6;
            plVar6 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      } while (plVar9 != puVar11 + 1);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(**(long **)(param_1 + 0x118) + 0x18))(*(long **)(param_1 + 0x118),param_2);
  lVar8 = *(long *)(param_1 + 0x150);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be78d8);
    func_0x00010acf2544(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x158);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be78f8);
    FUN_10a00d760(param_2,&PTR_DAT_110c6d6d0,lVar8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x218);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7918);
    func_0x00010a310ac0(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  lVar8 = *(long *)(param_1 + 0x170);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7938);
    FUN_10acdeecc(lVar8,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  puVar5 = *(undefined1 **)(param_1 + 0x98);
  if (puVar5 != (undefined1 *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7958);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be8f50,*puVar5);
    (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110be8f70,puVar5 + 4);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be8f90,*(undefined4 *)(puVar5 + 0x44));
    FUN_10a00d760(param_2,&PTR_DAT_110be8fb0,puVar5 + 0x48);
    (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110be8fd0,puVar5 + 0x60);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be8ff0,puVar5[0xa0]);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a4c8920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a4c893c; end: 10a4c89af;  */

void FUN_10a4c893c(long *param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x18))();
    (**(code **)(*param_1 + 0x18))(param_1,&PTR_DAT_110c434b0);
    FUN_10aae58b0(param_1,param_3);
    (**(code **)(*param_1 + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010a4c89a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



/* Entry: 10a4c89b0; end: 10a4ca3e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4c89b0(long *param_1,long *param_2,ulong param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  long lVar31;
  uint uVar32;
  undefined8 *puVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  ulong uStack_c0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if (param_5 != 0) {
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar15 = param_2[4];
    *(char *)(param_1 + 5) = (char)param_2[5];
    param_1[4] = lVar15;
  }
  if (param_4 != 0) {
    lVar10 = param_2[0x34];
    lVar15 = param_2[0x33];
    lVar28 = param_2[0x35];
    lVar42 = param_2[0x38];
    lVar31 = param_2[0x37];
    param_1[0x36] = param_2[0x36];
    param_1[0x35] = lVar28;
    param_1[0x38] = lVar42;
    param_1[0x37] = lVar31;
    param_1[0x34] = lVar10;
    param_1[0x33] = lVar15;
    lVar10 = param_2[0x3a];
    lVar15 = param_2[0x39];
    lVar31 = param_2[0x3c];
    lVar28 = param_2[0x3b];
    lVar43 = param_2[0x3e];
    lVar42 = param_2[0x3d];
    uVar21 = *(undefined8 *)((long)param_2 + 500);
    *(undefined8 *)((long)param_1 + 0x1fc) = *(undefined8 *)((long)param_2 + 0x1fc);
    *(undefined8 *)((long)param_1 + 500) = uVar21;
    param_1[0x3c] = lVar31;
    param_1[0x3b] = lVar28;
    param_1[0x3e] = lVar43;
    param_1[0x3d] = lVar42;
    param_1[0x3a] = lVar10;
    param_1[0x39] = lVar15;
    FUN_10a22b858(param_1 + 0x41,param_2 + 0x41);
    if (param_2[0x43] != 0) {
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      if (param_1[0x43] == 0) {
        FUN_10a502c20(&plStack_a0);
        plVar26 = plStack_78;
        plStack_78 = plStack_98;
        plStack_80 = plStack_a0;
        plStack_a0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        if (plVar26 != (long *)0x0) {
          plVar34 = plVar26 + 1;
          do {
            lVar15 = *plVar34;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar8) {
              *plVar34 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        plVar26 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar34 = plStack_98 + 1;
          do {
            lVar15 = *plVar34;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar8) {
              *plVar34 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
      }
      else {
        FUN_10a502c20(&plStack_a0,param_1[0x43]);
        plVar26 = plStack_78;
        plStack_78 = plStack_98;
        plStack_80 = plStack_a0;
        plStack_a0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        if (plVar26 != (long *)0x0) {
          plVar34 = plVar26 + 1;
          do {
            lVar15 = *plVar34;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar8) {
              *plVar34 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        plVar26 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar34 = plStack_98 + 1;
          do {
            lVar15 = *plVar34;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar8) {
              *plVar34 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        plVar26 = *(long **)(param_2[0x43] + 0x28);
        if (plVar26 != (long *)0x0) {
          do {
            uStack_a8._0_4_ = (undefined4)plVar26[2];
            plVar34 = plStack_80 + 3;
            plStack_a0 = &uStack_a8;
            FUN_10a23b518(plVar34,&uStack_a8,&UNK_10dd5b8f9,&plStack_a0,(long)&uStack_a8 + 7);
            FUN_10a23b49c(plVar34 + 3,plVar26 + 3);
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
      FUN_10a23a9fc(param_1 + 0x43,&plStack_80);
      plVar26 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar34 = plStack_78 + 1;
        do {
          lVar15 = *plVar34;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar8) {
            *plVar34 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
    }
  }
  if ((param_3 & 1) != 0) {
    if (param_2[0xd] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0xa8;
      __Znwm();
      FUN_10a4ff9c4();
    }
    plVar26 = (long *)param_1[0xd];
    param_1[0xd] = lVar15;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
  }
  uVar32 = (uint)param_3;
  if ((uVar32 >> 1 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0xb];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x38;
      __Znwm();
      uVar21 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar21;
      plVar26 = puVar9 + 2;
      puVar9[3] = 0;
      *plVar26 = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar33 + 6);
      FUN_10a503004(plVar26,puVar33[3]);
      plVar34 = (long *)puVar33[4];
      if (plVar34 != (long *)0x0) {
        plVar36 = puVar9 + 4;
        do {
          uVar24 = (ulong)(int)plVar34[2];
          uVar16 = puVar9[3];
          if (uVar16 != 0) {
            uVar17 = uVar16 - 1;
            if ((uVar16 & uVar17) == 0) {
              uStack_c0 = uVar17 & uVar24;
            }
            else {
              uStack_c0 = uVar24;
              if (uVar16 <= uVar24) {
                uVar25 = 0;
                if (uVar16 != 0) {
                  uVar25 = uVar24 / uVar16;
                }
                uStack_c0 = uVar24 - uVar25 * uVar16;
              }
            }
            plVar22 = *(long **)(*plVar26 + uStack_c0 * 8);
            if (plVar22 != (long *)0x0) {
              do {
                while( true ) {
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_10a4c8d64;
                  uVar25 = plVar22[1];
                  if (uVar25 != uVar24) break;
                  if (*(int *)(plVar22 + 2) == (int)plVar34[2]) goto LAB_10a4c9104;
                }
                if ((uVar16 & uVar17) == 0) {
                  uVar25 = uVar25 & uVar17;
                }
                else if (uVar16 <= uVar25) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar25 / uVar16;
                  }
                  uVar25 = uVar25 - uVar5 * uVar16;
                }
              } while (uVar25 == uStack_c0);
            }
          }
LAB_10a4c8d64:
          plVar22 = (long *)0x40;
          __Znwm();
          uStack_90 = 0;
          *plVar22 = 0;
          plVar22[1] = uVar24;
          *(int *)(plVar22 + 2) = (int)plVar34[2];
          plVar35 = plVar22 + 3;
          plVar22[4] = 0;
          *plVar35 = 0;
          plVar22[6] = 0;
          plVar22[5] = 0;
          *(int *)(plVar22 + 7) = (int)plVar34[7];
          plStack_a0 = plVar22;
          plStack_98 = plVar26;
          FUN_10a503210(plVar35,plVar34[4]);
          plVar14 = (long *)plVar34[5];
          if (plVar14 != (long *)0x0) {
            plVar23 = plVar22 + 5;
            plVar30 = param_1;
            do {
              plVar20 = plVar35;
              FUN_10aad09b8(plVar35,plVar14 + 2);
              plVar37 = (long *)plVar22[4];
              if (plVar37 != (long *)0x0) {
                uVar17 = (long)plVar37 - 1;
                if (((ulong)plVar37 & uVar17) == 0) {
                  plVar30 = (long *)(uVar17 & (ulong)plVar20);
                }
                else {
                  plVar30 = plVar20;
                  if (plVar37 <= plVar20) {
                    uVar25 = 0;
                    if (plVar37 != (long *)0x0) {
                      uVar25 = (ulong)plVar20 / (ulong)plVar37;
                    }
                    plVar30 = (long *)((long)plVar20 - uVar25 * (long)plVar37);
                  }
                }
                plVar18 = *(long **)(*plVar35 + (long)plVar30 * 8);
                if (plVar18 != (long *)0x0) {
                  for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0;
                      plVar18 = (long *)*plVar18) {
                    plVar19 = (long *)plVar18[1];
                    if (plVar19 == plVar20) {
                      uVar25 = (ulong)(plVar18 + 2);
                      FUN_10a22c6f0(uVar25,plVar14 + 2);
                      if ((uVar25 & 1) != 0) goto LAB_10a4c8fc8;
                    }
                    else {
                      if (((ulong)plVar37 & uVar17) == 0) {
                        plVar19 = (long *)((ulong)plVar19 & uVar17);
                      }
                      else if (plVar37 <= plVar19) {
                        uVar25 = 0;
                        if (plVar37 != (long *)0x0) {
                          uVar25 = (ulong)plVar19 / (ulong)plVar37;
                        }
                        plVar19 = (long *)((long)plVar19 - uVar25 * (long)plVar37);
                      }
                      if (plVar19 != plVar30) break;
                    }
                  }
                }
              }
              plVar18 = (long *)0x88;
              __Znwm();
              uStack_70 = 1;
              *plVar18 = 0;
              plVar18[1] = (long)plVar20;
              lVar28 = plVar14[2];
              lVar10 = plVar14[5];
              lVar15 = plVar14[4];
              plVar18[3] = plVar14[3];
              plVar18[2] = lVar28;
              plVar18[5] = lVar10;
              plVar18[4] = lVar15;
              lVar15 = plVar14[10];
              lVar28 = plVar14[0xd];
              lVar10 = plVar14[0xc];
              lVar46 = plVar14[7];
              lVar43 = plVar14[6];
              lVar42 = plVar14[9];
              lVar31 = plVar14[8];
              plVar18[0xb] = plVar14[0xb];
              plVar18[10] = lVar15;
              plVar18[0xd] = lVar28;
              plVar18[0xc] = lVar10;
              plVar18[7] = lVar46;
              plVar18[6] = lVar43;
              plVar18[9] = lVar42;
              plVar18[8] = lVar31;
              lVar15 = plVar14[0xf];
              lVar10 = plVar14[0xe];
              plVar18[0xf] = plVar14[0xf];
              plVar18[0xe] = lVar10;
              if (lVar15 != 0) {
                plVar19 = (long *)(lVar15 + 8);
                do {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar8) {
                    *plVar19 = *plVar19 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plVar18[0x10] = plVar14[0x10];
              plStack_80 = plVar18;
              plStack_78 = plVar35;
              if ((plVar37 == (long *)0x0) ||
                 (*(float *)(plVar22 + 7) * (float)plVar37 < (float)(plVar22[6] + 1))) {
                uVar17 = 1;
                if ((long *)0x2 < plVar37) {
                  uVar17 = (ulong)(((ulong)plVar37 & (long)plVar37 - 1U) != 0);
                }
                uVar17 = uVar17 | (long)plVar37 << 1;
                uVar25 = (ulong)((float)(plVar22[6] + 1) / *(float *)(plVar22 + 7));
                if (uVar17 <= uVar25) {
                  uVar17 = uVar25;
                }
                FUN_10a503210(plVar35,uVar17);
                plVar37 = (long *)plVar22[4];
                if (((ulong)plVar37 & (long)plVar37 - 1U) == 0) {
                  plVar30 = (long *)((long)plVar37 - 1U & (ulong)plVar20);
                }
                else {
                  plVar30 = plVar20;
                  if (plVar37 <= plVar20) {
                    uVar17 = 0;
                    if (plVar37 != (long *)0x0) {
                      uVar17 = (ulong)plVar20 / (ulong)plVar37;
                    }
                    plVar30 = (long *)((long)plVar20 - uVar17 * (long)plVar37);
                  }
                }
              }
              lVar15 = *plVar35;
              plVar20 = *(long **)(lVar15 + (long)plVar30 * 8);
              if (plVar20 == (long *)0x0) {
                *plVar18 = *plVar23;
                *plVar23 = (long)plVar18;
                *(long **)(lVar15 + (long)plVar30 * 8) = plVar23;
                if (*plVar18 != 0) {
                  plVar20 = *(long **)(*plVar18 + 8);
                  if (((ulong)plVar37 & (long)plVar37 - 1U) == 0) {
                    plVar20 = (long *)((ulong)plVar20 & (long)plVar37 - 1U);
                  }
                  else if (plVar37 <= plVar20) {
                    uVar17 = 0;
                    if (plVar37 != (long *)0x0) {
                      uVar17 = (ulong)plVar20 / (ulong)plVar37;
                    }
                    plVar20 = (long *)((long)plVar20 - uVar17 * (long)plVar37);
                  }
                  plVar20 = (long *)(*plVar35 + (long)plVar20 * 8);
                  goto LAB_10a4c8fb8;
                }
              }
              else {
                *plVar18 = *plVar20;
LAB_10a4c8fb8:
                *plVar20 = (long)plVar18;
              }
              plVar22[6] = plVar22[6] + 1;
LAB_10a4c8fc8:
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          uStack_90 = CONCAT71(uStack_90._1_7_,1);
          if ((uVar16 == 0) || (*(float *)(puVar9 + 6) * (float)uVar16 < (float)(puVar9[5] + 1))) {
            uVar17 = 1;
            if (2 < uVar16) {
              uVar17 = (ulong)((uVar16 & uVar16 - 1) != 0);
            }
            uVar17 = uVar17 | uVar16 << 1;
            uVar16 = (ulong)((float)(puVar9[5] + 1) / *(float *)(puVar9 + 6));
            if (uVar17 <= uVar16) {
              uVar17 = uVar16;
            }
            FUN_10a503004(plVar26,uVar17);
            uVar16 = puVar9[3];
            if ((uVar16 & uVar16 - 1) == 0) {
              uStack_c0 = uVar16 - 1 & uVar24;
            }
            else {
              uStack_c0 = uVar24;
              if (uVar16 <= uVar24) {
                uVar17 = 0;
                if (uVar16 != 0) {
                  uVar17 = uVar24 / uVar16;
                }
                uStack_c0 = uVar24 - uVar17 * uVar16;
              }
            }
          }
          lVar15 = *plVar26;
          plVar22 = *(long **)(lVar15 + uStack_c0 * 8);
          if (plVar22 == (long *)0x0) {
            *plStack_a0 = *plVar36;
            *plVar36 = (long)plStack_a0;
            *(long **)(lVar15 + uStack_c0 * 8) = plVar36;
            if (*plStack_a0 != 0) {
              uVar24 = *(ulong *)(*plStack_a0 + 8);
              if ((uVar16 & uVar16 - 1) == 0) {
                uVar24 = uVar24 & uVar16 - 1;
              }
              else if (uVar16 <= uVar24) {
                uVar17 = 0;
                if (uVar16 != 0) {
                  uVar17 = uVar24 / uVar16;
                }
                uVar24 = uVar24 - uVar17 * uVar16;
              }
              *(long **)(*plVar26 + uVar24 * 8) = plStack_a0;
            }
          }
          else {
            *plStack_a0 = *plVar22;
            *plVar22 = (long)plStack_a0;
          }
          puVar9[5] = puVar9[5] + 1;
LAB_10a4c9104:
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
    FUN_10a236e48(param_1 + 0xb,puVar9);
  }
  if ((uVar32 >> 3 & 1) != 0) {
    lVar15 = param_2[0xe];
    if (lVar15 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0x548;
      __Znwm();
      lVar28 = 0;
      bVar8 = false;
      do {
        FUN_10a4feab8(lVar10 + lVar28 * 0x298,lVar15 + lVar28 * 0x298);
        lVar28 = 1;
        bVar6 = !bVar8;
        bVar8 = true;
      } while (bVar6);
      *(undefined1 *)(lVar10 + 0x530) = *(undefined1 *)(lVar15 + 0x530);
      *(undefined8 *)(lVar10 + 0x538) = *(undefined8 *)(lVar15 + 0x538);
      lVar15 = *(long *)(lVar15 + 0x540);
      *(long *)(lVar10 + 0x540) = lVar15;
      if (lVar15 != 0) {
        plVar26 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    lVar15 = param_1[0xe];
    plStack_80 = (long *)0x0;
    param_1[0xe] = lVar10;
    if (lVar15 != 0) {
      func_0x00010a502490();
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502490(&plStack_80);
      }
    }
  }
  if ((uVar32 >> 4 & 1) != 0) {
    lVar15 = param_2[0xc];
    if (lVar15 == 0) {
      puVar33 = (undefined8 *)0x0;
    }
    else {
      puVar33 = (undefined8 *)0x40;
      __Znwm();
      puVar33[1] = 0;
      puVar33[2] = 0;
      *puVar33 = 0;
      FUN_10a0723d0();
      puVar33[3] = 0;
      puVar33[4] = 0;
      puVar33[5] = 0;
      FUN_10a0723d0();
      uVar21 = *(undefined8 *)(lVar15 + 0x30);
      puVar33[7] = *(undefined8 *)(lVar15 + 0x38);
      puVar33[6] = uVar21;
    }
    lVar15 = param_1[0xc];
    plStack_80 = (long *)0x0;
    param_1[0xc] = (long)puVar33;
    if (lVar15 != 0) {
      func_0x00010a502448();
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502448(&plStack_80);
      }
    }
  }
  if ((uVar32 >> 6 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x14];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x48;
      __Znwm();
      uVar40 = puVar33[3];
      uVar39 = puVar33[2];
      uVar38 = puVar33[5];
      uVar21 = puVar33[4];
      uVar41 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar41;
      puVar9[3] = uVar40;
      puVar9[2] = uVar39;
      puVar9[5] = uVar38;
      puVar9[4] = uVar21;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[6] = 0;
      FUN_10a5034ac();
    }
    plStack_80 = (long *)0x0;
    func_0x00010a5026a0(param_1 + 0x14,puVar9);
    func_0x00010a5026a0(&plStack_80,0);
  }
  if ((uVar32 >> 0x1c & 1) != 0) {
    lVar15 = param_2[0x11];
    if (lVar15 == 0) {
      puVar33 = (undefined8 *)0x0;
    }
    else {
      puVar33 = (undefined8 *)0xd8;
      __Znwm();
      *(undefined1 *)(puVar33 + 1) = *(undefined1 *)(lVar15 + 8);
      *puVar33 = &PTR_DAT_110c6d560;
      uVar38 = *(undefined8 *)(lVar15 + 0x24);
      uVar21 = *(undefined8 *)(lVar15 + 0x1c);
      uVar40 = *(undefined8 *)(lVar15 + 0x34);
      uVar39 = *(undefined8 *)(lVar15 + 0x2c);
      uVar44 = *(undefined8 *)(lVar15 + 0x44);
      uVar41 = *(undefined8 *)(lVar15 + 0x3c);
      uVar45 = *(undefined8 *)(lVar15 + 0x49);
      *(undefined8 *)((long)puVar33 + 0x51) = *(undefined8 *)(lVar15 + 0x51);
      *(undefined8 *)((long)puVar33 + 0x49) = uVar45;
      *(undefined8 *)((long)puVar33 + 0x44) = uVar44;
      *(undefined8 *)((long)puVar33 + 0x3c) = uVar41;
      *(undefined8 *)((long)puVar33 + 0x34) = uVar40;
      *(undefined8 *)((long)puVar33 + 0x2c) = uVar39;
      *(undefined8 *)((long)puVar33 + 0x24) = uVar38;
      *(undefined8 *)((long)puVar33 + 0x1c) = uVar21;
      uVar21 = *(undefined8 *)(lVar15 + 0xc);
      *(undefined8 *)((long)puVar33 + 0x14) = *(undefined8 *)(lVar15 + 0x14);
      *(undefined8 *)((long)puVar33 + 0xc) = uVar21;
      lVar10 = *(long *)(lVar15 + 0x68);
      uVar21 = *(undefined8 *)(lVar15 + 0x60);
      puVar33[0xd] = *(undefined8 *)(lVar15 + 0x68);
      puVar33[0xc] = uVar21;
      if (lVar10 != 0) {
        plVar26 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar10 = *(long *)(lVar15 + 0x78);
      uVar21 = *(undefined8 *)(lVar15 + 0x70);
      puVar33[0xf] = *(undefined8 *)(lVar15 + 0x78);
      puVar33[0xe] = uVar21;
      if (lVar10 != 0) {
        plVar26 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar11 = puVar33 + 0x10;
      *puVar11 = 0;
      puVar33[0x11] = 0;
      puVar33[0x12] = 0;
      puVar9 = *(undefined8 **)(lVar15 + 0x80);
      puVar1 = *(undefined8 **)(lVar15 + 0x88);
      lVar10 = (long)puVar1 - (long)puVar9;
      if (lVar10 != 0) {
        uVar16 = (lVar10 >> 3) * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar16) {
          FUN_10a5036a0();
          goto LAB_10a4ca168;
        }
        FUN_10a5036b4();
        puVar33[0x10] = puVar11;
        puVar33[0x11] = puVar11;
        puVar33[0x12] = puVar11 + uVar16 * 3;
        do {
          uVar38 = puVar9[1];
          uVar21 = *puVar9;
          puVar11[2] = puVar9[2];
          puVar12 = puVar11 + 3;
          puVar11[1] = uVar38;
          *puVar11 = uVar21;
          puVar9 = puVar9 + 3;
          puVar11 = puVar12;
        } while (puVar9 != puVar1);
        puVar33[0x11] = puVar12;
      }
      puVar11 = puVar33 + 0x13;
      *puVar11 = 0;
      puVar33[0x14] = 0;
      puVar33[0x15] = 0;
      puVar9 = *(undefined8 **)(lVar15 + 0x98);
      puVar1 = *(undefined8 **)(lVar15 + 0xa0);
      lVar10 = (long)puVar1 - (long)puVar9;
      if (lVar10 != 0) {
        uVar16 = lVar10 >> 4;
        if (uVar16 >> 0x3c != 0) {
          FUN_10a5036f8();
          goto LAB_10a4ca168;
        }
        FUN_10a50370c();
        puVar33[0x13] = puVar11;
        puVar33[0x14] = puVar11;
        puVar33[0x15] = puVar11 + uVar16 * 2;
        do {
          puVar29 = puVar9 + 2;
          uVar21 = *puVar9;
          puVar12 = puVar11 + 2;
          puVar11[1] = puVar9[1];
          *puVar11 = uVar21;
          puVar11 = puVar12;
          puVar9 = puVar29;
        } while (puVar29 != puVar1);
        puVar33[0x14] = puVar12;
      }
      puVar33[0x16] = *(undefined8 *)(lVar15 + 0xb0);
      FUN_10a1ccb30(puVar33 + 0x17,lVar15 + 0xb8);
    }
    plVar26 = (long *)param_1[0x11];
    param_1[0x11] = (long)puVar33;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
  }
  if ((uVar32 >> 0x1b & 1) != 0) {
    puVar27 = (undefined4 *)param_2[0x12];
    if (puVar27 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)0x100;
      __Znwm();
      *puVar13 = *puVar27;
      plStack_80 = (long *)(puVar13 + 2);
      *plStack_80 = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      lVar15 = *(long *)(puVar27 + 2);
      lVar10 = *(long *)(puVar27 + 4);
      plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
      lVar28 = lVar10 - lVar15;
      if (lVar28 != 0) {
        func_0x00010a503740(plStack_80,lVar28 >> 7);
        lVar28 = 0;
        lVar31 = *(long *)(puVar13 + 4);
        do {
          puVar33 = (undefined8 *)(lVar15 + lVar28);
          puVar9 = (undefined8 *)(lVar31 + lVar28);
          if (*(char *)((long)puVar33 + 0x17) < '\0') {
            func_0x000107c3192c(puVar9,*puVar33,puVar33[1]);
          }
          else {
            uVar38 = puVar33[1];
            uVar21 = *puVar33;
            puVar9[2] = puVar33[2];
            puVar9[1] = uVar38;
            *puVar9 = uVar21;
          }
          lVar42 = lVar31 + lVar28;
          lVar43 = lVar15 + lVar28;
          uVar21 = *(undefined8 *)(lVar43 + 0x18);
          *(undefined8 *)(lVar42 + 0x20) = *(undefined8 *)(lVar43 + 0x20);
          *(undefined8 *)(lVar42 + 0x18) = uVar21;
          uVar38 = *(undefined8 *)(lVar43 + 0x30);
          uVar21 = *(undefined8 *)(lVar43 + 0x28);
          uVar40 = *(undefined8 *)(lVar43 + 0x40);
          uVar39 = *(undefined8 *)(lVar43 + 0x38);
          uVar44 = *(undefined8 *)(lVar43 + 0x50);
          uVar41 = *(undefined8 *)(lVar43 + 0x48);
          *(undefined4 *)(lVar42 + 0x58) = *(undefined4 *)(lVar43 + 0x58);
          *(undefined8 *)(lVar42 + 0x50) = uVar44;
          *(undefined8 *)(lVar42 + 0x48) = uVar41;
          *(undefined8 *)(lVar42 + 0x40) = uVar40;
          *(undefined8 *)(lVar42 + 0x38) = uVar39;
          *(undefined8 *)(lVar42 + 0x30) = uVar38;
          *(undefined8 *)(lVar42 + 0x28) = uVar21;
          FUN_10a1ccb30(lVar42 + 0x60,lVar43 + 0x60);
          lVar28 = lVar28 + 0x80;
        } while (lVar15 + lVar28 != lVar10);
        *(long *)(puVar13 + 4) = lVar31 + lVar28;
      }
      uVar38 = *(undefined8 *)(puVar27 + 10);
      uVar21 = *(undefined8 *)(puVar27 + 8);
      uVar40 = *(undefined8 *)(puVar27 + 0xe);
      uVar39 = *(undefined8 *)(puVar27 + 0xc);
      *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(puVar27 + 0x10);
      *(undefined8 *)(puVar13 + 10) = uVar38;
      *(undefined8 *)(puVar13 + 8) = uVar21;
      *(undefined8 *)(puVar13 + 0xe) = uVar40;
      *(undefined8 *)(puVar13 + 0xc) = uVar39;
      lVar15 = *(long *)(puVar27 + 0x14);
      uVar21 = *(undefined8 *)(puVar27 + 0x12);
      *(undefined8 *)(puVar13 + 0x14) = *(undefined8 *)(puVar27 + 0x14);
      *(undefined8 *)(puVar13 + 0x12) = uVar21;
      if (lVar15 != 0) {
        plVar26 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar3 = *(undefined1 *)(puVar27 + 0x16);
      *(undefined1 *)(puVar13 + 0x18) = 0;
      *(undefined1 *)(puVar13 + 0x16) = uVar3;
      *(undefined1 *)(puVar13 + 0x3c) = 0;
      if (*(char *)(puVar27 + 0x3c) == '\x01') {
        uVar21 = *(undefined8 *)(puVar27 + 0x18);
        uVar39 = *(undefined8 *)(puVar27 + 0x1e);
        uVar38 = *(undefined8 *)(puVar27 + 0x1c);
        *(undefined8 *)(puVar13 + 0x1a) = *(undefined8 *)(puVar27 + 0x1a);
        *(undefined8 *)(puVar13 + 0x18) = uVar21;
        *(undefined8 *)(puVar13 + 0x1e) = uVar39;
        *(undefined8 *)(puVar13 + 0x1c) = uVar38;
        uVar38 = *(undefined8 *)(puVar27 + 0x22);
        uVar21 = *(undefined8 *)(puVar27 + 0x20);
        *(undefined8 *)(puVar13 + 0x24) = *(undefined8 *)(puVar27 + 0x24);
        *(undefined8 *)(puVar13 + 0x22) = uVar38;
        *(undefined8 *)(puVar13 + 0x20) = uVar21;
        uVar38 = *(undefined8 *)(puVar27 + 0x2e);
        uVar21 = *(undefined8 *)(puVar27 + 0x2c);
        uVar40 = *(undefined8 *)(puVar27 + 0x32);
        uVar39 = *(undefined8 *)(puVar27 + 0x30);
        uVar44 = *(undefined8 *)(puVar27 + 0x36);
        uVar41 = *(undefined8 *)(puVar27 + 0x34);
        *(undefined8 *)(puVar13 + 0x38) = *(undefined8 *)(puVar27 + 0x38);
        *(undefined8 *)(puVar13 + 0x32) = uVar40;
        *(undefined8 *)(puVar13 + 0x30) = uVar39;
        *(undefined8 *)(puVar13 + 0x36) = uVar44;
        *(undefined8 *)(puVar13 + 0x34) = uVar41;
        *(undefined8 *)(puVar13 + 0x2e) = uVar38;
        *(undefined8 *)(puVar13 + 0x2c) = uVar21;
        uVar21 = *(undefined8 *)(puVar27 + 0x28);
        *(undefined8 *)(puVar13 + 0x2a) = *(undefined8 *)(puVar27 + 0x2a);
        *(undefined8 *)(puVar13 + 0x28) = uVar21;
        *(undefined1 *)(puVar13 + 0x3c) = 1;
      }
    }
    lVar15 = param_1[0x12];
    plStack_80 = (long *)0x0;
    param_1[0x12] = (long)puVar13;
    if (lVar15 != 0) {
      func_0x00010a502568();
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502568(&plStack_80);
      }
    }
  }
  if ((uVar32 >> 5 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x15];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x30;
      __Znwm();
      uVar40 = puVar33[3];
      uVar39 = puVar33[2];
      uVar38 = puVar33[5];
      uVar21 = puVar33[4];
      uVar41 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar41;
      puVar9[3] = uVar40;
      puVar9[2] = uVar39;
      puVar9[5] = uVar38;
      puVar9[4] = uVar21;
    }
    lVar15 = param_1[0x15];
    param_1[0x15] = (long)puVar9;
    if (lVar15 != 0) {
      __ZdlPv(lVar15);
    }
  }
  if ((uVar32 >> 9 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x1a];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0xcc;
      __Znwm();
      uVar21 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar21;
      uVar21 = puVar33[6];
      uVar39 = puVar33[9];
      uVar38 = puVar33[8];
      uVar45 = puVar33[3];
      uVar44 = puVar33[2];
      uVar41 = puVar33[5];
      uVar40 = puVar33[4];
      puVar9[7] = puVar33[7];
      puVar9[6] = uVar21;
      puVar9[9] = uVar39;
      puVar9[8] = uVar38;
      puVar9[3] = uVar45;
      puVar9[2] = uVar44;
      puVar9[5] = uVar41;
      puVar9[4] = uVar40;
      uVar21 = puVar33[0xe];
      uVar39 = puVar33[0x11];
      uVar38 = puVar33[0x10];
      uVar45 = puVar33[0xb];
      uVar44 = puVar33[10];
      uVar41 = puVar33[0xd];
      uVar40 = puVar33[0xc];
      puVar9[0xf] = puVar33[0xf];
      puVar9[0xe] = uVar21;
      puVar9[0x11] = uVar39;
      puVar9[0x10] = uVar38;
      puVar9[0xb] = uVar45;
      puVar9[10] = uVar44;
      puVar9[0xd] = uVar41;
      puVar9[0xc] = uVar40;
      uVar41 = puVar33[0x15];
      uVar40 = puVar33[0x14];
      uVar38 = puVar33[0x17];
      uVar21 = puVar33[0x16];
      uVar39 = *(undefined8 *)((long)puVar33 + 0xbc);
      uVar45 = puVar33[0x13];
      uVar44 = puVar33[0x12];
      *(undefined8 *)((long)puVar9 + 0xc4) = *(undefined8 *)((long)puVar33 + 0xc4);
      *(undefined8 *)((long)puVar9 + 0xbc) = uVar39;
      puVar9[0x15] = uVar41;
      puVar9[0x14] = uVar40;
      puVar9[0x17] = uVar38;
      puVar9[0x16] = uVar21;
      puVar9[0x13] = uVar45;
      puVar9[0x12] = uVar44;
    }
    lVar15 = param_1[0x1a];
    param_1[0x1a] = (long)puVar9;
    if (lVar15 != 0) {
      __ZdlPv(lVar15);
    }
    plVar26 = (long *)param_2[0x25];
    if (plVar26 == (long *)0x0) {
      plVar34 = (long *)0x0;
    }
    else {
      plVar34 = (long *)0x18;
      __Znwm();
      plVar34[1] = 0;
      plVar34[2] = 0;
      *plVar34 = 0;
      plVar36 = (long *)*plVar26;
      plVar26 = (long *)plVar26[1];
      plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
      lVar15 = (long)plVar26 - (long)plVar36;
      if (lVar15 != 0) {
        uVar16 = lVar15 >> 4;
        plStack_80 = plVar34;
        if (uVar16 >> 0x3c != 0) {
          FUN_10a5037c0();
LAB_10a4ca168:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4ca16c);
          (*pcVar7)();
        }
        plVar22 = plVar34;
        FUN_10a5037d4();
        *plVar34 = (long)plVar22;
        plVar34[1] = (long)plVar22;
        plVar34[2] = (long)(plVar22 + uVar16 * 2);
        do {
          lVar15 = plVar36[1];
          lVar10 = *plVar36;
          plVar22[1] = plVar36[1];
          *plVar22 = lVar10;
          if (lVar15 != 0) {
            plVar14 = (long *)(lVar15 + 8);
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar8) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar36 = plVar36 + 2;
          plVar22 = plVar22 + 2;
        } while (plVar36 != plVar26);
        plVar34[1] = (long)plVar22;
      }
    }
    plStack_80 = (long *)0x0;
    func_0x00010a26df2c(param_1 + 0x25,plVar34);
    func_0x00010a26df2c(&plStack_80,0);
    lVar10 = param_2[0x27];
    lVar15 = param_2[0x26];
    if (param_2[0x27] != 0) {
      plVar26 = (long *)(param_2[0x27] + 8);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar26 = (long *)param_1[0x27];
    param_1[0x27] = lVar10;
    param_1[0x26] = lVar15;
    if (plVar26 != (long *)0x0) {
      plVar34 = plVar26 + 1;
      do {
        lVar15 = *plVar34;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar8) {
          *plVar34 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    puVar27 = (undefined4 *)param_2[0x28];
    if (puVar27 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)0x38;
      __Znwm();
      *puVar13 = *puVar27;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      FUN_10a26e568(puVar13 + 2,*(long *)(puVar27 + 2),*(long *)(puVar27 + 4),
                    *(long *)(puVar27 + 4) - *(long *)(puVar27 + 2) >> 4);
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 0xc) = 0;
      FUN_10a26e568();
    }
    plStack_80 = (long *)0x0;
    lVar15 = param_1[0x28];
    param_1[0x28] = (long)puVar13;
    if (lVar15 != 0) {
      func_0x00010a5027e8(param_1 + 0x28);
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a5027e8(&plStack_80);
      }
    }
    puVar27 = (undefined4 *)param_2[0x29];
    if (puVar27 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)0x38;
      __Znwm();
      *puVar13 = *puVar27;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      FUN_10a26e74c(puVar13 + 2,*(long *)(puVar27 + 2),*(long *)(puVar27 + 4),
                    *(long *)(puVar27 + 4) - *(long *)(puVar27 + 2) >> 4);
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 0xc) = 0;
      FUN_10a26e74c();
    }
    plStack_80 = (long *)0x0;
    lVar15 = param_1[0x29];
    param_1[0x29] = (long)puVar13;
    if (lVar15 != 0) {
      func_0x00010a502838(param_1 + 0x29);
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502838(&plStack_80);
      }
    }
    puVar33 = (undefined8 *)param_2[0x16];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x58;
      __Znwm();
      uVar39 = *puVar33;
      uVar38 = puVar33[3];
      uVar21 = puVar33[2];
      puVar9[1] = puVar33[1];
      *puVar9 = uVar39;
      puVar9[3] = uVar38;
      puVar9[2] = uVar21;
      uVar40 = puVar33[7];
      uVar39 = puVar33[6];
      uVar38 = puVar33[9];
      uVar21 = puVar33[8];
      uVar44 = puVar33[5];
      uVar41 = puVar33[4];
      puVar9[10] = puVar33[10];
      puVar9[7] = uVar40;
      puVar9[6] = uVar39;
      puVar9[9] = uVar38;
      puVar9[8] = uVar21;
      puVar9[5] = uVar44;
      puVar9[4] = uVar41;
    }
    lVar15 = param_1[0x16];
    param_1[0x16] = (long)puVar9;
    if (lVar15 != 0) {
      __ZdlPv(lVar15);
    }
    if (param_1 != param_2) {
      FUN_10a0cf2cc(param_1 + 0x17,param_2[0x17],param_2[0x18],param_2[0x18] - param_2[0x17]);
    }
  }
  puVar33 = (undefined8 *)param_2[0x1b];
  if (puVar33 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x70;
    __Znwm();
    uVar38 = puVar33[1];
    uVar21 = *puVar33;
    uVar39 = puVar33[2];
    uVar41 = puVar33[5];
    uVar40 = puVar33[4];
    puVar9[3] = puVar33[3];
    puVar9[2] = uVar39;
    puVar9[5] = uVar41;
    puVar9[4] = uVar40;
    puVar9[1] = uVar38;
    *puVar9 = uVar21;
    uVar38 = puVar33[7];
    uVar21 = puVar33[6];
    uVar40 = puVar33[9];
    uVar39 = puVar33[8];
    uVar41 = puVar33[10];
    uVar45 = puVar33[0xd];
    uVar44 = puVar33[0xc];
    puVar9[0xb] = puVar33[0xb];
    puVar9[10] = uVar41;
    puVar9[0xd] = uVar45;
    puVar9[0xc] = uVar44;
    puVar9[7] = uVar38;
    puVar9[6] = uVar21;
    puVar9[9] = uVar40;
    puVar9[8] = uVar39;
    lVar15 = param_1[0x1b];
    param_1[0x1b] = (long)puVar9;
    if (lVar15 != 0) {
      __ZdlPv();
    }
  }
  if ((uVar32 >> 10 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x1c];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x90;
      __Znwm();
      uVar40 = puVar33[3];
      uVar39 = puVar33[2];
      uVar38 = puVar33[5];
      uVar21 = puVar33[4];
      uVar41 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar41;
      puVar9[3] = uVar40;
      puVar9[2] = uVar39;
      puVar9[5] = uVar38;
      puVar9[4] = uVar21;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      FUN_10a5034ac(puVar9 + 6,puVar33[6],puVar33[7],
                    ((long)(puVar33[7] - puVar33[6]) >> 5) * -0x5555555555555555);
      FUN_10a503808(puVar9 + 9,puVar33 + 9);
    }
    lVar15 = param_1[0x1c];
    param_1[0x1c] = (long)puVar9;
    if (lVar15 != 0) {
      func_0x00010a5026e4();
    }
  }
  if ((uVar32 >> 0xb & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x1d];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0x60;
      __Znwm();
      uVar38 = puVar33[1];
      uVar21 = *puVar33;
      uVar40 = puVar33[3];
      uVar39 = puVar33[2];
      uVar41 = puVar33[4];
      uVar45 = puVar33[7];
      uVar44 = puVar33[6];
      puVar9[5] = puVar33[5];
      puVar9[4] = uVar41;
      puVar9[7] = uVar45;
      puVar9[6] = uVar44;
      puVar9[1] = uVar38;
      *puVar9 = uVar21;
      puVar9[3] = uVar40;
      puVar9[2] = uVar39;
      if (*(char *)((long)puVar33 + 0x57) < '\0') {
        func_0x000107c3192c(puVar9 + 8,puVar33[8],puVar33[9]);
      }
      else {
        uVar38 = puVar33[9];
        uVar21 = puVar33[8];
        puVar9[10] = puVar33[10];
        puVar9[9] = uVar38;
        puVar9[8] = uVar21;
      }
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar33 + 0xb);
    }
    lVar15 = param_1[0x1d];
    plStack_80 = (long *)0x0;
    param_1[0x1d] = (long)puVar9;
    if (lVar15 != 0) {
      func_0x00010a502728();
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502728(&plStack_80);
      }
    }
  }
  if ((uVar32 >> 0xc & 1) != 0) {
    lVar10 = param_2[0x1f];
    lVar15 = param_2[0x1e];
    *(char *)(param_1 + 0x20) = (char)param_2[0x20];
    param_1[0x1f] = lVar10;
    param_1[0x1e] = lVar15;
  }
  if ((uVar32 >> 0x11 & 1) != 0) {
    plVar26 = (long *)param_2[0x22];
    if (plVar26 == (long *)0x0) {
      plVar34 = (long *)0x0;
    }
    else {
      plVar34 = (long *)0x18;
      __Znwm();
      plVar22 = plVar34 + 1;
      *plVar22 = 0;
      plVar34[2] = 0;
      *plVar34 = (long)plVar22;
      plVar36 = (long *)*plVar26;
      while (plVar36 != plVar26 + 1) {
        plVar14 = (long *)plVar34[1];
        plVar35 = plVar22;
        if ((long *)*plVar34 == plVar22) {
joined_r0x00010a4c9b78:
          plStack_a0 = plVar35;
          plVar35 = plVar22;
          plVar23 = plVar22;
          if (plVar14 != (long *)0x0) {
            plVar35 = plStack_a0 + 1;
            goto LAB_10a4c9b84;
          }
LAB_10a4c9ba0:
          plStack_a0 = plVar23;
          plVar14 = (long *)0x50;
          __Znwm();
          uStack_70 = 0;
          plStack_80 = plVar14;
          plStack_78 = plVar34;
          if (*(char *)((long)plVar36 + 0x37) < '\0') {
            func_0x000107c3192c(plVar14 + 4,plVar36[4],plVar36[5]);
          }
          else {
            lVar10 = plVar36[5];
            lVar15 = plVar36[4];
            plVar14[6] = plVar36[6];
            plVar14[5] = lVar10;
            plVar14[4] = lVar15;
          }
          FUN_10a4f71c4(plVar14 + 7,plVar36 + 7);
          uStack_70 = CONCAT71(uStack_70._1_7_,1);
          FUN_10a5038f0(plVar34,plStack_a0,plVar35,plVar14);
        }
        else {
          plVar23 = plVar22;
          if (plVar14 == (long *)0x0) {
            do {
              plVar35 = (long *)plVar23[2];
              bVar8 = (long *)*plVar35 == plVar23;
              plVar23 = plVar35;
            } while (bVar8);
          }
          else {
            do {
              plVar35 = plVar14;
              plVar14 = (long *)plVar35[1];
            } while ((long *)plVar35[1] != (long *)0x0);
          }
          plVar14 = plVar35 + 4;
          FUN_10a003e3c(plVar14,plVar36 + 4);
          if (((uint)plVar14 >> 7 & 1) != 0) {
            plVar14 = (long *)*plVar22;
            goto joined_r0x00010a4c9b78;
          }
          plVar35 = plVar34;
          FUN_10a503944(plVar34,&plStack_a0,plVar36 + 4);
LAB_10a4c9b84:
          plVar23 = plStack_a0;
          if (*plVar35 == 0) goto LAB_10a4c9ba0;
        }
        plVar14 = (long *)plVar36[1];
        plVar35 = plVar36;
        if ((long *)plVar36[1] == (long *)0x0) {
          do {
            plVar36 = (long *)plVar35[2];
            bVar8 = (long *)*plVar36 != plVar35;
            plVar35 = plVar36;
          } while (bVar8);
        }
        else {
          do {
            plVar36 = plVar14;
            plVar14 = (long *)*plVar36;
          } while ((long *)*plVar36 != (long *)0x0);
        }
      }
    }
    plStack_80 = (long *)0x0;
    func_0x00010a293674(param_1 + 0x22,plVar34);
    func_0x00010a293674(&plStack_80,0);
  }
  if ((uVar32 >> 0x12 & 1) != 0) {
    lVar15 = param_2[0x23];
    if (lVar15 == 0) {
      puVar33 = (undefined8 *)0x0;
    }
    else {
      puVar33 = (undefined8 *)0x28;
      __Znwm();
      *(undefined1 *)(puVar33 + 1) = *(undefined1 *)(lVar15 + 8);
      *puVar33 = &PTR_DAT_110be85e0;
      plVar26 = puVar33 + 2;
      *plVar26 = 0;
      puVar33[3] = 0;
      puVar33[4] = 0;
      lVar10 = *(long *)(lVar15 + 0x10);
      lVar15 = *(long *)(lVar15 + 0x18);
      plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
      lVar28 = lVar15 - lVar10;
      plStack_80 = plVar26;
      if (lVar28 != 0) {
        func_0x00010a4f5d30(plVar26,lVar28 >> 5);
        FUN_10a4f5d68(plVar26,lVar10,lVar15,puVar33[3]);
        puVar33[3] = plVar26;
      }
    }
    plVar26 = (long *)param_1[0x23];
    param_1[0x23] = (long)puVar33;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
  }
  if ((uVar32 >> 0x14 & 1) == 0) goto LAB_10a4c9e20;
  puVar33 = (undefined8 *)param_1[0x2b];
  if (puVar33 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    if (*(char *)((long)puVar33 + 0x17) < '\0') {
      func_0x000107c3192c(puVar9,*puVar33,puVar33[1]);
      puVar33 = (undefined8 *)param_1[0x2b];
      plStack_80 = (long *)0x0;
      param_1[0x2b] = (long)puVar9;
      if (puVar33 == (undefined8 *)0x0) goto LAB_10a4c9d80;
    }
    else {
      uVar38 = puVar33[1];
      uVar21 = *puVar33;
      puVar9[2] = puVar33[2];
      puVar9[1] = uVar38;
      *puVar9 = uVar21;
      param_1[0x2b] = (long)puVar9;
    }
    plStack_80 = (long *)0x0;
    func_0x00010a50299c(param_1 + 0x2b,puVar33);
    plVar26 = plStack_80;
    plStack_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      func_0x00010a50299c(&plStack_80);
    }
  }
LAB_10a4c9d80:
  puVar33 = (undefined8 *)param_1[0x2a];
  if (puVar33 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    if (*(char *)((long)puVar33 + 0x17) < '\0') {
      func_0x000107c3192c(puVar9,*puVar33,puVar33[1]);
    }
    else {
      uVar38 = puVar33[1];
      uVar21 = *puVar33;
      puVar9[2] = puVar33[2];
      puVar9[1] = uVar38;
      *puVar9 = uVar21;
    }
    uVar21 = puVar33[3];
    puVar9[4] = 0;
    puVar9[3] = uVar21;
    puVar9[5] = 0;
    puVar9[6] = 0;
    FUN_10a503a10();
    lVar15 = param_1[0x2a];
    plStack_80 = (long *)0x0;
    param_1[0x2a] = (long)puVar9;
    if (lVar15 != 0) {
      func_0x00010a502888(param_1 + 0x2a);
      plVar26 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        func_0x00010a502888(&plStack_80);
      }
    }
  }
LAB_10a4c9e20:
  if ((uVar32 >> 0x1a & 1) != 0) {
    if (param_2[0x21] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0x38;
      __Znwm();
      FUN_10a4fce74();
    }
    plVar26 = (long *)param_1[0x21];
    param_1[0x21] = lVar15;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
  }
  if ((int)uVar32 < 0) {
    FUN_10a4ca3e8(&plStack_80,param_2[0xf]);
    plVar26 = plStack_80;
    plStack_80 = (long *)0x0;
    func_0x00010a2914e4(param_1 + 0xf,plVar26);
    func_0x00010a2914e4(&plStack_80,0);
  }
  if ((uVar32 >> 0x1e & 1) != 0) {
    FUN_10a4ca3e8(&plStack_80,param_2[0x10]);
    plVar26 = plStack_80;
    plStack_80 = (long *)0x0;
    func_0x00010a2914e4(param_1 + 0x10,plVar26);
    func_0x00010a2914e4(&plStack_80,0);
  }
  puVar33 = (undefined8 *)param_2[0x2e];
  if (puVar33 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x68;
    __Znwm();
    uVar21 = *puVar33;
    puVar9[1] = puVar33[1];
    *puVar9 = uVar21;
    uVar38 = puVar33[3];
    uVar21 = puVar33[2];
    uVar40 = puVar33[5];
    uVar39 = puVar33[4];
    uVar44 = puVar33[7];
    uVar41 = puVar33[6];
    *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar33 + 8);
    puVar9[5] = uVar40;
    puVar9[4] = uVar39;
    puVar9[7] = uVar44;
    puVar9[6] = uVar41;
    puVar9[3] = uVar38;
    puVar9[2] = uVar21;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[9] = 0;
    FUN_10a0cf0cc();
    *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar33 + 0xc);
    plStack_80 = (long *)0x0;
    func_0x00010a502a70(param_1 + 0x2e,puVar9);
    func_0x00010a502a70(&plStack_80,0);
  }
  puVar33 = (undefined8 *)param_2[0x2c];
  if (puVar33 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x148;
    __Znwm();
    uVar38 = puVar33[1];
    uVar21 = *puVar33;
    puVar9[2] = puVar33[2];
    puVar9[1] = uVar38;
    *puVar9 = uVar21;
    lVar15 = puVar33[4];
    uVar21 = puVar33[3];
    puVar9[4] = puVar33[4];
    puVar9[3] = uVar21;
    if (lVar15 != 0) {
      plVar26 = (long *)(lVar15 + 8);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar21 = puVar33[5];
    uVar2 = *(undefined4 *)(puVar33 + 6);
    *(undefined1 *)(puVar9 + 7) = 0;
    *(undefined4 *)(puVar9 + 6) = uVar2;
    puVar9[5] = uVar21;
    *(undefined1 *)(puVar9 + 0xe) = 0;
    if (*(char *)(puVar33 + 0xe) == '\x01') {
      uVar38 = puVar33[8];
      uVar21 = puVar33[7];
      puVar9[9] = puVar33[9];
      puVar9[8] = uVar38;
      puVar9[7] = uVar21;
      lVar15 = puVar33[0xb];
      uVar21 = puVar33[10];
      puVar9[0xb] = puVar33[0xb];
      puVar9[10] = uVar21;
      if (lVar15 != 0) {
        plVar26 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar21 = puVar33[0xc];
      *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar33 + 0xd);
      puVar9[0xc] = uVar21;
      *(undefined1 *)(puVar9 + 0xe) = 1;
    }
    uVar38 = puVar33[0x10];
    uVar21 = puVar33[0xf];
    uVar40 = puVar33[0x12];
    uVar39 = puVar33[0x11];
    uVar41 = puVar33[0x13];
    puVar9[0x14] = puVar33[0x14];
    puVar9[0x13] = uVar41;
    puVar9[0x12] = uVar40;
    puVar9[0x11] = uVar39;
    puVar9[0x10] = uVar38;
    puVar9[0xf] = uVar21;
    uVar38 = puVar33[0x16];
    uVar21 = puVar33[0x15];
    uVar40 = puVar33[0x18];
    uVar39 = puVar33[0x17];
    uVar44 = puVar33[0x1a];
    uVar41 = puVar33[0x19];
    uVar45 = *(undefined8 *)((long)puVar33 + 0xd4);
    *(undefined8 *)((long)puVar9 + 0xdc) = *(undefined8 *)((long)puVar33 + 0xdc);
    *(undefined8 *)((long)puVar9 + 0xd4) = uVar45;
    puVar9[0x1a] = uVar44;
    puVar9[0x19] = uVar41;
    puVar9[0x18] = uVar40;
    puVar9[0x17] = uVar39;
    puVar9[0x16] = uVar38;
    puVar9[0x15] = uVar21;
    lVar15 = puVar33[0x1e];
    uVar21 = puVar33[0x1d];
    puVar9[0x1e] = puVar33[0x1e];
    puVar9[0x1d] = uVar21;
    if (lVar15 != 0) {
      plVar26 = (long *)(lVar15 + 8);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar21 = puVar33[0x1f];
    puVar9[0x20] = puVar33[0x20];
    puVar9[0x1f] = uVar21;
    uVar38 = puVar33[0x22];
    uVar21 = puVar33[0x21];
    uVar40 = puVar33[0x24];
    uVar39 = puVar33[0x23];
    uVar44 = puVar33[0x26];
    uVar41 = puVar33[0x25];
    uVar45 = *(undefined8 *)((long)puVar33 + 0x131);
    *(undefined8 *)((long)puVar9 + 0x139) = *(undefined8 *)((long)puVar33 + 0x139);
    *(undefined8 *)((long)puVar9 + 0x131) = uVar45;
    puVar9[0x24] = uVar40;
    puVar9[0x23] = uVar39;
    puVar9[0x26] = uVar44;
    puVar9[0x25] = uVar41;
    puVar9[0x22] = uVar38;
    puVar9[0x21] = uVar21;
  }
  lVar15 = param_1[0x2c];
  param_1[0x2c] = (long)puVar9;
  if (lVar15 != 0) {
    func_0x00010a5029d4(lVar15);
  }
  if ((param_3 >> 0x23 & 1) != 0) {
    puVar33 = (undefined8 *)param_2[0x13];
    if (puVar33 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)0xa8;
      __Znwm();
      uVar21 = *puVar33;
      puVar9[1] = puVar33[1];
      *puVar9 = uVar21;
      uVar38 = puVar33[3];
      uVar21 = puVar33[2];
      uVar40 = puVar33[5];
      uVar39 = puVar33[4];
      uVar44 = puVar33[7];
      uVar41 = puVar33[6];
      puVar9[8] = puVar33[8];
      puVar9[5] = uVar40;
      puVar9[4] = uVar39;
      puVar9[7] = uVar44;
      puVar9[6] = uVar41;
      puVar9[3] = uVar38;
      puVar9[2] = uVar21;
      if (*(char *)((long)puVar33 + 0x5f) < '\0') {
        func_0x000107c3192c(puVar9 + 9,puVar33[9],puVar33[10]);
      }
      else {
        uVar38 = puVar33[10];
        uVar21 = puVar33[9];
        puVar9[0xb] = puVar33[0xb];
        puVar9[10] = uVar38;
        puVar9[9] = uVar21;
      }
      uVar21 = puVar33[0xc];
      puVar9[0xd] = puVar33[0xd];
      puVar9[0xc] = uVar21;
      uVar38 = puVar33[0xf];
      uVar21 = puVar33[0xe];
      uVar40 = puVar33[0x11];
      uVar39 = puVar33[0x10];
      uVar44 = puVar33[0x13];
      uVar41 = puVar33[0x12];
      *(undefined1 *)(puVar9 + 0x14) = *(undefined1 *)(puVar33 + 0x14);
      puVar9[0x11] = uVar40;
      puVar9[0x10] = uVar39;
      puVar9[0x13] = uVar44;
      puVar9[0x12] = uVar41;
      puVar9[0xf] = uVar38;
      puVar9[0xe] = uVar21;
    }
    lVar15 = param_1[0x13];
    param_1[0x13] = (long)puVar9;
    if (lVar15 != 0) {
      func_0x00010a502670();
    }
  }
  return;
}



/* Entry: 10a4ca3e8; end: 10a4ca447;  */

void FUN_10a4ca3e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x18;
    __Znwm();
    FUN_10a503c9c();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10a4ca448; end: 10a4ca777;  */

undefined4 * FUN_10a4ca448(undefined4 *param_1)

{
  *param_1 = 0x20101;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)(param_1 + 0x136) = 0;
  *(undefined2 *)(param_1 + 0x137) = 0;
  *(undefined1 *)((long)param_1 + 0x4de) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined2 *)(param_1 + 0x156) = 0;
  *(undefined1 *)(param_1 + 0x157) = 0;
  *(undefined1 *)(param_1 + 0x159) = 0;
  *(undefined2 *)((long)param_1 + 0x56e) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x15e) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x4e1) = 0;
  param_1[0x15a] = 0;
  *(undefined1 *)(param_1 + 0x15b) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x261) = 0;
  *(undefined8 *)((long)param_1 + 0x259) = 0;
  func_0x000107c2b054(param_1 + 0x90,"");
  *(undefined8 *)(param_1 + 0x96) = 0xf3f266666;
  param_1[0x98] = 10;
  *(undefined2 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return param_1;
}



/* Entry: 10a4ca778; end: 10a4ca86f;  */

ulong FUN_10a4ca778(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x110) | (ulong)*(byte *)(param_1 + 0x48) << 1 |
          (ulong)*(byte *)(param_1 + 0x199) << 5;
  if (((((*(byte *)(param_1 + 0x170) & 1) != 0) || ((*(byte *)(param_1 + 0x4e3) & 1) != 0)) ||
      ((*(byte *)(param_1 + 0x4e1) & 1) != 0)) ||
     (((*(byte *)(param_1 + 0x4dd) & 1) != 0 || (*(char *)(param_1 + 0x17c) == '\x01')))) {
    uVar1 = uVar1 | 0x200;
  }
  if ((((*(byte *)(param_1 + 0x238) & 1) != 0) || ((*(byte *)(param_1 + 0x1f8) & 1) != 0)) ||
     (*(char *)(param_1 + 0x520) == '\x01')) {
    uVar1 = uVar1 | 0x4000000;
  }
  uVar1 = uVar1 | (ulong)*(byte *)(param_1 + 0x2b0) << 0x1f |
          (ulong)*(byte *)(param_1 + 0x2d0) << 0x1e | (ulong)*(byte *)(param_1 + 0x2f8) << 3 |
          (ulong)*(byte *)(param_1 + 0x51) << 4 | (ulong)*(byte *)(param_1 + 0x130) << 6 |
          (ulong)*(byte *)(param_1 + 0x194) << 10 | (ulong)*(byte *)(param_1 + 0x4d8) << 0x20 |
          (ulong)*(byte *)(param_1 + 0x400) << 0x1c | (ulong)*(byte *)(param_1 + 0x450) << 0x1b |
          (ulong)*(byte *)(param_1 + 0x4b0) << 0x23 | (ulong)*(byte *)(param_1 + 0x500) << 0x22;
  if (((*(byte *)(param_1 + 0x4e7) & 1) != 0) || (*(char *)(param_1 + 0x4e5) == '\x01')) {
    uVar1 = uVar1 | 0x100000;
  }
  return uVar1 | (ulong)*(byte *)(param_1 + 0x290) << 0xb | (ulong)*(byte *)(param_1 + 0x271) << 0xc
         | (ulong)*(byte *)(param_1 + 0x1c8) << 0x11 | (ulong)*(byte *)(param_1 + 0x569) << 0x13;
}



/* Entry: 10a4ca870; end: 10a4ca8ef;  */

void FUN_10a4ca870(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  float2 *pfVar3;
  long *extraout_x8;
  float *pfVar4;
  ulong uVar5;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 3) == 0) {
    func_0x0001074287b0(param_3,uStack_30 >> 2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*param_3,uStack_38,uStack_30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ca8e0);
    (*pcVar2)();
  }
  FUN_10a324f10();
  uVar1 = *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
  uVar5 = (ulong)uVar1;
  pfVar3 = (float2 *)(uVar5 << 1);
  __Znam();
  _bzero();
  *extraout_x8 = (long)pfVar3;
  if (uVar1 != 0) {
    pfVar4 = *(float **)(param_2 + 0x10);
    do {
      *pfVar3 = (float2)*pfVar4;
      uVar5 = uVar5 - 1;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10a4ca8f0; end: 10a4ca95f;  */

void FUN_10a4ca8f0(long *param_1,long param_2)

{
  uint uVar1;
  float2 *pfVar2;
  float *pfVar3;
  ulong uVar4;
  
  uVar1 = *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
  uVar4 = (ulong)uVar1;
  pfVar2 = (float2 *)(uVar4 << 1);
  __Znam();
  _bzero();
  *param_1 = (long)pfVar2;
  if (uVar1 != 0) {
    pfVar3 = *(float **)(param_2 + 0x10);
    do {
      *pfVar2 = (float2)*pfVar3;
      uVar4 = uVar4 - 1;
      pfVar3 = pfVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 10a4ca960; end: 10a4caa2b;  */

undefined8 * FUN_10a4ca960(undefined8 *param_1)

{
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  char cStack_31;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a22d710(auStack_e0);
  FUN_10a50424c(param_1,auStack_e0,auStack_e0);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  func_0x00010a22de78(auStack_a0);
  func_0x000107c2826c(auStack_c8);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  return param_1;
}



/* Entry: 10a4caa2c; end: 10a4caa9b;  */

undefined8 * FUN_10a4caa2c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  func_0x00010a22de78(param_1 + 8);
  func_0x000107c2826c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a4caa9c; end: 10a4cab13;  */

undefined8 FUN_10a4caa9c(long *param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  
  if ((long *)*param_1 == param_1 + 1) {
    return 0;
  }
  iVar3 = 0;
  uVar5 = 0;
  plVar4 = (long *)*param_1;
  do {
    if (iVar3 <= *(int *)((long)plVar4 + 0xd4)) {
      iVar3 = *(int *)((long)plVar4 + 0xd4);
    }
    plVar1 = (long *)plVar4[1];
    plVar7 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar2 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    uVar5 = *(byte *)(plVar4 + 0x1b) | uVar5;
    plVar4 = plVar6;
  } while (plVar6 != param_1 + 1);
  return CONCAT44(uVar5,iVar3);
}



/* Entry: 10a4cab14; end: 10a4cac0b;  */

void FUN_10a4cab14(undefined8 param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_58;
  char cStack_41;
  
  plVar3 = (long *)*param_2;
  while (plVar3 != param_2 + 1) {
    FUN_10a22d710(auStack_f0,plVar3 + 4);
    FUN_10a50424c(param_1,auStack_f0,auStack_f0);
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    func_0x00010a22de78(auStack_b0);
    func_0x000107c2826c(auStack_d8);
    if (cStack_d9 < '\0') {
      __ZdlPv(auStack_f0[0]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a4cac0c; end: 10a4cacdf;  */

void FUN_10a4cac0c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 *puStack_38;
  undefined4 **ppuStack_30;
  undefined4 *apuStack_28 [2];
  undefined4 *puStack_18;
  
  *param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = 0x3f800000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0x3f800000;
  lVar1 = (param_2 & 3) * 4;
  uStack_70 = *(undefined4 *)(&UNK_10e4b9dd0 + lVar1);
  uStack_6c = *(undefined4 *)(&UNK_10e4b9df0 + lVar1);
  uStack_64 = *(undefined4 *)(&UNK_10e4b9de0 + lVar1);
  uStack_50 = *(undefined4 *)(&UNK_10e4b9dc0 + lVar1);
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_98 = 3;
  uStack_a0 = 3;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 4;
  puStack_18 = &uStack_70;
  ppuStack_48 = apuStack_28;
  ppuStack_40 = &puStack_18;
  puStack_38 = &uStack_49;
  ppuStack_30 = &puStack_a8;
  puStack_a8 = param_1;
  puStack_90 = param_1;
  uStack_60 = uStack_70;
  apuStack_28[0] = param_1;
  func_0x00010a5043f0(&ppuStack_48);
  return;
}



/* Entry: 10a4cace0; end: 10a4cae9f;  */

void FUN_10a4cace0(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = *param_2;
  fVar5 = param_2[4];
  fVar8 = param_2[8];
  fVar9 = (fVar3 - fVar5) - fVar8;
  fVar10 = (fVar5 - fVar3) - fVar8;
  fVar12 = (fVar8 - fVar3) - fVar5;
  fVar8 = fVar3 + fVar5 + fVar8;
  fVar3 = fVar9;
  if (fVar9 <= fVar8) {
    fVar3 = fVar8;
  }
  bVar1 = 2;
  if (fVar10 <= fVar3) {
    fVar10 = fVar3;
    bVar1 = fVar8 < fVar9;
  }
  bVar2 = 3;
  if (fVar12 <= fVar10) {
    fVar12 = fVar10;
    bVar2 = bVar1;
  }
  fVar6 = SQRT(fVar12 + 1.0) * 0.5;
  fVar9 = 0.25 / fVar6;
  fVar5 = (param_2[6] - param_2[2]) * fVar9;
  fVar11 = (param_2[1] + param_2[3]) * fVar9;
  fVar13 = (param_2[5] + param_2[7]) * fVar9;
  fVar8 = (param_2[1] - param_2[3]) * fVar9;
  fVar4 = (param_2[2] + param_2[6]) * fVar9;
  fVar7 = fVar5;
  fVar10 = fVar13;
  fVar3 = fVar6;
  fVar12 = fVar11;
  if (bVar2 != 2) {
    fVar7 = fVar8;
    fVar10 = fVar6;
    fVar3 = fVar13;
    fVar12 = fVar4;
  }
  fVar9 = (param_2[5] - param_2[7]) * fVar9;
  fVar13 = fVar6;
  if (bVar2 != 0) {
    fVar13 = fVar9;
    fVar8 = fVar4;
    fVar5 = fVar11;
    fVar9 = fVar6;
  }
  if (bVar2 < 2) {
    fVar7 = fVar13;
    fVar10 = fVar8;
    fVar3 = fVar5;
    fVar12 = fVar9;
  }
  fVar5 = ((fVar12 * 0.70710677 + fVar7 * 0.70710677) - fVar3 * 0.0) - fVar10 * 0.0;
  fVar8 = (fVar12 * 0.70710677 + fVar7 * -0.70710677 + fVar3 * 0.0) - fVar10 * 0.0;
  fVar9 = (fVar3 * 0.70710677 + fVar7 * 0.0 + fVar10 * -0.70710677) - fVar12 * 0.0;
  fVar10 = fVar10 * 0.70710677 + fVar7 * 0.0 + fVar12 * 0.0 + fVar3 * 0.70710677;
  fVar3 = fVar8 * fVar9 + fVar10 * fVar5;
  *param_1 = (fVar9 * fVar9 + fVar10 * fVar10) * -2.0 + 1.0;
  param_1[1] = fVar3 + fVar3;
  fVar12 = fVar8 * fVar10 - fVar9 * fVar5;
  fVar3 = fVar8 * fVar9 - fVar10 * fVar5;
  param_1[2] = fVar12 + fVar12;
  param_1[3] = fVar3 + fVar3;
  fVar3 = fVar9 * fVar10 + fVar8 * fVar5;
  param_1[4] = (fVar8 * fVar8 + fVar10 * fVar10) * -2.0 + 1.0;
  param_1[5] = fVar3 + fVar3;
  fVar3 = fVar8 * fVar10 + fVar9 * fVar5;
  fVar10 = fVar9 * fVar10 - fVar8 * fVar5;
  param_1[6] = fVar3 + fVar3;
  param_1[7] = fVar10 + fVar10;
  param_1[8] = (fVar8 * fVar8 + fVar9 * fVar9) * -2.0 + 1.0;
  return;
}



/* Entry: 10a4caea0; end: 10a4cb59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10a4caea0(undefined8 *param_1,undefined4 param_2,double *param_3,long param_4,
                  undefined8 param_5,double *param_6,long param_7)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  long *plVar11;
  double *pdVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  long *plStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  undefined1 auStack_370 [64];
  long *plStack_330;
  long *plStack_328;
  undefined1 auStack_320 [64];
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  long *plStack_280;
  long *plStack_278;
  double dStack_270;
  double dStack_268;
  float fStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  long *plStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  uint uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_100 [88];
  undefined8 uStack_a8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar12 = param_3 + 2;
  dVar17 = *param_3;
  plStack_1f0 = *(long **)((long)dVar17 + 0x10);
  FUN_10acdd0d0(auStack_100,&plStack_1f0,pdVar12);
  pdVar10 = pdVar12;
  FUN_10a0ec6f0(pdVar12);
  FUN_10a4cac0c(auStack_320,(ulong)pdVar10 & 0xffffffff);
  lVar16 = *(long *)((long)dVar17 + 0x28);
  lVar14 = *(long *)((long)dVar17 + 0x10);
  uVar13 = *(undefined8 *)((long)dVar17 + 0x18);
  plVar2 = (long *)*param_3;
  dVar17 = param_3[1];
  if (dVar17 != 0.0) {
    plVar11 = (long *)((long)dVar17 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)0x78;
  plStack_1f0 = plVar2;
  dStack_1e8 = dVar17;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_DAT_110bea0c0;
  plVar11[4] = lVar16;
  plVar11[5] = lVar14;
  *(int *)(plVar11 + 6) = (int)uVar13;
  plStack_330 = plVar11 + 3;
  *plStack_330 = (long)&PTR_DAT_110bea130;
  plVar11[7] = 0x10a5045a8;
  plVar11[8] = (long)&PTR_DAT_110bea100;
  plVar11[9] = (long)plVar2;
  plVar11[10] = (long)dVar17;
  plStack_328 = plVar11;
  FUN_10a4cb5a0(&plStack_1f0,pdVar12);
  plVar2 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar11 = plStack_178 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10aaaf900(&plStack_1f0,param_5,auStack_370);
  if ((param_7 != 0) && (1 < uStack_160)) {
    func_0x00010937f9d4(&plStack_280,&plStack_1f0,param_7);
    dStack_1e8 = (double)plStack_278;
    plStack_1f0 = plStack_280;
    dStack_1d8 = dStack_268;
    dStack_1e0 = dStack_270;
    uStack_1c8 = (undefined4)uStack_258;
    uStack_1c4 = (undefined4)((ulong)uStack_258 >> 0x20);
    uStack_1c0 = (undefined4)uStack_250;
    uStack_1bc = (undefined4)((ulong)uStack_250 >> 0x20);
    uStack_188 = uStack_218;
    uStack_190 = (undefined4)uStack_220;
    uStack_18c = (undefined4)((ulong)uStack_220 >> 0x20);
    plStack_178 = plStack_208;
    uStack_180 = dStack_210;
    uStack_170 = uStack_200;
    uStack_1a8 = SUB84(dStack_238,0);
    uStack_1a4 = (undefined4)((ulong)dStack_238 >> 0x20);
    uStack_1b0 = SUB84(dStack_240,0);
    uStack_1ac = (undefined4)((ulong)dStack_240 >> 0x20);
    uStack_198 = SUB84(dStack_228,0);
    uStack_194 = (undefined4)((ulong)dStack_228 >> 0x20);
    uStack_1a0 = SUB84(dStack_230,0);
    uStack_19c = (undefined4)((ulong)dStack_230 >> 0x20);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  auVar18 = NEON_fmov(0x403e000000000000,8);
  dVar20 = auVar18._8_8_;
  dVar17 = auVar18._0_8_;
  param_1[0x4a] = dVar20;
  param_1[0x49] = dVar17;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  func_0x00010942bc68(param_1,&plStack_1f0);
  plStack_3f0 = (long *)(double)(float)auStack_320._0_8_;
  dStack_3e8 = (double)SUB84(auStack_320._0_8_,4);
  dStack_3e0 = (double)(float)auStack_320._8_8_;
  dStack_3d8 = (double)SUB84(auStack_320._8_8_,4);
  dStack_3d0 = (double)(float)auStack_320._16_8_;
  dStack_3c8 = (double)SUB84(auStack_320._16_8_,4);
  dStack_3c0 = (double)(float)auStack_320._24_8_;
  dStack_3b8 = (double)SUB84(auStack_320._24_8_,4);
  dStack_3b0 = (double)(float)auStack_320._32_8_;
  dStack_3a8 = (double)SUB84(auStack_320._32_8_,4);
  dStack_3a0 = (double)(float)auStack_320._40_8_;
  dStack_398 = (double)SUB84(auStack_320._40_8_,4);
  dStack_390 = (double)(float)auStack_320._48_8_;
  dStack_388 = (double)SUB84(auStack_320._48_8_,4);
  dStack_380 = (double)(float)auStack_320._56_8_;
  dStack_378 = (double)SUB84(auStack_320._56_8_,4);
  func_0x00010937fc48(&plStack_280,&plStack_3f0);
  func_0x00010937fbc4(&dStack_2e0,&plStack_280);
  uStack_218 = uStack_2b8;
  uStack_220 = uStack_2c0;
  plStack_208 = (long *)dStack_2a8;
  dStack_210 = dStack_2b0;
  uStack_200 = uStack_2a0;
  dStack_238 = dStack_2d8;
  dStack_240 = dStack_2e0;
  dStack_228 = dStack_2c8;
  dStack_230 = dStack_2d0;
  param_1[0x11] = plStack_278;
  param_1[0x10] = plStack_280;
  param_1[0x13] = dStack_268;
  param_1[0x12] = dStack_270;
  param_1[0x15] = uStack_258;
  param_1[0x14] = CONCAT44(uStack_25c,fStack_260);
  param_1[0x16] = uStack_250;
  param_1[0x19] = dStack_2d8;
  param_1[0x18] = dStack_2e0;
  param_1[0x1b] = dStack_2c8;
  param_1[0x1a] = dStack_2d0;
  param_1[0x1d] = uStack_2b8;
  param_1[0x1c] = uStack_2c0;
  param_1[0x1f] = dStack_2a8;
  param_1[0x1e] = dStack_2b0;
  param_1[0x20] = uStack_2a0;
  if (param_6 == (double *)0x0) {
    dStack_400 = 30.0;
  }
  else {
    dStack_2b0 = *param_6;
    dStack_2a8 = param_6[1];
    dVar17 = param_6[2];
    dVar20 = param_6[3];
    dStack_400 = param_6[4];
  }
  dStack_3f8 = 0.0;
  param_1[0x47] = dStack_2a8;
  param_1[0x46] = dStack_2b0;
  param_1[0x49] = dVar20;
  param_1[0x48] = dVar17;
  param_1[0x4a] = dStack_400;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  if (param_4 != 0) {
    FUN_10a4cace0(&plStack_280,param_4);
    plStack_3f0 = plStack_280;
    dStack_3e8 = (double)plStack_278;
    dStack_3e0 = dStack_270;
    dStack_3d8 = dStack_268;
    dStack_3d0 = (double)CONCAT44(dStack_3d0._4_4_,fStack_260);
    fVar23 = SUB84(dStack_270,0);
    fVar26 = SUB84(plStack_280,0);
    fVar28 = fVar26 + fVar23 + fStack_260;
    if (fVar28 <= 0.0) {
      uVar15 = (ulong)(fVar26 < fVar23);
      lVar14 = 0xc;
      if (fVar26 >= fVar23) {
        lVar14 = 0;
      }
      uVar1 = 2;
      if (fStack_260 <= *(float *)((long)&plStack_3f0 + uVar15 * 4 + lVar14)) {
        uVar1 = uVar15;
      }
      lVar14 = 0;
      if (uVar1 != 2) {
        lVar14 = uVar1 + 1;
      }
      lVar16 = lVar14 + -2;
      if (lVar14 + 1U < 3) {
        lVar16 = lVar14 + 1;
      }
      lVar7 = uVar1 * 0xc + -0x3f0;
      lVar8 = lVar14 * 0xc + -0x3f0;
      lVar9 = lVar16 * 0xc + -0x3f0;
      fVar26 = SQRT(((*(float *)((long)&plStack_3f0 + uVar1 * 4 + lVar7 + 0x3f0) -
                     *(float *)((long)&plStack_3f0 + lVar14 * 4 + lVar8 + 0x3f0)) -
                    *(float *)((long)&plStack_3f0 + lVar16 * 4 + lVar9 + 0x3f0)) + 1.0);
      *(float *)((ulong)&uStack_290 | uVar1 << 2) = fVar26 * 0.5;
      fVar26 = 0.5 / fVar26;
      fStack_284 = (*(float *)((long)&plStack_3f0 + lVar14 * 4 + lVar9 + 0x3f0) -
                   *(float *)((long)&plStack_3f0 + lVar16 * 4 + lVar8 + 0x3f0)) * fVar26;
      *(float *)((long)&uStack_290 + lVar14 * 4) =
           fVar26 * (*(float *)((long)&plStack_3f0 + uVar1 * 4 + lVar8 + 0x3f0) +
                    *(float *)((long)&plStack_3f0 + lVar14 * 4 + lVar7 + 0x3f0));
      *(float *)((long)&uStack_290 + lVar16 * 4) =
           fVar26 * (*(float *)((long)&plStack_3f0 + uVar1 * 4 + lVar9 + 0x3f0) +
                    *(float *)((long)&plStack_3f0 + lVar16 * 4 + lVar7 + 0x3f0));
      fVar26 = fStack_284;
    }
    else {
      fVar26 = SQRT(fVar28 + 1.0);
      fStack_288 = 0.5 / fVar26;
      uVar13 = NEON_ext(dStack_268,plStack_278,4,1);
      uVar24 = NEON_ext(dStack_270,dStack_268,4,1);
      uStack_290 = CONCAT44(((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar24 >> 0x20)) *
                            fStack_288,((float)uVar13 - (float)uVar24) * fStack_288);
      fStack_288 = ((float)((ulong)plStack_278 >> 0x20) - (float)((ulong)plStack_280 >> 0x20)) *
                   fStack_288;
      fVar26 = fVar26 * 0.5;
    }
    dStack_2b0 = (double)(float)uStack_290;
    dStack_2a8 = (double)(float)((ulong)uStack_290 >> 0x20);
    dStack_400 = (double)fStack_288;
    dStack_3f8 = (double)fVar26;
  }
  iVar3 = *(int *)pdVar12;
  dStack_410 = dStack_2b0;
  dStack_408 = dStack_2a8;
  FUN_10a0ec6f0();
  auVar21._0_4_ = -(uint)(iVar3 == 1);
  auVar21._4_4_ = auVar21._0_4_;
  auVar21._8_4_ = auVar21._0_4_;
  auVar21._12_4_ = auVar21._0_4_;
  auVar25._8_8_ = 0x8000000000000000;
  auVar25._0_8_ = 0x8000000000000000;
  auVar25 = auVar25 ^ (auVar25 ^ _UNK_10dfc9520) & auVar21;
  auVar27._8_8_ = 0xbe6777a5cf72cec5;
  auVar27._0_8_ = 0xbe6777a5cf72cec5;
  auVar18._12_4_ = 0xbe60980c;
  auVar18._0_12_ = _UNK_10dfc9530;
  auVar6._12_4_ = 0x3ce135bd;
  auVar6._0_12_ = _UNK_10e4b9cd0;
  auVar22._12_4_ = 0x3ce135bd;
  auVar22._0_12_ = _UNK_10e4b9cd0;
  auVar22 = auVar22 ^ (auVar6 ^ _UNK_10e4b9ce0) & auVar21;
  auVar19._0_4_ = -(uint)(((ulong)pdVar12 & 1) == 0);
  auVar19._4_4_ = auVar19._0_4_;
  auVar19._8_4_ = auVar19._0_4_;
  auVar19._12_4_ = auVar19._0_4_;
  auVar22 = auVar22 ^ (auVar22 ^ _UNK_10e4b9cc0 ^ (_UNK_10e4b9cc0 ^ auVar18) & auVar21) & ~auVar19;
  auVar25 = auVar25 ^ (auVar25 ^ auVar27 ^ (auVar27 ^ _UNK_10e4b9cb0) & auVar21) & auVar19;
  plStack_278 = auVar25._8_8_;
  plStack_280 = auVar25._0_8_;
  dStack_268 = auVar22._8_8_;
  dStack_270 = auVar22._0_8_;
  func_0x0001094064cc(&dStack_2e0,&plStack_280,&dStack_410);
  dVar17 = dStack_2e0 * dStack_2e0 + dStack_2d0 * dStack_2d0 +
           dStack_2d8 * dStack_2d8 + dStack_2c8 * dStack_2c8;
  if (0.0 < dVar17) {
    dVar17 = SQRT(dVar17);
    dStack_2e0 = dStack_2e0 / dVar17;
    dStack_2d8 = dStack_2d8 / dVar17;
    dStack_2d0 = dStack_2d0 / dVar17;
    dStack_2c8 = dStack_2c8 / dVar17;
  }
  param_1[0x25] = dStack_2d8;
  param_1[0x24] = dStack_2e0;
  param_1[0x27] = dStack_2c8;
  param_1[0x26] = dStack_2d0;
  *(bool *)(param_1 + 0x4d) = param_4 != 0;
  plStack_278 = plStack_328;
  plStack_280 = plStack_330;
  plStack_330 = (long *)0x0;
  plStack_328 = (long *)0x0;
  func_0x000109452cd0(param_1,auStack_100,&plStack_280,param_2);
  plVar2 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar11 = plStack_278 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar2 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    plVar11 = plStack_328 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  uVar13 = uStack_a8;
  _free(uStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a4cb620(&plStack_1f0);
  FUN_10a504680(&plStack_330);
  do {
    _free(uStack_a8);
    __Unwind_Resume(uVar13);
  } while( true );
}



/* Entry: 10a4cb5a0; end: 10a4cb61f;  */

void FUN_10a4cb5a0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar4 = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x5c) = uVar4;
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar6 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar4 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  if (param_2[0xf] != 0) {
    plVar1 = (long *)(param_2[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010a0eca88(param_1);
  return;
}



/* Entry: 10a4cb620; end: 10a4cb66f;  */

long FUN_10a4cb620(long param_1)

{
  if (*(long *)(param_1 + 200) != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 200);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4cb670; end: 10a4cb84f;  */

void FUN_10a4cb670(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  undefined7 uStack_68;
  char cStack_61;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x00010ad03330();
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_10a003c90(&uStack_78,uVar2 + 0x21,&plStack_50);
  puVar3 = (undefined1 *)CONCAT71(uStack_77,uStack_78);
  if (-1 < cStack_61) {
    puVar3 = &uStack_78;
  }
  if (uVar2 != 0) {
    plVar6 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar6 = param_2;
    }
    _memmove(puVar3,plVar6,uVar2);
  }
  puVar1 = (undefined8 *)(puVar3 + uVar2);
  puVar1[1] = 0x5465727574616546;
  *puVar1 = 0x6c61727574614e2f;
  puVar1[3] = 0x7461446d65747379;
  puVar1[2] = 0x532f72656b636172;
  *(undefined2 *)(puVar1 + 4) = 0x61;
  plVar6 = (long *)0x38;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110bb3748;
  plVar10 = plVar6 + 3;
  *plVar10 = (long)&PTR_FUN_110ba56f0;
  plVar6[5] = lStack_70;
  plVar6[4] = CONCAT71(uStack_77,uStack_78);
  plVar6[6] = CONCAT17(cStack_61,uStack_68);
  cStack_61 = '\0';
  uStack_78 = 0;
  uVar7 = 0x510;
  plStack_60 = plVar10;
  plStack_58 = plVar6;
  __Znwm();
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plStack_50 = plVar10;
  plStack_48 = plVar6;
  func_0x000109473b68();
  *param_1 = uVar7;
  do {
    lVar8 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(CONCAT71(uStack_77,uStack_78));
  }
  return;
}



/* Entry: 10a4cb850; end: 10a4cb94f;  */

long * FUN_10a4cb850(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined4 auStack_2e0 [2];
  undefined8 uStack_2d8;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  long *aplStack_1d0 [2];
  char cStack_1b9;
  long *plStack_1b0;
  byte bStack_80;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*param_1;
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[7] == 1) {
      func_0x000109476718(aplStack_1d0);
      if (plStack_1b0 != (long *)0x0) {
        plVar5 = plStack_1b0 + 1;
        do {
          lVar7 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar4 = plStack_1b0;
        }
      }
      if (cStack_1b9 < '\0') {
        __ZdlPv();
        plVar4 = aplStack_1d0[0];
      }
      if ((bStack_80 & 1) == 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar5 = (long *)(ulong)((float)((long)plVar4 - param_1[0x1c]) / 1e+09 <=
                                *(float *)(param_1 + 0x1d));
      }
      else {
        plVar5 = (long *)0x1;
      }
    }
    else {
      plVar5 = (long *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    plVar4 = &lStack_300;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = (undefined8 *)0x128;
    __Znwm();
    auVar8 = NEON_fmov(0xbf800000,4);
    *(long *)((long)puVar6 + 0x1c) = auVar8._8_8_;
    *(long *)((long)puVar6 + 0x14) = auVar8._0_8_;
    *(undefined8 *)((long)puVar6 + 0x24) = 0x7fc000007fc00000;
    *(undefined8 *)((long)puVar6 + 0x9c) = 0x100000000;
    *(undefined8 *)((long)puVar6 + 0x94) = 0;
    puVar6[0x1a] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x21] = 0;
    puVar6[0x20] = 0;
    puVar6[0x23] = 0;
    puVar6[0x22] = 0;
    uVar10 = param_2[1];
    uVar9 = *param_2;
    uVar3 = param_2[2];
    puVar6[0x18] = param_2[3];
    puVar6[0x17] = uVar3;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0xffffffff;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0x3f800000;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0x3f800000;
    *(undefined8 *)((long)puVar6 + 0x4c) = 0;
    *(undefined8 *)((long)puVar6 + 0x44) = 0;
    *(undefined4 *)((long)puVar6 + 0x54) = 0x3f800000;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)((long)puVar6 + 0x6c) = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0x3f800000;
    puVar6[0xf] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0x3d888889;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x24) = 0x3f800000;
    puVar6[0x16] = uVar10;
    puVar6[0x15] = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (puVar6 + 0x19,param_2 + 4);
    *(float *)(puVar6 + 0x1d) = (float)*(int *)(puVar6 + 0x16) / 30.0;
    *plVar5 = (long)puVar6;
    *(undefined4 *)(plVar5 + 1) = 0xffffffff;
    auStack_2e0[0] = 1;
    uStack_2d8 = 0;
    uStack_2c8 = 3;
    uStack_2c0 = 1000;
    uStack_2b0 = 3;
    uStack_2a8 = 2000;
    uStack_298 = 1;
    uStack_290 = 4000;
    uStack_280 = 1;
    uStack_278 = 8000;
    uStack_268 = 1;
    uStack_260 = 16000;
    uStack_250 = 1;
    uStack_248 = 20000;
    lStack_300 = 0;
    lStack_2f8 = 0;
    lStack_2f0 = 0;
    FUN_10a504768(&lStack_300,auStack_2e0,&lStack_238,7);
    plVar5[2] = 0;
    plVar5[4] = lStack_2f8;
    plVar5[3] = lStack_300;
    plVar5[5] = lStack_2f0;
    plVar5[6] = 0;
    *(undefined1 *)(plVar5 + 0xb) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined1 *)(plVar5 + 9) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      lVar7 = *plVar5;
      *plVar5 = 0;
      if (lVar7 != 0) {
        FUN_10a504700();
      }
      __Unwind_Resume();
      if ((char)plVar4[0xb] == '\x01') {
        func_0x00010a5020c0(plVar4 + 9);
      }
      FUN_10a235538(plVar4 + 7);
      if (plVar4[3] != 0) {
        plVar4[4] = plVar4[3];
        __ZdlPv();
      }
      lVar7 = *plVar4;
      *plVar4 = 0;
      if (lVar7 != 0) {
        FUN_10a504700();
      }
      return plVar4;
    }
    return plVar5;
  }
  return plVar5;
}



/* Entry: 10a4cb950; end: 10a4cbbaf;  */

long * FUN_10a4cb950(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 auStack_110 [2];
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  plVar3 = &lStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x128;
  __Znwm();
  auVar5 = NEON_fmov(0xbf800000,4);
  *(long *)((long)puVar2 + 0x1c) = auVar5._8_8_;
  *(long *)((long)puVar2 + 0x14) = auVar5._0_8_;
  *(undefined8 *)((long)puVar2 + 0x24) = 0x7fc000007fc00000;
  *(undefined8 *)((long)puVar2 + 0x9c) = 0x100000000;
  *(undefined8 *)((long)puVar2 + 0x94) = 0;
  puVar2[0x1a] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar1 = param_2[2];
  puVar2[0x18] = param_2[3];
  puVar2[0x17] = uVar1;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0x3f800000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0x3f800000;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined4 *)((long)puVar2 + 0x54) = 0x3f800000;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)((long)puVar2 + 0x6c) = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0x3f800000;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0x3d888889;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x24) = 0x3f800000;
  puVar2[0x16] = uVar7;
  puVar2[0x15] = uVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puVar2 + 0x19,param_2 + 4);
  *(float *)(puVar2 + 0x1d) = (float)*(int *)(puVar2 + 0x16) / 30.0;
  *param_1 = (long)puVar2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  auStack_110[0] = 1;
  uStack_108 = 0;
  uStack_f8 = 3;
  uStack_f0 = 1000;
  uStack_e0 = 3;
  uStack_d8 = 2000;
  uStack_c8 = 1;
  uStack_c0 = 4000;
  uStack_b0 = 1;
  uStack_a8 = 8000;
  uStack_98 = 1;
  uStack_90 = 16000;
  uStack_80 = 1;
  uStack_78 = 20000;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  FUN_10a504768(&lStack_130,auStack_110,&lStack_68,7);
  param_1[2] = 0;
  param_1[4] = lStack_128;
  param_1[3] = lStack_130;
  param_1[5] = lStack_120;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 != 0) {
    FUN_10a504700();
  }
  __Unwind_Resume();
  if ((char)plVar3[0xb] == '\x01') {
    func_0x00010a5020c0(plVar3 + 9);
  }
  FUN_10a235538(plVar3 + 7);
  if (plVar3[3] != 0) {
    plVar3[4] = plVar3[3];
    __ZdlPv();
  }
  lVar4 = *plVar3;
  *plVar3 = 0;
  if (lVar4 != 0) {
    FUN_10a504700();
  }
  return plVar3;
}



/* Entry: 10a4cbbb0; end: 10a4cbc0b;  */

long * FUN_10a4cbbb0(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0xb] == '\x01') {
    func_0x00010a5020c0(param_1 + 9);
  }
  FUN_10a235538(param_1 + 7);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10a504700();
  }
  return param_1;
}



/* Entry: 10a4cbc0c; end: 10a4cbd0b;  */

long * FUN_10a4cbc0c(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_38;
  
  plVar5 = (long *)*param_1;
  if ((*plVar5 == 0) || ((int)plVar5[1] != *param_2)) {
    ppuVar4 = &PTR_PTR_113302328;
    FUN_10ae079a0(0,&PTR_PTR_113302328);
    FUN_10ae07cd4(ppuVar4,&PTR_PTR_113302328);
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    FUN_10a4cb670(&uStack_38);
    FUN_10a5046d8(*param_1,uStack_38);
    func_0x000107c283f4(*param_1 + 0x100);
    plVar5 = (long *)*param_1;
  }
  plVar5 = plVar5 + 1;
  func_0x00010a4effb4(plVar5,param_2);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar6 = *param_1;
  uVar9 = *(undefined8 *)(param_2 + 2);
  uVar8 = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)(param_2 + 6);
  uVar10 = *(undefined8 *)(param_2 + 4);
  uVar12 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(lVar6 + 0x28) = uVar12;
  *(undefined8 *)(lVar6 + 0x20) = uVar11;
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  *(undefined8 *)(lVar6 + 0x10) = uVar9;
  *(undefined8 *)(lVar6 + 8) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0xe);
  uVar8 = *(undefined8 *)(param_2 + 0xc);
  uVar11 = *(undefined8 *)(param_2 + 0x12);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x16);
  uVar12 = *(undefined8 *)(param_2 + 0x14);
  uVar14 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(lVar6 + 0x6c) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(lVar6 + 100) = uVar14;
  *(undefined8 *)(lVar6 + 0x60) = uVar13;
  *(undefined8 *)(lVar6 + 0x58) = uVar12;
  *(undefined8 *)(lVar6 + 0x50) = uVar11;
  *(undefined8 *)(lVar6 + 0x48) = uVar10;
  *(undefined8 *)(lVar6 + 0x40) = uVar9;
  *(undefined8 *)(lVar6 + 0x38) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x1e);
  lVar7 = *(long *)(param_2 + 0x1c);
  if (*(long *)(param_2 + 0x1e) != 0) {
    plVar5 = (long *)(*(long *)(param_2 + 0x1e) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(lVar6 + 0x80);
  *(undefined8 *)(lVar6 + 0x80) = uVar8;
  *(long *)(lVar6 + 0x78) = lVar7;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return (long *)(lVar6 + 0x78);
}



/* Entry: 10a4cbd0c; end: 10a4cc3b7;  */

void FUN_10a4cbd0c(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long *plStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 **ppuStack_430;
  ulong uStack_428;
  ulong uStack_420;
  int iStack_418;
  uint uStack_414;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 **ppuStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long *plStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_1e8;
  char cStack_1b0;
  undefined1 uStack_1af;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_178;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long *plStack_88;
  char cStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar18 = *(long *)*param_2;
  *(bool *)param_1 = lVar18 != 0;
  if (param_6 != 0) {
    puVar12 = *(undefined8 **)(param_6 + 0x10);
    uStack_390 = *puVar12;
    uStack_388 = puVar12[4];
    ppuStack_380 = (undefined8 **)puVar12[8];
    uStack_378 = puVar12[0xc];
    uStack_370 = puVar12[1];
    uStack_368 = puVar12[5];
    lStack_360 = puVar12[9];
    uStack_358 = puVar12[0xd];
    lStack_350 = puVar12[2];
    lStack_348 = puVar12[6];
    plStack_340 = (long *)puVar12[10];
    uStack_338 = puVar12[0xe];
    uStack_330 = puVar12[3];
    uStack_328 = puVar12[7];
    uStack_320 = puVar12[0xb];
    uStack_318 = puVar12[0xf];
    func_0x00010937fc48(auStack_300,&uStack_390);
    func_0x00010937fbc4(&ppuStack_430,auStack_300);
    lStack_298 = lStack_408;
    lStack_2a0 = lStack_410;
    lStack_288 = lStack_3f8;
    lStack_290 = lStack_400;
    plStack_280 = plStack_3f0;
    uStack_2a8 = CONCAT44(uStack_414,iStack_418);
    uStack_2b8 = uStack_428;
    ppuStack_2c0 = ppuStack_430;
    uStack_2b0 = uStack_420;
    func_0x000109475a8c(*(long *)*param_2,param_6 + 0x60,auStack_300,
                        *(undefined1 *)(*(long *)*param_2 + 0x4a9));
    lVar18 = *(long *)*param_2;
  }
  FUN_10a4cc3b8(auStack_300,param_3);
  func_0x000109475ec8(lVar18,auStack_300);
  if ((cStack_80 == '\x01') && (plStack_88 != (long *)0x0)) {
    plVar16 = plStack_88 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  if (plStack_1e8 != (long *)0x0) {
    plVar16 = plStack_1e8 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
    }
  }
  _free(lStack_298);
  func_0x000109476718(auStack_300,*(undefined8 *)*param_2);
  *(undefined8 *)(param_1 + 8) = uStack_1a8;
  *(undefined4 *)(param_1 + 0x10) = uStack_1a0;
  *(undefined8 *)(param_1 + 0x18) = uStack_190;
  *(undefined8 *)(param_1 + 0x20) = uStack_188;
  *(undefined4 *)(param_1 + 0x28) = uStack_180;
  *(undefined4 *)(param_1 + 0x2c) = uStack_178;
  if (*(int *)(*(long *)*param_2 + 0x38) == 1) {
    lVar18 = param_4;
    FUN_10a504884(param_4,auStack_300);
    if (param_4 + 8 != lVar18) {
      uStack_388 = uStack_2c8;
      uStack_390 = uStack_2d0;
      uStack_378 = uStack_2b8;
      ppuStack_380 = ppuStack_2c0;
      uStack_368 = uStack_2a8;
      uStack_370 = uStack_2b0;
      lStack_360 = lStack_2a0;
      uStack_328 = uStack_268;
      uStack_330 = uStack_270;
      uStack_318 = uStack_258;
      uStack_320 = uStack_260;
      uStack_310 = uStack_250;
      lStack_348 = lStack_288;
      lStack_350 = lStack_290;
      uStack_338 = uStack_278;
      plStack_340 = plStack_280;
      func_0x00010937f874(&uStack_3d0,&uStack_390);
      func_0x000107c2b054(&ppuStack_430,"");
      iStack_418 = 0;
      uStack_414 = uStack_414 & 0xffffff00;
      lStack_408 = 0;
      lStack_410 = 0x3f800000;
      lStack_3f8 = 0;
      lStack_400 = 0x3f80000000000000;
      lStack_3e8 = 0x3f800000;
      plStack_3f0 = (long *)0x0;
      lStack_3d8 = 0x3f80000000000000;
      lStack_3e0 = 0;
      lVar18 = *param_2 + 0x100;
      func_0x0001067e045c(lVar18,auStack_300);
      if (lVar18 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppuStack_430,auStack_300);
      }
      iStack_418 = 0;
      plVar16 = (long *)(param_1 + 0x30);
      puVar12 = (undefined8 *)*plVar16;
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      if (puVar12 != puVar2) {
        iVar19 = 0;
        uVar13 = uStack_428;
        pppuVar1 = (undefined8 ***)ppuStack_430;
        if (-1 < (long)uStack_420) {
          uVar13 = uStack_420 >> 0x38;
          pppuVar1 = &ppuStack_430;
        }
        do {
          bVar3 = *(byte *)((long)puVar12 + 0x17);
          uVar15 = puVar12[1];
          if (-1 < (char)bVar3) {
            uVar15 = (ulong)bVar3;
          }
          if (uVar15 == uVar13) {
            puVar7 = (undefined8 *)*puVar12;
            if (-1 < (char)bVar3) {
              puVar7 = puVar12;
            }
            _memcmp(puVar7,pppuVar1,uVar13);
            if ((int)puVar7 == 0) {
              iVar19 = iVar19 + 1;
              iStack_418 = iVar19;
            }
          }
          puVar12 = puVar12 + 0xc;
        } while (puVar12 != puVar2);
      }
      uStack_4a8 = uStack_3c8;
      uStack_4b0 = uStack_3d0;
      uStack_498 = uStack_3b8;
      uStack_4a0 = uStack_3c0;
      uStack_488 = uStack_3a8;
      uStack_490 = uStack_3b0;
      uStack_478 = uStack_398;
      uStack_480 = uStack_3a0;
      plVar8 = (long *)(param_5 + 0x24);
      func_0x000109519fd0(&lStack_470,plVar8,&uStack_4b0);
      lStack_408 = lStack_468;
      lStack_410 = lStack_470;
      lStack_3f8 = lStack_458;
      lStack_400 = lStack_460;
      lStack_3e8 = lStack_448;
      plStack_3f0 = plStack_450;
      lStack_3d8 = lStack_438;
      lStack_3e0 = lStack_440;
      uStack_414 = CONCAT31(uStack_414._1_3_,uStack_1af);
      plVar17 = *(long **)(param_1 + 0x38);
      if (plVar17 < *(long **)(param_1 + 0x40)) {
        plVar17[2] = uStack_420;
        plVar17[1] = uStack_428;
        *plVar17 = (long)ppuStack_430;
        uStack_428 = 0;
        uStack_420 = 0;
        ppuStack_430 = (undefined8 ***)0x0;
        plVar17[4] = lStack_470;
        plVar17[3] = CONCAT44(uStack_414,iStack_418);
        plVar17[6] = lStack_460;
        plVar17[5] = lStack_468;
        plVar17[0xb] = lStack_438;
        plVar17[10] = lStack_440;
        plVar17[9] = lStack_448;
        plVar17[8] = (long)plStack_450;
        plVar17[7] = lStack_458;
        plVar17 = plVar17 + 0xc;
      }
      else {
        lVar18 = (long)plVar17 - *plVar16;
        uVar13 = (lVar18 >> 5) * -0x5555555555555555 + 1;
        if (0x2aaaaaaaaaaaaaa < uVar13) goto LAB_10a4cc348;
        lVar14 = (long)*(long **)(param_1 + 0x40) - *plVar16 >> 5;
        uVar15 = lVar14 * 0x5555555555555556;
        if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
          uVar15 = uVar13;
        }
        if (0x155555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
          uVar15 = 0x2aaaaaaaaaaaaaa;
        }
        plVar10 = plVar16;
        plStack_450 = plVar16;
        FUN_10a4f01c0();
        plVar8 = (long *)((long)plVar10 + lVar18);
        plVar8[2] = uStack_420;
        plVar8[1] = uStack_428;
        *plVar8 = (long)ppuStack_430;
        uStack_428 = 0;
        uStack_420 = 0;
        ppuStack_430 = (undefined8 ***)0x0;
        plVar8[4] = lStack_410;
        plVar8[3] = CONCAT44(uStack_414,iStack_418);
        plVar8[6] = lStack_400;
        plVar8[5] = lStack_408;
        plVar8[0xb] = lStack_3d8;
        plVar8[10] = lStack_3e0;
        plVar8[9] = lStack_3e8;
        plVar8[8] = (long)plStack_3f0;
        plVar8[7] = lStack_3f8;
        plVar17 = plVar8 + 0xc;
        lVar18 = (long)plVar8 + (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38));
        func_0x00010a4f0204(plVar16,*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x38),lVar18);
        lStack_470 = *(long *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = lVar18;
        *(long **)(param_1 + 0x38) = plVar17;
        lStack_458 = *(long *)(param_1 + 0x40);
        *(long **)(param_1 + 0x40) = plVar10 + uVar15 * 0xc;
        plVar8 = &lStack_470;
        lStack_468 = lStack_470;
        lStack_460 = lStack_470;
        func_0x00010a4f0354();
      }
      *(long **)(param_1 + 0x38) = plVar17;
      if (cStack_1b0 == '\x01') {
        __ZNSt3__16chrono12steady_clock3nowEv();
        *(long **)(*param_2 + 0xe0) = plVar8;
      }
      if ((long)uStack_420 < 0) {
        __ZdlPv(ppuStack_430);
      }
    }
  }
  else {
    plVar16 = (long *)*param_2 + 0x22;
    do {
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) break;
      uVar9 = *(undefined8 *)*param_2;
      func_0x0001094759b8(uVar9,plVar16 + 2);
    } while ((int)uVar9 == 0);
    *(bool *)param_1 = plVar16 == (long *)0x0;
  }
  iVar19 = (int)((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 5) * -0x55555555;
  if ((int)param_2[1] != iVar19) {
    func_0x00010ae02ecc(0,iVar19);
    ppuVar11 = &PTR_PTR_113302350;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_113302350);
    *(int *)(param_2 + 1) = iVar19;
  }
  if (plStack_2e0 != (long *)0x0) {
    plVar16 = plStack_2e0 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2e0);
    }
  }
  if (cStack_2e9 < '\0') {
    __ZdlPv(auStack_300[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a4cc348:
  FUN_10a4f01ac();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4cc350);
  (*pcVar6)();
}



/* Entry: 10a4cc3b8; end: 10a4cc55b;  */

void FUN_10a4cc3b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  func_0x00010937da58(param_1 + 0xd,param_2 + 0xd);
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  uVar5 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x16] = param_2[0x16];
  uVar5 = param_2[0x1c];
  uVar7 = param_2[0x1f];
  uVar6 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar5;
  param_1[0x1f] = uVar7;
  param_1[0x1e] = uVar6;
  param_1[0x20] = param_2[0x20];
  uVar7 = param_2[0x18];
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar7;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  lVar4 = param_2[0x23];
  uVar5 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar5;
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
  uVar5 = param_2[0x24];
  uVar7 = param_2[0x27];
  uVar6 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar5;
  param_1[0x27] = uVar7;
  param_1[0x26] = uVar6;
  func_0x000109460390(param_1 + 0x28,param_2 + 0x28);
  uVar5 = param_2[0x46];
  uVar7 = param_2[0x49];
  uVar6 = param_2[0x48];
  param_1[0x47] = param_2[0x47];
  param_1[0x46] = uVar5;
  param_1[0x49] = uVar7;
  param_1[0x48] = uVar6;
  uVar5 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x25a);
  *(undefined8 *)((long)param_1 + 0x262) = *(undefined8 *)((long)param_2 + 0x262);
  *(undefined8 *)((long)param_1 + 0x25a) = uVar5;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar4 = param_2[0x4f];
    uVar5 = param_2[0x4e];
    param_1[0x4f] = param_2[0x4f];
    param_1[0x4e] = uVar5;
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
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  FUN_10a4f010c(auStack_38,&uStack_21,param_2[0x22]);
  func_0x00010a4f002c(param_1 + 0x22,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a4cc55c; end: 10a4cc6b3;  */

void FUN_10a4cc55c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 uStack_31;
  
  uVar2 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  FUN_10ae03140(0,puVar5,uVar2);
  ppuVar7 = &PTR_PTR_1133023b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133023b8);
  uVar9 = *(undefined8 *)*param_1;
  FUN_10a5049e4(&uStack_60,&uStack_31,param_2);
  plVar6 = plStack_58;
  plStack_48 = plStack_58;
  uStack_50 = uStack_60;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  func_0x0001094759f0(uVar9,&uStack_50);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x00010596ff64(*param_1 + 0x100,param_2);
  return;
}



/* Entry: 10a4cc6b4; end: 10a4cc7cb;  */

void FUN_10a4cc6b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x118);
  while (lVar2 != 0) {
    FUN_10a4cc55c(param_1,*(long *)(lVar1 + 0x110) + 0x10);
    lVar1 = *param_1;
    lVar2 = *(long *)(lVar1 + 0x118);
  }
  return;
}



/* Entry: 10a4cc7cc; end: 10a4cd31b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4cc7cc(undefined8 param_1,undefined1 *param_2,long *******param_3,undefined4 param_4,
                  long *param_5,long ******param_6,long ******param_7,long ******param_8,
                  long *param_9,char param_10)

{
  long ******pppppplVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long ******pppppplVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  long *******ppppppplVar18;
  undefined **ppuVar19;
  long ******pppppplVar20;
  long lVar21;
  long *****ppppplVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined4 uStack_550;
  undefined8 uStack_54c;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_4b0 [8];
  undefined8 uStack_4a8;
  char cStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long *******ppppppplStack_478;
  long *******ppppppplStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  long lStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  long *******ppppppplStack_420;
  long *******ppppppplStack_418;
  undefined1 uStack_410;
  undefined6 uStack_40f;
  undefined1 uStack_409;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long ******pppppplStack_3d0;
  long ******pppppplStack_3c8;
  undefined8 uStack_3c0;
  long *****ppppplStack_3b8;
  long *****ppppplStack_3b0;
  long *****ppppplStack_3a8;
  long *****ppppplStack_3a0;
  long *****ppppplStack_398;
  long *****ppppplStack_390;
  char cStack_380;
  long *plStack_308;
  long lStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_218;
  long lStack_210;
  long ******pppppplStack_1b0;
  long ******pppppplStack_1a8;
  byte bStack_1a0;
  long ******pppppplStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  char cStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  undefined4 uStack_140;
  long *******appppppplStack_138 [3];
  long *******ppppppplStack_120;
  long ******pppppplStack_118;
  long ******pppppplStack_110;
  undefined8 uStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  undefined4 uStack_c0;
  undefined8 auStack_b8 [3];
  undefined4 uStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_10 == '\0') {
    *(undefined1 *)((long)*param_3 + 0xa9) = 0;
  }
  ppppppplVar16 = param_3;
  FUN_10a4cbc0c(param_3,param_5 + 2);
  if (**param_3 == (long *****)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    goto LAB_10a4cd168;
  }
  auStack_4b0[0] = 0;
  cStack_498 = '\0';
  ppppppplStack_420 = (long *******)0x0;
  ppppppplStack_418 = (long *******)0x0;
  uStack_410 = 0;
  uStack_40f = 0;
  uStack_409 = 0;
  ppppplVar22 = (*param_3)[0x22];
  if (ppppplVar22 != (long *****)0x0) {
    do {
      if (*(char *)((long)ppppplVar22 + 0x27) < '\0') {
        func_0x000107c3192c(&pppppplStack_190,ppppplVar22[2],ppppplVar22[3]);
      }
      else {
        pppppplStack_190 = (long ******)ppppplVar22[2];
        uStack_188 = SUB87(ppppplVar22[3],0);
        uStack_181 = (undefined1)((ulong)ppppplVar22[3] >> 0x38);
        uStack_180 = SUB87(ppppplVar22[4],0);
        cStack_179 = (char)((ulong)ppppplVar22[4] >> 0x38);
      }
      FUN_10ad03508(&ppppppplStack_120,&pppppplStack_190);
      if (cStack_179 < '\0') {
        __ZdlPv(pppppplStack_190);
      }
      plVar23 = param_9;
      FUN_10a504884(param_9,&ppppppplStack_120);
      pppppplVar20 = pppppplStack_118;
      ppppppplVar18 = ppppppplStack_120;
      ppppppplVar16 = ppppppplStack_418;
      if (param_9 + 1 == plVar23) {
        if (ppppppplStack_418 < (long *******)CONCAT17(uStack_409,CONCAT61(uStack_40f,uStack_410)))
        {
          if ((long)pppppplStack_110 < 0) {
            func_0x000107c3192c(ppppppplStack_418,ppppppplStack_120,pppppplStack_118);
          }
          else {
            ppppppplStack_418[2] = pppppplStack_110;
            ppppppplStack_418[1] = pppppplVar20;
            *ppppppplStack_418 = (long ******)ppppppplVar18;
          }
          ppppppplStack_418 = ppppppplVar16 + 3;
        }
        else {
          ppppppplVar16 = (long *******)&ppppppplStack_420;
          func_0x000107c281ec(ppppppplVar16,&ppppppplStack_120);
          ppppppplStack_418 = ppppppplVar16;
        }
      }
      if ((long)pppppplStack_110 < 0) {
        __ZdlPv(ppppppplStack_120);
      }
      ppppppplVar16 = ppppppplStack_418;
      ppppplVar22 = (long *****)*ppppplVar22;
      ppppppplVar18 = ppppppplStack_420;
    } while (ppppplVar22 != (long *****)0x0);
    for (; ppppppplVar18 != ppppppplVar16; ppppppplVar18 = ppppppplVar18 + 3) {
      FUN_10a4cc55c(param_3,ppppppplVar18);
    }
  }
  ppppppplStack_120 = (long *******)&ppppppplStack_420;
  FUN_10a0426d8(&ppppppplStack_120);
  FUN_10a4cbc0c(param_3,*param_3 + 1);
  plVar23 = (long *)*param_9;
  while (plVar23 != param_9 + 1) {
    if (**param_3 != (long *****)0x0) {
      if (*(char *)((long)plVar23 + 0x37) < '\0') {
        func_0x000107c3192c(&lStack_450,plVar23[4],plVar23[5]);
      }
      else {
        uStack_448 = plVar23[5];
        lStack_450 = plVar23[4];
        lStack_440 = plVar23[6];
      }
      FUN_10ad03508(auStack_438,&lStack_450);
      if (lStack_440 < 0) {
        __ZdlPv(lStack_450);
      }
      pppppplVar20 = *param_3 + 0x20;
      func_0x0001067e045c(pppppplVar20,auStack_438);
      if (pppppplVar20 == (long ******)0x0) {
        func_0x000107c2827c(*param_3 + 0x20,auStack_438,auStack_438);
        func_0x000109474d14(**param_3,auStack_438);
        uVar2 = plVar23[5];
        plVar25 = (long *)plVar23[4];
        if (-1 < (char)*(byte *)((long)plVar23 + 0x37)) {
          uVar2 = (ulong)*(byte *)((long)plVar23 + 0x37);
          plVar25 = plVar23 + 4;
        }
        FUN_10ae03140(0,plVar25,uVar2);
        ppuVar19 = &PTR_PTR_113302380;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar19,&PTR_PTR_113302380);
      }
      else {
        uStack_468 = 0;
        puStack_460 = (undefined8 *)0x0;
        puStack_458 = (undefined8 *)0x0;
        for (plVar25 = (long *)plVar23[9]; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
          if (*(char *)((long)plVar25 + 0x27) < '\0') {
            func_0x000107c3192c(&uStack_490,plVar25[2],plVar25[3]);
          }
          else {
            uStack_488 = plVar25[3];
            uStack_490 = plVar25[2];
            lStack_480 = plVar25[4];
          }
          FUN_10ad03508(&ppppppplStack_420,&uStack_490);
          ppppppplVar16 = (long *******)0x38;
          __Znwm();
          ppppppplVar18 = ppppppplVar16 + 1;
          *ppppppplVar18 = (long ******)0x0;
          ppppppplVar16[2] = (long ******)0x0;
          *ppppppplVar16 = (long ******)&PTR_DAT_110bb3748;
          ppppppplStack_478 = ppppppplVar16 + 3;
          *ppppppplStack_478 = (long ******)&PTR_FUN_110ba56f0;
          ppppppplVar16[5] = (long ******)ppppppplStack_418;
          ppppppplVar16[4] = (long ******)ppppppplStack_420;
          ppppppplVar16[6] = (long ******)CONCAT17(uStack_409,CONCAT61(uStack_40f,uStack_410));
          uStack_409 = 0;
          ppppppplStack_420 = (long *******)((ulong)ppppppplStack_420 & 0xffffffffffffff00);
          ppppppplStack_470 = ppppppplVar16;
          if (lStack_480 < 0) {
            __ZdlPv(uStack_490);
          }
          lVar21 = (long)(plVar23 + 0xc);
          FUN_10a504900(lVar21,plVar25 + 2);
          if (lVar21 == 0) {
            do {
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
              if (bVar14) {
                *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uStack_410 = 0;
            cStack_380 = '\0';
          }
          else {
            uStack_410 = *(undefined1 *)(lVar21 + 0x30);
            pppppplStack_190 = *(long *******)(lVar21 + 0x31);
            uStack_188 = (undefined7)*(undefined8 *)(lVar21 + 0x39);
            uStack_3f8 = *(undefined8 *)(lVar21 + 0x48);
            uStack_3e8 = *(undefined8 *)(lVar21 + 0x58);
            uStack_3f0 = *(undefined8 *)(lVar21 + 0x50);
            cStack_179 = (char)uStack_3f8;
            uStack_178 = (undefined7)((ulong)uStack_3f8 >> 8);
            uStack_181 = (undefined1)*(undefined8 *)(lVar21 + 0x40);
            uStack_180 = (undefined7)((ulong)*(undefined8 *)(lVar21 + 0x40) >> 8);
            uStack_169 = (undefined1)uStack_3e8;
            uStack_168 = (undefined7)((ulong)uStack_3e8 >> 8);
            uStack_171 = (undefined1)uStack_3f0;
            uStack_170 = (undefined7)((ulong)uStack_3f0 >> 8);
            pppppplStack_3c8 = *(long *******)(lVar21 + 0x78);
            pppppplStack_3d0 = *(long *******)(lVar21 + 0x70);
            ppppplStack_3b8 = *(long ******)(lVar21 + 0x88);
            uStack_3c0 = *(undefined8 *)(lVar21 + 0x80);
            ppppplStack_3a8 = *(long ******)(lVar21 + 0x98);
            ppppplStack_3b0 = *(long ******)(lVar21 + 0x90);
            ppppplStack_398 = *(long ******)(lVar21 + 0xa8);
            ppppplStack_3a0 = *(long ******)(lVar21 + 0xa0);
            uStack_3e0 = *(undefined8 *)(lVar21 + 0x60);
            uStack_161 = (undefined1)uStack_3e0;
            uStack_160 = (undefined7)((ulong)uStack_3e0 >> 8);
            ppppplStack_390 = *(long ******)(lVar21 + 0xb0);
            do {
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
              if (bVar14) {
                *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uStack_407 = uStack_188;
            uStack_40f = SUB86(pppppplStack_190,0);
            uStack_409 = (undefined1)((ulong)pppppplStack_190 >> 0x30);
            uStack_408 = (undefined1)((ulong)pppppplStack_190 >> 0x38);
            cStack_380 = '\x01';
            uStack_400 = uStack_181;
            uStack_3ff = uStack_180;
            pppppplStack_118 = pppppplStack_3d0;
            pppppplStack_110 = pppppplStack_3c8;
            uStack_108 = uStack_3c0;
            ppppplStack_100 = ppppplStack_3b8;
            ppppplStack_f8 = ppppplStack_3b0;
            ppppplStack_f0 = ppppplStack_3a8;
            ppppplStack_e8 = ppppplStack_3a0;
            ppppplStack_e0 = ppppplStack_398;
            ppppplStack_d8 = ppppplStack_390;
          }
          ppppppplStack_420 = ppppppplStack_478;
          ppppppplStack_418 = ppppppplVar16;
          if (puStack_460 < puStack_458) {
            *puStack_460 = ppppppplStack_478;
            puStack_460[1] = ppppppplVar16;
            *(undefined1 *)(puStack_460 + 2) = 0;
            uVar7 = uStack_3f8;
            *(undefined1 *)(puStack_460 + 0x14) = 0;
            if (cStack_380 == '\x01') {
              uVar5 = CONCAT17(uStack_409,CONCAT61(uStack_40f,uStack_410));
              uVar6 = CONCAT71(uStack_3ff,uStack_400);
              puStack_460[3] = CONCAT71(uStack_407,uStack_408);
              puStack_460[2] = uVar5;
              puStack_460[5] = uVar7;
              puStack_460[4] = uVar6;
              uVar5 = uStack_3e8;
              uVar7 = uStack_3f0;
              puStack_460[8] = uStack_3e0;
              puStack_460[7] = uVar5;
              puStack_460[6] = uVar7;
              ppppplVar11 = ppppplStack_398;
              ppppplVar10 = ppppplStack_3a0;
              ppppplVar9 = ppppplStack_3a8;
              ppppplVar8 = ppppplStack_3b0;
              ppppplVar22 = ppppplStack_3b8;
              uVar7 = uStack_3c0;
              puStack_460[0x12] = ppppplStack_390;
              puStack_460[0xf] = ppppplVar9;
              puStack_460[0xe] = ppppplVar8;
              puStack_460[0x11] = ppppplVar11;
              puStack_460[0x10] = ppppplVar10;
              puStack_460[0xd] = ppppplVar22;
              puStack_460[0xc] = uVar7;
              pppppplVar20 = pppppplStack_3d0;
              puStack_460[0xb] = pppppplStack_3c8;
              puStack_460[10] = pppppplVar20;
              *(undefined1 *)(puStack_460 + 0x14) = 1;
            }
            puStack_460 = puStack_460 + 0x16;
          }
          else {
            puVar17 = &uStack_468;
            func_0x000109476bcc(puVar17,&ppppppplStack_420);
            ppppppplVar16 = ppppppplStack_418;
            puStack_460 = puVar17;
            if (ppppppplStack_418 != (long *******)0x0) {
              ppppppplVar18 = ppppppplStack_418 + 1;
              do {
                pppppplVar20 = *ppppppplVar18;
                cVar4 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                if (bVar14) {
                  *ppppppplVar18 = (long ******)((long)pppppplVar20 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppppplVar20 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_418)[2])(ppppppplStack_418);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
              }
            }
          }
          ppppppplVar16 = ppppppplStack_470;
          if (ppppppplStack_470 != (long *******)0x0) {
            ppppppplVar18 = ppppppplStack_470 + 1;
            do {
              pppppplVar20 = *ppppppplVar18;
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
              if (bVar14) {
                *ppppppplVar18 = (long ******)((long)pppppplVar20 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppplVar20 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_470)[2])(ppppppplStack_470);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
            }
          }
        }
        func_0x000109474f78(*(undefined4 *)(plVar23 + 0x1a),**param_3,auStack_438,&uStack_468);
        func_0x000109474578(**param_3,auStack_438,*(int *)((long)plVar23 + 0xd4) != 0);
        func_0x0001094743a4(**param_3,auStack_438,plVar23 + 0x11,plVar23 + 0x14);
        func_0x0001094746ac(**param_3,auStack_438,plVar23 + 0x17);
        FUN_10a4f0440(&uStack_468);
      }
      if (cStack_421 < '\0') {
        __ZdlPv(auStack_438[0]);
      }
    }
    plVar25 = (long *)plVar23[1];
    plVar24 = plVar23;
    if ((long *)plVar23[1] == (long *)0x0) {
      do {
        plVar23 = (long *)plVar24[2];
        bVar14 = (long *)*plVar23 != plVar24;
        plVar24 = plVar23;
      } while (bVar14);
    }
    else {
      do {
        plVar23 = plVar25;
        plVar25 = (long *)*plVar23;
      } while ((long *)*plVar23 != (long *)0x0);
    }
  }
  if (cStack_498 == '\x01') {
    func_0x00010a22dfb0(auStack_4b0,uStack_4a8);
  }
  ppppppplStack_420 = *(long ********)(*param_5 + 0x10);
  FUN_10acdd0d0(&pppppplStack_190,&ppppppplStack_420,param_5 + 2);
  uVar15 = (int)param_5 + 0x10;
  FUN_10a0ec6f0();
  uVar3 = *(undefined4 *)(&UNK_10df04730 + (ulong)(uVar15 & 3) * 4);
  FUN_10a4caea0(&ppppppplStack_420,param_1,param_4,param_5,param_6,param_7,param_8,0);
  param_7 = param_6;
  if (((ulong)param_3[0xb] & 1) == 0) {
    pppppplStack_110 = pppppplStack_190;
    ppppplStack_f8 = (long *****)CONCAT17(uStack_171,uStack_178);
    ppppplStack_100 = (long *****)CONCAT17(cStack_179,uStack_180);
    ppppplStack_e8 = (long *****)CONCAT17(uStack_161,uStack_168);
    ppppplStack_f0 = (long *****)CONCAT17(uStack_169,uStack_170);
    ppppplStack_e0 = (long *****)CONCAT17(uStack_159,uStack_160);
    uStack_c0 = uStack_140;
    ppppplStack_d8 = ppppplStack_158;
    ppppplStack_c8 = ppppplStack_148;
    ppppplStack_d0 = ppppplStack_150;
    ppppppplStack_120 = param_3;
    func_0x00010937da58(auStack_b8,appppppplStack_138);
    pppppplVar20 = (long ******)0x58;
    uStack_a0 = uVar3;
    __Znwm();
    pppppplVar20[1] = (long *****)0x0;
    pppppplVar20[2] = (long *****)0x0;
    *pppppplVar20 = (long *****)&PTR_FUN_110bea168;
    pppppplVar20[3] = (long *****)FUN_10a504b34;
    pppppplVar20[4] = (long *****)&PTR_FUN_110bea1a8;
    param_7 = (long ******)0x90;
    __Znwm();
    *param_7 = (long *****)ppppppplStack_120;
    param_7[2] = (long *****)pppppplStack_110;
    param_7[5] = ppppplStack_f8;
    param_7[4] = ppppplStack_100;
    param_7[7] = ppppplStack_e8;
    param_7[6] = ppppplStack_f0;
    param_7[9] = ppppplStack_d8;
    param_7[8] = ppppplStack_e0;
    param_7[0xb] = ppppplStack_c8;
    param_7[10] = ppppplStack_d0;
    *(undefined4 *)(param_7 + 0xc) = uStack_c0;
    func_0x00010937da58(param_7 + 0xd,auStack_b8);
    *(undefined4 *)(param_7 + 0x10) = uStack_a0;
    pppppplVar20[5] = (long *****)param_7;
    param_3[9] = pppppplVar20 + 3;
    if (((ulong)param_3[0xb] & 1) == 0) {
      param_3[10] = pppppplVar20;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    else {
      param_7 = param_3[10];
      param_3[10] = pppppplVar20;
      if (param_7 != (long ******)0x0) {
        pppppplVar20 = param_7 + 1;
        do {
          ppppplVar22 = *pppppplVar20;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
          if (bVar14) {
            *pppppplVar20 = (long *****)((long)ppppplVar22 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppplVar22 == (long *****)0x0) {
          (*(code *)(*param_7)[2])(param_7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_7);
        }
      }
    }
    _free(auStack_b8[0]);
    if (((ulong)param_3[0xb] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10a4cd1a8);
      (*pcVar13)();
    }
  }
  pppppplVar20 = pppppplStack_1a8;
  pppppplStack_1b0 = param_3[9];
  param_8 = param_3[10];
  if (param_8 == (long ******)0x0) {
    param_8 = (long ******)0x0;
    if ((bStack_1a0 & 1) != 0) goto LAB_10a4ccff0;
    pppppplStack_1a8 = (long ******)0x0;
LAB_10a4cd058:
    bStack_1a0 = 1;
    param_8 = pppppplStack_1a8;
    pppppplVar12 = pppppplStack_1a8;
  }
  else {
    pppppplVar12 = param_8 + 1;
    do {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar14) {
        *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (bStack_1a0 == 0) {
      do {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar14) {
          *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
        pppppplStack_1a8 = param_8;
      } while (cVar4 != '\0');
      goto LAB_10a4cd058;
    }
    do {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar14) {
        *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_10a4ccff0:
    param_7 = pppppplVar20;
    pppppplVar12 = param_8;
    if (pppppplStack_1a8 != (long ******)0x0) {
      pppppplVar1 = pppppplStack_1a8 + 1;
      do {
        ppppplVar22 = *pppppplVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
        if (bVar14) {
          *pppppplVar1 = (long *****)((long)ppppplVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppppplVar22 == (long *****)0x0) {
        ppppplVar22 = *pppppplStack_1a8;
        pppppplStack_1a8 = param_8;
        (*(code *)ppppplVar22[2])(pppppplVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
        pppppplVar12 = pppppplStack_1a8;
      }
    }
  }
  pppppplStack_1a8 = pppppplVar12;
  if (param_8 != (long ******)0x0) {
    pppppplVar20 = param_8 + 1;
    do {
      ppppplVar22 = *pppppplVar20;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
      if (bVar14) {
        *pppppplVar20 = (long *****)((long)ppppplVar22 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppplVar22 == (long *****)0x0) {
      (*(code *)(*param_8)[2])(param_8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_8);
    }
  }
  FUN_10a4cbd0c(param_2,param_3,&ppppppplStack_420,param_9,param_5 + 2,0);
  pppppplVar20 = pppppplStack_1a8;
  if (((bStack_1a0 & 1) != 0) && (pppppplStack_1a8 != (long ******)0x0)) {
    pppppplVar12 = pppppplStack_1a8 + 1;
    do {
      ppppplVar22 = *pppppplVar12;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar14) {
        *pppppplVar12 = (long *****)((long)ppppplVar22 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppplVar22 == (long *****)0x0) {
      (*(code *)(*pppppplStack_1a8)[2])(pppppplStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
    }
  }
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  if (plStack_308 != (long *)0x0) {
    plVar23 = plStack_308 + 1;
    do {
      lVar21 = *plVar23;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar14) {
        *plVar23 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
    }
  }
  _free(ppppplStack_3b8);
  ppppppplVar16 = appppppplStack_138[0];
  _free();
LAB_10a4cd168:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __ZdlPv(param_7);
    __ZNSt3__119__shared_weak_countD2Ev(param_8);
    __ZdlPv();
    _free(auStack_b8[0]);
    func_0x000109458ce0(&ppppppplStack_420);
    _free(appppppplStack_138[0]);
    __Unwind_Resume();
    uStack_590 = 0;
    uStack_588 = 0;
    puStack_598 = &UNK_10f65ce7c;
    uStack_578 = 0xffffffffffffffff;
    uStack_580 = 0x200000019;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_550 = 0;
    uStack_54c = 0x13c00000124;
    uStack_540 = 0;
    uStack_538 = 0;
    *(undefined1 *)((long)ppppppplVar16 + 0x1ac) = 1;
    FUN_10a0050a8(ppppppplVar16 + 0x2d,&puStack_598);
    ppppppplVar18 = ppppppplVar16;
    FUN_10a0051e8(ppppppplVar16,uStack_580 & 0xffffffff,uStack_580._4_4_,uStack_54c._4_4_,
                  uStack_578 & 0xffffffff,uStack_578._4_4_);
    if (((ulong)ppppppplVar18 & 1) == 0) {
      func_0x0001098946ac(ppppppplVar16,puStack_598);
    }
    uStack_590 = 0;
    uStack_588 = 0;
    puStack_598 = &DAT_10f684ec4;
    uStack_578 = 0xffffffffffffffff;
    uStack_580 = 0x100000019;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_550 = 0;
    uStack_54c = 0x13c00000124;
    uStack_540 = 0;
    uStack_538 = 0;
    FUN_10a4cd470(ppppppplVar16,&puStack_598,0);
    uStack_590 = 0;
    uStack_588 = 0;
    puStack_598 = &UNK_10f65ce91;
    uStack_578 = 0xffffffffffffffff;
    uStack_580 = 0x100000019;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_550 = 0;
    uStack_54c = 0x13c00000124;
    uStack_540 = 0;
    uStack_538 = 0;
    FUN_10a4cd470();
    uStack_590 = 0;
    uStack_588 = 0;
    puStack_598 = &UNK_10f65ce96;
    uStack_578 = 0xffffffffffffffff;
    uStack_580 = 0x100000019;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_550 = 0;
    uStack_54c = 0x13c00000124;
    uStack_540 = 0;
    uStack_538 = 0;
    FUN_10a4cd470();
    FUN_10a003ff4();
    return;
  }
  return;
}



/* Entry: 10a4cd31c; end: 10a4cd46f;  */

void FUN_10a4cd31c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65ce7c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684ec4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4cd470(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65ce91;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4cd470();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65ce96;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4cd470();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a4cd470; end: 10a4cd513;  */

undefined8 * FUN_10a4cd470(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4cd514);
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



/* Entry: 10a4cd514; end: 10a4cd613;  */

undefined8 * FUN_10a4cd514(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 7) == 0) {
    func_0x000108a851e4(param_3,uStack_30 >> 3);
    if ((bStack_28 & 1) != 0) {
      param_3 = (undefined8 *)*param_3;
      _memcpy(param_3,uStack_38,uStack_30);
      return param_3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4cd584);
    (*pcVar1)();
  }
  FUN_10a324f10();
  *param_2 = &PTR_DAT_110be7a28;
  FUN_10a505720(param_2 + 2);
  FUN_10a5056f8(param_2 + 1);
  return param_2;
}



/* Entry: 10a4cd614; end: 10a4cd663;  */

ulong FUN_10a4cd614(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_2 + 0x130) & 1) != 0) {
    uVar4 = param_2 + 0x118;
    FUN_10a4caa9c();
    uVar1 = 0x100;
    if (uVar4 >> 0x20 != 0) {
      uVar1 = 0x900;
    }
    uVar2 = uVar1 | 0x20;
    if ((int)uVar4 < 1) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 0x200;
    if ((int)uVar4 < 2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4cd664);
  (*pcVar3)();
}



/* Entry: 10a4cd664; end: 10a4cd753;  */

void FUN_10a4cd664(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if ((*(byte *)(param_2 + 0x130) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4cd738);
    (*pcVar1)();
  }
  uVar2 = param_2 + 0x118;
  FUN_10a4caa9c();
  if ((int)uVar2 < 2) {
    if ((int)uVar2 != 1) goto LAB_10a4cd6fc;
  }
  else {
    uStack_38 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    uStack_40 = 0;
    uStack_34 = 0x1000000;
    uStack_30 = 0;
    uStack_24 = 0;
    FUN_10a051998(param_2 + 0x138,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
  }
  if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
    uVar3 = 0;
    *(undefined1 *)(param_2 + 0x199) = 1;
  }
  else {
    uVar3 = *(undefined1 *)(param_2 + 0x198);
  }
  *(undefined1 *)(param_2 + 0x198) = uVar3;
LAB_10a4cd6fc:
  if (uVar2 >> 0x20 != 0) {
    lStack_58 = 0x4014000000000000;
    lStack_50 = 1000;
    uStack_48 = CONCAT71(uStack_48._1_7_,3);
    FUN_10a0378a8(param_2 + 0x278,&lStack_58);
  }
  return;
}



/* Entry: 10a4cd754; end: 10a4cd793;  */

void FUN_10a4cd754(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar2 = *plVar1;
  lVar3 = *(long *)(lVar2 + 0x118);
  while (lVar3 != 0) {
    FUN_10a4cc55c(plVar1,*(long *)(lVar2 + 0x110) + 0x10);
    lVar2 = *plVar1;
    lVar3 = *(long *)(lVar2 + 0x118);
  }
  return;
}



/* Entry: 10a4cd794; end: 10a4cdb43;  */

void FUN_10a4cd794(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a4;
  undefined8 **ppuStack_a0;
  long *plStack_98;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 ***pppuStack_70;
  long *plStack_68;
  
  if ((*(byte *)(param_5 + 0x130) & 1) == 0) goto LAB_10a4cdad8;
  uVar4 = *(undefined1 *)(param_5 + 1);
  uStack_a4 = 0;
  uStack_b0 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uStack_74 = 7;
  pppuStack_140 = (undefined8 ***)&uStack_78;
  lVar12 = param_1 + 0x10;
  uStack_78 = uVar3;
  FUN_10a505794(lVar12,&uStack_78,&UNK_10dd5b8f9,&pppuStack_140,&pppuStack_70);
  plVar13 = (long *)(lVar12 + 0x18);
  puStack_88 = (undefined8 *)*plVar13;
  if (puStack_88 != (undefined8 *)0x0) goto LAB_10a4cd8bc;
  FUN_10a1b498c(&pppuStack_140,uVar3,7);
  func_0x00010a343394(plVar13,&pppuStack_140);
  plVar2 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar11 = *plVar13;
  FUN_10a0ee900(&pppuStack_140,&UNK_10f65ce9b,0x27);
  plStack_68 = (long *)(long)uStack_130._7_1_;
  if ((long)plStack_68 < 0) {
    pppuStack_70 = pppuStack_140;
    plStack_68 = plStack_138;
    if (lVar11 != 0) {
      __ZdlPv();
      goto LAB_10a4cd8b8;
    }
  }
  else {
    pppuStack_70 = &pppuStack_140;
    if (lVar11 != 0) {
LAB_10a4cd8b8:
      puStack_88 = (undefined8 *)*plVar13;
LAB_10a4cd8bc:
      plVar13 = *(long **)(lVar12 + 0x20);
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plStack_80 = plVar13;
      (**(code **)*puStack_88)(&ppuStack_a0,puStack_88,param_2,&uStack_a4,&uStack_b0);
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          lVar12 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined1 *)(*(long *)(param_4 + 0x218) + 0x14);
      uStack_e8 = *(undefined8 *)(param_4 + 0x1e0);
      uStack_f0 = *(undefined8 *)(param_4 + 0x1d8);
      uStack_e0 = *(undefined8 *)(param_4 + 0x1e8);
      uStack_108 = *(undefined8 *)(param_4 + 0x1c0);
      uStack_110 = *(undefined8 *)(param_4 + 0x1b8);
      uStack_f8 = *(undefined8 *)(param_4 + 0x1d0);
      uStack_100 = *(undefined8 *)(param_4 + 0x1c8);
      uStack_d8 = (undefined4)*(undefined8 *)(param_4 + 0x1f0);
      uStack_cc = *(undefined8 *)(param_4 + 0x1fc);
      uStack_d4 = (undefined4)*(undefined8 *)(param_4 + 500);
      uStack_d0 = (undefined4)((ulong)*(undefined8 *)(param_4 + 500) >> 0x20);
      uStack_128 = *(undefined8 *)(param_4 + 0x1a0);
      uStack_130 = *(undefined8 *)(param_4 + 0x198);
      uStack_118 = *(undefined8 *)(param_4 + 0x1b0);
      uStack_120 = *(undefined8 *)(param_4 + 0x1a8);
      plStack_138 = plStack_98;
      pppuStack_140 = (undefined8 ***)ppuStack_a0;
      uVar14 = *(undefined8 *)(param_4 + 0x20);
      ppuStack_a0 = (undefined8 **)0x0;
      plStack_98 = (long *)0x0;
      uStack_c0 = *(undefined8 *)(param_4 + 0x208);
      plStack_b8 = *(long **)(param_4 + 0x210);
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = *plVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_10a4cc7cc(uVar14,&uStack_190,uVar10,uVar5,&pppuStack_140,*(undefined8 *)(param_4 + 0xa8),
                    *(undefined8 *)(param_4 + 0xd0),*(undefined8 *)(param_4 + 0xe8),param_5 + 0x118,
                    uVar4);
      plVar13 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
        do {
          lVar12 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar2 = plStack_138 + 1;
        do {
          lVar12 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar12 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      puVar9 = (undefined8 *)0x48;
      __Znwm();
      puVar9[1] = uStack_188;
      *puVar9 = uStack_190;
      puVar9[3] = uStack_178;
      puVar9[2] = uStack_180;
      puVar9[5] = uStack_168;
      puVar9[4] = uStack_170;
      puVar9[7] = uStack_158;
      puVar9[6] = puStack_160;
      puVar9[8] = uStack_150;
      puStack_160 = (undefined8 **)0x0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      func_0x00010a5026a0(param_4 + 0xa0);
      func_0x00010a5026a0(&uStack_148,0);
      pppuStack_140 = (undefined8 ***)&puStack_160;
      func_0x00010a4f03b4(&pppuStack_140);
      return;
    }
  }
  FUN_10a0edfc4(&pppuStack_70);
LAB_10a4cdad8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4cdadc);
  (*pcVar8)();
}



/* Entry: 10a4cdb44; end: 10a4cdcf7;  */

void FUN_10a4cdb44(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 8);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a4cc6f8(lVar5 + 0x38,&uStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a4cdcf8; end: 10a4cdd0f;  */

undefined * FUN_10a4cdcf8(void)

{
  return &UNK_110be7b18;
}


