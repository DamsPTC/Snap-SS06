/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c5d7a8; end: 109c5d7bb;  */

void FUN_109c5d7a8(void)

{
  FUN_109c5dbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5d7bc; end: 109c5dbe3;  */

void FUN_109c5d7bc(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [88];
  uint auStack_178 [3];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*param_2;
  puVar10 = (undefined *)*plVar13;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if (*(int *)(puVar10 + 8) == 0) {
    iVar15 = 0;
    iVar17 = 0;
  }
  else {
    _memcpy(&uStack_98,puVar10 + 0xc,(long)*(int *)(puVar10 + 8) << 2);
    iVar17 = (int)uStack_98;
    iVar15 = uStack_98._4_4_;
  }
  uStack_fc = *(undefined4 *)(param_1 + 0x94);
  uStack_108 = 4;
  uStack_f8 = 1;
  iStack_104 = iVar17;
  iStack_100 = iVar15;
  if ((*(int *)(puVar10 + 0x3c) == 0) && (*(int *)(plVar13[2] + 0x3c) == 0)) {
    FUN_109c182f4(param_3,2);
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (&puStack_f0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_108,1);
    func_0x000109c18360(*param_3,&puStack_f0);
    FUN_109c180ec(&puStack_f0);
    plStack_1e8 = (long *)*param_3;
    lVar11 = *(long *)(*plVar13 + 0x40);
    lVar14 = *(long *)(plVar13[2] + 0x40);
    lVar16 = *(long *)(*plStack_1e8 + 0x40);
    iVar2 = *(int *)(param_1 + 0x90);
    iVar3 = *(int *)(param_1 + 0x94);
    uStack_114 = 0;
    uStack_10c = 0;
    uStack_120 = 2;
    plStack_1e0 = plVar13;
    iStack_11c = iVar15;
    iStack_118 = iVar3;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (&puStack_f0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_120,1);
    func_0x000109c18360(*param_3 + 0x10,&puStack_f0);
    uVar5 = iVar3 * iVar15;
    FUN_109c180ec(&puStack_f0);
    lStack_1d8 = *param_3;
    if (iVar17 < 1) {
      lVar11 = (long)(int)uVar5;
    }
    else {
      lStack_1f0 = (long)(int)uVar5;
      uVar6 = iVar2 * iVar15;
      do {
        auStack_178[2] = *(int *)(param_1 + 0x90);
        uStack_16c = 0;
        uStack_168 = 0;
        uStack_164 = 0;
        auStack_178[1] = iVar15;
        auStack_178[0] = 2;
        FUN_109c0ffb0(&puStack_f0,auStack_178,lVar11,0);
        FUN_109c0ffb0(auStack_178,&uStack_120,lVar16,0);
        FUN_109c0ffb0(auStack_1d0,&uStack_120,lVar14,0);
        if (*(char *)(param_1 + 200) == '\x01') {
          uVar9 = **(undefined8 **)(param_1 + 0xd0);
        }
        else {
          uVar9 = 0;
        }
        uStack_200 = iVar15 == 1;
        uStack_1fc = **(undefined4 **)(param_1 + 0xe8);
        FUN_109c37ccc(&puStack_f0,**(undefined8 **)(param_1 + 0x98),auStack_1d0,
                      **(undefined8 **)(param_1 + 0xb0),*(undefined8 *)(lStack_1d8 + 0x10),
                      auStack_178,*(undefined8 *)(param_1 + 0x68),uVar9);
        lVar1 = lVar16 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
        FUN_109c10e9c(auStack_1d0);
        FUN_109c10e9c(auStack_178);
        FUN_109c10e9c(&puStack_f0);
        lVar11 = lVar11 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
        iVar17 = iVar17 + -1;
        lVar14 = lVar16;
        lVar16 = lVar1;
      } while (iVar17 != 0);
      lVar14 = lVar1 + lStack_1f0 * -4;
      lVar11 = lStack_1f0;
    }
    lVar16 = lStack_1d8;
    _memcpy(*(undefined8 *)(*(long *)(lStack_1d8 + 0x10) + 0x40),lVar14,lVar11 << 2);
    uStack_16c = *(undefined4 *)(param_1 + 0x94);
    auStack_178[0] = 4;
    auStack_178[1] = 1;
    uStack_168 = 1;
    uStack_164 = 0;
    lVar11 = *(long *)(lVar16 + 0x10);
    puVar12 = (uint *)(lVar11 + 8);
    uVar5 = *puVar12 & ((int)*puVar12 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar17 = 0xf5749aa;
    auStack_178[2] = iVar15;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar11 + 0xc,uVar5);
    puVar10 = &UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)auStack_178 | 4,4);
    uStack_e0 = iVar17 == (int)puVar10;
    puStack_f0 = &UNK_10f574cf1;
    uStack_e8 = 0xf;
    puStack_d8 = &UNK_10f574d01;
    uStack_d0 = 0xe;
    ppuVar7 = &puStack_f0;
    FUN_10959b640();
    if ((puVar12 != auStack_178) && (iVar17 == (int)puVar10)) {
      uVar5 = auStack_178[0];
      if (auStack_178[0] != 0) {
        ppuVar7 = (undefined **)(lVar11 + 0xc);
        _memmove(ppuVar7,(ulong)auStack_178 | 4,(long)(int)auStack_178[0] << 2);
      }
      *puVar12 = uVar5;
    }
    uVar4 = *(undefined4 *)(*plStack_1e0 + 0x3c);
    *(undefined4 *)(*plStack_1e8 + 0x3c) = uVar4;
    *(undefined4 *)(*(long *)(lStack_1d8 + 0x10) + 0x3c) = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  else {
    ppuVar7 = (undefined **)&UNK_10f5a5f13;
    func_0x000105688514();
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_f0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_208 = FUN_109c5dbe4;
  *ppuVar8 = (undefined *)&PTR_DAT_110b2e690;
  puStack_220 = puVar10;
  ppuStack_218 = ppuVar7;
  puStack_210 = &stack0xfffffffffffffff0;
  if (ppuVar8[0x1d] != (undefined *)0x0) {
    ppuVar8[0x1e] = ppuVar8[0x1d];
    __ZdlPv();
  }
  ppuStack_228 = ppuVar8 + 0x1a;
  FUN_109c2070c(&ppuStack_228);
  ppuStack_228 = ppuVar8 + 0x16;
  FUN_109c2070c(&ppuStack_228);
  ppuStack_228 = ppuVar8 + 0x13;
  FUN_109c2070c(&ppuStack_228);
  FUN_109c21610(ppuVar8);
  return;
}



/* Entry: 109c5dbe4; end: 109c5dc5b;  */

void FUN_109c5dbe4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b2e690;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1a;
  FUN_109c2070c(&puStack_28);
  puStack_28 = param_1 + 0x16;
  FUN_109c2070c(&puStack_28);
  puStack_28 = param_1 + 0x13;
  FUN_109c2070c(&puStack_28);
  FUN_109c21610(param_1);
  return;
}



/* Entry: 109c5dc5c; end: 109c5dd2b;  */

undefined8 * FUN_109c5dc5c(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e6d0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f46);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5dd2c; end: 109c5dd2f;  */

undefined8 * FUN_109c5dd2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5dd30; end: 109c5dd43;  */

void FUN_109c5dd30(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5dd44; end: 109c5ded3;  */

undefined8 * FUN_109c5dd44(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  float *pfVar7;
  float *pfVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  float *pfStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint auStack_b8 [6];
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  puVar1 = (uint *)(*plVar9 + 8);
  auStack_b8[0] = 0;
  auStack_b8[1] = 0;
  auStack_b8[2] = 0;
  auStack_b8[3] = 0;
  auStack_b8[4] = 0;
  auStack_b8[5] = 0;
  if (puVar1 != auStack_b8) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      _memmove((ulong)auStack_b8 | 4,*plVar9 + 0xc,(long)(int)uVar3 << 2);
    }
    auStack_b8[0] = uVar3;
  }
  FUN_109c182f4(param_3,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
            (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),auStack_b8,1);
  func_0x000109c18360(*param_3,auStack_a0);
  FUN_109c180ec(auStack_a0);
  plVar6 = (long *)*param_3;
  pfVar7 = *(float **)(*plVar9 + 0x40);
  puVar10 = *(undefined4 **)(plVar9[2] + 0x40);
  puVar11 = *(undefined4 **)(plVar9[4] + 0x40);
  puVar12 = *(undefined4 **)(*plVar6 + 0x40);
  uVar3 = auStack_b8[0] & ((int)auStack_b8[0] >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar4 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)auStack_b8 | 4,uVar3);
  pfVar8 = pfVar7;
  if (0 < (int)puVar4) {
    do {
      pfVar7 = pfVar8 + 1;
      puVar2 = puVar11;
      if (*pfVar8 != 0.0) {
        puVar2 = puVar10;
      }
      *puVar12 = *puVar2;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      uVar3 = (int)puVar4 - 1;
      puVar4 = (undefined8 *)(ulong)uVar3;
      pfVar8 = pfVar7;
      puVar12 = puVar12 + 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(*plVar6 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_a0);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_109c5ded4;
  *(undefined8 *)((long)puVar5 + 0x59) = 0;
  *(undefined8 *)((long)puVar5 + 0x51) = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *(undefined2 *)((long)puVar5 + 0x61) = 1;
  *(undefined1 *)((long)puVar5 + 99) = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0x3f800000;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined1 *)((long)puVar5 + 0x84) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((long)puVar5 + 0x8c) = 0;
  *puVar5 = &PTR_FUN_110b2e710;
  pfStack_e0 = pfVar7;
  puStack_d8 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_f8,&UNK_10f5a5f51);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + 6,auStack_f8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  return puVar5;
}



/* Entry: 109c5ded4; end: 109c5dfa3;  */

undefined8 * FUN_109c5ded4(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e710;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f51);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5dfa4; end: 109c5dfa7;  */

undefined8 * FUN_109c5dfa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5dfa8; end: 109c5dfbb;  */

void FUN_109c5dfa8(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5dfbc; end: 109c5e0eb;  */

undefined8 * FUN_109c5dfbc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_94 = *(int *)(*(long *)*param_2 + 8);
  uStack_90 = 0;
  uStack_88 = 0;
  iStack_98 = 1;
  FUN_109c182f4(param_3,1);
  plVar8 = (long *)*param_3;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
            (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&iStack_98,4);
  func_0x000109c18360(plVar8,auStack_80);
  puVar2 = auStack_80;
  FUN_109c180ec();
  lVar4 = *plVar8;
  if ((0 < iStack_98) && (0 < iStack_94)) {
    lVar5 = 0;
    lVar6 = *(long *)*param_2;
    lVar7 = *(long *)(lVar4 + 0x40);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = *(undefined4 *)(lVar6 + 0xc + lVar5 * 4);
      lVar5 = lVar5 + 1;
      iVar1 = iStack_94;
      if (iStack_98 < 1) {
        iVar1 = -1;
      }
    } while (lVar5 < iVar1);
  }
  *(undefined4 *)(lVar4 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_109c5e0ec;
  plStack_c0 = plVar8;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x11] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *(undefined1 *)((long)puVar3 + 0x61) = 1;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0x3f800000;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  *puVar3 = &PTR_FUN_110b2e750;
  func_0x000107c31940(auStack_d8,&UNK_10f5a5f57);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar3 + 6,auStack_d8);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  return puVar3;
}



/* Entry: 109c5e0ec; end: 109c5e1b7;  */

undefined8 * FUN_109c5e0ec(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e750;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f57);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5e1b8; end: 109c5e1bb;  */

undefined8 * FUN_109c5e1b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5e1bc; end: 109c5e1cf;  */

