/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fc8e58; end: 109fc8ebf;  */

undefined8 * FUN_109fc8e58(int param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = (undefined4)(param_3 >> 0x20);
  uVar6 = (uint)param_3;
  ppuVar1 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
  if (0x56 < uVar6) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
    bVar2 = *(byte *)(ppuVar1 + 3);
    uVar6 = 0;
    if (bVar2 != 0) {
      uVar6 = ((param_1 + (uint)bVar2) - 1) / (uint)bVar2;
    }
    uVar8 = (uint)*(byte *)((long)ppuVar1 + 0x19);
    if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = (((int)param_2 + uVar8) - 1) / uVar8;
    }
    return (undefined8 *)((ulong)uVar3 * (ulong)(uVar6 * *(byte *)((long)ppuVar1 + 0x1a)));
  }
  puVar5 = (undefined8 *)&UNK_10f62e152;
  func_0x000109243bf8();
  puVar5[2] = 0;
  puVar5[3] = param_2;
  *(undefined4 *)(puVar5 + 4) = 9;
  *puVar5 = &PTR_DAT_110b97a80;
  puVar5[1] = 0;
  puVar4 = (undefined8 *)CONCAT44(uVar7,uVar6);
  uVar10 = puVar4[1];
  uVar9 = *puVar4;
  uVar12 = puVar4[3];
  uVar11 = puVar4[2];
  uVar14 = *(undefined8 *)(CONCAT44(uVar7,uVar6) + 0x28);
  uVar13 = *(undefined8 *)(CONCAT44(uVar7,uVar6) + 0x20);
  puVar5[0xb] = *(undefined8 *)(CONCAT44(uVar7,uVar6) + 0x30);
  puVar5[10] = uVar14;
  puVar5[9] = uVar13;
  puVar5[8] = uVar12;
  puVar5[7] = uVar11;
  puVar5[6] = uVar10;
  puVar5[5] = uVar9;
  func_0x000109249ebc(puVar5 + 0xc,CONCAT44(uVar7,uVar6) + 0x38);
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  return puVar5;
}



/* Entry: 109fc8ec0; end: 109fc8f3f;  */

undefined8 * FUN_109fc8ec0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 9;
  *param_1 = &PTR_DAT_110b97a80;
  param_1[1] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  param_1[0xb] = param_3[6];
  param_1[10] = uVar6;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  func_0x000109249ebc(param_1 + 0xc,param_3 + 7);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



/* Entry: 109fc8f40; end: 109fc8f4b;  */

long FUN_109fc8f40(long param_1)

{
  return param_1 + 0x98;
}



/* Entry: 109fc8f4c; end: 109fc8f5f;  */

void FUN_109fc8f4c(void)

{
  func_0x00010922dba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fc8f60; end: 109fc8fc3;  */

long FUN_109fc8f60(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 109fc8fc4; end: 109fc901b;  */

long FUN_109fc8fc4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc901c; end: 109fc90db;  */

void FUN_109fc901c(undefined8 *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xe;
  *param_1 = &PTR_FUN_110b97b20;
  param_1[1] = 0;
  lVar4 = param_3[1];
  lVar3 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = lVar4;
  param_1[5] = lVar3;
  if (*param_3 == 0) {
    puVar2 = &UNK_10f62e173;
  }
  else if (param_3[1] == 0) {
    puVar2 = &UNK_10f62e1bb;
  }
  else {
    if ((*(long *)(*param_3 + 0x18) == param_2) && (*(long *)(param_3[1] + 0x18) == param_2)) {
      return;
    }
    puVar2 = &UNK_10f62e1fe;
  }
  func_0x000109243bf8(puVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fc90c0);
  (*pcVar1)();
}



/* Entry: 109fc90dc; end: 109fc90e3;  */

void FUN_109fc90dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fc90e0);
  (*pcVar1)();
}



/* Entry: 109fc90e4; end: 109fc913b;  */

undefined8 * FUN_109fc90e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xf;
  *param_1 = &PTR_DAT_110ae2a10;
  param_1[1] = 0;
  func_0x000109291ca0(param_1 + 5,param_3);
  return param_1;
}



/* Entry: 109fc913c; end: 109fc9183;  */

undefined8 * FUN_109fc913c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b97ba0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc9184; end: 109fc919b;  */

void FUN_109fc9184(long param_1)

{
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return;
}



/* Entry: 109fc919c; end: 109fc9277;  */

undefined8 * FUN_109fc919c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 7;
  *param_1 = &PTR_FUN_110b97d80;
  param_1[1] = 0;
  param_1[5] = *param_3;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  if (param_3[0x13] != 0) {
    lVar3 = param_3[0x13] << 3;
    puVar2 = param_3;
    do {
      puVar2 = puVar2 + 1;
      FUN_109fc9390(param_1 + 6,puVar2);
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  uVar1 = param_3[0x14];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x15);
  param_1[0x19] = uVar1;
  FUN_109fc92d0(param_1 + 0x1b,param_3 + 0x16);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_3 + 0x4d);
  return param_1;
}



/* Entry: 109fc9278; end: 109fc92cf;  */

long FUN_109fc9278(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc92d0; end: 109fc938f;  */

undefined8 * FUN_109fc92d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[2] = 1;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x1b0);
  param_1[0x36] = 0;
  if (*(long *)(param_2 + 0x1b0) != 0) {
    lVar2 = *(long *)(param_2 + 0x1b0) * 0x18;
    do {
      FUN_109fc9410(param_1,param_2);
      param_2 = param_2 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return param_1;
}



/* Entry: 109fc9390; end: 109fc940f;  */

undefined8 * FUN_109fc9390(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar8 = *(ulong *)(param_1 + 0x90);
  if (uVar8 < 0x12) {
    puVar3 = (undefined8 *)(param_1 + uVar8 * 8);
    *puVar3 = *param_2;
    *(ulong *)(param_1 + 0x90) = uVar8 + 1;
    return puVar3;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar9 = lVar2;
  puVar3 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  if (*(ulong *)(lVar9 + 0x1b0) < 0x12) {
    puVar7 = (undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x1b0) * 0x18);
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    puVar7[2] = puVar3[2];
    puVar7[1] = uVar11;
    *puVar7 = uVar10;
    lVar2 = *(long *)(lVar9 + 0x1b0);
    *(long *)(lVar9 + 0x1b0) = lVar2 + 1;
    return (undefined8 *)(lVar9 + lVar2 * 0x18);
  }
  puVar7 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar3 = puVar7;
  puVar5 = PTR___ZTISt12length_error_110352238;
  plVar6 = (long *)PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw();
  ___cxa_free_exception(puVar7);
  __Unwind_Resume();
  puVar3[2] = 0;
  puVar3[3] = puVar5;
  *(undefined4 *)(puVar3 + 4) = 0x13;
  *puVar3 = &PTR_FUN_110b97dc0;
  puVar3[1] = 0;
  FUN_109fc95a8(puVar3 + 5,*plVar6,*plVar6 + plVar6[1] * 8);
  lVar9 = *plVar6;
  lVar12 = plVar6[3];
  lVar2 = plVar6[2];
  puVar3[0xd] = plVar6[1];
  puVar3[0xc] = lVar9;
  puVar3[0xf] = lVar12;
  puVar3[0xe] = lVar2;
  uVar8 = plVar6[1];
  if (4 < uVar8) {
    func_0x000109243bf8(&UNK_10f62e27c);
LAB_109fc9568:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109fc956c);
    (*pcVar1)();
  }
  if (uVar8 != 0) {
    lVar9 = uVar8 << 3;
    plVar6 = (long *)*plVar6;
    do {
      puVar4 = &UNK_10f62e2ca;
      if ((*plVar6 == 0) || (puVar4 = &UNK_10f62e30f, *(undefined **)(*plVar6 + 0x18) != puVar5)) {
        func_0x000109243bf8(puVar4);
        goto LAB_109fc9568;
      }
      lVar9 = lVar9 + -8;
      plVar6 = plVar6 + 1;
    } while (lVar9 != 0);
  }
  puVar3[0xc] = puVar3[9];
  puVar3[0xd] = puVar3[10];
  return puVar3;
}



/* Entry: 109fc9410; end: 109fc949f;  */

undefined8 * FUN_109fc9410(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  if (*(ulong *)(param_1 + 0x1b0) < 0x12) {
    puVar6 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x1b0) * 0x18);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    lVar7 = *(long *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1b0) = lVar7 + 1;
    return (undefined8 *)(param_1 + lVar7 * 0x18);
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar6 = puVar2;
  puVar4 = PTR___ZTISt12length_error_110352238;
  plVar5 = (long *)PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw();
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  puVar6[2] = 0;
  puVar6[3] = puVar4;
  *(undefined4 *)(puVar6 + 4) = 0x13;
  *puVar6 = &PTR_FUN_110b97dc0;
  puVar6[1] = 0;
  FUN_109fc95a8(puVar6 + 5,*plVar5,*plVar5 + plVar5[1] * 8);
  lVar7 = *plVar5;
  lVar12 = plVar5[3];
  lVar11 = plVar5[2];
  puVar6[0xd] = plVar5[1];
  puVar6[0xc] = lVar7;
  puVar6[0xf] = lVar12;
  puVar6[0xe] = lVar11;
  uVar8 = plVar5[1];
  if (4 < uVar8) {
    func_0x000109243bf8(&UNK_10f62e27c);
LAB_109fc9568:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109fc956c);
    (*pcVar1)();
  }
  if (uVar8 != 0) {
    lVar7 = uVar8 << 3;
    plVar5 = (long *)*plVar5;
    do {
      puVar3 = &UNK_10f62e2ca;
      if ((*plVar5 == 0) || (puVar3 = &UNK_10f62e30f, *(undefined **)(*plVar5 + 0x18) != puVar4)) {
        func_0x000109243bf8(puVar3);
        goto LAB_109fc9568;
      }
      lVar7 = lVar7 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar7 != 0);
  }
  puVar6[0xc] = puVar6[9];
  puVar6[0xd] = puVar6[10];
  return puVar6;
}



/* Entry: 109fc94a0; end: 109fc95a7;  */

undefined8 * FUN_109fc94a0(undefined8 *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x13;
  *param_1 = &PTR_FUN_110b97dc0;
  param_1[1] = 0;
  FUN_109fc95a8(param_1 + 5,*param_3,*param_3 + param_3[1] * 8);
  lVar5 = *param_3;
  lVar7 = param_3[3];
  lVar6 = param_3[2];
  param_1[0xd] = param_3[1];
  param_1[0xc] = lVar5;
  param_1[0xf] = lVar7;
  param_1[0xe] = lVar6;
  uVar4 = param_3[1];
  if (4 < uVar4) {
    func_0x000109243bf8(&UNK_10f62e27c);
LAB_109fc9568:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109fc956c);
    (*pcVar1)();
  }
  if (uVar4 != 0) {
    lVar5 = uVar4 << 3;
    plVar3 = (long *)*param_3;
    do {
      puVar2 = &UNK_10f62e2ca;
      if ((*plVar3 == 0) || (puVar2 = &UNK_10f62e30f, *(long *)(*plVar3 + 0x18) != param_2)) {
        func_0x000109243bf8(puVar2);
        goto LAB_109fc9568;
      }
      lVar5 = lVar5 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar5 != 0);
  }
  param_1[0xc] = param_1[9];
  param_1[0xd] = param_1[10];
  return param_1;
}



/* Entry: 109fc95a8; end: 109fc9653;  */

undefined8 * FUN_109fc95a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = param_1;
  param_1[6] = 4;
  param_1[5] = 0;
  if (4 < (ulong)((long)param_3 - (long)param_2 >> 3)) {
    FUN_109fc967c(param_1);
  }
  if (param_3 != param_2) {
    lVar1 = param_1[5];
    do {
      puVar2 = param_2 + 1;
      *(undefined8 *)(param_1[4] + lVar1 * 8) = *param_2;
      lVar1 = lVar1 + 1;
      param_2 = puVar2;
    } while (puVar2 != param_3);
    param_1[5] = lVar1;
  }
  return param_1;
}



/* Entry: 109fc9654; end: 109fc9657;  */

undefined8 * FUN_109fc9654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b97dc0;
  param_1[10] = 0;
  if ((undefined8 *)param_1[9] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[9],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc9658; end: 109fc966b;  */

void FUN_109fc9658(void)

{
  FUN_109fc9734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fc966c; end: 109fc967b;  */

undefined8 FUN_109fc966c(void)

{
  return 0;
}



/* Entry: 109fc967c; end: 109fc96f7;  */

void FUN_109fc967c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 5) {
    param_2 = 4;
  }
  uVar1 = param_2;
  FUN_109fc96f8();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(uVar1 + lVar3 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  if (*(long *)(param_1 + 0x20) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x20),8);
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  *(ulong *)(param_1 + 0x30) = param_2;
  return;
}



/* Entry: 109fc96f8; end: 109fc9733;  */

