/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a48eb74; end: 10a48ee8b;  */

void FUN_10a48eb74(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined1 auStack_168 [8];
  undefined8 *apuStack_160 [7];
  code *pcStack_128;
  undefined **appuStack_120 [7];
  code *pcStack_e8;
  undefined **appuStack_e0 [7];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x10);
  lVar4 = *plVar5;
  FUN_10a461678(lVar4);
  puVar6 = *(undefined **)(lVar4 + 0x10);
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar7 = *ppuVar1;
  if (puVar7 == puVar6) {
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    puStack_98 = (undefined8 *)0x0;
    ppuStack_a0 = &PTR_DAT_110ae9180;
    pcStack_a8 = (code *)&UNK_1053a6a3c;
  }
  else {
    puVar2 = (undefined8 *)0x8;
    __Znwm();
    *puVar2 = puVar7;
    *ppuVar1 = puVar6;
    ppuStack_a0 = &PTR_FUN_110bd2ad0;
    pcStack_a8 = FUN_10a3fa23c;
    puStack_98 = puVar2;
  }
  if (*(char *)(plVar5[2] + 8) == '\x01') {
    pcStack_128 = pcStack_a8;
    (*(code *)ppuStack_a0[2])(appuStack_120,&ppuStack_a0);
    pcStack_a8 = (code *)&UNK_1053a6a3c;
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    ppuStack_a0 = &PTR_DAT_110ae9180;
    (*(code *)plVar5[1])(auStack_168,plVar5 + 1);
    FUN_10a3efc6c(&pcStack_128,auStack_168);
    pcStack_e8 = pcStack_128;
    (*(code *)appuStack_120[0][2])(appuStack_e0,appuStack_120);
    pcStack_128 = (code *)&UNK_1053a6a3c;
    (*(code *)*appuStack_120[0])(appuStack_120);
    appuStack_120[0] = &PTR_DAT_110ae9180;
    func_0x00010a108320(&pcStack_a8,&pcStack_e8);
    FUN_10a044790(&pcStack_e8);
    (*(code *)*appuStack_e0[0])(appuStack_e0);
    FUN_10a044790(auStack_168);
    (*(code *)*apuStack_160[0])(apuStack_160);
    FUN_10a044790(&pcStack_128);
    (*(code *)*appuStack_120[0])(appuStack_120);
  }
  __ZNSt3__115recursive_mutex4lockEv(lVar4 + 0x70);
  pcStack_e8 = pcStack_a8;
  (*(code *)ppuStack_a0[2])(appuStack_e0,&ppuStack_a0);
  pcStack_a8 = (code *)&UNK_1053a6a3c;
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  ppuStack_a0 = &PTR_DAT_110ae9180;
  pcStack_1a8 = FUN_10a48ee8c;
  ppuStack_1a0 = &PTR_DAT_110bdd8c8;
  uStack_190 = 1;
  lStack_198 = lVar4 + 0x70;
  FUN_10a3efc6c(&pcStack_e8,&pcStack_1a8);
  *param_1 = pcStack_e8;
  (*(code *)appuStack_e0[0][2])(param_1 + 1,appuStack_e0);
  pcStack_e8 = (code *)&UNK_1053a6a3c;
  (*(code *)*appuStack_e0[0])(appuStack_e0);
  appuStack_e0[0] = &PTR_DAT_110ae9180;
  FUN_10a044790(&pcStack_1a8);
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  FUN_10a044790(&pcStack_e8);
  (*(code *)*appuStack_e0[0])(appuStack_e0);
  FUN_10a044790(&pcStack_a8);
  pppuVar3 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_128);
  (*(code *)*appuStack_120[0])(&ppuStack_1a0);
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  __Unwind_Resume(pppuVar3);
  return;
}



/* Entry: 10a48ee8c; end: 10a48eecb;  */

void FUN_10a48ee8c(void)

{
  return;
}



/* Entry: 10a48eecc; end: 10a48ef0b;  */

void FUN_10a48eecc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a48ef0c; end: 10a48ef23;  */

void FUN_10a48ef0c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a48ef24; end: 10a48efaf;  */

void FUN_10a48ef24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110bdd8e0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  (**(code **)(puVar2[2] + 0x18))(puVar1 + 2,puVar2 + 2);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a48efb0; end: 10a48efbf;  */

long FUN_10a48efb0(undefined8 param_1,long param_2)

{
  func_0x000105277f8c();
  FUN_10a48f5c8(param_2 + 0x98);
  if (((*(char *)(param_2 + 0x90) == '\x01') && (3 < *(int *)(param_2 + 0x80))) &&
     (*(undefined8 **)(param_2 + 0x88) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_2 + 0x88))();
  }
  if ((*(char *)(param_2 + 0x78) == '\x01') && (*(char *)(param_2 + 0x3f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x28));
  }
  FUN_10a48f614(param_2 + 0x10);
  return param_2;
}



/* Entry: 10a48efc0; end: 10a48f037;  */

long FUN_10a48efc0(long param_1)