void FUN_109c5e1bc(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5e1d0; end: 109c5e293;  */

void FUN_109c5e1d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_109c182f4(param_3,1);
  lVar4 = *(long *)*param_2;
  FUN_109c24268();
  plVar5 = (long *)0x20;
  lStack_30 = lVar4;
  __Znwm();
  *plVar5 = (long)&PTR_FUN_110afd968;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = lVar4;
  plStack_28 = plVar5;
  FUN_109c1e9b8(*param_3,&lStack_30);
  plVar5 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 109c5e294; end: 109c5e383;  */

undefined8 * FUN_109c5e294(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e790;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5f64);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c5e384; end: 109c5e3bf;  */

undefined8 * FUN_109c5e384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e790;
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5e3c0; end: 109c5e3c3;  */

undefined8 * FUN_109c5e3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e790;
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5e3c4; end: 109c5e3d7;  */

void FUN_109c5e3c4(void)

{
  FUN_109c5e384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5e3d8; end: 109c5e4b3;  */

void FUN_109c5e3d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)*param_2;
  if (*(int *)(lVar7 + 0x3c) == 0) {
    iVar6 = *(int *)(lVar7 + 8) + -1;
  }
  else {
    iVar6 = 1;
  }
  FUN_109c15794(lVar7,iVar6,param_1 + 0x90,param_3,param_1 + 0x68);
  plVar2 = (long *)param_3[1];
  for (plVar8 = (long *)*param_3; plVar8 != plVar2; plVar8 = plVar8 + 2) {
    lVar7 = *plVar8;
    plVar3 = (long *)plVar8[1];
    if (plVar3 == (long *)0x0) {
      *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
    }
    else {
      plVar1 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 109c5e4b4; end: 109c5e5bb;  */

undefined8 * FUN_109c5e4b4(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e7d0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f6a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5e5bc; end: 109c5e60b;  */

undefined8 * FUN_109c5e5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e7d0;
  FUN_10959b818(param_1 + 0x1a);
  FUN_10959b818(param_1 + 0x18);
  FUN_10959b818(param_1 + 0x16);
  FUN_10959b818(param_1 + 0x14);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5e60c; end: 109c5e60f;  */

undefined8 * FUN_109c5e60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e7d0;
  FUN_10959b818(param_1 + 0x1a);
  FUN_10959b818(param_1 + 0x18);
  FUN_10959b818(param_1 + 0x16);
  FUN_10959b818(param_1 + 0x14);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5e610; end: 109c5e623;  */

void FUN_109c5e610(void)

{
  FUN_109c5e5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5e624; end: 109c5e827;  */

void FUN_109c5e624(long param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  long lStack_50;
  long *plStack_48;
  
  FUN_109c182f4(param_3,1);
  plVar4 = (long *)*param_2;
  cVar1 = *(char *)(*plVar4 + 0x48);
  if (cVar1 == '\x01') {
    pcVar3 = FUN_109c5eb24;
    pcVar7 = FUN_109c5e828;
  }
  else {
    if (cVar1 != '\x04') {
      FUN_109c129d4(auStack_68,cVar1);
      FUN_10928a5e0(&lStack_50,&UNK_10f5a3e0d,auStack_68);
      func_0x000105687ee0(&lStack_50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109c5e7e4);
      (*pcVar3)();
    }
    pcVar3 = FUN_109c5ef54;
    pcVar7 = FUN_109c5ec58;
  }
  uVar9 = param_2[1] - (long)plVar4;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (uVar9 < 0x21) {
      (*pcVar7)(plVar4,param_1 + 0xa0,param_1 + 0xb0,param_1 + 0xc0,*(undefined4 *)(param_1 + 0x94),
                *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),*param_3,
                *(undefined8 *)(param_1 + 0x68));
    }
    else {
      if (uVar9 == 0x40) {
        plStack_48 = (long *)plVar4[7];
        lStack_50 = plVar4[6];
        if (plVar4[7] != 0) {
          plVar4 = (long *)(plVar4[7] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = (long *)*param_2;
        }
      }
      else {
        lStack_50 = 0;
        plStack_48 = (long *)0x0;
      }
      (*pcVar7)(plVar4,plVar4 + 2,plVar4 + 4,&lStack_50,*(undefined4 *)(param_1 + 0x94),
                *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),*param_3,
                *(undefined8 *)(param_1 + 0x68));
      plVar4 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  else {
    if (uVar9 == 0x30) {
      plVar5 = plVar4 + 2;
      plVar6 = plVar4 + 4;
    }
    else {
      plVar5 = (long *)(param_1 + 0xa0);
      plVar6 = (long *)(param_1 + 0xd0);
    }
    (*pcVar3)(plVar4,plVar5,plVar6,*param_3,*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  return;
}



/* Entry: 109c5e828; end: 109c5eb23;  */

void FUN_109c5e828(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,long *param_8,undefined8 *param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  bool bVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  int iVar47;
  ulong uVar48;
  undefined8 uStack_458;
  undefined8 uStack_450;
  uint uStack_448;
  ulong uStack_440;
  undefined8 *puStack_438;
  long *plStack_430;
  long *plStack_428;
  long lStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  uint *puStack_400;
  uint *puStack_3f8;
  undefined1 ****ppppuStack_3f0;
  code *pcStack_3e8;
  int aiStack_3d8 [12];
  uint auStack_3a8 [6];
  undefined1 auStack_390 [72];
  long lStack_348;
  long *plStack_340;
  uint *puStack_338;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  long alStack_318 [2];
  undefined4 uStack_308;
  uint auStack_300 [6];
  uint auStack_2e8 [6];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  uint *puStack_2b0;
  undefined1 auStack_2a8 [72];
  long lStack_260;
  ulong uStack_250;
  undefined8 *puStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  uint *puStack_210;
  long *plStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1f0;
  int aiStack_1e8 [6];
  long alStack_1d0 [2];
  undefined4 uStack_1c0;
  long alStack_1b8 [2];
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [72];
  long lStack_158;
  long *plStack_150;
  uint *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long alStack_128 [2];
  undefined4 uStack_118;
  uint auStack_110 [6];
  uint auStack_f8 [6];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint *puStack_c0;
  undefined1 auStack_b8 [72];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar36 = *(uint *)(*param_1 + 8);
  uVar48 = (ulong)uVar36;
  lStack_c8 = *param_4;
  puStack_c0 = (uint *)param_4[1];
  if (puStack_c0 != (uint *)0x0) {
    puVar15 = puStack_c0 + 2;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar15,0x10);
      if (bVar13) {
        *(long *)puVar15 = *(long *)puVar15 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  uVar33 = param_6;
  uVar34 = param_7;
  plVar24 = param_8;
  if (lStack_c8 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = CONCAT44(uVar36,1);
    (*(code *)**(undefined8 **)param_9[2])(auStack_b8,(undefined8 *)param_9[2],&uStack_e0,4);
    func_0x000109c18360(&lStack_c8,auStack_b8);
    FUN_109c180ec(auStack_b8);
    lVar46 = *(long *)(lStack_c8 + 0x40);
    if (0 < (int)uVar36) {
      _memset_pattern16(lVar46,&UNK_10dfd94a0,uVar48 << 2);
    }
  }
  else {
    lVar46 = *(long *)(lStack_c8 + 0x40);
  }
  auStack_f8[0] = 0;
  auStack_f8[1] = 0;
  auStack_f8[2] = 0;
  auStack_f8[3] = 0;
  auStack_f8[4] = 0;
  auStack_110[0] = 0;
  auStack_110[1] = 0;
  auStack_110[2] = 0;
  auStack_110[3] = 0;
  auStack_110[4] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_118 = 0;
  lVar35 = *(long *)(*param_2 + 0x40);
  lVar37 = *(long *)(*param_3 + 0x40);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lVar38 = *param_1;
  if (0 < (int)uVar36) {
    uVar39 = 0;
    do {
      iVar10 = *(int *)(lVar46 + uVar39 * 4);
      *(int *)((long)alStack_128 + uVar39 * 4) = iVar10;
      iVar11 = *(int *)(lVar35 + uVar39 * 4);
      uVar43 = *(uint *)(lVar38 + 0xc + uVar39 * 4);
      uVar36 = (uVar43 & iVar11 >> 0x1f) + iVar11;
      uVar27 = -(uint)(iVar10 < 1);
      uVar41 = uVar43 - (iVar10 < 1);
      uVar4 = uVar41;
      if ((int)uVar36 <= (int)uVar41) {
        uVar4 = uVar36;
      }
      uVar19 = uVar27;
      if ((int)uVar27 <= (int)uVar36) {
        uVar19 = uVar4;
      }
      auStack_f8[uVar39] = uVar19;
      iVar11 = *(int *)(lVar37 + uVar39 * 4);
      uVar36 = uVar43 & iVar11 >> 0x1f;
      uVar34 = (ulong)uVar36;
      uVar36 = uVar36 + iVar11;
      if ((int)uVar36 <= (int)uVar41) {
        uVar41 = uVar36;
      }
      uVar33 = (ulong)uVar41;
      if ((int)uVar27 <= (int)uVar36) {
        uVar27 = uVar41;
      }
      auStack_110[uVar39] = uVar27;
      uVar36 = 1 << (ulong)((uint)uVar39 & 0x1f);
      if ((uVar36 & (uint)param_7) == 0) {
        if ((uVar36 & (uint)param_5) != 0) {
          uVar19 = uVar43 - 1;
          if (0 < iVar10) {
            uVar19 = 0;
          }
          auStack_f8[uVar39] = uVar19;
        }
        if ((uVar36 & (uint)param_6) != 0) {
          if (iVar10 < 1) {
            uVar43 = 0xffffffff;
          }
          auStack_110[uVar39] = uVar43;
          uVar27 = uVar43;
        }
        iVar11 = iVar10 + -1;
        if (iVar10 < 1) {
          iVar11 = iVar10 + 1;
        }
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)((iVar11 - uVar19) + uVar27) / iVar10;
        }
        lVar21 = (long)(int)uStack_e0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
        *(int *)(((ulong)&uStack_e0 | 4) + lVar21 * 4) = iVar2;
      }
      else {
        auStack_110[uVar39] = uVar19 + 1;
      }
      uVar39 = uVar39 + 1;
    } while (uVar48 != uVar39);
  }
  (*(code *)**(undefined8 **)*param_9)
            (auStack_b8,(undefined8 *)*param_9,&uStack_e0,*(undefined1 *)(lVar38 + 0x48));
  func_0x000109c18360(param_8,auStack_b8);
  FUN_109c180ec(auStack_b8);
  plVar28 = (long *)*param_1;
  puVar30 = *(undefined8 **)(*param_8 + 0x40);
  puVar15 = auStack_f8;
  puVar18 = auStack_110;
  plVar23 = alStack_128;
  FUN_109c5f088();
  puVar16 = puStack_c0;
  if (puStack_c0 != (uint *)0x0) {
    puVar1 = puStack_c0 + 2;
    do {
      lVar35 = *(long *)puVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(long *)puVar1 = lVar35 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*(long *)puStack_c0 + 0x10))(puStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar15 = puVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_b8);
  FUN_10959b818(&lStack_c8);
  puVar16 = puVar15;
  __Unwind_Resume();
  plStack_150 = param_1;
  puStack_148 = puVar15;
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_109c5eb24;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_1b8[0] = 0;
  alStack_1b8[1] = 0;
  uStack_1a8 = 0;
  alStack_1d0[0] = 0;
  alStack_1d0[1] = 0;
  uStack_1c0 = 0;
  aiStack_1e8[2] = 0;
  aiStack_1e8[3] = 0;
  aiStack_1e8[4] = 0;
  aiStack_1e8[5] = 0;
  aiStack_1e8[0] = 0;
  aiStack_1e8[1] = 0;
  lVar35 = *(long *)puVar16;
  uVar36 = *(uint *)(lVar35 + 8);
  uVar39 = (ulong)uVar36;
  if (0 < (int)uVar36) {
    piVar25 = *(int **)(*(long *)puVar18 + 0x40);
    piVar22 = *(int **)(*plVar23 + 0x40);
    plVar23 = alStack_1d0;
    plVar20 = alStack_1b8;
    do {
      iVar10 = *piVar25;
      *(int *)plVar20 = iVar10;
      iVar11 = *piVar22;
      *(int *)plVar23 = iVar11 + iVar10;
      lVar37 = (long)aiStack_1e8[0];
      aiStack_1e8[0] = aiStack_1e8[0] + 1;
      *(int *)(((ulong)aiStack_1e8 | 4) + lVar37 * 4) = iVar11;
      uVar39 = uVar39 - 1;
      piVar25 = piVar25 + 1;
      piVar22 = piVar22 + 1;
      plVar23 = (long *)((long)plVar23 + 4);
      plVar20 = (long *)((long)plVar20 + 4);
    } while (uVar39 != 0);
  }
  (*(code *)**(undefined8 **)*puVar30)
            (auStack_1a0,(undefined8 *)*puVar30,aiStack_1e8,*(undefined1 *)(lVar35 + 0x48));
  func_0x000109c18360(plVar28,auStack_1a0);
  FUN_109c180ec(auStack_1a0);
  plVar29 = *(long **)puVar16;
  uVar31 = *(undefined8 *)(*plVar28 + 0x40);
  plVar23 = (long *)&UNK_10e03ab00;
  plVar28 = alStack_1b8;
  plVar20 = alStack_1d0;
  FUN_109c5f088();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_1a0);
  plVar17 = plVar28;
  __Unwind_Resume();
  puStack_248 = param_9;
  pcStack_1f8 = FUN_109c5ec58;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar36 = *(uint *)(*plVar17 + 8);
  uVar39 = (ulong)uVar36;
  lStack_2b8 = *plVar29;
  puStack_2b0 = (uint *)plVar29[1];
  if (puStack_2b0 != (uint *)0x0) {
    puVar15 = puStack_2b0 + 2;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar15,0x10);
      if (bVar13) {
        *(long *)puVar15 = *(long *)puVar15 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  uStack_250 = uVar48;
  plStack_240 = param_2;
  plStack_238 = param_3;
  lStack_230 = lVar46;
  uStack_228 = param_5;
  uStack_220 = param_6;
  uStack_218 = param_7;
  puStack_210 = puVar16;
  plStack_208 = plVar28;
  ppuStack_200 = &puStack_140;
  if (lStack_2b8 == 0) {
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d0 = CONCAT44(uVar36,1);
    (*(code *)**(undefined8 **)puStack_1f0[2])
              (auStack_2a8,(undefined8 *)puStack_1f0[2],&uStack_2d0,4);
    func_0x000109c18360(&lStack_2b8,auStack_2a8);
    FUN_109c180ec(auStack_2a8);
    lVar46 = *(long *)(lStack_2b8 + 0x40);
    if (0 < (int)uVar36) {
      _memset_pattern16(lVar46,&UNK_10dfd94a0,uVar39 << 2);
    }
  }
  else {
    lVar46 = *(long *)(lStack_2b8 + 0x40);
  }
  auStack_2e8[0] = 0;
  auStack_2e8[1] = 0;
  auStack_2e8[2] = 0;
  auStack_2e8[3] = 0;
  auStack_2e8[4] = 0;
  auStack_300[0] = 0;
  auStack_300[1] = 0;
  auStack_300[2] = 0;
  auStack_300[3] = 0;
  auStack_300[4] = 0;
  alStack_318[0] = 0;
  alStack_318[1] = 0;
  uStack_308 = 0;
  lVar35 = *(long *)(*plVar20 + 0x40);
  lVar37 = *(long *)(*plVar23 + 0x40);
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  lVar38 = *plVar17;
  if (0 < (int)uVar36) {
    uVar48 = 0;
    do {
      iVar10 = *(int *)(lVar46 + uVar48 * 4);
      *(int *)((long)alStack_318 + uVar48 * 4) = iVar10;
      iVar11 = *(int *)(lVar35 + uVar48 * 4);
      uVar43 = *(uint *)(lVar38 + 0xc + uVar48 * 4);
      uVar36 = (uVar43 & iVar11 >> 0x1f) + iVar11;
      uVar27 = -(uint)(iVar10 < 1);
      uVar41 = uVar43 - (iVar10 < 1);
      uVar4 = uVar41;
      if ((int)uVar36 <= (int)uVar41) {
        uVar4 = uVar36;
      }
      uVar19 = uVar27;
      if ((int)uVar27 <= (int)uVar36) {
        uVar19 = uVar4;
      }
      auStack_2e8[uVar48] = uVar19;
      iVar11 = *(int *)(lVar37 + uVar48 * 4);
      uVar36 = (uVar43 & iVar11 >> 0x1f) + iVar11;
      if ((int)uVar36 <= (int)uVar41) {
        uVar41 = uVar36;
      }
      if ((int)uVar27 <= (int)uVar36) {
        uVar27 = uVar41;
      }
      auStack_300[uVar48] = uVar27;
      uVar36 = 1 << (ulong)((uint)uVar48 & 0x1f);
      if ((uVar36 & (uint)uVar34) == 0) {
        if ((uVar36 & (uint)uVar31) != 0) {
          uVar19 = uVar43 - 1;
          if (0 < iVar10) {
            uVar19 = 0;
          }
          auStack_2e8[uVar48] = uVar19;
        }
        if ((uVar36 & (uint)uVar33) != 0) {
          if (iVar10 < 1) {
            uVar43 = 0xffffffff;
          }
          auStack_300[uVar48] = uVar43;
          uVar27 = uVar43;
        }
        iVar11 = iVar10 + -1;
        if (iVar10 < 1) {
          iVar11 = iVar10 + 1;
        }
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)((iVar11 - uVar19) + uVar27) / iVar10;
        }
        lVar21 = (long)(int)uStack_2d0;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0 + 1);
        *(int *)(((ulong)&uStack_2d0 | 4) + lVar21 * 4) = iVar2;
      }
      else {
        auStack_300[uVar48] = uVar19 + 1;
      }
      uVar48 = uVar48 + 1;
    } while (uVar39 != uVar48);
  }
  (*(code *)**(undefined8 **)*puStack_1f0)
            (auStack_2a8,(undefined8 *)*puStack_1f0,&uStack_2d0,*(undefined1 *)(lVar38 + 0x48));
  func_0x000109c18360(plVar24,auStack_2a8);
  FUN_109c180ec(auStack_2a8);
  plVar28 = (long *)*plVar17;
  puVar30 = *(undefined8 **)(*plVar24 + 0x40);
  puVar15 = auStack_2e8;
  puVar18 = auStack_300;
  plVar24 = alStack_318;
  FUN_109c5f500();
  puVar16 = puStack_2b0;
  if (puStack_2b0 != (uint *)0x0) {
    puVar1 = puStack_2b0 + 2;
    do {
      lVar35 = *(long *)puVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(long *)puVar1 = lVar35 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*(long *)puStack_2b0 + 0x10))(puStack_2b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar15 = puVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_2a8);
  FUN_10959b818(&lStack_2b8);
  puVar16 = puVar15;
  __Unwind_Resume();
  plStack_340 = plVar17;
  puStack_338 = puVar15;
  pppuStack_330 = &ppuStack_200;
  pcStack_328 = FUN_109c5ef54;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_3a8[0] = 0;
  auStack_3a8[1] = 0;
  auStack_3a8[2] = 0;
  auStack_3a8[3] = 0;
  auStack_3a8[4] = 0;
  aiStack_3d8[6] = 0;
  aiStack_3d8[7] = 0;
  aiStack_3d8[8] = 0;
  aiStack_3d8[9] = 0;
  aiStack_3d8[10] = 0;
  aiStack_3d8[2] = 0;
  aiStack_3d8[3] = 0;
  aiStack_3d8[4] = 0;
  aiStack_3d8[5] = 0;
  aiStack_3d8[0] = 0;
  aiStack_3d8[1] = 0;
  lVar35 = *(long *)puVar16;
  uVar36 = *(uint *)(lVar35 + 8);
  uVar48 = (ulong)uVar36;
  if (0 < (int)uVar36) {
    puVar15 = *(uint **)(*(long *)puVar18 + 0x40);
    piVar25 = *(int **)(*plVar24 + 0x40);
    piVar22 = aiStack_3d8 + 6;
    puVar18 = auStack_3a8;
    do {
      uVar36 = *puVar15;
      *puVar18 = uVar36;
      iVar10 = *piVar25;
      *piVar22 = iVar10 + uVar36;
      lVar37 = (long)aiStack_3d8[0];
      aiStack_3d8[0] = aiStack_3d8[0] + 1;
      *(int *)(((ulong)aiStack_3d8 | 4) + lVar37 * 4) = iVar10;
      uVar48 = uVar48 - 1;
      puVar15 = puVar15 + 1;
      piVar25 = piVar25 + 1;
      piVar22 = piVar22 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar48 != 0);
  }
  (*(code *)**(undefined8 **)*puVar30)
            (auStack_390,(undefined8 *)*puVar30,aiStack_3d8,*(undefined1 *)(lVar35 + 0x48));
  func_0x000109c18360(plVar28,auStack_390);
  FUN_109c180ec(auStack_390);
  lVar35 = *(long *)puVar16;
  puVar32 = *(undefined4 **)(*plVar28 + 0x40);
  piVar25 = (int *)&UNK_10e03ab00;
  puVar15 = auStack_3a8;
  piVar22 = aiStack_3d8 + 6;
  FUN_109c5f500();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_390);
  puVar18 = puVar15;
  __Unwind_Resume();
  uStack_440 = uVar39;
  puStack_438 = puStack_1f0;
  plStack_430 = plVar20;
  plStack_428 = plVar23;
  lStack_420 = lVar46;
  uStack_418 = uVar31;
  uStack_410 = uVar33;
  uStack_408 = uVar34;
  puStack_400 = puVar16;
  puStack_3f8 = puVar15;
  ppppuStack_3f0 = &pppuStack_330;
  pcStack_3e8 = FUN_109c5f088;
  uStack_450._0_4_ = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  iVar10 = *(int *)(lVar35 + 8);
  lVar46 = *(long *)(lVar35 + 0x40);
  uVar36 = *puVar18;
  if (iVar10 < 3) {
    if (iVar10 == 1) {
      lVar35 = (long)(int)uVar36;
      iVar10 = *piVar25;
      iVar11 = *piVar22;
      do {
        if (iVar10 < 1) {
          if (lVar35 <= iVar11) {
            return;
          }
        }
        else if (iVar11 <= lVar35) {
          return;
        }
        *puVar32 = *(undefined4 *)(lVar46 + lVar35 * 4);
        lVar35 = lVar35 + iVar10;
        puVar32 = puVar32 + 1;
      } while( true );
    }
    if (iVar10 == 2) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f0e8:
      uStack_458 = (ulong)uVar36;
      uVar41 = uVar4;
      if (iVar10 < 1) {
        if ((int)uVar36 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar36) {
        return;
      }
      do {
        uStack_458 = CONCAT44(uVar41,(int)uStack_458);
        if (iVar2 < 1) {
          if ((int)uVar41 <= iVar3) goto LAB_109c5f16c;
        }
        else if (iVar3 <= (int)uVar41) goto LAB_109c5f16c;
        lVar37 = 0;
        iVar14 = 0;
        piVar25 = (int *)&uStack_458;
        bVar13 = true;
        do {
          bVar26 = bVar13;
          iVar14 = *piVar25 + *(int *)(lVar35 + 0xc + lVar37 * 4) * iVar14;
          lVar37 = 1;
          piVar25 = (int *)((ulong)&uStack_458 | 4);
          bVar13 = false;
        } while (bVar26);
        *puVar32 = *(undefined4 *)(lVar46 + (long)iVar14 * 4);
        puVar32 = puVar32 + 1;
        uVar41 = uVar41 + iVar2;
      } while( true );
    }
  }
  else {
    if (iVar10 == 3) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f2d0:
      uStack_458 = (ulong)uVar36;
      if (iVar10 < 1) {
        if ((int)uVar36 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar36) {
        return;
      }
      uVar27 = puVar18[2];
      iVar14 = piVar25[2];
      iVar5 = piVar22[2];
      uVar41 = uVar4;
LAB_109c5f300:
      uStack_458 = CONCAT44(uVar41,(int)uStack_458);
      uStack_450._0_4_ = uVar27;
      if (iVar2 < 1) {
        if ((int)uVar41 <= iVar3) goto LAB_109c5f37c;
      }
      else if (iVar3 <= (int)uVar41) goto LAB_109c5f37c;
      do {
        uStack_450._4_4_ = 0;
        if (iVar14 < 1) {
          if ((int)(uint)uStack_450 <= iVar5) goto LAB_109c5f374;
        }
        else if (iVar5 <= (int)(uint)uStack_450) goto LAB_109c5f374;
        lVar37 = 0;
        iVar42 = 0;
        do {
          iVar42 = *(int *)((long)&uStack_458 + lVar37) + *(int *)(lVar35 + 0xc + lVar37) * iVar42;
          lVar37 = lVar37 + 4;
        } while (lVar37 != 0xc);
        *puVar32 = *(undefined4 *)(lVar46 + (long)iVar42 * 4);
        puVar32 = puVar32 + 1;
        uStack_450._0_4_ = (uint)uStack_450 + iVar14;
      } while( true );
    }
    if (iVar10 == 4) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f198:
      uStack_458 = (ulong)uVar36;
      if (iVar10 < 1) {
        if ((int)uVar36 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar36) {
        return;
      }
      uVar27 = puVar18[2];
      iVar14 = piVar25[2];
      iVar5 = piVar22[2];
      uVar41 = uVar4;
LAB_109c5f1c8:
      uStack_458 = CONCAT44(uVar41,(int)uStack_458);
      if (iVar2 < 1) {
        if ((int)uVar41 <= iVar3) goto LAB_109c5f27c;
      }
      else if (iVar3 <= (int)uVar41) goto LAB_109c5f27c;
      uVar19 = puVar18[3];
      iVar42 = piVar25[3];
      iVar6 = piVar22[3];
      uVar43 = uVar27;
LAB_109c5f1f8:
      uStack_450 = (ulong)uVar43;
      uVar44 = uVar19;
      if (iVar14 < 1) {
        if ((int)uVar43 <= iVar5) goto LAB_109c5f274;
      }
      else if (iVar5 <= (int)uVar43) goto LAB_109c5f274;
      do {
        uStack_450 = CONCAT44(uVar44,(uint)uStack_450);
        if (iVar42 < 1) {
          if ((int)uVar44 <= iVar6) goto LAB_109c5f26c;
        }
        else if (iVar6 <= (int)uVar44) goto LAB_109c5f26c;
        lVar37 = 0;
        iVar45 = 0;
        do {
          iVar45 = *(int *)((long)&uStack_458 + lVar37) + *(int *)(lVar35 + 0xc + lVar37) * iVar45;
          lVar37 = lVar37 + 4;
        } while (lVar37 != 0x10);
        *puVar32 = *(undefined4 *)(lVar46 + (long)iVar45 * 4);
        puVar32 = puVar32 + 1;
        uVar44 = uVar44 + iVar42;
      } while( true );
    }
  }
  uVar4 = puVar18[1];
  iVar11 = *piVar25;
  iVar3 = piVar25[1];
  iVar2 = *piVar22;
  iVar14 = piVar22[1];
LAB_109c5f3a4:
  uStack_458 = (ulong)uVar36;
  if (iVar11 < 1) {
    if ((int)uVar36 <= iVar2) {
      return;
    }
  }
  else if (iVar2 <= (int)uVar36) {
    return;
  }
  uVar27 = puVar18[2];
  iVar5 = piVar25[2];
  iVar42 = piVar22[2];
  uVar41 = uVar4;
LAB_109c5f3dc:
  uStack_458 = CONCAT44(uVar41,(int)uStack_458);
  if (iVar3 < 1) {
    if ((int)uVar41 <= iVar14) goto LAB_109c5f4d8;
  }
  else if (iVar14 <= (int)uVar41) goto LAB_109c5f4d8;
  uVar19 = puVar18[3];
  iVar6 = piVar25[3];
  iVar45 = piVar22[3];
  uVar43 = uVar27;
LAB_109c5f40c:
  uStack_450 = (ulong)uVar43;
  if (iVar5 < 1) {
    if ((int)uVar43 <= iVar42) goto LAB_109c5f4d0;
  }
  else if (iVar42 <= (int)uVar43) goto LAB_109c5f4d0;
  uVar7 = puVar18[4];
  iVar8 = piVar25[4];
  iVar9 = piVar22[4];
  uVar44 = uVar19;
LAB_109c5f43c:
  uStack_450 = CONCAT44(uVar44,(uint)uStack_450);
  uStack_448 = uVar7;
  if (iVar6 < 1) {
    if ((int)uVar44 <= iVar45) goto LAB_109c5f4c8;
  }
  else if (iVar45 <= (int)uVar44) goto LAB_109c5f4c8;
  do {
    if (iVar8 < 1) {
      if ((int)uStack_448 <= iVar9) goto LAB_109c5f4c0;
    }
    else if (iVar9 <= (int)uStack_448) goto LAB_109c5f4c0;
    lVar37 = 0;
    iVar47 = 0;
    do {
      if (lVar37 < iVar10) {
        iVar40 = *(int *)(lVar35 + 0xc + lVar37 * 4);
      }
      else {
        iVar40 = -1;
      }
      iVar47 = *(int *)((long)&uStack_458 + lVar37 * 4) + iVar40 * iVar47;
      lVar37 = lVar37 + 1;
    } while (lVar37 != 5);
    *puVar32 = *(undefined4 *)(lVar46 + (long)iVar47 * 4);
    puVar32 = puVar32 + 1;
    uStack_448 = uStack_448 + iVar8;
  } while( true );
LAB_109c5f37c:
  uVar36 = uVar36 + iVar10;
  goto LAB_109c5f2d0;
LAB_109c5f374:
  uVar41 = uVar41 + iVar2;
  goto LAB_109c5f300;
LAB_109c5f27c:
  uVar36 = uVar36 + iVar10;
  goto LAB_109c5f198;
LAB_109c5f274:
  uVar41 = uVar41 + iVar2;
  goto LAB_109c5f1c8;
LAB_109c5f26c:
  uVar43 = uVar43 + iVar14;
  goto LAB_109c5f1f8;
LAB_109c5f16c:
  uVar36 = uVar36 + iVar10;
  goto LAB_109c5f0e8;
LAB_109c5f4d8:
  uVar36 = uVar36 + iVar11;
  goto LAB_109c5f3a4;
LAB_109c5f4d0:
  uVar41 = uVar41 + iVar3;
  goto LAB_109c5f3dc;
LAB_109c5f4c8:
  uVar43 = uVar43 + iVar5;
  goto LAB_109c5f40c;
LAB_109c5f4c0:
  uVar44 = uVar44 + iVar6;
  goto LAB_109c5f43c;
}



/* Entry: 109c5eb24; end: 109c5ec57;  */

void FUN_109c5eb24(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  bool bVar26;
  uint uVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  undefined8 uStack_328;
  undefined8 uStack_320;
  uint uStack_318;
  ulong uStack_310;
  undefined8 *puStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  undefined1 ***pppuStack_2c0;
  code *pcStack_2b8;
  int aiStack_2a8 [12];
  uint auStack_278 [6];
  undefined1 auStack_260 [72];
  long lStack_218;
  long *plStack_210;
  uint *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  long alStack_1e8 [2];
  undefined4 uStack_1d8;
  uint auStack_1d0 [6];
  uint auStack_1b8 [6];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  uint *puStack_180;
  undefined1 auStack_178 [72];
  long lStack_130;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  int aiStack_b8 [6];
  long alStack_a0 [2];
  undefined4 uStack_90;
  long alStack_88 [2];
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  uStack_78 = 0;
  alStack_a0[0] = 0;
  alStack_a0[1] = 0;
  uStack_90 = 0;
  aiStack_b8[2] = 0;
  aiStack_b8[3] = 0;
  aiStack_b8[4] = 0;
  aiStack_b8[5] = 0;
  aiStack_b8[0] = 0;
  aiStack_b8[1] = 0;
  lVar34 = *param_1;
  uVar32 = *(uint *)(lVar34 + 8);
  uVar36 = (ulong)uVar32;
  if (0 < (int)uVar32) {
    piVar25 = *(int **)(*param_2 + 0x40);
    piVar22 = *(int **)(*param_3 + 0x40);
    plVar23 = alStack_a0;
    plVar15 = alStack_88;
    do {
      iVar10 = *piVar25;
      *(int *)plVar15 = iVar10;
      iVar11 = *piVar22;
      *(int *)plVar23 = iVar11 + iVar10;
      lVar39 = (long)aiStack_b8[0];
      aiStack_b8[0] = aiStack_b8[0] + 1;
      *(int *)(((ulong)aiStack_b8 | 4) + lVar39 * 4) = iVar11;
      uVar36 = uVar36 - 1;
      piVar25 = piVar25 + 1;
      piVar22 = piVar22 + 1;
      plVar23 = (long *)((long)plVar23 + 4);
      plVar15 = (long *)((long)plVar15 + 4);
    } while (uVar36 != 0);
  }
  (*(code *)**(undefined8 **)*param_5)
            (auStack_70,(undefined8 *)*param_5,aiStack_b8,*(undefined1 *)(lVar34 + 0x48));
  func_0x000109c18360(param_4,auStack_70);
  FUN_109c180ec(auStack_70);
  param_1 = (long *)*param_1;
  uVar29 = *(undefined8 *)(*param_4 + 0x40);
  plVar23 = (long *)&UNK_10e03ab00;
  plVar15 = alStack_88;
  plVar20 = alStack_a0;
  FUN_109c5f088();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_70);
  __Unwind_Resume();
  pcStack_c8 = FUN_109c5ec58;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar32 = *(uint *)(*plVar15 + 8);
  uVar36 = (ulong)uVar32;
  lStack_188 = *param_1;
  puStack_180 = (uint *)param_1[1];
  if (puStack_180 != (uint *)0x0) {
    puVar16 = puStack_180 + 2;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar16,0x10);
      if (bVar13) {
        *(long *)puVar16 = *(long *)puVar16 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lStack_188 == 0) {
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = CONCAT44(uVar32,1);
    (*(code *)**(undefined8 **)puStack_c0[2])(auStack_178,(undefined8 *)puStack_c0[2],&uStack_1a0,4)
    ;
    func_0x000109c18360(&lStack_188,auStack_178);
    FUN_109c180ec(auStack_178);
    lVar34 = *(long *)(lStack_188 + 0x40);
    if (0 < (int)uVar32) {
      _memset_pattern16(lVar34,&UNK_10dfd94a0,uVar36 << 2);
    }
  }
  else {
    lVar34 = *(long *)(lStack_188 + 0x40);
  }
  auStack_1b8[0] = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[2] = 0;
  auStack_1b8[3] = 0;
  auStack_1b8[4] = 0;
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  auStack_1d0[2] = 0;
  auStack_1d0[3] = 0;
  auStack_1d0[4] = 0;
  alStack_1e8[0] = 0;
  alStack_1e8[1] = 0;
  uStack_1d8 = 0;
  lVar39 = *(long *)(*plVar20 + 0x40);
  lVar33 = *(long *)(*plVar23 + 0x40);
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  lVar35 = *plVar15;
  if (0 < (int)uVar32) {
    uVar37 = 0;
    do {
      iVar10 = *(int *)(lVar34 + uVar37 * 4);
      *(int *)((long)alStack_1e8 + uVar37 * 4) = iVar10;
      iVar11 = *(int *)(lVar39 + uVar37 * 4);
      uVar42 = *(uint *)(lVar35 + 0xc + uVar37 * 4);
      uVar32 = (uVar42 & iVar11 >> 0x1f) + iVar11;
      uVar27 = -(uint)(iVar10 < 1);
      uVar40 = uVar42 - (iVar10 < 1);
      uVar4 = uVar40;
      if ((int)uVar32 <= (int)uVar40) {
        uVar4 = uVar32;
      }
      uVar19 = uVar27;
      if ((int)uVar27 <= (int)uVar32) {
        uVar19 = uVar4;
      }
      auStack_1b8[uVar37] = uVar19;
      iVar11 = *(int *)(lVar33 + uVar37 * 4);
      uVar32 = (uVar42 & iVar11 >> 0x1f) + iVar11;
      if ((int)uVar32 <= (int)uVar40) {
        uVar40 = uVar32;
      }
      if ((int)uVar27 <= (int)uVar32) {
        uVar27 = uVar40;
      }
      auStack_1d0[uVar37] = uVar27;
      uVar32 = 1 << (ulong)((uint)uVar37 & 0x1f);
      if ((uVar32 & (uint)param_7) == 0) {
        if ((uVar32 & (uint)uVar29) != 0) {
          uVar19 = uVar42 - 1;
          if (0 < iVar10) {
            uVar19 = 0;
          }
          auStack_1b8[uVar37] = uVar19;
        }
        if ((uVar32 & (uint)param_6) != 0) {
          if (iVar10 < 1) {
            uVar42 = 0xffffffff;
          }
          auStack_1d0[uVar37] = uVar42;
          uVar27 = uVar42;
        }
        iVar11 = iVar10 + -1;
        if (iVar10 < 1) {
          iVar11 = iVar10 + 1;
        }
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)((iVar11 - uVar19) + uVar27) / iVar10;
        }
        lVar21 = (long)(int)uStack_1a0;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)uStack_1a0 + 1);
        *(int *)(((ulong)&uStack_1a0 | 4) + lVar21 * 4) = iVar2;
      }
      else {
        auStack_1d0[uVar37] = uVar19 + 1;
      }
      uVar37 = uVar37 + 1;
    } while (uVar36 != uVar37);
  }
  (*(code *)**(undefined8 **)*puStack_c0)
            (auStack_178,(undefined8 *)*puStack_c0,&uStack_1a0,*(undefined1 *)(lVar35 + 0x48));
  func_0x000109c18360(param_8,auStack_178);
  FUN_109c180ec(auStack_178);
  plVar28 = (long *)*plVar15;
  puVar30 = *(undefined8 **)(*param_8 + 0x40);
  puVar16 = auStack_1b8;
  puVar18 = auStack_1d0;
  plVar24 = alStack_1e8;
  FUN_109c5f500();
  puVar17 = puStack_180;
  if (puStack_180 != (uint *)0x0) {
    puVar1 = puStack_180 + 2;
    do {
      lVar39 = *(long *)puVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(long *)puVar1 = lVar39 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar39 == 0) {
      (**(code **)(*(long *)puStack_180 + 0x10))(puStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar16 = puVar17;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_178);
  FUN_10959b818(&lStack_188);
  puVar17 = puVar16;
  __Unwind_Resume();
  plStack_210 = plVar15;
  puStack_208 = puVar16;
  ppuStack_200 = &puStack_d0;
  pcStack_1f8 = FUN_109c5ef54;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_278[0] = 0;
  auStack_278[1] = 0;
  auStack_278[2] = 0;
  auStack_278[3] = 0;
  auStack_278[4] = 0;
  aiStack_2a8[6] = 0;
  aiStack_2a8[7] = 0;
  aiStack_2a8[8] = 0;
  aiStack_2a8[9] = 0;
  aiStack_2a8[10] = 0;
  aiStack_2a8[2] = 0;
  aiStack_2a8[3] = 0;
  aiStack_2a8[4] = 0;
  aiStack_2a8[5] = 0;
  aiStack_2a8[0] = 0;
  aiStack_2a8[1] = 0;
  lVar39 = *(long *)puVar17;
  uVar32 = *(uint *)(lVar39 + 8);
  uVar37 = (ulong)uVar32;
  if (0 < (int)uVar32) {
    puVar16 = *(uint **)(*(long *)puVar18 + 0x40);
    piVar25 = *(int **)(*plVar24 + 0x40);
    piVar22 = aiStack_2a8 + 6;
    puVar18 = auStack_278;
    do {
      uVar32 = *puVar16;
      *puVar18 = uVar32;
      iVar10 = *piVar25;
      *piVar22 = iVar10 + uVar32;
      lVar33 = (long)aiStack_2a8[0];
      aiStack_2a8[0] = aiStack_2a8[0] + 1;
      *(int *)(((ulong)aiStack_2a8 | 4) + lVar33 * 4) = iVar10;
      uVar37 = uVar37 - 1;
      puVar16 = puVar16 + 1;
      piVar25 = piVar25 + 1;
      piVar22 = piVar22 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar37 != 0);
  }
  (*(code *)**(undefined8 **)*puVar30)
            (auStack_260,(undefined8 *)*puVar30,aiStack_2a8,*(undefined1 *)(lVar39 + 0x48));
  func_0x000109c18360(plVar28,auStack_260);
  FUN_109c180ec(auStack_260);
  lVar39 = *(long *)puVar17;
  puVar31 = *(undefined4 **)(*plVar28 + 0x40);
  piVar25 = (int *)&UNK_10e03ab00;
  puVar16 = auStack_278;
  piVar22 = aiStack_2a8 + 6;
  FUN_109c5f500();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_260);
  puVar18 = puVar16;
  __Unwind_Resume();
  uStack_310 = uVar36;
  puStack_308 = puStack_c0;
  plStack_300 = plVar20;
  plStack_2f8 = plVar23;
  lStack_2f0 = lVar34;
  uStack_2e8 = uVar29;
  uStack_2e0 = param_6;
  uStack_2d8 = param_7;
  puStack_2d0 = puVar17;
  puStack_2c8 = puVar16;
  pppuStack_2c0 = &ppuStack_200;
  pcStack_2b8 = FUN_109c5f088;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  uStack_318 = 0;
  iVar10 = *(int *)(lVar39 + 8);
  lVar34 = *(long *)(lVar39 + 0x40);
  uVar32 = *puVar18;
  if (iVar10 < 3) {
    if (iVar10 == 1) {
      lVar39 = (long)(int)uVar32;
      iVar10 = *piVar25;
      iVar11 = *piVar22;
      do {
        if (iVar10 < 1) {
          if (lVar39 <= iVar11) {
            return;
          }
        }
        else if (iVar11 <= lVar39) {
          return;
        }
        *puVar31 = *(undefined4 *)(lVar34 + lVar39 * 4);
        lVar39 = lVar39 + iVar10;
        puVar31 = puVar31 + 1;
      } while( true );
    }
    if (iVar10 == 2) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f0e8:
      uStack_328 = (ulong)uVar32;
      uVar40 = uVar4;
      if (iVar10 < 1) {
        if ((int)uVar32 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar32) {
        return;
      }
      do {
        uStack_328 = CONCAT44(uVar40,(int)uStack_328);
        if (iVar2 < 1) {
          if ((int)uVar40 <= iVar3) goto LAB_109c5f16c;
        }
        else if (iVar3 <= (int)uVar40) goto LAB_109c5f16c;
        lVar33 = 0;
        iVar14 = 0;
        piVar25 = (int *)&uStack_328;
        bVar13 = true;
        do {
          bVar26 = bVar13;
          iVar14 = *piVar25 + *(int *)(lVar39 + 0xc + lVar33 * 4) * iVar14;
          lVar33 = 1;
          piVar25 = (int *)((ulong)&uStack_328 | 4);
          bVar13 = false;
        } while (bVar26);
        *puVar31 = *(undefined4 *)(lVar34 + (long)iVar14 * 4);
        puVar31 = puVar31 + 1;
        uVar40 = uVar40 + iVar2;
      } while( true );
    }
  }
  else {
    if (iVar10 == 3) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f2d0:
      uStack_328 = (ulong)uVar32;
      if (iVar10 < 1) {
        if ((int)uVar32 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar32) {
        return;
      }
      uVar27 = puVar18[2];
      iVar14 = piVar25[2];
      iVar5 = piVar22[2];
      uVar40 = uVar4;
LAB_109c5f300:
      uStack_328 = CONCAT44(uVar40,(int)uStack_328);
      uStack_320._0_4_ = uVar27;
      if (iVar2 < 1) {
        if ((int)uVar40 <= iVar3) goto LAB_109c5f37c;
      }
      else if (iVar3 <= (int)uVar40) goto LAB_109c5f37c;
      do {
        uStack_320._4_4_ = 0;
        if (iVar14 < 1) {
          if ((int)(uint)uStack_320 <= iVar5) goto LAB_109c5f374;
        }
        else if (iVar5 <= (int)(uint)uStack_320) goto LAB_109c5f374;
        lVar33 = 0;
        iVar41 = 0;
        do {
          iVar41 = *(int *)((long)&uStack_328 + lVar33) + *(int *)(lVar39 + 0xc + lVar33) * iVar41;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0xc);
        *puVar31 = *(undefined4 *)(lVar34 + (long)iVar41 * 4);
        puVar31 = puVar31 + 1;
        uStack_320._0_4_ = (uint)uStack_320 + iVar14;
      } while( true );
    }
    if (iVar10 == 4) {
      uVar4 = puVar18[1];
      iVar10 = *piVar25;
      iVar2 = piVar25[1];
      iVar11 = *piVar22;
      iVar3 = piVar22[1];
LAB_109c5f198:
      uStack_328 = (ulong)uVar32;
      if (iVar10 < 1) {
        if ((int)uVar32 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar32) {
        return;
      }
      uVar27 = puVar18[2];
      iVar14 = piVar25[2];
      iVar5 = piVar22[2];
      uVar40 = uVar4;
LAB_109c5f1c8:
      uStack_328 = CONCAT44(uVar40,(int)uStack_328);
      if (iVar2 < 1) {
        if ((int)uVar40 <= iVar3) goto LAB_109c5f27c;
      }
      else if (iVar3 <= (int)uVar40) goto LAB_109c5f27c;
      uVar19 = puVar18[3];
      iVar41 = piVar25[3];
      iVar6 = piVar22[3];
      uVar42 = uVar27;
LAB_109c5f1f8:
      uStack_320 = (ulong)uVar42;
      uVar43 = uVar19;
      if (iVar14 < 1) {
        if ((int)uVar42 <= iVar5) goto LAB_109c5f274;
      }
      else if (iVar5 <= (int)uVar42) goto LAB_109c5f274;
      do {
        uStack_320 = CONCAT44(uVar43,(uint)uStack_320);
        if (iVar41 < 1) {
          if ((int)uVar43 <= iVar6) goto LAB_109c5f26c;
        }
        else if (iVar6 <= (int)uVar43) goto LAB_109c5f26c;
        lVar33 = 0;
        iVar44 = 0;
        do {
          iVar44 = *(int *)((long)&uStack_328 + lVar33) + *(int *)(lVar39 + 0xc + lVar33) * iVar44;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0x10);
        *puVar31 = *(undefined4 *)(lVar34 + (long)iVar44 * 4);
        puVar31 = puVar31 + 1;
        uVar43 = uVar43 + iVar41;
      } while( true );
    }
  }
  uVar4 = puVar18[1];
  iVar11 = *piVar25;
  iVar3 = piVar25[1];
  iVar2 = *piVar22;
  iVar14 = piVar22[1];
LAB_109c5f3a4:
  uStack_328 = (ulong)uVar32;
  if (iVar11 < 1) {
    if ((int)uVar32 <= iVar2) {
      return;
    }
  }
  else if (iVar2 <= (int)uVar32) {
    return;
  }
  uVar27 = puVar18[2];
  iVar5 = piVar25[2];
  iVar41 = piVar22[2];
  uVar40 = uVar4;
LAB_109c5f3dc:
  uStack_328 = CONCAT44(uVar40,(int)uStack_328);
  if (iVar3 < 1) {
    if ((int)uVar40 <= iVar14) goto LAB_109c5f4d8;
  }
  else if (iVar14 <= (int)uVar40) goto LAB_109c5f4d8;
  uVar19 = puVar18[3];
  iVar6 = piVar25[3];
  iVar44 = piVar22[3];
  uVar42 = uVar27;
LAB_109c5f40c:
  uStack_320 = (ulong)uVar42;
  if (iVar5 < 1) {
    if ((int)uVar42 <= iVar41) goto LAB_109c5f4d0;
  }
  else if (iVar41 <= (int)uVar42) goto LAB_109c5f4d0;
  uVar7 = puVar18[4];
  iVar8 = piVar25[4];
  iVar9 = piVar22[4];
  uVar43 = uVar19;
LAB_109c5f43c:
  uStack_320 = CONCAT44(uVar43,(uint)uStack_320);
  uStack_318 = uVar7;
  if (iVar6 < 1) {
    if ((int)uVar43 <= iVar44) goto LAB_109c5f4c8;
  }
  else if (iVar44 <= (int)uVar43) goto LAB_109c5f4c8;
  do {
    if (iVar8 < 1) {
      if ((int)uStack_318 <= iVar9) goto LAB_109c5f4c0;
    }
    else if (iVar9 <= (int)uStack_318) goto LAB_109c5f4c0;
    lVar33 = 0;
    iVar45 = 0;
    do {
      if (lVar33 < iVar10) {
        iVar38 = *(int *)(lVar39 + 0xc + lVar33 * 4);
      }
      else {
        iVar38 = -1;
      }
      iVar45 = *(int *)((long)&uStack_328 + lVar33 * 4) + iVar38 * iVar45;
      lVar33 = lVar33 + 1;
    } while (lVar33 != 5);
    *puVar31 = *(undefined4 *)(lVar34 + (long)iVar45 * 4);
    puVar31 = puVar31 + 1;
    uStack_318 = uStack_318 + iVar8;
  } while( true );
LAB_109c5f37c:
  uVar32 = uVar32 + iVar10;
  goto LAB_109c5f2d0;
LAB_109c5f374:
  uVar40 = uVar40 + iVar2;
  goto LAB_109c5f300;
LAB_109c5f27c:
  uVar32 = uVar32 + iVar10;
  goto LAB_109c5f198;
LAB_109c5f274:
  uVar40 = uVar40 + iVar2;
  goto LAB_109c5f1c8;
LAB_109c5f26c:
  uVar42 = uVar42 + iVar14;
  goto LAB_109c5f1f8;
LAB_109c5f16c:
  uVar32 = uVar32 + iVar10;
  goto LAB_109c5f0e8;
LAB_109c5f4d8:
  uVar32 = uVar32 + iVar11;
  goto LAB_109c5f3a4;
LAB_109c5f4d0:
  uVar40 = uVar40 + iVar3;
  goto LAB_109c5f3dc;
LAB_109c5f4c8:
  uVar42 = uVar42 + iVar5;
  goto LAB_109c5f40c;
LAB_109c5f4c0:
  uVar43 = uVar43 + iVar6;
  goto LAB_109c5f43c;
}



/* Entry: 109c5ec58; end: 109c5ef53;  */

void FUN_109c5ec58(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8,undefined8 *param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  int *piVar22;
  bool bVar23;
  uint uVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  long lVar39;
  int iVar40;
  ulong uVar41;
  undefined8 uStack_268;
  undefined8 uStack_260;
  uint uStack_258;
  ulong uStack_250;
  undefined8 *puStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  int aiStack_1e8 [12];
  uint auStack_1b8 [6];
  undefined1 auStack_1a0 [72];
  long lStack_158;
  long *plStack_150;
  uint *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long alStack_128 [2];
  undefined4 uStack_118;
  uint auStack_110 [6];
  uint auStack_f8 [6];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint *puStack_c0;
  undefined1 auStack_b8 [72];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *(uint *)(*param_1 + 8);
  uVar41 = (ulong)uVar29;
  lStack_c8 = *param_4;
  puStack_c0 = (uint *)param_4[1];
  if (puStack_c0 != (uint *)0x0) {
    puVar15 = puStack_c0 + 2;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar15,0x10);
      if (bVar13) {
        *(long *)puVar15 = *(long *)puVar15 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  if (lStack_c8 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = CONCAT44(uVar29,1);
    (*(code *)**(undefined8 **)param_9[2])(auStack_b8,(undefined8 *)param_9[2],&uStack_e0,4);
    func_0x000109c18360(&lStack_c8,auStack_b8);
    FUN_109c180ec(auStack_b8);
    lVar39 = *(long *)(lStack_c8 + 0x40);
    if (0 < (int)uVar29) {
      _memset_pattern16(lVar39,&UNK_10dfd94a0,uVar41 << 2);
    }
  }
  else {
    lVar39 = *(long *)(lStack_c8 + 0x40);
  }
  auStack_f8[0] = 0;
  auStack_f8[1] = 0;
  auStack_f8[2] = 0;
  auStack_f8[3] = 0;
  auStack_f8[4] = 0;
  auStack_110[0] = 0;
  auStack_110[1] = 0;
  auStack_110[2] = 0;
  auStack_110[3] = 0;
  auStack_110[4] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_118 = 0;
  lVar28 = *(long *)(*param_2 + 0x40);
  lVar30 = *(long *)(*param_3 + 0x40);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lVar31 = *param_1;
  if (0 < (int)uVar29) {
    uVar32 = 0;
    do {
      iVar10 = *(int *)(lVar39 + uVar32 * 4);
      *(int *)((long)alStack_128 + uVar32 * 4) = iVar10;
      iVar11 = *(int *)(lVar28 + uVar32 * 4);
      uVar36 = *(uint *)(lVar31 + 0xc + uVar32 * 4);
      uVar29 = (uVar36 & iVar11 >> 0x1f) + iVar11;
      uVar24 = -(uint)(iVar10 < 1);
      uVar34 = uVar36 - (iVar10 < 1);
      uVar4 = uVar34;
      if ((int)uVar29 <= (int)uVar34) {
        uVar4 = uVar29;
      }
      uVar18 = uVar24;
      if ((int)uVar24 <= (int)uVar29) {
        uVar18 = uVar4;
      }
      auStack_f8[uVar32] = uVar18;
      iVar11 = *(int *)(lVar30 + uVar32 * 4);
      uVar29 = (uVar36 & iVar11 >> 0x1f) + iVar11;
      if ((int)uVar29 <= (int)uVar34) {
        uVar34 = uVar29;
      }
      if ((int)uVar24 <= (int)uVar29) {
        uVar24 = uVar34;
      }
      auStack_110[uVar32] = uVar24;
      uVar29 = 1 << (ulong)((uint)uVar32 & 0x1f);
      if ((uVar29 & (uint)param_7) == 0) {
        if ((uVar29 & (uint)param_5) != 0) {
          uVar18 = uVar36 - 1;
          if (0 < iVar10) {
            uVar18 = 0;
          }
          auStack_f8[uVar32] = uVar18;
        }
        if ((uVar29 & (uint)param_6) != 0) {
          if (iVar10 < 1) {
            uVar36 = 0xffffffff;
          }
          auStack_110[uVar32] = uVar36;
          uVar24 = uVar36;
        }
        iVar11 = iVar10 + -1;
        if (iVar10 < 1) {
          iVar11 = iVar10 + 1;
        }
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)((iVar11 - uVar18) + uVar24) / iVar10;
        }
        lVar19 = (long)(int)uStack_e0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
        *(int *)(((ulong)&uStack_e0 | 4) + lVar19 * 4) = iVar2;
      }
      else {
        auStack_110[uVar32] = uVar18 + 1;
      }
      uVar32 = uVar32 + 1;
    } while (uVar41 != uVar32);
  }
  (*(code *)**(undefined8 **)*param_9)
            (auStack_b8,(undefined8 *)*param_9,&uStack_e0,*(undefined1 *)(lVar31 + 0x48));
  func_0x000109c18360(param_8,auStack_b8);
  FUN_109c180ec(auStack_b8);
  plVar25 = (long *)*param_1;
  puVar26 = *(undefined8 **)(*param_8 + 0x40);
  puVar15 = auStack_f8;
  puVar17 = auStack_110;
  plVar21 = alStack_128;
  FUN_109c5f500();
  puVar16 = puStack_c0;
  if (puStack_c0 != (uint *)0x0) {
    puVar1 = puStack_c0 + 2;
    do {
      lVar28 = *(long *)puVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(long *)puVar1 = lVar28 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*(long *)puStack_c0 + 0x10))(puStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar15 = puVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_b8);
  FUN_10959b818(&lStack_c8);
  puVar16 = puVar15;
  __Unwind_Resume();
  plStack_150 = param_1;
  puStack_148 = puVar15;
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_109c5ef54;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_1b8[0] = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[2] = 0;
  auStack_1b8[3] = 0;
  auStack_1b8[4] = 0;
  aiStack_1e8[6] = 0;
  aiStack_1e8[7] = 0;
  aiStack_1e8[8] = 0;
  aiStack_1e8[9] = 0;
  aiStack_1e8[10] = 0;
  aiStack_1e8[2] = 0;
  aiStack_1e8[3] = 0;
  aiStack_1e8[4] = 0;
  aiStack_1e8[5] = 0;
  aiStack_1e8[0] = 0;
  aiStack_1e8[1] = 0;
  lVar28 = *(long *)puVar16;
  uVar29 = *(uint *)(lVar28 + 8);
  uVar32 = (ulong)uVar29;
  if (0 < (int)uVar29) {
    puVar15 = *(uint **)(*(long *)puVar17 + 0x40);
    piVar22 = *(int **)(*plVar21 + 0x40);
    piVar20 = aiStack_1e8 + 6;
    puVar17 = auStack_1b8;
    do {
      uVar29 = *puVar15;
      *puVar17 = uVar29;
      iVar10 = *piVar22;
      *piVar20 = iVar10 + uVar29;
      lVar30 = (long)aiStack_1e8[0];
      aiStack_1e8[0] = aiStack_1e8[0] + 1;
      *(int *)(((ulong)aiStack_1e8 | 4) + lVar30 * 4) = iVar10;
      uVar32 = uVar32 - 1;
      puVar15 = puVar15 + 1;
      piVar22 = piVar22 + 1;
      piVar20 = piVar20 + 1;
      puVar17 = puVar17 + 1;
    } while (uVar32 != 0);
  }
  (*(code *)**(undefined8 **)*puVar26)
            (auStack_1a0,(undefined8 *)*puVar26,aiStack_1e8,*(undefined1 *)(lVar28 + 0x48));
  func_0x000109c18360(plVar25,auStack_1a0);
  FUN_109c180ec(auStack_1a0);
  lVar28 = *(long *)puVar16;
  puVar27 = *(undefined4 **)(*plVar25 + 0x40);
  piVar22 = (int *)&UNK_10e03ab00;
  puVar15 = auStack_1b8;
  piVar20 = aiStack_1e8 + 6;
  FUN_109c5f500();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_1a0);
  puVar17 = puVar15;
  __Unwind_Resume();
  uStack_250 = uVar41;
  puStack_248 = param_9;
  plStack_240 = param_2;
  plStack_238 = param_3;
  lStack_230 = lVar39;
  uStack_228 = param_5;
  uStack_220 = param_6;
  uStack_218 = param_7;
  puStack_210 = puVar16;
  puStack_208 = puVar15;
  ppuStack_200 = &puStack_140;
  pcStack_1f8 = FUN_109c5f088;
  uStack_260._0_4_ = 0;
  uStack_260._4_4_ = 0;
  uStack_258 = 0;
  iVar10 = *(int *)(lVar28 + 8);
  lVar39 = *(long *)(lVar28 + 0x40);
  uVar29 = *puVar17;
  if (iVar10 < 3) {
    if (iVar10 == 1) {
      lVar28 = (long)(int)uVar29;
      iVar10 = *piVar22;
      iVar11 = *piVar20;
      do {
        if (iVar10 < 1) {
          if (lVar28 <= iVar11) {
            return;
          }
        }
        else if (iVar11 <= lVar28) {
          return;
        }
        *puVar27 = *(undefined4 *)(lVar39 + lVar28 * 4);
        lVar28 = lVar28 + iVar10;
        puVar27 = puVar27 + 1;
      } while( true );
    }
    if (iVar10 == 2) {
      uVar4 = puVar17[1];
      iVar10 = *piVar22;
      iVar2 = piVar22[1];
      iVar11 = *piVar20;
      iVar3 = piVar20[1];
LAB_109c5f0e8:
      uStack_268 = (ulong)uVar29;
      uVar34 = uVar4;
      if (iVar10 < 1) {
        if ((int)uVar29 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar29) {
        return;
      }
      do {
        uStack_268 = CONCAT44(uVar34,(int)uStack_268);
        if (iVar2 < 1) {
          if ((int)uVar34 <= iVar3) goto LAB_109c5f16c;
        }
        else if (iVar3 <= (int)uVar34) goto LAB_109c5f16c;
        lVar30 = 0;
        iVar14 = 0;
        piVar22 = (int *)&uStack_268;
        bVar13 = true;
        do {
          bVar23 = bVar13;
          iVar14 = *piVar22 + *(int *)(lVar28 + 0xc + lVar30 * 4) * iVar14;
          lVar30 = 1;
          piVar22 = (int *)((ulong)&uStack_268 | 4);
          bVar13 = false;
        } while (bVar23);
        *puVar27 = *(undefined4 *)(lVar39 + (long)iVar14 * 4);
        puVar27 = puVar27 + 1;
        uVar34 = uVar34 + iVar2;
      } while( true );
    }
  }
  else {
    if (iVar10 == 3) {
      uVar4 = puVar17[1];
      iVar10 = *piVar22;
      iVar2 = piVar22[1];
      iVar11 = *piVar20;
      iVar3 = piVar20[1];
LAB_109c5f2d0:
      uStack_268 = (ulong)uVar29;
      if (iVar10 < 1) {
        if ((int)uVar29 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar29) {
        return;
      }
      uVar24 = puVar17[2];
      iVar14 = piVar22[2];
      iVar5 = piVar20[2];
      uVar34 = uVar4;
LAB_109c5f300:
      uStack_268 = CONCAT44(uVar34,(int)uStack_268);
      uStack_260._0_4_ = uVar24;
      if (iVar2 < 1) {
        if ((int)uVar34 <= iVar3) goto LAB_109c5f37c;
      }
      else if (iVar3 <= (int)uVar34) goto LAB_109c5f37c;
      do {
        uStack_260._4_4_ = 0;
        if (iVar14 < 1) {
          if ((int)(uint)uStack_260 <= iVar5) goto LAB_109c5f374;
        }
        else if (iVar5 <= (int)(uint)uStack_260) goto LAB_109c5f374;
        lVar30 = 0;
        iVar35 = 0;
        do {
          iVar35 = *(int *)((long)&uStack_268 + lVar30) + *(int *)(lVar28 + 0xc + lVar30) * iVar35;
          lVar30 = lVar30 + 4;
        } while (lVar30 != 0xc);
        *puVar27 = *(undefined4 *)(lVar39 + (long)iVar35 * 4);
        puVar27 = puVar27 + 1;
        uStack_260._0_4_ = (uint)uStack_260 + iVar14;
      } while( true );
    }
    if (iVar10 == 4) {
      uVar4 = puVar17[1];
      iVar10 = *piVar22;
      iVar2 = piVar22[1];
      iVar11 = *piVar20;
      iVar3 = piVar20[1];
LAB_109c5f198:
      uStack_268 = (ulong)uVar29;
      if (iVar10 < 1) {
        if ((int)uVar29 <= iVar11) {
          return;
        }
      }
      else if (iVar11 <= (int)uVar29) {
        return;
      }
      uVar24 = puVar17[2];
      iVar14 = piVar22[2];
      iVar5 = piVar20[2];
      uVar34 = uVar4;
LAB_109c5f1c8:
      uStack_268 = CONCAT44(uVar34,(int)uStack_268);
      if (iVar2 < 1) {
        if ((int)uVar34 <= iVar3) goto LAB_109c5f27c;
      }
      else if (iVar3 <= (int)uVar34) goto LAB_109c5f27c;
      uVar18 = puVar17[3];
      iVar35 = piVar22[3];
      iVar6 = piVar20[3];
      uVar36 = uVar24;
LAB_109c5f1f8:
      uStack_260 = (ulong)uVar36;
      uVar37 = uVar18;
      if (iVar14 < 1) {
        if ((int)uVar36 <= iVar5) goto LAB_109c5f274;
      }
      else if (iVar5 <= (int)uVar36) goto LAB_109c5f274;
      do {
        uStack_260 = CONCAT44(uVar37,(uint)uStack_260);
        if (iVar35 < 1) {
          if ((int)uVar37 <= iVar6) goto LAB_109c5f26c;
        }
        else if (iVar6 <= (int)uVar37) goto LAB_109c5f26c;
        lVar30 = 0;
        iVar38 = 0;
        do {
          iVar38 = *(int *)((long)&uStack_268 + lVar30) + *(int *)(lVar28 + 0xc + lVar30) * iVar38;
          lVar30 = lVar30 + 4;
        } while (lVar30 != 0x10);
        *puVar27 = *(undefined4 *)(lVar39 + (long)iVar38 * 4);
        puVar27 = puVar27 + 1;
        uVar37 = uVar37 + iVar35;
      } while( true );
    }
  }
  uVar4 = puVar17[1];
  iVar11 = *piVar22;
  iVar3 = piVar22[1];
  iVar2 = *piVar20;
  iVar14 = piVar20[1];
LAB_109c5f3a4:
  uStack_268 = (ulong)uVar29;
  if (iVar11 < 1) {
    if ((int)uVar29 <= iVar2) {
      return;
    }
  }
  else if (iVar2 <= (int)uVar29) {
    return;
  }
  uVar24 = puVar17[2];
  iVar5 = piVar22[2];
  iVar35 = piVar20[2];
  uVar34 = uVar4;
LAB_109c5f3dc:
  uStack_268 = CONCAT44(uVar34,(int)uStack_268);
  if (iVar3 < 1) {
    if ((int)uVar34 <= iVar14) goto LAB_109c5f4d8;
  }
  else if (iVar14 <= (int)uVar34) goto LAB_109c5f4d8;
  uVar18 = puVar17[3];
  iVar6 = piVar22[3];
  iVar38 = piVar20[3];
  uVar36 = uVar24;
LAB_109c5f40c:
  uStack_260 = (ulong)uVar36;
  if (iVar5 < 1) {
    if ((int)uVar36 <= iVar35) goto LAB_109c5f4d0;
  }
  else if (iVar35 <= (int)uVar36) goto LAB_109c5f4d0;
  uVar7 = puVar17[4];
  iVar8 = piVar22[4];
  iVar9 = piVar20[4];
  uVar37 = uVar18;
LAB_109c5f43c:
  uStack_260 = CONCAT44(uVar37,(uint)uStack_260);
  uStack_258 = uVar7;
  if (iVar6 < 1) {
    if ((int)uVar37 <= iVar38) goto LAB_109c5f4c8;
  }
  else if (iVar38 <= (int)uVar37) goto LAB_109c5f4c8;
  do {
    if (iVar8 < 1) {
      if ((int)uStack_258 <= iVar9) goto LAB_109c5f4c0;
    }
    else if (iVar9 <= (int)uStack_258) goto LAB_109c5f4c0;
    lVar30 = 0;
    iVar40 = 0;
    do {
      if (lVar30 < iVar10) {
        iVar33 = *(int *)(lVar28 + 0xc + lVar30 * 4);
      }
      else {
        iVar33 = -1;
      }
      iVar40 = *(int *)((long)&uStack_268 + lVar30 * 4) + iVar33 * iVar40;
      lVar30 = lVar30 + 1;
    } while (lVar30 != 5);
    *puVar27 = *(undefined4 *)(lVar39 + (long)iVar40 * 4);
    puVar27 = puVar27 + 1;
    uStack_258 = uStack_258 + iVar8;
  } while( true );
LAB_109c5f37c:
  uVar29 = uVar29 + iVar10;
  goto LAB_109c5f2d0;
LAB_109c5f374:
  uVar34 = uVar34 + iVar2;
  goto LAB_109c5f300;
LAB_109c5f27c:
  uVar29 = uVar29 + iVar10;
  goto LAB_109c5f198;
LAB_109c5f274:
  uVar34 = uVar34 + iVar2;
  goto LAB_109c5f1c8;
LAB_109c5f26c:
  uVar36 = uVar36 + iVar14;
  goto LAB_109c5f1f8;
LAB_109c5f16c:
  uVar29 = uVar29 + iVar10;
  goto LAB_109c5f0e8;
LAB_109c5f4d8:
  uVar29 = uVar29 + iVar11;
  goto LAB_109c5f3a4;
LAB_109c5f4d0:
  uVar34 = uVar34 + iVar3;
  goto LAB_109c5f3dc;
LAB_109c5f4c8:
  uVar36 = uVar36 + iVar5;
  goto LAB_109c5f40c;
LAB_109c5f4c0:
  uVar37 = uVar37 + iVar6;
  goto LAB_109c5f43c;
}



/* Entry: 109c5ef54; end: 109c5f087;  */

void FUN_109c5ef54(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  bool bVar19;
  undefined4 *puVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  int aiStack_b8 [12];
  uint auStack_88 [6];
  undefined1 auStack_70 [72];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_88[0] = 0;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  auStack_88[4] = 0;
  aiStack_b8[6] = 0;
  aiStack_b8[7] = 0;
  aiStack_b8[8] = 0;
  aiStack_b8[9] = 0;
  aiStack_b8[10] = 0;
  aiStack_b8[2] = 0;
  aiStack_b8[3] = 0;
  aiStack_b8[4] = 0;
  aiStack_b8[5] = 0;
  aiStack_b8[0] = 0;
  aiStack_b8[1] = 0;
  lVar22 = *param_1;
  uVar21 = *(uint *)(lVar22 + 8);
  uVar23 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    puVar15 = *(uint **)(*param_2 + 0x40);
    piVar18 = *(int **)(*param_3 + 0x40);
    piVar16 = aiStack_b8 + 6;
    puVar25 = auStack_88;
    do {
      uVar21 = *puVar15;
      *puVar25 = uVar21;
      iVar12 = *piVar18;
      *piVar16 = iVar12 + uVar21;
      lVar26 = (long)aiStack_b8[0];
      aiStack_b8[0] = aiStack_b8[0] + 1;
      *(int *)(((ulong)aiStack_b8 | 4) + lVar26 * 4) = iVar12;
      uVar23 = uVar23 - 1;
      puVar15 = puVar15 + 1;
      piVar18 = piVar18 + 1;
      piVar16 = piVar16 + 1;
      puVar25 = puVar25 + 1;
    } while (uVar23 != 0);
  }
  (*(code *)**(undefined8 **)*param_5)
            (auStack_70,(undefined8 *)*param_5,aiStack_b8,*(undefined1 *)(lVar22 + 0x48));
  func_0x000109c18360(param_4,auStack_70);
  FUN_109c180ec(auStack_70);
  lVar22 = *param_1;
  puVar20 = *(undefined4 **)(*param_4 + 0x40);
  piVar18 = (int *)&UNK_10e03ab00;
  puVar15 = auStack_88;
  piVar16 = aiStack_b8 + 6;
  FUN_109c5f500();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_70);
  __Unwind_Resume();
  uStack_130._0_4_ = 0;
  uStack_130._4_4_ = 0;
  uStack_128 = 0;
  iVar12 = *(int *)(lVar22 + 8);
  lVar26 = *(long *)(lVar22 + 0x40);
  uVar21 = *puVar15;
  if (iVar12 < 3) {
    if (iVar12 == 1) {
      lVar22 = (long)(int)uVar21;
      iVar12 = *piVar18;
      iVar1 = *piVar16;
      do {
        if (iVar12 < 1) {
          if (lVar22 <= iVar1) {
            return;
          }
        }
        else if (iVar1 <= lVar22) {
          return;
        }
        *puVar20 = *(undefined4 *)(lVar26 + lVar22 * 4);
        lVar22 = lVar22 + iVar12;
        puVar20 = puVar20 + 1;
      } while( true );
    }
    if (iVar12 == 2) {
      uVar4 = puVar15[1];
      iVar12 = *piVar18;
      iVar2 = piVar18[1];
      iVar1 = *piVar16;
      iVar3 = piVar16[1];
LAB_109c5f0e8:
      uStack_138 = (ulong)uVar21;
      uVar27 = uVar4;
      if (iVar12 < 1) {
        if ((int)uVar21 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar21) {
        return;
      }
      do {
        uStack_138 = CONCAT44(uVar27,(int)uStack_138);
        if (iVar2 < 1) {
          if ((int)uVar27 <= iVar3) goto LAB_109c5f16c;
        }
        else if (iVar3 <= (int)uVar27) goto LAB_109c5f16c;
        lVar17 = 0;
        iVar14 = 0;
        piVar18 = (int *)&uStack_138;
        bVar13 = true;
        do {
          bVar19 = bVar13;
          iVar14 = *piVar18 + *(int *)(lVar22 + 0xc + lVar17 * 4) * iVar14;
          lVar17 = 1;
          piVar18 = (int *)((ulong)&uStack_138 | 4);
          bVar13 = false;
        } while (bVar19);
        *puVar20 = *(undefined4 *)(lVar26 + (long)iVar14 * 4);
        puVar20 = puVar20 + 1;
        uVar27 = uVar27 + iVar2;
      } while( true );
    }
  }
  else {
    if (iVar12 == 3) {
      uVar4 = puVar15[1];
      iVar12 = *piVar18;
      iVar2 = piVar18[1];
      iVar1 = *piVar16;
      iVar3 = piVar16[1];
LAB_109c5f2d0:
      uStack_138 = (ulong)uVar21;
      if (iVar12 < 1) {
        if ((int)uVar21 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar21) {
        return;
      }
      uVar5 = puVar15[2];
      iVar14 = piVar18[2];
      iVar6 = piVar16[2];
      uVar27 = uVar4;
LAB_109c5f300:
      uStack_138 = CONCAT44(uVar27,(int)uStack_138);
      uStack_130._0_4_ = uVar5;
      if (iVar2 < 1) {
        if ((int)uVar27 <= iVar3) goto LAB_109c5f37c;
      }
      else if (iVar3 <= (int)uVar27) goto LAB_109c5f37c;
      do {
        uStack_130._4_4_ = 0;
        if (iVar14 < 1) {
          if ((int)(uint)uStack_130 <= iVar6) goto LAB_109c5f374;
        }
        else if (iVar6 <= (int)(uint)uStack_130) goto LAB_109c5f374;
        lVar17 = 0;
        iVar28 = 0;
        do {
          iVar28 = *(int *)((long)&uStack_138 + lVar17) + *(int *)(lVar22 + 0xc + lVar17) * iVar28;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0xc);
        *puVar20 = *(undefined4 *)(lVar26 + (long)iVar28 * 4);
        puVar20 = puVar20 + 1;
        uStack_130._0_4_ = (uint)uStack_130 + iVar14;
      } while( true );
    }
    if (iVar12 == 4) {
      uVar4 = puVar15[1];
      iVar12 = *piVar18;
      iVar2 = piVar18[1];
      iVar1 = *piVar16;
      iVar3 = piVar16[1];
LAB_109c5f198:
      uStack_138 = (ulong)uVar21;
      if (iVar12 < 1) {
        if ((int)uVar21 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar21) {
        return;
      }
      uVar5 = puVar15[2];
      iVar14 = piVar18[2];
      iVar6 = piVar16[2];
      uVar27 = uVar4;
LAB_109c5f1c8:
      uStack_138 = CONCAT44(uVar27,(int)uStack_138);
      if (iVar2 < 1) {
        if ((int)uVar27 <= iVar3) goto LAB_109c5f27c;
      }
      else if (iVar3 <= (int)uVar27) goto LAB_109c5f27c;
      uVar7 = puVar15[3];
      iVar28 = piVar18[3];
      iVar8 = piVar16[3];
      uVar29 = uVar5;
LAB_109c5f1f8:
      uStack_130 = (ulong)uVar29;
      uVar30 = uVar7;
      if (iVar14 < 1) {
        if ((int)uVar29 <= iVar6) goto LAB_109c5f274;
      }
      else if (iVar6 <= (int)uVar29) goto LAB_109c5f274;
      do {
        uStack_130 = CONCAT44(uVar30,(uint)uStack_130);
        if (iVar28 < 1) {
          if ((int)uVar30 <= iVar8) goto LAB_109c5f26c;
        }
        else if (iVar8 <= (int)uVar30) goto LAB_109c5f26c;
        lVar17 = 0;
        iVar31 = 0;
        do {
          iVar31 = *(int *)((long)&uStack_138 + lVar17) + *(int *)(lVar22 + 0xc + lVar17) * iVar31;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0x10);
        *puVar20 = *(undefined4 *)(lVar26 + (long)iVar31 * 4);
        puVar20 = puVar20 + 1;
        uVar30 = uVar30 + iVar28;
      } while( true );
    }
  }
  uVar4 = puVar15[1];
  iVar1 = *piVar18;
  iVar3 = piVar18[1];
  iVar2 = *piVar16;
  iVar14 = piVar16[1];
LAB_109c5f3a4:
  uStack_138 = (ulong)uVar21;
  if (iVar1 < 1) {
    if ((int)uVar21 <= iVar2) {
      return;
    }
  }
  else if (iVar2 <= (int)uVar21) {
    return;
  }
  uVar5 = puVar15[2];
  iVar6 = piVar18[2];
  iVar28 = piVar16[2];
  uVar27 = uVar4;
LAB_109c5f3dc:
  uStack_138 = CONCAT44(uVar27,(int)uStack_138);
  if (iVar3 < 1) {
    if ((int)uVar27 <= iVar14) goto LAB_109c5f4d8;
  }
  else if (iVar14 <= (int)uVar27) goto LAB_109c5f4d8;
  uVar7 = puVar15[3];
  iVar8 = piVar18[3];
  iVar31 = piVar16[3];
  uVar29 = uVar5;
LAB_109c5f40c:
  uStack_130 = (ulong)uVar29;
  if (iVar6 < 1) {
    if ((int)uVar29 <= iVar28) goto LAB_109c5f4d0;
  }
  else if (iVar28 <= (int)uVar29) goto LAB_109c5f4d0;
  uVar9 = puVar15[4];
  iVar10 = piVar18[4];
  iVar11 = piVar16[4];
  uVar30 = uVar7;
LAB_109c5f43c:
  uStack_130 = CONCAT44(uVar30,(uint)uStack_130);
  uStack_128 = uVar9;
  if (iVar8 < 1) {
    if ((int)uVar30 <= iVar31) goto LAB_109c5f4c8;
  }
  else if (iVar31 <= (int)uVar30) goto LAB_109c5f4c8;
  do {
    if (iVar10 < 1) {
      if ((int)uStack_128 <= iVar11) goto LAB_109c5f4c0;
    }
    else if (iVar11 <= (int)uStack_128) goto LAB_109c5f4c0;
    lVar17 = 0;
    iVar32 = 0;
    do {
      if (lVar17 < iVar12) {
        iVar24 = *(int *)(lVar22 + 0xc + lVar17 * 4);
      }
      else {
        iVar24 = -1;
      }
      iVar32 = *(int *)((long)&uStack_138 + lVar17 * 4) + iVar24 * iVar32;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 5);
    *puVar20 = *(undefined4 *)(lVar26 + (long)iVar32 * 4);
    puVar20 = puVar20 + 1;
    uStack_128 = uStack_128 + iVar10;
  } while( true );
LAB_109c5f37c:
  uVar21 = uVar21 + iVar12;
  goto LAB_109c5f2d0;
LAB_109c5f374:
  uVar27 = uVar27 + iVar2;
  goto LAB_109c5f300;
LAB_109c5f27c:
  uVar21 = uVar21 + iVar12;
  goto LAB_109c5f198;
LAB_109c5f274:
  uVar27 = uVar27 + iVar2;
  goto LAB_109c5f1c8;
LAB_109c5f26c:
  uVar29 = uVar29 + iVar14;
  goto LAB_109c5f1f8;
LAB_109c5f16c:
  uVar21 = uVar21 + iVar12;
  goto LAB_109c5f0e8;
LAB_109c5f4d8:
  uVar21 = uVar21 + iVar1;
  goto LAB_109c5f3a4;
LAB_109c5f4d0:
  uVar27 = uVar27 + iVar3;
  goto LAB_109c5f3dc;
LAB_109c5f4c8:
  uVar29 = uVar29 + iVar6;
  goto LAB_109c5f40c;
LAB_109c5f4c0:
  uVar30 = uVar30 + iVar8;
  goto LAB_109c5f43c;
}



/* Entry: 109c5f088; end: 109c5f4ff;  */

void FUN_109c5f088(uint *param_1,int *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  bool bVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  uStack_68 = 0;
  iVar4 = *(int *)(param_4 + 8);
  lVar18 = *(long *)(param_4 + 0x40);
  uVar19 = *param_1;
  if (iVar4 < 3) {
    if (iVar4 == 1) {
      lVar15 = (long)(int)uVar19;
      iVar4 = *param_3;
      iVar1 = *param_2;
      do {
        if (iVar4 < 1) {
          if (lVar15 <= iVar1) {
            return;
          }
        }
        else if (iVar1 <= lVar15) {
          return;
        }
        *param_5 = *(undefined4 *)(lVar18 + lVar15 * 4);
        lVar15 = lVar15 + iVar4;
        param_5 = param_5 + 1;
      } while( true );
    }
    if (iVar4 == 2) {
      uVar5 = param_1[1];
      iVar4 = *param_3;
      iVar2 = param_3[1];
      iVar1 = *param_2;
      iVar3 = param_2[1];
LAB_109c5f0e8:
      uStack_78 = (ulong)uVar19;
      uVar21 = uVar5;
      if (iVar4 < 1) {
        if ((int)uVar19 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar19) {
        return;
      }
      do {
        uStack_78 = CONCAT44(uVar21,(int)uStack_78);
        if (iVar2 < 1) {
          if ((int)uVar21 <= iVar3) goto LAB_109c5f16c;
        }
        else if (iVar3 <= (int)uVar21) goto LAB_109c5f16c;
        lVar15 = 0;
        iVar14 = 0;
        piVar16 = (int *)&uStack_78;
        bVar13 = true;
        do {
          bVar17 = bVar13;
          iVar14 = *piVar16 + *(int *)(param_4 + 0xc + lVar15 * 4) * iVar14;
          lVar15 = 1;
          piVar16 = (int *)((ulong)&uStack_78 | 4);
          bVar13 = false;
        } while (bVar17);
        *param_5 = *(undefined4 *)(lVar18 + (long)iVar14 * 4);
        param_5 = param_5 + 1;
        uVar21 = uVar21 + iVar2;
      } while( true );
    }
  }
  else {
    if (iVar4 == 3) {
      uVar5 = param_1[1];
      iVar4 = *param_3;
      iVar2 = param_3[1];
      iVar1 = *param_2;
      iVar3 = param_2[1];
LAB_109c5f2d0:
      uStack_78 = (ulong)uVar19;
      if (iVar4 < 1) {
        if ((int)uVar19 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar19) {
        return;
      }
      uVar6 = param_1[2];
      iVar14 = param_3[2];
      iVar7 = param_2[2];
      uVar21 = uVar5;
LAB_109c5f300:
      uStack_78 = CONCAT44(uVar21,(int)uStack_78);
      uStack_70._0_4_ = uVar6;
      if (iVar2 < 1) {
        if ((int)uVar21 <= iVar3) goto LAB_109c5f37c;
      }
      else if (iVar3 <= (int)uVar21) goto LAB_109c5f37c;
      do {
        uStack_70._4_4_ = 0;
        if (iVar14 < 1) {
          if ((int)(uint)uStack_70 <= iVar7) goto LAB_109c5f374;
        }
        else if (iVar7 <= (int)(uint)uStack_70) goto LAB_109c5f374;
        lVar15 = 0;
        iVar22 = 0;
        do {
          iVar22 = *(int *)((long)&uStack_78 + lVar15) + *(int *)(param_4 + 0xc + lVar15) * iVar22;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0xc);
        *param_5 = *(undefined4 *)(lVar18 + (long)iVar22 * 4);
        param_5 = param_5 + 1;
        uStack_70._0_4_ = (uint)uStack_70 + iVar14;
      } while( true );
    }
    if (iVar4 == 4) {
      uVar5 = param_1[1];
      iVar4 = *param_3;
      iVar2 = param_3[1];
      iVar1 = *param_2;
      iVar3 = param_2[1];
LAB_109c5f198:
      uStack_78 = (ulong)uVar19;
      if (iVar4 < 1) {
        if ((int)uVar19 <= iVar1) {
          return;
        }
      }
      else if (iVar1 <= (int)uVar19) {
        return;
      }
      uVar6 = param_1[2];
      iVar14 = param_3[2];
      iVar7 = param_2[2];
      uVar21 = uVar5;
LAB_109c5f1c8:
      uStack_78 = CONCAT44(uVar21,(int)uStack_78);
      if (iVar2 < 1) {
        if ((int)uVar21 <= iVar3) goto LAB_109c5f27c;
      }
      else if (iVar3 <= (int)uVar21) goto LAB_109c5f27c;
      uVar8 = param_1[3];
      iVar22 = param_3[3];
      iVar9 = param_2[3];
      uVar23 = uVar6;
LAB_109c5f1f8:
      uStack_70 = (ulong)uVar23;
      uVar24 = uVar8;
      if (iVar14 < 1) {
        if ((int)uVar23 <= iVar7) goto LAB_109c5f274;
      }
      else if (iVar7 <= (int)uVar23) goto LAB_109c5f274;
      do {
        uStack_70 = CONCAT44(uVar24,(uint)uStack_70);
        if (iVar22 < 1) {
          if ((int)uVar24 <= iVar9) goto LAB_109c5f26c;
        }
        else if (iVar9 <= (int)uVar24) goto LAB_109c5f26c;
        lVar15 = 0;
        iVar25 = 0;
        do {
          iVar25 = *(int *)((long)&uStack_78 + lVar15) + *(int *)(param_4 + 0xc + lVar15) * iVar25;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0x10);
        *param_5 = *(undefined4 *)(lVar18 + (long)iVar25 * 4);
        param_5 = param_5 + 1;
        uVar24 = uVar24 + iVar22;
      } while( true );
    }
  }
  uVar5 = param_1[1];
  iVar1 = *param_3;
  iVar3 = param_3[1];
  iVar2 = *param_2;
  iVar14 = param_2[1];
LAB_109c5f3a4:
  uStack_78 = (ulong)uVar19;
  if (iVar1 < 1) {
    if ((int)uVar19 <= iVar2) {
      return;
    }
  }
  else if (iVar2 <= (int)uVar19) {
    return;
  }
  uVar6 = param_1[2];
  iVar7 = param_3[2];
  iVar22 = param_2[2];
  uVar21 = uVar5;
LAB_109c5f3dc:
  uStack_78 = CONCAT44(uVar21,(int)uStack_78);
  if (iVar3 < 1) {
    if ((int)uVar21 <= iVar14) goto LAB_109c5f4d8;
  }
  else if (iVar14 <= (int)uVar21) goto LAB_109c5f4d8;
  uVar8 = param_1[3];
  iVar9 = param_3[3];
  iVar25 = param_2[3];
  uVar23 = uVar6;
LAB_109c5f40c:
  uStack_70 = (ulong)uVar23;
  if (iVar7 < 1) {
    if ((int)uVar23 <= iVar22) goto LAB_109c5f4d0;
  }
  else if (iVar22 <= (int)uVar23) goto LAB_109c5f4d0;
  uVar10 = param_1[4];
  iVar11 = param_3[4];
  iVar12 = param_2[4];
  uVar24 = uVar8;
LAB_109c5f43c:
  uStack_70 = CONCAT44(uVar24,(uint)uStack_70);
  uStack_68 = uVar10;
  if (iVar9 < 1) {
    if ((int)uVar24 <= iVar25) goto LAB_109c5f4c8;
  }
  else if (iVar25 <= (int)uVar24) goto LAB_109c5f4c8;
  do {
    if (iVar11 < 1) {
      if ((int)uStack_68 <= iVar12) goto LAB_109c5f4c0;
    }
    else if (iVar12 <= (int)uStack_68) goto LAB_109c5f4c0;
    lVar15 = 0;
    iVar26 = 0;
    do {
      if (lVar15 < iVar4) {
        iVar20 = *(int *)(param_4 + 0xc + lVar15 * 4);
      }
      else {
        iVar20 = -1;
      }
      iVar26 = *(int *)((long)&uStack_78 + lVar15 * 4) + iVar20 * iVar26;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 5);
    *param_5 = *(undefined4 *)(lVar18 + (long)iVar26 * 4);
    param_5 = param_5 + 1;
    uStack_68 = uStack_68 + iVar11;
  } while( true );
LAB_109c5f37c:
  uVar19 = uVar19 + iVar4;
  goto LAB_109c5f2d0;
LAB_109c5f374:
  uVar21 = uVar21 + iVar2;
  goto LAB_109c5f300;
LAB_109c5f27c:
  uVar19 = uVar19 + iVar4;
  goto LAB_109c5f198;
LAB_109c5f274:
  uVar21 = uVar21 + iVar2;
  goto LAB_109c5f1c8;
LAB_109c5f26c:
  uVar23 = uVar23 + iVar14;
  goto LAB_109c5f1f8;
LAB_109c5f16c:
  uVar19 = uVar19 + iVar4;
  goto LAB_109c5f0e8;
LAB_109c5f4d8:
  uVar19 = uVar19 + iVar1;
  goto LAB_109c5f3a4;
LAB_109c5f4d0:
  uVar21 = uVar21 + iVar3;
  goto LAB_109c5f3dc;
LAB_109c5f4c8:
  uVar23 = uVar23 + iVar7;
  goto LAB_109c5f40c;
LAB_109c5f4c0:
  uVar24 = uVar24 + iVar9;
  goto LAB_109c5f43c;
}



/* Entry: 109c5f500; end: 109c5f9db;  */

void FUN_109c5f500(uint *param_1,int *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  undefined8 uStack_18;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_10._0_4_ = 0;
  uStack_10._4_4_ = 0;
  uStack_8 = 0;
  iVar5 = *(int *)(param_4 + 8);
  lVar2 = *(long *)(param_4 + 0x40);
  uVar4 = *param_1;
  if (iVar5 < 3) {
    if (iVar5 == 1) {
      iVar5 = *param_3;
      do {
        if (iVar5 < 1) {
          if ((int)uVar4 <= *param_2) {
            return;
          }
        }
        else if (*param_2 <= (int)uVar4) {
          return;
        }
        *param_5 = *(undefined4 *)(lVar2 + (long)(int)uVar4 * 4);
        iVar5 = *param_3;
        uVar4 = iVar5 + uVar4;
        param_5 = param_5 + 1;
      } while( true );
    }
    if (iVar5 == 2) {
      iVar5 = *param_3;
LAB_109c5f540:
      uStack_18 = (ulong)uVar4;
      if (iVar5 < 1) {
        if ((int)uVar4 <= *param_2) {
          return;
        }
      }
      else if (*param_2 <= (int)uVar4) {
        return;
      }
      uVar4 = param_1[1];
      iVar5 = param_3[1];
      do {
        uStack_18 = CONCAT44(uVar4,(int)uStack_18);
        if (iVar5 < 1) {
          if ((int)uVar4 <= param_2[1]) goto LAB_109c5f5ec;
        }
        else if (param_2[1] <= (int)uVar4) goto LAB_109c5f5ec;
        lVar8 = 0;
        iVar5 = 0;
        piVar6 = (int *)&uStack_18;
        bVar1 = true;
        do {
          bVar9 = bVar1;
          if (lVar8 < *(int *)(param_4 + 8)) {
            iVar7 = *(int *)(param_4 + 0xc + lVar8 * 4);
          }
          else {
            iVar7 = -1;
          }
          iVar5 = *piVar6 + iVar7 * iVar5;
          lVar8 = 1;
          piVar6 = (int *)((ulong)&uStack_18 | 4);
          bVar1 = false;
        } while (bVar9);
        *param_5 = *(undefined4 *)(lVar2 + (long)iVar5 * 4);
        iVar5 = param_3[1];
        uVar4 = uVar4 + iVar5;
        param_5 = param_5 + 1;
      } while( true );
    }
  }
  else {
    if (iVar5 == 3) {
      iVar5 = *param_3;
LAB_109c5f780:
      uStack_18 = (ulong)uVar4;
      if (iVar5 < 1) {
        if ((int)uVar4 <= *param_2) {
          return;
        }
      }
      else if (*param_2 <= (int)uVar4) {
        return;
      }
      uVar4 = param_1[1];
      iVar5 = param_3[1];
LAB_109c5f7ac:
      uStack_18 = CONCAT44(uVar4,(int)uStack_18);
      if (iVar5 < 1) {
        if ((int)uVar4 <= param_2[1]) goto LAB_109c5f858;
      }
      else if (param_2[1] <= (int)uVar4) goto LAB_109c5f858;
      uStack_10._0_4_ = param_1[2];
      iVar5 = param_3[2];
      do {
        uStack_10._4_4_ = 0;
        if (iVar5 < 1) {
          if ((int)(uint)uStack_10 <= param_2[2]) goto LAB_109c5f848;
        }
        else if (param_2[2] <= (int)(uint)uStack_10) goto LAB_109c5f848;
        lVar8 = 0;
        iVar5 = 0;
        do {
          if (lVar8 < *(int *)(param_4 + 8)) {
            iVar7 = *(int *)(param_4 + 0xc + lVar8 * 4);
          }
          else {
            iVar7 = -1;
          }
          iVar5 = *(int *)((long)&uStack_18 + lVar8 * 4) + iVar7 * iVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        *param_5 = *(undefined4 *)(lVar2 + (long)iVar5 * 4);
        iVar5 = param_3[2];
        uStack_10._0_4_ = (uint)uStack_10 + iVar5;
        param_5 = param_5 + 1;
      } while( true );
    }
    if (iVar5 == 4) {
      iVar5 = *param_3;
LAB_109c5f618:
      uStack_18 = (ulong)uVar4;
      if (iVar5 < 1) {
        if ((int)uVar4 <= *param_2) {
          return;
        }
      }
      else if (*param_2 <= (int)uVar4) {
        return;
      }
      uVar4 = param_1[1];
      iVar5 = param_3[1];
LAB_109c5f644:
      uStack_18 = CONCAT44(uVar4,(int)uStack_18);
      if (iVar5 < 1) {
        if ((int)uVar4 <= param_2[1]) goto LAB_109c5f72c;
      }
      else if (param_2[1] <= (int)uVar4) goto LAB_109c5f72c;
      uVar3 = param_1[2];
      iVar5 = param_3[2];
LAB_109c5f670:
      uStack_10 = (ulong)uVar3;
      if (iVar5 < 1) {
        if ((int)uVar3 <= param_2[2]) goto LAB_109c5f71c;
      }
      else if (param_2[2] <= (int)uVar3) goto LAB_109c5f71c;
      uVar3 = param_1[3];
      iVar5 = param_3[3];
      do {
        uStack_10 = CONCAT44(uVar3,(uint)uStack_10);
        if (iVar5 < 1) {
          if ((int)uVar3 <= param_2[3]) goto LAB_109c5f70c;
        }
        else if (param_2[3] <= (int)uVar3) goto LAB_109c5f70c;
        lVar8 = 0;
        iVar5 = 0;
        do {
          if (lVar8 < *(int *)(param_4 + 8)) {
            iVar7 = *(int *)(param_4 + 0xc + lVar8 * 4);
          }
          else {
            iVar7 = -1;
          }
          iVar5 = *(int *)((long)&uStack_18 + lVar8 * 4) + iVar7 * iVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 4);
        *param_5 = *(undefined4 *)(lVar2 + (long)iVar5 * 4);
        iVar5 = param_3[3];
        uVar3 = uVar3 + iVar5;
        param_5 = param_5 + 1;
      } while( true );
    }
  }
  iVar5 = *param_3;
LAB_109c5f874:
  uStack_18 = (ulong)uVar4;
  if (iVar5 < 1) {
    if ((int)uVar4 <= *param_2) {
      return;
    }
  }
  else if (*param_2 <= (int)uVar4) {
    return;
  }
  uVar4 = param_1[1];
  iVar5 = param_3[1];
LAB_109c5f8a0:
  uStack_18 = CONCAT44(uVar4,(int)uStack_18);
  if (iVar5 < 1) {
    if ((int)uVar4 <= param_2[1]) goto LAB_109c5f9c4;
  }
  else if (param_2[1] <= (int)uVar4) goto LAB_109c5f9c4;
  uVar3 = param_1[2];
  iVar5 = param_3[2];
LAB_109c5f8cc:
  uStack_10 = (ulong)uVar3;
  if (iVar5 < 1) {
    if ((int)uVar3 <= param_2[2]) goto LAB_109c5f9b4;
  }
  else if (param_2[2] <= (int)uVar3) goto LAB_109c5f9b4;
  uVar3 = param_1[3];
  iVar5 = param_3[3];
LAB_109c5f8f8:
  uStack_10 = CONCAT44(uVar3,(uint)uStack_10);
  if (iVar5 < 1) {
    if ((int)uVar3 <= param_2[3]) goto LAB_109c5f9a4;
  }
  else if (param_2[3] <= (int)uVar3) goto LAB_109c5f9a4;
  uStack_8 = param_1[4];
  iVar5 = param_3[4];
  do {
    if (iVar5 < 1) {
      if ((int)uStack_8 <= param_2[4]) goto LAB_109c5f994;
    }
    else if (param_2[4] <= (int)uStack_8) goto LAB_109c5f994;
    lVar8 = 0;
    iVar5 = 0;
    do {
      if (lVar8 < *(int *)(param_4 + 8)) {
        iVar7 = *(int *)(param_4 + 0xc + lVar8 * 4);
      }
      else {
        iVar7 = -1;
      }
      iVar5 = *(int *)((long)&uStack_18 + lVar8 * 4) + iVar7 * iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 5);
    *param_5 = *(undefined4 *)(lVar2 + (long)iVar5 * 4);
    iVar5 = param_3[4];
    uStack_8 = uStack_8 + iVar5;
    param_5 = param_5 + 1;
  } while( true );
LAB_109c5f858:
  iVar5 = *param_3;
  uVar4 = (int)uStack_18 + iVar5;
  goto LAB_109c5f780;
LAB_109c5f848:
  iVar5 = param_3[1];
  uVar4 = uVar4 + iVar5;
  goto LAB_109c5f7ac;
LAB_109c5f72c:
  iVar5 = *param_3;
  uVar4 = (int)uStack_18 + iVar5;
  goto LAB_109c5f618;
LAB_109c5f71c:
  iVar5 = param_3[1];
  uVar4 = uVar4 + iVar5;
  goto LAB_109c5f644;
LAB_109c5f70c:
  iVar5 = param_3[2];
  uVar3 = (uint)uStack_10 + iVar5;
  goto LAB_109c5f670;
LAB_109c5f5ec:
  iVar5 = *param_3;
  uVar4 = (int)uStack_18 + iVar5;
  goto LAB_109c5f540;
LAB_109c5f9c4:
  iVar5 = *param_3;
  uVar4 = (int)uStack_18 + iVar5;
  goto LAB_109c5f874;
LAB_109c5f9b4:
  iVar5 = param_3[1];
  uVar4 = uVar4 + iVar5;
  goto LAB_109c5f8a0;
LAB_109c5f9a4:
  iVar5 = param_3[2];
  uVar3 = (uint)uStack_10 + iVar5;
  goto LAB_109c5f8cc;
LAB_109c5f994:
  iVar5 = param_3[3];
  uVar3 = uVar3 + iVar5;
  goto LAB_109c5f8f8;
}



/* Entry: 109c5f9dc; end: 109c5fab7;  */

undefined8 * FUN_109c5f9dc(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e810;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f73);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5fab8; end: 109c5fabb;  */

undefined8 * FUN_109c5fab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5fabc; end: 109c5facf;  */

void FUN_109c5fabc(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5fad0; end: 109c5fcef;  */

undefined8 * FUN_109c5fad0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x21;
  ulong unaff_x22;
  long lVar9;
  undefined8 auStack_138 [2];
  char cStack_121;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int aiStack_b4 [5];
  undefined8 auStack_a0 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    unaff_x21 = *(long *)*param_2;
    if (*(int *)(unaff_x21 + 0x3c) == 0) {
      lVar9 = (long)*(int *)(unaff_x21 + 8) + -1;
    }
    else {
      lVar9 = 1;
    }
    uStack_b8 = 4;
    aiStack_b4[2] = 0;
    aiStack_b4[3] = 0;
    aiStack_b4[0] = 0;
    aiStack_b4[1] = 0;
    aiStack_b4[4] = 0;
    iVar2 = *(int *)(param_1 + 0x90);
    aiStack_b4[lVar9] = iVar2;
    unaff_x22 = (ulong)&uStack_d0 | 4;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    if ((int *)(unaff_x21 + 8U) != (int *)&uStack_d0) {
      iVar3 = *(int *)(unaff_x21 + 8U);
      if (iVar3 != 0) {
        _memmove(unaff_x22,unaff_x21 + 0xc,(long)iVar3 << 2);
      }
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar3);
    }
    *(int *)(unaff_x22 + lVar9 * 4) = *(int *)(param_1 + 0x94) - iVar2;
    FUN_109c16e90(auStack_a0,unaff_x21,&uStack_b8,&uStack_d0,param_1 + 0x68);
    FUN_109c18570(&uStack_e0,auStack_a0);
    func_0x000109c1eab4(param_3,&uStack_e0);
    if (plStack_d8 == (long *)0x0) goto LAB_109c5fc70;
    plVar1 = plStack_d8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_d8;
    } while (cVar4 != '\0');
  }
  else {
    uStack_c8 = *(undefined8 *)(param_1 + 0xa4);
    uStack_d0 = *(undefined8 *)(param_1 + 0x9c);
    plStack_d8 = *(long **)(param_1 + 0xb4);
    uStack_e0 = *(undefined8 *)(param_1 + 0xac);
    uStack_e8 = *(undefined8 *)(param_1 + 0xc4);
    uStack_f0 = *(undefined8 *)(param_1 + 0xbc);
    func_0x000109c17024(auStack_a0,*(undefined8 *)*param_2,&uStack_d0,&uStack_e0,&uStack_f0,
                        param_1 + 0x68);
    FUN_109c18570(&uStack_b8,auStack_a0);
    func_0x000109c1eab4(param_3,&uStack_b8);
    plVar8 = (long *)CONCAT44(aiStack_b4[2],aiStack_b4[1]);
    if (plVar8 == (long *)0x0) goto LAB_109c5fc70;
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_109c5fc70:
  puVar6 = auStack_a0;
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10959b818(&uStack_e0);
    FUN_109c180ec(auStack_a0);
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_f8 = FUN_109c5fcf0;
    uStack_120 = unaff_x22;
    lStack_118 = unaff_x21;
    lStack_110 = param_1;
    puStack_108 = puVar6;
    puStack_100 = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)puVar7 + 0x59) = 0;
    *(undefined8 *)((long)puVar7 + 0x51) = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *(undefined2 *)((long)puVar7 + 0x61) = 1;
    *(undefined1 *)((long)puVar7 + 99) = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0x3f800000;
    *(undefined1 *)(puVar7 + 0x10) = 0;
    *(undefined1 *)((long)puVar7 + 0x84) = 0;
    *(undefined1 *)(puVar7 + 0x11) = 0;
    *(undefined1 *)((long)puVar7 + 0x8c) = 0;
    *puVar7 = &PTR_FUN_110b2e850;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    func_0x000107c31940(auStack_138,&UNK_10f5a5f7e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar7 + 6,auStack_138)
    ;
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    return puVar7;
  }
  return puVar6;
}



