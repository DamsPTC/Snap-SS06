/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8928cc; end: 10a8929b7;  */

void FUN_10a8928cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a874a70(&stack0xffffffffffffffa8,plVar4);
  FUN_10a88acc4(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 4);
  func_0x00010a87edc4(&stack0xffffffffffffffa8);
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



/* Entry: 10a8929b8; end: 10a892a73;  */

void FUN_10a8929b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a89177c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x5a];
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



/* Entry: 10a892a74; end: 10a892b63;  */

void FUN_10a892a74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1a8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c24760;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x3f800000;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0x3f800000;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0x3f800000;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x2a) = 0x3f800000;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  puVar1[0x33] = 0;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0x3f800000;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a892b64; end: 10a892b73;  */

void FUN_10a892b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a892b74; end: 10a892b93;  */

void FUN_10a892b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24760;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a892b94; end: 10a892c77;  */

void FUN_10a892b94(long param_1)

{
  long lVar1;
  
  func_0x00010a880f74(*(undefined8 *)(param_1 + 400));
  lVar1 = *(long *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a880f38(*(undefined8 *)(param_1 + 0x168));
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10a892c7c(param_1 + 0x130);
  func_0x00010a880efc(*(undefined8 *)(param_1 + 0x118));
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10a892c7c(param_1 + 0xe0);
  FUN_10a892c7c(param_1 + 0xb8);
  func_0x00010a880e30(*(undefined8 *)(param_1 + 0xa0));
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a880df4(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a880db8(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a880d7c(*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a892c78; end: 10a892c7b;  */

void FUN_10a892c78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a892c7c; end: 10a892d0b;  */

long * FUN_10a892c7c(long *param_1)

{
  long lVar1;
  
  func_0x00010a880ec0(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a892d0c; end: 10a892f67;  */

void FUN_10a892d0c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)0xa0;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)&PTR_FUN_110c247b0;
  plVar4[4] = 0;
  plVar4[5] = param_2;
  plVar4[6] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[7] = 0;
  plVar4[8] = 0;
  lVar5 = 0x368;
  __Znwm();
  _bzero();
  *(undefined4 *)(lVar5 + 0x20) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xc0) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(undefined8 *)(lVar5 + 0xd8) = 0;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  *(undefined8 *)(lVar5 + 0x118) = 0;
  *(undefined8 *)(lVar5 + 0xd0) = 0;
  *(undefined8 *)(lVar5 + 200) = 0;
  *(undefined8 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  *(undefined4 *)(lVar5 + 0x120) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x128) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x138) = 0;
  *(undefined8 *)(lVar5 + 0x130) = 0;
  *(undefined8 *)(lVar5 + 0x148) = 0;
  *(undefined8 *)(lVar5 + 0x140) = 0;
  *(undefined8 *)(lVar5 + 0x158) = 0;
  *(undefined8 *)(lVar5 + 0x150) = 0;
  *(undefined8 *)(lVar5 + 0x168) = 0;
  *(undefined8 *)(lVar5 + 0x160) = 0;
  *(undefined8 *)(lVar5 + 0x178) = 0;
  *(undefined8 *)(lVar5 + 0x170) = 0;
  *(undefined8 *)(lVar5 + 0x180) = 0;
  *(undefined4 *)(lVar5 + 0x188) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x198) = 0;
  *(undefined8 *)(lVar5 + 400) = 0;
  *(undefined8 *)(lVar5 + 0x1a0) = 0;
  *(undefined8 *)(lVar5 + 0x1a8) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x200) = 0;
  *(undefined8 *)(lVar5 + 0x1e8) = 0;
  *(undefined8 *)(lVar5 + 0x1e0) = 0;
  *(undefined8 *)(lVar5 + 0x1f8) = 0;
  *(undefined8 *)(lVar5 + 0x1f0) = 0;
  *(undefined8 *)(lVar5 + 0x1c8) = 0;
  *(undefined8 *)(lVar5 + 0x1c0) = 0;
  *(undefined8 *)(lVar5 + 0x1d8) = 0;
  *(undefined8 *)(lVar5 + 0x1d0) = 0;
  *(undefined8 *)(lVar5 + 0x1b8) = 0;
  *(undefined8 *)(lVar5 + 0x1b0) = 0;
  *(undefined4 *)(lVar5 + 0x208) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x220) = 0;
  *(undefined8 *)(lVar5 + 0x218) = 0;
  *(undefined8 *)(lVar5 + 0x210) = 0;
  *(undefined8 *)(lVar5 + 0x228) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x280) = 0;
  *(undefined8 *)(lVar5 + 0x268) = 0;
  *(undefined8 *)(lVar5 + 0x260) = 0;
  *(undefined8 *)(lVar5 + 0x278) = 0;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  *(undefined8 *)(lVar5 + 0x248) = 0;
  *(undefined8 *)(lVar5 + 0x240) = 0;
  *(undefined8 *)(lVar5 + 600) = 0;
  *(undefined8 *)(lVar5 + 0x250) = 0;
  *(undefined8 *)(lVar5 + 0x238) = 0;
  *(undefined8 *)(lVar5 + 0x230) = 0;
  *(undefined4 *)(lVar5 + 0x288) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x2a0) = 0;
  *(undefined8 *)(lVar5 + 0x298) = 0;
  *(undefined8 *)(lVar5 + 0x290) = 0;
  *(undefined8 *)(lVar5 + 0x2a8) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x300) = 0;
  *(undefined8 *)(lVar5 + 0x2e8) = 0;
  *(undefined8 *)(lVar5 + 0x2e0) = 0;
  *(undefined8 *)(lVar5 + 0x2f8) = 0;
  *(undefined8 *)(lVar5 + 0x2f0) = 0;
  *(undefined8 *)(lVar5 + 0x2c8) = 0;
  *(undefined8 *)(lVar5 + 0x2c0) = 0;
  *(undefined8 *)(lVar5 + 0x2d8) = 0;
  *(undefined8 *)(lVar5 + 0x2d0) = 0;
  *(undefined8 *)(lVar5 + 0x2b8) = 0;
  *(undefined8 *)(lVar5 + 0x2b0) = 0;
  *(undefined4 *)(lVar5 + 0x308) = 0x3f800000;
  *(undefined8 *)(lVar5 + 800) = 0;
  *(undefined8 *)(lVar5 + 0x318) = 0;
  *(undefined8 *)(lVar5 + 0x310) = 0;
  *(undefined8 *)(lVar5 + 0x328) = 0x32aaaba7;
  *(undefined8 *)(lVar5 + 0x360) = 0;
  *(undefined8 *)(lVar5 + 0x348) = 0;
  *(undefined8 *)(lVar5 + 0x340) = 0;
  *(undefined8 *)(lVar5 + 0x358) = 0;
  *(undefined8 *)(lVar5 + 0x350) = 0;
  *(undefined8 *)(lVar5 + 0x338) = 0;
  *(undefined8 *)(lVar5 + 0x330) = 0;
  plVar4[9] = lVar5;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  *(undefined4 *)(plVar4 + 0xe) = 0x3f800000;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  *(undefined4 *)(plVar4 + 0x13) = 0x3f800000;
  *param_1 = plVar4 + 3;
  param_1[1] = plVar4;
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
  plVar4[3] = (long)(plVar4 + 3);
  plVar4[4] = (long)plVar4;
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



/* Entry: 10a892f68; end: 10a892f77;  */

void FUN_10a892f68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c247b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a892f78; end: 10a892f97;  */

void FUN_10a892f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c247b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a892f98; end: 10a893137;  */