{
  FUN_10a48f5c8(param_1 + 0x98);
  if (((*(char *)(param_1 + 0x90) == '\x01') && (3 < *(int *)(param_1 + 0x80))) &&
     (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x88))();
  }
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_10a48f614(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a48f038; end: 10a48f047;  */

void FUN_10a48f038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  func_0x000105277f8c();
  plVar4 = param_7;
  (**(code **)(*param_7 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_7;
  FUN_10a48f174(param_7,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffff90,plVar5);
  puVar1 = in_stack_ffffffffffffff90;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffffa0 >> 0x38;
    puVar1 = &stack0xffffffffffffff90;
  }
  (**(code **)(*param_7 + 0x128))(&stack0xffffffffffffffa8,param_7,puVar1,in_stack_ffffffffffffff98)
  ;
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(in_stack_ffffffffffffff90);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
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
  lVar6 = *plVar5;
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
        plStack_78 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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



/* Entry: 10a48f048; end: 10a48f173;  */

void FUN_10a48f048(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  FUN_10a48f174(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
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
  lVar6 = *plVar5;
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
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
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



/* Entry: 10a48f174; end: 10a48f1bf;  */

void FUN_10a48f174(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a053854(param_1,lVar6);
    param_2 = lVar6;
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
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
  plVar5 = plVar3;
  FUN_10a48f2a4(plVar3,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  (**(code **)(*plVar3 + 0x128))(extraout_x8 + 2,plVar3,plVar5,param_2);
  *extraout_x8 = 6;
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
        plStack_88 = plVar3;
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



/* Entry: 10a48f1c0; end: 10a48f2a3;  */

void FUN_10a48f1c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a48f2a4(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar4 + 0x38))(plVar4);
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,param_3);
  *param_1 = 6;
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



/* Entry: 10a48f2a4; end: 10a48f2ef;  */

void FUN_10a48f2a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *extraout_x8;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  lVar2 = param_1;
  func_0x000109898688();
  if (lVar2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a052c2c(param_1,lVar2);
    param_2 = lVar2;
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
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
  plVar5 = plVar3;
  FUN_10a48f2a4(plVar3,param_2);
  FUN_10a48f3fc(param_4);
  FUN_10a3f3f30(&ppuStack_78,plVar3,param_3);
  pppuVar1 = (undefined8 ***)ppuStack_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuVar1 = &ppuStack_78;
  }
  func_0x00010989fa88(plVar5,pppuVar1,uStack_70);
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
  }
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar5;
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a48f2f0; end: 10a48f3fb;  */

void FUN_10a48f2f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  long *plVar3;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  FUN_10a48f2a4(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&ppuStack_58,param_2,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  func_0x00010989fa88(plVar3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar3;
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10a48f3fc; end: 10a48f41f;  */

void FUN_10a48f3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a48f2a4(plVar3,uVar6);
  FUN_10a48f4f8(param_4);
  FUN_10a48f174(plVar3,param_1);
  (**(code **)(*plVar5 + 0x40))(plVar5,plVar3);
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar5;
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



/* Entry: 10a48f420; end: 10a48f4f7;  */

void FUN_10a48f420(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a48f2a4(param_2,param_3);
  FUN_10a48f4f8(param_5);
  FUN_10a48f174(param_2,param_4);
  (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
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



/* Entry: 10a48f4f8; end: 10a48f51b;  */

long * FUN_10a48f4f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1 != 1) {
    plVar1 = (long *)0x1;
    FUN_10a052ee0(1,0,param_1);
    plVar2 = (long *)plVar1[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    return plVar1;
  }
  return param_1;
}



/* Entry: 10a48f51c; end: 10a48f563;  */

long * FUN_10a48f51c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a48f564; end: 10a48f5c7;  */

long * FUN_10a48f564(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 10a48f5c8; end: 10a48f613;  */

undefined8 * FUN_10a48f5c8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a48f614; end: 10a48f683;  */

void FUN_10a48f614(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar3)();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a48f684; end: 10a48f773;  */

void FUN_10a48f684(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ae90f0;
  uVar2 = param_3;
  _strlen(param_3);
  func_0x000109d18e28(puVar1 + 3,param_3,uVar2,param_4,param_5);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a48f774; end: 10a48f777;  */

void FUN_10a48f774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a48f778; end: 10a48f78b;  */

void FUN_10a48f778(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a48f78c; end: 10a48f7a3;  */

void FUN_10a48f78c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a48f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a48f7a4; end: 10a48f7db;  */

undefined8 FUN_10a48f7a4(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd960);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a48f7dc; end: 10a48f7df;  */

void FUN_10a48f7dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a48f7e0; end: 10a48f8c3;  */

long FUN_10a48f7e0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a48f8c4; end: 10a48f957;  */

void FUN_10a48f8c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a48f7e0();
  if (lVar1 != 0) {
    func_0x00010a48f8f8(param_1,lVar1);
  }
  return;
}



/* Entry: 10a48f958; end: 10a48fa77;  */

void FUN_10a48f958(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a48fa0c;
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
    if (uVar8 == uVar3) goto LAB_10a48fa0c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a48fa0c:
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



/* Entry: 10a48fa78; end: 10a48fabf;  */

void FUN_10a48fa78(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a48e61c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a48fac0; end: 10a48fedf;  */

undefined1  [16] FUN_10a48fac0(long *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 auVar19 [16];
  
  uVar7 = *param_2;
  uVar11 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
  uVar11 = (uVar7 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  uVar18 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      unaff_x24 = uVar18 & uVar9;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar13 * uVar11;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar12; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        uVar13 = plVar17[1];
        if (uVar13 == uVar18) {
          if (plVar17[2] == uVar7) {
            uVar6 = 0;
            goto LAB_10a48fe64;
          }
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar11 <= uVar13) {
            uVar16 = 0;
            if (uVar11 != 0) {
              uVar16 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar16 * uVar11;
          }
          if (uVar13 != unaff_x24) break;
        }
      }
    }
  }
  plVar17 = (long *)0x20;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar18;
  lVar8 = param_3[1];
  lVar5 = *param_3;
  plVar17[3] = param_3[1];
  plVar17[2] = lVar5;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar11) {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar7) {
LAB_10a48fc74:
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a48fecc);
        (*pcVar4)();
      }
      lVar8 = uVar7 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar8;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar11 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
      plVar10 = (long *)param_1[2];
      uVar11 = uVar7;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar13 = uVar7 - 1;
        if ((uVar7 & uVar13) == 0) {
          uVar9 = uVar9 & uVar13;
        }
        else if (uVar7 <= uVar9) {
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar16 * uVar7;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar14 = (long *)*plVar10;
        while (plVar14 != (long *)0x0) {
          uVar16 = plVar14[1];
          if ((uVar7 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar7 <= uVar16) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar3 * uVar7;
          }
          plVar15 = plVar14;
          if (uVar16 != uVar9) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar16 * 8) == 0) {
              *(long **)(lVar8 + uVar16 * 8) = plVar10;
              uVar9 = uVar16;
            }
            else {
              *plVar10 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar8 + uVar16 * 8);
              **(long **)(lVar8 + uVar16 * 8) = (long)plVar14;
              plVar15 = plVar10;
            }
          }
          plVar10 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (uVar7 < uVar11) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar11) {
        if (uVar7 != 0) goto LAB_10a48fc74;
        lVar8 = *param_1;
        *param_1 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = param_1[1];
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar18;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar7 * uVar11;
      }
    }
  }
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar17 = *plVar10;
    *plVar10 = (long)plVar17;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar10;
    if (*plVar17 == 0) goto LAB_10a48fe54;
    uVar7 = *(ulong *)(*plVar17 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar18 = 0;
      if (uVar11 != 0) {
        uVar18 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar18 * uVar11;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar17 = *plVar10;
  }
  *plVar10 = (long)plVar17;
LAB_10a48fe54:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a48fe64:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar17;
  return auVar19;
}



/* Entry: 10a48fee0; end: 10a48ff27;  */

void FUN_10a48fee0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a3b772c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a48ff28; end: 10a49000b;  */

long FUN_10a48ff28(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a49000c; end: 10a4901db;  */

void FUN_10a49000c(long *param_1,long *param_2)

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
    func_0x00010a004dac(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a4901dc; end: 10a490223;  */

void FUN_10a4901dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a004dac(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a490224; end: 10a490307;  */

long FUN_10a490224(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a490308; end: 10a49035f;  */

long FUN_10a490308(long param_1)

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



/* Entry: 10a490360; end: 10a4903fb;  */

long * FUN_10a490360(long *param_1,ulong param_2)

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



/* Entry: 10a4903fc; end: 10a49049b;  */

void FUN_10a4903fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_10a0c32e4(&ppuStack_48,param_3,0xffffffff,0x20,0,0);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_10a49049c(param_1,param_2,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 10a49049c; end: 10a49071f;  */

void FUN_10a49049c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  int aiStack_48 [2];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_58);
  func_0x000109880f00(&puStack_80,&iStack_58,param_2,&UNK_10f581e96);
  func_0x0001098811a4(&puStack_60,&puStack_80,param_2,"parse");
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
  }
  if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
  }
  func_0x000107c2b054(&puStack_80,param_3);
  ppuVar1 = (undefined8 **)puStack_80;
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    ppuVar1 = &puStack_80;
  }
  (**(code **)(*param_2 + 0x128))(&puStack_68,param_2,ppuVar1,uStack_78);
  aiStack_48[0] = 6;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x90))(param_2,puStack_68);
  iStack_58 = 0;
  plStack_40 = plVar2;
  (**(code **)(*param_2 + 0x2a8))(param_1,param_2,&puStack_60,&iStack_58,aiStack_48,1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < aiStack_48[0]) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  puVar3 = puStack_60;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < aiStack_48[0]) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  do {
    if (puStack_60 != (undefined8 *)0x0) {
      (**(code **)*puStack_60)();
    }
    __Unwind_Resume(puVar3);
    if (puStack_80 != (undefined8 *)0x0) {
      (**(code **)*puStack_80)();
    }
    puStack_60 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  } while( true );
}



/* Entry: 10a490720; end: 10a49094b;  */

void FUN_10a490720(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  long lVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x18);
  plVar1 = (long *)(lVar2 + 0x260);
  lVar12 = param_1[1];
  lVar15 = param_1[1];
  lVar14 = *param_1;
  uVar11 = *(ulong *)(lVar2 + 0x268);
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar11 <= uVar8) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar8 / uVar11;
        }
        unaff_x24 = uVar8 - uVar10 * uVar11;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10a4907dc;
          uVar10 = plVar9[1];
          if (uVar10 != uVar8) break;
          if (plVar9[2] == uVar8) {
            return;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar11 <= uVar10) {
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = uVar10 / uVar11;
          }
          uVar10 = uVar10 - uVar5 * uVar11;
        }
      } while (uVar10 == unaff_x24);
    }
  }
LAB_10a4907dc:
  plVar9 = (long *)0x28;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar8;
  plVar9[2] = uVar8;
  plVar9[4] = lVar15;
  plVar9[3] = lVar14;
  if (lVar12 != 0) {
    plVar7 = (long *)(lVar12 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  fVar13 = (float)(*(long *)(lVar2 + 0x278) + 1);
  if ((uVar11 == 0) || (*(float *)(lVar2 + 0x280) * (float)uVar11 < fVar13)) {
    uVar6 = 1;
    if (2 < uVar11) {
      uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar6 = uVar6 | uVar11 << 1;
    uVar11 = (ulong)(fVar13 / *(float *)(lVar2 + 0x280));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    FUN_10a49000c(plVar1,uVar6);
    uVar11 = *(ulong *)(lVar2 + 0x268);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar11 <= uVar8) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar8 / uVar11;
        }
        unaff_x24 = uVar8 - uVar6 * uVar11;
      }
    }
  }
  lVar12 = *plVar1;
  plVar7 = *(long **)(lVar12 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar9 = *(long *)(lVar2 + 0x270);
    *(long **)(lVar2 + 0x270) = plVar9;
    *(long *)(lVar12 + unaff_x24 * 8) = lVar2 + 0x270;
    if (*plVar9 == 0) goto LAB_10a490910;
    uVar8 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar8 = uVar8 & uVar11 - 1;
    }
    else if (uVar11 <= uVar8) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar8 / uVar11;
      }
      uVar8 = uVar8 - uVar6 * uVar11;
    }
    plVar7 = (long *)(*plVar1 + uVar8 * 8);
  }
  else {
    *plVar9 = *plVar7;
  }
  *plVar7 = (long)plVar9;
LAB_10a490910:
  *(long *)(lVar2 + 0x278) = *(long *)(lVar2 + 0x278) + 1;
  return;
}



/* Entry: 10a49094c; end: 10a490967;  */

void FUN_10a49094c(void)

{
  return;
}



/* Entry: 10a490968; end: 10a490c1f;  */

void FUN_10a490968(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  float fVar14;
  long lVar15;
  long lVar16;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(param_2 + 0x18);
  if (*(long *)(lVar7 + 0x38) != 0) {
    unaff_x24 = *(ulong *)(param_2 + 0x20);
    uVar12 = *(ulong *)(unaff_x24 + 0x130);
    lVar7 = *(long *)(unaff_x24 + 0x128);
    if (-1 < (char)*(byte *)(unaff_x24 + 0x13f)) {
      uVar12 = (ulong)*(byte *)(unaff_x24 + 0x13f);
      lVar7 = unaff_x24 + 0x128;
    }
    FUN_10ae03140(0,lVar7,uVar12);
    ppuVar6 = &PTR_PTR_113302170;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302170);
    lVar7 = *(long *)(param_2 + 0x18);
  }
  func_0x00010a04a7fc(lVar7 + 0x38,param_1);
  plVar1 = (long *)(lVar2 + 0x260);
  uVar13 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x158);
  lVar7 = param_1[1];
  lVar16 = param_1[1];
  lVar15 = *param_1;
  uVar12 = *(ulong *)(lVar2 + 0x268);
  if (uVar12 != 0) {
    uVar8 = uVar12 - 1;
    if ((uVar12 & uVar8) == 0) {
      unaff_x24 = uVar8 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar11 * uVar12;
      }
    }
    plVar10 = *(long **)(*plVar1 + unaff_x24 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10a490ab0;
          uVar11 = plVar10[1];
          if (uVar11 != uVar13) break;
          if (plVar10[2] == uVar13) {
            return;
          }
        }
        if ((uVar12 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar12 <= uVar11) {
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = uVar11 / uVar12;
          }
          uVar11 = uVar11 - uVar5 * uVar12;
        }
      } while (uVar11 == unaff_x24);
    }
  }