undefined8 * FUN_109fc96f8(ulong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 >> 0x3d == 0) {
    puVar1 = (undefined8 *)(param_1 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZnwmSt11align_val_t_110352290)(puVar1,8);
    return puVar1;
  }
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  *puVar1 = &PTR_FUN_110b97dc0;
  puVar1[10] = 0;
  if ((undefined8 *)puVar1[9] != puVar1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)puVar1[9],8);
  }
  if (puVar1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 109fc9734; end: 109fc9787;  */

undefined8 * FUN_109fc9734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b97dc0;
  param_1[10] = 0;
  if ((undefined8 *)param_1[9] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[9],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc9788; end: 109fc979b;  */

void FUN_109fc9788(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109fc9798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 109fc979c; end: 109fc97eb;  */

undefined8 * FUN_109fc979c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000109244fe8(&UNK_10f62e361);
  func_0x000109244fe8(&UNK_10f62e3f2);
  func_0x000109244fe8(&UNK_10f62e48a);
  puVar1 = (undefined8 *)&UNK_10f62e52f;
  func_0x000109244fe8();
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 8;
  *puVar1 = &PTR_FUN_110b97e30;
  puVar1[1] = 0;
  FUN_109fc9900(puVar1 + 5,param_3);
  _bzero(puVar1 + 0x72,0x348);
  if (*(long *)(param_3 + 0x6a8) != 0) {
    lVar2 = param_3 + 0x368;
    lVar3 = *(long *)(param_3 + 0x6a8) * 0xd0;
    do {
      FUN_109fc9ad4(puVar1 + 0x72,lVar2);
      lVar2 = lVar2 + 0xd0;
      lVar3 = lVar3 + -0xd0;
    } while (lVar3 != 0);
  }
  func_0x000109fc9990(puVar1 + 0xdb,param_3 + 0x6b0);
  return puVar1;
}



/* Entry: 109fc97ec; end: 109fc9897;  */

undefined8 * FUN_109fc97ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 8;
  *param_1 = &PTR_FUN_110b97e30;
  param_1[1] = 0;
  FUN_109fc9900(param_1 + 5,param_3);
  _bzero(param_1 + 0x72,0x348);
  if (*(long *)(param_3 + 0x6a8) != 0) {
    lVar1 = param_3 + 0x368;
    lVar2 = *(long *)(param_3 + 0x6a8) * 0xd0;
    do {
      FUN_109fc9ad4(param_1 + 0x72,lVar1);
      lVar1 = lVar1 + 0xd0;
      lVar2 = lVar2 + -0xd0;
    } while (lVar2 != 0);
  }
  func_0x000109fc9990(param_1 + 0xdb,param_3 + 0x6b0);
  return param_1;
}



/* Entry: 109fc9898; end: 109fc98ef;  */

long FUN_109fc9898(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc98f0; end: 109fc98ff;  */

undefined8 FUN_109fc98f0(void)

{
  return 0x840;
}



/* Entry: 109fc9900; end: 109fc9a43;  */

long FUN_109fc9900(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  _bzero(param_1,0x360);
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x100000004;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = 0;
    lVar2 = lVar2 + 0x30;
    puVar1[4] = 0;
    puVar1[5] = 0;
  } while (lVar2 != 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (*(long *)(param_2 + 0x360) != 0) {
    lVar2 = *(long *)(param_2 + 0x360) * 0x30;
    do {
      FUN_109fc9a44(param_1,param_2);
      param_2 = param_2 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return param_1;
}



/* Entry: 109fc9a44; end: 109fc9ad3;  */

long FUN_109fc9a44(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(ulong *)(param_1 + 0x360) < 0x12) {
    puVar3 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x360) * 0x30);
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar7 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    puVar3[3] = param_2[3];
    puVar3[2] = uVar7;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    lVar4 = *(long *)(param_1 + 0x360);
    *(long *)(param_1 + 0x360) = lVar4 + 1;
    return param_1 + lVar4 * 0x30;
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar4 = lVar1;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  if (*(ulong *)(lVar4 + 0x340) < 4) {
    FUN_109fc9b5c(lVar4 + *(ulong *)(lVar4 + 0x340) * 0xd0);
    lVar1 = *(long *)(lVar4 + 0x340);
    *(long *)(lVar4 + 0x340) = lVar1 + 1;
    return lVar4 + lVar1 * 0xd0;
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar4 = lVar1;
  puVar2 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  lVar1 = lVar4;
  FUN_109fc9bac();
  func_0x000109fc9c08(lVar1 + 0x28,puVar2 + 0x28);
  func_0x000109fc9c08(lVar4 + 0x70,puVar2 + 0x70);
  uVar6 = *(undefined8 *)(puVar2 + 0xc0);
  uVar5 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined4 *)(lVar4 + 200) = *(undefined4 *)(puVar2 + 200);
  *(undefined8 *)(lVar4 + 0xc0) = uVar6;
  *(undefined8 *)(lVar4 + 0xb8) = uVar5;
  return lVar4;
}



/* Entry: 109fc9ad4; end: 109fc9b5b;  */

long FUN_109fc9ad4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(ulong *)(param_1 + 0x340) < 4) {
    FUN_109fc9b5c(param_1 + *(ulong *)(param_1 + 0x340) * 0xd0);
    lVar3 = *(long *)(param_1 + 0x340);
    *(long *)(param_1 + 0x340) = lVar3 + 1;
    return param_1 + lVar3 * 0xd0;
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar3 = lVar1;
  puVar2 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  lVar1 = lVar3;
  FUN_109fc9bac();
  func_0x000109fc9c08(lVar1 + 0x28,puVar2 + 0x28);
  func_0x000109fc9c08(lVar3 + 0x70,puVar2 + 0x70);
  uVar5 = *(undefined8 *)(puVar2 + 0xc0);
  uVar4 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined4 *)(lVar3 + 200) = *(undefined4 *)(puVar2 + 200);
  *(undefined8 *)(lVar3 + 0xc0) = uVar5;
  *(undefined8 *)(lVar3 + 0xb8) = uVar4;
  return lVar3;
}



/* Entry: 109fc9b5c; end: 109fc9bab;  */

long FUN_109fc9b5c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_109fc9bac();
  func_0x000109fc9c08(lVar1 + 0x28,param_2 + 0x28);
  func_0x000109fc9c08(param_1 + 0x70,param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  return param_1;
}



/* Entry: 109fc9bac; end: 109fc9c67;  */

undefined8 * FUN_109fc9bac(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar1 = *(long *)(param_2 + 0x20) << 3;
    do {
      FUN_109fc9c68(param_1,param_2);
      param_2 = param_2 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 109fc9c68; end: 109fc9ce7;  */

undefined8 * FUN_109fc9c68(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(ulong *)(param_1 + 0x20) < 4) {
    *(undefined8 *)(param_1 + *(ulong *)(param_1 + 0x20) * 8) = *param_2;
    lVar5 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar5 + 1;
    return (undefined8 *)(param_1 + lVar5 * 8);
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar5 = lVar1;
  puVar2 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  if (*(ulong *)(lVar5 + 0x40) < 8) {
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x40) * 8) = *puVar2;
    lVar1 = *(long *)(lVar5 + 0x40);
    *(long *)(lVar5 + 0x40) = lVar1 + 1;
    return (undefined8 *)(lVar5 + lVar1 * 8);
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar5 = lVar1;
  puVar2 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  if (*(ulong *)(lVar5 + 0x188) < 0xe) {
    puVar6 = (undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x188) * 0x1c);
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    uVar9 = *(undefined8 *)((long)puVar2 + 0xc);
    *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
    *(undefined8 *)((long)puVar6 + 0xc) = uVar9;
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    lVar1 = *(long *)(lVar5 + 0x188);
    *(long *)(lVar5 + 0x188) = lVar1 + 1;
    return (undefined8 *)(lVar5 + lVar1 * 0x1c);
  }
  puVar6 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar6;
  puVar3 = PTR___ZTISt12length_error_110352238;
  puVar4 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw(puVar6,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar6);
  __Unwind_Resume();
  puVar2[2] = 0;
  puVar2[3] = puVar3;
  *(undefined4 *)(puVar2 + 4) = 10;
  *puVar2 = &PTR_DAT_110b97e88;
  puVar2[1] = 0;
  func_0x00010928b998(puVar2 + 5,puVar4);
  *(undefined1 *)(puVar2 + 0xab) = 0;
  *(undefined1 *)(puVar2 + 0xb1) = 0;
  return puVar2;
}



/* Entry: 109fc9ce8; end: 109fc9d67;  */

undefined8 * FUN_109fc9ce8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(ulong *)(param_1 + 0x40) < 8) {
    *(undefined8 *)(param_1 + *(ulong *)(param_1 + 0x40) * 8) = *param_2;
    lVar5 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar5 + 1;
    return (undefined8 *)(param_1 + lVar5 * 8);
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar5 = lVar1;
  puVar2 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  if (*(ulong *)(lVar5 + 0x188) < 0xe) {
    puVar6 = (undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x188) * 0x1c);
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    uVar9 = *(undefined8 *)((long)puVar2 + 0xc);
    *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
    *(undefined8 *)((long)puVar6 + 0xc) = uVar9;
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    lVar1 = *(long *)(lVar5 + 0x188);
    *(long *)(lVar5 + 0x188) = lVar1 + 1;
    return (undefined8 *)(lVar5 + lVar1 * 0x1c);
  }
  puVar6 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar6;
  puVar3 = PTR___ZTISt12length_error_110352238;
  puVar4 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw(puVar6,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar6);
  __Unwind_Resume();
  puVar2[2] = 0;
  puVar2[3] = puVar3;
  *(undefined4 *)(puVar2 + 4) = 10;
  *puVar2 = &PTR_DAT_110b97e88;
  puVar2[1] = 0;
  func_0x00010928b998(puVar2 + 5,puVar4);
  *(undefined1 *)(puVar2 + 0xab) = 0;
  *(undefined1 *)(puVar2 + 0xb1) = 0;
  return puVar2;
}



/* Entry: 109fc9d68; end: 109fc9df7;  */

undefined8 * FUN_109fc9d68(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(ulong *)(param_1 + 0x188) < 0xe) {
    puVar4 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x188) * 0x1c);
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar8 = *(undefined8 *)((long)param_2 + 0xc);
    *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    *(undefined8 *)((long)puVar4 + 0xc) = uVar8;
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    lVar5 = *(long *)(param_1 + 0x188);
    *(long *)(param_1 + 0x188) = lVar5 + 1;
    return (undefined8 *)(param_1 + lVar5 * 0x1c);
  }
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar4 = puVar1;
  puVar2 = PTR___ZTISt12length_error_110352238;
  puVar3 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  puVar4[2] = 0;
  puVar4[3] = puVar2;
  *(undefined4 *)(puVar4 + 4) = 10;
  *puVar4 = &PTR_DAT_110b97e88;
  puVar4[1] = 0;
  func_0x00010928b998(puVar4 + 5,puVar3);
  *(undefined1 *)(puVar4 + 0xab) = 0;
  *(undefined1 *)(puVar4 + 0xb1) = 0;
  return puVar4;
}



/* Entry: 109fc9df8; end: 109fc9e57;  */

undefined8 * FUN_109fc9df8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 10;
  *param_1 = &PTR_DAT_110b97e88;
  param_1[1] = 0;
  func_0x00010928b998(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  return param_1;
}



/* Entry: 109fc9e58; end: 109fc9e63;  */

long FUN_109fc9e58(long param_1)

{
  return param_1 + 0x558;
}



/* Entry: 109fc9e64; end: 109fc9e77;  */

void FUN_109fc9e64(void)