void FUN_10a892f98(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_38;
  
  plVar1 = (long *)*(long *)(param_1 + 0x88);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a8835b0(plVar1 + 4);
    FUN_10a297544(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x60);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a89313c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar2 != 0) {
    __ZNSt3__15mutexD1Ev(lVar2 + 0x328);
    lStack_38 = lVar2 + 0x310;
    FUN_10a0426d8(&lStack_38);
    FUN_10a893178(lVar2 + 0x2e8);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x2a8);
    lStack_38 = lVar2 + 0x290;
    FUN_10a0426d8(&lStack_38);
    FUN_10a893178(lVar2 + 0x268);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x228);
    lStack_38 = lVar2 + 0x210;
    FUN_10a0426d8(&lStack_38);
    FUN_10a893178(lVar2 + 0x1e8);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x1a8);
    lStack_38 = lVar2 + 400;
    FUN_10a0426d8(&lStack_38);
    FUN_10a893178(lVar2 + 0x168);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x128);
    FUN_10a88b9bc(lVar2 + 0x100);
    __ZNSt3__15mutexD1Ev(lVar2 + 0xc0);
    lStack_38 = lVar2 + 0xa8;
    FUN_10a0426d8(&lStack_38);
    FUN_10a893178(lVar2 + 0x80);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x40);
    FUN_10a87ea6c(lVar2 + 0x28);
    FUN_10a893178(lVar2);
    __ZdlPv();
  }
  FUN_10a8aaa7c(param_1 + 0x38);
  func_0x00010a5ca428(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a893138; end: 10a89313b;  */

void FUN_10a893138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a89313c; end: 10a893177;  */

void FUN_10a89313c(undefined8 *param_1)

{
  FUN_10a297544(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a893178; end: 10a8931d3;  */

long * FUN_10a893178(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a882654(plVar1 + 2);
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



/* Entry: 10a8931d4; end: 10a893283;  */

long FUN_10a8931d4(long param_1)

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



/* Entry: 10a893284; end: 10a893293;  */

void FUN_10a893284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a893294; end: 10a8932b3;  */

void FUN_10a893294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8932b4; end: 10a8932bb;  */

void FUN_10a8932b4(void)

{
  return;
}



/* Entry: 10a8932bc; end: 10a893317;  */

long * FUN_10a8932bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a893318(plVar1 + 2);
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



/* Entry: 10a893318; end: 10a893353;  */

void FUN_10a893318(undefined8 *param_1)

{
  FUN_10a29f714(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a893354; end: 10a8933af;  */

long * FUN_10a893354(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a8933b0(plVar1 + 2);
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



/* Entry: 10a8933b0; end: 10a89349b;  */

void FUN_10a8933b0(undefined8 *param_1)

{
  func_0x00010a5c92ec(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a89349c; end: 10a8934ab;  */

void FUN_10a89349c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24850;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8934ac; end: 10a8934cb;  */

void FUN_10a8934ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24850;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8934cc; end: 10a8934f3;  */

void FUN_10a8934cc(long param_1)

{
  __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10a8934f4; end: 10a8934f7;  */

void FUN_10a8934f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8934f8; end: 10a8935db;  */

long FUN_10a8934f8(long *param_1,undefined8 param_2)

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



/* Entry: 10a8935dc; end: 10a893ad7;  */

void FUN_10a8935dc(undefined ******param_1,undefined ******param_2,undefined ******param_3,
                  undefined ******param_4)

{
  undefined *****pppppuVar1;
  undefined *****pppppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined8 *puVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******ppppppuVar11;
  undefined *****pppppuVar12;
  undefined ******ppppppuVar13;
  long lVar14;
  undefined ******unaff_x21;
  undefined ******ppppppuVar15;
  undefined *****pppppuVar16;
  undefined ******unaff_x23;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined8 *apuStack_1c0 [2];
  undefined1 auStack_1b0 [16];
  int aiStack_1a0 [2];
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined ****ppppuStack_188;
  undefined1 *puStack_180;
  undefined8 ***pppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined ****ppppuStack_160;
  undefined *****pppppuStack_158;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined *****pppppuStack_140;
  undefined *****pppppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined ****ppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined ****ppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined ****ppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined ****ppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  ppppppuVar9 = (undefined ******)&ppppuStack_120;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar16 = *param_1;
  ppppppuVar7 = (undefined ******)param_1[1];
  *param_1 = (undefined *****)0x0;
  param_1[1] = (undefined *****)0x0;
  ppppppuVar15 = (undefined ******)pppppuVar16[0x6f][0x55];
  ppppppuVar13 = (undefined ******)pppppuVar16[0x6f][0x56];
  if (ppppppuVar13 != (undefined ******)0x0) {
    ppppppuVar11 = ppppppuVar13 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar4) {
        *ppppppuVar11 = (undefined *****)((long)*ppppppuVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppppppuVar11 = param_2;
  ppppuStack_120 = (undefined ****)pppppuVar16;
  pppppuStack_118 = (undefined *****)ppppppuVar7;
  pppppuStack_110 = (undefined *****)ppppppuVar15;
  pppppuStack_108 = (undefined *****)ppppppuVar13;
  if (ppppppuVar15 == (undefined ******)0x0) goto LAB_10a8939b8;
  if (*(char *)(ppppppuVar15 + 8) == '\x01') {
    pppppuVar12 = *ppppppuVar15;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar9 = ppppppuVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuStack_f8 = param_2[3];
    pppppuStack_100 = param_2[2];
    if (param_2[3] != (undefined *****)0x0) {
      pppppuVar1 = param_2[3] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar4) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuStack_b8 = param_2[5];
    ppppuStack_c0 = (undefined ****)param_2[4];
    if (param_2[5] != (undefined *****)0x0) {
      pppppuVar1 = param_2[5] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar4) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_1 = (undefined ******)&ppppuStack_b0;
    ppppppuVar11 = &pppppuStack_100;
    param_3 = (undefined ******)&ppppuStack_c0;
    param_4 = ppppppuVar15;
    ppppuStack_b0 = (undefined ****)pppppuVar16;
    pppppuStack_a8 = (undefined *****)ppppppuVar7;
    (*(code *)pppppuVar12)(param_1,ppppppuVar11,param_3,ppppppuVar15);
    ppppppuVar7 = (undefined ******)pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar12 = *ppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar7;
      }
    }
    ppppppuVar7 = (undefined ******)pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        pppppuVar12 = *ppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar7;
      }
    }
    param_2 = (undefined ******)pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 == (undefined ******)0x0) goto LAB_10a8939b8;
    ppppppuVar7 = (undefined ******)(pppppuStack_a8 + 1);
    do {
      pppppuVar12 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*(char *)(ppppppuVar15 + 8) != '\x02') goto LAB_10a8939b8;
    ppppppuVar6 = ppppppuVar15;
    ppppppuVar10 = param_2;
    FUN_10a688b40();
    if (ppppppuVar6 != (undefined ******)0x0) {
      *ppppppuVar6 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar6 >> 0x20) + 1,(int)*ppppppuVar6 + 1);
      param_1 = (undefined ******)*ppppppuVar15;
      param_3 = param_2 + 2;
      param_4 = param_2 + 4;
      FUN_10a893ad8(param_1,&ppppuStack_120,param_3,param_4);
      iVar5 = *(int *)((long)ppppppuVar6 + 4) + -1;
      *(int *)((long)ppppppuVar6 + 4) = iVar5;
      ppppppuVar11 = ppppppuVar9;
      unaff_x23 = ppppppuVar6;
      if (iVar5 == 0) {
        *(undefined4 *)ppppppuVar6 = 0;
      }
      goto LAB_10a8939b8;
    }
    param_1 = (undefined ******)0x0;
    ppppppuVar11 = (undefined ******)0x0;
    unaff_x21 = ppppppuVar10;
    if (ppppppuVar10 == (undefined ******)0x0) goto LAB_10a8939b8;
    unaff_x23 = (undefined ******)*ppppppuVar15;
    pppppuVar12 = ppppppuVar15[1];
    if (pppppuVar12 != (undefined *****)0x0) {
      pppppuVar1 = pppppuVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar4) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppppppuVar7 = (undefined ******)pppppuStack_118;
      } while (cVar3 != '\0');
    }
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar15 = ppppppuVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar4) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuVar1 = param_2[2];
    ppppppuVar15 = (undefined ******)param_2[3];
    if (ppppppuVar15 != (undefined ******)0x0) {
      ppppppuVar9 = ppppppuVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuVar2 = param_2[4];
    ppppppuVar9 = (undefined ******)param_2[5];
    if (ppppppuVar9 != (undefined ******)0x0) {
      ppppppuVar11 = ppppppuVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar4) {
          *ppppppuVar11 = (undefined *****)((long)*ppppppuVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuStack_b0 = (undefined ****)FUN_10a893cfc;
    pppppuStack_a8 = (undefined *****)&PTR_FUN_110c24890;
    puVar8 = (undefined8 *)0x40;
    pppppuStack_100 = (undefined *****)unaff_x23;
    pppppuStack_f8 = pppppuVar12;
    ppppuStack_f0 = (undefined ****)pppppuVar16;
    pppppuStack_e8 = (undefined *****)ppppppuVar7;
    ppppuStack_e0 = (undefined ****)pppppuVar1;
    pppppuStack_d8 = (undefined *****)ppppppuVar15;
    ppppuStack_d0 = (undefined ****)pppppuVar2;
    pppppuStack_c8 = (undefined *****)ppppppuVar9;
    __Znwm();
    *puVar8 = unaff_x23;
    puVar8[1] = pppppuVar12;
    pppppuStack_100 = (undefined *****)0x0;
    pppppuStack_f8 = (undefined *****)0x0;
    puVar8[2] = pppppuVar16;
    puVar8[3] = ppppppuVar7;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar4) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8[4] = pppppuVar1;
    puVar8[5] = ppppppuVar15;
    if (ppppppuVar15 != (undefined ******)0x0) {
      ppppppuVar15 = ppppppuVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar4) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8[6] = pppppuVar2;
    puVar8[7] = ppppppuVar9;
    if (ppppppuVar9 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar4) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppuVar15 = (undefined ******)&ppppuStack_b0;
    ppppppuVar11 = (undefined ******)&ppppuStack_b0;
    puStack_a0 = puVar8;
    FUN_10a4634ec(ppppppuVar10,ppppppuVar11);
    param_1 = &pppppuStack_a8;
    (*(code *)*pppppuStack_a8)();
    if (ppppppuVar9 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar9 + 1;
      do {
        pppppuVar12 = *ppppppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar4) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar9)[2])(ppppppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar9;
      }
    }
    ppppppuVar7 = (undefined ******)pppppuStack_d8;
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        pppppuVar12 = *ppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar7;
      }
    }
    ppppppuVar7 = (undefined ******)pppppuStack_e8;
    if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_e8 + 1);
      do {
        pppppuVar12 = *ppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar4) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar7;
      }
    }
    param_2 = (undefined ******)pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 == (undefined ******)0x0) goto LAB_10a8939b8;
    ppppppuVar7 = (undefined ******)(pppppuStack_f8 + 1);
    do {
      pppppuVar12 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pppppuVar12 == (undefined *****)0x0) {
    (*(code *)(*param_2)[2])(param_2);
    param_1 = param_2;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a8939b8:
  if (ppppppuVar13 != (undefined ******)0x0) {
    ppppppuVar7 = ppppppuVar13 + 1;
    do {
      pppppuVar12 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar13)[2])(ppppppuVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppppppuVar13;
    }
  }
  ppppppuVar7 = (undefined ******)pppppuStack_118;
  pppppuStack_138 = (undefined *****)param_1;
  if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
    ppppppuVar9 = (undefined ******)(pppppuStack_118 + 1);
    do {
      pppppuVar12 = *ppppppuVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
      if (bVar4) {
        *ppppppuVar9 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_118)[2])(pppppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuStack_138 = (undefined *****)ppppppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_a8)(ppppppuVar15 + 1);
    FUN_10a893cc4(&pppppuStack_100);
    func_0x00010a883608(&pppppuStack_110);
    FUN_10a5ca2e0(&ppppuStack_120);
    ppppppuVar7 = (undefined ******)pppppuStack_138;
    __Unwind_Resume();
    pcStack_128 = FUN_10a893ad8;
    ppppuStack_160 = (undefined ****)pppppuVar16;
    pppppuStack_158 = (undefined *****)unaff_x23;
    pppppuStack_150 = (undefined *****)ppppppuVar15;
    pppppuStack_148 = (undefined *****)unaff_x21;
    pppppuStack_140 = (undefined *****)param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(apuStack_1c0,ppppppuVar7 + 1,*ppppppuVar7);
    func_0x000109884820(&puStack_1d8,apuStack_1c0,*ppppppuVar7);
    if (apuStack_1c0[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_1c0[0])();
    }
    (*(code *)(**ppppppuVar7)[6])(&puStack_1e0);
    pppppuVar16 = *ppppppuVar7;
    FUN_10a724820(apuStack_1c0,pppppuVar16,ppppppuVar11);
    func_0x00010a88aaac(auStack_1b0,pppppuVar16,*param_3,param_3[1]);
    FUN_10a05b924(aiStack_1a0,pppppuVar16,param_4);
    uStack_168 = 3;
    ppuStack_170 = apuStack_1c0;
    (*(code *)(*pppppuVar16)[0xb])(pppppuVar16);
    ppuStack_190 = &puStack_1d8;
    pppuStack_178 = &ppuStack_170;
    ppppuStack_188 = (undefined ****)pppppuVar16;
    puStack_180 = (undefined1 *)&puStack_1e0;
    func_0x0001098960c0(aiStack_1d0);
    if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_1c8)();
    }
    lVar14 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_1a0 + lVar14)) &&
         (*(undefined8 **)((long)&lStack_198 + lVar14) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_198 + lVar14))();
      }
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != -0x30);
    if (puStack_1e0 != (undefined8 *)0x0) {
      (**(code **)*puStack_1e0)();
    }
    if (puStack_1d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_1d8)();
    }
    return;
  }
  return;
}



/* Entry: 10a893ad8; end: 10a893cc3;  */

void FUN_10a893ad8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar2 = (long *)*param_1;
  FUN_10a724820(apuStack_a0,plVar2,param_2);
  func_0x00010a88aaac(auStack_90,plVar2,*param_3,param_3[1]);
  FUN_10a05b924(aiStack_80,plVar2,param_4);
  uStack_48 = 3;
  ppuStack_50 = apuStack_a0;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a893cc4; end: 10a893cfb;  */