/* Entry: 109c5fcf0; end: 109c5fde7;  */

undefined8 * FUN_109c5fcf0(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e850;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5f7e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c5fde8; end: 109c5fe23;  */

undefined8 * FUN_109c5fde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e850;
  if (param_1[0x13] != 0) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5fe24; end: 109c5fe27;  */

undefined8 * FUN_109c5fe24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e850;
  if (param_1[0x13] != 0) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5fe28; end: 109c5fe3b;  */

void FUN_109c5fe28(void)

{
  FUN_109c5fde8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5fe3c; end: 109c602ff;  */

void FUN_109c5fe3c(long param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint auStack_c8 [6];
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*param_2;
  if (*(char *)(*plVar15 + 0x48) == '\x04') {
    iVar17 = *(int *)(param_1 + 0x90);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar2 = *(long *)(param_1 + 0x98);
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar6 = lVar3 - lVar2 >> 2;
    FUN_109c182f4(param_3);
    lVar16 = *plVar15;
    piVar13 = (int *)((ulong)auStack_c8 | 4);
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    if ((uint *)(lVar16 + 8U) == auStack_c8) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(uint *)(lVar16 + 8U);
      if (uVar19 != 0) {
        _memmove(piVar13,lVar16 + 0xc,(long)(int)uVar19 << 2);
      }
      auStack_c8[0] = uVar19;
    }
    uVar1 = (uVar19 & iVar17 >> 0x1f) + iVar17;
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    iVar17 = 1;
    uVar12 = uVar7;
    piVar11 = piVar13;
    if (uVar1 != 0) {
      do {
        iVar17 = *piVar11 * iVar17;
        uVar12 = uVar12 - 4;
        piVar11 = piVar11 + 1;
      } while (uVar12 != 0);
    }
    if (auStack_c8 + (long)(int)uVar1 + 2 == (uint *)(piVar13 + (int)uVar19)) {
      iVar18 = 1;
    }
    else {
      lVar8 = ((long)(int)uVar19 * 4 - uVar7) + -4;
      iVar18 = 1;
      puVar9 = auStack_c8 + (long)(int)uVar1 + 2;
      do {
        iVar18 = *puVar9 * iVar18;
        lVar8 = lVar8 + -4;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
    }
    if (lVar3 != lVar2) {
      lVar8 = 0;
      uVar12 = 0;
      do {
        piVar13[(int)uVar1] = *(int *)(*(long *)(param_1 + 0x98) + uVar12 * 4);
        (*(code *)**(undefined8 **)*puVar10)
                  (auStack_b0,(undefined8 *)*puVar10,auStack_c8,*(undefined1 *)(lVar16 + 0x48));
        func_0x000109c18360(*param_3 + lVar8,auStack_b0);
        FUN_109c180ec(auStack_b0);
        lVar16 = *plVar15;
        *(undefined4 *)(*(long *)(*param_3 + lVar8) + 0x3c) = *(undefined4 *)(lVar16 + 0x3c);
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar6 != uVar12);
    }
    if (0 < iVar17) {
      iVar14 = 0;
      lVar16 = *(long *)(lVar16 + 0x40);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        if (lVar3 != lVar2) {
          lVar8 = 0;
          uVar12 = 0;
          do {
            iVar4 = *(int *)(*(long *)(param_1 + 0x98) + uVar12 * 4) * iVar18;
            if (iVar4 != 0) {
              _memmove(*(long *)(*(long *)(*param_3 + lVar8) + 0x40) + (long)(iVar4 * iVar14) * 4,
                       lVar16,(long)iVar4 << 2);
            }
            lVar16 = lVar16 + (long)iVar4 * 4;
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar6 != uVar12);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar17);
    }
  }
  else {
    if (*(char *)(*plVar15 + 0x48) != '\x01') goto LAB_109c60288;
    iVar17 = *(int *)(param_1 + 0x90);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar2 = *(long *)(param_1 + 0x98);
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar6 = lVar3 - lVar2 >> 2;
    FUN_109c182f4(param_3);
    lVar16 = *plVar15;
    piVar13 = (int *)((ulong)auStack_c8 | 4);
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    if ((uint *)(lVar16 + 8U) == auStack_c8) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(uint *)(lVar16 + 8U);
      if (uVar19 != 0) {
        _memmove(piVar13,lVar16 + 0xc,(long)(int)uVar19 << 2);
      }
      auStack_c8[0] = uVar19;
    }
    uVar1 = (uVar19 & iVar17 >> 0x1f) + iVar17;
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    iVar17 = 1;
    uVar12 = uVar7;
    piVar11 = piVar13;
    if (uVar1 != 0) {
      do {
        iVar17 = *piVar11 * iVar17;
        uVar12 = uVar12 - 4;
        piVar11 = piVar11 + 1;
      } while (uVar12 != 0);
    }
    if (auStack_c8 + (long)(int)uVar1 + 2 == (uint *)(piVar13 + (int)uVar19)) {
      iVar18 = 1;
    }
    else {
      lVar8 = ((long)(int)uVar19 * 4 - uVar7) + -4;
      iVar18 = 1;
      puVar9 = auStack_c8 + (long)(int)uVar1 + 2;
      do {
        iVar18 = *puVar9 * iVar18;
        lVar8 = lVar8 + -4;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
    }
    if (lVar3 != lVar2) {
      lVar8 = 0;
      uVar12 = 0;
      do {
        piVar13[(int)uVar1] = *(int *)(*(long *)(param_1 + 0x98) + uVar12 * 4);
        (*(code *)**(undefined8 **)*puVar10)
                  (auStack_b0,(undefined8 *)*puVar10,auStack_c8,*(undefined1 *)(lVar16 + 0x48));
        func_0x000109c18360(*param_3 + lVar8,auStack_b0);
        FUN_109c180ec(auStack_b0);
        lVar16 = *plVar15;
        *(undefined4 *)(*(long *)(*param_3 + lVar8) + 0x3c) = *(undefined4 *)(lVar16 + 0x3c);
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar6 != uVar12);
    }
    if (0 < iVar17) {
      iVar14 = 0;
      lVar16 = *(long *)(lVar16 + 0x40);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        if (lVar3 != lVar2) {
          lVar8 = 0;
          uVar12 = 0;
          do {
            iVar4 = *(int *)(*(long *)(param_1 + 0x98) + uVar12 * 4) * iVar18;
            if (iVar4 != 0) {
              _memmove(*(long *)(*(long *)(*param_3 + lVar8) + 0x40) + (long)(iVar4 * iVar14) * 4,
                       lVar16,(long)iVar4 << 2);
            }
            lVar16 = lVar16 + (long)iVar4 * 4;
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar6 != uVar12);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar17);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109c60288:
  FUN_109c129d4(auStack_c8);
  FUN_10928a5e0(auStack_b0,&UNK_10f5a3e0d,auStack_c8);
  func_0x000105687ee0(auStack_b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c602b0);
  (*pcVar5)();
}



/* Entry: 109c60300; end: 109c603f3;  */

undefined8 * FUN_109c60300(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e890;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5f84);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c603f4; end: 109c6042f;  */

undefined8 * FUN_109c603f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e890;
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c60430; end: 109c60433;  */

undefined8 * FUN_109c60430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e890;
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c60434; end: 109c60447;  */

void FUN_109c60434(void)

{
  FUN_109c603f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c60448; end: 109c6067f;  */

undefined ** FUN_109c60448(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  int iVar13;
  ulong *puVar14;
  long *plVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_f8;
  float fStack_f4;
  ulong auStack_a8 [3];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  plVar15 = (long *)*param_2;
  plVar11 = (long *)*param_3;
  if (*(char *)(param_1 + 99) == '\x01') {
    func_0x000109c1e534(plVar11,plVar15);
  }
  else {
    FUN_109c1bed0(&puStack_90,**(undefined8 **)(param_1 + 0x68),*plVar15);
    func_0x000109c18360(plVar11,&puStack_90);
    FUN_109c180ec(&puStack_90);
  }
  lVar8 = *plVar15;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  auStack_a8[0] = 0;
  uVar3 = *(uint *)(lVar8 + 8);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    puVar1 = *(uint **)(param_1 + 0x90);
    puVar2 = *(uint **)(param_1 + 0x98);
    do {
      iVar13 = *(int *)(lVar8 + 0xc + uVar7 * 4);
      if (iVar13 < 2) {
        puVar9 = puVar1;
        if (puVar1 != puVar2) {
          do {
            if (uVar7 == *puVar9) {
              if (puVar9 != puVar2) goto LAB_109c6054c;
              break;
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar2);
          goto LAB_109c6053c;
        }
      }
      else {
LAB_109c6053c:
        lVar10 = (long)(int)(uint)auStack_a8[0];
        auStack_a8[0] = (ulong)((uint)auStack_a8[0] + 1);
        *(int *)(((ulong)auStack_a8 | 4) + lVar10 * 4) = iVar13;
      }
LAB_109c6054c:
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  lVar8 = *plVar11;
  puVar14 = (ulong *)(lVar8 + 8);
  uVar3 = *(uint *)puVar14 & ((int)*(uint *)puVar14 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar13 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar3);
  iVar4 = 0xf5749aa;
  plVar15 = (long *)((ulong)auStack_a8 | 4);
  plVar11 = (long *)0x1a;
  FUN_109c60fbc();
  puStack_90 = &UNK_10f574cf1;
  uStack_88 = 0xf;
  puStack_78 = &UNK_10f574d01;
  uStack_70 = 0xe;
  ppuVar5 = &puStack_90;
  uStack_80 = iVar13 == iVar4;
  FUN_10959b640();
  if (puVar14 != auStack_a8 && iVar13 == iVar4) {
    uVar3 = (uint)auStack_a8[0];
    if ((uint)auStack_a8[0] != 0) {
      plVar15 = (long *)((long)(int)(uint)auStack_a8[0] << 2);
      ppuVar5 = (undefined **)(lVar8 + 0xc);
      plVar11 = (long *)((ulong)auStack_a8 | 4);
      _memmove();
    }
    *(uint *)puVar14 = uVar3;
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_90);
  __Unwind_Resume();
  lVar8 = (long)*(int *)((long)ppuVar5 + 0x84);
  fVar18 = (1.0 / *(float *)(ppuVar5 + 0x10)) * 6.0;
  fVar20 = (float)(0x7f - lVar8);
  if (fVar18 <= (float)(0x7f - lVar8)) {
    fVar20 = fVar18;
  }
  fVar19 = (float)(-0x80 - lVar8);
  if ((float)(-0x80 - lVar8) <= fVar18) {
    fVar19 = (float)(int)fVar20;
  }
  lVar8 = (long)fVar19 + lVar8;
  if (lVar8 < -0x7f) {
    lVar8 = -0x80;
  }
  if (0x7e < lVar8) {
    lVar8 = 0x7f;
  }
  ppuVar17 = ppuVar5 + 2;
  puVar6 = *ppuVar17;
  if (puVar6 == (undefined *)0x0) {
    fStack_f8 = (float)(int)(char)*(int *)((long)ppuVar5 + 0x84);
    fStack_f4 = (float)(int)lVar8;
    iVar13 = 4;
    func_0x000109bd6948(4,3,3,&fStack_f8,0,&UNK_10e03aba0,&UNK_10e03aba0,0,ppuVar17);
    if (iVar13 != 0) {
      return (undefined **)0x0;
    }
    puVar6 = *ppuVar17;
    if (puVar6 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
  }
  lVar8 = *plVar11;
  lVar10 = (long)*(int *)(lVar8 + 0x10) * (long)*(int *)(lVar8 + 0xc) * (long)*(int *)(lVar8 + 0x14)
  ;
  puVar16 = *(undefined **)(lVar8 + 0x40);
  puVar12 = *(undefined **)(*plVar15 + 0x40);
  iVar13 = (int)lVar10;
  if (((puVar16 == ppuVar5[0x15]) && (puVar12 == ppuVar5[0x16])) &&
     (iVar13 == *(int *)(ppuVar5 + 0x14))) {
LAB_109c60798:
    func_0x000109bce408(puVar6);
    return (undefined **)(ulong)((int)puVar6 == 0);
  }
  lVar8 = (long)*(int *)(lVar8 + 0x18);
  func_0x000109bd7038(puVar6,lVar10,lVar8,lVar8,lVar8,*(undefined8 *)(ppuVar5[0xe] + 0x90));
  if ((int)puVar6 == 0) {
    puVar6 = *ppuVar17;
    func_0x000109bd7268(puVar6,puVar16,puVar12);
    if ((int)puVar6 == 0) {
      ppuVar5[0x15] = puVar16;
      ppuVar5[0x16] = puVar12;
      *(int *)(ppuVar5 + 0x14) = iVar13;
      puVar6 = ppuVar5[2];
      goto LAB_109c60798;
    }
  }
  return (undefined **)0x0;
}



/* Entry: 109c60680; end: 109c606e3;  */

bool FUN_109c60680(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_48;
  float fStack_44;
  
  lVar2 = (long)*(int *)(param_1 + 0x84);
  fVar8 = (1.0 / *(float *)(param_1 + 0x80)) * 6.0;
  fVar10 = (float)(0x7f - lVar2);
  if (fVar8 <= (float)(0x7f - lVar2)) {
    fVar10 = fVar8;
  }
  fVar9 = (float)(-0x80 - lVar2);
  if ((float)(-0x80 - lVar2) <= fVar8) {
    fVar9 = (float)(int)fVar10;
  }
  lVar2 = (long)fVar9 + lVar2;
  if (lVar2 < -0x7f) {
    lVar2 = -0x80;
  }
  if (0x7e < lVar2) {
    lVar2 = 0x7f;
  }
  plVar7 = (long *)(param_1 + 0x10);
  lVar1 = *plVar7;
  if (lVar1 == 0) {
    fStack_48 = (float)(int)(char)*(int *)(param_1 + 0x84);
    fStack_44 = (float)(int)lVar2;
    iVar4 = 4;
    func_0x000109bd6948(4,3,3,&fStack_48,0,&UNK_10e03aba0,&UNK_10e03aba0,0,plVar7);
    if (iVar4 != 0) {
      return false;
    }
    lVar1 = *plVar7;
    if (lVar1 == 0) {
      return false;
    }
  }
  lVar2 = *param_2;
  lVar5 = (long)*(int *)(lVar2 + 0x10) * (long)*(int *)(lVar2 + 0xc) * (long)*(int *)(lVar2 + 0x14);
  lVar6 = *(long *)(lVar2 + 0x40);
  lVar3 = *(long *)(*param_3 + 0x40);
  iVar4 = (int)lVar5;
  if (((lVar6 == *(long *)(param_1 + 0xa8)) && (lVar3 == *(long *)(param_1 + 0xb0))) &&
     (iVar4 == *(int *)(param_1 + 0xa0))) {
LAB_109c60798:
    func_0x000109bce408(lVar1);
    return (int)lVar1 == 0;
  }
  lVar2 = (long)*(int *)(lVar2 + 0x18);
  func_0x000109bd7038(lVar1,lVar5,lVar2,lVar2,lVar2,
                      *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x90));
  if ((int)lVar1 == 0) {
    lVar2 = *plVar7;
    func_0x000109bd7268(lVar2,lVar6,lVar3);
    if ((int)lVar2 == 0) {
      *(long *)(param_1 + 0xa8) = lVar6;
      *(long *)(param_1 + 0xb0) = lVar3;
      *(int *)(param_1 + 0xa0) = iVar4;
      lVar1 = *(long *)(param_1 + 0x10);
      goto LAB_109c60798;
    }
  }
  return false;
}



/* Entry: 109c606e4; end: 109c60c7f;  */

bool FUN_109c606e4(long param_1,long *param_2,long *param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fStack_48;
  float fStack_44;
  
  plVar7 = (long *)(param_1 + 0x10);
  lVar1 = *plVar7;
  if (lVar1 == 0) {
    fStack_48 = (float)param_4;
    fStack_44 = (float)param_5;
    iVar4 = 4;
    func_0x000109bd6948(4,3,3,&fStack_48,0,&UNK_10e03aba0,&UNK_10e03aba0,0,plVar7);
    if (iVar4 != 0) {
      return false;
    }
    lVar1 = *plVar7;
    if (lVar1 == 0) {
      return false;
    }
  }
  lVar2 = *param_2;
  lVar5 = (long)*(int *)(lVar2 + 0x10) * (long)*(int *)(lVar2 + 0xc) * (long)*(int *)(lVar2 + 0x14);
  lVar6 = *(long *)(lVar2 + 0x40);
  lVar3 = *(long *)(*param_3 + 0x40);
  iVar4 = (int)lVar5;
  if (((lVar6 == *(long *)(param_1 + 0xa8)) && (lVar3 == *(long *)(param_1 + 0xb0))) &&
     (iVar4 == *(int *)(param_1 + 0xa0))) {
LAB_109c60798:
    func_0x000109bce408(lVar1);
    return (int)lVar1 == 0;
  }
  lVar2 = (long)*(int *)(lVar2 + 0x18);
  func_0x000109bd7038(lVar1,lVar5,lVar2,lVar2,lVar2,
                      *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x90));
  if ((int)lVar1 == 0) {
    lVar1 = *plVar7;
    func_0x000109bd7268(lVar1,lVar6,lVar3);
    if ((int)lVar1 == 0) {
      *(long *)(param_1 + 0xa8) = lVar6;
      *(long *)(param_1 + 0xb0) = lVar3;
      *(int *)(param_1 + 0xa0) = iVar4;
      lVar1 = *(long *)(param_1 + 0x10);
      goto LAB_109c60798;
    }
  }
  return false;
}



/* Entry: 109c60c80; end: 109c60f3b;  */

undefined8 FUN_109c60c80(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  char cVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  iVar8 = *(int *)(param_1 + 0xb0);
  lVar17 = *(long *)(param_1 + 0xa0);
  plVar5 = *(long **)(param_1 + 0xa8);
  if (plVar5 != (long *)0x0) {
    plVar15 = plVar5 + 1;
    do {
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = *plVar15 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  if (iVar8 == 2) {
    bVar7 = *(float *)(param_1 + 0x98) == -1.0;
  }
  else {
    bVar7 = false;
  }
  plVar15 = (long *)(param_1 + 0x10);
  lStack_60 = lVar17;
  plStack_58 = plVar5;
  if (*plVar15 == 0) {
    if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
      fVar19 = *(float *)(param_1 + 0x80);
      cVar12 = -0x80;
    }
    else {
      fVar19 = *(float *)(param_1 + 0x80);
      iVar13 = *(int *)(param_1 + 0x84) + (int)(*(float *)(param_1 + 0x88) / fVar19);
      if (iVar13 < -0x7f) {
        iVar13 = -0x80;
      }
      if (0x7e < iVar13) {
        iVar13 = 0x7f;
      }
      cVar12 = (char)iVar13;
    }
    if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
      iVar13 = *(int *)(param_1 + 0x84);
      cVar14 = '\x7f';
    }
    else {
      iVar13 = *(int *)(param_1 + 0x84);
      iVar1 = iVar13 + (int)(*(float *)(param_1 + 0x90) / fVar19);
      if (iVar1 < -0x7f) {
        iVar1 = -0x80;
      }
      if (0x7e < iVar1) {
        iVar1 = 0x7f;
      }
      cVar14 = (char)iVar1;
    }
    uVar3 = 2;
    if (iVar8 != 0) {
      uVar3 = iVar8 != 1;
    }
    lVar11 = lVar17;
    lVar16 = *param_2;
    if (!bVar7) {
      lVar11 = *param_2;
      lVar16 = lVar17;
    }
    lVar18 = (long)*(char *)(lVar11 + 0x50);
    FUN_109c62690(*(undefined4 *)(lVar11 + 0x4c),*(undefined4 *)(lVar16 + 0x4c),lVar18,
                  (long)*(char *)(lVar16 + 0x50),(int)(char)iVar13,uVar3,(int)cVar12,(int)cVar14,0,
                  plVar15);
    if (((int)lVar18 == 0) && (*plVar15 != 0)) {
      *(code **)(param_1 + 0x18) = FUN_109c629f4;
      goto LAB_109c60cf8;
    }
  }
  else {
LAB_109c60cf8:
    lVar11 = *param_2;
    lVar18 = *(long *)(lVar11 + 0x40);
    lVar17 = *(long *)(lVar17 + 0x40);
    lVar16 = *(long *)(*param_3 + 0x40);
    uVar2 = *(uint *)(lVar11 + 8) & ((int)*(uint *)(lVar11 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iVar8 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar11 + 0xc,uVar2);
    if (((lVar18 == *(long *)(param_1 + 0xc0)) && (lVar16 == *(long *)(param_1 + 200))) &&
       (iVar8 == *(int *)(param_1 + 0xb8))) {
LAB_109c60dbc:
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      FUN_109c62ab8(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x90));
      goto joined_r0x000109c60eb0;
    }
    uStack_68 = 1;
    lStack_70 = (long)iVar8;
    lVar11 = *plVar15;
    plVar4 = &lStack_70;
    plVar6 = &uStack_68;
    if (!bVar7) {
      plVar4 = &uStack_68;
      plVar6 = &lStack_70;
    }
    FUN_109c62890(lVar11,1,plVar6,1,plVar4,0);
    if ((int)lVar11 == 0) {
      lVar9 = *plVar15;
      lVar11 = lVar18;
      if (!bVar7) {
        lVar11 = lVar17;
        lVar17 = lVar18;
      }
      FUN_109c6297c(lVar9,lVar17,lVar11,lVar16);
      if ((int)lVar9 == 0) {
        *(int *)(param_1 + 0xb8) = iVar8;
        *(long *)(param_1 + 0xc0) = lVar18;
        *(long *)(param_1 + 200) = lVar16;
        goto LAB_109c60dbc;
      }
    }
  }
  uVar10 = 0;
joined_r0x000109c60eb0:
  if (plVar5 != (long *)0x0) {
    plVar15 = plVar5 + 1;
    do {
      lVar17 = *plVar15;
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar17 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return uVar10;
}



/* Entry: 109c60f3c; end: 109c60fbb;  */

undefined8 FUN_109c60f3c(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam00000001138332d8 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1138332d8,&ppuStack_20,0x109c60f94);
  }
  return 1;
}



/* Entry: 109c60fbc; end: 109c61187;  */

long FUN_109c60fbc(undefined8 param_1,ulong param_2,int *param_3,long param_4)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  ulong uVar4;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  undefined8 **ppuStack_30;
  
  if (param_4 == 0) {
    lVar3 = 1;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((param_2 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((param_2 | 7) + 1);
    }
    uVar4 = (ulong)ppppuVar2 | 0x8000000000000000;
    param_4 = param_4 << 2;
    lVar3 = 1;
    do {
      if (*param_3 < 0) {
        if (0x7ffffffffffffff7 < param_2) {
LAB_109c61068:
          func_0x000104c4f6b8();
          goto LAB_109c6106c;
        }
        if (param_2 < 0x17) {
          uStack_48 = CONCAT17((char)param_2,(undefined7)uStack_48);
          ppppuVar2 = &pppuStack_58;
          if (param_2 != 0) goto LAB_109c610a0;
        }
        else {
          __Znwm();
          pppuStack_58 = ppppuVar2;
          uStack_50 = param_2;
          uStack_48 = uVar4;
LAB_109c610a0:
          _memmove(ppppuVar2,param_1,param_2);
        }
        *(undefined1 *)((long)ppppuVar2 + param_2) = 0;
        ppppuVar2 = &pppuStack_58;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar2,&UNK_10f5a5fc6,0x1a);
        ppuStack_38 = ppppuVar2[1];
        ppuStack_40 = *ppppuVar2;
        ppuStack_30 = ppppuVar2[2];
        ppppuVar2[1] = (undefined8 ***)0x0;
        ppppuVar2[2] = (undefined8 ***)0x0;
        *ppppuVar2 = (undefined8 ***)0x0;
        FUN_109c61b6c(&ppuStack_40);
        goto LAB_109c61148;
      }
      lVar3 = (long)(int)lVar3 * (long)*param_3;
      if (lVar3 - (int)lVar3 != 0) {
        if (0x7ffffffffffffff7 < param_2) goto LAB_109c61068;
LAB_109c6106c:
        if (param_2 < 0x17) {
          uStack_48 = CONCAT17((char)param_2,(undefined7)uStack_48);
          ppppuVar2 = &pppuStack_58;
          if (param_2 != 0) goto LAB_109c61100;
        }
        else {
          __Znwm();
          pppuStack_58 = ppppuVar2;
          uStack_50 = param_2;
          uStack_48 = uVar4;
LAB_109c61100:
          _memmove(ppppuVar2,param_1,param_2);
        }
        *(undefined1 *)((long)ppppuVar2 + param_2) = 0;
        ppppuVar2 = &pppuStack_58;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar2,&UNK_10f5a5fe1,0x27);
        ppuStack_38 = ppppuVar2[1];
        ppuStack_40 = *ppppuVar2;
        ppuStack_30 = ppppuVar2[2];
        ppppuVar2[1] = (undefined8 ***)0x0;
        ppppuVar2[2] = (undefined8 ***)0x0;
        *ppppuVar2 = (undefined8 ***)0x0;
        FUN_109c61b6c(&ppuStack_40);
LAB_109c61148:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109c6114c);
        (*pcVar1)();
      }
      param_4 = param_4 + -4;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return lVar3;
}



/* Entry: 109c61188; end: 109c61527;  */

/* WARNING: Removing unreachable block (ram,0x000109c612b0) */

void FUN_109c61188(undefined8 param_1,undefined8 *param_2,int *param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 **ppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  puVar3 = PTR____stderrp_11034bdc8;
  if (param_4 != 0) {
    pppuVar6 = (undefined8 ***)0x19;
    if (((ulong)param_2 | 7) != 0x17) {
      pppuVar6 = (undefined8 ***)(((ulong)param_2 | 7) + 1);
    }
    puVar8 = (undefined8 *)((ulong)pppuVar6 | 0x8000000000000000);
    param_4 = param_4 << 2;
    do {
      iVar1 = *param_3;
      uVar2 = SUB81(param_2,0);
      if (iVar1 < 0) {
        if (param_2 < (undefined8 *)0x7ffffffffffffff8) {
          if (param_2 < (undefined8 *)0x17) {
            uStack_90 = (undefined8 *)CONCAT17(uVar2,(undefined7)uStack_90);
            pppuVar6 = &ppuStack_a0;
            if (param_2 != (undefined8 *)0x0) goto LAB_109c61358;
          }
          else {
            __Znwm();
            ppuStack_a0 = pppuVar6;
            uStack_98 = (ulong)param_2;
            uStack_90 = puVar8;
LAB_109c61358:
            _memmove(pppuVar6,param_1,param_2);
          }
          *(undefined1 *)((long)pppuVar6 + (long)param_2) = 0;
          pppuVar6 = &ppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar6,&UNK_10f5a5fc6,0x1a);
          puStack_78 = pppuVar6[1];
          puStack_80 = *pppuVar6;
          puStack_70 = pppuVar6[2];
          pppuVar6[1] = (undefined8 **)0x0;
          pppuVar6[2] = (undefined8 **)0x0;
          *pppuVar6 = (undefined8 **)0x0;
          FUN_109c61b6c(&puStack_80);
          goto LAB_109c61478;
        }
LAB_109c61324:
        func_0x000104c4f6b8();
LAB_109c61328:
        if (param_2 < (undefined8 *)0x17) {
          uStack_c8 = (undefined8 *)CONCAT17(uVar2,(undefined7)uStack_c8);
          pppuVar6 = &ppuStack_d8;
          if (param_2 != (undefined8 *)0x0) goto LAB_109c613bc;
        }
        else {
          __Znwm();
          ppuStack_d8 = pppuVar6;
          uStack_d0 = (ulong)param_2;
          uStack_c8 = puVar8;
LAB_109c613bc:
          _memmove(pppuVar6,param_1,param_2);
        }
        *(undefined1 *)((long)pppuVar6 + (long)param_2) = 0;
        pppuVar6 = &ppuStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar6,&UNK_10f5a6026,0x23);
        puStack_b8 = pppuVar6[1];
        puStack_c0 = *pppuVar6;
        puStack_b0 = pppuVar6[2];
        pppuVar6[1] = (undefined8 **)0x0;
        pppuVar6[2] = (undefined8 **)0x0;
        *pppuVar6 = (undefined8 **)0x0;
        __ZNSt3__19to_stringEi(&ppuStack_f0,param_5);
        if (-1 < (char)bStack_d9) {
          uStack_e8 = (ulong)bStack_d9;
          ppuStack_f0 = &ppuStack_f0;
        }
        ppuVar7 = &puStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar7,ppuStack_f0,uStack_e8);
        uStack_98 = (ulong)ppuVar7[1];
        ppuStack_a0 = (undefined8 **)*ppuVar7;
        uStack_90 = ppuVar7[2];
        ppuVar7[1] = (undefined8 *)0x0;
        ppuVar7[2] = (undefined8 *)0x0;
        *ppuVar7 = (undefined8 *)0x0;
        pppuVar6 = &ppuStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar6,&DAT_10f684600,1);
        puStack_78 = pppuVar6[1];
        puStack_80 = *pppuVar6;
        puStack_70 = pppuVar6[2];
        pppuVar6[1] = (undefined8 **)0x0;
        pppuVar6[2] = (undefined8 **)0x0;
        *pppuVar6 = (undefined8 **)0x0;
        FUN_109c61b6c(&puStack_80);
LAB_109c61478:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109c6147c);
        (*pcVar4)();
      }
      if (iVar1 == 0) {
        if ((undefined8 *)0x7ffffffffffffff7 < param_2) goto LAB_109c61324;
        if (param_2 < (undefined8 *)0x17) {
          uStack_90 = (undefined8 *)CONCAT17(uVar2,(undefined7)uStack_90);
          pppuVar5 = &ppuStack_a0;
          if (param_2 != (undefined8 *)0x0) goto LAB_109c61248;
        }
        else {
          pppuVar5 = pppuVar6;
          __Znwm();
          ppuStack_a0 = pppuVar5;
          uStack_98 = (ulong)param_2;
          uStack_90 = puVar8;
LAB_109c61248:
          _memmove(pppuVar5,param_1,param_2);
        }
        *(undefined1 *)((long)pppuVar5 + (long)param_2) = 0;
        pppuVar5 = &ppuStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar5,&UNK_10f5a6009,0x1c);
        puStack_78 = pppuVar5[1];
        puStack_80 = *pppuVar5;
        puStack_70 = pppuVar5[2];
        pppuVar5[1] = (undefined8 **)0x0;
        pppuVar5[2] = (undefined8 **)0x0;
        *pppuVar5 = (undefined8 **)0x0;
        _fprintf(*(undefined8 *)puVar3,&UNK_10f5a5fb9);
        if ((long)uStack_90 < 0) {
          __ZdlPv(ppuStack_a0);
        }
      }
      else if ((0 < (int)param_5) && ((int)param_5 < iVar1)) {
        if ((undefined8 *)0x7ffffffffffffff7 < param_2) goto LAB_109c61324;
        goto LAB_109c61328;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -4;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109c61528; end: 109c61b6b;  */

/* WARNING: Removing unreachable block (ram,0x000109c61814) */
/* WARNING: Removing unreachable block (ram,0x000109c61824) */
/* WARNING: Removing unreachable block (ram,0x000109c61674) */
/* WARNING: Removing unreachable block (ram,0x000109c61684) */

void FUN_109c61528(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  ulong uVar9;
  undefined8 *****pppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 *****pppppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 *****pppppuStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *****pppppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  
  uVar1 = (undefined1)param_2;
  if ((int)param_4 < 0) {
    if (0x7ffffffffffffff7 < param_2) goto LAB_109c61908;
    if (param_2 < 0x17) {
      uStack_80 = (undefined8 **)CONCAT17(uVar1,(undefined7)uStack_80);
      ppppppuVar7 = &pppppuStack_90;
      if (param_2 != 0) goto LAB_109c6194c;
    }
    else {
      ppppppuVar8 = (undefined8 ******)0x19;
      if ((param_2 | 7) != 0x17) {
        ppppppuVar8 = (undefined8 ******)((param_2 | 7) + 1);
      }
      ppppppuVar7 = ppppppuVar8;
      __Znwm();
      uStack_80 = (undefined8 **)((ulong)ppppppuVar8 | 0x8000000000000000);
      pppppuStack_90 = ppppppuVar7;
      puStack_88 = (undefined8 *)param_2;
LAB_109c6194c:
      _memmove(ppppppuVar7,param_1,param_2);
    }
    *(undefined1 *)((long)ppppppuVar7 + param_2) = 0;
    ppppppuVar8 = &pppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppuVar8,&UNK_10f5a604a,0x24);
    ppppuStack_68 = ppppppuVar8[1];
    ppppuStack_70 = *ppppppuVar8;
    ppppuStack_60 = ppppppuVar8[2];
    ppppppuVar8[1] = (undefined8 *****)0x0;
    ppppppuVar8[2] = (undefined8 *****)0x0;
    *ppppppuVar8 = (undefined8 *****)0x0;
    FUN_109c61b6c(&ppppuStack_70);
    goto LAB_109c61a7c;
  }
  if ((int)param_5 < 1) {
    if (0x7ffffffffffffff7 < param_2) goto LAB_109c61908;
    if (param_2 < 0x17) {
      uStack_80 = (undefined8 **)CONCAT17(uVar1,(undefined7)uStack_80);
      ppppppuVar7 = &pppppuStack_90;
      if (param_2 != 0) goto LAB_109c619c0;
    }
    else {
      ppppppuVar8 = (undefined8 ******)0x19;
      if ((param_2 | 7) != 0x17) {
        ppppppuVar8 = (undefined8 ******)((param_2 | 7) + 1);
      }
      ppppppuVar7 = ppppppuVar8;
      __Znwm();
      uStack_80 = (undefined8 **)((ulong)ppppppuVar8 | 0x8000000000000000);
      pppppuStack_90 = ppppppuVar7;
      puStack_88 = (undefined8 *)param_2;
LAB_109c619c0:
      _memmove(ppppppuVar7,param_1,param_2);
    }
    *(undefined1 *)((long)ppppppuVar7 + param_2) = 0;
    ppppppuVar8 = &pppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppuVar8,&UNK_10f5a606f,0x1f);
    ppppuStack_68 = ppppppuVar8[1];
    ppppuStack_70 = *ppppppuVar8;
    ppppuStack_60 = ppppppuVar8[2];
    ppppppuVar8[1] = (undefined8 *****)0x0;
    ppppppuVar8[2] = (undefined8 *****)0x0;
    *ppppppuVar8 = (undefined8 *****)0x0;
    FUN_109c61b6c(&ppppuStack_70);
    goto LAB_109c61a7c;
  }
  if (param_4 == 0) {
    if (param_2 < 0x7ffffffffffffff8) {
      if (param_2 < 0x17) {
        uStack_80 = (undefined8 **)CONCAT17(uVar1,(undefined7)uStack_80);
        ppppppuVar7 = &pppppuStack_90;
        if (param_2 == 0) goto LAB_109c6160c;
      }
      else {
        ppppppuVar8 = (undefined8 ******)0x19;
        if ((param_2 | 7) != 0x17) {
          ppppppuVar8 = (undefined8 ******)((param_2 | 7) + 1);
        }
        ppppppuVar7 = ppppppuVar8;
        __Znwm();
        uStack_80 = (undefined8 **)((ulong)ppppppuVar8 | 0x8000000000000000);
        pppppuStack_90 = ppppppuVar7;
        puStack_88 = (undefined8 *)param_2;
      }
      _memmove(ppppppuVar7,param_1,param_2);
LAB_109c6160c:
      *(undefined1 *)((long)ppppppuVar7 + param_2) = 0;
      ppppppuVar8 = &pppppuStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar8,&UNK_10f5a608f,0x23);
      ppppuStack_68 = ppppppuVar8[1];
      ppppuStack_70 = *ppppppuVar8;
      ppppuStack_60 = ppppppuVar8[2];
      ppppppuVar8[1] = (undefined8 *****)0x0;
      ppppppuVar8[2] = (undefined8 *****)0x0;
      *ppppppuVar8 = (undefined8 *****)0x0;
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5a5fb9);
      return;
    }
LAB_109c61908:
    func_0x000104c4f6b8();
  }
  else {
    uVar9 = (ulong)param_5;
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = param_3 / uVar9;
    }
    if (param_4 <= uVar2) {
      if (uVar9 * param_4 - param_3 == 0) {
        return;
      }
      if (param_2 < 0x7ffffffffffffff8) {
        if (param_2 < 0x17) {
          uStack_f8 = CONCAT17(uVar1,(undefined7)uStack_f8);
          ppppppuVar7 = &pppppuStack_108;
          if (param_2 == 0) goto LAB_109c616c4;
        }
        else {
          ppppppuVar8 = (undefined8 ******)0x19;
          if ((param_2 | 7) != 0x17) {
            ppppppuVar8 = (undefined8 ******)((param_2 | 7) + 1);
          }
          ppppppuVar7 = ppppppuVar8;
          __Znwm();
          uStack_f8 = (ulong)ppppppuVar8 | 0x8000000000000000;
          pppppuStack_108 = ppppppuVar7;
          uStack_100 = param_2;
        }
        _memmove(ppppppuVar7,param_1,param_2);
LAB_109c616c4:
        *(undefined1 *)((long)ppppppuVar7 + param_2) = 0;
        ppppppuVar8 = &pppppuStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar8,&UNK_10f5a60cb,0xf);
        ppppuStack_e8 = ppppppuVar8[1];
        ppppuStack_f0 = *ppppppuVar8;
        ppppuStack_e0 = ppppppuVar8[2];
        ppppppuVar8[1] = (undefined8 *****)0x0;
        ppppppuVar8[2] = (undefined8 *****)0x0;
        *ppppppuVar8 = (undefined8 *****)0x0;
        __ZNSt3__19to_stringEm(&pppppuStack_120,param_3);
        ppppppuVar8 = (undefined8 ******)pppppuStack_120;
        if (-1 < (char)bStack_109) {
          uStack_118 = (ulong)bStack_109;
          ppppppuVar8 = &pppppuStack_120;
        }
        pppppuVar4 = &ppppuStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppuVar4,ppppppuVar8,uStack_118);
        pppuStack_c8 = pppppuVar4[1];
        pppuStack_d0 = *pppppuVar4;
        pppuStack_c0 = pppppuVar4[2];
        pppppuVar4[1] = (undefined8 ****)0x0;
        pppppuVar4[2] = (undefined8 ****)0x0;
        *pppppuVar4 = (undefined8 ****)0x0;
        ppppuVar5 = &pppuStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar5,&UNK_10f5a60db,0xf);
        ppuStack_a8 = ppppuVar5[1];
        ppuStack_b0 = *ppppuVar5;
        ppuStack_a0 = ppppuVar5[2];
        ppppuVar5[1] = (undefined8 ***)0x0;
        ppppuVar5[2] = (undefined8 ***)0x0;
        *ppppuVar5 = (undefined8 ***)0x0;
        __ZNSt3__19to_stringEm(&pppppuStack_138,uVar9 * param_4);
        ppppppuVar8 = (undefined8 ******)pppppuStack_138;
        if (-1 < (char)bStack_121) {
          uStack_130 = (ulong)bStack_121;
          ppppppuVar8 = &pppppuStack_138;
        }
        pppuVar6 = &ppuStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar6,ppppppuVar8,uStack_130);
        puStack_88 = pppuVar6[1];
        pppppuStack_90 = (undefined8 *****)*pppuVar6;
        uStack_80 = pppuVar6[2];
        pppuVar6[1] = (undefined8 **)0x0;
        pppuVar6[2] = (undefined8 **)0x0;
        *pppuVar6 = (undefined8 **)0x0;
        ppppppuVar8 = &pppppuStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar8,&DAT_10f684600,1);
        ppppuStack_68 = ppppppuVar8[1];
        ppppuStack_70 = *ppppppuVar8;
        ppppuStack_60 = ppppppuVar8[2];
        ppppppuVar8[1] = (undefined8 *****)0x0;
        ppppppuVar8[2] = (undefined8 *****)0x0;
        *ppppppuVar8 = (undefined8 *****)0x0;
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5a5fb9);
        if ((char)bStack_121 < '\0') {
          __ZdlPv(pppppuStack_138);
        }
        if ((long)ppuStack_a0 < 0) {
          __ZdlPv(ppuStack_b0);
        }
        if ((long)pppuStack_c0 < 0) {
          __ZdlPv(pppuStack_d0);
        }
        if ((char)bStack_109 < '\0') {
          __ZdlPv(pppppuStack_120);
        }
        if ((long)ppppuStack_e0 < 0) {
          __ZdlPv(ppppuStack_f0);
        }
        if (-1 < (long)uStack_f8) {
          return;
        }
        __ZdlPv(pppppuStack_108);
        return;
      }
      goto LAB_109c61908;
    }
    if (0x7ffffffffffffff7 < param_2) goto LAB_109c61908;
  }
  if (param_2 < 0x17) {
    uStack_80 = (undefined8 **)CONCAT17(uVar1,(undefined7)uStack_80);
    ppppppuVar7 = &pppppuStack_90;
    if (param_2 != 0) goto LAB_109c61a34;
  }
  else {
    ppppppuVar8 = (undefined8 ******)0x19;
    if ((param_2 | 7) != 0x17) {
      ppppppuVar8 = (undefined8 ******)((param_2 | 7) + 1);
    }
    ppppppuVar7 = ppppppuVar8;
    __Znwm();
    uStack_80 = (undefined8 **)((ulong)ppppppuVar8 | 0x8000000000000000);
    pppppuStack_90 = ppppppuVar7;
    puStack_88 = (undefined8 *)param_2;
LAB_109c61a34:
    _memmove(ppppppuVar7,param_1,param_2);
  }
  *(undefined1 *)((long)ppppppuVar7 + param_2) = 0;
  ppppppuVar8 = &pppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar8,&UNK_10f5a60b3,0x17);
  ppppuStack_68 = ppppppuVar8[1];
  ppppuStack_70 = *ppppppuVar8;
  ppppuStack_60 = ppppppuVar8[2];
  ppppppuVar8[1] = (undefined8 *****)0x0;
  ppppppuVar8[2] = (undefined8 *****)0x0;
  *ppppppuVar8 = (undefined8 *****)0x0;
  FUN_109c61b6c(&ppppuStack_70);