{
  func_0x000109234930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fc9e78; end: 109fc9ecf;  */

long FUN_109fc9e78(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fc9ed0; end: 109fca4f7;  */

undefined8 * FUN_109fc9ed0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puStack_b0;
  undefined4 **ppuStack_a8;
  undefined4 **ppuStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xd;
  *param_1 = &PTR_DAT_110b97f28;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar10 = param_3[2];
  if (0x7ffffffffffffff7 < uVar10) {
    func_0x000104c4f6b8();
    goto LAB_109fca41c;
  }
  puVar9 = param_1 + 9;
  uVar11 = param_3[1];
  if (uVar10 < 0x17) {
    *(char *)((long)param_1 + 0x5f) = (char)uVar10;
    puVar14 = puVar9;
    if (uVar10 != 0) goto LAB_109fc9f7c;
  }
  else {
    puVar18 = (undefined8 *)0x19;
    if ((uVar10 | 7) != 0x17) {
      puVar18 = (undefined8 *)((uVar10 | 7) + 1);
    }
    puVar14 = puVar18;
    __Znwm();
    param_1[10] = uVar10;
    param_1[0xb] = (ulong)puVar18 | 0x8000000000000000;
    param_1[9] = puVar14;
LAB_109fc9f7c:
    _memmove(puVar14,uVar11,uVar10);
  }
  *(undefined1 *)((long)puVar14 + uVar10) = 0;
  puVar18 = param_1 + 0xc;
  param_1[0xd] = 0;
  *puVar18 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  uVar19 = param_3[1];
  uVar11 = *param_3;
  uVar21 = param_3[3];
  uVar20 = param_3[2];
  uVar23 = param_3[5];
  uVar22 = param_3[4];
  uVar25 = param_3[7];
  uVar24 = param_3[6];
  puVar14 = param_1 + 0x1a;
  *(undefined1 *)puVar14 = 0;
  param_1[0x17] = uVar23;
  param_1[0x16] = uVar22;
  param_1[0x19] = uVar25;
  param_1[0x18] = uVar24;
  param_1[0x13] = uVar19;
  param_1[0x12] = uVar11;
  param_1[0x15] = uVar21;
  param_1[0x14] = uVar20;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(char *)(param_3 + 0xb) == '\x01') {
    *puVar14 = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    lVar15 = param_3[8];
    puVar16 = (undefined8 *)param_3[9];
    uStack_78 = 0;
    puVar2 = (undefined4 *)((long)puVar16 - lVar15);
    puStack_80 = puVar14;
    if (puVar2 != (undefined4 *)0x0) {
      if ((long)puVar2 < 0) {
        func_0x000109fca518();
        goto LAB_109fca41c;
      }
      puVar5 = puVar2;
      __Znwm();
      param_1[0x1a] = puVar5;
      param_1[0x1b] = puVar5;
      param_1[0x1c] = (long)puVar5 + (long)puVar2;
      ppuStack_a8 = &puStack_70;
      ppuStack_a0 = &puStack_68;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
      puVar8 = (undefined8 *)(lVar15 + 8);
      puStack_b0 = puVar14;
      puStack_70 = puVar5;
      do {
        *puVar5 = *(undefined4 *)(puVar8 + -1);
        puStack_68 = puVar5;
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          func_0x000107c3192c(puVar5 + 2,*puVar8,puVar8[1]);
        }
        else {
          uVar19 = puVar8[1];
          uVar11 = *puVar8;
          *(undefined8 *)(puVar5 + 6) = puVar8[2];
          *(undefined8 *)(puVar5 + 4) = uVar19;
          *(undefined8 *)(puVar5 + 2) = uVar11;
        }
        puVar5 = puStack_68 + 8;
        puVar14 = puVar8 + 3;
        puVar8 = puVar8 + 4;
      } while (puVar14 != puVar16);
      uStack_98 = CONCAT71(uStack_98._1_7_,1);
      puStack_68 = puVar5;
      FUN_109fca52c(&puStack_b0);
      param_1[0x1b] = puVar5;
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (param_3[7] == 0) {
    puVar12 = &UNK_10f62e600;
  }
  else {
    if (*(long *)(param_3[7] + 0x18) == param_2) {
      uVar1 = *(uint *)(param_3 + 3);
      if ((uVar1 == 0) || (param_3[4] != 0)) {
        if ((param_3[5] == 0) || (param_3[6] != 0)) {
          if (param_2 == 0) {
            uVar13 = 0xffff;
          }
          else {
            uVar13 = *(uint *)(param_2 + 0xf8);
          }
          if (uVar1 <= uVar13) {
            ppuStack_a8 = (undefined4 **)0x0;
            puStack_b0 = (undefined8 *)0x0;
            uStack_98 = 0;
            ppuStack_a0 = (undefined4 **)0x0;
            uStack_90 = 0x3f800000;
            func_0x000107271148(&puStack_b0,(long)(float)uVar1);
            if (*(int *)(param_3 + 3) != 0) {
              lVar15 = 0;
              uVar10 = 0;
              puVar12 = &UNK_10f62e787;
              do {
                puVar6 = (uint *)(param_3[4] + lVar15);
                if ((puVar6[2] - 5 < 0xfffffffc) ||
                   ((ulong)param_3[5] < (ulong)puVar6[1] || param_3[5] - (ulong)puVar6[1] < 4)) {
LAB_109fca3b4:
                  func_0x000109243bf8(puVar12);
                  goto LAB_109fca41c;
                }
                if (uVar13 <= *puVar6) {
                  puVar12 = &UNK_10f62e7c8;
                  goto LAB_109fca3b4;
                }
                func_0x000107270fb0(&puStack_b0,puVar6,puVar6);
                if (((ulong)puVar6 & 1) == 0) {
                  puVar12 = &UNK_10f62e813;
                  goto LAB_109fca3b4;
                }
                uVar10 = uVar10 + 1;
                uVar17 = (ulong)*(uint *)(param_3 + 3);
                lVar15 = lVar15 + 0xc;
              } while (uVar10 < uVar17);
              if (*(uint *)(param_3 + 3) != 0) {
                puVar14 = (undefined8 *)param_3[4];
                lVar15 = uVar17 * 0xc;
                lVar7 = param_1[0xe];
                puVar16 = (undefined8 *)param_1[0xc];
                if ((ulong)((lVar7 - (long)puVar16 >> 2) * -0x5555555555555555) < uVar17) {
                  if (puVar16 != (undefined8 *)0x0) {
                    param_1[0xd] = puVar16;
                    __ZdlPv(puVar16);
                    lVar7 = 0;
                    *puVar18 = 0;
                    param_1[0xd] = 0;
                    param_1[0xe] = 0;
                  }
                  uVar10 = (lVar7 >> 2) * 0x5555555555555556;
                  if (uVar10 < uVar17 || uVar10 - uVar17 == 0) {
                    uVar10 = uVar17;
                  }
                  if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar7 >> 2) * -0x5555555555555555)) {
                    uVar10 = 0x1555555555555555;
                  }
                  if (0x1555555555555555 < uVar10) {
                    func_0x000109298030();
                    goto LAB_109fca41c;
                  }
                  func_0x000109298044();
                  param_1[0xc] = puVar18;
                  param_1[0xd] = puVar18;
                  param_1[0xe] = (long)puVar18 + uVar10 * 0xc;
                  do {
                    uVar11 = *puVar14;
                    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar14 + 1);
                    puVar16 = (undefined8 *)((long)puVar18 + 0xc);
                    *puVar18 = uVar11;
                    puVar14 = (undefined8 *)((long)puVar14 + 0xc);
                    lVar15 = lVar15 + -0xc;
                    puVar18 = puVar16;
                  } while (lVar15 != 0);
                  param_1[0xd] = puVar16;
                }
                else {
                  puVar18 = (undefined8 *)param_1[0xd];
                  lVar7 = (long)puVar18 - (long)puVar16;
                  if ((ulong)((lVar7 >> 2) * -0x5555555555555555) < uVar17) {
                    puVar8 = puVar18;
                    if (puVar18 != puVar16) {
                      _memmove(puVar16,puVar14,lVar7);
                      puVar8 = (undefined8 *)param_1[0xd];
                    }
                    if (lVar7 != lVar15) {
                      puVar14 = (undefined8 *)((long)puVar14 + lVar7);
                      lVar15 = (long)puVar16 + (lVar15 - (long)puVar18);
                      puVar18 = puVar8;
                      do {
                        uVar11 = *puVar14;
                        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar14 + 1);
                        *puVar18 = uVar11;
                        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
                        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
                        lVar15 = lVar15 + -0xc;
                        puVar18 = (undefined8 *)((long)puVar18 + 0xc);
                      } while (lVar15 != 0);
                    }
                  }
                  else {
                    _memmove(puVar16,puVar14,lVar15);
                    puVar8 = (undefined8 *)((long)puVar16 + lVar15);
                  }
                  param_1[0xd] = puVar8;
                }
              }
            }
            uVar10 = param_3[5];
            uVar17 = param_1[0x10] - param_1[0xf];
            if (uVar10 < uVar17 || uVar10 - uVar17 == 0) {
              if (uVar10 < uVar17) {
                param_1[0x10] = param_1[0xf] + uVar10;
              }
            }
            else {
              func_0x000107c27d58(param_1 + 0xf,uVar10 - uVar17);
              uVar10 = param_3[5];
            }
            if (uVar10 != 0) {
              _memcpy(param_1[0xf],param_3[6]);
            }
            lVar15 = (long)*(char *)((long)param_1 + 0x5f);
            if (lVar15 < 0) {
              puVar9 = (undefined8 *)param_1[9];
              lVar15 = param_1[10];
            }
            param_1[0x13] = puVar9;
            param_1[0x14] = lVar15;
            uVar10 = param_1[0xd] - param_1[0xc];
            lVar15 = 0;
            if (uVar10 != 0) {
              lVar15 = param_1[0xc];
            }
            lVar3 = param_1[0x10] - param_1[0xf];
            lVar7 = 0;
            if (lVar3 != 0) {
              lVar7 = param_1[0xf];
            }
            *(int *)(param_1 + 0x15) = (int)(uVar10 >> 2) * -0x55555555;
            param_1[0x16] = lVar15;
            param_1[0x17] = lVar3;
            param_1[0x18] = lVar7;
            func_0x00010726f2e4(&puStack_b0);
            return param_1;
          }
          func_0x000109243bf8(&UNK_10f62e73d);
          goto LAB_109fca41c;
        }
        puVar12 = &UNK_10f62e6ee;
      }
      else {
        puVar12 = &UNK_10f62e694;
      }
      func_0x000109243bf8(puVar12);
      goto LAB_109fca41c;
    }
    puVar12 = &UNK_10f62e641;
  }
  func_0x000109243bf8(puVar12);
LAB_109fca41c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109fca420);
  (*pcVar4)();
}



/* Entry: 109fca4f8; end: 109fca503;  */

long FUN_109fca4f8(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 109fca504; end: 109fca52b;  */

void FUN_109fca504(void)

{
  func_0x000109234ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fca52c; end: 109fca587;  */

/* WARNING: Removing unreachable block (ram,0x000109fca578) */

long FUN_109fca52c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 109fca588; end: 109fca6bb;  */

undefined8 * FUN_109fca588(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  
  lVar8 = *param_3;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_FUN_110b97f88;
  param_1[1] = 0;
  uVar6 = *(undefined8 *)(lVar8 + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x10);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar3 = *(undefined8 *)(lVar8 + 0x18);
  uVar14 = *(undefined8 *)(lVar8 + 0x30);
  uVar13 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(lVar8 + 0x38);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar14;
  *(undefined8 *)((long)param_1 + 0x44) = uVar13;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x34) = uVar3;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar8 + 0x24);
  uVar9 = *(ulong *)(lVar8 + 0x14);
  iVar1 = *(int *)(lVar8 + 0x18);
  auVar5[8] = (char)(uVar9 >> 0x20);
  auVar5._0_8_ = uVar9;
  auVar5[9] = (char)(uVar9 >> 0x28);
  auVar5[10] = (char)(uVar9 >> 0x30);
  auVar5[0xb] = (char)(uVar9 >> 0x38);
  auVar10._8_4_ = (int)uVar9;
  auVar10._0_8_ = uVar9 >> 0x20;
  auVar10._12_4_ = auVar5._8_4_;
  auVar10 = NEON_rev64(auVar10,4);
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = auVar10._4_4_;
  auVar12._0_8_ = auVar11._0_8_;
  auVar12._8_4_ = auVar10._12_4_;
  auVar12._12_4_ = auVar10._12_4_;
  *(ulong *)((long)param_1 + 100) = auVar12._8_8_ & 0xffffffff;
  *(ulong *)((long)param_1 + 0x5c) = (ulong)auVar10._4_4_;
  uVar2 = *(undefined4 *)(lVar8 + 0x10);
  if (iVar1 != 2) {
    uVar2 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = uVar2;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  func_0x000109fca640(param_1 + 0x11,param_3);
  return param_1;
}



/* Entry: 109fca6bc; end: 109fca737;  */

long FUN_109fca6bc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0;
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0x3c);
  do {
    uVar3 = (ulong)*(uint *)(param_1 + 0x34);
    lVar2 = param_1 + 0x24;
    func_0x000109fc8e08(lVar2,uVar3,uVar4);
    FUN_109fc8e58();
    lVar5 = lVar5 + lVar2 * (uVar3 & 0xffffffff);
    uVar4 = uVar4 + 1;
  } while (uVar4 < *(uint *)(param_1 + 0x30));
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return lVar5 * (ulong)uVar1;
}



/* Entry: 109fca738; end: 109fca73b;  */

undefined8 * FUN_109fca738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b97f88;
  func_0x0001092350f8(param_1 + 0x11);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fca73c; end: 109fca74f;  */

void FUN_109fca73c(void)

{
  func_0x0001092350bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fca750; end: 109fca953;  */

void FUN_109fca750(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  byte bVar10;
  
  func_0x000109fca880(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x80));
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    puVar7 = *(undefined4 **)(param_1 + 0x1e8);
    piVar9 = *(int **)(param_1 + 0x78);
    bVar10 = *(byte *)(param_1 + 0x208);
    do {
      *puVar7 = (int)uVar4;
      if (uVar3 <= *piVar9 + 1U) {
        uVar3 = *piVar9 + 1U;
      }
      uVar2 = piVar9[3];
      if (uVar2 == 0xffffffff) {
        bVar10 = 1;
        *(undefined1 *)(param_1 + 0x209) = 1;
      }
      else {
        uVar1 = uVar2;
        if (uVar2 < 2) {
          uVar1 = 1;
        }
        uVar4 = uVar4 + uVar1;
        bVar10 = bVar10 | 1 < uVar2;
      }
      piVar9 = piVar9 + 5;
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(param_1 + 0x208) = bVar10;
    if (uVar4 <= (param_2 & 0xffffffff)) goto LAB_109fca7fc;
    func_0x000109243bf8(&UNK_10f62e856);
  }
  uVar4 = 0;
  uVar3 = 0;
LAB_109fca7fc:
  *(ulong *)(param_1 + 0x200) = uVar4;
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  func_0x000109fca8e4(param_1 + 0x90,uVar3);
  if (0 < *(long *)(param_1 + 0xd8)) {
    _memset(*(undefined8 *)(param_1 + 0xd0),0xff);
  }
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((uVar6 < 0xff) &&
         (uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x78) + lVar5),
         uVar8 < *(ulong *)(param_1 + 0xd8))) {
        *(char *)(*(long *)(param_1 + 0xd0) + uVar8) = (char)uVar6;
        uVar4 = *(ulong *)(param_1 + 0x80);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (uVar6 < uVar4);
  }
  return;
}



/* Entry: 109fca954; end: 109fca9cf;  */

long FUN_109fca954(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  puVar1 = *(uint **)(param_1 + 0x78);
  puVar4 = puVar1;
  uVar3 = *(ulong *)(param_1 + 0x80);
  while (puVar2 = puVar4, uVar3 != 0) {
    uVar5 = uVar3 >> 1;
    puVar4 = puVar2 + uVar5 * 5 + 5;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if (param_2 <= puVar2[uVar5 * 5]) {
      puVar4 = puVar2;
      uVar3 = uVar5;
    }
  }
  if ((puVar2 != puVar1 + *(ulong *)(param_1 + 0x80) * 5) && (*puVar2 == param_2)) {
    return ((long)puVar2 - (long)puVar1 >> 2) * -0x3333333333333333;
  }
  return -1;
}



/* Entry: 109fca9d0; end: 109fcaac3;  */

void FUN_109fca9d0(long param_1,uint param_2)

{
  if ((*(ulong *)(param_1 + 0xd8) <= (ulong)param_2) ||
     (*(char *)(*(long *)(param_1 + 0xd0) + (ulong)param_2) == -1)) {
    FUN_109fca954();
  }
  return;
}