long FUN_10a893cc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a05248c(param_1 + 0x30);
  func_0x00010a5c92ec(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a893cfc; end: 10a893d0f;  */

void FUN_10a893cfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(apuStack_a0,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*puVar1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_c0);
  plVar4 = (long *)*puVar1;
  FUN_10a724820(apuStack_a0,plVar4,puVar2 + 2);
  func_0x00010a88aaac(auStack_90,plVar4,puVar2[4],puVar2[5]);
  FUN_10a05b924(aiStack_80,plVar4,puVar2 + 6);
  uStack_48 = 3;
  ppuStack_50 = apuStack_a0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a893d10; end: 10a893d5b;  */

void FUN_10a893d10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a05248c(lVar1 + 0x30);
    func_0x00010a5c92ec(lVar1 + 0x20);
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a893d5c; end: 10a893d73;  */

void FUN_10a893d5c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a893d74; end: 10a893d9b;  */

long FUN_10a893d74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a05248c(param_1 + 0x18);
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



/* Entry: 10a893d9c; end: 10a893dc3;  */

void FUN_10a893d9c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c248a8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a893dc4; end: 10a893eb7;  */

void FUN_10a893dc4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  plStack_38 = (long *)param_1[1];
  lStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_30 = *(long *)(*(long *)(lStack_40 + 0x378) + 0x2b8);
  plVar5 = *(long **)(*(long *)(lStack_40 + 0x378) + 0x2c0);
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
  }
  plStack_28 = plVar5;
  if (lStack_30 != 0) {
    FUN_10a893eb8(lStack_30,&lStack_40,param_2 + 0x10);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a893eb8; end: 10a894203;  */

void FUN_10a893eb8(undefined *******param_1,undefined ******param_2,undefined *******param_3)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *******pppppppuVar5;
  undefined *******pppppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  long lVar11;
  undefined ******ppppppuVar12;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined1 auStack_140 [16];
  int aiStack_130 [2];
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *****pppppuStack_118;
  undefined1 *puStack_110;
  undefined1 **ppuStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined *****pppppuStack_b0;
  undefined ******ppppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined ******ppppppuStack_98;
  undefined *****pppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined *****pppppuStack_70;
  undefined *****pppppuStack_68;
  undefined ****ppppuStack_60;
  undefined ******ppppppuStack_58;
  undefined *****pppppuStack_50;
  undefined ******ppppppuStack_48;
  long lStack_38;
  
  ppppppuVar12 = &pppppuStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar8 = param_3;
  if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppppppuVar5 = param_1;
    ppppppuVar9 = param_2;
    if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a89417c;
    ppppppuVar9 = *param_1;
    ppppppuStack_78 = (undefined ******)param_2[1];
    pppppuStack_80 = *param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuStack_a8 = param_3[1];
    pppppuStack_b0 = (undefined *****)*param_3;
    if (param_3[1] != (undefined ******)0x0) {
      ppppppuVar10 = param_3[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar3) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar5 = (undefined *******)&pppppuStack_80;
    pppppppuVar8 = param_1;
    (*(code *)ppppppuVar9)(pppppppuVar5,&pppppuStack_b0);
    pppppppuVar6 = (undefined *******)ppppppuStack_a8;
    ppppppuVar9 = ppppppuVar12;
    if ((undefined *******)ppppppuStack_a8 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_a8 + 1);
      do {
        ppppppuVar10 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar10 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
        ppppppuVar9 = ppppppuVar12;
      }
    }
    if ((undefined *******)ppppppuStack_78 == (undefined *******)0x0) goto LAB_10a89417c;
    pppppppuVar6 = (undefined *******)(ppppppuStack_78 + 1);
    do {
      ppppppuVar12 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar7 = (undefined *******)ppppppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    pppppppuVar6 = param_1;
    ppppppuVar12 = param_2;
    FUN_10a688b40();
    if (pppppppuVar6 != (undefined *******)0x0) {
      *pppppppuVar6 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar6 >> 0x20) + 1,(int)*pppppppuVar6 + 1);
      pppppppuVar5 = (undefined *******)*param_1;
      FUN_10a894204(pppppppuVar5,param_2);
      iVar4 = *(int *)((long)pppppppuVar6 + 4) + -1;
      *(int *)((long)pppppppuVar6 + 4) = iVar4;
      ppppppuVar9 = param_2;
      pppppppuVar8 = param_3;
      if (iVar4 == 0) {
        *(undefined4 *)pppppppuVar6 = 0;
      }
      goto LAB_10a89417c;
    }
    pppppppuVar5 = (undefined *******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar12 == (undefined ******)0x0) goto LAB_10a89417c;
    pppppuStack_68 = (undefined *****)param_1[1];
    pppppuStack_70 = (undefined *****)*param_1;
    if (param_1[1] != (undefined ******)0x0) {
      ppppppuVar9 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_a0 = (undefined ****)*param_2;
    ppppppuStack_98 = (undefined ******)param_2[1];
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar5 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_90 = (undefined *****)*param_3;
    pppppppuVar6 = (undefined *******)param_3[1];
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_80 = (undefined *****)FUN_10a89440c;
    ppppppuStack_78 = (undefined ******)&PTR_FUN_110c248c0;
    pppppuStack_b0 = (undefined *****)0x0;
    ppppppuStack_a8 = (undefined ******)0x0;
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar5 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = (undefined *******)&pppppuStack_80;
    ppppppuVar9 = &pppppuStack_80;
    ppppppuStack_88 = (undefined ******)pppppppuVar6;
    ppppuStack_60 = ppppuStack_a0;
    ppppppuStack_58 = ppppppuStack_98;
    pppppuStack_50 = pppppuStack_90;
    ppppppuStack_48 = (undefined ******)pppppppuVar6;
    FUN_10a4634ec(ppppppuVar12,ppppppuVar9);
    pppppppuVar5 = &ppppppuStack_78;
    (*(code *)*ppppppuStack_78)();
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar6 + 1;
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
      }
    }
    pppppppuVar6 = (undefined *******)ppppppuStack_98;
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_98)[2])(ppppppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
      }
    }
    if ((undefined *******)ppppppuStack_a8 == (undefined *******)0x0) goto LAB_10a89417c;
    pppppppuVar6 = (undefined *******)(ppppppuStack_a8 + 1);
    do {
      ppppppuVar12 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar7 = (undefined *******)ppppppuStack_a8;
    } while (cVar2 != '\0');
  }
  if (ppppppuVar12 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar5 = pppppppuVar7;
  }
LAB_10a89417c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_78)(param_1 + 1);
    FUN_10a8943dc(&pppppuStack_b0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppuStack_120,pppppppuVar5 + 1,*pppppppuVar5);
    func_0x000109884820(&puStack_158,&ppuStack_120,*pppppppuVar5);
    if (ppuStack_120 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_120)();
    }
    (*(code *)(**pppppppuVar5)[6])(&puStack_160);
    ppppppuVar12 = *pppppppuVar5;
    FUN_10a724820(auStack_140,ppppppuVar12,ppppppuVar9);
    func_0x00010a88aaac(aiStack_130,ppppppuVar12,*pppppppuVar8,pppppppuVar8[1]);
    uStack_f8 = 2;
    puStack_100 = auStack_140;
    (*(code *)(*ppppppuVar12)[0xb])(ppppppuVar12);
    ppuStack_120 = &puStack_158;
    ppuStack_108 = &puStack_100;
    pppppuStack_118 = (undefined *****)ppppppuVar12;
    puStack_110 = (undefined1 *)&puStack_160;
    func_0x0001098960c0(aiStack_150);
    if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    lVar11 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_130 + lVar11)) &&
         (*(undefined8 **)((long)&lStack_128 + lVar11) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_128 + lVar11))();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != -0x20);
    if (puStack_160 != (undefined8 *)0x0) {
      (**(code **)*puStack_160)();
    }
    if (puStack_158 != (undefined8 *)0x0) {
      (**(code **)*puStack_158)();
    }
    return;
  }
  return;
}



/* Entry: 10a894204; end: 10a8943db;  */