LAB_109c61a7c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c61a80);
  (*pcVar3)();
}



/* Entry: 109c61b6c; end: 109c61bbb;  */

long * FUN_109c61b6c(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  func_0x000105687f30();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,&PTR_DAT_1108a63e8,&DAT_105687f54);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    if ((code *)plVar2[1] == (code *)0x0) {
      lVar3 = lVar4;
      func_0x000109bcee58();
      if ((int)lVar3 == 0) {
        (*pcRam00000001138332c0)(uRam0000000113833298,lVar4);
      }
    }
    else {
      (*(code *)plVar2[1])(lVar4);
    }
    *plVar2 = 0;
  }
  func_0x00010928e90c(plVar2 + 2);
  return plVar2;
}



/* Entry: 109c61bbc; end: 109c61c2b;  */

long * FUN_109c61bbc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((code *)param_1[1] == (code *)0x0) {
      lVar1 = lVar2;
      func_0x000109bcee58();
      if ((int)lVar1 == 0) {
        (*pcRam00000001138332c0)(uRam0000000113833298,lVar2);
      }
    }
    else {
      (*(code *)param_1[1])(lVar2);
    }
    *param_1 = 0;
  }
  func_0x00010928e90c(param_1 + 2);
  return param_1;
}



/* Entry: 109c61c2c; end: 109c61c8b;  */

