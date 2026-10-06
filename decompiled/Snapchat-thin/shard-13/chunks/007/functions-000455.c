/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa9cd9c; end: 10aa9cdbf;  */

void FUN_10aa9cd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aa9a3d4(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  uVar5 = NEON_ucvtf((ulong)*(uint *)(plVar3 + 0x16));
  *extraout_x8 = 3;
  *(undefined8 *)(extraout_x8 + 2) = uVar5;
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



/* Entry: 10aa9cdc0; end: 10aa9ce7b;  */

void FUN_10aa9cdc0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9a3d4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)(param_2 + 0x16));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10aa9ce7c; end: 10aa9cf5b;  */

void FUN_10aa9ce7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa99e7c(param_2,param_3);
  FUN_10aa9cf5c(param_5);
  func_0x00010a137904(param_2,param_4);
  if (1 < (uint)param_2) {
    FUN_10a00946c(&UNK_10f68c95b);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa9cf48);
    (*pcVar1)();
  }
  *(uint *)(plVar4 + 0x16) = (uint)param_2;
  FUN_10aa79c8c(plVar4);
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



/* Entry: 10aa9cf5c; end: 10aa9d067;  */

void FUN_10aa9cf5c(ulong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar2 = (undefined8 *)0x1;
  uVar3 = 0;
  FUN_10a052ee0(1,0);
  if (puVar2[2] != puVar2[3]) {
    uStack_18 = 0x10aa9cf80;
    puStack_28 = (undefined8 *)(double)(param_1 & 0xffffffff);
    aiStack_30[0] = 3;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_10a005308(puVar2[3] + -8,*puVar2,uVar3,aiStack_30);
    if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
      (**(code **)*puStack_28)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa9cff4);
  (*pcVar1)();
}



/* Entry: 10aa9d068; end: 10aa9d0bf;  */

long FUN_10aa9d068(long param_1)

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



/* Entry: 10aa9d0c0; end: 10aa9d0cf;  */

void FUN_10aa9d0c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40288;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa9d0d0; end: 10aa9d0ef;  */

void FUN_10aa9d0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40288;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa9d0f0; end: 10aa9d0ff;  */

void FUN_10aa9d0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa9d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa9d100; end: 10aa9d1a7;  */

undefined8 * FUN_10aa9d100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c402d8;
  (**(code **)param_1[9])();
  func_0x00010a43c62c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa9d1a8; end: 10aa9d20b;  */

bool FUN_10aa9d1a8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8f) {
    iVar1 = 0xe4f0460;
    _memcmp(&UNK_10e4f0460);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa9d20c; end: 10aa9d32b;  */

void FUN_10aa9d20c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68c0c1);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10aa9d32c; end: 10aa9d33b;  */

undefined1  [16] FUN_10aa9d32c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8f;
  auVar1._0_8_ = &UNK_10e4f0460;
  return auVar1;
}



/* Entry: 10aa9d33c; end: 10aa9d34b;  */

void FUN_10aa9d33c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_2;
  func_0x000105277f8c();
  lVar2 = *param_2;
  *param_2 = (long)plVar1;
  if (lVar2 != 0) {
    func_0x00010a004e5c(lVar2 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa9d34c; end: 10aa9d387;  */

void FUN_10aa9d34c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a004e5c(lVar1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa9d388; end: 10aa9d3d7;  */

void FUN_10aa9d388(void)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined4 auStack_a0 [2];
  undefined1 auStack_98 [8];
  int aiStack_90 [2];
  long lStack_88;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined ***pppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  puVar5 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x00010a7d2cf0();
  puVar6 = puVar5;
  puVar7 = (undefined8 *)PTR___ZTISt16invalid_argument_110352248;
  plVar8 = (long *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
  ___cxa_throw();
  ___cxa_free_exception(puVar5);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_80,puVar6 + 1,*puVar6);
  func_0x000109884820(&puStack_b8,&ppuStack_80,*puVar6);
  if (ppuStack_80 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_80)();
  }
  (**(code **)(*(long *)*puVar6 + 0x30))(&puStack_c0);
  plVar10 = (long *)*puVar6;
  uVar2 = puVar7[1];
  puVar6 = (undefined8 *)*puVar7;
  if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)puVar7 + 0x17);
    puVar6 = puVar7;
  }
  (**(code **)(*plVar10 + 0x128))(auStack_98,plVar10,puVar6,uVar2);
  auStack_a0[0] = 6;
  lVar9 = *plVar8;
  plStack_78 = (long *)plVar8[1];
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_80 = (undefined8 **)0x0;
  if (lVar9 != 0) {
    ppuStack_80 = (undefined8 **)(lVar9 + 0x10);
  }
  ppuStack_60 = &PTR_DAT_110bd9eb8;
  func_0x000109899de4(aiStack_90,plVar10,&ppuStack_80,&ppuStack_60,0,0);
  plVar8 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  ppuStack_60 = (undefined **)auStack_a0;
  uStack_58 = 2;
  (**(code **)(*plVar10 + 0x58))(plVar10);
  ppuStack_80 = &puStack_b8;
  plStack_78 = plVar10;
  puStack_70 = (undefined1 *)&puStack_c0;
  pppuStack_68 = &ppuStack_60;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar9 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_90 + lVar9)) &&
       (*(undefined8 **)((long)&lStack_88 + lVar9) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_88 + lVar9))();
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != -0x20);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10aa9d3d8; end: 10aa9d653;  */

void FUN_10aa9d3d8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
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
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar8 = (long *)*param_1;
  uVar3 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  (**(code **)(*plVar8 + 0x128))(auStack_78,plVar8,puVar6,uVar3);
  auStack_80[0] = 6;
  lVar7 = *param_3;
  plStack_58 = (long *)param_3[1];
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_60 = (undefined8 **)0x0;
  if (lVar7 != 0) {
    ppuStack_60 = (undefined8 **)(lVar7 + 0x10);
  }
  ppuStack_40 = &PTR_DAT_110bd9eb8;
  func_0x000109899de4(aiStack_70,plVar8,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = (undefined **)auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar8;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar7 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar7)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar7) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar7))();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10aa9d654; end: 10aa9d68b;  */

long FUN_10aa9d654(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a0d74a8(param_1 + 0x28);
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



/* Entry: 10aa9d68c; end: 10aa9d69b;  */

void FUN_10aa9d68c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
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
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puVar6 = (undefined8 *)*puVar7;
  func_0x000109884c0c(&ppuStack_60,puVar6 + 1,*puVar6);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar6);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar6 + 0x30))(&puStack_a0);
  plVar9 = (long *)*puVar6;
  uVar2 = puVar7[3];
  plVar5 = (long *)puVar7[2];
  if (-1 < (char)*(byte *)((long)puVar7 + 0x27)) {
    uVar2 = (ulong)*(byte *)((long)puVar7 + 0x27);
    plVar5 = puVar7 + 2;
  }
  (**(code **)(*plVar9 + 0x128))(auStack_78,plVar9,plVar5,uVar2);
  auStack_80[0] = 6;
  lVar8 = puVar7[5];
  plStack_58 = (long *)puVar7[6];
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_60 = (undefined8 **)0x0;
  if (lVar8 != 0) {
    ppuStack_60 = (undefined8 **)(lVar8 + 0x10);
  }
  ppuStack_40 = &PTR_DAT_110bd9eb8;
  func_0x000109899de4(aiStack_70,plVar9,&ppuStack_60,&ppuStack_40,0,0);
  plVar5 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  ppuStack_40 = (undefined **)auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar9 + 0x58))(plVar9);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar9;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar8 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar8)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar8))();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10aa9d69c; end: 10aa9d6e7;  */

void FUN_10aa9d69c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a0d74a8(lVar1 + 0x28);
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



/* Entry: 10aa9d6e8; end: 10aa9d6ff;  */

void FUN_10aa9d6e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aa9d700; end: 10aa9d78f;  */

void FUN_10aa9d700(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10aa9d700(*param_1);
    FUN_10aa9d700(param_1[1]);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(param_1[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10aa9d790; end: 10aa9d88b;  */

undefined1  [16] FUN_10aa9d790(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c41ae8;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c41ae8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa9d88c; end: 10aa9d8df;  */

ulong FUN_10aa9d88c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10aa9d8e0,0);
  }
  return param_1;
}



/* Entry: 10aa9d8e0; end: 10aa9da6b;  */

void FUN_10aa9d8e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
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
      if (*(char *)((long)plVar6 + 0x2f) < '\0') {
        func_0x000107c3192c(&stack0xffffffffffffffa0,plVar6[3],plVar6[4]);
      }
      else {
        in_stack_ffffffffffffffa8 = plVar6[4];
        in_stack_ffffffffffffffa0 = (undefined1 *)plVar6[3];
        in_stack_ffffffffffffffb0 = plVar6[5];
      }
      puVar1 = in_stack_ffffffffffffffa0;
      if (-1 < (long)in_stack_ffffffffffffffb0) {
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
        puVar1 = &stack0xffffffffffffffa0;
      }
      (**(code **)(*param_2 + 0x128))
                (&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
      if ((long)in_stack_ffffffffffffffb0 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa0);
      }
      plVar5 = plVar4 + 0x4b;
      lVar8 = plVar4[0x59];
      uVar9 = lVar8 - 1;
      plVar4[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar5[lVar8 + 2];
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      lVar8 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar8;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar8 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar10 >> 0x3c == 0) {
              lVar3 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar8,lVar11);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar10 * 0x10;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar9 < uVar15) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar13 != lVar8) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar9;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa9da40);
  (*pcVar2)();
}



/* Entry: 10aa9da6c; end: 10aa9db27;  */

void FUN_10aa9da6c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d243,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa9db28);
  (*pcVar4)();
}



/* Entry: 10aa9db28; end: 10aa9dc6b;  */