void FUN_10a894204(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  FUN_10a724820(auStack_90,plVar2,param_2);
  func_0x00010a88aaac(aiStack_80,plVar2,*param_3,param_3[1]);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a8943dc; end: 10a89440b;  */

long FUN_10a8943dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a89440c; end: 10a89441f;  */

void FUN_10a89440c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar3 = (long *)*puVar1;
  FUN_10a724820(auStack_90,plVar3,param_1 + 0x20);
  func_0x00010a88aaac(aiStack_80,plVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar3;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar2)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a894420; end: 10a89444f;  */

long FUN_10a894420(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a894450; end: 10a8944d7;  */

void FUN_10a894450(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c248c0;
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10a8944d8; end: 10a8945c3;  */

void FUN_10a8944d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  plStack_38 = (long *)param_1[1];
  lStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_30 = *(long *)(*(long *)(lStack_40 + 0x378) + 0x2c8);
  plVar5 = *(long **)(*(long *)(lStack_40 + 0x378) + 0x2d0);
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
  }
  plStack_28 = plVar5;
  if (lStack_30 != 0) {
    FUN_10a8945c4(lStack_30,&lStack_40);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a8945c4; end: 10a894833;  */

void FUN_10a8945c4(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  int **ppiStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar9 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar10 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = param_1;
    (*(code *)pppppuVar10)(ppppppuVar5,param_1);
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a8947ac;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_78;
      ppppppuVar9 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar5 = param_1;
    ppppppuVar8 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10a8947ac;
    unaff_x21 = param_1;
    ppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar5 = (undefined ******)*param_1;
      FUN_10a894834(ppppppuVar5,param_2);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar8 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a8947ac;
    }
    ppppppuVar8 = (undefined ******)0x0;
    ppppppuVar5 = (undefined ******)0x0;
    if (ppppppuVar7 == (undefined ******)0x0) goto LAB_10a8947ac;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar10 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar6 = (undefined ******)param_2[1];
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a8949c4;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c248f0;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar6;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar6;
    FUN_10a4634ec(ppppppuVar7,ppppppuVar8);
    ppppppuVar5 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar6 + 1;
      do {
        pppppuVar10 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar5 = ppppppuVar6;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a8947ac;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar9;
  if (pppppuVar10 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar5 = ppppppuVar6;
  }
LAB_10a8947ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10a5ca2e0(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppuStack_100,ppppppuVar5 + 1,*ppppppuVar5);
    func_0x000109884820(&puStack_128,&ppuStack_100,*ppppppuVar5);
    if (ppuStack_100 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_100)();
    }
    (*(code *)(**ppppppuVar5)[6])(&puStack_130);
    pppppuVar10 = *ppppppuVar5;
    FUN_10a724820(aiStack_110,pppppuVar10,ppppppuVar8);
    uStack_d8 = 1;
    piStack_e0 = aiStack_110;
    (*(code *)(*pppppuVar10)[0xb])(pppppuVar10);
    ppuStack_100 = &puStack_128;
    ppiStack_e8 = &piStack_e0;
    ppppuStack_f8 = (undefined ****)pppppuVar10;
    puStack_f0 = (undefined1 *)&puStack_130;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if (puStack_128 != (undefined8 *)0x0) {
      (**(code **)*puStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10a894834; end: 10a8949c3;  */

void FUN_10a894834(undefined8 *param_1,undefined8 param_2)

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
  FUN_10a724820(aiStack_70,plVar1,param_2);
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



/* Entry: 10a8949c4; end: 10a8949d3;  */

void FUN_10a8949c4(long param_1)

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
  FUN_10a724820(aiStack_70,plVar2,param_1 + 0x20);
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



/* Entry: 10a8949d4; end: 10a8949fb;  */

long FUN_10a8949d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a8949fc; end: 10a894a4f;  */

void FUN_10a8949fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c248f0;
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



/* Entry: 10a894a50; end: 10a894b3b;  */

void FUN_10a894a50(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  plStack_38 = (long *)param_1[1];
  lStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_30 = *(long *)(*(long *)(lStack_40 + 0x378) + 0x2d8);
  plVar5 = *(long **)(*(long *)(lStack_40 + 0x378) + 0x2e0);
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
  }
  plStack_28 = plVar5;
  if (lStack_30 != 0) {
    FUN_10a8945c4(lStack_30,&lStack_40);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a894b3c; end: 10a894b4f;  */

void FUN_10a894b3c(void)

{
  return;
}



/* Entry: 10a894b50; end: 10a894c33;  */

long FUN_10a894b50(long *param_1,undefined8 param_2)

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



/* Entry: 10a894c34; end: 10a8950ab;  */

void FUN_10a894c34(undefined ***param_1,code **param_2,code **param_3,code **param_4,code **param_5)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  undefined ***pppuVar10;
  code **ppcVar11;
  undefined **ppuVar12;
  long lVar13;
  code **unaff_x20;
  code **ppcVar14;
  undefined **ppuVar15;
  code **unaff_x22;
  code **ppcVar16;
  undefined *puVar17;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  int aiStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined8 *apuStack_1d0 [2];
  undefined4 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined4 uStack_1b0;
  undefined8 **ppuStack_1a8;
  int aiStack_1a0 [2];
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined8 ***pppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  code **ppcStack_158;
  code **ppcStack_150;
  code **ppcStack_148;
  code **ppcStack_140;
  undefined ***pppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  code *pcStack_110;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  code **ppcStack_e8;
  code *pcStack_e0;
  undefined ***pppuStack_d8;
  code **ppcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined ***pppuStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code **ppcStack_98;
  long lStack_68;
  
  pppuVar10 = &ppuStack_120;
  pppuVar7 = &ppuStack_120;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = *param_1;
  pppuVar8 = (undefined ***)param_1[1];
  *param_1 = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  ppcVar14 = param_2 + 2;
  ppcVar16 = (code **)*ppcVar14;
  puVar17 = ppuVar15[0x6f];
  ppuStack_120 = ppuVar15;
  pppuStack_118 = pppuVar8;
  if (puVar17[0x180] == '\x01') {
    ppcVar11 = ppcVar16 + 3;
    param_3 = param_2 + 4;
    param_5 = (code **)(puVar17 + 0x140);
    param_4 = ppcVar14;
    (**(code **)(puVar17 + 0x140))(&ppuStack_120,ppcVar11);
  }
  else {
    pppuVar7 = param_1;
    ppcVar11 = param_2;
    if (puVar17[0x180] == '\x02') {
      ppcVar6 = (code **)(puVar17 + 0x140);
      ppcVar9 = param_2;
      FUN_10a688b40();
      unaff_x20 = param_2;
      if (ppcVar6 == (code **)0x0) {
        ppcVar11 = (code **)0x0;
        pppuVar7 = (undefined ***)0x0;
        if (ppcVar9 != (code **)0x0) {
          pppuStack_108 = *(undefined ****)(puVar17 + 0x148);
          pcStack_110 = *(code **)(puVar17 + 0x140);
          pppuStack_f8 = pppuVar8;
          if (*(long *)(puVar17 + 0x148) != 0) {
            plVar1 = (long *)(*(long *)(puVar17 + 0x148) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              pppuStack_f8 = pppuStack_118;
            } while (cVar3 != '\0');
          }
          if (pppuStack_f8 != (undefined ***)0x0) {
            pppuVar7 = pppuStack_f8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar4) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          unaff_x22 = &pcStack_110;
          ppuStack_100 = ppuVar15;
          if (*(char *)((long)ppcVar16 + 0x2f) < '\0') {
            param_3 = (code **)ppcVar16[4];
            func_0x000107c3192c(&pppuStack_f0,ppcVar16[3]);
          }
          else {
            ppcStack_e8 = (code **)ppcVar16[4];
            pppuStack_f0 = (undefined ***)ppcVar16[3];
            pcStack_e0 = ppcVar16[5];
          }
          ppcVar16 = &pcStack_110;
          if (*(char *)((long)param_2 + 0x37) < '\0') {
            param_3 = (code **)param_2[5];
            func_0x000107c3192c(&pppuStack_d8,param_2[4]);
          }
          else {
            ppcStack_d0 = (code **)param_2[5];
            pppuStack_d8 = (undefined ***)param_2[4];
            pcStack_c8 = param_2[6];
          }
          pppuStack_b8 = (undefined ***)param_2[3];
          pcStack_c0 = param_2[2];
          if (param_2[3] != (code *)0x0) {
            pcVar2 = param_2[3] + 8;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar4) {
                *(long *)pcVar2 = *(long *)pcVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pcStack_a8 = FUN_10a895394;
          ppuStack_a0 = &PTR_FUN_110c24938;
          unaff_x20 = (code **)0x60;
          __Znwm();
          unaff_x20[1] = (code *)pppuStack_108;
          *unaff_x20 = pcStack_110;
          pcStack_110 = (code *)0x0;
          pppuStack_108 = (undefined ***)0x0;
          unaff_x20[3] = (code *)pppuStack_f8;
          unaff_x20[2] = (code *)ppuStack_100;
          if (pppuStack_f8 != (undefined ***)0x0) {
            pppuVar7 = pppuStack_f8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar4) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if ((long)pcStack_e0 < 0) {
            param_3 = ppcStack_e8;
            func_0x000107c3192c(unaff_x20 + 4,pppuStack_f0);
          }
          else {
            unaff_x20[5] = (code *)ppcStack_e8;
            unaff_x20[4] = (code *)pppuStack_f0;
            unaff_x20[6] = pcStack_e0;
          }
          if ((long)pcStack_c8 < 0) {
            param_3 = ppcStack_d0;
            func_0x000107c3192c(unaff_x20 + 7,pppuStack_d8);
          }
          else {
            unaff_x20[8] = (code *)ppcStack_d0;
            unaff_x20[7] = (code *)pppuStack_d8;
            unaff_x20[9] = pcStack_c8;
          }
          unaff_x20[0xb] = (code *)pppuStack_b8;
          unaff_x20[10] = pcStack_c0;
          if (pppuStack_b8 != (undefined ***)0x0) {
            pppuVar7 = pppuStack_b8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar4) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppcVar14 = &pcStack_a8;
          ppcVar11 = &pcStack_a8;
          ppcStack_98 = unaff_x20;
          FUN_10a4634ec(ppcVar9,ppcVar11);
          pppuVar7 = &ppuStack_a0;
          (*(code *)*ppuStack_a0)();
          pppuVar8 = pppuStack_b8;
          if (pppuStack_b8 != (undefined ***)0x0) {
            pppuVar10 = pppuStack_b8 + 1;
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
              (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar7 = pppuVar8;
            }
          }
          if ((long)pcStack_c8 < 0) {
            pppuVar7 = pppuStack_d8;
            __ZdlPv();
          }
          if ((long)pcStack_e0 < 0) {
            pppuVar7 = pppuStack_f0;
            __ZdlPv();
          }
          pppuVar8 = pppuStack_f8;
          if (pppuStack_f8 != (undefined ***)0x0) {
            pppuVar10 = pppuStack_f8 + 1;
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
              (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar7 = pppuVar8;
            }
          }
          pppuVar8 = pppuStack_108;
          if (pppuStack_108 != (undefined ***)0x0) {
            pppuVar10 = pppuStack_108 + 1;
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
              (*(code *)(*pppuStack_108)[2])(pppuStack_108);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar7 = pppuVar8;
            }
          }
        }
      }
      else {
        *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
        pppuVar7 = *(undefined ****)(puVar17 + 0x140);
        param_3 = ppcVar16 + 3;
        param_4 = param_2 + 4;
        param_5 = ppcVar14;
        FUN_10a8950ac(pppuVar7,&ppuStack_120);
        iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
        *(int *)((long)ppcVar6 + 4) = iVar5;
        ppcVar11 = (code **)pppuVar10;
        unaff_x22 = ppcVar6;
        if (iVar5 == 0) {
          *(undefined4 *)ppcVar6 = 0;
        }
      }
    }
  }
  pppuVar8 = pppuStack_118;
  if (pppuStack_118 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_118 + 1;
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
      (*(code *)(*pppuStack_118)[2])(pppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar7 = pppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x20 + 0x37) < '\0') {
    __ZdlPv(unaff_x20[4]);
  }
  FUN_10a5ca2e0(ppcVar14);
  func_0x00010a004dac(unaff_x20);
  __ZdlPv();
  FUN_10a895344(&pcStack_110);
  FUN_10a5ca2e0(&ppuStack_120);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_128 = FUN_10a8950ac;
  ppuStack_160 = ppuVar15;
  ppcStack_158 = ppcVar16;
  ppcStack_150 = unaff_x22;
  ppcStack_148 = ppcVar14;
  ppcStack_140 = unaff_x20;
  pppuStack_138 = pppuVar7;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(apuStack_1d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_1e8,apuStack_1d0,*pppuVar8);
  if (apuStack_1d0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_1d0[0])();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_1f0);
  ppuVar15 = *pppuVar8;
  FUN_10a724820(apuStack_1d0,ppuVar15,ppcVar11);
  pcVar2 = param_3[1];
  ppcVar16 = (code **)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    pcVar2 = (code *)(ulong)*(byte *)((long)param_3 + 0x17);
    ppcVar16 = param_3;
  }
  (**(code **)(*ppuVar15 + 0x128))(&ppuStack_190,ppuVar15,ppcVar16,pcVar2);
  uStack_1c0 = 6;
  ppuStack_1b8 = ppuStack_190;
  pcVar2 = param_4[1];
  ppcVar16 = (code **)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    pcVar2 = (code *)(ulong)*(byte *)((long)param_4 + 0x17);
    ppcVar16 = param_4;
  }
  (**(code **)(*ppuVar15 + 0x128))(&ppuStack_190,ppuVar15,ppcVar16,pcVar2);
  uStack_1b0 = 6;
  ppuStack_1a8 = ppuStack_190;
  func_0x00010a88aaac(aiStack_1a0,ppuVar15,*param_5,param_5[1]);
  uStack_168 = 4;
  ppuStack_170 = apuStack_1d0;
  (**(code **)(*ppuVar15 + 0x58))(ppuVar15);
  ppuStack_190 = &puStack_1e8;
  pppuStack_178 = &ppuStack_170;
  ppuStack_188 = ppuVar15;
  puStack_180 = (undefined1 *)&puStack_1f0;
  func_0x0001098960c0(aiStack_1e0);
  if ((3 < aiStack_1e0[0]) && (puStack_1d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1d8)();
  }
  lVar13 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_1a0 + lVar13)) &&
       (*(undefined8 **)((long)&lStack_198 + lVar13) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_198 + lVar13))();
    }
    lVar13 = lVar13 + -0x10;
  } while (lVar13 != -0x40);
  if (puStack_1f0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1f0)();
  }
  if (puStack_1e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1e8)();
  }
  return;
}



/* Entry: 10a8950ac; end: 10a895343;  */

void FUN_10a8950ac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined4 uStack_a0;
  undefined8 **ppuStack_98;
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_b0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_c8,apuStack_b0,*param_1);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_d0);
  plVar4 = (long *)*param_1;
  FUN_10a724820(apuStack_b0,plVar4,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_a0 = 6;
  ppuStack_98 = ppuStack_70;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  func_0x00010a88aaac(aiStack_80,plVar4,*param_5,param_5[1]);
  uStack_48 = 4;
  ppuStack_50 = apuStack_b0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_c8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_d0;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a895344; end: 10a895393;  */

long FUN_10a895344(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x50);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a895394; end: 10a8953ab;  */

void FUN_10a895394(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined4 uStack_a0;
  undefined8 **ppuStack_98;
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(apuStack_b0,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_c8,apuStack_b0,*puVar3);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_d0);
  plVar6 = (long *)*puVar3;
  FUN_10a724820(apuStack_b0,plVar6,puVar4 + 2);
  uVar1 = puVar4[5];
  plVar2 = (long *)puVar4[4];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x37)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x37);
    plVar2 = puVar4 + 4;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_a0 = 6;
  ppuStack_98 = ppuStack_70;
  uVar1 = puVar4[8];
  plVar2 = (long *)puVar4[7];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x4f)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x4f);
    plVar2 = puVar4 + 7;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  func_0x00010a88aaac(aiStack_80,plVar6,puVar4[10],puVar4[0xb]);
  uStack_48 = 4;
  ppuStack_50 = apuStack_b0;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_c8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_d0;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8953ac; end: 10a89540f;  */

void FUN_10a8953ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a5c92ec(lVar1 + 0x50);
    if (*(char *)(lVar1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x38));
    }
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a895410; end: 10a895427;  */