void FUN_109c61c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (param_4 != 0) {
    iVar4 = (int)&uStack_28;
    _posix_memalign();
    if (iVar4 != 0) {
      puVar5 = &UNK_10f5a60eb;
      func_0x000105688514();
      if (*(ulong *)(puVar5 + 0x20) < param_4) {
        FUN_109c61c2c(auStack_70);
        FUN_10928e4cc(puVar5 + 0x10,auStack_70);
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        *(ulong *)(puVar5 + 0x20) = param_4;
      }
      return;
    }
  }
  FUN_109c61d18(param_1,uStack_28,PTR__free_11034c310);
  return;
}



/* Entry: 109c61c8c; end: 109c61d17;  */

void FUN_109c61c8c(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(ulong *)(param_1 + 0x20) < param_3) {
    FUN_109c61c2c(auStack_40);
    FUN_10928e4cc(param_1 + 0x10,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    *(ulong *)(param_1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 109c61d18; end: 109c61d93;  */

undefined8 * FUN_109c61d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110b2e8d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 109c61d94; end: 109c61d97;  */

void FUN_109c61d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c61d98; end: 109c61dab;  */

void FUN_109c61d98(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c61dac; end: 109c61dc7;  */

void FUN_109c61dac(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 109c61dc8; end: 109c61e03;  */

long FUN_109c61dc8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b2e920);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109c61e04; end: 109c61e07;  */

void FUN_109c61e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c61e08; end: 109c61efb;  */

void FUN_109c61e08(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000109bcee58();
        if ((int)lVar1 == 0) {
          (*pcRam00000001138332c0)(uRam0000000113833298,lVar3);
        }
        *plVar2 = 0;
      }
      lVar3 = plVar2[1];
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000109bcee58();
        if ((int)lVar1 == 0) {
          (*pcRam00000001138332c0)(uRam0000000113833298,lVar3);
        }
        plVar2[1] = 0;
      }
      if (plVar2[3] != 0) {
        (*pcRam00000001138332c0)(uRam0000000113833298);
        plVar2[3] = 0;
      }
      if (plVar2[2] != 0) {
        (*pcRam00000001138332c0)(uRam0000000113833298);
        plVar2[2] = 0;
      }
      (*pcRam00000001138332b0)(uRam0000000113833298,plVar2);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      (*pcRam00000001138332b0)(uRam0000000113833298);
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000109c61ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001138332c0)(uRam0000000113833298,param_1);
    return;
  }
  return;
}



