/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3ef894; end: 10a3ef8bb;  */

undefined1  [16] FUN_10a3ef894(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_109ffde64(&UNK_10f655b2b);
  plVar2 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3c != 0) {
    func_0x000109ffded8();
    lVar3 = plVar2[1];
    lVar4 = plVar2[2];
    while (lVar4 != lVar3) {
      plVar2[2] = lVar4 + -0x10;
      plVar1 = (long *)(lVar4 + -8);
      lVar4 = lVar4 + -0x10;
      if (*plVar1 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        lVar4 = plVar2[2];
      }
    }
    if (*plVar2 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = plVar2;
    return auVar6;
  }
  lVar3 = (long)plVar2 << 4;
  __Znwm(lVar3);
  auVar5._8_8_ = plVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 10a3ef8bc; end: 10a3ef94b;  */

undefined1  [16] FUN_10a3ef8bc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3c != 0) {
    func_0x000109ffded8();
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
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  lVar2 = (long)param_1 << 4;
  __Znwm(lVar2);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10a3ef94c; end: 10a3ef95f;  */

undefined8 * FUN_10a3ef94c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)&UNK_10f655b2b;
  FUN_109ffde64();
  uVar2 = *param_3;
  *puVar1 = param_2;
  puVar1[1] = uVar2;
  *param_3 = 0;
  puVar1[2] = puVar1 + 5;
  puVar1[4] = 4;
  puVar1[3] = 0;
  FUN_10a3e98e4(puVar1 + 2,param_3 + 1);
  puVar1[9] = puVar1 + 0xc;
  puVar1[0xb] = 4;
  puVar1[10] = 0;
  FUN_10a3e98e4(puVar1 + 9,param_3 + 8);
  return puVar1;
}



/* Entry: 10a3ef960; end: 10a3ef9db;  */

undefined8 * FUN_10a3ef960(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_1 = param_2;
  param_1[1] = uVar1;
  *param_3 = 0;
  param_1[2] = param_1 + 5;
  param_1[4] = 4;
  param_1[3] = 0;
  FUN_10a3e98e4(param_1 + 2,param_3 + 1);
  param_1[9] = param_1 + 0xc;
  param_1[0xb] = 4;
  param_1[10] = 0;
  FUN_10a3e98e4(param_1 + 9,param_3 + 8);
  return param_1;
}



/* Entry: 10a3ef9dc; end: 10a3ef9ef;  */

undefined8 * FUN_10a3ef9dc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  puVar6 = &UNK_10f655b2b;
  FUN_109ffde64();
  if ((*(long *)(puVar6 + 0x58) != 0) && (puVar6 + 0x60 != *(undefined **)(puVar6 + 0x48))) {
    __ZdlPv();
  }
  if ((*(long *)(puVar6 + 0x20) != 0) && (puVar6 + 0x28 != *(undefined **)(puVar6 + 0x10))) {
    __ZdlPv();
  }
  piVar9 = *(int **)(puVar6 + 8);
  if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0)) {
    lVar10 = *(long *)(piVar9 + 2);
    if (lVar10 != 0) {
      piVar9[2] = 0;
      piVar9[3] = 0;
      uVar7 = *(ulong *)(lVar10 + 0x670);
      puVar2 = *(undefined8 **)(lVar10 + 0x668);
      uVar5 = uVar7;
      while (puVar4 = puVar2, uVar5 != 0) {
        uVar8 = uVar5 >> 1;
        puVar2 = puVar4 + uVar8 + 1;
        uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
        if (piVar9 <= (int *)puVar4[uVar8]) {
          puVar2 = puVar4;
          uVar5 = uVar8;
        }
      }
      puVar2 = *(undefined8 **)(lVar10 + 0x668) + uVar7;
      if ((puVar4 != puVar2) && ((int *)*puVar4 <= piVar9)) {
        puVar1 = puVar4 + 1;
        if (puVar1 != puVar2) {
          _memmove(puVar4,puVar1,(long)puVar2 - (long)puVar1);
          uVar7 = *(ulong *)(lVar10 + 0x670);
        }
        *(ulong *)(lVar10 + 0x670) = uVar7 - 1;
      }
    }
    if ((*(long *)(piVar9 + 8) != 0) && (piVar9 + 10 != *(int **)(piVar9 + 4))) {
      __ZdlPv();
    }
    __ZdlPv(piVar9);
  }
  return (undefined8 *)(puVar6 + 8);
}



/* Entry: 10a3ef9f0; end: 10a3efab3;  */

undefined8 * FUN_10a3ef9f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  if ((*(long *)(param_1 + 0x58) != 0) && (param_1 + 0x60 != *(long *)(param_1 + 0x48))) {
    __ZdlPv();
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (param_1 + 0x28 != *(long *)(param_1 + 0x10))) {
    __ZdlPv();
  }
  piVar8 = *(int **)(param_1 + 8);
  if ((piVar8 != (int *)0x0) && (iVar3 = *piVar8, *piVar8 = iVar3 + -1, iVar3 + -1 == 0)) {
    lVar9 = *(long *)(piVar8 + 2);
    if (lVar9 != 0) {
      piVar8[2] = 0;
      piVar8[3] = 0;
      uVar6 = *(ulong *)(lVar9 + 0x670);
      puVar2 = *(undefined8 **)(lVar9 + 0x668);
      uVar5 = uVar6;
      while (puVar4 = puVar2, uVar5 != 0) {
        uVar7 = uVar5 >> 1;
        puVar2 = puVar4 + uVar7 + 1;
        uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
        if (piVar8 <= (int *)puVar4[uVar7]) {
          puVar2 = puVar4;
          uVar5 = uVar7;
        }
      }
      puVar2 = *(undefined8 **)(lVar9 + 0x668) + uVar6;
      if ((puVar4 != puVar2) && ((int *)*puVar4 <= piVar8)) {
        puVar1 = puVar4 + 1;
        if (puVar1 != puVar2) {
          _memmove(puVar4,puVar1,(long)puVar2 - (long)puVar1);
          uVar6 = *(ulong *)(lVar9 + 0x670);
        }
        *(ulong *)(lVar9 + 0x670) = uVar6 - 1;
      }
    }
    if ((*(long *)(piVar8 + 8) != 0) && (piVar8 + 10 != *(int **)(piVar8 + 4))) {
      __ZdlPv();
    }
    __ZdlPv(piVar8);
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a3efab4; end: 10a3efb1b;  */

void FUN_10a3efab4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x80;
        FUN_10a3ef9f0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3efb1c; end: 10a3efb2f;  */

void FUN_10a3efb1c(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)&UNK_10f655b2b;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  uVar2 = *puVar1;
  *puVar1 = param_2;
  if (uVar2 != 0) {
    FUN_10a3dff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3efb30; end: 10a3efb63;  */

void FUN_10a3efb30(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  uVar1 = *param_1;
  *param_1 = param_2;
  if (uVar1 != 0) {
    FUN_10a3dff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3efb64; end: 10a3efb9f;  */

void FUN_10a3efb64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a3dff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3efba0; end: 10a3efc23;  */

undefined1  [16] FUN_10a3efba0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    param_2 = 0;
    FUN_10a3efb64(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a3efc24; end: 10a3efc37;  */

void FUN_10a3efc24(undefined8 param_1,undefined8 **param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 *apuStack_1d0 [7];
  undefined8 *puStack_198;
  undefined8 *apuStack_190 [7];
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_118;
  undefined8 *apuStack_110 [7];
  undefined8 *puStack_d8;
  undefined8 *apuStack_d0 [7];
  long lStack_98;
  
  ppuVar1 = (undefined8 **)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)ppuVar1 >> 0x3d == 0) {
    __Znwm((long)ppuVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2 + 1;
  if (*(char *)(*ppuVar5 + 1) == '\x01') {
    puStack_d8 = *param_2;
    (*(code *)(*ppuVar5)[2])(apuStack_d0,ppuVar5);
    *param_2 = (undefined8 *)&UNK_1053a6a3c;
    (*(code *)*param_2[1])(ppuVar5);
    param_2[1] = &PTR_DAT_110ae9180;
    ppuVar5 = ppuVar1 + 1;
    puVar4 = *ppuVar5;
    if (*(char *)(puVar4 + 1) == '\x01') {
      puStack_118 = *ppuVar1;
      (*(code *)puVar4[2])(apuStack_110,ppuVar5);
      *ppuVar1 = (undefined8 *)&UNK_1053a6a3c;
      (*(code *)*ppuVar1[1])(ppuVar5);
      puVar4 = puStack_118;
      ppuVar1[1] = &PTR_DAT_110ae9180;
      (*(code *)apuStack_110[0][2])(apuStack_1d0,apuStack_110);
      puStack_198 = puStack_d8;
      (*(code *)apuStack_d0[0][2])(apuStack_190,apuStack_d0);
      pcStack_158 = FUN_10a3efea0;
      ppuStack_150 = &PTR_FUN_110bd2fd0;
      puVar2 = (undefined8 *)0x80;
      __Znwm();
      *puVar2 = puVar4;
      (*(code *)apuStack_1d0[0][2])(puVar2 + 1,apuStack_1d0);
      puVar2[8] = puStack_198;
      param_2 = apuStack_190;
      (*(code *)apuStack_190[0][2])(puVar2 + 9);
      *ppuVar1 = (undefined8 *)FUN_10a3efea0;
      (*(code *)*ppuVar1[1])(ppuVar5);
      ppuVar1[1] = &PTR_FUN_110bd2fd0;
      ppuVar1[2] = puVar2;
      uStack_148 = 0;
      FUN_10a3efefc(&ppuStack_150);
      (*(code *)*apuStack_190[0])(apuStack_190);
      (*(code *)*apuStack_1d0[0])(apuStack_1d0);
      (*(code *)*apuStack_110[0])(apuStack_110);
    }
    else {
      *ppuVar1 = puStack_d8;
      (*(code *)*puVar4)(ppuVar5);
      param_2 = apuStack_d0;
      (*(code *)apuStack_d0[0][2])(ppuVar5);
    }
    ppuVar1 = apuStack_d0;
    (*(code *)*apuStack_d0[0])();
  }
  iVar3 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar4 = ppuVar1[2];
  (*(code *)puVar4[8])();
                    /* WARNING: Could not recover jumptable at 0x00010a3efecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(puVar4);
  return;
}



/* Entry: 10a3efc38; end: 10a3efc6b;  */

void FUN_10a3efc38(undefined8 **param_1,undefined8 **param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *apuStack_1c0 [7];
  undefined8 *puStack_188;
  undefined8 *apuStack_180 [7];
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_108;
  undefined8 *apuStack_100 [7];
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [7];
  long lStack_88;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2 + 1;
  if (*(char *)(*ppuVar4 + 1) == '\x01') {
    puStack_c8 = *param_2;
    (*(code *)(*ppuVar4)[2])(apuStack_c0,ppuVar4);
    *param_2 = (undefined8 *)&UNK_1053a6a3c;
    (*(code *)*param_2[1])(ppuVar4);
    param_2[1] = &PTR_DAT_110ae9180;
    ppuVar4 = param_1 + 1;
    puVar3 = *ppuVar4;
    if (*(char *)(puVar3 + 1) == '\x01') {
      puStack_108 = *param_1;
      (*(code *)puVar3[2])(apuStack_100,ppuVar4);
      *param_1 = (undefined8 *)&UNK_1053a6a3c;
      (*(code *)*param_1[1])(ppuVar4);
      puVar3 = puStack_108;
      param_1[1] = &PTR_DAT_110ae9180;
      (*(code *)apuStack_100[0][2])(apuStack_1c0,apuStack_100);
      puStack_188 = puStack_c8;
      (*(code *)apuStack_c0[0][2])(apuStack_180,apuStack_c0);
      pcStack_148 = FUN_10a3efea0;
      ppuStack_140 = &PTR_FUN_110bd2fd0;
      puVar1 = (undefined8 *)0x80;
      __Znwm();
      *puVar1 = puVar3;
      (*(code *)apuStack_1c0[0][2])(puVar1 + 1,apuStack_1c0);
      puVar1[8] = puStack_188;
      param_2 = apuStack_180;
      (*(code *)apuStack_180[0][2])(puVar1 + 9);
      *param_1 = (undefined8 *)FUN_10a3efea0;
      (*(code *)*param_1[1])(ppuVar4);
      param_1[1] = &PTR_FUN_110bd2fd0;
      param_1[2] = puVar1;
      uStack_138 = 0;
      FUN_10a3efefc(&ppuStack_140);
      (*(code *)*apuStack_180[0])(apuStack_180);
      (*(code *)*apuStack_1c0[0])(apuStack_1c0);
      (*(code *)*apuStack_100[0])(apuStack_100);
    }
    else {
      *param_1 = puStack_c8;
      (*(code *)*puVar3)(ppuVar4);
      param_2 = apuStack_c0;
      (*(code *)apuStack_c0[0][2])(ppuVar4);
    }
    param_1 = apuStack_c0;
    (*(code *)*apuStack_c0[0])();
  }
  iVar2 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar3 = param_1[2];
  (*(code *)puVar3[8])();
                    /* WARNING: Could not recover jumptable at 0x00010a3efecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(puVar3);
  return;
}



/* Entry: 10a3efc6c; end: 10a3efe9f;  */

void FUN_10a3efc6c(undefined8 **param_1,undefined8 **param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *apuStack_1a0 [7];
  undefined8 *puStack_168;
  undefined8 *apuStack_160 [7];
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_e8;
  undefined8 *apuStack_e0 [7];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2 + 1;
  if (*(char *)(*ppuVar4 + 1) == '\x01') {
    puStack_a8 = *param_2;
    (*(code *)(*ppuVar4)[2])(apuStack_a0,ppuVar4);
    *param_2 = (undefined8 *)&UNK_1053a6a3c;
    (*(code *)*param_2[1])(ppuVar4);
    param_2[1] = &PTR_DAT_110ae9180;
    ppuVar4 = param_1 + 1;
    puVar3 = *ppuVar4;
    if (*(char *)(puVar3 + 1) == '\x01') {
      puStack_e8 = *param_1;
      (*(code *)puVar3[2])(apuStack_e0,ppuVar4);
      *param_1 = (undefined8 *)&UNK_1053a6a3c;
      (*(code *)*param_1[1])(ppuVar4);
      puVar3 = puStack_e8;
      param_1[1] = &PTR_DAT_110ae9180;
      (*(code *)apuStack_e0[0][2])(apuStack_1a0,apuStack_e0);
      puStack_168 = puStack_a8;
      (*(code *)apuStack_a0[0][2])(apuStack_160,apuStack_a0);
      pcStack_128 = FUN_10a3efea0;
      ppuStack_120 = &PTR_FUN_110bd2fd0;
      puVar1 = (undefined8 *)0x80;
      __Znwm();
      *puVar1 = puVar3;
      (*(code *)apuStack_1a0[0][2])(puVar1 + 1,apuStack_1a0);
      puVar1[8] = puStack_168;
      param_2 = apuStack_160;
      (*(code *)apuStack_160[0][2])(puVar1 + 9);
      *param_1 = (undefined8 *)FUN_10a3efea0;
      (*(code *)*param_1[1])(ppuVar4);
      param_1[1] = &PTR_FUN_110bd2fd0;
      param_1[2] = puVar1;
      uStack_118 = 0;
      FUN_10a3efefc(&ppuStack_120);
      (*(code *)*apuStack_160[0])(apuStack_160);
      (*(code *)*apuStack_1a0[0])(apuStack_1a0);
      (*(code *)*apuStack_e0[0])(apuStack_e0);
    }
    else {
      *param_1 = puStack_a8;
      (*(code *)*puVar3)(ppuVar4);
      param_2 = apuStack_a0;
      (*(code *)apuStack_a0[0][2])(ppuVar4);
    }
    param_1 = apuStack_a0;
    (*(code *)*apuStack_a0[0])();
  }
  iVar2 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar3 = param_1[2];
  (*(code *)puVar3[8])();
                    /* WARNING: Could not recover jumptable at 0x00010a3efecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(puVar3);
  return;
}



/* Entry: 10a3efea0; end: 10a3efefb;  */

void FUN_10a3efea0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  (*(code *)puVar1[8])();
                    /* WARNING: Could not recover jumptable at 0x00010a3efecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(puVar1);
  return;
}



/* Entry: 10a3efefc; end: 10a3eff4b;  */

void FUN_10a3efefc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x48))();
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3eff4c; end: 10a3eff63;  */

void FUN_10a3eff4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a3eff64; end: 10a3f001b;  */

void FUN_10a3eff64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a3f001c; end: 10a3f013b;  */

void FUN_10a3f001c(long *param_1,undefined *param_2,undefined *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar14 = (long)param_3 - (long)param_2;
  uVar15 = lVar14 >> 3;
  if ((ulong)param_1[2] < uVar15) {
    if (uVar15 >> 0x3c == 0) {
      lVar11 = lVar14;
      __Znwm();
      if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
        __ZdlPv();
      }
      param_1[1] = 0;
      param_1[2] = uVar15;
      *param_1 = lVar11;
      lVar9 = lVar11;
      if ((param_2 != (undefined *)0x0) && (param_2 != param_3)) {
        _memcpy(lVar11,param_2,lVar14);
        lVar9 = lVar11 + lVar14;
      }
      param_1[1] = lVar9 - lVar11 >> 3;
      return;
    }
    plVar5 = (long *)&UNK_10f424dbf;
    func_0x00010772e1f8();
    pcStack_58 = FUN_10a3f013c;
    ppuStack_d0 = &puStack_60;
    lVar14 = *plVar5;
    if ((undefined *)((plVar5[2] - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
      uStack_90 = uVar15;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((undefined *)0x2e8ba2e8ba2e8ba < param_2) {
        puVar8 = param_2;
        FUN_10a3f0354();
        FUN_10a3f05ec(&plStack_b8);
        plVar7 = plVar5;
        __Unwind_Resume();
        pcStack_c8 = FUN_10a3f0238;
        puVar10 = (ulong *)plVar7[1];
        lVar14 = (long)puVar8 * 0x28;
        uVar15 = puVar10[1] + (long)puVar8 * 0x28;
        puStack_e0 = param_2;
        plStack_d8 = plVar5;
        if (uVar15 <= *puVar10) {
          puVar1 = puVar10 + 1;
          uVar13 = puVar10[1];
          do {
            uVar12 = *puVar1;
            if (uVar12 == uVar13) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar15;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_10a3f02dc;
            }
            else {
              ClearExclusiveLocal();
            }
            uVar15 = uVar12 + lVar14;
            uVar13 = uVar12;
          } while (uVar15 <= *puVar10);
        }
        lStack_e8 = lVar14;
        func_0x0001098c692c(&lStack_e8);
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        puVar8 = PTR___ZTISt9bad_alloc_110346a68;
        ___cxa_throw();
LAB_10a3f02dc:
        if ((undefined *)0x666666666666666 < puVar8) {
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f0340);
          (*pcVar4)();
        }
        __Znwm(lVar14);
        return;
      }
      lVar11 = plVar5[1];
      plVar7 = plVar5 + 3;
      plVar6 = plVar7;
      plStack_98 = plVar7;
      FUN_10a3f0368(plVar7,param_2);
      puVar8 = (undefined *)((long)plVar6 + (lVar11 - lVar14));
      lVar14 = *plVar5;
      lVar11 = plVar5[1];
      plStack_b8 = plVar6;
      plStack_b0 = (long *)puVar8;
      plStack_a8 = (long *)puVar8;
      plStack_a0 = plVar6 + (long)param_2 * 0xb;
      FUN_10a3f0488(plVar7,lVar14,lVar11,puVar8 + (lVar14 - lVar11));
      plStack_b8 = (long *)*plVar5;
      *plVar5 = (long)(puVar8 + (lVar14 - lVar11));
      plVar5[1] = (long)puVar8;
      plStack_a0 = (long *)plVar5[2];
      plVar5[2] = (long)(plVar6 + (long)param_2 * 0xb);
      plStack_b0 = plStack_b8;
      plStack_a8 = plStack_b8;
      FUN_10a3f05ec(&plStack_b8);
    }
    return;
  }
  lVar11 = *param_1;
  uVar13 = param_1[1];
  if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
    if (param_3 == param_2) goto LAB_10a3f010c;
  }
  else {
    if (uVar13 != 0) {
      _memmove(lVar11,param_2,uVar13 << 3);
      param_2 = param_2 + uVar13 * 8;
      lVar11 = lVar11 + uVar13 * 8;
    }
    lVar14 = (uVar15 - uVar13) * 8;
  }
  _memmove(lVar11,param_2,lVar14);
LAB_10a3f010c:
  param_1[1] = uVar15;
  return;
}



/* Entry: 10a3f013c; end: 10a3f0237;  */

void FUN_10a3f013c(long *param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  undefined *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = *param_1;
  if ((undefined *)((param_1[2] - lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    if ((undefined *)0x2e8ba2e8ba2e8ba < param_2) {
      puVar7 = param_2;
      FUN_10a3f0354();
      FUN_10a3f05ec(&plStack_68);
      plVar6 = param_1;
      __Unwind_Resume();
      pcStack_78 = FUN_10a3f0238;
      puVar9 = (ulong *)plVar6[1];
      lVar8 = (long)puVar7 * 0x28;
      uVar11 = puVar9[1] + (long)puVar7 * 0x28;
      puStack_90 = param_2;
      plStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      if (uVar11 <= *puVar9) {
        puVar1 = puVar9 + 1;
        uVar13 = puVar9[1];
        do {
          uVar12 = *puVar1;
          if (uVar12 == uVar13) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_10a3f02dc;
          }
          else {
            ClearExclusiveLocal();
          }
          uVar11 = uVar12 + lVar8;
          uVar13 = uVar12;
        } while (uVar11 <= *puVar9);
      }
      lStack_98 = lVar8;
      func_0x0001098c692c(&lStack_98);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      puVar7 = PTR___ZTISt9bad_alloc_110346a68;
      ___cxa_throw();
LAB_10a3f02dc:
      if (puVar7 < (undefined *)0x666666666666667) {
        __Znwm(lVar8);
        return;
      }
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f0340);
      (*pcVar4)();
    }
    lVar10 = param_1[1];
    plVar6 = param_1 + 3;
    plVar5 = plVar6;
    plStack_48 = plVar6;
    FUN_10a3f0368(plVar6,param_2);
    lVar8 = (long)plVar5 + (lVar10 - lVar8);
    lVar10 = lVar8 + (*param_1 - param_1[1]);
    plStack_68 = plVar5;
    plStack_60 = (long *)lVar8;
    plStack_58 = (long *)lVar8;
    plStack_50 = plVar5 + (long)param_2 * 0xb;
    FUN_10a3f0488(plVar6,*param_1,param_1[1],lVar10);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar8;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar5 + (long)param_2 * 0xb);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    FUN_10a3f05ec(&plStack_68);
  }
  return;
}



/* Entry: 10a3f0238; end: 10a3f0353;  */

void FUN_10a3f0238(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x28;
  uVar6 = puVar5[1] + (long)param_2 * 0x28;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3f02dc;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3f02dc:
  if (param_2 < (undefined *)0x666666666666667) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f0340);
  (*pcVar4)();
}



/* Entry: 10a3f0354; end: 10a3f0367;  */

void FUN_10a3f0354(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_38;
  
  puVar5 = &UNK_10f655b2b;
  FUN_109ffde64();
  puVar6 = *(ulong **)(puVar5 + 8);
  lVar10 = (long)param_2 * 0x58;
  uVar7 = puVar6[1] + lVar10;
  if (uVar7 <= *puVar6) {
    puVar1 = puVar6 + 1;
    uVar9 = puVar6[1];
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3f040c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = uVar8 + lVar10;
      uVar9 = uVar8;
    } while (uVar7 <= *puVar6);
  }
  lStack_38 = lVar10;
  func_0x0001098c692c(&lStack_38);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3f040c:
  if (param_2 < (undefined *)0x2e8ba2e8ba2e8bb) {
    __Znwm(lVar10);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f0474);
  (*pcVar4)();
}



/* Entry: 10a3f0368; end: 10a3f0487;  */

void FUN_10a3f0368(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x58;
  uVar6 = puVar5[1] + lVar9;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3f040c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3f040c:
  if (param_2 < (undefined *)0x2e8ba2e8ba2e8bb) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f0474);
  (*pcVar4)();
}