/* Entry: 109fcaac4; end: 109fcaaff;  */

void FUN_109fcaac4(ulong param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (param_1 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZnwmSt11align_val_t_110352290)(param_1 << 2,4);
    return;
  }
  puVar5 = (undefined1 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar7 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  if (puVar7 < (undefined1 *)0x41) {
    puVar7 = (undefined1 *)0x40;
  }
  puVar6 = puVar7;
  __ZnwmSt11align_val_t(puVar7,1);
  puVar1 = *(undefined1 **)(puVar5 + 0x40);
  puVar3 = puVar1;
  puVar4 = puVar6;
  for (lVar2 = *(long *)(puVar5 + 0x48); lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (puVar1 != puVar5) {
    __ZdlPvSt11align_val_t(puVar1,1);
  }
  *(undefined1 **)(puVar5 + 0x40) = puVar6;
  *(undefined1 **)(puVar5 + 0x50) = puVar7;
  return;
}



/* Entry: 109fcab00; end: 109fcab77;  */

void FUN_109fcab00(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_2 < (undefined1 *)0x41) {
    param_2 = (undefined1 *)0x40;
  }
  puVar5 = param_2;
  __ZnwmSt11align_val_t(param_2,1);
  puVar1 = *(undefined1 **)(param_1 + 0x40);
  puVar3 = puVar1;
  puVar4 = puVar5;
  for (lVar2 = *(long *)(param_1 + 0x48); lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (puVar1 != param_1) {
    __ZdlPvSt11align_val_t(puVar1,1);
  }
  *(undefined1 **)(param_1 + 0x40) = puVar5;
  *(undefined1 **)(param_1 + 0x50) = param_2;
  return;
}



/* Entry: 109fcab78; end: 109fcac2b;  */

void FUN_109fcab78(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b97fe0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x104);
  lVar1 = param_1[0x110];
  __ZNSt3__15mutex6unlockEv(param_1 + 0x104);
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x102) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x103) < 6)) {
    FUN_109fd19d0(param_1 + 0x102,5,2,&UNK_10f62e8ff,0x8f);
  }
  puStack_28 = param_1 + 0x113;
  FUN_109fcb970(&puStack_28);
  func_0x00010924c278(param_1 + 0x112,0);
  func_0x00010924c250(param_1 + 0x111,0);
  FUN_109fcb9e0(param_1 + 0x104);
  FUN_109fc913c(param_1);
  return;
}



/* Entry: 109fcac2c; end: 109fcac8f;  */

undefined8 FUN_109fcac2c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (*(long *)(param_1 + 0x8a0) - *(long *)(param_1 + 0x898) >> 3) * -0x5555555555555555;
  if (param_2 <= uVar3 && uVar3 - param_2 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x898) + (ulong)param_2 * 0x18);
    lVar1 = *plVar2;
    if ((ulong)param_3 < (ulong)(plVar2[1] - lVar1 >> 3)) {
      return *(undefined8 *)(lVar1 + (ulong)param_3 * 8);
    }
  }
  return 0;
}



/* Entry: 109fcac90; end: 109fcad27;  */

void FUN_109fcac90(ulong param_1,ulong param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  uint uVar6;
  uint extraout_w8_00;
  ulong uVar7;
  uint extraout_w9;
  uint uVar8;
  undefined *puVar9;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar6 = *(uint *)(param_2 + 0x1c);
  uVar7 = (ulong)uVar6;
  if (*(int *)(param_1 + uVar7 * 0x10 + 0x194) == 0) {
    FUN_109fcad28();
    uVar8 = extraout_w9;
    uVar6 = extraout_w8;
LAB_109fcacc8:
    uVar3 = param_2;
    if ((3 < uVar8) ||
       (param_1 = uVar7,
       uVar6 - 0x57 < 0xffffffe4 ||
       (*(uint *)(uVar7 + 0x44) | *(uint *)(&UNK_10e4809c0 + (ulong)(uVar8 - 1) * 4)) != 0xffffffff)
       ) {
      FUN_109fcadd8();
      uVar6 = extraout_w8_00;
      goto LAB_109fcad00;
    }
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x30);
    uVar7 = param_1;
    uVar3 = param_2;
    if (uVar8 != 0) goto LAB_109fcacc8;
  }
  param_2 = param_1;
  uVar6 = *(uint *)(uVar3 + 0x14);
  if ((uVar6 >> 7 & 1) == 0) {
    return;
  }
LAB_109fcad00:
  if (((uVar6 & 0xc) != 0 && (uVar6 & 0xffffff33) == 0) && ((*(byte *)(param_2 + 0x4c) & 1) != 0)) {
    return;
  }
  FUN_109fcaf44();
  func_0x000107c31940(auStack_68,&UNK_10f62e98f);
  ppuVar1 = &PTR_DAT_110ae4700 + (uVar3 & 0xffffffff) * 4;
  if (0x56 < (uint)uVar3) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  puVar9 = *ppuVar1;
  puVar4 = puVar9;
  _strlen(puVar9);
  puVar5 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,puVar9,puVar4)
  ;
  uStack_48 = puVar5[1];
  uStack_50 = *puVar5;
  uStack_40 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  func_0x00010924a434(&uStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fcada4);
  (*pcVar2)();
}



/* Entry: 109fcad28; end: 109fcadd7;  */

void FUN_109fcad28(uint param_1)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c31940(auStack_58,&UNK_10f62e98f);
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)param_1 * 4;
  if (0x56 < param_1) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  puVar5 = *ppuVar1;
  puVar3 = puVar5;
  _strlen(puVar5);
  puVar4 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,puVar5,puVar3)
  ;
  uStack_38 = puVar4[1];
  uStack_40 = *puVar4;
  uStack_30 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  func_0x00010924a434(&uStack_40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fcada4);
  (*pcVar2)();
}



/* Entry: 109fcadd8; end: 109fcaf43;  */

void FUN_109fcadd8(long param_1)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c31940(auStack_98,&UNK_10f62e9ce);
  __ZNSt3__19to_stringEj(&puStack_b0,*(undefined4 *)(param_1 + 0x30));
  if (-1 < (char)bStack_99) {
    uStack_a8 = (ulong)bStack_99;
    puStack_b0 = (undefined1 *)&puStack_b0;
  }
  puVar3 = auStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,puStack_b0,uStack_a8);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f62ea00,0x1b);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x1c) * 4;
  if (0x56 < *(uint *)(param_1 + 0x1c)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  puVar5 = *ppuVar1;
  puVar4 = puVar5;
  _strlen(puVar5);
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar5,puVar4)
  ;
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  func_0x00010924a434(&uStack_40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fcaec8);
  (*pcVar2)();
}



/* Entry: 109fcaf44; end: 109fcb007;  */

void FUN_109fcaf44(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c31940(auStack_58,&UNK_10f62ea1c);
  __ZNSt3__19to_stringEj(&puStack_70,*(undefined4 *)(param_1 + 0x14));
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    puStack_70 = (undefined1 *)&puStack_70;
  }
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,puStack_70,uStack_68);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  func_0x00010924a434(&uStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fcafbc);
  (*pcVar1)();
}



/* Entry: 109fcb008; end: 109fcb1f3;  */

void FUN_109fcb008(ulong *param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  FUN_109fcc138(&puStack_c8,param_2 + 0x104);
  for (puVar8 = puStack_c8; puVar8 != puStack_c0; puVar8 = puVar8 + 2) {
    plVar4 = (long *)puVar8[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_d0 = plVar4;
      if (plVar4 != (long *)0x0) {
        ppuVar9 = (undefined8 **)*puVar8;
        ppuStack_d8 = ppuVar9;
        if (ppuVar9 != (undefined8 **)0x0) {
          uVar1 = *(undefined4 *)(ppuVar9 + 4);
          ppuVar5 = ppuVar9;
          (*(code *)(*ppuVar9)[4])(ppuVar9);
          (*(code *)(*ppuVar9)[5])(ppuVar9);
          FUN_109fcb1f4(param_1,&uStack_80,uVar1,ppuVar5,puVar8);
          FUN_109fcb1f4(param_1 + 5,&uStack_b0,uVar1,ppuVar9,puVar8);
        }
        plVar6 = plVar4 + 1;
        do {
          lVar7 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  ppuStack_d8 = &puStack_c8;
  func_0x000109231998(&ppuStack_d8);
  plVar6 = param_2;
  (**(code **)(*param_2 + 0xf8))();
  plVar4 = (long *)param_1[5];
  if ((long *)param_1[5] <= plVar6) {
    plVar4 = plVar6;
  }
  param_1[5] = (ulong)plVar4;
  (**(code **)(*param_2 + 0xf0))();
  plVar4 = (long *)*param_1;
  if ((long *)*param_1 <= param_2) {
    plVar4 = param_2;
  }
  *param_1 = (ulong)plVar4;
  FUN_109fcbb10(&uStack_b0);
  FUN_109fcbb10(&uStack_80);
  return;
}



/* Entry: 109fcb1f4; end: 109fcb96f;  */

void FUN_109fcb1f4(long *param_1,long *param_2,uint param_3,long param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong unaff_x25;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined4 uStack_84;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1[1] = param_1[1] + 1;
  *param_1 = *param_1 + param_4;
  uVar21 = param_2[1];
  uVar28 = (ulong)param_3;
  if (uVar21 == 0) {
    lVar26 = (param_1[3] - param_1[2] >> 3) * -0x3333333333333333;
  }
  else {
    uVar9 = uVar21 - 1;
    uVar20 = (uint)uVar21;
    if ((uVar21 & uVar9) == 0) {
      uVar17 = (ulong)(uVar20 - 1 & param_3);
    }
    else {
      uVar17 = uVar28;
      if (uVar21 <= uVar28) {
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = param_3 / uVar20;
        }
        uVar17 = (ulong)(param_3 - uVar4 * uVar20);
      }
    }
    plVar18 = *(long **)(*param_2 + uVar17 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_109fcb2f4;
          uVar19 = plVar18[1];
          if (uVar19 != uVar28) break;
          if (*(uint *)(plVar18 + 2) == param_3) {
            lVar26 = plVar18[3];
            goto LAB_109fcb778;
          }
        }
        if ((uVar21 & uVar9) == 0) {
          uVar19 = uVar19 & uVar9;
        }
        else if (uVar21 <= uVar19) {
          uVar5 = 0;
          if (uVar21 != 0) {
            uVar5 = uVar19 / uVar21;
          }
          uVar19 = uVar19 - uVar5 * uVar21;
        }
      } while (uVar19 == uVar17);
    }
LAB_109fcb2f4:
    lVar26 = (param_1[3] - param_1[2] >> 3) * -0x3333333333333333;
    if ((uVar21 & uVar9) == 0) {
      unaff_x25 = (ulong)(uVar20 - 1 & param_3);
    }
    else {
      unaff_x25 = uVar28;
      if (uVar21 <= uVar28) {
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = param_3 / uVar20;
        }
        unaff_x25 = (ulong)(param_3 - uVar4 * uVar20);
      }
    }
    plVar18 = *(long **)(*param_2 + unaff_x25 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_109fcb38c;
          uVar17 = plVar18[1];
          if (uVar17 != uVar28) break;
          if (*(uint *)(plVar18 + 2) == param_3) goto LAB_109fcb620;
        }
        if ((uVar21 & uVar9) == 0) {
          uVar17 = uVar17 & uVar9;
        }
        else if (uVar21 <= uVar17) {
          uVar19 = 0;
          if (uVar21 != 0) {
            uVar19 = uVar17 / uVar21;
          }
          uVar17 = uVar17 - uVar19 * uVar21;
        }
      } while (uVar17 == unaff_x25);
    }
  }