/* Entry: 109c61efc; end: 109c62083;  */

bool FUN_109c61efc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  puVar21 = (undefined8 *)param_1[6];
  if (puVar21 == (undefined8 *)0x0) {
LAB_109c62058:
    bVar10 = false;
  }
  else {
    if (*(char *)(puVar21 + 7) == '\x01') {
      lVar15 = *param_1;
      if (lVar15 != 0) {
        lVar16 = 0;
        uVar17 = param_1[1];
        lVar4 = param_1[3];
        lVar5 = param_1[4];
        uVar18 = puVar21[6];
        puVar19 = (undefined8 *)puVar21[9];
        lVar6 = puVar21[10];
        fVar22 = *(float *)((long)puVar21 + 0x3c);
        fVar23 = *(float *)(puVar21 + 8);
        fVar24 = 1.0 / (float)uVar18;
        lVar20 = lVar4 * 4;
        do {
          lVar1 = lVar6 + lVar16 * lVar5 * 4;
          if (uVar17 < 4) {
            uVar12 = 0;
          }
          else {
            puVar21 = puVar19;
            uVar14 = 0;
            uVar7 = 4;
            do {
              uVar12 = uVar7;
              auVar27 = ZEXT216(0);
              uVar7 = uVar18;
              puVar2 = puVar21;
              while( true ) {
                fVar25 = auVar27._4_4_;
                fVar29 = auVar27._8_4_;
                fVar28 = auVar27._12_4_;
                if (uVar7 == 0) break;
                auVar27._0_4_ = auVar27._0_4_ + (float)*puVar2;
                auVar27._4_4_ = fVar25 + (float)((ulong)*puVar2 >> 0x20);
                auVar27._8_4_ = fVar29 + (float)puVar2[1];
                auVar27._12_4_ = fVar28 + (float)((ulong)puVar2[1] >> 0x20);
                puVar2 = (undefined8 *)((long)puVar2 + lVar20);
                uVar7 = uVar7 - 1;
              }
              auVar26._0_4_ = auVar27._0_4_ * fVar24;
              auVar26._4_4_ = fVar25 * fVar24;
              auVar26._8_4_ = fVar29 * fVar24;
              auVar26._12_4_ = fVar28 * fVar24;
              auVar8._4_4_ = fVar22;
              auVar8._0_4_ = fVar22;
              auVar8._8_4_ = fVar22;
              auVar8._12_4_ = fVar22;
              auVar27 = NEON_fmax(auVar26,auVar8,4);
              auVar9._4_4_ = fVar23;
              auVar9._0_4_ = fVar23;
              auVar9._8_4_ = fVar23;
              auVar9._12_4_ = fVar23;
              auVar27 = NEON_fmin(auVar27,auVar9,4);
              puVar2 = (undefined8 *)(lVar1 + uVar14 * 4);
              puVar2[1] = auVar27._8_8_;
              *puVar2 = auVar27._0_8_;
              puVar21 = puVar21 + 2;
              uVar14 = uVar12;
              uVar7 = uVar12 + 4;
            } while (uVar12 + 4 <= uVar17);
          }
          if (uVar12 < uVar17) {
            lVar13 = uVar12 << 2;
            do {
              fVar25 = 0.0;
              lVar3 = lVar13;
              for (uVar14 = uVar18; uVar14 != 0; uVar14 = uVar14 - 1) {
                fVar25 = fVar25 + *(float *)((long)puVar19 + lVar3);
                lVar3 = lVar3 + lVar20;
              }
              fVar25 = fVar24 * fVar25;
              fVar29 = fVar23;
              if (fVar25 <= fVar23) {
                fVar29 = fVar25;
              }
              fVar28 = fVar22;
              if (fVar22 <= fVar25) {
                fVar28 = fVar29;
              }
              *(float *)(lVar1 + uVar12 * 4) = fVar28;
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 4;
            } while (uVar12 != uVar17);
          }
          lVar16 = lVar16 + 1;
          puVar19 = (undefined8 *)((long)puVar19 + uVar18 * lVar4 * 4);
        } while (lVar16 != lVar15);
      }
    }
    else {
      iVar11 = (int)*puVar21;
      func_0x000109bce408();
      if (iVar11 != 0) goto LAB_109c62058;
      lVar15 = puVar21[1];
      if (lVar15 != 0) {
        func_0x000109bce408();
        return (int)lVar15 == 0;
      }
    }
    bVar10 = true;
  }
  return bVar10;
}