/* Entry: 10a3f0488; end: 10a3f050f;  */

void FUN_10a3f0488(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != param_3) {
    lVar2 = param_2 + 0x28;
    param_4 = param_4 + 0x28;
    do {
      uVar4 = *(undefined8 *)(lVar2 + -0x20);
      uVar3 = *(undefined8 *)(lVar2 + -0x28);
      *(undefined8 *)(param_4 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(param_4 + -0x20) = uVar4;
      *(undefined8 *)(param_4 + -0x28) = uVar3;
      *(undefined8 *)(param_4 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      FUN_10a3f0510(param_4,lVar2);
      lVar1 = lVar2 + 0x30;
      lVar2 = lVar2 + 0x58;
      param_4 = param_4 + 0x58;
    } while (lVar1 != param_3);
    do {
      FUN_10a133004(param_2);
      param_2 = param_2 + 0x58;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a3f0510; end: 10a3f0543;  */

undefined1 * FUN_10a3f0510(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_10a3f0544();
  return param_1;
}



/* Entry: 10a3f0544; end: 10a3f05a3;  */

void FUN_10a3f0544(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a133060();
  uVar1 = *(uint *)(param_2 + 0x28);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110bd17a0)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 10a3f05a4; end: 10a3f05eb;  */

void FUN_10a3f05a4(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)*param_1 = *param_2;
  return;
}



/* Entry: 10a3f05ec; end: 10a3f0657;  */

long * FUN_10a3f05ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar4) {
    param_1[2] = lVar5 + -0x58;
    FUN_10a133004();
    lVar5 = param_1[2];
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    plVar1 = (long *)(*(long *)(param_1[4] + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (lVar5 - lVar4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3f0658; end: 10a3f07bf;  */

long * FUN_10a3f0658(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar24 = param_1[1] - *param_1;
  uVar13 = (lVar24 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar13 < 0x2e8ba2e8ba2e8bb) {
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar16 = lVar11 * 0x5d1745d1745d1746;
    if (uVar16 < uVar13 || uVar16 - uVar13 == 0) {
      uVar16 = uVar13;
    }
    if (0x1745d1745d1745c < (ulong)(lVar11 * 0x2e8ba2e8ba2e8ba3)) {
      uVar16 = 0x2e8ba2e8ba2e8ba;
    }
    plVar9 = param_1 + 3;
    plStack_48 = plVar9;
    if (uVar16 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = plVar9;
      FUN_10a3f0368(plVar9,uVar16);
    }
    plVar15 = (long *)((long)plVar7 + lVar24);
    lVar11 = param_2[1];
    lVar24 = *param_2;
    plVar15[2] = param_2[2];
    plVar15[1] = lVar11;
    *plVar15 = lVar24;
    plVar15[4] = param_2[4];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    plStack_68 = plVar7;
    plStack_60 = plVar15;
    plStack_50 = plVar7 + uVar16 * 0xb;
    FUN_10a3f0510(plVar15 + 5,param_3);
    plVar8 = plVar15 + 0xb;
    lVar24 = (long)plVar15 + (*param_1 - param_1[1]);
    plStack_58 = plVar8;
    FUN_10a3f0488(plVar9,*param_1,param_1[1],lVar24);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar24;
    param_1[1] = (long)plVar8;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar7 + uVar16 * 0xb);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    FUN_10a3f05ec(&plStack_68);
    return plVar8;
  }
  FUN_10a3f0354();
  FUN_10a3f05ec(&plStack_68);
  __Unwind_Resume();
  plVar9 = param_1;
LAB_10a3f07ec:
  do {
    plVar7 = plVar9;
    uVar13 = (long)param_2 - (long)plVar7 >> 3;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return param_1;
      }
      if (uVar13 == 2) {
        lVar24 = param_2[-1];
        lVar11 = *plVar7;
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (!bVar2) {
          return param_1;
        }
        *plVar7 = lVar24;
        param_2[-1] = lVar11;
        return param_1;
      }
    }
    else {
      if (uVar13 == 3) {
        lVar24 = *plVar7;
        lVar14 = plVar7[1];
        lVar11 = *(long *)(lVar14 + 0x40);
        lVar21 = *(long *)(lVar24 + 0x40);
        lVar17 = *(long *)(lVar24 + 0x48);
        bVar2 = *(long *)(lVar14 + 0x48) < lVar17;
        if (lVar11 != lVar21) {
          bVar2 = lVar11 < lVar21;
        }
        lVar12 = param_2[-1];
        bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar14 + 0x48);
        if (*(long *)(lVar12 + 0x40) != lVar11) {
          bVar1 = *(long *)(lVar12 + 0x40) < lVar11;
        }
        if (bVar2) {
          if (bVar1) {
            *plVar7 = lVar12;
          }
          else {
            *plVar7 = lVar14;
            plVar7[1] = lVar24;
            lVar11 = param_2[-1];
            bVar2 = *(long *)(lVar11 + 0x48) < lVar17;
            if (*(long *)(lVar11 + 0x40) != lVar21) {
              bVar2 = *(long *)(lVar11 + 0x40) < lVar21;
            }
            if (!bVar2) {
              return param_1;
            }
            plVar7[1] = lVar11;
          }
          param_2[-1] = lVar24;
          return param_1;
        }
        if (!bVar1) {
          return param_1;
        }
        plVar7[1] = lVar12;
        param_2[-1] = lVar14;
        lVar24 = *plVar7;
        lVar11 = plVar7[1];
        bVar2 = *(long *)(lVar11 + 0x48) < *(long *)(lVar24 + 0x48);
        if (*(long *)(lVar11 + 0x40) != *(long *)(lVar24 + 0x40)) {
          bVar2 = *(long *)(lVar11 + 0x40) < *(long *)(lVar24 + 0x40);
        }
        if (!bVar2) {
          return param_1;
        }
        *plVar7 = lVar11;
        plVar7[1] = lVar24;
        return param_1;
      }
      if (uVar13 == 4) {
        plVar9 = plVar7 + 1;
        plVar8 = plVar7 + 2;
        lVar14 = *plVar9;
        lVar17 = *plVar7;
        lVar24 = *(long *)(lVar14 + 0x40);
        lVar11 = *(long *)(lVar17 + 0x40);
        lVar21 = *(long *)(lVar17 + 0x48);
        bVar2 = *(long *)(lVar14 + 0x48) < lVar21;
        if (lVar24 != lVar11) {
          bVar2 = lVar24 < lVar11;
        }
        lVar12 = *plVar8;
        bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar14 + 0x48);
        if (*(long *)(lVar12 + 0x40) != lVar24) {
          bVar1 = *(long *)(lVar12 + 0x40) < lVar24;
        }
        if (bVar2) {
          if (bVar1) {
            *plVar7 = lVar12;
          }
          else {
            *plVar7 = lVar14;
            *plVar9 = lVar17;
            lVar12 = *plVar8;
            bVar2 = *(long *)(lVar12 + 0x48) < lVar21;
            if (*(long *)(lVar12 + 0x40) != lVar11) {
              bVar2 = *(long *)(lVar12 + 0x40) < lVar11;
            }
            if (!bVar2) goto LAB_10a3f15c0;
            *plVar9 = lVar12;
          }
          *plVar8 = lVar17;
          lVar12 = lVar17;
        }
        else if (bVar1) {
          *plVar9 = lVar12;
          *plVar8 = lVar14;
          lVar24 = *plVar9;
          lVar11 = *plVar7;
          bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
          if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
            bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
          }
          lVar12 = lVar14;
          if (bVar2) {
            *plVar7 = lVar24;
            *plVar9 = lVar11;
            lVar12 = *plVar8;
          }
        }
LAB_10a3f15c0:
        lVar24 = param_2[-1];
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar2) {
          *plVar8 = lVar24;
          param_2[-1] = lVar12;
          lVar24 = *plVar8;
          lVar11 = *plVar9;
          bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
          if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
            bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
          }
          if (bVar2) {
            *plVar9 = lVar24;
            *plVar8 = lVar11;
            lVar24 = *plVar9;
            lVar11 = *plVar7;
            bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
            if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
              bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
            }
            if (bVar2) {
              *plVar7 = lVar24;
              *plVar9 = lVar11;
            }
          }
        }
        return plVar7;
      }
      if (uVar13 == 5) {
        plVar9 = plVar7;
        FUN_10a3f14e8(plVar7,plVar7 + 1,plVar7 + 2,plVar7 + 3);
        lVar24 = param_2[-1];
        lVar11 = plVar7[3];
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (!bVar2) {
          return plVar9;
        }
        plVar7[3] = lVar24;
        param_2[-1] = lVar11;
        lVar24 = plVar7[2];
        lVar21 = plVar7[3];
        lVar11 = *(long *)(lVar21 + 0x40);
        lVar14 = *(long *)(lVar21 + 0x48);
        bVar2 = lVar14 < *(long *)(lVar24 + 0x48);
        if (lVar11 != *(long *)(lVar24 + 0x40)) {
          bVar2 = lVar11 < *(long *)(lVar24 + 0x40);
        }
        if (!bVar2) {
          return plVar9;
        }
        plVar7[2] = lVar21;
        plVar7[3] = lVar24;
        lVar24 = plVar7[1];
        bVar2 = lVar14 < *(long *)(lVar24 + 0x48);
        if (lVar11 != *(long *)(lVar24 + 0x40)) {
          bVar2 = lVar11 < *(long *)(lVar24 + 0x40);
        }
        if (!bVar2) {
          return plVar9;
        }
        plVar7[1] = lVar21;
        plVar7[2] = lVar24;
        lVar24 = *plVar7;
        bVar2 = lVar14 < *(long *)(lVar24 + 0x48);
        if (lVar11 != *(long *)(lVar24 + 0x40)) {
          bVar2 = lVar11 < *(long *)(lVar24 + 0x40);
        }
        if (!bVar2) {
          return plVar9;
        }
        *plVar7 = lVar21;
        plVar7[1] = lVar24;
        return plVar9;
      }
    }
    if ((long)uVar13 < 0x18) {
      plVar9 = plVar7 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar7 == param_2 || plVar9 == param_2) {
          return param_1;
        }
        lVar24 = 0;
        lVar11 = 8;
        do {
          lVar17 = *(long *)((long)plVar7 + lVar24);
          lVar14 = *plVar9;
          lVar24 = *(long *)(lVar14 + 0x40);
          lVar21 = *(long *)(lVar14 + 0x48);
          bVar2 = lVar21 < *(long *)(lVar17 + 0x48);
          if (lVar24 != *(long *)(lVar17 + 0x40)) {
            bVar2 = lVar24 < *(long *)(lVar17 + 0x40);
          }
          if (bVar2) {
            lVar12 = 0;
            do {
              *(long *)((long)plVar9 + lVar12) = lVar17;
              if (lVar11 + lVar12 == 0) goto LAB_10a3f149c;
              lVar17 = ((long *)((long)plVar9 + lVar12))[-2];
              bVar2 = lVar21 < *(long *)(lVar17 + 0x48);
              if (lVar24 != *(long *)(lVar17 + 0x40)) {
                bVar2 = lVar24 < *(long *)(lVar17 + 0x40);
              }
              lVar12 = lVar12 + -8;
            } while (bVar2);
            *(long *)((long)plVar9 + lVar12) = lVar14;
          }
          plVar9 = plVar9 + 1;
          lVar24 = lVar11;
          lVar11 = lVar11 + 8;
          if (plVar9 == param_2) {
            return param_1;
          }
        } while( true );
      }
      if (plVar7 == param_2 || plVar9 == param_2) {
        return param_1;
      }
      lVar24 = 8;
      plVar8 = plVar7;
      do {
        plVar15 = plVar9;
        lVar17 = *plVar8;
        lVar14 = *plVar15;
        lVar11 = *(long *)(lVar14 + 0x40);
        lVar21 = *(long *)(lVar14 + 0x48);
        bVar2 = lVar21 < *(long *)(lVar17 + 0x48);
        if (lVar11 != *(long *)(lVar17 + 0x40)) {
          bVar2 = lVar11 < *(long *)(lVar17 + 0x40);
        }
        lVar12 = lVar24;
        if (bVar2) {
          do {
            *(long *)((long)plVar7 + lVar12) = lVar17;
            lVar19 = lVar12 + -8;
            plVar9 = plVar7;
            if (lVar19 == 0) goto LAB_10a3f1154;
            lVar17 = *(long *)((long)plVar7 + lVar12 + -0x10);
            bVar2 = lVar21 < *(long *)(lVar17 + 0x48);
            if (lVar11 != *(long *)(lVar17 + 0x40)) {
              bVar2 = lVar11 < *(long *)(lVar17 + 0x40);
            }
            lVar12 = lVar19;
          } while (bVar2);
          plVar9 = (long *)((long)plVar7 + lVar19);
LAB_10a3f1154:
          *plVar9 = lVar14;
        }
        lVar24 = lVar24 + 8;
        plVar9 = plVar15 + 1;
        plVar8 = plVar15;
        if (plVar15 + 1 == param_2) {
          return param_1;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar7 == param_2) {
        return param_1;
      }
      uVar10 = uVar13 - 2 >> 1;
      uVar16 = uVar10;
      do {
        if ((long)uVar16 <= (long)uVar10) {
          plVar15 = (long *)(uVar16 << 1 | 1);
          plVar8 = plVar7 + (long)plVar15;
          plVar9 = (long *)(uVar16 * 2 + 2);
          lVar11 = *plVar8;
          plVar18 = plVar8;
          lVar24 = lVar11;
          plVar23 = plVar15;
          if ((long)plVar9 < (long)uVar13) {
            lVar24 = plVar8[1];
            bVar2 = *(long *)(lVar11 + 0x48) < *(long *)(lVar24 + 0x48);
            if (*(long *)(lVar11 + 0x40) != *(long *)(lVar24 + 0x40)) {
              bVar2 = *(long *)(lVar11 + 0x40) < *(long *)(lVar24 + 0x40);
            }
            plVar18 = plVar8 + 1;
            plVar23 = plVar9;
            if (!bVar2) {
              plVar18 = plVar8;
              lVar24 = lVar11;
              plVar23 = plVar15;
            }
          }
          lVar14 = plVar7[uVar16];
          lVar11 = *(long *)(lVar14 + 0x40);
          lVar21 = *(long *)(lVar14 + 0x48);
          bVar2 = *(long *)(lVar24 + 0x48) < lVar21;
          param_1 = (long *)(ulong)bVar2;
          if (*(long *)(lVar24 + 0x40) != lVar11) {
            bVar2 = *(long *)(lVar24 + 0x40) < lVar11;
          }
          plVar9 = plVar7 + uVar16;
          if (!bVar2) {
            do {
              plVar8 = plVar18;
              *plVar9 = lVar24;
              if ((long)uVar10 < (long)plVar23) break;
              plVar3 = (long *)((long)plVar23 << 1 | 1);
              plVar15 = plVar7 + (long)plVar3;
              plVar9 = (long *)((long)plVar23 * 2 + 2);
              lVar17 = *plVar15;
              param_1 = plVar3;
              plVar18 = plVar15;
              lVar24 = lVar17;
              if ((long)plVar9 < (long)uVar13) {
                lVar24 = plVar15[1];
                bVar2 = *(long *)(lVar17 + 0x48) < *(long *)(lVar24 + 0x48);
                if (*(long *)(lVar17 + 0x40) != *(long *)(lVar24 + 0x40)) {
                  bVar2 = *(long *)(lVar17 + 0x40) < *(long *)(lVar24 + 0x40);
                }
                param_1 = plVar9;
                plVar18 = plVar15 + 1;
                if (!bVar2) {
                  param_1 = plVar3;
                  plVar18 = plVar15;
                  lVar24 = lVar17;
                }
              }
              bVar2 = *(long *)(lVar24 + 0x48) < lVar21;
              if (*(long *)(lVar24 + 0x40) != lVar11) {
                bVar2 = *(long *)(lVar24 + 0x40) < lVar11;
              }
              plVar9 = plVar8;
              plVar23 = param_1;
            } while (!bVar2);
            *plVar8 = lVar14;
          }
        }
        bVar2 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar2);
      do {
        lVar24 = *plVar7;
        plVar9 = plVar7;
        uVar16 = 0;
        do {
          plVar15 = plVar9 + uVar16 + 1;
          lVar21 = *plVar15;
          uVar4 = uVar16 << 1 | 1;
          uVar10 = uVar16 * 2 + 2;
          plVar8 = plVar15;
          lVar11 = lVar21;
          uVar22 = uVar4;
          if ((long)uVar10 < (long)uVar13) {
            lVar11 = plVar9[uVar16 + 2];
            bVar2 = *(long *)(lVar21 + 0x48) < *(long *)(lVar11 + 0x48);
            if (*(long *)(lVar21 + 0x40) != *(long *)(lVar11 + 0x40)) {
              bVar2 = *(long *)(lVar21 + 0x40) < *(long *)(lVar11 + 0x40);
            }
            param_1 = (long *)(ulong)(uint)bVar2;
            plVar8 = plVar9 + uVar16 + 2;
            uVar22 = uVar10;
            if (bVar2 == 0) {
              plVar8 = plVar15;
              lVar11 = lVar21;
              uVar22 = uVar4;
            }
          }
          *plVar9 = lVar11;
          plVar9 = plVar8;
          uVar16 = uVar22;
        } while ((long)uVar22 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar8 == param_2) {
          *plVar8 = lVar24;
        }
        else {
          *plVar8 = *param_2;
          *param_2 = lVar24;
          lVar24 = (long)plVar8 + (8 - (long)plVar7) >> 3;
          if (1 < lVar24) {
            uVar16 = lVar24 - 2U >> 1;
            lVar14 = plVar7[uVar16];
            lVar21 = *plVar8;
            lVar24 = *(long *)(lVar21 + 0x40);
            lVar11 = *(long *)(lVar21 + 0x48);
            bVar2 = *(long *)(lVar14 + 0x48) < lVar11;
            if (*(long *)(lVar14 + 0x40) != lVar24) {
              bVar2 = *(long *)(lVar14 + 0x40) < lVar24;
            }
            plVar9 = plVar7 + uVar16;
            if (bVar2) {
              do {
                plVar15 = plVar9;
                *plVar8 = lVar14;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                lVar14 = plVar7[uVar16];
                bVar2 = *(long *)(lVar14 + 0x48) < lVar11;
                if (*(long *)(lVar14 + 0x40) != lVar24) {
                  bVar2 = *(long *)(lVar14 + 0x40) < lVar24;
                }
                plVar8 = plVar15;
                plVar9 = plVar7 + uVar16;
              } while (bVar2);
              *plVar15 = lVar21;
            }
          }
        }
        bVar2 = (long)uVar13 < 3;
        uVar13 = uVar13 - 1;
        if (bVar2) {
          return param_1;
        }
      } while( true );
    }
    plVar9 = plVar7 + (uVar13 >> 1);
    lVar11 = param_2[-1];
    lVar24 = *(long *)(lVar11 + 0x40);
    if (uVar13 < 0x81) {
      lVar19 = *plVar7;
      lVar12 = *plVar9;
      lVar21 = *(long *)(lVar19 + 0x40);
      lVar14 = *(long *)(lVar12 + 0x40);
      lVar17 = *(long *)(lVar12 + 0x48);
      bVar2 = *(long *)(lVar19 + 0x48) < lVar17;
      if (lVar21 != lVar14) {
        bVar2 = lVar21 < lVar14;
      }
      param_1 = (long *)(ulong)(uint)bVar2;
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar19 + 0x48);
      if (lVar24 != lVar21) {
        bVar1 = lVar24 < lVar21;
      }
      if (bVar2 == 0) {
        if (bVar1) {
          *plVar7 = lVar11;
          param_2[-1] = lVar19;
          lVar24 = *plVar7;
          lVar11 = *plVar9;
          bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
          if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
            bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
          }
          if (bVar2) {
            *plVar9 = lVar24;
            *plVar7 = lVar11;
          }
        }
      }
      else {
        if (bVar1) {
          *plVar9 = lVar11;
        }
        else {
          *plVar9 = lVar19;
          *plVar7 = lVar12;
          lVar24 = param_2[-1];
          bVar2 = *(long *)(lVar24 + 0x48) < lVar17;
          if (*(long *)(lVar24 + 0x40) != lVar14) {
            bVar2 = *(long *)(lVar24 + 0x40) < lVar14;
          }
          if (!bVar2) goto LAB_10a3f0c18;
          *plVar7 = lVar24;
        }
        param_2[-1] = lVar12;
      }
    }
    else {
      lVar19 = *plVar9;
      lVar12 = *plVar7;
      lVar21 = *(long *)(lVar19 + 0x40);
      lVar14 = *(long *)(lVar12 + 0x40);
      lVar17 = *(long *)(lVar12 + 0x48);
      bVar2 = *(long *)(lVar19 + 0x48) < lVar17;
      if (lVar21 != lVar14) {
        bVar2 = lVar21 < lVar14;
      }
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar19 + 0x48);
      if (lVar24 != lVar21) {
        bVar1 = lVar24 < lVar21;
      }
      if (bVar2) {
        if (bVar1) {
          *plVar7 = lVar11;
        }
        else {
          *plVar7 = lVar19;
          *plVar9 = lVar12;
          lVar24 = param_2[-1];
          bVar2 = *(long *)(lVar24 + 0x48) < lVar17;
          if (*(long *)(lVar24 + 0x40) != lVar14) {
            bVar2 = *(long *)(lVar24 + 0x40) < lVar14;
          }
          if (!bVar2) goto LAB_10a3f0998;
          *plVar9 = lVar24;
        }
        param_2[-1] = lVar12;
      }
      else if (bVar1) {
        *plVar9 = lVar11;
        param_2[-1] = lVar19;
        lVar24 = *plVar9;
        lVar11 = *plVar7;
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar2) {
          *plVar7 = lVar24;
          *plVar9 = lVar11;
        }
      }