LAB_109fcb38c:
  plVar18 = (long *)0x20;
  __Znwm();
  *plVar18 = 0;
  plVar18[1] = uVar28;
  *(uint *)(plVar18 + 2) = param_3;
  plVar18[3] = lVar26;
  if ((uVar21 == 0) || (*(float *)(param_2 + 4) * (float)uVar21 < (float)(param_2[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar21) {
      uVar9 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar9 = uVar9 | uVar21 << 1;
    uVar17 = (ulong)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
    if (uVar9 <= uVar17) {
      uVar9 = uVar17;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar21 = param_2[1];
    }
    if (uVar21 < uVar9) {
LAB_109fcb430:
      uVar21 = uVar9;
      if (uVar21 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_109fcb934;
      }
      lVar13 = uVar21 << 3;
      __Znwm();
      lVar24 = *param_2;
      *param_2 = lVar13;
      if (lVar24 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_2[1] = uVar21;
      do {
        *(undefined8 *)(*param_2 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar21 != uVar9);
      plVar10 = (long *)param_2[2];
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar17 = uVar21 - 1;
        if ((uVar21 & uVar17) == 0) {
          uVar9 = uVar9 & uVar17;
        }
        else if (uVar21 <= uVar9) {
          uVar19 = 0;
          if (uVar21 != 0) {
            uVar19 = uVar9 / uVar21;
          }
          uVar9 = uVar9 - uVar19 * uVar21;
        }
        *(long **)(*param_2 + uVar9 * 8) = param_2 + 2;
        plVar22 = (long *)*plVar10;
        while (plVar22 != (long *)0x0) {
          uVar19 = plVar22[1];
          if ((uVar21 & uVar17) == 0) {
            uVar19 = uVar19 & uVar17;
          }
          else if (uVar21 <= uVar19) {
            uVar5 = 0;
            if (uVar21 != 0) {
              uVar5 = uVar19 / uVar21;
            }
            uVar19 = uVar19 - uVar5 * uVar21;
          }
          plVar12 = plVar22;
          if (uVar19 != uVar9) {
            lVar13 = *param_2;
            if (*(long *)(lVar13 + uVar19 * 8) == 0) {
              *(long **)(lVar13 + uVar19 * 8) = plVar10;
              uVar9 = uVar19;
            }
            else {
              *plVar10 = *plVar22;
              *plVar22 = **(undefined8 **)(lVar13 + uVar19 * 8);
              **(long **)(lVar13 + uVar19 * 8) = (long)plVar22;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar22 = (long *)*plVar12;
        }
      }
    }
    else if (uVar9 < uVar21) {
      uVar17 = (ulong)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
      if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar17) {
        uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar17) {
        uVar9 = uVar17;
      }
      if (uVar9 < uVar21) {
        if (uVar9 != 0) goto LAB_109fcb430;
        lVar13 = *param_2;
        *param_2 = 0;
        if (lVar13 != 0) {
          __ZdlPv();
        }
        uVar21 = 0;
        param_2[1] = 0;
      }
      else {
        uVar21 = param_2[1];
      }
    }
    if ((uVar21 & uVar21 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar21 - 1U & param_3);
    }
    else {
      unaff_x25 = uVar28;
      if (uVar21 <= uVar28) {
        uVar9 = 0;
        if (uVar21 != 0) {
          uVar9 = uVar28 / uVar21;
        }
        unaff_x25 = uVar28 - uVar9 * uVar21;
      }
    }
  }
  lVar13 = *param_2;
  plVar10 = *(long **)(lVar13 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_2 + 2;
    *plVar18 = *plVar10;
    *plVar10 = (long)plVar18;
    *(long **)(lVar13 + unaff_x25 * 8) = plVar10;
    if (*plVar18 != 0) {
      uVar28 = *(ulong *)(*plVar18 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar28 = uVar28 & uVar21 - 1;
      }
      else if (uVar21 <= uVar28) {
        uVar9 = 0;
        if (uVar21 != 0) {
          uVar9 = uVar28 / uVar21;
        }
        uVar28 = uVar28 - uVar9 * uVar21;
      }
      plVar10 = (long *)(*param_2 + uVar28 * 8);
      goto LAB_109fcb610;
    }
  }
  else {
    *plVar18 = *plVar10;
LAB_109fcb610:
    *plVar10 = (long)plVar18;
  }
  param_2[3] = param_2[3] + 1;
LAB_109fcb620:
  puVar27 = (ulong *)(param_1 + 2);
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 < (undefined8 *)param_1[4]) {
    puVar1[1] = 0;
    *puVar1 = CONCAT44(uStack_84,param_3);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puVar25 = puVar1 + 5;
  }
  else {
    puVar23 = (undefined8 *)*puVar27;
    uVar21 = ((long)puVar1 - (long)puVar23 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar21) {
      FUN_109fcba10();
      goto LAB_109fcb934;
    }
    lVar13 = param_1[4] - (long)puVar23 >> 3;
    uVar28 = lVar13 * -0x6666666666666666;
    if (uVar28 < uVar21 || uVar28 - uVar21 == 0) {
      uVar28 = uVar21;
    }
    if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
      uVar28 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar28) {
      func_0x000104c4f740();
      goto LAB_109fcb934;
    }
    puVar7 = (undefined8 *)(uVar28 * 0x28);
    __Znwm();
    puVar25 = (undefined8 *)((long)puVar7 + ((long)puVar1 - (long)puVar23));
    puVar25[1] = 0;
    *puVar25 = CONCAT44(uStack_84,param_3);
    puVar25[3] = 0;
    puVar25[4] = 0;
    puVar25[2] = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puVar25 = puVar25 + 5;
    puVar11 = puVar23;
    puVar14 = puVar7;
    if (puVar23 != puVar1) {
      do {
        uVar29 = *puVar11;
        puVar14[1] = puVar11[1];
        *puVar14 = uVar29;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[2] = 0;
        uVar29 = puVar11[2];
        puVar14[3] = puVar11[3];
        puVar14[2] = uVar29;
        puVar14[4] = puVar11[4];
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11 = puVar11 + 5;
        puVar14 = puVar14 + 5;
      } while (puVar11 != puVar1);
      do {
        FUN_109fcba24(puVar23 + 2);
        puVar23 = puVar23 + 5;
      } while (puVar23 != puVar1);
      puVar23 = (undefined8 *)*puVar27;
    }
    *puVar27 = (ulong)puVar7;
    param_1[3] = (long)puVar25;
    param_1[4] = (long)(puVar7 + uVar28 * 5);
    if (puVar23 != (undefined8 *)0x0) {
      __ZdlPv(puVar23);
    }
  }
  param_1[3] = (long)puVar25;
  FUN_109fcba24(&uStack_78);
LAB_109fcb778:
  lVar24 = param_1[2] + lVar26 * 0x28;
  *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + param_4;
  lVar26 = *param_5;
  lVar13 = param_5[1];
  if (lVar13 != 0) {
    plVar18 = (long *)(lVar13 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar18 = *(long **)(lVar24 + 0x18);
  if (*(long **)(lVar24 + 0x20) <= plVar18) {
    plVar22 = *(long **)(lVar24 + 0x10);
    uVar21 = ((long)plVar18 - (long)plVar22 >> 3) * -0x5555555555555555 + 1;
    if (uVar21 < 0xaaaaaaaaaaaaaab) {
      lVar15 = (long)*(long **)(lVar24 + 0x20) - (long)plVar22 >> 3;
      uVar28 = lVar15 * 0x5555555555555556;
      if (uVar28 < uVar21 || uVar28 - uVar21 == 0) {
        uVar28 = uVar21;
      }
      if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
        uVar28 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar28 < 0xaaaaaaaaaaaaaab) {
        plVar8 = (long *)(uVar28 * 0x18);
        __Znwm();
        plVar10 = (long *)((long)plVar8 + ((long)plVar18 - (long)plVar22));
        *plVar10 = param_4;
        plVar10[1] = lVar26;
        plVar10[2] = lVar13;
        plVar10 = plVar10 + 3;
        plVar12 = plVar22;
        plVar16 = plVar8;
        if (plVar22 != plVar18) {
          do {
            *plVar16 = *plVar12;
            lVar26 = plVar12[1];
            plVar16[2] = plVar12[2];
            plVar16[1] = lVar26;
            plVar12[1] = 0;
            plVar12[2] = 0;
            plVar12 = plVar12 + 3;
            plVar16 = plVar16 + 3;
          } while (plVar12 != plVar18);
          do {
            if (plVar22[2] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar22 = plVar22 + 3;
          } while (plVar22 != plVar18);
          plVar22 = *(long **)(lVar24 + 0x10);
        }
        *(long **)(lVar24 + 0x10) = plVar8;
        *(long **)(lVar24 + 0x18) = plVar10;
        *(long **)(lVar24 + 0x20) = plVar8 + uVar28 * 3;
        if (plVar22 != (long *)0x0) {
          __ZdlPv(plVar22);
        }
        goto LAB_109fcb8b0;
      }
      func_0x000104c4f740();
    }
    else {
      FUN_109fcba90();
    }
LAB_109fcb934:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109fcb938);
    (*pcVar6)();
  }
  *plVar18 = param_4;
  plVar18[1] = lVar26;
  plVar10 = plVar18 + 3;
  plVar18[2] = lVar13;
LAB_109fcb8b0:
  *(long **)(lVar24 + 0x18) = plVar10;
  return;
}



/* Entry: 109fcb970; end: 109fcb9df;  */

void FUN_109fcb970(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        func_0x00010924f584(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109fcb9e0; end: 109fcba0f;  */

void FUN_109fcb9e0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 109fcba10; end: 109fcba23;  */

void FUN_109fcba10(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        if (*(long *)(lVar4 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109fcba24; end: 109fcba8f;  */

void FUN_109fcba24(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109fcba90; end: 109fcbaa3;  */

void FUN_109fcba90(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar3) {
      do {
        lVar4 = lVar2 + -0x28;
        FUN_109fcba24(lVar2 + -0x18);
        lVar2 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 109fcbaa4; end: 109fcbb0f;  */

void FUN_109fcbaa4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x28;
        FUN_109fcba24(lVar1 + -0x18);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109fcbb10; end: 109fcbb57;  */

long * FUN_109fcbb10(long *param_1)

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



/* Entry: 109fcbb58; end: 109fcbbc7;  */

long * FUN_109fcbb58(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plStack_28;
  
  FUN_109fcbbc8();
  plStack_28 = param_1 + 0xd;
  FUN_109fcbe2c(&plStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 109fcbbc8; end: 109fcbc0b;  */

void FUN_109fcbbc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    func_0x0001092328e4();
  }
  *(long *)(param_1 + 0x70) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109fcbc0c; end: 109fcbe2b;  */

void FUN_109fcbc0c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uStack_60;
  long *plStack_58;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x28);
  lVar9 = *(long *)(param_2 + 0x68);
  lVar10 = *(long *)(param_2 + 0x70) - lVar9;
  lVar13 = lVar10 >> 4;
  if (lVar10 != 0) {
    lVar10 = 0;
    lVar11 = 8;
    do {
      if ((*(long *)(lVar9 + lVar11) != 0) && (*(long *)(*(long *)(lVar9 + lVar11) + 8) == 0)) {
        if (-1 < (int)lVar10) goto LAB_109fcbd84;
        break;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar13 != lVar10);
  }
  plVar7 = *(long **)(param_2 + 0x18);
  if (plVar7 == (long *)0x0) {
    func_0x000104c501e4();
  }
  else {
    (**(code **)(*plVar7 + 0x30))(&uStack_60,plVar7,0x1137e92c0);
    puVar3 = *(undefined8 **)(param_2 + 0x70);
    if (puVar3 < *(undefined8 **)(param_2 + 0x78)) {
      puVar3[1] = plStack_58;
      *puVar3 = uStack_60;
      *(undefined8 **)(param_2 + 0x70) = puVar3 + 2;
LAB_109fcbd7c:
      lVar9 = *(long *)(param_2 + 0x68);
      lVar10 = lVar13;
LAB_109fcbd84:
      (**(code **)(**(long **)(lVar9 + (long)(int)lVar10 * 0x10) + 0x50))();
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x68) + (long)(int)lVar10 * 0x10);
      lVar9 = puVar3[1];
      uVar15 = *puVar3;
      param_1[1] = puVar3[1];
      *param_1 = uVar15;
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      __ZNSt3__15mutex6unlockEv(param_2 + 0x28);
      return;
    }
    lVar9 = *(long *)(param_2 + 0x68);
    lVar10 = (long)puVar3 - lVar9;
    uVar1 = (lVar10 >> 4) + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar8 = (long)*(undefined8 **)(param_2 + 0x78) - lVar9;
      uVar12 = (long)uVar8 >> 3;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar12 = 0xfffffffffffffff;
      }
      if (uVar12 >> 0x3c == 0) {
        lVar11 = uVar12 << 4;
        __Znwm();
        puVar3 = (undefined8 *)(lVar11 + lVar10);
        puVar14 = puVar3 + 2;
        puVar3[1] = plStack_58;
        *puVar3 = uStack_60;
        uStack_60 = 0;
        plStack_58 = (long *)0x0;
        _memcpy(puVar3 + (lVar10 >> 4) * -2,lVar9,lVar10);
        *(undefined8 **)(param_2 + 0x68) = puVar3 + (lVar10 >> 4) * -2;
        *(undefined8 **)(param_2 + 0x70) = puVar14;
        *(ulong *)(param_2 + 0x78) = lVar11 + uVar12 * 0x10;
        if (lVar9 == 0) {
          *(undefined8 **)(param_2 + 0x70) = puVar14;
        }
        else {
          __ZdlPv(lVar9);
          plVar7 = plStack_58;
          *(undefined8 **)(param_2 + 0x70) = puVar14;
          if (plStack_58 != (long *)0x0) {
            plVar2 = plStack_58 + 1;
            do {
              lVar9 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_58 + 0x10))(plStack_58);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
        }
        goto LAB_109fcbd7c;
      }
      func_0x000104c4f740();
    }
    else {
      FUN_109fcbe9c();
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109fcbe04);
  (*pcVar6)();
}



/* Entry: 109fcbe2c; end: 109fcbe9b;  */

void FUN_109fcbe2c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x0001092328e4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109fcbe9c; end: 109fcbeaf;  */

undefined * FUN_109fcbe9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar2 = (long *)(param_2 + 0x18);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    plVar2 = (long *)(puVar1 + 0x18);
  }
  else {
    if (lVar3 == param_2) {
      *(undefined **)(puVar1 + 0x18) = puVar1;
      (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,puVar1);
      return puVar1;
    }
    *(long *)(puVar1 + 0x18) = lVar3;
  }
  *plVar2 = 0;
  return puVar1;
}



/* Entry: 109fcbeb0; end: 109fcbf13;  */

long FUN_109fcbeb0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 109fcbf14; end: 109fcbfdf;  */

ulong FUN_109fcbf14(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  __ZNSt3__15mutex4lockEv();
  uVar3 = (ulong)*(uint *)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x58) == 0xffffffff) {
    uVar3 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
    if (0xfffffffe < (ulong)((long)uVar3 >> 4)) {
      func_0x000109243bf8(&UNK_10f62ea71);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109fcbfc8);
      (*pcVar2)();
    }
    uStack_38 = 0xffffffff;
    uStack_40 = param_2;
    FUN_109fcbfe0(param_1 + 0x40,&uStack_40);
    uVar3 = uVar3 >> 4;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + uVar3 * 0x10);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar1 + 1);
    *puVar1 = param_2;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  __ZNSt3__15mutex6unlockEv(param_1);
  return uVar3;
}



/* Entry: 109fcbfe0; end: 109fcc0a7;  */

void FUN_109fcbfe0(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar9;
    puVar8 = puVar8 + 2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109fcc398();
      if ((int)param_2 != -1) {
        __ZNSt3__15mutex4lockEv();
        if ((((ulong)param_2 & 0xffffffff) < (ulong)(param_1[9] - param_1[8] >> 4)) &&
           (plVar3 = (long *)(param_1[8] + ((ulong)param_2 & 0xffffffff) * 0x10), *plVar3 == param_3
           )) {
          *plVar3 = 0;
          *(int *)(plVar3 + 1) = (int)param_1[0xb];
          *(int *)(param_1 + 0xb) = (int)param_2;
          param_1[0xc] = param_1[0xc] + -1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
        return;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_109fcc3ac();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar8 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 109fcc0a8; end: 109fcc137;  */

void FUN_109fcc0a8(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  
  if (param_2 != 0xffffffff) {
    __ZNSt3__15mutex4lockEv();
    if (((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 4)) &&
       (plVar1 = (long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10), *plVar1 == param_3)) {
      *plVar1 = 0;
      *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = param_2;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
    return;
  }
  return;
}



/* Entry: 109fcc138; end: 109fcc21b;  */

void FUN_109fcc138(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__15mutex4lockEv();
  FUN_109fcc21c(param_1,*(undefined8 *)(param_2 + 0x60));
  plVar2 = *(long **)(param_2 + 0x48);
  for (plVar6 = *(long **)(param_2 + 0x40); plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      lStack_38 = *(long *)(lVar5 + 0x10);
      uStack_40 = *(undefined8 *)(lVar5 + 8);
      if (*(long *)(lVar5 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x000109fcc2b4(param_1,&uStack_40);
      if (lStack_38 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2);
  return;
}



/* Entry: 109fcc21c; end: 109fcc397;  */

/* WARNING: Possible PIC construction at 0x000109fcc298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109fcc378: Changing call to branch */

undefined1  [16] FUN_109fcc21c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 *puStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar3 = (undefined8 **)auStack_60;
  lVar6 = *param_1;
  if (param_2 <= (undefined8 *)(param_1[2] - lVar6 >> 4)) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar8 = param_1[1];
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_109fcc3f4();
    lVar6 = (long)plVar4 + (lVar8 - lVar6);
    lVar8 = (long)param_2 * 2;
    puVar5 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)(lVar6 - (param_1[1] - (long)puVar5));
    _memcpy(param_2);
    lStack_58 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = lVar6;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + lVar8);
    plVar4 = &lStack_58;
    uVar11 = 0x109fcc29c;
    pppuVar10 = (undefined8 ***)&stack0xfffffffffffffff0;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
  }
  else {
    FUN_109fcc3e0();
    ppuVar3 = (undefined8 **)auStack_c0;
    uStack_68 = 0x109fcc2b4;
    pppuVar10 = &ppuStack_70;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 < (undefined8 *)param_1[2]) {
      uVar11 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar11;
      *param_2 = 0;
      param_2[1] = 0;
      param_1[1] = (long)(puVar5 + 2);
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = param_1;
      return auVar13;
    }
    lVar6 = (long)puVar5 - *param_1;
    uVar1 = (lVar6 >> 4) + 1;
    ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
    if (uVar1 >> 0x3c == 0) {
      uVar7 = param_1[2] - *param_1;
      uVar9 = (long)uVar7 >> 3;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar9 = 0xfffffffffffffff;
      }
      plVar4 = param_1;
      plStack_98 = param_1;
      FUN_109fcc3f4();
      puVar2 = (undefined8 *)((long)plVar4 + lVar6);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      *param_2 = 0;
      param_2[1] = 0;
      puVar5 = (undefined8 *)*param_1;
      param_2 = (undefined8 *)((long)puVar2 - (param_1[1] - (long)puVar5));
      _memcpy(param_2);
      lStack_b8 = *param_1;
      *param_1 = (long)param_2;
      param_1[1] = (long)(puVar2 + 2);
      lStack_a0 = param_1[2];
      param_1[2] = (long)(plVar4 + uVar9 * 2);
      plVar4 = &lStack_b8;
      uVar11 = 0x109fcc37c;
      lStack_b0 = lStack_b8;
      lStack_a8 = lStack_b8;
    }
    else {
      puVar5 = param_2;
      FUN_109fcc3e0();
      pcStack_c8 = FUN_109fcc398;
      ppuStack_d0 = pppuVar10;
      func_0x000104c4f6cc(&UNK_10f62eaa4);
      pcStack_d8 = FUN_109fcc3ac;
      ppuStack_100 = &puStack_e0;
      puStack_f0 = param_2;
      plStack_e8 = param_1;
      if ((ulong)puVar5 >> 0x3c == 0) {
        lVar6 = (long)puVar5 << 4;
        puStack_e0 = (undefined1 *)&ppuStack_d0;
        __Znwm(lVar6);
        auVar14._8_8_ = puVar5;
        auVar14._0_8_ = lVar6;
        return auVar14;
      }
      puStack_e0 = (undefined1 *)&ppuStack_d0;
      func_0x000104c4f740();
      pcStack_f8 = FUN_109fcc3e0;
      plVar4 = (long *)&UNK_10f62eaa4;
      func_0x000104c4f6cc();
      ppuVar3 = &puStack_120;
      pcStack_108 = FUN_109fcc3f4;
      pppuVar10 = (undefined8 ***)&puStack_110;
      puStack_120 = param_2;
      plStack_118 = param_1;
      if ((ulong)puVar5 >> 0x3c == 0) {
        lVar6 = (long)puVar5 << 4;
        puStack_110 = &ppuStack_100;
        __Znwm(lVar6);
        auVar15._8_8_ = puVar5;
        auVar15._0_8_ = lVar6;
        return auVar15;
      }
      uVar11 = 0x109fcc428;
      puStack_110 = &ppuStack_100;
      func_0x000104c4f740();
    }
  }
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_2;
  *(long **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined8 ****)((long)ppuVar3 + -0x10) = pppuVar10;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar11;
  func_0x000109fcc458();
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar16._8_8_ = puVar5;
  auVar16._0_8_ = plVar4;
  return auVar16;
}



/* Entry: 109fcc398; end: 109fcc3ab;  */

undefined1  [16] FUN_109fcc398(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  func_0x000104c4f6cc(&UNK_10f62eaa4);
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&UNK_10f62eaa4;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  func_0x000109fcc458();
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 109fcc3ac; end: 109fcc3df;  */

undefined1  [16] FUN_109fcc3ac(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&UNK_10f62eaa4;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  func_0x000109fcc458();
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 109fcc3e0; end: 109fcc3f3;  */

undefined1  [16] FUN_109fcc3e0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f62eaa4;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  func_0x000109fcc458();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 109fcc3f4; end: 109fcc4a7;  */

undefined1  [16] FUN_109fcc3f4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  func_0x000109fcc458();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109fcc4a8; end: 109fcc6bb;  */

void FUN_109fcc4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  char cStack_59;
  undefined8 ******ppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = 0;
  uStack_40 = param_3;
  uStack_38 = param_3;
  _vsnprintf(0,0,param_2,param_3);
  if (iVar2 < 0) {
    return;
  }
  ppppppuStack_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppppppuStack_58,iVar2 + 1,0);
  uVar5 = uStack_50;
  pppppppuVar4 = (undefined8 *******)ppppppuStack_58;
  if (-1 < (long)uStack_48) {
    uVar5 = uStack_48 >> 0x38;
    pppppppuVar4 = &ppppppuStack_58;
  }
  _vsnprintf(pppppppuVar4,uVar5,param_2,uStack_38);
  lVar3 = (long)uStack_48._7_1_;
  if (lVar3 < 0) {
    if ((uStack_50 == 0) || (*(char *)((long)ppppppuStack_58 + (uStack_50 - 1)) != '\0'))
    goto LAB_109fcc574;
    uVar5 = uStack_50 - 1;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_58;
    uStack_50 = uVar5;
  }
  else {
    if ((uStack_48._7_1_ == '\0') || ((&cStack_59)[lVar3] != '\0')) goto LAB_109fcc574;
    uVar5 = lVar3 - 1;
    uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
    pppppppuVar4 = &ppppppuStack_58;
  }
  *(undefined1 *)((long)pppppppuVar4 + uVar5) = 0;
LAB_109fcc574:
  if (pcRam00000001132ff578 == (code *)0x0) {
    if ((bRam00000001137e92c8 & 1) == 0) {
      iVar2 = 0x137e92c8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132ff538,0x100000000);
        ___cxa_guard_release(0x1137e92c8);
      }
    }
    __ZNSt3__15mutex4lockEv(0x1132ff538);
    puVar1 = (undefined8 *)PTR____stderrp_11034bdc8;
    if (1 < (int)param_1 - 3U) {
      puVar1 = (undefined8 *)PTR____stdoutp_11034bdd8;
    }
    uVar6 = *puVar1;
    _fprintf(uVar6,&UNK_10f62eaab);
    _fflush(uVar6);
    __ZNSt3__15mutex6unlockEv(0x1132ff538);
  }
  else {
    pppppppuVar4 = (undefined8 *******)ppppppuStack_58;
    if (-1 < (long)uStack_48) {
      pppppppuVar4 = &ppppppuStack_58;
    }
    (*pcRam00000001132ff578)(param_1,pppppppuVar4);
  }
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppppppuStack_58);
  }
  return;
}



