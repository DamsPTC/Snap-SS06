/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c2453c; end: 109c2453f;  */

undefined8 * FUN_109c2453c(undefined8 *param_1)

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



/* Entry: 109c24540; end: 109c24553;  */

void FUN_109c24540(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c24554; end: 109c246b7;  */

undefined8 * FUN_109c24554(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  int aiStack_b8 [6];
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  lVar6 = *(long *)*param_2;
  aiStack_b8[2] = 0;
  aiStack_b8[3] = 0;
  aiStack_b8[4] = 0;
  aiStack_b8[5] = 0;
  aiStack_b8[0] = 0;
  aiStack_b8[1] = 0;
  if ((int *)(lVar6 + 8U) != aiStack_b8) {
    iVar3 = *(int *)(lVar6 + 8U);
    if (iVar3 != 0) {
      _memmove((ulong)aiStack_b8 | 4,lVar6 + 0xc,(long)iVar3 << 2);
    }
    aiStack_b8[0] = iVar3;
  }
  lVar1 = 0x10;
  if (*(int *)(lVar6 + 0x3c) != 0) {
    lVar1 = 8;
  }
  *(undefined4 *)((long)aiStack_b8 + lVar1) = 1;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
            (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_b8,1);
  func_0x000109c18360(*param_3,auStack_a0);
  FUN_109c180ec(auStack_a0);
  uVar2 = 1;
  if (*(int *)(*(long *)*param_2 + 0x3c) != 1) {
    uVar2 = 0xffffffff;
  }
  puVar4 = (undefined8 *)(ulong)uVar2;
  FUN_109c24850(puVar4,*(long *)*param_2,*(undefined8 *)*param_3,1);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_a0);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_109c246b8;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x11] = 0;
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
  *(undefined1 *)((long)puVar5 + 0x61) = 1;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0x3f800000;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *puVar5 = &PTR_FUN_110b2c438;
  puStack_e0 = param_3;
  puStack_d8 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_f8,&UNK_10f5a3c0a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + 6,auStack_f8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  return puVar5;
}



/* Entry: 109c246b8; end: 109c24783;  */

undefined8 * FUN_109c246b8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c438;
  func_0x000107c31940(auStack_38,&UNK_10f5a3c0a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c24784; end: 109c2484f;  */

undefined8 * FUN_109c24784(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c460;
  func_0x000107c31940(auStack_38,&UNK_10f5a3c11);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c24850; end: 109c24a47;  */

void FUN_109c24850(undefined4 param_1,uint param_2,long param_3,long param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  int iVar10;
  code **ppcVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined **ppuVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined4 auStack_f0 [3];
  undefined1 auStack_e4 [4];
  ulong uStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined4 uStack_ac;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  uint uStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = FUN_109c24a48;
  if (param_5 == 0) {
    pcVar1 = (code *)0x109c24a90;
  }
  uVar19 = *(uint *)(param_3 + 8);
  if ((int)uVar19 < 1) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = *(uint *)(param_3 + 0xc);
  }
  uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar19) {
    uVar19 = 5;
  }
  puVar13 = (undefined4 *)(ulong)uVar19;
  lVar18 = param_3 + 0xc;
  iVar7 = 0xf5749aa;
  ppcVar11 = (code **)0x1a;
  lVar12 = lVar18;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar18);
  iVar10 = (int)ppcVar11;
  iVar4 = *(int *)(param_3 + 8);
  uVar19 = 0;
  if (uVar16 != 0) {
    uVar19 = iVar7 / (int)uVar16;
  }
  if (param_2 == 0xffffffff) {
    uVar14 = iVar4 - 1;
    if (0 < iVar4) goto LAB_109c24910;
  }
  else {
    uVar14 = param_2;
    if ((int)param_2 < iVar4) {
LAB_109c24910:
      uVar14 = *(uint *)(lVar18 + (ulong)uVar14 * 4);
      goto LAB_109c24914;
    }
  }
  uVar14 = 0xffffffff;
LAB_109c24914:
  uVar5 = 0;
  if (uVar14 != 0) {
    uVar5 = (int)uVar19 / (int)uVar14;
  }
  ppuVar15 = &PTR_DAT_110b2c4a8;
  pcStack_a8 = FUN_109c24ad8;
  ppuStack_a0 = &PTR_DAT_110b2c4a8;
  bVar6 = param_2 == 1;
  uVar2 = uVar5;
  if (!bVar6) {
    uVar2 = 1;
  }
  uVar3 = uVar14;
  if (bVar6) {
    uVar3 = 1;
  }
  uStack_98 = uVar5;
  if (!bVar6) {
    ppuVar15 = &PTR_DAT_110b2c4c0;
    pcStack_a8 = (code *)0x109c24b04;
    ppuStack_a0 = &PTR_DAT_110b2c4c0;
    uStack_98 = uVar14;
  }
  lVar18 = *(long *)(param_3 + 0x40);
  puVar20 = *(undefined4 **)(param_4 + 0x40);
  uStack_ac = 0;
  if (0 < (int)uVar16) {
    uVar22 = 0;
    uStack_b8 = -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2;
    uStack_c0 = (ulong)uVar16;
    do {
      lVar17 = lVar18;
      puVar21 = puVar20;
      uVar19 = uVar5;
      if (0 < (int)uVar5) {
        do {
          puVar13 = &uStack_ac;
          lVar12 = lVar17;
          (*pcVar1)(uVar14,(ulong)uVar2,lVar17);
          ppcVar11 = &pcStack_a8;
          (*pcStack_a8)(uStack_ac,ppcVar11);
          puVar20 = puVar21 + 1;
          *puVar21 = param_1;
          lVar17 = lVar17 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
          uVar19 = uVar19 - 1;
          puVar21 = puVar20;
        } while (uVar19 != 0);
      }
      iVar10 = (int)ppcVar11;
      uVar22 = uVar22 + 1;
      lVar18 = lVar18 + uStack_b8;
      ppuVar15 = ppuStack_a0;
    } while (uVar22 != uStack_c0);
  }
  pppuVar8 = &ppuStack_a0;
  (*(code *)*ppuVar15)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    pppuVar9 = pppuVar8;
    __Unwind_Resume(pppuVar8);
    pcStack_c8 = FUN_109c24a48;
    uStack_e0 = (ulong)uVar2;
    pppuStack_d8 = pppuVar8;
    puStack_d0 = &stack0xfffffffffffffff0;
    _vDSP_minvi(lVar12,(long)iVar10,auStack_e4,auStack_f0,(long)(int)pppuVar9);
    *puVar13 = auStack_f0[0];
    return;
  }
  return;
}



/* Entry: 109c24a48; end: 109c24ad7;  */

void FUN_109c24a48(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [4];
  
  _vDSP_minvi(param_3,(long)param_2,auStack_24,auStack_30,(long)param_1);
  *param_4 = auStack_30[0];
  return;
}



/* Entry: 109c24ad8; end: 109c24b33;  */

float FUN_109c24ad8(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar1 = param_1 / *(int *)(param_2 + 0x10);
  }
  return (float)iVar1;
}



/* Entry: 109c24b34; end: 109c24bff;  */

undefined8 * FUN_109c24b34(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c4e8;
  func_0x000107c31940(auStack_38,&UNK_10f5a3c18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c24c00; end: 109c24c03;  */

undefined8 * FUN_109c24c00(undefined8 *param_1)

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



/* Entry: 109c24c04; end: 109c24c17;  */

void FUN_109c24c04(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c24c18; end: 109c252a7;  */

void FUN_109c24c18(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lStack_1d8;
  long *plStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  int aiStack_f8 [6];
  undefined1 auStack_e0 [88];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  if (*(int *)(*plVar10 + 0x3c) != *(int *)(plVar10[2] + 0x3c)) {
    func_0x000105688514(&UNK_10f5a3c26);
LAB_109c251cc:
    func_0x000105688514(&UNK_10f5a3d3c);
    goto LAB_109c2522c;
  }
  FUN_109c182f4(param_3,1);
  lVar8 = plVar10[2];
  if (*(int *)(lVar8 + 0x18) == 1) {
    piVar1 = (int *)(*plVar10 + 8);
    aiStack_f8[0] = 0;
    aiStack_f8[1] = 0;
    aiStack_f8[2] = 0;
    aiStack_f8[3] = 0;
    aiStack_f8[4] = 0;
    aiStack_f8[5] = 0;
    if (piVar1 != aiStack_f8) {
      iVar12 = *piVar1;
      if (iVar12 != 0) {
        _memmove((ulong)aiStack_f8 | 4,*plVar10 + 0xc,(long)iVar12 << 2);
      }
      aiStack_f8[0] = iVar12;
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (((*(int *)(lVar8 + 8) == 0) ||
        (_memcpy(&uStack_88,lVar8 + 0xc,(long)*(int *)(lVar8 + 8) << 2), aiStack_f8[4] != 1)) ||
       (uStack_80._4_4_ != 1)) goto LAB_109c251cc;
    iVar12 = aiStack_f8[3];
    if (aiStack_f8[3] != uStack_88._4_4_) {
      func_0x000105688514(&UNK_10f5a3ca5);
      goto LAB_109c2522c;
    }
    iVar13 = aiStack_f8[1];
    if (aiStack_f8[1] != (int)uStack_88) {
      func_0x000105688514(&UNK_10f5a3cf1);
      goto LAB_109c2522c;
    }
    iVar14 = (int)uStack_80;
    iVar5 = aiStack_f8[2];
    aiStack_f8[3] = (int)uStack_80;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_e0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_f8,1);
    FUN_109c18570(&lStack_1d8,auStack_e0);
    FUN_109c180ec(auStack_e0);
    if (0 < iVar13) {
      lVar8 = *(long *)(lStack_1d8 + 0x40);
      lVar9 = *(long *)(plVar10[2] + 0x40);
      lVar11 = *(long *)(*plVar10 + 0x40);
      do {
        uStack_144 = 0;
        uStack_13c = 0;
        uStack_150 = 2;
        uStack_14c = iVar5;
        iStack_148 = iVar12;
        FUN_109c0ffb0(auStack_e0,&uStack_150,lVar11,0);
        uStack_19c = 0;
        uStack_194 = 0;
        uStack_1a8 = 2;
        iStack_1a4 = iVar12;
        iStack_1a0 = iVar14;
        FUN_109c0ffb0(&uStack_150,&uStack_1a8,lVar9,0);
        uStack_1b4 = 0;
        uStack_1ac = 0;
        uStack_1c0 = 2;
        uStack_1bc = iVar5;
        iStack_1b8 = iVar14;
        FUN_109c0ffb0(&uStack_1a8,&uStack_1c0,lVar8,0);
        uStack_1c0 = uStack_1c0 & 0xffffff00;
        uStack_1bc = uStack_1bc & 0xffffff00;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        FUN_109c2176c(auStack_e0,&uStack_150,0x65,0x6f,0x6f,&uStack_1a8,3,
                      *(undefined8 *)(param_1 + 0x68),0,0);
        FUN_109c10e9c(&uStack_1a8);
        FUN_109c10e9c(&uStack_150);
        FUN_109c10e9c(auStack_e0);
        lVar8 = lVar8 + (-(ulong)((uint)(iVar5 * iVar14) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar5 * iVar14) << 2);
        lVar9 = lVar9 + (-(ulong)((uint)(iVar12 * iVar14) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar12 * iVar14) << 2);
        lVar11 = lVar11 + (-(ulong)((uint)(iVar12 * iVar5) >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(uint)(iVar12 * iVar5) << 2);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    *(undefined4 *)(lStack_1d8 + 0x3c) = 0;
    FUN_109c1e9b8(*param_3,&lStack_1d8);
    if (plStack_1d0 != (long *)0x0) {
      plVar10 = plStack_1d0 + 1;
      do {
        lVar8 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
      }
    }
LAB_109c25188:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    FUN_109c124b4(*plVar10);
    FUN_109c124b4(plVar10[2]);
    piVar1 = (int *)(*plVar10 + 8);
    aiStack_f8[0] = 0;
    aiStack_f8[1] = 0;
    aiStack_f8[2] = 0;
    aiStack_f8[3] = 0;
    aiStack_f8[4] = 0;
    aiStack_f8[5] = 0;
    if (piVar1 != aiStack_f8) {
      iVar12 = *piVar1;
      if (iVar12 != 0) {
        _memmove((ulong)aiStack_f8 | 4,*plVar10 + 0xc,(long)iVar12 << 2);
      }
      aiStack_f8[0] = iVar12;
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iVar12 = *(int *)(plVar10[2] + 8);
    if (iVar12 == 0) {
      iVar13 = 0;
      iVar12 = 0;
    }
    else {
      _memcpy(&uStack_88,plVar10[2] + 0xc,(long)iVar12 << 2);
      iVar12 = uStack_80._4_4_;
      iVar13 = uStack_88._4_4_;
    }
    if (aiStack_f8[2] == iVar13) {
      iVar5 = aiStack_f8[4];
      if (aiStack_f8[4] != (int)uStack_80) {
        func_0x000105688514(&UNK_10f5a3ca5);
        goto LAB_109c2522c;
      }
      iVar14 = aiStack_f8[1];
      if (aiStack_f8[1] != (int)uStack_88) {
        func_0x000105688514(&UNK_10f5a3cf1);
        goto LAB_109c2522c;
      }
      iVar6 = aiStack_f8[3];
      aiStack_f8[4] = iVar12;
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (auStack_e0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_f8,1);
      FUN_109c18570(&lStack_1d8,auStack_e0);
      iVar14 = iVar14 * iVar13;
      FUN_109c180ec(auStack_e0);
      if (0 < iVar14) {
        lVar8 = *(long *)(lStack_1d8 + 0x40);
        lVar9 = *(long *)(plVar10[2] + 0x40);
        lVar11 = *(long *)(*plVar10 + 0x40);
        do {
          uStack_144 = 0;
          uStack_13c = 0;
          uStack_150 = 2;
          uStack_14c = iVar6;
          iStack_148 = iVar5;
          FUN_109c0ffb0(auStack_e0,&uStack_150,lVar11,0);
          uStack_19c = 0;
          uStack_194 = 0;
          uStack_1a8 = 2;
          iStack_1a4 = iVar5;
          iStack_1a0 = iVar12;
          FUN_109c0ffb0(&uStack_150,&uStack_1a8,lVar9,0);
          uStack_1b4 = 0;
          uStack_1ac = 0;
          uStack_1c0 = 2;
          uStack_1bc = iVar6;
          iStack_1b8 = iVar12;
          FUN_109c0ffb0(&uStack_1a8,&uStack_1c0,lVar8,0);
          uStack_1c0 = uStack_1c0 & 0xffffff00;
          uStack_1bc = uStack_1bc & 0xffffff00;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          FUN_109c2176c(auStack_e0,&uStack_150,0x65,0x6f,0x6f,&uStack_1a8,1,
                        *(undefined8 *)(param_1 + 0x68),0,0);
          FUN_109c10e9c(&uStack_1a8);
          FUN_109c10e9c(&uStack_150);
          FUN_109c10e9c(auStack_e0);
          lVar8 = lVar8 + (-(ulong)((uint)(iVar6 * iVar12) >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(uint)(iVar6 * iVar12) << 2);
          lVar9 = lVar9 + (-(ulong)((uint)(iVar5 * iVar12) >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(uint)(iVar5 * iVar12) << 2);
          lVar11 = lVar11 + (-(ulong)((uint)(iVar5 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                            (ulong)(uint)(iVar5 * iVar6) << 2);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(lStack_1d8 + 0x3c) = 1;
      FUN_109c1e9b8(*param_3,&lStack_1d8);
      if (plStack_1d0 != (long *)0x0) {
        plVar2 = plStack_1d0 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
        }
      }
      FUN_109c11f88(plVar10[2]);
      FUN_109c11f88(*plVar10);
      FUN_109c11f88(*(undefined8 *)*param_3);
      goto LAB_109c25188;
    }
  }
  func_0x000105688514(&UNK_10f5a3c65);
LAB_109c2522c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109c25230);
  (*pcVar7)();
}



/* Entry: 109c252a8; end: 109c2537b;  */

undefined8 * FUN_109c252a8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c528;
  *(undefined2 *)(param_1 + 0x12) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a3d72);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2537c; end: 109c2537f;  */

undefined8 * FUN_109c2537c(undefined8 *param_1)

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



/* Entry: 109c25380; end: 109c25393;  */

void FUN_109c25380(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c25394; end: 109c2598f;  */

uint * FUN_109c25394(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  uint *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int iVar32;
  undefined8 *puVar33;
  ulong uVar34;
  int iVar35;
  long *plVar36;
  uint *puVar37;
  uint *puVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  ulong uStack_268;
  int iStack_260;
  int iStack_234;
  ulong uStack_230;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  uint auStack_110 [7];
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  uint uStack_e4;
  uint uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  uint uStack_cc;
  uint auStack_c8 [22];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  param_2 = (long *)*param_2;
  plVar36 = (long *)*param_3;
  cVar11 = *(char *)(param_1 + 0x90);
  cVar12 = *(char *)(param_1 + 0x91);
  puVar33 = *(undefined8 **)(param_1 + 0x68);
  lVar39 = *param_2;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_cc = 0;
  uVar9 = *(uint *)(lVar39 + 8);
  lVar40 = (long)(int)uVar9;
  if (uVar9 != 0) {
    _memcpy(&uStack_dc,lVar39 + 0xc,lVar40 << 2);
  }
  uStack_e4 = 0;
  uStack_e0 = uVar9;
  uStack_ec = 0;
  uStack_f4 = 0;
  uVar10 = *(uint *)(param_2[2] + 8);
  lVar41 = (long)(int)uVar10;
  if (uVar10 != 0) {
    _memcpy(&uStack_f4,param_2[2] + 0xc,lVar41 << 2);
  }
  auStack_110[5] = 0;
  auStack_110[6] = uVar10;
  auStack_110[3] = 0;
  auStack_110[4] = 0;
  auStack_110[1] = 0;
  auStack_110[2] = 0;
  uVar2 = uVar9;
  if ((int)uVar9 <= (int)uVar10) {
    uVar2 = uVar10;
  }
  auStack_110[0] = uVar2;
  if ((int)uVar9 < 6) {
    if ((int)uVar9 < 1) {
LAB_109c254b8:
      _memset_pattern16(&uStack_dc,&UNK_10dfd94a0,(ulong)(4 - uVar9) * 4 + 4);
    }
    else {
      uVar34 = 5;
      do {
        (&uStack_e0)[uVar34] = (&uStack_e0)[uVar34 - (5 - (ulong)uVar9)];
        uVar34 = uVar34 - 1;
      } while (5 - (ulong)uVar9 < uVar34);
      if (uVar9 != 5) goto LAB_109c254b8;
    }
    uStack_e0 = 5;
    if ((int)uVar10 < 6) {
      if ((int)uVar10 < 1) {
LAB_109c25524:
        _memset_pattern16(&uStack_f4,&UNK_10dfd94a0,(ulong)(4 - uVar10) * 4 + 4);
      }
      else {
        uVar34 = 5;
        do {
          auStack_110[uVar34 + 6] = auStack_110[(uVar34 + 6) - (5 - (ulong)uVar10)];
          uVar34 = uVar34 - 1;
        } while (5 - (ulong)uVar10 < uVar34);
        if (uVar10 != 5) goto LAB_109c25524;
      }
      auStack_110[6] = 5;
      uVar34 = (ulong)(uVar2 - 2);
      if (2 < (int)uVar2) {
        if (lVar41 <= lVar40) {
          lVar41 = lVar40;
        }
        puVar29 = &uStack_e0 + -lVar41;
        puVar37 = auStack_c8 + -lVar41;
        puVar38 = auStack_110 + 1;
        do {
          uVar9 = *puVar37;
          if ((int)*puVar37 <= (int)*puVar29) {
            uVar9 = *puVar29;
          }
          *puVar38 = uVar9;
          uVar34 = uVar34 - 1;
          puVar29 = puVar29 + 1;
          puVar37 = puVar37 + 1;
          puVar38 = puVar38 + 1;
        } while (uVar34 != 0);
      }
      uVar27 = uStack_cc;
      uVar23 = uStack_e4;
      uVar26 = uStack_d4._4_4_;
      uVar10 = uStack_ec._4_4_;
      uVar9 = uStack_ec._4_4_;
      if (cVar12 == '\0') {
        uVar9 = uStack_e4;
      }
      uVar1 = uStack_d4._4_4_;
      uVar20 = uStack_cc;
      if (cVar11 == '\0') {
        uVar1 = uStack_cc;
        uVar20 = uStack_d4._4_4_;
      }
      (auStack_110 + 1)[(int)(uVar2 - 2)] = uVar20;
      auStack_110[(int)auStack_110[0]] = uVar9;
      puVar28 = (undefined8 *)*puVar33;
      (**(code **)*puVar28)(auStack_c8,puVar28,auStack_110,*(undefined1 *)(lVar39 + 0x48));
      func_0x000109c18360(plVar36,auStack_c8);
      puVar29 = auStack_c8;
      FUN_109c180ec();
      uVar30 = 0x6f;
      if (cVar11 != '\0') {
        uVar30 = 0x70;
      }
      uVar31 = 0x6f;
      if (cVar12 != '\0') {
        uVar31 = 0x70;
      }
      uVar2 = (uint)uStack_dc;
      if ((int)(uint)uStack_dc <= (int)(uint)uStack_f4) {
        uVar2 = (uint)uStack_f4;
      }
      if (0 < (int)uVar2) {
        uStack_268 = 0;
        iVar14 = (uint)uStack_dc - 1;
        iVar15 = (uint)uStack_f4 - 1;
        uVar24 = uStack_dc._4_4_;
        uVar25 = (uint)uStack_d4;
        uVar21 = uStack_f4._4_4_;
        uVar22 = (uint)uStack_ec;
        uVar3 = uStack_dc._4_4_;
        if ((int)uStack_dc._4_4_ <= (int)uStack_f4._4_4_) {
          uVar3 = uStack_f4._4_4_;
        }
        iVar16 = uStack_dc._4_4_ - 1;
        iVar17 = uStack_f4._4_4_ - 1;
        iStack_260 = 0;
        uVar4 = (uint)uStack_d4;
        if ((int)(uint)uStack_d4 <= (int)(uint)uStack_ec) {
          uVar4 = (uint)uStack_ec;
        }
        iVar18 = (uint)uStack_d4 - 1;
        iVar19 = (uint)uStack_ec - 1;
        iVar13 = uVar9 * uVar20 * uVar4;
        do {
          if (0 < (int)uVar3) {
            uStack_230 = 0;
            iVar32 = (int)uStack_268;
            iVar5 = iVar15;
            if (iVar32 <= iVar15) {
              iVar5 = iVar32;
            }
            iVar6 = iVar14;
            if (iVar32 <= iVar14) {
              iVar6 = iVar32;
            }
            iStack_234 = iStack_260;
            do {
              if (0 < (int)uVar4) {
                uVar34 = 0;
                iVar35 = (int)uStack_230;
                iVar32 = iVar17;
                if (iVar35 <= iVar17) {
                  iVar32 = iVar35;
                }
                iVar7 = iVar16;
                if (iVar35 <= iVar16) {
                  iVar7 = iVar35;
                }
                iVar35 = iStack_234;
                do {
                  iVar42 = (int)uVar34;
                  iVar8 = iVar18;
                  if (iVar42 <= iVar18) {
                    iVar8 = iVar42;
                  }
                  lVar40 = *(long *)(param_2[2] + 0x40);
                  lVar39 = *(long *)(*plVar36 + 0x40);
                  uStack_15c = 0;
                  uStack_154 = 0;
                  uStack_168 = 2;
                  uStack_164 = uVar20;
                  uStack_160 = uVar1;
                  FUN_109c0ffb0(auStack_c8,&uStack_168,
                                *(long *)(*param_2 + 0x40) +
                                (long)(int)(uVar26 * uVar27 *
                                           (iVar8 + (iVar7 + iVar6 * uVar24) * uVar25)) * 4,0);
                  iVar8 = iVar19;
                  if (iVar42 <= iVar19) {
                    iVar8 = iVar42;
                  }
                  uStack_1b4 = 0;
                  uStack_1ac = 0;
                  uStack_1c0 = 2;
                  uStack_1bc = uVar1;
                  uStack_1b8 = uVar9;
                  FUN_109c0ffb0(&uStack_168,&uStack_1c0,
                                lVar40 + (long)(int)(uVar23 * uVar10 *
                                                    (iVar8 + (iVar32 + iVar5 * uVar21) * uVar22)) *
                                         4,0);
                  uStack_1cc = 0;
                  uStack_1c4 = 0;
                  uStack_1d8 = 2;
                  uStack_1d4 = uVar20;
                  uStack_1d0 = uVar9;
                  FUN_109c0ffb0(&uStack_1c0,&uStack_1d8,lVar39 + (long)iVar35 * 4,0);
                  uStack_1d8 = uStack_1d8 & 0xffffff00;
                  uStack_1d4 = uStack_1d4 & 0xffffff00;
                  FUN_109c2176c(auStack_c8,&uStack_168,0x65,uVar30,uVar31,&uStack_1c0,0xffffffff,
                                puVar33,0,0);
                  FUN_109c10e9c(&uStack_1c0);
                  FUN_109c10e9c(&uStack_168);
                  puVar29 = auStack_c8;
                  FUN_109c10e9c();
                  uVar34 = uVar34 + 1;
                  iVar35 = iVar35 + uVar9 * uVar20;
                } while (uVar4 != uVar34);
              }
              uStack_230 = uStack_230 + 1;
              iStack_234 = iStack_234 + iVar13;
            } while (uStack_230 != uVar3);
          }
          uStack_268 = uStack_268 + 1;
          iStack_260 = iStack_260 + iVar13 * uVar3;
        } while (uStack_268 != uVar2);
      }
      *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return puVar29;
      }
      goto FUN_109c21610;
    }
  }
  puVar29 = (uint *)&UNK_10f5a3d83;
  func_0x000105688514();
FUN_109c21610:
  ___stack_chk_fail();
  FUN_109c180ec(auStack_c8);
  __Unwind_Resume();
  *(undefined ***)puVar29 = &PTR_FUN_110b2c568;
  FUN_10959b818(puVar29 + 0x28);
  FUN_10959b818(puVar29 + 0x24);
  *(undefined ***)puVar29 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(puVar29 + 0x1a);
  if (*(char *)((long)puVar29 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(puVar29 + 0x12));
  }
  if (*(char *)((long)puVar29 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(puVar29 + 0xc));
  }
  FUN_109c61bbc(puVar29 + 2);
  return puVar29;
}



/* Entry: 109c25990; end: 109c259cf;  */

undefined8 * FUN_109c25990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c568;
  FUN_10959b818(param_1 + 0x14);
  FUN_10959b818(param_1 + 0x12);
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



/* Entry: 109c259d0; end: 109c259d3;  */

undefined8 * FUN_109c259d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c568;
  FUN_10959b818(param_1 + 0x14);
  FUN_10959b818(param_1 + 0x12);
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



/* Entry: 109c259d4; end: 109c259e7;  */

void FUN_109c259d4(void)

{
  FUN_109c25990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c259e8; end: 109c25b6b;  */

void FUN_109c259e8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*param_2;
  iVar16 = *(int *)(*plVar15 + 0x3c);
  FUN_109c182f4(param_3,1);
  bVar5 = *(byte *)(param_1 + 99);
  if (bVar5 == 1) {
    plStack_98 = (long *)plVar15[1];
    lStack_a0 = *plVar15;
    if (plVar15[1] != 0) {
      plVar1 = (long *)(plVar15[1] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    FUN_109c1bed0(auStack_90,**(undefined8 **)(param_1 + 0x68),*plVar15);
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar5 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  iVar11 = 3;
  if (iVar16 != 0) {
    iVar11 = 1;
  }
  lVar10 = *(long *)*param_3;
  FUN_109c25b6c(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0));
  lVar12 = *(long *)*param_3;
  *(undefined4 *)(lVar12 + 0x3c) = *(undefined4 *)(*plVar15 + 0x3c);
  lVar12 = lVar12 + 0x20;
  param_1 = param_1 + 0x48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    uVar4 = *(uint *)(lVar10 + 8);
    uVar3 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar9 = &UNK_10f5749aa;
    puVar8 = puVar9;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar10 + 0xc,uVar3);
    uVar3 = *(uint *)(lVar12 + 8) & ((int)*(uint *)(lVar12 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar12 + 0xc,uVar3);
    iVar16 = (int)puVar8;
    if (iVar16 == (int)puVar9) {
      _vDSP_vma(*(undefined8 *)(lVar10 + 0x40),1,*(undefined8 *)(lVar12 + 0x40),1,
                *(undefined8 *)(param_1 + 0x40),1,*(undefined8 *)(lVar10 + 0x40),1,(long)iVar16);
    }
    else {
      pcVar18 = FUN_109c25cc8;
      iVar17 = 1;
      puVar8 = puVar9;
      if ((iVar11 != -1) && (pcVar18 = FUN_109c25cc8, uVar4 - 1 != iVar11)) {
        iVar17 = *(int *)(lVar10 + 0xc);
        if (iVar17 < 1) {
          return;
        }
        pcVar18 = (code *)0x109c25d4c;
        puVar8 = (undefined *)(ulong)(uint)(iVar17 * (int)puVar9);
      }
      uVar14 = *(undefined8 *)(lVar12 + 0x40);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      lVar12 = *(long *)(lVar10 + 0x40);
      uVar3 = 0;
      if (iVar17 != 0) {
        uVar3 = iVar16 / iVar17;
      }
      iVar11 = 0;
      if ((int)puVar8 != 0) {
        iVar11 = iVar16 / (int)puVar8;
      }
      do {
        (*pcVar18)(iVar11,puVar9,uVar14,uVar13,lVar12);
        lVar12 = lVar12 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109c25b6c; end: 109c25cc7;  */

void FUN_109c25b6c(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  
  uVar2 = *(uint *)(param_4 + 8);
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar5 = &UNK_10f5749aa;
  puVar4 = puVar5;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_4 + 0xc,uVar1);
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  iVar9 = (int)puVar4;
  if (iVar9 == (int)puVar5) {
    _vDSP_vma(*(undefined8 *)(param_4 + 0x40),1,*(undefined8 *)(param_1 + 0x40),1,
              *(undefined8 *)(param_2 + 0x40),1,*(undefined8 *)(param_4 + 0x40),1,(long)iVar9);
  }
  else {
    pcVar11 = FUN_109c25cc8;
    iVar10 = 1;
    puVar4 = puVar5;
    if ((param_3 != -1) && (pcVar11 = FUN_109c25cc8, uVar2 - 1 != param_3)) {
      iVar10 = *(int *)(param_4 + 0xc);
      if (iVar10 < 1) {
        return;
      }
      pcVar11 = (code *)0x109c25d4c;
      puVar4 = (undefined *)(ulong)(uint)(iVar10 * (int)puVar5);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    lVar7 = *(long *)(param_4 + 0x40);
    uVar1 = 0;
    if (iVar10 != 0) {
      uVar1 = iVar9 / iVar10;
    }
    iVar3 = 0;
    if ((int)puVar4 != 0) {
      iVar3 = iVar9 / (int)puVar4;
    }
    do {
      (*pcVar11)(iVar3,puVar5,uVar8,uVar6,lVar7);
      lVar7 = lVar7 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



/* Entry: 109c25cc8; end: 109c25dc7;  */

void FUN_109c25cc8(int param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (0 < param_1) {
    do {
      _vDSP_vma(param_5,1,param_3,1,param_4,1,param_5,1,(long)(int)param_2);
      param_5 = param_5 + (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2
                          );
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



/* Entry: 109c25dc8; end: 109c25e9b;  */

undefined8 * FUN_109c25dc8(undefined8 *param_1,undefined1 param_2)

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
  *param_1 = &PTR_FUN_110b2c5a8;
  *(undefined1 *)(param_1 + 0x12) = param_2;
  func_0x000107c31940(auStack_38,&UNK_10f5a3de1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c25e9c; end: 109c25e9f;  */

undefined8 * FUN_109c25e9c(undefined8 *param_1)

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



/* Entry: 109c25ea0; end: 109c25eb3;  */

void FUN_109c25ea0(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c25eb4; end: 109c26143;  */

long * FUN_109c25eb4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  float *pfVar10;
  int *piVar11;
  long alStack_80 [9];
  long lStack_38;
  
  plVar4 = alStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  plVar9 = (long *)*param_2;
  plVar8 = (long *)*param_3;
  lVar5 = *plVar9;
  cVar2 = *(char *)(lVar5 + 0x48);
  cVar3 = *(char *)(param_1 + 0x90);
  if (cVar2 == '\x04') {
    if (cVar3 != '\x01') goto LAB_109c25f70;
    if (*(char *)(param_1 + 99) == '\x01') {
      func_0x000109c1e534(plVar8,plVar9);
      lVar5 = *plVar8;
      *(undefined1 *)(lVar5 + 0x48) = 1;
    }
    else {
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (alStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar5 + 8,1);
      func_0x000109c18360(plVar8,alStack_80);
      FUN_109c180ec(alStack_80);
      lVar5 = *plVar8;
    }
    lVar7 = *plVar9;
    piVar11 = *(int **)(lVar7 + 0x40);
    pfVar10 = *(float **)(lVar5 + 0x40);
    uVar1 = *(uint *)(lVar7 + 8) & ((int)*(uint *)(lVar7 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    plVar4 = (long *)&UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar7 + 0xc,uVar1);
    if (0 < (int)plVar4) {
      uVar6 = (ulong)plVar4 & 0xffffffff;
      do {
        *pfVar10 = (float)*piVar11;
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 1;
        pfVar10 = pfVar10 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (cVar2 == '\x01' && cVar3 == '\x04') {
    if (*(char *)(param_1 + 99) == '\x01') {
      func_0x000109c1e534(plVar8,plVar9);
      lVar5 = *plVar8;
      *(undefined1 *)(lVar5 + 0x48) = 4;
    }
    else {
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (alStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar5 + 8,4);
      func_0x000109c18360(plVar8,alStack_80);
      FUN_109c180ec(alStack_80);
      lVar5 = *plVar8;
    }
    lVar7 = *plVar9;
    pfVar10 = *(float **)(lVar7 + 0x40);
    piVar11 = *(int **)(lVar5 + 0x40);
    uVar1 = *(uint *)(lVar7 + 8) & ((int)*(uint *)(lVar7 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    plVar4 = (long *)&UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar7 + 0xc,uVar1);
    if (0 < (int)plVar4) {
      uVar6 = (ulong)plVar4 & 0xffffffff;
      do {
        *piVar11 = (int)*pfVar10;
        uVar6 = uVar6 - 1;
        pfVar10 = pfVar10 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
LAB_109c25f70:
    if (cVar2 != cVar3) goto FUN_109c21610;
    if (*(char *)(param_1 + 99) == '\x01') {
      plVar4 = plVar8;
      func_0x000109c1e534(plVar8,plVar9);
    }
    else {
      FUN_109c1bed0(alStack_80,**(undefined8 **)(param_1 + 0x68));
      func_0x000109c18360(plVar8,alStack_80);
      FUN_109c180ec(alStack_80);
    }
  }
  *(undefined4 *)(*plVar8 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
FUN_109c21610:
  plVar4 = (long *)&UNK_10f5a3de6;
  func_0x000105688514();
  FUN_109c180ec(alStack_80);
  __Unwind_Resume();
  *plVar4 = (long)&PTR_FUN_110b2c3e0;
  func_0x000109c20db4(plVar4 + 0xd);
  if (*(char *)((long)plVar4 + 0x5f) < '\0') {
    __ZdlPv(plVar4[9]);
  }
  if (*(char *)((long)plVar4 + 0x47) < '\0') {
    __ZdlPv(plVar4[6]);
  }
  FUN_109c61bbc(plVar4 + 1);
  return plVar4;
}



/* Entry: 109c26144; end: 109c26147;  */

undefined8 * FUN_109c26144(undefined8 *param_1)

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



/* Entry: 109c26148; end: 109c2615b;  */

void FUN_109c26148(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2615c; end: 109c2629f;  */

undefined8 * FUN_109c2615c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 auStack_80 [9];
  long lStack_38;
  
  puVar3 = auStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)*param_2;
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 < 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar6 = 0;
    }
    else if (*(int *)(lVar5 + 0x3c) == 0) {
      iVar6 = *(int *)(lVar5 + 8) + -1;
    }
    else {
      iVar6 = 3;
      if (*(int *)(lVar5 + 8) != 4 || *(int *)(lVar5 + 0x3c) != 2) {
        iVar6 = 1;
      }
    }
  }
  else if ((*(int *)(lVar5 + 0x3c) == 0) ||
          (iVar6 = iVar2, *(int *)(lVar5 + 0x3c) == 2 && *(int *)(lVar5 + 8) == 4)) {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar2 + -1;
    }
    iVar6 = 3;
    if (iVar2 + -1 != 0) {
      iVar6 = iVar1;
    }
  }
  FUN_109c182f4(param_3,1);
  FUN_109c14900(auStack_80,param_2,iVar6,param_1 + 0x68,*(undefined4 *)(param_1 + 0x7c));
  func_0x000109c18360(*param_3,auStack_80);
  FUN_109c180ec();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_109c262a0;
  puStack_a0 = param_3;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)puVar4 + 0x59) = 0;
  *(undefined8 *)((long)puVar4 + 0x51) = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  *(undefined2 *)((long)puVar4 + 0x61) = 1;
  *(undefined1 *)((long)puVar4 + 99) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0x3f800000;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  *(undefined1 *)((long)puVar4 + 0x84) = 0;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined1 *)((long)puVar4 + 0x8c) = 0;
  *puVar4 = &PTR_FUN_110b2c628;
  *(undefined4 *)(puVar4 + 0x12) = 0xffffffff;
  func_0x000107c31940(auStack_b8,&UNK_10f5a3e03);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar4 + 6,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return puVar4;
}



/* Entry: 109c262a0; end: 109c26377;  */

undefined8 * FUN_109c262a0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c628;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  func_0x000107c31940(auStack_38,&UNK_10f5a3e03);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c26378; end: 109c2637b;  */

undefined8 * FUN_109c26378(undefined8 *param_1)

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



/* Entry: 109c2637c; end: 109c2638f;  */

void FUN_109c2637c(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c26390; end: 109c26b43;  */

void FUN_109c26390(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  int *piVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  uint auStack_c8 [6];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  lVar4 = *(long *)*param_2;
  if (*(char *)(lVar4 + 0x48) == '\x04') {
    plVar11 = (long *)*param_3;
    iVar7 = *(int *)(param_1 + 0x90);
    puVar15 = *(undefined8 **)(param_1 + 0x68);
    piVar14 = (int *)((ulong)auStack_c8 | 4);
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    if ((uint *)(lVar4 + 8U) == auStack_c8) {
      uVar16 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 8U);
      uVar16 = (ulong)uVar1;
      if (uVar1 != 0) {
        _memmove(piVar14,lVar4 + 0xc,(long)(int)uVar1 << 2);
      }
      auStack_c8[0] = uVar1;
    }
    uVar1 = ((uint)uVar16 & iVar7 >> 0x1f) + iVar7;
    puStack_b0 = &UNK_10f5a3e25;
    uStack_a8 = 0x14;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar1);
    puStack_98 = &UNK_10f5a3e3a;
    uStack_90 = 4;
    FUN_109c13710(&puStack_b0,0);
    FUN_109c26b44();
    plVar18 = (long *)*param_2;
    plVar12 = (long *)param_2[1];
    if (plVar18 != plVar12) {
      do {
        puStack_b0 = &UNK_10f5a3e25;
        uStack_a8 = 0x14;
        puStack_98 = &UNK_10f5a3e3f;
        uStack_90 = 10;
        lStack_a0._0_4_ = *(undefined4 *)(*plVar18 + 8);
        FUN_109c11768(&puStack_b0,uVar16,&UNK_10f5a3e4a,0xd);
        puStack_b0 = &UNK_10f5a3e25;
        uStack_a8 = 0x14;
        lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)*(byte *)(*plVar18 + 0x48));
        puStack_98 = &UNK_10f5a3e58;
        uStack_90 = 0xf;
        FUN_109c11768(&puStack_b0,*(undefined1 *)(*(long *)*param_2 + 0x48),&UNK_10f5a3e68,0x12);
        if (0 < (int)(uint)uVar16) {
          uVar8 = 0;
          do {
            if (uVar1 != uVar8) {
              puStack_b0 = &UNK_10f5a3e25;
              uStack_a8 = 0x14;
              lStack_a0 = CONCAT44(lStack_a0._4_4_,*(undefined4 *)(*plVar18 + uVar8 * 4 + 0xc));
              puStack_98 = &UNK_10f5a3e7b;
              uStack_90 = 9;
              FUN_109c11768(&puStack_b0,piVar14[uVar8],&UNK_10f5a3e85,0xc);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar16);
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar12);
      plVar18 = (long *)*param_2;
      plVar12 = (long *)param_2[1];
    }
    lVar4 = (long)(int)uVar1;
    if (plVar18 == plVar12) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        plVar17 = plVar18 + 2;
        lVar10 = lVar10 + *(int *)(*plVar18 + lVar4 * 4 + 0xc);
        plVar18 = plVar17;
      } while (plVar17 != plVar12);
    }
    puStack_b0 = &UNK_10f5a3e25;
    uStack_a8 = 0x14;
    puStack_98 = &UNK_10f5a3e92;
    uStack_90 = 0x16;
    lStack_a0 = lVar10;
    FUN_109c14174(&puStack_b0,0x7fffffff);
    piVar14[lVar4] = (int)lVar10;
    (*(code *)**(undefined8 **)*puVar15)
              (&puStack_b0,(undefined8 *)*puVar15,auStack_c8,
               *(undefined1 *)(*(long *)*param_2 + 0x48));
    func_0x000109c18360(plVar11,&puStack_b0);
    FUN_109c180ec(&puStack_b0);
    lVar10 = lVar4 * 4;
    iVar7 = 1;
    piVar6 = piVar14;
    if (uVar1 != 0) {
      do {
        iVar7 = *piVar6 * iVar7;
        lVar10 = lVar10 + -4;
        piVar6 = piVar6 + 1;
      } while (lVar10 != 0);
    }
    if (auStack_c8 + lVar4 + 2 == (uint *)(piVar14 + (int)auStack_c8[0])) {
      iVar9 = 1;
    }
    else {
      lVar10 = (long)(int)auStack_c8[0] * 4 + lVar4 * -4 + -4;
      iVar9 = 1;
      puVar5 = auStack_c8 + lVar4 + 2;
      do {
        iVar9 = *puVar5 * iVar9;
        lVar10 = lVar10 + -4;
        puVar5 = puVar5 + 1;
      } while (lVar10 != 0);
    }
    if (0 < iVar7) {
      iVar13 = 0;
      lVar10 = *(long *)(*plVar11 + 0x40);
      do {
        plVar18 = (long *)param_2[1];
        for (plVar11 = (long *)*param_2; plVar11 != plVar18; plVar11 = plVar11 + 2) {
          iVar2 = *(int *)(*plVar11 + lVar4 * 4 + 0xc) * iVar9;
          if (iVar2 != 0) {
            _memmove(lVar10,*(long *)(*plVar11 + 0x40) + (long)(iVar2 * iVar13) * 4,(long)iVar2 << 2
                    );
          }
          lVar10 = lVar10 + (long)iVar2 * 4;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar7);
    }
  }
  else {
    if (*(char *)(lVar4 + 0x48) != '\x01') goto LAB_109c26acc;
    plVar11 = (long *)*param_3;
    iVar7 = *(int *)(param_1 + 0x90);
    puVar15 = *(undefined8 **)(param_1 + 0x68);
    piVar14 = (int *)((ulong)auStack_c8 | 4);
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    if ((uint *)(lVar4 + 8U) == auStack_c8) {
      uVar16 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 8U);
      uVar16 = (ulong)uVar1;
      if (uVar1 != 0) {
        _memmove(piVar14,lVar4 + 0xc,(long)(int)uVar1 << 2);
      }
      auStack_c8[0] = uVar1;
    }
    uVar1 = ((uint)uVar16 & iVar7 >> 0x1f) + iVar7;
    puStack_b0 = &UNK_10f5a3e25;
    uStack_a8 = 0x14;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar1);
    puStack_98 = &UNK_10f5a3e3a;
    uStack_90 = 4;
    FUN_109c13710(&puStack_b0,0);
    FUN_109c26b44();
    plVar18 = (long *)*param_2;
    plVar12 = (long *)param_2[1];
    if (plVar18 != plVar12) {
      do {
        puStack_b0 = &UNK_10f5a3e25;
        uStack_a8 = 0x14;
        puStack_98 = &UNK_10f5a3e3f;
        uStack_90 = 10;
        lStack_a0._0_4_ = *(undefined4 *)(*plVar18 + 8);
        FUN_109c11768(&puStack_b0,uVar16,&UNK_10f5a3e4a,0xd);
        puStack_b0 = &UNK_10f5a3e25;
        uStack_a8 = 0x14;
        lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)*(byte *)(*plVar18 + 0x48));
        puStack_98 = &UNK_10f5a3e58;
        uStack_90 = 0xf;
        FUN_109c11768(&puStack_b0,*(undefined1 *)(*(long *)*param_2 + 0x48),&UNK_10f5a3e68,0x12);
        if (0 < (int)(uint)uVar16) {
          uVar8 = 0;
          do {
            if (uVar1 != uVar8) {
              puStack_b0 = &UNK_10f5a3e25;
              uStack_a8 = 0x14;
              lStack_a0 = CONCAT44(lStack_a0._4_4_,*(undefined4 *)(*plVar18 + uVar8 * 4 + 0xc));
              puStack_98 = &UNK_10f5a3e7b;
              uStack_90 = 9;
              FUN_109c11768(&puStack_b0,piVar14[uVar8],&UNK_10f5a3e85,0xc);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar16);
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar12);
      plVar18 = (long *)*param_2;
      plVar12 = (long *)param_2[1];
    }
    lVar4 = (long)(int)uVar1;
    if (plVar18 == plVar12) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        plVar17 = plVar18 + 2;
        lVar10 = lVar10 + *(int *)(*plVar18 + lVar4 * 4 + 0xc);
        plVar18 = plVar17;
      } while (plVar17 != plVar12);
    }
    puStack_b0 = &UNK_10f5a3e25;
    uStack_a8 = 0x14;
    puStack_98 = &UNK_10f5a3e92;
    uStack_90 = 0x16;
    lStack_a0 = lVar10;
    FUN_109c14174(&puStack_b0,0x7fffffff);
    piVar14[lVar4] = (int)lVar10;
    (*(code *)**(undefined8 **)*puVar15)
              (&puStack_b0,(undefined8 *)*puVar15,auStack_c8,
               *(undefined1 *)(*(long *)*param_2 + 0x48));
    func_0x000109c18360(plVar11,&puStack_b0);
    FUN_109c180ec(&puStack_b0);
    lVar10 = lVar4 * 4;
    iVar7 = 1;
    piVar6 = piVar14;
    if (uVar1 != 0) {
      do {
        iVar7 = *piVar6 * iVar7;
        lVar10 = lVar10 + -4;
        piVar6 = piVar6 + 1;
      } while (lVar10 != 0);
    }
    if (auStack_c8 + lVar4 + 2 == (uint *)(piVar14 + (int)auStack_c8[0])) {
      iVar9 = 1;
    }
    else {
      lVar10 = (long)(int)auStack_c8[0] * 4 + lVar4 * -4 + -4;
      iVar9 = 1;
      puVar5 = auStack_c8 + lVar4 + 2;
      do {
        iVar9 = *puVar5 * iVar9;
        lVar10 = lVar10 + -4;
        puVar5 = puVar5 + 1;
      } while (lVar10 != 0);
    }
    if (0 < iVar7) {
      iVar13 = 0;
      lVar10 = *(long *)(*plVar11 + 0x40);
      do {
        plVar18 = (long *)param_2[1];
        for (plVar11 = (long *)*param_2; plVar11 != plVar18; plVar11 = plVar11 + 2) {
          iVar2 = *(int *)(*plVar11 + lVar4 * 4 + 0xc) * iVar9;
          if (iVar2 != 0) {
            _memmove(lVar10,*(long *)(*plVar11 + 0x40) + (long)(iVar2 * iVar13) * 4,(long)iVar2 << 2
                    );
          }
          lVar10 = lVar10 + (long)iVar2 * 4;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar7);
    }
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109c26acc:
  FUN_109c129d4(auStack_c8);
  FUN_10928a5e0(&puStack_b0,&UNK_10f5a3e0d,auStack_c8);
  func_0x000105687ee0(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c26af4);
  (*pcVar3)();
}



/* Entry: 109c26b44; end: 109c26cff;  */

/* WARNING: Removing unreachable block (ram,0x000109c26c28) */

long FUN_109c26b44(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((int)param_2 <= *(int *)(param_1 + 0x10)) {
    __ZNSt3__19to_stringEi(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a3ea9,0x12);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    lStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f638754,6);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    lStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&puStack_b0,*(undefined4 *)(param_1 + 0x10));
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuVar1,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c14014(param_1,&uStack_40);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
  }
  return param_1;
}



/* Entry: 109c26d00; end: 109c26d63;  */

undefined8 * FUN_109c26d00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c668;
  FUN_10959b818(param_1 + 0x12);
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



/* Entry: 109c26d64; end: 109c26e07;  */

undefined8 * FUN_109c26d64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 auStack_70 [9];
  long lStack_28;
  
  puVar2 = auStack_70;
  puVar1 = auStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  FUN_109c1bed0(auStack_70,**(undefined8 **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x90));
  func_0x000109c18360(*param_3);
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_70);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar1 + 0x59) = 0;
  *(undefined8 *)((long)puVar1 + 0x51) = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined2 *)((long)puVar1 + 0x61) = 1;
  *(undefined1 *)((long)puVar1 + 99) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  *puVar1 = &PTR_FUN_110b2c6a8;
  uVar3 = *puVar2;
  puVar1[0x13] = puVar2[1];
  puVar1[0x12] = uVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c31940(auStack_b8,&UNK_10f5a3ec2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 6,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  *(undefined4 *)(puVar1[0x12] + 0x3c) = 2;
  return puVar1;
}



/* Entry: 109c26e08; end: 109c26f03;  */

undefined8 * FUN_109c26e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  *param_1 = &PTR_FUN_110b2c6a8;
  uVar1 = *param_2;
  param_1[0x13] = param_2[1];
  param_1[0x12] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a3ec2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined4 *)(param_1[0x12] + 0x3c) = 2;
  return param_1;
}



/* Entry: 109c26f04; end: 109c26f9b;  */

undefined8 * FUN_109c26f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c6a8;
  FUN_10959b818(param_1 + 0x12);
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



/* Entry: 109c26f9c; end: 109c2708b;  */

undefined8 * FUN_109c26f9c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c6e8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a3ecb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c2708c; end: 109c270ef;  */

undefined8 * FUN_109c2708c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c6e8;
  FUN_10959b818(param_1 + 0x12);
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



/* Entry: 109c270f0; end: 109c27937;  */

void FUN_109c270f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  int *piVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  long lVar32;
  undefined4 uVar33;
  float fVar34;
  long lStack_138;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int aiStack_f0 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [72];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  plVar22 = (long *)*param_3;
  lVar12 = *plVar25;
  if (*(char *)(lVar12 + 0x48) == '\x04') {
    fVar34 = *(float *)(param_1 + 0xa0);
    puVar26 = *(undefined8 **)(param_1 + 0x68);
    piVar23 = (int *)((ulong)&uStack_e0 | 4);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar4 = *(uint *)(lVar12 + 8);
    if (uVar4 != 0) {
      _memcpy(piVar23,lVar12 + 0xc,(long)(int)uVar4 << 2);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4);
      if (4 < (int)uVar4) goto LAB_109c27870;
    }
    lVar12 = *(long *)(param_1 + 0x90);
    if ((uVar4 != *(uint *)(lVar12 + 0xc)) || (*(int *)(lVar12 + 0x10) != 2)) goto LAB_109c27870;
    if ((int)uVar4 < 1) {
      aiStack_f0[0] = 0;
      aiStack_f0[1] = 0;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      uStack_108 = 0;
    }
    else {
      uVar13 = (ulong)(uVar4 << 1);
      piVar15 = *(int **)(lVar12 + 0x40);
      do {
        if (*piVar15 < 0) goto LAB_109c27858;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 1;
      } while (uVar13 != 0);
      aiStack_f0[0] = 0;
      aiStack_f0[1] = 0;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      piVar15 = *(int **)(lVar12 + 0x40) + 1;
      iVar18 = 4 - uVar4;
      uStack_108 = 0;
      piVar19 = piVar23;
      uVar13 = (ulong)uVar4;
      do {
        uStack_f8 = 0;
        uStack_100 = 0;
        piVar1 = piVar15 + -1;
        lVar12 = (long)*piVar15 + (long)*piVar1 + (long)*piVar19;
        if (0x7fffffff < lVar12) goto LAB_109c27864;
        piVar15 = piVar15 + 2;
        aiStack_f0[iVar18] = *piVar1;
        lVar21 = (long)(int)(uint)uStack_108;
        uStack_108 = (ulong)((uint)uStack_108 + 1);
        *(int *)(((ulong)&uStack_108 | 4) + lVar21 * 4) = (int)lVar12;
        iVar18 = iVar18 + 1;
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 1;
      } while (uVar13 != 0);
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    (*(code *)**(undefined8 **)*puVar26)(auStack_c8,(undefined8 *)*puVar26,&uStack_108,4);
    func_0x000109c18360(plVar22,auStack_c8);
    FUN_109c180ec(auStack_c8);
    piVar15 = *(int **)(*plVar22 + 0x40);
    uVar11 = (uint)uStack_108 & ((int)(uint)uStack_108 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar11) {
      uVar11 = 5;
    }
    iVar18 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_108 | 4,uVar11);
    if (0 < iVar18) {
      uVar11 = iVar18 + 1;
      piVar19 = piVar15;
      do {
        *piVar19 = (int)fVar34;
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 1;
      } while (1 < uVar11);
    }
    if (4 < (int)uVar4) {
      func_0x000105688514(&UNK_10f5a3d83);
      goto LAB_109c278e4;
    }
    lStack_138 = *(long *)(*plVar25 + 0x40);
    if ((int)uVar4 < 1) {
LAB_109c27684:
      _memset_pattern16(piVar23,&UNK_10dfd94a0,(ulong)(3 - uVar4) * 4 + 4);
    }
    else {
      uVar17 = 4;
      uVar13 = 4 - (ulong)uVar4;
      do {
        *(undefined4 *)((long)&uStack_e0 + uVar17 * 4) =
             *(undefined4 *)((long)&uStack_e0 + uVar17 * 4 + uVar13 * -4);
        uVar17 = uVar17 - 1;
      } while (uVar13 < uVar17);
      if (uVar4 != 4) goto LAB_109c27684;
    }
    iVar18 = (uint)uStack_108;
    if (4 < (int)(uint)uStack_108) {
      func_0x000105688514(&UNK_10f5a3d83);
      goto LAB_109c278e4;
    }
    if ((int)(uint)uStack_108 < 1) {
LAB_109c276e4:
      _memset_pattern16((ulong)&uStack_108 | 4,&UNK_10dfd94a0,(ulong)(3 - iVar18) * 4 + 4);
    }
    else {
      uVar17 = 4;
      uVar13 = 4 - (uStack_108 & 0xffffffff);
      do {
        *(undefined4 *)((long)&uStack_108 + uVar17 * 4) =
             *(undefined4 *)((long)&uStack_108 + uVar17 * 4 + uVar13 * -4);
        uVar17 = uVar17 - 1;
      } while (uVar13 < uVar17);
      if (iVar18 != 4) goto LAB_109c276e4;
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,4);
    uVar13 = (ulong)uStack_e0._4_4_;
    if (0 < (int)uStack_e0._4_4_) {
      uVar17 = 0;
      iVar8 = (int)uStack_d8;
      uVar2 = uStack_d8 & 0xffffffff;
      uVar4 = uStack_d8._4_4_;
      uVar3 = (ulong)uStack_d8._4_4_;
      iVar9 = (int)uStack_d0;
      lVar32 = (long)(int)uStack_d0;
      iVar5 = aiStack_f0[1];
      iVar6 = aiStack_f0[2];
      iVar7 = aiStack_f0[3];
      lVar20 = (long)(int)uStack_d8;
      lVar12 = (long)(int)uStack_d8._4_4_;
      lVar21 = (long)(int)uStack_d0;
      iVar18 = aiStack_f0[0];
      do {
        if (0 < iVar8) {
          uVar30 = 0;
          lVar29 = lStack_138;
          iVar28 = iVar5;
          do {
            lVar24 = lVar29;
            uVar27 = uVar3;
            iVar31 = iVar6;
            if (0 < (int)uVar4) {
              do {
                if (iVar9 != 0) {
                  _memmove(piVar15 + (iVar7 + (iVar31 + uStack_100._4_4_ *
                                                        (iVar28 + iVar18 * (int)uStack_100)) *
                                              (int)uStack_f8),lVar24,lVar32 * 4);
                }
                lVar24 = lVar24 + lVar32 * 4;
                iVar31 = iVar31 + 1;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            uVar30 = uVar30 + 1;
            lVar29 = lVar29 + lVar12 * lVar21 * 4;
            iVar28 = iVar28 + 1;
          } while (uVar30 != uVar2);
        }
        uVar17 = uVar17 + 1;
        lStack_138 = lStack_138 + lVar12 * lVar21 * lVar20 * 4;
        iVar18 = iVar18 + 1;
      } while (uVar17 != uVar13);
    }
LAB_109c2780c:
    *(undefined4 *)(*plVar22 + 0x3c) = 2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    goto LAB_109c2787c;
  }
  if (*(char *)(lVar12 + 0x48) == '\x01') {
    uVar33 = *(undefined4 *)(param_1 + 0xa0);
    puVar26 = *(undefined8 **)(param_1 + 0x68);
    piVar23 = (int *)((ulong)&uStack_e0 | 4);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar4 = *(uint *)(lVar12 + 8);
    if (uVar4 != 0) {
      _memcpy(piVar23,lVar12 + 0xc,(long)(int)uVar4 << 2);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4);
      if (4 < (int)uVar4) goto LAB_109c27870;
    }
    lVar12 = *(long *)(param_1 + 0x90);
    if ((uVar4 != *(uint *)(lVar12 + 0xc)) || (*(int *)(lVar12 + 0x10) != 2)) goto LAB_109c27870;
    if ((int)uVar4 < 1) {
      aiStack_f0[0] = 0;
      aiStack_f0[1] = 0;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      uStack_108 = 0;
    }
    else {
      uVar13 = (ulong)(uVar4 << 1);
      piVar15 = *(int **)(lVar12 + 0x40);
      do {
        if (*piVar15 < 0) goto LAB_109c27858;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 1;
      } while (uVar13 != 0);
      aiStack_f0[0] = 0;
      aiStack_f0[1] = 0;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      piVar15 = *(int **)(lVar12 + 0x40) + 1;
      iVar18 = 4 - uVar4;
      uStack_108 = 0;
      piVar19 = piVar23;
      uVar13 = (ulong)uVar4;
      do {
        uStack_f8 = 0;
        uStack_100 = 0;
        piVar1 = piVar15 + -1;
        lVar12 = (long)*piVar15 + (long)*piVar1 + (long)*piVar19;
        if (0x7fffffff < lVar12) goto LAB_109c27864;
        piVar15 = piVar15 + 2;
        aiStack_f0[iVar18] = *piVar1;
        lVar21 = (long)(int)(uint)uStack_108;
        uStack_108 = (ulong)((uint)uStack_108 + 1);
        *(int *)(((ulong)&uStack_108 | 4) + lVar21 * 4) = (int)lVar12;
        iVar18 = iVar18 + 1;
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 1;
      } while (uVar13 != 0);
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    (*(code *)**(undefined8 **)*puVar26)(auStack_c8,(undefined8 *)*puVar26,&uStack_108,1);
    func_0x000109c18360(plVar22,auStack_c8);
    FUN_109c180ec(auStack_c8);
    puVar14 = *(undefined4 **)(*plVar22 + 0x40);
    uVar11 = (uint)uStack_108 & ((int)(uint)uStack_108 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar11) {
      uVar11 = 5;
    }
    iVar18 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_108 | 4,uVar11);
    if (0 < iVar18) {
      uVar11 = iVar18 + 1;
      puVar16 = puVar14;
      do {
        *puVar16 = uVar33;
        uVar11 = uVar11 - 1;
        puVar16 = puVar16 + 1;
      } while (1 < uVar11);
    }
    if (4 < (int)uVar4) {
      func_0x000105688514(&UNK_10f5a3d83);
      goto LAB_109c278e4;
    }
    lStack_138 = *(long *)(*plVar25 + 0x40);
    if ((int)uVar4 < 1) {
LAB_109c27418:
      _memset_pattern16(piVar23,&UNK_10dfd94a0,(ulong)(3 - uVar4) * 4 + 4);
    }
    else {
      uVar17 = 4;
      uVar13 = 4 - (ulong)uVar4;
      do {
        *(undefined4 *)((long)&uStack_e0 + uVar17 * 4) =
             *(undefined4 *)((long)&uStack_e0 + uVar17 * 4 + uVar13 * -4);
        uVar17 = uVar17 - 1;
      } while (uVar13 < uVar17);
      if (uVar4 != 4) goto LAB_109c27418;
    }
    iVar18 = (uint)uStack_108;
    if (4 < (int)(uint)uStack_108) {
      func_0x000105688514(&UNK_10f5a3d83);
      goto LAB_109c278e4;
    }
    if ((int)(uint)uStack_108 < 1) {
LAB_109c27478:
      _memset_pattern16((ulong)&uStack_108 | 4,&UNK_10dfd94a0,(ulong)(3 - iVar18) * 4 + 4);
    }
    else {
      uVar17 = 4;
      uVar13 = 4 - (uStack_108 & 0xffffffff);
      do {
        *(undefined4 *)((long)&uStack_108 + uVar17 * 4) =
             *(undefined4 *)((long)&uStack_108 + uVar17 * 4 + uVar13 * -4);
        uVar17 = uVar17 - 1;
      } while (uVar13 < uVar17);
      if (iVar18 != 4) goto LAB_109c27478;
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,4);
    uVar13 = (ulong)uStack_e0._4_4_;
    if (0 < (int)uStack_e0._4_4_) {
      uVar17 = 0;
      iVar8 = (int)uStack_d8;
      uVar2 = uStack_d8 & 0xffffffff;
      uVar4 = uStack_d8._4_4_;
      uVar3 = (ulong)uStack_d8._4_4_;
      iVar9 = (int)uStack_d0;
      lVar32 = (long)(int)uStack_d0;
      iVar5 = aiStack_f0[1];
      iVar6 = aiStack_f0[2];
      iVar7 = aiStack_f0[3];
      lVar20 = (long)(int)uStack_d8;
      lVar12 = (long)(int)uStack_d8._4_4_;
      lVar21 = (long)(int)uStack_d0;
      iVar18 = aiStack_f0[0];
      do {
        if (0 < iVar8) {
          uVar30 = 0;
          lVar29 = lStack_138;
          iVar28 = iVar5;
          do {
            lVar24 = lVar29;
            uVar27 = uVar3;
            iVar31 = iVar6;
            if (0 < (int)uVar4) {
              do {
                if (iVar9 != 0) {
                  _memmove(puVar14 + (iVar7 + (iVar31 + uStack_100._4_4_ *
                                                        (iVar28 + iVar18 * (int)uStack_100)) *
                                              (int)uStack_f8),lVar24,lVar32 * 4);
                }
                lVar24 = lVar24 + lVar32 * 4;
                iVar31 = iVar31 + 1;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            uVar30 = uVar30 + 1;
            lVar29 = lVar29 + lVar12 * lVar21 * 4;
            iVar28 = iVar28 + 1;
          } while (uVar30 != uVar2);
        }
        uVar17 = uVar17 + 1;
        lStack_138 = lStack_138 + lVar12 * lVar21 * lVar20 * 4;
        iVar18 = iVar18 + 1;
      } while (uVar17 != uVar13);
    }
    goto LAB_109c2780c;
  }
  goto LAB_109c27880;
LAB_109c27858:
  func_0x000105688514(&UNK_10f5a3f0e);
LAB_109c27864:
  func_0x000105688514(&UNK_10f5a3f40);
LAB_109c27870:
  func_0x000105688514(&UNK_10f5a3ed4);
LAB_109c2787c:
  ___stack_chk_fail();
LAB_109c27880:
  FUN_109c129d4(&uStack_e0);
  FUN_10928a5e0(auStack_c8,&UNK_10f5a3e0d,&uStack_e0);
  func_0x000105687ee0(auStack_c8);
LAB_109c278e4:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109c278e8);
  (*pcVar10)();
}



/* Entry: 109c27938; end: 109c279f7;  */

void FUN_109c27938(undefined8 *param_1)

{
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
  *(undefined8 *)((long)param_1 + 0x9c) = 0x100000001;
  *(undefined4 *)((long)param_1 + 0xa4) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_110b2c728;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x10000000000003;
  *(undefined1 *)((long)param_1 + 0x47) = 4;
  *(undefined4 *)(param_1 + 6) = 0x766e6f43;
  param_1[0x1e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  return;
}



/* Entry: 109c279f8; end: 109c27a83;  */

undefined8 * FUN_109c279f8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110b2c728;
  plVar1 = (long *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_DAT_110b2c878;
  FUN_10959b818(param_1 + 0x22);
  FUN_10959b818(param_1 + 0x1e);
  FUN_10959b818(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x15);
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



/* Entry: 109c27a84; end: 109c2a7ff;  */

void FUN_109c27a84(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  uint *puVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  long lStack_430;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  int iStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  uint uStack_3a8;
  undefined8 uStack_3a4;
  undefined8 uStack_39c;
  undefined4 uStack_394;
  byte bStack_360;
  long lStack_350;
  long *plStack_348;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined8 uStack_338;
  uint uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long alStack_2f0 [9];
  uint uStack_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  uint auStack_268 [2];
  undefined **ppuStack_260;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 uStack_228;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  int iStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined4 uStack_74;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar35 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000105688514(&UNK_10f5a3fbf);
LAB_109c2a340:
    ___stack_chk_fail();
LAB_109c2a344:
    puVar15 = &UNK_10f5a4075;
  }
  else {
    lVar23 = *plVar35;
    if ((*(int *)(lVar23 + 0x3c) != 0) &&
       (*(int *)(lVar23 + 0x3c) != 2 || *(int *)(lVar23 + 8) != 4)) goto LAB_109c29d20;
    plVar32 = (long *)plVar35[1];
    if (plVar32 != (long *)0x0) {
      plVar31 = plVar32 + 1;
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar10) {
          *plVar31 = *plVar31 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar23 + 0xc);
    iVar16 = *(int *)(lVar23 + 0x10);
    *(int *)(param_1 + 0x14c) = iVar16;
    iVar27 = *(int *)(lVar23 + 0x14);
    *(int *)(param_1 + 0x150) = iVar27;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar23 + 0x18);
    uVar39 = (*(int *)(param_1 + 0x98) + -1) * *(int *)(param_1 + 0xa4);
    iVar22 = uVar39 + 1;
    uVar39 = ~uVar39;
    *(int *)(param_1 + 0x160) = iVar22;
    iVar28 = *(int *)(param_1 + 0x9c);
    uVar6 = (*(int *)(param_1 + 0x94) + -1) * *(int *)(param_1 + 0xa0);
    iVar18 = uVar6 + 1;
    uVar6 = ~uVar6;
    *(int *)(param_1 + 0x164) = iVar18;
    iVar21 = *(int *)(param_1 + 0x104);
    bVar3 = *(byte *)(param_1 + 0x10c);
    if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
      if (bVar3 < 2) {
        iVar26 = iVar16 + uVar39 + iVar21 * 2;
LAB_109c27ba4:
        iVar25 = 0;
        if (iVar28 != 0) {
          iVar25 = iVar26 / iVar28;
        }
        iVar25 = iVar25 + 1;
        *(int *)(param_1 + 0x158) = iVar25;
        iVar24 = *(int *)(param_1 + 0x100);
        iVar26 = 0;
        if (iVar28 != 0) {
          iVar26 = (int)(iVar27 + uVar6 + iVar24 * 2) / iVar28;
        }
        goto LAB_109c27c18;
      }
LAB_109c27bc4:
      if (bVar3 == 2) {
        iVar25 = 0;
        if (iVar28 != 0) {
          iVar25 = (iVar28 + -1 + iVar16) / iVar28;
        }
        *(int *)(param_1 + 0x158) = iVar25;
        iVar24 = *(int *)(param_1 + 0x100);
        iVar26 = 0;
        if (iVar28 != 0) {
          iVar26 = (iVar28 + -1 + iVar27) / iVar28;
        }
        goto LAB_109c27c1c;
      }
      goto LAB_109c2a344;
    }
    if (1 < bVar3) goto LAB_109c27bc4;
    iVar26 = iVar16 + uVar39 + iVar21 * 2;
    if ((*(byte *)(param_1 + 0x62) & 1) != 0) goto LAB_109c27ba4;
    iVar25 = (int)((float)iVar26 / (float)iVar28) + 1;
    *(int *)(param_1 + 0x158) = iVar25;
    iVar24 = *(int *)(param_1 + 0x100);
    iVar26 = (int)((float)(int)(iVar27 + uVar6 + iVar24 * 2) / (float)iVar28);
LAB_109c27c18:
    iVar26 = iVar26 + 1;
LAB_109c27c1c:
    *(int *)(param_1 + 0x15c) = iVar26;
    puVar15 = &UNK_10f5a401d;
    if ((0 < iVar25) && (0 < iVar26)) {
      uVar5 = (iVar18 - (iVar27 + iVar24 * 2)) + (iVar26 + -1) * iVar28;
      uVar39 = (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) + iVar24;
      *(uint *)(param_1 + 0x174) = uVar39;
      uVar6 = (iVar22 - (iVar16 + iVar21 * 2)) + (iVar25 + -1) * iVar28;
      iVar22 = (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + iVar21;
      *(int *)(param_1 + 0x16c) = iVar22;
      if (uVar39 == 0 && iVar22 == 0) {
        *(undefined4 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x62) == '\0') {
          uVar6 = 0;
          uVar5 = 0;
        }
        *(uint *)(param_1 + 0x170) = uVar5 + iVar24;
        puVar15 = &UNK_10f5a4049;
        *(uint *)(param_1 + 0x168) = uVar6 + iVar21;
        if ((((int)(uVar6 + iVar21) < 0) || (iVar22 < 0)) || ((int)(uVar5 + iVar24 | uVar39) < 0))
        goto LAB_109c2a34c;
      }
      if (plVar32 != (long *)0x0) {
        plVar31 = plVar32 + 1;
        do {
          lVar23 = *plVar31;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar10) {
            *plVar31 = lVar23 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
        }
      }
      lVar23 = *plVar35;
      if (*(char *)(lVar23 + 0x48) == '\x02') {
        plVar32 = (long *)*param_3;
        plVar31 = (long *)(param_1 + 8);
        if (*plVar31 == 0) {
          if (*(char *)(param_1 + 0x84) == '\x01') {
            iVar22 = *(int *)(param_1 + 0x7c) +
                     (int)(*(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x78));
            if (iVar22 < -0x7f) {
              iVar22 = -0x80;
            }
            if (0x7e < iVar22) {
              iVar22 = 0x7f;
            }
            fVar40 = (float)iVar22;
          }
          else {
            fVar40 = -128.0;
          }
          if (*(char *)(param_1 + 0x8c) == '\x01') {
            iVar22 = *(int *)(param_1 + 0x7c) +
                     (int)(*(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x78));
            if (iVar22 < -0x7f) {
              iVar22 = -0x80;
            }
            if (0x7e < iVar22) {
              iVar22 = 0x7f;
            }
            fVar41 = (float)iVar22;
          }
          else {
            fVar41 = 127.0;
          }
          iStack_220 = *(int *)(param_1 + 0x16c);
          iStack_21c = *(int *)(param_1 + 0x170);
          iStack_218 = *(int *)(param_1 + 0x98);
          plStack_1f8 = (long *)(long)*(int *)(param_1 + 0x154);
          plStack_1f0 = (long *)(ulong)*(uint *)(param_1 + 0x90);
          iStack_214 = *(int *)(param_1 + 0x94);
          uVar7 = (undefined1)*(undefined4 *)(lVar23 + 0x50);
          if (*(char *)(param_1 + 0x10d) == '\x01') {
            uStack_1c8 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x40);
            uStack_1b8 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40);
            if (*(char *)(param_1 + 0xe8) == '\x01') {
              uStack_1b0 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40);
            }
            else {
              uStack_1b0 = 0;
            }
            uStack_1d8 = (code *)CONCAT71(uStack_1d8._1_7_,uVar7);
            uStack_1c0 = (ulong)uStack_1c0._4_4_ << 0x20;
            uStack_1a8 = CONCAT71(uStack_1a8._1_7_,(char)*(undefined4 *)(param_1 + 0x7c));
            uStack_1a8 = CONCAT44(*(undefined4 *)(param_1 + 0x78),(undefined4)uStack_1a8);
            uStack_180 = 0x24;
            ppuVar14 = &PTR_DAT_1132eabe8;
          }
          else {
            uStack_1b8 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40);
            if (*(char *)(param_1 + 0xe8) == '\x01') {
              uStack_1b0 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40);
            }
            else {
              uStack_1b0 = 0;
            }
            uStack_1d8 = (code *)CONCAT71(uStack_1d8._1_7_,uVar7);
            uStack_1c8 = 0;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x4c)
                                 );
            uStack_1a8 = CONCAT71(uStack_1a8._1_7_,(char)*(undefined4 *)(param_1 + 0x7c));
            uStack_1a8 = CONCAT44(*(undefined4 *)(param_1 + 0x78),(undefined4)uStack_1a8);
            uStack_180 = 0x26;
            ppuVar14 = &PTR_DAT_1132eab68;
          }
          uStack_74 = 0;
          uStack_7e = 0;
          uStack_80 = 0;
          uStack_86 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_120 = 0;
          uStack_124 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_178 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_198 = 0;
          uStack_1a0 = CONCAT44(fVar41,fVar40);
          ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
          uStack_1d8 = (code *)CONCAT44(*(undefined4 *)(lVar23 + 0x4c),(undefined4)uStack_1d8);
          iStack_200 = 1;
          uStack_208 = CONCAT44(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
          uStack_210 = (undefined *)
                       CONCAT44(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x9c));
          uStack_228 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0x174),
                                        *(undefined4 *)(param_1 + 0x168));
          uStack_1e8 = plStack_1f8;
          plStack_1e0 = plStack_1f0;
          func_0x000109bd05fc(ppuVar14,&uStack_228,plVar31);
          if ((int)ppuVar14 == 0) {
            iStack_220 = 0;
            iStack_21c = 0;
            uStack_228 = (long *)0x0;
            FUN_109c1e9b8(param_1 + 0xa8,&uStack_228);
            plVar11 = (long *)CONCAT44(iStack_21c,iStack_220);
            if (plVar11 != (long *)0x0) {
              plVar36 = plVar11 + 1;
              do {
                lVar23 = *plVar36;
                cVar8 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                if (bVar10) {
                  *plVar36 = lVar23 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            lVar23 = *plVar35;
            goto LAB_109c29b58;
          }
        }
        else {
LAB_109c29b58:
          iStack_2a0 = 0;
          iStack_29c = 0;
          uStack_2a8 = 0;
          uStack_2a4 = 0;
          iStack_298 = 0;
          iStack_294 = 0;
          uVar39 = uStack_2a8;
          if (((uint *)(lVar23 + 8U) != &uStack_2a8) &&
             (uVar39 = *(uint *)(lVar23 + 8U), uVar39 != 0)) {
            _memmove((ulong)&uStack_2a8 | 4,lVar23 + 0xc,(long)(int)uVar39 << 2);
          }
          uStack_2a8 = uVar39;
          uStack_2a4 = *(undefined4 *)(param_1 + 0x148);
          iStack_2a0 = (int)*(undefined8 *)(param_1 + 0x158);
          iStack_29c = (int)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
          iStack_298 = *(int *)(param_1 + 0x90);
          (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                    (&uStack_228,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_2a8,2);
          func_0x000109c18360(plVar32,&uStack_228);
          FUN_109c180ec(&uStack_228);
          lVar23 = *(long *)(*plVar35 + 0x40);
          lVar37 = *(long *)(*plVar32 + 0x40);
          if (*(int *)(param_1 + 0x120) == *(int *)(param_1 + 0x148)) {
            iVar16 = *(int *)(param_1 + 0x124);
            iVar18 = *(int *)(param_1 + 0x14c);
            iVar22 = *(int *)(param_1 + 0x150);
            if (((iVar16 != iVar18) || (iVar18 = iVar16, *(int *)(param_1 + 0x128) != iVar22)) ||
               ((*(long *)(param_1 + 0x130) != lVar23 || (*(long *)(param_1 + 0x138) != lVar37))))
            goto LAB_109c29c50;
LAB_109c29ce4:
            iVar22 = (int)*(undefined8 *)(param_1 + 8);
            func_0x000109bce408();
            if (iVar22 == 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (*plVar32 + 0x20,param_1 + 0x48);
              lVar23 = *plVar32;
              *(undefined4 *)(lVar23 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
              *(undefined4 *)(lVar23 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
              goto LAB_109c29d20;
            }
          }
          else {
            iVar18 = *(int *)(param_1 + 0x14c);
            iVar22 = *(int *)(param_1 + 0x150);
LAB_109c29c50:
            bVar10 = *(char *)(param_1 + 0x10d) == '\0';
            pcVar9 = (code *)0x109bd14c4;
            if (bVar10) {
              pcVar9 = (code *)0x109bd14ac;
            }
            uVar20 = *(undefined8 *)(param_1 + 8);
            pcVar1 = (code *)0x109bd130c;
            if (bVar10) {
              pcVar1 = (code *)0x109bd12c0;
            }
            (*pcVar1)(uVar20,(long)*(int *)(param_1 + 0x148),(long)iVar18,(long)iVar22,&uStack_228,0
                      ,0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
            if ((int)uVar20 == 0) {
              FUN_109c61c8c(plVar31,0x10,uStack_228);
              uVar20 = *(undefined8 *)(param_1 + 8);
              (*pcVar9)(uVar20,*(undefined8 *)(param_1 + 0x18),lVar23,lVar37);
              if ((int)uVar20 == 0) {
                *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x148);
                *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x150);
                *(long *)(param_1 + 0x130) = lVar23;
                *(long *)(param_1 + 0x138) = lVar37;
                goto LAB_109c29ce4;
              }
            }
          }
        }
        func_0x000105688514(&UNK_10f5a3f74);
        goto LAB_109c2a378;
      }
      if (*(char *)(lVar23 + 0x48) != '\x01') {
        FUN_109c129d4(&uStack_2a8);
        FUN_10928a5e0(&uStack_228,&UNK_10f5a3ff4,&uStack_2a8);
        func_0x000105687ee0(&uStack_228);
        goto LAB_109c2a378;
      }
      plVar32 = (long *)*param_3;
      if (((*(int *)(param_1 + 0x98) == 1) && (*(int *)(param_1 + 0x94) == 1)) &&
         (*(int *)(param_1 + 0x9c) == 1)) {
        puVar30 = (uint *)(lVar23 + 8);
        uStack_338 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_328 = 0;
        uStack_324 = 0;
        if (puVar30 == (uint *)&uStack_338) {
          uVar39 = 0;
        }
        else {
          uVar39 = *puVar30;
          if (uVar39 != 0) {
            _memmove((ulong)&uStack_338 | 4,lVar23 + 0xc,(long)(int)uVar39 << 2);
          }
          uStack_338 = CONCAT44(uStack_338._4_4_,uVar39);
        }
        iVar22 = *(int *)(param_1 + 0x154);
        iVar18 = *(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x14c);
        plVar31 = (long *)plVar35[1];
        if (plVar31 != (long *)0x0) {
          plVar11 = plVar31 + 1;
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *plVar11 = *plVar11 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        uStack_2a4 = *(undefined4 *)(param_1 + 0x148);
        iStack_298 = 0;
        iStack_294 = 0;
        uStack_2a8 = 3;
        uVar6 = *(uint *)(lVar23 + 8) & ((int)*(uint *)(lVar23 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar6) {
          uVar6 = 5;
        }
        iVar16 = 0xf5749aa;
        lStack_350 = lVar23;
        plStack_348 = plVar31;
        iStack_2a0 = iVar18;
        iStack_29c = iVar22;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar23 + 0xc,uVar6);
        uVar6 = uStack_2a8 & ((int)uStack_2a8 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar6) {
          uVar6 = 5;
        }
        iVar27 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_2a4,uVar6);
        uStack_228 = (long *)&UNK_10f574cf1;
        iStack_220 = 0xf;
        iStack_21c = 0;
        iStack_218 = CONCAT31(iStack_218._1_3_,iVar16 == iVar27);
        uStack_210 = &UNK_10f574d01;
        uStack_208 = 0xe;
        FUN_10959b640(&uStack_228);
        uVar6 = uStack_2a8;
        if ((puVar30 != &uStack_2a8) && (iVar16 == iVar27)) {
          if (uStack_2a8 != 0) {
            _memmove(lVar23 + 0xc,&uStack_2a4,(long)(int)uStack_2a8 << 2);
          }
          *puVar30 = uVar6;
        }
        FUN_109c11c4c(&uStack_228,*(undefined8 *)(param_1 + 0xa8));
        if ((*(byte *)(*plVar35 + 0x48) & 0xfe) == 2) {
          if (((byte)plStack_1e0 | 4) == 6) {
            FUN_109c2a800(&uStack_2a8,&uStack_228);
            FUN_109c10d34(&uStack_228,CONCAT44(uStack_2a4,uStack_2a8));
            plVar11 = (long *)CONCAT44(uStack_2a4,uStack_2a8);
            uStack_2a8 = 0;
            uStack_2a4 = 0;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          FUN_109c134b0(&uStack_228,1);
          FUN_109c135b4(&uStack_228);
        }
        iVar16 = *(int *)(param_1 + 0x90);
        iVar27 = *(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x14c);
        uStack_2a4 = *(undefined4 *)(param_1 + 0x148);
        iStack_298 = 0;
        iStack_294 = 0;
        uStack_2a8 = 3;
        iStack_2a0 = iVar27;
        iStack_29c = iVar16;
        (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                  (alStack_2f0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_2a8,1);
        if (0 < *(int *)(param_1 + 0x148)) {
          iVar28 = 0;
          lVar37 = 0;
          lVar19 = *(long *)(lVar23 + 0x40);
          lVar38 = *(long *)(alStack_2f0[0] + 0x40);
          do {
            uStack_39c = 0;
            uStack_394 = 0;
            uStack_3a8 = 2;
            uStack_3a4 = CONCAT44(iVar22,iVar18);
            FUN_109c0ffb0(&uStack_2a8,&uStack_3a8,lVar19 + (long)iVar28 * 4,0);
            iStack_258 = *(int *)(lVar23 + 0x50);
            if ((*(byte *)(*plVar35 + 0x48) & 0xfe) == 2) {
              FUN_109c134b0(&uStack_2a8,1);
              FUN_109c135b4(&uStack_2a8);
            }
            uStack_3b4 = 0;
            uStack_3b0 = 0;
            uStack_3ac = 0;
            uStack_3c0 = CONCAT44(iVar27,2);
            iStack_3b8 = iVar16;
            FUN_109c0ffb0(&uStack_3a8,&uStack_3c0,lVar38,0);
            if (*(char *)(param_1 + 0xe8) == '\x01') {
              uVar20 = *(undefined8 *)(param_1 + 0xf0);
            }
            else {
              uVar20 = 0;
            }
            FUN_109c2176c(&uStack_2a8,&uStack_228,0x65,0x6f,0x6f,&uStack_3a8,3,
                          *(undefined8 *)(param_1 + 0x68),uVar20,0x100,param_1 + 0x80,param_1 + 0x88
                         );
            FUN_109c10e9c(&uStack_3a8);
            FUN_109c10e9c(&uStack_2a8);
            lVar37 = lVar37 + 1;
            lVar38 = lVar38 + (-(ulong)((uint)(iVar27 * iVar16) >> 0x1f) & 0xfffffffc00000000 |
                              (ulong)(uint)(iVar27 * iVar16) << 2);
            iVar28 = iVar28 + iVar18 * iVar22;
          } while (lVar37 < *(int *)(param_1 + 0x148));
        }
        uVar6 = *puVar30 & ((int)*puVar30 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar6) {
          uVar6 = 5;
        }
        iVar22 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar23 + 0xc,uVar6);
        uVar39 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar39) {
          uVar39 = 5;
        }
        iVar18 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_338 | 4,uVar39);
        uStack_2a8 = 0xf574cf1;
        uStack_2a4 = 1;
        iStack_2a0 = 0xf;
        iStack_29c = 0;
        iStack_298 = CONCAT31(iStack_298._1_3_,iVar22 == iVar18);
        uStack_290 = &UNK_10f574d01;
        uStack_288 = 0xe;
        FUN_10959b640(&uStack_2a8);
        if ((puVar30 != (uint *)&uStack_338) && (iVar22 == iVar18)) {
          uVar39 = (uint)uStack_338;
          if ((uint)uStack_338 != 0) {
            _memmove(lVar23 + 0xc,(ulong)&uStack_338 | 4,(long)(int)(uint)uStack_338 << 2);
          }
          *puVar30 = uVar39;
        }
        func_0x000109c18360(plVar32,alStack_2f0);
        uStack_39c = 0;
        uStack_3a4 = 0;
        uStack_394 = 0;
        uVar39 = (uint)uStack_338;
        if ((uint)uStack_338 != 0) {
          _memcpy(&uStack_3a4,(ulong)&uStack_338 | 4,(long)(int)(uint)uStack_338 << 2);
        }
        uStack_3a8 = uVar39;
        uStack_39c = CONCAT44(*(undefined4 *)(param_1 + 0x90),(undefined4)uStack_39c);
        lVar23 = *plVar32;
        puVar30 = (uint *)(lVar23 + 8);
        uVar6 = *puVar30 & ((int)*puVar30 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar6) {
          uVar6 = 5;
        }
        iVar22 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar23 + 0xc,uVar6);
        uVar39 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar39) {
          uVar39 = 5;
        }
        iVar18 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_3a4,uVar39);
        uStack_2a8 = 0xf574cf1;
        uStack_2a4 = 1;
        iStack_2a0 = 0xf;
        iStack_29c = 0;
        iStack_298 = CONCAT31(iStack_298._1_3_,iVar22 == iVar18);
        uStack_290 = &UNK_10f574d01;
        uStack_288 = 0xe;
        FUN_10959b640(&uStack_2a8);
        uVar39 = uStack_3a8;
        if ((puVar30 != &uStack_3a8) && (iVar22 == iVar18)) {
          if (uStack_3a8 != 0) {
            _memmove(lVar23 + 0xc,&uStack_3a4,(long)(int)uStack_3a8 << 2);
          }
          *puVar30 = uVar39;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*plVar32 + 0x20,param_1 + 0x48);
        FUN_109c180ec(alStack_2f0);
        FUN_109c10e9c(&uStack_228);
        if (plVar31 != (long *)0x0) {
          plVar32 = plVar31 + 1;
          do {
            lVar23 = *plVar32;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = lVar23 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
LAB_109c29844:
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
          }
        }
      }
      else {
        lStack_350 = 0;
        plStack_348 = (long *)0x0;
        if ((*(int *)(param_1 + 0x174) == 0) && (*(int *)(param_1 + 0x16c) == 0)) {
          func_0x000109c1e534(&lStack_350,plVar35);
        }
        else {
          iStack_2a0 = *(undefined4 *)(param_1 + 0x170);
          uStack_2a8 = (uint)*(undefined8 *)(param_1 + 0x168);
          uStack_2a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x168) >> 0x20);
          iStack_29c = *(int *)(param_1 + 0x174);
          FUN_109c15b40(&uStack_228,lVar23,&uStack_2a8,*(undefined4 *)(param_1 + 0x108),
                        param_1 + 0x68);
          func_0x000109c18360(&lStack_350,&uStack_228);
          FUN_109c180ec(&uStack_228);
        }
        iVar18 = *(int *)(param_1 + 0x15c) * *(int *)(param_1 + 0x158);
        iVar22 = *(int *)(param_1 + 0x90);
        iStack_218 = 0;
        iStack_214 = 0;
        uStack_228 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0x148),3);
        iStack_220 = iVar18;
        iStack_21c = iVar22;
        (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                  (alStack_2f0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_228,1);
        FUN_109c11c4c(&uStack_3a8,*(undefined8 *)(param_1 + 0xa8));
        bVar3 = *(byte *)(*plVar35 + 0x48) & 0xfe;
        if (bVar3 == 2) {
          if ((bStack_360 | 4) == 6) {
            FUN_109c2a800(&uStack_228,&uStack_3a8);
            FUN_109c10d34(&uStack_3a8,uStack_228);
            plVar31 = uStack_228;
            uStack_228 = (long *)0x0;
            if (plVar31 != (long *)0x0) {
              (**(code **)(*plVar31 + 8))();
            }
          }
          FUN_109c134b0(&uStack_3a8,1);
          FUN_109c135b4(&uStack_3a8);
        }
        if ((*(uint *)(param_1 + 0x140) | 2) == 3) {
          lVar23 = *(long *)(lStack_350 + 0x40);
          uStack_3b0 = *(undefined4 *)(lStack_350 + 0x18);
          uStack_3c0 = 0x100000004;
          iStack_3b8 = (int)*(undefined8 *)(lStack_350 + 0x10);
          uStack_3b4 = (undefined4)((ulong)*(undefined8 *)(lStack_350 + 0x10) >> 0x20);
          uStack_3ac = 0;
          if (0 < *(int *)(param_1 + 0x148)) {
            lVar37 = 0;
            do {
              uVar39 = (uint)uStack_3c0 & ((int)(uint)uStack_3c0 >> 0x1f ^ 0xffffffffU);
              if (4 < (int)uVar39) {
                uVar39 = 5;
              }
              iVar16 = 0xf5749aa;
              FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_3c0 | 4,uVar39);
              plVar31 = (long *)0x70;
              __Znwm();
              plVar36 = plVar31 + 1;
              *plVar36 = 0;
              plVar31[2] = 0;
              plVar11 = plVar31 + 3;
              *plVar31 = (long)&PTR_FUN_110b2c750;
              FUN_109c0ffb0(plVar11,&uStack_3c0,lVar23 + lVar37 * iVar16 * 4,0);
              *(undefined4 *)(plVar31 + 0xd) = *(undefined4 *)(lStack_350 + 0x50);
              if (bVar3 == 2) {
                FUN_109c13518(&uStack_228);
                FUN_109c2a93c(&plStack_3d0,&uStack_2a8,&uStack_228);
                FUN_109c10e9c(&uStack_228);
              }
              else {
                do {
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar10) {
                    *plVar36 = *plVar36 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  plStack_3d0 = plVar11;
                  plStack_3c8 = plVar31;
                } while (cVar8 != '\0');
              }
              FUN_109c135b4();
              if (*(int *)(param_1 + 0x140) == 3) {
                if ((bRam00000001137e1b10 & 1) == 0) {
                  iVar16 = 0x137e1b10;
                  ___cxa_guard_acquire();
                  if (iVar16 != 0) {
                    uRam00000001137e1b08 = 0x101;
                    ___cxa_guard_release(0x1137e1b10);
                  }
                }
                iVar16 = 0x100000;
                if ((char)uRam00000001137e1b08 == '\0') {
                  iVar16 = 0;
                }
              }
              else {
                iVar16 = *(int *)(param_1 + 0x144);
              }
              plVar11 = plStack_3c8;
              plStack_3e0 = plStack_3d0;
              plStack_3d8 = plStack_3c8;
              if (plStack_3c8 != (long *)0x0) {
                plVar13 = plStack_3c8 + 1;
                do {
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar10) {
                    *plVar13 = *plVar13 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              iVar27 = *(int *)(param_1 + 0x94);
              iVar28 = *(int *)(param_1 + 0x98);
              iStack_220 = *(int *)(param_1 + 0x9c);
              iStack_214 = *(int *)(param_1 + 0x158);
              iVar21 = *(int *)(param_1 + 0x15c);
              uStack_228 = (long *)CONCAT44(iVar27,iVar28);
              uVar20 = NEON_rev64(*(undefined8 *)(param_1 + 0xa0),4);
              iStack_21c = (int)uVar20;
              iStack_218 = (int)((ulong)uVar20 >> 0x20);
              plStack_1f8 = plStack_3d0;
              plStack_1f0 = plStack_3c8;
              if (plStack_3c8 != (long *)0x0) {
                plVar13 = plStack_3c8 + 1;
                do {
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar10) {
                    *plVar13 = *plVar13 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              uStack_1b0 = 0;
              uStack_1b8 = 0;
              uStack_1a0 = 0;
              uStack_1a8 = 0;
              uStack_1c0 = 0;
              uStack_1c8 = 0;
              plStack_1e0 = (long *)0x0;
              uStack_1d8 = FUN_109c180a4;
              ppuStack_1d0 = &PTR_DAT_110950c70;
              uStack_208 = plStack_3d0[2];
              iStack_200 = (int)plStack_3d0[3];
              iVar26 = iStack_214 * iVar21;
              uStack_210 = (undefined *)CONCAT44(iVar26,iVar21);
              if ((ulong)*(byte *)(plStack_3d0 + 9) < 9) {
                iVar21 = *(int *)(&UNK_10e039edc + (ulong)*(byte *)(plStack_3d0 + 9) * 4);
              }
              else {
                iVar21 = 4;
              }
              uStack_330 = iVar27 * iVar28 * iStack_200;
              iVar27 = 0;
              if (iVar21 * uStack_330 != 0) {
                iVar27 = iVar16 / (int)(iVar21 * uStack_330);
              }
              if (iVar27 < 2) {
                iVar27 = 1;
              }
              uVar39 = 0;
              if (iVar27 != 0) {
                uVar39 = (iVar26 + iVar27 + -1) / iVar27;
              }
              uStack_1e8 = (long *)((ulong)uVar39 << 0x20);
              if (iVar27 <= iVar26) {
                iVar26 = iVar27;
              }
              uStack_32c = 0;
              uStack_328 = 0;
              uStack_324 = 0;
              uStack_338 = CONCAT44(iVar26,2);
              puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
              (**(code **)*puVar12)(&uStack_2a8,puVar12,&uStack_338);
              FUN_109c2a9dc(&plStack_1e0,&uStack_2a8);
              FUN_109c180ec(&uStack_2a8);
              if (plVar11 != (long *)0x0) {
                plVar13 = plVar11 + 1;
                do {
                  lVar38 = *plVar13;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar10) {
                    *plVar13 = lVar38 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar38 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              if ((int)uStack_1e8 < uStack_1e8._4_4_) {
                iVar16 = 0;
                lStack_430 = *(long *)(alStack_2f0[0] + 0x40) +
                             (long)(iVar22 * iVar18 * (int)lVar37) * 4;
                do {
                  plVar11 = plStack_1e0;
                  bVar4 = *(byte *)(plStack_1e0 + 9);
                  if (bVar4 < 4) {
                    if (bVar4 == 1) {
                      iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                      iVar28 = iVar27 * (int)uStack_1e8;
                      iVar27 = iVar28 + iVar27;
                      if (uStack_210._4_4_ <= iVar27) {
                        iVar27 = uStack_210._4_4_;
                      }
                      uStack_338 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      uStack_328 = 0;
                      uStack_324 = 0;
                      if (plStack_1e0 + 1 != &uStack_338) {
                        uVar39 = *(uint *)(plStack_1e0 + 1);
                        if (uVar39 != 0) {
                          _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                   (long)(int)uVar39 << 2);
                        }
                        uStack_338 = (ulong)uVar39;
                      }
                      iVar27 = iVar27 - iVar28;
                      uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                      uStack_2a8 = (uint)plVar11[8];
                      uStack_2a4 = (undefined4)((ulong)plVar11[8] >> 0x20);
                      uStack_33a = 0;
                      FUN_109c2aa5c(&plStack_3f0,&uStack_339,&uStack_338,&uStack_2a8,&uStack_33a);
                      uStack_2a8 = 0x9c18b1c;
                      uStack_2a4 = 1;
                      iStack_2a0 = 0x10b2bf98;
                      iStack_29c = 1;
                      iStack_298 = iStack_218;
                      iStack_294 = uStack_228._4_4_;
                      uStack_290 = (undefined *)
                                   CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                      uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200 << 2);
                      iStack_24c = uStack_228._4_4_ * iStack_200 * 4;
                      auStack_268[0] = 0x9c18bb0;
                      auStack_268[1] = 1;
                      ppuStack_260 = &PTR_DAT_110b2bfb0;
                      iStack_258 = iStack_218;
                      iStack_254 = uStack_228._4_4_;
                      iStack_250 = iStack_200;
                      lVar38 = 0x40;
                      puVar30 = auStack_268;
                      if (iStack_218 != 1) {
                        lVar38 = 0;
                        puVar30 = &uStack_2a8;
                      }
                      if (0 < iVar27) {
                        iVar21 = 0;
                        iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                        lVar19 = plStack_1f8[8];
                        iVar26 = 0;
                        if ((int)uStack_210 != 0) {
                          iVar26 = iVar28 / (int)uStack_210;
                        }
                        uVar39 = iStack_200 * iStack_21c * uStack_208._4_4_;
                        lVar34 = plStack_3f0[8];
                        uVar6 = iStack_200 * uStack_228._4_4_;
                        iVar24 = (int)uStack_210;
                        iVar28 = iVar28 - iVar26 * (int)uStack_210;
                        do {
                          if (-1 < iVar25) {
                            iVar24 = 0;
                            lVar29 = lVar19 + (long)(iStack_220 * (int)plStack_1f8[3] *
                                                    (iVar28 + *(int *)((long)plStack_1f8 + 0x14) *
                                                              iVar26)) * 4;
                            do {
                              (**(code **)((long)&uStack_2a8 + lVar38))(lVar29,lVar34,puVar30);
                              iVar24 = iStack_21c + iVar24;
                              lVar29 = lVar29 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 |
                                                (ulong)uVar39 << 2);
                              lVar34 = lVar34 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                                (ulong)uVar6 << 2);
                            } while (iVar24 <= iVar25);
                            iVar24 = (int)uStack_210;
                          }
                          bVar10 = iVar28 + 1 == iVar24;
                          if (bVar10) {
                            iVar26 = iVar26 + 1;
                          }
                          iVar17 = 0;
                          if (!bVar10) {
                            iVar17 = iVar28 + 1;
                          }
                          iVar21 = iVar21 + 1;
                          iVar28 = iVar17;
                        } while (iVar21 != iVar27);
                      }
                      lVar38 = 0x48;
                      do {
                        (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                  ((long)&uStack_2a8 + lVar38);
                        lVar38 = lVar38 + -0x40;
                      } while (lVar38 != -0x38);
                    }
                    else if (bVar4 == 2) {
                      iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                      iVar28 = iVar27 * (int)uStack_1e8;
                      iVar27 = iVar28 + iVar27;
                      if (uStack_210._4_4_ <= iVar27) {
                        iVar27 = uStack_210._4_4_;
                      }
                      uStack_338 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      uStack_328 = 0;
                      uStack_324 = 0;
                      if (plStack_1e0 + 1 != &uStack_338) {
                        uVar39 = *(uint *)(plStack_1e0 + 1);
                        if (uVar39 != 0) {
                          _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                   (long)(int)uVar39 << 2);
                        }
                        uStack_338 = (ulong)uVar39;
                      }
                      iVar27 = iVar27 - iVar28;
                      uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                      lVar38 = plVar11[8];
                      plVar13 = (long *)0x70;
                      __Znwm();
                      plVar13[2] = 0;
                      plVar11 = plVar13 + 3;
                      *plVar13 = (long)&PTR_FUN_110b2c750;
                      plVar13[1] = 0;
                      FUN_109c10860(plVar11,&uStack_338,lVar38,0);
                      iStack_24c = iStack_200 * uStack_228._4_4_;
                      uStack_2a8 = 0x9c18ca4;
                      uStack_2a4 = 1;
                      iStack_2a0 = 0x10b2bff8;
                      iStack_29c = 1;
                      iStack_298 = iStack_218;
                      iStack_294 = uStack_228._4_4_;
                      uStack_290 = (undefined *)
                                   CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                      uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200);
                      auStack_268[0] = 0x9c18d38;
                      auStack_268[1] = 1;
                      ppuStack_260 = &PTR_DAT_110b2c010;
                      iStack_258 = iStack_218;
                      iStack_254 = uStack_228._4_4_;
                      lVar38 = 0x40;
                      puVar30 = auStack_268;
                      if (iStack_218 != 1) {
                        lVar38 = 0;
                        puVar30 = &uStack_2a8;
                      }
                      iStack_250 = iStack_200;
                      plStack_3f0 = plVar11;
                      plStack_3e8 = plVar13;
                      if (0 < iVar27) {
                        iVar21 = 0;
                        iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                        lVar19 = plStack_1f8[8];
                        iVar26 = 0;
                        if ((int)uStack_210 != 0) {
                          iVar26 = iVar28 / (int)uStack_210;
                        }
                        lVar34 = plVar13[0xb];
                        iVar24 = iStack_200 * iStack_21c * uStack_208._4_4_;
                        lVar29 = (long)iStack_24c;
                        iVar17 = (int)uStack_210;
                        iVar28 = iVar28 - iVar26 * (int)uStack_210;
                        do {
                          if (-1 < iVar25) {
                            iVar17 = 0;
                            lVar33 = lVar19 + iStack_220 * (int)plStack_1f8[3] *
                                              (iVar28 + *(int *)((long)plStack_1f8 + 0x14) * iVar26)
                            ;
                            do {
                              (**(code **)((long)&uStack_2a8 + lVar38))(lVar33,lVar34,puVar30);
                              lVar33 = lVar33 + iVar24;
                              lVar34 = lVar34 + lVar29;
                              iVar17 = iStack_21c + iVar17;
                            } while (iVar17 <= iVar25);
                            iVar17 = (int)uStack_210;
                          }
                          bVar10 = iVar28 + 1 == iVar17;
                          if (bVar10) {
                            iVar26 = iVar26 + 1;
                          }
                          iVar2 = 0;
                          if (!bVar10) {
                            iVar2 = iVar28 + 1;
                          }
                          iVar21 = iVar21 + 1;
                          iVar28 = iVar2;
                        } while (iVar21 != iVar27);
                      }
                      lVar38 = 0x48;
                      do {
                        (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                  ((long)&uStack_2a8 + lVar38);
                        lVar38 = lVar38 + -0x40;
                      } while (lVar38 != -0x38);
                    }
                    else {
                      if (bVar4 != 3) goto LAB_109c2a2fc;
                      iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                      iVar28 = iVar27 * (int)uStack_1e8;
                      iVar27 = iVar28 + iVar27;
                      if (uStack_210._4_4_ <= iVar27) {
                        iVar27 = uStack_210._4_4_;
                      }
                      uStack_338 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      uStack_328 = 0;
                      uStack_324 = 0;
                      if (plStack_1e0 + 1 != &uStack_338) {
                        uVar39 = *(uint *)(plStack_1e0 + 1);
                        if (uVar39 != 0) {
                          _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                   (long)(int)uVar39 << 2);
                        }
                        uStack_338 = (ulong)uVar39;
                      }
                      iVar27 = iVar27 - iVar28;
                      uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                      lVar38 = plVar11[8];
                      plVar13 = (long *)0x70;
                      __Znwm();
                      plVar13[2] = 0;
                      plVar11 = plVar13 + 3;
                      *plVar13 = (long)&PTR_FUN_110b2c750;
                      plVar13[1] = 0;
                      FUN_109c10b98(plVar11,&uStack_338,lVar38,0);
                      uStack_2a8 = 0x9c18be0;
                      uStack_2a4 = 1;
                      iStack_2a0 = 0x10b2bfc8;
                      iStack_29c = 1;
                      iStack_298 = iStack_218;
                      iStack_294 = uStack_228._4_4_;
                      uStack_290 = (undefined *)
                                   CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                      uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200 << 1);
                      iStack_24c = uStack_228._4_4_ * iStack_200 * 2;
                      auStack_268[0] = 0x9c18c74;
                      auStack_268[1] = 1;
                      ppuStack_260 = &PTR_DAT_110b2bfe0;
                      iStack_258 = iStack_218;
                      iStack_254 = uStack_228._4_4_;
                      lVar38 = 0x40;
                      puVar30 = auStack_268;
                      if (iStack_218 != 1) {
                        lVar38 = 0;
                        puVar30 = &uStack_2a8;
                      }
                      iStack_250 = iStack_200;
                      plStack_3f0 = plVar11;
                      plStack_3e8 = plVar13;
                      if (0 < iVar27) {
                        iVar21 = 0;
                        iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                        lVar19 = plStack_1f8[8];
                        iVar26 = 0;
                        if ((int)uStack_210 != 0) {
                          iVar26 = iVar28 / (int)uStack_210;
                        }
                        lVar34 = plVar13[0xb];
                        uVar39 = iStack_200 * iStack_21c * uStack_208._4_4_;
                        uVar6 = iStack_200 * uStack_228._4_4_;
                        iVar24 = (int)uStack_210;
                        iVar28 = iVar28 - iVar26 * (int)uStack_210;
                        do {
                          if (-1 < iVar25) {
                            iVar24 = 0;
                            lVar29 = lVar19 + (long)(iStack_220 * (int)plStack_1f8[3] *
                                                    (iVar28 + *(int *)((long)plStack_1f8 + 0x14) *
                                                              iVar26)) * 2;
                            do {
                              (**(code **)((long)&uStack_2a8 + lVar38))(lVar29,lVar34,puVar30);
                              iVar24 = iStack_21c + iVar24;
                              lVar29 = lVar29 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffffe00000000 |
                                                (ulong)uVar39 << 1);
                              lVar34 = lVar34 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 |
                                                (ulong)uVar6 << 1);
                            } while (iVar24 <= iVar25);
                            iVar24 = (int)uStack_210;
                          }
                          bVar10 = iVar28 + 1 == iVar24;
                          if (bVar10) {
                            iVar26 = iVar26 + 1;
                          }
                          iVar17 = 0;
                          if (!bVar10) {
                            iVar17 = iVar28 + 1;
                          }
                          iVar21 = iVar21 + 1;
                          iVar28 = iVar17;
                        } while (iVar21 != iVar27);
                      }
                      lVar38 = 0x48;
                      do {
                        (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                  ((long)&uStack_2a8 + lVar38);
                        lVar38 = lVar38 + -0x40;
                      } while (lVar38 != -0x38);
                    }
                  }
                  else if (bVar4 < 6) {
                    if (bVar4 == 4) {
                      iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                      iVar28 = iVar27 * (int)uStack_1e8;
                      iVar27 = iVar28 + iVar27;
                      if (uStack_210._4_4_ <= iVar27) {
                        iVar27 = uStack_210._4_4_;
                      }
                      uStack_338 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      uStack_328 = 0;
                      uStack_324 = 0;
                      if (plStack_1e0 + 1 != &uStack_338) {
                        uVar39 = *(uint *)(plStack_1e0 + 1);
                        if (uVar39 != 0) {
                          _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                   (long)(int)uVar39 << 2);
                        }
                        uStack_338 = (ulong)uVar39;
                      }
                      iVar27 = iVar27 - iVar28;
                      uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                      lVar38 = plVar11[8];
                      plVar13 = (long *)0x70;
                      __Znwm();
                      plVar13[2] = 0;
                      plVar11 = plVar13 + 3;
                      *plVar13 = (long)&PTR_FUN_110b2c750;
                      plVar13[1] = 0;
                      FUN_109c10528(plVar11,&uStack_338,lVar38,0);
                      uStack_2a8 = 0x9c2aca4;
                      uStack_2a4 = 1;
                      iStack_2a0 = 0x10b2c7f0;
                      iStack_29c = 1;
                      iStack_298 = iStack_218;
                      iStack_294 = uStack_228._4_4_;
                      uStack_290 = (undefined *)
                                   CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                      uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200 << 2);
                      iStack_24c = uStack_228._4_4_ * iStack_200 * 4;
                      auStack_268[0] = 0x9c2ad38;
                      auStack_268[1] = 1;
                      ppuStack_260 = &PTR_DAT_110b2c808;
                      iStack_258 = iStack_218;
                      iStack_254 = uStack_228._4_4_;
                      lVar38 = 0x40;
                      puVar30 = auStack_268;
                      if (iStack_218 != 1) {
                        lVar38 = 0;
                        puVar30 = &uStack_2a8;
                      }
                      iStack_250 = iStack_200;
                      plStack_3f0 = plVar11;
                      plStack_3e8 = plVar13;
                      if (0 < iVar27) {
                        iVar21 = 0;
                        iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                        lVar19 = plStack_1f8[8];
                        iVar26 = 0;
                        if ((int)uStack_210 != 0) {
                          iVar26 = iVar28 / (int)uStack_210;
                        }
                        lVar34 = plVar13[0xb];
                        uVar39 = iStack_200 * iStack_21c * uStack_208._4_4_;
                        uVar6 = iStack_200 * uStack_228._4_4_;
                        iVar24 = (int)uStack_210;
                        iVar28 = iVar28 - iVar26 * (int)uStack_210;
                        do {
                          if (-1 < iVar25) {
                            iVar24 = 0;
                            lVar29 = lVar19 + (long)(iStack_220 * (int)plStack_1f8[3] *
                                                    (iVar28 + *(int *)((long)plStack_1f8 + 0x14) *
                                                              iVar26)) * 4;
                            do {
                              (**(code **)((long)&uStack_2a8 + lVar38))(lVar29,lVar34,puVar30);
                              iVar24 = iStack_21c + iVar24;
                              lVar29 = lVar29 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 |
                                                (ulong)uVar39 << 2);
                              lVar34 = lVar34 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                                (ulong)uVar6 << 2);
                            } while (iVar24 <= iVar25);
                            iVar24 = (int)uStack_210;
                          }
                          bVar10 = iVar28 + 1 == iVar24;
                          if (bVar10) {
                            iVar26 = iVar26 + 1;
                          }
                          iVar17 = 0;
                          if (!bVar10) {
                            iVar17 = iVar28 + 1;
                          }
                          iVar21 = iVar21 + 1;
                          iVar28 = iVar17;
                        } while (iVar21 != iVar27);
                      }
                      lVar38 = 0x48;
                      do {
                        (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                  ((long)&uStack_2a8 + lVar38);
                        lVar38 = lVar38 + -0x40;
                      } while (lVar38 != -0x38);
                    }
                    else {
                      if (bVar4 != 5) {
LAB_109c2a2fc:
                        FUN_109c129d4(&uStack_338);
                        FUN_10928a5e0(&uStack_2a8,&UNK_10f5a3e0d,&uStack_338);
                        func_0x000105687ee0(&uStack_2a8);
                        goto LAB_109c2a378;
                      }
                      iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                      iVar28 = iVar27 * (int)uStack_1e8;
                      iVar27 = iVar28 + iVar27;
                      if (uStack_210._4_4_ <= iVar27) {
                        iVar27 = uStack_210._4_4_;
                      }
                      uStack_338 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      uStack_328 = 0;
                      uStack_324 = 0;
                      if (plStack_1e0 + 1 != &uStack_338) {
                        uVar39 = *(uint *)(plStack_1e0 + 1);
                        if (uVar39 != 0) {
                          _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                   (long)(int)uVar39 << 2);
                        }
                        uStack_338 = (ulong)uVar39;
                      }
                      iVar27 = iVar27 - iVar28;
                      uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                      lVar38 = plVar11[8];
                      plVar13 = (long *)0x70;
                      __Znwm();
                      plVar13[2] = 0;
                      plVar11 = plVar13 + 3;
                      *plVar13 = (long)&PTR_FUN_110b2c750;
                      plVar13[1] = 0;
                      FUN_109c10390(plVar11,&uStack_338,lVar38,0);
                      uStack_2a8 = 0x9c2ad68;
                      uStack_2a4 = 1;
                      iStack_2a0 = 0x10b2c820;
                      iStack_29c = 1;
                      iStack_298 = iStack_218;
                      iStack_294 = uStack_228._4_4_;
                      uStack_290 = (undefined *)
                                   CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                      uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200 << 3);
                      iStack_24c = uStack_228._4_4_ * iStack_200 * 8;
                      auStack_268[0] = 0x9c2adfc;
                      auStack_268[1] = 1;
                      ppuStack_260 = &PTR_DAT_110b2c838;
                      iStack_258 = iStack_218;
                      iStack_254 = uStack_228._4_4_;
                      lVar38 = 0x40;
                      puVar30 = auStack_268;
                      if (iStack_218 != 1) {
                        lVar38 = 0;
                        puVar30 = &uStack_2a8;
                      }
                      iStack_250 = iStack_200;
                      plStack_3f0 = plVar11;
                      plStack_3e8 = plVar13;
                      if (0 < iVar27) {
                        iVar21 = 0;
                        iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                        lVar19 = plStack_1f8[8];
                        iVar26 = 0;
                        if ((int)uStack_210 != 0) {
                          iVar26 = iVar28 / (int)uStack_210;
                        }
                        lVar34 = plVar13[0xb];
                        uVar39 = iStack_200 * iStack_21c * uStack_208._4_4_;
                        uVar6 = iStack_200 * uStack_228._4_4_;
                        iVar24 = (int)uStack_210;
                        iVar28 = iVar28 - iVar26 * (int)uStack_210;
                        do {
                          if (-1 < iVar25) {
                            iVar24 = 0;
                            lVar29 = lVar19 + (long)(iStack_220 * (int)plStack_1f8[3] *
                                                    (iVar28 + *(int *)((long)plStack_1f8 + 0x14) *
                                                              iVar26)) * 8;
                            do {
                              (**(code **)((long)&uStack_2a8 + lVar38))(lVar29,lVar34,puVar30);
                              iVar24 = iStack_21c + iVar24;
                              lVar29 = lVar29 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)uVar39 << 3);
                              lVar34 = lVar34 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)uVar6 << 3);
                            } while (iVar24 <= iVar25);
                            iVar24 = (int)uStack_210;
                          }
                          bVar10 = iVar28 + 1 == iVar24;
                          if (bVar10) {
                            iVar26 = iVar26 + 1;
                          }
                          iVar17 = 0;
                          if (!bVar10) {
                            iVar17 = iVar28 + 1;
                          }
                          iVar21 = iVar21 + 1;
                          iVar28 = iVar17;
                        } while (iVar21 != iVar27);
                      }
                      lVar38 = 0x48;
                      do {
                        (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                  ((long)&uStack_2a8 + lVar38);
                        lVar38 = lVar38 + -0x40;
                      } while (lVar38 != -0x38);
                    }
                  }
                  else if (bVar4 == 6) {
                    iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                    iVar28 = iVar27 * (int)uStack_1e8;
                    iVar27 = iVar28 + iVar27;
                    if (uStack_210._4_4_ <= iVar27) {
                      iVar27 = uStack_210._4_4_;
                    }
                    uStack_338 = 0;
                    uStack_330 = 0;
                    uStack_32c = 0;
                    uStack_328 = 0;
                    uStack_324 = 0;
                    if (plStack_1e0 + 1 != &uStack_338) {
                      uVar39 = *(uint *)(plStack_1e0 + 1);
                      if (uVar39 != 0) {
                        _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                 (long)(int)uVar39 << 2);
                      }
                      uStack_338 = (ulong)uVar39;
                    }
                    iVar27 = iVar27 - iVar28;
                    uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                    lVar38 = plVar11[8];
                    plVar13 = (long *)0x70;
                    __Znwm();
                    plVar13[2] = 0;
                    plVar11 = plVar13 + 3;
                    *plVar13 = (long)&PTR_FUN_110b2c750;
                    plVar13[1] = 0;
                    FUN_109c106c4(plVar11,&uStack_338,lVar38,0);
                    iStack_24c = iStack_200 * uStack_228._4_4_;
                    uStack_2a8 = 0x9c2ab1c;
                    uStack_2a4 = 1;
                    iStack_2a0 = 0x10b2c790;
                    iStack_29c = 1;
                    iStack_298 = iStack_218;
                    iStack_294 = uStack_228._4_4_;
                    uStack_290 = (undefined *)
                                 CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                    uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200);
                    auStack_268[0] = 0x9c2abb0;
                    auStack_268[1] = 1;
                    ppuStack_260 = &PTR_DAT_110b2c7a8;
                    iStack_258 = iStack_218;
                    iStack_254 = uStack_228._4_4_;
                    lVar38 = 0x40;
                    puVar30 = auStack_268;
                    if (iStack_218 != 1) {
                      lVar38 = 0;
                      puVar30 = &uStack_2a8;
                    }
                    iStack_250 = iStack_200;
                    plStack_3f0 = plVar11;
                    plStack_3e8 = plVar13;
                    if (0 < iVar27) {
                      iVar21 = 0;
                      iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                      lVar19 = plStack_1f8[8];
                      iVar26 = 0;
                      if ((int)uStack_210 != 0) {
                        iVar26 = iVar28 / (int)uStack_210;
                      }
                      lVar34 = plVar13[0xb];
                      iVar24 = iStack_200 * iStack_21c * uStack_208._4_4_;
                      lVar29 = (long)iStack_24c;
                      iVar17 = (int)uStack_210;
                      iVar28 = iVar28 - iVar26 * (int)uStack_210;
                      do {
                        if (-1 < iVar25) {
                          iVar17 = 0;
                          lVar33 = lVar19 + iStack_220 * (int)plStack_1f8[3] *
                                            (iVar28 + *(int *)((long)plStack_1f8 + 0x14) * iVar26);
                          do {
                            (**(code **)((long)&uStack_2a8 + lVar38))(lVar33,lVar34,puVar30);
                            lVar33 = lVar33 + iVar24;
                            lVar34 = lVar34 + lVar29;
                            iVar17 = iStack_21c + iVar17;
                          } while (iVar17 <= iVar25);
                          iVar17 = (int)uStack_210;
                        }
                        bVar10 = iVar28 + 1 == iVar17;
                        if (bVar10) {
                          iVar26 = iVar26 + 1;
                        }
                        iVar2 = 0;
                        if (!bVar10) {
                          iVar2 = iVar28 + 1;
                        }
                        iVar21 = iVar21 + 1;
                        iVar28 = iVar2;
                      } while (iVar21 != iVar27);
                    }
                    lVar38 = 0x48;
                    do {
                      (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                ((long)&uStack_2a8 + lVar38);
                      lVar38 = lVar38 + -0x40;
                    } while (lVar38 != -0x38);
                  }
                  else {
                    if (bVar4 != 7) goto LAB_109c2a2fc;
                    iVar27 = *(int *)((long)plStack_1e0 + 0xcU);
                    iVar28 = iVar27 * (int)uStack_1e8;
                    iVar27 = iVar28 + iVar27;
                    if (uStack_210._4_4_ <= iVar27) {
                      iVar27 = uStack_210._4_4_;
                    }
                    uStack_338 = 0;
                    uStack_330 = 0;
                    uStack_32c = 0;
                    uStack_328 = 0;
                    uStack_324 = 0;
                    if (plStack_1e0 + 1 != &uStack_338) {
                      uVar39 = *(uint *)(plStack_1e0 + 1);
                      if (uVar39 != 0) {
                        _memmove((long)&uStack_338 + 4,(int *)((long)plStack_1e0 + 0xcU),
                                 (long)(int)uVar39 << 2);
                      }
                      uStack_338 = (ulong)uVar39;
                    }
                    iVar27 = iVar27 - iVar28;
                    uStack_338 = CONCAT44(iVar27,(uint)uStack_338);
                    lVar38 = plVar11[8];
                    plVar13 = (long *)0x70;
                    __Znwm();
                    plVar13[2] = 0;
                    plVar11 = plVar13 + 3;
                    *plVar13 = (long)&PTR_FUN_110b2c750;
                    plVar13[1] = 0;
                    FUN_109c109fc(plVar11,&uStack_338,lVar38,0);
                    uStack_2a8 = 0x9c2abe0;
                    uStack_2a4 = 1;
                    iStack_2a0 = 0x10b2c7c0;
                    iStack_29c = 1;
                    iStack_298 = iStack_218;
                    iStack_294 = uStack_228._4_4_;
                    uStack_290 = (undefined *)
                                 CONCAT44(iStack_218 * (uStack_228._4_4_ + -1) + 1,iStack_200);
                    uStack_288 = CONCAT44(iStack_218 * iStack_200,iStack_200 << 1);
                    iStack_24c = uStack_228._4_4_ * iStack_200 * 2;
                    auStack_268[0] = 0x9c2ac74;
                    auStack_268[1] = 1;
                    ppuStack_260 = &PTR_DAT_110b2c7d8;
                    iStack_258 = iStack_218;
                    iStack_254 = uStack_228._4_4_;
                    lVar38 = 0x40;
                    puVar30 = auStack_268;
                    if (iStack_218 != 1) {
                      lVar38 = 0;
                      puVar30 = &uStack_2a8;
                    }
                    iStack_250 = iStack_200;
                    plStack_3f0 = plVar11;
                    plStack_3e8 = plVar13;
                    if (0 < iVar27) {
                      iVar21 = 0;
                      iVar25 = ((int)uStack_228 + -1) * iStack_21c;
                      lVar19 = plStack_1f8[8];
                      iVar26 = 0;
                      if ((int)uStack_210 != 0) {
                        iVar26 = iVar28 / (int)uStack_210;
                      }
                      lVar34 = plVar13[0xb];
                      uVar39 = iStack_200 * iStack_21c * uStack_208._4_4_;
                      uVar6 = iStack_200 * uStack_228._4_4_;
                      iVar24 = (int)uStack_210;
                      iVar28 = iVar28 - iVar26 * (int)uStack_210;
                      do {
                        if (-1 < iVar25) {
                          iVar24 = 0;
                          lVar29 = lVar19 + (long)(iStack_220 * (int)plStack_1f8[3] *
                                                  (iVar28 + *(int *)((long)plStack_1f8 + 0x14) *
                                                            iVar26)) * 2;
                          do {
                            (**(code **)((long)&uStack_2a8 + lVar38))(lVar29,lVar34,puVar30);
                            iVar24 = iStack_21c + iVar24;
                            lVar29 = lVar29 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffffe00000000 |
                                              (ulong)uVar39 << 1);
                            lVar34 = lVar34 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 |
                                              (ulong)uVar6 << 1);
                          } while (iVar24 <= iVar25);
                          iVar24 = (int)uStack_210;
                        }
                        bVar10 = iVar28 + 1 == iVar24;
                        if (bVar10) {
                          iVar26 = iVar26 + 1;
                        }
                        iVar17 = 0;
                        if (!bVar10) {
                          iVar17 = iVar28 + 1;
                        }
                        iVar21 = iVar21 + 1;
                        iVar28 = iVar17;
                      } while (iVar21 != iVar27);
                    }
                    lVar38 = 0x48;
                    do {
                      (*(code *)**(undefined8 **)((long)&uStack_2a8 + lVar38))
                                ((long)&uStack_2a8 + lVar38);
                      lVar38 = lVar38 + -0x40;
                    } while (lVar38 != -0x38);
                  }
                  plVar11 = plStack_3f0;
                  uStack_1e8 = (long *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8 + 1);
                  uStack_324 = 0;
                  uStack_32c = 0;
                  uStack_328 = 0;
                  uStack_338 = CONCAT44(*(undefined4 *)((long)plStack_3f0 + 0xc),2);
                  uStack_330 = uStack_39c._4_4_;
                  if (uStack_39c._4_4_ == *(uint *)(alStack_2f0[0] + 0x14)) {
                    FUN_109c0ffb0(&uStack_2a8,&uStack_338,lStack_430,0);
                    if (*(char *)(param_1 + 0xe8) == '\x01') {
                      uVar20 = *(undefined8 *)(param_1 + 0xf0);
                    }
                    else {
                      uVar20 = 0;
                    }
                    FUN_109c2176c(plVar11,&uStack_3a8,0x65,0x6f,0x6f,&uStack_2a8,3,
                                  *(undefined8 *)(param_1 + 0x68),uVar20,0x100,param_1 + 0x80,
                                  param_1 + 0x88);
                    uVar39 = (uint)uStack_338 & ((int)(uint)uStack_338 >> 0x1f ^ 0xffffffffU);
                    if (4 < (int)uVar39) {
                      uVar39 = 5;
                    }
                    iVar27 = 0xf5749aa;
                    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_338 + 4,uVar39);
                    lStack_430 = lStack_430 + (long)iVar27 * 4;
                    FUN_109c10e9c(&uStack_2a8);
                  }
                  else {
                    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                              (&uStack_2a8,(undefined8 *)**(undefined8 **)(param_1 + 0x68),
                               &uStack_338,1);
                    if (*(char *)(param_1 + 0xe8) == '\x01') {
                      uVar20 = *(undefined8 *)(param_1 + 0xf0);
                    }
                    else {
                      uVar20 = 0;
                    }
                    FUN_109c2176c(plVar11,&uStack_3a8,0x65,0x6f,0x6f,CONCAT44(uStack_2a4,uStack_2a8)
                                  ,3,*(undefined8 *)(param_1 + 0x68),uVar20,0x100,param_1 + 0x80,
                                  param_1 + 0x88);
                    if ((0 < (int)(uint)uStack_338) && (0 < uStack_338._4_4_)) {
                      iVar27 = 0;
                      lVar38 = *(long *)(alStack_2f0[0] + 0x40);
                      lVar19 = *(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x40);
                      do {
                        uVar39 = uStack_330;
                        if ((int)(uint)uStack_338 < 2) {
                          uVar39 = 0xffffffff;
                        }
                        _memcpy(lVar38 + (long)(iVar16 + (iVar27 + (int)lVar37 *
                                                                   *(int *)(alStack_2f0[0] + 0x10))
                                                         * *(int *)(alStack_2f0[0] + 0x14)) * 4,
                                lVar19 + (long)(int)(uStack_330 * iVar27) * 4,
                                -(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar39 << 2);
                        iVar27 = iVar27 + 1;
                        iVar28 = uStack_338._4_4_;
                        if ((int)(uint)uStack_338 < 1) {
                          iVar28 = -1;
                        }
                      } while (iVar27 < iVar28);
                    }
                    uVar39 = uStack_330;
                    if ((int)(uint)uStack_338 < 2) {
                      uVar39 = 0xffffffff;
                    }
                    iVar16 = uVar39 + iVar16;
                    FUN_109c180ec(&uStack_2a8);
                  }
                  plVar11 = plStack_3e8;
                  if (plStack_3e8 != (long *)0x0) {
                    plVar13 = plStack_3e8 + 1;
                    do {
                      lVar38 = *plVar13;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar10) {
                        *plVar13 = lVar38 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar38 == 0) {
                      (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                    }
                  }
                } while ((int)uStack_1e8 < uStack_1e8._4_4_);
              }
              FUN_109c180ec(&plStack_1e0);
              plVar11 = plStack_1f0;
              if (plStack_1f0 != (long *)0x0) {
                plVar13 = plStack_1f0 + 1;
                do {
                  lVar38 = *plVar13;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar10) {
                    *plVar13 = lVar38 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar38 == 0) {
                  (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              plVar11 = plStack_3c8;
              if (plStack_3c8 != (long *)0x0) {
                plVar13 = plStack_3c8 + 1;
                do {
                  lVar38 = *plVar13;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar10) {
                    *plVar13 = lVar38 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar38 == 0) {
                  (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              do {
                lVar38 = *plVar36;
                cVar8 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                if (bVar10) {
                  *plVar36 = lVar38 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar38 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
              }
              lVar37 = lVar37 + 1;
            } while (lVar37 < *(int *)(param_1 + 0x148));
          }
        }
        else {
          iStack_220 = 0;
          iStack_21c = 0;
          uStack_228 = (long *)0x0;
          FUN_109c17274(&uStack_338,lStack_350,*(undefined4 *)(param_1 + 0x98),
                        *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),
                        *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa4),
                        *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x158),
                        *(undefined4 *)(param_1 + 0x15c));
          if (bVar3 == 2) {
            FUN_109c134b0(uStack_338,1);
            FUN_109c135b4();
          }
          uVar39 = *(uint *)(uStack_338 + 8) &
                   ((int)*(uint *)(uStack_338 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar39) {
            uVar39 = 5;
          }
          iVar16 = 0xf5749aa;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,uStack_338 + 0xc,uVar39);
          iVar27 = *(int *)(param_1 + 0x148);
          if (0 < iVar27) {
            iVar28 = 0;
            lVar23 = 0;
            lVar37 = *(long *)(uStack_338 + 0x40);
            lVar38 = *(long *)(alStack_2f0[0] + 0x40);
            uVar39 = 0;
            if (iVar27 != 0) {
              uVar39 = iVar16 / iVar27;
            }
            do {
              uStack_2a8 = 2;
              iStack_29c = 0;
              iStack_298 = 0;
              iStack_294 = 0;
              uStack_2a4 = (undefined4)*(undefined8 *)(uStack_338 + 0x10);
              iStack_2a0 = (int)((ulong)*(undefined8 *)(uStack_338 + 0x10) >> 0x20);
              FUN_109c0ffb0(&uStack_228,&uStack_2a8,lVar37,0);
              uStack_3b4 = 0;
              uStack_3b0 = 0;
              uStack_3ac = 0;
              uStack_3c0 = CONCAT44(iVar18,2);
              iStack_3b8 = iVar22;
              FUN_109c0ffb0(&uStack_2a8,&uStack_3c0,lVar38 + (long)iVar28 * 4,0);
              if (*(char *)(param_1 + 0xe8) == '\x01') {
                uVar20 = *(undefined8 *)(param_1 + 0xf0);
              }
              else {
                uVar20 = 0;
              }
              FUN_109c2176c(&uStack_228,&uStack_3a8,0x65,0x6f,0x6f,&uStack_2a8,3,
                            *(undefined8 *)(param_1 + 0x68),uVar20,0x100,param_1 + 0x80,
                            param_1 + 0x88);
              FUN_109c10e9c(&uStack_2a8);
              FUN_109c10e9c(&uStack_228);
              lVar23 = lVar23 + 1;
              iVar28 = iVar28 + iVar18 * iVar22;
              lVar37 = lVar37 + (-(ulong)(uVar39 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar39 << 2)
              ;
            } while (lVar23 < *(int *)(param_1 + 0x148));
          }
          FUN_109c180ec(&uStack_338);
        }
        func_0x000109c18360(plVar32,alStack_2f0);
        puVar30 = (uint *)(*plVar35 + 8);
        iStack_2a0 = 0;
        iStack_29c = 0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        iStack_298 = 0;
        iStack_294 = 0;
        uVar39 = uStack_2a8;
        if ((puVar30 != &uStack_2a8) && (uVar39 = *puVar30, uVar39 != 0)) {
          _memmove((ulong)&uStack_2a8 | 4,*plVar35 + 0xc,(long)(int)uVar39 << 2);
        }
        uStack_2a8 = uVar39;
        uVar6 = uStack_2a8;
        uStack_2a4 = *(undefined4 *)(param_1 + 0x148);
        iStack_2a0 = (int)*(undefined8 *)(param_1 + 0x158);
        iStack_29c = (int)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
        iStack_298 = *(int *)(param_1 + 0x90);
        lVar23 = *plVar32;
        puVar30 = (uint *)(lVar23 + 8);
        uVar39 = *puVar30 & ((int)*puVar30 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar39) {
          uVar39 = 5;
        }
        iVar22 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar23 + 0xc,uVar39);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar6) {
          uVar6 = 5;
        }
        iVar18 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_2a8 | 4,uVar6);
        uStack_228 = (long *)&UNK_10f574cf1;
        iStack_220 = 0xf;
        iStack_21c = 0;
        iStack_218 = CONCAT31(iStack_218._1_3_,iVar22 == iVar18);
        uStack_210 = &UNK_10f574d01;
        uStack_208 = 0xe;
        FUN_10959b640(&uStack_228);
        uVar39 = uStack_2a8;
        if ((puVar30 != &uStack_2a8) && (iVar22 == iVar18)) {
          if (uStack_2a8 != 0) {
            _memmove(lVar23 + 0xc,(ulong)&uStack_2a8 | 4,(long)(int)uStack_2a8 << 2);
          }
          *puVar30 = uVar39;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*plVar32 + 0x20,param_1 + 0x48);
        FUN_109c10e9c(&uStack_3a8);
        FUN_109c180ec(alStack_2f0);
        plVar31 = plStack_348;
        if (plStack_348 != (long *)0x0) {
          plVar32 = plStack_348 + 1;
          do {
            lVar23 = *plVar32;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = lVar23 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_348 + 0x10))(plStack_348);
            goto LAB_109c29844;
          }
        }
      }
LAB_109c29d20:
      *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar35 + 0x3c);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_109c2a340;
    }
  }
LAB_109c2a34c:
  func_0x000105688514(puVar15);
LAB_109c2a378:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c2a37c);
  (*pcVar9)();
}



/* Entry: 109c2a800; end: 109c2a8fb;  */

void FUN_109c2a800(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 8) < 2) {
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(int *)(param_2 + 8) != 1) goto LAB_109c2a848;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x10);
  }
  uVar9 = *(uint *)(param_2 + 0xc);
LAB_109c2a848:
  lVar1 = 0x58;
  __Znwm();
  FUN_109c1106c();
  *param_1 = lVar1;
  if (0 < (int)uVar9) {
    uVar2 = 0;
    puVar3 = *(undefined1 **)(param_2 + 0x40);
    puVar4 = *(undefined1 **)(lVar1 + 0x40);
    do {
      puVar5 = puVar3;
      puVar6 = puVar4;
      uVar7 = (ulong)uVar8;
      if (0 < (int)uVar8) {
        do {
          *puVar6 = *puVar5;
          puVar6 = puVar6 + uVar9;
          uVar7 = uVar7 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 != 0);
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + uVar8;
    } while (uVar2 != uVar9);
  }
  return;
}



/* Entry: 109c2a8fc; end: 109c2a90b;  */

void FUN_109c2a8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c2a90c; end: 109c2a92b;  */

void FUN_109c2a90c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c750;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2a92c; end: 109c2a93b;  */

void FUN_109c2a92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109c2a934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109c2a93c; end: 109c2a993;  */

void FUN_109c2a93c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_109c2a994();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109c2a994; end: 109c2a9db;  */

undefined8 * FUN_109c2a994(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b2c750;
  FUN_109c10f78(param_1 + 3);
  return param_1;
}



/* Entry: 109c2a9dc; end: 109c2aa5b;  */

long * FUN_109c2a9dc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  param_1[1] = param_2[1];
  plVar3 = param_1 + 2;
  (**(code **)*plVar3)(plVar3);
  (**(code **)(param_2[2] + 0x10))(plVar3,param_2 + 2);
  return param_1;
}



/* Entry: 109c2aa5c; end: 109c2aacb;  */

void FUN_109c2aa5c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_109c2aacc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109c2aacc; end: 109c2ab1b;  */

undefined8 *
FUN_109c2aacc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b2c750;
  FUN_109c0ffb0(param_1 + 3,param_2,*param_3,*param_4);
  return param_1;
}



/* Entry: 109c2ab1c; end: 109c2ab8b;  */

void FUN_109c2ab1c(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + *(int *)(param_3 + 0x18);
      param_1 = param_1 + *(int *)(param_3 + 0x24);
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c2ab8c; end: 109c2abdf;  */

void FUN_109c2ab8c(void)

{
  return;
}



/* Entry: 109c2abe0; end: 109c2ac4f;  */

void FUN_109c2abe0(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + (long)*(int *)(param_3 + 0x18) * 2;
      param_1 = param_1 + (long)*(int *)(param_3 + 0x24) * 2;
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c2ac50; end: 109c2aca3;  */

void FUN_109c2ac50(void)

{
  return;
}



/* Entry: 109c2aca4; end: 109c2ad13;  */

void FUN_109c2aca4(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + (long)*(int *)(param_3 + 0x18) * 4;
      param_1 = param_1 + (long)*(int *)(param_3 + 0x24) * 4;
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c2ad14; end: 109c2ad67;  */

void FUN_109c2ad14(void)

{
  return;
}



/* Entry: 109c2ad68; end: 109c2add7;  */

void FUN_109c2ad68(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + (long)*(int *)(param_3 + 0x18) * 8;
      param_1 = param_1 + (long)*(int *)(param_3 + 0x24) * 8;
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c2add8; end: 109c2ae2b;  */

void FUN_109c2add8(void)

{
  return;
}



/* Entry: 109c2ae2c; end: 109c2ae87;  */

undefined8 * FUN_109c2ae2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b2c878;
  FUN_10959b818(param_1 + 0x22);
  FUN_10959b818(param_1 + 0x1e);
  FUN_10959b818(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x15);
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



/* Entry: 109c2ae88; end: 109c2af37;  */

void FUN_109c2ae88(undefined8 *param_1)

{
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
  *(undefined8 *)((long)param_1 + 0x9c) = 0x100000001;
  *(undefined4 *)((long)param_1 + 0xa4) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_DAT_110b2c8b8;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)((long)param_1 + 0x47) = 6;
  *(undefined2 *)((long)param_1 + 0x34) = 0x766e;
  *(undefined4 *)(param_1 + 6) = 0x6f636544;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  return;
}



/* Entry: 109c2af38; end: 109c2af4b;  */

void FUN_109c2af38(void)

{
  FUN_109c2ae2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2af4c; end: 109c2b4b3;  */

void FUN_109c2af4c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  char cVar13;
  float fVar14;
  bool bVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  undefined8 uVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  undefined4 in_stack_fffffffffffffdc8;
  undefined2 uVar26;
  int iStack_1f4;
  uint uStack_1d0;
  uint uStack_1cc;
  int iStack_1c8;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_160;
  uint uStack_15c;
  uint uStack_158;
  int iStack_154;
  undefined8 uStack_150;
  long alStack_108 [9];
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000105688514(&UNK_10f5a408e);
LAB_109c2b418:
    ___stack_chk_fail();
  }
  else {
    plVar22 = (long *)*param_2;
    FUN_109c182f4(param_3,1);
    lVar17 = *plVar22;
    if ((*(int *)(lVar17 + 0x3c) != 0) &&
       (*(int *)(lVar17 + 0x3c) != 2 || *(int *)(lVar17 + 8) != 4)) {
LAB_109c2b3d4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      goto LAB_109c2b418;
    }
    plVar21 = (long *)*param_3;
    uVar1 = *(uint *)(lVar17 + 0xc);
    uVar25 = (ulong)uVar1;
    iVar5 = *(int *)(lVar17 + 0x10);
    iVar2 = *(int *)(lVar17 + 0x14);
    iVar6 = *(int *)(lVar17 + 0x18);
    iVar3 = *(int *)(param_1 + 0x90);
    iVar7 = *(int *)(param_1 + 0x94);
    iVar9 = *(int *)(param_1 + 0x120);
    iVar4 = *(int *)(param_1 + 0x98);
    iVar8 = *(int *)(param_1 + 0x9c);
    iVar10 = *(int *)(param_1 + 0x124);
    if (*(char *)(param_1 + 0x62) == '\x01') {
      if (iVar10 != 0) goto LAB_109c2b428;
      iVar20 = iVar8 * iVar2;
      iStack_1f4 = iVar8 * iVar5;
      if (iVar9 < 1) {
        iVar20 = iVar7 + iVar8 * (iVar2 + -1);
        iStack_1f4 = iVar4 + iVar8 * (iVar5 + -1);
      }
LAB_109c2b04c:
      lVar23 = *(long *)(lVar17 + 0x40);
      lStack_c0 = 0;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
      pcStack_b8 = FUN_109c180a4;
      ppuStack_b0 = &PTR_DAT_110950c70;
      bVar15 = (*(byte *)(lVar17 + 0x48) | 4) != 6;
      if (bVar15) {
        uVar11 = 0;
      }
      else {
        FUN_109c1be70(&uStack_160,*(undefined8 *)(param_1 + 0x68),plVar22);
        FUN_109c2a9dc(&lStack_c0,&uStack_160);
        FUN_109c180ec(&uStack_160);
        lVar23 = *(long *)(lStack_c0 + 0x40);
        uVar11 = *(undefined1 *)(*plVar22 + 0x48);
      }
      plVar24 = (long *)(param_1 + 0xa8);
      if ((*plVar24 != 0) && ((*(byte *)(*plVar24 + 0x48) | 4) == 6)) {
        FUN_109c1ad80(&uStack_160,*(undefined8 *)(param_1 + 0x68),plVar24,param_1 + 0x110,1);
        func_0x000109c18360(plVar24,&uStack_160);
        FUN_109c180ec(&uStack_160);
      }
      if ((*(char *)(param_1 + 0xe8) == '\x01') &&
         (plVar24 = (long *)(param_1 + 0xf0), *(char *)(*plVar24 + 0x48) == '\x04')) {
        if ((*(char *)(param_1 + 0x10d) == '\x01') && (*(uint *)(param_1 + 0x90) != 0)) {
          fVar14 = *(float *)(*plVar22 + 0x4c);
          lVar17 = (ulong)*(uint *)(param_1 + 0x90) << 2;
          pfVar18 = *(float **)(*(long *)(param_1 + 0x110) + 0x40);
          do {
            *pfVar18 = fVar14 * *pfVar18;
            lVar17 = lVar17 + -4;
            pfVar18 = pfVar18 + 1;
          } while (lVar17 != 0);
        }
        FUN_109c1ad80(&uStack_160,*(undefined8 *)(param_1 + 0x68),plVar24,param_1 + 0x110,1);
        func_0x000109c18360(plVar24,&uStack_160);
        FUN_109c180ec(&uStack_160);
        FUN_109c2b4b4(param_1 + 0x110);
      }
      uVar12 = iVar2 * iVar5;
      iVar3 = iVar7 * iVar4 * iVar3;
      uVar19 = *(undefined8 *)(param_1 + 0xa8);
      uStack_150 = 0;
      uStack_160 = 3;
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
      uStack_15c = uVar1;
      uStack_158 = uVar12;
      iStack_154 = iVar3;
      (**(code **)*puVar16)(alStack_108,puVar16,&uStack_160,1);
      *(undefined4 *)(alStack_108[0] + 0x3c) = 0;
      if (0 < (int)uVar1) {
        uVar1 = uVar12 * iVar6;
        lVar17 = *(long *)(alStack_108[0] + 0x40);
        do {
          uVar26 = (undefined2)((uint)in_stack_fffffffffffffdc8 >> 0x10);
          uStack_1ac = 0;
          uStack_1a4 = 0;
          uStack_1b8 = 2;
          uStack_1b4 = uVar12;
          iStack_1b0 = iVar6;
          FUN_109c0ffb0(&uStack_160,&uStack_1b8,lVar23,0);
          uStack_1c4 = 0;
          uStack_1bc = 0;
          uStack_1d0 = 2;
          uStack_1cc = uVar12;
          iStack_1c8 = iVar3;
          FUN_109c0ffb0(&uStack_1b8,&uStack_1d0,lVar17,0);
          uStack_1d0 = uStack_1d0 & 0xffffff00;
          uStack_1cc = uStack_1cc & 0xffffff00;
          in_stack_fffffffffffffdc8 = CONCAT22(uVar26,0x100);
          FUN_109c2176c(&uStack_160,uVar19,0x65,0x6f,0x6f,&uStack_1b8,3,*(long *)(param_1 + 0x68),0,
                        in_stack_fffffffffffffdc8);
          FUN_109c10e9c(&uStack_1b8);
          FUN_109c10e9c(&uStack_160);
          lVar17 = lVar17 + (-(ulong)(iVar3 * uVar12 >> 0x1f) & 0xfffffffc00000000 |
                            (ulong)(iVar3 * uVar12) << 2);
          lVar23 = lVar23 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      FUN_109c17a88(&uStack_160,alStack_108[0],*(undefined4 *)(param_1 + 0x98),
                    *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),
                    *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x120),
                    *(undefined4 *)(param_1 + 0x120),iVar5,iVar2,iStack_1f4,iVar20);
      func_0x000109c18360(plVar21,&uStack_160);
      FUN_109c180ec(&uStack_160);
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        FUN_109c21f4c(*(undefined8 *)(param_1 + 0xf0),3,*plVar21,*(undefined8 *)(param_1 + 0x68));
      }
      if (!bVar15) {
        FUN_109c1b3e4(&uStack_160,*(undefined8 *)(param_1 + 0x68),plVar21,
                      *(undefined4 *)(param_1 + 0x7c),uVar11);
        func_0x000109c18360(plVar21,&uStack_160);
        FUN_109c180ec(&uStack_160);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*plVar21 + 0x20,param_1 + 0x48);
      *(undefined4 *)(*plVar21 + 0x3c) = *(undefined4 *)(*plVar22 + 0x3c);
      FUN_109c180ec(alStack_108);
      FUN_109c180ec(&lStack_c0);
      goto LAB_109c2b3d4;
    }
    if ((iVar10 == 0) || (iVar10 < iVar8)) {
      iVar20 = iVar7 + iVar9 * -2 + iVar8 * (iVar2 + -1) + iVar10;
      iStack_1f4 = iVar4 + iVar9 * -2 + iVar8 * (iVar5 + -1) + iVar10;
      goto LAB_109c2b04c;
    }
  }
  func_0x000105688514(&UNK_10f5a40ee);
LAB_109c2b428:
  puVar16 = (undefined8 *)&UNK_10f5a40c5;
  func_0x000105688514();
  FUN_109c180ec(&uStack_160);
  FUN_109c180ec(&lStack_c0);
  __Unwind_Resume();
  plVar22 = (long *)puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  if (plVar22 != (long *)0x0) {
    plVar21 = plVar22 + 1;
    do {
      lVar17 = *plVar21;
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar15) {
        *plVar21 = lVar17 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar22);
      return;
    }
  }
  return;
}



/* Entry: 109c2b4b4; end: 109c2b50f;  */

void FUN_109c2b4b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 109c2b510; end: 109c2b61f;  */

undefined8 * FUN_109c2b510(undefined8 *param_1)

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
  *(undefined8 *)((long)param_1 + 0x9c) = 0x100000001;
  *(undefined4 *)((long)param_1 + 0xa4) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  *param_1 = &PTR_FUN_110b2c8f8;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a4119);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2b620; end: 109c2b623;  */

undefined8 * FUN_109c2b620(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b2c878;
  FUN_10959b818(param_1 + 0x22);
  FUN_10959b818(param_1 + 0x1e);
  FUN_10959b818(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x15);
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



/* Entry: 109c2b624; end: 109c2b637;  */

void FUN_109c2b624(void)

{
  FUN_109c2ae2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2b638; end: 109c2c743;  */

void FUN_109c2b638(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long *plVar33;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  long *plVar37;
  ulong uVar38;
  long *plVar39;
  long lVar40;
  long lVar41;
  undefined4 uVar42;
  float fVar43;
  double dVar44;
  undefined4 uVar45;
  float fVar46;
  undefined8 in_stack_fffffffffffffc30;
  uint uVar47;
  int iStack_30c;
  long lStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long alStack_2d0 [9];
  undefined8 uStack_288;
  long *plStack_280;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar47 = (uint)((ulong)in_stack_fffffffffffffc30 >> 0x20);
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000105688514(&UNK_10f5a4127);
LAB_109c2c618:
    ___stack_chk_fail();
LAB_109c2c61c:
    func_0x000105688514(&UNK_10f5a4161);
LAB_109c2c628:
    func_0x000105688514(&UNK_10f5a4075);
  }
  else {
    plVar33 = (long *)*param_2;
    FUN_109c182f4(param_3,1);
    lVar30 = *plVar33;
    if ((*(int *)(lVar30 + 0x3c) != 0) &&
       (*(int *)(lVar30 + 0x3c) != 2 || *(int *)(lVar30 + 8) != 4)) {
LAB_109c2c2d0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*(long *)*param_3 + 0x20,param_1 + 0x48);
      *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar33 + 0x3c);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      goto LAB_109c2c618;
    }
    iVar6 = *(int *)(lVar30 + 0xc);
    iVar26 = *(int *)(lVar30 + 0x10);
    iVar27 = *(int *)(lVar30 + 0x14);
    iVar28 = *(int *)(lVar30 + 0x18);
    uVar8 = (*(int *)(param_1 + 0x98) + -1) * *(int *)(param_1 + 0xa4);
    uVar9 = ~uVar8;
    iVar23 = *(int *)(param_1 + 0x9c);
    uVar18 = (*(int *)(param_1 + 0x94) + -1) * *(int *)(param_1 + 0xa0);
    uVar36 = ~uVar18;
    iVar35 = *(int *)(param_1 + 0x104);
    bVar7 = *(byte *)(param_1 + 0x10c);
    if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
      if (1 >= bVar7) {
        iVar19 = iVar26 + uVar9 + iVar35 * 2;
        if ((*(byte *)(param_1 + 0x62) & 1) != 0) goto LAB_109c2b734;
        iVar22 = (int)((float)iVar19 / (float)iVar23);
        iVar31 = *(int *)(param_1 + 0x100);
        iVar19 = (int)((float)(int)(iVar27 + uVar36 + iVar31 * 2) / (float)iVar23);
        goto LAB_109c2b7a0;
      }
LAB_109c2b750:
      if (bVar7 == 2) {
        iVar22 = 0;
        if (iVar23 != 0) {
          iVar22 = (iVar23 + -1 + iVar26) / iVar23;
        }
        iVar31 = *(int *)(param_1 + 0x100);
        iVar19 = 0;
        if (iVar23 != 0) {
          iVar19 = (iVar23 + -1 + iVar27) / iVar23;
        }
        goto LAB_109c2b7a4;
      }
      goto LAB_109c2c628;
    }
    if (1 < bVar7) goto LAB_109c2b750;
    iVar19 = iVar26 + uVar9 + iVar35 * 2;
LAB_109c2b734:
    iVar31 = *(int *)(param_1 + 0x100);
    iVar22 = 0;
    if (iVar23 != 0) {
      iVar22 = iVar19 / iVar23;
    }
    iVar19 = 0;
    if (iVar23 != 0) {
      iVar19 = (int)(iVar27 + uVar36 + iVar31 * 2) / iVar23;
    }
LAB_109c2b7a0:
    iVar22 = iVar22 + 1;
    iVar19 = iVar19 + 1;
LAB_109c2b7a4:
    if (iVar22 < 1 || iVar19 < 1) goto LAB_109c2c61c;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    if ((uint *)(lVar30 + 8U) != (uint *)&uStack_2f0) {
      uVar9 = *(uint *)(lVar30 + 8U);
      if (uVar9 != 0) {
        _memmove((ulong)&uStack_2f0 | 4,(int *)(lVar30 + 0xc),(long)(int)uVar9 << 2);
      }
      uStack_2f0 = (ulong)uVar9;
    }
    uStack_2f0 = CONCAT44(iVar6,(uint)uStack_2f0);
    uStack_2e8 = CONCAT44(iVar19,iVar22);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,iVar28);
    uVar18 = (uVar18 - (iVar27 + iVar31 * 2)) + (iVar19 + -1) * iVar23 + 1;
    uVar9 = (uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)) + iVar31;
    *(uint *)(param_1 + 0x150) = uVar9;
    uVar8 = (uVar8 - (iVar26 + iVar35 * 2)) + (iVar22 + -1) * iVar23 + 1;
    iVar26 = (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) + iVar35;
    *(int *)(param_1 + 0x148) = iVar26;
    if (uVar9 == 0 && iVar26 == 0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
LAB_109c2b8a0:
      plVar37 = (long *)(param_1 + 0x68);
      puVar13 = *(undefined8 **)*plVar37;
      if (*(char *)(lVar30 + 0x48) == '\x02') {
        (**(code **)*puVar13)(alStack_2d0,puVar13,&uStack_2f0);
        if (((*(int *)(param_1 + 0x98) != 1) || (*(int *)(param_1 + 0x94) != 1)) ||
           ((*(byte *)(param_1 + 0x10d) & 1) != 0)) {
          lVar30 = *plVar33;
          plVar37 = (long *)(param_1 + 8);
          if (*plVar37 == 0) {
            iStack_260 = *(int *)(lVar30 + 0x18);
            if (*(char *)(param_1 + 0x84) == '\x01') {
              iVar26 = *(int *)(param_1 + 0x7c) +
                       (int)(*(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x78));
              if (iVar26 < -0x7f) {
                iVar26 = -0x80;
              }
              if (0x7e < iVar26) {
                iVar26 = 0x7f;
              }
              fStack_200 = (float)iVar26;
            }
            else {
              fStack_200 = -128.0;
            }
            if (*(char *)(param_1 + 0x8c) == '\x01') {
              iVar26 = *(int *)(param_1 + 0x7c) +
                       (int)(*(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x78));
              if (iVar26 < -0x7f) {
                iVar26 = -0x80;
              }
              if (0x7e < iVar26) {
                iVar26 = 0x7f;
              }
              fStack_1fc = (float)iVar26;
            }
            else {
              fStack_1fc = 127.0;
            }
            lStack_248 = (long)iStack_260;
            plStack_280 = *(long **)(param_1 + 0x148);
            uStack_274 = *(undefined4 *)(param_1 + 0x94);
            uStack_264 = *(undefined4 *)(param_1 + 0xa0);
            uStack_268 = *(undefined4 *)(param_1 + 0xa4);
            uStack_270 = *(undefined4 *)(param_1 + 0x9c);
            uStack_234 = *(undefined4 *)(lVar30 + 0x4c);
            uStack_238 = (undefined1)*(undefined4 *)(lVar30 + 0x50);
            if (*(char *)(param_1 + 0x10d) == '\x01') {
              uStack_228 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x40);
              uStack_218 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40);
              if (*(char *)(param_1 + 0xe8) == '\x01') {
                uStack_210 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40);
              }
              else {
                uStack_210 = 0;
              }
              uStack_204 = *(undefined4 *)(param_1 + 0x78);
              uStack_220 = 0;
              uStack_208 = (undefined1)*(undefined4 *)(param_1 + 0x7c);
              uStack_1e0 = 0x24;
              ppuVar14 = &PTR_DAT_1132eabe8;
            }
            else {
              uStack_220 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x4c);
              uStack_218 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40);
              if (*(char *)(param_1 + 0xe8) == '\x01') {
                uStack_210 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40);
              }
              else {
                uStack_210 = 0;
              }
              uStack_204 = *(undefined4 *)(param_1 + 0x78);
              uStack_228 = 0;
              uStack_208 = (undefined1)*(undefined4 *)(param_1 + 0x7c);
              uStack_1e0 = 0x26;
              ppuVar14 = &PTR_DAT_1132eab68;
            }
            uStack_d4 = 0;
            uStack_de = 0;
            uStack_e0 = 0;
            uStack_e6 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_17c = 0;
            uStack_180 = 0;
            uStack_184 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1d8 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1f8 = 0;
            uStack_230 = 0;
            uStack_250 = 1;
            uStack_258 = 1;
            uStack_288 = CONCAT44(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x144))
            ;
            iStack_278 = *(int *)(param_1 + 0x98);
            uStack_26c = uStack_270;
            lStack_240 = lStack_248;
            func_0x000109bd05fc(ppuVar14,&uStack_288,plVar37);
            if ((int)ppuVar14 == 0) {
              uStack_288 = 0;
              plStack_280 = (long *)0x0;
              FUN_109c1e9b8(param_1 + 0xa8,&uStack_288);
              plVar39 = plStack_280;
              if (plStack_280 != (long *)0x0) {
                plVar2 = plStack_280 + 1;
                do {
                  lVar30 = *plVar2;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar11) {
                    *plVar2 = lVar30 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plStack_280 + 0x10))(plStack_280);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
                }
              }
              lVar30 = *plVar33;
              goto LAB_109c2c198;
            }
          }
          else {
LAB_109c2c198:
            iVar26 = *(int *)(lVar30 + 0xc);
            iVar23 = *(int *)(lVar30 + 0x10);
            iVar27 = *(int *)(lVar30 + 0x14);
            lVar30 = *(long *)(lVar30 + 0x40);
            lVar40 = *(long *)(alStack_2d0[0] + 0x40);
            if (((*(int *)(param_1 + 0x120) == iVar26) && (*(int *)(param_1 + 0x124) == iVar23)) &&
               ((*(int *)(param_1 + 0x128) == iVar27 &&
                ((*(long *)(param_1 + 0x130) == lVar30 && (*(long *)(param_1 + 0x138) == lVar40)))))
               ) {
LAB_109c2c278:
              iVar26 = (int)*plVar37;
              func_0x000109bce408();
              if (iVar26 == 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (alStack_2d0[0] + 0x20,param_1 + 0x48);
                goto LAB_109c2c29c;
              }
            }
            else {
              cVar10 = *(char *)(param_1 + 0x10d);
              pcVar12 = (code *)0x109bd130c;
              if (cVar10 == '\0') {
                pcVar12 = (code *)0x109bd12c0;
              }
              uVar15 = *(undefined8 *)(param_1 + 8);
              (*pcVar12)(uVar15,(long)iVar26,(long)iVar23,(long)iVar27,&uStack_288,0,0,
                         *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
              if ((int)uVar15 == 0) {
                pcVar12 = (code *)0x109bd14c4;
                if (cVar10 == '\0') {
                  pcVar12 = (code *)0x109bd14ac;
                }
                lVar16 = *plVar37;
                (*pcVar12)(lVar16,0,lVar30,lVar40);
                if ((int)lVar16 == 0) {
                  *(int *)(param_1 + 0x120) = iVar26;
                  *(int *)(param_1 + 0x124) = iVar23;
                  *(int *)(param_1 + 0x128) = iVar27;
                  *(long *)(param_1 + 0x130) = lVar30;
                  *(long *)(param_1 + 0x138) = lVar40;
                  goto LAB_109c2c278;
                }
              }
            }
          }
          func_0x000105688514(&UNK_10f5a41c7);
          goto LAB_109c2c664;
        }
        lVar30 = *plVar33;
        lVar40 = *(long *)(param_1 + 0xa8);
        fVar46 = *(float *)(param_1 + 0x78);
        fVar43 = (*(float *)(lVar30 + 0x4c) * *(float *)(lVar40 + 0x4c)) / fVar46;
        if (fVar43 == 0.0) {
          uVar21 = 0;
        }
        else {
          dVar44 = (double)fVar43;
          _frexp(&uStack_288);
          uVar21 = (ulong)(double)(long)(dVar44 * 2147483648.0);
          uVar47 = (uint)uStack_288;
          if (uVar21 == 0x80000000) {
            uVar47 = (uint)uStack_288 + 1;
          }
          uVar34 = 0x40000000;
          if (uVar21 != 0x80000000) {
            uVar34 = uVar21 & 0xffffffff;
          }
          uVar8 = 0;
          if (-0x20 < (int)uVar47) {
            uVar8 = uVar47;
          }
          uVar21 = 0;
          if (-0x20 < (int)uVar47) {
            uVar21 = uVar34;
          }
          uVar21 = uVar21 | (ulong)uVar8 << 0x20;
        }
        iVar26 = -0x80;
        if (*(char *)(param_1 + 0x84) == '\x01') {
          iVar26 = *(int *)(param_1 + 0x7c) + (int)(*(float *)(param_1 + 0x80) / fVar46);
          if (iVar26 < -0x7f) {
            iVar26 = -0x80;
          }
          if (0x7e < iVar26) {
            iVar26 = 0x7f;
          }
        }
        iVar23 = 0x7f;
        if (*(char *)(param_1 + 0x8c) == '\x01') {
          iVar23 = *(int *)(param_1 + 0x7c) + (int)(*(float *)(param_1 + 0x88) / fVar46);
          if (iVar23 < -0x7f) {
            iVar23 = -0x80;
          }
          if (0x7e < iVar23) {
            iVar23 = 0x7f;
          }
        }
        if (*(char *)(param_1 + 0xe8) == '\x01') {
          lVar16 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
        }
        else {
          lVar16 = 0;
        }
        iVar27 = *(int *)(lVar30 + 0x10) * *(int *)(lVar30 + 0xc) * *(int *)(lVar30 + 0x14);
        if (0 < iVar27) {
          iVar28 = 0;
          lVar29 = *(long *)(lVar30 + 0x40);
          lVar40 = *(long *)(lVar40 + 0x40);
          uVar8 = *(uint *)(lVar30 + 0x18);
          lVar30 = *(long *)(alStack_2d0[0] + 0x40);
          uVar18 = (uint)(uVar21 >> 0x20);
          uVar47 = 0;
          if ((int)uVar18 < 1) {
            uVar47 = -uVar18;
          }
          uVar9 = ~(uint)(-1L << ((ulong)uVar47 & 0x3f));
          do {
            if (0 < (int)uVar8) {
              uVar34 = 0;
              do {
                if (*(char *)(param_1 + 0xe8) == '\x01') {
                  iVar35 = *(int *)(lVar16 + uVar34 * 4);
                }
                else {
                  iVar35 = 0;
                }
                iVar35 = iVar35 + (int)(short)((short)*(char *)(lVar29 + uVar34) -
                                              (short)*(undefined4 *)(*plVar33 + 0x50)) *
                                  (int)*(char *)(lVar40 + uVar34) <<
                         (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU) & 0x1f);
                if (((uVar21 & 0xffffffff) == 0x80000000) && (iVar35 == -0x80000000)) {
                  uVar36 = 0x7fffffff;
                }
                else {
                  lVar20 = 0x40000000;
                  if (0x7fffffffffffffff < (ulong)((long)(int)uVar21 * (long)iVar35)) {
                    lVar20 = -0x3fffffff;
                  }
                  uVar38 = lVar20 + (long)(int)uVar21 * (long)iVar35;
                  uVar4 = uVar38 + 0x7fffffff;
                  if (-1 < (long)uVar38) {
                    uVar4 = uVar38;
                  }
                  uVar36 = (uint)(uVar4 >> 0x1f);
                }
                iVar35 = ((int)uVar36 >> (uVar47 & 0x1f)) + *(int *)(param_1 + 0x7c);
                if (((int)uVar9 >> 1) - ((int)uVar36 >> 0x1f) < (int)(uVar36 & uVar9)) {
                  iVar35 = iVar35 + 1;
                }
                iVar6 = iVar23;
                if (iVar35 <= iVar23) {
                  iVar6 = iVar35;
                }
                iVar19 = iVar26;
                if (iVar26 <= iVar35) {
                  iVar19 = iVar6;
                }
                *(char *)(lVar30 + uVar34) = (char)iVar19;
                uVar34 = uVar34 + 1;
              } while (uVar8 != uVar34);
            }
            lVar29 = lVar29 + (int)uVar8;
            lVar30 = lVar30 + (int)uVar8;
            iVar28 = iVar28 + 1;
          } while (iVar28 != iVar27);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (alStack_2d0[0] + 0x20,param_1 + 0x48);
LAB_109c2c29c:
        *(undefined4 *)(alStack_2d0[0] + 0x4c) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(alStack_2d0[0] + 0x50) = *(undefined4 *)(param_1 + 0x7c);
      }
      else {
        (**(code **)*puVar13)(alStack_2d0,puVar13,&uStack_2f0);
        lVar30 = *plVar33;
        if (*(char *)(lVar30 + 0x48) == '\x01') {
          iVar26 = *(int *)(lVar30 + 0xc);
          iVar27 = *(int *)(lVar30 + 0x10);
          iVar23 = *(int *)(lVar30 + 0x14);
          iVar28 = *(int *)(lVar30 + 0x18);
          plVar39 = (long *)(param_1 + 8);
          if ((*plVar39 == 0) || (*(int *)(param_1 + 0x140) != iVar28)) {
            if (*(char *)(param_1 + 0x84) == '\x01') {
              uVar42 = *(undefined4 *)(param_1 + 0x80);
            }
            else {
              uVar42 = 0xff7fffff;
            }
            if (*(char *)(param_1 + 0x8c) == '\x01') {
              uVar45 = *(undefined4 *)(param_1 + 0x88);
            }
            else {
              uVar45 = 0x7f7fffff;
            }
            iVar35 = *(int *)(param_1 + 0x144);
            uVar47 = *(uint *)(param_1 + 0xa0);
            func_0x000109bd0664(uVar42,uVar45,iVar35,*(undefined4 *)(param_1 + 0x150),
                                *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                                *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
                                *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x9c),
                                *(undefined4 *)(param_1 + 0xa4),uVar47,iVar28);
            if (iVar35 == 0) {
              uStack_288 = 0;
              plStack_280 = (long *)0x0;
              FUN_109c1e9b8(param_1 + 0xa8,&uStack_288);
              plVar2 = plStack_280;
              if (plStack_280 != (long *)0x0) {
                plVar1 = plStack_280 + 1;
                do {
                  lVar30 = *plVar1;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar11) {
                    *plVar1 = lVar30 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plStack_280 + 0x10))(plStack_280);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                }
              }
              *(int *)(param_1 + 0x140) = iVar28;
              lVar30 = *plVar33;
              goto LAB_109c2bd8c;
            }
LAB_109c2be70:
            func_0x000105688514(&UNK_10f5a4221);
            goto LAB_109c2c664;
          }
LAB_109c2bd8c:
          lVar30 = *(long *)(lVar30 + 0x40);
          lVar40 = *(long *)(alStack_2d0[0] + 0x40);
          if (((*(int *)(param_1 + 0x120) != iVar26) || (*(int *)(param_1 + 0x124) != iVar27)) ||
             ((*(int *)(param_1 + 0x128) != iVar23 ||
              ((*(long *)(param_1 + 0x130) != lVar30 || (*(long *)(param_1 + 0x138) != lVar40))))))
          {
            lVar16 = *plVar39;
            func_0x000109bd0750(lVar16,0x1d,(long)iVar26,(long)iVar27,(long)iVar23,2,2,4,2,
                                uVar47 & 0xffffff00,&uStack_288,0,0,*(undefined8 *)(*plVar37 + 0x90)
                               );
            if ((int)lVar16 == 0) {
              FUN_109c61c8c(plVar39,0x10,uStack_288);
              uVar15 = *(undefined8 *)(param_1 + 8);
              func_0x000109bd1358(uVar15,0x1d,*(undefined8 *)(param_1 + 0x18),lVar30,lVar40,0);
              if ((int)uVar15 == 0) {
                *(int *)(param_1 + 0x120) = iVar26;
                *(int *)(param_1 + 0x124) = iVar27;
                *(int *)(param_1 + 0x128) = iVar23;
                *(long *)(param_1 + 0x130) = lVar30;
                *(long *)(param_1 + 0x138) = lVar40;
                goto LAB_109c2be5c;
              }
            }
            goto LAB_109c2be70;
          }
LAB_109c2be5c:
          iVar26 = (int)*plVar39;
          func_0x000109bce408();
          if (iVar26 != 0) goto LAB_109c2be70;
        }
        else {
          lStack_300 = 0;
          plStack_2f8 = (long *)0x0;
          if (*(int *)(param_1 + 0x144) == 0) {
            iVar26 = *(int *)(param_1 + 0x148);
            iVar23 = *(int *)(param_1 + 0x14c);
            if (iVar26 != 0) goto LAB_109c2b9dc;
            if (iVar23 != 0) {
LAB_109c2b9d8:
              iVar26 = 0;
              goto LAB_109c2b9dc;
            }
            if (*(int *)(param_1 + 0x150) != 0) {
              iVar23 = 0;
              goto LAB_109c2b9d8;
            }
            func_0x000109c1e534(&lStack_300,plVar33);
          }
          else {
            iVar26 = *(int *)(param_1 + 0x148);
            iVar23 = *(int *)(param_1 + 0x14c);
LAB_109c2b9dc:
            uStack_d0 = CONCAT44(iVar26,*(int *)(param_1 + 0x144));
            pcStack_c8 = (code *)CONCAT44(*(undefined4 *)(param_1 + 0x150),iVar23);
            FUN_109c15b40(&uStack_288,lVar30,&uStack_d0,*(undefined4 *)(param_1 + 0x108),plVar37);
            func_0x000109c18360(&lStack_300,&uStack_288);
            FUN_109c180ec(&uStack_288);
          }
          plVar37 = plStack_2f8;
          lVar30 = lStack_300;
          if (*(char *)(lStack_300 + 0x48) != '\x01') {
            if (*(char *)(lStack_300 + 0x48) == '\x02') {
              puVar17 = &UNK_10f5a4271;
            }
            else {
              puVar17 = &UNK_10f5a42bf;
            }
            func_0x000105688514(puVar17);
            goto LAB_109c2c664;
          }
          if (plStack_2f8 != (long *)0x0) {
            plVar39 = plStack_2f8 + 1;
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar11) {
                *plVar39 = *plVar39 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          FUN_109c135b4(lStack_300);
          FUN_109c11c4c(&uStack_288,*(undefined8 *)(param_1 + 0xa8));
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          pcStack_c8 = FUN_109c180a4;
          ppuStack_c0 = &PTR_DAT_110950c70;
          uVar15 = *(undefined8 *)(alStack_2d0[0] + 0x40);
          bVar7 = *(byte *)(alStack_2d0[0] + 0x48);
          uVar47 = *(uint *)(alStack_2d0[0] + 8) &
                   ((int)*(uint *)(alStack_2d0[0] + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar47) {
            uVar47 = 5;
          }
          uStack_2d8 = 0xf5749aa;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,alStack_2d0[0] + 0xc,uVar47);
          if (bVar7 < 9) {
            uStack_2d4 = *(undefined4 *)(&UNK_10e039f40 + (ulong)bVar7 * 4);
          }
          else {
            uStack_2d4 = 4;
          }
          iVar26 = 0xf57499d;
          FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_2d8,2);
          _bzero(uVar15,(long)iVar26);
          lVar40 = lStack_248;
          if (0 < iVar6) {
            lVar16 = 0;
            iStack_30c = 0;
            lVar25 = (long)iVar28;
            lVar29 = *(long *)(lVar30 + 0x40);
            lVar20 = *(long *)(alStack_2d0[0] + 0x40);
            iVar26 = *(int *)(param_1 + 0x98);
            do {
              iVar23 = 0;
              do {
                iVar27 = 0;
                iVar35 = *(int *)(param_1 + 0x9c);
                lVar16 = (long)(int)lVar16;
                do {
                  if (0 < iVar26) {
                    iVar31 = 0;
                    iVar32 = 0;
                    iVar5 = *(int *)(param_1 + 0x9c);
                    lVar3 = lVar20 + lVar16 * 4;
                    iVar24 = *(int *)(param_1 + 0x94);
                    do {
                      if (0 < iVar24) {
                        iVar26 = 0;
                        lVar41 = lVar40 + (long)iVar32 * 4;
                        do {
                          _vDSP_vma(lVar29 + (long)((iVar5 * iVar27 +
                                                     *(int *)(param_1 + 0xa0) * iVar26 +
                                                    (iVar35 * iVar23 +
                                                     *(int *)(param_1 + 0xa4) * iVar31 +
                                                    *(int *)(lVar30 + 0x10) * iStack_30c) *
                                                    *(int *)(lVar30 + 0x14)) *
                                                   *(int *)(lVar30 + 0x18)) * 4,1,lVar41,1,lVar3,1,
                                    lVar3,1,lVar25);
                          iVar26 = iVar26 + 1;
                          iVar24 = *(int *)(param_1 + 0x94);
                          iVar32 = iVar32 + iVar28;
                          lVar41 = lVar41 + lVar25 * 4;
                        } while (iVar26 < iVar24);
                        iVar26 = *(int *)(param_1 + 0x98);
                      }
                      iVar31 = iVar31 + 1;
                    } while (iVar31 < iVar26);
                  }
                  iVar27 = iVar27 + 1;
                  lVar16 = lVar16 + lVar25;
                } while (iVar27 != iVar19);
                iVar23 = iVar23 + 1;
              } while (iVar23 != iVar22);
              iStack_30c = iStack_30c + 1;
            } while (iStack_30c != iVar6);
          }
          if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
            FUN_109c21f4c(*(undefined8 *)(param_1 + 0xf0),3,alStack_2d0[0],
                          *(undefined8 *)(param_1 + 0x68));
          }
          uVar21 = *(ulong *)(param_1 + 0x88);
          if ((*(ulong *)(param_1 + 0x80) >> 0x20 & 1) == 0) {
            if ((uVar21 >> 0x20 & 1) != 0) {
              func_0x000109c23e38(uVar21 & 0xffffffff,alStack_2d0[0]);
            }
          }
          else if ((uVar21 >> 0x20 & 1) == 0) {
            func_0x000109c23d78(alStack_2d0[0]);
          }
          else {
            func_0x000109c23ef8(*(ulong *)(param_1 + 0x80) & 0xffffffff,alStack_2d0[0]);
          }
          FUN_109c180ec(&uStack_d0);
          FUN_109c10e9c(&uStack_288);
          if (plVar37 != (long *)0x0) {
            plVar39 = plVar37 + 1;
            do {
              lVar30 = *plVar39;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar11) {
                *plVar39 = lVar30 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
            }
          }
          plVar37 = plStack_2f8;
          if (plStack_2f8 != (long *)0x0) {
            plVar39 = plStack_2f8 + 1;
            do {
              lVar30 = *plVar39;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar11) {
                *plVar39 = lVar30 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
            }
          }
        }
      }
      func_0x000109c18360(*param_3,alStack_2d0);
      FUN_109c180ec(alStack_2d0);
      goto LAB_109c2c2d0;
    }
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar8 = 0;
      uVar18 = 0;
    }
    *(uint *)(param_1 + 0x14c) = uVar18 + iVar31;
    *(uint *)(param_1 + 0x144) = uVar8 + iVar35;
    if (((-1 < (int)(uVar8 + iVar35)) && (-1 < iVar26)) && (-1 < (int)(uVar18 + iVar31 | uVar9)))
    goto LAB_109c2b8a0;
  }
  func_0x000105688514(&UNK_10f5a4194);
LAB_109c2c664:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109c2c668);
  (*pcVar12)();
}



/* Entry: 109c2c744; end: 109c2c7e3;  */

undefined8 * FUN_109c2c744(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  puVar1 = param_1;
  FUN_109c2ae88();
  *puVar1 = &PTR_FUN_110b2c938;
  puVar1[0x29] = 0;
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  *(undefined2 *)(puVar1 + 0x2d) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a4302);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2c7e4; end: 109c2c7e7;  */

undefined8 * FUN_109c2c7e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b2c878;
  FUN_10959b818(param_1 + 0x22);
  FUN_10959b818(param_1 + 0x1e);
  FUN_10959b818(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x15);
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



/* Entry: 109c2c7e8; end: 109c2c7fb;  */

void FUN_109c2c7e8(void)

{
  FUN_109c2ae2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2c7fc; end: 109c2cff7;  */

undefined8 * FUN_109c2c7fc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long *plVar25;
  uint *puVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  long *plStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  long lStack_1a0;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  long lStack_188;
  int iStack_17c;
  long lStack_178;
  int iStack_16c;
  long lStack_168;
  int iStack_15c;
  long lStack_158;
  long lStack_150;
  int iStack_148;
  int iStack_144;
  ulong uStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  undefined8 uStack_128;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long *plStack_108;
  long alStack_100 [9];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000105688514(&UNK_10f5a4312);
  }
  else {
    plVar25 = (long *)*param_2;
    FUN_109c182f4(param_3,1);
    lVar17 = *plVar25;
    if (*(int *)(lVar17 + 0x3c) == 0) {
      iStack_1b0 = *(int *)(lVar17 + 0xc);
      iStack_1a8 = *(int *)(lVar17 + 0x10);
      iStack_18c = *(int *)(lVar17 + 0x14);
      uStack_140 = (ulong)*(uint *)(lVar17 + 0x18);
      uVar14 = *(uint *)(param_1 + 0x9c);
      bVar6 = *(byte *)(param_1 + 0x62);
      uVar23 = (uint)bVar6;
      if ((bVar6 != 0) && (uVar14 == uVar23 || (int)uVar14 < (int)(uint)bVar6)) goto LAB_109c2cf40;
      iVar22 = *(int *)(param_1 + 0x120);
      iVar21 = *(int *)(param_1 + 0x94);
      iStack_144 = *(int *)(param_1 + 0x98);
      plStack_108 = (long *)plVar25[1];
      if (plStack_108 != (long *)0x0) {
        plVar28 = plStack_108 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = *plVar28 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      *(undefined2 *)(param_1 + 0x168) = 0;
      lStack_110 = lVar17;
      if ((*(byte *)(*plVar25 + 0x48) | 4) == 6) {
        FUN_109c1be70(&uStack_b8,*(undefined8 *)(param_1 + 0x68),plVar25);
        func_0x000109c18360(&lStack_110,&uStack_b8);
        FUN_109c180ec(&uStack_b8);
        *(ushort *)(param_1 + 0x168) = *(byte *)(*plVar25 + 0x48) | 0x100;
      }
      plVar28 = (long *)(param_1 + 0xa8);
      if ((*plVar28 != 0) && ((*(byte *)(*plVar28 + 0x48) | 4) == 6)) {
        FUN_109c11f88();
        FUN_109c1ad80(&uStack_b8,*(undefined8 *)(param_1 + 0x68),plVar28,param_1 + 0x110,1);
        func_0x000109c18360(plVar28,&uStack_b8);
        FUN_109c180ec(&uStack_b8);
        iStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_128 = CONCAT44(*(int *)(param_1 + 0x94) * *(int *)(param_1 + 0x98),2);
        iStack_120 = (int)uStack_140;
        lVar17 = *(long *)(param_1 + 0xa8);
        puVar26 = (uint *)(lVar17 + 8);
        uVar5 = *puVar26 & ((int)*puVar26 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar5) {
          uVar5 = 5;
        }
        iVar20 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar17 + 0xc,uVar5);
        uVar5 = (uint)uStack_128 & ((int)(uint)uStack_128 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar5) {
          uVar5 = 5;
        }
        iVar24 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_128 + 4,uVar5);
        uStack_a8 = iVar20 == iVar24;
        uStack_b8 = &UNK_10f574cf1;
        uStack_b0 = 0xf;
        puStack_a0 = &UNK_10f574d01;
        uStack_98 = 0xe;
        FUN_10959b640(&uStack_b8);
        if ((puVar26 != (uint *)&uStack_128) && (iVar20 == iVar24)) {
          uVar5 = (uint)uStack_128;
          if ((uint)uStack_128 != 0) {
            _memmove(lVar17 + 0xc,(long)&uStack_128 + 4,(long)(int)(uint)uStack_128 << 2);
          }
          *puVar26 = uVar5;
        }
      }
      lStack_150 = (long)(int)uStack_140;
      if ((*(char *)(param_1 + 0xe8) == '\x01') &&
         (plVar28 = (long *)(param_1 + 0xf0), *(char *)(*plVar28 + 0x48) == '\x04')) {
        if ((*(char *)(param_1 + 0x10d) == '\x01') && ((int)uStack_140 != 0)) {
          fVar10 = *(float *)(*plVar25 + 0x4c);
          lVar17 = lStack_150 << 2;
          pfVar18 = *(float **)(*(long *)(param_1 + 0x110) + 0x40);
          do {
            *pfVar18 = fVar10 * *pfVar18;
            lVar17 = lVar17 + -4;
            pfVar18 = pfVar18 + 1;
          } while (lVar17 != 0);
        }
        FUN_109c1ad80(&uStack_b8,*(undefined8 *)(param_1 + 0x68),plVar28,param_1 + 0x110,1);
        func_0x000109c18360(plVar28,&uStack_b8);
        FUN_109c180ec(&uStack_b8);
        FUN_109c2b4b4(param_1 + 0x110);
      }
      iStack_144 = uVar23 + uVar14 * (iStack_1a8 + -1) + iStack_144 + iVar22 * -2;
      iStack_148 = uVar23 + uVar14 * (iStack_18c + -1) + iVar22 * -2 + iVar21;
      lVar17 = *plVar25;
      uStack_128 = 0;
      iStack_120 = 0;
      iStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      if ((int *)(lVar17 + 8U) != (int *)&uStack_128) {
        iVar21 = *(int *)(lVar17 + 8U);
        if (iVar21 == 0) {
          uVar14 = 0;
        }
        else {
          _memmove((ulong)&uStack_128 | 4,lVar17 + 0xc,(long)iVar21 << 2);
          uVar14 = *(uint *)(lVar17 + 8);
        }
        uStack_128 = (ulong)uVar14;
      }
      uStack_128 = CONCAT44(iStack_1b0,(uint)uStack_128);
      iStack_120 = iStack_144;
      uStack_118 = (undefined4)uStack_140;
      iStack_11c = iStack_148;
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (alStack_100,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_128,1);
      uVar29 = *(undefined8 *)(alStack_100[0] + 0x40);
      bVar6 = *(byte *)(alStack_100[0] + 0x48);
      uVar14 = *(uint *)(alStack_100[0] + 8) &
               ((int)*(uint *)(alStack_100[0] + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar14) {
        uVar14 = 5;
      }
      uVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,alStack_100[0] + 0xc,uVar14);
      if (bVar6 < 9) {
        uVar15 = *(undefined4 *)(&UNK_10e039f7c + (ulong)bVar6 * 4);
      }
      else {
        uVar15 = 4;
      }
      uStack_b8 = (undefined *)CONCAT44(uVar15,uVar11);
      iVar21 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_b8,2);
      plStack_1c0 = plVar25;
      puStack_1b8 = param_3;
      _bzero(uVar29,(long)iVar21);
      lVar17 = alStack_100[0];
      if (0 < iStack_1b0) {
        lVar19 = 0;
        iStack_15c = 0;
        iStack_1ac = *(int *)(param_1 + 0x120);
        lStack_1a0 = *(long *)(lStack_110 + 0x40);
        lStack_178 = *(long *)(*(long *)(param_1 + 0xa8) + 0x40);
        lStack_168 = *(long *)(alStack_100[0] + 0x40);
        lVar27 = lStack_150 * 4;
        iStack_190 = -iStack_1ac;
        do {
          if (0 < iStack_1a8) {
            iVar21 = 0;
            do {
              if (0 < iStack_18c) {
                iVar22 = 0;
                iVar20 = *(int *)(param_1 + 0x98);
                iStack_16c = *(int *)(param_1 + 0x9c) * iVar21 - iStack_1ac;
                lVar19 = (long)(int)lVar19;
                iStack_194 = iStack_190 + *(int *)(param_1 + 0x9c) * iVar21;
                iStack_1a4 = iVar21;
                do {
                  lStack_188 = lVar19;
                  iStack_17c = iVar22;
                  if (0 < iVar20) {
                    iVar21 = 0;
                    iVar24 = 0;
                    lStack_158 = lStack_1a0 + lVar19 * 4;
                    iVar16 = *(int *)(param_1 + 0x94);
                    iVar7 = iStack_190 + *(int *)(param_1 + 0x9c) * iVar22;
                    iVar22 = iStack_194;
                    do {
                      if (0 < iVar16) {
                        iVar20 = 0;
                        iVar3 = iVar21 + iStack_16c;
                        lVar19 = lStack_178 + (long)iVar24 * 4;
                        do {
                          if ((((-1 < iVar3) && (iVar3 < iStack_144)) &&
                              (iVar4 = iVar7 + iVar20, -1 < iVar4)) && (iVar4 < iStack_148)) {
                            lVar1 = lStack_168 +
                                    (long)((iVar7 + iVar20 +
                                           *(int *)(lVar17 + 0x14) *
                                           (iVar22 + iStack_15c * *(int *)(lVar17 + 0x10))) *
                                          *(int *)(lVar17 + 0x18)) * 4;
                            lStack_1d0 = lStack_150;
                            _vDSP_vma(lStack_158,1,lVar19,1,lVar1,1,lVar1,1);
                            iVar16 = *(int *)(param_1 + 0x94);
                          }
                          iVar20 = iVar20 + 1;
                          lVar19 = lVar19 + lVar27;
                          iVar24 = iVar24 + (int)uStack_140;
                        } while (iVar20 < iVar16);
                        iVar20 = *(int *)(param_1 + 0x98);
                      }
                      iVar21 = iVar21 + 1;
                      iVar22 = iVar22 + 1;
                    } while (iVar21 < iVar20);
                  }
                  iVar22 = iStack_17c + 1;
                  lVar19 = lStack_188 + lStack_150;
                  iVar21 = iStack_1a4;
                } while (iVar22 != iStack_18c);
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 != iStack_1a8);
          }
          iStack_15c = iStack_15c + 1;
        } while (iStack_15c != iStack_1b0);
      }
      param_3 = puStack_1b8;
      plVar25 = plStack_1c0;
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        FUN_109c21f4c(*(undefined8 *)(param_1 + 0xf0),3,alStack_100[0],
                      *(undefined8 *)(param_1 + 0x68));
      }
      if (*(char *)(param_1 + 0x169) == '\x01') {
        uVar29 = *(undefined8 *)(param_1 + 0x68);
        FUN_109c18570(auStack_138,alStack_100);
        FUN_109c1b3e4(&uStack_b8,uVar29,auStack_138,*(undefined4 *)(param_1 + 0x7c),
                      *(undefined1 *)(param_1 + 0x168));
        FUN_109c2a9dc(alStack_100,&uStack_b8);
        FUN_109c180ec(&uStack_b8);
        if (plStack_130 != (long *)0x0) {
          plVar28 = plStack_130 + 1;
          do {
            lVar17 = *plVar28;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = lVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
          }
        }
      }
      plVar28 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar2 = plStack_108 + 1;
        do {
          lVar17 = *plVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      func_0x000109c18360(*param_3,alStack_100);
      FUN_109c180ec(alStack_100);
    }
    puVar12 = (undefined8 *)(*(long *)*param_3 + 0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar12,param_1 + 0x48)
    ;
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar25 + 0x3c);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar12;
    }
  }
  ___stack_chk_fail();
LAB_109c2cf40:
  puVar12 = (undefined8 *)&UNK_10f5a40ee;
  func_0x000105688514();
  FUN_109c180ec(&uStack_b8);
  plVar25 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar28 = plStack_108 + 1;
    do {
      lVar17 = *plVar28;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar9) {
        *plVar28 = lVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  puVar13 = puVar12;
  __Unwind_Resume();
  plStack_1f0 = plVar25;
  pcStack_1d8 = FUN_109c2cff8;
  puVar13[0xc] = 0;
  puVar13[0xb] = 0;
  puVar13[0xe] = 0;
  puVar13[0xd] = 0;
  puVar13[0x10] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  puVar13[10] = 0;
  puVar13[9] = 0;
  puVar13[8] = 0;
  puVar13[7] = 0;
  puVar13[6] = 0;
  puVar13[5] = 0;
  puVar13[4] = 0;
  puVar13[3] = 0;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *(undefined1 *)((long)puVar13 + 0x61) = 1;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0x3f800000;
  *(undefined1 *)(puVar13 + 0x11) = 0;
  *puVar13 = &PTR_FUN_110b2c978;
  puStack_1e8 = puVar12;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_208,&UNK_10f5a434e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar13 + 6,auStack_208);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  return puVar13;
}



/* Entry: 109c2cff8; end: 109c2d0c3;  */

undefined8 * FUN_109c2cff8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c978;
  func_0x000107c31940(auStack_38,&UNK_10f5a434e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2d0c4; end: 109c2d0c7;  */

undefined8 * FUN_109c2d0c4(undefined8 *param_1)

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



/* Entry: 109c2d0c8; end: 109c2d0db;  */

void FUN_109c2d0c8(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2d0dc; end: 109c2d19b;  */

undefined8 * FUN_109c2d0dc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 auStack_80 [9];
  long lStack_38;
  
  puVar1 = auStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  FUN_109c1be70(auStack_80,*(undefined8 *)(param_1 + 0x68),plVar3);
  func_0x000109c18360(*param_3,auStack_80);
  FUN_109c180ec();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar3 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_88 = FUN_109c2d19c;
  plStack_a0 = plVar3;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)puVar2 + 0x59) = 0;
  *(undefined8 *)((long)puVar2 + 0x51) = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *(undefined2 *)((long)puVar2 + 0x61) = 1;
  *(undefined1 *)((long)puVar2 + 99) = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  *(undefined1 *)((long)puVar2 + 0x84) = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *(undefined1 *)((long)puVar2 + 0x8c) = 0;
  *puVar2 = &PTR_FUN_110b2c9b8;
  puVar2[0x1e] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  func_0x000107c31940(auStack_b8,&UNK_10f5a4359);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 6,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return puVar2;
}



/* Entry: 109c2d19c; end: 109c2d283;  */

undefined8 * FUN_109c2d19c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2c9b8;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a4359);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2d284; end: 109c2d287;  */

undefined8 * FUN_109c2d284(undefined8 *param_1)

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



/* Entry: 109c2d288; end: 109c2d29b;  */

void FUN_109c2d288(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2d29c; end: 109c2dc4f;  */

void FUN_109c2d29c(ulong param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  float *pfVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  undefined *puVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  float fVar28;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c9;
  long **applStack_c8 [11];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
LAB_109c2d2dc:
  if (plVar10 != (long *)param_2[1]) goto code_r0x000109c2d2e4;
  FUN_109c182f4(param_3,1);
  uVar22 = *(uint *)(*(long *)*param_2 + 8);
  uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar22) {
    uVar22 = 5;
  }
  puVar19 = &UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,*(long *)*param_2 + 0xc,uVar22);
  if (((*(uint *)(param_1 + 0x90) & 0xfffffffe) == 2) ||
     (lVar14 = *param_2, (int)((ulong)(param_2[1] - lVar14) >> 4) < 2)) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    lVar25 = 1;
    lVar27 = 0x10;
    do {
      uVar22 = *(uint *)(*(long *)(lVar14 + lVar27) + 8);
      uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar22) {
        uVar22 = 5;
      }
      uVar8 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,*(long *)(lVar14 + lVar27) + 0xc,uVar22);
      uVar18 = (uint)puVar19;
      uVar22 = (uint)lVar25;
      if ((int)uVar8 <= (int)uVar18) {
        uVar22 = (uint)uVar24;
      }
      uVar24 = (ulong)uVar22;
      if ((int)uVar8 <= (int)uVar18) {
        uVar8 = uVar18;
      }
      puVar19 = (undefined *)(ulong)uVar8;
      lVar25 = lVar25 + 1;
      lVar14 = *param_2;
      lVar27 = lVar27 + 0x10;
    } while (lVar25 < (int)((ulong)(param_2[1] - lVar14) >> 4));
  }
  iVar23 = (int)uVar24;
  if (*(char *)(param_1 + 99) == '\x01') {
    func_0x000109c1e534(*param_3,*param_2 + (long)iVar23 * 0x10);
  }
  else {
    FUN_109c1bed0(applStack_c8,**(undefined8 **)(param_1 + 0x68),
                  *(undefined8 *)(*param_2 + (-(uVar24 >> 0x1f) & 0xfffffff000000000 | uVar24 << 4))
                 );
    func_0x000109c18360(*param_3,applStack_c8);
    FUN_109c180ec(applStack_c8);
  }
  plVar10 = (long *)*param_2;
  lVar14 = param_2[1] - (long)plVar10;
  if ((((lVar14 != 0x20) || (lVar25 = *plVar10, *(char *)(lVar25 + 0x48) != '\x02')) ||
      (lVar27 = plVar10[2], *(char *)(lVar27 + 0x48) != '\x02')) ||
     (((*(int *)(lVar25 + 0x3c) != 0 && (*(int *)(lVar25 + 0x3c) != 2 || *(int *)(lVar25 + 8) != 4))
      || ((*(int *)(lVar27 + 0x3c) != 0 &&
          (*(int *)(lVar27 + 0x3c) != 2 || *(int *)(lVar27 + 8) != 4)))))) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (iVar2 < 3) {
      if (iVar2 == 0) {
        pcVar7 = (code *)0x0;
        bVar5 = false;
        pcVar26 = FUN_109c21f4c;
      }
      else if (iVar2 == 1) {
        pcVar7 = (code *)0x0;
        bVar5 = false;
        pcVar26 = (code *)0x109c2e1ac;
      }
      else {
        if (iVar2 != 2) goto LAB_109c2d630;
        pcVar7 = (code *)0x0;
        bVar5 = false;
        pcVar26 = FUN_109c2dee0;
      }
    }
    else {
      if (iVar2 - 6U < 8) {
        pfVar11 = *(float **)(*plVar10 + 0x40);
        pfVar15 = *(float **)(plVar10[2] + 0x40);
        lVar14 = *(long *)*param_3;
        pfVar17 = *(float **)(lVar14 + 0x40);
        iVar23 = (int)puVar19;
        if (iVar2 < 10) {
          if (iVar2 < 8) {
            if (iVar2 == 6) {
              if (0 < iVar23) {
                uVar24 = (ulong)puVar19 & 0xffffffff;
                do {
                  fVar28 = 1.0;
                  if (*pfVar11 == *pfVar15) {
                    fVar28 = 0.0;
                  }
                  *pfVar17 = fVar28;
                  uVar24 = uVar24 - 1;
                  pfVar11 = pfVar11 + 1;
                  pfVar15 = pfVar15 + 1;
                  pfVar17 = pfVar17 + 1;
                } while (uVar24 != 0);
              }
            }
            else if (0 < iVar23) {
              uVar24 = (ulong)puVar19 & 0xffffffff;
              do {
                fVar28 = 1.0;
                if ((*pfVar11 == 0.0) && (fVar28 = 1.0, *pfVar15 == 0.0)) {
                  fVar28 = 0.0;
                }
                *pfVar17 = fVar28;
                pfVar15 = pfVar15 + 1;
                uVar24 = uVar24 - 1;
                pfVar11 = pfVar11 + 1;
                pfVar17 = pfVar17 + 1;
              } while (uVar24 != 0);
            }
          }
          else if (iVar2 == 8) {
            if (0 < iVar23) {
              uVar24 = (ulong)puVar19 & 0xffffffff;
              do {
                fVar28 = 0.0;
                if ((*pfVar11 != 0.0) && (fVar28 = 1.0, *pfVar15 == 0.0)) {
                  fVar28 = 0.0;
                }
                *pfVar17 = fVar28;
                pfVar15 = pfVar15 + 1;
                uVar24 = uVar24 - 1;
                pfVar11 = pfVar11 + 1;
                pfVar17 = pfVar17 + 1;
              } while (uVar24 != 0);
            }
          }
          else if (0 < iVar23) {
            uVar24 = (ulong)puVar19 & 0xffffffff;
            do {
              *pfVar17 = (float)((*pfVar11 != 0.0) != (*pfVar15 != 0.0));
              uVar24 = uVar24 - 1;
              pfVar11 = pfVar11 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar24 != 0);
          }
        }
        else if (iVar2 < 0xc) {
          if (iVar2 == 10) {
            if (0 < iVar23) {
              uVar24 = (ulong)puVar19 & 0xffffffff;
              do {
                fVar28 = 1.0;
                if (*pfVar11 <= *pfVar15) {
                  fVar28 = 0.0;
                }
                *pfVar17 = fVar28;
                uVar24 = uVar24 - 1;
                pfVar11 = pfVar11 + 1;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar17 + 1;
              } while (uVar24 != 0);
            }
          }
          else if (0 < iVar23) {
            uVar24 = (ulong)puVar19 & 0xffffffff;
            do {
              fVar28 = 1.0;
              if (*pfVar11 < *pfVar15) {
                fVar28 = 0.0;
              }
              *pfVar17 = fVar28;
              uVar24 = uVar24 - 1;
              pfVar11 = pfVar11 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar24 != 0);
          }
        }
        else if (iVar2 == 0xc) {
          if (0 < iVar23) {
            uVar24 = (ulong)puVar19 & 0xffffffff;
            do {
              fVar28 = 1.0;
              if (*pfVar15 <= *pfVar11) {
                fVar28 = 0.0;
              }
              *pfVar17 = fVar28;
              uVar24 = uVar24 - 1;
              pfVar11 = pfVar11 + 1;
              pfVar15 = pfVar15 + 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar24 != 0);
          }
        }
        else if (0 < iVar23) {
          uVar24 = (ulong)puVar19 & 0xffffffff;
          do {
            fVar28 = 1.0;
            if (*pfVar15 < *pfVar11) {
              fVar28 = 0.0;
            }
            *pfVar17 = fVar28;
            uVar24 = uVar24 - 1;
            pfVar11 = pfVar11 + 1;
            pfVar15 = pfVar15 + 1;
            pfVar17 = pfVar17 + 1;
          } while (uVar24 != 0);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar14 + 0x20,param_1 + 0x48);
        *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
        goto LAB_109c2da80;
      }
      if (iVar2 == 3) {
        pcVar7 = (code *)0x0;
        bVar5 = false;
        pcVar26 = (code *)0x109c2e040;
      }
      else if (iVar2 == 4) {
        pcVar26 = (code *)0x0;
        bVar5 = true;
        pcVar7 = FUN_109c2e318;
      }
      else {
LAB_109c2d630:
        pcVar26 = (code *)0x0;
        bVar5 = true;
        pcVar7 = (code *)0x109c2e3c8;
      }
    }
    bVar3 = *(byte *)(*plVar10 + 0x48);
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    uStack_d8 = 0;
    FUN_109c2e478(&plStack_e8,plVar10,param_2[1],lVar14 >> 4);
    plStack_100 = (long *)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    FUN_109c2e478(&plStack_100,*param_3,param_3[1],param_3[1] - *param_3 >> 4);
    plVar10 = plStack_e0;
    bVar3 = bVar3 & 0xfe;
    plVar20 = plStack_e8;
    if (bVar3 == 2) {
      for (; plVar20 != plVar10; plVar20 = plVar20 + 2) {
        FUN_109c13518(applStack_c8,*plVar20,1);
        FUN_109c2a93c(auStack_110,&uStack_c9,applStack_c8);
        FUN_109c1e9b8(plVar20,auStack_110);
        plVar6 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar1 = plStack_108 + 1;
          do {
            lVar14 = *plVar1;
            cVar12 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar14 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        FUN_109c10e9c(applStack_c8);
        FUN_109c135b4(*plVar20);
        func_0x000109c13688(*plVar20);
      }
      FUN_109c13518(applStack_c8,*plStack_100,1);
      FUN_109c2a93c(auStack_110,&uStack_c9,applStack_c8);
      FUN_109c1e9b8(plStack_100,auStack_110);
      if (plStack_108 != (long *)0x0) {
        plVar10 = plStack_108 + 1;
        do {
          lVar14 = *plVar10;
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar14 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
        }
      }
      FUN_109c10e9c(applStack_c8);
      FUN_109c135b4(*plStack_100);
      func_0x000109c13688(*plStack_100);
    }
    if (0 < (int)((ulong)((long)plStack_e0 - (long)plStack_e8) >> 4)) {
      uVar21 = 0;
      do {
        if (uVar21 != uVar24) {
          lVar14 = plStack_e8[uVar21 * 2];
          iVar2 = *(int *)(lVar14 + 0x3c);
          if ((((iVar2 == 0) || (iVar2 == 2 && *(int *)(lVar14 + 8) == 4)) &&
              (*(int *)(lVar14 + 0x18) != *(int *)(plStack_e8[(long)iVar23 * 2] + 0x18))) ||
             ((iVar2 == 1 &&
              (*(int *)(lVar14 + 0x10) == *(int *)(plStack_e8[(long)iVar23 * 2] + 0x10))))) {
            lVar25 = *plStack_100;
            uVar9 = 1;
          }
          else {
            lVar25 = *plStack_100;
            uVar9 = 0xffffffff;
          }
          if (bVar5) {
            (*pcVar7)();
          }
          else {
            (*pcVar26)(lVar14,uVar9,lVar25,*(undefined8 *)(param_1 + 0x68));
          }
        }
        uVar21 = uVar21 + 1;
      } while ((long)uVar21 < (long)(int)((ulong)((long)plStack_e0 - (long)plStack_e8) >> 4));
    }
    if (bVar3 == 2) {
      lVar14 = *plStack_100;
      *(float *)(lVar14 + 0x4c) = 1.0 / *(float *)(param_1 + 0x78);
      *(int *)(lVar14 + 0x50) = -*(int *)(param_1 + 0x7c);
      func_0x000109c13688();
      FUN_109c135b4(*plStack_100);
      FUN_109c12a04(*plStack_100,*(undefined8 *)*param_3);
      lVar14 = *(long *)*param_3;
      *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      lVar14 = *(long *)*param_3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar14 + 0x20,param_1 + 0x48);
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
    applStack_c8[0] = &plStack_100;
    FUN_109c2070c(applStack_c8);
    applStack_c8[0] = &plStack_e8;
    FUN_109c2070c(applStack_c8);
LAB_109c2da80:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    goto LAB_109c2dbcc;
  }
  if (*(char *)(param_1 + 0x84) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x7c) +
            (int)(*(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x78));
    if (iVar2 < -0x7f) {
      iVar2 = -0x80;
    }
    if (0x7e < iVar2) {
      iVar2 = 0x7f;
    }
    cVar12 = (char)iVar2;
  }
  else {
    cVar12 = -0x80;
  }
  cVar13 = '\x7f';
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x7c) +
            (int)(*(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x78));
    if (iVar2 < -0x7f) {
      iVar2 = -0x80;
    }
    if (0x7e < iVar2) {
      iVar2 = 0x7f;
    }
    cVar13 = (char)iVar2;
  }
  lVar14 = (long)iVar23;
  iVar2 = *(int *)(param_1 + 0x90);
  iVar16 = (int)(1 - (long)iVar23);
  if (iVar2 == 0) {
    FUN_109c2dc50(param_1,plVar10 + lVar14 * 2,plVar10 + (long)iVar16 * 2,*param_3,0,(int)cVar12,
                  (int)cVar13);
    if ((param_1 & 1) == 0) {
      func_0x000105688514(&UNK_10f5a43b6);
      goto LAB_109c2dbdc;
    }
    goto LAB_109c2da80;
  }
  if (iVar2 == 2) {
    FUN_109c2dc50(param_1,plVar10 + lVar14 * 2,plVar10 + (long)iVar16 * 2,*param_3,1,(int)cVar12,
                  (int)cVar13);
    if ((param_1 & 1) == 0) {
      func_0x000105688514(&UNK_10f5a43eb);
      goto LAB_109c2dbdc;
    }
    goto LAB_109c2da80;
  }
  if (iVar2 == 1) {
    FUN_109c2dc50(param_1,plVar10 + lVar14 * 2,plVar10 + (1 - (long)iVar23) * 2,*param_3,2,
                  (int)cVar12,(int)cVar13);
    if ((param_1 & 1) == 0) {
      func_0x000105688514(&UNK_10f5a4380);
      goto LAB_109c2dbdc;
    }
    goto LAB_109c2da80;
  }
  goto LAB_109c2dbd0;
code_r0x000109c2d2e4:
  lVar14 = *plVar10;
  plVar10 = plVar10 + 2;
  if (lVar14 == 0) {
    func_0x000105688514(&UNK_10f5a4361);
LAB_109c2dbcc:
    ___stack_chk_fail();
LAB_109c2dbd0:
    func_0x000105688514(&UNK_10f5a4420);
LAB_109c2dbdc:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109c2dbe0);
    (*pcVar7)();
  }
  goto LAB_109c2d2dc;
}



/* Entry: 109c2dc50; end: 109c2dedf;  */

void FUN_109c2dc50(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_a0 [5];
  long alStack_78 [5];
  
  plVar12 = (long *)(param_1 + 8);
  lVar3 = *plVar12;
  if (lVar3 == 0) {
    lVar3 = (long)*(char *)(*param_2 + 0x50);
    FUN_109c62690(*(undefined4 *)(*param_2 + 0x4c),*(undefined4 *)(*param_3 + 0x4c),
                  *(undefined4 *)(param_1 + 0x78),lVar3,(long)*(char *)(*param_3 + 0x50),
                  (long)*(char *)(param_1 + 0x7c),param_5,param_6,param_7,0,plVar12);
    if ((int)lVar3 != 0) {
      return;
    }
    lVar3 = *plVar12;
    if (lVar3 == 0) {
      return;
    }
    *(code **)(param_1 + 0x10) = FUN_109c629f4;
  }
  lVar7 = *param_2;
  lVar13 = *(long *)(lVar7 + 0x40);
  lVar5 = *param_3;
  lVar14 = *(long *)(lVar5 + 0x40);
  lVar15 = *(long *)(*param_4 + 0x40);
  if (((lVar13 == *(long *)(param_1 + 0x98)) && (lVar14 == *(long *)(param_1 + 0xa0))) &&
     (lVar15 == *(long *)(param_1 + 0xa8))) {
    uVar1 = *(uint *)(lVar7 + 8);
    uVar8 = (ulong)uVar1;
    if (uVar1 == *(uint *)(param_1 + 0xb0)) {
      if (0 < (int)uVar1) {
        piVar6 = (int *)(lVar7 + 0xc);
        piVar11 = (int *)(param_1 + 0xb4);
        do {
          if (*piVar6 != *piVar11) goto LAB_109c2dd38;
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar8 != 0);
      }
      uVar1 = *(uint *)(lVar5 + 8);
      uVar8 = (ulong)uVar1;
      if (uVar1 == *(uint *)(param_1 + 200)) {
        if (0 < (int)uVar1) {
          piVar6 = (int *)(lVar5 + 0xc);
          piVar11 = (int *)(param_1 + 0xcc);
          do {
            if (*piVar6 != *piVar11) goto LAB_109c2dd38;
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 1;
            piVar11 = piVar11 + 1;
          } while (uVar8 != 0);
        }
        goto LAB_109c2de24;
      }
    }
  }
LAB_109c2dd38:
  iVar4 = *(int *)(lVar7 + 8);
  if (iVar4 != 0) {
    lVar9 = (long)iVar4 << 2;
    piVar6 = (int *)(lVar7 + 0xc);
    plVar10 = alStack_78;
    do {
      *plVar10 = (long)*piVar6;
      lVar9 = lVar9 + -4;
      piVar6 = piVar6 + 1;
      plVar10 = plVar10 + 1;
    } while (lVar9 != 0);
  }
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 != 0) {
    lVar7 = (long)iVar2 << 2;
    piVar6 = (int *)(lVar5 + 0xc);
    plVar10 = alStack_a0;
    do {
      *plVar10 = (long)*piVar6;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
      plVar10 = plVar10 + 1;
    } while (lVar7 != 0);
  }
  FUN_109c62890(lVar3,(long)iVar4,alStack_78,(long)iVar2,alStack_a0,
                *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
  if ((int)lVar3 != 0) {
    return;
  }
  lVar3 = *plVar12;
  FUN_109c6297c(lVar3,lVar13,lVar14,lVar15);
  if ((int)lVar3 != 0) {
    return;
  }
  *(long *)(param_1 + 0x98) = lVar13;
  *(long *)(param_1 + 0xa0) = lVar14;
  *(long *)(param_1 + 0xa8) = lVar15;
  lVar3 = *param_2;
  if ((int *)(lVar3 + 8) != (int *)(param_1 + 0xb0)) {
    iVar2 = *(int *)(lVar3 + 8);
    iVar4 = 0;
    if (iVar2 != 0) {
      _memmove(param_1 + 0xb4,lVar3 + 0xc,(long)iVar2 << 2);
      iVar4 = *(int *)(lVar3 + 8);
    }
    *(int *)(param_1 + 0xb0) = iVar4;
  }
  lVar3 = *param_3;
  if ((int *)(lVar3 + 8) != (int *)(param_1 + 200)) {
    iVar2 = *(int *)(lVar3 + 8);
    iVar4 = 0;
    if (iVar2 != 0) {
      _memmove(param_1 + 0xcc,lVar3 + 0xc,(long)iVar2 << 2);
      iVar4 = *(int *)(lVar3 + 8);
    }
    *(int *)(param_1 + 200) = iVar4;
  }
  lVar3 = *plVar12;
LAB_109c2de24:
  FUN_109c62ab8(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
  if ((int)lVar3 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*param_4 + 0x20,param_1 + 0x48);
    lVar3 = *param_4;
    *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(*param_2 + 0x3c);
  }
  return;
}



/* Entry: 109c2dee0; end: 109c2e317;  */

void FUN_109c2dee0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  uVar2 = *(uint *)(param_3 + 8);
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar7 = 0xf5749aa;
  iVar3 = iVar7;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 0xc,uVar1);
  uVar1 = *(uint *)(param_1 + 8);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  if (iVar3 == iVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc09f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__vDSP_vsub_110347968)
              (*(undefined8 *)(param_1 + 0x40),1,*(undefined8 *)(param_3 + 0x40),1,
               *(undefined8 *)(param_3 + 0x40),1,(long)iVar3);
    return;
  }
  uVar4 = 0x65;
  if (uVar2 - 1 != (int)param_2 && (int)param_2 != -1) {
    uVar4 = 0x66;
  }
  FUN_109c23af4(&iStack_74,(uint *)(param_3 + 8),(uint *)(param_1 + 8),param_2);
  if (0 < iStack_74) {
    iVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_3 + 0x40);
    do {
      FUN_109c2e514(uVar4,uStack_70,uStack_6c,lVar6,lVar5,param_4);
      lVar6 = lVar6 + (long)iStack_64 * 4;
      lVar5 = lVar5 + (long)iStack_68 * 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iStack_74);
  }
  return;
}



/* Entry: 109c2e318; end: 109c2e477;  */

void FUN_109c2e318(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar2 = *(uint *)(param_3 + 8) & ((int)*(uint *)(param_3 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar6 = 0xf5749aa;
  iVar5 = iVar6;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 0xc,uVar2);
  uVar2 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  lVar12 = param_1 + 0xc;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar12,uVar2);
  if (iVar5 == iVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__vDSP_vmax_110347920)
              (*(undefined8 *)(param_3 + 0x40),1,*(undefined8 *)(param_1 + 0x40),1,
               *(undefined8 *)(param_3 + 0x40),1,(long)iVar5);
    return;
  }
  puVar7 = &UNK_10f5a4474;
  func_0x000105688514();
  uVar2 = *(uint *)(lVar12 + 8) & ((int)*(uint *)(lVar12 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar6 = 0xf5749aa;
  iVar5 = iVar6;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar12 + 0xc,uVar2);
  uVar2 = *(uint *)(puVar7 + 8) & ((int)*(uint *)(puVar7 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  uVar10 = (ulong)uVar2;
  puVar9 = (undefined8 *)(puVar7 + 0xc);
  puVar8 = (undefined8 *)0x1a;
  FUN_109c60fbc();
  if (iVar5 == iVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__vDSP_vmin_110347928)
              (*(undefined8 *)(lVar12 + 0x40),1,*(undefined8 *)(puVar7 + 0x40),1,
               *(undefined8 *)(lVar12 + 0x40),1,(long)iVar5);
    return;
  }
  puVar7 = &UNK_10f5a44ba;
  func_0x000105688514();
  if (uVar10 != 0) {
    FUN_109c20950();
    puVar11 = *(undefined8 **)(puVar7 + 8);
    for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      lVar12 = puVar8[1];
      uVar13 = *puVar8;
      puVar11[1] = puVar8[1];
      *puVar11 = uVar13;
      if (lVar12 != 0) {
        plVar1 = (long *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar11 = puVar11 + 2;
    }
    *(undefined8 **)(puVar7 + 8) = puVar11;
  }
  return;
}



/* Entry: 109c2e478; end: 109c2e513;  */

void FUN_109c2e478(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_109c20950(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 109c2e514; end: 109c2e65f;  */

void FUN_109c2e514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uStack_54;
  
  iVar1 = (int)param_2;
  lVar4 = (long)iVar1;
  uVar3 = (undefined4)param_3;
  if (param_6 == 0) {
    lVar2 = lVar4 << 2;
    if (iVar1 < 0) {
      lVar2 = -1;
    }
    __Znam(lVar2);
    _bzero();
    uStack_54 = 0x3f800000;
    _vDSP_vfill(&uStack_54,lVar2,1,lVar4);
    if ((int)param_1 == 0x65) {
      iVar1 = 1;
    }
    else {
      uVar3 = 1;
    }
    _cblas_sgemm(0xbf800000,0x3f800000,param_1,0x6f,0x6f,param_2,param_3,1,lVar2,iVar1,param_4,uVar3
                );
    __ZdaPv(lVar2);
  }
  else {
    func_0x000109c1a4c0(param_6,lVar4);
    if ((int)param_1 == 0x65) {
      iVar1 = 1;
    }
    else {
      uVar3 = 1;
    }
    _cblas_sgemm(0xbf800000,0x3f800000,param_1,0x6f,0x6f,param_2,param_3,1,param_6,iVar1,param_4,
                 uVar3);
  }
  return;
}



/* Entry: 109c2e660; end: 109c2e94f;  */

void FUN_109c2e660(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  
  if (param_1 == 0x65) {
    if (0 < (int)param_2) {
      do {
        _vDSP_vdiv(param_4,1,param_5,1,param_5,1,(long)(int)param_3);
        param_5 = param_5 + (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (param_3 & 0xffffffff) << 2);
        uVar1 = (int)param_2 - 1;
        param_2 = (ulong)uVar1;
      } while (uVar1 != 0);
    }
  }
  else if (0 < (int)param_3) {
    param_3 = param_3 & 0xffffffff;
    do {
      _vDSP_vdiv(param_4,1,param_5,1,param_5,1,(long)(int)param_2);
      param_4 = param_4 + 4;
      param_5 = param_5 + (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2
                          );
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109c2e950; end: 109c2ea23;  */

undefined8 * FUN_109c2e950(undefined8 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_110b2c9f8;
  *(undefined4 *)(param_1 + 0x12) = param_2;
  func_0x000107c31940(auStack_38,&UNK_10f5a4500);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c2ea24; end: 109c2ea27;  */

undefined8 * FUN_109c2ea24(undefined8 *param_1)

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



/* Entry: 109c2ea28; end: 109c2ea3b;  */

void FUN_109c2ea28(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2ea3c; end: 109c2f093;  */

void FUN_109c2ea3c(long param_1,long *param_2,long *param_3,int param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  long *plVar11;
  undefined1 (*pauVar12) [16];
  long *plVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  undefined1 (*pauVar28) [16];
  undefined4 *puVar29;
  float *pfVar30;
  undefined8 *puVar31;
  float *pfVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  undefined8 uVar36;
  long lVar37;
  float *pfVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  int *piVar42;
  uint uVar43;
  float *pfVar44;
  uint *puVar45;
  int *piVar46;
  ulong uVar47;
  uint *puVar48;
  uint *puVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  undefined1 auVar59 [16];
  uint auStack_2b8 [6];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  float fStack_288;
  int aiStack_284 [5];
  float fStack_270;
  int aiStack_26c [5];
  float fStack_258;
  int aiStack_254 [11];
  int aiStack_228 [6];
  ulong auStack_210 [3];
  int aiStack_1f8 [12];
  long lStack_1c8;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  char cStack_b9;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x1;
  plVar13 = param_3;
  FUN_109c182f4(param_3);
  param_3 = (long *)*param_3;
  plVar16 = (long *)*param_2;
  lVar24 = *plVar16;
  cVar3 = *(char *)(lVar24 + 0x48);
  if (cVar3 == '\x01') {
    pcVar5 = FUN_109c2f094;
  }
  else {
    if (cVar3 != '\x04') goto LAB_109c2ef9c;
    pcVar5 = FUN_109c30540;
  }
  if (param_2[1] - (long)plVar16 == 0x20) {
    plStack_d8 = (long *)plVar16[1];
    if (plStack_d8 != (long *)0x0) {
      plVar13 = plStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar16 = (long *)*param_2;
    }
    plStack_e8 = (long *)plVar16[3];
    lStack_f0 = plVar16[2];
    if (plVar16[3] != 0) {
      plVar13 = (long *)(plVar16[3] + 8);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_b0 = 0x109c31d3c;
    ppuStack_a8 = &PTR_DAT_110b2cb00;
    lStack_e0 = lVar24;
    lStack_a0 = param_1;
    (*pcVar5)(&lStack_e0,&lStack_f0,param_3,*(undefined4 *)(param_1 + 0x90),&uStack_b0,
              *(undefined8 *)(param_1 + 0x68));
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    plVar13 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar11 = plStack_e8 + 1;
      do {
        lVar24 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_d8 != (long *)0x0) {
      plVar13 = plStack_d8 + 1;
      do {
        lVar24 = *plVar13;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar11 = plStack_d8;
      } while (cVar3 != '\0');
LAB_109c2eea0:
      if (lVar24 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x90) & 0xfffffffe) == 2) {
      plVar16 = (long *)&UNK_10f5a450b;
      func_0x000105688514();
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(uStack_d0);
      }
      __Unwind_Resume();
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar24 = *plVar16;
      uVar43 = *(uint *)(lVar24 + 8);
      lVar25 = *plVar11;
      if ((int)uVar43 < (int)*(uint *)(lVar25 + 8)) {
LAB_109c2f0f4:
        *plVar16 = lVar25;
        *plVar11 = lVar24;
        lVar24 = plVar16[1];
        plVar16[1] = plVar11[1];
        plVar11[1] = lVar24;
        lVar24 = *plVar16;
        bVar6 = true;
      }
      else {
        if (uVar43 == *(uint *)(lVar25 + 8)) {
          uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar43) {
            uVar43 = 5;
          }
          iVar34 = 0xf5749aa;
          iVar15 = iVar34;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar24 + 0xc,uVar43);
          uVar43 = *(uint *)(*plVar11 + 8);
          uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar43) {
            uVar43 = 5;
          }
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar11 + 0xc,uVar43);
          lVar24 = *plVar16;
          if (iVar15 < iVar34) {
            lVar25 = *plVar11;
            goto LAB_109c2f0f4;
          }
        }
        bVar6 = false;
      }
      puVar45 = (uint *)((ulong)&uStack_2a0 | 4);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      uVar43 = *(uint *)(lVar24 + 8);
      uVar18 = (ulong)uVar43;
      lVar25 = (long)(int)uVar43;
      if (uVar43 == 0) {
        lVar24 = *plVar11;
        puVar48 = (uint *)((ulong)auStack_2b8 | 4);
        auStack_2b8[2] = 0;
        auStack_2b8[3] = 0;
        auStack_2b8[4] = 0;
        auStack_2b8[5] = 0;
        auStack_2b8[0] = 0;
        auStack_2b8[1] = 0;
        if (((uint *)(lVar24 + 8U) != auStack_2b8) && (uVar14 = *(uint *)(lVar24 + 8U), uVar14 != 0)
           ) goto LAB_109c2f210;
        lVar25 = 0;
        puVar26 = puVar48;
        puVar49 = puVar48;
LAB_109c2f344:
        puVar19 = puVar48;
        puVar22 = puVar48 + 1;
        do {
          puVar21 = puVar49;
          puVar27 = puVar49;
          if (puVar19 == puVar49) break;
          puVar20 = puVar19 + -1;
          puVar27 = puVar22 + -1;
          puVar21 = puVar19;
          puVar19 = puVar20;
          puVar22 = puVar27;
        } while (*puVar20 == 1);
        lVar24 = (long)puVar27 + (lVar25 * 4 - (long)puVar48);
        do {
          puVar22 = puVar21;
          puVar19 = puVar49;
          if (puVar22 == puVar49) break;
          puVar27 = (uint *)((long)&uStack_2a0 + lVar24);
          lVar24 = lVar24 + -4;
          puVar21 = puVar22 + -1;
          puVar19 = puVar22;
        } while (puVar22[-1] == *puVar27);
        uVar14 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar14) {
          uVar14 = 5;
        }
        iVar34 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar49,uVar14);
        if (iVar34 == 1) {
          fVar9 = **(float **)(*plVar11 + 0x40);
          fStack_258 = fVar9;
          (*(code *)*param_5)(auStack_210,*plVar16 + 8,*(undefined1 *)(*plVar16 + 0x48),param_5);
          func_0x000109c18360(plVar13,auStack_210);
          FUN_109c180ec(auStack_210);
          uVar43 = *(uint *)(*plVar16 + 8);
          uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar43) {
            uVar43 = 5;
          }
          uVar14 = 0xf5749aa;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar16 + 0xc,uVar43);
          pauVar12 = *(undefined1 (**) [16])(*plVar16 + 0x40);
          puVar17 = *(undefined8 **)(*plVar13 + 0x40);
          fStack_270 = -fVar9;
          if (param_4 < 3) {
            if (param_4 == 0) {
              _vDSP_vsmul(pauVar12,1,&fStack_258,puVar17,1,(long)(int)uVar14);
            }
            else if (param_4 == 1) {
              _vDSP_vsadd(pauVar12,1,&fStack_258,puVar17,1,(long)(int)uVar14);
            }
            else {
              if (param_4 != 2) goto LAB_109c304d4;
              auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,0xbf800000);
              if (bVar6) {
                _vDSP_vsmsa(pauVar12,1,auStack_210,&fStack_258,puVar17,1);
              }
              else {
                _vDSP_vsadd(pauVar12,1,&fStack_270,puVar17,1,(long)(int)uVar14);
              }
            }
          }
          else {
            uVar51 = SUB41(fVar9,0);
            uVar53 = (undefined1)((uint)fVar9 >> 8);
            uVar55 = (undefined1)((uint)fVar9 >> 0x10);
            uVar57 = (undefined1)((uint)fVar9 >> 0x18);
            if (param_4 < 5) {
              if (param_4 == 3) {
                if (bVar6) {
                  auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,uVar14);
                  _vvrecf(puVar17,pauVar12,auStack_210);
                  _vDSP_vsmul(puVar17,1,&fStack_258,puVar17,1,(long)(int)uVar14);
                }
                else {
                  _vDSP_vsdiv(pauVar12,1,&fStack_258,puVar17,1,(long)(int)uVar14);
                }
              }
              else {
                if (param_4 != 4) {
LAB_109c304d4:
                  func_0x000105688514(&UNK_10f5a456b);
                  goto LAB_109c30510;
                }
                uVar43 = uVar14 + 3;
                if (-1 < (int)uVar14) {
                  uVar43 = uVar14;
                }
                uVar43 = uVar43 & 0xfffffffc;
                if (3 < (int)uVar14) {
                  uVar18 = 0;
                  pauVar28 = pauVar12;
                  puVar31 = puVar17;
                  do {
                    auVar4[4] = uVar51;
                    auVar4._0_4_ = fVar9;
                    auVar4[5] = uVar53;
                    auVar4[6] = uVar55;
                    auVar4[7] = uVar57;
                    auVar4[8] = uVar51;
                    auVar4[9] = uVar53;
                    auVar4[10] = uVar55;
                    auVar4[0xb] = uVar57;
                    auVar4[0xc] = uVar51;
                    auVar4[0xd] = uVar53;
                    auVar4[0xe] = uVar55;
                    auVar4[0xf] = uVar57;
                    auVar59 = NEON_fmax(*pauVar28,auVar4,4);
                    puVar31[1] = auVar59._8_8_;
                    *puVar31 = auVar59._0_8_;
                    uVar18 = uVar18 + 4;
                    pauVar28 = pauVar28 + 1;
                    puVar31 = puVar31 + 2;
                  } while (uVar18 < uVar43);
                }
                if ((int)uVar43 < (int)uVar14) {
                  lVar24 = (long)(int)uVar14 - (long)(int)uVar43;
                  pfVar44 = (float *)(*pauVar12 + (long)(int)uVar43 * 4);
                  puVar29 = (undefined4 *)((long)puVar17 + (long)(int)uVar43 * 4);
                  do {
                    fVar58 = *pfVar44;
                    uVar50 = uVar51;
                    uVar52 = uVar53;
                    uVar54 = uVar55;
                    uVar56 = uVar57;
                    if (fVar9 <= fVar58) {
                      uVar50 = SUB41(fVar58,0);
                      uVar52 = (undefined1)((uint)fVar58 >> 8);
                      uVar54 = (undefined1)((uint)fVar58 >> 0x10);
                      uVar56 = (undefined1)((uint)fVar58 >> 0x18);
                    }
                    *puVar29 = CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)));
                    lVar24 = lVar24 + -1;
                    pfVar44 = pfVar44 + 1;
                    puVar29 = puVar29 + 1;
                  } while (lVar24 != 0);
                }
              }
            }
            else if (param_4 == 5) {
              uVar43 = uVar14 + 3;
              if (-1 < (int)uVar14) {
                uVar43 = uVar14;
              }
              uVar43 = uVar43 & 0xfffffffc;
              if (3 < (int)uVar14) {
                uVar18 = 0;
                pauVar28 = pauVar12;
                puVar31 = puVar17;
                do {
                  auVar59[4] = uVar51;
                  auVar59._0_4_ = fVar9;
                  auVar59[5] = uVar53;
                  auVar59[6] = uVar55;
                  auVar59[7] = uVar57;
                  auVar59[8] = uVar51;
                  auVar59[9] = uVar53;
                  auVar59[10] = uVar55;
                  auVar59[0xb] = uVar57;
                  auVar59[0xc] = uVar51;
                  auVar59[0xd] = uVar53;
                  auVar59[0xe] = uVar55;
                  auVar59[0xf] = uVar57;
                  auVar59 = NEON_fmin(*pauVar28,auVar59,4);
                  puVar31[1] = auVar59._8_8_;
                  *puVar31 = auVar59._0_8_;
                  uVar18 = uVar18 + 4;
                  pauVar28 = pauVar28 + 1;
                  puVar31 = puVar31 + 2;
                } while (uVar18 < uVar43);
              }
              if ((int)uVar43 < (int)uVar14) {
                lVar24 = (long)(int)uVar14 - (long)(int)uVar43;
                pfVar44 = (float *)(*pauVar12 + (long)(int)uVar43 * 4);
                puVar29 = (undefined4 *)((long)puVar17 + (long)(int)uVar43 * 4);
                do {
                  fVar58 = *pfVar44;
                  uVar50 = uVar51;
                  uVar52 = uVar53;
                  uVar54 = uVar55;
                  uVar56 = uVar57;
                  if (fVar58 <= fVar9) {
                    uVar50 = SUB41(fVar58,0);
                    uVar52 = (undefined1)((uint)fVar58 >> 8);
                    uVar54 = (undefined1)((uint)fVar58 >> 0x10);
                    uVar56 = (undefined1)((uint)fVar58 >> 0x18);
                  }
                  *puVar29 = CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)));
                  lVar24 = lVar24 + -1;
                  pfVar44 = pfVar44 + 1;
                  puVar29 = puVar29 + 1;
                } while (lVar24 != 0);
              }
            }
            else {
              if (param_4 != 6) goto LAB_109c304d4;
              _vDSP_vsadd(pauVar12,1,&fStack_270,puVar17,1,(long)(int)uVar14);
              _vDSP_vsq(puVar17,1,puVar17,1,(long)(int)uVar14);
            }
          }
        }
        else if (uVar43 == auStack_2b8[0]) {
          puVar22 = puVar49;
          if (0 < (int)uVar43) {
            do {
              if (*puVar45 != *puVar22) goto LAB_109c2f5ec;
              uVar18 = uVar18 - 1;
              puVar22 = puVar22 + 1;
              puVar45 = puVar45 + 1;
            } while (uVar18 != 0);
          }
          (*(code *)*param_5)(auStack_210,*plVar16 + 8,*(undefined1 *)(*plVar16 + 0x48),param_5);
          func_0x000109c18360(plVar13,auStack_210);
          FUN_109c180ec(auStack_210);
          uVar39 = *(undefined8 *)(*plVar16 + 0x40);
          uVar40 = *(undefined8 *)(*plVar11 + 0x40);
          lVar24 = *plVar13;
          uVar36 = *(undefined8 *)(lVar24 + 0x40);
          uVar43 = *(uint *)(lVar24 + 8) & ((int)*(uint *)(lVar24 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar43) {
            uVar43 = 5;
          }
          iVar34 = 0xf5749aa;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar24 + 0xc,uVar43);
          if (param_4 < 3) {
            if (param_4 == 0) {
              _vDSP_vmul(uVar39,1,uVar40,1,uVar36,1,(long)iVar34);
            }
            else if (param_4 == 1) {
              _vDSP_vadd(uVar40,1,uVar39,1,uVar36,1,(long)iVar34);
            }
            else {
              if (param_4 != 2) goto LAB_109c304e4;
              _vDSP_vsub(uVar40,1,uVar39,1,uVar36,1,(long)iVar34);
            }
          }
          else if (param_4 < 5) {
            if (param_4 == 3) {
              _vDSP_vdiv(uVar40,1,uVar39,1,uVar36,1,(long)iVar34);
            }
            else {
              if (param_4 != 4) {
LAB_109c304e4:
                func_0x000105688514(&UNK_10f5a456b);
                goto LAB_109c30510;
              }
              _vDSP_vmax(uVar39,1,uVar40,1,uVar36,1,(long)iVar34);
            }
          }
          else if (param_4 == 5) {
            _vDSP_vmin(uVar39,1,uVar40,1,uVar36,1,(long)iVar34);
          }
          else {
            if (param_4 != 6) goto LAB_109c304e4;
            _vDSP_vsub(uVar40,1,uVar39,1,uVar36,1,(long)iVar34);
            _vDSP_vsq(uVar36,1,uVar36,1,(long)iVar34);
          }
        }
        else {
LAB_109c2f5ec:
          if (puVar26 == puVar48) {
            (*(code *)*param_5)(auStack_210,*plVar16 + 8,*(undefined1 *)(*plVar16 + 0x48),param_5);
            func_0x000109c18360(plVar13,auStack_210);
            FUN_109c180ec(auStack_210);
            FUN_109c11af8(*plVar13,*plVar16);
            uVar43 = *(uint *)(*plVar11 + 8);
            uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar43) {
              uVar43 = 5;
            }
            iVar34 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar11 + 0xc,uVar43);
            uVar43 = *(uint *)(*plVar16 + 8);
            uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar43) {
              uVar43 = 5;
            }
            iVar15 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar16 + 0xc,uVar43);
            iVar35 = 0;
            if (iVar34 != 0) {
              iVar35 = iVar15 / iVar34;
            }
            pfVar38 = *(float **)(*plVar11 + 0x40);
            pfVar44 = *(float **)(*plVar13 + 0x40);
            lVar24 = (long)iVar34;
            lVar25 = (long)iVar35;
            if (param_4 < 3) {
              if (param_4 == 0) {
                if (0 < iVar35) {
                  do {
                    _vDSP_vmul(pfVar44,1,pfVar38,1,pfVar44,1,lVar24);
                    pfVar44 = pfVar44 + lVar24;
                    iVar35 = iVar35 + -1;
                  } while (iVar35 != 0);
                }
              }
              else if (param_4 == 1) {
                func_0x000109c1a4c0(param_6,lVar25);
                _cblas_sgemm(0x66,0x6f,0x6f,lVar24,iVar35,1,pfVar38,lVar24,param_6,1);
              }
              else {
                if (param_4 != 2) goto LAB_109c304f4;
                if (bVar6) {
                  auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,0xbf800000);
                  _vDSP_vsmul(pfVar44,1,auStack_210,pfVar44,1,(long)(iVar35 * iVar34));
                  func_0x000109c1a4c0(param_6,lVar25);
                  _cblas_sgemm(0x66,0x6f,0x6f,lVar24,iVar35,1,pfVar38,lVar24,param_6,1);
                }
                else {
                  func_0x000109c1a4c0(param_6,lVar25);
                  _cblas_sgemm(0x66,0x6f,0x6f,lVar24,iVar35,1,pfVar38,lVar24,param_6,1);
                }
              }
            }
            else if (param_4 < 5) {
              if (param_4 == 3) {
                if (bVar6) {
                  auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,iVar35 * iVar34);
                  _vvrecf(pfVar44,pfVar44,auStack_210);
                  if (0 < iVar35) {
                    do {
                      _vDSP_vmul(pfVar44,1,pfVar38,1,pfVar44,1,lVar24);
                      pfVar44 = pfVar44 + lVar24;
                      iVar35 = iVar35 + -1;
                    } while (iVar35 != 0);
                  }
                }
                else if (0 < iVar35) {
                  do {
                    _vDSP_vdiv(pfVar38,1,pfVar44,1,pfVar44,1,lVar24);
                    pfVar44 = pfVar44 + lVar24;
                    iVar35 = iVar35 + -1;
                  } while (iVar35 != 0);
                }
              }
              else {
                if (param_4 != 4) {
LAB_109c304f4:
                  func_0x000105688514(&UNK_10f5a456b);
                  goto LAB_109c30510;
                }
                if (0 < iVar35) {
                  lVar37 = 0;
                  do {
                    pfVar30 = pfVar44;
                    pfVar32 = pfVar38;
                    lVar33 = lVar24;
                    if (0 < iVar34) {
                      do {
                        fVar9 = *pfVar32;
                        fVar58 = *pfVar30;
                        uVar51 = SUB41(fVar9,0);
                        uVar53 = (undefined1)((uint)fVar9 >> 8);
                        uVar55 = (undefined1)((uint)fVar9 >> 0x10);
                        uVar57 = (undefined1)((uint)fVar9 >> 0x18);
                        if (fVar9 <= fVar58) {
                          uVar51 = SUB41(fVar58,0);
                          uVar53 = (undefined1)((uint)fVar58 >> 8);
                          uVar55 = (undefined1)((uint)fVar58 >> 0x10);
                          uVar57 = (undefined1)((uint)fVar58 >> 0x18);
                        }
                        *pfVar30 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
                        lVar33 = lVar33 + -1;
                        pfVar30 = pfVar30 + 1;
                        pfVar32 = pfVar32 + 1;
                      } while (lVar33 != 0);
                    }
                    lVar37 = lVar37 + 1;
                    pfVar44 = pfVar44 + lVar24;
                  } while (lVar37 != lVar25);
                }
              }
            }
            else if (param_4 == 5) {
              if (0 < iVar35) {
                lVar37 = 0;
                do {
                  pfVar30 = pfVar44;
                  pfVar32 = pfVar38;
                  lVar33 = lVar24;
                  if (0 < iVar34) {
                    do {
                      fVar9 = *pfVar32;
                      fVar58 = *pfVar30;
                      uVar51 = SUB41(fVar9,0);
                      uVar53 = (undefined1)((uint)fVar9 >> 8);
                      uVar55 = (undefined1)((uint)fVar9 >> 0x10);
                      uVar57 = (undefined1)((uint)fVar9 >> 0x18);
                      if (fVar58 <= fVar9) {
                        uVar51 = SUB41(fVar58,0);
                        uVar53 = (undefined1)((uint)fVar58 >> 8);
                        uVar55 = (undefined1)((uint)fVar58 >> 0x10);
                        uVar57 = (undefined1)((uint)fVar58 >> 0x18);
                      }
                      *pfVar30 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
                      lVar33 = lVar33 + -1;
                      pfVar30 = pfVar30 + 1;
                      pfVar32 = pfVar32 + 1;
                    } while (lVar33 != 0);
                  }
                  lVar37 = lVar37 + 1;
                  pfVar44 = pfVar44 + lVar24;
                } while (lVar37 != lVar25);
              }
            }
            else {
              if (param_4 != 6) goto LAB_109c304f4;
              func_0x000109c1a4c0(param_6,lVar25);
              _cblas_sgemm(0x66,0x6f,0x6f,lVar24,iVar35,1,pfVar38,lVar24,param_6,1);
              _vDSP_vsq(pfVar44,1,pfVar44,1,(long)(iVar35 * iVar34));
            }
          }
          else if (puVar19 == puVar49) {
            (*(code *)*param_5)(auStack_210,*plVar16 + 8,*(undefined1 *)(*plVar16 + 0x48),param_5);
            func_0x000109c18360(plVar13,auStack_210);
            FUN_109c180ec(auStack_210);
            FUN_109c11af8(*plVar13,*plVar16);
            uVar43 = *(uint *)(*plVar11 + 8);
            uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar43) {
              uVar43 = 5;
            }
            iVar34 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar11 + 0xc,uVar43);
            uVar43 = *(uint *)(*plVar16 + 8);
            uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar43) {
              uVar43 = 5;
            }
            iVar15 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar16 + 0xc,uVar43);
            iVar35 = 0;
            if (iVar34 != 0) {
              iVar35 = iVar15 / iVar34;
            }
            pfVar44 = *(float **)(*plVar11 + 0x40);
            pfVar38 = *(float **)(*plVar13 + 0x40);
            lVar25 = (long)iVar35;
            lVar24 = (long)iVar34;
            if (param_4 < 3) {
              if (param_4 == 0) {
                if (0 < iVar34) {
                  do {
                    _vDSP_vsmul(pfVar38,1,pfVar44,pfVar38,1,lVar25);
                    pfVar44 = pfVar44 + 1;
                    pfVar38 = pfVar38 + lVar25;
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                }
              }
              else if (param_4 == 1) {
                if (0 < iVar34) {
                  do {
                    _vDSP_vsadd(pfVar38,1,pfVar44,pfVar38,1,lVar25);
                    pfVar44 = pfVar44 + 1;
                    pfVar38 = pfVar38 + lVar25;
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                }
              }
              else {
                if (param_4 != 2) goto LAB_109c30504;
                if (bVar6) {
                  auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,0xbf800000);
                  _vDSP_vsmul(pfVar38,1,auStack_210,pfVar38,1,(long)(iVar35 * iVar34));
                  if (0 < iVar34) {
                    do {
                      _vDSP_vsadd(pfVar38,1,pfVar44,pfVar38,1,lVar25);
                      pfVar44 = pfVar44 + 1;
                      pfVar38 = pfVar38 + lVar25;
                      lVar24 = lVar24 + -1;
                    } while (lVar24 != 0);
                  }
                }
                else if (0 < iVar34) {
                  do {
                    auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,-*pfVar44);
                    _vDSP_vsadd(pfVar38,1,auStack_210,pfVar38,1,lVar25);
                    pfVar38 = pfVar38 + lVar25;
                    lVar24 = lVar24 + -1;
                    pfVar44 = pfVar44 + 1;
                  } while (lVar24 != 0);
                }
              }
            }
            else if (param_4 < 5) {
              if (param_4 == 3) {
                if (bVar6) {
                  auStack_210[0] = CONCAT44(auStack_210[0]._4_4_,iVar35 * iVar34);
                  _vvrecf(pfVar38,pfVar38,auStack_210);
                  if (0 < iVar34) {
                    do {
                      _vDSP_vsmul(pfVar38,1,pfVar44,pfVar38,1,lVar25);
                      pfVar44 = pfVar44 + 1;
                      pfVar38 = pfVar38 + lVar25;
                      lVar24 = lVar24 + -1;
                    } while (lVar24 != 0);
                  }
                }
                else if (0 < iVar34) {
                  do {
                    _vDSP_vsdiv(pfVar38,1,pfVar44,pfVar38,1,lVar25);
                    pfVar44 = pfVar44 + 1;
                    pfVar38 = pfVar38 + lVar25;
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                }
              }
              else {
                if (param_4 != 4) {
LAB_109c30504:
                  func_0x000105688514(&UNK_10f5a456b);
                  goto LAB_109c30510;
                }
                if (0 < iVar34) {
                  lVar37 = 0;
                  do {
                    pfVar30 = pfVar38;
                    lVar33 = lVar25;
                    if (0 < iVar35) {
                      do {
                        fVar9 = pfVar44[lVar37];
                        fVar58 = *pfVar30;
                        uVar51 = SUB41(fVar9,0);
                        uVar53 = (undefined1)((uint)fVar9 >> 8);
                        uVar55 = (undefined1)((uint)fVar9 >> 0x10);
                        uVar57 = (undefined1)((uint)fVar9 >> 0x18);
                        if (fVar9 <= fVar58) {
                          uVar51 = SUB41(fVar58,0);
                          uVar53 = (undefined1)((uint)fVar58 >> 8);
                          uVar55 = (undefined1)((uint)fVar58 >> 0x10);
                          uVar57 = (undefined1)((uint)fVar58 >> 0x18);
                        }
                        *pfVar30 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
                        lVar33 = lVar33 + -1;
                        pfVar30 = pfVar30 + 1;
                      } while (lVar33 != 0);
                    }
                    lVar37 = lVar37 + 1;
                    pfVar38 = pfVar38 + lVar25;
                  } while (lVar37 != lVar24);
                }
              }
            }
            else if (param_4 == 5) {
              if (0 < iVar34) {
                lVar37 = 0;
                do {
                  pfVar30 = pfVar38;
                  lVar33 = lVar25;
                  if (0 < iVar35) {
                    do {
                      fVar9 = pfVar44[lVar37];
                      fVar58 = *pfVar30;
                      uVar51 = SUB41(fVar9,0);
                      uVar53 = (undefined1)((uint)fVar9 >> 8);
                      uVar55 = (undefined1)((uint)fVar9 >> 0x10);
                      uVar57 = (undefined1)((uint)fVar9 >> 0x18);
                      if (fVar58 <= fVar9) {
                        uVar51 = SUB41(fVar58,0);
                        uVar53 = (undefined1)((uint)fVar58 >> 8);
                        uVar55 = (undefined1)((uint)fVar58 >> 0x10);
                        uVar57 = (undefined1)((uint)fVar58 >> 0x18);
                      }
                      *pfVar30 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
                      lVar33 = lVar33 + -1;
                      pfVar30 = pfVar30 + 1;
                    } while (lVar33 != 0);
                  }
                  lVar37 = lVar37 + 1;
                  pfVar38 = pfVar38 + lVar25;
                } while (lVar37 != lVar24);
              }
            }
            else {
              if (param_4 != 6) goto LAB_109c30504;
              func_0x000109c1a4c0(param_6,lVar25);
              _cblas_sgemm(0x66,0x6f,0x6f,lVar25,lVar24,1,param_6,lVar25,pfVar44,1);
              _vDSP_vsq(pfVar38,1,pfVar38,1,(long)(iVar35 * iVar34));
            }
          }
          else {
            if (bVar6) {
              lVar24 = *plVar16;
              *plVar16 = *plVar11;
              *plVar11 = lVar24;
              lVar24 = plVar16[1];
              plVar16[1] = plVar11[1];
              plVar11[1] = lVar24;
            }
            lVar25 = *plVar16;
            piVar42 = aiStack_254;
            aiStack_254[2] = 0;
            aiStack_254[3] = 0;
            aiStack_254[0] = 0;
            aiStack_254[1] = 0;
            aiStack_254[4] = 0;
            fVar9 = *(float *)(lVar25 + 8);
            lVar24 = (long)(int)fVar9;
            if (fVar9 != 0.0) {
              _memcpy(piVar42,lVar25 + 0xc,lVar24 << 2);
            }
            aiStack_26c[4] = 0;
            fStack_258 = fVar9;
            piVar46 = aiStack_26c;
            aiStack_26c[2] = 0;
            aiStack_26c[3] = 0;
            aiStack_26c[0] = 0;
            aiStack_26c[1] = 0;
            fVar58 = *(float *)(*plVar11 + 8);
            lVar37 = (long)(int)fVar58;
            if (fVar58 != 0.0) {
              _memcpy(piVar46,*plVar11 + 0xc,lVar37 << 2);
            }
            fStack_270 = fVar58;
            fVar1 = fVar9;
            if ((int)fVar9 <= (int)fVar58) {
              fVar1 = fVar58;
            }
            uVar18 = (ulong)(uint)fVar1;
            if (0 < (int)fVar9) {
              uVar47 = uVar18;
              lVar33 = lVar37;
              if (lVar37 <= lVar24) {
                lVar33 = lVar24;
              }
              do {
                (&fStack_258)[uVar47] = (&fStack_258)[(lVar24 + uVar47) - lVar33];
                uVar47 = uVar47 - 1;
              } while ((long)((int)fVar1 - (int)fVar9) < (long)uVar47);
            }
            if (0 < (int)fVar1 - (int)fVar9) {
              _memset_pattern16(piVar42,&UNK_10dfd94a0,(ulong)((int)fVar1 + ~(uint)fVar9) * 4 + 4);
            }
            fStack_258 = fVar1;
            if (0 < (int)fVar58) {
              uVar47 = uVar18;
              lVar33 = lVar37;
              if (lVar37 <= lVar24) {
                lVar33 = lVar24;
              }
              do {
                (&fStack_270)[uVar47] = (&fStack_270)[(lVar37 + uVar47) - lVar33];
                uVar47 = uVar47 - 1;
              } while ((long)((int)fVar1 - (int)fVar58) < (long)uVar47);
            }
            if (0 < (int)fVar1 - (int)fVar58) {
              _memset_pattern16(piVar46,&UNK_10dfd94a0,(ulong)((int)fVar1 + ~(uint)fVar58) * 4 + 4);
            }
            aiStack_284[4] = 0;
            fStack_270 = fVar1;
            aiStack_284[2] = 0;
            aiStack_284[3] = 0;
            aiStack_284[0] = 0;
            aiStack_284[1] = 0;
            fStack_288 = fVar1;
            piVar23 = aiStack_284;
            if (0 < (int)fVar1) {
              do {
                iVar34 = *piVar42;
                if (*piVar42 <= *piVar46) {
                  iVar34 = *piVar46;
                }
                *piVar23 = iVar34;
                uVar18 = uVar18 - 1;
                piVar23 = piVar23 + 1;
                piVar42 = piVar42 + 1;
                piVar46 = piVar46 + 1;
              } while (uVar18 != 0);
            }
            (*(code *)*param_5)(auStack_210,&fStack_288,*(undefined1 *)(lVar25 + 0x48),param_5);
            func_0x000109c18360(plVar13,auStack_210);
            FUN_109c180ec(auStack_210);
            uVar36 = *(undefined8 *)(*plVar16 + 0x40);
            uVar39 = *(undefined8 *)(*plVar11 + 0x40);
            uVar40 = *(undefined8 *)(*plVar13 + 0x40);
            aiStack_228[0] = 0;
            aiStack_228[1] = 0;
            aiStack_228[2] = 0;
            aiStack_228[3] = 0;
            aiStack_228[4] = 0;
            aiStack_254[5] = 0;
            aiStack_254[6] = 0;
            aiStack_254[7] = 0;
            aiStack_254[8] = 0;
            aiStack_254[9] = 0;
            if ((int)fStack_288 < 1) {
              aiStack_1f8[8] = 0;
              aiStack_1f8[9] = 0;
              aiStack_1f8[6] = 0;
              aiStack_1f8[7] = 0;
              aiStack_1f8[4] = 0;
              aiStack_1f8[5] = 0;
              aiStack_1f8[2] = 0;
              aiStack_1f8[3] = 0;
              aiStack_1f8[0] = 0;
              aiStack_1f8[1] = 0;
              auStack_210[2] = 0;
              auStack_210[1] = 0;
LAB_109c2fe70:
              auStack_210[0] = 0x100000001;
              uVar18 = 1;
              aiStack_1f8[0] = 1;
              aiStack_1f8[5] = 1;
              aiStack_228[0] = 0;
              aiStack_228[1] = 0;
              aiStack_228[2] = 0;
              aiStack_228[3] = 0;
              aiStack_228[4] = 0;
LAB_109c2fe8c:
              auStack_210[2] = 0;
              auStack_210[1] = 0;
              aiStack_228[4] = 0;
              aiStack_228[2] = 0;
              aiStack_228[3] = 0;
              aiStack_228[0] = 0;
              aiStack_228[1] = 0;
              iVar34 = 1;
              do {
                aiStack_254[uVar18 + 10] = iVar34;
                iVar34 = *(int *)((long)auStack_210 + uVar18 * 4) * iVar34;
                bVar6 = uVar18 != 0;
                uVar18 = uVar18 - 1;
              } while (bVar6 && uVar18 != 0);
            }
            else {
              iVar15 = 1;
              iVar34 = 1;
              uVar18 = (ulong)(uint)fStack_288;
              do {
                if ((long)(int)fVar1 < (long)uVar18) {
                  fVar9 = -NAN;
                  iVar35 = iVar15;
                  iVar10 = iVar34;
                  iVar15 = -iVar15;
                }
                else {
                  iVar2 = (int)(&fStack_258)[uVar18] * iVar15;
                  iVar35 = 0;
                  if ((&fStack_258)[uVar18] != 1.4013e-45) {
                    iVar35 = iVar15;
                  }
                  fVar9 = (&fStack_270)[uVar18];
                  iVar10 = 0;
                  iVar15 = iVar2;
                  if (fVar9 != 1.4013e-45) {
                    iVar10 = iVar34;
                  }
                }
                aiStack_254[uVar18 + 10] = iVar35;
                aiStack_254[uVar18 + 4] = iVar10;
                iVar34 = (int)fVar9 * iVar34;
                bVar6 = 1 < uVar18;
                uVar18 = uVar18 - 1;
              } while (bVar6);
              lVar24 = 0;
              uVar18 = 0;
              aiStack_1f8[4] = 0;
              aiStack_1f8[5] = 0;
              aiStack_1f8[2] = 0;
              aiStack_1f8[3] = 0;
              aiStack_1f8[8] = 0;
              aiStack_1f8[9] = 0;
              aiStack_1f8[6] = 0;
              aiStack_1f8[7] = 0;
              auStack_210[1] = 0;
              auStack_210[0] = 0;
              aiStack_1f8[0] = 0;
              aiStack_1f8[1] = 0;
              auStack_210[2] = 0;
              uVar47 = (ulong)auStack_210 | 4;
              do {
                auStack_210[2] = 0;
                auStack_210[1] = 0;
                iVar34 = *(int *)((long)aiStack_284 + lVar24);
                if (iVar34 != 1) {
                  iVar15 = (int)uVar18;
                  if (iVar15 < 1) {
                    iVar35 = *(int *)((long)aiStack_228 + lVar24);
                  }
                  else {
                    uVar43 = iVar15 - 1;
                    iVar35 = *(int *)((long)aiStack_228 + lVar24);
                    if ((aiStack_1f8[uVar43] == iVar35 * iVar34) &&
                       (iVar2 = *(int *)((long)aiStack_254 + lVar24 + 0x14),
                       aiStack_1f8[(ulong)uVar43 + 5] == iVar2 * iVar34)) {
                      *(int *)(uVar47 + (ulong)uVar43 * 4) =
                           *(int *)(uVar47 + (ulong)uVar43 * 4) * iVar34;
                      aiStack_1f8[uVar43] = iVar35;
                      aiStack_1f8[(ulong)uVar43 + 5] = iVar2;
                      goto LAB_109c2f948;
                    }
                  }
                  *(int *)(uVar47 + (long)iVar15 * 4) = iVar34;
                  aiStack_1f8[(int)auStack_210[0]] = iVar35;
                  aiStack_1f8[(long)(int)auStack_210[0] + 5] =
                       *(int *)((long)aiStack_254 + lVar24 + 0x14);
                  uVar18 = (ulong)((int)auStack_210[0] + 1U);
                  auStack_210[0] = (ulong)((int)auStack_210[0] + 1U);
                }
LAB_109c2f948:
                lVar24 = lVar24 + 4;
              } while ((ulong)(uint)fStack_288 * 4 - lVar24 != 0);
              if ((int)uVar18 == 0) goto LAB_109c2fe70;
              aiStack_228[0] = 0;
              aiStack_228[1] = 0;
              aiStack_228[2] = 0;
              aiStack_228[3] = 0;
              aiStack_228[4] = 0;
              if (0 < (int)uVar18) goto LAB_109c2fe8c;
            }
            FUN_109c30950(auStack_210,aiStack_228,0,uVar36,uVar39,uVar40,param_4);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        _memcpy(puVar45,lVar24 + 0xc,lVar25 << 2);
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar43);
        lVar24 = *plVar11;
        puVar48 = (uint *)((ulong)auStack_2b8 | 4);
        auStack_2b8[2] = 0;
        auStack_2b8[3] = 0;
        auStack_2b8[4] = 0;
        auStack_2b8[5] = 0;
        auStack_2b8[0] = 0;
        auStack_2b8[1] = 0;
        if (((uint *)(lVar24 + 8U) == auStack_2b8) || (uVar14 = *(uint *)(lVar24 + 8U), uVar14 == 0)
           ) {
          if (-1 < (int)uVar43) {
            uVar14 = 0;
LAB_109c2f26c:
            _memset_pattern16(puVar48,&UNK_10dfd94a0,(ulong)(uVar43 + ~uVar14) * 4 + 4);
            puVar49 = puVar48;
            goto LAB_109c2f28c;
          }
        }
        else {
LAB_109c2f210:
          auStack_2b8[4] = 0;
          auStack_2b8[5] = 0;
          auStack_2b8[2] = 0;
          auStack_2b8[3] = 0;
          auStack_2b8[0] = 0;
          auStack_2b8[1] = 0;
          _memmove(puVar48,lVar24 + 0xc,
                   -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2);
          uVar14 = *(uint *)(lVar24 + 8);
          auStack_2b8[0] = uVar14;
          if ((int)uVar14 <= (int)uVar43) {
            if (0 < (int)uVar14) {
              lVar37 = (long)(int)uVar14 << 2;
              lVar24 = lVar25;
              do {
                auStack_2b8[lVar24] = *(uint *)((long)auStack_2b8 + lVar37);
                lVar24 = lVar24 + -1;
                lVar37 = lVar37 + -4;
              } while ((int)(uVar43 - uVar14) < lVar24);
            }
            puVar49 = puVar48;
            if (0 < (int)(uVar43 - uVar14)) goto LAB_109c2f26c;
LAB_109c2f28c:
            auStack_2b8[0] = uVar43;
            puVar48 = puVar45;
            puVar26 = puVar49;
            uVar47 = uVar18;
            if (0 < (int)uVar43) {
              do {
                if ((*puVar48 != 1) && (*puVar26 != 1 && *puVar48 != *puVar26)) {
                  func_0x000105688514(&UNK_10f5a4552);
                  goto LAB_109c30510;
                }
                uVar47 = uVar47 - 1;
                puVar48 = puVar48 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar47 != 0);
            }
            puVar48 = auStack_2b8 + lVar25 + 1;
            puVar26 = puVar49;
            puVar19 = puVar49;
            if (uVar43 != 0) {
              do {
                puVar19 = puVar26;
                if (*puVar26 != 1) break;
                puVar19 = puVar26 + 1;
                bVar7 = puVar26 != auStack_2b8 + lVar25;
                puVar26 = puVar19;
              } while (bVar7);
            }
            puVar26 = puVar48;
            if (puVar19 != puVar48) {
              puVar22 = (uint *)((long)puVar45 + ((long)puVar19 - (long)puVar49));
              do {
                puVar26 = puVar19;
                if (*puVar19 != *puVar22) break;
                bVar7 = puVar19 != auStack_2b8 + lVar25;
                puVar19 = puVar19 + 1;
                puVar22 = puVar22 + 1;
                puVar26 = puVar48;
              } while (bVar7);
            }
            goto LAB_109c2f344;
          }
        }
      }
      func_0x000105688514(&UNK_10f5a3d83);
LAB_109c30510:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109c30514);
      (*pcVar5)();
    }
    FUN_109c31d7c(&uStack_d0,&uStack_b0);
    FUN_109c31d7c(&uStack_100,&uStack_b0);
    puVar17 = (undefined8 *)*param_2;
    plStack_108 = (long *)puVar17[1];
    uStack_110 = *puVar17;
    if (puVar17[1] != 0) {
      plVar13 = (long *)(puVar17[1] + 8);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar17 = (undefined8 *)*param_2;
    }
    plStack_118 = (long *)puVar17[3];
    uStack_120 = puVar17[2];
    if (puVar17[3] != 0) {
      plVar13 = (long *)(puVar17[3] + 8);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_b0 = 0x109c31cfc;
    ppuStack_a8 = &PTR_DAT_110b2cae8;
    lStack_a0 = param_1;
    (*pcVar5)(&uStack_110,&uStack_120,&uStack_100,*(undefined4 *)(param_1 + 0x90),&uStack_b0,
              *(undefined8 *)(param_1 + 0x68));
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    plVar13 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar11 = plStack_118 + 1;
      do {
        lVar24 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar11 = plStack_108 + 1;
      do {
        lVar24 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    lVar24 = *param_2;
    uVar18 = param_2[1] - lVar24 >> 4;
    if (2 < uVar18) {
      uVar47 = 2;
      do {
        plStack_138 = plStack_f8;
        uStack_140 = uStack_100;
        plStack_f8 = plStack_c8;
        uStack_100 = uStack_d0;
        plStack_c8 = plStack_138;
        uStack_d0 = uStack_140;
        puVar17 = (undefined8 *)(lVar24 + uVar47 * 0x10);
        uStack_130 = *puVar17;
        plStack_128 = (long *)puVar17[1];
        if (puVar17[1] != 0) {
          plVar13 = (long *)(puVar17[1] + 8);
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (plStack_138 != (long *)0x0) {
          plVar13 = plStack_138 + 1;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppuStack_a8 = &PTR_DAT_110b2cb00;
        uStack_b0 = 0x109c31d3c;
        if (uVar47 != uVar18 - 1) {
          ppuStack_a8 = &PTR_DAT_110b2cae8;
          uStack_b0 = 0x109c31cfc;
        }
        lStack_a0 = param_1;
        (*pcVar5)(&uStack_130,&uStack_140,&uStack_100,*(undefined4 *)(param_1 + 0x90),&uStack_b0,
                  *(undefined8 *)(param_1 + 0x68));
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        plVar13 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar11 = plStack_138 + 1;
          do {
            lVar24 = *plVar11;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar24 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar11 = plStack_128 + 1;
          do {
            lVar24 = *plVar11;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar24 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        uVar47 = uVar47 + 1;
        lVar24 = *param_2;
        uVar18 = param_2[1] - lVar24 >> 4;
      } while (uVar47 < uVar18);
    }
    func_0x000109c1e534(param_3,&uStack_100);
    plVar13 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar11 = plStack_f8 + 1;
      do {
        lVar24 = *plVar11;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_c8 != (long *)0x0) {
      plVar13 = plStack_c8 + 1;
      do {
        lVar24 = *plVar13;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar11 = plStack_c8;
      } while (cVar3 != '\0');
      goto LAB_109c2eea0;
    }
  }
  plVar13 = (long *)*param_2;
  plVar11 = (long *)param_2[1];
  if (plVar13 == plVar11) {
    uVar41 = 2;
  }
  else {
    uVar43 = 0;
    uVar41 = 2;
    do {
      lVar24 = *plVar13;
      if (*(int *)(lVar24 + 0x3c) != 2) {
        uVar14 = *(uint *)(lVar24 + 8) & ((int)*(uint *)(lVar24 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar14) {
          uVar14 = 5;
        }
        uVar8 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar24 + 0xc,uVar14);
        if (uVar43 <= uVar8) {
          uVar14 = *(uint *)(*plVar13 + 8);
          uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar43 = 0xf5749aa;
          FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar13 + 0xc,uVar14);
          uVar41 = *(undefined4 *)(*plVar13 + 0x3c);
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar11);
  }
  *(undefined4 *)(*param_3 + 0x3c) = uVar41;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109c2ef9c:
  FUN_109c129d4(&uStack_d0);
  FUN_10928a5e0(&uStack_b0,&UNK_10f5a3e0d,&uStack_d0);
  func_0x000105687ee0(&uStack_b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c2efc4);
  (*pcVar5)();
}



/* Entry: 109c2f094; end: 109c3053f;  */

void FUN_109c2f094(long *param_1,long *param_2,long *param_3,int param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 (*pauVar22) [16];
  undefined4 *puVar23;
  float *pfVar24;
  undefined8 *puVar25;
  float *pfVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long lVar33;
  float *pfVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  int *piVar38;
  float *pfVar39;
  uint *puVar40;
  int *piVar41;
  uint *puVar42;
  uint *puVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  float fVar52;
  undefined1 auVar53 [16];
  uint auStack_168 [6];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float fStack_138;
  int aiStack_134 [5];
  float fStack_120;
  int aiStack_11c [5];
  float fStack_108;
  int aiStack_104 [11];
  int aiStack_d8 [6];
  ulong auStack_c0 [3];
  int aiStack_a8 [12];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *param_1;
  uVar2 = *(uint *)(lVar13 + 8);
  lVar19 = *param_2;
  if ((int)uVar2 < (int)*(uint *)(lVar19 + 8)) {
LAB_109c2f0f4:
    *param_1 = lVar19;
    *param_2 = lVar13;
    lVar13 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar13;
    lVar13 = *param_1;
    bVar6 = true;
  }
  else {
    if (uVar2 == *(uint *)(lVar19 + 8)) {
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar29 = 0xf5749aa;
      iVar12 = iVar29;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar2);
      uVar2 = *(uint *)(*param_2 + 8);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_2 + 0xc,uVar2);
      lVar13 = *param_1;
      if (iVar12 < iVar29) {
        lVar19 = *param_2;
        goto LAB_109c2f0f4;
      }
    }
    bVar6 = false;
  }
  puVar40 = (uint *)((ulong)&uStack_150 | 4);
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uVar2 = *(uint *)(lVar13 + 8);
  uVar37 = (ulong)uVar2;
  lVar19 = (long)(int)uVar2;
  if (uVar2 == 0) {
    lVar13 = *param_2;
    puVar42 = (uint *)((ulong)auStack_168 | 4);
    auStack_168[2] = 0;
    auStack_168[3] = 0;
    auStack_168[4] = 0;
    auStack_168[5] = 0;
    auStack_168[0] = 0;
    auStack_168[1] = 0;
    if (((uint *)(lVar13 + 8U) != auStack_168) && (uVar11 = *(uint *)(lVar13 + 8U), uVar11 != 0))
    goto LAB_109c2f210;
    lVar19 = 0;
    puVar20 = puVar42;
    puVar43 = puVar42;
LAB_109c2f344:
    puVar14 = puVar42;
    puVar17 = puVar42 + 1;
    do {
      puVar16 = puVar43;
      puVar21 = puVar43;
      if (puVar14 == puVar43) break;
      puVar15 = puVar14 + -1;
      puVar21 = puVar17 + -1;
      puVar16 = puVar14;
      puVar14 = puVar15;
      puVar17 = puVar21;
    } while (*puVar15 == 1);
    lVar13 = (long)puVar21 + (lVar19 * 4 - (long)puVar42);
    do {
      puVar17 = puVar16;
      puVar14 = puVar43;
      if (puVar17 == puVar43) break;
      puVar21 = (uint *)((long)&uStack_150 + lVar13);
      lVar13 = lVar13 + -4;
      puVar16 = puVar17 + -1;
      puVar14 = puVar17;
    } while (puVar17[-1] == *puVar21);
    uVar11 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar11) {
      uVar11 = 5;
    }
    iVar29 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar43,uVar11);
    if (iVar29 == 1) {
      fVar8 = **(float **)(*param_2 + 0x40);
      fStack_108 = fVar8;
      (*(code *)*param_5)(auStack_c0,*param_1 + 8,*(undefined1 *)(*param_1 + 0x48),param_5);
      func_0x000109c18360(param_3,auStack_c0);
      FUN_109c180ec(auStack_c0);
      uVar2 = *(uint *)(*param_1 + 8);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      uVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_1 + 0xc,uVar2);
      pauVar10 = *(undefined1 (**) [16])(*param_1 + 0x40);
      puVar31 = *(undefined8 **)(*param_3 + 0x40);
      fStack_120 = -fVar8;
      if (param_4 < 3) {
        if (param_4 == 0) {
          _vDSP_vsmul(pauVar10,1,&fStack_108,puVar31,1,(long)(int)uVar11);
        }
        else if (param_4 == 1) {
          _vDSP_vsadd(pauVar10,1,&fStack_108,puVar31,1,(long)(int)uVar11);
        }
        else {
          if (param_4 != 2) goto LAB_109c304d4;
          auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,0xbf800000);
          if (bVar6) {
            _vDSP_vsmsa(pauVar10,1,auStack_c0,&fStack_108,puVar31,1);
          }
          else {
            _vDSP_vsadd(pauVar10,1,&fStack_120,puVar31,1,(long)(int)uVar11);
          }
        }
      }
      else {
        uVar45 = SUB41(fVar8,0);
        uVar47 = (undefined1)((uint)fVar8 >> 8);
        uVar49 = (undefined1)((uint)fVar8 >> 0x10);
        uVar51 = (undefined1)((uint)fVar8 >> 0x18);
        if (param_4 < 5) {
          if (param_4 == 3) {
            if (bVar6) {
              auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,uVar11);
              _vvrecf(puVar31,pauVar10,auStack_c0);
              _vDSP_vsmul(puVar31,1,&fStack_108,puVar31,1,(long)(int)uVar11);
            }
            else {
              _vDSP_vsdiv(pauVar10,1,&fStack_108,puVar31,1,(long)(int)uVar11);
            }
          }
          else {
            if (param_4 != 4) {
LAB_109c304d4:
              func_0x000105688514(&UNK_10f5a456b);
              goto LAB_109c30510;
            }
            uVar2 = uVar11 + 3;
            if (-1 < (int)uVar11) {
              uVar2 = uVar11;
            }
            uVar2 = uVar2 & 0xfffffffc;
            if (3 < (int)uVar11) {
              uVar37 = 0;
              pauVar22 = pauVar10;
              puVar25 = puVar31;
              do {
                auVar4[4] = uVar45;
                auVar4._0_4_ = fVar8;
                auVar4[5] = uVar47;
                auVar4[6] = uVar49;
                auVar4[7] = uVar51;
                auVar4[8] = uVar45;
                auVar4[9] = uVar47;
                auVar4[10] = uVar49;
                auVar4[0xb] = uVar51;
                auVar4[0xc] = uVar45;
                auVar4[0xd] = uVar47;
                auVar4[0xe] = uVar49;
                auVar4[0xf] = uVar51;
                auVar53 = NEON_fmax(*pauVar22,auVar4,4);
                puVar25[1] = auVar53._8_8_;
                *puVar25 = auVar53._0_8_;
                uVar37 = uVar37 + 4;
                pauVar22 = pauVar22 + 1;
                puVar25 = puVar25 + 2;
              } while (uVar37 < uVar2);
            }
            if ((int)uVar2 < (int)uVar11) {
              lVar13 = (long)(int)uVar11 - (long)(int)uVar2;
              pfVar39 = (float *)(*pauVar10 + (long)(int)uVar2 * 4);
              puVar23 = (undefined4 *)((long)puVar31 + (long)(int)uVar2 * 4);
              do {
                fVar52 = *pfVar39;
                uVar44 = uVar45;
                uVar46 = uVar47;
                uVar48 = uVar49;
                uVar50 = uVar51;
                if (fVar8 <= fVar52) {
                  uVar44 = SUB41(fVar52,0);
                  uVar46 = (undefined1)((uint)fVar52 >> 8);
                  uVar48 = (undefined1)((uint)fVar52 >> 0x10);
                  uVar50 = (undefined1)((uint)fVar52 >> 0x18);
                }
                *puVar23 = CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
                lVar13 = lVar13 + -1;
                pfVar39 = pfVar39 + 1;
                puVar23 = puVar23 + 1;
              } while (lVar13 != 0);
            }
          }
        }
        else if (param_4 == 5) {
          uVar2 = uVar11 + 3;
          if (-1 < (int)uVar11) {
            uVar2 = uVar11;
          }
          uVar2 = uVar2 & 0xfffffffc;
          if (3 < (int)uVar11) {
            uVar37 = 0;
            pauVar22 = pauVar10;
            puVar25 = puVar31;
            do {
              auVar53[4] = uVar45;
              auVar53._0_4_ = fVar8;
              auVar53[5] = uVar47;
              auVar53[6] = uVar49;
              auVar53[7] = uVar51;
              auVar53[8] = uVar45;
              auVar53[9] = uVar47;
              auVar53[10] = uVar49;
              auVar53[0xb] = uVar51;
              auVar53[0xc] = uVar45;
              auVar53[0xd] = uVar47;
              auVar53[0xe] = uVar49;
              auVar53[0xf] = uVar51;
              auVar53 = NEON_fmin(*pauVar22,auVar53,4);
              puVar25[1] = auVar53._8_8_;
              *puVar25 = auVar53._0_8_;
              uVar37 = uVar37 + 4;
              pauVar22 = pauVar22 + 1;
              puVar25 = puVar25 + 2;
            } while (uVar37 < uVar2);
          }
          if ((int)uVar2 < (int)uVar11) {
            lVar13 = (long)(int)uVar11 - (long)(int)uVar2;
            pfVar39 = (float *)(*pauVar10 + (long)(int)uVar2 * 4);
            puVar23 = (undefined4 *)((long)puVar31 + (long)(int)uVar2 * 4);
            do {
              fVar52 = *pfVar39;
              uVar44 = uVar45;
              uVar46 = uVar47;
              uVar48 = uVar49;
              uVar50 = uVar51;
              if (fVar52 <= fVar8) {
                uVar44 = SUB41(fVar52,0);
                uVar46 = (undefined1)((uint)fVar52 >> 8);
                uVar48 = (undefined1)((uint)fVar52 >> 0x10);
                uVar50 = (undefined1)((uint)fVar52 >> 0x18);
              }
              *puVar23 = CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
              lVar13 = lVar13 + -1;
              pfVar39 = pfVar39 + 1;
              puVar23 = puVar23 + 1;
            } while (lVar13 != 0);
          }
        }
        else {
          if (param_4 != 6) goto LAB_109c304d4;
          _vDSP_vsadd(pauVar10,1,&fStack_120,puVar31,1,(long)(int)uVar11);
          _vDSP_vsq(puVar31,1,puVar31,1,(long)(int)uVar11);
        }
      }
    }
    else if (uVar2 == auStack_168[0]) {
      puVar17 = puVar43;
      if (0 < (int)uVar2) {
        do {
          if (*puVar40 != *puVar17) goto LAB_109c2f5ec;
          uVar37 = uVar37 - 1;
          puVar17 = puVar17 + 1;
          puVar40 = puVar40 + 1;
        } while (uVar37 != 0);
      }
      (*(code *)*param_5)(auStack_c0,*param_1 + 8,*(undefined1 *)(*param_1 + 0x48),param_5);
      func_0x000109c18360(param_3,auStack_c0);
      FUN_109c180ec(auStack_c0);
      uVar35 = *(undefined8 *)(*param_1 + 0x40);
      uVar36 = *(undefined8 *)(*param_2 + 0x40);
      lVar13 = *param_3;
      uVar32 = *(undefined8 *)(lVar13 + 0x40);
      uVar2 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar29 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar2);
      if (param_4 < 3) {
        if (param_4 == 0) {
          _vDSP_vmul(uVar35,1,uVar36,1,uVar32,1,(long)iVar29);
        }
        else if (param_4 == 1) {
          _vDSP_vadd(uVar36,1,uVar35,1,uVar32,1,(long)iVar29);
        }
        else {
          if (param_4 != 2) goto LAB_109c304e4;
          _vDSP_vsub(uVar36,1,uVar35,1,uVar32,1,(long)iVar29);
        }
      }
      else if (param_4 < 5) {
        if (param_4 == 3) {
          _vDSP_vdiv(uVar36,1,uVar35,1,uVar32,1,(long)iVar29);
        }
        else {
          if (param_4 != 4) {
LAB_109c304e4:
            func_0x000105688514(&UNK_10f5a456b);
            goto LAB_109c30510;
          }
          _vDSP_vmax(uVar35,1,uVar36,1,uVar32,1,(long)iVar29);
        }
      }
      else if (param_4 == 5) {
        _vDSP_vmin(uVar35,1,uVar36,1,uVar32,1,(long)iVar29);
      }
      else {
        if (param_4 != 6) goto LAB_109c304e4;
        _vDSP_vsub(uVar36,1,uVar35,1,uVar32,1,(long)iVar29);
        _vDSP_vsq(uVar32,1,uVar32,1,(long)iVar29);
      }
    }
    else {
LAB_109c2f5ec:
      if (puVar20 == puVar42) {
        (*(code *)*param_5)(auStack_c0,*param_1 + 8,*(undefined1 *)(*param_1 + 0x48),param_5);
        func_0x000109c18360(param_3,auStack_c0);
        FUN_109c180ec(auStack_c0);
        FUN_109c11af8(*param_3,*param_1);
        uVar2 = *(uint *)(*param_2 + 8);
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar29 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_2 + 0xc,uVar2);
        uVar2 = *(uint *)(*param_1 + 8);
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar12 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_1 + 0xc,uVar2);
        iVar30 = 0;
        if (iVar29 != 0) {
          iVar30 = iVar12 / iVar29;
        }
        pfVar34 = *(float **)(*param_2 + 0x40);
        pfVar39 = *(float **)(*param_3 + 0x40);
        lVar13 = (long)iVar29;
        lVar19 = (long)iVar30;
        if (param_4 < 3) {
          if (param_4 == 0) {
            if (0 < iVar30) {
              do {
                _vDSP_vmul(pfVar39,1,pfVar34,1,pfVar39,1,lVar13);
                pfVar39 = pfVar39 + lVar13;
                iVar30 = iVar30 + -1;
              } while (iVar30 != 0);
            }
          }
          else if (param_4 == 1) {
            func_0x000109c1a4c0(param_6,lVar19);
            _cblas_sgemm(0x66,0x6f,0x6f,lVar13,iVar30,1,pfVar34,lVar13,param_6,1);
          }
          else {
            if (param_4 != 2) goto LAB_109c304f4;
            if (bVar6) {
              auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,0xbf800000);
              _vDSP_vsmul(pfVar39,1,auStack_c0,pfVar39,1,(long)(iVar30 * iVar29));
              func_0x000109c1a4c0(param_6,lVar19);
              _cblas_sgemm(0x66,0x6f,0x6f,lVar13,iVar30,1,pfVar34,lVar13,param_6,1);
            }
            else {
              func_0x000109c1a4c0(param_6,lVar19);
              _cblas_sgemm(0x66,0x6f,0x6f,lVar13,iVar30,1,pfVar34,lVar13,param_6,1);
            }
          }
        }
        else if (param_4 < 5) {
          if (param_4 == 3) {
            if (bVar6) {
              auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,iVar30 * iVar29);
              _vvrecf(pfVar39,pfVar39,auStack_c0);
              if (0 < iVar30) {
                do {
                  _vDSP_vmul(pfVar39,1,pfVar34,1,pfVar39,1,lVar13);
                  pfVar39 = pfVar39 + lVar13;
                  iVar30 = iVar30 + -1;
                } while (iVar30 != 0);
              }
            }
            else if (0 < iVar30) {
              do {
                _vDSP_vdiv(pfVar34,1,pfVar39,1,pfVar39,1,lVar13);
                pfVar39 = pfVar39 + lVar13;
                iVar30 = iVar30 + -1;
              } while (iVar30 != 0);
            }
          }
          else {
            if (param_4 != 4) {
LAB_109c304f4:
              func_0x000105688514(&UNK_10f5a456b);
              goto LAB_109c30510;
            }
            if (0 < iVar30) {
              lVar33 = 0;
              do {
                pfVar24 = pfVar39;
                pfVar26 = pfVar34;
                lVar27 = lVar13;
                if (0 < iVar29) {
                  do {
                    fVar8 = *pfVar26;
                    fVar52 = *pfVar24;
                    uVar45 = SUB41(fVar8,0);
                    uVar47 = (undefined1)((uint)fVar8 >> 8);
                    uVar49 = (undefined1)((uint)fVar8 >> 0x10);
                    uVar51 = (undefined1)((uint)fVar8 >> 0x18);
                    if (fVar8 <= fVar52) {
                      uVar45 = SUB41(fVar52,0);
                      uVar47 = (undefined1)((uint)fVar52 >> 8);
                      uVar49 = (undefined1)((uint)fVar52 >> 0x10);
                      uVar51 = (undefined1)((uint)fVar52 >> 0x18);
                    }
                    *pfVar24 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)));
                    lVar27 = lVar27 + -1;
                    pfVar24 = pfVar24 + 1;
                    pfVar26 = pfVar26 + 1;
                  } while (lVar27 != 0);
                }
                lVar33 = lVar33 + 1;
                pfVar39 = pfVar39 + lVar13;
              } while (lVar33 != lVar19);
            }
          }
        }
        else if (param_4 == 5) {
          if (0 < iVar30) {
            lVar33 = 0;
            do {
              pfVar24 = pfVar39;
              pfVar26 = pfVar34;
              lVar27 = lVar13;
              if (0 < iVar29) {
                do {
                  fVar8 = *pfVar26;
                  fVar52 = *pfVar24;
                  uVar45 = SUB41(fVar8,0);
                  uVar47 = (undefined1)((uint)fVar8 >> 8);
                  uVar49 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar51 = (undefined1)((uint)fVar8 >> 0x18);
                  if (fVar52 <= fVar8) {
                    uVar45 = SUB41(fVar52,0);
                    uVar47 = (undefined1)((uint)fVar52 >> 8);
                    uVar49 = (undefined1)((uint)fVar52 >> 0x10);
                    uVar51 = (undefined1)((uint)fVar52 >> 0x18);
                  }
                  *pfVar24 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)));
                  lVar27 = lVar27 + -1;
                  pfVar24 = pfVar24 + 1;
                  pfVar26 = pfVar26 + 1;
                } while (lVar27 != 0);
              }
              lVar33 = lVar33 + 1;
              pfVar39 = pfVar39 + lVar13;
            } while (lVar33 != lVar19);
          }
        }
        else {
          if (param_4 != 6) goto LAB_109c304f4;
          func_0x000109c1a4c0(param_6,lVar19);
          _cblas_sgemm(0x66,0x6f,0x6f,lVar13,iVar30,1,pfVar34,lVar13,param_6,1);
          _vDSP_vsq(pfVar39,1,pfVar39,1,(long)(iVar30 * iVar29));
        }
      }
      else if (puVar14 == puVar43) {
        (*(code *)*param_5)(auStack_c0,*param_1 + 8,*(undefined1 *)(*param_1 + 0x48),param_5);
        func_0x000109c18360(param_3,auStack_c0);
        FUN_109c180ec(auStack_c0);
        FUN_109c11af8(*param_3,*param_1);
        uVar2 = *(uint *)(*param_2 + 8);
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar29 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_2 + 0xc,uVar2);
        uVar2 = *(uint *)(*param_1 + 8);
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar12 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,*param_1 + 0xc,uVar2);
        iVar30 = 0;
        if (iVar29 != 0) {
          iVar30 = iVar12 / iVar29;
        }
        pfVar39 = *(float **)(*param_2 + 0x40);
        pfVar34 = *(float **)(*param_3 + 0x40);
        lVar19 = (long)iVar30;
        lVar13 = (long)iVar29;
        if (param_4 < 3) {
          if (param_4 == 0) {
            if (0 < iVar29) {
              do {
                _vDSP_vsmul(pfVar34,1,pfVar39,pfVar34,1,lVar19);
                pfVar39 = pfVar39 + 1;
                pfVar34 = pfVar34 + lVar19;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
          else if (param_4 == 1) {
            if (0 < iVar29) {
              do {
                _vDSP_vsadd(pfVar34,1,pfVar39,pfVar34,1,lVar19);
                pfVar39 = pfVar39 + 1;
                pfVar34 = pfVar34 + lVar19;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
          else {
            if (param_4 != 2) goto LAB_109c30504;
            if (bVar6) {
              auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,0xbf800000);
              _vDSP_vsmul(pfVar34,1,auStack_c0,pfVar34,1,(long)(iVar30 * iVar29));
              if (0 < iVar29) {
                do {
                  _vDSP_vsadd(pfVar34,1,pfVar39,pfVar34,1,lVar19);
                  pfVar39 = pfVar39 + 1;
                  pfVar34 = pfVar34 + lVar19;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            else if (0 < iVar29) {
              do {
                auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,-*pfVar39);
                _vDSP_vsadd(pfVar34,1,auStack_c0,pfVar34,1,lVar19);
                pfVar34 = pfVar34 + lVar19;
                lVar13 = lVar13 + -1;
                pfVar39 = pfVar39 + 1;
              } while (lVar13 != 0);
            }
          }
        }
        else if (param_4 < 5) {
          if (param_4 == 3) {
            if (bVar6) {
              auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,iVar30 * iVar29);
              _vvrecf(pfVar34,pfVar34,auStack_c0);
              if (0 < iVar29) {
                do {
                  _vDSP_vsmul(pfVar34,1,pfVar39,pfVar34,1,lVar19);
                  pfVar39 = pfVar39 + 1;
                  pfVar34 = pfVar34 + lVar19;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            else if (0 < iVar29) {
              do {
                _vDSP_vsdiv(pfVar34,1,pfVar39,pfVar34,1,lVar19);
                pfVar39 = pfVar39 + 1;
                pfVar34 = pfVar34 + lVar19;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
          else {
            if (param_4 != 4) {
LAB_109c30504:
              func_0x000105688514(&UNK_10f5a456b);
              goto LAB_109c30510;
            }
            if (0 < iVar29) {
              lVar33 = 0;
              do {
                pfVar24 = pfVar34;
                lVar27 = lVar19;
                if (0 < iVar30) {
                  do {
                    fVar8 = pfVar39[lVar33];
                    fVar52 = *pfVar24;
                    uVar45 = SUB41(fVar8,0);
                    uVar47 = (undefined1)((uint)fVar8 >> 8);
                    uVar49 = (undefined1)((uint)fVar8 >> 0x10);
                    uVar51 = (undefined1)((uint)fVar8 >> 0x18);
                    if (fVar8 <= fVar52) {
                      uVar45 = SUB41(fVar52,0);
                      uVar47 = (undefined1)((uint)fVar52 >> 8);
                      uVar49 = (undefined1)((uint)fVar52 >> 0x10);
                      uVar51 = (undefined1)((uint)fVar52 >> 0x18);
                    }
                    *pfVar24 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)));
                    lVar27 = lVar27 + -1;
                    pfVar24 = pfVar24 + 1;
                  } while (lVar27 != 0);
                }
                lVar33 = lVar33 + 1;
                pfVar34 = pfVar34 + lVar19;
              } while (lVar33 != lVar13);
            }
          }
        }
        else if (param_4 == 5) {
          if (0 < iVar29) {
            lVar33 = 0;
            do {
              pfVar24 = pfVar34;
              lVar27 = lVar19;
              if (0 < iVar30) {
                do {
                  fVar8 = pfVar39[lVar33];
                  fVar52 = *pfVar24;
                  uVar45 = SUB41(fVar8,0);
                  uVar47 = (undefined1)((uint)fVar8 >> 8);
                  uVar49 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar51 = (undefined1)((uint)fVar8 >> 0x18);
                  if (fVar52 <= fVar8) {
                    uVar45 = SUB41(fVar52,0);
                    uVar47 = (undefined1)((uint)fVar52 >> 8);
                    uVar49 = (undefined1)((uint)fVar52 >> 0x10);
                    uVar51 = (undefined1)((uint)fVar52 >> 0x18);
                  }
                  *pfVar24 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)));
                  lVar27 = lVar27 + -1;
                  pfVar24 = pfVar24 + 1;
                } while (lVar27 != 0);
              }
              lVar33 = lVar33 + 1;
              pfVar34 = pfVar34 + lVar19;
            } while (lVar33 != lVar13);
          }
        }
        else {
          if (param_4 != 6) goto LAB_109c30504;
          func_0x000109c1a4c0(param_6,lVar19);
          _cblas_sgemm(0x66,0x6f,0x6f,lVar19,lVar13,1,param_6,lVar19,pfVar39,1);
          _vDSP_vsq(pfVar34,1,pfVar34,1,(long)(iVar30 * iVar29));
        }
      }
      else {
        if (bVar6) {
          lVar13 = *param_1;
          *param_1 = *param_2;
          *param_2 = lVar13;
          lVar13 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = lVar13;
        }
        lVar19 = *param_1;
        piVar38 = aiStack_104;
        aiStack_104[2] = 0;
        aiStack_104[3] = 0;
        aiStack_104[0] = 0;
        aiStack_104[1] = 0;
        aiStack_104[4] = 0;
        fVar8 = *(float *)(lVar19 + 8);
        lVar13 = (long)(int)fVar8;
        if (fVar8 != 0.0) {
          _memcpy(piVar38,lVar19 + 0xc,lVar13 << 2);
        }
        aiStack_11c[4] = 0;
        fStack_108 = fVar8;
        piVar41 = aiStack_11c;
        aiStack_11c[2] = 0;
        aiStack_11c[3] = 0;
        aiStack_11c[0] = 0;
        aiStack_11c[1] = 0;
        fVar52 = *(float *)(*param_2 + 8);
        lVar33 = (long)(int)fVar52;
        if (fVar52 != 0.0) {
          _memcpy(piVar41,*param_2 + 0xc,lVar33 << 2);
        }
        fStack_120 = fVar52;
        fVar1 = fVar8;
        if ((int)fVar8 <= (int)fVar52) {
          fVar1 = fVar52;
        }
        uVar37 = (ulong)(uint)fVar1;
        if (0 < (int)fVar8) {
          uVar28 = uVar37;
          lVar27 = lVar33;
          if (lVar33 <= lVar13) {
            lVar27 = lVar13;
          }
          do {
            (&fStack_108)[uVar28] = (&fStack_108)[(lVar13 + uVar28) - lVar27];
            uVar28 = uVar28 - 1;
          } while ((long)((int)fVar1 - (int)fVar8) < (long)uVar28);
        }
        if (0 < (int)fVar1 - (int)fVar8) {
          _memset_pattern16(piVar38,&UNK_10dfd94a0,(ulong)((int)fVar1 + ~(uint)fVar8) * 4 + 4);
        }
        fStack_108 = fVar1;
        if (0 < (int)fVar52) {
          uVar28 = uVar37;
          lVar27 = lVar33;
          if (lVar33 <= lVar13) {
            lVar27 = lVar13;
          }
          do {
            (&fStack_120)[uVar28] = (&fStack_120)[(lVar33 + uVar28) - lVar27];
            uVar28 = uVar28 - 1;
          } while ((long)((int)fVar1 - (int)fVar52) < (long)uVar28);
        }
        if (0 < (int)fVar1 - (int)fVar52) {
          _memset_pattern16(piVar41,&UNK_10dfd94a0,(ulong)((int)fVar1 + ~(uint)fVar52) * 4 + 4);
        }
        aiStack_134[4] = 0;
        fStack_120 = fVar1;
        aiStack_134[2] = 0;
        aiStack_134[3] = 0;
        aiStack_134[0] = 0;
        aiStack_134[1] = 0;
        fStack_138 = fVar1;
        piVar18 = aiStack_134;
        if (0 < (int)fVar1) {
          do {
            iVar29 = *piVar38;
            if (*piVar38 <= *piVar41) {
              iVar29 = *piVar41;
            }
            *piVar18 = iVar29;
            uVar37 = uVar37 - 1;
            piVar18 = piVar18 + 1;
            piVar38 = piVar38 + 1;
            piVar41 = piVar41 + 1;
          } while (uVar37 != 0);
        }
        (*(code *)*param_5)(auStack_c0,&fStack_138,*(undefined1 *)(lVar19 + 0x48),param_5);
        func_0x000109c18360(param_3,auStack_c0);
        FUN_109c180ec(auStack_c0);
        uVar32 = *(undefined8 *)(*param_1 + 0x40);
        uVar35 = *(undefined8 *)(*param_2 + 0x40);
        uVar36 = *(undefined8 *)(*param_3 + 0x40);
        aiStack_d8[0] = 0;
        aiStack_d8[1] = 0;
        aiStack_d8[2] = 0;
        aiStack_d8[3] = 0;
        aiStack_d8[4] = 0;
        aiStack_104[5] = 0;
        aiStack_104[6] = 0;
        aiStack_104[7] = 0;
        aiStack_104[8] = 0;
        aiStack_104[9] = 0;
        if ((int)fStack_138 < 1) {
          aiStack_a8[8] = 0;
          aiStack_a8[9] = 0;
          aiStack_a8[6] = 0;
          aiStack_a8[7] = 0;
          aiStack_a8[4] = 0;
          aiStack_a8[5] = 0;
          aiStack_a8[2] = 0;
          aiStack_a8[3] = 0;
          aiStack_a8[0] = 0;
          aiStack_a8[1] = 0;
          auStack_c0[2] = 0;
          auStack_c0[1] = 0;
LAB_109c2fe70:
          auStack_c0[0] = 0x100000001;
          uVar37 = 1;
          aiStack_a8[0] = 1;
          aiStack_a8[5] = 1;
          aiStack_d8[0] = 0;
          aiStack_d8[1] = 0;
          aiStack_d8[2] = 0;
          aiStack_d8[3] = 0;
          aiStack_d8[4] = 0;
LAB_109c2fe8c:
          auStack_c0[2] = 0;
          auStack_c0[1] = 0;
          aiStack_d8[4] = 0;
          aiStack_d8[2] = 0;
          aiStack_d8[3] = 0;
          aiStack_d8[0] = 0;
          aiStack_d8[1] = 0;
          iVar29 = 1;
          do {
            aiStack_104[uVar37 + 10] = iVar29;
            iVar29 = *(int *)((long)auStack_c0 + uVar37 * 4) * iVar29;
            bVar6 = uVar37 != 0;
            uVar37 = uVar37 - 1;
          } while (bVar6 && uVar37 != 0);
        }
        else {
          iVar12 = 1;
          iVar29 = 1;
          uVar37 = (ulong)(uint)fStack_138;
          do {
            if ((long)(int)fVar1 < (long)uVar37) {
              fVar8 = -NAN;
              iVar30 = iVar12;
              iVar9 = iVar29;
              iVar12 = -iVar12;
            }
            else {
              iVar3 = (int)(&fStack_108)[uVar37] * iVar12;
              iVar30 = 0;
              if ((&fStack_108)[uVar37] != 1.4013e-45) {
                iVar30 = iVar12;
              }
              fVar8 = (&fStack_120)[uVar37];
              iVar9 = 0;
              iVar12 = iVar3;
              if (fVar8 != 1.4013e-45) {
                iVar9 = iVar29;
              }
            }
            aiStack_104[uVar37 + 10] = iVar30;
            aiStack_104[uVar37 + 4] = iVar9;
            iVar29 = (int)fVar8 * iVar29;
            bVar6 = 1 < uVar37;
            uVar37 = uVar37 - 1;
          } while (bVar6);
          lVar13 = 0;
          uVar37 = 0;
          aiStack_a8[4] = 0;
          aiStack_a8[5] = 0;
          aiStack_a8[2] = 0;
          aiStack_a8[3] = 0;
          aiStack_a8[8] = 0;
          aiStack_a8[9] = 0;
          aiStack_a8[6] = 0;
          aiStack_a8[7] = 0;
          auStack_c0[1] = 0;
          auStack_c0[0] = 0;
          aiStack_a8[0] = 0;
          aiStack_a8[1] = 0;
          auStack_c0[2] = 0;
          uVar28 = (ulong)auStack_c0 | 4;
          do {
            auStack_c0[2] = 0;
            auStack_c0[1] = 0;
            iVar29 = *(int *)((long)aiStack_134 + lVar13);
            if (iVar29 != 1) {
              iVar12 = (int)uVar37;
              if (iVar12 < 1) {
                iVar30 = *(int *)((long)aiStack_d8 + lVar13);
              }
              else {
                uVar2 = iVar12 - 1;
                iVar30 = *(int *)((long)aiStack_d8 + lVar13);
                if ((aiStack_a8[uVar2] == iVar30 * iVar29) &&
                   (iVar3 = *(int *)((long)aiStack_104 + lVar13 + 0x14),
                   aiStack_a8[(ulong)uVar2 + 5] == iVar3 * iVar29)) {
                  *(int *)(uVar28 + (ulong)uVar2 * 4) = *(int *)(uVar28 + (ulong)uVar2 * 4) * iVar29
                  ;
                  aiStack_a8[uVar2] = iVar30;
                  aiStack_a8[(ulong)uVar2 + 5] = iVar3;
                  goto LAB_109c2f948;
                }
              }
              *(int *)(uVar28 + (long)iVar12 * 4) = iVar29;
              aiStack_a8[(int)auStack_c0[0]] = iVar30;
              aiStack_a8[(long)(int)auStack_c0[0] + 5] = *(int *)((long)aiStack_104 + lVar13 + 0x14)
              ;
              uVar37 = (ulong)((int)auStack_c0[0] + 1U);
              auStack_c0[0] = (ulong)((int)auStack_c0[0] + 1U);
            }
LAB_109c2f948:
            lVar13 = lVar13 + 4;
          } while ((ulong)(uint)fStack_138 * 4 - lVar13 != 0);
          if ((int)uVar37 == 0) goto LAB_109c2fe70;
          aiStack_d8[0] = 0;
          aiStack_d8[1] = 0;
          aiStack_d8[2] = 0;
          aiStack_d8[3] = 0;
          aiStack_d8[4] = 0;
          if (0 < (int)uVar37) goto LAB_109c2fe8c;
        }
        FUN_109c30950(auStack_c0,aiStack_d8,0,uVar32,uVar35,uVar36,param_4);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    _memcpy(puVar40,lVar13 + 0xc,lVar19 << 2);
    uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
    lVar13 = *param_2;
    puVar42 = (uint *)((ulong)auStack_168 | 4);
    auStack_168[2] = 0;
    auStack_168[3] = 0;
    auStack_168[4] = 0;
    auStack_168[5] = 0;
    auStack_168[0] = 0;
    auStack_168[1] = 0;
    if (((uint *)(lVar13 + 8U) == auStack_168) || (uVar11 = *(uint *)(lVar13 + 8U), uVar11 == 0)) {
      if (-1 < (int)uVar2) {
        uVar11 = 0;
LAB_109c2f26c:
        _memset_pattern16(puVar42,&UNK_10dfd94a0,(ulong)(uVar2 + ~uVar11) * 4 + 4);
        puVar43 = puVar42;
        goto LAB_109c2f28c;
      }
    }
    else {
LAB_109c2f210:
      auStack_168[4] = 0;
      auStack_168[5] = 0;
      auStack_168[2] = 0;
      auStack_168[3] = 0;
      auStack_168[0] = 0;
      auStack_168[1] = 0;
      _memmove(puVar42,lVar13 + 0xc,
               -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2);
      uVar11 = *(uint *)(lVar13 + 8);
      auStack_168[0] = uVar11;
      if ((int)uVar11 <= (int)uVar2) {
        if (0 < (int)uVar11) {
          lVar33 = (long)(int)uVar11 << 2;
          lVar13 = lVar19;
          do {
            auStack_168[lVar13] = *(uint *)((long)auStack_168 + lVar33);
            lVar13 = lVar13 + -1;
            lVar33 = lVar33 + -4;
          } while ((int)(uVar2 - uVar11) < lVar13);
        }
        puVar43 = puVar42;
        if (0 < (int)(uVar2 - uVar11)) goto LAB_109c2f26c;
LAB_109c2f28c:
        auStack_168[0] = uVar2;
        puVar42 = puVar40;
        puVar20 = puVar43;
        uVar28 = uVar37;
        if (0 < (int)uVar2) {
          do {
            if ((*puVar42 != 1) && (*puVar20 != 1 && *puVar42 != *puVar20)) {
              func_0x000105688514(&UNK_10f5a4552);
              goto LAB_109c30510;
            }
            uVar28 = uVar28 - 1;
            puVar42 = puVar42 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar28 != 0);
        }
        puVar42 = auStack_168 + lVar19 + 1;
        puVar20 = puVar43;
        puVar14 = puVar43;
        if (uVar2 != 0) {
          do {
            puVar14 = puVar20;
            if (*puVar20 != 1) break;
            puVar14 = puVar20 + 1;
            bVar7 = puVar20 != auStack_168 + lVar19;
            puVar20 = puVar14;
          } while (bVar7);
        }
        puVar20 = puVar42;
        if (puVar14 != puVar42) {
          puVar17 = (uint *)((long)puVar40 + ((long)puVar14 - (long)puVar43));
          do {
            puVar20 = puVar14;
            if (*puVar14 != *puVar17) break;
            bVar7 = puVar14 != auStack_168 + lVar19;
            puVar14 = puVar14 + 1;
            puVar17 = puVar17 + 1;
            puVar20 = puVar42;
          } while (bVar7);
        }
        goto LAB_109c2f344;
      }
    }
  }
  func_0x000105688514(&UNK_10f5a3d83);
LAB_109c30510:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c30514);
  (*pcVar5)();
}



/* Entry: 109c30540; end: 109c3094f;  */

undefined8 **
FUN_109c30540(long *param_1,long *param_2,long *param_3,uint param_4,float *param_5,float *param_6,
             undefined8 param_7)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  uint *puVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  uint *puVar27;
  int *piVar28;
  long lVar29;
  uint *puVar30;
  float *pfVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [12];
  float *pfVar34;
  undefined1 (*pauVar35) [16];
  float *pfVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  undefined8 *puVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined8 uStack_120;
  int aiStack_118 [6];
  uint auStack_100 [7];
  uint auStack_e4 [6];
  uint auStack_cc [5];
  code *pcStack_b8;
  undefined8 *apuStack_b0 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar45 = *param_1;
  puVar2 = auStack_100 + 0xd;
  auStack_cc[2] = 0;
  auStack_cc[3] = 0;
  auStack_cc[0] = 0;
  auStack_cc[1] = 0;
  auStack_cc[4] = 0;
  uVar39 = *(uint *)(lVar45 + 8);
  lVar42 = (long)(int)uVar39;
  pfVar21 = param_5;
  uStack_120 = param_3;
  if (uVar39 != 0) {
    _memcpy(puVar2,lVar45 + 0xc,lVar42 << 2);
  }
  auStack_e4[4] = 0;
  auStack_e4[5] = uVar39;
  puVar3 = auStack_100 + 7;
  auStack_e4[2] = 0;
  auStack_e4[3] = 0;
  auStack_e4[0] = 0;
  auStack_e4[1] = 0;
  uVar5 = *(uint *)(*param_2 + 8);
  lVar43 = (long)(int)uVar5;
  if (uVar5 != 0) {
    _memcpy(puVar3,*param_2 + 0xc,lVar43 << 2);
  }
  auStack_100[6] = uVar5;
  uVar4 = uVar39;
  if ((int)uVar39 <= (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar44 = (ulong)uVar4;
  if (0 < (int)uVar39) {
    uVar32 = uVar44;
    lVar24 = lVar43;
    if (lVar43 <= lVar42) {
      lVar24 = lVar42;
    }
    do {
      auStack_100[uVar32 + 0xc] = auStack_100[(lVar42 + uVar32 + 0xc) - lVar24];
      uVar32 = uVar32 - 1;
    } while ((long)(int)(uVar4 - uVar39) < (long)uVar32);
  }
  if (0 < (int)(uVar4 - uVar39)) {
    _memset_pattern16(puVar2,&UNK_10dfd94a0,(ulong)(uVar4 + ~uVar39) * 4 + 4);
  }
  if (0 < (int)uVar5) {
    uVar32 = uVar44;
    lVar24 = lVar43;
    if (lVar43 <= lVar42) {
      lVar24 = lVar42;
    }
    do {
      auStack_100[uVar32 + 6] = auStack_100[(lVar43 + uVar32 + 6) - lVar24];
      uVar32 = uVar32 - 1;
    } while ((long)(int)(uVar4 - uVar5) < (long)uVar32);
  }
  if (0 < (int)(uVar4 - uVar5)) {
    _memset_pattern16(puVar3,&UNK_10dfd94a0,(ulong)(uVar4 + ~uVar5) * 4 + 4);
  }
  auStack_100[3] = 0;
  auStack_100[4] = 0;
  puVar19 = auStack_100 + 1;
  auStack_100[1] = 0;
  auStack_100[2] = 0;
  auStack_100[5] = 0;
  auStack_100[0] = uVar4;
  puVar23 = puVar2;
  puVar27 = puVar3;
  puVar30 = puVar19;
  uVar32 = uVar44;
  if (0 < (int)uVar4) {
    do {
      uVar39 = *puVar23;
      if ((int)*puVar23 <= (int)*puVar27) {
        uVar39 = *puVar27;
      }
      *puVar30 = uVar39;
      uVar32 = uVar32 - 1;
      puVar23 = puVar23 + 1;
      puVar27 = puVar27 + 1;
      puVar30 = puVar30 + 1;
    } while (uVar32 != 0);
  }
  (**(code **)param_5)(&pcStack_b8,auStack_100,*(undefined1 *)(lVar45 + 0x48),param_5);
  plVar13 = uStack_120;
  func_0x000109c18360(uStack_120,&pcStack_b8);
  FUN_109c180ec(&pcStack_b8);
  if (7 < param_4) {
    func_0x000105688514(&UNK_10f5a456b);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x109c30908);
    (*pcVar14)();
  }
  lVar43 = *(long *)(*param_1 + 0x40);
  lVar45 = *(long *)(*param_2 + 0x40);
  lVar42 = *(long *)(*plVar13 + 0x40);
  pcStack_b8 = (code *)(&PTR_DAT_110b2cb18)[param_4];
  puVar40 = (undefined8 *)(&PTR_PTR_110b2cb58)[param_4];
  aiStack_118[0] = 0;
  aiStack_118[1] = 0;
  aiStack_118[2] = 0;
  aiStack_118[3] = 0;
  aiStack_118[4] = 0;
  uVar39 = auStack_100[0] & ((int)auStack_100[0] >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar39) {
    uVar39 = 5;
  }
  pfVar20 = (float *)(ulong)uVar39;
  puVar16 = &UNK_10f5749aa;
  uVar32 = 0x1a;
  apuStack_b0[0] = puVar40;
  FUN_109c60fbc();
  iVar22 = (int)puVar19;
  if (0 < (int)puVar16) {
    uVar41 = 0;
    do {
      if ((int)uVar4 < 1) {
        lVar24 = 0;
        lVar29 = 0;
      }
      else {
        iVar22 = 0;
        piVar28 = aiStack_118;
        puVar19 = puVar2;
        uVar32 = uVar44;
        do {
          if (*puVar19 != 1) {
            iVar22 = *piVar28 + *puVar19 * iVar22;
          }
          piVar28 = piVar28 + 1;
          uVar32 = uVar32 - 1;
          puVar19 = puVar19 + 1;
        } while (uVar32 != 0);
        iVar26 = 0;
        piVar28 = aiStack_118;
        puVar19 = puVar3;
        uVar32 = uVar44;
        do {
          if (*puVar19 != 1) {
            iVar26 = *piVar28 + *puVar19 * iVar26;
          }
          piVar28 = piVar28 + 1;
          uVar32 = uVar32 - 1;
          puVar19 = puVar19 + 1;
        } while (uVar32 != 0);
        lVar24 = (long)iVar22;
        lVar29 = (long)iVar26;
      }
      uVar15 = *(undefined4 *)(lVar43 + lVar24 * 4);
      uVar32 = (ulong)*(uint *)(lVar45 + lVar29 * 4);
      iVar22 = (int)&pcStack_b8;
      (*pcStack_b8)();
      *(undefined4 *)(lVar42 + uVar41 * 4) = uVar15;
      uVar25 = (ulong)auStack_100[0];
      if (0 < (int)auStack_100[0]) {
        do {
          iVar26 = *(int *)((long)&uStack_120 + uVar25 * 4 + 4) + 1;
          *(int *)((long)&uStack_120 + uVar25 * 4 + 4) = iVar26;
          if (iVar26 < (int)auStack_100[uVar25]) break;
          *(undefined4 *)((long)&uStack_120 + uVar25 * 4 + 4) = 0;
          bVar1 = 1 < uVar25;
          uVar25 = uVar25 - 1;
        } while (bVar1);
      }
      uVar41 = uVar41 + 1;
      puVar40 = apuStack_b0[0];
    } while (uVar41 != ((ulong)puVar16 & 0xffffffff));
  }
  ppuVar17 = apuStack_b0;
  (*(code *)*puVar40)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  (*(code *)*puVar40)(apuStack_b0);
  __Unwind_Resume();
  lVar42 = (long)iVar22;
  iVar26 = *(int *)((long)ppuVar17 + ((long)iVar22 + 1) * 4);
  uVar44 = (ulong)iVar26;
  ppuVar18 = ppuVar17;
  if (*(int *)ppuVar17 + -1 == iVar22) {
    iVar22 = *(int *)((long)ppuVar17 + (lVar42 + 0xb) * 4);
    iVar38 = (int)param_7;
    uVar39 = (uint)param_6;
    if (*(int *)((long)ppuVar17 + (lVar42 + 6) * 4) == 1 && iVar22 == 1) {
      if (iVar38 < 4) {
        if (iVar38 < 2) {
          if (iVar38 == 0) {
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar31 = param_6;
            pfVar34 = pfVar20;
            pfVar36 = pfVar21;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar31 = *pfVar34 * *pfVar36;
                uVar37 = uVar37 - 1;
                pfVar31 = pfVar31 + 1;
                pfVar34 = pfVar34 + 1;
                pfVar36 = pfVar36 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar31 = pfVar21 + uVar41;
              pfVar34 = pfVar20 + uVar41;
              uVar37 = uVar41;
              pfVar36 = param_6 + uVar41;
              do {
                fVar46 = *pfVar34;
                fVar47 = pfVar34[1];
                fVar48 = pfVar34[3];
                uVar12 = *(undefined8 *)(pfVar31 + 2);
                uVar11 = *(undefined8 *)pfVar31;
                pfVar36[2] = pfVar34[2] * (float)uVar12;
                pfVar36[3] = fVar48 * (float)((ulong)uVar12 >> 0x20);
                *pfVar36 = fVar46 * (float)uVar11;
                pfVar36[1] = fVar47 * (float)((ulong)uVar11 >> 0x20);
                uVar37 = uVar37 + 4;
                pfVar31 = pfVar31 + 4;
                pfVar34 = pfVar34 + 4;
                pfVar36 = pfVar36 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar45 = (long)uVar32 >> 2;
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
              pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
              pfVar31 = param_6 + uVar41 + lVar45 * 4;
              do {
                *pfVar31 = *pfVar20 * *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
                pfVar31 = pfVar31 + 1;
              } while (lVar42 != 0);
            }
          }
          else {
            if (iVar38 != 1) {
LAB_109c31c04:
              iVar22 = 0xf5a456b;
              func_0x000105688514(&UNK_10f5a456b);
              return (undefined8 **)(ulong)(uint)((int)uVar32 + iVar22);
            }
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar31 = param_6;
            pfVar34 = pfVar20;
            pfVar36 = pfVar21;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar31 = *pfVar34 + *pfVar36;
                uVar37 = uVar37 - 1;
                pfVar31 = pfVar31 + 1;
                pfVar34 = pfVar34 + 1;
                pfVar36 = pfVar36 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar31 = pfVar21 + uVar41;
              pfVar34 = pfVar20 + uVar41;
              uVar37 = uVar41;
              pfVar36 = param_6 + uVar41;
              do {
                fVar46 = *pfVar34;
                fVar47 = pfVar34[1];
                fVar48 = pfVar34[3];
                uVar12 = *(undefined8 *)(pfVar31 + 2);
                uVar11 = *(undefined8 *)pfVar31;
                pfVar36[2] = pfVar34[2] + (float)uVar12;
                pfVar36[3] = fVar48 + (float)((ulong)uVar12 >> 0x20);
                *pfVar36 = fVar46 + (float)uVar11;
                pfVar36[1] = fVar47 + (float)((ulong)uVar11 >> 0x20);
                uVar37 = uVar37 + 4;
                pfVar31 = pfVar31 + 4;
                pfVar34 = pfVar34 + 4;
                pfVar36 = pfVar36 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar45 = (long)uVar32 >> 2;
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
              pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
              pfVar31 = param_6 + uVar41 + lVar45 * 4;
              do {
                *pfVar31 = *pfVar20 + *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
                pfVar31 = pfVar31 + 1;
              } while (lVar42 != 0);
            }
          }
        }
        else if (iVar38 == 2) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar31 = param_6;
          pfVar34 = pfVar20;
          pfVar36 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar31 = *pfVar34 - *pfVar36;
              uVar37 = uVar37 - 1;
              pfVar31 = pfVar31 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar36 = pfVar36 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar31 = pfVar21 + uVar41;
            pfVar34 = pfVar20 + uVar41;
            uVar37 = uVar41;
            pfVar36 = param_6 + uVar41;
            do {
              fVar46 = *pfVar34;
              fVar47 = pfVar34[1];
              fVar48 = pfVar34[3];
              uVar12 = *(undefined8 *)(pfVar31 + 2);
              uVar11 = *(undefined8 *)pfVar31;
              pfVar36[2] = pfVar34[2] - (float)uVar12;
              pfVar36[3] = fVar48 - (float)((ulong)uVar12 >> 0x20);
              *pfVar36 = fVar46 - (float)uVar11;
              pfVar36[1] = fVar47 - (float)((ulong)uVar11 >> 0x20);
              uVar37 = uVar37 + 4;
              pfVar31 = pfVar31 + 4;
              pfVar34 = pfVar34 + 4;
              pfVar36 = pfVar36 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar45 = (long)uVar32 >> 2;
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
            pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
            pfVar31 = param_6 + uVar41 + lVar45 * 4;
            do {
              *pfVar31 = *pfVar20 - *pfVar21;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 3) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar31 = param_6;
          pfVar34 = pfVar20;
          pfVar36 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar31 = *pfVar34 / *pfVar36;
              uVar37 = uVar37 - 1;
              pfVar31 = pfVar31 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar36 = pfVar36 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar31 = pfVar21 + uVar41;
            pfVar34 = pfVar20 + uVar41;
            uVar37 = uVar41;
            pfVar36 = param_6 + uVar41;
            do {
              fVar46 = *pfVar34;
              fVar47 = pfVar34[1];
              fVar48 = pfVar34[3];
              uVar12 = *(undefined8 *)(pfVar31 + 2);
              uVar11 = *(undefined8 *)pfVar31;
              pfVar36[2] = pfVar34[2] / (float)uVar12;
              pfVar36[3] = fVar48 / (float)((ulong)uVar12 >> 0x20);
              *pfVar36 = fVar46 / (float)uVar11;
              pfVar36[1] = fVar47 / (float)((ulong)uVar11 >> 0x20);
              uVar37 = uVar37 + 4;
              pfVar31 = pfVar31 + 4;
              pfVar34 = pfVar34 + 4;
              pfVar36 = pfVar36 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar45 = (long)uVar32 >> 2;
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
            pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
            pfVar31 = param_6 + uVar41 + lVar45 * 4;
            do {
              *pfVar31 = *pfVar20 / *pfVar21;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 < 6) {
        if (iVar38 == 4) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar31 = param_6;
          pfVar34 = pfVar20;
          pfVar36 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar46 = *pfVar36;
              if (*pfVar36 <= *pfVar34) {
                fVar46 = *pfVar34;
              }
              *pfVar31 = fVar46;
              uVar37 = uVar37 - 1;
              pfVar31 = pfVar31 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar36 = pfVar36 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar33 = (undefined1 (*) [12])(pfVar21 + uVar41);
            pauVar35 = (undefined1 (*) [16])(pfVar20 + uVar41);
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              auVar50._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar33 + 8) >> 0x20);
              auVar50._0_12_ = *pauVar33;
              auVar50 = NEON_fmax(*pauVar35,auVar50,4);
              *(long *)(pfVar31 + 2) = auVar50._8_8_;
              *(long *)pfVar31 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar33 = (undefined1 (*) [12])(pauVar33[1] + 4);
              pauVar35 = pauVar35 + 1;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar45 = (long)uVar32 >> 2;
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
            pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
            pfVar31 = param_6 + uVar41 + lVar45 * 4;
            do {
              fVar46 = *pfVar21;
              if (*pfVar21 <= *pfVar20) {
                fVar46 = *pfVar20;
              }
              *pfVar31 = fVar46;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 5) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar31 = param_6;
          pfVar34 = pfVar20;
          pfVar36 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar46 = *pfVar36;
              if (*pfVar34 <= *pfVar36) {
                fVar46 = *pfVar34;
              }
              *pfVar31 = fVar46;
              uVar37 = uVar37 - 1;
              pfVar31 = pfVar31 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar36 = pfVar36 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar33 = (undefined1 (*) [12])(pfVar21 + uVar41);
            pauVar35 = (undefined1 (*) [16])(pfVar20 + uVar41);
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              auVar10._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar33 + 8) >> 0x20);
              auVar10._0_12_ = *pauVar33;
              auVar50 = NEON_fmin(*pauVar35,auVar10,4);
              *(long *)(pfVar31 + 2) = auVar50._8_8_;
              *(long *)pfVar31 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar33 = (undefined1 (*) [12])(pauVar33[1] + 4);
              pauVar35 = pauVar35 + 1;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar45 = (long)uVar32 >> 2;
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
            pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
            pfVar31 = param_6 + uVar41 + lVar45 * 4;
            do {
              fVar46 = *pfVar21;
              if (*pfVar20 <= *pfVar21) {
                fVar46 = *pfVar20;
              }
              *pfVar31 = fVar46;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 == 6) {
        uVar32 = (ulong)-(uVar39 >> 2) & 3;
        if ((long)uVar44 <= (long)uVar32) {
          uVar32 = uVar44;
        }
        uVar41 = uVar44;
        if (((ulong)param_6 & 3) == 0) {
          uVar41 = uVar32;
        }
        uVar25 = uVar44 - uVar41;
        uVar32 = uVar25 + 3;
        if ((long)uVar41 <= (long)uVar44) {
          uVar32 = uVar25;
        }
        pfVar31 = param_6;
        pfVar34 = pfVar20;
        pfVar36 = pfVar21;
        uVar37 = uVar41;
        if (0 < (long)uVar41) {
          do {
            *pfVar31 = (*pfVar34 - *pfVar36) * (*pfVar34 - *pfVar36);
            uVar37 = uVar37 - 1;
            pfVar31 = pfVar31 + 1;
            pfVar34 = pfVar34 + 1;
            pfVar36 = pfVar36 + 1;
          } while (uVar37 != 0);
        }
        lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
        if (3 < (long)uVar25) {
          pfVar31 = pfVar21 + uVar41;
          pfVar34 = pfVar20 + uVar41;
          uVar37 = uVar41;
          pfVar36 = param_6 + uVar41;
          do {
            fVar46 = *pfVar34 - (float)*(undefined8 *)pfVar31;
            fVar47 = pfVar34[1] - (float)((ulong)*(undefined8 *)pfVar31 >> 0x20);
            fVar48 = pfVar34[2] - (float)*(undefined8 *)(pfVar31 + 2);
            fVar49 = pfVar34[3] - (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20);
            pfVar36[2] = fVar48 * fVar48;
            pfVar36[3] = fVar49 * fVar49;
            *pfVar36 = fVar46 * fVar46;
            pfVar36[1] = fVar47 * fVar47;
            uVar37 = uVar37 + 4;
            pfVar31 = pfVar31 + 4;
            pfVar34 = pfVar34 + 4;
            pfVar36 = pfVar36 + 4;
          } while ((long)uVar37 < lVar42);
        }
        if (lVar42 < (long)uVar44) {
          lVar45 = (long)uVar32 >> 2;
          lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
          pfVar21 = pfVar21 + uVar41 + lVar45 * 4;
          pfVar20 = pfVar20 + uVar41 + lVar45 * 4;
          pfVar31 = param_6 + uVar41 + lVar45 * 4;
          do {
            *pfVar31 = (*pfVar20 - *pfVar21) * (*pfVar20 - *pfVar21);
            lVar42 = lVar42 + -1;
            pfVar21 = pfVar21 + 1;
            pfVar20 = pfVar20 + 1;
            pfVar31 = pfVar31 + 1;
          } while (lVar42 != 0);
        }
      }
      else {
        if (iVar38 != 7) goto LAB_109c31c04;
        if (0 < iVar26) {
          do {
            *param_6 = (float)(int)(*pfVar20 / *pfVar21);
            uVar44 = uVar44 - 1;
            param_6 = param_6 + 1;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (uVar44 != 0);
        }
      }
    }
    else if (iVar22 == 0) {
      fVar46 = *pfVar21;
      if (iVar38 < 4) {
        if (iVar38 < 2) {
          if (iVar38 == 0) {
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar21 = param_6;
            pfVar31 = pfVar20;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar21 = fVar46 * *pfVar31;
                uVar37 = uVar37 - 1;
                pfVar21 = pfVar21 + 1;
                pfVar31 = pfVar31 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar21 = pfVar20 + uVar41;
              uVar37 = uVar41;
              pfVar31 = param_6 + uVar41;
              do {
                uVar11 = *(undefined8 *)pfVar21;
                *(ulong *)(pfVar31 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar46,
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar46);
                *(ulong *)pfVar31 =
                     CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar46,(float)uVar11 * fVar46);
                uVar37 = uVar37 + 4;
                pfVar21 = pfVar21 + 4;
                pfVar31 = pfVar31 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
              pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
              do {
                *pfVar20 = fVar46 * *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
              } while (lVar42 != 0);
            }
          }
          else {
            if (iVar38 != 1) goto LAB_109c31c04;
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar21 = param_6;
            pfVar31 = pfVar20;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar21 = fVar46 + *pfVar31;
                uVar37 = uVar37 - 1;
                pfVar21 = pfVar21 + 1;
                pfVar31 = pfVar31 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar21 = pfVar20 + uVar41;
              uVar37 = uVar41;
              pfVar31 = param_6 + uVar41;
              do {
                fVar47 = *pfVar21;
                fVar48 = pfVar21[1];
                fVar49 = pfVar21[3];
                pfVar31[2] = fVar46 + pfVar21[2];
                pfVar31[3] = fVar46 + fVar49;
                *pfVar31 = fVar46 + fVar47;
                pfVar31[1] = fVar46 + fVar48;
                uVar37 = uVar37 + 4;
                pfVar21 = pfVar21 + 4;
                pfVar31 = pfVar31 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
              pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
              do {
                *pfVar20 = fVar46 + *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
              } while (lVar42 != 0);
            }
          }
        }
        else if (iVar38 == 2) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar21 = param_6;
          pfVar31 = pfVar20;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar21 = *pfVar31 - fVar46;
              uVar37 = uVar37 - 1;
              pfVar21 = pfVar21 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar21 = pfVar20 + uVar41;
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              fVar47 = *pfVar21;
              fVar48 = pfVar21[1];
              fVar49 = pfVar21[3];
              pfVar31[2] = pfVar21[2] - fVar46;
              pfVar31[3] = fVar49 - fVar46;
              *pfVar31 = fVar47 - fVar46;
              pfVar31[1] = fVar48 - fVar46;
              uVar37 = uVar37 + 4;
              pfVar21 = pfVar21 + 4;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              *pfVar20 = *pfVar21 - fVar46;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 3) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar21 = param_6;
          pfVar31 = pfVar20;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar21 = *pfVar31 / fVar46;
              uVar37 = uVar37 - 1;
              pfVar21 = pfVar21 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar21 = pfVar20 + uVar41;
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              fVar47 = *pfVar21;
              fVar48 = pfVar21[1];
              fVar49 = pfVar21[3];
              pfVar31[2] = pfVar21[2] / fVar46;
              pfVar31[3] = fVar49 / fVar46;
              *pfVar31 = fVar47 / fVar46;
              pfVar31[1] = fVar48 / fVar46;
              uVar37 = uVar37 + 4;
              pfVar21 = pfVar21 + 4;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              *pfVar20 = *pfVar21 / fVar46;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 < 6) {
        if (iVar38 == 4) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar21 = param_6;
          pfVar31 = pfVar20;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar47 = fVar46;
              if (fVar46 <= *pfVar31) {
                fVar47 = *pfVar31;
              }
              *pfVar21 = fVar47;
              uVar37 = uVar37 - 1;
              pfVar21 = pfVar21 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar35 = (undefined1 (*) [16])(pfVar20 + uVar41);
            uVar37 = uVar41;
            pfVar21 = param_6 + uVar41;
            do {
              auVar9._4_4_ = fVar46;
              auVar9._0_4_ = fVar46;
              auVar9._8_4_ = fVar46;
              auVar9._12_4_ = fVar46;
              auVar50 = NEON_fmax(*pauVar35,auVar9,4);
              *(long *)(pfVar21 + 2) = auVar50._8_8_;
              *(long *)pfVar21 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar35 = pauVar35 + 1;
              pfVar21 = pfVar21 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              fVar47 = fVar46;
              if (fVar46 <= *pfVar21) {
                fVar47 = *pfVar21;
              }
              *pfVar20 = fVar47;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 5) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar21 = param_6;
          pfVar31 = pfVar20;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar47 = fVar46;
              if (*pfVar31 <= fVar46) {
                fVar47 = *pfVar31;
              }
              *pfVar21 = fVar47;
              uVar37 = uVar37 - 1;
              pfVar21 = pfVar21 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar35 = (undefined1 (*) [16])(pfVar20 + uVar41);
            uVar37 = uVar41;
            pfVar21 = param_6 + uVar41;
            do {
              auVar8._4_4_ = fVar46;
              auVar8._0_4_ = fVar46;
              auVar8._8_4_ = fVar46;
              auVar8._12_4_ = fVar46;
              auVar50 = NEON_fmin(*pauVar35,auVar8,4);
              *(long *)(pfVar21 + 2) = auVar50._8_8_;
              *(long *)pfVar21 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar35 = pauVar35 + 1;
              pfVar21 = pfVar21 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              fVar47 = fVar46;
              if (*pfVar21 <= fVar46) {
                fVar47 = *pfVar21;
              }
              *pfVar20 = fVar47;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 == 6) {
        uVar32 = (ulong)-(uVar39 >> 2) & 3;
        if ((long)uVar44 <= (long)uVar32) {
          uVar32 = uVar44;
        }
        uVar41 = uVar44;
        if (((ulong)param_6 & 3) == 0) {
          uVar41 = uVar32;
        }
        uVar25 = uVar44 - uVar41;
        uVar32 = uVar25 + 3;
        if ((long)uVar41 <= (long)uVar44) {
          uVar32 = uVar25;
        }
        pfVar21 = param_6;
        pfVar31 = pfVar20;
        uVar37 = uVar41;
        if (0 < (long)uVar41) {
          do {
            *pfVar21 = (*pfVar31 - fVar46) * (*pfVar31 - fVar46);
            uVar37 = uVar37 - 1;
            pfVar21 = pfVar21 + 1;
            pfVar31 = pfVar31 + 1;
          } while (uVar37 != 0);
        }
        lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
        if (3 < (long)uVar25) {
          pfVar21 = pfVar20 + uVar41;
          uVar37 = uVar41;
          pfVar31 = param_6 + uVar41;
          do {
            fVar47 = *pfVar21;
            fVar48 = pfVar21[1];
            fVar49 = pfVar21[3];
            pfVar31[2] = (pfVar21[2] - fVar46) * (pfVar21[2] - fVar46);
            pfVar31[3] = (fVar49 - fVar46) * (fVar49 - fVar46);
            *pfVar31 = (fVar47 - fVar46) * (fVar47 - fVar46);
            pfVar31[1] = (fVar48 - fVar46) * (fVar48 - fVar46);
            uVar37 = uVar37 + 4;
            pfVar21 = pfVar21 + 4;
            pfVar31 = pfVar31 + 4;
          } while ((long)uVar37 < lVar42);
        }
        if (lVar42 < (long)uVar44) {
          lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
          pfVar21 = pfVar20 + uVar41 + ((long)uVar32 >> 2) * 4;
          pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
          do {
            *pfVar20 = (*pfVar21 - fVar46) * (*pfVar21 - fVar46);
            lVar42 = lVar42 + -1;
            pfVar21 = pfVar21 + 1;
            pfVar20 = pfVar20 + 1;
          } while (lVar42 != 0);
        }
      }
      else {
        if (iVar38 != 7) goto LAB_109c31c04;
        if (0 < iVar26) {
          do {
            *param_6 = (float)(int)(*pfVar20 / fVar46);
            uVar44 = uVar44 - 1;
            param_6 = param_6 + 1;
            pfVar20 = pfVar20 + 1;
          } while (uVar44 != 0);
        }
      }
    }
    else {
      fVar46 = *pfVar20;
      if (iVar38 < 4) {
        if (iVar38 < 2) {
          if (iVar38 == 0) {
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar20 = param_6;
            pfVar31 = pfVar21;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar20 = fVar46 * *pfVar31;
                uVar37 = uVar37 - 1;
                pfVar20 = pfVar20 + 1;
                pfVar31 = pfVar31 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar20 = pfVar21 + uVar41;
              uVar37 = uVar41;
              pfVar31 = param_6 + uVar41;
              do {
                uVar11 = *(undefined8 *)pfVar20;
                *(ulong *)(pfVar31 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) * fVar46,
                              (float)*(undefined8 *)(pfVar20 + 2) * fVar46);
                *(ulong *)pfVar31 =
                     CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar46,(float)uVar11 * fVar46);
                uVar37 = uVar37 + 4;
                pfVar20 = pfVar20 + 4;
                pfVar31 = pfVar31 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
              pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
              do {
                *pfVar20 = fVar46 * *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
              } while (lVar42 != 0);
            }
          }
          else {
            if (iVar38 != 1) goto LAB_109c31c04;
            uVar32 = (ulong)-(uVar39 >> 2) & 3;
            if ((long)uVar44 <= (long)uVar32) {
              uVar32 = uVar44;
            }
            uVar41 = uVar44;
            if (((ulong)param_6 & 3) == 0) {
              uVar41 = uVar32;
            }
            uVar25 = uVar44 - uVar41;
            uVar32 = uVar25 + 3;
            if ((long)uVar41 <= (long)uVar44) {
              uVar32 = uVar25;
            }
            pfVar20 = param_6;
            pfVar31 = pfVar21;
            uVar37 = uVar41;
            if (0 < (long)uVar41) {
              do {
                *pfVar20 = fVar46 + *pfVar31;
                uVar37 = uVar37 - 1;
                pfVar20 = pfVar20 + 1;
                pfVar31 = pfVar31 + 1;
              } while (uVar37 != 0);
            }
            lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
            if (3 < (long)uVar25) {
              pfVar20 = pfVar21 + uVar41;
              uVar37 = uVar41;
              pfVar31 = param_6 + uVar41;
              do {
                fVar47 = *pfVar20;
                fVar48 = pfVar20[1];
                fVar49 = pfVar20[3];
                pfVar31[2] = fVar46 + pfVar20[2];
                pfVar31[3] = fVar46 + fVar49;
                *pfVar31 = fVar46 + fVar47;
                pfVar31[1] = fVar46 + fVar48;
                uVar37 = uVar37 + 4;
                pfVar20 = pfVar20 + 4;
                pfVar31 = pfVar31 + 4;
              } while ((long)uVar37 < lVar42);
            }
            if (lVar42 < (long)uVar44) {
              lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
              pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
              pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
              do {
                *pfVar20 = fVar46 + *pfVar21;
                lVar42 = lVar42 + -1;
                pfVar21 = pfVar21 + 1;
                pfVar20 = pfVar20 + 1;
              } while (lVar42 != 0);
            }
          }
        }
        else if (iVar38 == 2) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar20 = param_6;
          pfVar31 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar20 = fVar46 - *pfVar31;
              uVar37 = uVar37 - 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar20 = pfVar21 + uVar41;
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              fVar47 = *pfVar20;
              fVar48 = pfVar20[1];
              fVar49 = pfVar20[3];
              pfVar31[2] = fVar46 - pfVar20[2];
              pfVar31[3] = fVar46 - fVar49;
              *pfVar31 = fVar46 - fVar47;
              pfVar31[1] = fVar46 - fVar48;
              uVar37 = uVar37 + 4;
              pfVar20 = pfVar20 + 4;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              *pfVar20 = fVar46 - *pfVar21;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 3) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar20 = param_6;
          pfVar31 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              *pfVar20 = fVar46 / *pfVar31;
              uVar37 = uVar37 - 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pfVar20 = pfVar21 + uVar41;
            uVar37 = uVar41;
            pfVar31 = param_6 + uVar41;
            do {
              fVar47 = *pfVar20;
              fVar48 = pfVar20[1];
              fVar49 = pfVar20[3];
              pfVar31[2] = fVar46 / pfVar20[2];
              pfVar31[3] = fVar46 / fVar49;
              *pfVar31 = fVar46 / fVar47;
              pfVar31[1] = fVar46 / fVar48;
              uVar37 = uVar37 + 4;
              pfVar20 = pfVar20 + 4;
              pfVar31 = pfVar31 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              *pfVar20 = fVar46 / *pfVar21;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 < 6) {
        if (iVar38 == 4) {
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar20 = param_6;
          pfVar31 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar47 = fVar46;
              if (fVar46 <= *pfVar31) {
                fVar47 = *pfVar31;
              }
              *pfVar20 = fVar47;
              uVar37 = uVar37 - 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar35 = (undefined1 (*) [16])(pfVar21 + uVar41);
            uVar37 = uVar41;
            pfVar20 = param_6 + uVar41;
            do {
              auVar7._4_4_ = fVar46;
              auVar7._0_4_ = fVar46;
              auVar7._8_4_ = fVar46;
              auVar7._12_4_ = fVar46;
              auVar50 = NEON_fmax(*pauVar35,auVar7,4);
              *(long *)(pfVar20 + 2) = auVar50._8_8_;
              *(long *)pfVar20 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar35 = pauVar35 + 1;
              pfVar20 = pfVar20 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              fVar47 = fVar46;
              if (fVar46 <= *pfVar21) {
                fVar47 = *pfVar21;
              }
              *pfVar20 = fVar47;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
        else {
          if (iVar38 != 5) goto LAB_109c31c04;
          uVar32 = (ulong)-(uVar39 >> 2) & 3;
          if ((long)uVar44 <= (long)uVar32) {
            uVar32 = uVar44;
          }
          uVar41 = uVar44;
          if (((ulong)param_6 & 3) == 0) {
            uVar41 = uVar32;
          }
          uVar25 = uVar44 - uVar41;
          uVar32 = uVar25 + 3;
          if ((long)uVar41 <= (long)uVar44) {
            uVar32 = uVar25;
          }
          pfVar20 = param_6;
          pfVar31 = pfVar21;
          uVar37 = uVar41;
          if (0 < (long)uVar41) {
            do {
              fVar47 = fVar46;
              if (*pfVar31 <= fVar46) {
                fVar47 = *pfVar31;
              }
              *pfVar20 = fVar47;
              uVar37 = uVar37 - 1;
              pfVar20 = pfVar20 + 1;
              pfVar31 = pfVar31 + 1;
            } while (uVar37 != 0);
          }
          lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
          if (3 < (long)uVar25) {
            pauVar35 = (undefined1 (*) [16])(pfVar21 + uVar41);
            uVar37 = uVar41;
            pfVar20 = param_6 + uVar41;
            do {
              auVar6._4_4_ = fVar46;
              auVar6._0_4_ = fVar46;
              auVar6._8_4_ = fVar46;
              auVar6._12_4_ = fVar46;
              auVar50 = NEON_fmin(*pauVar35,auVar6,4);
              *(long *)(pfVar20 + 2) = auVar50._8_8_;
              *(long *)pfVar20 = auVar50._0_8_;
              uVar37 = uVar37 + 4;
              pauVar35 = pauVar35 + 1;
              pfVar20 = pfVar20 + 4;
            } while ((long)uVar37 < lVar42);
          }
          if (lVar42 < (long)uVar44) {
            lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
            pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
            pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
            do {
              fVar47 = fVar46;
              if (*pfVar21 <= fVar46) {
                fVar47 = *pfVar21;
              }
              *pfVar20 = fVar47;
              lVar42 = lVar42 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else if (iVar38 == 6) {
        uVar32 = (ulong)-(uVar39 >> 2) & 3;
        if ((long)uVar44 <= (long)uVar32) {
          uVar32 = uVar44;
        }
        uVar41 = uVar44;
        if (((ulong)param_6 & 3) == 0) {
          uVar41 = uVar32;
        }
        uVar25 = uVar44 - uVar41;
        uVar32 = uVar25 + 3;
        if ((long)uVar41 <= (long)uVar44) {
          uVar32 = uVar25;
        }
        pfVar20 = param_6;
        pfVar31 = pfVar21;
        uVar37 = uVar41;
        if (0 < (long)uVar41) {
          do {
            *pfVar20 = (*pfVar31 - fVar46) * (*pfVar31 - fVar46);
            uVar37 = uVar37 - 1;
            pfVar20 = pfVar20 + 1;
            pfVar31 = pfVar31 + 1;
          } while (uVar37 != 0);
        }
        lVar42 = (uVar32 & 0xfffffffffffffffc) + uVar41;
        if (3 < (long)uVar25) {
          pfVar20 = pfVar21 + uVar41;
          uVar37 = uVar41;
          pfVar31 = param_6 + uVar41;
          do {
            fVar47 = *pfVar20;
            fVar48 = pfVar20[1];
            fVar49 = pfVar20[3];
            pfVar31[2] = (pfVar20[2] - fVar46) * (pfVar20[2] - fVar46);
            pfVar31[3] = (fVar49 - fVar46) * (fVar49 - fVar46);
            *pfVar31 = (fVar47 - fVar46) * (fVar47 - fVar46);
            pfVar31[1] = (fVar48 - fVar46) * (fVar48 - fVar46);
            uVar37 = uVar37 + 4;
            pfVar20 = pfVar20 + 4;
            pfVar31 = pfVar31 + 4;
          } while ((long)uVar37 < lVar42);
        }
        if (lVar42 < (long)uVar44) {
          lVar42 = uVar25 - (uVar32 & 0xfffffffffffffffc);
          pfVar21 = pfVar21 + uVar41 + ((long)uVar32 >> 2) * 4;
          pfVar20 = param_6 + uVar41 + ((long)uVar32 >> 2) * 4;
          do {
            *pfVar20 = (*pfVar21 - fVar46) * (*pfVar21 - fVar46);
            lVar42 = lVar42 + -1;
            pfVar21 = pfVar21 + 1;
            pfVar20 = pfVar20 + 1;
          } while (lVar42 != 0);
        }
      }
      else {
        if (iVar38 != 7) goto LAB_109c31c04;
        if (0 < iVar26) {
          do {
            *param_6 = (float)(int)(fVar46 / *pfVar21);
            uVar44 = uVar44 - 1;
            param_6 = param_6 + 1;
            pfVar21 = pfVar21 + 1;
          } while (uVar44 != 0);
        }
      }
    }
  }
  else if (0 < iVar26) {
    iVar26 = 0;
    do {
      ppuVar18 = ppuVar17;
      FUN_109c30950(ppuVar17,uVar32,iVar22 + 1,pfVar20,pfVar21,param_6,param_7);
      pfVar20 = pfVar20 + *(int *)((long)ppuVar17 + (lVar42 + 6) * 4);
      pfVar21 = pfVar21 + *(int *)((long)ppuVar17 + (lVar42 + 0xb) * 4);
      param_6 = param_6 + *(int *)(uVar32 + lVar42 * 4);
      iVar26 = iVar26 + 1;
    } while (iVar26 < *(int *)((long)ppuVar17 + (lVar42 + 1) * 4));
  }
  return ppuVar18;
}



/* Entry: 109c30950; end: 109c31c0f;  */

int * FUN_109c30950(int *param_1,long param_2,int param_3,float *param_4,float *param_5,
                   float *param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  undefined1 (*pauVar17) [12];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  
  lVar22 = (long)param_3;
  iVar23 = param_1[(long)param_3 + 1];
  uVar11 = (ulong)iVar23;
  piVar10 = param_1;
  if (*param_1 + -1 == param_3) {
    iVar20 = (int)param_7;
    uVar21 = (uint)param_6;
    if (param_1[lVar22 + 6] == 1 && param_1[lVar22 + 0xb] == 1) {
      if (iVar20 < 4) {
        if (iVar20 < 2) {
          if (iVar20 == 0) {
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_4;
            pfVar16 = param_5;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = *pfVar14 * *pfVar16;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_5 + uVar1;
              pfVar14 = param_4 + uVar1;
              uVar19 = uVar1;
              pfVar16 = param_6 + uVar1;
              do {
                fVar24 = *pfVar14;
                fVar25 = pfVar14[1];
                fVar26 = pfVar14[3];
                uVar9 = *(undefined8 *)(pfVar13 + 2);
                uVar8 = *(undefined8 *)pfVar13;
                pfVar16[2] = pfVar14[2] * (float)uVar9;
                pfVar16[3] = fVar26 * (float)((ulong)uVar9 >> 0x20);
                *pfVar16 = fVar24 * (float)uVar8;
                pfVar16[1] = fVar25 * (float)((ulong)uVar8 >> 0x20);
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
                pfVar16 = pfVar16 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar15 = (long)uVar12 >> 2;
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_5 + uVar1 + lVar15 * 4;
              pfVar14 = param_4 + uVar1 + lVar15 * 4;
              pfVar16 = param_6 + uVar1 + lVar15 * 4;
              do {
                *pfVar16 = *pfVar14 * *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar22 != 0);
            }
          }
          else {
            if (iVar20 != 1) {
LAB_109c31c04:
              iVar23 = 0xf5a456b;
              func_0x000105688514(&UNK_10f5a456b);
              return (int *)(ulong)(uint)((int)param_2 + iVar23);
            }
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_4;
            pfVar16 = param_5;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = *pfVar14 + *pfVar16;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_5 + uVar1;
              pfVar14 = param_4 + uVar1;
              uVar19 = uVar1;
              pfVar16 = param_6 + uVar1;
              do {
                fVar24 = *pfVar14;
                fVar25 = pfVar14[1];
                fVar26 = pfVar14[3];
                uVar9 = *(undefined8 *)(pfVar13 + 2);
                uVar8 = *(undefined8 *)pfVar13;
                pfVar16[2] = pfVar14[2] + (float)uVar9;
                pfVar16[3] = fVar26 + (float)((ulong)uVar9 >> 0x20);
                *pfVar16 = fVar24 + (float)uVar8;
                pfVar16[1] = fVar25 + (float)((ulong)uVar8 >> 0x20);
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
                pfVar16 = pfVar16 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar15 = (long)uVar12 >> 2;
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_5 + uVar1 + lVar15 * 4;
              pfVar14 = param_4 + uVar1 + lVar15 * 4;
              pfVar16 = param_6 + uVar1 + lVar15 * 4;
              do {
                *pfVar16 = *pfVar14 + *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar22 != 0);
            }
          }
        }
        else if (iVar20 == 2) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          pfVar16 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = *pfVar14 - *pfVar16;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_5 + uVar1;
            pfVar14 = param_4 + uVar1;
            uVar19 = uVar1;
            pfVar16 = param_6 + uVar1;
            do {
              fVar24 = *pfVar14;
              fVar25 = pfVar14[1];
              fVar26 = pfVar14[3];
              uVar9 = *(undefined8 *)(pfVar13 + 2);
              uVar8 = *(undefined8 *)pfVar13;
              pfVar16[2] = pfVar14[2] - (float)uVar9;
              pfVar16[3] = fVar26 - (float)((ulong)uVar9 >> 0x20);
              *pfVar16 = fVar24 - (float)uVar8;
              pfVar16[1] = fVar25 - (float)((ulong)uVar8 >> 0x20);
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
              pfVar16 = pfVar16 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar15 = (long)uVar12 >> 2;
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + lVar15 * 4;
            pfVar14 = param_4 + uVar1 + lVar15 * 4;
            pfVar16 = param_6 + uVar1 + lVar15 * 4;
            do {
              *pfVar16 = *pfVar14 - *pfVar13;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 3) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          pfVar16 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = *pfVar14 / *pfVar16;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_5 + uVar1;
            pfVar14 = param_4 + uVar1;
            uVar19 = uVar1;
            pfVar16 = param_6 + uVar1;
            do {
              fVar24 = *pfVar14;
              fVar25 = pfVar14[1];
              fVar26 = pfVar14[3];
              uVar9 = *(undefined8 *)(pfVar13 + 2);
              uVar8 = *(undefined8 *)pfVar13;
              pfVar16[2] = pfVar14[2] / (float)uVar9;
              pfVar16[3] = fVar26 / (float)((ulong)uVar9 >> 0x20);
              *pfVar16 = fVar24 / (float)uVar8;
              pfVar16[1] = fVar25 / (float)((ulong)uVar8 >> 0x20);
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
              pfVar16 = pfVar16 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar15 = (long)uVar12 >> 2;
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + lVar15 * 4;
            pfVar14 = param_4 + uVar1 + lVar15 * 4;
            pfVar16 = param_6 + uVar1 + lVar15 * 4;
            do {
              *pfVar16 = *pfVar14 / *pfVar13;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 < 6) {
        if (iVar20 == 4) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          pfVar16 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar24 = *pfVar16;
              if (*pfVar16 <= *pfVar14) {
                fVar24 = *pfVar14;
              }
              *pfVar13 = fVar24;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar17 = (undefined1 (*) [12])(param_5 + uVar1);
            pauVar18 = (undefined1 (*) [16])(param_4 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar28._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
              auVar28._0_12_ = *pauVar17;
              auVar28 = NEON_fmax(*pauVar18,auVar28,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar17 = (undefined1 (*) [12])(pauVar17[1] + 4);
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar15 = (long)uVar12 >> 2;
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + lVar15 * 4;
            pfVar14 = param_4 + uVar1 + lVar15 * 4;
            pfVar16 = param_6 + uVar1 + lVar15 * 4;
            do {
              fVar24 = *pfVar13;
              if (*pfVar13 <= *pfVar14) {
                fVar24 = *pfVar14;
              }
              *pfVar16 = fVar24;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 5) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          pfVar16 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar24 = *pfVar16;
              if (*pfVar14 <= *pfVar16) {
                fVar24 = *pfVar14;
              }
              *pfVar13 = fVar24;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar17 = (undefined1 (*) [12])(param_5 + uVar1);
            pauVar18 = (undefined1 (*) [16])(param_4 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar7._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
              auVar7._0_12_ = *pauVar17;
              auVar28 = NEON_fmin(*pauVar18,auVar7,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar17 = (undefined1 (*) [12])(pauVar17[1] + 4);
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar15 = (long)uVar12 >> 2;
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + lVar15 * 4;
            pfVar14 = param_4 + uVar1 + lVar15 * 4;
            pfVar16 = param_6 + uVar1 + lVar15 * 4;
            do {
              fVar24 = *pfVar13;
              if (*pfVar14 <= *pfVar13) {
                fVar24 = *pfVar14;
              }
              *pfVar16 = fVar24;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 == 6) {
        uVar12 = (ulong)-(uVar21 >> 2) & 3;
        if ((long)uVar11 <= (long)uVar12) {
          uVar12 = uVar11;
        }
        uVar1 = uVar11;
        if (((ulong)param_6 & 3) == 0) {
          uVar1 = uVar12;
        }
        uVar2 = uVar11 - uVar1;
        uVar12 = uVar2 + 3;
        if ((long)uVar1 <= (long)uVar11) {
          uVar12 = uVar2;
        }
        pfVar13 = param_6;
        pfVar14 = param_4;
        pfVar16 = param_5;
        uVar19 = uVar1;
        if (0 < (long)uVar1) {
          do {
            *pfVar13 = (*pfVar14 - *pfVar16) * (*pfVar14 - *pfVar16);
            uVar19 = uVar19 - 1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (uVar19 != 0);
        }
        lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
        if (3 < (long)uVar2) {
          pfVar13 = param_5 + uVar1;
          pfVar14 = param_4 + uVar1;
          uVar19 = uVar1;
          pfVar16 = param_6 + uVar1;
          do {
            fVar24 = *pfVar14 - (float)*(undefined8 *)pfVar13;
            fVar25 = pfVar14[1] - (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
            fVar26 = pfVar14[2] - (float)*(undefined8 *)(pfVar13 + 2);
            fVar27 = pfVar14[3] - (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20);
            pfVar16[2] = fVar26 * fVar26;
            pfVar16[3] = fVar27 * fVar27;
            *pfVar16 = fVar24 * fVar24;
            pfVar16[1] = fVar25 * fVar25;
            uVar19 = uVar19 + 4;
            pfVar13 = pfVar13 + 4;
            pfVar14 = pfVar14 + 4;
            pfVar16 = pfVar16 + 4;
          } while ((long)uVar19 < lVar22);
        }
        if (lVar22 < (long)uVar11) {
          lVar15 = (long)uVar12 >> 2;
          lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
          pfVar13 = param_5 + uVar1 + lVar15 * 4;
          pfVar14 = param_4 + uVar1 + lVar15 * 4;
          pfVar16 = param_6 + uVar1 + lVar15 * 4;
          do {
            *pfVar16 = (*pfVar14 - *pfVar13) * (*pfVar14 - *pfVar13);
            lVar22 = lVar22 + -1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar22 != 0);
        }
      }
      else {
        if (iVar20 != 7) goto LAB_109c31c04;
        if (0 < iVar23) {
          do {
            *param_6 = (float)(int)(*param_4 / *param_5);
            uVar11 = uVar11 - 1;
            param_6 = param_6 + 1;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
          } while (uVar11 != 0);
        }
      }
    }
    else if (param_1[lVar22 + 0xb] == 0) {
      fVar24 = *param_5;
      if (iVar20 < 4) {
        if (iVar20 < 2) {
          if (iVar20 == 0) {
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_4;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = fVar24 * *pfVar14;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_4 + uVar1;
              uVar19 = uVar1;
              pfVar14 = param_6 + uVar1;
              do {
                uVar8 = *(undefined8 *)pfVar13;
                *(ulong *)(pfVar14 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar24,
                              (float)*(undefined8 *)(pfVar13 + 2) * fVar24);
                *(ulong *)pfVar14 =
                     CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar24,(float)uVar8 * fVar24);
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
              pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
              do {
                *pfVar14 = fVar24 * *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (lVar22 != 0);
            }
          }
          else {
            if (iVar20 != 1) goto LAB_109c31c04;
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_4;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = fVar24 + *pfVar14;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_4 + uVar1;
              uVar19 = uVar1;
              pfVar14 = param_6 + uVar1;
              do {
                fVar25 = *pfVar13;
                fVar26 = pfVar13[1];
                fVar27 = pfVar13[3];
                pfVar14[2] = fVar24 + pfVar13[2];
                pfVar14[3] = fVar24 + fVar27;
                *pfVar14 = fVar24 + fVar25;
                pfVar14[1] = fVar24 + fVar26;
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
              pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
              do {
                *pfVar14 = fVar24 + *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (lVar22 != 0);
            }
          }
        }
        else if (iVar20 == 2) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = *pfVar14 - fVar24;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_4 + uVar1;
            uVar19 = uVar1;
            pfVar14 = param_6 + uVar1;
            do {
              fVar25 = *pfVar13;
              fVar26 = pfVar13[1];
              fVar27 = pfVar13[3];
              pfVar14[2] = pfVar13[2] - fVar24;
              pfVar14[3] = fVar27 - fVar24;
              *pfVar14 = fVar25 - fVar24;
              pfVar14[1] = fVar26 - fVar24;
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              *pfVar14 = *pfVar13 - fVar24;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 3) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = *pfVar14 / fVar24;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_4 + uVar1;
            uVar19 = uVar1;
            pfVar14 = param_6 + uVar1;
            do {
              fVar25 = *pfVar13;
              fVar26 = pfVar13[1];
              fVar27 = pfVar13[3];
              pfVar14[2] = pfVar13[2] / fVar24;
              pfVar14[3] = fVar27 / fVar24;
              *pfVar14 = fVar25 / fVar24;
              pfVar14[1] = fVar26 / fVar24;
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              *pfVar14 = *pfVar13 / fVar24;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 < 6) {
        if (iVar20 == 4) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar25 = fVar24;
              if (fVar24 <= *pfVar14) {
                fVar25 = *pfVar14;
              }
              *pfVar13 = fVar25;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar18 = (undefined1 (*) [16])(param_4 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar6._4_4_ = fVar24;
              auVar6._0_4_ = fVar24;
              auVar6._8_4_ = fVar24;
              auVar6._12_4_ = fVar24;
              auVar28 = NEON_fmax(*pauVar18,auVar6,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              fVar25 = fVar24;
              if (fVar24 <= *pfVar13) {
                fVar25 = *pfVar13;
              }
              *pfVar14 = fVar25;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 5) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_4;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar25 = fVar24;
              if (*pfVar14 <= fVar24) {
                fVar25 = *pfVar14;
              }
              *pfVar13 = fVar25;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar18 = (undefined1 (*) [16])(param_4 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar5._4_4_ = fVar24;
              auVar5._0_4_ = fVar24;
              auVar5._8_4_ = fVar24;
              auVar5._12_4_ = fVar24;
              auVar28 = NEON_fmin(*pauVar18,auVar5,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              fVar25 = fVar24;
              if (*pfVar13 <= fVar24) {
                fVar25 = *pfVar13;
              }
              *pfVar14 = fVar25;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 == 6) {
        uVar12 = (ulong)-(uVar21 >> 2) & 3;
        if ((long)uVar11 <= (long)uVar12) {
          uVar12 = uVar11;
        }
        uVar1 = uVar11;
        if (((ulong)param_6 & 3) == 0) {
          uVar1 = uVar12;
        }
        uVar2 = uVar11 - uVar1;
        uVar12 = uVar2 + 3;
        if ((long)uVar1 <= (long)uVar11) {
          uVar12 = uVar2;
        }
        pfVar13 = param_6;
        pfVar14 = param_4;
        uVar19 = uVar1;
        if (0 < (long)uVar1) {
          do {
            *pfVar13 = (*pfVar14 - fVar24) * (*pfVar14 - fVar24);
            uVar19 = uVar19 - 1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
          } while (uVar19 != 0);
        }
        lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
        if (3 < (long)uVar2) {
          pfVar13 = param_4 + uVar1;
          uVar19 = uVar1;
          pfVar14 = param_6 + uVar1;
          do {
            fVar25 = *pfVar13;
            fVar26 = pfVar13[1];
            fVar27 = pfVar13[3];
            pfVar14[2] = (pfVar13[2] - fVar24) * (pfVar13[2] - fVar24);
            pfVar14[3] = (fVar27 - fVar24) * (fVar27 - fVar24);
            *pfVar14 = (fVar25 - fVar24) * (fVar25 - fVar24);
            pfVar14[1] = (fVar26 - fVar24) * (fVar26 - fVar24);
            uVar19 = uVar19 + 4;
            pfVar13 = pfVar13 + 4;
            pfVar14 = pfVar14 + 4;
          } while ((long)uVar19 < lVar22);
        }
        if (lVar22 < (long)uVar11) {
          lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
          pfVar13 = param_4 + uVar1 + ((long)uVar12 >> 2) * 4;
          pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
          do {
            *pfVar14 = (*pfVar13 - fVar24) * (*pfVar13 - fVar24);
            lVar22 = lVar22 + -1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
          } while (lVar22 != 0);
        }
      }
      else {
        if (iVar20 != 7) goto LAB_109c31c04;
        if (0 < iVar23) {
          do {
            *param_6 = (float)(int)(*param_4 / fVar24);
            uVar11 = uVar11 - 1;
            param_6 = param_6 + 1;
            param_4 = param_4 + 1;
          } while (uVar11 != 0);
        }
      }
    }
    else {
      fVar24 = *param_4;
      if (iVar20 < 4) {
        if (iVar20 < 2) {
          if (iVar20 == 0) {
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_5;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = fVar24 * *pfVar14;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_5 + uVar1;
              uVar19 = uVar1;
              pfVar14 = param_6 + uVar1;
              do {
                uVar8 = *(undefined8 *)pfVar13;
                *(ulong *)(pfVar14 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar24,
                              (float)*(undefined8 *)(pfVar13 + 2) * fVar24);
                *(ulong *)pfVar14 =
                     CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar24,(float)uVar8 * fVar24);
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
              pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
              do {
                *pfVar14 = fVar24 * *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (lVar22 != 0);
            }
          }
          else {
            if (iVar20 != 1) goto LAB_109c31c04;
            uVar12 = (ulong)-(uVar21 >> 2) & 3;
            if ((long)uVar11 <= (long)uVar12) {
              uVar12 = uVar11;
            }
            uVar1 = uVar11;
            if (((ulong)param_6 & 3) == 0) {
              uVar1 = uVar12;
            }
            uVar2 = uVar11 - uVar1;
            uVar12 = uVar2 + 3;
            if ((long)uVar1 <= (long)uVar11) {
              uVar12 = uVar2;
            }
            pfVar13 = param_6;
            pfVar14 = param_5;
            uVar19 = uVar1;
            if (0 < (long)uVar1) {
              do {
                *pfVar13 = fVar24 + *pfVar14;
                uVar19 = uVar19 - 1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (uVar19 != 0);
            }
            lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
            if (3 < (long)uVar2) {
              pfVar13 = param_5 + uVar1;
              uVar19 = uVar1;
              pfVar14 = param_6 + uVar1;
              do {
                fVar25 = *pfVar13;
                fVar26 = pfVar13[1];
                fVar27 = pfVar13[3];
                pfVar14[2] = fVar24 + pfVar13[2];
                pfVar14[3] = fVar24 + fVar27;
                *pfVar14 = fVar24 + fVar25;
                pfVar14[1] = fVar24 + fVar26;
                uVar19 = uVar19 + 4;
                pfVar13 = pfVar13 + 4;
                pfVar14 = pfVar14 + 4;
              } while ((long)uVar19 < lVar22);
            }
            if (lVar22 < (long)uVar11) {
              lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
              pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
              pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
              do {
                *pfVar14 = fVar24 + *pfVar13;
                lVar22 = lVar22 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (lVar22 != 0);
            }
          }
        }
        else if (iVar20 == 2) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = fVar24 - *pfVar14;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_5 + uVar1;
            uVar19 = uVar1;
            pfVar14 = param_6 + uVar1;
            do {
              fVar25 = *pfVar13;
              fVar26 = pfVar13[1];
              fVar27 = pfVar13[3];
              pfVar14[2] = fVar24 - pfVar13[2];
              pfVar14[3] = fVar24 - fVar27;
              *pfVar14 = fVar24 - fVar25;
              pfVar14[1] = fVar24 - fVar26;
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              *pfVar14 = fVar24 - *pfVar13;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 3) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              *pfVar13 = fVar24 / *pfVar14;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pfVar13 = param_5 + uVar1;
            uVar19 = uVar1;
            pfVar14 = param_6 + uVar1;
            do {
              fVar25 = *pfVar13;
              fVar26 = pfVar13[1];
              fVar27 = pfVar13[3];
              pfVar14[2] = fVar24 / pfVar13[2];
              pfVar14[3] = fVar24 / fVar27;
              *pfVar14 = fVar24 / fVar25;
              pfVar14[1] = fVar24 / fVar26;
              uVar19 = uVar19 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              *pfVar14 = fVar24 / *pfVar13;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 < 6) {
        if (iVar20 == 4) {
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar25 = fVar24;
              if (fVar24 <= *pfVar14) {
                fVar25 = *pfVar14;
              }
              *pfVar13 = fVar25;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar18 = (undefined1 (*) [16])(param_5 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar4._4_4_ = fVar24;
              auVar4._0_4_ = fVar24;
              auVar4._8_4_ = fVar24;
              auVar4._12_4_ = fVar24;
              auVar28 = NEON_fmax(*pauVar18,auVar4,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              fVar25 = fVar24;
              if (fVar24 <= *pfVar13) {
                fVar25 = *pfVar13;
              }
              *pfVar14 = fVar25;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
        else {
          if (iVar20 != 5) goto LAB_109c31c04;
          uVar12 = (ulong)-(uVar21 >> 2) & 3;
          if ((long)uVar11 <= (long)uVar12) {
            uVar12 = uVar11;
          }
          uVar1 = uVar11;
          if (((ulong)param_6 & 3) == 0) {
            uVar1 = uVar12;
          }
          uVar2 = uVar11 - uVar1;
          uVar12 = uVar2 + 3;
          if ((long)uVar1 <= (long)uVar11) {
            uVar12 = uVar2;
          }
          pfVar13 = param_6;
          pfVar14 = param_5;
          uVar19 = uVar1;
          if (0 < (long)uVar1) {
            do {
              fVar25 = fVar24;
              if (*pfVar14 <= fVar24) {
                fVar25 = *pfVar14;
              }
              *pfVar13 = fVar25;
              uVar19 = uVar19 - 1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (uVar19 != 0);
          }
          lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
          if (3 < (long)uVar2) {
            pauVar18 = (undefined1 (*) [16])(param_5 + uVar1);
            uVar19 = uVar1;
            pfVar13 = param_6 + uVar1;
            do {
              auVar3._4_4_ = fVar24;
              auVar3._0_4_ = fVar24;
              auVar3._8_4_ = fVar24;
              auVar3._12_4_ = fVar24;
              auVar28 = NEON_fmin(*pauVar18,auVar3,4);
              *(long *)(pfVar13 + 2) = auVar28._8_8_;
              *(long *)pfVar13 = auVar28._0_8_;
              uVar19 = uVar19 + 4;
              pauVar18 = pauVar18 + 1;
              pfVar13 = pfVar13 + 4;
            } while ((long)uVar19 < lVar22);
          }
          if (lVar22 < (long)uVar11) {
            lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
            pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
            pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
            do {
              fVar25 = fVar24;
              if (*pfVar13 <= fVar24) {
                fVar25 = *pfVar13;
              }
              *pfVar14 = fVar25;
              lVar22 = lVar22 + -1;
              pfVar13 = pfVar13 + 1;
              pfVar14 = pfVar14 + 1;
            } while (lVar22 != 0);
          }
        }
      }
      else if (iVar20 == 6) {
        uVar12 = (ulong)-(uVar21 >> 2) & 3;
        if ((long)uVar11 <= (long)uVar12) {
          uVar12 = uVar11;
        }
        uVar1 = uVar11;
        if (((ulong)param_6 & 3) == 0) {
          uVar1 = uVar12;
        }
        uVar2 = uVar11 - uVar1;
        uVar12 = uVar2 + 3;
        if ((long)uVar1 <= (long)uVar11) {
          uVar12 = uVar2;
        }
        pfVar13 = param_6;
        pfVar14 = param_5;
        uVar19 = uVar1;
        if (0 < (long)uVar1) {
          do {
            *pfVar13 = (*pfVar14 - fVar24) * (*pfVar14 - fVar24);
            uVar19 = uVar19 - 1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
          } while (uVar19 != 0);
        }
        lVar22 = (uVar12 & 0xfffffffffffffffc) + uVar1;
        if (3 < (long)uVar2) {
          pfVar13 = param_5 + uVar1;
          uVar19 = uVar1;
          pfVar14 = param_6 + uVar1;
          do {
            fVar25 = *pfVar13;
            fVar26 = pfVar13[1];
            fVar27 = pfVar13[3];
            pfVar14[2] = (pfVar13[2] - fVar24) * (pfVar13[2] - fVar24);
            pfVar14[3] = (fVar27 - fVar24) * (fVar27 - fVar24);
            *pfVar14 = (fVar25 - fVar24) * (fVar25 - fVar24);
            pfVar14[1] = (fVar26 - fVar24) * (fVar26 - fVar24);
            uVar19 = uVar19 + 4;
            pfVar13 = pfVar13 + 4;
            pfVar14 = pfVar14 + 4;
          } while ((long)uVar19 < lVar22);
        }
        if (lVar22 < (long)uVar11) {
          lVar22 = uVar2 - (uVar12 & 0xfffffffffffffffc);
          pfVar13 = param_5 + uVar1 + ((long)uVar12 >> 2) * 4;
          pfVar14 = param_6 + uVar1 + ((long)uVar12 >> 2) * 4;
          do {
            *pfVar14 = (*pfVar13 - fVar24) * (*pfVar13 - fVar24);
            lVar22 = lVar22 + -1;
            pfVar13 = pfVar13 + 1;
            pfVar14 = pfVar14 + 1;
          } while (lVar22 != 0);
        }
      }
      else {
        if (iVar20 != 7) goto LAB_109c31c04;
        if (0 < iVar23) {
          do {
            *param_6 = (float)(int)(fVar24 / *param_5);
            uVar11 = uVar11 - 1;
            param_6 = param_6 + 1;
            param_5 = param_5 + 1;
          } while (uVar11 != 0);
        }
      }
    }
  }
  else if (0 < iVar23) {
    iVar23 = 0;
    do {
      piVar10 = param_1;
      FUN_109c30950(param_1,param_2,param_3 + 1,param_4,param_5,param_6,param_7);
      param_4 = param_4 + param_1[lVar22 + 6];
      param_5 = param_5 + param_1[lVar22 + 0xb];
      param_6 = param_6 + *(int *)(param_2 + lVar22 * 4);
      iVar23 = iVar23 + 1;
    } while (iVar23 < param_1[lVar22 + 1]);
  }
  return piVar10;
}



/* Entry: 109c31c10; end: 109c31d7b;  */

int FUN_109c31c10(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Entry: 109c31d7c; end: 109c31dc3;  */

void FUN_109c31d7c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_109c31dc4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109c31dc4; end: 109c31e43;  */

undefined8 * FUN_109c31dc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110b2bd90;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  func_0x000107c31940(param_1 + 7,&UNK_10f5a33f8);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  return param_1;
}



/* Entry: 109c31e44; end: 109c31f2b;  */

undefined8 * FUN_109c31e44(undefined8 *param_1)

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
  param_1[0x12] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2cba8;
  param_1[0x13] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a4581);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c31f2c; end: 109c31f8f;  */

undefined8 * FUN_109c31f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2cba8;
  FUN_10959b818(param_1 + 0x12);
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