LAB_10a3f0998:
      plVar8 = plVar9 + -1;
      lVar17 = *plVar8;
      lVar14 = plVar7[1];
      lVar24 = *(long *)(lVar17 + 0x40);
      lVar11 = *(long *)(lVar14 + 0x40);
      lVar21 = *(long *)(lVar14 + 0x48);
      bVar2 = *(long *)(lVar17 + 0x48) < lVar21;
      if (lVar24 != lVar11) {
        bVar2 = lVar24 < lVar11;
      }
      lVar12 = param_2[-2];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar24) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar24;
      }
      if (bVar2) {
        if (bVar1) {
          plVar7[1] = lVar12;
        }
        else {
          plVar7[1] = lVar17;
          *plVar8 = lVar14;
          lVar24 = param_2[-2];
          bVar2 = *(long *)(lVar24 + 0x48) < lVar21;
          if (*(long *)(lVar24 + 0x40) != lVar11) {
            bVar2 = *(long *)(lVar24 + 0x40) < lVar11;
          }
          if (!bVar2) goto LAB_10a3f0a9c;
          *plVar8 = lVar24;
        }
        param_2[-2] = lVar14;
      }
      else if (bVar1) {
        *plVar8 = lVar12;
        param_2[-2] = lVar17;
        lVar24 = *plVar8;
        lVar11 = plVar7[1];
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar2) {
          plVar7[1] = lVar24;
          *plVar8 = lVar11;
        }
      }
LAB_10a3f0a9c:
      plVar15 = plVar9 + 1;
      lVar17 = *plVar15;
      lVar14 = plVar7[2];
      lVar24 = *(long *)(lVar17 + 0x40);
      lVar11 = *(long *)(lVar14 + 0x40);
      lVar21 = *(long *)(lVar14 + 0x48);
      bVar2 = *(long *)(lVar17 + 0x48) < lVar21;
      if (lVar24 != lVar11) {
        bVar2 = lVar24 < lVar11;
      }
      lVar12 = param_2[-3];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar24) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar24;
      }
      if (bVar2) {
        if (bVar1) {
          plVar7[2] = lVar12;
        }
        else {
          plVar7[2] = lVar17;
          *plVar15 = lVar14;
          lVar24 = param_2[-3];
          bVar2 = *(long *)(lVar24 + 0x48) < lVar21;
          if (*(long *)(lVar24 + 0x40) != lVar11) {
            bVar2 = *(long *)(lVar24 + 0x40) < lVar11;
          }
          if (!bVar2) goto LAB_10a3f0b68;
          *plVar15 = lVar24;
        }
        param_2[-3] = lVar14;
      }
      else if (bVar1) {
        *plVar15 = lVar12;
        param_2[-3] = lVar17;
        lVar24 = *plVar15;
        lVar11 = plVar7[2];
        bVar2 = *(long *)(lVar24 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar24 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar2 = *(long *)(lVar24 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar2) {
          plVar7[2] = lVar24;
          *plVar15 = lVar11;
        }
      }
LAB_10a3f0b68:
      lVar24 = plVar9[-1];
      lVar14 = *plVar9;
      lVar11 = *(long *)(lVar14 + 0x40);
      lVar21 = *(long *)(lVar24 + 0x40);
      lVar17 = *(long *)(lVar24 + 0x48);
      bVar2 = *(long *)(lVar14 + 0x48) < lVar17;
      if (lVar11 != lVar21) {
        bVar2 = lVar11 < lVar21;
      }
      lVar20 = plVar9[1];
      lVar12 = *(long *)(lVar20 + 0x40);
      lVar19 = *(long *)(lVar20 + 0x48);
      bVar1 = lVar19 < *(long *)(lVar14 + 0x48);
      if (lVar12 != lVar11) {
        bVar1 = lVar12 < lVar11;
      }
      uVar5 = (uint)bVar1;
      param_1 = (long *)(ulong)uVar5;
      if (bVar2) {
        lVar11 = lVar14;
        if (uVar5 == 0) {
          plVar9[-1] = lVar14;
          *plVar9 = lVar24;
          bVar2 = lVar19 < lVar17;
          if (lVar12 != lVar21) {
            bVar2 = lVar12 < lVar21;
          }
          plVar8 = plVar9;
          lVar14 = lVar24;
          lVar11 = lVar20;
          if (!bVar2) goto LAB_10a3f0c0c;
        }
LAB_10a3f0c04:
        *plVar8 = lVar20;
        *plVar15 = lVar24;
        lVar14 = lVar11;
      }
      else if (uVar5 != 0) {
        *plVar9 = lVar20;
        plVar9[1] = lVar14;
        bVar2 = lVar19 < lVar17;
        if (lVar12 != lVar21) {
          bVar2 = lVar12 < lVar21;
        }
        plVar15 = plVar9;
        lVar14 = lVar20;
        lVar11 = lVar24;
        if (bVar2) goto LAB_10a3f0c04;
      }
LAB_10a3f0c0c:
      lVar24 = *plVar7;
      *plVar7 = lVar14;
      *plVar9 = lVar24;
    }