/* Entry: 109fcc6bc; end: 109fcc79f;  */

undefined8 * FUN_109fcc6bc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = param_1;
  FUN_109fc94a0();
  *puVar1 = &PTR_DAT_110b98148;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  FUN_109fcc7a0(puVar1 + 0x10,param_3[1]);
  lVar2 = param_1[0x10];
  lVar3 = param_1[0x11];
  if (lVar3 != lVar2) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(*param_3 + uVar6 * 8);
      if (lVar4 != 0) {
        FUN_109fcc7e4(lVar2 + lVar5,lVar4 + 0x28);
        lVar2 = param_1[0x10];
        lVar3 = param_1[0x11];
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while (uVar6 < (ulong)((lVar3 - lVar2 >> 4) * 0x6db6db6db6db6db7));
  }
  return param_1;
}



/* Entry: 109fcc7a0; end: 109fcc7e3;  */

undefined1 ** FUN_109fcc7a0(undefined1 **param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 **ppuStack_68;
  
  lVar8 = (long)param_1[1] - (long)*param_1 >> 4;
  bVar5 = param_2 < (ulong)(lVar8 * 0x6db6db6db6db6db7);
  uVar3 = param_2 + lVar8 * -0x6db6db6db6db6db7;
  if (bVar5 || uVar3 == 0) {
    if (bVar5) {
      ppuVar7 = (undefined1 **)(*param_1 + param_2 * 0x70);
      ppuVar13 = (undefined1 **)param_1[1];
      ppuVar6 = param_1;
      while (ppuVar4 = ppuVar13, ppuVar4 != ppuVar7) {
        ppuVar13 = ppuVar4 + -0xe;
        if (*(char *)(ppuVar4 + -1) == '\x01') {
          ppuVar4[-3] = (undefined1 *)0x0;
          ppuVar6 = (undefined1 **)ppuVar4[-4];
          if (ppuVar13 != ppuVar6) {
            __ZdlPvSt11align_val_t(ppuVar6,4);
          }
        }
      }
      param_1[1] = (undefined1 *)ppuVar7;
      return ppuVar6;
    }
    return param_1;
  }
  puVar12 = param_1[1];
  puVar16 = param_1[2];
  if ((ulong)(((long)puVar16 - (long)puVar12 >> 4) * 0x6db6db6db6db6db7) < uVar3) {
    lVar8 = (long)puVar12 - (long)*param_1;
    uVar9 = uVar3 + (lVar8 >> 4) * 0x6db6db6db6db6db7;
    if (0x249249249249249 < uVar9) {
      FUN_109fccacc();
LAB_109fccac8:
      func_0x000104c4f740();
      ppuVar6 = (undefined1 **)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar12 = ppuVar6[1];
      puVar16 = ppuVar6[2];
      while (puVar14 = puVar16, puVar14 != puVar12) {
        puVar16 = puVar14 + -0x70;
        ppuVar6[2] = puVar16;
        if (puVar14[-8] == '\x01') {
          *(undefined8 *)(puVar14 + -0x18) = 0;
          if (*(undefined1 **)(puVar14 + -0x20) != puVar16) {
            __ZdlPvSt11align_val_t(*(undefined1 **)(puVar14 + -0x20),4);
            puVar16 = ppuVar6[2];
          }
        }
      }
      if (*ppuVar6 != (undefined1 *)0x0) {
        __ZdlPv();
      }
      return ppuVar6;
    }
    lVar10 = (long)puVar16 - (long)*param_1 >> 4;
    uVar11 = lVar10 * -0x2492492492492492;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
      uVar11 = uVar9;
    }
    if (0x124924924924923 < (ulong)(lVar10 * 0x6db6db6db6db6db7)) {
      uVar11 = 0x249249249249249;
    }
    ppuStack_68 = param_1;
    if (uVar11 == 0) {
      lVar10 = 0;
    }
    else {
      if (0x249249249249249 < uVar11) goto LAB_109fccac8;
      lVar10 = uVar11 * 0x70;
      __Znwm();
    }
    puVar1 = (undefined1 *)(lVar10 + lVar8);
    puVar14 = puVar1;
    do {
      *puVar14 = 0;
      puVar14[0x68] = 0;
      puVar14 = puVar14 + 0x70;
    } while (puVar14 != puVar1 + uVar3 * 0x70);
    puVar14 = *param_1;
    lVar8 = (long)puVar14 - (long)puVar12;
    if (puVar12 != puVar14) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)(puVar1 + lVar8 + lVar15);
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)(puVar2 + 0xd) = 0;
        if (puVar14[lVar15 + 0x68] == '\x01') {
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[10] = puVar2;
          puVar2[0xc] = 4;
          puVar2[0xb] = 0;
          func_0x000109292718(puVar2);
          *(undefined1 *)(puVar2 + 0xd) = 1;
        }
        lVar15 = lVar15 + 0x70;
      } while (puVar14 + lVar15 != puVar12);
      do {
        if (puVar14[0x68] == '\x01') {
          *(undefined8 *)(puVar14 + 0x58) = 0;
          if (puVar14 != *(undefined1 **)(puVar14 + 0x50)) {
            __ZdlPvSt11align_val_t(*(undefined1 **)(puVar14 + 0x50),4);
          }
        }
        puVar14 = puVar14 + 0x70;
      } while (puVar14 != puVar12);
      puVar14 = *param_1;
      puVar16 = param_1[2];
    }
    *param_1 = puVar1 + lVar8;
    param_1[1] = puVar1 + uVar3 * 0x70;
    param_1[2] = (undefined1 *)(lVar10 + uVar11 * 0x70);
    param_1 = &puStack_88;
    puStack_88 = puVar14;
    puStack_80 = puVar14;
    puStack_78 = puVar14;
    puStack_70 = puVar16;
    FUN_109fccae0(param_1);
  }
  else {
    puVar16 = puVar12;
    if (uVar3 != 0) {
      puVar16 = puVar12 + uVar3 * 0x70;
      do {
        *puVar12 = 0;
        puVar12[0x68] = 0;
        puVar12 = puVar12 + 0x70;
      } while (puVar12 != puVar16);
    }
    param_1[1] = puVar16;
  }
  return param_1;
}