void FUN_10a895410(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a895428; end: 10a895457;  */

long FUN_10a895428(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 10a895458; end: 10a89548b;  */

void FUN_10a895458(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c24950;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a89548c; end: 10a89598f;  */

void FUN_10a89548c(code **param_1,code **param_2,code **param_3,code **param_4,code **param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  code **ppcVar13;
  code **unaff_x22;
  code *pcVar14;
  long lVar15;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  int aiStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined8 *apuStack_1d0 [2];
  undefined4 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined1 auStack_1b0 [16];
  int aiStack_1a0 [2];
  long lStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  undefined8 ***pppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  long lStack_160;
  code *pcStack_158;
  code **ppcStack_150;
  code **ppcStack_148;
  code **ppcStack_140;
  code **ppcStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code **ppcStack_118;
  code *pcStack_110;
  code **ppcStack_108;
  code *pcStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code **ppcStack_d8;
  code **ppcStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_a8;
  code **ppcStack_a0;
  code **ppcStack_98;
  long lStack_68;
  
  ppcVar8 = &pcStack_120;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = *param_1;
  ppcVar6 = (code **)param_1[1];
  *param_1 = (code *)0x0;
  param_1[1] = (code *)0x0;
  ppcVar13 = param_2 + 2;
  pcVar14 = *ppcVar13;
  lVar15 = *(long *)(pcVar12 + 0x378);
  pcStack_120 = pcVar12;
  ppcStack_118 = ppcVar6;
  if (*(char *)(lVar15 + 0x210) == '\x01') {
    pcVar10 = *(code **)(lVar15 + 0x1d0);
    pcStack_a8 = pcVar14;
    if (ppcVar6 != (code **)0x0) {
      ppcVar8 = ppcVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar3) {
          *ppcVar8 = *ppcVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcStack_a8 = *ppcVar13;
    }
    ppcStack_a0 = (code **)param_2[3];
    if (ppcStack_a0 != (code **)0x0) {
      ppcVar8 = ppcStack_a0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar3) {
          *ppcVar8 = *ppcVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = &pcStack_110;
    ppcVar9 = (code **)(pcVar14 + 0x18);
    param_3 = param_2 + 4;
    param_4 = &pcStack_a8;
    param_5 = (code **)(lVar15 + 0x1d0);
    pcStack_110 = pcVar12;
    ppcStack_108 = ppcVar6;
    (*pcVar10)(param_1,ppcVar9);
    ppcVar6 = ppcStack_a0;
    if (ppcStack_a0 != (code **)0x0) {
      ppcVar8 = ppcStack_a0 + 1;
      do {
        pcVar12 = *ppcVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar3) {
          *ppcVar8 = pcVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pcVar12 == (code *)0x0) {
        (**(code **)(*ppcStack_a0 + 0x10))(ppcStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppcVar6;
      }
    }
    if (ppcStack_108 == (code **)0x0) goto LAB_10a895850;
    ppcVar6 = ppcStack_108 + 1;
    do {
      pcVar12 = *ppcVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
      if (bVar3) {
        *ppcVar6 = pcVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    ppcVar9 = param_2;
    if (*(char *)(lVar15 + 0x210) != '\x02') goto LAB_10a895850;
    ppcVar5 = (code **)(lVar15 + 0x1d0);
    ppcVar7 = param_2;
    FUN_10a688b40();
    if (ppcVar5 != (code **)0x0) {
      *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
      param_1 = *(code ***)(lVar15 + 0x1d0);
      param_3 = (code **)(pcVar14 + 0x18);
      param_4 = param_2 + 4;
      param_5 = ppcVar13;
      FUN_10a895990(param_1,&pcStack_120);
      iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
      *(int *)((long)ppcVar5 + 4) = iVar4;
      ppcVar9 = ppcVar8;
      unaff_x22 = ppcVar5;
      if (iVar4 == 0) {
        *(undefined4 *)ppcVar5 = 0;
      }
      goto LAB_10a895850;
    }
    ppcVar9 = (code **)0x0;
    param_1 = (code **)0x0;
    if (ppcVar7 == (code **)0x0) goto LAB_10a895850;
    ppcStack_108 = *(code ***)(lVar15 + 0x1d8);
    pcStack_110 = *(code **)(lVar15 + 0x1d0);
    ppcStack_f8 = ppcVar6;
    if (*(long *)(lVar15 + 0x1d8) != 0) {
      plVar1 = (long *)(*(long *)(lVar15 + 0x1d8) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppcStack_f8 = ppcStack_118;
      } while (cVar2 != '\0');
    }
    if (ppcStack_f8 != (code **)0x0) {
      ppcVar13 = ppcStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar13,0x10);
        if (bVar3) {
          *ppcVar13 = *ppcVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x22 = &pcStack_110;
    pcStack_100 = pcVar12;
    if ((char)pcVar14[0x2f] < '\0') {
      func_0x000107c3192c(&ppcStack_f0,*(undefined8 *)(pcVar14 + 0x18),
                          *(undefined8 *)(pcVar14 + 0x20));
    }
    else {
      pcStack_e8 = *(code **)(pcVar14 + 0x20);
      ppcStack_f0 = *(code ***)(pcVar14 + 0x18);
      pcStack_e0 = *(code **)(pcVar14 + 0x28);
    }
    ppcStack_d8 = (code **)0x0;
    ppcStack_d0 = (code **)0x0;
    uStack_c8 = 0;
    FUN_10a05151c(&ppcStack_d8,param_2[4],param_2[5],(long)param_2[5] - (long)param_2[4]);
    pcStack_b8 = param_2[3];
    pcStack_c0 = param_2[2];
    if (param_2[3] != (code *)0x0) {
      pcVar12 = param_2[3] + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar3) {
          *(long *)pcVar12 = *(long *)pcVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_a8 = FUN_10a895c54;
    ppcStack_a0 = (code **)&PTR_FUN_110c24968;
    param_2 = (code **)0x60;
    __Znwm();
    param_2[1] = (code *)ppcStack_108;
    *param_2 = pcStack_110;
    pcStack_110 = (code *)0x0;
    ppcStack_108 = (code **)0x0;
    param_2[3] = (code *)ppcStack_f8;
    param_2[2] = pcStack_100;
    if (ppcStack_f8 != (code **)0x0) {
      ppcVar13 = ppcStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar13,0x10);
        if (bVar3) {
          *ppcVar13 = *ppcVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((long)pcStack_e0 < 0) {
      func_0x000107c3192c(param_2 + 4,ppcStack_f0,pcStack_e8);
    }
    else {
      param_2[5] = pcStack_e8;
      param_2[4] = (code *)ppcStack_f0;
      param_2[6] = pcStack_e0;
    }
    param_2[7] = (code *)0x0;
    param_2[8] = (code *)0x0;
    param_2[9] = (code *)0x0;
    param_4 = (code **)((long)ppcStack_d0 - (long)ppcStack_d8);
    param_3 = ppcStack_d0;
    FUN_10a05151c();
    param_2[0xb] = pcStack_b8;
    param_2[10] = pcStack_c0;
    if (pcStack_b8 != (code *)0x0) {
      pcVar12 = pcStack_b8 + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar3) {
          *(long *)pcVar12 = *(long *)pcVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppcVar13 = &pcStack_a8;
    ppcVar9 = &pcStack_a8;
    ppcStack_98 = param_2;
    FUN_10a4634ec(ppcVar7,ppcVar9);
    (**ppcStack_a0)(&ppcStack_a0);
    pcVar12 = pcStack_b8;
    if (pcStack_b8 != (code *)0x0) {
      pcVar10 = pcStack_b8 + 8;
      do {
        lVar11 = *(long *)pcVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
        if (bVar3) {
          *(long *)pcVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)pcStack_b8 + 0x10))(pcStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar12);
      }
    }
    param_1 = ppcStack_d8;
    if (ppcStack_d8 != (code **)0x0) {
      ppcStack_d0 = ppcStack_d8;
      __ZdlPv();
    }
    if ((long)pcStack_e0 < 0) {
      param_1 = ppcStack_f0;
      __ZdlPv();
    }
    ppcVar6 = ppcStack_f8;
    if (ppcStack_f8 != (code **)0x0) {
      ppcVar8 = ppcStack_f8 + 1;
      do {
        pcVar12 = *ppcVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar3) {
          *ppcVar8 = pcVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pcVar12 == (code *)0x0) {
        (**(code **)(*ppcStack_f8 + 0x10))(ppcStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppcVar6;
      }
    }
    if (ppcStack_108 == (code **)0x0) goto LAB_10a895850;
    ppcVar6 = ppcStack_108 + 1;
    do {
      pcVar12 = *ppcVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
      if (bVar3) {
        *ppcVar6 = pcVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppcVar6 = ppcStack_108;
  if (pcVar12 == (code *)0x0) {
    (**(code **)(*ppcStack_108 + 0x10))(ppcStack_108);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_1 = ppcVar6;
  }
LAB_10a895850:
  ppcVar6 = ppcStack_118;
  ppcStack_138 = param_1;
  if (ppcStack_118 != (code **)0x0) {
    ppcVar8 = ppcStack_118 + 1;
    do {
      pcVar12 = *ppcVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
      if (bVar3) {
        *ppcVar8 = pcVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pcVar12 == (code *)0x0) {
      (**(code **)(*ppcStack_118 + 0x10))(ppcStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppcStack_138 = ppcVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a5ca2e0(ppcVar13);
  func_0x00010a004dac(param_2);
  __ZdlPv();
  FUN_10a895c04(&pcStack_110);
  FUN_10a5ca2e0(&pcStack_120);
  ppcVar6 = ppcStack_138;
  __Unwind_Resume();
  pcStack_128 = FUN_10a895990;
  lStack_160 = lVar15;
  pcStack_158 = pcVar14;
  ppcStack_150 = unaff_x22;
  ppcStack_148 = ppcVar13;
  ppcStack_140 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(apuStack_1d0,ppcVar6 + 1,*ppcVar6);
  func_0x000109884820(&puStack_1e8,apuStack_1d0,*ppcVar6);
  if (apuStack_1d0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_1d0[0])();
  }
  (**(code **)(*(long *)*ppcVar6 + 0x30))(&puStack_1f0);
  pcVar14 = *ppcVar6;
  FUN_10a724820(apuStack_1d0,pcVar14,ppcVar9);
  pcVar12 = param_3[1];
  ppcVar13 = (code **)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    pcVar12 = (code *)(ulong)*(byte *)((long)param_3 + 0x17);
    ppcVar13 = param_3;
  }
  (**(code **)(*(long *)pcVar14 + 0x128))(&ppuStack_190,pcVar14,ppcVar13,pcVar12);
  uStack_1c0 = 6;
  ppuStack_1b8 = ppuStack_190;
  FUN_10a4c24b8(auStack_1b0,pcVar14,*param_4,(long)param_4[1] - (long)*param_4);
  func_0x00010a88aaac(aiStack_1a0,pcVar14,*param_5,param_5[1]);
  uStack_168 = 4;
  ppuStack_170 = apuStack_1d0;
  (**(code **)(*(long *)pcVar14 + 0x58))(pcVar14);
  ppuStack_190 = &puStack_1e8;
  pppuStack_178 = &ppuStack_170;
  pcStack_188 = pcVar14;
  puStack_180 = (undefined1 *)&puStack_1f0;
  func_0x0001098960c0(aiStack_1e0);
  if ((3 < aiStack_1e0[0]) && (puStack_1d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1d8)();
  }
  lVar15 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_1a0 + lVar15)) &&
       (*(undefined8 **)((long)&lStack_198 + lVar15) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_198 + lVar15))();
    }
    lVar15 = lVar15 + -0x10;
  } while (lVar15 != -0x40);
  if (puStack_1f0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1f0)();
  }
  if (puStack_1e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1e8)();
  }
  return;
}



/* Entry: 10a895990; end: 10a895c03;  */

void FUN_10a895990(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined4 uStack_a0;
  undefined8 **ppuStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_b0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_c8,apuStack_b0,*param_1);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_d0);
  plVar4 = (long *)*param_1;
  FUN_10a724820(apuStack_b0,plVar4,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_a0 = 6;
  ppuStack_98 = ppuStack_70;
  FUN_10a4c24b8(auStack_90,plVar4,*param_4,param_4[1] - *param_4);
  func_0x00010a88aaac(aiStack_80,plVar4,*param_5,param_5[1]);
  uStack_48 = 4;
  ppuStack_50 = apuStack_b0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_c8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_d0;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a895c04; end: 10a895c53;  */

long FUN_10a895c04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x50);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a895c54; end: 10a895c6b;  */

void FUN_10a895c54(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined4 uStack_a0;
  undefined8 **ppuStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(apuStack_b0,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_c8,apuStack_b0,*puVar3);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_d0);
  plVar6 = (long *)*puVar3;
  FUN_10a724820(apuStack_b0,plVar6,puVar4 + 2);
  uVar1 = puVar4[5];
  plVar2 = (long *)puVar4[4];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x37)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x37);
    plVar2 = puVar4 + 4;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_a0 = 6;
  ppuStack_98 = ppuStack_70;
  FUN_10a4c24b8(auStack_90,plVar6,puVar4[7],puVar4[8] - puVar4[7]);
  func_0x00010a88aaac(aiStack_80,plVar6,puVar4[10],puVar4[0xb]);
  uStack_48 = 4;
  ppuStack_50 = apuStack_b0;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_c8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_d0;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a895c6c; end: 10a895ccf;  */

void FUN_10a895c6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a5c92ec(lVar1 + 0x50);
    if (*(long *)(lVar1 + 0x38) != 0) {
      *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x38);
      __ZdlPv();
    }
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a895cd0; end: 10a895ce7;  */

void FUN_10a895cd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a895ce8; end: 10a895d17;  */

long FUN_10a895ce8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
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



/* Entry: 10a895d18; end: 10a895d53;  */

void FUN_10a895d18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c24980;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10a895d54; end: 10a895fcb;  */

void FUN_10a895d54(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  
  plVar7 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar8 <= plVar7) {
        uVar6 = 0;
        if (plVar8 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar8);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar9);
          }
          else if (plVar8 <= plVar4) {
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
          }
          if (plVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)0x38;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar7;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*param_3,param_3[1]);
  }
  else {
    lVar5 = *param_3;
    plVar3[3] = param_3[1];
    plVar3[2] = lVar5;
    plVar3[4] = param_3[2];
  }
  lVar5 = param_4[1];
  lVar10 = *param_4;
  plVar3[6] = param_4[1];
  plVar3[5] = lVar10;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_10a895fcc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar3 != 0) {
      plVar7 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a895fcc; end: 10a89619b;  */

void FUN_10a895fcc(long *param_1,long *param_2)

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
    FUN_10a8933b0(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a89619c; end: 10a8961e3;  */

void FUN_10a89619c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a8933b0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8961e4; end: 10a8961f3;  */

void FUN_10a8961e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c249a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8961f4; end: 10a896213;  */

void FUN_10a8961f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c249a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a896214; end: 10a896223;  */

void FUN_10a896214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a89621c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a896224; end: 10a89627b;  */

long FUN_10a896224(long param_1)

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



/* Entry: 10a89627c; end: 10a896357;  */

void FUN_10a89627c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  char cStack_29;
  
  lVar4 = *param_1;
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  cStack_29 = '\x10';
  uStack_38 = 0x6174614468637461;
  uStack_40 = 0x4d64696c61766e49;
  uStack_30 = 0;
  if (*(char *)(lVar4 + 0x4bb) == '\x01') {
    *(undefined1 *)(lVar4 + 0x4bb) = 0;
    FUN_10a86a770(lVar4,&DAT_10f2cf69e,6,&uStack_40);
    if (cStack_29 < '\0') {
      __ZdlPv(uStack_40);
    }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a896358; end: 10a89636b;  */

void FUN_10a896358(void)

{
  return;
}



/* Entry: 10a89636c; end: 10a896aff;  */

/* WARNING: Removing unreachable block (ram,0x00010a89658c) */
/* WARNING: Removing unreachable block (ram,0x00010a8963fc) */
/* WARNING: Removing unreachable block (ram,0x00010a896458) */
/* WARNING: Removing unreachable block (ram,0x00010a89659c) */

void FUN_10a89636c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long **pplVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  long **pplVar9;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined **ppuVar20;
  long **pplStack_1d0;
  long **pplStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  undefined ***pppuStack_190;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined7 uStack_130;
  char cStack_129;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_b0;
  long *plStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined4 uStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)(param_2 + 0x10);
  plStack_178 = (long *)param_1[1];
  plStack_180 = (long *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)plStack_180[0x3d] = 2;
  lVar17 = plStack_180[0x6a];
  func_0x000107c2b054(&plStack_140,&UNK_10f67f5c6);
  if (lVar17 != 0) {
    uVar18 = *(undefined8 *)(lVar17 + 0x8d8);
    func_0x000107c2b054(&plStack_b0,"true");
    FUN_10a76bdb0(uVar18,&plStack_140,&plStack_b0);
  }
  if (cStack_129 < '\0') {
    __ZdlPv(plStack_140);
  }
  plVar19 = plStack_180;
  func_0x000107c2b054(&plStack_b0,&UNK_10f67d9eb);
  if (*(char *)((long)plVar19 + 0x4bb) == '\x01') {
    *(undefined1 *)((long)plVar19 + 0x4bb) = 0;
    FUN_10a86a770(plVar19,&DAT_10f2c2f7f,9,&plStack_b0);
  }
  if ((char)plVar15[9] != '\x01') goto LAB_10a8965a4;
  FUN_10a87ee20(&plStack_b0,plVar15 + 2);
  plVar19 = plStack_180;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
  }
  if (uStack_88 != 0) {
    cVar4 = *(char *)((long)plStack_180 + 0x267);
    uVar11 = (ulong)cVar4;
    uVar12 = uVar11;
    if ((long)uVar11 < 0) {
      uVar12 = plStack_180[0x4b];
    }
    if (uVar12 != 0) {
      uVar12 = plStack_180[0x4b];
      if (-1 < cVar4) {
        uVar12 = uVar11;
      }
      if (uVar12 == uStack_88) {
        plVar7 = (long *)plStack_180[0x4a];
        if (-1 < cVar4) {
          plVar7 = plStack_180 + 0x4a;
        }
        if (-1 < (char)bStack_79) {
          ppppuStack_90 = &ppppuStack_90;
        }
        _memcmp(plVar7,ppppuStack_90);
        if ((int)plVar7 == 0) goto LAB_10a8964fc;
      }
    }
    FUN_10a869744(plVar19,&ppppuStack_90);
    plVar19 = plStack_180;
  }
LAB_10a8964fc:
  (**(code **)(*(long *)plVar19[0x6d] + 0x98))((long *)plVar19[0x6d],&plStack_b0);
  FUN_109d1918c(&plStack_170,plStack_180 + 0x26);
  if (plStack_170 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_170 + 1);
    do {
      uVar12 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar12 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar12 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plStack_170 + 8))();
      }
    }
  }
  FUN_10a87358c(plStack_180,uStack_98);