/* Entry: 109c62084; end: 109c6226f;  */

undefined8
FUN_109c62084(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5,int param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [2];
  float fStack_78;
  float fStack_74;
  
  puVar1 = puRam0000000113833298;
  (*pcRam00000001138332b8)(puRam0000000113833298,0x10,0x208);
  if (puVar1 != (undefined8 *)0x0) {
    _bzero(puVar1,0x208);
  }
  puVar2 = puRam0000000113833298;
  (*pcRam00000001138332a0)(puRam0000000113833298,0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[10] = 0;
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
  }
  puVar1[0x22] = puVar2;
  *(undefined4 *)(puVar1 + 0x23) = 1;
  puVar2 = puRam0000000113833298;
  (*pcRam00000001138332a0)(puRam0000000113833298,0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[10] = 0;
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
  }
  puVar1[6] = puVar2;
  puVar1[0x3f] = 0;
  uVar3 = 2;
  uStack_88 = param_4;
  uStack_84 = param_2;
  auStack_80[0] = param_3;
  func_0x000109bd579c(2,3,auStack_80,&uStack_88,param_7,puVar2);
  if ((int)uVar3 == 0) {
    if ((param_5 != -0x80) || (param_6 != 0x7f)) {
      fStack_78 = (float)param_5;
      fStack_74 = (float)param_6;
      uVar3 = 4;
      func_0x000109bd6948(4,3,3,&fStack_78,0,&UNK_10e03aba0,&UNK_10e03aba0,param_7,puVar2 + 1);
      if ((int)uVar3 != 0) {
        uVar5 = *puVar2;
        uVar4 = uVar5;
        func_0x000109bcee58();
        if ((int)uVar4 == 0) {
          (*pcRam00000001138332c0)(puRam0000000113833298,uVar5);
        }
        goto LAB_109c6218c;
      }
    }
    uVar3 = 0;
    *(int *)(puVar1 + 10) = (int)param_7;
    *(undefined4 *)(puVar1 + 0x40) = 0;
    *param_8 = puVar1;
  }
  else {
LAB_109c6218c:
    (*pcRam00000001138332b0)(puRam0000000113833298,puVar2);
    (*pcRam00000001138332b0)(puRam0000000113833298,puVar1[0x22]);
    (*pcRam00000001138332c0)(puRam0000000113833298,puVar1);
  }
  return uVar3;
}