/* Entry: 109fcc7e4; end: 109fcc8b7;  */

long FUN_109fcc7e4(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000109291e00();
  }
  else {
    func_0x000109291ca0();
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return param_1;
}



/* Entry: 109fcc8b8; end: 109fccacb;  */

undefined1 ** FUN_109fcc8b8(undefined1 **param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 **ppuStack_68;
  
  puVar7 = param_1[1];
  puVar11 = param_1[2];
  if ((ulong)(((long)puVar11 - (long)puVar7 >> 4) * 0x6db6db6db6db6db7) < param_2) {
    lVar8 = (long)puVar7 - (long)*param_1;
    uVar4 = param_2 + (lVar8 >> 4) * 0x6db6db6db6db6db7;
    if (0x249249249249249 < uVar4) {
      FUN_109fccacc();
LAB_109fccac8:
      func_0x000104c4f740();
      ppuVar3 = (undefined1 **)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar7 = ppuVar3[1];
      puVar11 = ppuVar3[2];
      while (puVar9 = puVar11, puVar9 != puVar7) {
        puVar11 = puVar9 + -0x70;
        ppuVar3[2] = puVar11;
        if (puVar9[-8] == '\x01') {
          *(undefined8 *)(puVar9 + -0x18) = 0;
          if (*(undefined1 **)(puVar9 + -0x20) != puVar11) {
            __ZdlPvSt11align_val_t(*(undefined1 **)(puVar9 + -0x20),4);
            puVar11 = ppuVar3[2];
          }
        }
      }
      if (*ppuVar3 != (undefined1 *)0x0) {
        __ZdlPv();
      }
      return ppuVar3;
    }
    lVar5 = (long)puVar11 - (long)*param_1 >> 4;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x124924924924923 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x249249249249249;
    }
    ppuStack_68 = param_1;
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x249249249249249 < uVar6) goto LAB_109fccac8;
      lVar5 = uVar6 * 0x70;
      __Znwm();
    }
    puVar1 = (undefined1 *)(lVar5 + lVar8);
    puVar9 = puVar1;
    do {
      *puVar9 = 0;
      puVar9[0x68] = 0;
      puVar9 = puVar9 + 0x70;
    } while (puVar9 != puVar1 + param_2 * 0x70);
    puVar9 = *param_1;
    lVar8 = (long)puVar9 - (long)puVar7;
    if (puVar7 != puVar9) {
      lVar10 = 0;
      do {
        puVar2 = (undefined8 *)(puVar1 + lVar8 + lVar10);
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)(puVar2 + 0xd) = 0;
        if (puVar9[lVar10 + 0x68] == '\x01') {
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[10] = puVar2;
          puVar2[0xc] = 4;
          puVar2[0xb] = 0;
          func_0x000109292718(puVar2);
          *(undefined1 *)(puVar2 + 0xd) = 1;
        }
        lVar10 = lVar10 + 0x70;
      } while (puVar9 + lVar10 != puVar7);
      do {
        if (puVar9[0x68] == '\x01') {
          *(undefined8 *)(puVar9 + 0x58) = 0;
          if (puVar9 != *(undefined1 **)(puVar9 + 0x50)) {
            __ZdlPvSt11align_val_t(*(undefined1 **)(puVar9 + 0x50),4);
          }
        }
        puVar9 = puVar9 + 0x70;
      } while (puVar9 != puVar7);
      puVar9 = *param_1;
      puVar11 = param_1[2];
    }
    *param_1 = puVar1 + lVar8;
    param_1[1] = puVar1 + param_2 * 0x70;
    param_1[2] = (undefined1 *)(lVar5 + uVar6 * 0x70);
    param_1 = &puStack_88;
    puStack_88 = puVar9;
    puStack_80 = puVar9;
    puStack_78 = puVar9;
    puStack_70 = puVar11;
    FUN_109fccae0(param_1);
  }
  else {
    puVar11 = puVar7;
    if (param_2 != 0) {
      puVar11 = puVar7 + param_2 * 0x70;
      do {
        *puVar7 = 0;
        puVar7[0x68] = 0;
        puVar7 = puVar7 + 0x70;
      } while (puVar7 != puVar11);
    }
    param_1[1] = puVar11;
  }
  return param_1;
}



/* Entry: 109fccacc; end: 109fccadf;  */