LAB_10a8965a4:
  plVar19 = plStack_180;
  if (((*(byte *)((long)plStack_180 + 0x4b9) & 1) == 0) &&
     ((*(byte *)(plStack_180[0x6f] + 0xaa) & 1) == 0)) {
    FUN_10a874948(&uStack_158,plStack_180[0x71],plStack_180);
    FUN_10a3bf120(&plStack_140);
    ppuVar6 = (undefined **)0x138;
    __Znwm();
    plStack_b0 = plStack_140;
    ppuVar20 = ppuVar6 + 1;
    *ppuVar20 = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar8 = ppuVar6 + 3;
    plStack_140 = (long *)0x0;
    plStack_a8 = plStack_138;
    (**(code **)(CONCAT17(cStack_129,uStack_130) + 0x10))(&uStack_a0,&uStack_130);
    uStack_68 = uStack_f8;
    uStack_198 = plVar19[0x41];
    plStack_1a0 = (long *)plVar19[0x40];
    if (-1 < (char)*(byte *)((long)plVar19 + 0x217)) {
      uStack_198 = (ulong)*(byte *)((long)plVar19 + 0x217);
      plStack_1a0 = plVar19 + 0x40;
    }
    pppuStack_190 = &ppuStack_f0;
    ppuStack_f0 = (undefined **)FUN_10a8a64e4;
    ppuStack_e8 = &PTR_FUN_110c24fb0;
    uStack_e0 = uStack_158;
    uStack_d0 = uStack_148;
    uStack_d8 = uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    FUN_10a23708c(ppuVar8,&UNK_10e4df520,0x26,&UNK_10f647b45,3,&plStack_b0,1);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    FUN_10a042634(&plStack_b0);
    ppuStack_168 = ppuVar8;
    ppuStack_160 = ppuVar6;
    FUN_10a042634(&plStack_140);
    plStack_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    plVar7 = (long *)plVar19[0x6c];
    if (((plVar7 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_138 = plVar7, plVar7 == (long *)0x0)) ||
       (plStack_140 = (long *)plVar19[0x6b], plStack_140 == (long *)0x0)) {
      plVar19 = plStack_138;
      ppuVar8 = &PTR_PTR_113305488;
      FUN_10ae079a0(0,&PTR_PTR_113305488);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113305488);
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar5) {
          *ppuVar20 = *ppuVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_f0 = ppuVar8;
      ppuStack_e8 = ppuVar6;
      (**(code **)(*plStack_140 + 0x10))(&plStack_b0,plStack_140,&ppuStack_f0);
      if (*(char *)((long)plVar19 + 0x627) < '\0') {
        __ZdlPv(plVar19[0xc2]);
      }
      ppuVar8 = ppuStack_e8;
      plVar19[0xc3] = (long)plStack_a8;
      plVar19[0xc2] = (long)plStack_b0;
      plVar19[0xc4] = CONCAT17(uStack_99,uStack_a0);
      uStack_99 = 0;
      plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar6 = ppuStack_e8 + 1;
        do {
          puVar13 = *ppuVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar5) {
            *ppuVar6 = puVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      ppuVar8 = &PTR_PTR_113304378;
      FUN_10ae079a0(0,&PTR_PTR_113304378);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304378);
      plVar19 = plStack_138;
    }
    if (plVar19 != (long *)0x0) {
      plVar7 = plVar19 + 1;
      do {
        lVar17 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    ppuVar8 = ppuStack_160;
    if (ppuStack_160 != (undefined **)0x0) {
      ppuVar6 = ppuStack_160 + 1;
      do {
        puVar13 = *ppuVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar5) {
          *ppuVar6 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    FUN_10a8749f0(&uStack_158);
  }
  else {
    ppuVar8 = &PTR_PTR_113305258;
    FUN_10ae079a0(0,&PTR_PTR_113305258);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113305258);
  }
  if (*(char *)(plStack_180[0xb1] + 8) == '\x01') {
    FUN_10a896b00(plStack_180 + 0xb0,plStack_180,plStack_178);
  }
  FUN_10a896b9c(plStack_180[0x6f] + 0xb0,&plStack_180,plVar15);
  plVar19 = (long *)plStack_180[0xaf];
  plStack_a8 = (long *)plStack_180[0xaf];
  plStack_b0 = (long *)plStack_180[0xae];
  if (plVar19 != (long *)0x0) {
    plVar7 = plVar19 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pplVar9 = (long **)(*plVar15 + 0x50);
  pplVar10 = (long **)(*plVar15 + 0x68);
  plVar7 = plStack_180;
  FUN_10a87c7ec();
  if (plVar19 != (long *)0x0) {
    plVar16 = plVar19 + 1;
    do {
      lVar17 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar19;
    }
  }
  plVar19 = *(long **)(*plVar15 + 0x40);
  for (plVar15 = *(long **)(*plVar15 + 0x38); plVar16 = plStack_178, plVar15 != plVar19;
      plVar15 = plVar15 + 2) {
    plVar16 = (long *)plVar15[1];
    plStack_a8 = (long *)plVar15[1];
    plStack_b0 = (long *)*plVar15;
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = (long *)(plStack_180[0x6f] + 0x218);
    pplVar9 = &plStack_180;
    pplVar10 = &plStack_b0;
    FUN_10a893eb8();
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        lVar17 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plVar16;
      }
    }
  }
  plStack_1b8 = plVar7;
  if (plStack_178 != (long *)0x0) {
    plVar19 = plStack_178 + 1;
    do {
      lVar17 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_1b8 = plVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a05bd88(&ppuStack_f0);
    func_0x00010a05a8c4(&plStack_140);
    FUN_10a05bd88(&ppuStack_168);
    FUN_10a8749f0(&uStack_158);
    FUN_10a5ca2e0(&plStack_180);
    plVar19 = plStack_1b8;
    __Unwind_Resume();
    pcStack_1a8 = FUN_10a896b00;
    pcVar14 = (code *)*plVar19;
    if (pplVar10 != (long **)0x0) {
      pplVar3 = pplVar10 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
        if (bVar5) {
          *pplVar3 = (long *)((long)*pplVar3 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pplStack_1d0 = pplVar9;
    pplStack_1c8 = pplVar10;
    plStack_1c0 = plVar15;
    puStack_1b0 = &stack0xfffffffffffffff0;
    (*pcVar14)(&pplStack_1d0,plVar19);
    pplVar10 = pplStack_1c8;
    if (pplStack_1c8 != (long **)0x0) {
      pplVar9 = pplStack_1c8 + 1;
      do {
        plVar15 = *pplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar5) {
          *pplVar9 = (long *)((long)plVar15 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar15 == (long *)0x0) {
        (*(code *)(*pplStack_1c8)[2])(pplStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar10);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a896b00; end: 10a896b9b;  */

void FUN_10a896b00(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_2;
  plStack_28 = param_3;
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a896b9c; end: 10a896ee7;  */

void FUN_10a896b9c(undefined *******param_1,undefined ******param_2,undefined *******param_3)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *******pppppppuVar5;
  undefined *******pppppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  long lVar13;
  undefined *******unaff_x22;
  undefined8 *puStack_150;
  undefined ***pppuStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined *apuStack_130 [2];
  int aiStack_120 [2];
  long lStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined1 *puStack_100;
  undefined ***pppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined ******ppppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined ******ppppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *****pppppuStack_b0;
  undefined ******ppppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined ******ppppppuStack_98;
  undefined *****pppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined *****pppppuStack_70;
  undefined *****pppppuStack_68;
  undefined ****ppppuStack_60;
  undefined ******ppppppuStack_58;
  undefined *****pppppuStack_50;
  undefined ******ppppppuStack_48;
  long lStack_38;
  
  ppppppuVar12 = &pppppuStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar9 = param_2;
  pppppppuVar8 = param_3;
  if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppppppuVar5 = param_1;
    if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a896e60;
    ppppppuVar9 = *param_1;
    ppppppuStack_78 = (undefined ******)param_2[1];
    pppppuStack_80 = *param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuStack_a8 = param_3[1];
    pppppuStack_b0 = (undefined *****)*param_3;
    if (param_3[1] != (undefined ******)0x0) {
      ppppppuVar10 = param_3[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar3) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar5 = (undefined *******)&pppppuStack_80;
    pppppppuVar8 = param_1;
    (*(code *)ppppppuVar9)(pppppppuVar5,&pppppuStack_b0);
    pppppppuVar6 = (undefined *******)ppppppuStack_a8;
    ppppppuVar9 = ppppppuVar12;
    if ((undefined *******)ppppppuStack_a8 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_a8 + 1);
      do {
        ppppppuVar10 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar10 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
        ppppppuVar9 = ppppppuVar12;
      }
    }
    if ((undefined *******)ppppppuStack_78 == (undefined *******)0x0) goto LAB_10a896e60;
    pppppppuVar6 = (undefined *******)(ppppppuStack_78 + 1);
    do {
      ppppppuVar12 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar7 = (undefined *******)ppppppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    unaff_x22 = param_1;
    ppppppuVar12 = param_2;
    FUN_10a688b40();
    if (unaff_x22 != (undefined *******)0x0) {
      *unaff_x22 = (undefined ******)
                   CONCAT44((int)((ulong)*unaff_x22 >> 0x20) + 1,(int)*unaff_x22 + 1);
      pppppppuVar5 = (undefined *******)*param_1;
      FUN_10a896ee8(pppppppuVar5,param_2);
      iVar4 = *(int *)((long)unaff_x22 + 4) + -1;
      *(int *)((long)unaff_x22 + 4) = iVar4;
      pppppppuVar8 = param_3;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x22 = 0;
      }
      goto LAB_10a896e60;
    }
    pppppppuVar5 = (undefined *******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar12 == (undefined ******)0x0) goto LAB_10a896e60;
    pppppuStack_68 = (undefined *****)param_1[1];
    pppppuStack_70 = (undefined *****)*param_1;
    if (param_1[1] != (undefined ******)0x0) {
      ppppppuVar9 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_a0 = (undefined ****)*param_2;
    ppppppuStack_98 = (undefined ******)param_2[1];
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar5 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_90 = (undefined *****)*param_3;
    pppppppuVar6 = (undefined *******)param_3[1];
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_80 = (undefined *****)FUN_10a897160;
    ppppppuStack_78 = (undefined ******)&PTR_FUN_110c24a00;
    pppppuStack_b0 = (undefined *****)0x0;
    ppppppuStack_a8 = (undefined ******)0x0;
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar5 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = (undefined *******)&pppppuStack_80;
    ppppppuVar9 = &pppppuStack_80;
    ppppppuStack_88 = (undefined ******)pppppppuVar6;
    ppppuStack_60 = ppppuStack_a0;
    ppppppuStack_58 = ppppppuStack_98;
    pppppuStack_50 = pppppuStack_90;
    ppppppuStack_48 = (undefined ******)pppppppuVar6;
    FUN_10a4634ec(ppppppuVar12,ppppppuVar9);
    pppppppuVar5 = &ppppppuStack_78;
    (*(code *)*ppppppuStack_78)();
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar6 + 1;
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
      }
    }
    pppppppuVar6 = (undefined *******)ppppppuStack_98;
    if ((undefined *******)ppppppuStack_98 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_98 + 1);
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_98)[2])(ppppppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar5 = pppppppuVar6;
      }
    }
    if ((undefined *******)ppppppuStack_a8 == (undefined *******)0x0) goto LAB_10a896e60;
    pppppppuVar6 = (undefined *******)(ppppppuStack_a8 + 1);
    do {
      ppppppuVar12 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar7 = (undefined *******)ppppppuStack_a8;
    } while (cVar2 != '\0');
  }
  if (ppppppuVar12 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar5 = pppppppuVar7;
  }
LAB_10a896e60:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_78)(param_1 + 1);
    FUN_10a897130(&pppppuStack_b0);
    pppppppuVar6 = pppppppuVar5;
    __Unwind_Resume();
    pcStack_b8 = FUN_10a896ee8;
    ppppppuStack_e0 = (undefined ******)unaff_x22;
    pppppuStack_d8 = (undefined *****)param_2;
    ppppppuStack_d0 = (undefined ******)param_1;
    ppppppuStack_c8 = (undefined ******)pppppppuVar5;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&pppppuStack_110,pppppppuVar6 + 1,*pppppppuVar6);
    func_0x000109884820(&pppuStack_148,&pppppuStack_110,*pppppppuVar6);
    if (pppppuStack_110 != (undefined *****)0x0) {
      (*(code *)**pppppuStack_110)();
    }
    (*(code *)(**pppppppuVar6)[6])(&puStack_150);
    ppppppuVar12 = *pppppppuVar6;
    FUN_10a724820(apuStack_130,ppppppuVar12,ppppppuVar9);
    pppppuStack_108 = (undefined *****)pppppppuVar8[1];
    pppppuStack_110 = (undefined *****)*pppppppuVar8;
    if (pppppppuVar8[1] != (undefined ******)0x0) {
      ppppppuVar9 = pppppppuVar8[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_f0 = &PTR_DAT_110c23e88;
    func_0x000109899de4(aiStack_120,ppppppuVar12,&pppppuStack_110,&ppuStack_f0,0,0);
    pppppuVar1 = pppppuStack_108;
    if ((undefined ******)pppppuStack_108 != (undefined ******)0x0) {
      ppppppuVar9 = (undefined ******)(pppppuStack_108 + 1);
      do {
        pppppuVar11 = *ppppppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
        if (bVar3) {
          *ppppppuVar9 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_108)[2])(pppppuStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar1);
      }
    }
    ppuStack_f0 = apuStack_130;
    uStack_e8 = 2;
    (*(code *)(*ppppppuVar12)[0xb])(ppppppuVar12);
    pppppuStack_110 = (undefined *****)&pppuStack_148;
    pppppuStack_108 = (undefined *****)ppppppuVar12;
    puStack_100 = (undefined1 *)&puStack_150;
    pppuStack_f8 = &ppuStack_f0;
    func_0x0001098960c0(aiStack_140);
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    lVar13 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_120 + lVar13)) &&
         (*(undefined8 **)((long)&lStack_118 + lVar13) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_118 + lVar13))();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != -0x20);
    if (puStack_150 != (undefined8 *)0x0) {
      (**(code **)*puStack_150)();
    }
    if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
      (*(code *)**pppuStack_148)();
    }
    return;
  }
  return;
}