LAB_10a3f0c18:
    param_3 = param_3 + -1;
    lVar24 = *plVar7;
    plVar9 = plVar7;
    if ((param_4 & 1) == 0) {
      lVar11 = *(long *)(plVar7[-1] + 0x40);
      lVar21 = *(long *)(lVar24 + 0x40);
      lVar14 = *(long *)(lVar24 + 0x48);
      bVar2 = *(long *)(plVar7[-1] + 0x48) < lVar14;
      if (lVar11 != lVar21) {
        bVar2 = lVar11 < lVar21;
      }
      if (!bVar2) {
        lVar11 = *(long *)(param_2[-1] + 0x40);
        bVar2 = lVar14 < *(long *)(param_2[-1] + 0x48);
        if (lVar21 != lVar11) {
          bVar2 = lVar21 < lVar11;
        }
        if (bVar2) {
          do {
            plVar9 = plVar9 + 1;
            if (plVar9 == param_2) goto LAB_10a3f149c;
            lVar11 = *(long *)(*plVar9 + 0x40);
            bVar2 = lVar14 < *(long *)(*plVar9 + 0x48);
            if (lVar21 != lVar11) {
              bVar2 = lVar21 < lVar11;
            }
          } while (!bVar2);
        }
        else {
          do {
            plVar9 = plVar9 + 1;
            if (param_2 <= plVar9) break;
            lVar11 = *(long *)(*plVar9 + 0x40);
            bVar2 = lVar14 < *(long *)(*plVar9 + 0x48);
            if (lVar21 != lVar11) {
              bVar2 = lVar21 < lVar11;
            }
          } while (!bVar2);
        }
        plVar8 = param_2;
        if (plVar9 < param_2) {
          do {
            if (plVar8 == plVar7) goto LAB_10a3f149c;
            plVar8 = plVar8 + -1;
            lVar11 = *(long *)(*plVar8 + 0x40);
            bVar2 = lVar14 < *(long *)(*plVar8 + 0x48);
            if (lVar21 != lVar11) {
              bVar2 = lVar21 < lVar11;
            }
          } while (bVar2);
        }
        if (plVar9 < plVar8) {
          lVar11 = *plVar9;
          lVar17 = *plVar8;
          do {
            *plVar9 = lVar17;
            *plVar8 = lVar11;
            do {
              plVar9 = plVar9 + 1;
              if (plVar9 == param_2) goto LAB_10a3f149c;
              lVar11 = *plVar9;
              bVar2 = lVar14 < *(long *)(lVar11 + 0x48);
              if (lVar21 != *(long *)(lVar11 + 0x40)) {
                bVar2 = lVar21 < *(long *)(lVar11 + 0x40);
              }
            } while (!bVar2);
            do {
              if (plVar8 == plVar7) goto LAB_10a3f149c;
              plVar8 = plVar8 + -1;
              lVar17 = *plVar8;
              bVar2 = lVar14 < *(long *)(lVar17 + 0x48);
              if (lVar21 != *(long *)(lVar17 + 0x40)) {
                bVar2 = lVar21 < *(long *)(lVar17 + 0x40);
              }
            } while (bVar2);
          } while (plVar9 < plVar8);
        }
        plVar8 = plVar9 + -1;
        if (plVar8 != plVar7) {
          *plVar7 = *plVar8;
        }
        param_4 = 0;
        *plVar8 = lVar24;
        goto LAB_10a3f07ec;
      }
    }
    lVar11 = 0;
    do {
      plVar9 = (long *)((long)plVar7 + lVar11 + 8);
      if (plVar9 == param_2) goto LAB_10a3f149c;
      lVar17 = *plVar9;
      lVar21 = *(long *)(lVar24 + 0x40);
      lVar14 = *(long *)(lVar24 + 0x48);
      bVar2 = *(long *)(lVar17 + 0x48) < lVar14;
      if (*(long *)(lVar17 + 0x40) != lVar21) {
        bVar2 = *(long *)(lVar17 + 0x40) < lVar21;
      }
      lVar11 = lVar11 + 8;
    } while (bVar2);
    plVar8 = (long *)((long)plVar7 + lVar11);
    plVar15 = param_2;
    if (lVar11 == 8) {
      do {
        if (plVar15 <= plVar8) break;
        plVar15 = plVar15 + -1;
        lVar11 = *(long *)(*plVar15 + 0x40);
        bVar2 = *(long *)(*plVar15 + 0x48) < lVar14;
        if (lVar11 != lVar21) {
          bVar2 = lVar11 < lVar21;
        }
      } while (!bVar2);
    }
    else {
      do {
        if (plVar15 == plVar7) {
LAB_10a3f149c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3f14a0);
          (*pcVar6)();
        }
        plVar15 = plVar15 + -1;
        lVar11 = *(long *)(*plVar15 + 0x40);
        bVar2 = *(long *)(*plVar15 + 0x48) < lVar14;
        if (lVar11 != lVar21) {
          bVar2 = lVar11 < lVar21;
        }
      } while (!bVar2);
    }
    plVar9 = plVar8;
    if (plVar8 < plVar15) {
      lVar11 = *plVar15;
      plVar18 = plVar15;
      do {
        *plVar9 = lVar11;
        *plVar18 = lVar17;
        do {
          plVar9 = plVar9 + 1;
          if (plVar9 == param_2) goto LAB_10a3f149c;
          lVar17 = *plVar9;
          bVar2 = *(long *)(lVar17 + 0x48) < lVar14;
          if (*(long *)(lVar17 + 0x40) != lVar21) {
            bVar2 = *(long *)(lVar17 + 0x40) < lVar21;
          }
        } while (bVar2);
        do {
          if (plVar18 == plVar7) goto LAB_10a3f149c;
          plVar18 = plVar18 + -1;
          lVar11 = *plVar18;
          bVar2 = *(long *)(lVar11 + 0x48) < lVar14;
          if (*(long *)(lVar11 + 0x40) != lVar21) {
            bVar2 = *(long *)(lVar11 + 0x40) < lVar21;
          }
        } while (!bVar2);
      } while (plVar9 < plVar18);
    }
    plVar18 = plVar9 + -1;
    if (plVar18 != plVar7) {
      *plVar7 = *plVar18;
    }
    *plVar18 = lVar24;
    if (plVar8 < plVar15) {
LAB_10a3f0dc0:
      FUN_10a3f07c0(plVar7,plVar18,param_3,(uint)param_4 & 1);
      param_4 = 0;
      param_1 = plVar7;
    }
    else {
      plVar8 = plVar7;
      FUN_10a3f165c(plVar7,plVar18);
      param_1 = plVar9;
      FUN_10a3f165c(plVar9,param_2);
      if ((int)param_1 == 0) {
        if (((ulong)plVar8 & 1) == 0) goto LAB_10a3f0dc0;
      }
      else {
        plVar9 = plVar7;
        param_2 = plVar18;
        if (((ulong)plVar8 & 1) != 0) {
          return param_1;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3f07c0; end: 10a3f14e7;  */

void FUN_10a3f07c0(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  
LAB_10a3f07ec:
  do {
    plVar21 = param_1;
    uVar10 = (long)param_2 - (long)plVar21 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        lVar8 = param_2[-1];
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar8;
        param_2[-1] = lVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        lVar8 = *plVar21;
        lVar13 = plVar21[1];
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar8 + 0x40);
        lVar16 = *(long *)(lVar8 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
        lVar11 = param_2[-1];
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar12) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar12;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            plVar21[1] = lVar8;
            lVar12 = param_2[-1];
            bVar3 = *(long *)(lVar12 + 0x48) < lVar16;
            if (*(long *)(lVar12 + 0x40) != lVar19) {
              bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
            }
            if (!bVar3) {
              return;
            }
            plVar21[1] = lVar12;
          }
          param_2[-1] = lVar8;
          return;
        }
        if (!bVar1) {
          return;
        }
        plVar21[1] = lVar11;
        param_2[-1] = lVar13;
        lVar8 = *plVar21;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
        if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
          bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar12;
        plVar21[1] = lVar8;
        return;
      }
      if (uVar10 == 4) {
        plVar5 = plVar21 + 1;
        plVar6 = plVar21 + 2;
        lVar13 = *plVar5;
        lVar16 = *plVar21;
        lVar8 = *(long *)(lVar13 + 0x40);
        lVar12 = *(long *)(lVar16 + 0x40);
        lVar19 = *(long *)(lVar16 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar19;
        if (lVar8 != lVar12) {
          bVar3 = lVar8 < lVar12;
        }
        lVar11 = *plVar6;
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar8) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            *plVar5 = lVar16;
            lVar11 = *plVar6;
            bVar3 = *(long *)(lVar11 + 0x48) < lVar19;
            if (*(long *)(lVar11 + 0x40) != lVar12) {
              bVar3 = *(long *)(lVar11 + 0x40) < lVar12;
            }
            if (!bVar3) goto LAB_10a3f15c0;
            *plVar5 = lVar11;
          }
          *plVar6 = lVar16;
          lVar11 = lVar16;
        }
        else if (bVar1) {
          *plVar5 = lVar11;
          *plVar6 = lVar13;
          lVar8 = *plVar5;
          lVar12 = *plVar21;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          lVar11 = lVar13;
          if (bVar3) {
            *plVar21 = lVar8;
            *plVar5 = lVar12;
            lVar11 = *plVar6;
          }
        }
LAB_10a3f15c0:
        lVar8 = param_2[-1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar3) {
          *plVar6 = lVar8;
          param_2[-1] = lVar11;
          lVar8 = *plVar6;
          lVar12 = *plVar5;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          if (bVar3) {
            *plVar5 = lVar8;
            *plVar6 = lVar12;
            lVar8 = *plVar5;
            lVar12 = *plVar21;
            bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            if (bVar3) {
              *plVar21 = lVar8;
              *plVar5 = lVar12;
            }
          }
        }
        return;
      }
      if (uVar10 == 5) {
        FUN_10a3f14e8(plVar21,plVar21 + 1,plVar21 + 2,plVar21 + 3);
        lVar8 = param_2[-1];
        lVar12 = plVar21[3];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[3] = lVar8;
        param_2[-1] = lVar12;
        lVar8 = plVar21[2];
        lVar19 = plVar21[3];
        lVar12 = *(long *)(lVar19 + 0x40);
        lVar13 = *(long *)(lVar19 + 0x48);
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[2] = lVar19;
        plVar21[3] = lVar8;
        lVar8 = plVar21[1];
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[1] = lVar19;
        plVar21[2] = lVar8;
        lVar8 = *plVar21;
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar19;
        plVar21[1] = lVar8;
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      plVar5 = plVar21 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar21 == param_2 || plVar5 == param_2) {
          return;
        }
        lVar8 = 0;
        lVar12 = 8;
        do {
          lVar16 = *(long *)((long)plVar21 + lVar8);
          lVar13 = *plVar5;
          lVar8 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
          if (lVar8 != *(long *)(lVar16 + 0x40)) {
            bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
          }
          if (bVar3) {
            lVar11 = 0;
            do {
              *(long *)((long)plVar5 + lVar11) = lVar16;
              if (lVar12 + lVar11 == 0) goto LAB_10a3f149c;
              lVar16 = ((long *)((long)plVar5 + lVar11))[-2];
              bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
              if (lVar8 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
              }
              lVar11 = lVar11 + -8;
            } while (bVar3);
            *(long *)((long)plVar5 + lVar11) = lVar13;
          }
          plVar5 = plVar5 + 1;
          lVar8 = lVar12;
          lVar12 = lVar12 + 8;
          if (plVar5 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar21 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar8 = 8;
      plVar6 = plVar21;
      do {
        plVar14 = plVar5;
        lVar16 = *plVar6;
        lVar13 = *plVar14;
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar13 + 0x48);
        bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
        if (lVar12 != *(long *)(lVar16 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
        }
        lVar11 = lVar8;
        if (bVar3) {
          do {
            *(long *)((long)plVar21 + lVar11) = lVar16;
            lVar17 = lVar11 + -8;
            plVar5 = plVar21;
            if (lVar17 == 0) goto LAB_10a3f1154;
            lVar16 = *(long *)((long)plVar21 + lVar11 + -0x10);
            bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
            if (lVar12 != *(long *)(lVar16 + 0x40)) {
              bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
            }
            lVar11 = lVar17;
          } while (bVar3);
          plVar5 = (long *)((long)plVar21 + lVar17);
LAB_10a3f1154:
          *plVar5 = lVar13;
        }
        lVar8 = lVar8 + 8;
        plVar5 = plVar14 + 1;
        plVar6 = plVar14;
        if (plVar14 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar21 == param_2) {
        return;
      }
      uVar9 = uVar10 - 2 >> 1;
      uVar15 = uVar9;
      do {
        if ((long)uVar15 <= (long)uVar9) {
          uVar20 = uVar15 << 1 | 1;
          plVar5 = plVar21 + uVar20;
          uVar2 = uVar15 * 2 + 2;
          lVar12 = *plVar5;
          plVar6 = plVar5;
          lVar8 = lVar12;
          uVar7 = uVar20;
          if ((long)uVar2 < (long)uVar10) {
            lVar8 = plVar5[1];
            bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
            if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
              bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
            }
            plVar6 = plVar5 + 1;
            uVar7 = uVar2;
            if (!bVar3) {
              plVar6 = plVar5;
              lVar8 = lVar12;
              uVar7 = uVar20;
            }
          }
          lVar13 = plVar21[uVar15];
          lVar12 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          plVar5 = plVar21 + uVar15;
          if (!bVar3) {
            do {
              plVar14 = plVar6;
              *plVar5 = lVar8;
              if ((long)uVar9 < (long)uVar7) break;
              uVar20 = uVar7 << 1 | 1;
              plVar5 = plVar21 + uVar20;
              uVar2 = uVar7 * 2 + 2;
              lVar16 = *plVar5;
              uVar7 = uVar20;
              plVar6 = plVar5;
              lVar8 = lVar16;
              if ((long)uVar2 < (long)uVar10) {
                lVar8 = plVar5[1];
                bVar3 = *(long *)(lVar16 + 0x48) < *(long *)(lVar8 + 0x48);
                if (*(long *)(lVar16 + 0x40) != *(long *)(lVar8 + 0x40)) {
                  bVar3 = *(long *)(lVar16 + 0x40) < *(long *)(lVar8 + 0x40);
                }
                uVar7 = uVar2;
                plVar6 = plVar5 + 1;
                if (!bVar3) {
                  uVar7 = uVar20;
                  plVar6 = plVar5;
                  lVar8 = lVar16;
                }
              }
              bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
              if (*(long *)(lVar8 + 0x40) != lVar12) {
                bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
              }
              plVar5 = plVar14;
            } while (!bVar3);
            *plVar14 = lVar13;
          }
        }
        bVar3 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar3);
      do {
        lVar8 = *plVar21;
        plVar5 = plVar21;
        uVar15 = 0;
        do {
          plVar14 = plVar5 + uVar15 + 1;
          lVar19 = *plVar14;
          uVar2 = uVar15 << 1 | 1;
          uVar9 = uVar15 * 2 + 2;
          plVar6 = plVar14;
          lVar12 = lVar19;
          uVar20 = uVar2;
          if ((long)uVar9 < (long)uVar10) {
            lVar12 = plVar5[uVar15 + 2];
            bVar3 = *(long *)(lVar19 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar19 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar19 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            plVar6 = plVar5 + uVar15 + 2;
            uVar20 = uVar9;
            if (!bVar3) {
              plVar6 = plVar14;
              lVar12 = lVar19;
              uVar20 = uVar2;
            }
          }
          *plVar5 = lVar12;
          plVar5 = plVar6;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar6 == param_2) {
          *plVar6 = lVar8;
        }
        else {
          *plVar6 = *param_2;
          *param_2 = lVar8;
          lVar8 = (long)plVar6 + (8 - (long)plVar21) >> 3;
          if (1 < lVar8) {
            uVar15 = lVar8 - 2U >> 1;
            lVar13 = plVar21[uVar15];
            lVar19 = *plVar6;
            lVar8 = *(long *)(lVar19 + 0x40);
            lVar12 = *(long *)(lVar19 + 0x48);
            bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
            if (*(long *)(lVar13 + 0x40) != lVar8) {
              bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
            }
            plVar5 = plVar21 + uVar15;
            if (bVar3) {
              do {
                plVar14 = plVar5;
                *plVar6 = lVar13;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar13 = plVar21[uVar15];
                bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
                if (*(long *)(lVar13 + 0x40) != lVar8) {
                  bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
                }
                plVar6 = plVar14;
                plVar5 = plVar21 + uVar15;
              } while (bVar3);
              *plVar14 = lVar19;
            }
          }
        }
        bVar3 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    plVar5 = plVar21 + (uVar10 >> 1);
    lVar12 = param_2[-1];
    lVar8 = *(long *)(lVar12 + 0x40);
    if (uVar10 < 0x81) {
      lVar17 = *plVar21;
      lVar11 = *plVar5;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar5 = lVar12;
        }
        else {
          *plVar5 = lVar17;
          *plVar21 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3f0c18;
          *plVar21 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar21 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar21;
        lVar12 = *plVar5;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar5 = lVar8;
          *plVar21 = lVar12;
        }
      }
    }
    else {
      lVar17 = *plVar5;
      lVar11 = *plVar21;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar21 = lVar12;
        }
        else {
          *plVar21 = lVar17;
          *plVar5 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3f0998;
          *plVar5 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar5 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar5;
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar21 = lVar8;
          *plVar5 = lVar12;
        }
      }
LAB_10a3f0998:
      plVar6 = plVar5 + -1;
      lVar16 = *plVar6;
      lVar13 = plVar21[1];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-2];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[1] = lVar11;
        }
        else {
          plVar21[1] = lVar16;
          *plVar6 = lVar13;
          lVar8 = param_2[-2];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3f0a9c;
          *plVar6 = lVar8;
        }
        param_2[-2] = lVar13;
      }
      else if (bVar1) {
        *plVar6 = lVar11;
        param_2[-2] = lVar16;
        lVar8 = *plVar6;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[1] = lVar8;
          *plVar6 = lVar12;
        }
      }