long * FUN_109fccacc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar3[1];
  lVar4 = plVar3[2];
  while (lVar2 = lVar4, lVar2 != lVar1) {
    lVar4 = lVar2 + -0x70;
    plVar3[2] = lVar4;
    if (*(char *)(lVar2 + -8) == '\x01') {
      *(undefined8 *)(lVar2 + -0x18) = 0;
      if (*(long *)(lVar2 + -0x20) != lVar4) {
        __ZdlPvSt11align_val_t(*(long *)(lVar2 + -0x20),4);
        lVar4 = plVar3[2];
      }
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109fccae0; end: 109fccb53;  */

long * FUN_109fccae0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    lVar3 = lVar2 + -0x70;
    param_1[2] = lVar3;
    if (*(char *)(lVar2 + -8) == '\x01') {
      *(undefined8 *)(lVar2 + -0x18) = 0;
      if (*(long *)(lVar2 + -0x20) != lVar3) {
        __ZdlPvSt11align_val_t(*(long *)(lVar2 + -0x20),4);
        lVar3 = param_1[2];
      }
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fccb54; end: 109fccbbf;  */

void FUN_109fccb54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = lVar2, lVar1 != param_2) {
    lVar2 = lVar1 + -0x70;
    if (*(char *)(lVar1 + -8) == '\x01') {
      *(undefined8 *)(lVar1 + -0x18) = 0;
      if (lVar2 != *(long *)(lVar1 + -0x20)) {
        __ZdlPvSt11align_val_t(*(long *)(lVar1 + -0x20),4);
      }
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109fccbc0; end: 109fccc5f;  */

void FUN_109fccbc0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109fccb54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109fccc60; end: 109fccd07;  */

void FUN_109fccc60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  if ((param_1[1] == param_1[2]) || (*(long *)(param_1[2] + -0x10) != param_2)) {
    func_0x00010922d97c(&lStack_30,*param_1);
    if (lStack_30 != 0) {
      func_0x00010925df7c(param_1 + 1,&lStack_30);
    }
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 109fccd08; end: 109fccd9f;  */

undefined8 ** FUN_109fccd08(undefined8 **param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 **ppuStack_38;
  
  puVar8 = *param_1;
  if ((undefined8 *)((long)param_1[2] - (long)puVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x00010925f508();
      pcStack_68 = FUN_109fccda0;
      *param_1 = param_2;
      ppuVar4 = param_1 + 1;
      *ppuVar4 = (undefined8 *)0x32aaaba7;
      param_1[3] = (undefined8 *)0x0;
      param_1[2] = (undefined8 *)0x0;
      param_1[5] = (undefined8 *)0x0;
      param_1[4] = (undefined8 *)0x0;
      param_1[7] = (undefined8 *)0x0;
      param_1[6] = (undefined8 *)0x0;
      param_1[8] = (undefined8 *)0x0;
      ppuVar11 = param_1 + 9;
      *ppuVar11 = (undefined8 *)0x3cb0b1bb;
      ppuVar12 = param_1 + 0x13;
      param_1[0x14] = (undefined8 *)0x0;
      *ppuVar12 = (undefined8 *)0x0;
      param_1[0x16] = (undefined8 *)0x0;
      param_1[0x15] = (undefined8 *)0x0;
      param_1[0x18] = (undefined8 *)0x0;
      param_1[0x17] = (undefined8 *)0x0;
      param_1[0xb] = (undefined8 *)0x0;
      param_1[10] = (undefined8 *)0x0;
      param_1[0xd] = (undefined8 *)0x0;
      param_1[0xc] = (undefined8 *)0x0;
      param_1[0xf] = (undefined8 *)0x0;
      param_1[0xe] = (undefined8 *)0x0;
      param_1[0x11] = (undefined8 *)0x0;
      param_1[0x10] = (undefined8 *)0x0;
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0x19) = 1;
      ppuVar13 = param_1 + 0x1a;
      *ppuVar13 = (undefined8 *)0x0;
      if ((*(byte *)(param_2 + 0xff) & 1) == 0) {
        return param_1;
      }
      plVar5 = *(long **)(param_3 + 0x18);
      ppuStack_e0 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (plVar5 == (long *)0x0) {
        func_0x000104c501e4();
      }
      else {
        puVar9 = (undefined8 *)((ulong)&ppuStack_e0 | 8);
        (**(code **)(*plVar5 + 0x30))(puVar9,plVar5,&UNK_10e480a46);
        uVar6 = 8;
        __Znwm();
        __ZNSt3__115__thread_structC1Ev();
        puVar8 = (undefined8 *)0x20;
        __Znwm();
        *puVar8 = uVar6;
        puVar8[2] = uStack_d8;
        puVar8[1] = ppuStack_e0;
        puVar8[3] = plStack_d0;
        *puVar9 = 0;
        puVar9[1] = 0;
        ppuVar7 = &puStack_c0;
        puStack_b8 = puVar8;
        _pthread_create(ppuVar7,0,FUN_109fcde34,puVar8);
        if ((int)ppuVar7 == 0) {
          puStack_b8 = (undefined8 *)0x0;
          ppuVar7 = &puStack_b8;
          FUN_109fce00c();
          if (*ppuVar13 != (undefined8 *)0x0) {
            __ZSt9terminatev();
            __ZNSt3__115__thread_structD1Ev(uVar6);
            __ZdlPv();
            func_0x000109231908(puVar9);
            __ZNSt3__16threadD1Ev(ppuVar13);
            func_0x000109902338(ppuVar12);
            ppuStack_e0 = param_1 + 0xf;
            FUN_109fcdbcc(&ppuStack_e0);
            __ZNSt3__118condition_variableD1Ev(ppuVar11);
            __ZNSt3__15mutexD1Ev(ppuVar4);
            __Unwind_Resume();
            pcStack_e8 = FUN_109fccfbc;
            ppuStack_110 = ppuVar12;
            ppuStack_108 = ppuVar11;
            ppuStack_100 = ppuVar4;
            ppuStack_f8 = param_1 + 0xf;
            ppuStack_f0 = &puStack_70;
            *(undefined1 *)(ppuVar7 + 0x19) = 0;
            __ZNSt3__118condition_variable10notify_oneEv(ppuVar7 + 9);
            ppuVar4 = ppuVar7 + 0x1a;
            if (*ppuVar4 != (undefined8 *)0x0) {
              __ZNSt3__16thread4joinEv(ppuVar4);
            }
            ppuStack_130 = (undefined8 **)0x0;
            puStack_128 = (undefined8 *)0x0;
            puStack_120 = (undefined8 *)0x0;
            __ZNSt3__15mutex4lockEv(ppuVar7 + 1);
            FUN_109fcdc64(&ppuStack_130);
            ppuVar11 = ppuVar7 + 0xf;
            puStack_128 = ppuVar7[0x10];
            ppuStack_130 = (undefined8 **)*ppuVar11;
            puStack_120 = ppuVar7[0x11];
            ppuVar7[0x10] = (undefined8 *)0x0;
            ppuVar7[0x11] = (undefined8 *)0x0;
            *ppuVar11 = (undefined8 *)0x0;
            __ZNSt3__15mutex6unlockEv(ppuVar7 + 1);
            puStack_118 = (undefined1 *)&ppuStack_130;
            FUN_109fcdbcc(&puStack_118);
            __ZNSt3__16threadD1Ev(ppuVar4);
            func_0x000109902338(ppuVar7 + 0x13);
            ppuStack_130 = ppuVar11;
            FUN_109fcdbcc(&ppuStack_130);
            __ZNSt3__118condition_variableD1Ev(ppuVar7 + 9);
            __ZNSt3__15mutexD1Ev(ppuVar7 + 1);
            return ppuVar7;
          }
          *ppuVar13 = puStack_c0;
          puStack_c0 = (undefined8 *)0x0;
          __ZNSt3__16threadD1Ev(&puStack_c0);
          if (plStack_d0 == (long *)0x0) {
            return param_1;
          }
          plVar5 = plStack_d0 + 1;
          do {
            lVar10 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 != 0) {
            return param_1;
          }
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
          return param_1;
        }
        __ZNSt3__120__throw_system_errorEiPKc();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109fccf3c);
      (*pcVar3)();
    }
    puVar9 = param_1[1];
    ppuVar4 = param_1;
    ppuStack_38 = param_1;
    func_0x00010925f51c();
    puVar8 = (undefined8 *)((long)ppuVar4 + ((long)puVar9 - (long)puVar8));
    puVar9 = (undefined8 *)((long)puVar8 - ((long)param_1[1] - (long)*param_1));
    _memcpy(puVar9);
    puStack_58 = *param_1;
    *param_1 = puVar9;
    param_1[1] = puVar8;
    puStack_40 = param_1[2];
    param_1[2] = ppuVar4 + (long)param_2 * 2;
    param_1 = &puStack_58;
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    func_0x00010925f550(param_1);
  }
  return param_1;
}



/* Entry: 109fccda0; end: 109fccfbb;  */

undefined8 ** FUN_109fccda0(undefined8 **param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  *param_1 = param_2;
  ppuVar9 = param_1 + 1;
  *ppuVar9 = (undefined8 *)0x32aaaba7;
  param_1[3] = (undefined8 *)0x0;
  param_1[2] = (undefined8 *)0x0;
  param_1[5] = (undefined8 *)0x0;
  param_1[4] = (undefined8 *)0x0;
  param_1[7] = (undefined8 *)0x0;
  param_1[6] = (undefined8 *)0x0;
  param_1[8] = (undefined8 *)0x0;
  ppuVar10 = param_1 + 9;
  *ppuVar10 = (undefined8 *)0x3cb0b1bb;
  ppuVar11 = param_1 + 0x13;
  param_1[0x14] = (undefined8 *)0x0;
  *ppuVar11 = (undefined8 *)0x0;
  param_1[0x16] = (undefined8 *)0x0;
  param_1[0x15] = (undefined8 *)0x0;
  param_1[0x18] = (undefined8 *)0x0;
  param_1[0x17] = (undefined8 *)0x0;
  param_1[0xb] = (undefined8 *)0x0;
  param_1[10] = (undefined8 *)0x0;
  param_1[0xd] = (undefined8 *)0x0;
  param_1[0xc] = (undefined8 *)0x0;
  param_1[0xf] = (undefined8 *)0x0;
  param_1[0xe] = (undefined8 *)0x0;
  param_1[0x11] = (undefined8 *)0x0;
  param_1[0x10] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  ppuVar12 = param_1 + 0x1a;
  *ppuVar12 = (undefined8 *)0x0;
  if ((*(byte *)(param_2 + 0xff) & 1) == 0) {
    return param_1;
  }
  plVar4 = *(long **)(param_3 + 0x18);
  ppuStack_80 = param_1;
  if (plVar4 == (long *)0x0) {
    func_0x000104c501e4();
  }
  else {
    puVar13 = (undefined8 *)((ulong)&ppuStack_80 | 8);
    (**(code **)(*plVar4 + 0x30))(puVar13,plVar4,&UNK_10e480a46);
    uVar5 = 8;
    __Znwm();
    __ZNSt3__115__thread_structC1Ev();
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = uVar5;
    puVar6[2] = uStack_78;
    puVar6[1] = ppuStack_80;
    puVar6[3] = plStack_70;
    *puVar13 = 0;
    puVar13[1] = 0;
    ppuVar7 = &puStack_60;
    puStack_58 = puVar6;
    _pthread_create(ppuVar7,0,FUN_109fcde34,puVar6);
    if ((int)ppuVar7 == 0) {
      puStack_58 = (undefined8 *)0x0;
      ppuVar7 = &puStack_58;
      FUN_109fce00c();
      if (*ppuVar12 != (undefined8 *)0x0) {
        __ZSt9terminatev();
        __ZNSt3__115__thread_structD1Ev(uVar5);
        __ZdlPv();
        func_0x000109231908(puVar13);
        __ZNSt3__16threadD1Ev(ppuVar12);
        func_0x000109902338(ppuVar11);
        ppuStack_80 = param_1 + 0xf;
        FUN_109fcdbcc(&ppuStack_80);
        __ZNSt3__118condition_variableD1Ev(ppuVar10);
        __ZNSt3__15mutexD1Ev(ppuVar9);
        __Unwind_Resume();
        pcStack_88 = FUN_109fccfbc;
        ppuStack_b0 = ppuVar11;
        ppuStack_a8 = ppuVar10;
        ppuStack_a0 = ppuVar9;
        ppuStack_98 = param_1 + 0xf;
        puStack_90 = &stack0xfffffffffffffff0;
        *(undefined1 *)(ppuVar7 + 0x19) = 0;
        __ZNSt3__118condition_variable10notify_oneEv(ppuVar7 + 9);
        ppuVar9 = ppuVar7 + 0x1a;
        if (*ppuVar9 != (undefined8 *)0x0) {
          __ZNSt3__16thread4joinEv(ppuVar9);
        }
        ppuStack_d0 = (undefined8 **)0x0;
        puStack_c8 = (undefined8 *)0x0;
        puStack_c0 = (undefined8 *)0x0;
        __ZNSt3__15mutex4lockEv(ppuVar7 + 1);
        FUN_109fcdc64(&ppuStack_d0);
        ppuVar10 = ppuVar7 + 0xf;
        puStack_c8 = ppuVar7[0x10];
        ppuStack_d0 = (undefined8 **)*ppuVar10;
        puStack_c0 = ppuVar7[0x11];
        ppuVar7[0x10] = (undefined8 *)0x0;
        ppuVar7[0x11] = (undefined8 *)0x0;
        *ppuVar10 = (undefined8 *)0x0;
        __ZNSt3__15mutex6unlockEv(ppuVar7 + 1);
        puStack_b8 = (undefined1 *)&ppuStack_d0;
        FUN_109fcdbcc(&puStack_b8);
        __ZNSt3__16threadD1Ev(ppuVar9);
        func_0x000109902338(ppuVar7 + 0x13);
        ppuStack_d0 = ppuVar10;
        FUN_109fcdbcc(&ppuStack_d0);
        __ZNSt3__118condition_variableD1Ev(ppuVar7 + 9);
        __ZNSt3__15mutexD1Ev(ppuVar7 + 1);
        return ppuVar7;
      }
      *ppuVar12 = puStack_60;
      puStack_60 = (undefined8 *)0x0;
      __ZNSt3__16threadD1Ev(&puStack_60);
      if (plStack_70 == (long *)0x0) {
        return param_1;
      }
      plVar4 = plStack_70 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 != 0) {
        return param_1;
      }
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      return param_1;
    }
    __ZNSt3__120__throw_system_errorEiPKc();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109fccf3c);
  (*pcVar3)();
}



/* Entry: 109fccfbc; end: 109fcd08b;  */

long FUN_109fccfbc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  *(undefined1 *)(param_1 + 200) = 0;
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0xd0);
  if (*plVar1 != 0) {
    __ZNSt3__16thread4joinEv(plVar1);
  }
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  FUN_109fcdc64(&puStack_50);
  puVar2 = (undefined8 *)(param_1 + 0x78);
  uStack_48 = *(undefined8 *)(param_1 + 0x80);
  puStack_50 = (undefined8 *)*puVar2;
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *puVar2 = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  puStack_38 = (undefined1 *)&puStack_50;
  FUN_109fcdbcc(&puStack_38);
  __ZNSt3__16threadD1Ev(plVar1);
  func_0x000109902338(param_1 + 0x98);
  puStack_50 = puVar2;
  FUN_109fcdbcc(&puStack_50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 109fcd08c; end: 109fcd473;  */

void FUN_109fcd08c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if (param_3 != 0) {
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    uVar8 = *param_1;
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
      func_0x00010922d97c(&uStack_80,uVar8);
      plStack_68 = plStack_78;
      uStack_70 = uStack_80;
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      uVar8 = *param_1;
    }
    plVar1 = plStack_68;
    uVar6 = uStack_70;
    func_0x00010922d97c(&uStack_a0,uVar8,param_3);
    plVar16 = plStack_98;
    uVar8 = uStack_a0;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    uStack_a8 = 0;
    plStack_b8 = plVar16;
    uStack_b0 = 0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    uStack_c0 = uVar8;
    uStack_d0 = uVar6;
    plStack_c8 = plVar1;
    __ZNSt3__15mutex4lockEv(param_3 + 0x28);
    uVar17 = *(undefined8 *)(param_3 + 0x68);
    __ZNSt3__15mutex6unlockEv(param_3 + 0x28);
    uStack_b0 = uVar17;
    __ZNSt3__15mutex4lockEv(param_1 + 1);
    if (param_1[0x18] == 0) {
      puVar2 = (undefined8 *)param_1[0x10];
      if (puVar2 < (undefined8 *)param_1[0x11]) {
        *puVar2 = uVar6;
        puVar2[1] = plVar1;
        uStack_d0 = 0;
        plStack_c8 = (long *)0x0;
        puVar2[2] = uVar8;
        puVar2[3] = plVar16;
        uStack_c0 = 0;
        plStack_b8 = (long *)0x0;
        puVar2[4] = uStack_b0;
        *(undefined1 *)(puVar2 + 5) = uStack_a8;
        puVar18 = puVar2 + 6;
      }
      else {
        puVar15 = (undefined8 *)param_1[0xf];
        uVar13 = ((long)puVar2 - (long)puVar15 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar13) {
          FUN_109fcdc9c();
LAB_109fcd420:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109fcd424);
          (*pcVar7)();
        }
        lVar10 = (long)param_1[0x11] - (long)puVar15 >> 4;
        uVar14 = lVar10 * 0x5555555555555556;
        if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
          uVar14 = uVar13;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar14 = 0x555555555555555;
        }
        if (0x555555555555555 < uVar14) {
          func_0x000104c4f740();
          goto LAB_109fcd420;
        }
        puVar9 = (undefined8 *)(uVar14 * 0x30);
        __Znwm();
        puVar12 = (undefined8 *)((long)puVar9 + ((long)puVar2 - (long)puVar15));
        *puVar12 = uVar6;
        puVar12[1] = plVar1;
        uStack_d0 = 0;
        plStack_c8 = (long *)0x0;
        puVar12[2] = uVar8;
        puVar12[3] = plVar16;
        uStack_c0 = 0;
        plStack_b8 = (long *)0x0;
        puVar12[4] = uStack_b0;
        puVar18 = puVar12 + 6;
        *(undefined1 *)(puVar12 + 5) = uStack_a8;
        puVar11 = puVar9;
        puVar12 = puVar15;
        if (puVar15 != puVar2) {
          do {
            uVar8 = *puVar12;
            puVar11[1] = puVar12[1];
            *puVar11 = uVar8;
            *puVar12 = 0;
            puVar12[1] = 0;
            uVar8 = puVar12[2];
            puVar11[3] = puVar12[3];
            puVar11[2] = uVar8;
            puVar12[2] = 0;
            puVar12[3] = 0;
            uVar8 = puVar12[4];
            *(undefined1 *)(puVar11 + 5) = *(undefined1 *)(puVar12 + 5);
            puVar11[4] = uVar8;
            puVar12 = puVar12 + 6;
            puVar11 = puVar11 + 6;
          } while (puVar12 != puVar2);
          do {
            func_0x0001092328e4(puVar15 + 2);
            func_0x000109231d98(puVar15);
            puVar15 = puVar15 + 6;
          } while (puVar15 != puVar2);
          puVar15 = (undefined8 *)param_1[0xf];
        }
        param_1[0xf] = puVar9;
        param_1[0x10] = puVar18;
        param_1[0x11] = puVar9 + uVar14 * 6;
        if (puVar15 != (undefined8 *)0x0) {
          __ZdlPv(puVar15);
        }
      }
      plVar16 = (long *)0x0;
      param_1[0x10] = puVar18;
    }
    else {
      lVar10 = param_1[0x18] + -1;
      uVar13 = param_1[0x17] + lVar10;
      uVar3 = *(uint *)(*(long *)(param_1[0x14] + (uVar13 >> 10) * 8) + (uVar13 & 0x3ff) * 4);
      param_1[0x18] = lVar10;
      func_0x0001099024a8(param_1 + 0x13,1);
      lVar10 = param_1[0xf] + (ulong)uVar3 * 0x30;
      FUN_109fcd474(lVar10,&uStack_d0);
      func_0x000109fcd4d8(lVar10 + 0x10,&uStack_c0);
      *(undefined1 *)(lVar10 + 0x28) = uStack_a8;
      *(undefined8 *)(lVar10 + 0x20) = uStack_b0;
      plVar16 = plStack_b8;
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 1);
    __ZNSt3__118condition_variable10notify_oneEv(param_1 + 9);
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
  }
  return;
}



/* Entry: 109fcd474; end: 109fcd53b;  */

undefined8 * FUN_109fcd474(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109fcd53c; end: 109fcd633;  */

void FUN_109fcd53c(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lStack_40;
  char cStack_38;
  
  lVar4 = param_1 + 8;
  cStack_38 = '\x01';
  lStack_40 = lVar4;
  __ZNSt3__15mutex4lockEv(lVar4);
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != lVar2) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + lVar4 + 0x10);
      if (((plVar1 != (long *)0x0) && ((*(byte *)(lVar2 + lVar4 + 0x28) & 1) == 0)) &&
         ((**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(lVar2 + lVar4 + 0x20)),
         (int)plVar1 == 1)) {
        FUN_109fcd634(param_1,uVar3,&lStack_40);
      }
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0x78);
      lVar4 = lVar4 + 0x30;
    } while (uVar3 < (ulong)((*(long *)(param_1 + 0x80) - lVar2 >> 4) * -0x5555555555555555));
    lVar4 = lStack_40;
    if (cStack_38 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar4);
  return;
}