/* Entry: 10a896ee8; end: 10a89712f;  */

void FUN_10a896ee8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
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
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_80,plVar6,param_2);
  plStack_58 = (long *)param_3[1];
  ppuStack_60 = (undefined8 **)*param_3;
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
  ppuStack_40 = &PTR_DAT_110c23e88;
  func_0x000109899de4(aiStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a897130; end: 10a89715f;  */

long FUN_10a897130(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a896224(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a897160; end: 10a897173;  */

void FUN_10a897160(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  FUN_10a724820(apuStack_80,plVar7,param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x38);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c23e88;
  func_0x000109899de4(aiStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar6 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar6)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar6) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar6))();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a897174; end: 10a8971a3;  */

long FUN_10a897174(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a896224(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a8971a4; end: 10a897207;  */

void FUN_10a8971a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c24a00;
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10a897208; end: 10a897243;  */

void FUN_10a897208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a87eeb8(lVar1 + 0x10);
    FUN_10a896224(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a897244; end: 10a89726b;  */

void FUN_10a897244(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89726c; end: 10a89728b;  */

void FUN_10a89726c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c24a40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a89728c; end: 10a89729b;  */

void FUN_10a89728c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a897294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a89729c; end: 10a8972f3;  */

long FUN_10a89729c(long param_1)

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



/* Entry: 10a8972f4; end: 10a89767f;  */

void FUN_10a8972f4(undefined ********param_1,undefined *******param_2,undefined *******param_3)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ********ppppppppuVar5;
  undefined ********ppppppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *****pppppuVar10;
  undefined *******pppppppuVar11;
  long lVar12;
  undefined *******unaff_x20;
  undefined ********ppppppppuVar13;
  undefined ******ppppppuVar14;
  undefined8 *puStack_170;
  undefined ***pppuStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  undefined *apuStack_150 [2];
  int aiStack_140 [2];
  long lStack_138;
  undefined *****pppppuStack_130;
  undefined ******ppppppuStack_128;
  undefined1 *puStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *******pppppppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined *******pppppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined ******ppppppuStack_d0;
  undefined *******pppppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined *******pppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *******pppppppuStack_98;
  undefined ******ppppppuStack_88;
  undefined *******pppppppuStack_80;
  undefined ****ppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ******ppppppuStack_68;
  undefined *******pppppppuStack_60;
  undefined *****pppppuStack_58;
  undefined *******pppppppuStack_50;
  long lStack_48;
  
  pppppppuVar9 = &ppppppuStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar11 = *param_1;
  ppppppppuVar13 = (undefined ********)param_1[1];
  *param_1 = (undefined *******)0x0;
  param_1[1] = (undefined *******)0x0;
  ppppppuVar14 = pppppppuVar11[0x6f];
  ppppppuStack_d0 = (undefined ******)pppppppuVar11;
  pppppppuStack_c8 = (undefined *******)ppppppppuVar13;
  if (*(char *)(ppppppuVar14 + 0x39) == '\x01') {
    pppppuVar10 = ppppppuVar14[0x31];
    if (ppppppppuVar13 != (undefined ********)0x0) {
      ppppppppuVar5 = ppppppppuVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar5,0x10);
        if (bVar3) {
          *ppppppppuVar5 = (undefined *******)((long)*ppppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuStack_b8 = (undefined *******)param_2[3];
    pppppuStack_c0 = (undefined *****)param_2[2];
    if (param_2[3] != (undefined ******)0x0) {
      ppppppuVar1 = param_2[3] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = (undefined ********)&ppppppuStack_88;
    pppppppuVar8 = (undefined *******)&pppppuStack_c0;
    param_3 = (undefined *******)(ppppppuVar14 + 0x31);
    ppppppuStack_88 = (undefined ******)pppppppuVar11;
    pppppppuStack_80 = (undefined *******)ppppppppuVar13;
    (*(code *)pppppuVar10)(param_1,pppppppuVar8);
    ppppppppuVar5 = (undefined ********)pppppppuStack_b8;
    if ((undefined ********)pppppppuStack_b8 != (undefined ********)0x0) {
      ppppppppuVar6 = (undefined ********)(pppppppuStack_b8 + 1);
      do {
        pppppppuVar9 = *ppppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppppuVar9 == (undefined *******)0x0) {
        (*(code *)(*pppppppuStack_b8)[2])(pppppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppppuVar5;
      }
    }
    if ((undefined ********)pppppppuStack_80 == (undefined ********)0x0) goto LAB_10a8975b4;
    ppppppppuVar5 = (undefined ********)(pppppppuStack_80 + 1);
    do {
      pppppppuVar9 = *ppppppppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar5,0x10);
      if (bVar3) {
        *ppppppppuVar5 = (undefined *******)((long)pppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar6 = (undefined ********)pppppppuStack_80;
    } while (cVar2 != '\0');
  }
  else {
    pppppppuVar8 = param_2;
    if (*(char *)(ppppppuVar14 + 0x39) != '\x02') goto LAB_10a8975b4;
    unaff_x20 = (undefined *******)(ppppppuVar14 + 0x31);
    pppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x20 != (undefined *******)0x0) {
      *unaff_x20 = (undefined ******)
                   CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
      param_1 = (undefined ********)ppppppuVar14[0x31];
      param_3 = param_2 + 2;
      FUN_10a897680(param_1,&ppppppuStack_d0);
      iVar4 = *(int *)((long)unaff_x20 + 4) + -1;
      *(int *)((long)unaff_x20 + 4) = iVar4;
      pppppppuVar8 = pppppppuVar9;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x20 = 0;
      }
      goto LAB_10a8975b4;
    }
    pppppppuVar8 = (undefined *******)0x0;
    param_1 = (undefined ********)0x0;
    if (pppppppuVar7 == (undefined *******)0x0) goto LAB_10a8975b4;
    ppppuStack_78 = (undefined ****)ppppppuVar14[0x31];
    ppppuStack_70 = (undefined ****)ppppppuVar14[0x32];
    if ((undefined *****)ppppuStack_70 != (undefined *****)0x0) {
      pppppuVar10 = (undefined *****)(ppppuStack_70 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppppppppuVar13 = (undefined ********)pppppppuStack_c8;
      } while (cVar2 != '\0');
    }
    if (ppppppppuVar13 != (undefined ********)0x0) {
      ppppppppuVar5 = ppppppppuVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar5,0x10);
        if (bVar3) {
          *ppppppppuVar5 = (undefined *******)((long)*ppppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_a0 = (undefined *****)param_2[2];
    ppppppppuVar5 = (undefined ********)param_2[3];
    if (ppppppppuVar5 != (undefined ********)0x0) {
      ppppppppuVar6 = ppppppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)*ppppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuStack_88 = (undefined ******)FUN_10a8978f8;
    pppppppuStack_80 = (undefined *******)&PTR_FUN_110c24a80;
    pppppuStack_c0 = (undefined *****)0x0;
    pppppppuStack_b8 = (undefined *******)0x0;
    if (ppppppppuVar13 != (undefined ********)0x0) {
      ppppppppuVar6 = ppppppppuVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)*ppppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (ppppppppuVar5 != (undefined ********)0x0) {
      ppppppppuVar6 = ppppppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)*ppppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = &ppppppuStack_88;
    pppppppuVar8 = &ppppppuStack_88;
    ppppppuStack_b0 = (undefined ******)pppppppuVar11;
    pppppppuStack_a8 = (undefined *******)ppppppppuVar13;
    pppppppuStack_98 = (undefined *******)ppppppppuVar5;
    ppppppuStack_68 = (undefined ******)pppppppuVar11;
    pppppppuStack_60 = (undefined *******)ppppppppuVar13;
    pppppuStack_58 = pppppuStack_a0;
    pppppppuStack_50 = (undefined *******)ppppppppuVar5;
    FUN_10a4634ec(pppppppuVar7,pppppppuVar8);
    param_1 = &pppppppuStack_80;
    (*(code *)*pppppppuStack_80)();
    if (ppppppppuVar5 != (undefined ********)0x0) {
      ppppppppuVar6 = ppppppppuVar5 + 1;
      do {
        pppppppuVar9 = *ppppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppppuVar9 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar5)[2])(ppppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppppuVar5;
      }
    }
    ppppppppuVar5 = (undefined ********)pppppppuStack_a8;
    if ((undefined ********)pppppppuStack_a8 != (undefined ********)0x0) {
      ppppppppuVar6 = (undefined ********)(pppppppuStack_a8 + 1);
      do {
        pppppppuVar9 = *ppppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar3) {
          *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppppuVar9 == (undefined *******)0x0) {
        (*(code *)(*pppppppuStack_a8)[2])(pppppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppppuVar5;
      }
    }
    if ((undefined ********)pppppppuStack_b8 == (undefined ********)0x0) goto LAB_10a8975b4;
    ppppppppuVar5 = (undefined ********)(pppppppuStack_b8 + 1);
    do {
      pppppppuVar9 = *ppppppppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar5,0x10);
      if (bVar3) {
        *ppppppppuVar5 = (undefined *******)((long)pppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar6 = (undefined ********)pppppppuStack_b8;
    } while (cVar2 != '\0');
  }
  if (pppppppuVar9 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar6)[2])(ppppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_1 = ppppppppuVar6;
  }
LAB_10a8975b4:
  ppppppppuVar5 = (undefined ********)pppppppuStack_c8;
  pppppppuStack_e8 = (undefined *******)param_1;
  if ((undefined ********)pppppppuStack_c8 != (undefined ********)0x0) {
    ppppppppuVar6 = (undefined ********)(pppppppuStack_c8 + 1);
    do {
      pppppppuVar9 = *ppppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
      if (bVar3) {
        *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppppuVar9 == (undefined *******)0x0) {
      (*(code *)(*pppppppuStack_c8)[2])(pppppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuStack_e8 = (undefined *******)ppppppppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*pppppppuStack_80)(unaff_x20 + 1);
    FUN_10a8978c8(&pppppuStack_c0);
    FUN_10a5ca2e0(&ppppppuStack_d0);
    ppppppppuVar5 = (undefined ********)pppppppuStack_e8;
    __Unwind_Resume();
    pcStack_d8 = FUN_10a897680;
    pppppppuStack_100 = (undefined *******)ppppppppuVar13;
    ppppppuStack_f8 = (undefined ******)pppppppuVar11;
    ppppppuStack_f0 = (undefined ******)unaff_x20;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&pppppuStack_130,ppppppppuVar5 + 1,*ppppppppuVar5);
    func_0x000109884820(&pppuStack_168,&pppppuStack_130,*ppppppppuVar5);
    if (pppppuStack_130 != (undefined *****)0x0) {
      (*(code *)**pppppuStack_130)();
    }
    (*(code *)(**ppppppppuVar5)[6])(&puStack_170);
    pppppppuVar11 = *ppppppppuVar5;
    FUN_10a724820(apuStack_150,pppppppuVar11,pppppppuVar8);
    ppppppuStack_128 = param_3[1];
    pppppuStack_130 = (undefined *****)*param_3;
    if (param_3[1] != (undefined ******)0x0) {
      ppppppuVar14 = param_3[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar3) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_110 = &PTR_DAT_110c240d0;
    func_0x000109899de4(aiStack_140,pppppppuVar11,&pppppuStack_130,&ppuStack_110,0,0);
    ppppppuVar14 = ppppppuStack_128;
    if (ppppppuStack_128 != (undefined ******)0x0) {
      ppppppuVar1 = ppppppuStack_128 + 1;
      do {
        pppppuVar10 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuStack_128)[2])(ppppppuStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
      }
    }
    ppuStack_110 = apuStack_150;
    uStack_108 = 2;
    (*(code *)(*pppppppuVar11)[0xb])(pppppppuVar11);
    pppppuStack_130 = (undefined *****)&pppuStack_168;
    ppppppuStack_128 = (undefined ******)pppppppuVar11;
    puStack_120 = (undefined1 *)&puStack_170;
    pppuStack_118 = &ppuStack_110;
    func_0x0001098960c0(aiStack_160);
    if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
      (**(code **)*puStack_158)();
    }
    lVar12 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_140 + lVar12)) &&
         (*(undefined8 **)((long)&lStack_138 + lVar12) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_138 + lVar12))();
      }
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != -0x20);
    if (puStack_170 != (undefined8 *)0x0) {
      (**(code **)*puStack_170)();
    }
    if ((undefined ****)pppuStack_168 != (undefined ****)0x0) {
      (*(code *)**pppuStack_168)();
    }
    return;
  }
  return;
}



/* Entry: 10a897680; end: 10a8978c7;  */

void FUN_10a897680(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
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
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_80,plVar6,param_2);
  plStack_58 = (long *)param_3[1];
  ppuStack_60 = (undefined8 **)*param_3;
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
  ppuStack_40 = &PTR_DAT_110c240d0;
  func_0x000109899de4(aiStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a8978c8; end: 10a8978f7;  */

long FUN_10a8978c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a89729c(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8978f8; end: 10a89790b;  */

void FUN_10a8978f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  FUN_10a724820(apuStack_80,plVar7,param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x38);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c240d0;
  func_0x000109899de4(aiStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar6 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar6)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar6) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar6))();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a89790c; end: 10a89793b;  */

long FUN_10a89790c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a89729c(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a89793c; end: 10a8979c3;  */

void FUN_10a89793c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c24a80;
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10a8979c4; end: 10a897a67;  */

undefined1  [16] FUN_10a8979c4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  lVar3 = 0;
  FUN_10ae03140(0,puVar2,uVar1);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = lVar3 + uVar1 + 1;
  return auVar4;
}



/* Entry: 10a897a68; end: 10a897cdf;  */

void FUN_10a897a68(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  
  plVar7 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar8 <= plVar7) {
        uVar6 = 0;
        if (plVar8 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar8);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar9);
          }
          else if (plVar8 <= plVar4) {
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
          }
          if (plVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)0x38;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar7;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*param_3,param_3[1]);
  }
  else {
    lVar5 = *param_3;
    plVar3[3] = param_3[1];
    plVar3[2] = lVar5;
    plVar3[4] = param_3[2];
  }
  lVar5 = param_4[1];
  lVar10 = *param_4;
  plVar3[6] = param_4[1];
  plVar3[5] = lVar10;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_10a895fcc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar3 != 0) {
      plVar7 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a897ce0; end: 10a897d8f;  */

void FUN_10a897ce0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_1[1];
  lStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a893eb8(*(long *)(lStack_30 + 0x378) + 0x218,&lStack_30,param_2 + 0x10);
  plVar7 = plStack_28;
  iVar3 = *(int *)(lStack_30 + 0x2d0);
  iVar1 = iVar3 + 1;
  *(int *)(lStack_30 + 0x2d0) = iVar1;
  iVar4 = *(int *)(lStack_30 + 0x2d4);
  if (iVar4 < iVar1) {
    iVar4 = iVar3 + 1;
  }
  *(int *)(lStack_30 + 0x2d4) = iVar4;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a897d90; end: 10a897db3;  */

long FUN_10a897d90(long param_1)

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