LAB_10a490ab0:
  plVar10 = (long *)0x28;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar13;
  plVar10[2] = uVar13;
  plVar10[4] = lVar16;
  plVar10[3] = lVar15;
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  fVar14 = (float)(*(long *)(lVar2 + 0x278) + 1);
  if ((uVar12 == 0) || (*(float *)(lVar2 + 0x280) * (float)uVar12 < fVar14)) {
    uVar8 = 1;
    if (2 < uVar12) {
      uVar8 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar8 = uVar8 | uVar12 << 1;
    uVar12 = (ulong)(fVar14 / *(float *)(lVar2 + 0x280));
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    FUN_10a49000c(plVar1,uVar8);
    uVar12 = *(ulong *)(lVar2 + 0x268);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar8 * uVar12;
      }
    }
  }
  lVar7 = *plVar1;
  plVar9 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar10 = *(long *)(lVar2 + 0x270);
    *(long **)(lVar2 + 0x270) = plVar10;
    *(long *)(lVar7 + unaff_x24 * 8) = lVar2 + 0x270;
    if (*plVar10 == 0) goto LAB_10a490be4;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar8 * uVar12;
    }
    plVar9 = (long *)(*plVar1 + uVar13 * 8);
  }
  else {
    *plVar10 = *plVar9;
  }
  *plVar9 = (long)plVar10;
LAB_10a490be4:
  *(long *)(lVar2 + 0x278) = *(long *)(lVar2 + 0x278) + 1;
  return;
}



/* Entry: 10a490c20; end: 10a490c4b;  */

long FUN_10a490c20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a490c4c; end: 10a491063;  */

undefined1  [16] FUN_10a490c4c(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x27;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  plVar8 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x27 = (long *)(uVar16 & (ulong)plVar8);
    }
    else {
      unaff_x27 = plVar8;
      if (plVar15 <= plVar8) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar8 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      uVar5 = *param_2;
      lVar4 = param_2[1];
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar8) {
          if (plVar14[3] == lVar4) {
            lVar3 = plVar14[2];
            _memcmp(lVar3,uVar5,lVar4);
            if ((int)lVar3 == 0) {
              uVar5 = 0;
              goto LAB_10a490fd8;
            }
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x27) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)0x30;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  lVar4 = *param_3;
  lVar17 = param_4[1];
  lVar3 = *param_4;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar4;
  plVar14[5] = lVar17;
  plVar14[4] = lVar3;
  *param_4 = 0;
  param_4[1] = 0;
  if ((plVar15 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if ((long *)0x2 < plVar15) {
      uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
    plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar7 <= plVar15) {
      plVar7 = plVar15;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar15 = (long *)param_1[1];
    if (plVar15 < plVar7) {
LAB_10a490de8:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a491048);
        (*pcVar2)();
      }
      lVar4 = (long)plVar7 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      plVar15 = (long *)0x0;
      param_1[1] = (long)plVar7;
      do {
        *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar7 != plVar15);
      plVar9 = (long *)param_1[2];
      plVar15 = plVar7;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar16 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar16);
        }
        else if (plVar7 <= plVar10) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar7 & uVar16) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar16);
          }
          else if (plVar7 <= plVar13) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar7;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar10) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + (long)plVar13 * 8);
              **(long **)(lVar4 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar7 < plVar15) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar9) {
        plVar7 = plVar9;
      }
      if (plVar7 < plVar15) {
        if (plVar7 != (long *)0x0) goto LAB_10a490de8;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x27 = plVar8;
      if (plVar15 <= plVar8) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
      }
    }
  }
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10a490fc8;
    plVar8 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar8) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar15;
      }
      plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10a490fc8:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a490fd8:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar14;
  return auVar18;
}



/* Entry: 10a491064; end: 10a4910af;  */

void FUN_10a491064(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)(param_2 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a4910b0; end: 10a4911ab;  */

long * FUN_10a4910b0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar4) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a4911ac; end: 10a49122f;  */

void FUN_10a4911ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a4910b0();
  if (lVar1 != 0) {
    func_0x00010a4911e0(param_1,lVar1);
  }
  return;
}



/* Entry: 10a491230; end: 10a49134f;  */

void FUN_10a491230(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a4912e4;
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
    if (uVar8 == uVar3) goto LAB_10a4912e4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a4912e4:
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



/* Entry: 10a491350; end: 10a49178b;  */

undefined1  [16] FUN_10a491350(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  ulong uVar18;
  undefined1 auVar19 [16];
  
  plVar11 = param_1;
  func_0x000107c2b05c();
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar18 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar18) == 0) {
      unaff_x26 = (long *)(uVar18 & (ulong)plVar11);
    }
    else {
      unaff_x26 = plVar11;
      if (plVar17 <= plVar11) {
        uVar3 = 0;
        if (plVar17 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar11 - uVar3 * (long)plVar17);
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar7; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        plVar8 = (long *)plVar16[1];
        if (plVar8 == plVar11) {
          plVar8 = param_1;
          func_0x000107c2b068(param_1,plVar16 + 2,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar6 = 0;
            goto LAB_10a491704;
          }
        }
        else {
          if (((ulong)plVar17 & uVar18) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar18);
          }
          else if (plVar17 <= plVar8) {
            uVar3 = 0;
            if (plVar17 != (long *)0x0) {
              uVar3 = (ulong)plVar8 / (ulong)plVar17;
            }
            plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar17);
          }
          if (plVar8 != unaff_x26) break;
        }
      }
    }
  }
  plVar16 = (long *)0x38;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = (long)plVar11;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar16 + 2,*param_3,param_3[1]);
  }
  else {
    lVar9 = *param_3;
    plVar16[3] = param_3[1];
    plVar16[2] = lVar9;
    plVar16[4] = param_3[2];
  }
  lVar9 = param_4[1];
  lVar5 = *param_4;
  plVar16[6] = param_4[1];
  plVar16[5] = lVar5;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar17 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar17)) goto LAB_10a49168c;
  uVar18 = 1;
  if ((long *)0x2 < plVar17) {
    uVar18 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
  }
  plVar8 = (long *)(uVar18 | (long)plVar17 << 1);
  plVar17 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar8 <= plVar17) {
    plVar8 = plVar17;
  }
  if ((long)plVar8 - 1U == 0) {
    plVar8 = (long *)0x2;
  }
  else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 < plVar8) {
LAB_10a491514:
    if ((ulong)plVar8 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a491774);
      (*pcVar4)();
    }
    lVar9 = (long)plVar8 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar9;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar17 = (long *)0x0;
    param_1[1] = (long)plVar8;
    do {
      *(undefined8 *)(*param_1 + (long)plVar17 * 8) = 0;
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar8 != plVar17);
    plVar10 = (long *)param_1[2];
    plVar17 = plVar8;
    if (plVar10 != (long *)0x0) {
      plVar12 = (long *)plVar10[1];
      uVar18 = (long)plVar8 - 1;
      if (((ulong)plVar8 & uVar18) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar18);
      }
      else if (plVar8 <= plVar12) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar12 / (ulong)plVar8;
        }
        plVar12 = (long *)((long)plVar12 - uVar3 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar10;
      while (plVar13 != (long *)0x0) {
        plVar15 = (long *)plVar13[1];
        if (((ulong)plVar8 & uVar18) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar18);
        }
        else if (plVar8 <= plVar15) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar15 / (ulong)plVar8;
          }
          plVar15 = (long *)((long)plVar15 - uVar3 * (long)plVar8);
        }
        plVar14 = plVar13;
        if (plVar15 != plVar12) {
          lVar9 = *param_1;
          if (*(long *)(lVar9 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar9 + (long)plVar15 * 8) = plVar10;
            plVar12 = plVar15;
          }
          else {
            *plVar10 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar9 + (long)plVar15 * 8);
            **(long **)(lVar9 + (long)plVar15 * 8) = (long)plVar13;
            plVar14 = plVar10;
          }
        }
        plVar10 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  else if (plVar8 < plVar17) {
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (plVar8 <= plVar10) {
      plVar8 = plVar10;
    }
    if (plVar8 < plVar17) {
      if (plVar8 != (long *)0x0) goto LAB_10a491514;
      lVar9 = *param_1;
      *param_1 = 0;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar11);
  }
  else {
    unaff_x26 = plVar11;
    if (plVar17 <= plVar11) {
      uVar18 = 0;
      if (plVar17 != (long *)0x0) {
        uVar18 = (ulong)plVar11 / (ulong)plVar17;
      }
      unaff_x26 = (long *)((long)plVar11 - uVar18 * (long)plVar17);
    }
  }
LAB_10a49168c:
  lVar9 = *param_1;
  plVar11 = *(long **)(lVar9 + (long)unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
    *(long **)(lVar9 + (long)unaff_x26 * 8) = plVar11;
    if (*plVar16 != 0) {
      plVar11 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar11) {
        uVar18 = 0;
        if (plVar17 != (long *)0x0) {
          uVar18 = (ulong)plVar11 / (ulong)plVar17;
        }
        plVar11 = (long *)((long)plVar11 - uVar18 * (long)plVar17);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
  }
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a491704:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar16;
  return auVar19;
}



/* Entry: 10a49178c; end: 10a491867;  */