LAB_10a3f0a9c:
      plVar14 = plVar5 + 1;
      lVar16 = *plVar14;
      lVar13 = plVar21[2];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-3];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[2] = lVar11;
        }
        else {
          plVar21[2] = lVar16;
          *plVar14 = lVar13;
          lVar8 = param_2[-3];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3f0b68;
          *plVar14 = lVar8;
        }
        param_2[-3] = lVar13;
      }
      else if (bVar1) {
        *plVar14 = lVar11;
        param_2[-3] = lVar16;
        lVar8 = *plVar14;
        lVar12 = plVar21[2];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[2] = lVar8;
          *plVar14 = lVar12;
        }
      }
LAB_10a3f0b68:
      lVar8 = plVar5[-1];
      lVar13 = *plVar5;
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar16 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      lVar18 = plVar5[1];
      lVar11 = *(long *)(lVar18 + 0x40);
      lVar17 = *(long *)(lVar18 + 0x48);
      bVar1 = lVar17 < *(long *)(lVar13 + 0x48);
      if (lVar11 != lVar12) {
        bVar1 = lVar11 < lVar12;
      }
      if (bVar3) {
        lVar12 = lVar13;
        if (!bVar1) {
          plVar5[-1] = lVar13;
          *plVar5 = lVar8;
          bVar3 = lVar17 < lVar16;
          if (lVar11 != lVar19) {
            bVar3 = lVar11 < lVar19;
          }
          plVar6 = plVar5;
          lVar13 = lVar8;
          lVar12 = lVar18;
          if (!bVar3) goto LAB_10a3f0c0c;
        }
LAB_10a3f0c04:
        *plVar6 = lVar18;
        *plVar14 = lVar8;
        lVar13 = lVar12;
      }
      else if (bVar1) {
        *plVar5 = lVar18;
        plVar5[1] = lVar13;
        bVar3 = lVar17 < lVar16;
        if (lVar11 != lVar19) {
          bVar3 = lVar11 < lVar19;
        }
        plVar14 = plVar5;
        lVar13 = lVar18;
        lVar12 = lVar8;
        if (bVar3) goto LAB_10a3f0c04;
      }
LAB_10a3f0c0c:
      lVar8 = *plVar21;
      *plVar21 = lVar13;
      *plVar5 = lVar8;
    }
LAB_10a3f0c18:
    param_3 = param_3 + -1;
    lVar8 = *plVar21;
    param_1 = plVar21;
    if ((param_4 & 1) == 0) {
      lVar12 = *(long *)(plVar21[-1] + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(plVar21[-1] + 0x48) < lVar13;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      if (!bVar3) {
        lVar12 = *(long *)(param_2[-1] + 0x40);
        bVar3 = lVar13 < *(long *)(param_2[-1] + 0x48);
        if (lVar19 != lVar12) {
          bVar3 = lVar19 < lVar12;
        }
        if (bVar3) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3f149c;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        plVar5 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar5 == plVar21) goto LAB_10a3f149c;
            plVar5 = plVar5 + -1;
            lVar12 = *(long *)(*plVar5 + 0x40);
            bVar3 = lVar13 < *(long *)(*plVar5 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (bVar3);
        }
        if (param_1 < plVar5) {
          lVar12 = *param_1;
          lVar16 = *plVar5;
          do {
            *param_1 = lVar16;
            *plVar5 = lVar12;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a3f149c;
              lVar12 = *param_1;
              bVar3 = lVar13 < *(long *)(lVar12 + 0x48);
              if (lVar19 != *(long *)(lVar12 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar12 + 0x40);
              }
            } while (!bVar3);
            do {
              if (plVar5 == plVar21) goto LAB_10a3f149c;
              plVar5 = plVar5 + -1;
              lVar16 = *plVar5;
              bVar3 = lVar13 < *(long *)(lVar16 + 0x48);
              if (lVar19 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar16 + 0x40);
              }
            } while (bVar3);
          } while (param_1 < plVar5);
        }
        plVar5 = param_1 + -1;
        if (plVar5 != plVar21) {
          *plVar21 = *plVar5;
        }
        param_4 = 0;
        *plVar5 = lVar8;
        goto LAB_10a3f07ec;
      }
    }
    lVar12 = 0;
    do {
      plVar5 = (long *)((long)plVar21 + lVar12 + 8);
      if (plVar5 == param_2) goto LAB_10a3f149c;
      lVar16 = *plVar5;
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
      if (*(long *)(lVar16 + 0x40) != lVar19) {
        bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
      }
      lVar12 = lVar12 + 8;
    } while (bVar3);
    plVar5 = (long *)((long)plVar21 + lVar12);
    plVar6 = param_2;
    if (lVar12 == 8) {
      do {
        if (plVar6 <= plVar5) break;
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    else {
      do {
        if (plVar6 == plVar21) {
LAB_10a3f149c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3f14a0);
          (*pcVar4)();
        }
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    param_1 = plVar5;
    if (plVar5 < plVar6) {
      lVar12 = *plVar6;
      plVar14 = plVar6;
      do {
        *param_1 = lVar12;
        *plVar14 = lVar16;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3f149c;
          lVar16 = *param_1;
          bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
          if (*(long *)(lVar16 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
          }
        } while (bVar3);
        do {
          if (plVar14 == plVar21) goto LAB_10a3f149c;
          plVar14 = plVar14 + -1;
          lVar12 = *plVar14;
          bVar3 = *(long *)(lVar12 + 0x48) < lVar13;
          if (*(long *)(lVar12 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
          }
        } while (!bVar3);
      } while (param_1 < plVar14);
    }
    plVar14 = param_1 + -1;
    if (plVar14 != plVar21) {
      *plVar21 = *plVar14;
    }
    *plVar14 = lVar8;
    if (plVar5 < plVar6) {
LAB_10a3f0dc0:
      FUN_10a3f07c0(plVar21,plVar14,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar5 = plVar21;
      FUN_10a3f165c(plVar21,plVar14);
      plVar6 = param_1;
      FUN_10a3f165c(param_1,param_2);
      if ((int)plVar6 == 0) {
        if (((ulong)plVar5 & 1) == 0) goto LAB_10a3f0dc0;
      }
      else {
        param_1 = plVar21;
        param_2 = plVar14;
        if (((ulong)plVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3f14e8; end: 10a3f165b;  */

void FUN_10a3f14e8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *param_2;
  lVar5 = *param_1;
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar7 = *(long *)(lVar5 + 0x40);
  lVar3 = *(long *)(lVar5 + 0x48);
  bVar1 = *(long *)(lVar4 + 0x48) < lVar3;
  if (lVar6 != lVar7) {
    bVar1 = lVar6 < lVar7;
  }
  lVar8 = *param_3;
  bVar2 = *(long *)(lVar8 + 0x48) < *(long *)(lVar4 + 0x48);
  if (*(long *)(lVar8 + 0x40) != lVar6) {
    bVar2 = *(long *)(lVar8 + 0x40) < lVar6;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar5;
      lVar8 = *param_3;
      bVar1 = *(long *)(lVar8 + 0x48) < lVar3;
      if (*(long *)(lVar8 + 0x40) != lVar7) {
        bVar1 = *(long *)(lVar8 + 0x40) < lVar7;
      }
      if (!bVar1) goto LAB_10a3f15c0;
      *param_2 = lVar8;
    }
    *param_3 = lVar5;
    lVar8 = lVar5;
  }
  else if (bVar2) {
    *param_2 = lVar8;
    *param_3 = lVar4;
    lVar6 = *param_2;
    lVar7 = *param_1;
    bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
      bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
    }
    lVar8 = lVar4;
    if (bVar1) {
      *param_1 = lVar6;
      *param_2 = lVar7;
      lVar8 = *param_3;
    }
  }
LAB_10a3f15c0:
  lVar6 = *param_4;
  bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar8 + 0x48);
  if (*(long *)(lVar6 + 0x40) != *(long *)(lVar8 + 0x40)) {
    bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar8 + 0x40);
  }
  if (bVar1) {
    *param_3 = lVar6;
    *param_4 = lVar8;
    lVar6 = *param_3;
    lVar7 = *param_2;
    bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
      bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
    }
    if (bVar1) {
      *param_2 = lVar6;
      *param_3 = lVar7;
      lVar6 = *param_2;
      lVar7 = *param_1;
      bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
      if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
        bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
      }
      if (bVar1) {
        *param_1 = lVar6;
        *param_2 = lVar7;
      }
    }
  }
  return;
}



/* Entry: 10a3f165c; end: 10a3f1a7f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10a3f165c(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      lVar8 = param_2[-1];
      lVar10 = *param_1;
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar10 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar10 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar10 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar8;
      param_2[-1] = lVar10;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      lVar8 = *param_1;
      lVar11 = param_1[1];
      lVar10 = *(long *)(lVar11 + 0x40);
      lVar4 = *(long *)(lVar8 + 0x40);
      lVar14 = *(long *)(lVar8 + 0x48);
      bVar1 = *(long *)(lVar11 + 0x48) < lVar14;
      if (lVar10 != lVar4) {
        bVar1 = lVar10 < lVar4;
      }
      lVar15 = param_2[-1];
      bVar2 = *(long *)(lVar15 + 0x48) < *(long *)(lVar11 + 0x48);
      if (*(long *)(lVar15 + 0x40) != lVar10) {
        bVar2 = *(long *)(lVar15 + 0x40) < lVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *param_1 = lVar15;
        }
        else {
          *param_1 = lVar11;
          param_1[1] = lVar8;
          lVar10 = param_2[-1];
          bVar1 = *(long *)(lVar10 + 0x48) < lVar14;
          if (*(long *)(lVar10 + 0x40) != lVar4) {
            bVar1 = *(long *)(lVar10 + 0x40) < lVar4;
          }
          if (!bVar1) {
            return true;
          }
          param_1[1] = lVar10;
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (!bVar2) {
        return true;
      }
      param_1[1] = lVar15;
      param_2[-1] = lVar11;
      lVar8 = *param_1;
      lVar10 = param_1[1];
      bVar1 = *(long *)(lVar10 + 0x48) < *(long *)(lVar8 + 0x48);
      if (*(long *)(lVar10 + 0x40) != *(long *)(lVar8 + 0x40)) {
        bVar1 = *(long *)(lVar10 + 0x40) < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar7 == 4) {
      FUN_10a3f14e8(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar7 == 5) {
      FUN_10a3f14e8(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      lVar8 = param_2[-1];
      lVar10 = param_1[3];
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar10 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar10 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar10 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[3] = lVar8;
      param_2[-1] = lVar10;
      lVar8 = param_1[2];
      lVar4 = param_1[3];
      lVar10 = *(long *)(lVar4 + 0x40);
      lVar11 = *(long *)(lVar4 + 0x48);
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[2] = lVar4;
      param_1[3] = lVar8;
      lVar8 = param_1[1];
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[1] = lVar4;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar4;
      param_1[1] = lVar8;
      return true;
    }
  }
  plVar9 = param_1 + 2;
  lVar11 = *plVar9;
  plVar12 = param_1 + 1;
  lVar15 = *plVar12;
  lVar14 = *param_1;
  lVar8 = *(long *)(lVar15 + 0x40);
  lVar10 = *(long *)(lVar14 + 0x40);
  lVar4 = *(long *)(lVar14 + 0x48);
  bVar1 = *(long *)(lVar15 + 0x48) < lVar4;
  if (lVar8 != lVar10) {
    bVar1 = lVar8 < lVar10;
  }
  lVar3 = *(long *)(lVar11 + 0x40);
  lVar5 = *(long *)(lVar11 + 0x48);
  bVar2 = lVar5 < *(long *)(lVar15 + 0x48);
  if (lVar3 != lVar8) {
    bVar2 = lVar3 < lVar8;
  }
  plVar16 = param_1;
  if (bVar1) {
    plVar6 = plVar9;
    if (!bVar2) {
      *param_1 = lVar15;
      param_1[1] = lVar14;
      plVar16 = plVar12;
      bVar1 = lVar5 < lVar4;
      if (lVar3 != lVar10) {
        bVar1 = lVar3 < lVar10;
      }
      goto joined_r0x00010a3f18f0;
    }
  }
  else {
    if (!bVar2) goto LAB_10a3f18fc;
    *plVar12 = lVar11;
    *plVar9 = lVar15;
    plVar6 = plVar12;
    bVar1 = lVar5 < lVar4;
    if (lVar3 != lVar10) {
      bVar1 = lVar3 < lVar10;
    }
joined_r0x00010a3f18f0:
    if (!bVar1) goto LAB_10a3f18fc;
  }
  *plVar16 = lVar11;
  *plVar6 = lVar14;
LAB_10a3f18fc:
  if (param_1 + 3 != param_2) {
    iVar13 = 0;
    lVar8 = 0x18;
    plVar12 = param_1 + 3;
    do {
      lVar11 = *plVar12;
      lVar14 = *plVar9;
      lVar10 = *(long *)(lVar11 + 0x40);
      lVar4 = *(long *)(lVar11 + 0x48);
      bVar1 = lVar4 < *(long *)(lVar14 + 0x48);
      if (lVar10 != *(long *)(lVar14 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar14 + 0x40);
      }
      lVar15 = lVar8;
      if (bVar1) {
        do {
          *(long *)((long)param_1 + lVar15) = lVar14;
          lVar3 = lVar15 + -8;
          plVar9 = param_1;
          if (lVar3 == 0) goto LAB_10a3f1980;
          lVar14 = *(long *)((long)param_1 + lVar15 + -0x10);
          bVar1 = lVar4 < *(long *)(lVar14 + 0x48);
          if (lVar10 != *(long *)(lVar14 + 0x40)) {
            bVar1 = lVar10 < *(long *)(lVar14 + 0x40);
          }
          lVar15 = lVar3;
        } while (bVar1);
        plVar9 = (long *)((long)param_1 + lVar3);
LAB_10a3f1980:
        *plVar9 = lVar11;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          return plVar12 + 1 == param_2;
        }
      }
      plVar16 = plVar12 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar12;
      plVar12 = plVar16;
    } while (plVar16 != param_2);
  }
  return true;
}



/* Entry: 10a3f1a80; end: 10a3f1b47;  */

long * FUN_10a3f1a80(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10a3f1af0;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_10a3f1af0:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3f1b48; end: 10a3f1d07;  */

void FUN_10a3f1b48(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4b45d3,0x31);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3138;
  ppuVar2 = (undefined **)&UNK_10f653596;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bd3138;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3f1ce8;
    FUN_10a054dac(param_1,"call",FUN_10a3f1d08,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a3f1ce8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a3f1cec);
  (*pcVar9)();
}



/* Entry: 10a3f1d08; end: 10a3f1e0b;  */

void FUN_10a3f1d08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
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
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a053854(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      (*(code *)param_2[3])(param_2 + 3);
      *param_1 = 0;
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
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3f1df8);
  (*pcVar1)();
}



/* Entry: 10a3f1e0c; end: 10a3f1ef3;  */

long FUN_10a3f1e0c(long param_1)

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



/* Entry: 10a3f1ef4; end: 10a3f200b;  */

void FUN_10a3f1ef4(long *param_1,long *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  *param_1 = 0;
  puVar7 = (ulong *)*param_2;
  uVar2 = param_2[1];
  puVar1 = puVar7 + uVar2;
  if (uVar2 != 0) {
    uVar5 = uVar2;
    do {
      uVar6 = uVar5 >> 1;
      uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      puVar4 = puVar7 + uVar6 + 1;
      if (*param_3 <= puVar7[uVar6]) {
        uVar5 = uVar6;
        puVar4 = puVar7;
      }
      puVar7 = puVar4;
    } while (uVar5 != 0);
  }
  if (puVar7 == puVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
    if (param_2[2] != uVar2) {
      *puVar1 = *param_3;
      param_2[1] = uVar2 + 1;
      puVar7 = puVar1;
      goto LAB_10a3f1fdc;
    }
  }
  else {
    uVar5 = *param_3;
    uVar6 = *puVar7;
    *(bool *)(param_1 + 1) = uVar6 > uVar5;
    if (uVar6 <= uVar5) goto LAB_10a3f1fdc;
    if (param_2[2] != uVar2) {
      *puVar1 = puVar1[-1];
      param_2[1] = uVar2 + 1;
      lVar3 = (long)(puVar1 + -1) - (long)puVar7;
      if (lVar3 != 0) {
        _memmove((long)puVar1 - lVar3,puVar7);
      }
      *puVar7 = *param_3;
      goto LAB_10a3f1fdc;
    }
  }
  FUN_10a3f200c(&puStack_38,param_2,puVar7,param_3);
  puVar7 = puStack_38;
LAB_10a3f1fdc:
  *param_1 = (long)puVar7;
  return;
}



/* Entry: 10a3f200c; end: 10a3f2153;  */

undefined8 * FUN_10a3f200c(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar9 <= 0xfffffffffffffff - uVar9) {
    uVar10 = uVar9 << 3;
    if (4 < uVar9 >> 0x3d) {
      uVar10 = 0xffffffffffffffff;
    }
    if (uVar9 >> 0x3d == 0) {
      uVar10 = (uVar9 << 3) / 5;
    }
    if (0xffffffffffffffe < uVar10) {
      uVar10 = 0xfffffffffffffff;
    }
    uVar9 = uVar1;
    if (uVar1 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar1 >> 0x3c == 0) {
      lVar12 = *param_2;
      puVar5 = (undefined8 *)(uVar9 << 3);
      __Znwm();
      plVar6 = (long *)*param_2;
      lVar13 = param_2[1];
      puVar7 = puVar5;
      puVar8 = puVar5;
      if ((plVar6 != (long *)0x0) && (plVar6 != (long *)param_3)) {
        _memmove(puVar5,plVar6,param_3 - (long)plVar6);
        puVar8 = (undefined8 *)((long)puVar5 + (param_3 - (long)plVar6));
      }
      *puVar8 = *param_4;
      if ((param_3 != 0) && (lVar4 = (long)plVar6 + (lVar13 * 8 - param_3), lVar4 != 0)) {
        puVar7 = puVar8 + 1;
        _memmove(puVar7,param_3,lVar4);
      }
      if ((plVar6 != (long *)0x0) && (param_2 + 3 != plVar6)) {
        __ZdlPv(plVar6);
        lVar13 = param_2[1];
        puVar7 = plVar6;
      }
      *param_2 = (long)puVar5;
      param_2[1] = lVar13 + 1;
      param_2[2] = uVar9;
      *param_1 = (long)puVar5 + (param_3 - lVar12);
      return puVar7;
    }
  }
  puVar7 = (undefined8 *)&UNK_10f424dbf;
  func_0x00010772e1f8();
  piVar11 = (int *)*puVar7;
  if ((piVar11 != (int *)0x0) && (iVar3 = *piVar11, *piVar11 = iVar3 + -1, iVar3 + -1 == 0)) {
    lVar13 = *(long *)(piVar11 + 2);
    if (lVar13 != 0) {
      piVar11[2] = 0;
      piVar11[3] = 0;
      uVar9 = *(ulong *)(lVar13 + 0x670);
      puVar8 = *(undefined8 **)(lVar13 + 0x668);
      uVar1 = uVar9;
      while (puVar5 = puVar8, uVar1 != 0) {
        uVar10 = uVar1 >> 1;
        puVar8 = puVar5 + uVar10 + 1;
        uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        if (piVar11 <= (int *)puVar5[uVar10]) {
          puVar8 = puVar5;
          uVar1 = uVar10;
        }
      }
      puVar8 = *(undefined8 **)(lVar13 + 0x668) + uVar9;
      if ((puVar5 != puVar8) && ((int *)*puVar5 <= piVar11)) {
        puVar2 = puVar5 + 1;
        if (puVar2 != puVar8) {
          _memmove(puVar5,puVar2,(long)puVar8 - (long)puVar2);
          uVar9 = *(ulong *)(lVar13 + 0x670);
        }
        *(ulong *)(lVar13 + 0x670) = uVar9 - 1;
      }
    }
    if ((*(long *)(piVar11 + 8) != 0) && (piVar11 + 10 != *(int **)(piVar11 + 4))) {
      __ZdlPv();
    }
    __ZdlPv(piVar11);
  }
  return puVar7;
}