/* Entry: 109c62270; end: 109c62483;  */

/* WARNING: Removing unreachable block (ram,0x000109c623a0) */
/* WARNING: Removing unreachable block (ram,0x000109c623b4) */
/* WARNING: Removing unreachable block (ram,0x000109c623c4) */
/* WARNING: Removing unreachable block (ram,0x000109c623d0) */
/* WARNING: Removing unreachable block (ram,0x000109c6246c) */
/* WARNING: Removing unreachable block (ram,0x000109c623e8) */

long * FUN_109c62270(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5
                    ,long param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong *puVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((param_2 == 0) || (param_3 == (undefined8 *)0x0)) || (param_4 == (undefined8 *)0x0)) {
    uVar13 = 2;
    lVar6 = param_2;
  }
  else {
    *param_1 = param_2;
    param_1[1] = (long)param_4;
    param_1[3] = param_5;
    param_1[4] = param_6;
    uStack_68 = 2;
    plVar22 = (long *)param_1[6];
    lStack_60 = param_2;
    puStack_58 = param_4;
    puStack_50 = param_3;
    if (plVar22 != (long *)0x0) {
      plVar22[6] = (long)param_3;
      plVar4 = (long *)*plVar22;
      puVar7 = &uStack_68;
      lVar6 = 1;
      func_0x000109bd5c40();
      if (((int)plVar4 != 0) ||
         ((plVar4 = (long *)plVar22[1], plVar4 != (long *)0x0 &&
          (lVar6 = param_2, puVar7 = param_4, func_0x000109bd7038(), (int)plVar4 != 0))))
      goto LAB_109c6243c;
      puVar1 = (undefined8 *)((long)param_3 * param_2 * (long)param_4 + 0x10);
      puVar21 = (ulong *)(plVar22 + 5);
      param_3 = puVar7;
      if ((undefined8 *)*puVar21 < puVar1) {
        plVar4 = plVar22 + 3;
        if (*plVar4 != 0) {
          (*pcRam00000001138332c0)(lRam0000000113833298);
        }
        lVar6 = 0x10;
        lVar15 = lRam0000000113833298;
        param_3 = puVar1;
        (*pcRam00000001138332b8)();
        if (lVar15 == 0) {
          *plVar4 = 0;
          *puVar21 = 0;
          plVar4 = (long *)0x6;
          puVar7 = param_3;
          goto LAB_109c6243c;
        }
        _bzero();
        *plVar4 = lVar15;
        *puVar21 = (ulong)puVar1;
      }
      param_2 = plVar22[2];
      if (param_2 != 0) {
        (*pcRam00000001138332c0)(lRam0000000113833298);
        plVar22[2] = 0;
        plVar22[4] = 0;
      }
    }
    uVar13 = 3;
    lVar6 = param_2;
  }
  plVar4 = (long *)0x0;
  *(undefined4 *)(param_1 + 0x40) = uVar13;
  puVar7 = param_3;
LAB_109c6243c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar4;
  }
  ___stack_chk_fail();
  if ((int)plVar4[0x40] != 2) {
    if ((int)plVar4[0x40] == 0) {
      return (long *)0x3;
    }
    plVar22 = (long *)plVar4[6];
    if (plVar22 != (long *)0x0) {
      lVar15 = *plVar4;
      puVar14 = (undefined1 *)plVar22[3];
      if (lVar15 != 0) {
        lVar16 = 0;
        uVar17 = plVar4[1];
        lVar18 = plVar22[6];
        puVar19 = puVar14;
        do {
          if (lVar18 != 0) {
            lVar20 = 0;
            lVar5 = lVar6;
            puVar8 = puVar19;
            do {
              if (uVar17 < 0x10) {
                uVar12 = 0;
              }
              else {
                puVar9 = puVar8;
                uVar11 = 0;
                do {
                  uVar24 = ((undefined8 *)(lVar5 + uVar11))[1];
                  uVar23 = *(undefined8 *)(lVar5 + uVar11);
                  *puVar9 = (char)uVar23;
                  puVar3 = puVar9 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 8);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x10);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x18);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x20);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x28);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x30);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar23 >> 0x38);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)uVar24;
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar24 >> 8);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar24 >> 0x10);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar24 >> 0x18);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar24 >> 0x20);
                  puVar3 = puVar3 + lVar18;
                  *puVar3 = (char)((ulong)uVar24 >> 0x28);
                  puVar3[lVar18] = (char)((ulong)uVar24 >> 0x30);
                  (puVar3 + lVar18)[lVar18] = (char)((ulong)uVar24 >> 0x38);
                  uVar12 = uVar11 + 0x10;
                  uVar2 = uVar11 + 0x20;
                  puVar9 = puVar9 + lVar18 * 0x10;
                  uVar11 = uVar12;
                } while (uVar2 <= uVar17);
              }
              if (uVar12 < uVar17) {
                lVar10 = lVar18 * uVar12;
                do {
                  puVar8[lVar10] = *(undefined1 *)(lVar5 + uVar12);
                  uVar12 = uVar12 + 1;
                  lVar10 = lVar10 + lVar18;
                } while (uVar17 != uVar12);
              }
              lVar20 = lVar20 + 1;
              puVar8 = puVar8 + 1;
              lVar5 = lVar5 + uVar17;
            } while (lVar20 != lVar18);
          }
          lVar16 = lVar16 + 1;
          puVar19 = puVar19 + lVar18 * uVar17;
          lVar6 = lVar6 + lVar18 * uVar17;
        } while (lVar16 != lVar15);
      }
      lVar6 = *plVar22;
      if (*(int *)(lVar6 + 0x200) == 0) {
        return (long *)0x3;
      }
      if (*(int *)(lVar6 + 0x200) != 2) {
        lVar15 = plVar22[2];
        **(long **)(lVar6 + 0x1f0) = (long)puVar14;
        *(undefined8 **)(*(long *)(lVar6 + 0x1f0) + 8) = puVar7;
        *(long *)(*(long *)(lVar6 + 0x1f0) + 0x10) = lVar15;
        *(undefined4 *)(lVar6 + 0x200) = 1;
      }
      plVar22 = (long *)plVar22[1];
      if ((plVar22 != (long *)0x0) && (func_0x000109bd7268(plVar22,puVar7), (int)plVar22 != 0)) {
        return plVar22;
      }
    }
    *(undefined4 *)(plVar4 + 0x40) = 1;
    return (long *)0x0;
  }
  return (long *)0x0;
}



/* Entry: 109c62484; end: 109c6268f;  */

long FUN_109c62484(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((int)param_1[0x40] == 2) {
    return 0;
  }
  if ((int)param_1[0x40] != 0) {
    plVar9 = (long *)param_1[6];
    if (plVar9 != (long *)0x0) {
      lVar11 = *param_1;
      puVar10 = (undefined1 *)plVar9[3];
      if (lVar11 != 0) {
        lVar12 = 0;
        uVar13 = param_1[1];
        lVar14 = plVar9[6];
        puVar15 = puVar10;
        do {
          if (lVar14 != 0) {
            lVar16 = 0;
            lVar3 = param_2;
            puVar4 = puVar15;
            do {
              if (uVar13 < 0x10) {
                uVar8 = 0;
              }
              else {
                puVar5 = puVar4;
                uVar7 = 0;
                do {
                  uVar18 = ((undefined8 *)(lVar3 + uVar7))[1];
                  uVar17 = *(undefined8 *)(lVar3 + uVar7);
                  *puVar5 = (char)uVar17;
                  puVar2 = puVar5 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 8);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x10);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x18);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x20);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x28);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x30);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar17 >> 0x38);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)uVar18;
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar18 >> 8);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar18 >> 0x10);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar18 >> 0x18);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar18 >> 0x20);
                  puVar2 = puVar2 + lVar14;
                  *puVar2 = (char)((ulong)uVar18 >> 0x28);
                  puVar2[lVar14] = (char)((ulong)uVar18 >> 0x30);
                  (puVar2 + lVar14)[lVar14] = (char)((ulong)uVar18 >> 0x38);
                  uVar8 = uVar7 + 0x10;
                  uVar1 = uVar7 + 0x20;
                  puVar5 = puVar5 + lVar14 * 0x10;
                  uVar7 = uVar8;
                } while (uVar1 <= uVar13);
              }
              if (uVar8 < uVar13) {
                lVar6 = lVar14 * uVar8;
                do {
                  puVar4[lVar6] = *(undefined1 *)(lVar3 + uVar8);
                  uVar8 = uVar8 + 1;
                  lVar6 = lVar6 + lVar14;
                } while (uVar13 != uVar8);
              }
              lVar16 = lVar16 + 1;
              puVar4 = puVar4 + 1;
              lVar3 = lVar3 + uVar13;
            } while (lVar16 != lVar14);
          }
          lVar12 = lVar12 + 1;
          puVar15 = puVar15 + lVar14 * uVar13;
          param_2 = param_2 + lVar14 * uVar13;
        } while (lVar12 != lVar11);
      }
      lVar11 = *plVar9;
      if (*(int *)(lVar11 + 0x200) == 0) {
        return 3;
      }
      if (*(int *)(lVar11 + 0x200) != 2) {
        lVar12 = plVar9[2];
        **(long **)(lVar11 + 0x1f0) = (long)puVar10;
        *(undefined8 *)(*(long *)(lVar11 + 0x1f0) + 8) = param_3;
        *(long *)(*(long *)(lVar11 + 0x1f0) + 0x10) = lVar12;
        *(undefined4 *)(lVar11 + 0x200) = 1;
      }
      lVar11 = plVar9[1];
      if ((lVar11 != 0) && (func_0x000109bd7268(lVar11,param_3), (int)lVar11 != 0)) {
        return lVar11;
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
    return 0;
  }
  return 3;
}



/* Entry: 109c62690; end: 109c6288f;  */

undefined8
FUN_109c62690(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,int param_8,int param_9,
             undefined8 param_10,undefined8 *param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [2];
  float fStack_88;
  float fStack_84;
  
  puVar1 = puRam0000000113833298;
  (*pcRam00000001138332b8)(puRam0000000113833298,0x10,0x208);
  if (puVar1 != (undefined8 *)0x0) {
    _bzero(puVar1,0x208);
  }
  puVar2 = puRam0000000113833298;
  (*pcRam00000001138332a0)(puRam0000000113833298,0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[10] = 0;
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
  }
  puVar1[0x22] = puVar2;
  *(undefined4 *)(puVar1 + 0x23) = 1;
  puVar2 = puRam0000000113833298;
  (*pcRam00000001138332a0)(puRam0000000113833298,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar1[6] = puVar2;
  puVar1[0x3f] = 0;
  uStack_a0 = param_6;
  uStack_9c = param_3;
  uStack_98 = param_5;
  uStack_94 = param_2;
  auStack_90[0] = param_4;
  func_0x000109bcf004(param_7,3,auStack_90,&uStack_98,&uStack_a0,param_10,puVar2);
  if ((int)param_7 == 0) {
    if ((param_8 != -0x80) || (param_9 != 0x7f)) {
      fStack_88 = (float)param_8;
      fStack_84 = (float)param_9;
      param_7 = 4;
      func_0x000109bd6948(4,3,3,&fStack_88,0,&UNK_10e03aba0,&UNK_10e03aba0,param_10,puVar2 + 1);
      if ((int)param_7 != 0) {
        uVar4 = *puVar2;
        uVar3 = uVar4;
        func_0x000109bcee58();
        if ((int)uVar3 == 0) {
          (*pcRam00000001138332c0)(puRam0000000113833298,uVar4);
        }
        goto LAB_109c627a4;
      }
    }
    param_7 = 0;
    *(int *)(puVar1 + 10) = (int)param_10;
    *(undefined4 *)(puVar1 + 0x40) = 0;
    *param_11 = puVar1;
  }
  else {
LAB_109c627a4:
    (*pcRam00000001138332b0)(puRam0000000113833298,puVar2);
    (*pcRam00000001138332b0)(puRam0000000113833298,puVar1[0x22]);
    (*pcRam00000001138332c0)(puRam0000000113833298,puVar1);
  }
  return param_7;
}



/* Entry: 109c62890; end: 109c6297b;  */

/* WARNING: Removing unreachable block (ram,0x000109bd708c) */
/* WARNING: Removing unreachable block (ram,0x000109bd70e4) */
/* WARNING: Removing unreachable block (ram,0x000109bd7140) */
/* WARNING: Removing unreachable block (ram,0x000109bd7150) */
/* WARNING: Removing unreachable block (ram,0x000109bd715c) */
/* WARNING: Removing unreachable block (ram,0x000109bd7168) */
/* WARNING: Removing unreachable block (ram,0x000109bd7174) */

undefined8
FUN_109c62890(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  puVar16 = *(undefined8 **)(param_1 + 0x30);
  uVar4 = *puVar16;
  func_0x000109bcf52c();
  if ((int)uVar4 == 0) {
    plVar5 = (long *)puVar16[1];
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      uVar3 = param_2;
      if (param_2 <= param_4) {
        uVar3 = param_4;
      }
      if (uVar3 == 0) {
        lVar6 = 1;
      }
      else {
        uVar11 = 0;
        puVar12 = (ulong *)(param_5 + param_4 * 8);
        puVar13 = (ulong *)(param_3 + param_2 * 8);
        lVar6 = 1;
        do {
          puVar13 = puVar13 + -1;
          puVar12 = puVar12 + -1;
          if (uVar11 < param_2) {
            uVar14 = *puVar13;
          }
          else {
            uVar14 = 1;
          }
          if (uVar11 < param_4) {
            uVar15 = *puVar12;
          }
          else {
            uVar15 = 1;
          }
          if (uVar14 <= uVar15) {
            uVar14 = uVar15;
          }
          lVar6 = uVar14 * lVar6;
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      *(undefined4 *)(plVar5 + 0x40) = 0;
      uVar8 = 2;
      if (lVar6 != 0) {
        *plVar5 = lVar6;
        plVar5[1] = 1;
        plVar5[3] = 1;
        plVar5[4] = 1;
        if (plVar5[9] == 0) {
          lVar9 = *(long *)plVar5[0x1d];
          bVar2 = *(byte *)((long)plVar5 + 0x59);
          plVar5[0x24] = 0;
          plVar5[0x25] = 0;
          *(ushort *)(plVar5 + 0x26) = (ushort)bVar2;
          *(ushort *)((long)plVar5 + 0x132) = (ushort)*(byte *)((long)plVar5 + 0x5a);
          *(undefined4 *)((long)plVar5 + 0x134) = 0;
          plVar5[0x27] = lVar9;
          plVar5[0x2a] = plVar5[0x10];
          plVar5[0x29] = plVar5[0xf];
          plVar5[0x28] = plVar5[0xe];
          puVar7 = (undefined4 *)plVar5[0x22];
          *puVar7 = 4;
          *(undefined8 *)(puVar7 + 2) = 0x109bcdef8;
          lVar9 = plVar5[0x22];
          *(long *)(lVar9 + 0x18) = lVar6 << ((ulong)bVar2 & 0x3f);
          uVar1 = 0x20;
          if (*(uint *)(plVar5[0x1d] + 0x10) != 0) {
            uVar1 = *(uint *)(plVar5[0x1d] + 0x10);
          }
          uVar11 = (ulong)uVar1 << ((ulong)*(byte *)((long)plVar5 + 0x59) & 0x3f);
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = 0x4000 / uVar11;
          }
          if (uVar3 * uVar11 != 0x4000) {
            uVar3 = uVar3 + 1;
          }
          lVar10 = uVar3 * uVar11;
        }
        else {
          lVar9 = *(long *)plVar5[0x1d];
          plVar5[0x24] = 0;
          plVar5[0x25] = 1;
          plVar5[0x26] = plVar5[9];
          plVar5[0x27] = 0;
          plVar5[0x28] = 1;
          plVar5[0x29] = lVar9;
          lVar10 = lVar6;
          if ((param_6 != 0) && (lVar10 = 0x400, *(ulong *)(param_6 + 0x380) < 2)) {
            lVar10 = lVar6;
          }
          puVar7 = (undefined4 *)plVar5[0x22];
          *puVar7 = 4;
          *(undefined8 *)(puVar7 + 2) = 0x109bcde6c;
          lVar9 = plVar5[0x22];
          *(long *)(lVar9 + 0x18) = lVar6;
        }
        *(long *)(lVar9 + 0x48) = lVar10;
        uVar8 = 3;
      }
      *(undefined4 *)(plVar5 + 0x40) = uVar8;
      return 0;
    }
  }
  return uVar4;
}



/* Entry: 109c6297c; end: 109c629f3;  */

long FUN_109c6297c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x30);
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x200) == 0) {
    return 3;
  }
  if (*(int *)(lVar2 + 0x200) != 2) {
    *(undefined8 *)(lVar2 + 0x120) = param_2;
    *(undefined8 *)(lVar2 + 0x150) = param_3;
    *(undefined8 *)(lVar2 + 0x180) = param_4;
    if (*(char *)(lVar2 + 0x1e8) == '\x01') {
      *(undefined8 *)(lVar2 + 0x120) = param_3;
      *(undefined8 *)(lVar2 + 0x150) = param_2;
    }
    *(undefined4 *)(lVar2 + 0x200) = 1;
  }
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    func_0x000109bd7268(lVar2,param_4,param_4);
    if ((int)lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 109c629f4; end: 109c62ab7;  */

void FUN_109c629f4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000109bcee58();
        if ((int)lVar1 == 0) {
          (*pcRam00000001138332c0)(uRam0000000113833298,lVar3);
        }
        *plVar2 = 0;
      }
      lVar3 = plVar2[1];
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000109bcee58();
        if ((int)lVar1 == 0) {
          (*pcRam00000001138332c0)(uRam0000000113833298,lVar3);
        }
        plVar2[1] = 0;
      }
      (*pcRam00000001138332b0)(uRam0000000113833298,plVar2);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      (*pcRam00000001138332b0)(uRam0000000113833298);
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000109c62ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001138332c0)(uRam0000000113833298,param_1);
    return;
  }
  return;
}



/* Entry: 109c62ab8; end: 109c62b0f;  */

undefined8 FUN_109c62ab8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((param_1 != 0) && (puVar3 = *(undefined8 **)(param_1 + 0x30), puVar3 != (undefined8 *)0x0)) {
    iVar1 = (int)*puVar3;
    func_0x000109bce408();
    if ((iVar1 == 0) &&
       ((lVar2 = puVar3[1], lVar2 == 0 || (func_0x000109bce408(), (int)lVar2 == 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109c62b10; end: 109c62b77;  */

undefined8 * FUN_109c62b10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2e950;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c63020(param_1 + 2,param_2,param_3 + 0x10);
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109c62b78; end: 109c62bbf;  */

long FUN_109c62b78(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c62bc0; end: 109c62bc3;  */

long FUN_109c62bc0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c62bc4; end: 109c62bd7;  */

void FUN_109c62bc4(void)

{
  FUN_109c62b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c62bd8; end: 109c62bf7;  */

undefined ** FUN_109c62bd8(void)

{
  return &PTR_DAT_110b2e990;
}



/* Entry: 109c62bf8; end: 109c62ec7;  */

byte * FUN_109c62bf8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c62cb8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c62d50:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109c62d50;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c62cb8;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c62ec8; end: 109c62f6f;  */

long FUN_109c62ec8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c62f70; end: 109c63017;  */

void FUN_109c62f70(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x0001087675dc(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c63018; end: 109c6301f;  */

void FUN_109c63018(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110b2e950;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 109c63020; end: 109c63093;  */

int * FUN_109c63020(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    func_0x0001087675dc(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined8 **)(param_1 + 2);
      puVar3 = *(undefined8 **)(param_3 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 109c63094; end: 109c630e7;  */

void FUN_109c63094(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b2e950;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 109c630e8; end: 109c63123;  */

void FUN_109c630e8(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c63124; end: 109c6317b;  */

long FUN_109c63124(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c6317c; end: 109c6319b;  */

undefined ** FUN_109c6317c(void)

{
  return &PTR_DAT_110b2eb38;
}



/* Entry: 109c6319c; end: 109c6338f;  */

long * FUN_109c6319c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x11;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109c63390; end: 109c633db;  */

long FUN_109c63390(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c633dc; end: 109c63427;  */

long FUN_109c633dc(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109c63428; end: 109c6342b;  */

long FUN_109c63428(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109c6342c; end: 109c6343f;  */

void FUN_109c6342c(void)

{
  FUN_109c633dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c63440; end: 109c6344b;  */

undefined ** FUN_109c63440(void)

{
  return &PTR_DAT_110b2eb90;
}



/* Entry: 109c6344c; end: 109c63497;  */

void FUN_109c6344c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c63188(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109c63498; end: 109c63667;  */

byte * FUN_109c63498(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar5 = *(uint *)(param_1 + 0x20);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar8;
    uVar4 = uVar5;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar4 | 0x80;
        uVar5 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar6 = pbVar8;
        uVar4 = uVar5;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  pbVar6 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar6 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)pbVar6 < (long)(int)uVar5) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar8 < (int)uVar5) {
        do {
          iVar10 = (int)pbVar8;
          _memcpy(pbVar6,lVar3,(long)iVar10);
          uVar5 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar5;
          lVar3 = lVar3 + iVar10;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar6 + iVar10;
          do {
            pbVar6 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar6 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar6);
        } while ((int)pbVar8 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(pbVar6,lVar3,(long)(int)(uint)uStack_48);
      pbVar6 = pbVar6 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar6,lVar3,uStack_48 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar5;
    }
  }
  return pbVar6;
}



/* Entry: 109c63668; end: 109c636fb;  */

void FUN_109c63668(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109c63390();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109c636fc; end: 109c6379f;  */

void FUN_109c636fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_109c64bcc(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c630e8(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c637a0; end: 109c637df;  */

long FUN_109c637a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c637e0; end: 109c637e3;  */

long FUN_109c637e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c637e4; end: 109c637f7;  */

void FUN_109c637e4(void)

{
  FUN_109c637a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c637f8; end: 109c63803;  */

undefined ** FUN_109c637f8(void)

{
  return &PTR_DAT_110b2ebf0;
}