void FUN_10a49178c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a48e524(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a491868; end: 10a491987;  */

void FUN_10a491868(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a49191c;
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
    if (uVar8 == uVar3) goto LAB_10a49191c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a49191c:
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



/* Entry: 10a491988; end: 10a491ad3;  */

void FUN_10a491988(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a476f28(param_5);
  func_0x000109898a18(&uStack_58,param_2,param_4);
  if (*(long *)(param_6 + 0x10) != 0) {
    uStack_48 = 0;
    lVar5 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + 0x870) + 0x300);
    __ZNSt13exception_ptrD1Ev(&uStack_48);
    if (lVar5 == 0) {
      func_0x000109896fbc(&uStack_48,uStack_58);
      __ZNSt13exception_ptraSERKS_(*(long *)(*(long *)(param_6 + 0x10) + 0x870) + 0x300,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  *param_1 = 0;
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a491ad4; end: 10a491aef;  */

void FUN_10a491ad4(void)

{
  return;
}



/* Entry: 10a491af0; end: 10a491c97;  */

void FUN_10a491af0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&ppuStack_60,param_2,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    pppuVar1 = &ppuStack_60;
  }
  if (*(long *)(param_6 + 0x10) == 0) {
    func_0x000107c2b054(&ppuStack_78,"",uStack_58);
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_6 + 0x10) + 0x870) + 0x68) + 0xb8);
    if ((*(byte *)(lVar4 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a491c58);
      (*pcVar2)();
    }
    uStack_48 = *(undefined8 *)(lVar4 + 0x50);
    func_0x00010989a93c(&ppuStack_78,&uStack_48,pppuVar1);
  }
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppuStack_60);
  }
  pppuVar1 = (undefined8 ***)ppuStack_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuVar1 = &ppuStack_78;
  }
  (**(code **)(*param_2 + 0x128))(&ppuStack_60,param_2,pppuVar1,uStack_70);
  *param_1 = 6;
  *(undefined8 ***)(param_1 + 2) = ppuStack_60;
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
  }
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a491c98; end: 10a491cb3;  */

void FUN_10a491c98(void)

{
  return;
}