void FUN_10aa9db28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10aa7d880(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  func_0x00010aa9dcd4(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10aa9dc6c; end: 10aa9dd6f;  */

void FUN_10aa9dc6c(undefined **param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f1a8;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar7 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
  puVar2 = *param_3;
  plStack_48 = (long *)param_3[1];
  *param_3 = (undefined *)0x0;
  param_3[1] = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puStack_50 = puVar2 + 0x10;
  }
  ppuStack_58 = &PTR_DAT_110c41a40;
  func_0x000109899de4(puVar7,param_2,&puStack_50,&ppuStack_58,0,0);
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10aa9dd70; end: 10aa9e29f;  */

void FUN_10aa9dd70(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong unaff_x27;
  long **pplStack_f0;
  long *plStack_e8;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long **pplStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aa9e2a0(param_5);
  func_0x000109898570(auStack_d8,param_2,param_4);
  FUN_10aa9e2c4(&pplStack_f0,param_2,param_4 + 0x10);
  if (pplStack_f0 == (long **)0x0) {
    FUN_10a00946c(&UNK_10f68cb8a);
LAB_10aa9e1fc:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa9e200);
    (*pcVar3)();
  }
  FUN_10aa7daa0(&plStack_90,auStack_d8);
  if ((char)lStack_70 == '\x01') {
    if ((pplStack_f0 == (long **)0x0) ||
       (___dynamic_cast(pplStack_f0,&PTR_DAT_110c41a40,&PTR_DAT_110c3f548,0x38),
       pplStack_f0 == (long **)0x0)) {
      pplStack_a0 = (long **)0x0;
      plStack_98 = (long *)0x0;
      FUN_10a00946c(&UNK_10f68cbc9);
      goto LAB_10aa9e1fc;
    }
    plStack_98 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar13 = plStack_e8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar13 = plVar6 + 0xf;
    uVar19 = plVar6[0x10];
    pplStack_a0 = pplStack_f0;
    if (uVar19 != 0) {
      uVar7 = uVar19 - 1;
      if ((uVar19 & uVar7) == 0) {
        unaff_x27 = uVar7 & uStack_78;
      }
      else {
        unaff_x27 = uStack_78;
        if (uVar19 <= uStack_78) {
          uVar11 = 0;
          if (uVar19 != 0) {
            uVar11 = uStack_78 / uVar19;
          }
          unaff_x27 = uStack_78 - uVar11 * uVar19;
        }
      }
      puVar10 = *(undefined8 **)(*plVar13 + unaff_x27 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar17 = (long *)*puVar10; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
          uVar11 = plVar17[1];
          if (uVar11 == uStack_78) {
            if (plVar17[5] == uStack_78) goto LAB_10aa9e100;
          }
          else {
            if ((uVar19 & uVar7) == 0) {
              uVar11 = uVar11 & uVar7;
            }
            else if (uVar19 <= uVar11) {
              uVar9 = 0;
              if (uVar19 != 0) {
                uVar9 = uVar11 / uVar19;
              }
              uVar11 = uVar11 - uVar9 * uVar19;
            }
            if (uVar11 != unaff_x27) break;
          }
        }
      }
    }
    plVar17 = (long *)0x40;
    __Znwm();
    lStack_b0 = 0;
    *plVar17 = 0;
    plVar17[1] = uStack_78;
    plStack_c0 = plVar17;
    plStack_b8 = plVar13;
    if (uStack_80 < 0) {
      func_0x000107c3192c(plVar17 + 2,plStack_90,lStack_88);
    }
    else {
      plVar17[3] = lStack_88;
      plVar17[2] = (long)plStack_90;
      plVar17[4] = uStack_80;
    }
    plVar17[6] = 0;
    plVar17[7] = 0;
    plVar17[5] = uStack_78;
    lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
    if ((uVar19 == 0) || (*(float *)(plVar6 + 0x13) * (float)uVar19 < (float)(plVar6[0x12] + 1))) {
      uVar7 = 1;
      if (2 < uVar19) {
        uVar7 = (ulong)((uVar19 & uVar19 - 1) != 0);
      }
      uVar7 = uVar7 | uVar19 << 1;
      uVar19 = (ulong)((float)(plVar6[0x12] + 1) / *(float *)(plVar6 + 0x13));
      if (uVar7 <= uVar19) {
        uVar7 = uVar19;
      }
      FUN_10aaa1230(plVar13,uVar7);
      uVar19 = plVar6[0x10];
      if ((uVar19 & uVar19 - 1) == 0) {
        unaff_x27 = uVar19 - 1 & uStack_78;
      }
      else {
        unaff_x27 = uStack_78;
        if (uVar19 <= uStack_78) {
          uVar7 = 0;
          if (uVar19 != 0) {
            uVar7 = uStack_78 / uVar19;
          }
          unaff_x27 = uStack_78 - uVar7 * uVar19;
        }
      }
    }
    lVar8 = *plVar13;
    plVar12 = *(long **)(lVar8 + unaff_x27 * 8);
    if (plVar12 == (long *)0x0) {
      plVar12 = plVar6 + 0x11;
      *plVar17 = *plVar12;
      *plVar12 = (long)plVar17;
      *(long **)(lVar8 + unaff_x27 * 8) = plVar12;
      if (*plVar17 != 0) {
        uVar7 = *(ulong *)(*plVar17 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar7 = uVar7 & uVar19 - 1;
        }
        else if (uVar19 <= uVar7) {
          uVar11 = 0;
          if (uVar19 != 0) {
            uVar11 = uVar7 / uVar19;
          }
          uVar7 = uVar7 - uVar11 * uVar19;
        }
        *(long **)(*plVar13 + uVar7 * 8) = plVar17;
      }
    }
    else {
      *plVar17 = *plVar12;
      *plVar12 = (long)plVar17;
    }
    plVar6[0x12] = plVar6[0x12] + 1;
LAB_10aa9e100:
    func_0x00010aa7d6b4(plVar17 + 6,&pplStack_a0);
    plVar6 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar13 = plStack_98 + 1;
      do {
        lVar8 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (((char)lStack_70 == '\x01') && (uStack_80._7_1_ < '\0')) goto LAB_10aa9e15c;
  }
  else {
    FUN_10a0d09b4(&plStack_c0,auStack_d8);
    plVar6 = plVar6 + 0x14;
    pplStack_a0 = &plStack_c0;
    FUN_10aaa1834(plVar6,&plStack_c0,&UNK_10dd5b8f9,&pplStack_a0,(long)&uStack_68 + 7);
    if (plStack_e8 != (long *)0x0) {
      plVar13 = plStack_e8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar13 = (long *)plVar6[7];
    plVar6[7] = (long)plStack_e8;
    plVar6[6] = (long)pplStack_f0;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plStack_90 = plStack_c0;
    if (lStack_b0 < 0) {
LAB_10aa9e15c:
      __ZdlPv(plStack_90);
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar6 = plStack_e8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar19 = lVar8 - 1;
  plVar5[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar6[lVar8 + 2];
    if (plVar5[0x5a] == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar19) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar16 = plVar5[0x4c];
  lVar14 = lVar16 - lVar8;
  uVar7 = lVar14 >> 4;
  if (uVar7 < uVar19) {
    uVar11 = uVar19 - uVar7;
    lVar18 = plVar5[0x4d];
    if ((ulong)(lVar18 - lVar16 >> 4) < uVar11) {
      if (uVar19 >> 0x3c == 0) {
        uVar9 = lVar18 - lVar8 >> 3;
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        uStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar14;
          _bzero(lVar16,uVar11 * 0x10);
          lVar15 = lVar16 + uVar7 * -0x10;
          _memcpy(lVar15,lVar8,lVar14);
          *plVar6 = lVar15;
          plVar5[0x4c] = lVar16 + uVar11 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar8;
          uStack_80 = lVar8;
          uStack_78 = lVar8;
          lStack_70 = lVar18;
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
    _bzero(lVar16,uVar11 * 0x10);
    plVar5[0x4c] = lVar16 + uVar11 * 0x10;
  }
  else if (uVar19 < uVar7) {
    lVar8 = lVar8 + uVar19 * 0x10;
    while (lVar16 != lVar8) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar19;
  return;
}



/* Entry: 10aa9e2a0; end: 10aa9e2c3;  */

void FUN_10aa9e2a0(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
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
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c41a40,0x10), lStack_40 != 0)) {
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa9e3ac);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10aa9e2c4; end: 10aa9e3bf;  */

void FUN_10aa9e2c4(long *param_1,long param_2,int *param_3)

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
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c41a40,0x10), lStack_30 != 0)) {
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa9e3ac);
  (*pcVar3)();
}



/* Entry: 10aa9e3c0; end: 10aa9ea83;  */

/* WARNING: Removing unreachable block (ram,0x00010aa9e8e4) */
/* WARNING: Removing unreachable block (ram,0x00010aa9e8e8) */
/* WARNING: Removing unreachable block (ram,0x00010aa9e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010aa9e8f8) */
/* WARNING: Removing unreachable block (ram,0x00010aa9e8fc) */

void FUN_10aa9e3c0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lStack_f8;
  long *plStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aa9ea84(param_5);
  func_0x000109898570(auStack_e8,param_2,param_4);
  FUN_10aa9e2c4(&lStack_f8,param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 7) {
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x28));
    plVar9 = param_2;
    plStack_80 = plVar15;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_80);
    if ((int)plVar9 != 0) {
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar15[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar15 = plStack_80,
         lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa9e9bc;
      }
      plStack_80 = (long *)0x0;
      lStack_b8 = CONCAT44(lStack_b8._4_4_,7);
      plStack_b0 = plVar15;
      plStack_c0 = param_2;
      FUN_10a688ac0(&lStack_a0,&plStack_c0,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)lStack_b8) && (plStack_b0 != (long *)0x0)) {
        (**(code **)*plStack_b0)();
      }
    }
    if (plStack_80 != (long *)0x0) {
      (**(code **)*plStack_80)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar20 = plVar9 + 1;
      *plVar20 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110c40348;
      plVar15 = plVar9 + 3;
      plVar9[4] = (long)plStack_98;
      *plVar15 = lStack_a0;
      if (plStack_98 != (long *)0x0) {
        plStack_98 = (long *)((long)plStack_98 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
          if (bVar3) {
            *plStack_98 = *plStack_98 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9[6] = (long)plStack_88;
      plVar9[5] = (long)plStack_90;
      if (plStack_88 != (long *)0x0) {
        plStack_88 = plStack_88 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
          if (bVar3) {
            *plStack_88 = *plStack_88 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&lStack_a0);
      plStack_d0 = plVar15;
      plStack_c8 = plVar9;
      if (lStack_f8 == 0) {
        FUN_10a00946c(&UNK_10f68cb38);
        goto LAB_10aa9e9bc;
      }
      lStack_a0 = lStack_f8;
      plStack_98 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar16 = plStack_f0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *plVar20 = *plVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_90 = plVar15;
      plStack_88 = plVar9;
      FUN_10a0d09b4(&plStack_c0,auStack_e8);
      plVar16 = plVar7 + 0x19;
      plVar22 = (long *)plVar7[0x1a];
      if (plVar22 != (long *)0x0) {
        uVar10 = (long)plVar22 - 1;
        if (((ulong)plVar22 & uVar10) == 0) {
          plVar15 = (long *)(uVar10 & (ulong)plStack_a8);
        }
        else {
          plVar15 = plStack_a8;
          if (plVar22 <= plStack_a8) {
            uVar14 = 0;
            if (plVar22 != (long *)0x0) {
              uVar14 = (ulong)plStack_a8 / (ulong)plVar22;
            }
            plVar15 = (long *)((long)plStack_a8 - uVar14 * (long)plVar22);
          }
        }
        puVar12 = *(undefined8 **)(*plVar16 + (long)plVar15 * 8);
        if (puVar12 != (undefined8 *)0x0) {
          for (plVar19 = (long *)*puVar12; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            plVar13 = (long *)plVar19[1];
            if (plVar13 == plStack_a8) {
              if ((long *)plVar19[5] == plStack_a8) goto LAB_10aa9e7dc;
            }
            else {
              if (((ulong)plVar22 & uVar10) == 0) {
                plVar13 = (long *)((ulong)plVar13 & uVar10);
              }
              else if (plVar22 <= plVar13) {
                uVar14 = 0;
                if (plVar22 != (long *)0x0) {
                  uVar14 = (ulong)plVar13 / (ulong)plVar22;
                }
                plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar22);
              }
              if (plVar13 != plVar15) break;
            }
          }
        }
      }
      plVar19 = (long *)0x50;
      __Znwm();
      plVar13 = plStack_b0;
      lStack_70 = 1;
      *plVar19 = 0;
      plVar19[1] = (long)plStack_a8;
      plVar19[3] = lStack_b8;
      plVar19[2] = (long)plStack_c0;
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      plStack_b0 = (long *)0x0;
      plVar19[4] = (long)plVar13;
      plVar19[5] = (long)plStack_a8;
      plVar19[7] = 0;
      plVar19[6] = 0;
      plVar19[9] = 0;
      plVar19[8] = 0;
      plStack_80 = plVar19;
      plStack_78 = plVar16;
      if ((plVar22 == (long *)0x0) ||
         (*(float *)(plVar7 + 0x1d) * (float)plVar22 < (float)(plVar7[0x1c] + 1))) {
        uVar10 = 1;
        if ((long *)0x2 < plVar22) {
          uVar10 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
        }
        uVar10 = uVar10 | (long)plVar22 << 1;
        uVar14 = (ulong)((float)(plVar7[0x1c] + 1) / *(float *)(plVar7 + 0x1d));
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        FUN_10aaa161c(plVar16,uVar10);
        plVar22 = (long *)plVar7[0x1a];
        if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
          plVar15 = (long *)((long)plVar22 - 1U & (ulong)plStack_a8);
        }
        else {
          plVar15 = plStack_a8;
          if (plVar22 <= plStack_a8) {
            uVar10 = 0;
            if (plVar22 != (long *)0x0) {
              uVar10 = (ulong)plStack_a8 / (ulong)plVar22;
            }
            plVar15 = (long *)((long)plStack_a8 - uVar10 * (long)plVar22);
          }
        }
      }
      lVar8 = *plVar16;
      plVar13 = *(long **)(lVar8 + (long)plVar15 * 8);
      if (plVar13 == (long *)0x0) {
        plVar13 = plVar7 + 0x1b;
        *plVar19 = *plVar13;
        *plVar13 = (long)plVar19;
        *(long **)(lVar8 + (long)plVar15 * 8) = plVar13;
        if (*plVar19 != 0) {
          plVar15 = *(long **)(*plVar19 + 8);
          if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
            plVar15 = (long *)((ulong)plVar15 & (long)plVar22 - 1U);
          }
          else if (plVar22 <= plVar15) {
            uVar10 = 0;
            if (plVar22 != (long *)0x0) {
              uVar10 = (ulong)plVar15 / (ulong)plVar22;
            }
            plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar22);
          }
          plVar13 = (long *)(*plVar16 + (long)plVar15 * 8);
          goto LAB_10aa9e7cc;
        }
      }
      else {
        *plVar19 = *plVar13;
LAB_10aa9e7cc:
        *plVar13 = (long)plVar19;
      }
      plVar7[0x1c] = plVar7[0x1c] + 1;
LAB_10aa9e7dc:
      func_0x00010aa7d81c(plVar19 + 6,&lStack_a0);
      plVar15 = plStack_88;
      plVar7 = plStack_90;
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      plVar16 = (long *)plVar19[9];
      plVar19[9] = (long)plVar15;
      plVar19[8] = (long)plVar7;
      if (plVar16 != (long *)0x0) {
        plVar7 = plVar16 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      if ((long)plStack_b0 < 0) {
        __ZdlPv(plStack_c0);
      }
      plVar7 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar15 = plStack_88 + 1;
        do {
          lVar8 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar15 = plStack_98 + 1;
        do {
          lVar8 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      do {
        lVar8 = *plVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *plVar20 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if (plStack_f0 != (long *)0x0) {
        plVar7 = plStack_f0 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
        }
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(auStack_e8[0]);
      }
      *param_1 = 0;
      plVar7 = plVar6 + 0x4b;
      lVar8 = plVar6[0x59];
      uVar10 = lVar8 - 1;
      plVar6[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar7[lVar8 + 2];
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
      plVar15 = (long *)*plVar7;
      plVar9 = (long *)plVar6[0x4c];
      lVar8 = (long)plVar9 - (long)plVar15;
      uVar14 = lVar8 >> 4;
      if (uVar14 < uVar10) {
        uVar21 = uVar10 - uVar14;
        lVar18 = plVar6[0x4d];
        if ((ulong)(lVar18 - (long)plVar9 >> 4) < uVar21) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar18 - (long)plVar15 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar15)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar11 >> 0x3c == 0) {
              lVar5 = uVar11 << 4;
              __Znwm();
              lVar1 = lVar5 + lVar8;
              _bzero(lVar1,uVar21 * 0x10);
              lVar17 = lVar1 + uVar14 * -0x10;
              _memcpy(lVar17,plVar15,lVar8);
              *plVar7 = lVar17;
              plVar6[0x4c] = lVar1 + uVar21 * 0x10;
              plVar6[0x4d] = lVar5 + uVar11 * 0x10;
              plStack_88 = plVar15;
              plStack_80 = plVar15;
              plStack_78 = plVar15;
              lStack_70 = lVar18;
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
        _bzero(plVar9,uVar21 * 0x10);
        plVar6[0x4c] = (long)(plVar9 + uVar21 * 2);
      }
      else if (uVar10 < uVar14) {
        while (plVar9 != plVar15 + uVar10 * 2) {
          plVar9 = plVar9 + -2;
          func_0x00010988c204(plVar9);
        }
        plVar6[0x4c] = (long)(plVar15 + uVar10 * 2);
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar10;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10aa9e9bc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa9e9c0);
  (*pcVar4)();
}



/* Entry: 10aa9ea84; end: 10aa9eaa7;  */

void FUN_10aa9ea84(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c40348;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa9eaa8; end: 10aa9eab7;  */

void FUN_10aa9eaa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40348;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa9eab8; end: 10aa9ead7;  */

void FUN_10aa9eab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40348;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa9ead8; end: 10aa9eaff;  */

undefined1  [16] FUN_10aa9ead8(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10aa9eafc);
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



/* Entry: 10aa9eb00; end: 10aa9f537;  */

/* WARNING: Removing unreachable block (ram,0x00010aa9f3d8) */

void FUN_10aa9eb00(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 auStack_148 [2];
  char cStack_131;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  undefined4 *puStack_118;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  undefined4 *puStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined7 uStack_c0;
  char cStack_b9;
  undefined4 *puStack_b8;
  byte bStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10a43b1c4(param_5);
  func_0x000109898570(auStack_148,param_2,param_4);
  func_0x000109898570(auStack_160,param_2,param_4 + 0x10);
  FUN_10aa7daa0(auStack_a8,auStack_148);
  FUN_10aa7daa0(&plStack_d0,auStack_160);
  if (((char)plStack_88 == '\x01') && (bStack_b0 != 0)) {
    plVar15 = plVar7 + 0xf;
    plVar12 = plVar15;
    FUN_10aaa1448(plVar15,uStack_90);
    if (plVar12 == (long *)0x0) {
      plStack_e0 = (long *)0x0;
      uStack_d8 = 0;
      bVar16 = 1;
    }
    else {
      FUN_10aaa1a6c(&plStack_110,plVar15,plVar12);
      plVar12 = plStack_110;
      plStack_e0 = plStack_110;
      uStack_d8._0_2_ = CONCAT11(1,(byte)uStack_d8);
      bVar16 = 1;
      if (plStack_110 != (long *)0x0) {
        if (cStack_b9 < '\0') {
          func_0x000107c3192c(&plStack_130,plStack_d0,lStack_c8);
        }
        else {
          lStack_128 = lStack_c8;
          plStack_130 = plStack_d0;
          plStack_120 = (long *)CONCAT17(cStack_b9,uStack_c0);
        }
        plStack_100 = plStack_120;
        lStack_108 = lStack_128;
        plStack_110 = plStack_130;
        plStack_130 = (long *)0x0;
        lStack_128 = 0;
        plStack_120 = (long *)0x0;
        puStack_118 = puStack_b8;
        puStack_f8 = puStack_b8;
        lVar13 = plVar12[6];
        plVar12 = (long *)plVar12[7];
        if (plVar12 != (long *)0x0) {
          plVar11 = plVar12 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = *plVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar22 = (undefined4 *)plVar7[0x10];
        puVar21 = param_1;
        lStack_f0 = lVar13;
        plStack_e8 = plVar12;
        if (puVar22 != (undefined4 *)0x0) {
          uVar9 = (long)puVar22 - 1;
          if (((ulong)puVar22 & uVar9) == 0) {
            puVar21 = (undefined4 *)(uVar9 & (ulong)puStack_b8);
          }
          else {
            puVar21 = puStack_b8;
            if (puVar22 <= puStack_b8) {
              uVar19 = 0;
              if (puVar22 != (undefined4 *)0x0) {
                uVar19 = (ulong)puStack_b8 / (ulong)puVar22;
              }
              puVar21 = (undefined4 *)((long)puStack_b8 - uVar19 * (long)puVar22);
            }
          }
          plVar11 = *(long **)(*plVar15 + (long)puVar21 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_10aa9efd4;
                puVar14 = (undefined4 *)plVar11[1];
                if (puVar14 != puStack_b8) break;
                if ((undefined4 *)plVar11[5] == puStack_b8) {
                  if (plVar12 != (long *)0x0) {
                    plVar7 = plVar12 + 1;
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
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                    }
                  }
                  goto LAB_10aa9f2d4;
                }
              }
              if (((ulong)puVar22 & uVar9) == 0) {
                puVar14 = (undefined4 *)((ulong)puVar14 & uVar9);
              }
              else if (puVar22 <= puVar14) {
                uVar19 = 0;
                if (puVar22 != (undefined4 *)0x0) {
                  uVar19 = (ulong)puVar14 / (ulong)puVar22;
                }
                puVar14 = (undefined4 *)((long)puVar14 - uVar19 * (long)puVar22);
              }
            } while (puVar14 == puVar21);
          }
        }
LAB_10aa9efd4:
        plVar11 = (long *)0x40;
        __Znwm();
        lStack_70 = 0;
        *plVar11 = 0;
        plVar11[1] = (long)puStack_b8;
        plStack_80 = plVar11;
        uStack_78 = plVar15;
        if ((long)plStack_100 < 0) {
          func_0x000107c3192c(plVar11 + 2,plStack_110,lStack_108);
        }
        else {
          plVar11[3] = lStack_108;
          plVar11[2] = (long)plStack_110;
          plVar11[4] = (long)plStack_100;
        }
        plVar11[5] = (long)puStack_b8;
        plVar11[6] = lVar13;
        plVar11[7] = (long)plVar12;
        lStack_f0 = 0;
        plStack_e8 = (long *)0x0;
        lStack_70 = CONCAT71(lStack_70._1_7_,1);
        if ((puVar22 == (undefined4 *)0x0) ||
           (*(float *)(plVar7 + 0x13) * (float)puVar22 < (float)(plVar7[0x12] + 1))) {
          uVar9 = 1;
          if ((undefined4 *)0x2 < puVar22) {
            uVar9 = (ulong)(((ulong)puVar22 & (long)puVar22 - 1U) != 0);
          }
          uVar9 = uVar9 | (long)puVar22 << 1;
          uVar19 = (ulong)((float)(plVar7[0x12] + 1) / *(float *)(plVar7 + 0x13));
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
          FUN_10aaa1230(plVar15,uVar9);
          puVar22 = (undefined4 *)plVar7[0x10];
          if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
            puVar21 = (undefined4 *)((long)puVar22 - 1U & (ulong)puStack_b8);
          }
          else {
            puVar21 = puStack_b8;
            if (puVar22 <= puStack_b8) {
              uVar9 = 0;
              if (puVar22 != (undefined4 *)0x0) {
                uVar9 = (ulong)puStack_b8 / (ulong)puVar22;
              }
              puVar21 = (undefined4 *)((long)puStack_b8 - uVar9 * (long)puVar22);
            }
          }
        }
        lVar13 = *plVar15;
        plVar12 = *(long **)(lVar13 + (long)puVar21 * 8);
        if (plVar12 == (long *)0x0) {
          plVar12 = plVar7 + 0x11;
          *plVar11 = *plVar12;
          *plVar12 = (long)plVar11;
          *(long **)(lVar13 + (long)puVar21 * 8) = plVar12;
          if (*plVar11 != 0) {
            puVar21 = *(undefined4 **)(*plVar11 + 8);
            if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
              puVar21 = (undefined4 *)((ulong)puVar21 & (long)puVar22 - 1U);
            }
            else if (puVar22 <= puVar21) {
              uVar9 = 0;
              if (puVar22 != (undefined4 *)0x0) {
                uVar9 = (ulong)puVar21 / (ulong)puVar22;
              }
              puVar21 = (undefined4 *)((long)puVar21 - uVar9 * (long)puVar22);
            }
            *(long **)(*plVar15 + (long)puVar21 * 8) = plVar11;
          }
        }
        else {
          *plVar11 = *plVar12;
          *plVar12 = (long)plVar11;
        }
        plVar7[0x12] = plVar7[0x12] + 1;
LAB_10aa9f2d4:
        if ((long)plStack_100 < 0) {
          __ZdlPv(plStack_110);
        }
        bVar16 = bStack_b0;
        if ((long)plStack_120 < 0) {
          __ZdlPv(plStack_130);
          bVar16 = bStack_b0;
        }
      }
    }
    FUN_10aaa1b8c(&plStack_e0);
  }
  else {
    FUN_10a0d09b4(&plStack_110,auStack_148);
    plVar15 = plVar7 + 0x14;
    func_0x00010aaa14e4(plVar15,puStack_f8);
    if (plVar15 == (long *)0x0) {
      plVar12 = (long *)0x0;
      uStack_78 = (long *)0x0;
    }
    else {
      FUN_10aaa1bd0(&plStack_130,plVar7 + 0x14,plVar15);
      plVar12 = plStack_130;
    }
    bVar3 = plVar15 != (long *)0x0;
    uStack_78._0_2_ = CONCAT11(bVar3,(byte)uStack_78);
    plStack_80 = plVar12;
    if ((long)plStack_100 < 0) {
      __ZdlPv(plStack_110);
      if (plVar12 == (long *)0x0) goto LAB_10aa9ecf8;
LAB_10aa9ec88:
      FUN_10a0d09b4(&plStack_110,auStack_160);
      if (*(char *)((long)plVar12 + 0x27) < '\0') {
        __ZdlPv(plVar12[2]);
      }
      plVar12[3] = lStack_108;
      plVar12[2] = (long)plStack_110;
      plVar12[4] = (long)plStack_100;
      plVar12[5] = (long)puStack_f8;
      plVar12[1] = (long)puStack_f8;
      puVar21 = (undefined4 *)plVar7[0x15];
      if (puVar21 != (undefined4 *)0x0) {
        uVar9 = (long)puVar21 - 1;
        if (((ulong)puVar21 & uVar9) == 0) {
          puVar22 = (undefined4 *)(uVar9 & (ulong)puStack_f8);
        }
        else {
          puVar22 = puStack_f8;
          if (puVar21 <= puStack_f8) {
            uVar19 = 0;
            if (puVar21 != (undefined4 *)0x0) {
              uVar19 = (ulong)puStack_f8 / (ulong)puVar21;
            }
            puVar22 = (undefined4 *)((long)puStack_f8 - uVar19 * (long)puVar21);
          }
        }
        plStack_110 = *(long **)(plVar7[0x14] + (long)puVar22 * 8);
        if (plStack_110 != (long *)0x0) {
          do {
            while( true ) {
              plStack_110 = (long *)*plStack_110;
              if (plStack_110 == (long *)0x0) goto LAB_10aa9ee08;
              puVar14 = (undefined4 *)plStack_110[1];
              if (puVar14 != puStack_f8) break;
              if ((undefined4 *)plStack_110[5] == puStack_f8) {
                uVar8 = 0;
                plStack_100 = plVar12;
                goto LAB_10aa9f284;
              }
            }
            if (((ulong)puVar21 & uVar9) == 0) {
              puVar14 = (undefined4 *)((ulong)puVar14 & uVar9);
            }
            else if (puVar21 <= puVar14) {
              uVar19 = 0;
              if (puVar21 != (undefined4 *)0x0) {
                uVar19 = (ulong)puVar14 / (ulong)puVar21;
              }
              puVar14 = (undefined4 *)((long)puVar14 - uVar19 * (long)puVar21);
            }
          } while (puVar14 == puVar22);
        }
      }
LAB_10aa9ee08:
      if ((puVar21 == (undefined4 *)0x0) ||
         (puVar22 = puStack_f8,
         *(float *)(plVar7 + 0x18) * (float)puVar21 < (float)(plVar7[0x17] + 1))) {
        uVar9 = 1;
        if ((undefined4 *)0x2 < puVar21) {
          uVar9 = (ulong)(((ulong)puVar21 & (long)puVar21 - 1U) != 0);
        }
        uVar9 = uVar9 | (long)puVar21 << 1;
        uVar19 = (ulong)((float)(plVar7[0x17] + 1) / *(float *)(plVar7 + 0x18));
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
        FUN_10aaa0f50(plVar7 + 0x14,uVar9);
        puVar21 = (undefined4 *)plVar7[0x15];
        puVar22 = (undefined4 *)plVar12[1];
      }
      uVar9 = (long)puVar21 - 1;
      if (((ulong)puVar21 & uVar9) == 0) {
        puVar22 = (undefined4 *)(uVar9 & (ulong)puVar22);
      }
      else if (puVar21 <= puVar22) {
        uVar19 = 0;
        if (puVar21 != (undefined4 *)0x0) {
          uVar19 = (ulong)puVar22 / (ulong)puVar21;
        }
        puVar22 = (undefined4 *)((long)puVar22 - uVar19 * (long)puVar21);
      }
      lVar13 = plVar7[0x14];
      plVar15 = *(long **)(lVar13 + (long)puVar22 * 8);
      if (plVar15 == (long *)0x0) {
        plVar15 = plVar7 + 0x16;
        *plVar12 = *plVar15;
        *plVar15 = (long)plVar12;
        *(long **)(lVar13 + (long)puVar22 * 8) = plVar15;
        if (*plVar12 != 0) {
          puVar22 = *(undefined4 **)(*plVar12 + 8);
          if (((ulong)puVar21 & uVar9) == 0) {
            puVar22 = (undefined4 *)((ulong)puVar22 & uVar9);
          }
          else if (puVar21 <= puVar22) {
            uVar9 = 0;
            if (puVar21 != (undefined4 *)0x0) {
              uVar9 = (ulong)puVar22 / (ulong)puVar21;
            }
            puVar22 = (undefined4 *)((long)puVar22 - uVar9 * (long)puVar21);
          }
          plVar15 = (long *)(plVar7[0x14] + (long)puVar22 * 8);
          goto LAB_10aa9f260;
        }
      }
      else {
        *plVar12 = *plVar15;
LAB_10aa9f260:
        *plVar15 = (long)plVar12;
      }
      plVar7[0x17] = plVar7[0x17] + 1;
      if (bVar3) {
        uStack_78._0_2_ = (ushort)(byte)uStack_78;
      }
      uVar8 = 1;
      plStack_100 = (long *)0x0;
      plStack_110 = plVar12;
LAB_10aa9f284:
      lStack_108 = CONCAT71(lStack_108._1_7_,uVar8);
      puStack_f8 = (undefined4 *)CONCAT62(puStack_f8._2_6_,(ushort)uStack_78);
      plStack_80 = (long *)0x0;
      if (((ushort)uStack_78 >> 8 & 1) != 0) {
        uStack_78._0_2_ = (ushort)(byte)uStack_78;
      }
      FUN_10aaa1cf0(&plStack_100);
    }
    else {
      if (plVar12 != (long *)0x0) goto LAB_10aa9ec88;
LAB_10aa9ecf8:
      FUN_10a0d09b4(&plStack_110,auStack_148);
      plVar15 = plVar7 + 0x19;
      func_0x00010aaa1580(plVar15,puStack_f8);
      if (plVar15 == (long *)0x0) {
        plVar12 = (long *)0x0;
        uStack_d8 = 0;
      }
      else {
        FUN_10aaa1d34(&plStack_130,plVar7 + 0x19,plVar15);
        plVar12 = plStack_130;
      }
      bVar3 = plVar15 != (long *)0x0;
      uStack_d8._0_2_ = CONCAT11(bVar3,(byte)uStack_d8);
      plStack_e0 = plVar12;
      if ((long)plStack_100 < 0) {
        __ZdlPv(plStack_110);
      }
      if (plVar12 != (long *)0x0) {
        FUN_10a0d09b4(&plStack_110,auStack_160);
        if (*(char *)((long)plVar12 + 0x27) < '\0') {
          __ZdlPv(plVar12[2]);
        }
        plVar12[3] = lStack_108;
        plVar12[2] = (long)plStack_110;
        plVar12[4] = (long)plStack_100;
        plVar12[5] = (long)puStack_f8;
        plVar12[1] = (long)puStack_f8;
        puVar21 = (undefined4 *)plVar7[0x1a];
        if (puVar21 != (undefined4 *)0x0) {
          uVar9 = (long)puVar21 - 1;
          if (((ulong)puVar21 & uVar9) == 0) {
            puVar22 = (undefined4 *)(uVar9 & (ulong)puStack_f8);
          }
          else {
            puVar22 = puStack_f8;
            if (puVar21 <= puStack_f8) {
              uVar19 = 0;
              if (puVar21 != (undefined4 *)0x0) {
                uVar19 = (ulong)puStack_f8 / (ulong)puVar21;
              }
              puVar22 = (undefined4 *)((long)puStack_f8 - uVar19 * (long)puVar21);
            }
          }
          plStack_110 = *(long **)(plVar7[0x19] + (long)puVar22 * 8);
          if (plStack_110 != (long *)0x0) {
            do {
              while( true ) {
                plStack_110 = (long *)*plStack_110;
                if (plStack_110 == (long *)0x0) goto LAB_10aa9f178;
                puVar14 = (undefined4 *)plStack_110[1];
                if (puVar14 != puStack_f8) break;
                if ((undefined4 *)plStack_110[5] == puStack_f8) {
                  uVar8 = 0;
                  plStack_100 = plVar12;
                  goto LAB_10aa9f374;
                }
              }
              if (((ulong)puVar21 & uVar9) == 0) {
                puVar14 = (undefined4 *)((ulong)puVar14 & uVar9);
              }
              else if (puVar21 <= puVar14) {
                uVar19 = 0;
                if (puVar21 != (undefined4 *)0x0) {
                  uVar19 = (ulong)puVar14 / (ulong)puVar21;
                }
                puVar14 = (undefined4 *)((long)puVar14 - uVar19 * (long)puVar21);
              }
            } while (puVar14 == puVar22);
          }
        }
LAB_10aa9f178:
        if ((puVar21 == (undefined4 *)0x0) ||
           (puVar22 = puStack_f8,
           *(float *)(plVar7 + 0x1d) * (float)puVar21 < (float)(plVar7[0x1c] + 1))) {
          uVar9 = 1;
          if ((undefined4 *)0x2 < puVar21) {
            uVar9 = (ulong)(((ulong)puVar21 & (long)puVar21 - 1U) != 0);
          }
          uVar9 = uVar9 | (long)puVar21 << 1;
          uVar19 = (ulong)((float)(plVar7[0x1c] + 1) / *(float *)(plVar7 + 0x1d));
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
          FUN_10aaa161c(plVar7 + 0x19,uVar9);
          puVar21 = (undefined4 *)plVar7[0x1a];
          puVar22 = (undefined4 *)plVar12[1];
        }
        uVar9 = (long)puVar21 - 1;
        if (((ulong)puVar21 & uVar9) == 0) {
          puVar22 = (undefined4 *)(uVar9 & (ulong)puVar22);
        }
        else if (puVar21 <= puVar22) {
          uVar19 = 0;
          if (puVar21 != (undefined4 *)0x0) {
            uVar19 = (ulong)puVar22 / (ulong)puVar21;
          }
          puVar22 = (undefined4 *)((long)puVar22 - uVar19 * (long)puVar21);
        }
        lVar13 = plVar7[0x19];
        plVar15 = *(long **)(lVar13 + (long)puVar22 * 8);
        if (plVar15 == (long *)0x0) {
          plVar15 = plVar7 + 0x1b;
          *plVar12 = *plVar15;
          *plVar15 = (long)plVar12;
          *(long **)(lVar13 + (long)puVar22 * 8) = plVar15;
          if (*plVar12 != 0) {
            puVar22 = *(undefined4 **)(*plVar12 + 8);
            if (((ulong)puVar21 & uVar9) == 0) {
              puVar22 = (undefined4 *)((ulong)puVar22 & uVar9);
            }
            else if (puVar21 <= puVar22) {
              uVar9 = 0;
              if (puVar21 != (undefined4 *)0x0) {
                uVar9 = (ulong)puVar22 / (ulong)puVar21;
              }
              puVar22 = (undefined4 *)((long)puVar22 - uVar9 * (long)puVar21);
            }
            plVar15 = (long *)(plVar7[0x19] + (long)puVar22 * 8);
            goto LAB_10aa9f350;
          }
        }
        else {
          *plVar12 = *plVar15;
LAB_10aa9f350:
          *plVar15 = (long)plVar12;
        }
        plVar7[0x1c] = plVar7[0x1c] + 1;
        if (bVar3) {
          uStack_d8._0_2_ = (ushort)(byte)uStack_d8;
        }
        uVar8 = 1;
        plStack_100 = (long *)0x0;
        plStack_110 = plVar12;
LAB_10aa9f374:
        lStack_108 = CONCAT71(lStack_108._1_7_,uVar8);
        puStack_f8 = (undefined4 *)CONCAT62(puStack_f8._2_6_,(ushort)uStack_d8);
        plStack_e0 = (long *)0x0;
        if (((ushort)uStack_d8 >> 8 & 1) != 0) {
          uStack_d8._0_2_ = (ushort)(byte)uStack_d8;
        }
        FUN_10aaa1e54(&plStack_100);
      }
      FUN_10aaa1e54(&plStack_e0);
    }
    FUN_10aaa1cf0(&plStack_80);
    bVar16 = bStack_b0;
  }
  if (((bVar16 & 1) != 0) && (cStack_b9 < '\0')) {
    __ZdlPv(plStack_d0);
  }
  if (cStack_149 < '\0') {
    __ZdlPv(auStack_160[0]);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar13 = plVar6[0x59];
  uVar9 = lVar13 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar13 + 2];
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
  plVar15 = (long *)*plVar7;
  plVar12 = (long *)plVar6[0x4c];
  lVar13 = (long)plVar12 - (long)plVar15;
  uVar19 = lVar13 >> 4;
  if (uVar19 < uVar9) {
    uVar20 = uVar9 - uVar19;
    lVar18 = plVar6[0x4d];
    if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar20) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar18 - (long)plVar15 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar15)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar20 * 0x10);
          lVar17 = lVar1 + uVar19 * -0x10;
          _memcpy(lVar17,plVar15,lVar13);
          *plVar7 = lVar17;
          plVar6[0x4c] = lVar1 + uVar20 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar15;
          plStack_80 = plVar15;
          uStack_78 = plVar15;
          lStack_70 = lVar18;
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
    _bzero(plVar12,uVar20 * 0x10);
    plVar6[0x4c] = (long)(plVar12 + uVar20 * 2);
  }
  else if (uVar9 < uVar19) {
    while (plVar12 != plVar15 + uVar9 * 2) {
      plVar12 = plVar12 + -2;
      func_0x00010988c204(plVar12);
    }
    plVar6[0x4c] = (long)(plVar15 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10aa9f538; end: 10aa9f633;  */

void FUN_10aa9f538(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10aa7dc64(plVar4,&stack0xffffffffffffffa8);
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



/* Entry: 10aa9f634; end: 10aa9f777;  */

void FUN_10aa9f634(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10aa7e5c4(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10aa9f778(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10aa9f778; end: 10aa9f813;  */

void FUN_10aa9f778(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_3;
  plStack_28 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  lStack_30 = 0;
  if (lVar5 != 0) {
    lStack_30 = lVar5 + 0x48;
  }
  ppuStack_38 = &PTR_DAT_110c3f548;
  func_0x000109899de4(param_1,param_2,&lStack_30,&ppuStack_38,0,0);
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



/* Entry: 10aa9f814; end: 10aa9f9b7;  */

void FUN_10aa9f814(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  long *plStack_78;
  long lStack_70;
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aa9f9b8(param_5);
  func_0x000109898570(&plStack_68,param_2,param_4);
  FUN_10aa9f9dc(&lStack_80,param_2,param_4 + 0x10);
  plVar1 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  FUN_10aa7e670(plVar7,&plStack_68,&stack0xffffffffffffffb0);
  if (plVar1 != (long *)0x0) {
    plVar7 = plVar1 + 1;
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
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 0;
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
          plStack_78 = (long *)lVar10;
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



/* Entry: 10aa9f9b8; end: 10aa9f9db;  */

void FUN_10aa9f9b8(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
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
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c3f548,0x48), lStack_40 != 0)) {
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa9fac4);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10aa9f9dc; end: 10aa9fad7;  */

void FUN_10aa9f9dc(long *param_1,long param_2,int *param_3)

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
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c3f548,0x48), lStack_30 != 0)) {
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa9fac4);
  (*pcVar3)();
}



/* Entry: 10aa9fad8; end: 10aa9fb87;  */

void FUN_10aa9fad8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fc40(param_1,param_2,FUN_10aa7e0f0,0,param_3,param_5);
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



/* Entry: 10aa9fb88; end: 10aa9fc3f;  */

void FUN_10aa9fb88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fdcc(param_1,param_2,FUN_10aa7e118,0,param_3,param_4,param_5);
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



/* Entry: 10aa9fc40; end: 10aa9fd63;  */

void FUN_10aa9fc40(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = param_2;
  FUN_10aa9fd64(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_68);
  plStack_48 = plStack_60;
  lVar5 = lStack_68;
  lStack_68 = 0;
  plStack_60 = (long *)0x0;
  lStack_50 = 0;
  if (lVar5 != 0) {
    lStack_50 = lVar5 + 0x50;
  }
  ppuStack_58 = &PTR_DAT_110c3f320;
  func_0x000109899de4(param_1,param_2,&lStack_50,&ppuStack_58,0,0);
  plVar4 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa9fd64; end: 10aa9fdcb;  */

void FUN_10aa9fd64(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,int *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c3f1a8;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = param_2;
  FUN_10aa9dc6c(param_2,param_5);
  FUN_10aa9ffb8(param_7);
  if (*param_6 != 1) {
    func_0x000109898688(param_2,param_6);
    if (param_2 == (undefined **)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_80);
      plVar7 = &lStack_90;
      if ((lStack_80 != 0) &&
         (___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c3f320,0x50), plVar7 = &lStack_90
         , lStack_80 != 0)) {
        plStack_88 = plStack_78;
        plVar7 = &lStack_80;
        lStack_90 = lStack_80;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      lStack_80 = lStack_90;
      if (lStack_90 != 0) goto LAB_10aa9fec4;
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa9ff94);
    (*pcVar4)();
  }
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
LAB_10aa9fec4:
  plVar7 = (long *)((long)ppuVar5 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar7 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_78 = plStack_88;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  (*(code *)param_3)(plVar7,&lStack_80);
  plVar7 = plStack_78;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *puVar6 = 0;
  return;
}



/* Entry: 10aa9fdcc; end: 10aa9ffb7;  */

void FUN_10aa9fdcc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_2;
  FUN_10aa9dc6c(param_2,param_5);
  FUN_10aa9ffb8(param_7);
  if (*param_6 != 1) {
    func_0x000109898688(param_2,param_6);
    if (param_2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar5 = &lStack_70;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110c3f320,0x50), plVar5 = &lStack_70
         , lStack_60 != 0)) {
        plStack_68 = plStack_58;
        plVar5 = &lStack_60;
        lStack_70 = lStack_60;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      lStack_60 = lStack_70;
      if (lStack_70 != 0) goto LAB_10aa9fec4;
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa9ff94);
    (*pcVar4)();
  }
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
LAB_10aa9fec4:
  plVar5 = (long *)(lVar7 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar5 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  (*param_3)(plVar5,&lStack_60);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10aa9ffb8; end: 10aa9ffdb;  */

void FUN_10aa9ffb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
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
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar6 = (long *)0x1;
  uVar9 = 0;
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
  FUN_10aa9fd64(plVar6,uVar9);
  FUN_10a052e3c(param_4);
  plVar8 = (long *)plVar8[8];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000109899de4(extraout_x8,plVar6,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
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
  lVar12 = *plVar6;
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
        plStack_78 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar11 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
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



/* Entry: 10aa9ffdc; end: 10aaa0117;  */

void FUN_10aa9ffdc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fd64(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)plVar7[8];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aaa0118; end: 10aaa0343;  */

/* WARNING: Removing unreachable block (ram,0x00010aaa0294) */
/* WARNING: Removing unreachable block (ram,0x00010aaa0298) */
/* WARNING: Removing unreachable block (ram,0x00010aaa02a0) */
/* WARNING: Removing unreachable block (ram,0x00010aaa02a8) */
/* WARNING: Removing unreachable block (ram,0x00010aaa02ac) */

void FUN_10aaa0118(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  undefined8 *puVar9;
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aaa0344(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10aaa030c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa0310);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar9 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c3f3a8,0x58),
       puVar9 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
      puVar9 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10aaa030c;
    }
  }
  FUN_10aa7e258(plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar8 = lVar11 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar11 + 2];
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
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar11 = lVar11 + uVar8 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10aaa0344; end: 10aaa0367;  */

void FUN_10aaa0344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aa9fc40(extraout_x8,plVar3,FUN_10aa7e398,0,uVar5,param_4);
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



/* Entry: 10aaa0368; end: 10aaa0417;  */

void FUN_10aaa0368(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fc40(param_1,param_2,FUN_10aa7e398,0,param_3,param_5);
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



/* Entry: 10aaa0418; end: 10aaa04cf;  */

void FUN_10aaa0418(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fdcc(param_1,param_2,FUN_10aa7e3c0,0,param_3,param_4,param_5);
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



/* Entry: 10aaa04d0; end: 10aaa060b;  */

void FUN_10aaa04d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fd64(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)plVar7[0xc];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aaa060c; end: 10aaa08fb;  */

void FUN_10aaa060c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aaa08fc(param_5);
  if (*param_4 == 1) {
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    FUN_10a00946c(&UNK_10f68cd0a);
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_70);
      plVar10 = &lStack_90;
      if ((lStack_70 != 0) &&
         (lVar12 = lStack_70, ___dynamic_cast(lStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c3f718,0x48),
         plVar10 = &lStack_90, lVar12 != 0)) {
        plStack_88 = plStack_68;
        plVar10 = &lStack_70;
        lStack_90 = lVar12;
      }
      *plVar10 = 0;
      plVar10[1] = 0;
      plVar10 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar14 = plStack_68 + 1;
        do {
          lVar12 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_88;
      lVar12 = lStack_90;
      if (lStack_90 != 0) {
        plStack_80 = (long *)lStack_90;
        plStack_78 = plStack_88;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (*(long *)(lVar12 + 0x10) != *(long *)(lVar12 + 8)) {
          if (plVar10 != (long *)0x0) {
            plVar14 = plVar10 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = *plVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar14 = (long *)plVar8[0xc];
          plVar8[0xb] = lVar12;
          plVar8[0xc] = (long)plVar10;
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
            do {
              lVar12 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
          func_0x000107c2b074(&lStack_70,&PTR_DAT_110c3fd88);
          plVar8 = plVar8 + 0x14;
          FUN_10aaa1834(plVar8,&lStack_70,&UNK_10dd5b8f9,&stack0xffffffffffffffb8,
                        &stack0xffffffffffffffb7);
          func_0x00010aa7d79c(plVar8 + 6,plStack_80,plStack_78);
          if (in_stack_ffffffffffffffa0 < 0) {
            __ZdlPv(lStack_70);
          }
        }
        if (plVar10 != (long *)0x0) {
          plVar8 = plVar10 + 1;
          do {
            lVar12 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar10 = plStack_88 + 1;
          do {
            lVar12 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        *param_1 = 0;
        plVar8 = plVar7 + 0x4b;
        lVar12 = plVar7[0x59];
        uVar9 = lVar12 - 1;
        plVar7[0x59] = uVar9;
        if (uVar9 < 8) {
          uVar9 = plVar8[lVar12 + 2];
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
        plVar10 = (long *)*plVar8;
        plVar14 = (long *)plVar7[0x4c];
        lVar12 = (long)plVar14 - (long)plVar10;
        uVar16 = lVar12 >> 4;
        if (uVar16 < uVar9) {
          uVar17 = uVar9 - uVar16;
          lVar15 = plVar7[0x4d];
          if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
            if (uVar9 >> 0x3c == 0) {
              uVar11 = lVar15 - (long)plVar10 >> 3;
              if (uVar11 <= uVar9) {
                uVar11 = uVar9;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar10)) {
                uVar11 = 0xfffffffffffffff;
              }
              plStack_68 = plVar8;
              if (uVar11 >> 0x3c == 0) {
                lVar6 = uVar11 << 4;
                __Znwm();
                lVar2 = lVar6 + lVar12;
                _bzero(lVar2,uVar17 * 0x10);
                lVar13 = lVar2 + uVar16 * -0x10;
                _memcpy(lVar13,plVar10,lVar12);
                *plVar8 = lVar13;
                plVar7[0x4c] = lVar2 + uVar17 * 0x10;
                plVar7[0x4d] = lVar6 + uVar11 * 0x10;
                plStack_88 = plVar10;
                plStack_80 = plVar10;
                plStack_78 = plVar10;
                lStack_70 = lVar15;
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
          _bzero(plVar14,uVar17 * 0x10);
          plVar7[0x4c] = (long)(plVar14 + uVar17 * 2);
        }
        else if (uVar9 < uVar16) {
          while (plVar14 != plVar10 + uVar9 * 2) {
            plVar14 = plVar14 + -2;
            func_0x00010988c204(plVar14);
          }
          plVar7[0x4c] = (long)(plVar10 + uVar9 * 2);
        }
code_r0x00010988c138:
        plVar7[0x5a] = uVar9;
        return;
      }
      func_0x00010988bd28(&UNK_10f58251f);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aaa08b0);
  (*pcVar5)();
}



/* Entry: 10aaa08fc; end: 10aaa091f;  */

void FUN_10aaa08fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aa9fd64(plVar5,uVar8);
  FUN_10a052e3c(param_4);
  plVar18 = (long *)plVar7[0xe];
  if (plVar7[0xe] != 0) {
    plVar7 = (long *)(plVar7[0xe] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10aa9f778(extraout_x8,plVar5,&stack0xffffffffffffffa0);
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



/* Entry: 10aaa0920; end: 10aaa0a3b;  */

void FUN_10aaa0920(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9fd64(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0xe];
  if (plVar6[0xe] != 0) {
    plVar6 = (long *)(plVar6[0xe] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10aa9f778(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10aaa0a3c; end: 10aaa0ba3;  */

/* WARNING: Removing unreachable block (ram,0x00010aaa0b1c) */
/* WARNING: Removing unreachable block (ram,0x00010aaa0b20) */
/* WARNING: Removing unreachable block (ram,0x00010aaa0b28) */
/* WARNING: Removing unreachable block (ram,0x00010aaa0b30) */
/* WARNING: Removing unreachable block (ram,0x00010aaa0b34) */

void FUN_10aaa0a3c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10aa9dc6c(param_2,param_3);
  FUN_10aaa0ba4(param_5);
  FUN_10aa9f9dc(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10aa7e484(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10aaa0ba4; end: 10aaa0bc7;  */

void FUN_10aaa0ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
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
  plVar5 = (long *)0x1;
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
  FUN_10a052e3c(param_4);
  plVar7 = (long *)0x108;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110ba1ca8;
  *(undefined1 *)(plVar7 + 4) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[3] = (long)&PTR_DAT_110c3df10;
  plVar7[5] = (long)&PTR_DAT_110c3df68;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  *(undefined4 *)(plVar7 + 0x16) = 0x3f800000;
  plVar7[0x18] = 0;
  plVar7[0x17] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  *(undefined4 *)(plVar7 + 0x1b) = 0x3f800000;
  plVar7[0x1d] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1e] = 0;
  *(undefined4 *)(plVar7 + 0x20) = 0x3f800000;
  FUN_10aa9323c(extraout_x8,plVar5,&stack0xffffffffffffffb0);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar10 + 2];
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
  lVar10 = *plVar5;
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
        plStack_78 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_98 = lVar10;
          lStack_90 = lVar10;
          lStack_88 = lVar10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10aaa0bc8; end: 10aaa0d0f;  */

void FUN_10aaa0bc8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a052e3c(param_5);
  plVar7 = (long *)0x108;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110ba1ca8;
  *(undefined1 *)(plVar7 + 4) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[3] = (long)&PTR_DAT_110c3df10;
  plVar7[5] = (long)&PTR_DAT_110c3df68;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  *(undefined4 *)(plVar7 + 0x16) = 0x3f800000;
  plVar7[0x18] = 0;
  plVar7[0x17] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  *(undefined4 *)(plVar7 + 0x1b) = 0x3f800000;
  plVar7[0x1d] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1e] = 0;
  *(undefined4 *)(plVar7 + 0x20) = 0x3f800000;
  FUN_10aa9323c(param_1,param_2,&stack0xffffffffffffffc0);
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



/* Entry: 10aaa0d10; end: 10aaa0f4f;  */

long * FUN_10aaa0d10(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == param_2) {
          if (plVar4[5] == param_2) {
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
  plVar4 = (long *)0x40;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar4[3] = param_3[1];
    plVar4[2] = lVar3;
    plVar4[4] = param_3[2];
  }
  lVar3 = param_3[3];
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[5] = lVar3;
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
    FUN_10aaa0f50(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar2 = *(ulong *)(*plVar4 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar2 = uVar2 & uVar7 - 1;
      }
      else if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar2 = uVar2 - uVar5 * uVar7;
      }
      *(long **)(*param_1 + uVar2 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10aaa0f50; end: 10aaa111f;  */

void FUN_10aaa0f50(long *param_1,long *param_2)

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
    func_0x00010aa92120(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aaa1120; end: 10aaa1167;  */

void FUN_10aaa1120(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010aa92120(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aaa1168; end: 10aaa1177;  */

void FUN_10aaa1168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40398;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aaa1178; end: 10aaa1197;  */

void FUN_10aaa1178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c40398;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa1198; end: 10aaa11eb;  */

void FUN_10aaa1198(long param_1)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_110c42b70;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aaa11ec; end: 10aaa11ff;  */

void FUN_10aaa11ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa1200; end: 10aaa121f;  */

void FUN_10aaa1200(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c403e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaa1220; end: 10aaa122f;  */

void FUN_10aaa1220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaa1228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaa1230; end: 10aaa13ff;  */

void FUN_10aaa1230(long *param_1,long *param_2)

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
    FUN_10aa921b8(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aaa1400; end: 10aaa1447;  */

void FUN_10aaa1400(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10aa921b8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aaa1448; end: 10aaa161b;  */

long * FUN_10aaa1448(long *param_1,ulong param_2)

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
          if (plVar5[5] == param_2) {
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



/* Entry: 10aaa161c; end: 10aaa17eb;  */

void FUN_10aaa161c(long *param_1,long *param_2)

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
    FUN_10aa92068(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aaa17ec; end: 10aaa1833;  */

void FUN_10aaa17ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10aa92068(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aaa1834; end: 10aaa1a6b;  */

undefined1  [16] FUN_10aaa1834(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar10 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if (plVar8[5] == uVar10) {
            uVar2 = 0;
            goto LAB_10aaa1a34;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar4 = (long *)*param_4;
  lVar7 = plVar4[2];
  lVar11 = *plVar4;
  plVar8[3] = plVar4[1];
  plVar8[2] = lVar11;
  plVar8[4] = lVar7;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  lVar7 = plVar4[3];
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[5] = lVar7;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10aaa0f50(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10aaa1a24;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10aaa1a24:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10aaa1a34:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10aaa1a6c; end: 10aaa1b8b;  */

void FUN_10aaa1a6c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1b20;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1b20;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10aaa1b20:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10aaa1b8c; end: 10aaa1bcf;  */

void FUN_10aaa1b8c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa1bd0);
      (*pcVar1)();
    }
    FUN_10aa921b8(lVar2 + 0x10);
    __ZdlPv(lVar2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10aaa1bd0; end: 10aaa1cef;  */

void FUN_10aaa1bd0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1c84;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1c84;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10aaa1c84:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10aaa1cf0; end: 10aaa1d33;  */

void FUN_10aaa1cf0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa1d34);
      (*pcVar1)();
    }
    func_0x00010aa92120(lVar2 + 0x10);
    __ZdlPv(lVar2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10aaa1d34; end: 10aaa1e53;  */

void FUN_10aaa1d34(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1de8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aaa1de8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10aaa1de8:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10aaa1e54; end: 10aaa1e97;  */

void FUN_10aaa1e54(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaa1e98);
      (*pcVar1)();
    }
    FUN_10aa92068(lVar2 + 0x10);
    __ZdlPv(lVar2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10aaa1e98; end: 10aaa1f37;  */

long * FUN_10aaa1e98(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[5] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aaa1f38; end: 10aaa216f;  */

undefined1  [16] FUN_10aaa1f38(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar10 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if (plVar8[5] == uVar10) {
            uVar2 = 0;
            goto LAB_10aaa2138;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar4 = (long *)*param_4;
  lVar7 = plVar4[2];
  lVar11 = *plVar4;
  plVar8[3] = plVar4[1];
  plVar8[2] = lVar11;
  plVar8[4] = lVar7;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  lVar7 = plVar4[3];
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[5] = lVar7;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10aaa1230(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10aaa2128;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10aaa2128:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10aaa2138:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10aaa2170; end: 10aaa226b;  */

undefined1  [16] FUN_10aaa2170(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f1e0;
  puVar1 = &UNK_10f68c0c1;
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
    ppuStack_40 = &PTR_DAT_110c3f1e0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aaa226c; end: 10aaa2327;  */

void FUN_10aaa226c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68d25d,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa2328);
  (*pcVar4)();
}



/* Entry: 10aaa2328; end: 10aaa280b;  */

void FUN_10aaa2328(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_68;
  
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
  FUN_10aaa280c(param_2,param_3);
  FUN_10aaa2874(param_5);
  if (*param_4 == 7) {
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar17 = param_2;
    plStack_88 = plVar7;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_88);
    if (((ulong)plVar17 & 1) != 0) {
      plStack_90 = plStack_88;
      pplVar9 = &plStack_90;
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x268))();
      plStack_b8 = (long *)0x0;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        if ((long *)0x333333333333333 < plVar7) {
          func_0x00010aaa2898();
          goto LAB_10aaa2764;
        }
        pplStack_68 = &plStack_b8;
        plVar16 = plVar7;
        FUN_10aaa28ac();
        plVar17 = (long *)((long)plVar16 + ((long)plStack_b8 - (long)plStack_b0));
        plStack_88 = plVar16;
        plStack_80 = plVar16;
        plStack_78 = plVar16;
        plStack_70 = plVar16 + (long)pplVar9 * 10;
        func_0x00010aaa28f0(plStack_b8,plStack_b0,plVar17);
        plStack_78 = plStack_b8;
        plStack_70 = plStack_a8;
        plStack_88 = plStack_b8;
        plStack_80 = plStack_b8;
        plStack_b8 = plVar17;
        plStack_b0 = plVar16;
        plStack_a8 = plVar16 + (long)pplVar9 * 10;
        func_0x00010aaa29bc(&plStack_88);
        plVar17 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(aiStack_a0,param_2,&plStack_90,plVar17);
          piVar10 = aiStack_a0;
          plVar16 = param_2;
          func_0x00010aaa2a0c();
          if (plStack_b0 < plStack_a8) {
            lVar15 = plVar16[4];
            lVar13 = plVar16[3];
            lVar5 = plVar16[6];
            lVar18 = plVar16[5];
            *(int *)(plStack_b0 + 7) = (int)plVar16[7];
            plStack_b0[6] = lVar5;
            plStack_b0[5] = lVar18;
            plStack_b0[4] = lVar15;
            plStack_b0[3] = lVar13;
            *plStack_b0 = (long)&PTR_DAT_110b17898;
            lVar13 = plVar16[2];
            lVar15 = plVar16[1];
            plStack_b0[2] = plVar16[2];
            plStack_b0[1] = lVar15;
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar2) {
                  *plVar12 = *plVar12 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *plStack_b0 = (long)&PTR_FUN_110c6c628;
            lVar13 = plVar16[9];
            lVar15 = plVar16[8];
            plStack_b0[9] = plVar16[9];
            plStack_b0[8] = lVar15;
            if (lVar13 != 0) {
              plVar16 = (long *)(lVar13 + 0x10);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar2) {
                  *plVar16 = *plVar16 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            plVar16 = plStack_b0 + 10;
          }
          else {
            lVar13 = (long)plStack_b0 - (long)plStack_b8;
            plVar12 = (long *)((lVar13 >> 4) * -0x3333333333333333 + 1);
            if ((long *)0x333333333333333 < plVar12) {
              func_0x00010aaa2898();
              goto LAB_10aaa2764;
            }
            lVar15 = (long)plStack_a8 - (long)plStack_b8 >> 4;
            plVar14 = (long *)(lVar15 * -0x6666666666666666);
            if (plVar14 < plVar12 || (long)plVar14 - (long)plVar12 == 0) {
              plVar14 = plVar12;
            }
            if (0x199999999999998 < (ulong)(lVar15 * -0x3333333333333333)) {
              plVar14 = (long *)0x333333333333333;
            }
            pplStack_68 = &plStack_b8;
            if (plVar14 == (long *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              FUN_10aaa28ac();
            }
            plStack_80 = (long *)((long)plVar14 + lVar13);
            lVar13 = plVar16[7];
            lVar18 = plVar16[6];
            lVar15 = plVar16[5];
            lVar5 = plVar16[3];
            plStack_80[4] = plVar16[4];
            plStack_80[3] = lVar5;
            plStack_80[6] = lVar18;
            plStack_80[5] = lVar15;
            *(int *)(plStack_80 + 7) = (int)lVar13;
            *plStack_80 = (long)&PTR_DAT_110b17898;
            lVar13 = plVar16[2];
            lVar15 = plVar16[1];
            plStack_80[2] = plVar16[2];
            plStack_80[1] = lVar15;
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar2) {
                  *plVar12 = *plVar12 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *plStack_80 = (long)&PTR_FUN_110c6c628;
            lVar13 = plVar16[9];
            lVar15 = plVar16[8];
            plStack_80[9] = plVar16[9];
            plStack_80[8] = lVar15;
            if (lVar13 != 0) {
              plVar16 = (long *)(lVar13 + 0x10);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar2) {
                  *plVar16 = *plVar16 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            plVar16 = plStack_80 + 10;
            plVar12 = (long *)((long)plStack_80 + ((long)plStack_b8 - (long)plStack_b0));
            plStack_88 = plVar14;
            plStack_78 = plVar16;
            plStack_70 = plVar14 + (long)piVar10 * 10;
            func_0x00010aaa28f0(plStack_b8,plStack_b0,plVar12);
            plStack_78 = plStack_b8;
            plStack_70 = plStack_a8;
            plStack_88 = plStack_b8;
            plStack_80 = plStack_b8;
            plStack_b8 = plVar12;
            plStack_b0 = plVar16;
            plStack_a8 = plVar14 + (long)piVar10 * 10;
            func_0x00010aaa29bc(&plStack_88);
          }
          plStack_b0 = plVar16;
          if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
            (**(code **)*puStack_98)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
        } while (plVar17 != plVar7);
      }
      if (plStack_90 != (long *)0x0) {
        (**(code **)*plStack_90)();
      }
      if (param_4[4] == 3) {
        fVar3 = (float)*(double *)(param_4 + 6);
        if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 6))) {
          fVar3 = 0.0;
        }
        (**(code **)(*plVar8 + 0x50))(fVar3,plVar8,&plStack_b8);
        FUN_10aaa2a84(&plStack_b8);
        *param_1 = 0;
        pplVar9 = (long **)(plVar6 + 0x4b);
        lVar13 = plVar6[0x59];
        uVar11 = lVar13 - 1;
        plVar6[0x59] = uVar11;
        if (uVar11 < 8) {
          plVar8 = pplVar9[lVar13 + 2];
          if ((long *)plVar6[0x5a] == plVar8) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(plVar6[0x57] + -8);
          plVar6[0x57] = (long)(plVar6[0x57] + -8);
          if ((long *)plVar6[0x5a] == plVar8) {
            return;
          }
        }
        plVar7 = *pplVar9;
        plVar17 = (long *)plVar6[0x4c];
        lVar13 = (long)plVar17 - (long)plVar7;
        plVar16 = (long *)(lVar13 >> 4);
        if (plVar16 < plVar8) {
          uVar11 = (long)plVar8 - (long)plVar16;
          lVar15 = plVar6[0x4d];
          if ((ulong)(lVar15 - (long)plVar17 >> 4) < uVar11) {
            if ((ulong)plVar8 >> 0x3c == 0) {
              plVar17 = (long *)(lVar15 - (long)plVar7 >> 3);
              if (plVar17 <= plVar8) {
                plVar17 = plVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar7)) {
                plVar17 = (long *)0xfffffffffffffff;
              }
              pplStack_68 = pplVar9;
              if ((ulong)plVar17 >> 0x3c == 0) {
                lVar5 = (long)plVar17 << 4;
                __Znwm();
                lVar18 = lVar5 + lVar13;
                _bzero(lVar18,uVar11 * 0x10);
                plVar16 = (long *)(lVar18 + (long)plVar16 * -0x10);
                _memcpy(plVar16,plVar7,lVar13);
                *pplVar9 = plVar16;
                plVar6[0x4c] = lVar18 + uVar11 * 0x10;
                plVar6[0x4d] = lVar5 + (long)plVar17 * 0x10;
                plStack_88 = plVar7;
                plStack_80 = plVar7;
                plStack_78 = plVar7;
                plStack_70 = (long *)lVar15;
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
          _bzero(plVar17,uVar11 * 0x10);
          plVar6[0x4c] = (long)(plVar17 + uVar11 * 2);
        }
        else if (plVar8 < plVar16) {
          while (plVar17 != plVar7 + (long)plVar8 * 2) {
            plVar17 = plVar17 + -2;
            func_0x00010988c204(plVar17);
          }
          plVar6[0x4c] = (long)(plVar7 + (long)plVar8 * 2);
        }
code_r0x00010988c138:
        plVar6[0x5a] = (long)plVar8;
        return;
      }
      func_0x00010988bd28(&UNK_10f68f550);
      goto LAB_10aaa2764;
    }
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10aaa2764:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aaa2768);
  (*pcVar4)();
}



/* Entry: 10aaa280c; end: 10aaa2873;  */

void FUN_10aaa280c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = (undefined8 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar4 == 2) {
    return;
  }
  puVar6 = (undefined8 *)0x0;
  FUN_10a052ee0(2);
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x333333333333333 < puVar5) {
    func_0x000109ffded8();
    puVar7 = puVar5;
    if (puVar5 != puVar6) {
      do {
        uVar10 = puVar7[4];
        uVar9 = puVar7[3];
        uVar12 = puVar7[6];
        uVar11 = puVar7[5];
        *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(puVar7 + 7);
        puVar4[6] = uVar12;
        puVar4[5] = uVar11;
        puVar4[4] = uVar10;
        puVar4[3] = uVar9;
        *puVar4 = &PTR_DAT_110b17898;
        lVar8 = puVar7[2];
        uVar9 = puVar7[1];
        puVar4[2] = puVar7[2];
        puVar4[1] = uVar9;
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
        *puVar4 = &PTR_FUN_110c6c628;
        lVar8 = puVar7[9];
        uVar9 = puVar7[8];
        puVar4[9] = puVar7[9];
        puVar4[8] = uVar9;
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar8 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar7 = puVar7 + 10;
        puVar4 = puVar4 + 10;
      } while (puVar7 != puVar6);
      do {
        puVar4 = puVar5 + 10;
        (**(code **)*puVar5)();
        puVar5 = puVar4;
      } while (puVar4 != puVar6);
    }
    return;
  }
  __Znwm((long)puVar5 * 0x50);
  return;
}



/* Entry: 10aaa2874; end: 10aaa28ab;  */

void FUN_10aaa2874(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((int)param_1 == 2) {
    return;
  }
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(2);
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x333333333333333 < puVar4) {
    func_0x000109ffded8();
    puVar6 = puVar4;
    if (puVar4 != puVar5) {
      do {
        uVar9 = puVar6[4];
        uVar8 = puVar6[3];
        uVar11 = puVar6[6];
        uVar10 = puVar6[5];
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(puVar6 + 7);
        param_1[6] = uVar11;
        param_1[5] = uVar10;
        param_1[4] = uVar9;
        param_1[3] = uVar8;
        *param_1 = &PTR_DAT_110b17898;
        lVar7 = puVar6[2];
        uVar8 = puVar6[1];
        param_1[2] = puVar6[2];
        param_1[1] = uVar8;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *param_1 = &PTR_FUN_110c6c628;
        lVar7 = puVar6[9];
        uVar8 = puVar6[8];
        param_1[9] = puVar6[9];
        param_1[8] = uVar8;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar6 = puVar6 + 10;
        param_1 = param_1 + 10;
      } while (puVar6 != puVar5);
      do {
        puVar6 = puVar4 + 10;
        (**(code **)*puVar4)();
        puVar4 = puVar6;
      } while (puVar6 != puVar5);
    }
    return;
  }
  __Znwm((long)puVar4 * 0x50);
  return;
}



/* Entry: 10aaa28ac; end: 10aaa2a43;  */

void FUN_10aaa28ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((undefined8 *)0x333333333333333 < param_1) {
    func_0x000109ffded8();
    puVar4 = param_1;
    if (param_1 != param_2) {
      do {
        uVar7 = puVar4[4];
        uVar6 = puVar4[3];
        uVar9 = puVar4[6];
        uVar8 = puVar4[5];
        *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar4 + 7);
        param_3[6] = uVar9;
        param_3[5] = uVar8;
        param_3[4] = uVar7;
        param_3[3] = uVar6;
        *param_3 = &PTR_DAT_110b17898;
        lVar5 = puVar4[2];
        uVar6 = puVar4[1];
        param_3[2] = puVar4[2];
        param_3[1] = uVar6;
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
        *param_3 = &PTR_FUN_110c6c628;
        lVar5 = puVar4[9];
        uVar6 = puVar4[8];
        param_3[9] = puVar4[9];
        param_3[8] = uVar6;
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
        puVar4 = puVar4 + 10;
        param_3 = param_3 + 10;
      } while (puVar4 != param_2);
      do {
        puVar4 = param_1 + 10;
        (**(code **)*param_1)();
        param_1 = puVar4;
      } while (puVar4 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x50);
  return;
}



/* Entry: 10aaa2a44; end: 10aaa2a83;  */

void FUN_10aaa2a44(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_10a053854();
  if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
    return;
  }
  puVar1 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)puVar1[1];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar3 = puVar3 + -10;
      (**(code **)*puVar3)(puVar3);
    } while (puVar3 != puVar4);
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10aaa2a84; end: 10aaa2afb;  */

void FUN_10aaa2a84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -10;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10aaa2afc; end: 10aaa2bf7;  */

void FUN_10aaa2afc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10aaa280c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa2be4);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  (**(code **)(*param_2 + 0x58))(fVar2,param_2);
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



/* Entry: 10aaa2bf8; end: 10aaa2e1b;  */

void FUN_10aaa2bf8(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aaa2e1c(param_5);
  FUN_10aa9445c(&lStack_50,param_2,param_4);
  FUN_10aa9445c(&lStack_60,param_2,param_4 + 0x10);
  if ((lStack_50 != 0) && (lStack_60 != 0)) {
    plVar5 = (long *)0x68;
    __Znwm();
    *plVar5 = (long)&PTR_FUN_110c40438;
    plVar5[1] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)&PTR_FUN_110c3e188;
    plVar7 = plVar5 + 4;
    *plVar7 = (long)&PTR_DAT_110c3e1e8;
    plVar5[6] = (long)&PTR_FUN_110c3e258;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    FUN_10a4956f8(plVar5 + 9,&lStack_50);
    FUN_10a4956f8(plVar5 + 0xb,&lStack_60);
    plStack_70 = plVar7;
    plStack_68 = plVar5;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    func_0x00010aa9dcd4(param_1,param_2,&plStack_70);
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar7 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68ce74);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa2de8);
  (*pcVar3)();
}



/* Entry: 10aaa2e1c; end: 10aaa2e3f;  */

void FUN_10aaa2e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  long *plVar8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  FUN_10a052ee0(2,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa30e0(param_4);
  FUN_10aa9445c(&lStack_70,plVar4,param_1);
  FUN_10aa9445c(&lStack_80,plVar4,param_1 + 0x10);
  FUN_10aa9445c(&lStack_90,plVar4,param_1 + 0x20);
  if (((lStack_70 != 0) && (lStack_80 != 0)) && (lStack_90 != 0)) {
    plVar6 = (long *)0x78;
    __Znwm();
    *plVar6 = (long)&PTR_DAT_110c40488;
    plVar6[1] = 0;
    *(undefined1 *)(plVar6 + 5) = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)&PTR_FUN_110c3e2b0;
    plVar8 = plVar6 + 4;
    *plVar8 = (long)&PTR_DAT_110c3e310;
    plVar6[6] = (long)&PTR_FUN_110c3e380;
    plVar6[0xe] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[9] = 0;
    FUN_10a4956f8(plVar6 + 9,&lStack_70);
    FUN_10a4956f8(plVar6 + 0xb,&lStack_80);
    FUN_10a4956f8(plVar6 + 0xd,&lStack_90);
    plStack_a0 = plVar8;
    plStack_98 = plVar6;
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    func_0x00010aa9dcd4(extraout_x8,plVar4,&plStack_a0);
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    func_0x00010988c170(plVar5 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68ceac);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa309c);
  (*pcVar3)();
}



/* Entry: 10aaa2e40; end: 10aaa30df;  */

void FUN_10aaa2e40(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
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
  FUN_10aaa30e0(param_5);
  FUN_10aa9445c(&lStack_60,param_2,param_4);
  FUN_10aa9445c(&lStack_70,param_2,param_4 + 0x10);
  FUN_10aa9445c(&lStack_80,param_2,param_4 + 0x20);
  if (((lStack_60 != 0) && (lStack_70 != 0)) && (lStack_80 != 0)) {
    plVar5 = (long *)0x78;
    __Znwm();
    *plVar5 = (long)&PTR_DAT_110c40488;
    plVar5[1] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)&PTR_FUN_110c3e2b0;
    plVar7 = plVar5 + 4;
    *plVar7 = (long)&PTR_DAT_110c3e310;
    plVar5[6] = (long)&PTR_FUN_110c3e380;
    plVar5[0xe] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    FUN_10a4956f8(plVar5 + 9,&lStack_60);
    FUN_10a4956f8(plVar5 + 0xb,&lStack_70);
    FUN_10a4956f8(plVar5 + 0xd,&lStack_80);
    plStack_90 = plVar7;
    plStack_88 = plVar5;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar5 = plStack_68 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    func_0x00010aa9dcd4(param_1,param_2,&plStack_90);
    plVar5 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68ceac);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa309c);
  (*pcVar3)();
}



/* Entry: 10aaa30e0; end: 10aaa3103;  */

void FUN_10aaa30e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  long *plVar8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar4 = (long *)0x3;
  FUN_10a052ee0(3,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa3418(param_4);
  FUN_10aa9445c(&lStack_70,plVar4,param_1);
  FUN_10aa9445c(&lStack_80,plVar4,param_1 + 0x10);
  FUN_10aa9445c(&lStack_90,plVar4,param_1 + 0x20);
  FUN_10aa9445c(&lStack_a0,plVar4,param_1 + 0x30);
  if ((((lStack_70 != 0) && (lStack_80 != 0)) && (lStack_90 != 0)) && (lStack_a0 != 0)) {
    plVar6 = (long *)0x88;
    __Znwm();
    *plVar6 = (long)&PTR_DAT_110c404d8;
    plVar6[1] = 0;
    *(undefined1 *)(plVar6 + 5) = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)&PTR_FUN_110c3e3d8;
    plVar8 = plVar6 + 4;
    *plVar8 = (long)&PTR_DAT_110c3e438;
    plVar6[6] = (long)&PTR_FUN_110c3e4a8;
    plVar6[0x10] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[9] = 0;
    FUN_10a4956f8(plVar6 + 9,&lStack_70);
    FUN_10a4956f8(plVar6 + 0xb,&lStack_80);
    FUN_10a4956f8(plVar6 + 0xd,&lStack_90);
    FUN_10a4956f8(plVar6 + 0xf,&lStack_a0);
    plStack_b0 = plVar8;
    plStack_a8 = plVar6;
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    func_0x00010aa9dcd4(extraout_x8,plVar4,&plStack_b0);
    plVar4 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar6 = plStack_a8 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    func_0x00010988c170(plVar5 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68cee4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa33c4);
  (*pcVar3)();
}



/* Entry: 10aaa3104; end: 10aaa3417;  */

void FUN_10aaa3104(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
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
  FUN_10aaa3418(param_5);
  FUN_10aa9445c(&lStack_60,param_2,param_4);
  FUN_10aa9445c(&lStack_70,param_2,param_4 + 0x10);
  FUN_10aa9445c(&lStack_80,param_2,param_4 + 0x20);
  FUN_10aa9445c(&lStack_90,param_2,param_4 + 0x30);
  if ((((lStack_60 != 0) && (lStack_70 != 0)) && (lStack_80 != 0)) && (lStack_90 != 0)) {
    plVar5 = (long *)0x88;
    __Znwm();
    *plVar5 = (long)&PTR_DAT_110c404d8;
    plVar5[1] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)&PTR_FUN_110c3e3d8;
    plVar7 = plVar5 + 4;
    *plVar7 = (long)&PTR_DAT_110c3e438;
    plVar5[6] = (long)&PTR_FUN_110c3e4a8;
    plVar5[0x10] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    FUN_10a4956f8(plVar5 + 9,&lStack_60);
    FUN_10a4956f8(plVar5 + 0xb,&lStack_70);
    FUN_10a4956f8(plVar5 + 0xd,&lStack_80);
    FUN_10a4956f8(plVar5 + 0xf,&lStack_90);
    plStack_a0 = plVar7;
    plStack_98 = plVar5;
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar5 = plStack_68 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    func_0x00010aa9dcd4(param_1,param_2,&plStack_a0);
    plVar5 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68cee4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa33c4);
  (*pcVar3)();
}



/* Entry: 10aaa3418; end: 10aaa343b;  */

void FUN_10aaa3418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  long *plVar8;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar4 = (long *)0x4;
  FUN_10a052ee0(4,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa35ec(param_4);
  FUN_10aa9445c(&lStack_60,plVar4,param_1);
  if (lStack_60 != 0) {
    plVar6 = (long *)0x58;
    __Znwm();
    *plVar6 = (long)&PTR_DAT_110c40528;
    plVar6[1] = 0;
    *(undefined1 *)(plVar6 + 5) = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)&PTR_DAT_110c3e630;
    plVar8 = plVar6 + 4;
    *plVar8 = (long)&PTR_DAT_110c3e690;
    plVar6[6] = (long)&PTR_FUN_110c3e700;
    plVar6[10] = 0;
    plVar6[9] = 0;
    FUN_10a4956f8(plVar6 + 9,&lStack_60);
    plStack_70 = plVar8;
    plStack_68 = plVar6;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    func_0x00010aa9dcd4(extraout_x8,plVar4,&plStack_70);
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    func_0x00010988c170(plVar5 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68cf1c);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa35c8);
  (*pcVar3)();
}



/* Entry: 10aaa343c; end: 10aaa35eb;  */

void FUN_10aaa343c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aaa35ec(param_5);
  FUN_10aa9445c(&lStack_50,param_2,param_4);
  if (lStack_50 != 0) {
    plVar5 = (long *)0x58;
    __Znwm();
    *plVar5 = (long)&PTR_DAT_110c40528;
    plVar5[1] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)&PTR_DAT_110c3e630;
    plVar7 = plVar5 + 4;
    *plVar7 = (long)&PTR_DAT_110c3e690;
    plVar5[6] = (long)&PTR_FUN_110c3e700;
    plVar5[10] = 0;
    plVar5[9] = 0;
    FUN_10a4956f8(plVar5 + 9,&lStack_50);
    plStack_60 = plVar7;
    plStack_58 = plVar5;
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    func_0x00010aa9dcd4(param_1,param_2,&plStack_60);
    plVar5 = plStack_58;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f68cf1c);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa35c8);
  (*pcVar3)();
}



/* Entry: 10aaa35ec; end: 10aaa360f;  */

void FUN_10aaa35ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
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
  FUN_10aaa39b4(param_4);
  plVar7 = plVar5;
  FUN_10aaa39d8(plVar5,param_1);
  plVar8 = plVar5;
  FUN_10aaa39d8(plVar5,param_1 + 0x10);
  plVar9 = plVar5;
  FUN_10aaa39d8(plVar5,param_1 + 0x20);
  fVar23 = *(float *)(plVar9 + 4);
  if (*(float *)(plVar9 + 4) <= *(float *)(plVar8 + 4)) {
    fVar23 = *(float *)(plVar8 + 4);
  }
  if (fVar23 <= *(float *)(plVar7 + 4)) {
    fVar23 = *(float *)(plVar7 + 4);
  }
  plVar10 = (long *)0x88;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110ba1df8;
  plVar18 = plVar10 + 3;
  *plVar18 = (long)&PTR_FUN_110c3e758;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[7] = 0;
  plVar10[6] = 0;
  plVar10[9] = 0;
  plVar10[8] = 0;
  *(undefined4 *)(plVar10 + 10) = 0;
  *(undefined8 *)((long)plVar10 + 0x54) = 0x3f800000;
  plVar10[0xc] = (long)&PTR_FUN_110c3e7c0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  plVar10[0xf] = 0;
  plVar10[0x10] = 0;
  plVar10[0xe] = (long)&PTR_FUN_110c3e830;
  plStack_c0 = plVar18;
  plStack_b8 = plVar10;
  if (1 < (int)(fVar23 / 0.033333335)) {
    uVar21 = 0;
    do {
      fVar27 = (float)uVar21 * 0.033333335;
      fVar24 = fVar27;
      (**(code **)*plVar7)(plVar7);
      fVar28 = fVar27;
      (**(code **)*plVar8)(plVar8);
      fVar29 = fVar27;
      (**(code **)*plVar9)(plVar9);
      fVar24 = fVar24 * 0.5;
      fVar28 = fVar28 * 0.5;
      fVar29 = fVar29 * 0.5;
      fVar22 = fVar24;
      ___sincosf_stret();
      fVar25 = fVar24;
      ___sincosf_stret();
      fVar26 = fVar25;
      ___sincosf_stret();
      fStack_c8 = fVar22 * fVar28 * fVar29 + fVar26 * fVar24 * fVar25;
      uStack_d8 = (long *)CONCAT44(-(fVar24 * fVar28 * fVar29) + fVar26 * fVar22 * fVar25,fVar27);
      uStack_d0 = (long *)CONCAT44(-(fVar22 * fVar28 * fVar26) + fVar29 * fVar24 * fVar25,
                                   fVar22 * fVar25 * fVar29 + fVar26 * fVar24 * fVar28);
      FUN_10aa80320(plVar18,&uStack_d8);
      uVar21 = uVar21 + 1;
    } while ((int)(fVar23 / 0.033333335) - 1U != uVar21);
  }
  fVar24 = fVar23;
  (**(code **)*plVar7)(plVar7);
  fVar28 = fVar23;
  (**(code **)*plVar8)(plVar8);
  fVar29 = fVar23;
  (**(code **)*plVar9)(plVar9);
  fVar24 = fVar24 * 0.5;
  fVar28 = fVar28 * 0.5;
  fVar29 = fVar29 * 0.5;
  fVar22 = fVar24;
  ___sincosf_stret();
  fVar25 = fVar24;
  ___sincosf_stret();
  fVar26 = fVar25;
  ___sincosf_stret();
  fStack_c8 = fVar22 * fVar28 * fVar29 + fVar26 * fVar24 * fVar25;
  uStack_d8 = (long *)CONCAT44(-(fVar24 * fVar28 * fVar29) + fVar26 * fVar22 * fVar25,fVar23);
  uStack_d0 = (long *)CONCAT44(-(fVar22 * fVar28 * fVar26) + fVar29 * fVar24 * fVar25,
                               fVar22 * fVar25 * fVar29 + fVar26 * fVar24 * fVar28);
  FUN_10aa80320(plVar18,&uStack_d8);
  uStack_d8 = plVar10 + 0xc;
  uStack_d0 = plVar10;
  func_0x00010aa9dcd4(extraout_x8,plVar5,&uStack_d8);
  plVar5 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    plVar7 = uStack_d0 + 1;
    do {
      lVar14 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plVar6 + 0x4b;
  lVar14 = plVar6[0x59];
  uVar12 = lVar14 - 1;
  plVar6[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar5[lVar14 + 2];
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
  lVar14 = *plVar5;
  lVar17 = plVar6[0x4c];
  lVar15 = lVar17 - lVar14;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar20 = uVar12 - uVar19;
    if ((ulong)(plVar6[0x4d] - lVar17 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar11 = plVar6[0x4d] - lVar14;
        uVar13 = (long)uVar11 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 >> 0x3c == 0) {
          lVar4 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar4 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar14,lVar15);
          *plVar5 = lVar16;
          plVar6[0x4c] = lVar17 + uVar20 * 0x10;
          plVar6[0x4d] = lVar4 + uVar13 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff68);
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
    _bzero(lVar17,uVar20 * 0x10);
    plVar6[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar14 = lVar14 + uVar12 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar6[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar12;
  return;
}