/* Entry: 10a3f2154; end: 10a3f223f;  */

undefined8 * FUN_10a3f2154(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  piVar8 = (int *)*param_1;
  if ((piVar8 != (int *)0x0) && (iVar3 = *piVar8, *piVar8 = iVar3 + -1, iVar3 + -1 == 0)) {
    lVar9 = *(long *)(piVar8 + 2);
    if (lVar9 != 0) {
      piVar8[2] = 0;
      piVar8[3] = 0;
      uVar6 = *(ulong *)(lVar9 + 0x670);
      puVar2 = *(undefined8 **)(lVar9 + 0x668);
      uVar5 = uVar6;
      while (puVar4 = puVar2, uVar5 != 0) {
        uVar7 = uVar5 >> 1;
        puVar2 = puVar4 + uVar7 + 1;
        uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
        if (piVar8 <= (int *)puVar4[uVar7]) {
          puVar2 = puVar4;
          uVar5 = uVar7;
        }
      }
      puVar2 = *(undefined8 **)(lVar9 + 0x668) + uVar6;
      if ((puVar4 != puVar2) && ((int *)*puVar4 <= piVar8)) {
        puVar1 = puVar4 + 1;
        if (puVar1 != puVar2) {
          _memmove(puVar4,puVar1,(long)puVar2 - (long)puVar1);
          uVar6 = *(ulong *)(lVar9 + 0x670);
        }
        *(ulong *)(lVar9 + 0x670) = uVar6 - 1;
      }
    }
    if ((*(long *)(piVar8 + 8) != 0) && (piVar8 + 10 != *(int **)(piVar8 + 4))) {
      __ZdlPv();
    }
    __ZdlPv(piVar8);
  }
  return param_1;
}



/* Entry: 10a3f2240; end: 10a3f2287;  */

long * FUN_10a3f2240(long *param_1)

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



/* Entry: 10a3f2288; end: 10a3f23cf;  */

undefined8 * FUN_10a3f2288(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  uVar4 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar4 <= 0xfffffffffffffff - uVar4) {
    uVar3 = uVar4 << 3;
    if (4 < uVar4 >> 0x3d) {
      uVar3 = 0xffffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      uVar3 = (uVar4 << 3) / 5;
    }
    if (0xffffffffffffffe < uVar3) {
      uVar3 = 0xfffffffffffffff;
    }
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar1 >> 0x3c == 0) {
      lVar12 = *param_2;
      puVar8 = (undefined8 *)(uVar4 << 3);
      __Znwm();
      plVar11 = (long *)*param_2;
      lVar13 = param_2[1];
      puVar9 = puVar8;
      puVar10 = puVar8;
      if ((plVar11 != (long *)0x0) && (plVar11 != (long *)param_3)) {
        _memmove(puVar8,plVar11,param_3 - (long)plVar11);
        puVar10 = (undefined8 *)((long)puVar8 + (param_3 - (long)plVar11));
      }
      *puVar10 = *param_4;
      if ((param_3 != 0) && (lVar7 = (long)plVar11 + (lVar13 * 8 - param_3), lVar7 != 0)) {
        puVar9 = puVar10 + 1;
        _memmove(puVar9,param_3,lVar7);
      }
      if ((plVar11 != (long *)0x0) && (param_2 + 3 != plVar11)) {
        __ZdlPv(plVar11);
        lVar13 = param_2[1];
        puVar9 = plVar11;
      }
      *param_2 = (long)puVar8;
      param_2[1] = lVar13 + 1;
      param_2[2] = uVar4;
      *param_1 = (long)puVar8 + (param_3 - lVar12);
      return puVar9;
    }
  }
  puVar9 = (undefined8 *)&UNK_10f424dbf;
  func_0x00010772e1f8();
  plVar11 = (long *)puVar9[1];
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 1;
    do {
      lVar13 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return puVar9;
}



/* Entry: 10a3f23d0; end: 10a3f24a7;  */

long FUN_10a3f23d0(long param_1)

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



/* Entry: 10a3f24a8; end: 10a3f2543;  */

void FUN_10a3f24a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar5 = *param_2;
      plVar1 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = uVar5;
      param_1[1] = plVar4;
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3f2544; end: 10a3f278b;  */

long * FUN_10a3f2544(long *param_1,long param_2,ulong param_3)

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
      uVar4 = uVar3 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar2 <= param_3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_3 / uVar2;
        }
        uVar4 = param_3 - uVar4 * uVar2;
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
        if (uVar6 == param_3) {
          if (plVar5[2] == param_2 && plVar5[3] == param_3) {
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



/* Entry: 10a3f278c; end: 10a3f27bf;  */

void FUN_10a3f278c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x20);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a3f27c0; end: 10a3f2ba7;  */

undefined1  [16] FUN_10a3f27c0(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar15 = param_2[1];
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar10 = 0;
        if (uVar16 != 0) {
          uVar10 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar10 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar8, plVar14 != (long *)0x0)) {
      do {
        uVar10 = plVar14[1];
        if (uVar10 == uVar15) {
          if (plVar14[2] == *param_2 && plVar14[3] == uVar15) {
            uVar5 = 0;
            goto LAB_10a3f2b2c;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar16 <= uVar10) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar7 * uVar16;
          }
          if (uVar10 != unaff_x24) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)0x48;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  lVar3 = *(long *)*param_4;
  plVar14[3] = ((long *)*param_4)[1];
  plVar14[2] = lVar3;
  plVar14[5] = 0;
  plVar14[4] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  *(undefined4 *)(plVar14 + 8) = 0x3f800000;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_10a3f293c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3f2b94);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar9 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar9;
              uVar10 = uVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_10a3f293c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar6 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar14 == 0) goto LAB_10a3f2b1c;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar6 * uVar16;
    }
    plVar9 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar9;
  }
  *plVar9 = (long)plVar14;
LAB_10a3f2b1c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a3f2b2c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10a3f2ba8; end: 10a3f2bef;  */