/* Entry: 10a491cb4; end: 10a492da7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a491cb4(undefined4 *param_1,long ******param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  long *******ppppppplVar7;
  undefined **ppuVar8;
  long *****ppppplVar9;
  ulong uVar10;
  undefined *extraout_x8;
  undefined *puVar11;
  ulong uVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  long ******pppppplStack_140;
  long ******pppppplStack_138;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *****ppppplStack_118;
  undefined8 uStack_110;
  long *******ppppppplStack_108;
  long ******pppppplStack_100;
  char cStack_f1;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long ******pppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  byte bStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long ******pppppplStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar5 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppplVar5[0x59] < (long *****)0x8) {
    pppppplVar5[(long)pppppplVar5[0x59] + 0x4e] = pppppplVar5[0x5a];
    pppppplVar5[0x59] = (long *****)((long)pppppplVar5[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppplVar5 + 0x4b);
  }
  FUN_10a492da8(param_5);
  iVar1 = *param_4;
  if (iVar1 != 6) {
    pppppplVar6 = param_2;
    func_0x000109898688(param_2,param_4);
    if (pppppplVar6 != (long ******)0x0) {
      func_0x00010989879c(&ppppppplStack_b0);
      if ((ppppppplStack_b0 == (long *******)0x0) ||
         (ppppppplVar17 = ppppppplStack_b0,
         ___dynamic_cast(ppppppplStack_b0,&PTR_DAT_110b178e0,&PTR_DAT_110c4efd8,0x10),
         ppppppplVar17 == (long *******)0x0)) {
        ppppppplVar16 = (long *******)&ppppppplStack_128;
      }
      else {
        ppppppplStack_120 = ppppppplStack_a8;
        ppppppplVar16 = (long *******)&ppppppplStack_b0;
        ppppppplStack_128 = ppppppplVar17;
      }
      *ppppppplVar16 = (long ******)0x0;
      ppppppplVar16[1] = (long ******)0x0;
      ppppppplVar17 = ppppppplStack_a8;
      if (ppppppplStack_a8 != (long *******)0x0) {
        ppppppplVar16 = ppppppplStack_a8 + 1;
        do {
          pppppplVar6 = *ppppppplVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
          if (bVar3) {
            *ppppppplVar16 = (long ******)((long)pppppplVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar6 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_a8)[2])(ppppppplStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
        }
      }
      ppppppplVar16 = ppppppplStack_120;
      ppppppplVar17 = ppppppplStack_128;
      if (ppppppplStack_120 != (long *******)0x0) {
        ppppppplVar7 = ppppppplStack_120 + 1;
        do {
          pppppplVar6 = *ppppppplVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar7,0x10);
          if (bVar3) {
            *ppppppplVar7 = (long ******)((long)pppppplVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar6 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_120)[2])(ppppppplStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
        }
      }
      if (ppppppplVar17 != (long *******)0x0) {
        func_0x000109898610(&ppppppplStack_108,param_2,param_4);
        if (ppppppplStack_108 == (long *******)0x0) {
          ppppppplStack_f0 = (long *******)0x0;
          ppppppplStack_e8 = (long *******)0x0;
        }
        else {
          ppppppplVar17 = ppppppplStack_108;
          ___dynamic_cast(ppppppplStack_108,&PTR_DAT_110b178e0,&PTR_DAT_110c4efd8,0x10);
          if (ppppppplVar17 == (long *******)0x0) {
            ppppppplVar16 = (long *******)&ppppppplStack_e0;
          }
          else {
            pppppplStack_d8 = pppppplStack_100;
            ppppppplVar16 = (long *******)&ppppppplStack_108;
            ppppppplStack_e0 = ppppppplVar17;
          }
          *ppppppplVar16 = (long ******)0x0;
          ppppppplVar16[1] = (long ******)0x0;
          ppppppplVar17 = ppppppplStack_e0;
          if (ppppppplStack_e0 == (long *******)0x0) {
            func_0x00010988bd28(&UNK_10f685500);
            goto LAB_10a492d90;
          }
          FUN_10a0533bc(&ppppppplStack_128,ppppppplStack_e0);
          if (ppppppplStack_128 == (long *******)0x0) {
            func_0x0001098849a4(&ppppppplStack_b0,param_2,param_4);
            ppppppplVar16 = (long *******)0x30;
            __Znwm();
            pppppplVar6 = pppppplStack_d8;
            ppppppplVar16[1] = (long ******)0x0;
            ppppppplVar16[2] = (long ******)0x0;
            *ppppppplVar16 = (long ******)&PTR_DAT_110b174d8;
            ppppppplStack_d0 = ppppppplVar16 + 3;
            if ((int)ppppppplStack_b0 == 3) {
              ppppppplVar16[3] = param_2;
              *(undefined4 *)(ppppppplVar16 + 4) = 3;
              ppppppplVar16[5] = (long ******)ppppppplStack_a8;
            }
            else if ((int)ppppppplStack_b0 == 2) {
              ppppppplVar16[3] = param_2;
              *(undefined4 *)(ppppppplVar16 + 4) = 2;
              *(undefined1 *)(ppppppplVar16 + 5) = ppppppplStack_a8._0_1_;
            }
            else if ((int)ppppppplStack_b0 < 4) {
              ppppppplVar16[3] = param_2;
              *(int *)(ppppppplVar16 + 4) = (int)ppppppplStack_b0;
            }
            else {
              ppppppplVar16[3] = param_2;
              *(int *)(ppppppplVar16 + 4) = (int)ppppppplStack_b0;
              ppppppplVar16[5] = (long ******)ppppppplStack_a8;
            }
            ppppppplStack_b0 = ppppppplVar17;
            ppppppplStack_a8 = (long *******)pppppplStack_d8;
            if (pppppplStack_d8 != (long ******)0x0) {
              pppppplVar15 = pppppplStack_d8 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
                if (bVar3) {
                  *pppppplVar15 = (long *****)((long)*pppppplVar15 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            ppppppplVar7 = (long *******)0x90;
            ppppppplStack_c8 = ppppppplVar16;
            __Znwm();
            ppppppplVar16 = ppppppplStack_120;
            ppppppplVar7[1] = (long ******)0x0;
            ppppppplVar7[2] = (long ******)0x0;
            *ppppppplVar7 = (long ******)&PTR_FUN_110b9fe30;
            ppppppplStack_128 = ppppppplVar7 + 3;
            *ppppppplStack_128 = (long ******)ppppppplVar17;
            ppppppplStack_b0 = (long *******)0x0;
            ppppppplStack_a8 = (long *******)0x0;
            ppppppplVar7[4] = pppppplVar6;
            ppppppplVar7[5] = (long ******)0x0;
            ppppppplVar7[6] = (long ******)0x0;
            ppppppplVar7[7] = (long ******)0x32aaaba7;
            ppppppplVar7[9] = (long ******)0x0;
            ppppppplVar7[8] = (long ******)0x0;
            ppppppplVar7[0xb] = (long ******)0x0;
            ppppppplVar7[10] = (long ******)0x0;
            ppppppplVar7[0xd] = (long ******)0x0;
            ppppppplVar7[0xc] = (long ******)0x0;
            ppppppplVar7[0xf] = (long ******)0x0;
            ppppppplVar7[0xe] = (long ******)0x0;
            ppppppplVar7[0x11] = (long ******)0x0;
            ppppppplVar7[0x10] = (long ******)0x0;
            if (ppppppplStack_120 != (long *******)0x0) {
              ppppppplVar17 = ppppppplStack_120 + 1;
              do {
                pppppplVar6 = *ppppppplVar17;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                if (bVar3) {
                  *ppppppplVar17 = (long ******)((long)pppppplVar6 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (pppppplVar6 == (long ******)0x0) {
                pppppplVar6 = *ppppppplStack_120;
                ppppppplStack_120 = ppppppplVar7;
                (*(code *)pppppplVar6[2])(ppppppplVar16);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar16);
                ppppppplVar7 = ppppppplStack_120;
              }
            }
            ppppppplStack_120 = ppppppplVar7;
            ppppppplVar17 = ppppppplStack_a8;
            if (ppppppplStack_a8 != (long *******)0x0) {
              pppppplVar6 = (long ******)(ppppppplStack_a8 + 1);
              do {
                ppppplVar9 = *pppppplVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppppplVar6,0x10);
                if (bVar3) {
                  *pppppplVar6 = (long *****)((long)ppppplVar9 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppppplVar9 == (long *****)0x0) {
                (*(code *)(*ppppppplStack_a8)[2])(ppppppplStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
              }
            }
            func_0x00010a04a7fc(ppppppplStack_128 + 2,&ppppppplStack_d0);
            ppppppplStack_f0 = ppppppplStack_e0;
            ppppppplStack_e8 = ppppppplStack_120;
            if (ppppppplStack_120 == (long *******)0x0) {
              ppppppplStack_a8 = (long *******)0x0;
            }
            else {
              ppppppplVar17 = ppppppplStack_120 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                if (bVar3) {
                  *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              ppppppplStack_a8 = ppppppplStack_120;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
                if (bVar3) {
                  *ppppppplVar17 = (long ******)((long)*ppppppplVar17 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            ppppppplStack_b0 = ppppppplStack_e0;
            func_0x00010a053e8c(ppppppplStack_128,&ppppppplStack_b0);
            ppppppplVar17 = ppppppplStack_a8;
            if (ppppppplStack_a8 != (long *******)0x0) {
              ppppppplVar16 = ppppppplStack_a8 + 1;
              do {
                pppppplVar6 = *ppppppplVar16;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                if (bVar3) {
                  *ppppppplVar16 = (long ******)((long)pppppplVar6 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (pppppplVar6 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_a8)[2])(ppppppplStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
              }
            }
            ppppppplVar17 = ppppppplStack_e0;
            func_0x00010a053ee8(ppppppplStack_e0,&ppppppplStack_128);
            ppuVar8 = &PTR___tlv_bootstrap_11340df48;
            (*(code *)PTR___tlv_bootstrap_11340df48)(ppppppplVar17[10]);
            puVar11 = *ppuVar8;
            if (extraout_x8 != (undefined *)0x0) {
              puVar11 = extraout_x8;
            }
            FUN_10aa89b3c(*(undefined8 *)(puVar11 + 0x870),&ppppppplStack_128);
            ppppppplVar17 = ppppppplStack_c8;
            if (ppppppplStack_c8 != (long *******)0x0) {
              ppppppplVar16 = ppppppplStack_c8 + 1;
              do {
                pppppplVar6 = *ppppppplVar16;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
                if (bVar3) {
                  *ppppppplVar16 = (long ******)((long)pppppplVar6 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (pppppplVar6 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_c8)[2])(ppppppplStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
              }
            }
          }
          else {
            FUN_10a053e40(&ppppppplStack_b0);
            ppppppplStack_e8 = ppppppplStack_a8;
            ppppppplStack_f0 = ppppppplStack_b0;
          }
          ppppppplVar17 = ppppppplStack_120;
          if (ppppppplStack_120 != (long *******)0x0) {
            ppppppplVar16 = ppppppplStack_120 + 1;
            do {
              pppppplVar6 = *ppppppplVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
              if (bVar3) {
                *ppppppplVar16 = (long ******)((long)pppppplVar6 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pppppplVar6 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_120)[2])(ppppppplStack_120);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
            }
          }
          pppppplVar6 = pppppplStack_d8;
          if (pppppplStack_d8 != (long ******)0x0) {
            pppppplVar15 = pppppplStack_d8 + 1;
            do {
              ppppplVar9 = *pppppplVar15;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
              if (bVar3) {
                *pppppplVar15 = (long *****)((long)ppppplVar9 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppppplVar9 == (long *****)0x0) {
              (*(code *)(*pppppplStack_d8)[2])(pppppplStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar6);
            }
          }
        }
        pppppplVar6 = pppppplStack_100;
        if (pppppplStack_100 != (long ******)0x0) {
          pppppplVar15 = pppppplStack_100 + 1;
          do {
            ppppplVar9 = *pppppplVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
            if (bVar3) {
              *pppppplVar15 = (long *****)((long)ppppplVar9 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar9 == (long *****)0x0) {
            (*(code *)(*pppppplStack_100)[2])(pppppplStack_100);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar6);
          }
        }
        ppppppplStack_c8 = ppppppplStack_e8;
        bStack_b8 = 1;
        ppppppplStack_d0 = ppppppplStack_f0;
        goto LAB_10a491f70;
      }
    }
    func_0x00010988bd28(&UNK_10f634795);
    goto LAB_10a492d90;
  }
  func_0x000109898570(&ppppppplStack_b0,param_2,param_4);
  ppppppplStack_c8 = ppppppplStack_a8;
  ppppppplStack_c0 = ppppppplStack_a0;
  bStack_b8 = 0;
  ppppppplStack_d0 = ppppppplStack_b0;
LAB_10a491f70:
  ppppppplVar16 = *(long ********)(*(long *)(param_6 + 0x10) + 0x870);
  ppppppplVar17 = (long *******)&ppppppplStack_d0;
  if (iVar1 != 6) {
    ppppppplVar17 = ppppppplStack_d0 + 0x28;
  }
  ppppplVar9 = ppppppplVar16[2][0x144];
  if (*(char *)((long)ppppplVar9 + 0x21) == '\x01') {
    if (((ulong)ppppplVar9[4] & 1) != 0) goto LAB_10a492130;
LAB_10a491fa4:
    FUN_10a4643c4(&ppppppplStack_108,ppppppplVar17);
    ppppppplVar7 = ppppppplVar16 + 0x51;
    FUN_10a48f7e0(ppppppplVar7,&ppppppplStack_108);
    if (ppppppplVar7 == (long *******)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppplStack_b0,&UNK_10f659c7a,ppppppplVar17);
      FUN_10a0029c0(&ppppppplStack_b0);
      goto LAB_10a492d90;
    }
    if (*(char *)((long)ppppppplVar7 + 0x49) == '\x01') {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppplStack_b0,&UNK_10f659ca6,ppppppplVar17);
      FUN_10a0029c0(&ppppppplStack_b0);
      goto LAB_10a492d90;
    }
    if (((ulong)ppppppplVar7[9] & 1) != 0) {
LAB_10a4920c8:
      FUN_10a464bc0(&ppppppplStack_128,ppppppplVar7[7],&UNK_10f6035a4);
      pppppplStack_138 = (long ******)0x30;
      __Znwm();
      pppppplStack_138[1] = (long *****)0x0;
      pppppplStack_138[2] = (long *****)0x0;
      *pppppplStack_138 = (long *****)&PTR_DAT_110b174d8;
      pppppplStack_140 = pppppplStack_138 + 3;
      *pppppplStack_140 = (long *****)ppppppplStack_128;
      *(int *)(pppppplStack_138 + 4) = (int)ppppppplStack_120;
      if ((int)ppppppplStack_120 == 3) {
        pppppplStack_138[5] = ppppplStack_118;
      }
      else if ((int)ppppppplStack_120 == 2) {
        *(undefined1 *)(pppppplStack_138 + 5) = ppppplStack_118._0_1_;
      }
      else if (3 < (int)ppppppplStack_120) {
        pppppplStack_138[5] = ppppplStack_118;
      }
LAB_10a49232c:
      if (cStack_f1 < '\0') {
        __ZdlPv(ppppppplStack_108);
      }
      goto LAB_10a4929ac;
    }
    ppppppplStack_e0 = (long *******)0x0;
    pppppplStack_d8 = (long ******)0x0;
    pppppplVar6 = ppppppplVar7[6];
    if (((pppppplVar6 != (long ******)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), pppppplStack_d8 = pppppplVar6,
        pppppplVar6 != (long ******)0x0)) &&
       (ppppppplVar19 = (long *******)ppppppplVar7[5], ppppppplStack_e0 = ppppppplVar19,
       ppppppplVar19 != (long *******)0x0)) {
      *(undefined1 *)(ppppppplVar7 + 9) = 1;
      ppppppplVar17 = (long *******)&ppppppplStack_128;
      pppppplVar15 = pppppplVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
        if (bVar3) {
          *pppppplVar15 = (long *****)((long)*pppppplVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppppppplStack_b0 = (long *******)FUN_10a490968;
      ppppppplStack_a8 = (long *******)&PTR_FUN_110bdd990;
      ppppplStack_118 = (long *****)0x0;
      uStack_110 = 0;
      ppppppplStack_128 = ppppppplVar16;
      ppppppplStack_120 = ppppppplVar7;
      ppppppplStack_a0 = ppppppplVar16;
      ppppppplStack_98 = ppppppplVar7;
      ppppppplStack_90 = ppppppplVar19;
      pppppplStack_88 = pppppplVar6;
      FUN_10a46450c(ppppppplVar16,&ppppppplStack_e0,&ppppppplStack_b0);
      (*(code *)*ppppppplStack_a8)(&ppppppplStack_a8);
      ppppppplVar18 = ppppppplVar16 + 0x4c;
      FUN_10a490360(ppppppplVar18,ppppppplVar19[0x2b]);
      func_0x00010a04a7fc(ppppppplVar7 + 7,ppppppplVar18 + 3);
      if (0xb0 < *(int *)(ppppppplVar16[2][0x144] + 3)) {
        do {
          ppppplVar9 = *pppppplVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
          if (bVar3) {
            *pppppplVar15 = (long *****)((long)ppppplVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppplVar9 == (long *****)0x0) {
          (*(code *)(*pppppplVar6)[2])(pppppplVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar6);
        }
        goto LAB_10a4920c8;
      }
      pppppplStack_138 = ppppppplVar7[8];
      pppppplStack_140 = ppppppplVar7[7];
      if (ppppppplVar7[8] != (long ******)0x0) {
        pppppplVar13 = ppppppplVar7[8] + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar3) {
            *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      do {
        ppppplVar9 = *pppppplVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
        if (bVar3) {
          *pppppplVar15 = (long *****)((long)ppppplVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar9 == (long *****)0x0) {
        (*(code *)(*pppppplVar6)[2])(pppppplVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar6);
      }
      goto LAB_10a49232c;
    }
  }
  else {
    if (*(int *)(ppppplVar9 + 3) < 0xe9) goto LAB_10a491fa4;
LAB_10a492130:
    FUN_10a464450(&ppppppplStack_108,ppppppplVar16);
    FUN_10a464ac8(ppppppplStack_108,0);
    ppppppplVar7 = ppppppplStack_108;
    FUN_10a490224();
    if (ppppppplVar7 == (long *******)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppplStack_b0,&UNK_10f659c7a,ppppppplVar17);
      FUN_10a0029c0(&ppppppplStack_b0);
      goto LAB_10a492d90;
    }
    ppppppplVar17 = ppppppplVar7 + 8;
    ppppppplVar19 = (long *******)*ppppppplVar17;
    if ((ppppppplVar19 == (long *******)0x0) ||
       (ppppppplVar18 = ppppppplVar19,
       ___dynamic_cast(ppppppplVar19,&PTR_DAT_110c42c58,&PTR_DAT_110c4efd8,0),
       ppppppplVar18 == (long *******)0x0)) {
      ppppppplVar18 = (long *******)0x0;
      ppppppplStack_e0 = (long *******)0x0;
      pppppplStack_d8 = (long ******)0x0;
      if (ppppppplVar19 != (long *******)0x0) goto LAB_10a4921c0;
LAB_10a492248:
      ppppppplStack_f0 = (long *******)0x0;
      ppppppplStack_e8 = (long *******)0x0;
      if (ppppppplVar18 == (long *******)0x0) {
        pppppplVar6 = ppppppplVar16[0xd];
        __ZNSt3__115recursive_mutex4lockEv(ppppppplVar16 + 0xe);
        if (((ulong)pppppplVar6[0x17][0x3c] & 1) == 0) goto LAB_10a492d90;
        ppppplVar9 = (long *****)pppppplVar6[0x17][10];
        pppppplStack_138 = (long ******)0x30;
        __Znwm();
        pppppplStack_138[1] = (long *****)0x0;
        pppppplStack_138[2] = (long *****)0x0;
        *pppppplStack_138 = (long *****)&PTR_DAT_110b174d8;
        pppppplStack_140 = pppppplStack_138 + 3;
        *pppppplStack_140 = ppppplVar9;
        *(undefined4 *)(pppppplStack_138 + 4) = 0;
        FUN_10a464b64(pppppplStack_140,ppppppplVar17);
        __ZNSt3__115recursive_mutex6unlockEv(ppppppplVar16 + 0xe);
      }
      else {
        ppppppplVar17 = (long *******)ppppppplVar18[0x2b];
        ppppppplVar7 = ppppppplVar16 + 0x4c;
        FUN_10a490360(ppppppplVar7,ppppppplVar17);
        if (ppppppplVar7 == (long *******)0x0) {
          ppppppplStack_b0 = (long *******)FUN_10a490720;
          ppppppplStack_a8 = (long *******)&PTR_FUN_110bdd978;
          ppppppplStack_a0 = ppppppplVar16;
          ppppppplStack_98 = ppppppplVar17;
          FUN_10a46450c(ppppppplVar16,&ppppppplStack_e0,&ppppppplStack_b0);
          (*(code *)*ppppppplStack_a8)(&ppppppplStack_a8);
          ppppppplVar7 = ppppppplVar16 + 0x4c;
          FUN_10a490360(ppppppplVar7,ppppppplVar17);
          if (ppppppplVar7 == (long *******)0x0) {
            FUN_10a00946c(&UNK_10f659c8f);
            goto LAB_10a492d90;
          }
        }
        FUN_10a464bc0(&ppppppplStack_128,ppppppplVar7[3],&UNK_10f6035a4);
        pppppplStack_138 = (long ******)0x30;
        __Znwm();
        pppppplStack_138[1] = (long *****)0x0;
        pppppplStack_138[2] = (long *****)0x0;
        *pppppplStack_138 = (long *****)&PTR_DAT_110b174d8;
        pppppplStack_140 = pppppplStack_138 + 3;
        *pppppplStack_140 = (long *****)ppppppplStack_128;
        *(int *)(pppppplStack_138 + 4) = (int)ppppppplStack_120;
        if ((int)ppppppplStack_120 == 3) {
          pppppplStack_138[5] = ppppplStack_118;
        }
        else if ((int)ppppppplStack_120 == 2) {
          *(undefined1 *)(pppppplStack_138 + 5) = ppppplStack_118._0_1_;
        }
        else if (3 < (int)ppppppplStack_120) {
          pppppplStack_138[5] = ppppplStack_118;
        }
      }
    }
    else {
      pppppplStack_d8 = ppppppplVar7[9];
      ppppppplStack_e0 = ppppppplVar18;
      if (pppppplStack_d8 != (long ******)0x0) {
        pppppplVar6 = pppppplStack_d8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar6,0x10);
          if (bVar3) {
            *pppppplVar6 = (long *****)((long)*pppppplVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppppppplVar19 = (long *******)*ppppppplVar17;
        if (ppppppplVar19 == (long *******)0x0) goto LAB_10a492248;
      }
LAB_10a4921c0:
      ppppppplVar18 = ppppppplStack_e0;
      ___dynamic_cast(ppppppplVar19,&PTR_DAT_110c42c58,&PTR_DAT_110c4d9f8,0);
      if (ppppppplVar19 == (long *******)0x0) goto LAB_10a492248;
      ppppppplVar17 = (long *******)ppppppplVar7[9];
      if (ppppppplVar17 != (long *******)0x0) {
        ppppppplVar7 = ppppppplVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar7,0x10);
          if (bVar3) {
            *ppppppplVar7 = (long ******)((long)*ppppppplVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppplVar6 = ppppppplVar19[0x20];
      ppppppplVar7 = ppppppplVar16 + 0x4c;
      ppppppplVar18 = ppppppplVar7;
      ppppppplStack_f0 = ppppppplVar19;
      ppppppplStack_e8 = ppppppplVar17;
      FUN_10a490360(ppppppplVar7,pppppplVar6);
      if (ppppppplVar18 == (long *******)0x0) {
        pppppplVar15 = ppppppplVar16[0xd];
        __ZNSt3__115recursive_mutex4lockEv(ppppppplVar16 + 0xe);
        if (((ulong)pppppplVar15[0x17][0x3c] & 1) == 0) goto LAB_10a492d90;
        pppppplVar15 = (long ******)pppppplVar15[0x17][10];
        pppppplStack_138 = (long ******)0x30;
        __Znwm();
        pppppplVar13 = pppppplStack_138 + 1;
        *pppppplVar13 = (long *****)0x0;
        pppppplStack_138[2] = (long *****)0x0;
        pppppplStack_140 = pppppplStack_138 + 3;
        *pppppplStack_140 = (long *****)pppppplVar15;
        *pppppplStack_138 = (long *****)&PTR_DAT_110b174d8;
        *(undefined4 *)(pppppplStack_138 + 4) = 0;
        FUN_10a4903fc(&ppppppplStack_b0,pppppplVar15,ppppppplVar19 + 0x1e);
        func_0x0001098968d0(pppppplStack_138 + 4,&ppppppplStack_b0);
        if ((3 < (int)ppppppplStack_b0) && (ppppppplStack_a8 != (long *******)0x0)) {
          (*(code *)**ppppppplStack_a8)();
        }
        pppppplVar20 = ppppppplVar16[0x4d];
        if (pppppplVar20 != (long ******)0x0) {
          uVar10 = (long)pppppplVar20 - 1;
          if (((ulong)pppppplVar20 & uVar10) == 0) {
            pppppplVar15 = (long ******)(uVar10 & (ulong)pppppplVar6);
          }
          else {
            pppppplVar15 = pppppplVar6;
            if (pppppplVar20 <= pppppplVar6) {
              uVar12 = 0;
              if (pppppplVar20 != (long ******)0x0) {
                uVar12 = (ulong)pppppplVar6 / (ulong)pppppplVar20;
              }
              pppppplVar15 = (long ******)((long)pppppplVar6 - uVar12 * (long)pppppplVar20);
            }
          }
          ppppplVar9 = (*ppppppplVar7)[(long)pppppplVar15];
          if (ppppplVar9 != (long *****)0x0) {
            do {
              while( true ) {
                ppppplVar9 = (long *****)*ppppplVar9;
                if (ppppplVar9 == (long *****)0x0) goto LAB_10a4927bc;
                pppppplVar14 = (long ******)ppppplVar9[1];
                if (pppppplVar14 != pppppplVar6) break;
                if ((long ******)ppppplVar9[2] == pppppplVar6) goto LAB_10a4928fc;
              }
              if (((ulong)pppppplVar20 & uVar10) == 0) {
                pppppplVar14 = (long ******)((ulong)pppppplVar14 & uVar10);
              }
              else if (pppppplVar20 <= pppppplVar14) {
                uVar12 = 0;
                if (pppppplVar20 != (long ******)0x0) {
                  uVar12 = (ulong)pppppplVar14 / (ulong)pppppplVar20;
                }
                pppppplVar14 = (long ******)((long)pppppplVar14 - uVar12 * (long)pppppplVar20);
              }
            } while (pppppplVar14 == pppppplVar15);
          }
        }
LAB_10a4927bc:
        ppppppplVar19 = (long *******)0x28;
        __Znwm();
        ppppppplStack_a0 = (long *******)0x1;
        *ppppppplVar19 = (long ******)0x0;
        ppppppplVar19[1] = pppppplVar6;
        ppppppplVar19[2] = pppppplVar6;
        ppppppplVar19[3] = pppppplStack_140;
        ppppppplVar19[4] = pppppplStack_138;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar3) {
            *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppppppplStack_b0 = ppppppplVar19;
        ppppppplStack_a8 = ppppppplVar7;
        if ((pppppplVar20 == (long ******)0x0) ||
           (*(float *)(ppppppplVar16 + 0x50) * (float)pppppplVar20 <
            (float)((long)ppppppplVar16[0x4f] + 1))) {
          uVar10 = 1;
          if ((long ******)0x2 < pppppplVar20) {
            uVar10 = (ulong)(((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) != 0);
          }
          uVar10 = uVar10 | (long)pppppplVar20 << 1;
          uVar12 = (ulong)((float)((long)ppppppplVar16[0x4f] + 1) / *(float *)(ppppppplVar16 + 0x50)
                          );
          if (uVar10 <= uVar12) {
            uVar10 = uVar12;
          }
          FUN_10a49000c(ppppppplVar7,uVar10);
          pppppplVar20 = ppppppplVar16[0x4d];
          if (((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) == 0) {
            pppppplVar15 = (long ******)((long)pppppplVar20 - 1U & (ulong)pppppplVar6);
          }
          else {
            pppppplVar15 = pppppplVar6;
            if (pppppplVar20 <= pppppplVar6) {
              uVar10 = 0;
              if (pppppplVar20 != (long ******)0x0) {
                uVar10 = (ulong)pppppplVar6 / (ulong)pppppplVar20;
              }
              pppppplVar15 = (long ******)((long)pppppplVar6 - uVar10 * (long)pppppplVar20);
            }
          }
        }
        pppppplVar13 = *ppppppplVar7;
        pppppplVar6 = (long ******)pppppplVar13[(long)pppppplVar15];
        if (pppppplVar6 == (long ******)0x0) {
          *ppppppplVar19 = ppppppplVar16[0x4e];
          ppppppplVar16[0x4e] = (long ******)ppppppplVar19;
          pppppplVar13[(long)pppppplVar15] = (long *****)(ppppppplVar16 + 0x4e);
          if (*ppppppplVar19 != (long ******)0x0) {
            pppppplVar6 = (long ******)(*ppppppplVar19)[1];
            if (((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) == 0) {
              pppppplVar6 = (long ******)((ulong)pppppplVar6 & (long)pppppplVar20 - 1U);
            }
            else if (pppppplVar20 <= pppppplVar6) {
              uVar10 = 0;
              if (pppppplVar20 != (long ******)0x0) {
                uVar10 = (ulong)pppppplVar6 / (ulong)pppppplVar20;
              }
              pppppplVar6 = (long ******)((long)pppppplVar6 - uVar10 * (long)pppppplVar20);
            }
            pppppplVar6 = *ppppppplVar7 + (long)pppppplVar6;
            goto LAB_10a4928ec;
          }
        }
        else {
          *ppppppplVar19 = (long ******)*pppppplVar6;
LAB_10a4928ec:
          *pppppplVar6 = (long *****)ppppppplVar19;
        }
        ppppppplVar16[0x4f] = (long ******)((long)ppppppplVar16[0x4f] + 1);
LAB_10a4928fc:
        __ZNSt3__115recursive_mutex6unlockEv(ppppppplVar16 + 0xe);
      }
      else {
        pppppplStack_138 = ppppppplVar18[4];
        pppppplStack_140 = ppppppplVar18[3];
        if (ppppppplVar18[4] != (long ******)0x0) {
          pppppplVar6 = ppppppplVar18[4] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppplVar6,0x10);
            if (bVar3) {
              *pppppplVar6 = (long *****)((long)*pppppplVar6 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if (ppppppplVar17 != (long *******)0x0) {
        ppppppplVar16 = ppppppplVar17 + 1;
        do {
          pppppplVar6 = *ppppppplVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
          if (bVar3) {
            *ppppppplVar16 = (long ******)((long)pppppplVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar6 == (long ******)0x0) {
          (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
        }
      }
    }
    pppppplVar6 = pppppplStack_d8;
    if (pppppplStack_d8 != (long ******)0x0) {
      pppppplVar15 = pppppplStack_d8 + 1;
      do {
        ppppplVar9 = *pppppplVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
        if (bVar3) {
          *pppppplVar15 = (long *****)((long)ppppplVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar9 == (long *****)0x0) {
        (*(code *)(*pppppplStack_d8)[2])(pppppplStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar6);
      }
    }
    if (pppppplStack_100 != (long ******)0x0) {
      pppppplVar6 = pppppplStack_100 + 1;
      do {
        ppppplVar9 = *pppppplVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar6,0x10);
        if (bVar3) {
          *pppppplVar6 = (long *****)((long)ppppplVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar9 == (long *****)0x0) {
        (*(code *)(*pppppplStack_100)[2])(pppppplStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_100);
      }
    }
LAB_10a4929ac:
    if (2 < (ulong)bStack_b8) goto LAB_10a492d90;
    (*(code *)(&PTR_FUN_110bdd9d8)[bStack_b8])(&ppppppplStack_d0);
    if (pppppplStack_140 == (long ******)0x0) {
      *param_1 = 1;
    }
    else {
      func_0x0001098849a4(param_1,param_2,pppppplStack_140 + 1);
    }
    if (pppppplStack_138 != (long ******)0x0) {
      pppppplVar6 = pppppplStack_138 + 1;
      do {
        ppppplVar9 = *pppppplVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar6,0x10);
        if (bVar3) {
          *pppppplVar6 = (long *****)((long)ppppplVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar9 == (long *****)0x0) {
        (*(code *)(*pppppplStack_138)[2])(pppppplStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_138);
      }
    }
    func_0x00010988c170(pppppplVar5 + 0x4b);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppplStack_b0,&UNK_10f659c7a,ppppppplVar17);
  FUN_10a0029c0(&ppppppplStack_b0);
LAB_10a492d90:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a492d94);
  (*pcVar4)();
}



/* Entry: 10a492da8; end: 10a492dcb;  */