void FUN_10a3f2ba8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a34c8fc(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3f2bf0; end: 10a3f2c97;  */

long * FUN_10a3f2bf0(long *param_1,long *param_2)

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
    uVar3 = param_2[1];
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
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (plVar6[2] == *param_2 && plVar6[3] == uVar3) {
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
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3f2c98; end: 10a3f2d0b;  */

long * FUN_10a3f2c98(long *param_1)

{
  long lVar1;
  
  func_0x00010a3f2cd0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3f2d0c; end: 10a3f2db3;  */

long * FUN_10a3f2d0c(long *param_1,long *param_2)

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
    uVar3 = param_2[1];
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
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (plVar6[2] == *param_2 && plVar6[3] == uVar3) {
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
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3f2db4; end: 10a3f2eab;  */

void FUN_10a3f2db4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  puVar4 = *(undefined8 **)(param_1[1] + 0x60);
  for (puVar2 = *(undefined8 **)(param_1[1] + 0x58); puVar4 != puVar2; puVar2 = puVar2 + 0xe) {
    lVar9 = param_2;
    func_0x00010a3e9f8c(param_2,puVar2);
    if (lVar9 != 0) {
      lVar10 = param_1[1];
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      FUN_10a03d13c(auStack_60,*(undefined8 *)(lVar9 + 0x20));
      FUN_10a571164(lVar10,uVar3,uVar5,auStack_60);
      plVar8 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar9 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x238))(param_1,param_3);
  return;
}



/* Entry: 10a3f2eac; end: 10a3f2edf;  */

void FUN_10a3f2eac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a3f2ee0();
  if (lVar1 != 0) {
    FUN_10a3f2f88(param_1,lVar1);
  }
  return;
}



/* Entry: 10a3f2ee0; end: 10a3f2f87;  */

long * FUN_10a3f2ee0(long *param_1,long *param_2)

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
    uVar3 = param_2[1];
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
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (plVar6[2] == *param_2 && plVar6[3] == uVar3) {
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
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3f2f88; end: 10a3f2fcf;  */

undefined8 FUN_10a3f2f88(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [3];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a3f2fd0(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3f2fd0);
  (*pcVar2)();
}



/* Entry: 10a3f2fd0; end: 10a3f318f;  */

void FUN_10a3f2fd0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a3f3084;
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
    if (uVar8 == uVar3) goto LAB_10a3f3084;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a3f3084:
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



/* Entry: 10a3f3190; end: 10a3f33a7;  */

void FUN_10a3f3190(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
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
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a3f321c:
    if (lVar3 == 0) {
LAB_10a3f324c:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a3f3254;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a3f324c;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a3f321c;
LAB_10a3f3254:
    if (lVar3 == 0) goto LAB_10a3f3290;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
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
    lVar3 = *param_2;
  }
LAB_10a3f3290:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a3e9d54(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a3f33a8; end: 10a3f345f;  */

void FUN_10a3f33a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f3460(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0881b8(param_1,param_2,plVar4 + 5);
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



/* Entry: 10a3f3460; end: 10a3f34c7;  */

void FUN_10a3f3460(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
      param_4 = 0;
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
  FUN_10a3f3460(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a0881b8(extraout_x8,plVar4,&UNK_10e4b1834);
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



/* Entry: 10a3f34c8; end: 10a3f357f;  */

void FUN_10a3f34c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f3460(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0881b8(param_1,param_2,&UNK_10e4b1834);
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



/* Entry: 10a3f3580; end: 10a3f3637;  */

void FUN_10a3f3580(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f3460(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07a354(param_1,param_2,plVar4 + 3);
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



/* Entry: 10a3f3638; end: 10a3f36ef;  */

void FUN_10a3f3638(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f3460(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a368650(param_1,param_2,(long)plVar4 + 0x34);
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



/* Entry: 10a3f36f0; end: 10a3f37a7;  */

void FUN_10a3f36f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f3460(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a368650(param_1,param_2,(long)plVar4 + 0x74);
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



/* Entry: 10a3f37a8; end: 10a3f385b;  */

void FUN_10a3f37a8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f385c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3c762c(param_2);
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



/* Entry: 10a3f385c; end: 10a3f38c3;  */

void FUN_10a3f385c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long in_stack_ffffffffffffff98;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
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
  plVar6 = plVar4;
  FUN_10a3f399c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  func_0x00010a3c7bbc(&stack0xffffffffffffff90,plVar6);
  FUN_10a26f500(extraout_x8,plVar4,&stack0xffffffffffffff90);
  if (in_stack_ffffffffffffff98 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
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



/* Entry: 10a3f38c4; end: 10a3f399b;  */

void FUN_10a3f38c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a3c7bbc(&stack0xffffffffffffffb0,plVar4);
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



/* Entry: 10a3f399c; end: 10a3f3a03;  */

void FUN_10a3f399c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 in_stack_ffffffffffffff90;
  long in_stack_ffffffffffffff98;
  
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
  plVar6 = plVar4;
  FUN_10a3f399c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a3c7c94(&stack0xffffffffffffff90,plVar6);
  FUN_10a3f3ae0(extraout_x8,plVar4,in_stack_ffffffffffffff90,in_stack_ffffffffffffff98);
  if (in_stack_ffffffffffffff98 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
  }
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
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
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



/* Entry: 10a3f3a04; end: 10a3f3adf;  */

void FUN_10a3f3a04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffb0;
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3c7c94(&stack0xffffffffffffffb0,plVar4);
  FUN_10a3f3ae0(param_1,param_2,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
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



/* Entry: 10a3f3ae0; end: 10a3f3b97;  */

void FUN_10a3f3ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (param_4 == (long *)0x0) {
    param_4 = (long *)0x0;
    uStack_40 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_40 = 0;
    if (param_4 != (long *)0x0) {
      uStack_40 = param_3;
    }
  }
  ppuStack_48 = &PTR_DAT_110bd11a0;
  plStack_38 = param_4;
  FUN_10a05348c(param_1,param_2,&uStack_40,&ppuStack_48,0,0);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3f3b98; end: 10a3f3c5b;  */

void FUN_10a3f3b98(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(ushort *)(param_2 + 0x30);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = (uVar2 & 0x17) == 0;
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



/* Entry: 10a3f3c5c; end: 10a3f3d17;  */

void FUN_10a3f3c5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x30];
  *param_1 = 2;
  *(byte *)(param_1 + 2) = (byte)((ushort)(short)lVar5 >> 9) & 1;
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



/* Entry: 10a3f3d18; end: 10a3f3df7;  */

void FUN_10a3f3d18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x2b];
  plVar1 = (long *)plVar5[0x2a];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x167)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x167);
    plVar1 = plVar5 + 0x2a;
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



/* Entry: 10a3f3df8; end: 10a3f3f0b;  */

void FUN_10a3f3df8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10a3f385c(param_2,param_3);
  FUN_10a3f3f0c(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    puVar1 = &stack0xffffffffffffffa8;
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
  }
  func_0x000107c2c4d8(plVar5 + 0x2a,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
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



/* Entry: 10a3f3f0c; end: 10a3f3f2f;  */

void FUN_10a3f3f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
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
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  piVar6 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar6 == 6) {
    plVar5 = plVar4;
    (**(code **)(*plVar4 + 0x90))();
    plStack_38 = plVar5;
    (**(code **)(*plVar4 + 0x138))(extraout_x8,plVar4,&plStack_38);
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    return;
  }
  plVar4 = (long *)&UNK_10f582509;
  func_0x00010988bd28();
  if (plStack_38 != (long *)0x0) {
    (**(code **)*plStack_38)();
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
  FUN_10a3f399c(plVar4,piVar6);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar4 + 0x184);
  *extraout_x8_00 = 3;
  *(double *)(extraout_x8_00 + 2) = (double)iVar1;
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
        plStack_a8 = plVar4;
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



/* Entry: 10a3f3f30; end: 10a3f3fcf;  */

void FUN_10a3f3f30(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
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
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_28;
  
  if (*param_3 == 6) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_3 + 2));
    plStack_28 = plVar4;
    (**(code **)(*param_2 + 0x138))(param_1,param_2,&plStack_28);
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
    return;
  }
  plVar4 = (long *)&UNK_10f582509;
  func_0x00010988bd28();
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
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
  FUN_10a3f399c(plVar4,param_3);
  FUN_10a052e3c(param_5);
  iVar1 = *(int *)((long)plVar4 + 0x184);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
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
        plStack_98 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_b8 = lVar6;
          lStack_b0 = lVar6;
          lStack_a8 = lVar6;
          lStack_a0 = lVar12;
          func_0x00010988c1b8(&lStack_b8);
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



/* Entry: 10a3f3fd0; end: 10a3f408b;  */

void FUN_10a3f3fd0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x184);
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



/* Entry: 10a3f408c; end: 10a3f4153;  */

void FUN_10a3f408c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f385c(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x184) = (int)param_2;
  FUN_10a3c7800(plVar4);
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



/* Entry: 10a3f4154; end: 10a3f421f;  */

void FUN_10a3f4154(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f399c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3c7c48(param_2);
  (**(code **)(*param_2 + 0x60))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
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



/* Entry: 10a3f4220; end: 10a3f42fb;  */

void FUN_10a3f4220(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f385c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a3c7c48(plVar4);
  (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
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



/* Entry: 10a3f42fc; end: 10a3f4443;  */

void FUN_10a3f42fc(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_10a3f4444();
      uStack_38 = 0x10a3f438c;
      ppuStack_70 = &puStack_40;
      puVar10 = (undefined8 *)param_1[1];
      if (puVar10 < (undefined8 *)param_1[2]) {
        puVar6 = puVar10 + 1;
        *puVar10 = param_2;
      }
      else {
        lVar4 = (long)puVar10 - *param_1;
        uVar1 = (lVar4 >> 3) + 1;
        puStack_40 = &stack0xfffffffffffffff0;
        if (uVar1 >> 0x3d != 0) {
          puVar10 = param_2;
          FUN_10a3f4444();
          pcStack_68 = FUN_10a3f4444;
          plVar2 = (long *)&UNK_10f655b2b;
          FUN_109ffde64();
          pcStack_78 = FUN_10a3f4458;
          puStack_90 = param_2;
          plStack_88 = param_1;
          if ((ulong)plVar2 >> 0x3d == 0) {
            puStack_80 = (undefined1 *)&ppuStack_70;
            __Znwm((long)plVar2 << 3);
            return;
          }
          puStack_80 = (undefined1 *)&ppuStack_70;
          func_0x000109ffded8();
          pcStack_98 = FUN_10a3f448c;
          if (0 < param_5) {
            puVar3 = (undefined8 *)plVar2[1];
            ppuStack_a0 = &puStack_80;
            if (plVar2[2] - (long)puVar3 >> 3 < param_5) {
              lVar4 = *plVar2;
              uVar1 = param_5 + ((long)puVar3 - lVar4 >> 3);
              if (uVar1 >> 0x3d != 0) {
                puVar3 = puVar10;
                FUN_10a3f4444();
                puStack_f8 = &puStack_100;
                puStack_100 = &puStack_100;
                pcStack_d8 = FUN_10a3f4694;
                puVar6 = (undefined8 *)*puVar3;
                puStack_f0 = param_3;
                puStack_e8 = puVar10;
                pppuStack_e0 = &ppuStack_a0;
                if ((undefined8 *)*puVar3 != puVar3) {
                  do {
                    puVar10 = (undefined8 *)*puVar6;
                    *(undefined4 *)(puVar6 + 0x29) = 0;
                    if (*(int *)((long)puVar6 + 0x14c) == 0) {
                      if (puVar10 != (undefined8 *)0x0) {
                        puVar11 = (undefined8 *)puVar6[1];
                        *puVar11 = puVar10;
                        puVar10[1] = puVar11;
                        *puVar6 = 0;
                        puVar6[1] = 0;
                      }
                      if ((*(ushort *)(puVar6 + 0x1c) >> 0xb & 1) != 0) {
                        *puVar6 = &puStack_100;
                        puVar6[1] = puStack_f8;
                        *puStack_f8 = puVar6;
                        puStack_f8 = puVar6;
                      }
                    }
                    puVar6 = puVar10;
                  } while (puVar10 != puVar3);
                  if ((puStack_100 != (undefined8 *)0x0) &&
                     ((undefined8 **)puStack_100 != &puStack_100)) {
                    do {
                      (**(code **)(puStack_100[-0x14] + 8))();
                    } while (puStack_100 != (undefined8 *)0x0 &&
                             (undefined8 **)puStack_100 != &puStack_100);
                  }
                  if ((undefined8 **)puStack_100 != &puStack_100) {
                    do {
                      puVar10 = (undefined8 *)*puStack_100;
                      *puStack_100 = 0;
                      puStack_100[1] = 0;
                      puStack_100 = puVar10;
                    } while ((undefined8 **)puVar10 != &puStack_100);
                  }
                }
                return;
              }
              uVar5 = plVar2[2] - lVar4;
              uVar8 = (long)uVar5 >> 2;
              if (uVar8 <= uVar1) {
                uVar8 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar5) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              else {
                puVar3 = puVar10;
                FUN_10a3f4458();
              }
              puVar6 = (undefined8 *)((long)puVar10 + (uVar8 - lVar4));
              lVar4 = param_5 << 3;
              puVar11 = puVar6;
              do {
                *puVar11 = *param_3;
                lVar4 = lVar4 + -8;
                puVar11 = puVar11 + 1;
                param_3 = param_3 + 1;
              } while (lVar4 != 0);
              _memcpy(puVar6 + param_5,puVar10,plVar2[1] - (long)puVar10);
              lVar4 = plVar2[1];
              plVar2[1] = (long)puVar10;
              lVar12 = (long)puVar6 - ((long)puVar10 - *plVar2);
              _memcpy(lVar12);
              lVar7 = *plVar2;
              *plVar2 = lVar12;
              plVar2[1] = (long)(puVar6 + param_5) + (lVar4 - (long)puVar10);
              plVar2[2] = uVar8 + (long)puVar3 * 8;
              if (lVar7 != 0) goto code_r0x00010bdbd7ac;
            }
            else {
              lVar4 = (long)puVar3 - (long)puVar10;
              if (param_5 <= lVar4 >> 3) {
                puVar6 = puVar3;
                for (puVar11 = puVar3 + -param_5; puVar11 < puVar3; puVar11 = puVar11 + 1) {
                  *puVar6 = *puVar11;
                  puVar6 = puVar6 + 1;
                }
                plVar2[1] = (long)puVar6;
                if (puVar3 != puVar10 + param_5) {
                  _memmove(puVar10 + param_5,puVar10);
                }
                lVar4 = param_5 << 3;
LAB_10a3f4668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(puVar10,param_3,lVar4);
                return;
              }
              puVar6 = puVar3;
              puVar9 = puVar3;
              for (puVar11 = (undefined8 *)((long)param_3 + lVar4); puVar11 != param_4;
                  puVar11 = puVar11 + 1) {
                *puVar9 = *puVar11;
                puVar6 = puVar6 + 1;
                puVar9 = puVar9 + 1;
              }
              plVar2[1] = (long)puVar6;
              if (0 < lVar4 >> 3) {
                puVar11 = puVar6 + -param_5;
                for (; puVar11 < puVar3; puVar11 = puVar11 + 1) {
                  *puVar6 = *puVar11;
                  puVar6 = puVar6 + 1;
                }
                plVar2[1] = (long)puVar6;
                if (puVar9 != puVar10 + param_5) {
                  _memmove(puVar10 + param_5,puVar10);
                }
                if (puVar3 != puVar10) goto LAB_10a3f4668;
              }
            }
          }
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar8 = (long)uVar5 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar8 = 0x1fffffffffffffff;
        }
        puVar3 = param_2;
        FUN_10a3f4458();
        puVar10 = (undefined8 *)(uVar8 + lVar4);
        puVar6 = puVar10 + 1;
        *puVar10 = param_2;
        lVar7 = (long)puVar10 - (param_1[1] - *param_1);
        _memcpy(lVar7);
        lVar4 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)puVar6;
        param_1[2] = uVar8 + (long)puVar3 * 8;
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar6;
      return;
    }
    lVar7 = param_1[1];
    puVar10 = param_2;
    FUN_10a3f4458();
    lVar4 = (long)param_2 + (lVar7 - lVar4);
    lVar12 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar12);
    lVar7 = *param_1;
    *param_1 = lVar12;
    param_1[1] = lVar4;
    param_1[2] = (long)(param_2 + (long)puVar10);
    if (lVar7 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a3f4444; end: 10a3f4457;  */

void FUN_10a3f4444(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 ***pppuStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar2 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  pcStack_18 = FUN_10a3f4458;
  if ((ulong)plVar2 >> 0x3d == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm((long)plVar2 << 3);
    return;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  pcStack_38 = FUN_10a3f448c;
  if (0 < param_5) {
    puVar4 = (undefined8 *)plVar2[1];
    ppuStack_40 = &puStack_20;
    if (plVar2[2] - (long)puVar4 >> 3 < param_5) {
      lVar8 = *plVar2;
      uVar1 = param_5 + ((long)puVar4 - lVar8 >> 3);
      if (uVar1 >> 0x3d != 0) {
        puVar4 = param_2;
        FUN_10a3f4444();
        puStack_98 = &puStack_a0;
        puStack_a0 = &puStack_a0;
        pcStack_78 = FUN_10a3f4694;
        puVar6 = (undefined8 *)*puVar4;
        puStack_90 = param_3;
        puStack_88 = param_2;
        pppuStack_80 = &ppuStack_40;
        if ((undefined8 *)*puVar4 != puVar4) {
          do {
            puVar7 = (undefined8 *)*puVar6;
            *(undefined4 *)(puVar6 + 0x29) = 0;
            if (*(int *)((long)puVar6 + 0x14c) == 0) {
              if (puVar7 != (undefined8 *)0x0) {
                puVar10 = (undefined8 *)puVar6[1];
                *puVar10 = puVar7;
                puVar7[1] = puVar10;
                *puVar6 = 0;
                puVar6[1] = 0;
              }
              if ((*(ushort *)(puVar6 + 0x1c) >> 0xb & 1) != 0) {
                *puVar6 = &puStack_a0;
                puVar6[1] = puStack_98;
                *puStack_98 = puVar6;
                puStack_98 = puVar6;
              }
            }
            puVar6 = puVar7;
          } while (puVar7 != puVar4);
          if ((puStack_a0 != (undefined8 *)0x0) && ((undefined8 **)puStack_a0 != &puStack_a0)) {
            do {
              (**(code **)(puStack_a0[-0x14] + 8))();
            } while (puStack_a0 != (undefined8 *)0x0 && (undefined8 **)puStack_a0 != &puStack_a0);
          }
          if ((undefined8 **)puStack_a0 != &puStack_a0) {
            do {
              puVar4 = (undefined8 *)*puStack_a0;
              *puStack_a0 = 0;
              puStack_a0[1] = 0;
              puStack_a0 = puVar4;
            } while ((undefined8 **)puVar4 != &puStack_a0);
          }
        }
        return;
      }
      uVar5 = plVar2[2] - lVar8;
      uVar9 = (long)uVar5 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = param_2;
        FUN_10a3f4458();
      }
      puVar6 = (undefined8 *)((long)param_2 + (uVar9 - lVar8));
      lVar8 = param_5 << 3;
      puVar7 = puVar6;
      do {
        *puVar7 = *param_3;
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      _memcpy(puVar6 + param_5,param_2,plVar2[1] - (long)param_2);
      lVar8 = plVar2[1];
      plVar2[1] = (long)param_2;
      lVar11 = (long)puVar6 - ((long)param_2 - *plVar2);
      _memcpy(lVar11);
      lVar3 = *plVar2;
      *plVar2 = lVar11;
      plVar2[1] = (long)(puVar6 + param_5) + (lVar8 - (long)param_2);
      plVar2[2] = uVar9 + (long)puVar4 * 8;
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar8 = (long)puVar4 - (long)param_2;
      if (param_5 <= lVar8 >> 3) {
        puVar6 = puVar4;
        for (puVar7 = puVar4 + -param_5; puVar7 < puVar4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        plVar2[1] = (long)puVar6;
        if (puVar4 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar8 = param_5 << 3;
LAB_10a3f4668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar8);
        return;
      }
      puVar6 = puVar4;
      puVar10 = puVar4;
      for (puVar7 = (undefined8 *)((long)param_3 + lVar8); puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar10 = *puVar7;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      plVar2[1] = (long)puVar6;
      if (0 < lVar8 >> 3) {
        puVar7 = puVar6 + -param_5;
        for (; puVar7 < puVar4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        plVar2[1] = (long)puVar6;
        if (puVar10 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (puVar4 != param_2) goto LAB_10a3f4668;
      }
    }
  }
  return;
}



/* Entry: 10a3f4458; end: 10a3f448b;  */

void FUN_10a3f4458(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a3f448c;
  if (0 < param_5) {
    puVar3 = (undefined8 *)param_1[1];
    puStack_30 = &stack0xfffffffffffffff0;
    if (param_1[2] - (long)puVar3 >> 3 < param_5) {
      lVar7 = *param_1;
      uVar1 = param_5 + ((long)puVar3 - lVar7 >> 3);
      if (uVar1 >> 0x3d != 0) {
        puVar3 = param_2;
        FUN_10a3f4444();
        puStack_88 = &puStack_90;
        puStack_90 = &puStack_90;
        pcStack_68 = FUN_10a3f4694;
        puVar5 = (undefined8 *)*puVar3;
        puStack_80 = param_3;
        puStack_78 = param_2;
        ppuStack_70 = &puStack_30;
        if ((undefined8 *)*puVar3 != puVar3) {
          do {
            puVar6 = (undefined8 *)*puVar5;
            *(undefined4 *)(puVar5 + 0x29) = 0;
            if (*(int *)((long)puVar5 + 0x14c) == 0) {
              if (puVar6 != (undefined8 *)0x0) {
                puVar9 = (undefined8 *)puVar5[1];
                *puVar9 = puVar6;
                puVar6[1] = puVar9;
                *puVar5 = 0;
                puVar5[1] = 0;
              }
              if ((*(ushort *)(puVar5 + 0x1c) >> 0xb & 1) != 0) {
                *puVar5 = &puStack_90;
                puVar5[1] = puStack_88;
                *puStack_88 = puVar5;
                puStack_88 = puVar5;
              }
            }
            puVar5 = puVar6;
          } while (puVar6 != puVar3);
          if ((puStack_90 != (undefined8 *)0x0) && ((undefined8 **)puStack_90 != &puStack_90)) {
            do {
              (**(code **)(puStack_90[-0x14] + 8))();
            } while (puStack_90 != (undefined8 *)0x0 && (undefined8 **)puStack_90 != &puStack_90);
          }
          if ((undefined8 **)puStack_90 != &puStack_90) {
            do {
              puVar3 = (undefined8 *)*puStack_90;
              *puStack_90 = 0;
              puStack_90[1] = 0;
              puStack_90 = puVar3;
            } while ((undefined8 **)puVar3 != &puStack_90);
          }
        }
        return;
      }
      uVar4 = param_1[2] - lVar7;
      uVar8 = (long)uVar4 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = param_2;
        FUN_10a3f4458();
      }
      puVar5 = (undefined8 *)((long)param_2 + (uVar8 - lVar7));
      lVar7 = param_5 << 3;
      puVar6 = puVar5;
      do {
        *puVar6 = *param_3;
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      } while (lVar7 != 0);
      _memcpy(puVar5 + param_5,param_2,param_1[1] - (long)param_2);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar10 = (long)puVar5 - ((long)param_2 - *param_1);
      _memcpy(lVar10);
      lVar2 = *param_1;
      *param_1 = lVar10;
      param_1[1] = (long)(puVar5 + param_5) + (lVar7 - (long)param_2);
      param_1[2] = uVar8 + (long)puVar3 * 8;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar7 = (long)puVar3 - (long)param_2;
      if (param_5 <= lVar7 >> 3) {
        puVar5 = puVar3;
        for (puVar6 = puVar3 + -param_5; puVar6 < puVar3; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
        param_1[1] = (long)puVar5;
        if (puVar3 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar7 = param_5 << 3;
LAB_10a3f4668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar7);
        return;
      }
      puVar5 = puVar3;
      puVar9 = puVar3;
      for (puVar6 = (undefined8 *)((long)param_3 + lVar7); puVar6 != param_4; puVar6 = puVar6 + 1) {
        *puVar9 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      param_1[1] = (long)puVar5;
      if (0 < lVar7 >> 3) {
        puVar6 = puVar5 + -param_5;
        for (; puVar6 < puVar3; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
        param_1[1] = (long)puVar5;
        if (puVar9 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (puVar3 != param_2) goto LAB_10a3f4668;
      }
    }
  }
  return;
}



/* Entry: 10a3f448c; end: 10a3f4693;  */

void FUN_10a3f448c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (0 < param_5) {
    puVar3 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar3 >> 3 < param_5) {
      lVar7 = *param_1;
      uVar1 = param_5 + ((long)puVar3 - lVar7 >> 3);
      if (uVar1 >> 0x3d != 0) {
        puVar3 = param_2;
        FUN_10a3f4444();
        puStack_68 = &puStack_70;
        puStack_70 = &puStack_70;
        pcStack_48 = FUN_10a3f4694;
        puVar5 = (undefined8 *)*puVar3;
        puStack_60 = param_3;
        puStack_58 = param_2;
        puStack_50 = &stack0xfffffffffffffff0;
        if ((undefined8 *)*puVar3 != puVar3) {
          do {
            puVar6 = (undefined8 *)*puVar5;
            *(undefined4 *)(puVar5 + 0x29) = 0;
            if (*(int *)((long)puVar5 + 0x14c) == 0) {
              if (puVar6 != (undefined8 *)0x0) {
                puVar9 = (undefined8 *)puVar5[1];
                *puVar9 = puVar6;
                puVar6[1] = puVar9;
                *puVar5 = 0;
                puVar5[1] = 0;
              }
              if ((*(ushort *)(puVar5 + 0x1c) >> 0xb & 1) != 0) {
                *puVar5 = &puStack_70;
                puVar5[1] = puStack_68;
                *puStack_68 = puVar5;
                puStack_68 = puVar5;
              }
            }
            puVar5 = puVar6;
          } while (puVar6 != puVar3);
          if ((puStack_70 != (undefined8 *)0x0) && ((undefined8 **)puStack_70 != &puStack_70)) {
            do {
              (**(code **)(puStack_70[-0x14] + 8))();
            } while (puStack_70 != (undefined8 *)0x0 && (undefined8 **)puStack_70 != &puStack_70);
          }
          if ((undefined8 **)puStack_70 != &puStack_70) {
            do {
              puVar3 = (undefined8 *)*puStack_70;
              *puStack_70 = 0;
              puStack_70[1] = 0;
              puStack_70 = puVar3;
            } while ((undefined8 **)puVar3 != &puStack_70);
          }
        }
        return;
      }
      uVar4 = param_1[2] - lVar7;
      uVar8 = (long)uVar4 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = param_2;
        FUN_10a3f4458();
      }
      puVar5 = (undefined8 *)((long)param_2 + (uVar8 - lVar7));
      lVar7 = param_5 << 3;
      puVar6 = puVar5;
      do {
        *puVar6 = *param_3;
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      } while (lVar7 != 0);
      _memcpy(puVar5 + param_5,param_2,param_1[1] - (long)param_2);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar10 = (long)puVar5 - ((long)param_2 - *param_1);
      _memcpy(lVar10);
      lVar2 = *param_1;
      *param_1 = lVar10;
      param_1[1] = (long)(puVar5 + param_5) + (lVar7 - (long)param_2);
      param_1[2] = uVar8 + (long)puVar3 * 8;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar7 = (long)puVar3 - (long)param_2;
      if (param_5 <= lVar7 >> 3) {
        puVar5 = puVar3;
        for (puVar6 = puVar3 + -param_5; puVar6 < puVar3; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
        param_1[1] = (long)puVar5;
        if (puVar3 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar7 = param_5 << 3;
LAB_10a3f4668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar7);
        return;
      }
      puVar5 = puVar3;
      puVar9 = puVar3;
      for (puVar6 = (undefined8 *)((long)param_3 + lVar7); puVar6 != param_4; puVar6 = puVar6 + 1) {
        *puVar9 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      param_1[1] = (long)puVar5;
      if (0 < lVar7 >> 3) {
        puVar6 = puVar5 + -param_5;
        for (; puVar6 < puVar3; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
        param_1[1] = (long)puVar5;
        if (puVar9 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (puVar3 != param_2) goto LAB_10a3f4668;
      }
    }
  }
  return;
}



/* Entry: 10a3f4694; end: 10a3f4db7;  */

void FUN_10a3f4694(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puStack_28 = &puStack_30;
  puStack_30 = &puStack_30;
  puVar2 = (undefined8 *)*param_2;
  if ((undefined8 *)*param_2 != param_2) {
    do {
      puVar1 = (undefined8 *)*puVar2;
      *(undefined4 *)(puVar2 + 0x29) = 0;
      if (*(int *)((long)puVar2 + 0x14c) == 0) {
        if (puVar1 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puVar2[1];
          *puVar3 = puVar1;
          puVar1[1] = puVar3;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((*(ushort *)(puVar2 + 0x1c) >> 0xb & 1) != 0) {
          *puVar2 = &puStack_30;
          puVar2[1] = puStack_28;
          *puStack_28 = puVar2;
          puStack_28 = puVar2;
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != param_2);
    if ((puStack_30 != (undefined8 *)0x0) && ((undefined8 **)puStack_30 != &puStack_30)) {
      do {
        (**(code **)(puStack_30[-0x14] + 8))();
      } while (puStack_30 != (undefined8 *)0x0 && (undefined8 **)puStack_30 != &puStack_30);
    }
    if ((undefined8 **)puStack_30 != &puStack_30) {
      do {
        puVar2 = (undefined8 *)*puStack_30;
        *puStack_30 = 0;
        puStack_30[1] = 0;
        puStack_30 = puVar2;
      } while ((undefined8 **)puVar2 != &puStack_30);
    }
  }
  return;
}



/* Entry: 10a3f4db8; end: 10a3f4e6f;  */

void FUN_10a3f4db8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f4e70(param_1,param_2,0x10a3f4d74,0,param_3,param_4,param_5);
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



/* Entry: 10a3f4e70; end: 10a3f4f0f;  */

void FUN_10a3f4e70(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long *plStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  FUN_10a3f4f10(param_2,param_5);
  FUN_10a271768(param_7);
  lVar2 = param_2;
  func_0x00010a27178c(param_2,param_6);
  plStack_60 = (long *)(lVar1 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plStack_60 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)();
  lStack_58 = lVar2;
  FUN_10a2e87d8(param_1,param_2,&plStack_60);
  return;
}



/* Entry: 10a3f4f10; end: 10a3f4f53;  */

undefined1  [16] FUN_10a3f4f10(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    auVar5._0_8_ = param_1 + 1;
    if ((undefined **)*param_1 == &PTR_FUN_110bbac28) {
      auVar5._8_8_ = param_2;
      return auVar5;
    }
  }
  puVar1 = (ulong *)&UNK_10f685496;
  func_0x00010988bd28();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uVar3 = *param_2;
  uVar4 = *puVar1;
  uVar2 = (ulong)&uStack_40 | 8;
  FUN_10a3c8d60(uVar2,puVar1 + 1);
  auVar6._0_8_ = uVar4 & uVar3;
  auVar6._8_8_ = uVar2;
  return auVar6;
}



/* Entry: 10a3f4f54; end: 10a3f4f9f;  */

undefined1  [16] FUN_10a3f4f54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar1 = (ulong)&uStack_30 | 8;
  FUN_10a3c8d60(uVar1,param_1 + 1);
  auVar4._0_8_ = uVar3 & uVar2;
  auVar4._8_8_ = uVar1;
  return auVar4;
}



/* Entry: 10a3f4fa0; end: 10a3f5057;  */

void FUN_10a3f4fa0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f4e70(param_1,param_2,FUN_10a3f4f54,0,param_3,param_4,param_5);
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



/* Entry: 10a3f5058; end: 10a3f50c3;  */

undefined1  [16] FUN_10a3f5058(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar1 = (ulong)&uStack_40 | 8;
  FUN_10a3c8d60(uVar1,param_1 + 1);
  uVar4 = *param_1;
  param_1 = param_1 + 1;
  uStack_40 = uVar3 & uVar2;
  uStack_38 = uVar1;
  FUN_10a3c8ec4(param_1,&uStack_38);
  auVar5._0_8_ = uVar4 ^ uVar3 & uVar2;
  auVar5._8_8_ = param_1;
  return auVar5;
}



/* Entry: 10a3f50c4; end: 10a3f517b;  */

void FUN_10a3f50c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f4e70(param_1,param_2,FUN_10a3f5058,0,param_3,param_4,param_5);
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



/* Entry: 10a3f517c; end: 10a3f5283;  */

void FUN_10a3f517c(undefined4 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if (puVar3[0x59] < 8) {
    puVar3[puVar3[0x59] + 0x4e] = puVar3[0x5a];
    puVar3[0x59] = puVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(puVar3 + 0x4b);
  }
  puVar4 = param_2;
  FUN_10a3f4f10(param_2,param_3);
  FUN_10a271768(param_5);
  func_0x00010a27178c(param_2,param_4);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uVar6 = *param_2;
  uVar7 = *puVar4;
  uVar5 = (ulong)&uStack_50 | 8;
  FUN_10a3c8d60(uVar5,puVar4 + 1);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 2;
  *(bool *)(param_1 + 2) = (uVar7 & uVar6) == uVar1 && uVar5 == uVar2;
  func_0x00010988c170(puVar3 + 0x4b);
  return;
}



/* Entry: 10a3f5284; end: 10a3f53b7;  */

void FUN_10a3f5284(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

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
  FUN_10a3f4f10(param_2,param_3);
  FUN_10a052e3c();
  FUN_10a3c8488();
  FUN_10a3c9114(&stack0xffffffffffffffa0,plVar5,*(int *)(param_5 + 0x18) < 0xb7);
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



/* Entry: 10a3f53b8; end: 10a3f549f;  */

void FUN_10a3f53b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
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
  FUN_10a3f4f10(param_2,param_3);
  FUN_10a052e3c();
  FUN_10a3c8488();
  bVar3 = *param_2 == 0 && *(int *)(param_5 + 0x18) < 0xb7;
  if (0xb6 < *(int *)(param_5 + 0x18) && *param_2 == 0) {
    bVar3 = (short)param_2[1] == 0;
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar3;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a3f54a0; end: 10a3f559b;  */

void FUN_10a3f54a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3f4f10(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3c8f9c(&stack0xffffffffffffffa8,plVar4);
  FUN_10a2e43f8(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 2);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
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



/* Entry: 10a3f559c; end: 10a3f5697;  */

void FUN_10a3f559c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a27178c(param_2,param_3);
  FUN_10a3f5698(param_5);
  FUN_10a36c9b0(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a3c9058(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffa8 != 0) {
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



/* Entry: 10a3f5698; end: 10a3f56bb;  */

void FUN_10a3f5698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_60;
  ulong uStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar2 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a2e4094(param_4);
  plVar4 = plVar2;
  func_0x00010a2e40b8(plVar2,param_1);
  if ((uint)plVar4 < 0x40) {
    lStack_60 = 1L << ((ulong)plVar4 & 0x3f);
    plVar4 = (long *)0x0;
  }
  else {
    if ((uint)plVar4 == 0xffff) {
      FUN_10a00946c(&UNK_10f653a3a);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3f57a8);
      (*pcVar1)();
    }
    lStack_60 = 0;
  }
  uStack_58 = (ulong)plVar4 & 0xffffffff;
  FUN_10a2e87d8(extraout_x8,plVar2,&lStack_60);
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a3f56bc; end: 10a3f57bb;  */

void FUN_10a3f56bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lStack_50;
  ulong uStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  FUN_10a2e4094(param_5);
  plVar3 = param_2;
  func_0x00010a2e40b8(param_2,param_4);
  if ((uint)plVar3 < 0x40) {
    lStack_50 = 1L << ((ulong)plVar3 & 0x3f);
    plVar3 = (long *)0x0;
  }
  else {
    if ((uint)plVar3 == 0xffff) {
      FUN_10a00946c(&UNK_10f653a3a);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3f57a8);
      (*pcVar1)();
    }
    lStack_50 = 0;
  }
  uStack_48 = (ulong)plVar3 & 0xffffffff;
  FUN_10a2e87d8(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10a3f57bc; end: 10a3f588f;  */

void FUN_10a3f57bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  code *extraout_x8;
  undefined *puStack_50;
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
  FUN_10a052e3c(param_5);
  ppuVar2 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(param_6 + 0x10));
  puVar3 = *ppuVar2;
  (*extraout_x8)();
  puStack_50 = puVar3;
  uStack_48 = param_3;
  FUN_10a2e87d8(param_1,param_2,&puStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a3f5890; end: 10a3f58ab;  */

void FUN_10a3f5890(void)

{
  return;
}



/* Entry: 10a3f58ac; end: 10a3f595f;  */

void FUN_10a3f58ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  uStack_38 = 0;
  uStack_40 = 0xffffffffffffffff;
  FUN_10a2e87d8(param_1,param_2,&uStack_40);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}