void FUN_10a492da8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 10a492dcc; end: 10a492e03;  */

void FUN_10a492dcc(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a492e04; end: 10a492f47;  */

void FUN_10a492e04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_50 [8];
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
  FUN_10a476f28(param_5);
  func_0x000109898a18(auStack_50,param_2,param_4);
  lVar5 = *(long *)(*(long *)(param_6 + 0x10) + 0x870);
  (**(code **)(lVar5 + 0x1f8))(auStack_50,lVar5 + 0x1f8);
  *(undefined8 *)(lVar5 + 0x1f8) = 0x10a473244;
  (*(code *)**(undefined8 **)(lVar5 + 0x200))(lVar5 + 0x200);
  *(undefined ***)(lVar5 + 0x200) = &PTR_DAT_110ae9180;
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
  *param_1 = 0;
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a492f48; end: 10a492f63;  */

void FUN_10a492f48(void)

{
  return;
}



/* Entry: 10a492f64; end: 10a49330b;  */

void FUN_10a492f64(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 auStack_a8 [2];
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(auStack_a8,param_2,param_4);
  lVar13 = *(long *)(*(long *)(param_6 + 0x10) + 0x870);
  lVar12 = *(long *)(*(long *)(lVar13 + 0x10) + 0xa20);
  if (*(char *)(lVar12 + 0x21) == '\x01') {
    if ((*(byte *)(lVar12 + 0x20) & 1) != 0) {
LAB_10a493120:
      FUN_10a464450(&lStack_90,lVar13);
      FUN_10a464ac8(lStack_90,1);
      FUN_10a490224();
      if (lStack_90 != 0) {
        lVar13 = *(long *)(lStack_90 + 0x40);
        plVar14 = *(long **)(lStack_90 + 0x48);
        if (plVar14 != (long *)0x0) {
          plVar10 = plVar14 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        lVar12 = *(long *)(lVar13 + 0xf0);
        lVar13 = (long)*(char *)(lVar12 + 0xaf);
        if (lVar13 < 0) {
          param_4 = *(long *)(lVar12 + 0x98);
          lVar13 = *(long *)(lVar12 + 0xa0);
        }
        else {
          param_4 = lVar12 + 0x98;
        }
        if (plVar14 != (long *)0x0) {
          plVar10 = plVar14 + 1;
          do {
            lVar12 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (plStack_88 != (long *)0x0) {
          plVar14 = plStack_88 + 1;
          do {
            lVar12 = *plVar14;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar7) {
              *plVar14 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
LAB_10a4931fc:
        if (cStack_91 < '\0') {
          __ZdlPv(auStack_a8[0]);
        }
        (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,param_4,lVar13);
        *param_1 = 6;
        func_0x00010988c170(plVar9 + 0x4b);
        return;
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppuStack_78,&UNK_10f659cbe,auStack_a8);
      FUN_10a0029c0(&ppppuStack_78);
      goto LAB_10a493280;
    }
  }
  else if (0xe8 < *(int *)(lVar12 + 0x18)) goto LAB_10a493120;
  FUN_10a4643c4(&ppppuStack_78,auStack_a8);
  plVar14 = *(long **)(lVar13 + 0x2e8);
  if (plVar14 != (long *)0x0) {
    do {
      plVar10 = (long *)plVar14[5];
      if ((plVar10 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0)) {
        lVar12 = plVar14[4];
        if (lVar12 != 0) {
          bVar5 = *(byte *)(lVar12 + 0x157);
          uVar2 = *(ulong *)(lVar12 + 0x148);
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          uVar3 = uStack_70;
          if (-1 < (char)bStack_61) {
            uVar3 = (ulong)bStack_61;
          }
          if (uVar2 != uVar3) goto LAB_10a493090;
          lVar11 = *(long *)(lVar12 + 0x140);
          if (-1 < (char)bVar5) {
            lVar11 = lVar12 + 0x140;
          }
          pppppuVar4 = (undefined8 *****)ppppuStack_78;
          if (-1 < (char)bStack_61) {
            pppppuVar4 = &ppppuStack_78;
          }
          _memcmp(lVar11,pppppuVar4);
          if ((int)lVar11 != 0) goto LAB_10a493090;
          param_4 = plVar14[2];
          lVar13 = plVar14[3];
          plVar1 = plVar10 + 1;
          do {
            lVar12 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 == 0) {
            bVar7 = false;
            goto LAB_10a4930d0;
          }
LAB_10a493178:
          if ((char)bStack_61 < '\0') {
            __ZdlPv(ppppuStack_78);
          }
          goto LAB_10a4931fc;
        }
LAB_10a493090:
        plVar1 = plVar10 + 1;
        do {
          lVar12 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          bVar7 = true;
LAB_10a4930d0:
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          if (!bVar7) goto LAB_10a493178;
        }
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_90,&UNK_10f659cbe,auStack_a8);
  FUN_10a0029c0(&lStack_90);
LAB_10a493280:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a493284);
  (*pcVar8)();
}



/* Entry: 10a49330c; end: 10a493327;  */

void FUN_10a49330c(void)

{
  return;
}



/* Entry: 10a493328; end: 10a49351f;  */

void FUN_10a493328(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_50;
  long *plStack_48;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(auStack_88,param_2,param_4);
  FUN_10a464450(&lStack_50,*(undefined8 *)(*(long *)(param_6 + 0x10) + 0x870));
  FUN_10a464ac8(lStack_50,2);
  FUN_10a490224();
  if (lStack_50 != 0) {
    plStack_68 = *(long **)(lStack_50 + 0x48);
    uStack_70 = *(undefined8 *)(lStack_50 + 0x40);
    if (*(long *)(lStack_50 + 0x48) != 0) {
      plVar1 = (long *)(*(long *)(lStack_50 + 0x48) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    FUN_10a052f68(param_1,param_2,&uStack_70);
    plVar1 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    func_0x00010988c170(plVar6 + 0x4b);
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_70,&UNK_10f659cd1,auStack_88);
  FUN_10a0029c0(&uStack_70);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4934c8);
  (*pcVar5)();
}



/* Entry: 10a493520; end: 10a49353b;  */

void FUN_10a493520(void)

{
  return;
}



/* Entry: 10a49353c; end: 10a493603;  */

void FUN_10a49353c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(auStack_58,param_2,param_4);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *param_1 = 0;
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a493604; end: 10a49361f;  */

void FUN_10a493604(void)

{
  return;
}



/* Entry: 10a493620; end: 10a49370b;  */

void FUN_10a493620(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = (long *)0x98;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bdda78;
  plVar6 = plVar4 + 3;
  *plVar6 = (long)&PTR_FUN_110bdab68;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_DAT_110bdabf0;
  plVar4[10] = (long)&PTR_FUN_110bdac48;
  plVar4[0xb] = param_2;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x10] = 0;
  *param_1 = plVar6;
  param_1[1] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
  plVar4[8] = (long)plVar6;
  plVar4[9] = (long)plVar4;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a49370c; end: 10a49371b;  */

void FUN_10a49370c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdda78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a49371c; end: 10a49373b;  */

void FUN_10a49371c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdda78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a49373c; end: 10a49374b;  */

void FUN_10a49373c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a493744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a49374c; end: 10a4937a3;  */

long FUN_10a49374c(long param_1)

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



/* Entry: 10a4937a4; end: 10a49385f;  */

void FUN_10a4937a4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(param_2 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = *(long *)(lVar7 + 0x58);
  *(long *)(lVar7 + 0x50) = lVar4;
  *(long **)(lVar7 + 0x58) = plVar5;
  lStack_40 = lVar4;
  plStack_38 = plVar5;
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x10);
    (**(code **)(*plVar6 + 0x18))();
    if (((ulong)plVar6 & 1) == 0) {
      func_0x00010a34d270(lVar7 + 0x78,&lStack_40);
      plVar5 = plStack_38;
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a493860; end: 10a49387b;  */

void FUN_10a493860(void)

{
  return;
}



/* Entry: 10a49387c; end: 10a49396f;  */

void FUN_10a49387c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = (long *)0xa0;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bddae0;
  plVar6 = plVar4 + 3;
  *plVar6 = (long)&PTR_FUN_110bdb0e8;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = param_2;
  plVar4[0xc] = param_3;
  plVar4[5] = (long)&PTR_FUN_110bdb170;
  plVar4[10] = (long)&PTR_FUN_110bdb1c8;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x13] = 0;
  *param_1 = plVar6;
  param_1[1] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
  plVar4[8] = (long)plVar6;
  plVar4[9] = (long)plVar4;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a493970; end: 10a49397f;  */

void FUN_10a493970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a493980; end: 10a49399f;  */

void FUN_10a493980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddae0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4939a0; end: 10a4939af;  */

void FUN_10a4939a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4939a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a4939b0; end: 10a493a93;  */

long FUN_10a4939b0(long param_1)

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



/* Entry: 10a493a94; end: 10a493ac7;  */

void FUN_10a493a94(void)

{
  return;
}



/* Entry: 10a493ac8; end: 10a493b53;  */

void FUN_10a493ac8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a493b54; end: 10a493b87;  */

void FUN_10a493b54(void)

{
  return;
}



/* Entry: 10a493b88; end: 10a493c17;  */

void FUN_10a493b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bddb70;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xc] = param_3;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar7 = puVar4 + 3;
  *puVar7 = &PTR_DAT_110bdb308;
  puVar4[5] = &PTR_FUN_110bdb390;
  puVar4[10] = &PTR_FUN_110bdb3e8;
  puVar4[0xb] = param_2;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  *param_1 = puVar7;
  param_1[1] = puVar4;
  puVar6 = puVar4 + 8;
  puVar4[9] = 0;
  *puVar6 = 0;
  if ((puVar6 != (undefined8 *)0x0) &&
     ((lVar5 = puVar4[9], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar8 = (long *)param_1[1];
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
      plVar1 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = puVar4[9];
    }
    *puVar6 = puVar7;
    puVar4[9] = plVar8;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a493c18; end: 10a493c27;  */

void FUN_10a493c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddb70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a493c28; end: 10a493c47;  */

void FUN_10a493c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddb70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a493c48; end: 10a493c57;  */

void FUN_10a493c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a493c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a493c58; end: 10a493d5f;  */

void FUN_10a493c58(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a493d60; end: 10a493e5b;  */

void FUN_10a493d60(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = *param_1;
  plVar9 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  lStack_40 = lVar8;
  plStack_38 = plVar9;
  if ((uVar3 < (ulong)(*(long *)(lVar2 + 0x58) - *(long *)(lVar2 + 0x50) >> 4)) &&
     (uVar3 < (ulong)(*(long *)(lVar2 + 0x88) - *(long *)(lVar2 + 0x80) >> 4))) {
    plVar10 = (long *)(*(long *)(lVar2 + 0x50) + uVar3 * 0x10);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar7 = plVar10[1];
    *plVar10 = lVar8;
    plVar10[1] = (long)plVar9;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x10);
      (**(code **)(*plVar10 + 0x18))();
      if (((ulong)plVar10 & 1) == 0) {
        if ((ulong)(*(long *)(lVar2 + 0x88) - *(long *)(lVar2 + 0x80) >> 4) <=
            *(ulong *)(param_2 + 0x18)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a493e5c);
          (*pcVar6)();
        }
        func_0x00010a34d270(*(long *)(lVar2 + 0x80) + *(ulong *)(param_2 + 0x18) * 0x10,&lStack_40);
        plVar9 = plStack_38;
      }
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a493e5c; end: 10a493e77;  */

void FUN_10a493e5c(void)

{
  return;
}



/* Entry: 10a493e78; end: 10a493f77;  */

long FUN_10a493e78(long param_1)

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



/* Entry: 10a493f78; end: 10a493f87;  */

void FUN_10a493f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bde438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a493f88; end: 10a493fa7;  */

void FUN_10a493f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bde438;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a493fa8; end: 10a493fb7;  */

void FUN_10a493fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a493fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a493fb8; end: 10a494067;  */

void FUN_10a493fb8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a494068; end: 10a494153;  */

void FUN_10a494068(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = (long *)0xa0;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bddbd8;
  plVar6 = plVar4 + 3;
  *plVar6 = (long)&PTR_DAT_110bdbb08;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_FUN_110bdbb90;
  plVar4[10] = (long)&PTR_FUN_110bdbbe8;
  plVar4[0xb] = param_2;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x11] = 0;
  *param_1 = plVar6;
  param_1[1] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
  plVar4[8] = (long)plVar6;
  plVar4[9] = (long)plVar4;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a494154; end: 10a494163;  */

void FUN_10a494154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddbd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a494164; end: 10a494183;  */

void FUN_10a494164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddbd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a494184; end: 10a494193;  */

void FUN_10a494184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a49418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a494194; end: 10a4941eb;  */

long FUN_10a494194(long param_1)

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



/* Entry: 10a4941ec; end: 10a4941fb;  */

void FUN_10a4941ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bddc28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


